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

VEnv * _V60_V0vanity_V0compiler_V0hygienic_V0expand;

static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D1822 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "_V0vanity_V0core_V20" };
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D1821 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "_V0vanity_V0list_V20" };
static struct { VBlob sym; char bytes[27]; } _V10_Dstring_D1820 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 27 }, "_V0vanity_V0intrinsics_V20" };
static struct { VBlob sym; char bytes[33]; } _V10_Dstring_D1819 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 33 }, "_V0vanity_V0compiler_V0utils_V20" };
static struct { VBlob sym; char bytes[44]; } _V10_Dstring_D1818 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 44 }, "_V0vanity_V0compiler_V0hygienic_V0types_V20" };
static struct { VBlob sym; char bytes[52]; } _V10_Dstring_D1817 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 52 }, "_V0vanity_V0compiler_V0hygienic_V0global__forms_V20" };
static struct { VBlob sym; char bytes[43]; } _V10_Dstring_D1816 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 43 }, "_V0vanity_V0compiler_V0hygienic_V0eval_V20" };
VWEAK VWORD _V0generate__symbol;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V0generate__symbol = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "generate-symbol" };
VWEAK VWORD _V0make__parameter;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V0make__parameter = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "make-parameter" };
VWEAK VWORD _V0syntax__null_Q;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V0syntax__null_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "syntax-null\?" };
VWEAK VWORD _V0syntax__cons;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0syntax__cons = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "syntax-cons" };
VWEAK VWORD _V0syntax__caar;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0syntax__caar = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "syntax-caar" };
VWEAK VWORD _V0syntax__cdar;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0syntax__cdar = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "syntax-cdar" };
VWEAK VWORD _V0syntax__cdr;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V0syntax__cdr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "syntax-cdr" };
VWEAK VWORD _V0syntax__map;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V0syntax__map = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "syntax-map" };
VWEAK VWORD _V0syntax__cddr;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0syntax__cddr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "syntax-cddr" };
VWEAK VWORD _V0syntax__cadr;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0syntax__cadr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "syntax-cadr" };
VWEAK VWORD _V0syntax__car;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V0syntax__car = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "syntax-car" };
VWEAK VWORD _V0syntax__list;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0syntax__list = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "syntax-list" };
VWEAK VWORD _V0syntax__vector__map;VWEAK struct { VBlob sym; char bytes[18]; } _VW_V0syntax__vector__map = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 18 }, "syntax-vector-map" };
VWEAK VWORD _V0fold;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0fold = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "fold" };
VWEAK VWORD _V0lset_L_E;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0lset_L_E = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "lset<=" };
VWEAK VWORD _V0filter;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0filter = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "filter" };
VWEAK VWORD _V0lset_E;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0lset_E = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "lset=" };
VWEAK VWORD _V0global__forms;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V0global__forms = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "global-forms" };
VWEAK VWORD _V0global__form__env;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V0global__form__env = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "global-form-env" };
VWEAK VWORD _V0syntax__vector_Q;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V0syntax__vector_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "syntax-vector\?" };
VWEAK VWORD _V0syntax_Q;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0syntax_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "syntax\?" };
VWEAK VWORD _V0eval;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0eval = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "eval" };
VWEAK VWORD _V0lookup__intrinsic__name;VWEAK struct { VBlob sym; char bytes[22]; } _VW_V0lookup__intrinsic__name = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 22 }, "lookup-intrinsic-name" };
VWEAK VWORD _V0take__right;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V0take__right = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "take-right" };
VWEAK VWORD _V0drop__right;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V0drop__right = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "drop-right" };
VWEAK VWORD _V0memq;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0memq = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "memq" };
VWEAK VWORD _V0member;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0member = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "member" };
VWEAK VWORD _V0for__each;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0for__each = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "for-each" };
VWEAK VWORD _V0every_Q;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0every_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "every\?" };
VWEAK VWORD _V0cadar;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0cadar = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "cadar" };
VWEAK VWORD _V0reverse;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0reverse = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "reverse" };
VWEAK VWORD _V0get__syntax__scopes;VWEAK struct { VBlob sym; char bytes[18]; } _VW_V0get__syntax__scopes = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 18 }, "get-syntax-scopes" };
VWEAK VWORD _V0set__scope__bindings_B;VWEAK struct { VBlob sym; char bytes[20]; } _VW_V0set__scope__bindings_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 20 }, "set-scope-bindings!" };
VWEAK VWORD _V0get__scope__bindings;VWEAK struct { VBlob sym; char bytes[19]; } _VW_V0get__scope__bindings = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 19 }, "get-scope-bindings" };
VWEAK VWORD _V0sprintf;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0sprintf = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "sprintf" };
VWEAK VWORD _V0assq;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0assq = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "assq" };
VWEAK VWORD _V0with__exception__handler;VWEAK struct { VBlob sym; char bytes[23]; } _VW_V0with__exception__handler = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 23 }, "with-exception-handler" };
VWEAK VWORD _V0format;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0format = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "format" };
VWEAK VWORD _V0current__error__port;VWEAK struct { VBlob sym; char bytes[19]; } _VW_V0current__error__port = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 19 }, "current-error-port" };
VWEAK VWORD _V0values;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0values = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "values" };
VWEAK VWORD _V0flip__scope;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V0flip__scope = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "flip-scope" };
VWEAK VWORD _V0assoc;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0assoc = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "assoc" };
VWEAK VWORD _V0get__syntax__data;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V0get__syntax__data = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "get-syntax-data" };
VWEAK VWORD _V0syntax__caddr;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V0syntax__caddr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "syntax-caddr" };
VWEAK VWORD _V0make__scope;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V0make__scope = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "make-scope" };
VWEAK VWORD _V0global__identifier;VWEAK struct { VBlob sym; char bytes[18]; } _VW_V0global__identifier = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 18 }, "global-identifier" };
VWEAK VWORD _V0syntax__pair_Q;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V0syntax__pair_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "syntax-pair\?" };
VWEAK VWORD _V0append;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0append = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "append" };
VWEAK VWORD _V0compiler__error;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V0compiler__error = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "compiler-error" };
VWEAK VWORD _V0append__map;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V0append__map = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "append-map" };
VWEAK VWORD _V0identifier_Q;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0identifier_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "identifier\?" };
VWEAK VWORD _V0make__syntax;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0make__syntax = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "make-syntax" };
VWEAK VWORD _V0global__scope;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V0global__scope = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "global-scope" };
static struct { VBlob sym; char bytes[45]; } _V10_Dstring_D1815 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 45 }, "_V0vanity_V0compiler_V0hygienic_V0expand_V20" };
static VPair _V10_Dpair_D1814 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1813 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1812 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1811 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1810 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1809 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1808 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1807 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1806 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1805 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1804 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1803 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1802 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1801 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1800 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1799 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1798 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1797 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1796 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1795 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1794 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0export;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0export = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "export" };
VWEAK VWORD _V0variable;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0variable = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "variable" };
VWEAK VWORD _V0expand__syntax;VWEAK struct { VBlob sym; char bytes[14]; } _VW_V0expand__syntax = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 14 }, "expand-syntax" };
VWEAK VWORD _V10vcore_Dappend;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V10vcore_Dappend = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "##vcore.append" };
VWEAK VWORD _V10vcore_Dcons;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V10vcore_Dcons = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "##vcore.cons" };
VWEAK VWORD _V0equal_Q;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0equal_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "equal\?" };
VWEAK VWORD _V0eqv_Q;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0eqv_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "eqv\?" };
VWEAK VWORD _V0eq_Q;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0eq_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "eq\?" };
VWEAK VWORD _V40_V10vcore_D_G_E;
VWEAK VClosure _VW_V40_V10vcore_D_G_E = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VCmpGe, NULL };
VWEAK VWORD _V0_G_E;VWEAK struct { VBlob sym; char bytes[3]; } _VW_V0_G_E = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 3 }, ">=" };
VWEAK VWORD _V40_V10vcore_D_G;
VWEAK VClosure _VW_V40_V10vcore_D_G = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VCmpGt, NULL };
VWEAK VWORD _V0_G;VWEAK struct { VBlob sym; char bytes[2]; } _VW_V0_G = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 2 }, ">" };
VWEAK VWORD _V40_V10vcore_D_E;
VWEAK VClosure _VW_V40_V10vcore_D_E = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VCmpEq, NULL };
VWEAK VWORD _V40_V10vcore_D_L_E;
VWEAK VClosure _VW_V40_V10vcore_D_L_E = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VCmpLe, NULL };
VWEAK VWORD _V40_V10vcore_D_L;
VWEAK VClosure _VW_V40_V10vcore_D_L = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VCmpLt, NULL };
VWEAK VWORD _V0_L;VWEAK struct { VBlob sym; char bytes[2]; } _VW_V0_L = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 2 }, "<" };
VWEAK VWORD _V40_V10vcore_D_W;
VWEAK VClosure _VW_V40_V10vcore_D_W = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VDiv2, NULL };
VWEAK VWORD _V0_W;VWEAK struct { VBlob sym; char bytes[2]; } _VW_V0_W = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 2 }, "/" };
VWEAK VWORD _V40_V10vcore_D_S;
VWEAK VClosure _VW_V40_V10vcore_D_S = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VMul2, NULL };
VWEAK VWORD _V0_S;VWEAK struct { VBlob sym; char bytes[2]; } _VW_V0_S = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 2 }, "*" };
VWEAK VWORD _V40_V10vcore_D__;
VWEAK VClosure _VW_V40_V10vcore_D__ = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VSub2, NULL };
VWEAK VWORD _V40_V10vcore_D_P;
VWEAK VClosure _VW_V40_V10vcore_D_P = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VAdd2, NULL };
VWEAK VWORD _V0_P;VWEAK struct { VBlob sym; char bytes[2]; } _VW_V0_P = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 2 }, "+" };
VWEAK VWORD _V0map;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0map = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "map" };
VWEAK VWORD _V0cdr;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0cdr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "cdr" };
VWEAK VWORD _V0cddr;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0cddr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "cddr" };
VWEAK VWORD _V0cdar;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0cdar = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "cdar" };
VWEAK VWORD _V0cadr;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0cadr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "cadr" };
VWEAK VWORD _V0caar;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0caar = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "caar" };
VWEAK VWORD _V0car;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0car = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "car" };
VWEAK VWORD _V0cons;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0cons = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "cons" };
VWEAK VWORD _V0list;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0list = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "list" };
VWEAK VWORD _V0null_Q;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0null_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "null\?" };
VWEAK VWORD _V0syntax__object___Gdatum;VWEAK struct { VBlob sym; char bytes[21]; } _VW_V0syntax__object___Gdatum = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 21 }, "syntax-object->datum" };
VWEAK VWORD _V0datum___Gsyntax__object;VWEAK struct { VBlob sym; char bytes[21]; } _VW_V0datum___Gsyntax__object = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 21 }, "datum->syntax-object" };
static struct { VBlob sym; char bytes[13]; } _V10_Dstring_D1793 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 13 }, "ambiguous id" };
VWEAK VWORD _V40_V10vcore_Deq_Q;
VWEAK VClosure _VW_V40_V10vcore_Deq_Q = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VEq2, NULL };
VWEAK VWORD _V40_V10vcore_Dapply;
VWEAK VClosure _VW_V40_V10vcore_Dapply = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VApply2, NULL };
static struct { VBlob sym; char bytes[15]; } _V10_Dstring_D1792 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 15 }, "not in context" };
static struct { VBlob sym; char bytes[11]; } _V10_Dstring_D1791 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 11 }, "bad syntax" };
static struct { VBlob sym; char bytes[14]; } _V10_Dstring_D1790 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 14 }, "free variable" };
static struct { VBlob sym; char bytes[32]; } _V10_Dstring_D1789 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 32 }, "resolve: naked symbol in syntax" };
VWEAK VWORD _V10foreign_Dfunction;VWEAK struct { VBlob sym; char bytes[19]; } _VW_V10foreign_Dfunction = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 19 }, "##foreign.function" };
static VPair _V10_Dpair_D1788 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1787 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1786 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1785 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1784 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1783 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1782 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1781 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V10letrec;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V10letrec = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "##letrec" };
VWEAK VWORD _V10qualified__case__lambda;VWEAK struct { VBlob sym; char bytes[24]; } _VW_V10qualified__case__lambda = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 24 }, "##qualified-case-lambda" };
VWEAK VWORD _V10qualified__lambda;VWEAK struct { VBlob sym; char bytes[19]; } _VW_V10qualified__lambda = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 19 }, "##qualified-lambda" };
VWEAK VWORD _V10foreign__function;VWEAK struct { VBlob sym; char bytes[19]; } _VW_V10foreign__function = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 19 }, "##foreign-function" };
VWEAK VWORD _V0let;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0let = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "let" };
VWEAK VWORD _V0ignored;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0ignored = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "ignored" };
VWEAK VWORD _V10vcore_Dapply;VWEAK struct { VBlob sym; char bytes[14]; } _VW_V10vcore_Dapply = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 14 }, "##vcore.apply" };
VWEAK VWORD _V0transformer;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0transformer = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "transformer" };
VWEAK VWORD _V0error;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0error = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "error" };
static struct { VBlob sym; char bytes[37]; } _V10_Dstring_D1780 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 37 }, "incorrect number of args to macro ~A" };
VWEAK VWORD _V0__;VWEAK struct { VBlob sym; char bytes[2]; } _VW_V0__ = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 2 }, "-" };
VWEAK VWORD _V0length;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0length = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "length" };
VWEAK VWORD _V0form;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0form = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "form" };
VWEAK VWORD _V0_L_E;VWEAK struct { VBlob sym; char bytes[3]; } _VW_V0_L_E = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 3 }, "<=" };
VWEAK VWORD _V0_E;VWEAK struct { VBlob sym; char bytes[2]; } _VW_V0_E = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 2 }, "=" };
static struct { VBlob sym; char bytes[22]; } _V10_Dstring_D1779 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 22 }, "desugar-define-syntax" };
static struct { VBlob sym; char bytes[45]; } _V10_Dstring_D1778 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 45 }, "\033[1;31merror while compiling macro:\033[0m ~A~N" };
static struct { VBlob sym; char bytes[28]; } _V10_Dstring_D1777 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 28 }, "malformed exported variable" };
VWEAK VWORD _V0rename;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0rename = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "rename" };
static struct { VBlob sym; char bytes[44]; } _V10_Dstring_D1776 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 44 }, "\033[1;31merror while applying macro:\033[0m ~A~N" };
VWEAK VWORD _V10basic__intrinsic;VWEAK struct { VBlob sym; char bytes[18]; } _VW_V10basic__intrinsic = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 18 }, "##basic-intrinsic" };
VWEAK VWORD _V10intrinsic;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V10intrinsic = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "##intrinsic" };
VWEAK VWORD _V10vcore_Dsetter;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V10vcore_Dsetter = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "##vcore.setter" };
VWEAK VWORD _V0val;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0val = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "val" };
VWEAK VWORD _V10vcore_Dmutator;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V10vcore_Dmutator = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "##vcore.mutator" };
VWEAK VWORD _V0or;VWEAK struct { VBlob sym; char bytes[3]; } _VW_V0or = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 3 }, "or" };
VWEAK VWORD _V0and;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0and = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "and" };
VWEAK VWORD _V0if;VWEAK struct { VBlob sym; char bytes[3]; } _VW_V0if = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 3 }, "if" };
VWEAK VWORD _V0quote;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0quote = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "quote" };
VWEAK VWORD _V0syntax;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0syntax = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "syntax" };
VWEAK VWORD _V0let__syntax;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V0let__syntax = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "let-syntax" };
VWEAK VWORD _V0letrec;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0letrec = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "letrec" };
VWEAK VWORD _V0letrec_S;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0letrec_S = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "letrec*" };
VWEAK VWORD _V0case__lambda;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0case__lambda = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "case-lambda" };
VWEAK VWORD _V10vcore_Dpush__value;VWEAK struct { VBlob sym; char bytes[19]; } _VW_V10vcore_Dpush__value = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 19 }, "##vcore.push-value" };
VWEAK VWORD _V10vcore_Dpop__value;VWEAK struct { VBlob sym; char bytes[18]; } _VW_V10vcore_Dpop__value = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 18 }, "##vcore.pop-value" };
VWEAK VWORD _V10vcore_Ddeclare;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V10vcore_Ddeclare = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "##vcore.declare" };
VWEAK VWORD _V0import;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0import = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "import" };
VWEAK VWORD _V0define__syntax;VWEAK struct { VBlob sym; char bytes[14]; } _VW_V0define__syntax = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 14 }, "define-syntax" };
VWEAK VWORD _V0tmp;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0tmp = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "tmp" };
VWEAK VWORD _V10vcore_Dcall__with__values;VWEAK struct { VBlob sym; char bytes[25]; } _VW_V10vcore_Dcall__with__values = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 25 }, "##vcore.call-with-values" };
VWEAK VWORD _V0lambda;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0lambda = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "lambda" };
VWEAK VWORD _V0set_B;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0set_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "set!" };
VWEAK VWORD _V0define__values;VWEAK struct { VBlob sym; char bytes[14]; } _VW_V0define__values = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 14 }, "define-values" };
static struct { VBlob sym; char bytes[33]; } _V10_Dstring_D1775 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 33 }, "expand: ot a constant expression" };
VWEAK VWORD _V0define__constant;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V0define__constant = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "define-constant" };
VWEAK VWORD _V0define;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0define = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "define" };
VWEAK VWORD _V0begin;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0begin = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "begin" };
static struct { VBlob sym; char bytes[28]; } _V10_Dstring_D1774 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 28 }, "expand: stray () in program" };
VWEAK VWORD _V0dummy;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0dummy = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "dummy" };
VWEAK VWORD _V40VMultiImport;
VWEAK VClosure _VW_V40VMultiImport = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VMultiImport, NULL };
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0bound__identifier_E_Q, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0free__identifier_E_Q, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0literal__identifier_E_Q, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0add__binding_B, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0datum___Gsyntax__object, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__object___Gdatum, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0check__unambiguous, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0argmax, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0find__all__matching__bindings_V10_Dloop_D397, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0find__all__matching__bindings, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve__identifier, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0find__exact__binding_V10_Dloop_D386_V10_Dloop2_D388, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0find__exact__binding_V10_Dloop_D386, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0find__exact__binding, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__copy__list, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__apply_V10_Dloop_D380, _var0, _var1);
V_DECLARE_FUNC_MIN(_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__apply, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__append, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__length_V10_Dloop_D372, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__length, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0init__global__forms, _var0);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0alist__copy, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0fresh__toplevel__expand__env, _var0);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__identifier, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V10_Dresolve__formals_D360, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0introduced__identifier, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0eval__for__syntax__binding, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__let__syntax, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__undot__list, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0constant__expr_Q, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V10_Dloop_D329, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315, _var0, _var1, _var2, _var3);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dfinish_D305, _var0, _var1, _var2, _var3);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dfinish__constants_D304, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dintroduce_D303, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__lambda, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__app, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0primitive__letrec_Q_V10_Dadvanced__primitive__letrec_D279, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0primitive__letrec_Q, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V10_Dloop_D269, _var0, _var1, _var2, _var3);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V10_Dintroduce_D256, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0add__toplevel__binding_B, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__proper__list_Q, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__improper__length_V10_Dloop_D236, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__improper__length, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define__syntax, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0export__rename, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0apply__transformer, _var0, _var1, _var2, _var3);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form, _var0, _var1, _var2, _var3, _var4);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__impl, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V10_Dloop_D175, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__syntax, _var0, _var1);
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__syntax_V0k13(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__syntax_V0k13, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.map.30 7 0) (bruijn ##.%k.426 5 0) (bruijn ##.resolve.138 6 23) (bruijn ##.%x.427 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 3,
      VGetArg(statics, 5-1, 0),
      VGetArg(statics, 6-1, 23),
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__syntax_V0k12(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__syntax_V0k12, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler hygienic expand expand-toplevel) #t (bruijn ##.expand-toplevel.116 5 1) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__syntax_V0k13) (bruijn ##.%x.428 0 0) #f)
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0expand;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__syntax_V0k13, self))));
    VWORD _arg1 = 
      _var0;
    VWORD _arg2 = 
      VEncodeBool(false);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel, _V60_V0vanity_V0compiler_V0hygienic_V0expand)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__syntax_V0k11(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__syntax_V0k11, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler hygienic expand datum->syntax-object) #t (bruijn ##.datum->syntax-object.157 4 42) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__syntax_V0k12) (bruijn ##.%x.429 0 0) (bruijn ##.expr.163 3 1))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0expand;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__syntax_V0k12, self))));
    VWORD _arg1 = 
      _var0;
    VWORD _arg2 = 
      statics->up->up->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0datum___Gsyntax__object, _V60_V0vanity_V0compiler_V0hygienic_V0expand)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0datum___Gsyntax__object(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__syntax_V0k10(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__syntax_V0k10, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.make-syntax.33 4 3) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__syntax_V0k11) 'dummy (bruijn ##.%x.430 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[3]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__syntax_V0k11, self)))),
      _V0dummy,
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__syntax_V0k9(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__syntax_V0k9, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.list.31 3 1) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__syntax_V0k10) (bruijn ##.%x.431 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[1]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__syntax_V0k10, self)))),
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__syntax(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__syntax, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.global-scope.32 2 2) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__syntax_V0k9))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[2]), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__syntax_V0k9, self)))));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k16(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k16, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.list.31 5 1) (bruijn ##.%k.432 3 0) (bruijn ##.%x.434 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 1)), 2,
      statics->up->up->vars[0],
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k15(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k15, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler hygienic expand expand-identifier) #t (bruijn ##.expand-identifier.139 3 24) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k16) (bruijn ##.stx.164 2 1) (bruijn ##.%x.435 0 0))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0expand;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k16, self))));
    VWORD _arg1 = 
      statics->up->vars[1];
    VWORD _arg2 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__identifier, _V60_V0vanity_V0compiler_V0hygienic_V0expand)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__identifier(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0lambda3(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0lambda3, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // (##qualified-call (vanity compiler hygienic expand expand-toplevel) #t (bruijn ##.expand-toplevel.116 13 1) (bruijn ##.%k.441 0 0) (bruijn ##.x.20.168 0 1) (bruijn ##._.165 12 2))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0expand;
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      _var1;
    VWORD _arg2 = 
      VGetArg(statics, 12-1, 2);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel, _V60_V0vanity_V0compiler_V0hygienic_V0expand)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k23(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k23, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.append-map.35 13 5) (bruijn ##.%k.432 11 0) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0lambda3) (bruijn ##.%x.442 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 5)), 3,
      VGetArg(statics, 11-1, 0),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0lambda3, self)))),
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k25(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k25, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.list.31 15 1) (bruijn ##.%k.432 13 0) (bruijn ##.%x.444 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 1)), 2,
      VGetArg(statics, 13-1, 0),
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k24(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k24, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler hygienic expand expand-toplevel-define) #t (bruijn ##.expand-toplevel-define.125 13 10) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k25) (bruijn ##.%x.445 0 0))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0expand;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k25, self))));
    VWORD _arg1 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define, _V60_V0vanity_V0compiler_V0hygienic_V0expand)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k30(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k30, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.compiler-error.36 19 6) (bruijn ##.%k.449 1 0) (##string ##.string.1775) (bruijn ##.%x.450 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 19-1, 6)), 3,
      statics->vars[0],
      VEncodePointer(&_V10_Dstring_D1775.sym, VPOINTER_OTHER),
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k29(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k29, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.448 1 0) ((bruijn ##.%k.449 0 0) #void) (##qualified-call (vanity compiler hygienic expand syntax-object->datum) #t (bruijn ##.syntax-object->datum.156 17 41) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k30) (bruijn ##.stx.164 16 1)))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VVOID);
} else {
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0expand;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k30, self))));
    VWORD _arg1 = 
      VGetArg(statics, 16-1, 1);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__object___Gdatum, _V60_V0vanity_V0compiler_V0hygienic_V0expand)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__object___Gdatum(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k32(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k32, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.list.31 18 1) (bruijn ##.%k.432 16 0) (bruijn ##.%x.447 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 18-1, 1)), 2,
      VGetArg(statics, 16-1, 0),
      _var0);
}
static void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k31(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##qualified-call (vanity compiler hygienic expand expand-toplevel-define) #t (bruijn ##.expand-toplevel-define.125 16 10) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k32) (bruijn ##.def.169 2 0))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0expand;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k32, self))));
    VWORD _arg1 = 
      statics->up->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define, _V60_V0vanity_V0compiler_V0hygienic_V0expand)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k28(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k28, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k29) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k31))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k29, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k31, self)))));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k27(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k27, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler hygienic expand constant-expr?) #t (bruijn ##.constant-expr?.133 15 18) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k28) (bruijn ##.%x.451 0 0))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0expand;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k28, self))));
    VWORD _arg1 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0constant__expr_Q, _V60_V0vanity_V0compiler_V0hygienic_V0expand)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0constant__expr_Q(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k26(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k26, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.syntax-caddr.41 15 11) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k27) (bruijn ##.stx.164 13 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 11)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k27, self)))),
      VGetArg(statics, 13-1, 1));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V10_Dloop_D175_V0k46(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V10_Dloop_D175_V0k46, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%r.1410) ((##vcore.cons (bruijn ##.%x.1408 4 0) (bruijn ##.%x.478 1 0))) ((bruijn ##.%k.475 6 0) (bruijn ##.%r.1410 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->up->up->up->vars[0],
      statics->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 1,
      self->vars[0]);
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V10_Dloop_D175_V0k45(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V10_Dloop_D175_V0k45, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%x.1409) ((##vcore.cdr (bruijn ##.mangles.177 4 2))) (##qualified-call (vanity compiler hygienic expand expand-toplevel ##.loop.175) #f (bruijn ##.loop.175 5 0) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V10_Dloop_D175_V0k46) (bruijn ##.%x.479 1 0) (bruijn ##.%x.1409 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      statics->up->up->up->vars[2]);
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 5-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V10_Dloop_D175_V0k46, self))));
    VWORD _arg1 = 
      statics->vars[0];
    VWORD _arg2 = 
      self->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V10_Dloop_D175(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V10_Dloop_D175_V0k47(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V10_Dloop_D175_V0k47, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.481 0 0) ((bruijn ##.%k.475 2 0) '()) (basic-block 1 1 (##.%r.1411) ((##vcore.car (bruijn ##.mangles.177 3 2))) ((bruijn ##.%k.475 3 0) (bruijn ##.%r.1411 0 0))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VNULL);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->up->vars[2]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      self->vars[0]);
    }
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V10_Dloop_D175_V0k44(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V10_Dloop_D175_V0k44, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.476 0 0) (basic-block 1 1 (##.%x.1408) ((##vcore.car (bruijn ##.mangles.177 2 2))) ((bruijn ##.syntax-cdr.84 30 54) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V10_Dloop_D175_V0k45) (bruijn ##.formals.176 2 1))) ((bruijn ##.syntax-null?.88 29 58) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V10_Dloop_D175_V0k47) (bruijn ##.formals.176 1 1)))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->vars[2]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 30-1, 54)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V10_Dloop_D175_V0k45, self)))),
      statics->up->vars[1]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 29-1, 58)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V10_Dloop_D175_V0k47, self)))),
      statics->vars[1]);
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V10_Dloop_D175(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V10_Dloop_D175, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((bruijn ##.syntax-pair?.38 28 8) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V10_Dloop_D175_V0k44) (bruijn ##.formals.176 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 28-1, 8)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V10_Dloop_D175_V0k44, self)))),
      _var1);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k51(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k51, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%x.1419) ((##vcore.cons (bruijn ##.%x.455 13 0) (bruijn ##.%x.456 1 0))) (##qualified-call (vanity compiler hygienic expand expand-toplevel) #t (bruijn ##.expand-toplevel.116 32 1) (bruijn ##.%k.432 31 0) (bruijn ##.%x.1419 0 0) #f))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 13-1, 0),
      statics->vars[0]);
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0expand;
    VWORD _arg0 = 
      VGetArg(statics, 31-1, 0);
    VWORD _arg1 = 
      self->vars[0];
    VWORD _arg2 = 
      VEncodeBool(false);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel, _V60_V0vanity_V0compiler_V0hygienic_V0expand)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k50(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k50, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 7 7 (##.%x.1412 ##.%x.1413 ##.%x.1414 ##.%x.1415 ##.%x.1416 ##.%x.1417 ##.%x.1418) ((##vcore.cons '#void (bruijn ##.%x.469 1 0)) (##vcore.cons (bruijn ##.%x.467 3 0) (bruijn ##.%x.1412 0 0)) (##vcore.cons (bruijn ##.%x.465 5 0) (bruijn ##.%x.1413 0 1)) (##vcore.cons (bruijn ##.%x.1414 0 2) '()) (##vcore.cons (bruijn ##.%x.1407 6 2) (bruijn ##.%x.1415 0 3)) (##vcore.cons (bruijn ##.%x.460 9 0) (bruijn ##.%x.1416 0 4)) (##vcore.cons (bruijn ##.%x.1417 0 5) '())) ((bruijn ##.append.37 31 7) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k51) (bruijn ##.%x.457 10 0) (bruijn ##.%x.1418 0 6)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[7]; } container;
    self = &container.self;
    VInitEnv(self, 7, 7, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      VVOID,
      statics->vars[0]);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      statics->up->up->vars[0],
      self->vars[0]);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 5-1, 0),
      self->vars[1]);
    self->vars[3] = _VBasic_VCons2(runtime, NULL,
      self->vars[2],
      VNULL);
    self->vars[4] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 6-1, 2),
      self->vars[3]);
    self->vars[5] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 9-1, 0),
      self->vars[4]);
    self->vars[6] = _VBasic_VCons2(runtime, NULL,
      self->vars[5],
      VNULL);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 31-1, 7)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k51, self)))),
      VGetArg(statics, 10-1, 0),
      self->vars[6]);
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k49(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k49, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.append.37 29 7) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k50) (bruijn ##.%x.470 0 0) '())
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 29-1, 7)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k50, self)))),
      _var0,
      VNULL);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k52(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k52, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 3 3 (##.%x.1420 ##.%x.1421 ##.%r.1422) ((##vcore.cons (bruijn ##.mangle.179 2 2) '()) (##vcore.cons (bruijn ##.name.178 2 1) (bruijn ##.%x.1420 0 0)) (##vcore.cons (bruijn ##.%x.472 1 0) (bruijn ##.%x.1421 0 1))) ((bruijn ##.%k.471 2 0) (bruijn ##.%r.1422 0 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[2],
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[1],
      self->vars[0]);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      self->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      self->vars[2]);
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0lambda4(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0lambda4, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((bruijn ##.global-identifier.39 29 9) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k52) 'set!)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 29-1, 9)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k52, self)))),
      _V0set_B);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k48(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k48, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.map.30 28 0) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k49) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0lambda4) (bruijn ##.names.171 11 1) (bruijn ##.mangles.172 11 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 28-1, 0)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k49, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0lambda4, self)))),
      VGetArg(statics, 11-1, 1),
      VGetArg(statics, 11-1, 2));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k43(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k43, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (letrec 1 ((close "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V10_Dloop_D175")) (##qualified-call (vanity compiler hygienic expand expand-toplevel ##.loop.175) #f (bruijn ##.loop.175 0 0) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k48) (bruijn ##.formals.170 10 0) (bruijn ##.mangles.172 10 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V10_Dloop_D175, self))));
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k48, self))));
    VWORD _arg1 = 
      VGetArg(statics, 10-1, 0);
    VWORD _arg2 = 
      VGetArg(statics, 10-1, 2);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V10_Dloop_D175(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k42(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k42, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 3 3 (##.%x.1405 ##.%x.1406 ##.%x.1407) ((##vcore.cons (bruijn ##.%x.485 1 0) '()) (##vcore.cons '() (bruijn ##.%x.1405 0 0)) (##vcore.cons (bruijn ##.%x.482 2 0) (bruijn ##.%x.1406 0 1))) ((bruijn ##.global-identifier.39 25 9) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k43) 'lambda))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      VNULL,
      self->vars[0]);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[0],
      self->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 25-1, 9)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k43, self)))),
      _V0lambda);
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k41(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k41, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.syntax-caddr.41 23 11) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k42) (bruijn ##.stx.164 21 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 23-1, 11)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k42, self)))),
      VGetArg(statics, 21-1, 1));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k40(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k40, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.global-identifier.39 22 9) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k41) 'lambda)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 22-1, 9)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k41, self)))),
      _V0lambda);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k39(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k39, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.global-identifier.39 21 9) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k40) '##vcore.call-with-values)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 21-1, 9)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k40, self)))),
      _V10vcore_Dcall__with__values);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k53(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k53, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 3 3 (##.%x.1423 ##.%x.1424 ##.%r.1425) ((##vcore.cons '#void '()) (##vcore.cons (bruijn ##.name.174 2 1) (bruijn ##.%x.1423 0 0)) (##vcore.cons (bruijn ##.%x.487 1 0) (bruijn ##.%x.1424 0 1))) ((bruijn ##.%k.486 2 0) (bruijn ##.%r.1425 0 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      VVOID,
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[1],
      self->vars[0]);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      self->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      self->vars[2]);
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0lambda5(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0lambda5, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.global-identifier.39 21 9) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k53) 'define)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 21-1, 9)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k53, self)))),
      _V0define);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k38(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k38, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.map.30 20 0) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k39) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0lambda5) (bruijn ##.names.171 3 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 20-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k39, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0lambda5, self)))),
      statics->up->up->vars[1]);
}
static void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k37(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.global-identifier.39 19 9) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k38) 'begin)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 19-1, 9)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k38, self)))),
      _V0begin);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k36(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k36, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k37) (bruijn ##.mangles.172 2 2) (bruijn ##.%x.490 0 0))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k37, self)))),
      VEncodeInt(2l), VEncodeInt(2l),
      _var0
    );
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k56(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k56, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.make-syntax.33 22 3) (bruijn ##.%k.491 3 0) (bruijn ##.%x.492 2 0) (bruijn ##.%x.493 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 22-1, 3)), 3,
      statics->up->up->vars[0],
      statics->up->vars[0],
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k55(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k55, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.list.31 21 1) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k56) (bruijn ##.%x.494 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 21-1, 1)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k56, self)))),
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k54(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k54, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.global-scope.32 20 2) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k55))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 20-1, 2)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k55, self)))));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0lambda6(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0lambda6, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.generate-symbol.90 19 60) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k54) 'tmp)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 19-1, 60)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k54, self)))),
      _V0tmp);
}
static void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k35(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.map.30 18 0) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k36) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0lambda6) (bruijn ##.names.171 1 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 18-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k36, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0lambda6, self)))),
      statics->vars[1]);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k34(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k34, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k35) (bruijn ##.names.171 1 1) (bruijn ##.%x.495 0 0))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k35, self)))),
      VEncodeInt(1l), VEncodeInt(1l),
      _var0
    );
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k33(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k33, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (letrec 3 ((bruijn ##.%x.453 1 0) #f #f) (##qualified-call (vanity compiler hygienic expand syntax-undot-list) #t (bruijn ##.syntax-undot-list.134 16 19) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k34) (bruijn ##.formals.170 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = statics->vars[0];
    self->vars[1] = VEncodeBool(false);
    self->vars[2] = VEncodeBool(false);
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0expand;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k34, self))));
    VWORD _arg1 = 
      self->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__undot__list, _V60_V0vanity_V0compiler_V0hygienic_V0expand)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__undot__list(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
}
static void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k58(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.%k.432 15 0) '())
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 0)), 1,
      VNULL);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k57(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k57, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler hygienic expand expand-toplevel-define-syntax) #t (bruijn ##.expand-toplevel-define-syntax.121 16 6) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k58) (bruijn ##.%x.497 0 0))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0expand;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k58, self))));
    VWORD _arg1 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define__syntax, _V60_V0vanity_V0compiler_V0hygienic_V0expand)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define__syntax(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
static void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k74(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.%k.432 30 0) (bruijn ##.ret.29.188 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 30-1, 0)), 1,
      self->vars[0]);
}
static void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k73(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.parameter.21.180 13 0) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k74) '##vcore.pop-value (bruijn ##.keyval.22.181 11 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k74, self)))),
      _V10vcore_Dpop__value,
      VGetArg(statics, 11-1, 0));
}
static void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k72(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.global-scope.32 32 2) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k73) '##vcore.pop-value (bruijn ##.keyval.25.184 9 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 32-1, 2)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k73, self)))),
      _V10vcore_Dpop__value,
      VGetArg(statics, 9-1, 0));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k71(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k71, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.parameter.27.186 8 0) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k72) '##vcore.pop-value (bruijn ##.keyval.28.187 7 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k72, self)))),
      _V10vcore_Dpop__value,
      VGetArg(statics, 7-1, 0));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k70(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k70, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.list.31 31 1) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k71) (bruijn ##.%x.500 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 31-1, 1)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k71, self)))),
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k69(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k69, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.list.31 30 1) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k70) (bruijn ##.%x.501 4 0) (bruijn ##.%x.502 3 0) (bruijn ##.%x.503 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 30-1, 1)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k70, self)))),
      statics->up->up->up->vars[0],
      statics->up->up->vars[0],
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k68(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k68, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler hygienic expand expand-impl) #t (bruijn ##.expand-impl.117 28 2) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k69) (bruijn ##.%x.504 1 0) (bruijn ##.%x.505 0 0))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0expand;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k69, self))));
    VWORD _arg1 = 
      statics->vars[0];
    VWORD _arg2 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__impl, _V60_V0vanity_V0compiler_V0hygienic_V0expand)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__impl(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k67(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k67, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.toplevel-expand-env.141 27 26) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k68))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 27-1, 26)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k68, self)))));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k66(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k66, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.syntax-caddr.41 27 11) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k67) (bruijn ##.stx.164 25 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 27-1, 11)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k67, self)))),
      VGetArg(statics, 25-1, 1));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k65(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k65, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.syntax-cadr.79 26 49) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k66) (bruijn ##.stx.164 24 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 26-1, 49)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k66, self)))),
      VGetArg(statics, 24-1, 1));
}
static void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k64(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.syntax-car.78 25 48) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k65) (bruijn ##.stx.164 23 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 25-1, 48)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k65, self)))),
      VGetArg(statics, 23-1, 1));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k63(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k63, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler hygienic expand init-global-forms) #t (bruijn ##.init-global-forms.144 24 29) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k64))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0expand;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k64, self))));
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0init__global__forms, _V60_V0vanity_V0compiler_V0hygienic_V0expand)}, 1, _arg0);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0init__global__forms(runtime, _closure_env, 1, _arg0);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0lambda8(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.parameter.27.186 0 0) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k63) '##vcore.push-value #f)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k63, self)))),
      _V10vcore_Dpush__value,
      VEncodeBool(false));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k62(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k62, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0lambda8) (bruijn ##.free-vars-allowed.159 22 44))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0lambda8, self)), 1,
      VGetArg(statics, 22-1, 44));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k61(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k61, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.global-scope.32 22 2) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k62) '##vcore.push-value (bruijn ##.%x.506 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 22-1, 2)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k62, self)))),
      _V10vcore_Dpush__value,
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k60(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k60, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.make-scope.40 21 10) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k61))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 21-1, 10)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k61, self)))));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k59(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k59, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.parameter.21.180 1 0) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k60) '##vcore.push-value (bruijn ##.%x.507 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k60, self)))),
      _V10vcore_Dpush__value,
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0lambda7(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler hygienic expand fresh-toplevel-expand-env) #t (bruijn ##.fresh-toplevel-expand-env.142 18 27) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k59))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0expand;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k59, self))));
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0fresh__toplevel__expand__env, _V60_V0vanity_V0compiler_V0hygienic_V0expand)}, 1, _arg0);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0fresh__toplevel__expand__env(runtime, _closure_env, 1, _arg0);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k76(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k76, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.list.31 21 1) (bruijn ##.%k.508 2 0) (bruijn ##.%x.509 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 21-1, 1)), 2,
      statics->up->vars[0],
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k77(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k77, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.189 3 1) (bruijn ##.%k.510 1 0) (bruijn ##.%x.511 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[1]), 2,
      statics->vars[0],
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0lambda10(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0lambda10, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (##qualified-call (vanity compiler hygienic expand expand-toplevel) #t (bruijn ##.expand-toplevel.116 20 1) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k77) (bruijn ##.x.190 0 1) (bruijn ##.y.191 0 2))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0expand;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k77, self))));
    VWORD _arg1 = 
      _var1;
    VWORD _arg2 = 
      _var2;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel, _V60_V0vanity_V0compiler_V0hygienic_V0expand)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k75(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k75, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler hygienic expand expand-id-application-form) #t (bruijn ##.expand-id-application-form.118 19 3) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k76) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0lambda10) (bruijn ##.stx.164 18 1) (bruijn ##.binding.166 9 0) (bruijn ##.%x.512 0 0))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0expand;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k76, self))));
    VWORD _arg1 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0lambda10, self))));
    VWORD _arg2 = 
      VGetArg(statics, 18-1, 1);
    VWORD _arg3 = 
      VGetArg(statics, 9-1, 0);
    VWORD _arg4 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form, _V60_V0vanity_V0compiler_V0hygienic_V0expand)}, 5, _arg0, _arg1, _arg2, _arg3, _arg4);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form(runtime, _closure_env, 5, _arg0, _arg1, _arg2, _arg3, _arg4);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0lambda9(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0lambda9, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.toplevel-expand-env.141 18 26) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k75))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 18-1, 26)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k75, self)))));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k22(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k22, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (letrec 1 ((bruijn ##.%x.439 1 0)) (basic-block 1 1 (##.%p.1401) ((##vcore.eq? (bruijn ##.binding.166 1 0) 'begin)) (if (bruijn ##.%p.1401 0 0) ((bruijn ##.syntax-cdr.84 12 54) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k23) (bruijn ##.stx.164 10 1)) (basic-block 1 1 (##.%p.1402) ((##vcore.eq? (bruijn ##.binding.166 2 0) 'define)) (if (bruijn ##.%p.1402 0 0) (##qualified-call (vanity compiler hygienic expand desugar-define) #t (bruijn ##.desugar-define.127 12 12) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k24) (bruijn ##.stx.164 11 1)) (basic-block 1 1 (##.%p.1403) ((##vcore.eq? (bruijn ##.binding.166 3 0) 'define-constant)) (if (bruijn ##.%p.1403 0 0) (##qualified-call (vanity compiler hygienic expand desugar-define) #t (bruijn ##.desugar-define.127 13 12) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k26) (bruijn ##.stx.164 12 1)) (basic-block 1 1 (##.%p.1404) ((##vcore.eq? (bruijn ##.binding.166 4 0) 'define-values)) (if (bruijn ##.%p.1404 0 0) ((bruijn ##.syntax-cadr.79 15 49) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k33) (bruijn ##.stx.164 13 1)) (basic-block 1 1 (##.%p.1426) ((##vcore.eq? (bruijn ##.binding.166 5 0) 'define-syntax)) (if (bruijn ##.%p.1426 0 0) (##qualified-call (vanity compiler hygienic expand desugar-define-syntax) #t (bruijn ##.desugar-define-syntax.122 15 7) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k57) (bruijn ##.stx.164 14 1)) (basic-block 1 1 (##.%p.1427) ((##vcore.eq? (bruijn ##.binding.166 6 0) 'import)) (if (bruijn ##.%p.1427 0 0) ((bruijn ##.list.31 17 1) (bruijn ##.%k.432 15 0) (bruijn ##.stx.164 15 1)) (basic-block 1 1 (##.%p.1428) ((##vcore.eq? (bruijn ##.binding.166 7 0) '##vcore.declare)) (if (bruijn ##.%p.1428 0 0) ((close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0lambda7) (bruijn ##.toplevel-expand-env.141 17 26)) (##vcore.call/cc (bruijn ##.%k.432 16 0) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0lambda9)))))))))))))))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = statics->vars[0];
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      statics->vars[0],
      _V0begin);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 54)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k23, self)))),
      VGetArg(statics, 10-1, 1));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      statics->up->vars[0],
      _V0define);
if(VDecodeBool(
self->vars[0])) {
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0expand;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k24, self))));
    VWORD _arg1 = 
      VGetArg(statics, 11-1, 1);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define, _V60_V0vanity_V0compiler_V0hygienic_V0expand)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      statics->up->up->vars[0],
      _V0define__constant);
if(VDecodeBool(
self->vars[0])) {
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0expand;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k26, self))));
    VWORD _arg1 = 
      VGetArg(statics, 12-1, 1);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define, _V60_V0vanity_V0compiler_V0hygienic_V0expand)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      statics->up->up->up->vars[0],
      _V0define__values);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 49)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k33, self)))),
      VGetArg(statics, 13-1, 1));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 5-1, 0),
      _V0define__syntax);
if(VDecodeBool(
self->vars[0])) {
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0expand;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k57, self))));
    VWORD _arg1 = 
      VGetArg(statics, 14-1, 1);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax, _V60_V0vanity_V0compiler_V0hygienic_V0expand)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 6-1, 0),
      _V0import);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 17-1, 1)), 2,
      VGetArg(statics, 15-1, 0),
      VGetArg(statics, 15-1, 1));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 7-1, 0),
      _V10vcore_Ddeclare);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0lambda7, self)), 1,
      VGetArg(statics, 17-1, 26));
} else {
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      VGetArg(statics, 16-1, 0),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0lambda9, self)))));
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
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k21(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k21, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler hygienic expand resolve-identifier) #t (bruijn ##.resolve-identifier.152 8 37) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k22) (bruijn ##.%x.513 0 0))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0expand;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k22, self))));
    VWORD _arg1 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve__identifier, _V60_V0vanity_V0compiler_V0hygienic_V0expand)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve__identifier(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k79(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k79, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.list.31 10 1) (bruijn ##.%k.432 8 0) (bruijn ##.%x.514 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 1)), 2,
      VGetArg(statics, 8-1, 0),
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k78(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k78, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler hygienic expand expand-app) #t (bruijn ##.expand-app.130 8 15) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k79) (bruijn ##.stx.164 7 1) (bruijn ##.%x.515 0 0))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0expand;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k79, self))));
    VWORD _arg1 = 
      VGetArg(statics, 7-1, 1);
    VWORD _arg2 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__app, _V60_V0vanity_V0compiler_V0hygienic_V0expand)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__app(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k20(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k20, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.438 0 0) ((bruijn ##.syntax-car.78 8 48) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k21) (bruijn ##.stx.164 6 1)) ((bruijn ##.toplevel-expand-env.141 7 26) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k78)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 48)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k21, self)))),
      VGetArg(statics, 6-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 26)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k78, self)))));
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k19(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k19, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.identifier?.34 7 4) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k20) (bruijn ##.%x.516 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 4)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k20, self)))),
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k18(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k18, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%p.1400) ((##vcore.not (bruijn ##.%x.517 1 0))) (if (bruijn ##.%p.1400 0 0) ((bruijn ##.list.31 6 1) (bruijn ##.%k.432 4 0) (bruijn ##.stx.164 4 1)) ((bruijn ##.syntax-car.78 6 48) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k19) (bruijn ##.stx.164 4 1))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VNot2(runtime, NULL,
      statics->vars[0]);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 1)), 2,
      statics->up->up->up->vars[0],
      statics->up->up->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 48)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k19, self)))),
      statics->up->up->up->vars[1]);
}
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k17(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k17, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.436 0 0) ((bruijn ##.error.82 4 52) (bruijn ##.%k.432 2 0) (##string ##.string.1774)) ((bruijn ##.syntax-pair?.38 4 8) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k18) (bruijn ##.stx.164 2 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[52]), 2,
      statics->up->vars[0],
      VEncodePointer(&_V10_Dstring_D1774.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[8]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k18, self)))),
      statics->up->vars[1]);
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k14(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k14, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.433 0 0) ((bruijn ##.toplevel-expand-env.141 2 26) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k15)) ((bruijn ##.syntax-null?.88 3 58) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k17) (bruijn ##.stx.164 1 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[26]), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k15, self)))));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[58]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k17, self)))),
      statics->vars[1]);
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((bruijn ##.identifier?.34 2 4) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k14) (bruijn ##.stx.164 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[4]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel_V0k14, self)))),
      _var1);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__impl_V0k86(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__impl_V0k86, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (letrec 1 ((bruijn ##.%x.523 1 0)) (##qualified-call (vanity compiler hygienic expand expand-id-application-form) #t (bruijn ##.expand-id-application-form.118 10 3) (bruijn ##.%k.518 9 0) (bruijn ##.expand-impl.117 10 2) (bruijn ##.stx.192 9 1) (bruijn ##.binding.194 0 0) (bruijn ##.env.193 9 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = statics->vars[0];
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0expand;
    VWORD _arg0 = 
      VGetArg(statics, 9-1, 0);
    VWORD _arg1 = 
      VGetArg(statics, 10-1, 2);
    VWORD _arg2 = 
      VGetArg(statics, 9-1, 1);
    VWORD _arg3 = 
      self->vars[0];
    VWORD _arg4 = 
      VGetArg(statics, 9-1, 2);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form, _V60_V0vanity_V0compiler_V0hygienic_V0expand)}, 5, _arg0, _arg1, _arg2, _arg3, _arg4);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form(runtime, _closure_env, 5, _arg0, _arg1, _arg2, _arg3, _arg4);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__impl_V0k85(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__impl_V0k85, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler hygienic expand resolve-identifier) #t (bruijn ##.resolve-identifier.152 8 37) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__impl_V0k86) (bruijn ##.%x.524 0 0))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0expand;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__impl_V0k86, self))));
    VWORD _arg1 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve__identifier, _V60_V0vanity_V0compiler_V0hygienic_V0expand)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve__identifier(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__impl_V0k84(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__impl_V0k84, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.522 0 0) ((bruijn ##.syntax-car.78 8 48) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__impl_V0k85) (bruijn ##.stx.192 6 1)) (##qualified-call (vanity compiler hygienic expand expand-app) #t (bruijn ##.expand-app.130 7 15) (bruijn ##.%k.518 6 0) (bruijn ##.stx.192 6 1) (bruijn ##.env.193 6 2)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 48)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__impl_V0k85, self)))),
      VGetArg(statics, 6-1, 1));
} else {
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0expand;
    VWORD _arg0 = 
      VGetArg(statics, 6-1, 0);
    VWORD _arg1 = 
      VGetArg(statics, 6-1, 1);
    VWORD _arg2 = 
      VGetArg(statics, 6-1, 2);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__app, _V60_V0vanity_V0compiler_V0hygienic_V0expand)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__app(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__impl_V0k83(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__impl_V0k83, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.identifier?.34 7 4) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__impl_V0k84) (bruijn ##.%x.525 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 4)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__impl_V0k84, self)))),
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__impl_V0k82(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__impl_V0k82, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%p.1429) ((##vcore.not (bruijn ##.%x.526 1 0))) (if (bruijn ##.%p.1429 0 0) ((bruijn ##.%k.518 4 0) (bruijn ##.stx.192 4 1)) ((bruijn ##.syntax-car.78 6 48) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__impl_V0k83) (bruijn ##.stx.192 4 1))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VNot2(runtime, NULL,
      statics->vars[0]);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      statics->up->up->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 48)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__impl_V0k83, self)))),
      statics->up->up->up->vars[1]);
}
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__impl_V0k81(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__impl_V0k81, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.520 0 0) ((bruijn ##.error.82 4 52) (bruijn ##.%k.518 2 0) (##string ##.string.1774)) ((bruijn ##.syntax-pair?.38 4 8) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__impl_V0k82) (bruijn ##.stx.192 2 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[52]), 2,
      statics->up->vars[0],
      VEncodePointer(&_V10_Dstring_D1774.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[8]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__impl_V0k82, self)))),
      statics->up->vars[1]);
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__impl_V0k80(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__impl_V0k80, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.519 0 0) (##qualified-call (vanity compiler hygienic expand expand-identifier) #t (bruijn ##.expand-identifier.139 2 24) (bruijn ##.%k.518 1 0) (bruijn ##.stx.192 1 1) (bruijn ##.env.193 1 2)) ((bruijn ##.syntax-null?.88 3 58) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__impl_V0k81) (bruijn ##.stx.192 1 1)))
if(VDecodeBool(
_var0)) {
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0expand;
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      statics->vars[1];
    VWORD _arg2 = 
      statics->vars[2];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__identifier, _V60_V0vanity_V0compiler_V0hygienic_V0expand)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__identifier(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[58]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__impl_V0k81, self)))),
      statics->vars[1]);
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__impl(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__impl, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((bruijn ##.identifier?.34 2 4) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__impl_V0k80) (bruijn ##.stx.192 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[4]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__impl_V0k80, self)))),
      _var1);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k89(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k89, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%r.1431) ((##vcore.cons (bruijn ##.%x.529 3 0) (bruijn ##.%x.530 1 0))) ((bruijn ##.%k.527 5 0) (bruijn ##.%r.1431 0 0)))
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
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k88(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k88, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler hygienic expand expand-lambda) #t (bruijn ##.expand-lambda.131 4 16) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k89) (bruijn ##.%x.531 0 0) (bruijn ##.env.198 3 4))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0expand;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k89, self))));
    VWORD _arg1 = 
      _var0;
    VWORD _arg2 = 
      statics->up->up->vars[4];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__lambda, _V60_V0vanity_V0compiler_V0hygienic_V0expand)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__lambda(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k87(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k87, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.syntax-cdr.84 4 54) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k88) (bruijn ##.stx.196 2 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[54]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k88, self)))),
      statics->up->vars[2]);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k92(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k92, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%r.1433) ((##vcore.cons (bruijn ##.%x.533 3 0) (bruijn ##.%x.534 1 0))) ((bruijn ##.%k.527 6 0) (bruijn ##.%r.1433 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->up->up->vars[0],
      statics->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 1,
      self->vars[0]);
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0lambda11(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0lambda11, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // (##qualified-call (vanity compiler hygienic expand expand-lambda) #t (bruijn ##.expand-lambda.131 6 16) (bruijn ##.%k.535 0 0) (bruijn ##.x.15.200 0 1) (bruijn ##.env.198 5 4))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0expand;
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      _var1;
    VWORD _arg2 = 
      VGetArg(statics, 5-1, 4);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__lambda, _V60_V0vanity_V0compiler_V0hygienic_V0expand)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__lambda(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k91(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k91, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.syntax-map.81 6 51) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k92) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0lambda11) (bruijn ##.%x.536 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 51)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k92, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0lambda11, self)))),
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k90(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k90, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.syntax-cdr.84 5 54) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k91) (bruijn ##.stx.196 3 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 54)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k91, self)))),
      statics->up->up->vars[2]);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k93(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k93, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1434 1 0) ((bruijn ##.%k.675 0 0) (bruijn ##.%p.1434 1 0)) (basic-block 1 1 (##.%r.1494) ((##vcore.eq? (bruijn ##.binding.197 5 3) 'letrec)) ((bruijn ##.%k.675 1 0) (bruijn ##.%r.1494 0 0))))
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
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 5-1, 3),
      _V0letrec);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      self->vars[0]);
    }
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k95(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k95, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1436 1 0) ((bruijn ##.%k.673 0 0) (bruijn ##.%p.1436 1 0)) (basic-block 1 1 (##.%r.1493) ((##vcore.eq? (bruijn ##.binding.197 8 3) 'quote)) ((bruijn ##.%k.673 1 0) (bruijn ##.%r.1493 0 0))))
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
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 8-1, 3),
      _V0quote);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      self->vars[0]);
    }
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k98(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k98, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler hygienic expand expand-impl) #t (bruijn ##.expand-impl.117 13 2) (bruijn ##.%k.527 12 0) (bruijn ##.%x.543 0 0) (bruijn ##.env.198 12 4))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0expand;
    VWORD _arg0 = 
      VGetArg(statics, 12-1, 0);
    VWORD _arg1 = 
      _var0;
    VWORD _arg2 = 
      VGetArg(statics, 12-1, 4);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__impl, _V60_V0vanity_V0compiler_V0hygienic_V0expand)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__impl(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k103(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k103, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.list.31 19 1) (bruijn ##.%k.527 17 0) (bruijn ##.%x.545 4 0) (bruijn ##.%x.546 2 0) (bruijn ##.%x.547 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 19-1, 1)), 4,
      VGetArg(statics, 17-1, 0),
      statics->up->up->up->vars[0],
      statics->up->vars[0],
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k102(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k102, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler hygienic expand expand-impl) #t (bruijn ##.expand-impl.117 17 2) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k103) (bruijn ##.%x.548 0 0) (bruijn ##.env.198 16 4))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0expand;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k103, self))));
    VWORD _arg1 = 
      _var0;
    VWORD _arg2 = 
      VGetArg(statics, 16-1, 4);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__impl, _V60_V0vanity_V0compiler_V0hygienic_V0expand)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__impl(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k101(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k101, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.syntax-caddr.41 17 11) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k102) (bruijn ##.stx.196 15 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 17-1, 11)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k102, self)))),
      VGetArg(statics, 15-1, 2));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k100(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k100, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler hygienic expand expand-impl) #t (bruijn ##.expand-impl.117 15 2) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k101) (bruijn ##.%x.549 0 0) (bruijn ##.env.198 14 4))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0expand;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k101, self))));
    VWORD _arg1 = 
      _var0;
    VWORD _arg2 = 
      VGetArg(statics, 14-1, 4);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__impl, _V60_V0vanity_V0compiler_V0hygienic_V0expand)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__impl(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k99(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k99, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.syntax-cadr.79 15 49) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k100) (bruijn ##.stx.196 13 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 49)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k100, self)))),
      VGetArg(statics, 13-1, 2));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k109(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k109, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.list.31 21 1) (bruijn ##.%k.527 19 0) (bruijn ##.%x.550 6 0) (bruijn ##.%x.551 4 0) (bruijn ##.%x.552 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 21-1, 1)), 4,
      VGetArg(statics, 19-1, 0),
      VGetArg(statics, 6-1, 0),
      statics->up->up->up->vars[0],
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k108(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k108, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%x.1441) ((##vcore.cons (bruijn ##.%x.554 2 0) (bruijn ##.%x.555 1 0))) (##qualified-call (vanity compiler hygienic expand expand-impl) #t (bruijn ##.expand-impl.117 19 2) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k109) (bruijn ##.%x.1441 0 0) (bruijn ##.env.198 18 4)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[0],
      statics->vars[0]);
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0expand;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k109, self))));
    VWORD _arg1 = 
      self->vars[0];
    VWORD _arg2 = 
      VGetArg(statics, 18-1, 4);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__impl, _V60_V0vanity_V0compiler_V0hygienic_V0expand)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__impl(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k107(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k107, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.syntax-cddr.80 18 50) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k108) (bruijn ##.stx.196 16 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 18-1, 50)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k108, self)))),
      VGetArg(statics, 16-1, 2));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k106(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k106, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.global-identifier.39 17 9) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k107) 'begin)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 17-1, 9)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k107, self)))),
      _V0begin);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k105(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k105, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler hygienic expand expand-impl) #t (bruijn ##.expand-impl.117 15 2) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k106) (bruijn ##.%x.556 0 0) (bruijn ##.env.198 14 4))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0expand;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k106, self))));
    VWORD _arg1 = 
      _var0;
    VWORD _arg2 = 
      VGetArg(statics, 14-1, 4);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__impl, _V60_V0vanity_V0compiler_V0hygienic_V0expand)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__impl(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k104(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k104, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.syntax-cadr.79 15 49) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k105) (bruijn ##.stx.196 13 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 49)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k105, self)))),
      VGetArg(statics, 13-1, 2));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k97(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k97, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%p.1438) ((##vcore.eq? (bruijn ##.x.16.201 1 0) '1)) (if (bruijn ##.%p.1438 0 0) ((bruijn ##.%k.527 10 0) #void) (basic-block 1 1 (##.%p.1439) ((##vcore.eq? (bruijn ##.x.16.201 2 0) '2)) (if (bruijn ##.%p.1439 0 0) ((bruijn ##.syntax-cadr.79 13 49) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k98) (bruijn ##.stx.196 11 2)) (basic-block 1 1 (##.%p.1440) ((##vcore.eq? (bruijn ##.x.16.201 3 0) '3)) (if (bruijn ##.%p.1440 0 0) ((bruijn ##.syntax-car.78 14 48) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k99) (bruijn ##.stx.196 12 2)) ((bruijn ##.syntax-car.78 14 48) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k104) (bruijn ##.stx.196 12 2))))))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      statics->vars[0],
      VEncodeInt(1l));
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 0)), 1,
      VVOID);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      statics->up->vars[0],
      VEncodeInt(2l));
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 49)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k98, self)))),
      VGetArg(statics, 11-1, 2));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      statics->up->up->vars[0],
      VEncodeInt(3l));
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 48)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k99, self)))),
      VGetArg(statics, 12-1, 2));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 48)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k104, self)))),
      VGetArg(statics, 12-1, 2));
}
    }
}
    }
}
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k119(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k119, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.list.31 22 1) (bruijn ##.%k.527 20 0) (bruijn ##.%x.559 8 0) (bruijn ##.%x.560 6 0) (bruijn ##.%x.561 3 0) (bruijn ##.%x.562 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 22-1, 1)), 5,
      VGetArg(statics, 20-1, 0),
      VGetArg(statics, 8-1, 0),
      VGetArg(statics, 6-1, 0),
      statics->up->up->vars[0],
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k118(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k118, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler hygienic expand expand-impl) #t (bruijn ##.expand-impl.117 20 2) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k119) (bruijn ##.%x.563 0 0) (bruijn ##.env.198 19 4))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0expand;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k119, self))));
    VWORD _arg1 = 
      _var0;
    VWORD _arg2 = 
      VGetArg(statics, 19-1, 4);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__impl, _V60_V0vanity_V0compiler_V0hygienic_V0expand)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__impl(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k117(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k117, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.syntax-cadr.79 20 49) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k118) (bruijn ##.%x.564 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 20-1, 49)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k118, self)))),
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k116(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k116, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.syntax-cddr.80 19 50) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k117) (bruijn ##.stx.196 17 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 19-1, 50)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k117, self)))),
      VGetArg(statics, 17-1, 2));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k115(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k115, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler hygienic expand expand-impl) #t (bruijn ##.expand-impl.117 17 2) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k116) (bruijn ##.%x.565 0 0) (bruijn ##.env.198 16 4))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0expand;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k116, self))));
    VWORD _arg1 = 
      _var0;
    VWORD _arg2 = 
      VGetArg(statics, 16-1, 4);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__impl, _V60_V0vanity_V0compiler_V0hygienic_V0expand)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__impl(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k114(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k114, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.syntax-car.78 17 48) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k115) (bruijn ##.%x.566 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 17-1, 48)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k115, self)))),
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k113(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k113, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.syntax-cddr.80 16 50) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k114) (bruijn ##.stx.196 14 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 50)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k114, self)))),
      VGetArg(statics, 14-1, 2));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k112(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k112, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler hygienic expand expand-impl) #t (bruijn ##.expand-impl.117 14 2) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k113) (bruijn ##.%x.567 0 0) (bruijn ##.env.198 13 4))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0expand;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k113, self))));
    VWORD _arg1 = 
      _var0;
    VWORD _arg2 = 
      VGetArg(statics, 13-1, 4);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__impl, _V60_V0vanity_V0compiler_V0hygienic_V0expand)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__impl(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k111(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k111, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.syntax-cadr.79 14 49) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k112) (bruijn ##.stx.196 12 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 49)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k112, self)))),
      VGetArg(statics, 12-1, 2));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k125(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k125, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.list.31 19 1) (bruijn ##.%k.527 17 0) (bruijn ##.%x.568 5 0) (bruijn ##.%x.569 3 0) (bruijn ##.%x.570 0 0) #void)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 19-1, 1)), 5,
      VGetArg(statics, 17-1, 0),
      VGetArg(statics, 5-1, 0),
      statics->up->up->vars[0],
      _var0,
      VVOID);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k124(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k124, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler hygienic expand expand-impl) #t (bruijn ##.expand-impl.117 17 2) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k125) (bruijn ##.%x.571 0 0) (bruijn ##.env.198 16 4))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0expand;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k125, self))));
    VWORD _arg1 = 
      _var0;
    VWORD _arg2 = 
      VGetArg(statics, 16-1, 4);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__impl, _V60_V0vanity_V0compiler_V0hygienic_V0expand)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__impl(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k123(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k123, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.syntax-car.78 17 48) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k124) (bruijn ##.%x.572 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 17-1, 48)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k124, self)))),
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k122(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k122, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.syntax-cddr.80 16 50) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k123) (bruijn ##.stx.196 14 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 50)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k123, self)))),
      VGetArg(statics, 14-1, 2));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k121(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k121, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler hygienic expand expand-impl) #t (bruijn ##.expand-impl.117 14 2) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k122) (bruijn ##.%x.573 0 0) (bruijn ##.env.198 13 4))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0expand;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k122, self))));
    VWORD _arg1 = 
      _var0;
    VWORD _arg2 = 
      VGetArg(statics, 13-1, 4);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__impl, _V60_V0vanity_V0compiler_V0hygienic_V0expand)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__impl(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k120(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k120, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.syntax-cadr.79 14 49) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k121) (bruijn ##.stx.196 12 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 49)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k121, self)))),
      VGetArg(statics, 12-1, 2));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k110(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k110, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%p.1443) ((##vcore.= (bruijn ##.%x.574 1 0) 4)) (if (bruijn ##.%p.1443 0 0) ((bruijn ##.syntax-car.78 13 48) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k111) (bruijn ##.stx.196 11 2)) ((bruijn ##.syntax-car.78 13 48) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k120) (bruijn ##.stx.196 11 2))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCmpEq(runtime, NULL,
      statics->vars[0],
      VEncodeInt(4l));
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 48)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k111, self)))),
      VGetArg(statics, 11-1, 2));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 48)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k120, self)))),
      VGetArg(statics, 11-1, 2));
}
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k127(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k127, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler hygienic expand expand-impl) #t (bruijn ##.expand-impl.117 15 2) (bruijn ##.%k.527 14 0) (bruijn ##.%x.578 0 0) (bruijn ##.env.198 14 4))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0expand;
    VWORD _arg0 = 
      VGetArg(statics, 14-1, 0);
    VWORD _arg1 = 
      _var0;
    VWORD _arg2 = 
      VGetArg(statics, 14-1, 4);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__impl, _V60_V0vanity_V0compiler_V0hygienic_V0expand)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__impl(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k132(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k132, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 4 4 (##.%x.1448 ##.%x.1449 ##.%x.1450 ##.%r.1451) ((##vcore.cons '#f '()) (##vcore.cons (bruijn ##.%x.584 1 0) (bruijn ##.%x.1448 0 0)) (##vcore.cons (bruijn ##.%x.582 3 0) (bruijn ##.%x.1449 0 1)) (##vcore.cons (bruijn ##.%x.580 5 0) (bruijn ##.%x.1450 0 2))) ((bruijn ##.%k.527 20 0) (bruijn ##.%r.1451 0 3)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[4]; } container;
    self = &container.self;
    VInitEnv(self, 4, 4, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      VEncodeBool(false),
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      self->vars[0]);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      statics->up->up->vars[0],
      self->vars[1]);
    self->vars[3] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 5-1, 0),
      self->vars[2]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 20-1, 0)), 1,
      self->vars[3]);
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k131(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k131, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler hygienic expand expand-impl) #t (bruijn ##.expand-impl.117 19 2) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k132) (bruijn ##.%x.586 0 0) (bruijn ##.env.198 18 4))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0expand;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k132, self))));
    VWORD _arg1 = 
      _var0;
    VWORD _arg2 = 
      VGetArg(statics, 18-1, 4);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__impl, _V60_V0vanity_V0compiler_V0hygienic_V0expand)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__impl(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k130(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k130, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.syntax-caddr.41 19 11) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k131) (bruijn ##.stx.196 17 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 19-1, 11)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k131, self)))),
      VGetArg(statics, 17-1, 2));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k129(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k129, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler hygienic expand expand-impl) #t (bruijn ##.expand-impl.117 17 2) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k130) (bruijn ##.%x.587 0 0) (bruijn ##.env.198 16 4))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0expand;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k130, self))));
    VWORD _arg1 = 
      _var0;
    VWORD _arg2 = 
      VGetArg(statics, 16-1, 4);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__impl, _V60_V0vanity_V0compiler_V0hygienic_V0expand)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__impl(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k128(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k128, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.syntax-cadr.79 17 49) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k129) (bruijn ##.stx.196 15 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 17-1, 49)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k129, self)))),
      VGetArg(statics, 15-1, 2));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k138(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k138, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 4 4 (##.%x.1453 ##.%x.1454 ##.%x.1455 ##.%r.1456) ((##vcore.cons '#f '()) (##vcore.cons (bruijn ##.%x.592 1 0) (bruijn ##.%x.1453 0 0)) (##vcore.cons (bruijn ##.%x.590 5 0) (bruijn ##.%x.1454 0 1)) (##vcore.cons (bruijn ##.%x.588 7 0) (bruijn ##.%x.1455 0 2))) ((bruijn ##.%k.527 22 0) (bruijn ##.%r.1456 0 3)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[4]; } container;
    self = &container.self;
    VInitEnv(self, 4, 4, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      VEncodeBool(false),
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      self->vars[0]);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 5-1, 0),
      self->vars[1]);
    self->vars[3] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 7-1, 0),
      self->vars[2]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 22-1, 0)), 1,
      self->vars[3]);
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k137(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k137, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%x.1452) ((##vcore.cons (bruijn ##.%x.595 2 0) (bruijn ##.%x.596 1 0))) (##qualified-call (vanity compiler hygienic expand expand-impl) #t (bruijn ##.expand-impl.117 21 2) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k138) (bruijn ##.%x.1452 0 0) (bruijn ##.env.198 20 4)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[0],
      statics->vars[0]);
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0expand;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k138, self))));
    VWORD _arg1 = 
      self->vars[0];
    VWORD _arg2 = 
      VGetArg(statics, 20-1, 4);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__impl, _V60_V0vanity_V0compiler_V0hygienic_V0expand)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__impl(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k136(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k136, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.syntax-cddr.80 20 50) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k137) (bruijn ##.stx.196 18 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 20-1, 50)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k137, self)))),
      VGetArg(statics, 18-1, 2));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k135(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k135, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.global-identifier.39 19 9) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k136) 'and)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 19-1, 9)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k136, self)))),
      _V0and);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k134(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k134, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler hygienic expand expand-impl) #t (bruijn ##.expand-impl.117 17 2) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k135) (bruijn ##.%x.597 0 0) (bruijn ##.env.198 16 4))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0expand;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k135, self))));
    VWORD _arg1 = 
      _var0;
    VWORD _arg2 = 
      VGetArg(statics, 16-1, 4);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__impl, _V60_V0vanity_V0compiler_V0hygienic_V0expand)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__impl(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k133(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k133, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.syntax-cadr.79 17 49) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k134) (bruijn ##.stx.196 15 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 17-1, 49)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k134, self)))),
      VGetArg(statics, 15-1, 2));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k126(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k126, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%p.1445) ((##vcore.eq? (bruijn ##.x.17.202 1 0) '1)) (if (bruijn ##.%p.1445 0 0) ((bruijn ##.%k.527 12 0) #t) (basic-block 1 1 (##.%p.1446) ((##vcore.eq? (bruijn ##.x.17.202 2 0) '2)) (if (bruijn ##.%p.1446 0 0) ((bruijn ##.syntax-cadr.79 15 49) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k127) (bruijn ##.stx.196 13 2)) (basic-block 1 1 (##.%p.1447) ((##vcore.eq? (bruijn ##.x.17.202 3 0) '3)) (if (bruijn ##.%p.1447 0 0) ((bruijn ##.global-identifier.39 16 9) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k128) 'if) ((bruijn ##.global-identifier.39 16 9) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k133) 'if)))))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      statics->vars[0],
      VEncodeInt(1l));
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 0)), 1,
      VEncodeBool(true));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      statics->up->vars[0],
      VEncodeInt(2l));
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 49)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k127, self)))),
      VGetArg(statics, 13-1, 2));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      statics->up->up->vars[0],
      VEncodeInt(3l));
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 9)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k128, self)))),
      _V0if);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 9)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k133, self)))),
      _V0if);
}
    }
}
    }
}
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k140(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k140, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler hygienic expand expand-impl) #t (bruijn ##.expand-impl.117 16 2) (bruijn ##.%k.527 15 0) (bruijn ##.%x.601 0 0) (bruijn ##.env.198 15 4))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0expand;
    VWORD _arg0 = 
      VGetArg(statics, 15-1, 0);
    VWORD _arg1 = 
      _var0;
    VWORD _arg2 = 
      VGetArg(statics, 15-1, 4);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__impl, _V60_V0vanity_V0compiler_V0hygienic_V0expand)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__impl(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k145(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k145, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.list.31 22 1) (bruijn ##.%k.527 20 0) (bruijn ##.%x.603 4 0) (bruijn ##.%x.604 2 0) (bruijn ##.%x.605 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 22-1, 1)), 4,
      VGetArg(statics, 20-1, 0),
      statics->up->up->up->vars[0],
      statics->up->vars[0],
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k144(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k144, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler hygienic expand expand-impl) #t (bruijn ##.expand-impl.117 20 2) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k145) (bruijn ##.%x.606 0 0) (bruijn ##.env.198 19 4))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0expand;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k145, self))));
    VWORD _arg1 = 
      _var0;
    VWORD _arg2 = 
      VGetArg(statics, 19-1, 4);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__impl, _V60_V0vanity_V0compiler_V0hygienic_V0expand)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__impl(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k143(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k143, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.syntax-caddr.41 20 11) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k144) (bruijn ##.stx.196 18 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 20-1, 11)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k144, self)))),
      VGetArg(statics, 18-1, 2));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k142(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k142, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler hygienic expand expand-impl) #t (bruijn ##.expand-impl.117 18 2) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k143) (bruijn ##.%x.607 0 0) (bruijn ##.env.198 17 4))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0expand;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k143, self))));
    VWORD _arg1 = 
      _var0;
    VWORD _arg2 = 
      VGetArg(statics, 17-1, 4);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__impl, _V60_V0vanity_V0compiler_V0hygienic_V0expand)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__impl(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k141(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k141, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.syntax-cadr.79 18 49) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k142) (bruijn ##.stx.196 16 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 18-1, 49)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k142, self)))),
      VGetArg(statics, 16-1, 2));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k151(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k151, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 3 3 (##.%x.1462 ##.%x.1463 ##.%r.1464) ((##vcore.cons (bruijn ##.%x.612 1 0) '()) (##vcore.cons (bruijn ##.%x.610 5 0) (bruijn ##.%x.1462 0 0)) (##vcore.cons (bruijn ##.%x.608 7 0) (bruijn ##.%x.1463 0 1))) ((bruijn ##.%k.527 23 0) (bruijn ##.%r.1464 0 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 5-1, 0),
      self->vars[0]);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 7-1, 0),
      self->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 23-1, 0)), 1,
      self->vars[2]);
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k150(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k150, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%x.1461) ((##vcore.cons (bruijn ##.%x.614 2 0) (bruijn ##.%x.615 1 0))) (##qualified-call (vanity compiler hygienic expand expand-impl) #t (bruijn ##.expand-impl.117 22 2) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k151) (bruijn ##.%x.1461 0 0) (bruijn ##.env.198 21 4)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[0],
      statics->vars[0]);
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0expand;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k151, self))));
    VWORD _arg1 = 
      self->vars[0];
    VWORD _arg2 = 
      VGetArg(statics, 21-1, 4);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__impl, _V60_V0vanity_V0compiler_V0hygienic_V0expand)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__impl(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k149(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k149, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.syntax-cddr.80 21 50) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k150) (bruijn ##.stx.196 19 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 21-1, 50)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k150, self)))),
      VGetArg(statics, 19-1, 2));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k148(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k148, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.global-identifier.39 20 9) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k149) 'or)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 20-1, 9)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k149, self)))),
      _V0or);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k147(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k147, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler hygienic expand expand-impl) #t (bruijn ##.expand-impl.117 18 2) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k148) (bruijn ##.%x.616 0 0) (bruijn ##.env.198 17 4))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0expand;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k148, self))));
    VWORD _arg1 = 
      _var0;
    VWORD _arg2 = 
      VGetArg(statics, 17-1, 4);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__impl, _V60_V0vanity_V0compiler_V0hygienic_V0expand)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__impl(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k146(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k146, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.syntax-cadr.79 18 49) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k147) (bruijn ##.stx.196 16 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 18-1, 49)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k147, self)))),
      VGetArg(statics, 16-1, 2));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k139(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k139, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%p.1458) ((##vcore.eq? (bruijn ##.x.18.203 1 0) '1)) (if (bruijn ##.%p.1458 0 0) ((bruijn ##.%k.527 13 0) #f) (basic-block 1 1 (##.%p.1459) ((##vcore.eq? (bruijn ##.x.18.203 2 0) '2)) (if (bruijn ##.%p.1459 0 0) ((bruijn ##.syntax-cadr.79 16 49) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k140) (bruijn ##.stx.196 14 2)) (basic-block 1 1 (##.%p.1460) ((##vcore.eq? (bruijn ##.x.18.203 3 0) '3)) (if (bruijn ##.%p.1460 0 0) ((bruijn ##.syntax-car.78 17 48) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k141) (bruijn ##.stx.196 15 2)) ((bruijn ##.global-identifier.39 17 9) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k146) 'or)))))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      statics->vars[0],
      VEncodeInt(1l));
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 0)), 1,
      VEncodeBool(false));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      statics->up->vars[0],
      VEncodeInt(2l));
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 49)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k140, self)))),
      VGetArg(statics, 14-1, 2));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      statics->up->up->vars[0],
      VEncodeInt(3l));
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 17-1, 48)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k141, self)))),
      VGetArg(statics, 15-1, 2));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 17-1, 9)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k146, self)))),
      _V0or);
}
    }
}
    }
}
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k158(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k158, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 3 3 (##.%x.1468 ##.%x.1469 ##.%r.1470) ((##vcore.cons (bruijn ##.%x.623 1 0) '()) (##vcore.cons (bruijn ##.place.204 7 0) (bruijn ##.%x.1468 0 0)) (##vcore.cons (bruijn ##.%x.620 5 0) (bruijn ##.%x.1469 0 1))) ((bruijn ##.%k.527 22 0) (bruijn ##.%r.1470 0 2)))
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
      VGetArg(statics, 5-1, 0),
      self->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 22-1, 0)), 1,
      self->vars[2]);
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k157(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k157, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%x.1467) ((##vcore.cons (bruijn ##.%x.625 2 0) (bruijn ##.%x.626 1 0))) (##qualified-call (vanity compiler hygienic expand expand-impl) #t (bruijn ##.expand-impl.117 21 2) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k158) (bruijn ##.%x.1467 0 0) (bruijn ##.env.198 20 4)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[0],
      statics->vars[0]);
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0expand;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k158, self))));
    VWORD _arg1 = 
      self->vars[0];
    VWORD _arg2 = 
      VGetArg(statics, 20-1, 4);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__impl, _V60_V0vanity_V0compiler_V0hygienic_V0expand)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__impl(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k156(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k156, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.syntax-cddr.80 20 50) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k157) (bruijn ##.stx.196 18 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 20-1, 50)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k157, self)))),
      VGetArg(statics, 18-1, 2));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k155(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k155, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.syntax-cadr.79 19 49) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k156) (bruijn ##.stx.196 17 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 19-1, 49)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k156, self)))),
      VGetArg(statics, 17-1, 2));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k167(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k167, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%x.1480) ((##vcore.cons (bruijn ##.%x.1472 9 1) (bruijn ##.%x.629 1 0))) (##qualified-call (vanity compiler hygienic expand expand-impl) #t (bruijn ##.expand-impl.117 30 2) (bruijn ##.%k.527 29 0) (bruijn ##.%x.1480 0 0) (bruijn ##.env.198 29 4)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 9-1, 1),
      statics->vars[0]);
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0expand;
    VWORD _arg0 = 
      VGetArg(statics, 29-1, 0);
    VWORD _arg1 = 
      self->vars[0];
    VWORD _arg2 = 
      VGetArg(statics, 29-1, 4);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__impl, _V60_V0vanity_V0compiler_V0hygienic_V0expand)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__impl(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k166(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k166, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 6 6 (##.%x.1474 ##.%x.1475 ##.%x.1476 ##.%x.1477 ##.%x.1478 ##.%x.1479) ((##vcore.cons (bruijn ##.val.205 10 0) (bruijn ##.%x.640 1 0)) (##vcore.cons (bruijn ##.%x.638 3 0) (bruijn ##.%x.1474 0 0)) (##vcore.cons (bruijn ##.%x.1475 0 1) '()) (##vcore.cons (bruijn ##.%x.1473 4 0) (bruijn ##.%x.1476 0 2)) (##vcore.cons (bruijn ##.%x.633 5 0) (bruijn ##.%x.1477 0 3)) (##vcore.cons (bruijn ##.%x.1478 0 4) '())) ((bruijn ##.append.37 29 7) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k167) (bruijn ##.%x.630 6 0) (bruijn ##.%x.1479 0 5)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[6]; } container;
    self = &container.self;
    VInitEnv(self, 6, 6, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 10-1, 0),
      statics->vars[0]);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      statics->up->up->vars[0],
      self->vars[0]);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      self->vars[1],
      VNULL);
    self->vars[3] = _VBasic_VCons2(runtime, NULL,
      statics->up->up->up->vars[0],
      self->vars[2]);
    self->vars[4] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 5-1, 0),
      self->vars[3]);
    self->vars[5] = _VBasic_VCons2(runtime, NULL,
      self->vars[4],
      VNULL);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 29-1, 7)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k167, self)))),
      VGetArg(statics, 6-1, 0),
      self->vars[5]);
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k165(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k165, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.syntax-cdr.84 27 54) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k166) (bruijn ##.%x.641 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 27-1, 54)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k166, self)))),
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k164(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k164, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.syntax-cddr.80 26 50) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k165) (bruijn ##.stx.196 24 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 26-1, 50)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k165, self)))),
      VGetArg(statics, 24-1, 2));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k163(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k163, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%x.1473) ((##vcore.cons (bruijn ##.val.205 6 0) '())) ((bruijn ##.syntax-cadr.79 25 49) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k164) (bruijn ##.stx.196 23 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 6-1, 0),
      VNULL);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 25-1, 49)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k164, self)))),
      VGetArg(statics, 23-1, 2));
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k162(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k162, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.global-identifier.39 23 9) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k163) 'lambda)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 23-1, 9)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k163, self)))),
      _V0lambda);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k161(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k161, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 2 2 (##.%x.1471 ##.%x.1472) ((##vcore.cons (bruijn ##.%x.644 1 0) '()) (##vcore.cons (bruijn ##.%x.642 2 0) (bruijn ##.%x.1471 0 0))) ((bruijn ##.syntax-cdr.84 22 54) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k162) (bruijn ##.place.204 5 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[0],
      self->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 22-1, 54)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k162, self)))),
      VGetArg(statics, 5-1, 0));
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k160(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k160, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.syntax-car.78 20 48) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k161) (bruijn ##.place.204 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 20-1, 48)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k161, self)))),
      statics->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k159(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k159, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.global-identifier.39 19 9) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k160) '##vcore.mutator)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 19-1, 9)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k160, self)))),
      _V10vcore_Dmutator);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k154(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k154, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.619 0 0) ((bruijn ##.global-identifier.39 18 9) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k155) 'set!) ((bruijn ##.generate-symbol.90 18 60) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k159) 'val))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 18-1, 9)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k155, self)))),
      _V0set_B);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 18-1, 60)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k159, self)))),
      _V0val);
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k153(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k153, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.identifier?.34 17 4) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k154) (bruijn ##.place.204 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 17-1, 4)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k154, self)))),
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k172(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k172, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 3 3 (##.%x.1481 ##.%x.1482 ##.%r.1483) ((##vcore.cons (bruijn ##.%x.649 1 0) '()) (##vcore.cons (bruijn ##.place.206 5 0) (bruijn ##.%x.1481 0 0)) (##vcore.cons (bruijn ##.%x.646 3 0) (bruijn ##.%x.1482 0 1))) ((bruijn ##.%k.527 20 0) (bruijn ##.%r.1483 0 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 5-1, 0),
      self->vars[0]);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      statics->up->up->vars[0],
      self->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 20-1, 0)), 1,
      self->vars[2]);
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k171(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k171, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler hygienic expand expand-impl) #t (bruijn ##.expand-impl.117 19 2) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k172) (bruijn ##.%x.650 0 0) (bruijn ##.env.198 18 4))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0expand;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k172, self))));
    VWORD _arg1 = 
      _var0;
    VWORD _arg2 = 
      VGetArg(statics, 18-1, 4);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__impl, _V60_V0vanity_V0compiler_V0hygienic_V0expand)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__impl(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k170(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k170, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.syntax-caddr.41 19 11) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k171) (bruijn ##.stx.196 17 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 19-1, 11)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k171, self)))),
      VGetArg(statics, 17-1, 2));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k177(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k177, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%x.1487) ((##vcore.cons (bruijn ##.%x.1485 5 1) (bruijn ##.%x.653 1 0))) (##qualified-call (vanity compiler hygienic expand expand-impl) #t (bruijn ##.expand-impl.117 25 2) (bruijn ##.%k.527 24 0) (bruijn ##.%x.1487 0 0) (bruijn ##.env.198 24 4)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 5-1, 1),
      statics->vars[0]);
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0expand;
    VWORD _arg0 = 
      VGetArg(statics, 24-1, 0);
    VWORD _arg1 = 
      self->vars[0];
    VWORD _arg2 = 
      VGetArg(statics, 24-1, 4);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__impl, _V60_V0vanity_V0compiler_V0hygienic_V0expand)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__impl(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k176(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k176, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%x.1486) ((##vcore.cons (bruijn ##.%x.656 1 0) '())) ((bruijn ##.append.37 24 7) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k177) (bruijn ##.%x.654 2 0) (bruijn ##.%x.1486 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      VNULL);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 24-1, 7)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k177, self)))),
      statics->up->vars[0],
      self->vars[0]);
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k175(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k175, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.syntax-caddr.41 22 11) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k176) (bruijn ##.stx.196 20 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 22-1, 11)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k176, self)))),
      VGetArg(statics, 20-1, 2));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k174(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k174, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 2 2 (##.%x.1484 ##.%x.1485) ((##vcore.cons (bruijn ##.%x.659 1 0) '()) (##vcore.cons (bruijn ##.%x.657 2 0) (bruijn ##.%x.1484 0 0))) ((bruijn ##.syntax-cdr.84 21 54) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k175) (bruijn ##.place.206 4 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[0],
      self->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 21-1, 54)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k175, self)))),
      statics->up->up->up->vars[0]);
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k173(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k173, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.syntax-car.78 19 48) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k174) (bruijn ##.place.206 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 19-1, 48)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k174, self)))),
      statics->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k169(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k169, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.645 0 0) ((bruijn ##.syntax-car.78 18 48) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k170) (bruijn ##.stx.196 16 2)) ((bruijn ##.global-identifier.39 18 9) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k173) '##vcore.setter))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 18-1, 48)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k170, self)))),
      VGetArg(statics, 16-1, 2));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 18-1, 9)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k173, self)))),
      _V10vcore_Dsetter);
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k168(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k168, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.identifier?.34 17 4) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k169) (bruijn ##.place.206 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 17-1, 4)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k169, self)))),
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k152(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k152, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%p.1466) ((##vcore.> (bruijn ##.%x.660 1 0) 3)) (if (bruijn ##.%p.1466 0 0) ((bruijn ##.syntax-caddr.41 16 11) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k153) (bruijn ##.stx.196 14 2)) ((bruijn ##.syntax-cadr.79 16 49) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k168) (bruijn ##.stx.196 14 2))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCmpGt(runtime, NULL,
      statics->vars[0],
      VEncodeInt(3l));
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 11)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k153, self)))),
      VGetArg(statics, 14-1, 2));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 49)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k168, self)))),
      VGetArg(statics, 14-1, 2));
}
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k178(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k178, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1488 1 0) ((bruijn ##.%k.671 0 0) (bruijn ##.%p.1488 1 0)) (basic-block 1 1 (##.%r.1492) ((##vcore.eq? (bruijn ##.binding.197 15 3) '##basic-intrinsic)) ((bruijn ##.%k.671 1 0) (bruijn ##.%r.1492 0 0))))
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
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 15-1, 3),
      _V10basic__intrinsic);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      self->vars[0]);
    }
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k181(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k181, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.v.207 1 0) (basic-block 2 2 (##.%x.1490 ##.%r.1491) ((##vcore.cdr (bruijn ##.v.207 2 0)) (##vcore.procedure? (bruijn ##.%x.1490 0 0))) ((bruijn ##.%k.668 1 0) (bruijn ##.%r.1491 0 1))) ((bruijn ##.%k.668 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      statics->up->vars[0]);
    self->vars[1] = _VBasic_VProcedureP2(runtime, NULL,
      self->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      self->vars[1]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k185(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k185, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.expand.195 21 1) (bruijn ##.%k.527 21 0) (bruijn ##.%x.664 0 0) (bruijn ##.env.198 21 4))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 21-1, 1)), 3,
      VGetArg(statics, 21-1, 0),
      _var0,
      VGetArg(statics, 21-1, 4));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k184(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k184, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%x.1489) ((##vcore.cdr (bruijn ##.v.207 4 0))) (##qualified-call (vanity compiler hygienic expand apply-transformer) #t (bruijn ##.apply-transformer.119 21 4) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k185) (bruijn ##.%x.665 1 0) (bruijn ##.%x.1489 0 0) (bruijn ##.stx.196 20 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      statics->up->up->up->vars[0]);
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0expand;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k185, self))));
    VWORD _arg1 = 
      statics->vars[0];
    VWORD _arg2 = 
      self->vars[0];
    VWORD _arg3 = 
      VGetArg(statics, 20-1, 2);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0apply__transformer, _V60_V0vanity_V0compiler_V0hygienic_V0expand)}, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0apply__transformer(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k183(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k183, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.get-syntax-data.42 20 12) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k184) (bruijn ##.%x.667 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 20-1, 12)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k184, self)))),
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k182(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k182, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.663 0 0) ((bruijn ##.syntax-car.78 19 48) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k183) (bruijn ##.stx.196 17 2)) (##qualified-call (vanity compiler hygienic expand expand-app) #t (bruijn ##.expand-app.130 18 15) (bruijn ##.%k.527 17 0) (bruijn ##.stx.196 17 2) (bruijn ##.env.198 17 4)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 19-1, 48)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k183, self)))),
      VGetArg(statics, 17-1, 2));
} else {
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0expand;
    VWORD _arg0 = 
      VGetArg(statics, 17-1, 0);
    VWORD _arg1 = 
      VGetArg(statics, 17-1, 2);
    VWORD _arg2 = 
      VGetArg(statics, 17-1, 4);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__app, _V60_V0vanity_V0compiler_V0hygienic_V0expand)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__app(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k180(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k180, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (letrec 1 ((bruijn ##.%x.662 1 0)) ((close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k181) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k182)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = statics->vars[0];
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k181, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k182, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k179(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k179, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.661 0 0) ((bruijn ##.%k.527 14 0) (bruijn ##.stx.196 14 2)) ((bruijn ##.assoc.43 16 13) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k180) (bruijn ##.binding.197 14 3) (bruijn ##.env.198 14 4)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 0)), 1,
      VGetArg(statics, 14-1, 2));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 13)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k180, self)))),
      VGetArg(statics, 14-1, 3),
      VGetArg(statics, 14-1, 4));
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k96(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k96, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.539 0 0) ((bruijn ##.%k.527 7 0) (bruijn ##.stx.196 7 2)) (basic-block 1 1 (##.%p.1437) ((##vcore.eq? (bruijn ##.binding.197 8 3) 'begin)) (if (bruijn ##.%p.1437 0 0) (##qualified-call (vanity compiler hygienic expand syntax-length) #t (bruijn ##.syntax-length.147 9 32) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k97) (bruijn ##.stx.196 8 2)) (basic-block 1 1 (##.%p.1442) ((##vcore.eq? (bruijn ##.binding.197 9 3) 'if)) (if (bruijn ##.%p.1442 0 0) (##qualified-call (vanity compiler hygienic expand syntax-length) #t (bruijn ##.syntax-length.147 10 32) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k110) (bruijn ##.stx.196 9 2)) (basic-block 1 1 (##.%p.1444) ((##vcore.eq? (bruijn ##.binding.197 10 3) 'and)) (if (bruijn ##.%p.1444 0 0) (##qualified-call (vanity compiler hygienic expand syntax-length) #t (bruijn ##.syntax-length.147 11 32) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k126) (bruijn ##.stx.196 10 2)) (basic-block 1 1 (##.%p.1457) ((##vcore.eq? (bruijn ##.binding.197 11 3) 'or)) (if (bruijn ##.%p.1457 0 0) (##qualified-call (vanity compiler hygienic expand syntax-length) #t (bruijn ##.syntax-length.147 12 32) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k139) (bruijn ##.stx.196 11 2)) (basic-block 1 1 (##.%p.1465) ((##vcore.eq? (bruijn ##.binding.197 12 3) 'set!)) (if (bruijn ##.%p.1465 0 0) (##qualified-call (vanity compiler hygienic expand syntax-length) #t (bruijn ##.syntax-length.147 13 32) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k152) (bruijn ##.stx.196 12 2)) (basic-block 1 1 (##.%p.1488) ((##vcore.eq? (bruijn ##.binding.197 13 3) '##intrinsic)) ((close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k178) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k179))))))))))))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 1,
      VGetArg(statics, 7-1, 2));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 8-1, 3),
      _V0begin);
if(VDecodeBool(
self->vars[0])) {
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0expand;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k97, self))));
    VWORD _arg1 = 
      VGetArg(statics, 8-1, 2);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__length, _V60_V0vanity_V0compiler_V0hygienic_V0expand)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__length(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 9-1, 3),
      _V0if);
if(VDecodeBool(
self->vars[0])) {
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0expand;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k110, self))));
    VWORD _arg1 = 
      VGetArg(statics, 9-1, 2);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__length, _V60_V0vanity_V0compiler_V0hygienic_V0expand)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__length(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 10-1, 3),
      _V0and);
if(VDecodeBool(
self->vars[0])) {
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0expand;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k126, self))));
    VWORD _arg1 = 
      VGetArg(statics, 10-1, 2);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__length, _V60_V0vanity_V0compiler_V0hygienic_V0expand)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__length(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 11-1, 3),
      _V0or);
if(VDecodeBool(
self->vars[0])) {
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0expand;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k139, self))));
    VWORD _arg1 = 
      VGetArg(statics, 11-1, 2);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__length, _V60_V0vanity_V0compiler_V0hygienic_V0expand)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__length(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 12-1, 3),
      _V0set_B);
if(VDecodeBool(
self->vars[0])) {
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0expand;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k152, self))));
    VWORD _arg1 = 
      VGetArg(statics, 12-1, 2);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__length, _V60_V0vanity_V0compiler_V0hygienic_V0expand)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__length(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 13-1, 3),
      _V10intrinsic);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k178, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k179, self)))));
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
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k94(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k94, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.537 0 0) (##qualified-call (vanity compiler hygienic expand expand-letrec*) #t (bruijn ##.expand-letrec*.128 5 13) (bruijn ##.%k.527 4 0) (bruijn ##.stx.196 4 2) (bruijn ##.env.198 4 4)) (basic-block 1 1 (##.%p.1435) ((##vcore.eq? (bruijn ##.binding.197 5 3) 'let-syntax)) (if (bruijn ##.%p.1435 0 0) (##qualified-call (vanity compiler hygienic expand expand-let-syntax) #t (bruijn ##.expand-let-syntax.135 6 20) (bruijn ##.%k.527 5 0) (bruijn ##.stx.196 5 2) (bruijn ##.env.198 5 4)) (basic-block 1 1 (##.%p.1436) ((##vcore.eq? (bruijn ##.binding.197 6 3) 'syntax)) ((close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k95) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k96))))))
if(VDecodeBool(
_var0)) {
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0expand;
    VWORD _arg0 = 
      statics->up->up->up->vars[0];
    VWORD _arg1 = 
      statics->up->up->up->vars[2];
    VWORD _arg2 = 
      statics->up->up->up->vars[4];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S, _V60_V0vanity_V0compiler_V0hygienic_V0expand)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 5-1, 3),
      _V0let__syntax);
if(VDecodeBool(
self->vars[0])) {
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0expand;
    VWORD _arg0 = 
      VGetArg(statics, 5-1, 0);
    VWORD _arg1 = 
      VGetArg(statics, 5-1, 2);
    VWORD _arg2 = 
      VGetArg(statics, 5-1, 4);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__let__syntax, _V60_V0vanity_V0compiler_V0hygienic_V0expand)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__let__syntax(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 6-1, 3),
      _V0syntax);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k95, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k96, self)))));
    }
}
    }
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4) {
 if(argc != 5) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form, got ~D~N"
  "-- expected 5~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[5]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 5, 5, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _var3;
  self->vars[4] = _var4;
  // (basic-block 1 1 (##.%p.1430) ((##vcore.eq? (bruijn ##.binding.197 1 3) 'lambda)) (if (bruijn ##.%p.1430 0 0) ((bruijn ##.syntax-car.78 3 48) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k87) (bruijn ##.stx.196 1 2)) (basic-block 1 1 (##.%p.1432) ((##vcore.eq? (bruijn ##.binding.197 2 3) 'case-lambda)) (if (bruijn ##.%p.1432 0 0) ((bruijn ##.syntax-car.78 4 48) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k90) (bruijn ##.stx.196 2 2)) (basic-block 1 1 (##.%p.1434) ((##vcore.eq? (bruijn ##.binding.197 3 3) 'letrec*)) ((close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k93) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k94)))))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      statics->vars[3],
      _V0lambda);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[48]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k87, self)))),
      statics->vars[2]);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      statics->up->vars[3],
      _V0case__lambda);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[48]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k90, self)))),
      statics->up->vars[2]);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      statics->up->up->vars[3],
      _V0letrec_S);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k93, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form_V0k94, self)))));
    }
}
    }
}
    }
}
static void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0apply__transformer_V0k191(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.flip-scope.44 7 14) (bruijn ##.%k.676 5 0) (bruijn ##.transformed-s.213 3 2) (bruijn ##.intro-scope.211 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 14)), 3,
      VGetArg(statics, 5-1, 0),
      statics->up->up->vars[2],
      statics->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0apply__transformer_V0k190(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0apply__transformer_V0k190, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0apply__transformer_V0k191) (bruijn ##.transformed-s.213 3 2) (bruijn ##.%x.678 0 0))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0apply__transformer_V0k191, self)))),
      VEncodeInt(3l), VEncodeInt(2l),
      _var0
    );
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0apply__transformer_V0k189(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0apply__transformer_V0k189, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.%x.679 0 0) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0apply__transformer_V0k190))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0apply__transformer_V0k190, self)))));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0apply__transformer_V0k192(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0apply__transformer_V0k192, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.682 0 0) (bruijn ##.%k.681 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->vars[0]);
}
static void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0apply__transformer_V0k194(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##vcore.raise (bruijn ##.%k.684 1 0) (bruijn ##.condition.11.215 3 1))
    VCallFuncWithGC(runtime, (VFunc)VRaise, 2,
      statics->vars[0],
      statics->up->up->vars[1]);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0apply__transformer_V0k193(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0apply__transformer_V0k193, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.format.47 10 17) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0apply__transformer_V0k194) (bruijn ##.%x.685 0 0) (##string ##.string.1776) (bruijn ##.name.208 8 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 17)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0apply__transformer_V0k194, self)))),
      _var0,
      VEncodePointer(&_V10_Dstring_D1776.sym, VPOINTER_OTHER),
      VGetArg(statics, 8-1, 1));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0apply__transformer_V0lambda15(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0apply__transformer_V0lambda15, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.current-error-port.46 9 16) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0apply__transformer_V0k193))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 16)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0apply__transformer_V0k193, self)))));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0apply__transformer_V0lambda14(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0apply__transformer_V0lambda14, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.guard-k.10.214 2 1) (bruijn ##.%k.683 0 0) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0apply__transformer_V0lambda15))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[1]), 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0apply__transformer_V0lambda15, self)))));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0apply__transformer_V0lambda13(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0apply__transformer_V0lambda13, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (##vcore.call/cc (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0apply__transformer_V0k192) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0apply__transformer_V0lambda14))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0apply__transformer_V0k192, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0apply__transformer_V0lambda14, self)))));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0apply__transformer_V0lambda18(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0apply__transformer_V0lambda18, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.apply (bruijn ##.%k.687 0 0) (bruijn ##.values.45 9 15) (bruijn ##.args.13.218 1 0))
    VCallFuncWithGC(runtime, (VFunc)VApply2, 3,
      _var0,
      VGetArg(statics, 9-1, 15),
      statics->vars[0]);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0apply__transformer_V0lambda17(VRuntime * runtime, VEnv * statics, int argc, ...) {
 if(argc < 0) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0apply__transformer_V0lambda17, got ~D~N"
  "-- expected 0 or more~N"
  , argc);
 }
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 0, argc, argc);
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _varargs;
  // ((bruijn ##.guard-k.10.214 2 1) (bruijn ##.%k.686 1 0) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0apply__transformer_V0lambda18))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[1]), 2,
      statics->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0apply__transformer_V0lambda18, self)))));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0apply__transformer_V0lambda16(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0apply__transformer_V0lambda16, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.t.209 5 2) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0apply__transformer_V0lambda17) (bruijn ##.intro-s.212 3 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 2)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0apply__transformer_V0lambda17, self)))),
      statics->up->up->vars[1]);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0apply__transformer_V0lambda12(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0apply__transformer_V0lambda12, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.with-exception-handler.48 6 18) (bruijn ##.%k.680 0 0) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0apply__transformer_V0lambda13) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0apply__transformer_V0lambda16))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 18)), 3,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0apply__transformer_V0lambda13, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0apply__transformer_V0lambda16, self)))));
}
static void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0apply__transformer_V0k188(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##vcore.call/cc (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0apply__transformer_V0k189) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0apply__transformer_V0lambda12))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0apply__transformer_V0k189, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0apply__transformer_V0lambda12, self)))));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0apply__transformer_V0k187(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0apply__transformer_V0k187, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0apply__transformer_V0k188) (bruijn ##.intro-s.212 1 1) (bruijn ##.%x.688 0 0))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0apply__transformer_V0k188, self)))),
      VEncodeInt(1l), VEncodeInt(1l),
      _var0
    );
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0apply__transformer_V0k186(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0apply__transformer_V0k186, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (letrec 3 ((bruijn ##.%x.677 1 0) #f #f) ((bruijn ##.flip-scope.44 4 14) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0apply__transformer_V0k187) (bruijn ##.stx.210 2 3) (bruijn ##.intro-scope.211 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = statics->vars[0];
    self->vars[1] = VEncodeBool(false);
    self->vars[2] = VEncodeBool(false);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[14]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0apply__transformer_V0k187, self)))),
      statics->up->vars[3],
      self->vars[0]);
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0apply__transformer(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0apply__transformer, got ~D~N"
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
  // ((bruijn ##.make-scope.40 2 10) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0apply__transformer_V0k186))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[10]), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0apply__transformer_V0k186, self)))));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0export__rename_V0k200(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0export__rename_V0k200, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%r.1496) ((##vcore.eq? (bruijn ##.%x.697 1 0) 'rename)) ((bruijn ##.%k.695 5 0) (bruijn ##.%r.1496 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      statics->vars[0],
      _V0rename);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      self->vars[0]);
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0export__rename_V0k199(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0export__rename_V0k199, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.get-syntax-data.42 8 12) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0export__rename_V0k200) (bruijn ##.%x.698 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 12)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0export__rename_V0k200, self)))),
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0export__rename_V0k198(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0export__rename_V0k198, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.696 0 0) ((bruijn ##.syntax-car.78 7 48) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0export__rename_V0k199) (bruijn ##.e.219 5 1)) ((bruijn ##.%k.695 2 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 48)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0export__rename_V0k199, self)))),
      VGetArg(statics, 5-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0export__rename_V0k197(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0export__rename_V0k197, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.694 1 0) (basic-block 1 1 (##.%x.1495) ((##vcore.cdr (bruijn ##.e.219 4 1))) ((bruijn ##.syntax-pair?.38 6 8) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0export__rename_V0k198) (bruijn ##.%x.1495 0 0))) ((bruijn ##.%k.695 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      statics->up->up->up->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 8)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0export__rename_V0k198, self)))),
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0export__rename_V0k203(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0export__rename_V0k203, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.compiler-error.36 7 6) (bruijn ##.%k.692 1 0) (##string ##.string.1777) (bruijn ##.%x.693 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 6)), 3,
      statics->vars[0],
      VEncodePointer(&_V10_Dstring_D1777.sym, VPOINTER_OTHER),
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0export__rename_V0k202(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0export__rename_V0k202, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.691 1 0) ((bruijn ##.%k.692 0 0) #void) (##qualified-call (vanity compiler hygienic expand syntax-object->datum) #t (bruijn ##.syntax-object->datum.156 5 41) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0export__rename_V0k203) (bruijn ##.e.219 4 1)))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VVOID);
} else {
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0expand;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0export__rename_V0k203, self))));
    VWORD _arg1 = 
      statics->up->up->up->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__object___Gdatum, _V60_V0vanity_V0compiler_V0hygienic_V0expand)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__object___Gdatum(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
}
static void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0export__rename_V0k204(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.syntax-cadr.79 5 49) (bruijn ##.%k.689 3 0) (bruijn ##.e.219 3 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 49)), 2,
      statics->up->up->vars[0],
      statics->up->up->vars[1]);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0export__rename_V0k201(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0export__rename_V0k201, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0export__rename_V0k202) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0export__rename_V0k204))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0export__rename_V0k202, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0export__rename_V0k204, self)))));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0export__rename_V0k196(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0export__rename_V0k196, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0export__rename_V0k197) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0export__rename_V0k201))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0export__rename_V0k197, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0export__rename_V0k201, self)))));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0export__rename_V0k195(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0export__rename_V0k195, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.690 0 0) ((bruijn ##.%k.689 1 0) (bruijn ##.e.219 1 1)) ((bruijn ##.syntax-pair?.38 3 8) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0export__rename_V0k196) (bruijn ##.e.219 1 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      statics->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[8]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0export__rename_V0k196, self)))),
      statics->vars[1]);
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0export__rename(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0export__rename, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.identifier?.34 2 4) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0export__rename_V0k195) (bruijn ##.e.219 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[4]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0export__rename_V0k195, self)))),
      _var1);
}
static void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define__syntax_V0k216(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.%k.700 10 0) '())
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 0)), 1,
      VNULL);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define__syntax_V0k215(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define__syntax_V0k215, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.set-cdr! (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define__syntax_V0k216) (bruijn ##.%x.704 0 0) (bruijn ##.val.225 5 4))
    VCallFuncWithGC(runtime, (VFunc)VSetCdr2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define__syntax_V0k216, self)))),
      _var0,
      VGetArg(statics, 5-1, 4));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define__syntax_V0k214(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define__syntax_V0k214, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.assq.49 11 19) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define__syntax_V0k215) (bruijn ##.binding.224 4 3) (bruijn ##.%x.705 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 19)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define__syntax_V0k215, self)))),
      statics->up->up->up->vars[3],
      _var0);
}
static void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define__syntax_V0k213(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.toplevel-expand-env.141 9 26) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define__syntax_V0k214))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 26)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define__syntax_V0k214, self)))));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define__syntax_V0k212(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define__syntax_V0k212, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define__syntax_V0k213) (bruijn ##.val.225 3 4) (bruijn ##.%x.706 0 0))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define__syntax_V0k213, self)))),
      VEncodeInt(3l), VEncodeInt(4l),
      _var0
    );
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define__syntax_V0k211(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define__syntax_V0k211, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.%x.707 0 0) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define__syntax_V0k212))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define__syntax_V0k212, self)))));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define__syntax_V0k217(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define__syntax_V0k217, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.710 0 0) (bruijn ##.%k.709 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->vars[0]);
}
static void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define__syntax_V0k220(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##vcore.raise (bruijn ##.%k.712 2 0) (bruijn ##.condition.7.227 4 1))
    VCallFuncWithGC(runtime, (VFunc)VRaise, 2,
      statics->up->vars[0],
      statics->up->up->up->vars[1]);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define__syntax_V0k219(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define__syntax_V0k219, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.format.47 14 17) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define__syntax_V0k220) (bruijn ##.%x.713 1 0) (##string ##.string.1778) (bruijn ##.%x.714 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 17)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define__syntax_V0k220, self)))),
      statics->vars[0],
      VEncodePointer(&_V10_Dstring_D1778.sym, VPOINTER_OTHER),
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define__syntax_V0k218(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define__syntax_V0k218, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.get-syntax-data.42 13 12) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define__syntax_V0k219) (bruijn ##.var.222 6 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 12)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define__syntax_V0k219, self)))),
      VGetArg(statics, 6-1, 1));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define__syntax_V0lambda22(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define__syntax_V0lambda22, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.current-error-port.46 12 16) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define__syntax_V0k218))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 16)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define__syntax_V0k218, self)))));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define__syntax_V0lambda21(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define__syntax_V0lambda21, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.guard-k.6.226 2 1) (bruijn ##.%k.711 0 0) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define__syntax_V0lambda22))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[1]), 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define__syntax_V0lambda22, self)))));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define__syntax_V0lambda20(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define__syntax_V0lambda20, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (##vcore.call/cc (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define__syntax_V0k217) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define__syntax_V0lambda21))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define__syntax_V0k217, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define__syntax_V0lambda21, self)))));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define__syntax_V0lambda25(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define__syntax_V0lambda25, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.apply (bruijn ##.%k.716 0 0) (bruijn ##.values.45 12 15) (bruijn ##.args.9.230 1 0))
    VCallFuncWithGC(runtime, (VFunc)VApply2, 3,
      _var0,
      VGetArg(statics, 12-1, 15),
      statics->vars[0]);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define__syntax_V0lambda24(VRuntime * runtime, VEnv * statics, int argc, ...) {
 if(argc < 0) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define__syntax_V0lambda24, got ~D~N"
  "-- expected 0 or more~N"
  , argc);
 }
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 0, argc, argc);
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _varargs;
  // ((bruijn ##.guard-k.6.226 2 1) (bruijn ##.%k.715 1 0) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define__syntax_V0lambda25))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[1]), 2,
      statics->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define__syntax_V0lambda25, self)))));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define__syntax_V0lambda23(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define__syntax_V0lambda23, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler hygienic expand eval-for-syntax-binding) #t (bruijn ##.eval-for-syntax-binding.136 9 21) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define__syntax_V0lambda24) (bruijn ##.raw-val.223 3 2))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0expand;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define__syntax_V0lambda24, self))));
    VWORD _arg1 = 
      statics->up->up->vars[2];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0eval__for__syntax__binding, _V60_V0vanity_V0compiler_V0hygienic_V0expand)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0eval__for__syntax__binding(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define__syntax_V0lambda19(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define__syntax_V0lambda19, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.with-exception-handler.48 9 18) (bruijn ##.%k.708 0 0) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define__syntax_V0lambda20) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define__syntax_V0lambda23))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 18)), 3,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define__syntax_V0lambda20, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define__syntax_V0lambda23, self)))));
}
static void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define__syntax_V0k210(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##vcore.call/cc (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define__syntax_V0k211) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define__syntax_V0lambda19))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define__syntax_V0k211, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define__syntax_V0lambda19, self)))));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define__syntax_V0k209(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define__syntax_V0k209, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define__syntax_V0k210) (bruijn ##.binding.224 1 3) (bruijn ##.%x.717 0 0))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define__syntax_V0k210, self)))),
      VEncodeInt(1l), VEncodeInt(3l),
      _var0
    );
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define__syntax_V0k208(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define__syntax_V0k208, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (letrec 5 ((bruijn ##.%x.701 4 0) (bruijn ##.%x.702 3 0) (bruijn ##.%x.703 1 0) #f #f) (##qualified-call (vanity compiler hygienic expand add-toplevel-binding!) #t (bruijn ##.add-toplevel-binding!.126 6 11) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define__syntax_V0k209) (bruijn ##.var.222 0 1) #f))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[5]; } container;
    self = &container.self;
    VInitEnv(self, 5, 5, statics);
    self->vars[0] = statics->up->up->up->vars[0];
    self->vars[1] = statics->up->up->vars[0];
    self->vars[2] = statics->vars[0];
    self->vars[3] = VEncodeBool(false);
    self->vars[4] = VEncodeBool(false);
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0expand;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define__syntax_V0k209, self))));
    VWORD _arg1 = 
      self->vars[1];
    VWORD _arg2 = 
      VEncodeBool(false);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0add__toplevel__binding_B, _V60_V0vanity_V0compiler_V0hygienic_V0expand)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0add__toplevel__binding_B(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define__syntax_V0k207(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define__syntax_V0k207, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.syntax-car.78 5 48) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define__syntax_V0k208) (bruijn ##.%x.718 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 48)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define__syntax_V0k208, self)))),
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define__syntax_V0k206(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define__syntax_V0k206, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.syntax-cddr.80 4 50) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define__syntax_V0k207) (bruijn ##.stx.220 2 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[50]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define__syntax_V0k207, self)))),
      statics->up->vars[1]);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define__syntax_V0k205(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define__syntax_V0k205, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.syntax-cadr.79 3 49) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define__syntax_V0k206) (bruijn ##.stx.220 1 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[49]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define__syntax_V0k206, self)))),
      statics->vars[1]);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define__syntax(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define__syntax, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.syntax-car.78 2 48) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define__syntax_V0k205) (bruijn ##.stx.220 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[48]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define__syntax_V0k205, self)))),
      _var1);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k236(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k236, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.776 1 0) ((bruijn ##.global-identifier.39 22 9) (bruijn ##.%k.777 0 0) '=) ((bruijn ##.global-identifier.39 22 9) (bruijn ##.%k.777 0 0) '<=))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 22-1, 9)), 2,
      _var0,
      _V0_E);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 22-1, 9)), 2,
      _var0,
      _V0_L_E);
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k252(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k252, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 17 17 (##.%x.1517 ##.%x.1518 ##.%x.1519 ##.%x.1520 ##.%x.1521 ##.%x.1522 ##.%x.1523 ##.%x.1524 ##.%x.1525 ##.%x.1526 ##.%x.1527 ##.%x.1528 ##.%x.1529 ##.%x.1530 ##.%x.1531 ##.%x.1532 ##.%r.1533) ((##vcore.cons (bruijn ##.%x.752 1 0) '()) (##vcore.cons (bruijn ##.%x.1516 3 4) (bruijn ##.%x.1517 0 0)) (##vcore.cons (bruijn ##.%x.748 7 0) (bruijn ##.%x.1518 0 1)) (##vcore.cons (bruijn ##.%x.746 10 0) (bruijn ##.%x.1519 0 2)) (##vcore.cons (bruijn ##.%x.1520 0 3) '()) (##vcore.cons (bruijn ##.%x.1511 11 2) (bruijn ##.%x.1521 0 4)) (##vcore.cons (bruijn ##.%x.1508 15 4) (bruijn ##.%x.1522 0 5)) (##vcore.cons (bruijn ##.%x.739 21 0) (bruijn ##.%x.1523 0 6)) (##vcore.cons (bruijn ##.%x.1524 0 7) '()) (##vcore.cons (bruijn ##.%x.1503 22 0) (bruijn ##.%x.1525 0 8)) (##vcore.cons (bruijn ##.%x.734 24 0) (bruijn ##.%x.1526 0 9)) (##vcore.cons (bruijn ##.%x.1527 0 10) '()) (##vcore.cons (bruijn ##.%x.1502 25 5) (bruijn ##.%x.1528 0 11)) (##vcore.cons (bruijn ##.%x.729 30 0) (bruijn ##.%x.1529 0 12)) (##vcore.cons (bruijn ##.%x.1530 0 13) '()) (##vcore.cons (bruijn ##.%x.726 31 0) (bruijn ##.%x.1531 0 14)) (##vcore.cons (bruijn ##.%x.724 32 0) (bruijn ##.%x.1532 0 15))) ((bruijn ##.%k.721 36 0) (bruijn ##.%r.1533 0 16)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[17]; } container;
    self = &container.self;
    VInitEnv(self, 17, 17, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      statics->up->up->vars[4],
      self->vars[0]);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 7-1, 0),
      self->vars[1]);
    self->vars[3] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 10-1, 0),
      self->vars[2]);
    self->vars[4] = _VBasic_VCons2(runtime, NULL,
      self->vars[3],
      VNULL);
    self->vars[5] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 11-1, 2),
      self->vars[4]);
    self->vars[6] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 15-1, 4),
      self->vars[5]);
    self->vars[7] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 21-1, 0),
      self->vars[6]);
    self->vars[8] = _VBasic_VCons2(runtime, NULL,
      self->vars[7],
      VNULL);
    self->vars[9] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 22-1, 0),
      self->vars[8]);
    self->vars[10] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 24-1, 0),
      self->vars[9]);
    self->vars[11] = _VBasic_VCons2(runtime, NULL,
      self->vars[10],
      VNULL);
    self->vars[12] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 25-1, 5),
      self->vars[11]);
    self->vars[13] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 30-1, 0),
      self->vars[12]);
    self->vars[14] = _VBasic_VCons2(runtime, NULL,
      self->vars[13],
      VNULL);
    self->vars[15] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 31-1, 0),
      self->vars[14]);
    self->vars[16] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 32-1, 0),
      self->vars[15]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 36-1, 0)), 1,
      self->vars[16]);
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k251(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k251, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler hygienic expand syntax-improper-length) #t (bruijn ##.syntax-improper-length.123 38 8) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k252) (bruijn ##.%x.753 0 0))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0expand;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k252, self))));
    VWORD _arg1 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__improper__length, _V60_V0vanity_V0compiler_V0hygienic_V0expand)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__improper__length(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k250(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k250, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 5 5 (##.%x.1512 ##.%x.1513 ##.%x.1514 ##.%x.1515 ##.%x.1516) ((##vcore.cons (bruijn ##.%x.760 1 0) '()) (##vcore.cons (bruijn ##.%x.758 2 0) (bruijn ##.%x.1512 0 0)) (##vcore.cons '1 '()) (##vcore.cons (bruijn ##.%x.1513 0 1) (bruijn ##.%x.1514 0 2)) (##vcore.cons (bruijn ##.%x.754 3 0) (bruijn ##.%x.1515 0 3))) ((bruijn ##.syntax-cdr.84 38 54) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k251) (bruijn ##.var.233 30 0)))
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
      VEncodeInt(1l),
      VNULL);
    self->vars[3] = _VBasic_VCons2(runtime, NULL,
      self->vars[1],
      self->vars[2]);
    self->vars[4] = _VBasic_VCons2(runtime, NULL,
      statics->up->up->vars[0],
      self->vars[3]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 38-1, 54)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k251, self)))),
      VGetArg(statics, 30-1, 0));
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k249(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k249, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.global-identifier.39 36 9) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k250) 'form)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 36-1, 9)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k250, self)))),
      _V0form);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k248(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k248, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.global-identifier.39 35 9) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k249) 'length)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 35-1, 9)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k249, self)))),
      _V0length);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k247(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k247, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.global-identifier.39 34 9) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k248) '-)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 34-1, 9)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k248, self)))),
      _V0__);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k246(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k246, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.sprintf.50 33 20) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k247) (##string ##.string.1780) (bruijn ##.%x.761 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 33-1, 20)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k247, self)))),
      VEncodePointer(&_V10_Dstring_D1780.sym, VPOINTER_OTHER),
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k245(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k245, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.get-syntax-data.42 32 12) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k246) (bruijn ##.%x.762 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 32-1, 12)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k246, self)))),
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k244(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k244, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.syntax-car.78 31 48) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k245) (bruijn ##.var.233 23 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 31-1, 48)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k245, self)))),
      VGetArg(statics, 23-1, 0));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k243(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k243, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 3 3 (##.%x.1509 ##.%x.1510 ##.%x.1511) ((##vcore.cons (bruijn ##.%x.767 1 0) '()) (##vcore.cons (bruijn ##.%x.765 2 0) (bruijn ##.%x.1509 0 0)) (##vcore.cons (bruijn ##.%x.763 3 0) (bruijn ##.%x.1510 0 1))) ((bruijn ##.global-identifier.39 30 9) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k244) 'error))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[0],
      self->vars[0]);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      statics->up->up->vars[0],
      self->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 30-1, 9)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k244, self)))),
      _V0error);
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k242(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k242, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.global-identifier.39 28 9) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k243) 'form)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 28-1, 9)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k243, self)))),
      _V0form);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k241(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k241, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.global-identifier.39 27 9) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k242) 'transformer)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 27-1, 9)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k242, self)))),
      _V0transformer);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k240(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k240, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 5 5 (##.%x.1504 ##.%x.1505 ##.%x.1506 ##.%x.1507 ##.%x.1508) ((##vcore.cons (bruijn ##.%x.775 1 0) '()) (##vcore.cons (bruijn ##.%x.773 2 0) (bruijn ##.%x.1504 0 0)) (##vcore.cons (bruijn ##.%x.1505 0 1) '()) (##vcore.cons (bruijn ##.%x.770 3 0) (bruijn ##.%x.1506 0 2)) (##vcore.cons (bruijn ##.%x.768 4 0) (bruijn ##.%x.1507 0 3))) ((bruijn ##.global-identifier.39 26 9) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k241) '##vcore.apply))
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
      self->vars[1],
      VNULL);
    self->vars[3] = _VBasic_VCons2(runtime, NULL,
      statics->up->up->vars[0],
      self->vars[2]);
    self->vars[4] = _VBasic_VCons2(runtime, NULL,
      statics->up->up->up->vars[0],
      self->vars[3]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 26-1, 9)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k241, self)))),
      _V10vcore_Dapply);
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k239(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k239, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.global-identifier.39 24 9) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k240) 'form)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 24-1, 9)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k240, self)))),
      _V0form);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k238(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k238, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.global-identifier.39 23 9) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k239) 'length)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 23-1, 9)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k239, self)))),
      _V0length);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k237(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k237, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler hygienic expand syntax-improper-length) #t (bruijn ##.syntax-improper-length.123 21 8) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k238) (bruijn ##.var.233 14 0))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0expand;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k238, self))));
    VWORD _arg1 = 
      VGetArg(statics, 14-1, 0);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__improper__length, _V60_V0vanity_V0compiler_V0hygienic_V0expand)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__improper__length(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k235(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k235, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k236) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k237))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k236, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k237, self)))));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k234(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k234, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler hygienic expand syntax-proper-list?) #t (bruijn ##.syntax-proper-list?.124 19 9) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k235) (bruijn ##.var.233 12 0))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0expand;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k235, self))));
    VWORD _arg1 = 
      VGetArg(statics, 12-1, 0);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__proper__list_Q, _V60_V0vanity_V0compiler_V0hygienic_V0expand)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__proper__list_Q(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k233(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k233, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%x.1503) ((##vcore.cons (bruijn ##.%x.778 1 0) '())) ((bruijn ##.global-identifier.39 19 9) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k234) 'if))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      VNULL);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 19-1, 9)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k234, self)))),
      _V0if);
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k232(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k232, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.global-identifier.39 17 9) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k233) 'form)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 17-1, 9)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k233, self)))),
      _V0form);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k231(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k231, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 6 6 (##.%x.1497 ##.%x.1498 ##.%x.1499 ##.%x.1500 ##.%x.1501 ##.%x.1502) ((##vcore.cons (bruijn ##.%x.786 2 0) (bruijn ##.%x.787 1 0)) (##vcore.cons (bruijn ##.%x.1497 0 0) (bruijn ##.body.234 8 1)) (##vcore.cons (bruijn ##.%x.783 3 0) (bruijn ##.%x.1498 0 1)) (##vcore.cons (bruijn ##.%x.1499 0 2) '()) (##vcore.cons (bruijn ##.%x.780 4 0) (bruijn ##.%x.1500 0 3)) (##vcore.cons (bruijn ##.%x.1501 0 4) '())) ((bruijn ##.global-identifier.39 16 9) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k232) 'lambda))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[6]; } container;
    self = &container.self;
    VInitEnv(self, 6, 6, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[0],
      statics->vars[0]);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      self->vars[0],
      VGetArg(statics, 8-1, 1));
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      statics->up->up->vars[0],
      self->vars[1]);
    self->vars[3] = _VBasic_VCons2(runtime, NULL,
      self->vars[2],
      VNULL);
    self->vars[4] = _VBasic_VCons2(runtime, NULL,
      statics->up->up->up->vars[0],
      self->vars[3]);
    self->vars[5] = _VBasic_VCons2(runtime, NULL,
      self->vars[4],
      VNULL);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 9)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k232, self)))),
      _V0lambda);
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k230(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k230, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.syntax-cdr.84 14 54) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k231) (bruijn ##.var.233 6 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 54)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k231, self)))),
      VGetArg(statics, 6-1, 0));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k229(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k229, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.global-identifier.39 13 9) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k230) 'ignored)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 9)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k230, self)))),
      _V0ignored);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k228(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k228, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.global-identifier.39 12 9) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k229) 'lambda)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 9)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k229, self)))),
      _V0lambda);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k227(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k227, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.global-identifier.39 11 9) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k228) 'transformer)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 9)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k228, self)))),
      _V0transformer);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k226(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k226, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.global-identifier.39 10 9) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k227) 'let)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 9)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k227, self)))),
      _V0let);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k225(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k225, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.syntax-car.78 9 48) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k226) (bruijn ##.var.233 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 48)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k226, self)))),
      statics->vars[0]);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k224(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k224, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (letrec 2 ((bruijn ##.%x.722 2 0) (bruijn ##.%x.723 1 0)) ((bruijn ##.global-identifier.39 8 9) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k225) 'define-syntax))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = statics->up->vars[0];
    self->vars[1] = statics->vars[0];
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 9)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k225, self)))),
      _V0define__syntax);
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k223(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k223, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.syntax-cddr.80 6 50) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k224) (bruijn ##.stx.232 1 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 50)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k224, self)))),
      statics->vars[1]);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0lambda26(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0lambda26, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.syntax-cadr.79 5 49) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k223) (bruijn ##.stx.232 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 49)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k223, self)))),
      _var1);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k222(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k222, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.720 0 0) (##qualified-call (vanity compiler hygienic expand apply-transformer) #t (bruijn ##.apply-transformer.119 3 4) (bruijn ##.%k.719 2 0) (##string ##.string.1779) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0lambda26) (bruijn ##.stx.231 2 1)) ((bruijn ##.%k.719 2 0) (bruijn ##.stx.231 2 1)))
if(VDecodeBool(
_var0)) {
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0expand;
    VWORD _arg0 = 
      statics->up->vars[0];
    VWORD _arg1 = 
      VEncodePointer(&_V10_Dstring_D1779.sym, VPOINTER_OTHER);
    VWORD _arg2 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0lambda26, self))));
    VWORD _arg3 = 
      statics->up->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0apply__transformer, _V60_V0vanity_V0compiler_V0hygienic_V0expand)}, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0apply__transformer(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      statics->up->vars[1]);
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k221(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k221, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.syntax-pair?.38 3 8) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k222) (bruijn ##.%x.788 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[8]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k222, self)))),
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.syntax-cadr.79 2 49) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k221) (bruijn ##.stx.231 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[49]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax_V0k221, self)))),
      _var1);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__improper__length_V10_Dloop_D236_V0k254(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__improper__length_V10_Dloop_D236_V0k254, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler hygienic expand syntax-improper-length ##.loop.236) #f (bruijn ##.loop.236 4 0) (bruijn ##.%k.790 3 0) (bruijn ##.%x.1534 1 0) (bruijn ##.%x.793 0 0))
  {
    VClosure * _closure = VDecodeClosure(statics->up->up->up->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->up->up->vars[0];
    VWORD _arg1 = 
      statics->vars[0];
    VWORD _arg2 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__improper__length_V10_Dloop_D236(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__improper__length_V10_Dloop_D236_V0k253(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__improper__length_V10_Dloop_D236_V0k253, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.791 0 0) (basic-block 1 1 (##.%x.1534) ((##vcore.+ (bruijn ##.acc.237 2 1) 1)) ((bruijn ##.syntax-cdr.84 6 54) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__improper__length_V10_Dloop_D236_V0k254) (bruijn ##.xs.238 2 2))) ((bruijn ##.%k.790 1 0) (bruijn ##.acc.237 1 1)))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      statics->up->vars[1],
      VEncodeInt(1l));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 54)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__improper__length_V10_Dloop_D236_V0k254, self)))),
      statics->up->vars[2]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      statics->vars[1]);
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__improper__length_V10_Dloop_D236(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__improper__length_V10_Dloop_D236, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((bruijn ##.syntax-pair?.38 4 8) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__improper__length_V10_Dloop_D236_V0k253) (bruijn ##.xs.238 0 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[8]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__improper__length_V10_Dloop_D236_V0k253, self)))),
      _var2);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__improper__length(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__improper__length, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (letrec 1 ((close "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__improper__length_V10_Dloop_D236")) (##qualified-call (vanity compiler hygienic expand syntax-improper-length ##.loop.236) #f (bruijn ##.loop.236 0 0) (bruijn ##.%k.789 1 0) 0 (bruijn ##.xs.235 1 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__improper__length_V10_Dloop_D236, self))));
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      VEncodeInt(0l);
    VWORD _arg2 = 
      statics->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__improper__length_V10_Dloop_D236(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__proper__list_Q_V0k257(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__proper__list_Q_V0k257, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler hygienic expand syntax-proper-list?) #t (bruijn ##.syntax-proper-list?.124 4 9) (bruijn ##.%k.794 3 0) (bruijn ##.%x.797 0 0))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0expand;
    VWORD _arg0 = 
      statics->up->up->vars[0];
    VWORD _arg1 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__proper__list_Q, _V60_V0vanity_V0compiler_V0hygienic_V0expand)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__proper__list_Q(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__proper__list_Q_V0k256(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__proper__list_Q_V0k256, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.796 0 0) ((bruijn ##.syntax-cdr.84 4 54) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__proper__list_Q_V0k257) (bruijn ##.xs.239 2 1)) ((bruijn ##.%k.794 2 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[54]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__proper__list_Q_V0k257, self)))),
      statics->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__proper__list_Q_V0k255(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__proper__list_Q_V0k255, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.795 0 0) ((bruijn ##.%k.794 1 0) #t) ((bruijn ##.syntax-pair?.38 3 8) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__proper__list_Q_V0k256) (bruijn ##.xs.239 1 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(true));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[8]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__proper__list_Q_V0k256, self)))),
      statics->vars[1]);
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__proper__list_Q(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__proper__list_Q, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.syntax-null?.88 2 58) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__proper__list_Q_V0k255) (bruijn ##.xs.239 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[58]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__proper__list_Q_V0k255, self)))),
      _var1);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define_V0k265(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define_V0k265, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 3 3 (##.%x.1535 ##.%x.1536 ##.%r.1537) ((##vcore.cons (bruijn ##.%x.805 1 0) '()) (##vcore.cons (bruijn ##.var.242 4 1) (bruijn ##.%x.1535 0 0)) (##vcore.cons (bruijn ##.%x.802 3 0) (bruijn ##.%x.1536 0 1))) ((bruijn ##.%k.798 9 0) (bruijn ##.%r.1537 0 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      statics->up->up->up->vars[1],
      self->vars[0]);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      statics->up->up->vars[0],
      self->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 0)), 1,
      self->vars[2]);
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define_V0k264(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define_V0k264, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler hygienic expand expand-impl) #t (bruijn ##.expand-impl.117 8 2) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define_V0k265) (bruijn ##.val.243 2 2) (bruijn ##.%x.806 0 0))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0expand;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define_V0k265, self))));
    VWORD _arg1 = 
      statics->up->vars[2];
    VWORD _arg2 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__impl, _V60_V0vanity_V0compiler_V0hygienic_V0expand)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__impl(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define_V0k263(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define_V0k263, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.toplevel-expand-env.141 7 26) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define_V0k264))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 26)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define_V0k264, self)))));
}
static void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define_V0k262(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.global-identifier.39 7 9) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define_V0k263) 'define)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 9)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define_V0k263, self)))),
      _V0define);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define_V0k261(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define_V0k261, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (letrec 3 ((bruijn ##.%x.799 4 0) (bruijn ##.%x.800 3 0) (bruijn ##.%x.801 1 0)) (##qualified-call (vanity compiler hygienic expand add-toplevel-binding!) #t (bruijn ##.add-toplevel-binding!.126 6 11) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define_V0k262) (bruijn ##.var.242 0 1) (bruijn ##.variable.140 6 25)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = statics->up->up->up->vars[0];
    self->vars[1] = statics->up->up->vars[0];
    self->vars[2] = statics->vars[0];
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0expand;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define_V0k262, self))));
    VWORD _arg1 = 
      self->vars[1];
    VWORD _arg2 = 
      VGetArg(statics, 6-1, 25);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0add__toplevel__binding_B, _V60_V0vanity_V0compiler_V0hygienic_V0expand)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0add__toplevel__binding_B(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define_V0k260(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define_V0k260, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.syntax-car.78 5 48) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define_V0k261) (bruijn ##.%x.807 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 48)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define_V0k261, self)))),
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define_V0k259(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define_V0k259, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.syntax-cddr.80 4 50) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define_V0k260) (bruijn ##.stx.240 2 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[50]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define_V0k260, self)))),
      statics->up->vars[1]);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define_V0k258(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define_V0k258, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.syntax-cadr.79 3 49) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define_V0k259) (bruijn ##.stx.240 1 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[49]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define_V0k259, self)))),
      statics->vars[1]);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.syntax-car.78 2 48) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define_V0k258) (bruijn ##.stx.240 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[48]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define_V0k258, self)))),
      _var1);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0add__toplevel__binding_B_V0k273(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0add__toplevel__binding_B_V0k273, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.generate-symbol.90 12 60) (bruijn ##.%k.823 1 0) (bruijn ##.%x.824 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 60)), 2,
      statics->vars[0],
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0add__toplevel__binding_B_V0k272(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0add__toplevel__binding_B_V0k272, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.822 1 0) ((bruijn ##.get-syntax-data.42 11 12) (bruijn ##.%k.823 0 0) (bruijn ##.var.244 9 1)) ((bruijn ##.get-syntax-data.42 11 12) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0add__toplevel__binding_B_V0k273) (bruijn ##.var.244 9 1)))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 12)), 2,
      _var0,
      VGetArg(statics, 9-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 12)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0add__toplevel__binding_B_V0k273, self)))),
      VGetArg(statics, 9-1, 1));
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0add__toplevel__binding_B_V0k281(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0add__toplevel__binding_B_V0k281, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 2 2 (##.%x.1542 ##.%x.1543) ((##vcore.cdr (bruijn ##.%x.816 1 0)) (##vcore.cons (bruijn ##.%x.1541 2 0) (bruijn ##.%x.1542 0 0))) (##vcore.set-cdr! (bruijn ##.%k.811 13 0) (bruijn ##.%x.812 3 0) (bruijn ##.%x.1543 0 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[0]);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[0],
      self->vars[0]);
    VCallFuncWithGC(runtime, (VFunc)VSetCdr2, 3,
      VGetArg(statics, 13-1, 0),
      statics->up->up->vars[0],
      self->vars[1]);
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0add__toplevel__binding_B_V0k280(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0add__toplevel__binding_B_V0k280, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%x.1541) ((##vcore.cons (bruijn ##.binding.246 13 0) (bruijn ##.value.245 15 2))) ((bruijn ##.toplevel-expand-env.141 16 26) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0add__toplevel__binding_B_V0k281)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 13-1, 0),
      VGetArg(statics, 15-1, 2));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 26)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0add__toplevel__binding_B_V0k281, self)))));
    }
}
static void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0add__toplevel__binding_B_V0k279(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.toplevel-expand-env.141 14 26) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0add__toplevel__binding_B_V0k280))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 26)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0add__toplevel__binding_B_V0k280, self)))));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0add__toplevel__binding_B_V0k278(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0add__toplevel__binding_B_V0k278, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 2 2 (##.%x.1539 ##.%x.1540) ((##vcore.cons (bruijn ##.var.244 13 1) (bruijn ##.binding.246 11 0)) (##vcore.cons (bruijn ##.%x.1539 0 0) (bruijn ##.bindings.247 2 0))) ((bruijn ##.set-scope-bindings!.52 15 22) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0add__toplevel__binding_B_V0k279) (bruijn ##.%x.817 1 0) (bruijn ##.%x.1540 0 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 13-1, 1),
      VGetArg(statics, 11-1, 0));
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      self->vars[0],
      statics->up->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 22)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0add__toplevel__binding_B_V0k279, self)))),
      statics->vars[0],
      self->vars[1]);
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0add__toplevel__binding_B_V0k277(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0add__toplevel__binding_B_V0k277, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.global-scope.32 13 2) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0add__toplevel__binding_B_V0k278))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 2)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0add__toplevel__binding_B_V0k278, self)))));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0add__toplevel__binding_B_V0k276(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0add__toplevel__binding_B_V0k276, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.get-scope-bindings.51 12 21) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0add__toplevel__binding_B_V0k277) (bruijn ##.%x.820 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 21)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0add__toplevel__binding_B_V0k277, self)))),
      _var0);
}
static void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0add__toplevel__binding_B_V0k275(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.global-scope.32 11 2) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0add__toplevel__binding_B_V0k276))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 2)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0add__toplevel__binding_B_V0k276, self)))));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0add__toplevel__binding_B_V0k274(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0add__toplevel__binding_B_V0k274, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0add__toplevel__binding_B_V0k275) (bruijn ##.binding.246 7 0) (bruijn ##.%x.821 0 0))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0add__toplevel__binding_B_V0k275, self)))),
      VEncodeInt(7l), VEncodeInt(0l),
      _var0
    );
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0add__toplevel__binding_B_V0k271(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0add__toplevel__binding_B_V0k271, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0add__toplevel__binding_B_V0k272) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0add__toplevel__binding_B_V0k274))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0add__toplevel__binding_B_V0k272, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0add__toplevel__binding_B_V0k274, self)))));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0add__toplevel__binding_B_V0k270(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0add__toplevel__binding_B_V0k270, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.equal?.83 9 53) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0add__toplevel__binding_B_V0k271) (bruijn ##.%x.825 1 0) (bruijn ##.%x.826 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 53)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0add__toplevel__binding_B_V0k271, self)))),
      statics->vars[0],
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0add__toplevel__binding_B_V0k269(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0add__toplevel__binding_B_V0k269, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.get-syntax-scopes.53 8 23) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0add__toplevel__binding_B_V0k270) (bruijn ##.var.244 6 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 23)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0add__toplevel__binding_B_V0k270, self)))),
      VGetArg(statics, 6-1, 1));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0add__toplevel__binding_B_V0k268(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0add__toplevel__binding_B_V0k268, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.list.31 7 1) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0add__toplevel__binding_B_V0k269) (bruijn ##.%x.827 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 1)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0add__toplevel__binding_B_V0k269, self)))),
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0add__toplevel__binding_B_V0k267(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0add__toplevel__binding_B_V0k267, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1538 1 0) ((bruijn ##.global-scope.32 6 2) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0add__toplevel__binding_B_V0k268)) ((bruijn ##.%k.811 0 0) #void))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 2)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0add__toplevel__binding_B_V0k268, self)))));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VVOID);
}
}
static void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0add__toplevel__binding_B_V0k282(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.%k.808 3 0) (bruijn ##.binding.246 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      statics->vars[0]);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0add__toplevel__binding_B_V0k266(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0add__toplevel__binding_B_V0k266, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (letrec 1 ((bruijn ##.%x.809 1 0)) (basic-block 1 1 (##.%p.1538) ((##vcore.not (bruijn ##.binding.246 1 0))) ((close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0add__toplevel__binding_B_V0k267) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0add__toplevel__binding_B_V0k282))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = statics->vars[0];
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VNot2(runtime, NULL,
      statics->vars[0]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0add__toplevel__binding_B_V0k267, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0add__toplevel__binding_B_V0k282, self)))));
    }
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0add__toplevel__binding_B(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0add__toplevel__binding_B, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (##qualified-call (vanity compiler hygienic expand find-exact-binding) #t (bruijn ##.find-exact-binding.151 1 36) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0add__toplevel__binding_B_V0k266) (bruijn ##.var.244 0 1))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0expand;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0add__toplevel__binding_B_V0k266, self))));
    VWORD _arg1 = 
      _var1;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0find__exact__binding, _V60_V0vanity_V0compiler_V0hygienic_V0expand)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0find__exact__binding(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define_V0k289(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define_V0k289, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 5 5 (##.%x.1544 ##.%x.1545 ##.%x.1546 ##.%x.1547 ##.%r.1548) ((##vcore.cons (bruijn ##.%x.839 1 0) (bruijn ##.body.250 6 1)) (##vcore.cons (bruijn ##.%x.837 2 0) (bruijn ##.%x.1544 0 0)) (##vcore.cons (bruijn ##.%x.1545 0 1) '()) (##vcore.cons (bruijn ##.%x.834 3 0) (bruijn ##.%x.1546 0 2)) (##vcore.cons (bruijn ##.%x.832 4 0) (bruijn ##.%x.1547 0 3))) ((bruijn ##.%k.828 9 0) (bruijn ##.%r.1548 0 4)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[5]; } container;
    self = &container.self;
    VInitEnv(self, 5, 5, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      VGetArg(statics, 6-1, 1));
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[0],
      self->vars[0]);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      self->vars[1],
      VNULL);
    self->vars[3] = _VBasic_VCons2(runtime, NULL,
      statics->up->up->vars[0],
      self->vars[2]);
    self->vars[4] = _VBasic_VCons2(runtime, NULL,
      statics->up->up->up->vars[0],
      self->vars[3]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 0)), 1,
      self->vars[4]);
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define_V0k288(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define_V0k288, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.syntax-cdr.84 9 54) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define_V0k289) (bruijn ##.var.249 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 54)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define_V0k289, self)))),
      statics->up->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define_V0k287(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define_V0k287, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.global-identifier.39 8 9) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define_V0k288) 'lambda)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 9)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define_V0k288, self)))),
      _V0lambda);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define_V0k286(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define_V0k286, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.syntax-car.78 7 48) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define_V0k287) (bruijn ##.var.249 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 48)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define_V0k287, self)))),
      statics->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define_V0k285(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define_V0k285, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.831 0 0) ((bruijn ##.global-identifier.39 6 9) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define_V0k286) 'define) ((bruijn ##.%k.828 4 0) (bruijn ##.stx.248 4 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 9)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define_V0k286, self)))),
      _V0define);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      statics->up->up->up->vars[1]);
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define_V0k284(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define_V0k284, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (letrec 2 ((bruijn ##.%x.829 2 0) (bruijn ##.%x.830 1 0)) ((bruijn ##.syntax-pair?.38 5 8) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define_V0k285) (bruijn ##.var.249 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = statics->up->vars[0];
    self->vars[1] = statics->vars[0];
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 8)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define_V0k285, self)))),
      self->vars[0]);
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define_V0k283(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define_V0k283, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.syntax-cddr.80 3 50) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define_V0k284) (bruijn ##.stx.248 1 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[50]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define_V0k284, self)))),
      statics->vars[1]);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.syntax-cadr.79 2 49) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define_V0k283) (bruijn ##.stx.248 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[49]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define_V0k283, self)))),
      _var1);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V10_Dintroduce_D256(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V10_Dintroduce_D256, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // (##qualified-call (vanity compiler hygienic expand introduced-identifier) #t (bruijn ##.introduced-identifier.137 7 22) (bruijn ##.%k.844 0 0) (bruijn ##.x.260 0 1) (bruijn ##.introduced-sc.255 1 2))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0expand;
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      _var1;
    VWORD _arg2 = 
      statics->vars[2];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0introduced__identifier, _V60_V0vanity_V0compiler_V0hygienic_V0expand)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0introduced__identifier(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V0k306(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V0k306, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 3 3 (##.%x.1549 ##.%x.1550 ##.%r.1551) ((##vcore.cons (bruijn ##.exp-body.267 4 0) '()) (##vcore.cons (bruijn ##.exp-idvals.266 6 0) (bruijn ##.%x.1549 0 0)) (##vcore.cons (bruijn ##.%x.847 1 0) (bruijn ##.%x.1550 0 1))) ((bruijn ##.%k.840 16 0) (bruijn ##.%r.1551 0 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->up->up->up->vars[0],
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 6-1, 0),
      self->vars[0]);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      self->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 0)), 1,
      self->vars[2]);
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V10_Dloop_D269_V0k307(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V10_Dloop_D269_V0k307, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 3 3 (##.%x.1553 ##.%x.1554 ##.%r.1555) ((##vcore.cons (bruijn ##.body.272 3 3) '()) (##vcore.cons (bruijn ##.idvals.270 3 1) (bruijn ##.%x.1553 0 0)) (##vcore.cons (bruijn ##.%x.852 1 0) (bruijn ##.%x.1554 0 1))) ((bruijn ##.%k.850 3 0) (bruijn ##.%r.1555 0 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->up->up->vars[3],
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      statics->up->up->vars[1],
      self->vars[0]);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      self->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      self->vars[2]);
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V10_Dloop_D269_V0k315(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V10_Dloop_D269_V0k315, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 6 6 (##.%x.1561 ##.%x.1562 ##.%x.1563 ##.%x.1564 ##.%x.1565 ##.%x.1566) ((##vcore.cons (bruijn ##.%x.870 1 0) '()) (##vcore.cons (bruijn ##.%x.868 2 0) (bruijn ##.%x.1561 0 0)) (##vcore.cons (bruijn ##.%x.866 3 0) (bruijn ##.%x.1562 0 1)) (##vcore.cons (bruijn ##.body.272 11 3) '()) (##vcore.cons (bruijn ##.%x.1563 0 2) (bruijn ##.%x.1564 0 3)) (##vcore.cons (bruijn ##.%x.862 4 0) (bruijn ##.%x.1565 0 4))) (##qualified-call (vanity compiler hygienic expand expand-letrec* ##.loop.269) #f (bruijn ##.loop.269 12 0) (bruijn ##.%k.850 11 0) (bruijn ##.%x.1559 5 0) (bruijn ##.%x.1560 5 1) (bruijn ##.%x.1566 0 5)))
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
      statics->up->up->vars[0],
      self->vars[1]);
    self->vars[3] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 11-1, 3),
      VNULL);
    self->vars[4] = _VBasic_VCons2(runtime, NULL,
      self->vars[2],
      self->vars[3]);
    self->vars[5] = _VBasic_VCons2(runtime, NULL,
      statics->up->up->up->vars[0],
      self->vars[4]);
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 12-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      VGetArg(statics, 11-1, 0);
    VWORD _arg1 = 
      VGetArg(statics, 5-1, 0);
    VWORD _arg2 = 
      VGetArg(statics, 5-1, 1);
    VWORD _arg3 = 
      self->vars[5];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V10_Dloop_D269(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V10_Dloop_D269_V0k314(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V10_Dloop_D269_V0k314, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.cadar.55 27 25) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V10_Dloop_D269_V0k315) (bruijn ##.todo.271 9 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 27-1, 25)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V10_Dloop_D269_V0k315, self)))),
      VGetArg(statics, 9-1, 2));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V10_Dloop_D269_V0k313(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V10_Dloop_D269_V0k313, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.caar.56 26 26) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V10_Dloop_D269_V0k314) (bruijn ##.todo.271 8 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 26-1, 26)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V10_Dloop_D269_V0k314, self)))),
      VGetArg(statics, 8-1, 2));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V10_Dloop_D269_V0k312(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V10_Dloop_D269_V0k312, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler hygienic expand expand-letrec* ##.introduce.256) #f (bruijn ##.introduce.256 18 3) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V10_Dloop_D269_V0k313) 'set!)
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 18-1, 3));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V10_Dloop_D269_V0k313, self))));
    VWORD _arg1 = 
      _V0set_B;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V10_Dintroduce_D256(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V10_Dloop_D269_V0k311(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V10_Dloop_D269_V0k311, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 2 2 (##.%x.1559 ##.%x.1560) ((##vcore.cons (bruijn ##.%x.871 1 0) (bruijn ##.idvals.270 6 1)) (##vcore.cdr (bruijn ##.todo.271 6 2))) (##qualified-call (vanity compiler hygienic expand expand-letrec* ##.introduce.256) #f (bruijn ##.introduce.256 17 3) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V10_Dloop_D269_V0k312) 'begin))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      VGetArg(statics, 6-1, 1));
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 6-1, 2));
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 17-1, 3));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V10_Dloop_D269_V0k312, self))));
    VWORD _arg1 = 
      _V0begin;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V10_Dintroduce_D256(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V10_Dloop_D269_V0k310(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V10_Dloop_D269_V0k310, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.list.31 22 1) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V10_Dloop_D269_V0k311) (bruijn ##.%x.872 0 0) #void)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 22-1, 1)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V10_Dloop_D269_V0k311, self)))),
      _var0,
      VVOID);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V10_Dloop_D269_V0k309(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V10_Dloop_D269_V0k309, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.855 0 0) (basic-block 3 3 (##.%x.1556 ##.%x.1557 ##.%x.1558) ((##vcore.car (bruijn ##.todo.271 4 2)) (##vcore.cons (bruijn ##.%x.1556 0 0) (bruijn ##.idvals.270 4 1)) (##vcore.cdr (bruijn ##.todo.271 4 2))) (##qualified-call (vanity compiler hygienic expand expand-letrec* ##.loop.269) #f (bruijn ##.loop.269 5 0) (bruijn ##.%k.850 4 0) (bruijn ##.%x.1557 0 1) (bruijn ##.%x.1558 0 2) (bruijn ##.body.272 4 3))) ((bruijn ##.caar.56 21 26) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V10_Dloop_D269_V0k310) (bruijn ##.todo.271 3 2)))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->up->up->vars[2]);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      self->vars[0],
      statics->up->up->up->vars[1]);
    self->vars[2] = _VBasic_VCdr2(runtime, NULL,
      statics->up->up->up->vars[2]);
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 5-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->up->up->up->vars[0];
    VWORD _arg1 = 
      self->vars[1];
    VWORD _arg2 = 
      self->vars[2];
    VWORD _arg3 = 
      statics->up->up->up->vars[3];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V10_Dloop_D269(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 21-1, 26)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V10_Dloop_D269_V0k310, self)))),
      statics->up->up->vars[2]);
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V10_Dloop_D269_V0k308(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V10_Dloop_D269_V0k308, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler hygienic expand primitive-letrec?) #t (bruijn ##.primitive-letrec?.129 19 14) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V10_Dloop_D269_V0k309) (bruijn ##.%x.873 0 0) (bruijn ##.ids.258 13 5))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0expand;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V10_Dloop_D269_V0k309, self))));
    VWORD _arg1 = 
      _var0;
    VWORD _arg2 = 
      VGetArg(statics, 13-1, 5);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0primitive__letrec_Q, _V60_V0vanity_V0compiler_V0hygienic_V0expand)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0primitive__letrec_Q(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V10_Dloop_D269(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V10_Dloop_D269, got ~D~N"
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
  // (basic-block 1 1 (##.%p.1552) ((##vcore.null? (bruijn ##.todo.271 1 2))) (if (bruijn ##.%p.1552 0 0) (##qualified-call (vanity compiler hygienic expand expand-letrec* ##.introduce.256) #f (bruijn ##.introduce.256 12 3) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V10_Dloop_D269_V0k307) 'letrec) ((bruijn ##.cadar.55 19 25) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V10_Dloop_D269_V0k308) (bruijn ##.todo.271 1 2))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VNullP2(runtime, NULL,
      statics->vars[2]);
if(VDecodeBool(
self->vars[0])) {
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 12-1, 3));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V10_Dloop_D269_V0k307, self))));
    VWORD _arg1 = 
      _V0letrec;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V10_Dintroduce_D256(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 19-1, 25)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V10_Dloop_D269_V0k308, self)))),
      statics->vars[2]);
}
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V0k316(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V0k316, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler hygienic expand expand-letrec* ##.loop.269) #f (bruijn ##.loop.269 1 0) (bruijn ##.%k.840 16 0) '() (bruijn ##.%x.874 0 0) (bruijn ##.exp-body.267 4 0))
  {
    VClosure * _closure = VDecodeClosure(statics->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      VGetArg(statics, 16-1, 0);
    VWORD _arg1 = 
      VNULL;
    VWORD _arg2 = 
      _var0;
    VWORD _arg3 = 
      statics->up->up->up->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V10_Dloop_D269(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V0k305(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V0k305, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.846 0 0) (##qualified-call (vanity compiler hygienic expand expand-letrec* ##.introduce.256) #f (bruijn ##.introduce.256 9 3) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V0k306) 'letrec) (letrec 1 ((close "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V10_Dloop_D269")) ((bruijn ##.reverse.54 17 24) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V0k316) (bruijn ##.exp-idvals.266 5 0))))
if(VDecodeBool(
_var0)) {
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 9-1, 3));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V0k306, self))));
    VWORD _arg1 = 
      _V0letrec;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V10_Dintroduce_D256(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V10_Dloop_D269, self))));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 17-1, 24)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V0k316, self)))),
      VGetArg(statics, 5-1, 0));
    }
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V0lambda27(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V0lambda27, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // (##qualified-call (vanity compiler hygienic expand primitive-letrec?) #t (bruijn ##.primitive-letrec?.129 15 14) (bruijn ##.%k.875 0 0) (bruijn ##.x.5.268 0 1) (bruijn ##.ids.258 9 5))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0expand;
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      _var1;
    VWORD _arg2 = 
      VGetArg(statics, 9-1, 5);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0primitive__letrec_Q, _V60_V0vanity_V0compiler_V0hygienic_V0expand)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0primitive__letrec_Q(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V0k304(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V0k304, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.every?.57 15 27) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V0k305) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V0lambda27) (bruijn ##.%x.876 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 27)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V0k305, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V0lambda27, self)))),
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V0k303(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V0k303, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.map.30 14 0) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V0k304) (bruijn ##.cadr.58 14 28) (bruijn ##.exp-idvals.266 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V0k304, self)))),
      VGetArg(statics, 14-1, 28),
      statics->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V0k302(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V0k302, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler hygienic expand expand-body) #t (bruijn ##.expand-body.132 12 17) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V0k303) (bruijn ##.%x.877 0 0) (bruijn ##.letrec-env.265 2 0))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0expand;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V0k303, self))));
    VWORD _arg1 = 
      _var0;
    VWORD _arg2 = 
      statics->up->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body, _V60_V0vanity_V0compiler_V0hygienic_V0expand)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V0k301(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V0k301, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.flip-scope.44 12 14) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V0k302) (bruijn ##.body.254 5 1) (bruijn ##.sc.257 5 4))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 14)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V0k302, self)))),
      VGetArg(statics, 5-1, 1),
      VGetArg(statics, 5-1, 4));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V0k319(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V0k319, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.list.31 15 1) (bruijn ##.%k.878 3 0) (bruijn ##.id.273 3 1) (bruijn ##.%x.879 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 1)), 3,
      statics->up->up->vars[0],
      statics->up->up->vars[1],
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V0k318(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V0k318, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler hygienic expand expand-impl) #t (bruijn ##.expand-impl.117 13 2) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V0k319) (bruijn ##.%x.880 0 0) (bruijn ##.letrec-env.265 3 0))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0expand;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V0k319, self))));
    VWORD _arg1 = 
      _var0;
    VWORD _arg2 = 
      statics->up->up->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__impl, _V60_V0vanity_V0compiler_V0hygienic_V0expand)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__impl(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V0k317(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V0k317, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.flip-scope.44 13 14) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V0k318) (bruijn ##.%x.881 0 0) (bruijn ##.sc.257 6 4))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 14)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V0k318, self)))),
      _var0,
      VGetArg(statics, 6-1, 4));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V0lambda28(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V0lambda28, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((bruijn ##.syntax-cadr.79 12 49) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V0k317) (bruijn ##.idval.274 0 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 49)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V0k317, self)))),
      _var2);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V0k300(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V0k300, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.syntax-map.81 11 51) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V0k301) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V0lambda28) (bruijn ##.ids.258 4 5) (bruijn ##.idvals.253 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 51)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V0k301, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V0lambda28, self)))),
      statics->up->up->up->vars[5],
      statics->up->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V0k299(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V0k299, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.append.37 10 7) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V0k300) (bruijn ##.%x.882 0 0) (bruijn ##.env.252 8 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 7)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V0k300, self)))),
      _var0,
      VGetArg(statics, 8-1, 2));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V0lambda29(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V0lambda29, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.%r.1567) ((##vcore.cons (bruijn ##.binding.275 1 1) (bruijn ##.variable.140 10 25))) ((bruijn ##.%k.883 1 0) (bruijn ##.%r.1567 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->vars[1],
      VGetArg(statics, 10-1, 25));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      self->vars[0]);
    }
}
static void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V0k298(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.map.30 9 0) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V0k299) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V0lambda29) (bruijn ##.bindings.259 2 6))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V0k299, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V0lambda29, self)))),
      statics->up->vars[6]);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V0lambda30(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V0lambda30, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  // (##qualified-call (vanity compiler hygienic expand add-binding!) #t (bruijn ##.add-binding!.158 9 43) (bruijn ##.%k.884 0 0) (bruijn ##.id.263 0 1) (bruijn ##.binding.264 0 2))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0expand;
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      _var1;
    VWORD _arg2 = 
      _var2;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0add__binding_B, _V60_V0vanity_V0compiler_V0hygienic_V0expand)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0add__binding_B(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
static void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V0k297(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.for-each.59 9 29) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V0k298) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V0lambda30) (bruijn ##.ids.258 2 5) (bruijn ##.bindings.259 2 6))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 29)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V0k298, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V0lambda30, self)))),
      statics->up->vars[5],
      statics->up->vars[6]);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V0k296(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V0k296, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V0k297) (bruijn ##.bindings.259 2 6) (bruijn ##.%x.885 0 0))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V0k297, self)))),
      VEncodeInt(2l), VEncodeInt(6l),
      _var0
    );
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V0k320(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V0k320, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.generate-symbol.90 10 60) (bruijn ##.%k.886 1 0) (bruijn ##.%x.887 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 60)), 2,
      statics->vars[0],
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V0lambda31(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V0lambda31, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.get-syntax-data.42 9 12) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V0k320) (bruijn ##.e.262 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 12)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V0k320, self)))),
      _var1);
}
static void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V0k295(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.map.30 8 0) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V0k296) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V0lambda31) (bruijn ##.ids.258 1 5))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V0k296, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V0lambda31, self)))),
      statics->vars[5]);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V0k294(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V0k294, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V0k295) (bruijn ##.ids.258 1 5) (bruijn ##.%x.888 0 0))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V0k295, self)))),
      VEncodeInt(1l), VEncodeInt(5l),
      _var0
    );
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V0k321(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V0k321, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.flip-scope.44 9 14) (bruijn ##.%k.889 1 0) (bruijn ##.%x.890 0 0) (bruijn ##.sc.257 2 4))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 14)), 3,
      statics->vars[0],
      _var0,
      statics->up->vars[4]);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V0lambda32(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V0lambda32, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.syntax-car.78 8 48) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V0k321) (bruijn ##.idval.261 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 48)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V0k321, self)))),
      _var1);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V0k293(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V0k293, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (letrec 7 ((bruijn ##.%x.841 4 0) (bruijn ##.%x.842 3 0) (bruijn ##.%x.843 2 0) (close "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V10_Dintroduce_D256") (bruijn ##.%x.845 1 0) #f #f) ((bruijn ##.syntax-map.81 7 51) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V0k294) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V0lambda32) (bruijn ##.idvals.253 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[7]; } container;
    self = &container.self;
    VInitEnv(self, 7, 7, statics);
    self->vars[0] = statics->up->up->up->vars[0];
    self->vars[1] = statics->up->up->vars[0];
    self->vars[2] = statics->up->vars[0];
    self->vars[3] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V10_Dintroduce_D256, self))));
    self->vars[4] = statics->vars[0];
    self->vars[5] = VEncodeBool(false);
    self->vars[6] = VEncodeBool(false);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 51)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V0k294, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V0lambda32, self)))),
      self->vars[0]);
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V0k292(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V0k292, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.make-scope.40 5 10) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V0k293))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 10)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V0k293, self)))));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V0k291(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V0k291, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.make-scope.40 4 10) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V0k292))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[10]), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V0k292, self)))));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V0k290(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V0k290, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.syntax-cddr.80 3 50) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V0k291) (bruijn ##.stx.251 1 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[50]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V0k291, self)))),
      statics->vars[1]);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((bruijn ##.syntax-cadr.79 2 49) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V0k290) (bruijn ##.stx.251 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[49]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S_V0k290, self)))),
      _var1);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0primitive__letrec_Q_V10_Dadvanced__primitive__letrec_D279_V0k324(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0primitive__letrec_Q_V10_Dadvanced__primitive__letrec_D279_V0k324, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.identifier?.34 8 4) (bruijn ##.%k.913 1 0) (bruijn ##.%x.914 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 4)), 2,
      statics->vars[0],
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0primitive__letrec_Q_V10_Dadvanced__primitive__letrec_D279_V0k323(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0primitive__letrec_Q_V10_Dadvanced__primitive__letrec_D279_V0k323, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.912 1 0) ((bruijn ##.syntax-car.78 7 48) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0primitive__letrec_Q_V10_Dadvanced__primitive__letrec_D279_V0k324) (bruijn ##.val.280 2 1)) ((bruijn ##.%k.913 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 48)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0primitive__letrec_Q_V10_Dadvanced__primitive__letrec_D279_V0k324, self)))),
      statics->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0primitive__letrec_Q_V10_Dadvanced__primitive__letrec_D279_V0k328(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0primitive__letrec_Q_V10_Dadvanced__primitive__letrec_D279_V0k328, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1568 1 0) ((bruijn ##.%k.904 0 0) (bruijn ##.%p.1568 1 0)) (basic-block 1 1 (##.%p.1575) ((##vcore.eq? (bruijn ##.x.4.281 3 0) '##intrinsic)) (if (bruijn ##.%p.1575 0 0) ((bruijn ##.%k.904 1 0) (bruijn ##.%p.1575 0 0)) (basic-block 1 1 (##.%p.1576) ((##vcore.eq? (bruijn ##.x.4.281 4 0) '##basic-intrinsic)) (if (bruijn ##.%p.1576 0 0) ((bruijn ##.%k.904 2 0) (bruijn ##.%p.1576 0 0)) (basic-block 1 1 (##.%r.1577) ((##vcore.eq? (bruijn ##.x.4.281 5 0) '##foreign-function)) ((bruijn ##.%k.904 3 0) (bruijn ##.%r.1577 0 0))))))))
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
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      statics->up->up->vars[0],
      _V10intrinsic);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      self->vars[0]);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      statics->up->up->up->vars[0],
      _V10basic__intrinsic);
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
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 5-1, 0),
      _V10foreign__function);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      self->vars[0]);
    }
}
    }
}
    }
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0primitive__letrec_Q_V10_Dadvanced__primitive__letrec_D279_V0k330(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0primitive__letrec_Q_V10_Dadvanced__primitive__letrec_D279_V0k330, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1569 1 0) ((bruijn ##.%k.898 0 0) (bruijn ##.%p.1569 1 0)) (basic-block 1 1 (##.%p.1570) ((##vcore.eq? (bruijn ##.x.4.281 5 0) 'case-lambda)) (if (bruijn ##.%p.1570 0 0) ((bruijn ##.%k.898 1 0) (bruijn ##.%p.1570 0 0)) (basic-block 1 1 (##.%p.1571) ((##vcore.eq? (bruijn ##.x.4.281 6 0) '##qualified-lambda)) (if (bruijn ##.%p.1571 0 0) ((bruijn ##.%k.898 2 0) (bruijn ##.%p.1571 0 0)) (basic-block 1 1 (##.%p.1572) ((##vcore.eq? (bruijn ##.x.4.281 7 0) '##qualified-case-lambda)) (if (bruijn ##.%p.1572 0 0) ((bruijn ##.%k.898 3 0) (bruijn ##.%p.1572 0 0)) (basic-block 1 1 (##.%p.1573) ((##vcore.eq? (bruijn ##.x.4.281 8 0) 'letrec)) (if (bruijn ##.%p.1573 0 0) ((bruijn ##.%k.898 4 0) (bruijn ##.%p.1573 0 0)) (basic-block 1 1 (##.%r.1574) ((##vcore.eq? (bruijn ##.x.4.281 9 0) '##letrec)) ((bruijn ##.%k.898 5 0) (bruijn ##.%r.1574 0 0))))))))))))
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
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 5-1, 0),
      _V0case__lambda);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      self->vars[0]);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 6-1, 0),
      _V10qualified__lambda);
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
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 7-1, 0),
      _V10qualified__case__lambda);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      self->vars[0]);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 8-1, 0),
      _V0letrec);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      self->vars[0]);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 9-1, 0),
      _V10letrec);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      self->vars[0]);
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
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0primitive__letrec_Q_V10_Dadvanced__primitive__letrec_D279_V0k331(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0primitive__letrec_Q_V10_Dadvanced__primitive__letrec_D279_V0k331, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.896 0 0) ((bruijn ##.return.278 10 1) (bruijn ##.%k.893 8 0) #f) ((bruijn ##.syntax-map.81 13 51) (bruijn ##.%k.893 8 0) (bruijn ##.advanced-primitive-letrec.279 9 0) (bruijn ##.val.280 8 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 1)), 2,
      VGetArg(statics, 8-1, 0),
      VEncodeBool(false));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 51)), 3,
      VGetArg(statics, 8-1, 0),
      VGetArg(statics, 9-1, 0),
      VGetArg(statics, 8-1, 1));
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0primitive__letrec_Q_V10_Dadvanced__primitive__letrec_D279_V0k329(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0primitive__letrec_Q_V10_Dadvanced__primitive__letrec_D279_V0k329, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.895 0 0) ((bruijn ##.%k.893 6 0) #t) (basic-block 1 1 (##.%p.1569) ((##vcore.eq? (bruijn ##.x.4.281 3 0) 'lambda)) ((close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0primitive__letrec_Q_V10_Dadvanced__primitive__letrec_D279_V0k330) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0primitive__letrec_Q_V10_Dadvanced__primitive__letrec_D279_V0k331))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 1,
      VEncodeBool(true));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      statics->up->up->vars[0],
      _V0lambda);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0primitive__letrec_Q_V10_Dadvanced__primitive__letrec_D279_V0k330, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0primitive__letrec_Q_V10_Dadvanced__primitive__letrec_D279_V0k331, self)))));
    }
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0primitive__letrec_Q_V10_Dadvanced__primitive__letrec_D279_V0k327(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0primitive__letrec_Q_V10_Dadvanced__primitive__letrec_D279_V0k327, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%p.1568) ((##vcore.eq? (bruijn ##.x.4.281 1 0) 'quote)) ((close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0primitive__letrec_Q_V10_Dadvanced__primitive__letrec_D279_V0k328) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0primitive__letrec_Q_V10_Dadvanced__primitive__letrec_D279_V0k329)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      statics->vars[0],
      _V0quote);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0primitive__letrec_Q_V10_Dadvanced__primitive__letrec_D279_V0k328, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0primitive__letrec_Q_V10_Dadvanced__primitive__letrec_D279_V0k329, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0primitive__letrec_Q_V10_Dadvanced__primitive__letrec_D279_V0k326(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0primitive__letrec_Q_V10_Dadvanced__primitive__letrec_D279_V0k326, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler hygienic expand resolve-identifier) #t (bruijn ##.resolve-identifier.152 7 37) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0primitive__letrec_Q_V10_Dadvanced__primitive__letrec_D279_V0k327) (bruijn ##.%x.907 0 0))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0expand;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0primitive__letrec_Q_V10_Dadvanced__primitive__letrec_D279_V0k327, self))));
    VWORD _arg1 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve__identifier, _V60_V0vanity_V0compiler_V0hygienic_V0expand)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve__identifier(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0primitive__letrec_Q_V10_Dadvanced__primitive__letrec_D279_V0k334(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0primitive__letrec_Q_V10_Dadvanced__primitive__letrec_D279_V0k334, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.910 1 0) ((bruijn ##.member.60 10 30) (bruijn ##.%k.911 0 0) (bruijn ##.val.280 5 1) (bruijn ##.xs.277 8 2) (bruijn ##.free-identifier=?.161 9 46)) ((bruijn ##.%k.911 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 30)), 4,
      _var0,
      VGetArg(statics, 5-1, 1),
      VGetArg(statics, 8-1, 2),
      VGetArg(statics, 9-1, 46));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0primitive__letrec_Q_V10_Dadvanced__primitive__letrec_D279_V0k335(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0primitive__letrec_Q_V10_Dadvanced__primitive__letrec_D279_V0k335, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.909 0 0) ((bruijn ##.return.278 7 1) (bruijn ##.%k.893 5 0) #f) ((bruijn ##.%k.893 5 0) #t))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 1)), 2,
      VGetArg(statics, 5-1, 0),
      VEncodeBool(false));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VEncodeBool(true));
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0primitive__letrec_Q_V10_Dadvanced__primitive__letrec_D279_V0k333(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0primitive__letrec_Q_V10_Dadvanced__primitive__letrec_D279_V0k333, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0primitive__letrec_Q_V10_Dadvanced__primitive__letrec_D279_V0k334) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0primitive__letrec_Q_V10_Dadvanced__primitive__letrec_D279_V0k335))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0primitive__letrec_Q_V10_Dadvanced__primitive__letrec_D279_V0k334, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0primitive__letrec_Q_V10_Dadvanced__primitive__letrec_D279_V0k335, self)))));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0primitive__letrec_Q_V10_Dadvanced__primitive__letrec_D279_V0k332(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0primitive__letrec_Q_V10_Dadvanced__primitive__letrec_D279_V0k332, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.908 0 0) ((bruijn ##.syntax-map.81 8 51) (bruijn ##.%k.893 3 0) (bruijn ##.advanced-primitive-letrec.279 4 0) (bruijn ##.val.280 3 1)) ((bruijn ##.identifier?.34 8 4) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0primitive__letrec_Q_V10_Dadvanced__primitive__letrec_D279_V0k333) (bruijn ##.val.280 3 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 51)), 3,
      statics->up->up->vars[0],
      statics->up->up->up->vars[0],
      statics->up->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 4)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0primitive__letrec_Q_V10_Dadvanced__primitive__letrec_D279_V0k333, self)))),
      statics->up->up->vars[1]);
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0primitive__letrec_Q_V10_Dadvanced__primitive__letrec_D279_V0k325(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0primitive__letrec_Q_V10_Dadvanced__primitive__letrec_D279_V0k325, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.894 0 0) ((bruijn ##.syntax-car.78 7 48) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0primitive__letrec_Q_V10_Dadvanced__primitive__letrec_D279_V0k326) (bruijn ##.val.280 2 1)) ((bruijn ##.syntax-pair?.38 7 8) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0primitive__letrec_Q_V10_Dadvanced__primitive__letrec_D279_V0k332) (bruijn ##.val.280 2 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 48)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0primitive__letrec_Q_V10_Dadvanced__primitive__letrec_D279_V0k326, self)))),
      statics->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 8)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0primitive__letrec_Q_V10_Dadvanced__primitive__letrec_D279_V0k332, self)))),
      statics->up->vars[1]);
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0primitive__letrec_Q_V10_Dadvanced__primitive__letrec_D279_V0k322(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0primitive__letrec_Q_V10_Dadvanced__primitive__letrec_D279_V0k322, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0primitive__letrec_Q_V10_Dadvanced__primitive__letrec_D279_V0k323) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0primitive__letrec_Q_V10_Dadvanced__primitive__letrec_D279_V0k325))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0primitive__letrec_Q_V10_Dadvanced__primitive__letrec_D279_V0k323, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0primitive__letrec_Q_V10_Dadvanced__primitive__letrec_D279_V0k325, self)))));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0primitive__letrec_Q_V10_Dadvanced__primitive__letrec_D279(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0primitive__letrec_Q_V10_Dadvanced__primitive__letrec_D279, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.syntax-pair?.38 5 8) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0primitive__letrec_Q_V10_Dadvanced__primitive__letrec_D279_V0k322) (bruijn ##.val.280 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 8)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0primitive__letrec_Q_V10_Dadvanced__primitive__letrec_D279_V0k322, self)))),
      _var1);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0primitive__letrec_Q_V0k338(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0primitive__letrec_Q_V0k338, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.identifier?.34 7 4) (bruijn ##.%k.924 1 0) (bruijn ##.%x.925 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 4)), 2,
      statics->vars[0],
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0primitive__letrec_Q_V0k337(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0primitive__letrec_Q_V0k337, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.923 1 0) ((bruijn ##.syntax-car.78 6 48) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0primitive__letrec_Q_V0k338) (bruijn ##.val.276 4 1)) ((bruijn ##.%k.924 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 48)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0primitive__letrec_Q_V0k338, self)))),
      statics->up->up->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0primitive__letrec_Q_V0k342(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0primitive__letrec_Q_V0k342, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.916 0 0) ((bruijn ##.%k.892 6 0) (bruijn ##.%p.916 0 0)) (##qualified-call (vanity compiler hygienic expand primitive-letrec? ##.advanced-primitive-letrec.279) #f (bruijn ##.advanced-primitive-letrec.279 5 0) (bruijn ##.%k.892 6 0) (bruijn ##.val.276 7 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 1,
      _var0);
} else {
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 5-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      VGetArg(statics, 6-1, 0);
    VWORD _arg1 = 
      VGetArg(statics, 7-1, 1);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0primitive__letrec_Q_V10_Dadvanced__primitive__letrec_D279(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0primitive__letrec_Q_V0k341(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0primitive__letrec_Q_V0k341, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.memq.61 8 31) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0primitive__letrec_Q_V0k342) (bruijn ##.%x.917 0 0) '(##pair ##.pair.1788))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 31)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0primitive__letrec_Q_V0k342, self)))),
      _var0,
      VEncodePointer(&_V10_Dpair_D1788, VPOINTER_PAIR));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0primitive__letrec_Q_V0k340(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0primitive__letrec_Q_V0k340, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler hygienic expand resolve-identifier) #t (bruijn ##.resolve-identifier.152 6 37) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0primitive__letrec_Q_V0k341) (bruijn ##.%x.918 0 0))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0expand;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0primitive__letrec_Q_V0k341, self))));
    VWORD _arg1 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve__identifier, _V60_V0vanity_V0compiler_V0hygienic_V0expand)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve__identifier(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0primitive__letrec_Q_V0k345(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0primitive__letrec_Q_V0k345, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.921 1 0) ((bruijn ##.member.60 9 30) (bruijn ##.%k.922 0 0) (bruijn ##.val.276 7 1) (bruijn ##.xs.277 7 2) (bruijn ##.free-identifier=?.161 8 46)) ((bruijn ##.%k.922 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 30)), 4,
      _var0,
      VGetArg(statics, 7-1, 1),
      VGetArg(statics, 7-1, 2),
      VGetArg(statics, 8-1, 46));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0primitive__letrec_Q_V0k346(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0primitive__letrec_Q_V0k346, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%r.1578) ((##vcore.not (bruijn ##.%x.920 1 0))) ((bruijn ##.%k.892 7 0) (bruijn ##.%r.1578 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VNot2(runtime, NULL,
      statics->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 1,
      self->vars[0]);
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0primitive__letrec_Q_V0k344(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0primitive__letrec_Q_V0k344, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0primitive__letrec_Q_V0k345) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0primitive__letrec_Q_V0k346))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0primitive__letrec_Q_V0k345, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0primitive__letrec_Q_V0k346, self)))));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0primitive__letrec_Q_V0k343(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0primitive__letrec_Q_V0k343, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.919 0 0) (##qualified-call (vanity compiler hygienic expand primitive-letrec? ##.advanced-primitive-letrec.279) #f (bruijn ##.advanced-primitive-letrec.279 3 0) (bruijn ##.%k.892 4 0) (bruijn ##.val.276 5 1)) ((bruijn ##.identifier?.34 7 4) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0primitive__letrec_Q_V0k344) (bruijn ##.val.276 5 1)))
if(VDecodeBool(
_var0)) {
  {
    VClosure * _closure = VDecodeClosure(statics->up->up->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->up->up->up->vars[0];
    VWORD _arg1 = 
      VGetArg(statics, 5-1, 1);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0primitive__letrec_Q_V10_Dadvanced__primitive__letrec_D279(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 4)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0primitive__letrec_Q_V0k344, self)))),
      VGetArg(statics, 5-1, 1));
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0primitive__letrec_Q_V0k339(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0primitive__letrec_Q_V0k339, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.915 0 0) ((bruijn ##.syntax-car.78 6 48) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0primitive__letrec_Q_V0k340) (bruijn ##.val.276 4 1)) ((bruijn ##.syntax-pair?.38 6 8) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0primitive__letrec_Q_V0k343) (bruijn ##.val.276 4 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 48)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0primitive__letrec_Q_V0k340, self)))),
      statics->up->up->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 8)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0primitive__letrec_Q_V0k343, self)))),
      statics->up->up->up->vars[1]);
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0primitive__letrec_Q_V0k336(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0primitive__letrec_Q_V0k336, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0primitive__letrec_Q_V0k337) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0primitive__letrec_Q_V0k339))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0primitive__letrec_Q_V0k337, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0primitive__letrec_Q_V0k339, self)))));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0primitive__letrec_Q_V0lambda33(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0primitive__letrec_Q_V0lambda33, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (letrec 1 ((close "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0primitive__letrec_Q_V10_Dadvanced__primitive__letrec_D279")) ((bruijn ##.syntax-pair?.38 4 8) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0primitive__letrec_Q_V0k336) (bruijn ##.val.276 2 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0primitive__letrec_Q_V10_Dadvanced__primitive__letrec_D279, self))));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[8]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0primitive__letrec_Q_V0k336, self)))),
      statics->up->vars[1]);
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0primitive__letrec_Q(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0primitive__letrec_Q, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (##vcore.call/cc (bruijn ##.%k.891 0 0) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0primitive__letrec_Q_V0lambda33))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0primitive__letrec_Q_V0lambda33, self)))));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__app_V0lambda34(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__app_V0lambda34, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // (##qualified-call (vanity compiler hygienic expand expand-impl) #t (bruijn ##.expand-impl.117 2 2) (bruijn ##.%k.927 0 0) (bruijn ##.x.284 0 1) (bruijn ##.env.283 1 2))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0expand;
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      _var1;
    VWORD _arg2 = 
      statics->vars[2];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__impl, _V60_V0vanity_V0compiler_V0hygienic_V0expand)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__impl(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__app(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__app, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((bruijn ##.syntax-map.81 2 51) (bruijn ##.%k.926 0 0) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__app_V0lambda34) (bruijn ##.xs.282 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[51]), 3,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__app_V0lambda34, self)))),
      _var1);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__lambda_V0k364(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__lambda_V0k364, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%x.1582) ((##vcore.car (bruijn ##.%x.937 1 0))) ((bruijn ##.append.37 19 7) (bruijn ##.%k.934 3 0) (bruijn ##.%x.935 2 0) (bruijn ##.%x.1582 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 19-1, 7)), 3,
      statics->up->up->vars[0],
      statics->up->vars[0],
      self->vars[0]);
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__lambda_V0k363(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__lambda_V0k363, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.take-right.63 17 33) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__lambda_V0k364) (bruijn ##.ids.291 11 4) 1)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 17-1, 33)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__lambda_V0k364, self)))),
      VGetArg(statics, 11-1, 4),
      VEncodeInt(1l));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__lambda_V0k362(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__lambda_V0k362, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.dotted?.289 10 2) ((bruijn ##.drop-right.62 16 32) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__lambda_V0k363) (bruijn ##.ids.291 10 4) 1) ((bruijn ##.%k.934 0 0) (bruijn ##.ids.291 10 4)))
if(VDecodeBool(
VGetArg(statics, 10-1, 2))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 32)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__lambda_V0k363, self)))),
      VGetArg(statics, 10-1, 4),
      VEncodeInt(1l));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 10-1, 4));
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__lambda_V0k365(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__lambda_V0k365, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 2 2 (##.%x.1580 ##.%r.1581) ((##vcore.cons (bruijn ##.exp-body.298 2 0) '()) (##vcore.cons (bruijn ##.%x.932 1 0) (bruijn ##.%x.1580 0 0))) ((bruijn ##.%k.928 15 0) (bruijn ##.%r.1581 0 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[0],
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      self->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 0)), 1,
      self->vars[1]);
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__lambda_V0k361(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__lambda_V0k361, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__lambda_V0k362) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__lambda_V0k365))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__lambda_V0k362, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__lambda_V0k365, self)))));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__lambda_V0k360(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__lambda_V0k360, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler hygienic expand expand-body) #t (bruijn ##.expand-body.132 13 17) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__lambda_V0k361) (bruijn ##.%x.938 0 0) (bruijn ##.body-env.297 1 0))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0expand;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__lambda_V0k361, self))));
    VWORD _arg1 = 
      _var0;
    VWORD _arg2 = 
      statics->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body, _V60_V0vanity_V0compiler_V0hygienic_V0expand)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__lambda_V0k359(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__lambda_V0k359, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.flip-scope.44 13 14) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__lambda_V0k360) (bruijn ##.body.288 7 1) (bruijn ##.sc.290 7 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 14)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__lambda_V0k360, self)))),
      VGetArg(statics, 7-1, 1),
      VGetArg(statics, 7-1, 3));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__lambda_V0k358(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__lambda_V0k358, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.append.37 12 7) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__lambda_V0k359) (bruijn ##.%x.939 0 0) (bruijn ##.env.286 10 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 7)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__lambda_V0k359, self)))),
      _var0,
      VGetArg(statics, 10-1, 2));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__lambda_V0lambda35(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__lambda_V0lambda35, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.%r.1583) ((##vcore.cons (bruijn ##.binding.299 1 1) (bruijn ##.variable.140 12 25))) ((bruijn ##.%k.940 1 0) (bruijn ##.%r.1583 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->vars[1],
      VGetArg(statics, 12-1, 25));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      self->vars[0]);
    }
}
static void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__lambda_V0k357(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.map.30 11 0) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__lambda_V0k358) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__lambda_V0lambda35) (bruijn ##.bindings.292 5 5))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__lambda_V0k358, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__lambda_V0lambda35, self)))),
      VGetArg(statics, 5-1, 5));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__lambda_V0lambda36(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__lambda_V0lambda36, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  // (##qualified-call (vanity compiler hygienic expand add-binding!) #t (bruijn ##.add-binding!.158 11 43) (bruijn ##.%k.941 0 0) (bruijn ##.id.295 0 1) (bruijn ##.binding.296 0 2))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0expand;
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      _var1;
    VWORD _arg2 = 
      _var2;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0add__binding_B, _V60_V0vanity_V0compiler_V0hygienic_V0expand)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0add__binding_B(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
static void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__lambda_V0k356(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.for-each.59 11 29) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__lambda_V0k357) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__lambda_V0lambda36) (bruijn ##.ids.291 5 4) (bruijn ##.bindings.292 5 5))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 29)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__lambda_V0k357, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__lambda_V0lambda36, self)))),
      VGetArg(statics, 5-1, 4),
      VGetArg(statics, 5-1, 5));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__lambda_V0k355(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__lambda_V0k355, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__lambda_V0k356) (bruijn ##.bindings.292 5 5) (bruijn ##.%x.942 0 0))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__lambda_V0k356, self)))),
      VEncodeInt(5l), VEncodeInt(5l),
      _var0
    );
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__lambda_V0k366(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__lambda_V0k366, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.generate-symbol.90 12 60) (bruijn ##.%k.943 1 0) (bruijn ##.%x.944 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 60)), 2,
      statics->vars[0],
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__lambda_V0lambda37(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__lambda_V0lambda37, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.get-syntax-data.42 11 12) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__lambda_V0k366) (bruijn ##.e.294 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 12)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__lambda_V0k366, self)))),
      _var1);
}
static void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__lambda_V0k354(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.map.30 10 0) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__lambda_V0k355) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__lambda_V0lambda37) (bruijn ##.ids.291 4 4))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__lambda_V0k355, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__lambda_V0lambda37, self)))),
      statics->up->up->up->vars[4]);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__lambda_V0k353(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__lambda_V0k353, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__lambda_V0k354) (bruijn ##.ids.291 4 4) (bruijn ##.%x.945 0 0))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__lambda_V0k354, self)))),
      VEncodeInt(4l), VEncodeInt(4l),
      _var0
    );
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__lambda_V0lambda38(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__lambda_V0lambda38, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.flip-scope.44 10 14) (bruijn ##.%k.946 0 0) (bruijn ##.id.293 0 1) (bruijn ##.sc.290 4 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 14)), 3,
      _var0,
      _var1,
      statics->up->up->up->vars[3]);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__lambda_V0k352(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__lambda_V0k352, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.syntax-map.81 9 51) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__lambda_V0k353) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__lambda_V0lambda38) (bruijn ##.%x.947 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 51)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__lambda_V0k353, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__lambda_V0lambda38, self)))),
      _var0);
}
static void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__lambda_V0k351(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##qualified-call (vanity compiler hygienic expand syntax-undot-list) #t (bruijn ##.syntax-undot-list.134 7 19) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__lambda_V0k352) (bruijn ##.formals.287 2 0))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0expand;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__lambda_V0k352, self))));
    VWORD _arg1 = 
      statics->up->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__undot__list, _V60_V0vanity_V0compiler_V0hygienic_V0expand)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__undot__list(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__lambda_V0k350(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__lambda_V0k350, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%x.1579) ((##vcore.not (bruijn ##.%x.949 1 0))) (set! (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__lambda_V0k351) (bruijn ##.dotted?.289 2 2) (bruijn ##.%x.1579 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VNot2(runtime, NULL,
      statics->vars[0]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__lambda_V0k351, self)))),
      VEncodeInt(2l), VEncodeInt(2l),
      self->vars[0]
    );
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__lambda_V0k349(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__lambda_V0k349, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (letrec 6 ((bruijn ##.%x.929 3 0) (bruijn ##.%x.930 2 0) #f (bruijn ##.%x.931 1 0) #f #f) (##qualified-call (vanity compiler hygienic expand syntax-proper-list?) #t (bruijn ##.syntax-proper-list?.124 5 9) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__lambda_V0k350) (bruijn ##.formals.287 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[6]; } container;
    self = &container.self;
    VInitEnv(self, 6, 6, statics);
    self->vars[0] = statics->up->up->vars[0];
    self->vars[1] = statics->up->vars[0];
    self->vars[2] = VEncodeBool(false);
    self->vars[3] = statics->vars[0];
    self->vars[4] = VEncodeBool(false);
    self->vars[5] = VEncodeBool(false);
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0expand;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__lambda_V0k350, self))));
    VWORD _arg1 = 
      self->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__proper__list_Q, _V60_V0vanity_V0compiler_V0hygienic_V0expand)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__proper__list_Q(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__lambda_V0k348(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__lambda_V0k348, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.make-scope.40 4 10) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__lambda_V0k349))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[10]), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__lambda_V0k349, self)))));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__lambda_V0k347(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__lambda_V0k347, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.syntax-cdr.84 3 54) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__lambda_V0k348) (bruijn ##.stx.285 1 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[54]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__lambda_V0k348, self)))),
      statics->vars[1]);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__lambda(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__lambda, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((bruijn ##.syntax-car.78 2 48) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__lambda_V0k347) (bruijn ##.stx.285 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[48]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__lambda_V0k347, self)))),
      _var1);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dintroduce_D303(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dintroduce_D303, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // (##qualified-call (vanity compiler hygienic expand introduced-identifier) #t (bruijn ##.introduced-identifier.137 4 22) (bruijn ##.%k.952 0 0) (bruijn ##.x.306 0 1) (bruijn ##.introduced-sc.302 1 0))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0expand;
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      _var1;
    VWORD _arg2 = 
      statics->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0introduced__identifier, _V60_V0vanity_V0compiler_V0hygienic_V0expand)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0introduced__identifier(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
static void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dfinish__constants_D304_V0k374(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.%k.953 9 0) (bruijn ##.expr.309 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 0)), 1,
      self->vars[0]);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dfinish__constants_D304_V0k377(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dfinish__constants_D304_V0k377, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%x.1589) ((##vcore.cons 'define-constant (bruijn ##.%x.958 1 0))) ((bruijn ##.compiler-error.36 19 6) (bruijn ##.%k.955 4 0) (##string ##.string.1775) (bruijn ##.%x.1589 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      _V0define__constant,
      statics->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 19-1, 6)), 3,
      statics->up->up->up->vars[0],
      VEncodePointer(&_V10_Dstring_D1775.sym, VPOINTER_OTHER),
      self->vars[0]);
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dfinish__constants_D304_V0k376(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dfinish__constants_D304_V0k376, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.956 0 0) ((bruijn ##.%k.955 2 0) #void) (##qualified-call (vanity compiler hygienic expand syntax-object->datum) #t (bruijn ##.syntax-object->datum.156 16 41) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dfinish__constants_D304_V0k377) (bruijn ##.e.310 2 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VVOID);
} else {
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0expand;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dfinish__constants_D304_V0k377, self))));
    VWORD _arg1 = 
      statics->up->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__object___Gdatum, _V60_V0vanity_V0compiler_V0hygienic_V0expand)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__object___Gdatum(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dfinish__constants_D304_V0k375(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dfinish__constants_D304_V0k375, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler hygienic expand constant-expr?) #t (bruijn ##.constant-expr?.133 15 18) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dfinish__constants_D304_V0k376) (bruijn ##.%x.959 0 0))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0expand;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dfinish__constants_D304_V0k376, self))));
    VWORD _arg1 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0constant__expr_Q, _V60_V0vanity_V0compiler_V0hygienic_V0expand)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0constant__expr_Q(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dfinish__constants_D304_V0lambda39(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dfinish__constants_D304_V0lambda39, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.syntax-cadr.79 15 49) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dfinish__constants_D304_V0k375) (bruijn ##.e.310 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 49)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dfinish__constants_D304_V0k375, self)))),
      _var1);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dfinish__constants_D304_V0k373(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dfinish__constants_D304_V0k373, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.for-each.59 14 29) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dfinish__constants_D304_V0k374) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dfinish__constants_D304_V0lambda39) (bruijn ##.constants.307 9 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 29)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dfinish__constants_D304_V0k374, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dfinish__constants_D304_V0lambda39, self)))),
      VGetArg(statics, 9-1, 1));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dfinish__constants_D304_V0k372(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dfinish__constants_D304_V0k372, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%x.1588) ((##vcore.cons (bruijn ##.%x.1587 3 2) (bruijn ##.%x.962 1 0))) (##qualified-call (vanity compiler hygienic expand expand-impl) #t (bruijn ##.expand-impl.117 12 2) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dfinish__constants_D304_V0k373) (bruijn ##.%x.1588 0 0) (bruijn ##.env.301 11 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->up->up->vars[2],
      statics->vars[0]);
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0expand;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dfinish__constants_D304_V0k373, self))));
    VWORD _arg1 = 
      self->vars[0];
    VWORD _arg2 = 
      VGetArg(statics, 11-1, 2);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__impl, _V60_V0vanity_V0compiler_V0hygienic_V0expand)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__impl(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dfinish__constants_D304_V0k371(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dfinish__constants_D304_V0k371, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.map.30 11 0) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dfinish__constants_D304_V0k372) (bruijn ##.syntax-cadr.79 11 49) (bruijn ##.%x.963 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dfinish__constants_D304_V0k372, self)))),
      VGetArg(statics, 11-1, 49),
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dfinish__constants_D304_V0k370(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dfinish__constants_D304_V0k370, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 3 3 (##.%x.1585 ##.%x.1586 ##.%x.1587) ((##vcore.cons (bruijn ##.body.308 5 2) '()) (##vcore.cons (bruijn ##.%x.966 1 0) (bruijn ##.%x.1585 0 0)) (##vcore.cons (bruijn ##.%x.964 3 0) (bruijn ##.%x.1586 0 1))) ((bruijn ##.reverse.54 10 24) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dfinish__constants_D304_V0k371) (bruijn ##.constants.307 5 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 5-1, 2),
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      self->vars[0]);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      statics->up->up->vars[0],
      self->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 24)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dfinish__constants_D304_V0k371, self)))),
      VGetArg(statics, 5-1, 1));
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dfinish__constants_D304_V0k369(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dfinish__constants_D304_V0k369, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.map.30 8 0) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dfinish__constants_D304_V0k370) (bruijn ##.syntax-car.78 8 48) (bruijn ##.%x.968 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dfinish__constants_D304_V0k370, self)))),
      VGetArg(statics, 8-1, 48),
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dfinish__constants_D304_V0k368(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dfinish__constants_D304_V0k368, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.reverse.54 7 24) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dfinish__constants_D304_V0k369) (bruijn ##.constants.307 2 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 24)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dfinish__constants_D304_V0k369, self)))),
      statics->up->vars[1]);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dfinish__constants_D304(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dfinish__constants_D304, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 1 1 (##.%p.1584) ((##vcore.null? (bruijn ##.constants.307 1 1))) (if (bruijn ##.%p.1584 0 0) (##qualified-call (vanity compiler hygienic expand expand-impl) #t (bruijn ##.expand-impl.117 5 2) (bruijn ##.%k.953 1 0) (bruijn ##.body.308 1 2) (bruijn ##.env.301 4 2)) (##qualified-call (vanity compiler hygienic expand expand-body ##.introduce.303) #f (bruijn ##.introduce.303 2 1) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dfinish__constants_D304_V0k368) 'lambda)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VNullP2(runtime, NULL,
      statics->vars[1]);
if(VDecodeBool(
self->vars[0])) {
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0expand;
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      statics->vars[2];
    VWORD _arg2 = 
      statics->up->up->up->vars[2];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__impl, _V60_V0vanity_V0compiler_V0hygienic_V0expand)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__impl(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
} else {
  {
    VClosure * _closure = VDecodeClosure(statics->up->vars[1]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dfinish__constants_D304_V0k368, self))));
    VWORD _arg1 = 
      _V0lambda;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dintroduce_D303(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dfinish_D305_V0k381(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dfinish_D305_V0k381, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 3 3 (##.%x.1592 ##.%x.1593 ##.%r.1594) ((##vcore.cons (bruijn ##.body.1590 4 0) '()) (##vcore.cons (bruijn ##.%x.975 1 0) (bruijn ##.%x.1592 0 0)) (##vcore.cons (bruijn ##.%x.973 2 0) (bruijn ##.%x.1593 0 1))) ((bruijn ##.%k.972 3 0) (bruijn ##.%r.1594 0 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->up->up->up->vars[0],
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      self->vars[0]);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[0],
      self->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      self->vars[2]);
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dfinish_D305_V0k380(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dfinish_D305_V0k380, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.reverse.54 9 24) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dfinish_D305_V0k381) (bruijn ##.defines.311 4 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 24)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dfinish_D305_V0k381, self)))),
      statics->up->up->up->vars[1]);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dfinish_D305_V0k379(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dfinish_D305_V0k379, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1591 1 1) ((bruijn ##.%k.972 0 0) (bruijn ##.body.1590 1 0)) (##qualified-call (vanity compiler hygienic expand expand-body ##.introduce.303) #f (bruijn ##.introduce.303 4 1) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dfinish_D305_V0k380) 'letrec*))
if(VDecodeBool(
statics->vars[1])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->vars[0]);
} else {
  {
    VClosure * _closure = VDecodeClosure(statics->up->up->up->vars[1]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dfinish_D305_V0k380, self))));
    VWORD _arg1 = 
      _V0letrec_S;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dintroduce_D303(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dfinish_D305_V0k382(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dfinish_D305_V0k382, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler hygienic expand expand-body ##.finish-constants.304) #f (bruijn ##.finish-constants.304 4 2) (bruijn ##.%k.969 3 0) (bruijn ##.constants.312 3 2) (bruijn ##.%x.970 0 0))
  {
    VClosure * _closure = VDecodeClosure(statics->up->up->up->vars[2]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->up->up->vars[0];
    VWORD _arg1 = 
      statics->up->up->vars[2];
    VWORD _arg2 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dfinish__constants_D304(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dfinish_D305_V0k378(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dfinish_D305_V0k378, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 2 2 (##.body.1590 ##.%p.1591) ((##vcore.cons (bruijn ##.%x.977 1 0) (bruijn ##.body.313 2 3)) (##vcore.null? (bruijn ##.defines.311 2 1))) ((close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dfinish_D305_V0k379) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dfinish_D305_V0k382)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      statics->up->vars[3]);
    self->vars[1] = _VBasic_VNullP2(runtime, NULL,
      statics->up->vars[1]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dfinish_D305_V0k379, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dfinish_D305_V0k382, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dfinish_D305(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dfinish_D305, got ~D~N"
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
  // (##qualified-call (vanity compiler hygienic expand expand-body ##.introduce.303) #f (bruijn ##.introduce.303 1 1) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dfinish_D305_V0k378) 'begin)
  {
    VClosure * _closure = VDecodeClosure(statics->vars[1]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dfinish_D305_V0k378, self))));
    VWORD _arg1 = 
      _V0begin;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dintroduce_D303(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V0k387(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V0k387, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.identifier?.34 11 4) (bruijn ##.%k.1077 3 0) (bruijn ##.%x.1079 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 4)), 2,
      statics->up->up->vars[0],
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V0k386(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V0k386, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1078 0 0) ((bruijn ##.syntax-caar.86 10 56) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V0k387) (bruijn ##.body.318 4 3)) ((bruijn ##.%k.1077 2 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 56)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V0k387, self)))),
      statics->up->up->up->vars[3]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V0k385(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V0k385, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.syntax-pair?.38 9 8) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V0k386) (bruijn ##.%x.1080 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 8)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V0k386, self)))),
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V0k384(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V0k384, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1076 1 0) ((bruijn ##.syntax-car.78 8 48) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V0k385) (bruijn ##.body.318 2 3)) ((bruijn ##.%k.1077 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 48)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V0k385, self)))),
      statics->up->vars[3]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V0k393(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V0k393, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler hygienic expand expand-body ##.loop.315) #f (bruijn ##.loop.315 9 0) (bruijn ##.%k.978 8 0) (bruijn ##.defines.316 8 1) (bruijn ##.constants.317 8 2) (bruijn ##.%x.981 0 0))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 9-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      VGetArg(statics, 8-1, 0);
    VWORD _arg1 = 
      VGetArg(statics, 8-1, 1);
    VWORD _arg2 = 
      VGetArg(statics, 8-1, 2);
    VWORD _arg3 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V0k392(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V0k392, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler hygienic expand syntax-append) #t (bruijn ##.syntax-append.148 12 33) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V0k393) (bruijn ##.%x.982 1 0) (bruijn ##.%x.983 0 0))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0expand;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V0k393, self))));
    VWORD _arg1 = 
      statics->vars[0];
    VWORD _arg2 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__append, _V60_V0vanity_V0compiler_V0hygienic_V0expand)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__append(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V0k391(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V0k391, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.syntax-cdr.84 12 54) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V0k392) (bruijn ##.body.318 6 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 54)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V0k392, self)))),
      VGetArg(statics, 6-1, 3));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V0k403(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V0k403, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler hygienic expand expand-body ##.loop.315) #f (bruijn ##.loop.315 18 0) (bruijn ##.%k.978 17 0) (bruijn ##.%x.1601 1 4) (bruijn ##.constants.317 17 2) (bruijn ##.%x.987 0 0))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 18-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      VGetArg(statics, 17-1, 0);
    VWORD _arg1 = 
      statics->vars[4];
    VWORD _arg2 = 
      VGetArg(statics, 17-1, 2);
    VWORD _arg3 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V0k402(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V0k402, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 5 5 (##.%x.1597 ##.%x.1598 ##.%x.1599 ##.%x.1600 ##.%x.1601) ((##vcore.cons (bruijn ##.%x.994 2 0) (bruijn ##.%x.995 1 0)) (##vcore.cons (bruijn ##.%x.992 4 0) (bruijn ##.%x.1597 0 0)) (##vcore.cons (bruijn ##.%x.1598 0 1) '()) (##vcore.cons (bruijn ##.%x.989 5 0) (bruijn ##.%x.1599 0 2)) (##vcore.cons (bruijn ##.%x.1600 0 3) (bruijn ##.defines.316 16 1))) ((bruijn ##.syntax-cdr.84 22 54) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V0k403) (bruijn ##.body.318 16 3)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[5]; } container;
    self = &container.self;
    VInitEnv(self, 5, 5, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[0],
      statics->vars[0]);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      statics->up->up->up->vars[0],
      self->vars[0]);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      self->vars[1],
      VNULL);
    self->vars[3] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 5-1, 0),
      self->vars[2]);
    self->vars[4] = _VBasic_VCons2(runtime, NULL,
      self->vars[3],
      VGetArg(statics, 16-1, 1));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 22-1, 54)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V0k403, self)))),
      VGetArg(statics, 16-1, 3));
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V0k401(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V0k401, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.syntax-cddr.80 20 50) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V0k402) (bruijn ##.def.321 7 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 20-1, 50)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V0k402, self)))),
      VGetArg(statics, 7-1, 0));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V0k400(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V0k400, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.syntax-cdr.84 19 54) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V0k401) (bruijn ##.%x.996 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 19-1, 54)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V0k401, self)))),
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V0k399(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V0k399, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.syntax-cadr.79 18 49) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V0k400) (bruijn ##.def.321 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 18-1, 49)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V0k400, self)))),
      VGetArg(statics, 5-1, 0));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V0k398(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V0k398, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler hygienic expand expand-body ##.introduce.303) #f (bruijn ##.introduce.303 13 1) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V0k399) 'lambda)
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 13-1, 1));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V0k399, self))));
    VWORD _arg1 = 
      _V0lambda;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dintroduce_D303(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V0k397(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V0k397, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.syntax-car.78 16 48) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V0k398) (bruijn ##.%x.997 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 48)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V0k398, self)))),
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V0k405(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V0k405, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler hygienic expand expand-body ##.loop.315) #f (bruijn ##.loop.315 13 0) (bruijn ##.%k.978 12 0) (bruijn ##.%x.1602 1 0) (bruijn ##.constants.317 12 2) (bruijn ##.%x.999 0 0))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 13-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      VGetArg(statics, 12-1, 0);
    VWORD _arg1 = 
      statics->vars[0];
    VWORD _arg2 = 
      VGetArg(statics, 12-1, 2);
    VWORD _arg3 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V0k404(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V0k404, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%x.1602) ((##vcore.cons (bruijn ##.%x.1000 1 0) (bruijn ##.defines.316 11 1))) ((bruijn ##.syntax-cdr.84 17 54) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V0k405) (bruijn ##.body.318 11 3)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      VGetArg(statics, 11-1, 1));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 17-1, 54)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V0k405, self)))),
      VGetArg(statics, 11-1, 3));
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V0k396(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V0k396, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.985 0 0) ((bruijn ##.syntax-cadr.79 15 49) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V0k397) (bruijn ##.def.321 2 0)) ((bruijn ##.syntax-cdr.84 15 54) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V0k404) (bruijn ##.def.321 2 0)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 49)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V0k397, self)))),
      statics->up->vars[0]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 54)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V0k404, self)))),
      statics->up->vars[0]);
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V0k395(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V0k395, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.syntax-pair?.38 14 8) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V0k396) (bruijn ##.%x.1001 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 8)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V0k396, self)))),
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V0k394(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V0k394, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.syntax-cadr.79 13 49) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V0k395) (bruijn ##.def.321 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 49)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V0k395, self)))),
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V0k415(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V0k415, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler hygienic expand expand-body ##.loop.315) #f (bruijn ##.loop.315 19 0) (bruijn ##.%k.978 18 0) (bruijn ##.defines.316 18 1) (bruijn ##.%x.1608 1 4) (bruijn ##.%x.1005 0 0))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 19-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      VGetArg(statics, 18-1, 0);
    VWORD _arg1 = 
      VGetArg(statics, 18-1, 1);
    VWORD _arg2 = 
      statics->vars[4];
    VWORD _arg3 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V0k414(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V0k414, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 5 5 (##.%x.1604 ##.%x.1605 ##.%x.1606 ##.%x.1607 ##.%x.1608) ((##vcore.cons (bruijn ##.%x.1012 2 0) (bruijn ##.%x.1013 1 0)) (##vcore.cons (bruijn ##.%x.1010 4 0) (bruijn ##.%x.1604 0 0)) (##vcore.cons (bruijn ##.%x.1605 0 1) '()) (##vcore.cons (bruijn ##.%x.1007 5 0) (bruijn ##.%x.1606 0 2)) (##vcore.cons (bruijn ##.%x.1607 0 3) (bruijn ##.constants.317 17 2))) ((bruijn ##.syntax-cdr.84 23 54) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V0k415) (bruijn ##.body.318 17 3)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[5]; } container;
    self = &container.self;
    VInitEnv(self, 5, 5, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[0],
      statics->vars[0]);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      statics->up->up->up->vars[0],
      self->vars[0]);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      self->vars[1],
      VNULL);
    self->vars[3] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 5-1, 0),
      self->vars[2]);
    self->vars[4] = _VBasic_VCons2(runtime, NULL,
      self->vars[3],
      VGetArg(statics, 17-1, 2));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 23-1, 54)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V0k415, self)))),
      VGetArg(statics, 17-1, 3));
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V0k413(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V0k413, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.syntax-cddr.80 21 50) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V0k414) (bruijn ##.def.322 7 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 21-1, 50)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V0k414, self)))),
      VGetArg(statics, 7-1, 0));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V0k412(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V0k412, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.syntax-cdr.84 20 54) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V0k413) (bruijn ##.%x.1014 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 20-1, 54)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V0k413, self)))),
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V0k411(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V0k411, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.syntax-cadr.79 19 49) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V0k412) (bruijn ##.def.322 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 19-1, 49)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V0k412, self)))),
      VGetArg(statics, 5-1, 0));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V0k410(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V0k410, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler hygienic expand expand-body ##.introduce.303) #f (bruijn ##.introduce.303 14 1) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V0k411) 'lambda)
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 14-1, 1));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V0k411, self))));
    VWORD _arg1 = 
      _V0lambda;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dintroduce_D303(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V0k409(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V0k409, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.syntax-car.78 17 48) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V0k410) (bruijn ##.%x.1015 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 17-1, 48)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V0k410, self)))),
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V0k417(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V0k417, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler hygienic expand expand-body ##.loop.315) #f (bruijn ##.loop.315 14 0) (bruijn ##.%k.978 13 0) (bruijn ##.defines.316 13 1) (bruijn ##.%x.1609 1 0) (bruijn ##.%x.1017 0 0))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 14-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      VGetArg(statics, 13-1, 0);
    VWORD _arg1 = 
      VGetArg(statics, 13-1, 1);
    VWORD _arg2 = 
      statics->vars[0];
    VWORD _arg3 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V0k416(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V0k416, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%x.1609) ((##vcore.cons (bruijn ##.%x.1018 1 0) (bruijn ##.constants.317 12 2))) ((bruijn ##.syntax-cdr.84 18 54) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V0k417) (bruijn ##.body.318 12 3)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      VGetArg(statics, 12-1, 2));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 18-1, 54)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V0k417, self)))),
      VGetArg(statics, 12-1, 3));
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V0k408(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V0k408, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1003 0 0) ((bruijn ##.syntax-cadr.79 16 49) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V0k409) (bruijn ##.def.322 2 0)) ((bruijn ##.syntax-cdr.84 16 54) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V0k416) (bruijn ##.def.322 2 0)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 49)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V0k409, self)))),
      statics->up->vars[0]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 54)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V0k416, self)))),
      statics->up->vars[0]);
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V0k407(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V0k407, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.syntax-pair?.38 15 8) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V0k408) (bruijn ##.%x.1019 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 8)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V0k408, self)))),
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V0k406(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V0k406, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.syntax-cadr.79 14 49) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V0k407) (bruijn ##.def.322 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 49)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V0k407, self)))),
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V10_Dloop_D329_V0k435(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V10_Dloop_D329_V0k435, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%r.1616) ((##vcore.cons (bruijn ##.%x.1614 4 0) (bruijn ##.%x.1049 1 0))) ((bruijn ##.%k.1046 6 0) (bruijn ##.%r.1616 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->up->up->up->vars[0],
      statics->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 1,
      self->vars[0]);
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V10_Dloop_D329_V0k434(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V10_Dloop_D329_V0k434, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%x.1615) ((##vcore.cdr (bruijn ##.mangles.331 4 2))) (##qualified-call (vanity compiler hygienic expand expand-body ##.loop.315 ##.loop.329) #f (bruijn ##.loop.329 5 0) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V10_Dloop_D329_V0k435) (bruijn ##.%x.1050 1 0) (bruijn ##.%x.1615 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      statics->up->up->up->vars[2]);
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 5-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V10_Dloop_D329_V0k435, self))));
    VWORD _arg1 = 
      statics->vars[0];
    VWORD _arg2 = 
      self->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V10_Dloop_D329(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V10_Dloop_D329_V0k436(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V10_Dloop_D329_V0k436, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1052 0 0) ((bruijn ##.%k.1046 2 0) '()) (basic-block 1 1 (##.%r.1617) ((##vcore.car (bruijn ##.mangles.331 3 2))) ((bruijn ##.%k.1046 3 0) (bruijn ##.%r.1617 0 0))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VNULL);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->up->vars[2]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      self->vars[0]);
    }
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V10_Dloop_D329_V0k433(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V10_Dloop_D329_V0k433, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1047 0 0) (basic-block 1 1 (##.%x.1614) ((##vcore.car (bruijn ##.mangles.331 2 2))) ((bruijn ##.syntax-cdr.84 31 54) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V10_Dloop_D329_V0k434) (bruijn ##.formals.330 2 1))) ((bruijn ##.syntax-null?.88 30 58) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V10_Dloop_D329_V0k436) (bruijn ##.formals.330 1 1)))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->vars[2]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 31-1, 54)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V10_Dloop_D329_V0k434, self)))),
      statics->up->vars[1]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 30-1, 58)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V10_Dloop_D329_V0k436, self)))),
      statics->vars[1]);
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V10_Dloop_D329(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V10_Dloop_D329, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((bruijn ##.syntax-pair?.38 29 8) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V10_Dloop_D329_V0k433) (bruijn ##.formals.330 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 29-1, 8)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V10_Dloop_D329_V0k433, self)))),
      _var1);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V0k442(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V0k442, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler hygienic expand expand-body ##.loop.315) #f (bruijn ##.loop.315 30 0) (bruijn ##.%k.978 29 0) (bruijn ##.%x.1022 1 0) (bruijn ##.constants.317 29 2) (bruijn ##.%x.1023 0 0))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 30-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      VGetArg(statics, 29-1, 0);
    VWORD _arg1 = 
      statics->vars[0];
    VWORD _arg2 = 
      VGetArg(statics, 29-1, 2);
    VWORD _arg3 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V0k441(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V0k441, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.syntax-cdr.84 34 54) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V0k442) (bruijn ##.body.318 28 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 34-1, 54)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V0k442, self)))),
      VGetArg(statics, 28-1, 3));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V0k440(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V0k440, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.append.37 33 7) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V0k441) (bruijn ##.%x.1626 2 8) (bruijn ##.%x.1025 0 0) (bruijn ##.defines.316 27 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 33-1, 7)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V0k441, self)))),
      statics->up->vars[8],
      _var0,
      VGetArg(statics, 27-1, 1));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V0k439(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V0k439, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.reverse.54 32 24) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V0k440) (bruijn ##.%x.1026 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 32-1, 24)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V0k440, self)))),
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V0lambda40(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V0lambda40, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.list.31 32 1) (bruijn ##.%k.1027 0 0) (bruijn ##.name.334 0 1) #f)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 32-1, 1)), 3,
      _var0,
      _var1,
      VEncodeBool(false));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V0k438(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V0k438, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 9 9 (##.%x.1618 ##.%x.1619 ##.%x.1620 ##.%x.1621 ##.%x.1622 ##.%x.1623 ##.%x.1624 ##.%x.1625 ##.%x.1626) ((##vcore.cons '#void (bruijn ##.%x.1041 1 0)) (##vcore.cons (bruijn ##.%x.1039 2 0) (bruijn ##.%x.1618 0 0)) (##vcore.cons (bruijn ##.%x.1037 4 0) (bruijn ##.%x.1619 0 1)) (##vcore.cons (bruijn ##.%x.1620 0 2) '()) (##vcore.cons (bruijn ##.%x.1613 5 2) (bruijn ##.%x.1621 0 3)) (##vcore.cons (bruijn ##.%x.1032 7 0) (bruijn ##.%x.1622 0 4)) (##vcore.cons (bruijn ##.%x.1623 0 5) '()) (##vcore.cons (bruijn ##.%x.1029 8 0) (bruijn ##.%x.1624 0 6)) (##vcore.cons (bruijn ##.%x.1625 0 7) '())) ((bruijn ##.map.30 31 0) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V0k439) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V0lambda40) (bruijn ##.names.325 15 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[9]; } container;
    self = &container.self;
    VInitEnv(self, 9, 9, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      VVOID,
      statics->vars[0]);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[0],
      self->vars[0]);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      statics->up->up->up->vars[0],
      self->vars[1]);
    self->vars[3] = _VBasic_VCons2(runtime, NULL,
      self->vars[2],
      VNULL);
    self->vars[4] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 5-1, 2),
      self->vars[3]);
    self->vars[5] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 7-1, 0),
      self->vars[4]);
    self->vars[6] = _VBasic_VCons2(runtime, NULL,
      self->vars[5],
      VNULL);
    self->vars[7] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 8-1, 0),
      self->vars[6]);
    self->vars[8] = _VBasic_VCons2(runtime, NULL,
      self->vars[7],
      VNULL);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 31-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V0k439, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V0lambda40, self)))),
      VGetArg(statics, 15-1, 2));
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V0k443(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V0k443, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 3 3 (##.%x.1627 ##.%x.1628 ##.%r.1629) ((##vcore.cons (bruijn ##.mangle.333 2 2) '()) (##vcore.cons (bruijn ##.name.332 2 1) (bruijn ##.%x.1627 0 0)) (##vcore.cons (bruijn ##.%x.1043 1 0) (bruijn ##.%x.1628 0 1))) ((bruijn ##.%k.1042 2 0) (bruijn ##.%r.1629 0 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[2],
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[1],
      self->vars[0]);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      self->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      self->vars[2]);
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V0lambda41(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V0lambda41, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (##qualified-call (vanity compiler hygienic expand expand-body ##.introduce.303) #f (bruijn ##.introduce.303 26 1) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V0k443) 'set!)
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 26-1, 1));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V0k443, self))));
    VWORD _arg1 = 
      _V0set_B;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dintroduce_D303(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V0k437(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V0k437, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.map.30 29 0) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V0k438) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V0lambda41) (bruijn ##.names.325 13 2) (bruijn ##.mangles.326 13 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 29-1, 0)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V0k438, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V0lambda41, self)))),
      VGetArg(statics, 13-1, 2),
      VGetArg(statics, 13-1, 3));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V0k432(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V0k432, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (letrec 1 ((close "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V10_Dloop_D329")) (##qualified-call (vanity compiler hygienic expand expand-body ##.loop.315 ##.loop.329) #f (bruijn ##.loop.329 0 0) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V0k437) (bruijn ##.formals.324 12 1) (bruijn ##.mangles.326 12 3)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V10_Dloop_D329, self))));
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V0k437, self))));
    VWORD _arg1 = 
      VGetArg(statics, 12-1, 1);
    VWORD _arg2 = 
      VGetArg(statics, 12-1, 3);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V10_Dloop_D329(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V0k431(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V0k431, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 3 3 (##.%x.1611 ##.%x.1612 ##.%x.1613) ((##vcore.cons (bruijn ##.def-body.327 10 4) '()) (##vcore.cons '() (bruijn ##.%x.1611 0 0)) (##vcore.cons (bruijn ##.%x.1053 1 0) (bruijn ##.%x.1612 0 1))) (##qualified-call (vanity compiler hygienic expand expand-body ##.introduce.303) #f (bruijn ##.introduce.303 22 1) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V0k432) 'lambda))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 10-1, 4),
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      VNULL,
      self->vars[0]);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      self->vars[1]);
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 22-1, 1));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V0k432, self))));
    VWORD _arg1 = 
      _V0lambda;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dintroduce_D303(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V0k430(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V0k430, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler hygienic expand expand-body ##.introduce.303) #f (bruijn ##.introduce.303 20 1) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V0k431) 'lambda)
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 20-1, 1));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V0k431, self))));
    VWORD _arg1 = 
      _V0lambda;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dintroduce_D303(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V0k429(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V0k429, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler hygienic expand expand-body ##.introduce.303) #f (bruijn ##.introduce.303 19 1) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V0k430) '##vcore.call-with-values)
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 19-1, 1));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V0k430, self))));
    VWORD _arg1 = 
      _V10vcore_Dcall__with__values;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dintroduce_D303(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V0k428(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V0k428, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler hygienic expand expand-body ##.introduce.303) #f (bruijn ##.introduce.303 18 1) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V0k429) (bruijn ##.%x.1056 0 0))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 18-1, 1));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V0k429, self))));
    VWORD _arg1 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dintroduce_D303(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
static void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V0k427(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.generate-symbol.90 21 60) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V0k428) 'dummy)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 21-1, 60)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V0k428, self)))),
      _V0dummy);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V0k426(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V0k426, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V0k427) (bruijn ##.def-body.327 5 4) (bruijn ##.%x.1057 0 0))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V0k427, self)))),
      VEncodeInt(5l), VEncodeInt(4l),
      _var0
    );
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V0k425(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V0k425, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.syntax-car.78 20 48) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V0k426) (bruijn ##.%x.1058 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 20-1, 48)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V0k426, self)))),
      _var0);
}
static void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V0k424(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.syntax-cddr.80 19 50) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V0k425) (bruijn ##.def.323 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 19-1, 50)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V0k425, self)))),
      statics->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V0k423(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V0k423, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V0k424) (bruijn ##.mangles.326 3 3) (bruijn ##.%x.1059 0 0))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V0k424, self)))),
      VEncodeInt(3l), VEncodeInt(3l),
      _var0
    );
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V0k444(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V0k444, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler hygienic expand expand-body ##.introduce.303) #f (bruijn ##.introduce.303 16 1) (bruijn ##.%k.1060 1 0) (bruijn ##.%x.1061 0 0))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 16-1, 1));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dintroduce_D303(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V0lambda42(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V0lambda42, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.generate-symbol.90 19 60) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V0k444) 'tmp)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 19-1, 60)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V0k444, self)))),
      _V0tmp);
}
static void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V0k422(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.map.30 18 0) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V0k423) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V0lambda42) (bruijn ##.names.325 2 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 18-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V0k423, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V0lambda42, self)))),
      statics->up->vars[2]);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V0k421(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V0k421, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V0k422) (bruijn ##.names.325 2 2) (bruijn ##.%x.1062 0 0))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V0k422, self)))),
      VEncodeInt(2l), VEncodeInt(2l),
      _var0
    );
}
static void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V0k420(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##qualified-call (vanity compiler hygienic expand syntax-undot-list) #t (bruijn ##.syntax-undot-list.134 16 19) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V0k421) (bruijn ##.formals.324 1 1))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0expand;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V0k421, self))));
    VWORD _arg1 = 
      statics->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__undot__list, _V60_V0vanity_V0compiler_V0hygienic_V0expand)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__undot__list(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V0k419(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V0k419, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V0k420) (bruijn ##.formals.324 1 1) (bruijn ##.%x.1063 0 0))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V0k420, self)))),
      VEncodeInt(1l), VEncodeInt(1l),
      _var0
    );
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V0k418(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V0k418, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (letrec 5 ((bruijn ##.%x.1021 1 0) #f #f #f #f) ((bruijn ##.syntax-cadr.79 16 49) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V0k419) (bruijn ##.def.323 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[5]; } container;
    self = &container.self;
    VInitEnv(self, 5, 5, statics);
    self->vars[0] = statics->vars[0];
    self->vars[1] = VEncodeBool(false);
    self->vars[2] = VEncodeBool(false);
    self->vars[3] = VEncodeBool(false);
    self->vars[4] = VEncodeBool(false);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 49)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V0k419, self)))),
      self->vars[0]);
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V0k446(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V0k446, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.v.335 1 0) (basic-block 2 2 (##.%x.1632 ##.%r.1633) ((##vcore.cdr (bruijn ##.v.335 2 0)) (##vcore.procedure? (bruijn ##.%x.1632 0 0))) ((bruijn ##.%k.1073 1 0) (bruijn ##.%r.1633 0 1))) ((bruijn ##.%k.1073 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      statics->up->vars[0]);
    self->vars[1] = _VBasic_VProcedureP2(runtime, NULL,
      self->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      self->vars[1]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V0k452(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V0k452, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%x.1631) ((##vcore.cons (bruijn ##.%x.1067 2 0) (bruijn ##.%x.1068 1 0))) (##qualified-call (vanity compiler hygienic expand expand-body ##.loop.315) #f (bruijn ##.loop.315 19 0) (bruijn ##.%k.978 18 0) (bruijn ##.defines.316 18 1) (bruijn ##.constants.317 18 2) (bruijn ##.%x.1631 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[0],
      statics->vars[0]);
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 19-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      VGetArg(statics, 18-1, 0);
    VWORD _arg1 = 
      VGetArg(statics, 18-1, 1);
    VWORD _arg2 = 
      VGetArg(statics, 18-1, 2);
    VWORD _arg3 = 
      self->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V0k451(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V0k451, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.syntax-cdr.84 22 54) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V0k452) (bruijn ##.body.318 16 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 22-1, 54)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V0k452, self)))),
      VGetArg(statics, 16-1, 3));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V0k450(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V0k450, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler hygienic expand apply-transformer) #t (bruijn ##.apply-transformer.119 20 4) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V0k451) (bruijn ##.%x.1069 2 0) (bruijn ##.%x.1630 1 0) (bruijn ##.%x.1071 0 0))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0expand;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V0k451, self))));
    VWORD _arg1 = 
      statics->up->vars[0];
    VWORD _arg2 = 
      statics->vars[0];
    VWORD _arg3 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0apply__transformer, _V60_V0vanity_V0compiler_V0hygienic_V0expand)}, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0apply__transformer(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V0k449(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V0k449, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%x.1630) ((##vcore.cdr (bruijn ##.v.335 4 0))) ((bruijn ##.syntax-car.78 20 48) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V0k450) (bruijn ##.body.318 14 3)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      statics->up->up->up->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 20-1, 48)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V0k450, self)))),
      VGetArg(statics, 14-1, 3));
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V0k448(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V0k448, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.get-syntax-data.42 18 12) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V0k449) (bruijn ##.%x.1072 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 18-1, 12)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V0k449, self)))),
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V0k447(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V0k447, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1065 0 0) ((bruijn ##.syntax-caar.86 17 56) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V0k448) (bruijn ##.body.318 11 3)) (##qualified-call (vanity compiler hygienic expand expand-body ##.finish.305) #f (bruijn ##.finish.305 13 3) (bruijn ##.%k.978 11 0) (bruijn ##.defines.316 11 1) (bruijn ##.constants.317 11 2) (bruijn ##.body.318 11 3)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 17-1, 56)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V0k448, self)))),
      VGetArg(statics, 11-1, 3));
} else {
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 13-1, 3));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      VGetArg(statics, 11-1, 0);
    VWORD _arg1 = 
      VGetArg(statics, 11-1, 1);
    VWORD _arg2 = 
      VGetArg(statics, 11-1, 2);
    VWORD _arg3 = 
      VGetArg(statics, 11-1, 3);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dfinish_D305(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V0k445(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V0k445, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (letrec 1 ((bruijn ##.%x.1064 1 0)) ((close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V0k446) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V0k447)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = statics->vars[0];
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V0k446, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V0k447, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V0k390(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V0k390, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%p.1595) ((##vcore.eq? (bruijn ##.binding.319 1 0) 'begin)) (if (bruijn ##.%p.1595 0 0) ((bruijn ##.syntax-cdar.85 11 55) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V0k391) (bruijn ##.body.318 5 3)) (basic-block 1 1 (##.%p.1596) ((##vcore.eq? (bruijn ##.binding.319 2 0) 'define)) (if (bruijn ##.%p.1596 0 0) ((bruijn ##.syntax-car.78 12 48) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V0k394) (bruijn ##.body.318 6 3)) (basic-block 1 1 (##.%p.1603) ((##vcore.eq? (bruijn ##.binding.319 3 0) 'define-constant)) (if (bruijn ##.%p.1603 0 0) ((bruijn ##.syntax-car.78 13 48) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V0k406) (bruijn ##.body.318 7 3)) (basic-block 1 1 (##.%p.1610) ((##vcore.eq? (bruijn ##.binding.319 4 0) 'define-values)) (if (bruijn ##.%p.1610 0 0) ((bruijn ##.syntax-car.78 14 48) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V0k418) (bruijn ##.body.318 8 3)) ((bruijn ##.assoc.43 14 13) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V0k445) (bruijn ##.binding.319 4 0) (bruijn ##.env.301 12 2))))))))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      statics->vars[0],
      _V0begin);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 55)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V0k391, self)))),
      VGetArg(statics, 5-1, 3));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      statics->up->vars[0],
      _V0define);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 48)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V0k394, self)))),
      VGetArg(statics, 6-1, 3));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      statics->up->up->vars[0],
      _V0define__constant);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 48)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V0k406, self)))),
      VGetArg(statics, 7-1, 3));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      statics->up->up->up->vars[0],
      _V0define__values);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 48)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V0k418, self)))),
      VGetArg(statics, 8-1, 3));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 13)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V0k445, self)))),
      statics->up->up->up->vars[0],
      VGetArg(statics, 12-1, 2));
}
    }
}
    }
}
    }
}
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V0k389(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V0k389, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler hygienic expand resolve-identifier) #t (bruijn ##.resolve-identifier.152 8 37) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V0k390) (bruijn ##.%x.1075 0 0))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0expand;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V0k390, self))));
    VWORD _arg1 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve__identifier, _V60_V0vanity_V0compiler_V0hygienic_V0expand)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve__identifier(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V0k388(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V0k388, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.979 0 0) ((bruijn ##.syntax-caar.86 8 56) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V0k389) (bruijn ##.body.318 2 3)) (##qualified-call (vanity compiler hygienic expand expand-body ##.finish.305) #f (bruijn ##.finish.305 4 3) (bruijn ##.%k.978 2 0) (bruijn ##.defines.316 2 1) (bruijn ##.constants.317 2 2) (bruijn ##.body.318 2 3)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 56)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V0k389, self)))),
      statics->up->vars[3]);
} else {
  {
    VClosure * _closure = VDecodeClosure(statics->up->up->up->vars[3]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->up->vars[0];
    VWORD _arg1 = 
      statics->up->vars[1];
    VWORD _arg2 = 
      statics->up->vars[2];
    VWORD _arg3 = 
      statics->up->vars[3];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dfinish_D305(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V0k383(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V0k383, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V0k384) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V0k388))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V0k384, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V0k388, self)))));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315, got ~D~N"
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
  // ((bruijn ##.syntax-pair?.38 6 8) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V0k383) (bruijn ##.body.318 0 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 8)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315_V0k383, self)))),
      _var3);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V0k367(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V0k367, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (letrec 4 ((bruijn ##.%x.951 1 0) (close "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dintroduce_D303") (close "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dfinish__constants_D304") (close "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dfinish_D305")) (letrec 1 ((close "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315")) (##qualified-call (vanity compiler hygienic expand expand-body ##.loop.315) #f (bruijn ##.loop.315 0 0) (bruijn ##.%k.950 3 0) '() '() (bruijn ##.stx.300 3 1))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[4]; } container;
    self = &container.self;
    VInitEnv(self, 4, 4, statics);
    self->vars[0] = statics->vars[0];
    self->vars[1] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dintroduce_D303, self))));
    self->vars[2] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dfinish__constants_D304, self))));
    self->vars[3] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dfinish_D305, self))));
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315, self))));
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->up->up->vars[0];
    VWORD _arg1 = 
      VNULL;
    VWORD _arg2 = 
      VNULL;
    VWORD _arg3 = 
      statics->up->up->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V10_Dloop_D315(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
    }
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((bruijn ##.make-scope.40 2 10) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V0k367))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[10]), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body_V0k367, self)))));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0constant__expr_Q_V0k455(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0constant__expr_Q_V0k455, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.lookup-intrinsic-name.64 5 34) (bruijn ##.%k.1098 1 0) (bruijn ##.%x.1099 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 34)), 2,
      statics->vars[0],
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0constant__expr_Q_V0k454(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0constant__expr_Q_V0k454, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1097 1 0) ((bruijn ##.get-syntax-data.42 4 12) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0constant__expr_Q_V0k455) (bruijn ##.expr.336 2 1)) ((bruijn ##.%k.1098 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[12]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0constant__expr_Q_V0k455, self)))),
      statics->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0constant__expr_Q_V0k459(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0constant__expr_Q_V0k459, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%r.1638) ((##vcore.not (bruijn ##.%x.1095 1 0))) ((bruijn ##.%k.1094 2 0) (bruijn ##.%r.1638 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VNot2(runtime, NULL,
      statics->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      self->vars[0]);
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0constant__expr_Q_V0k458(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0constant__expr_Q_V0k458, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1634 1 0) ((bruijn ##.identifier?.34 7 4) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0constant__expr_Q_V0k459) (bruijn ##.expr.336 5 1)) ((bruijn ##.%k.1094 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 4)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0constant__expr_Q_V0k459, self)))),
      VGetArg(statics, 5-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0constant__expr_Q_V0k467(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0constant__expr_Q_V0k467, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%r.1637) ((##vcore.eq? (bruijn ##.%x.1087 1 0) '##foreign.function)) ((bruijn ##.%k.1081 15 0) (bruijn ##.%r.1637 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      statics->vars[0],
      _V10foreign_Dfunction);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 0)), 1,
      self->vars[0]);
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0constant__expr_Q_V0k466(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0constant__expr_Q_V0k466, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.get-syntax-data.42 15 12) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0constant__expr_Q_V0k467) (bruijn ##.%x.1088 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 12)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0constant__expr_Q_V0k467, self)))),
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0constant__expr_Q_V0k465(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0constant__expr_Q_V0k465, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%p.1636) ((##vcore.eq? (bruijn ##.%x.1089 1 0) '##basic-intrinsic)) (if (bruijn ##.%p.1636 0 0) ((bruijn ##.%k.1081 12 0) (bruijn ##.%p.1636 0 0)) ((bruijn ##.syntax-car.78 14 48) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0constant__expr_Q_V0k466) (bruijn ##.expr.336 12 1))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      statics->vars[0],
      _V10basic__intrinsic);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 0)), 1,
      self->vars[0]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 48)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0constant__expr_Q_V0k466, self)))),
      VGetArg(statics, 12-1, 1));
}
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0constant__expr_Q_V0k464(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0constant__expr_Q_V0k464, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.get-syntax-data.42 12 12) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0constant__expr_Q_V0k465) (bruijn ##.%x.1090 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 12)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0constant__expr_Q_V0k465, self)))),
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0constant__expr_Q_V0k463(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0constant__expr_Q_V0k463, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%p.1635) ((##vcore.eq? (bruijn ##.%x.1091 1 0) '##intrinsic)) (if (bruijn ##.%p.1635 0 0) ((bruijn ##.%k.1081 9 0) (bruijn ##.%p.1635 0 0)) ((bruijn ##.syntax-car.78 11 48) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0constant__expr_Q_V0k464) (bruijn ##.expr.336 9 1))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      statics->vars[0],
      _V10intrinsic);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 0)), 1,
      self->vars[0]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 48)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0constant__expr_Q_V0k464, self)))),
      VGetArg(statics, 9-1, 1));
}
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0constant__expr_Q_V0k462(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0constant__expr_Q_V0k462, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.get-syntax-data.42 9 12) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0constant__expr_Q_V0k463) (bruijn ##.%x.1092 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 12)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0constant__expr_Q_V0k463, self)))),
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0constant__expr_Q_V0k461(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0constant__expr_Q_V0k461, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1084 0 0) ((bruijn ##.syntax-car.78 8 48) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0constant__expr_Q_V0k462) (bruijn ##.expr.336 6 1)) ((bruijn ##.%k.1081 6 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 48)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0constant__expr_Q_V0k462, self)))),
      VGetArg(statics, 6-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0constant__expr_Q_V0k460(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0constant__expr_Q_V0k460, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1083 0 0) ((bruijn ##.%k.1081 5 0) (bruijn ##.%p.1083 0 0)) ((bruijn ##.syntax-pair?.38 7 8) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0constant__expr_Q_V0k461) (bruijn ##.expr.336 5 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      _var0);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 8)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0constant__expr_Q_V0k461, self)))),
      VGetArg(statics, 5-1, 1));
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0constant__expr_Q_V0k457(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0constant__expr_Q_V0k457, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%p.1634) ((##vcore.not (bruijn ##.%x.1096 1 0))) ((close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0constant__expr_Q_V0k458) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0constant__expr_Q_V0k460)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VNot2(runtime, NULL,
      statics->vars[0]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0constant__expr_Q_V0k458, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0constant__expr_Q_V0k460, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0constant__expr_Q_V0k456(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0constant__expr_Q_V0k456, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1082 0 0) ((bruijn ##.%k.1081 2 0) (bruijn ##.%p.1082 0 0)) ((bruijn ##.syntax-pair?.38 4 8) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0constant__expr_Q_V0k457) (bruijn ##.expr.336 2 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      _var0);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[8]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0constant__expr_Q_V0k457, self)))),
      statics->up->vars[1]);
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0constant__expr_Q_V0k453(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0constant__expr_Q_V0k453, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0constant__expr_Q_V0k454) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0constant__expr_Q_V0k456))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0constant__expr_Q_V0k454, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0constant__expr_Q_V0k456, self)))));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0constant__expr_Q(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0constant__expr_Q, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.identifier?.34 2 4) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0constant__expr_Q_V0k453) (bruijn ##.expr.336 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[4]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0constant__expr_Q_V0k453, self)))),
      _var1);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__undot__list_V0k472(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__undot__list_V0k472, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%r.1639) ((##vcore.cons (bruijn ##.%x.1103 3 0) (bruijn ##.%x.1104 1 0))) ((bruijn ##.%k.1100 6 0) (bruijn ##.%r.1639 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->up->up->vars[0],
      statics->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 1,
      self->vars[0]);
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__undot__list_V0k471(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__undot__list_V0k471, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler hygienic expand syntax-undot-list) #t (bruijn ##.syntax-undot-list.134 5 19) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__undot__list_V0k472) (bruijn ##.%x.1105 0 0))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0expand;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__undot__list_V0k472, self))));
    VWORD _arg1 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__undot__list, _V60_V0vanity_V0compiler_V0hygienic_V0expand)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__undot__list(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__undot__list_V0k470(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__undot__list_V0k470, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.syntax-cdr.84 5 54) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__undot__list_V0k471) (bruijn ##.xs.337 3 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 54)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__undot__list_V0k471, self)))),
      statics->up->up->vars[1]);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__undot__list_V0k469(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__undot__list_V0k469, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1102 0 0) ((bruijn ##.syntax-car.78 4 48) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__undot__list_V0k470) (bruijn ##.xs.337 2 1)) (basic-block 1 1 (##.%r.1640) ((##vcore.cons (bruijn ##.xs.337 3 1) '())) ((bruijn ##.%k.1100 3 0) (bruijn ##.%r.1640 0 0))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[48]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__undot__list_V0k470, self)))),
      statics->up->vars[1]);
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
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__undot__list_V0k468(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__undot__list_V0k468, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1101 0 0) ((bruijn ##.%k.1100 1 0) '()) ((bruijn ##.syntax-pair?.38 3 8) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__undot__list_V0k469) (bruijn ##.xs.337 1 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VNULL);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[8]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__undot__list_V0k469, self)))),
      statics->vars[1]);
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__undot__list(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__undot__list, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.syntax-null?.88 2 58) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__undot__list_V0k468) (bruijn ##.xs.337 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[58]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__undot__list_V0k468, self)))),
      _var1);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__let__syntax_V0k489(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__let__syntax_V0k489, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler hygienic expand expand-impl) #t (bruijn ##.expand-impl.117 16 2) (bruijn ##.%k.1106 15 0) (bruijn ##.%x.1112 0 0) (bruijn ##.body-env.352 1 0))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0expand;
    VWORD _arg0 = 
      VGetArg(statics, 15-1, 0);
    VWORD _arg1 = 
      _var0;
    VWORD _arg2 = 
      statics->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__impl, _V60_V0vanity_V0compiler_V0hygienic_V0expand)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__impl(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__let__syntax_V0k488(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__let__syntax_V0k488, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.flip-scope.44 16 14) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__let__syntax_V0k489) (bruijn ##.body.343 5 3) (bruijn ##.sc.344 5 4))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 14)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__let__syntax_V0k489, self)))),
      VGetArg(statics, 5-1, 3),
      VGetArg(statics, 5-1, 4));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__let__syntax_V0k487(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__let__syntax_V0k487, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.append.37 15 7) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__let__syntax_V0k488) (bruijn ##.%x.1113 0 0) (bruijn ##.env.339 13 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 7)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__let__syntax_V0k488, self)))),
      _var0,
      VGetArg(statics, 13-1, 2));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__let__syntax_V0lambda43(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__let__syntax_V0lambda43, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 1 1 (##.%r.1641) ((##vcore.cons (bruijn ##.binding.353 1 1) (bruijn ##.val.354 1 2))) ((bruijn ##.%k.1114 1 0) (bruijn ##.%r.1641 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->vars[1],
      statics->vars[2]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      self->vars[0]);
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__let__syntax_V0k486(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__let__syntax_V0k486, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.map.30 14 0) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__let__syntax_V0k487) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__let__syntax_V0lambda43) (bruijn ##.bindings.346 3 6) (bruijn ##.rhs-vals.351 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 0)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__let__syntax_V0k487, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__let__syntax_V0lambda43, self)))),
      statics->up->up->vars[6],
      _var0);
}
static void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__let__syntax_V0k485(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.syntax-map.81 13 51) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__let__syntax_V0k486) (bruijn ##.eval-for-syntax-binding.136 12 21) (bruijn ##.rhss.342 2 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 51)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__let__syntax_V0k486, self)))),
      VGetArg(statics, 12-1, 21),
      statics->up->vars[2]);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__let__syntax_V0lambda44(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__let__syntax_V0lambda44, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  // (##qualified-call (vanity compiler hygienic expand add-binding!) #t (bruijn ##.add-binding!.158 13 43) (bruijn ##.%k.1115 0 0) (bruijn ##.id.349 0 1) (bruijn ##.binding.350 0 2))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0expand;
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      _var1;
    VWORD _arg2 = 
      _var2;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0add__binding_B, _V60_V0vanity_V0compiler_V0hygienic_V0expand)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0add__binding_B(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
static void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__let__syntax_V0k484(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.for-each.59 13 29) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__let__syntax_V0k485) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__let__syntax_V0lambda44) (bruijn ##.ids.345 2 5) (bruijn ##.bindings.346 2 6))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 29)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__let__syntax_V0k485, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__let__syntax_V0lambda44, self)))),
      statics->up->vars[5],
      statics->up->vars[6]);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__let__syntax_V0k483(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__let__syntax_V0k483, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__let__syntax_V0k484) (bruijn ##.bindings.346 2 6) (bruijn ##.%x.1116 0 0))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__let__syntax_V0k484, self)))),
      VEncodeInt(2l), VEncodeInt(6l),
      _var0
    );
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__let__syntax_V0k490(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__let__syntax_V0k490, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.generate-symbol.90 14 60) (bruijn ##.%k.1117 1 0) (bruijn ##.%x.1118 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 60)), 2,
      statics->vars[0],
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__let__syntax_V0lambda45(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__let__syntax_V0lambda45, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.get-syntax-data.42 13 12) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__let__syntax_V0k490) (bruijn ##.id.348 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 12)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__let__syntax_V0k490, self)))),
      _var1);
}
static void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__let__syntax_V0k482(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.syntax-map.81 12 51) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__let__syntax_V0k483) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__let__syntax_V0lambda45) (bruijn ##.ids.345 1 5))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 51)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__let__syntax_V0k483, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__let__syntax_V0lambda45, self)))),
      statics->vars[5]);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__let__syntax_V0k481(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__let__syntax_V0k481, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__let__syntax_V0k482) (bruijn ##.ids.345 1 5) (bruijn ##.%x.1119 0 0))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__let__syntax_V0k482, self)))),
      VEncodeInt(1l), VEncodeInt(5l),
      _var0
    );
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__let__syntax_V0lambda46(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__let__syntax_V0lambda46, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.flip-scope.44 12 14) (bruijn ##.%k.1120 0 0) (bruijn ##.lhs-id.347 0 1) (bruijn ##.sc.344 1 4))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 14)), 3,
      _var0,
      _var1,
      statics->vars[4]);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__let__syntax_V0k480(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__let__syntax_V0k480, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (letrec 7 ((bruijn ##.%x.1107 8 0) (bruijn ##.%x.1108 6 0) (bruijn ##.%x.1109 4 0) (bruijn ##.%x.1110 2 0) (bruijn ##.%x.1111 1 0) #f #f) ((bruijn ##.syntax-map.81 11 51) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__let__syntax_V0k481) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__let__syntax_V0lambda46) (bruijn ##.lhs-ids.341 0 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[7]; } container;
    self = &container.self;
    VInitEnv(self, 7, 7, statics);
    self->vars[0] = VGetArg(statics, 8-1, 0);
    self->vars[1] = VGetArg(statics, 6-1, 0);
    self->vars[2] = statics->up->up->up->vars[0];
    self->vars[3] = statics->up->vars[0];
    self->vars[4] = statics->vars[0];
    self->vars[5] = VEncodeBool(false);
    self->vars[6] = VEncodeBool(false);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 51)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__let__syntax_V0k481, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__let__syntax_V0lambda46, self)))),
      self->vars[1]);
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__let__syntax_V0k479(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__let__syntax_V0k479, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.make-scope.40 9 10) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__let__syntax_V0k480))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 10)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__let__syntax_V0k480, self)))));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__let__syntax_V0k478(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__let__syntax_V0k478, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.syntax-car.78 8 48) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__let__syntax_V0k479) (bruijn ##.%x.1121 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 48)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__let__syntax_V0k479, self)))),
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__let__syntax_V0k477(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__let__syntax_V0k477, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.syntax-cddr.80 7 50) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__let__syntax_V0k478) (bruijn ##.stx.338 5 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 50)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__let__syntax_V0k478, self)))),
      VGetArg(statics, 5-1, 1));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__let__syntax_V0k476(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__let__syntax_V0k476, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.syntax-map.81 6 51) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__let__syntax_V0k477) (bruijn ##.syntax-cadr.79 6 49) (bruijn ##.%x.1122 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 51)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__let__syntax_V0k477, self)))),
      VGetArg(statics, 6-1, 49),
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__let__syntax_V0k475(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__let__syntax_V0k475, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.syntax-cadr.79 5 49) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__let__syntax_V0k476) (bruijn ##.stx.338 3 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 49)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__let__syntax_V0k476, self)))),
      statics->up->up->vars[1]);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__let__syntax_V0k474(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__let__syntax_V0k474, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.syntax-map.81 4 51) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__let__syntax_V0k475) (bruijn ##.syntax-car.78 4 48) (bruijn ##.%x.1123 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[51]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__let__syntax_V0k475, self)))),
      statics->up->up->up->vars[48],
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__let__syntax_V0k473(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__let__syntax_V0k473, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.syntax-cadr.79 3 49) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__let__syntax_V0k474) (bruijn ##.stx.338 1 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[49]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__let__syntax_V0k474, self)))),
      statics->vars[1]);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__let__syntax(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__let__syntax, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((bruijn ##.syntax-car.78 2 48) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__let__syntax_V0k473) (bruijn ##.stx.338 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[48]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__let__syntax_V0k473, self)))),
      _var1);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0eval__for__syntax__binding_V0k493(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0eval__for__syntax__binding_V0k493, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (letrec 1 ((bruijn ##.%x.1125 1 0)) ((bruijn ##.eval.65 6 35) (bruijn ##.%k.1124 4 0) (bruijn ##.expanded.356 0 0) (bruijn ##.macro-expand-env.146 5 31)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = statics->vars[0];
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 35)), 3,
      statics->up->up->up->vars[0],
      self->vars[0],
      VGetArg(statics, 5-1, 31));
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0eval__for__syntax__binding_V0k492(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0eval__for__syntax__binding_V0k492, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler hygienic expand resolve) #t (bruijn ##.resolve.138 3 23) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0eval__for__syntax__binding_V0k493) (bruijn ##.%x.1126 0 0))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0expand;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0eval__for__syntax__binding_V0k493, self))));
    VWORD _arg1 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve, _V60_V0vanity_V0compiler_V0hygienic_V0expand)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0eval__for__syntax__binding_V0k491(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0eval__for__syntax__binding_V0k491, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler hygienic expand expand-impl) #t (bruijn ##.expand-impl.117 2 2) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0eval__for__syntax__binding_V0k492) (bruijn ##.rhs.355 1 1) (bruijn ##.%x.1127 0 0))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0expand;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0eval__for__syntax__binding_V0k492, self))));
    VWORD _arg1 = 
      statics->vars[1];
    VWORD _arg2 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__impl, _V60_V0vanity_V0compiler_V0hygienic_V0expand)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__impl(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0eval__for__syntax__binding(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0eval__for__syntax__binding, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.toplevel-expand-env.141 1 26) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0eval__for__syntax__binding_V0k491))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[26]), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0eval__for__syntax__binding_V0k491, self)))));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0introduced__identifier_V0k495(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0introduced__identifier_V0k495, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.make-syntax.33 4 3) (bruijn ##.%k.1128 2 0) (bruijn ##.x.357 2 1) (bruijn ##.%x.1129 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[3]), 3,
      statics->up->vars[0],
      statics->up->vars[1],
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0introduced__identifier_V0k494(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0introduced__identifier_V0k494, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.list.31 3 1) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0introduced__identifier_V0k495) (bruijn ##.%x.1130 0 0) (bruijn ##.sc.358 1 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[1]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0introduced__identifier_V0k495, self)))),
      _var0,
      statics->vars[2]);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0introduced__identifier(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0introduced__identifier, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((bruijn ##.global-scope.32 2 2) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0introduced__identifier_V0k494))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[2]), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0introduced__identifier_V0k494, self)))));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V10_Dresolve__formals_D360_V0k501(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V10_Dresolve__formals_D360_V0k501, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%r.1642) ((##vcore.cons (bruijn ##.%x.1135 3 0) (bruijn ##.%x.1136 1 0))) ((bruijn ##.%k.1132 7 0) (bruijn ##.%r.1642 0 0)))
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
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V10_Dresolve__formals_D360_V0k500(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V10_Dresolve__formals_D360_V0k500, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler hygienic expand resolve ##.resolve-formals.360) #f (bruijn ##.resolve-formals.360 6 0) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V10_Dresolve__formals_D360_V0k501) (bruijn ##.%x.1137 0 0))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 6-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V10_Dresolve__formals_D360_V0k501, self))));
    VWORD _arg1 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V10_Dresolve__formals_D360(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V10_Dresolve__formals_D360_V0k499(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V10_Dresolve__formals_D360_V0k499, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.syntax-cdr.84 8 54) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V10_Dresolve__formals_D360_V0k500) (bruijn ##.formals.361 4 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 54)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V10_Dresolve__formals_D360_V0k500, self)))),
      statics->up->up->up->vars[1]);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V10_Dresolve__formals_D360_V0k498(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V10_Dresolve__formals_D360_V0k498, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler hygienic expand resolve-identifier) #t (bruijn ##.resolve-identifier.152 6 37) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V10_Dresolve__formals_D360_V0k499) (bruijn ##.%x.1138 0 0))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0expand;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V10_Dresolve__formals_D360_V0k499, self))));
    VWORD _arg1 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve__identifier, _V60_V0vanity_V0compiler_V0hygienic_V0expand)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve__identifier(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V10_Dresolve__formals_D360_V0k497(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V10_Dresolve__formals_D360_V0k497, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1134 0 0) ((bruijn ##.syntax-car.78 6 48) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V10_Dresolve__formals_D360_V0k498) (bruijn ##.formals.361 2 1)) (##qualified-call (vanity compiler hygienic expand resolve-identifier) #t (bruijn ##.resolve-identifier.152 5 37) (bruijn ##.%k.1132 2 0) (bruijn ##.formals.361 2 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 48)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V10_Dresolve__formals_D360_V0k498, self)))),
      statics->up->vars[1]);
} else {
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0expand;
    VWORD _arg0 = 
      statics->up->vars[0];
    VWORD _arg1 = 
      statics->up->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve__identifier, _V60_V0vanity_V0compiler_V0hygienic_V0expand)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve__identifier(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V10_Dresolve__formals_D360_V0k496(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V10_Dresolve__formals_D360_V0k496, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1133 0 0) ((bruijn ##.%k.1132 1 0) '()) ((bruijn ##.syntax-pair?.38 5 8) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V10_Dresolve__formals_D360_V0k497) (bruijn ##.formals.361 1 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VNULL);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 8)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V10_Dresolve__formals_D360_V0k497, self)))),
      statics->vars[1]);
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V10_Dresolve__formals_D360(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V10_Dresolve__formals_D360, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.syntax-null?.88 4 58) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V10_Dresolve__formals_D360_V0k496) (bruijn ##.formals.361 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[58]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V10_Dresolve__formals_D360_V0k496, self)))),
      _var1);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0k504(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0k504, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.1141 0 0) ((bruijn ##.get-syntax-data.42 6 12) (bruijn ##.%k.1131 4 0) (bruijn ##.stx.359 4 1)) ((bruijn ##.%k.1131 4 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 12)), 2,
      statics->up->up->up->vars[0],
      statics->up->up->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0k503(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0k503, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1140 0 0) ((bruijn ##.%k.1131 3 0) (bruijn ##.%p.1140 0 0)) ((bruijn ##.free-vars-allowed.159 4 44) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0k504)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      _var0);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[44]), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0k504, self)))));
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0k507(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0k507, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.1145 0 0) ((bruijn ##.get-syntax-data.42 9 12) (bruijn ##.%k.1131 7 0) (bruijn ##.stx.359 7 1)) ((bruijn ##.%k.1131 7 0) (bruijn ##.stx.359 7 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 12)), 2,
      VGetArg(statics, 7-1, 0),
      VGetArg(statics, 7-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 1,
      VGetArg(statics, 7-1, 1));
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0k511(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0k511, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler hygienic expand resolve-identifier) #t (bruijn ##.resolve-identifier.152 11 37) (bruijn ##.%k.1178 1 0) (bruijn ##.%x.1179 0 0))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0expand;
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve__identifier, _V60_V0vanity_V0compiler_V0hygienic_V0expand)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve__identifier(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0k510(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0k510, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1177 1 0) ((bruijn ##.syntax-car.78 11 48) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0k511) (bruijn ##.stx.359 9 1)) ((bruijn ##.%k.1178 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 48)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0k511, self)))),
      VGetArg(statics, 9-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0k517(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0k517, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 3 3 (##.%x.1646 ##.%x.1647 ##.%r.1648) ((##vcore.cons (bruijn ##.%x.1150 1 0) '()) (##vcore.cons (bruijn ##.%x.1148 4 0) (bruijn ##.%x.1646 0 0)) (##vcore.cons 'lambda (bruijn ##.%x.1647 0 1))) ((bruijn ##.%k.1131 16 0) (bruijn ##.%r.1648 0 2)))
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
      _V0lambda,
      self->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 0)), 1,
      self->vars[2]);
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0k516(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0k516, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler hygienic expand resolve) #t (bruijn ##.resolve.138 15 23) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0k517) (bruijn ##.%x.1151 0 0))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0expand;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0k517, self))));
    VWORD _arg1 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve, _V60_V0vanity_V0compiler_V0hygienic_V0expand)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0k515(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0k515, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.syntax-car.78 15 48) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0k516) (bruijn ##.%x.1152 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 48)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0k516, self)))),
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0k514(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0k514, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.syntax-cddr.80 14 50) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0k515) (bruijn ##.stx.359 12 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 50)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0k515, self)))),
      VGetArg(statics, 12-1, 1));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0k513(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0k513, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler hygienic expand resolve ##.resolve-formals.360) #f (bruijn ##.resolve-formals.360 10 0) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0k514) (bruijn ##.%x.1153 0 0))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 10-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0k514, self))));
    VWORD _arg1 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V10_Dresolve__formals_D360(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0k522(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0k522, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 3 3 (##.%x.1650 ##.%x.1651 ##.%r.1652) ((##vcore.cons (bruijn ##.%x.1158 1 0) '()) (##vcore.cons (bruijn ##.%x.1156 4 0) (bruijn ##.%x.1650 0 0)) (##vcore.cons 'letrec (bruijn ##.%x.1651 0 1))) ((bruijn ##.%k.1131 17 0) (bruijn ##.%r.1652 0 2)))
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
      _V0letrec,
      self->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 17-1, 0)), 1,
      self->vars[2]);
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0k521(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0k521, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler hygienic expand resolve) #t (bruijn ##.resolve.138 16 23) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0k522) (bruijn ##.%x.1159 0 0))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0expand;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0k522, self))));
    VWORD _arg1 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve, _V60_V0vanity_V0compiler_V0hygienic_V0expand)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0k520(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0k520, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.syntax-car.78 16 48) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0k521) (bruijn ##.%x.1160 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 48)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0k521, self)))),
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0k519(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0k519, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.syntax-cddr.80 15 50) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0k520) (bruijn ##.stx.359 13 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 50)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0k520, self)))),
      VGetArg(statics, 13-1, 1));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0k526(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0k526, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.list.31 19 1) (bruijn ##.%k.1161 4 0) (bruijn ##.%x.1162 2 0) (bruijn ##.%x.1163 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 19-1, 1)), 3,
      statics->up->up->up->vars[0],
      statics->up->vars[0],
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0k525(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0k525, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler hygienic expand resolve) #t (bruijn ##.resolve.138 17 23) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0k526) (bruijn ##.%x.1164 0 0))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0expand;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0k526, self))));
    VWORD _arg1 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve, _V60_V0vanity_V0compiler_V0hygienic_V0expand)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0k524(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0k524, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.syntax-cadr.79 17 49) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0k525) (bruijn ##.pair.363 2 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 17-1, 49)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0k525, self)))),
      statics->up->vars[1]);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0k523(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0k523, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler hygienic expand resolve-identifier) #t (bruijn ##.resolve-identifier.152 15 37) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0k524) (bruijn ##.%x.1165 0 0))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0expand;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0k524, self))));
    VWORD _arg1 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve__identifier, _V60_V0vanity_V0compiler_V0hygienic_V0expand)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve__identifier(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0lambda47(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0lambda47, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.syntax-car.78 15 48) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0k523) (bruijn ##.pair.363 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 48)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0k523, self)))),
      _var1);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0k518(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0k518, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.syntax-map.81 14 51) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0k519) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0lambda47) (bruijn ##.%x.1166 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 51)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0k519, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0lambda47, self)))),
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0k528(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0k528, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 2 2 (##.%x.1654 ##.%r.1655) ((##vcore.cons (bruijn ##.%x.1169 1 0) '()) (##vcore.cons 'quote (bruijn ##.%x.1654 0 0))) ((bruijn ##.%k.1131 15 0) (bruijn ##.%r.1655 0 1)))
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
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 0)), 1,
      self->vars[1]);
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0k527(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0k527, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler hygienic expand syntax-object->datum) #t (bruijn ##.syntax-object->datum.156 14 41) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0k528) (bruijn ##.%x.1170 0 0))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0expand;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0k528, self))));
    VWORD _arg1 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__object___Gdatum, _V60_V0vanity_V0compiler_V0hygienic_V0expand)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__object___Gdatum(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0k529(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0k529, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 2 2 (##.%x.1657 ##.%r.1658) ((##vcore.cons (bruijn ##.%x.1173 1 0) '()) (##vcore.cons 'quote (bruijn ##.%x.1657 0 0))) ((bruijn ##.%k.1131 15 0) (bruijn ##.%r.1658 0 1)))
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
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 0)), 1,
      self->vars[1]);
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0k531(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0k531, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%r.1660) ((##vcore.cons 'if (bruijn ##.%x.1175 1 0))) ((bruijn ##.%k.1131 17 0) (bruijn ##.%r.1660 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      _V0if,
      statics->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 17-1, 0)), 1,
      self->vars[0]);
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0k530(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0k530, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler hygienic expand resolve) #t (bruijn ##.resolve.138 16 23) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0k531) (bruijn ##.%x.1176 0 0))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0expand;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0k531, self))));
    VWORD _arg1 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve, _V60_V0vanity_V0compiler_V0hygienic_V0expand)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0k512(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0k512, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%p.1645) ((##vcore.eq? (bruijn ##.x.2.362 1 0) 'lambda)) (if (bruijn ##.%p.1645 0 0) ((bruijn ##.syntax-cadr.79 12 49) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0k513) (bruijn ##.stx.359 10 1)) (basic-block 1 1 (##.%p.1649) ((##vcore.eq? (bruijn ##.x.2.362 2 0) 'letrec)) (if (bruijn ##.%p.1649 0 0) ((bruijn ##.syntax-cadr.79 13 49) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0k518) (bruijn ##.stx.359 11 1)) (basic-block 1 1 (##.%p.1653) ((##vcore.eq? (bruijn ##.x.2.362 3 0) 'quote)) (if (bruijn ##.%p.1653 0 0) ((bruijn ##.syntax-cadr.79 14 49) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0k527) (bruijn ##.stx.359 12 1)) (basic-block 1 1 (##.%p.1656) ((##vcore.eq? (bruijn ##.x.2.362 4 0) 'syntax)) (if (bruijn ##.%p.1656 0 0) ((bruijn ##.syntax-cadr.79 15 49) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0k529) (bruijn ##.stx.359 13 1)) (basic-block 1 1 (##.%p.1659) ((##vcore.eq? (bruijn ##.x.2.362 5 0) 'if)) (if (bruijn ##.%p.1659 0 0) ((bruijn ##.syntax-cdr.84 16 54) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0k530) (bruijn ##.stx.359 14 1)) ((bruijn ##.syntax-map.81 16 51) (bruijn ##.%k.1131 14 0) (bruijn ##.resolve.138 15 23) (bruijn ##.stx.359 14 1))))))))))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      statics->vars[0],
      _V0lambda);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 49)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0k513, self)))),
      VGetArg(statics, 10-1, 1));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      statics->up->vars[0],
      _V0letrec);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 49)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0k518, self)))),
      VGetArg(statics, 11-1, 1));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      statics->up->up->vars[0],
      _V0quote);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 49)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0k527, self)))),
      VGetArg(statics, 12-1, 1));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      statics->up->up->up->vars[0],
      _V0syntax);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 49)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0k529, self)))),
      VGetArg(statics, 13-1, 1));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 5-1, 0),
      _V0if);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 54)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0k530, self)))),
      VGetArg(statics, 14-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 51)), 3,
      VGetArg(statics, 14-1, 0),
      VGetArg(statics, 15-1, 23),
      VGetArg(statics, 14-1, 1));
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
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0k509(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0k509, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0k510) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0k512))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0k510, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0k512, self)))));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0k508(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0k508, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.identifier?.34 9 4) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0k509) (bruijn ##.%x.1180 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 4)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0k509, self)))),
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0k506(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0k506, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%p.1644) ((##vcore.not (bruijn ##.%x.1181 1 0))) (if (bruijn ##.%p.1644 0 0) ((bruijn ##.syntax?.66 8 36) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0k507) (bruijn ##.stx.359 6 1)) ((bruijn ##.syntax-car.78 8 48) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0k508) (bruijn ##.stx.359 6 1))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VNot2(runtime, NULL,
      statics->vars[0]);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 36)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0k507, self)))),
      VGetArg(statics, 6-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 48)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0k508, self)))),
      VGetArg(statics, 6-1, 1));
}
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0k505(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0k505, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1143 0 0) (##qualified-call (vanity compiler hygienic expand syntax-object->datum) #t (bruijn ##.syntax-object->datum.156 5 41) (bruijn ##.%k.1131 4 0) (bruijn ##.stx.359 4 1)) ((bruijn ##.syntax-pair?.38 6 8) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0k506) (bruijn ##.stx.359 4 1)))
if(VDecodeBool(
_var0)) {
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0expand;
    VWORD _arg0 = 
      statics->up->up->up->vars[0];
    VWORD _arg1 = 
      statics->up->up->up->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__object___Gdatum, _V60_V0vanity_V0compiler_V0hygienic_V0expand)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__object___Gdatum(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 8)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0k506, self)))),
      statics->up->up->up->vars[1]);
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0k502(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0k502, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1139 0 0) (##qualified-call (vanity compiler hygienic expand resolve-identifier) #t (bruijn ##.resolve-identifier.152 3 37) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0k503) (bruijn ##.stx.359 2 1)) (basic-block 1 1 (##.%p.1643) ((##vcore.symbol? (bruijn ##.stx.359 3 1))) (if (bruijn ##.%p.1643 0 0) ((bruijn ##.error.82 5 52) (bruijn ##.%k.1131 3 0) (##string ##.string.1789) (bruijn ##.stx.359 3 1)) ((bruijn ##.syntax-vector?.67 5 37) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0k505) (bruijn ##.stx.359 3 1)))))
if(VDecodeBool(
_var0)) {
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0expand;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0k503, self))));
    VWORD _arg1 = 
      statics->up->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve__identifier, _V60_V0vanity_V0compiler_V0hygienic_V0expand)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve__identifier(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VSymbolP2(runtime, NULL,
      statics->up->up->vars[1]);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 52)), 3,
      statics->up->up->vars[0],
      VEncodePointer(&_V10_Dstring_D1789.sym, VPOINTER_OTHER),
      statics->up->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 37)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0k505, self)))),
      statics->up->up->vars[1]);
}
    }
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (letrec 1 ((close "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V10_Dresolve__formals_D360")) ((bruijn ##.identifier?.34 3 4) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0k502) (bruijn ##.stx.359 1 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V10_Dresolve__formals_D360, self))));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[4]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve_V0k502, self)))),
      statics->vars[1]);
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__identifier_V0k535(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__identifier_V0k535, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.compiler-error.36 8 6) (bruijn ##.%k.1186 1 0) (##string ##.string.1790) (bruijn ##.%x.1187 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 6)), 3,
      statics->vars[0],
      VEncodePointer(&_V10_Dstring_D1790.sym, VPOINTER_OTHER),
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__identifier_V0k534(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__identifier_V0k534, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1185 1 0) ((bruijn ##.%k.1186 0 0) #void) ((bruijn ##.get-syntax-data.42 7 12) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__identifier_V0k535) (bruijn ##.stx.364 5 1)))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VVOID);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 12)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__identifier_V0k535, self)))),
      VGetArg(statics, 5-1, 1));
}
}
static void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__identifier_V0k536(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.%k.1182 4 0) (bruijn ##.stx.364 4 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      statics->up->up->up->vars[1]);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__identifier_V0k533(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__identifier_V0k533, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__identifier_V0k534) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__identifier_V0k536))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__identifier_V0k534, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__identifier_V0k536, self)))));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__identifier_V0k539(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__identifier_V0k539, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.error.82 10 52) (bruijn ##.%k.1182 8 0) (##string ##.string.1792) (bruijn ##.%x.1191 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 52)), 3,
      VGetArg(statics, 8-1, 0),
      VEncodePointer(&_V10_Dstring_D1792.sym, VPOINTER_OTHER),
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__identifier_V0k540(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__identifier_V0k540, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.error.82 11 52) (bruijn ##.%k.1182 9 0) (##string ##.string.1791) (bruijn ##.%x.1193 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 52)), 3,
      VGetArg(statics, 9-1, 0),
      VEncodePointer(&_V10_Dstring_D1791.sym, VPOINTER_OTHER),
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__identifier_V0k538(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__identifier_V0k538, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (letrec 1 ((bruijn ##.%x.1189 1 0)) (basic-block 1 1 (##.%p.1662) ((##vcore.not (bruijn ##.v.367 1 0))) (if (bruijn ##.%p.1662 0 0) ((bruijn ##.get-syntax-data.42 9 12) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__identifier_V0k539) (bruijn ##.stx.364 7 1)) (basic-block 2 2 (##.%x.1663 ##.%p.1664) ((##vcore.cdr (bruijn ##.v.367 2 0)) (##vcore.eq? (bruijn ##.%x.1663 0 0) (bruijn ##.variable.140 9 25))) (if (bruijn ##.%p.1664 0 1) ((bruijn ##.%k.1182 8 0) (bruijn ##.stx.364 8 1)) ((bruijn ##.get-syntax-data.42 10 12) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__identifier_V0k540) (bruijn ##.stx.364 8 1)))))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = statics->vars[0];
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VNot2(runtime, NULL,
      statics->vars[0]);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 12)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__identifier_V0k539, self)))),
      VGetArg(statics, 7-1, 1));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      statics->up->vars[0]);
    self->vars[1] = _VBasic_VEq2(runtime, NULL,
      self->vars[0],
      VGetArg(statics, 9-1, 25));
if(VDecodeBool(
self->vars[1])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 0)), 1,
      VGetArg(statics, 8-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 12)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__identifier_V0k540, self)))),
      VGetArg(statics, 8-1, 1));
}
    }
}
    }
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__identifier_V0k537(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__identifier_V0k537, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1188 0 0) ((bruijn ##.error.82 6 52) (bruijn ##.%k.1182 4 0) (##string ##.string.1791) (bruijn ##.stx.364 4 1)) ((bruijn ##.assoc.43 6 13) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__identifier_V0k538) (bruijn ##.binding.366 2 0) (bruijn ##.env.365 4 2)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 52)), 3,
      statics->up->up->up->vars[0],
      VEncodePointer(&_V10_Dstring_D1791.sym, VPOINTER_OTHER),
      statics->up->up->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 13)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__identifier_V0k538, self)))),
      statics->up->vars[0],
      statics->up->up->up->vars[2]);
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__identifier_V0k532(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__identifier_V0k532, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (letrec 1 ((bruijn ##.%x.1183 1 0)) (basic-block 1 1 (##.%p.1661) ((##vcore.not (bruijn ##.binding.366 1 0))) (if (bruijn ##.%p.1661 0 0) ((bruijn ##.free-vars-allowed.159 4 44) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__identifier_V0k533)) ((bruijn ##.member.60 5 30) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__identifier_V0k537) (bruijn ##.binding.366 1 0) (bruijn ##.special-forms.145 4 30)))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = statics->vars[0];
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VNot2(runtime, NULL,
      statics->vars[0]);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[44]), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__identifier_V0k533, self)))));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 30)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__identifier_V0k537, self)))),
      statics->vars[0],
      statics->up->up->up->vars[30]);
}
    }
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__identifier(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__identifier, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (##qualified-call (vanity compiler hygienic expand resolve-identifier) #t (bruijn ##.resolve-identifier.152 1 37) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__identifier_V0k532) (bruijn ##.stx.364 0 1))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0expand;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__identifier_V0k532, self))));
    VWORD _arg1 = 
      _var1;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve__identifier, _V60_V0vanity_V0compiler_V0hygienic_V0expand)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve__identifier(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0fresh__toplevel__expand__env_V0k541(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0fresh__toplevel__expand__env_V0k541, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%r.1666) ((##vcore.cons (bruijn ##.%x.1665 2 0) (bruijn ##.%x.1197 1 0))) ((bruijn ##.%k.1195 3 0) (bruijn ##.%r.1666 0 0)))
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
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0fresh__toplevel__expand__env(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0fresh__toplevel__expand__env, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%x.1665) ((##vcore.cons #f #f)) (##qualified-call (vanity compiler hygienic expand alist-copy) #t (bruijn ##.alist-copy.143 2 28) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0fresh__toplevel__expand__env_V0k541) (bruijn ##.global-form-env.68 3 38)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      VEncodeBool(false),
      VEncodeBool(false));
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0expand;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0fresh__toplevel__expand__env_V0k541, self))));
    VWORD _arg1 = 
      statics->up->up->vars[38];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0alist__copy, _V60_V0vanity_V0compiler_V0hygienic_V0expand)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0alist__copy(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0alist__copy_V0lambda48(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0alist__copy_V0lambda48, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 3 3 (##.%x.1667 ##.%x.1668 ##.%r.1669) ((##vcore.car (bruijn ##.e.369 1 1)) (##vcore.cdr (bruijn ##.e.369 1 1)) (##vcore.cons (bruijn ##.%x.1667 0 0) (bruijn ##.%x.1668 0 1))) ((bruijn ##.%k.1199 1 0) (bruijn ##.%r.1669 0 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[1]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[1]);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      self->vars[0],
      self->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      self->vars[2]);
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0alist__copy(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0alist__copy, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.map.30 2 0) (bruijn ##.%k.1198 0 0) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0alist__copy_V0lambda48) (bruijn ##.alist.368 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 3,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0alist__copy_V0lambda48, self)))),
      _var1);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0init__global__forms_V0k545(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0init__global__forms_V0k545, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler hygienic expand add-binding!) #t (bruijn ##.add-binding!.158 6 43) (bruijn ##.%k.1203 3 0) (bruijn ##.%x.1204 0 0) (bruijn ##.sym.370 3 1))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0expand;
    VWORD _arg0 = 
      statics->up->up->vars[0];
    VWORD _arg1 = 
      _var0;
    VWORD _arg2 = 
      statics->up->up->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0add__binding_B, _V60_V0vanity_V0compiler_V0hygienic_V0expand)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0add__binding_B(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0init__global__forms_V0k544(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0init__global__forms_V0k544, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.make-syntax.33 6 3) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0init__global__forms_V0k545) (bruijn ##.sym.370 2 1) (bruijn ##.%x.1205 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 3)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0init__global__forms_V0k545, self)))),
      statics->up->vars[1],
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0init__global__forms_V0k543(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0init__global__forms_V0k543, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.list.31 5 1) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0init__global__forms_V0k544) (bruijn ##.%x.1206 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 1)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0init__global__forms_V0k544, self)))),
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0init__global__forms_V0lambda49(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0init__global__forms_V0lambda49, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.global-scope.32 4 2) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0init__global__forms_V0k543))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[2]), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0init__global__forms_V0k543, self)))));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0init__global__forms_V0k542(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0init__global__forms_V0k542, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.for-each.59 3 29) (bruijn ##.%k.1202 1 0) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0init__global__forms_V0lambda49) (bruijn ##.%x.1207 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[29]), 3,
      statics->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0init__global__forms_V0lambda49, self)))),
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0init__global__forms(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0init__global__forms, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.append.37 2 7) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0init__global__forms_V0k542) (bruijn ##.special-forms.145 1 30) (bruijn ##.global-forms.69 2 39))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[7]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0init__global__forms_V0k542, self)))),
      statics->vars[30],
      statics->up->vars[39]);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__length_V10_Dloop_D372_V0k547(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__length_V10_Dloop_D372_V0k547, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler hygienic expand syntax-length ##.loop.372) #f (bruijn ##.loop.372 4 0) (bruijn ##.%k.1209 3 0) (bruijn ##.%x.1670 1 0) (bruijn ##.%x.1212 0 0))
  {
    VClosure * _closure = VDecodeClosure(statics->up->up->up->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->up->up->vars[0];
    VWORD _arg1 = 
      statics->vars[0];
    VWORD _arg2 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__length_V10_Dloop_D372(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__length_V10_Dloop_D372_V0k546(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__length_V10_Dloop_D372_V0k546, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1210 0 0) ((bruijn ##.%k.1209 1 0) (bruijn ##.acc.373 1 1)) (basic-block 1 1 (##.%x.1670) ((##vcore.+ (bruijn ##.acc.373 2 1) 1)) ((bruijn ##.syntax-cdr.84 6 54) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__length_V10_Dloop_D372_V0k547) (bruijn ##.xs.374 2 2))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      statics->vars[1]);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      statics->up->vars[1],
      VEncodeInt(1l));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 54)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__length_V10_Dloop_D372_V0k547, self)))),
      statics->up->vars[2]);
    }
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__length_V10_Dloop_D372(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__length_V10_Dloop_D372, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((bruijn ##.syntax-null?.88 4 58) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__length_V10_Dloop_D372_V0k546) (bruijn ##.xs.374 0 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[58]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__length_V10_Dloop_D372_V0k546, self)))),
      _var2);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__length(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__length, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (letrec 1 ((close "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__length_V10_Dloop_D372")) (##qualified-call (vanity compiler hygienic expand syntax-length ##.loop.372) #f (bruijn ##.loop.372 0 0) (bruijn ##.%k.1208 1 0) 0 (bruijn ##.xs.371 1 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__length_V10_Dloop_D372, self))));
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      VEncodeInt(0l);
    VWORD _arg2 = 
      statics->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__length_V10_Dloop_D372(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__append_V0k549(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__append_V0k549, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.append (bruijn ##.%k.1213 2 0) (bruijn ##.%x.1214 1 0) (bruijn ##.%x.1215 0 0))
    VCallFuncWithGC(runtime, (VFunc)VAppend, 3,
      statics->up->vars[0],
      statics->vars[0],
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__append_V0k548(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__append_V0k548, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler hygienic expand syntax-copy-list) #t (bruijn ##.syntax-copy-list.150 2 35) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__append_V0k549) (bruijn ##.b.376 1 2))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0expand;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__append_V0k549, self))));
    VWORD _arg1 = 
      statics->vars[2];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__copy__list, _V60_V0vanity_V0compiler_V0hygienic_V0expand)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__copy__list(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__append(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__append, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (##qualified-call (vanity compiler hygienic expand syntax-copy-list) #t (bruijn ##.syntax-copy-list.150 1 35) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__append_V0k548) (bruijn ##.a.375 0 1))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0expand;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__append_V0k548, self))));
    VWORD _arg1 = 
      _var1;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__copy__list, _V60_V0vanity_V0compiler_V0hygienic_V0expand)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__copy__list(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__apply_V10_Dloop_D380_V0k550(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__apply_V10_Dloop_D380_V0k550, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%r.1674) ((##vcore.cons (bruijn ##.%x.1220 1 0) '())) ((bruijn ##.%k.1218 4 0) (bruijn ##.%r.1674 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      VNULL);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      self->vars[0]);
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__apply_V10_Dloop_D380_V0k551(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__apply_V10_Dloop_D380_V0k551, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%r.1677) ((##vcore.cons (bruijn ##.%x.1675 2 0) (bruijn ##.%x.1223 1 0))) ((bruijn ##.%k.1218 4 0) (bruijn ##.%r.1677 0 0)))
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
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__apply_V10_Dloop_D380(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__apply_V10_Dloop_D380, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 2 2 (##.%x.1671 ##.%p.1672) ((##vcore.cdr (bruijn ##.args.381 1 1)) (##vcore.null? (bruijn ##.%x.1671 0 0))) (if (bruijn ##.%p.1672 0 1) (basic-block 1 1 (##.%x.1673) ((##vcore.car (bruijn ##.args.381 2 1))) (##qualified-call (vanity compiler hygienic expand syntax-copy-list) #t (bruijn ##.syntax-copy-list.150 6 35) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__apply_V10_Dloop_D380_V0k550) (bruijn ##.%x.1673 0 0))) (basic-block 2 2 (##.%x.1675 ##.%x.1676) ((##vcore.car (bruijn ##.args.381 2 1)) (##vcore.cdr (bruijn ##.args.381 2 1))) (##qualified-call (vanity compiler hygienic expand syntax-apply ##.loop.380) #f (bruijn ##.loop.380 3 0) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__apply_V10_Dloop_D380_V0k551) (bruijn ##.%x.1676 0 1)))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[1]);
    self->vars[1] = _VBasic_VNullP2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->vars[1]);
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0expand;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__apply_V10_Dloop_D380_V0k550, self))));
    VWORD _arg1 = 
      self->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__copy__list, _V60_V0vanity_V0compiler_V0hygienic_V0expand)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__copy__list(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
} else {
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
    VClosure * _closure = VDecodeClosure(statics->up->up->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__apply_V10_Dloop_D380_V0k551, self))));
    VWORD _arg1 = 
      self->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__apply_V10_Dloop_D380(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
}
    }
}
static void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__apply_V0k553(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##vcore.apply (bruijn ##.%k.1216 3 0) (##intrinsic ##vcore.apply) (bruijn ##.f.377 3 1) (bruijn ##.fresh-args.379 2 0))
    VCallFuncWithGC(runtime, (VFunc)VApply2, 4,
      statics->up->up->vars[0],
      _V40_V10vcore_Dapply,
      statics->up->up->vars[1],
      statics->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__apply_V0k552(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__apply_V0k552, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__apply_V0k553) (bruijn ##.fresh-args.379 2 0) (bruijn ##.%x.1217 0 0))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__apply_V0k553, self)))),
      VEncodeInt(2l), VEncodeInt(0l),
      _var0
    );
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__apply(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, ...) {
 if(argc < 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__apply, got ~D~N"
  "-- expected 2 or more~N"
  , argc);
 }
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 2, argc, _var1);
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _varargs;
  // (letrec 1 (#f) (letrec 1 ((close "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__apply_V10_Dloop_D380")) (##qualified-call (vanity compiler hygienic expand syntax-apply ##.loop.380) #f (bruijn ##.loop.380 0 0) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__apply_V0k552) (bruijn ##.args.378 2 2))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = VEncodeBool(false);
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__apply_V10_Dloop_D380, self))));
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__apply_V0k552, self))));
    VWORD _arg1 = 
      statics->up->vars[2];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__apply_V10_Dloop_D380(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__copy__list_V0k557(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__copy__list_V0k557, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.syntax-cons.87 6 57) (bruijn ##.%k.1226 4 0) (bruijn ##.%x.1228 2 0) (bruijn ##.%x.1229 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 57)), 3,
      statics->up->up->up->vars[0],
      statics->up->vars[0],
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__copy__list_V0k556(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__copy__list_V0k556, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler hygienic expand syntax-copy-list) #t (bruijn ##.syntax-copy-list.150 4 35) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__copy__list_V0k557) (bruijn ##.%x.1230 0 0))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0expand;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__copy__list_V0k557, self))));
    VWORD _arg1 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__copy__list, _V60_V0vanity_V0compiler_V0hygienic_V0expand)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__copy__list(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__copy__list_V0k555(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__copy__list_V0k555, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.syntax-cdr.84 4 54) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__copy__list_V0k556) (bruijn ##.lst.382 2 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[54]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__copy__list_V0k556, self)))),
      statics->up->vars[1]);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__copy__list_V0k554(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__copy__list_V0k554, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1227 0 0) ((bruijn ##.%k.1226 1 0) '()) ((bruijn ##.syntax-car.78 3 48) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__copy__list_V0k555) (bruijn ##.lst.382 1 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VNULL);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[48]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__copy__list_V0k555, self)))),
      statics->vars[1]);
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__copy__list(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__copy__list, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.syntax-null?.88 2 58) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__copy__list_V0k554) (bruijn ##.lst.382 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[58]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__copy__list_V0k554, self)))),
      _var1);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0find__exact__binding_V10_Dloop_D386_V10_Dloop2_D388_V0k564(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0find__exact__binding_V10_Dloop_D386_V10_Dloop2_D388_V0k564, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.lset=.70 17 40) (bruijn ##.%k.1242 2 0) (##intrinsic ##vcore.eq?) (bruijn ##.%x.1243 0 0) (bruijn ##.all-id-scopes.385 12 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 17-1, 40)), 4,
      statics->up->vars[0],
      _V40_V10vcore_Deq_Q,
      _var0,
      VGetArg(statics, 12-1, 1));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0find__exact__binding_V10_Dloop_D386_V10_Dloop2_D388_V0k563(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0find__exact__binding_V10_Dloop_D386_V10_Dloop2_D388_V0k563, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.get-syntax-scopes.53 16 23) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0find__exact__binding_V10_Dloop_D386_V10_Dloop2_D388_V0k564) (bruijn ##.%x.1244 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 23)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0find__exact__binding_V10_Dloop_D386_V10_Dloop2_D388_V0k564, self)))),
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0find__exact__binding_V10_Dloop_D386_V10_Dloop2_D388_V0k562(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0find__exact__binding_V10_Dloop_D386_V10_Dloop2_D388_V0k562, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1681 1 0) ((bruijn ##.caar.56 15 26) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0find__exact__binding_V10_Dloop_D386_V10_Dloop2_D388_V0k563) (bruijn ##.bindings.389 5 1)) ((bruijn ##.%k.1242 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 26)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0find__exact__binding_V10_Dloop_D386_V10_Dloop2_D388_V0k563, self)))),
      VGetArg(statics, 5-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0find__exact__binding_V10_Dloop_D386_V10_Dloop2_D388_V0k565(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0find__exact__binding_V10_Dloop_D386_V10_Dloop2_D388_V0k565, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1239 0 0) ((bruijn ##.cdar.71 15 41) (bruijn ##.%k.1236 5 0) (bruijn ##.bindings.389 5 1)) (basic-block 1 1 (##.%x.1682) ((##vcore.cdr (bruijn ##.bindings.389 6 1))) (##qualified-call (vanity compiler hygienic expand find-exact-binding ##.loop.386 ##.loop2.388) #f (bruijn ##.loop2.388 7 0) (bruijn ##.%k.1236 6 0) (bruijn ##.%x.1682 0 0))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 41)), 2,
      VGetArg(statics, 5-1, 0),
      VGetArg(statics, 5-1, 1));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 6-1, 1));
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 7-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      VGetArg(statics, 6-1, 0);
    VWORD _arg1 = 
      self->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0find__exact__binding_V10_Dloop_D386_V10_Dloop2_D388(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0find__exact__binding_V10_Dloop_D386_V10_Dloop2_D388_V0k561(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0find__exact__binding_V10_Dloop_D386_V10_Dloop2_D388_V0k561, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%p.1681) ((##vcore.eq? (bruijn ##.%x.1245 1 0) (bruijn ##.id-sym.384 9 0))) ((close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0find__exact__binding_V10_Dloop_D386_V10_Dloop2_D388_V0k562) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0find__exact__binding_V10_Dloop_D386_V10_Dloop2_D388_V0k565)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      statics->vars[0],
      VGetArg(statics, 9-1, 0));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0find__exact__binding_V10_Dloop_D386_V10_Dloop2_D388_V0k562, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0find__exact__binding_V10_Dloop_D386_V10_Dloop2_D388_V0k565, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0find__exact__binding_V10_Dloop_D386_V10_Dloop2_D388_V0k560(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0find__exact__binding_V10_Dloop_D386_V10_Dloop2_D388_V0k560, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.get-syntax-data.42 12 12) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0find__exact__binding_V10_Dloop_D386_V10_Dloop2_D388_V0k561) (bruijn ##.%x.1246 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 12)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0find__exact__binding_V10_Dloop_D386_V10_Dloop2_D388_V0k561, self)))),
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0find__exact__binding_V10_Dloop_D386_V10_Dloop2_D388(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0find__exact__binding_V10_Dloop_D386_V10_Dloop2_D388, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.%p.1679) ((##vcore.null? (bruijn ##.bindings.389 1 1))) (if (bruijn ##.%p.1679 0 0) (basic-block 1 1 (##.%x.1680) ((##vcore.cdr (bruijn ##.rest-id-scopes.387 5 1))) (##qualified-call (vanity compiler hygienic expand find-exact-binding ##.loop.386) #f (bruijn ##.loop.386 6 0) (bruijn ##.%k.1236 2 0) (bruijn ##.%x.1680 0 0))) ((bruijn ##.caar.56 11 26) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0find__exact__binding_V10_Dloop_D386_V10_Dloop2_D388_V0k560) (bruijn ##.bindings.389 1 1))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VNullP2(runtime, NULL,
      statics->vars[1]);
if(VDecodeBool(
self->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 5-1, 1));
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 6-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->up->vars[0];
    VWORD _arg1 = 
      self->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0find__exact__binding_V10_Dloop_D386(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 26)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0find__exact__binding_V10_Dloop_D386_V10_Dloop2_D388_V0k560, self)))),
      statics->vars[1]);
}
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0find__exact__binding_V10_Dloop_D386_V0k566(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0find__exact__binding_V10_Dloop_D386_V0k566, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler hygienic expand find-exact-binding ##.loop.386 ##.loop2.388) #f (bruijn ##.loop2.388 2 0) (bruijn ##.%k.1234 4 0) (bruijn ##.%x.1247 0 0))
  {
    VClosure * _closure = VDecodeClosure(statics->up->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->up->up->up->vars[0];
    VWORD _arg1 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0find__exact__binding_V10_Dloop_D386_V10_Dloop2_D388(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0find__exact__binding_V10_Dloop_D386(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0find__exact__binding_V10_Dloop_D386, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.%p.1678) ((##vcore.null? (bruijn ##.rest-id-scopes.387 1 1))) (if (bruijn ##.%p.1678 0 0) ((bruijn ##.%k.1234 1 0) #f) (letrec 1 ((close "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0find__exact__binding_V10_Dloop_D386_V10_Dloop2_D388")) (basic-block 1 1 (##.%x.1683) ((##vcore.car (bruijn ##.rest-id-scopes.387 3 1))) ((bruijn ##.get-scope-bindings.51 10 21) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0find__exact__binding_V10_Dloop_D386_V0k566) (bruijn ##.%x.1683 0 0))))))
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
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0find__exact__binding_V10_Dloop_D386_V10_Dloop2_D388, self))));
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->up->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 21)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0find__exact__binding_V10_Dloop_D386_V0k566, self)))),
      self->vars[0]);
    }
    }
}
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0find__exact__binding_V0k559(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0find__exact__binding_V0k559, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (letrec 2 ((bruijn ##.%x.1232 2 0) (bruijn ##.%x.1233 1 0)) (letrec 1 ((close "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0find__exact__binding_V10_Dloop_D386")) (##qualified-call (vanity compiler hygienic expand find-exact-binding ##.loop.386) #f (bruijn ##.loop.386 0 0) (bruijn ##.%k.1231 4 0) (bruijn ##.all-id-scopes.385 1 1))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = statics->up->vars[0];
    self->vars[1] = statics->vars[0];
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0find__exact__binding_V10_Dloop_D386, self))));
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->up->up->up->vars[0];
    VWORD _arg1 = 
      statics->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0find__exact__binding_V10_Dloop_D386(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0find__exact__binding_V0k558(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0find__exact__binding_V0k558, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.get-syntax-scopes.53 3 23) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0find__exact__binding_V0k559) (bruijn ##.id.383 1 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[23]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0find__exact__binding_V0k559, self)))),
      statics->vars[1]);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0find__exact__binding(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0find__exact__binding, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.get-syntax-data.42 2 12) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0find__exact__binding_V0k558) (bruijn ##.id.383 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[12]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0find__exact__binding_V0k558, self)))),
      _var1);
}
static void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve__identifier_V0k569(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%r.1685) ((##vcore.cdr (bruijn ##.max-id.392 1 0))) ((bruijn ##.%k.1249 5 0) (bruijn ##.%r.1685 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      self->vars[0]);
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve__identifier_V0k568(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve__identifier_V0k568, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler hygienic expand check-unambiguous) #t (bruijn ##.check-unambiguous.155 5 40) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve__identifier_V0k569) (bruijn ##.max-id.392 0 0) (bruijn ##.candidate-ids.391 2 0))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0expand;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve__identifier_V0k569, self))));
    VWORD _arg1 = 
      _var0;
    VWORD _arg2 = 
      statics->up->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0check__unambiguous, _V60_V0vanity_V0compiler_V0hygienic_V0expand)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0check__unambiguous(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve__identifier_V0k570(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve__identifier_V0k570, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.length.72 8 42) (bruijn ##.%k.1252 2 0) (bruijn ##.%x.1253 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 42)), 2,
      statics->up->vars[0],
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve__identifier_V0lambda50(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve__identifier_V0lambda50, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.%x.1686) ((##vcore.car (bruijn ##.e.393 1 1))) ((bruijn ##.get-syntax-scopes.53 7 23) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve__identifier_V0k570) (bruijn ##.%x.1686 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 23)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve__identifier_V0k570, self)))),
      self->vars[0]);
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve__identifier_V0k567(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve__identifier_V0k567, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (letrec 1 ((bruijn ##.%x.1250 1 0)) (basic-block 1 1 (##.%p.1684) ((##vcore.null? (bruijn ##.candidate-ids.391 1 0))) (if (bruijn ##.%p.1684 0 0) ((bruijn ##.%k.1249 3 0) #f) (##qualified-call (vanity compiler hygienic expand argmax) #t (bruijn ##.argmax.154 4 39) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve__identifier_V0k568) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve__identifier_V0lambda50) (bruijn ##.candidate-ids.391 1 0)))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = statics->vars[0];
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VNullP2(runtime, NULL,
      statics->vars[0]);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
} else {
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0expand;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve__identifier_V0k568, self))));
    VWORD _arg1 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve__identifier_V0lambda50, self))));
    VWORD _arg2 = 
      statics->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0argmax, _V60_V0vanity_V0compiler_V0hygienic_V0expand)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0argmax(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
    }
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve__identifier(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve__identifier, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (##qualified-call (vanity compiler hygienic expand find-all-matching-bindings) #t (bruijn ##.find-all-matching-bindings.153 1 38) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve__identifier_V0k567) (bruijn ##.id.390 0 1))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0expand;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve__identifier_V0k567, self))));
    VWORD _arg1 = 
      _var1;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0find__all__matching__bindings, _V60_V0vanity_V0compiler_V0hygienic_V0expand)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0find__all__matching__bindings(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0find__all__matching__bindings_V10_Dloop_D397_V0k575(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0find__all__matching__bindings_V10_Dloop_D397_V0k575, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.append.37 13 7) (bruijn ##.%k.1258 6 0) (bruijn ##.%x.1260 2 0) (bruijn ##.%x.1261 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 7)), 3,
      VGetArg(statics, 6-1, 0),
      statics->up->vars[0],
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0find__all__matching__bindings_V10_Dloop_D397_V0k574(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0find__all__matching__bindings_V10_Dloop_D397_V0k574, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%x.1689) ((##vcore.cdr (bruijn ##.rest-id-scopes.398 5 1))) (##qualified-call (vanity compiler hygienic expand find-all-matching-bindings ##.loop.397) #f (bruijn ##.loop.397 6 0) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0find__all__matching__bindings_V10_Dloop_D397_V0k575) (bruijn ##.%x.1689 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 5-1, 1));
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 6-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0find__all__matching__bindings_V10_Dloop_D397_V0k575, self))));
    VWORD _arg1 = 
      self->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0find__all__matching__bindings_V10_Dloop_D397(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0find__all__matching__bindings_V10_Dloop_D397_V0k577(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0find__all__matching__bindings_V10_Dloop_D397_V0k577, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.lset<=.74 16 44) (bruijn ##.%k.1263 5 0) (##intrinsic ##vcore.eq?) (bruijn ##.%x.1265 0 0) (bruijn ##.all-id-scopes.396 11 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 44)), 4,
      VGetArg(statics, 5-1, 0),
      _V40_V10vcore_Deq_Q,
      _var0,
      VGetArg(statics, 11-1, 1));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0find__all__matching__bindings_V10_Dloop_D397_V0k576(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0find__all__matching__bindings_V10_Dloop_D397_V0k576, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%p.1691) ((##vcore.eq? (bruijn ##.%x.1267 1 0) (bruijn ##.id-sym.395 9 0))) (if (bruijn ##.%p.1691 0 0) (basic-block 1 1 (##.%x.1692) ((##vcore.car (bruijn ##.e.399 4 1))) ((bruijn ##.get-syntax-scopes.53 15 23) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0find__all__matching__bindings_V10_Dloop_D397_V0k577) (bruijn ##.%x.1692 0 0))) ((bruijn ##.%k.1263 3 0) #f)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      statics->vars[0],
      VGetArg(statics, 9-1, 0));
if(VDecodeBool(
self->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->up->up->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 23)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0find__all__matching__bindings_V10_Dloop_D397_V0k577, self)))),
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0find__all__matching__bindings_V10_Dloop_D397_V0lambda51(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0find__all__matching__bindings_V10_Dloop_D397_V0lambda51, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.%x.1690) ((##vcore.car (bruijn ##.e.399 1 1))) ((bruijn ##.get-syntax-data.42 12 12) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0find__all__matching__bindings_V10_Dloop_D397_V0k576) (bruijn ##.%x.1690 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 12)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0find__all__matching__bindings_V10_Dloop_D397_V0k576, self)))),
      self->vars[0]);
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0find__all__matching__bindings_V10_Dloop_D397_V0k573(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0find__all__matching__bindings_V10_Dloop_D397_V0k573, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.filter.73 10 43) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0find__all__matching__bindings_V10_Dloop_D397_V0k574) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0find__all__matching__bindings_V10_Dloop_D397_V0lambda51) (bruijn ##.%x.1269 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 43)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0find__all__matching__bindings_V10_Dloop_D397_V0k574, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0find__all__matching__bindings_V10_Dloop_D397_V0lambda51, self)))),
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0find__all__matching__bindings_V10_Dloop_D397(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0find__all__matching__bindings_V10_Dloop_D397, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.%p.1687) ((##vcore.null? (bruijn ##.rest-id-scopes.398 1 1))) (if (bruijn ##.%p.1687 0 0) ((bruijn ##.%k.1258 1 0) '()) (basic-block 1 1 (##.%x.1688) ((##vcore.car (bruijn ##.rest-id-scopes.398 2 1))) ((bruijn ##.get-scope-bindings.51 9 21) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0find__all__matching__bindings_V10_Dloop_D397_V0k573) (bruijn ##.%x.1688 0 0)))))
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
      VNULL);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 21)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0find__all__matching__bindings_V10_Dloop_D397_V0k573, self)))),
      self->vars[0]);
    }
}
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0find__all__matching__bindings_V0k572(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0find__all__matching__bindings_V0k572, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (letrec 2 ((bruijn ##.%x.1256 2 0) (bruijn ##.%x.1257 1 0)) (letrec 1 ((close "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0find__all__matching__bindings_V10_Dloop_D397")) (##qualified-call (vanity compiler hygienic expand find-all-matching-bindings ##.loop.397) #f (bruijn ##.loop.397 0 0) (bruijn ##.%k.1255 4 0) (bruijn ##.all-id-scopes.396 1 1))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = statics->up->vars[0];
    self->vars[1] = statics->vars[0];
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0find__all__matching__bindings_V10_Dloop_D397, self))));
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->up->up->up->vars[0];
    VWORD _arg1 = 
      statics->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0find__all__matching__bindings_V10_Dloop_D397(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0find__all__matching__bindings_V0k571(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0find__all__matching__bindings_V0k571, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.get-syntax-scopes.53 3 23) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0find__all__matching__bindings_V0k572) (bruijn ##.id.394 1 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[23]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0find__all__matching__bindings_V0k572, self)))),
      statics->vars[1]);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0find__all__matching__bindings(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0find__all__matching__bindings, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.get-syntax-data.42 2 12) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0find__all__matching__bindings_V0k571) (bruijn ##.id.394 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[12]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0find__all__matching__bindings_V0k571, self)))),
      _var1);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0argmax_V0k579(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0argmax_V0k579, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%r.1697) ((##vcore.cdr (bruijn ##.%x.1272 1 0))) ((bruijn ##.%k.1271 5 0) (bruijn ##.%r.1697 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      self->vars[0]);
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0argmax_V0k580(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0argmax_V0k580, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 2 2 (##.%x.1698 ##.%p.1699) ((##vcore.car (bruijn ##.b.403 2 2)) (##vcore.> (bruijn ##.fa.404 1 0) (bruijn ##.%x.1698 0 0))) (if (bruijn ##.%p.1699 0 1) (basic-block 1 1 (##.%r.1700) ((##vcore.cons (bruijn ##.fa.404 2 0) (bruijn ##.a.402 3 1))) ((bruijn ##.%k.1273 3 0) (bruijn ##.%r.1700 0 0))) ((bruijn ##.%k.1273 2 0) (bruijn ##.b.403 2 2))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->vars[2]);
    self->vars[1] = _VBasic_VCmpGt(runtime, NULL,
      statics->vars[0],
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[0],
      statics->up->up->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      statics->up->vars[2]);
}
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0argmax_V0lambda52(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0argmax_V0lambda52, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((bruijn ##.f.400 4 1) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0argmax_V0k580) (bruijn ##.a.402 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[1]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0argmax_V0k580, self)))),
      _var1);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0argmax_V0k578(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0argmax_V0k578, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 3 3 (##.%x.1694 ##.%x.1695 ##.%x.1696) ((##vcore.car (bruijn ##.xs.401 3 2)) (##vcore.cons (bruijn ##.%x.1278 1 0) (bruijn ##.%x.1694 0 0)) (##vcore.cdr (bruijn ##.xs.401 3 2))) ((bruijn ##.fold.75 5 45) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0argmax_V0k579) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0argmax_V0lambda52) (bruijn ##.%x.1695 0 1) (bruijn ##.%x.1696 0 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->up->vars[2]);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      self->vars[0]);
    self->vars[2] = _VBasic_VCdr2(runtime, NULL,
      statics->up->up->vars[2]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 45)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0argmax_V0k579, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0argmax_V0lambda52, self)))),
      self->vars[1],
      self->vars[2]);
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0argmax(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0argmax, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 1 1 (##.%x.1693) ((##vcore.car (bruijn ##.xs.401 1 2))) ((bruijn ##.f.400 1 1) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0argmax_V0k578) (bruijn ##.%x.1693 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[2]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[1]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0argmax_V0k578, self)))),
      self->vars[0]);
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0check__unambiguous_V0k583(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0check__unambiguous_V0k583, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.1284 0 0) ((bruijn ##.%k.1283 3 0) #void) ((bruijn ##.error.82 9 52) (bruijn ##.%k.1283 3 0) (##string ##.string.1793) (bruijn ##.max-id.405 7 1) (bruijn ##.candidate-ids.406 7 2)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VVOID);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 52)), 4,
      statics->up->up->vars[0],
      VEncodePointer(&_V10_Dstring_D1793.sym, VPOINTER_OTHER),
      VGetArg(statics, 7-1, 1),
      VGetArg(statics, 7-1, 2));
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0check__unambiguous_V0k582(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0check__unambiguous_V0k582, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.lset<=.74 8 44) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0check__unambiguous_V0k583) (##intrinsic ##vcore.eq?) (bruijn ##.%x.1285 0 0) (bruijn ##.id-scopes.407 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 44)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0check__unambiguous_V0k583, self)))),
      _V40_V10vcore_Deq_Q,
      _var0,
      statics->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0check__unambiguous_V0lambda53(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0check__unambiguous_V0lambda53, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.%x.1702) ((##vcore.car (bruijn ##.e.408 1 1))) ((bruijn ##.get-syntax-scopes.53 7 23) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0check__unambiguous_V0k582) (bruijn ##.%x.1702 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 23)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0check__unambiguous_V0k582, self)))),
      self->vars[0]);
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0check__unambiguous_V0k581(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0check__unambiguous_V0k581, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (letrec 1 ((bruijn ##.%x.1282 1 0)) ((bruijn ##.for-each.59 5 29) (bruijn ##.%k.1281 3 0) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0check__unambiguous_V0lambda53) (bruijn ##.candidate-ids.406 3 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = statics->vars[0];
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 29)), 3,
      statics->up->up->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0check__unambiguous_V0lambda53, self)))),
      statics->up->up->vars[2]);
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0check__unambiguous(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0check__unambiguous, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 1 1 (##.%x.1701) ((##vcore.car (bruijn ##.max-id.405 1 1))) ((bruijn ##.get-syntax-scopes.53 3 23) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0check__unambiguous_V0k581) (bruijn ##.%x.1701 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[23]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0check__unambiguous_V0k581, self)))),
      self->vars[0]);
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__object___Gdatum_V0k589(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__object___Gdatum_V0k589, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%r.1703) ((##vcore.cons (bruijn ##.%x.1291 3 0) (bruijn ##.%x.1292 1 0))) ((bruijn ##.%k.1288 7 0) (bruijn ##.%r.1703 0 0)))
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
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__object___Gdatum_V0k588(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__object___Gdatum_V0k588, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler hygienic expand syntax-object->datum) #t (bruijn ##.syntax-object->datum.156 6 41) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__object___Gdatum_V0k589) (bruijn ##.%x.1293 0 0))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0expand;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__object___Gdatum_V0k589, self))));
    VWORD _arg1 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__object___Gdatum, _V60_V0vanity_V0compiler_V0hygienic_V0expand)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__object___Gdatum(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__object___Gdatum_V0k587(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__object___Gdatum_V0k587, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.syntax-cdr.84 6 54) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__object___Gdatum_V0k588) (bruijn ##.v.409 4 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 54)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__object___Gdatum_V0k588, self)))),
      statics->up->up->up->vars[1]);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__object___Gdatum_V0k586(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__object___Gdatum_V0k586, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler hygienic expand syntax-object->datum) #t (bruijn ##.syntax-object->datum.156 4 41) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__object___Gdatum_V0k587) (bruijn ##.%x.1294 0 0))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0expand;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__object___Gdatum_V0k587, self))));
    VWORD _arg1 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__object___Gdatum, _V60_V0vanity_V0compiler_V0hygienic_V0expand)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__object___Gdatum(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__object___Gdatum_V0k590(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__object___Gdatum_V0k590, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.1295 0 0) ((bruijn ##.syntax-vector-map.76 5 46) (bruijn ##.%k.1288 3 0) (bruijn ##.syntax-object->datum.156 4 41) (bruijn ##.v.409 3 1)) ((bruijn ##.%k.1288 3 0) (bruijn ##.v.409 3 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 46)), 3,
      statics->up->up->vars[0],
      statics->up->up->up->vars[41],
      statics->up->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      statics->up->up->vars[1]);
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__object___Gdatum_V0k585(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__object___Gdatum_V0k585, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1290 0 0) ((bruijn ##.syntax-car.78 4 48) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__object___Gdatum_V0k586) (bruijn ##.v.409 2 1)) ((bruijn ##.syntax-vector?.67 4 37) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__object___Gdatum_V0k590) (bruijn ##.v.409 2 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[48]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__object___Gdatum_V0k586, self)))),
      statics->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[37]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__object___Gdatum_V0k590, self)))),
      statics->up->vars[1]);
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__object___Gdatum_V0k584(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__object___Gdatum_V0k584, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1289 0 0) ((bruijn ##.get-syntax-data.42 3 12) (bruijn ##.%k.1288 1 0) (bruijn ##.v.409 1 1)) ((bruijn ##.syntax-pair?.38 3 8) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__object___Gdatum_V0k585) (bruijn ##.v.409 1 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[12]), 2,
      statics->vars[0],
      statics->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[8]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__object___Gdatum_V0k585, self)))),
      statics->vars[1]);
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__object___Gdatum(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__object___Gdatum, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.identifier?.34 2 4) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__object___Gdatum_V0k584) (bruijn ##.v.409 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[4]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__object___Gdatum_V0k584, self)))),
      _var1);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0datum___Gsyntax__object_V0k592(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0datum___Gsyntax__object_V0k592, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.make-syntax.33 5 3) (bruijn ##.%k.1296 3 0) (bruijn ##.v.411 3 2) (bruijn ##.%x.1299 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 3)), 3,
      statics->up->up->vars[0],
      statics->up->up->vars[2],
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0datum___Gsyntax__object_V0k597(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0datum___Gsyntax__object_V0k597, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.syntax-cons.87 9 57) (bruijn ##.%k.1296 7 0) (bruijn ##.%x.1301 2 0) (bruijn ##.%x.1302 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 57)), 3,
      VGetArg(statics, 7-1, 0),
      statics->up->vars[0],
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0datum___Gsyntax__object_V0k596(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0datum___Gsyntax__object_V0k596, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler hygienic expand datum->syntax-object) #t (bruijn ##.datum->syntax-object.157 7 42) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0datum___Gsyntax__object_V0k597) (bruijn ##.template.410 6 1) (bruijn ##.%x.1303 0 0))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0expand;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0datum___Gsyntax__object_V0k597, self))));
    VWORD _arg1 = 
      VGetArg(statics, 6-1, 1);
    VWORD _arg2 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0datum___Gsyntax__object, _V60_V0vanity_V0compiler_V0hygienic_V0expand)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0datum___Gsyntax__object(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0datum___Gsyntax__object_V0k595(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0datum___Gsyntax__object_V0k595, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.syntax-cdr.84 7 54) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0datum___Gsyntax__object_V0k596) (bruijn ##.v.411 5 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 54)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0datum___Gsyntax__object_V0k596, self)))),
      VGetArg(statics, 5-1, 2));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0datum___Gsyntax__object_V0k594(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0datum___Gsyntax__object_V0k594, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler hygienic expand datum->syntax-object) #t (bruijn ##.datum->syntax-object.157 5 42) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0datum___Gsyntax__object_V0k595) (bruijn ##.template.410 4 1) (bruijn ##.%x.1304 0 0))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0expand;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0datum___Gsyntax__object_V0k595, self))));
    VWORD _arg1 = 
      statics->up->up->up->vars[1];
    VWORD _arg2 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0datum___Gsyntax__object, _V60_V0vanity_V0compiler_V0hygienic_V0expand)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0datum___Gsyntax__object(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0datum___Gsyntax__object_V0lambda54(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0datum___Gsyntax__object_V0lambda54, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // (##qualified-call (vanity compiler hygienic expand datum->syntax-object) #t (bruijn ##.datum->syntax-object.157 6 42) (bruijn ##.%k.1306 0 0) (bruijn ##.template.410 5 1) (bruijn ##.x.1.412 0 1))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0expand;
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      VGetArg(statics, 5-1, 1);
    VWORD _arg2 = 
      _var1;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0datum___Gsyntax__object, _V60_V0vanity_V0compiler_V0hygienic_V0expand)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0datum___Gsyntax__object(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0datum___Gsyntax__object_V0k598(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0datum___Gsyntax__object_V0k598, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1305 0 0) ((bruijn ##.syntax-vector-map.76 6 46) (bruijn ##.%k.1296 4 0) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0datum___Gsyntax__object_V0lambda54) (bruijn ##.v.411 4 2)) ((bruijn ##.%k.1296 4 0) (bruijn ##.v.411 4 2)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 46)), 3,
      statics->up->up->up->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0datum___Gsyntax__object_V0lambda54, self)))),
      statics->up->up->up->vars[2]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      statics->up->up->up->vars[2]);
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0datum___Gsyntax__object_V0k593(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0datum___Gsyntax__object_V0k593, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1300 0 0) ((bruijn ##.syntax-car.78 5 48) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0datum___Gsyntax__object_V0k594) (bruijn ##.v.411 3 2)) ((bruijn ##.syntax-vector?.67 5 37) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0datum___Gsyntax__object_V0k598) (bruijn ##.v.411 3 2)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 48)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0datum___Gsyntax__object_V0k594, self)))),
      statics->up->up->vars[2]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 37)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0datum___Gsyntax__object_V0k598, self)))),
      statics->up->up->vars[2]);
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0datum___Gsyntax__object_V0k591(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0datum___Gsyntax__object_V0k591, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1297 0 0) ((bruijn ##.%k.1296 1 0) (bruijn ##.v.411 1 2)) (basic-block 1 1 (##.%p.1704) ((##vcore.symbol? (bruijn ##.v.411 2 2))) (if (bruijn ##.%p.1704 0 0) ((bruijn ##.get-syntax-scopes.53 4 23) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0datum___Gsyntax__object_V0k592) (bruijn ##.template.410 2 1)) ((bruijn ##.syntax-pair?.38 4 8) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0datum___Gsyntax__object_V0k593) (bruijn ##.v.411 2 2)))))
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
    self->vars[0] = _VBasic_VSymbolP2(runtime, NULL,
      statics->up->vars[2]);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[23]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0datum___Gsyntax__object_V0k592, self)))),
      statics->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[8]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0datum___Gsyntax__object_V0k593, self)))),
      statics->up->vars[2]);
}
    }
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0datum___Gsyntax__object(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0datum___Gsyntax__object, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((bruijn ##.identifier?.34 2 4) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0datum___Gsyntax__object_V0k591) (bruijn ##.v.411 0 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[4]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0datum___Gsyntax__object_V0k591, self)))),
      _var2);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0add__binding_B_V0k601(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0add__binding_B_V0k601, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1706 1 0) (basic-block 2 2 (##.%x.1709 ##.%r.1710) ((##vcore.cdr (bruijn ##.scopes.415 5 0)) (##vcore.pair? (bruijn ##.%x.1709 0 0))) ((bruijn ##.%k.1314 1 0) (bruijn ##.%r.1710 0 1))) ((bruijn ##.%k.1314 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 5-1, 0));
    self->vars[1] = _VBasic_VPairP2(runtime, NULL,
      self->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      self->vars[1]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0add__binding_B_V0k603(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0add__binding_B_V0k603, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.1311 1 0) ((bruijn ##.cadr.58 8 28) (bruijn ##.%k.1312 0 0) (bruijn ##.scopes.415 5 0)) ((bruijn ##.%k.1312 0 0) (bruijn ##.scope.1705 4 0)))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 28)), 2,
      _var0,
      VGetArg(statics, 5-1, 0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->up->vars[0]);
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0add__binding_B_V0k605(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0add__binding_B_V0k605, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%x.1708) ((##vcore.cons (bruijn ##.%x.1707 2 0) (bruijn ##.%x.1310 1 0))) ((bruijn ##.set-scope-bindings!.52 11 22) (bruijn ##.%k.1307 9 0) (bruijn ##.scope.417 3 0) (bruijn ##.%x.1708 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[0],
      statics->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 22)), 3,
      VGetArg(statics, 9-1, 0),
      statics->up->up->vars[0],
      self->vars[0]);
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0add__binding_B_V0k604(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0add__binding_B_V0k604, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%x.1707) ((##vcore.cons (bruijn ##.id.413 7 1) (bruijn ##.binding.414 7 2))) ((bruijn ##.get-scope-bindings.51 9 21) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0add__binding_B_V0k605) (bruijn ##.scope.417 1 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 7-1, 1),
      VGetArg(statics, 7-1, 2));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 21)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0add__binding_B_V0k605, self)))),
      statics->vars[0]);
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0add__binding_B_V0k602(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0add__binding_B_V0k602, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0add__binding_B_V0k603) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0add__binding_B_V0k604))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0add__binding_B_V0k603, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0add__binding_B_V0k604, self)))));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0add__binding_B_V0k600(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0add__binding_B_V0k600, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%p.1706) ((##vcore.eq? (bruijn ##.scope.1705 2 0) (bruijn ##.%x.1316 1 0))) ((close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0add__binding_B_V0k601) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0add__binding_B_V0k602)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      statics->up->vars[0],
      statics->vars[0]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0add__binding_B_V0k601, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0add__binding_B_V0k602, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0add__binding_B_V0k599(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0add__binding_B_V0k599, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.scope.1705) ((##vcore.car (bruijn ##.scopes.415 1 0))) ((bruijn ##.global-scope.32 4 2) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0add__binding_B_V0k600)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[2]), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0add__binding_B_V0k600, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0add__binding_B(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0add__binding_B, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((bruijn ##.get-syntax-scopes.53 2 23) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0add__binding_B_V0k599) (bruijn ##.id.413 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[23]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0add__binding_B_V0k599, self)))),
      _var1);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0literal__identifier_E_Q_V0k607(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0literal__identifier_E_Q_V0k607, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%r.1711) ((##vcore.eq? (bruijn ##.%x.1318 2 0) (bruijn ##.%x.1319 1 0))) ((bruijn ##.%k.1317 3 0) (bruijn ##.%r.1711 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      statics->up->vars[0],
      statics->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      self->vars[0]);
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0literal__identifier_E_Q_V0k606(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0literal__identifier_E_Q_V0k606, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.get-syntax-data.42 3 12) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0literal__identifier_E_Q_V0k607) (bruijn ##.b.419 1 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[12]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0literal__identifier_E_Q_V0k607, self)))),
      statics->vars[2]);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0literal__identifier_E_Q(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0literal__identifier_E_Q, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((bruijn ##.get-syntax-data.42 2 12) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0literal__identifier_E_Q_V0k606) (bruijn ##.a.418 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[12]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0literal__identifier_E_Q_V0k606, self)))),
      _var1);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0free__identifier_E_Q_V0k609(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0free__identifier_E_Q_V0k609, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%r.1712) ((##vcore.eq? (bruijn ##.%x.1321 2 0) (bruijn ##.%x.1322 1 0))) ((bruijn ##.%k.1320 3 0) (bruijn ##.%r.1712 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      statics->up->vars[0],
      statics->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      self->vars[0]);
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0free__identifier_E_Q_V0k608(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0free__identifier_E_Q_V0k608, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler hygienic expand resolve-identifier) #t (bruijn ##.resolve-identifier.152 2 37) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0free__identifier_E_Q_V0k609) (bruijn ##.b.421 1 2))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0expand;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0free__identifier_E_Q_V0k609, self))));
    VWORD _arg1 = 
      statics->vars[2];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve__identifier, _V60_V0vanity_V0compiler_V0hygienic_V0expand)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve__identifier(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0free__identifier_E_Q(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0free__identifier_E_Q, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (##qualified-call (vanity compiler hygienic expand resolve-identifier) #t (bruijn ##.resolve-identifier.152 1 37) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0free__identifier_E_Q_V0k608) (bruijn ##.a.420 0 1))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0expand;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0free__identifier_E_Q_V0k608, self))));
    VWORD _arg1 = 
      _var1;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve__identifier, _V60_V0vanity_V0compiler_V0hygienic_V0expand)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve__identifier(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0bound__identifier_E_Q_V0k613(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0bound__identifier_E_Q_V0k613, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.lset=.70 7 40) (bruijn ##.%k.1323 5 0) (##intrinsic ##vcore.eq?) (bruijn ##.%x.1325 1 0) (bruijn ##.%x.1326 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 40)), 4,
      VGetArg(statics, 5-1, 0),
      _V40_V10vcore_Deq_Q,
      statics->vars[0],
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0bound__identifier_E_Q_V0k612(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0bound__identifier_E_Q_V0k612, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.get-syntax-scopes.53 6 23) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0bound__identifier_E_Q_V0k613) (bruijn ##.b.423 4 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 23)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0bound__identifier_E_Q_V0k613, self)))),
      statics->up->up->up->vars[2]);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0bound__identifier_E_Q_V0k611(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0bound__identifier_E_Q_V0k611, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%p.1713) ((##vcore.eq? (bruijn ##.%x.1327 2 0) (bruijn ##.%x.1328 1 0))) (if (bruijn ##.%p.1713 0 0) ((bruijn ##.get-syntax-scopes.53 5 23) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0bound__identifier_E_Q_V0k612) (bruijn ##.a.422 3 1)) ((bruijn ##.%k.1323 3 0) #f)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      statics->up->vars[0],
      statics->vars[0]);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 23)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0bound__identifier_E_Q_V0k612, self)))),
      statics->up->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0bound__identifier_E_Q_V0k610(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0bound__identifier_E_Q_V0k610, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.get-syntax-data.42 3 12) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0bound__identifier_E_Q_V0k611) (bruijn ##.b.423 1 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[12]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0bound__identifier_E_Q_V0k611, self)))),
      statics->vars[2]);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0bound__identifier_E_Q(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0bound__identifier_E_Q, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((bruijn ##.get-syntax-data.42 2 12) (close _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0bound__identifier_E_Q_V0k610) (bruijn ##.a.422 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[12]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0bound__identifier_E_Q_V0k610, self)))),
      _var1);
}
static void _V0vanity_V0compiler_V0hygienic_V0expand_V20_V0k623(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 2 2 (##.%x.1772 ##.%r.1773) ((##vcore.cons 'expand-syntax (bruijn ##.expand-syntax.115 6 0)) (##vcore.cons (bruijn ##.%x.1772 0 0) '())) ((bruijn ##.%k.425 16 0) (bruijn ##.%r.1773 0 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      _V0expand__syntax,
      VGetArg(statics, 6-1, 0));
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      self->vars[0],
      VNULL);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 0)), 1,
      self->vars[1]);
    }
}
static void _V0vanity_V0compiler_V0hygienic_V0expand_V20_V0k622(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0hygienic_V0expand_V20_V0k622, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (close _V0vanity_V0compiler_V0hygienic_V0expand_V20_V0k623) (bruijn ##.variable.140 5 25) (bruijn ##.%x.1330 0 0))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0hygienic_V0expand_V20_V0k623, self)))),
      VEncodeInt(5l), VEncodeInt(25l),
      _var0
    );
}
static void _V0vanity_V0compiler_V0hygienic_V0expand_V20_V0k621(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.generate-symbol.90 5 60) (close _V0vanity_V0compiler_V0hygienic_V0expand_V20_V0k622) 'variable)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 60)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0hygienic_V0expand_V20_V0k622, self)))),
      _V0variable);
}
static void _V0vanity_V0compiler_V0hygienic_V0expand_V20_V0k620(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0hygienic_V0expand_V20_V0k620, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (close _V0vanity_V0compiler_V0hygienic_V0expand_V20_V0k621) (bruijn ##.toplevel-expand-env.141 4 26) (bruijn ##.%x.1331 0 0))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0hygienic_V0expand_V20_V0k621, self)))),
      VEncodeInt(4l), VEncodeInt(26l),
      _var0
    );
}
static void _V0vanity_V0compiler_V0hygienic_V0expand_V20_V0k619(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0hygienic_V0expand_V20_V0k619, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.make-parameter.89 4 59) (close _V0vanity_V0compiler_V0hygienic_V0expand_V20_V0k620) (bruijn ##.%x.1332 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[59]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0hygienic_V0expand_V20_V0k620, self)))),
      _var0);
}
static void _V0vanity_V0compiler_V0hygienic_V0expand_V20_V0k618(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##qualified-call (vanity compiler hygienic expand fresh-toplevel-expand-env) #t (bruijn ##.fresh-toplevel-expand-env.142 2 27) (close _V0vanity_V0compiler_V0hygienic_V0expand_V20_V0k619))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0expand;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0hygienic_V0expand_V20_V0k619, self))));
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0fresh__toplevel__expand__env, _V60_V0vanity_V0compiler_V0hygienic_V0expand)}, 1, _arg0);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0fresh__toplevel__expand__env(runtime, _closure_env, 1, _arg0);
    }
  }
}
static void _V0vanity_V0compiler_V0hygienic_V0expand_V20_V0k617(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##qualified-call (vanity compiler hygienic expand init-global-forms) #t (bruijn ##.init-global-forms.144 2 29) (close _V0vanity_V0compiler_V0hygienic_V0expand_V20_V0k618))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0expand;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0hygienic_V0expand_V20_V0k618, self))));
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0init__global__forms, _V60_V0vanity_V0compiler_V0hygienic_V0expand)}, 1, _arg0);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0expand_V0init__global__forms(runtime, _closure_env, 1, _arg0);
    }
  }
}
static void _V0vanity_V0compiler_V0hygienic_V0expand_V20_V0k616(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (set! (close _V0vanity_V0compiler_V0hygienic_V0expand_V20_V0k617) (bruijn ##.special-forms.145 2 30) '(##pair ##.pair.1814))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0hygienic_V0expand_V20_V0k617, self)))),
      VEncodeInt(2l), VEncodeInt(30l),
      VEncodePointer(&_V10_Dpair_D1814, VPOINTER_PAIR)
    );
}
static void _V0vanity_V0compiler_V0hygienic_V0expand_V20_V0k615(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 58 58 (##.%x.1714 ##.%x.1715 ##.%x.1716 ##.%x.1717 ##.%x.1718 ##.%x.1719 ##.%x.1720 ##.%x.1721 ##.%x.1722 ##.%x.1723 ##.%x.1724 ##.%x.1725 ##.%x.1726 ##.%x.1727 ##.%x.1728 ##.%x.1729 ##.%x.1730 ##.%x.1731 ##.%x.1732 ##.%x.1733 ##.%x.1734 ##.%x.1735 ##.%x.1736 ##.%x.1737 ##.%x.1738 ##.%x.1739 ##.%x.1740 ##.%x.1741 ##.%x.1742 ##.%x.1743 ##.%x.1744 ##.%x.1745 ##.%x.1746 ##.%x.1747 ##.%x.1748 ##.%x.1749 ##.%x.1750 ##.%x.1751 ##.%x.1752 ##.%x.1753 ##.%x.1754 ##.%x.1755 ##.%x.1756 ##.%x.1757 ##.%x.1758 ##.%x.1759 ##.%x.1760 ##.%x.1761 ##.%x.1762 ##.%x.1763 ##.%x.1764 ##.%x.1765 ##.%x.1766 ##.%x.1767 ##.%x.1768 ##.%x.1769 ##.%x.1770 ##.%x.1771) ((##vcore.cons 'datum->syntax-object (bruijn ##.datum->syntax-object.157 2 42)) (##vcore.cons 'syntax-object->datum (bruijn ##.syntax-object->datum.156 2 41)) (##vcore.cons 'null? (bruijn ##.syntax-null?.88 3 58)) (##vcore.cons 'list (bruijn ##.syntax-list.77 3 47)) (##vcore.cons 'cons (bruijn ##.syntax-cons.87 3 57)) (##vcore.cons 'car (bruijn ##.syntax-car.78 3 48)) (##vcore.cons 'caar (bruijn ##.syntax-caar.86 3 56)) (##vcore.cons 'cadr (bruijn ##.syntax-cadr.79 3 49)) (##vcore.cons 'cdar (bruijn ##.syntax-cdar.85 3 55)) (##vcore.cons 'cddr (bruijn ##.syntax-cddr.80 3 50)) (##vcore.cons 'cdr (bruijn ##.syntax-cdr.84 3 54)) (##vcore.cons 'map (bruijn ##.syntax-map.81 3 51)) (##vcore.cons 'length (bruijn ##.syntax-length.147 2 32)) (##vcore.cons 'error (bruijn ##.error.82 3 52)) (##vcore.cons '+ (##intrinsic ##vcore.+)) (##vcore.cons '- (##intrinsic ##vcore.-)) (##vcore.cons '* (##intrinsic ##vcore.*)) (##vcore.cons '/ (##intrinsic ##vcore./)) (##vcore.cons '< (##intrinsic ##vcore.<)) (##vcore.cons '<= (##intrinsic ##vcore.<=)) (##vcore.cons '= (##intrinsic ##vcore.=)) (##vcore.cons '> (##intrinsic ##vcore.>)) (##vcore.cons '>= (##intrinsic ##vcore.>=)) (##vcore.cons 'eq? (##intrinsic ##vcore.eq?)) (##vcore.cons 'eqv? (##intrinsic ##vcore.eq?)) (##vcore.cons 'equal? (bruijn ##.equal?.83 3 53)) (##vcore.cons '##vcore.cons (bruijn ##.syntax-cons.87 3 57)) (##vcore.cons '##vcore.apply (bruijn ##.syntax-apply.149 2 34)) (##vcore.cons '##vcore.append (bruijn ##.syntax-append.148 2 33)) (##vcore.cons (bruijn ##.%x.1742 0 28) '()) (##vcore.cons (bruijn ##.%x.1741 0 27) (bruijn ##.%x.1743 0 29)) (##vcore.cons (bruijn ##.%x.1740 0 26) (bruijn ##.%x.1744 0 30)) (##vcore.cons (bruijn ##.%x.1739 0 25) (bruijn ##.%x.1745 0 31)) (##vcore.cons (bruijn ##.%x.1738 0 24) (bruijn ##.%x.1746 0 32)) (##vcore.cons (bruijn ##.%x.1737 0 23) (bruijn ##.%x.1747 0 33)) (##vcore.cons (bruijn ##.%x.1736 0 22) (bruijn ##.%x.1748 0 34)) (##vcore.cons (bruijn ##.%x.1735 0 21) (bruijn ##.%x.1749 0 35)) (##vcore.cons (bruijn ##.%x.1734 0 20) (bruijn ##.%x.1750 0 36)) (##vcore.cons (bruijn ##.%x.1733 0 19) (bruijn ##.%x.1751 0 37)) (##vcore.cons (bruijn ##.%x.1732 0 18) (bruijn ##.%x.1752 0 38)) (##vcore.cons (bruijn ##.%x.1731 0 17) (bruijn ##.%x.1753 0 39)) (##vcore.cons (bruijn ##.%x.1730 0 16) (bruijn ##.%x.1754 0 40)) (##vcore.cons (bruijn ##.%x.1729 0 15) (bruijn ##.%x.1755 0 41)) (##vcore.cons (bruijn ##.%x.1728 0 14) (bruijn ##.%x.1756 0 42)) (##vcore.cons (bruijn ##.%x.1727 0 13) (bruijn ##.%x.1757 0 43)) (##vcore.cons (bruijn ##.%x.1726 0 12) (bruijn ##.%x.1758 0 44)) (##vcore.cons (bruijn ##.%x.1725 0 11) (bruijn ##.%x.1759 0 45)) (##vcore.cons (bruijn ##.%x.1724 0 10) (bruijn ##.%x.1760 0 46)) (##vcore.cons (bruijn ##.%x.1723 0 9) (bruijn ##.%x.1761 0 47)) (##vcore.cons (bruijn ##.%x.1722 0 8) (bruijn ##.%x.1762 0 48)) (##vcore.cons (bruijn ##.%x.1721 0 7) (bruijn ##.%x.1763 0 49)) (##vcore.cons (bruijn ##.%x.1720 0 6) (bruijn ##.%x.1764 0 50)) (##vcore.cons (bruijn ##.%x.1719 0 5) (bruijn ##.%x.1765 0 51)) (##vcore.cons (bruijn ##.%x.1718 0 4) (bruijn ##.%x.1766 0 52)) (##vcore.cons (bruijn ##.%x.1717 0 3) (bruijn ##.%x.1767 0 53)) (##vcore.cons (bruijn ##.%x.1716 0 2) (bruijn ##.%x.1768 0 54)) (##vcore.cons (bruijn ##.%x.1715 0 1) (bruijn ##.%x.1769 0 55)) (##vcore.cons (bruijn ##.%x.1714 0 0) (bruijn ##.%x.1770 0 56))) (set! (close _V0vanity_V0compiler_V0hygienic_V0expand_V20_V0k616) (bruijn ##.macro-expand-env.146 2 31) (bruijn ##.%x.1771 0 57)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[58]; } container;
    self = &container.self;
    VInitEnv(self, 58, 58, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      _V0datum___Gsyntax__object,
      statics->up->vars[42]);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      _V0syntax__object___Gdatum,
      statics->up->vars[41]);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      _V0null_Q,
      statics->up->up->vars[58]);
    self->vars[3] = _VBasic_VCons2(runtime, NULL,
      _V0list,
      statics->up->up->vars[47]);
    self->vars[4] = _VBasic_VCons2(runtime, NULL,
      _V0cons,
      statics->up->up->vars[57]);
    self->vars[5] = _VBasic_VCons2(runtime, NULL,
      _V0car,
      statics->up->up->vars[48]);
    self->vars[6] = _VBasic_VCons2(runtime, NULL,
      _V0caar,
      statics->up->up->vars[56]);
    self->vars[7] = _VBasic_VCons2(runtime, NULL,
      _V0cadr,
      statics->up->up->vars[49]);
    self->vars[8] = _VBasic_VCons2(runtime, NULL,
      _V0cdar,
      statics->up->up->vars[55]);
    self->vars[9] = _VBasic_VCons2(runtime, NULL,
      _V0cddr,
      statics->up->up->vars[50]);
    self->vars[10] = _VBasic_VCons2(runtime, NULL,
      _V0cdr,
      statics->up->up->vars[54]);
    self->vars[11] = _VBasic_VCons2(runtime, NULL,
      _V0map,
      statics->up->up->vars[51]);
    self->vars[12] = _VBasic_VCons2(runtime, NULL,
      _V0length,
      statics->up->vars[32]);
    self->vars[13] = _VBasic_VCons2(runtime, NULL,
      _V0error,
      statics->up->up->vars[52]);
    self->vars[14] = _VBasic_VCons2(runtime, NULL,
      _V0_P,
      _V40_V10vcore_D_P);
    self->vars[15] = _VBasic_VCons2(runtime, NULL,
      _V0__,
      _V40_V10vcore_D__);
    self->vars[16] = _VBasic_VCons2(runtime, NULL,
      _V0_S,
      _V40_V10vcore_D_S);
    self->vars[17] = _VBasic_VCons2(runtime, NULL,
      _V0_W,
      _V40_V10vcore_D_W);
    self->vars[18] = _VBasic_VCons2(runtime, NULL,
      _V0_L,
      _V40_V10vcore_D_L);
    self->vars[19] = _VBasic_VCons2(runtime, NULL,
      _V0_L_E,
      _V40_V10vcore_D_L_E);
    self->vars[20] = _VBasic_VCons2(runtime, NULL,
      _V0_E,
      _V40_V10vcore_D_E);
    self->vars[21] = _VBasic_VCons2(runtime, NULL,
      _V0_G,
      _V40_V10vcore_D_G);
    self->vars[22] = _VBasic_VCons2(runtime, NULL,
      _V0_G_E,
      _V40_V10vcore_D_G_E);
    self->vars[23] = _VBasic_VCons2(runtime, NULL,
      _V0eq_Q,
      _V40_V10vcore_Deq_Q);
    self->vars[24] = _VBasic_VCons2(runtime, NULL,
      _V0eqv_Q,
      _V40_V10vcore_Deq_Q);
    self->vars[25] = _VBasic_VCons2(runtime, NULL,
      _V0equal_Q,
      statics->up->up->vars[53]);
    self->vars[26] = _VBasic_VCons2(runtime, NULL,
      _V10vcore_Dcons,
      statics->up->up->vars[57]);
    self->vars[27] = _VBasic_VCons2(runtime, NULL,
      _V10vcore_Dapply,
      statics->up->vars[34]);
    self->vars[28] = _VBasic_VCons2(runtime, NULL,
      _V10vcore_Dappend,
      statics->up->vars[33]);
    self->vars[29] = _VBasic_VCons2(runtime, NULL,
      self->vars[28],
      VNULL);
    self->vars[30] = _VBasic_VCons2(runtime, NULL,
      self->vars[27],
      self->vars[29]);
    self->vars[31] = _VBasic_VCons2(runtime, NULL,
      self->vars[26],
      self->vars[30]);
    self->vars[32] = _VBasic_VCons2(runtime, NULL,
      self->vars[25],
      self->vars[31]);
    self->vars[33] = _VBasic_VCons2(runtime, NULL,
      self->vars[24],
      self->vars[32]);
    self->vars[34] = _VBasic_VCons2(runtime, NULL,
      self->vars[23],
      self->vars[33]);
    self->vars[35] = _VBasic_VCons2(runtime, NULL,
      self->vars[22],
      self->vars[34]);
    self->vars[36] = _VBasic_VCons2(runtime, NULL,
      self->vars[21],
      self->vars[35]);
    self->vars[37] = _VBasic_VCons2(runtime, NULL,
      self->vars[20],
      self->vars[36]);
    self->vars[38] = _VBasic_VCons2(runtime, NULL,
      self->vars[19],
      self->vars[37]);
    self->vars[39] = _VBasic_VCons2(runtime, NULL,
      self->vars[18],
      self->vars[38]);
    self->vars[40] = _VBasic_VCons2(runtime, NULL,
      self->vars[17],
      self->vars[39]);
    self->vars[41] = _VBasic_VCons2(runtime, NULL,
      self->vars[16],
      self->vars[40]);
    self->vars[42] = _VBasic_VCons2(runtime, NULL,
      self->vars[15],
      self->vars[41]);
    self->vars[43] = _VBasic_VCons2(runtime, NULL,
      self->vars[14],
      self->vars[42]);
    self->vars[44] = _VBasic_VCons2(runtime, NULL,
      self->vars[13],
      self->vars[43]);
    self->vars[45] = _VBasic_VCons2(runtime, NULL,
      self->vars[12],
      self->vars[44]);
    self->vars[46] = _VBasic_VCons2(runtime, NULL,
      self->vars[11],
      self->vars[45]);
    self->vars[47] = _VBasic_VCons2(runtime, NULL,
      self->vars[10],
      self->vars[46]);
    self->vars[48] = _VBasic_VCons2(runtime, NULL,
      self->vars[9],
      self->vars[47]);
    self->vars[49] = _VBasic_VCons2(runtime, NULL,
      self->vars[8],
      self->vars[48]);
    self->vars[50] = _VBasic_VCons2(runtime, NULL,
      self->vars[7],
      self->vars[49]);
    self->vars[51] = _VBasic_VCons2(runtime, NULL,
      self->vars[6],
      self->vars[50]);
    self->vars[52] = _VBasic_VCons2(runtime, NULL,
      self->vars[5],
      self->vars[51]);
    self->vars[53] = _VBasic_VCons2(runtime, NULL,
      self->vars[4],
      self->vars[52]);
    self->vars[54] = _VBasic_VCons2(runtime, NULL,
      self->vars[3],
      self->vars[53]);
    self->vars[55] = _VBasic_VCons2(runtime, NULL,
      self->vars[2],
      self->vars[54]);
    self->vars[56] = _VBasic_VCons2(runtime, NULL,
      self->vars[1],
      self->vars[55]);
    self->vars[57] = _VBasic_VCons2(runtime, NULL,
      self->vars[0],
      self->vars[56]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0hygienic_V0expand_V20_V0k616, self)))),
      VEncodeInt(2l), VEncodeInt(31l),
      self->vars[57]
    );
    }
}
static void _V0vanity_V0compiler_V0hygienic_V0expand_V20_V0k614(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0hygienic_V0expand_V20_V0k614, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (close _V0vanity_V0compiler_V0hygienic_V0expand_V20_V0k615) (bruijn ##.free-vars-allowed.159 1 44) (bruijn ##.%x.1391 0 0))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0hygienic_V0expand_V20_V0k615, self)))),
      VEncodeInt(1l), VEncodeInt(44l),
      _var0
    );
}
static void _V0vanity_V0compiler_V0hygienic_V0expand_V20_V0lambda2(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4, VWORD _var5, VWORD _var6, VWORD _var7, VWORD _var8, VWORD _var9, VWORD _var10, VWORD _var11, VWORD _var12, VWORD _var13, VWORD _var14, VWORD _var15, VWORD _var16, VWORD _var17, VWORD _var18, VWORD _var19, VWORD _var20, VWORD _var21, VWORD _var22, VWORD _var23, VWORD _var24, VWORD _var25, VWORD _var26, VWORD _var27, VWORD _var28, VWORD _var29, VWORD _var30, VWORD _var31, VWORD _var32, VWORD _var33, VWORD _var34, VWORD _var35, VWORD _var36, VWORD _var37, VWORD _var38, VWORD _var39, VWORD _var40, VWORD _var41, VWORD _var42, VWORD _var43, VWORD _var44, VWORD _var45, VWORD _var46, VWORD _var47, VWORD _var48, VWORD _var49, VWORD _var50, VWORD _var51, VWORD _var52, VWORD _var53, VWORD _var54, VWORD _var55, VWORD _var56, VWORD _var57, VWORD _var58, VWORD _var59, VWORD _var60) {
 if(argc != 61) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0hygienic_V0expand_V20_V0lambda2, got ~D~N"
  "-- expected 61~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[61]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 61, 61, statics);
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
  self->vars[30] = _var30;
  self->vars[31] = _var31;
  self->vars[32] = _var32;
  self->vars[33] = _var33;
  self->vars[34] = _var34;
  self->vars[35] = _var35;
  self->vars[36] = _var36;
  self->vars[37] = _var37;
  self->vars[38] = _var38;
  self->vars[39] = _var39;
  self->vars[40] = _var40;
  self->vars[41] = _var41;
  self->vars[42] = _var42;
  self->vars[43] = _var43;
  self->vars[44] = _var44;
  self->vars[45] = _var45;
  self->vars[46] = _var46;
  self->vars[47] = _var47;
  self->vars[48] = _var48;
  self->vars[49] = _var49;
  self->vars[50] = _var50;
  self->vars[51] = _var51;
  self->vars[52] = _var52;
  self->vars[53] = _var53;
  self->vars[54] = _var54;
  self->vars[55] = _var55;
  self->vars[56] = _var56;
  self->vars[57] = _var57;
  self->vars[58] = _var58;
  self->vars[59] = _var59;
  self->vars[60] = _var60;
  // (##letrec (vanity compiler hygienic expand) 48 ((close "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__syntax" (vanity compiler hygienic expand)) (close "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel" (vanity compiler hygienic expand)) (close "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__impl" (vanity compiler hygienic expand)) (close "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form" (vanity compiler hygienic expand)) (close "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0apply__transformer" (vanity compiler hygienic expand)) (close "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0export__rename" (vanity compiler hygienic expand)) (close "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define__syntax" (vanity compiler hygienic expand)) (close "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax" (vanity compiler hygienic expand)) (close "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__improper__length" (vanity compiler hygienic expand)) (close "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__proper__list_Q" (vanity compiler hygienic expand)) (close "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define" (vanity compiler hygienic expand)) (close "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0add__toplevel__binding_B" (vanity compiler hygienic expand)) (close "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define" (vanity compiler hygienic expand)) (close "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S" (vanity compiler hygienic expand)) (close "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0primitive__letrec_Q" (vanity compiler hygienic expand)) (close "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__app" (vanity compiler hygienic expand)) (close "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__lambda" (vanity compiler hygienic expand)) (close "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body" (vanity compiler hygienic expand)) (close "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0constant__expr_Q" (vanity compiler hygienic expand)) (close "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__undot__list" (vanity compiler hygienic expand)) (close "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__let__syntax" (vanity compiler hygienic expand)) (close "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0eval__for__syntax__binding" (vanity compiler hygienic expand)) (close "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0introduced__identifier" (vanity compiler hygienic expand)) (close "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve" (vanity compiler hygienic expand)) (close "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__identifier" (vanity compiler hygienic expand)) #f #f (close "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0fresh__toplevel__expand__env" (vanity compiler hygienic expand)) (close "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0alist__copy" (vanity compiler hygienic expand)) (close "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0init__global__forms" (vanity compiler hygienic expand)) #f #f (close "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__length" (vanity compiler hygienic expand)) (close "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__append" (vanity compiler hygienic expand)) (close "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__apply" (vanity compiler hygienic expand)) (close "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__copy__list" (vanity compiler hygienic expand)) (close "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0find__exact__binding" (vanity compiler hygienic expand)) (close "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve__identifier" (vanity compiler hygienic expand)) (close "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0find__all__matching__bindings" (vanity compiler hygienic expand)) (close "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0argmax" (vanity compiler hygienic expand)) (close "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0check__unambiguous" (vanity compiler hygienic expand)) (close "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__object___Gdatum" (vanity compiler hygienic expand)) (close "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0datum___Gsyntax__object" (vanity compiler hygienic expand)) (close "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0add__binding_B" (vanity compiler hygienic expand)) #f (close "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0literal__identifier_E_Q" (vanity compiler hygienic expand)) (close "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0free__identifier_E_Q" (vanity compiler hygienic expand)) (close "_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0bound__identifier_E_Q" (vanity compiler hygienic expand))) ((bruijn ##.make-parameter.89 1 59) (close _V0vanity_V0compiler_V0hygienic_V0expand_V20_V0k614) #t))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[48]; } container;
    self = &container.self;
    _V60_V0vanity_V0compiler_V0hygienic_V0expand = self;
    VInitEnv(self, 48, 48, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__syntax, _V60_V0vanity_V0compiler_V0hygienic_V0expand))));
    self->vars[1] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel, _V60_V0vanity_V0compiler_V0hygienic_V0expand))));
    self->vars[2] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__impl, _V60_V0vanity_V0compiler_V0hygienic_V0expand))));
    self->vars[3] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__id__application__form, _V60_V0vanity_V0compiler_V0hygienic_V0expand))));
    self->vars[4] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0apply__transformer, _V60_V0vanity_V0compiler_V0hygienic_V0expand))));
    self->vars[5] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0export__rename, _V60_V0vanity_V0compiler_V0hygienic_V0expand))));
    self->vars[6] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define__syntax, _V60_V0vanity_V0compiler_V0hygienic_V0expand))));
    self->vars[7] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define__syntax, _V60_V0vanity_V0compiler_V0hygienic_V0expand))));
    self->vars[8] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__improper__length, _V60_V0vanity_V0compiler_V0hygienic_V0expand))));
    self->vars[9] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__proper__list_Q, _V60_V0vanity_V0compiler_V0hygienic_V0expand))));
    self->vars[10] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__toplevel__define, _V60_V0vanity_V0compiler_V0hygienic_V0expand))));
    self->vars[11] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0add__toplevel__binding_B, _V60_V0vanity_V0compiler_V0hygienic_V0expand))));
    self->vars[12] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0desugar__define, _V60_V0vanity_V0compiler_V0hygienic_V0expand))));
    self->vars[13] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__letrec_S, _V60_V0vanity_V0compiler_V0hygienic_V0expand))));
    self->vars[14] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0primitive__letrec_Q, _V60_V0vanity_V0compiler_V0hygienic_V0expand))));
    self->vars[15] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__app, _V60_V0vanity_V0compiler_V0hygienic_V0expand))));
    self->vars[16] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__lambda, _V60_V0vanity_V0compiler_V0hygienic_V0expand))));
    self->vars[17] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__body, _V60_V0vanity_V0compiler_V0hygienic_V0expand))));
    self->vars[18] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0constant__expr_Q, _V60_V0vanity_V0compiler_V0hygienic_V0expand))));
    self->vars[19] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__undot__list, _V60_V0vanity_V0compiler_V0hygienic_V0expand))));
    self->vars[20] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__let__syntax, _V60_V0vanity_V0compiler_V0hygienic_V0expand))));
    self->vars[21] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0eval__for__syntax__binding, _V60_V0vanity_V0compiler_V0hygienic_V0expand))));
    self->vars[22] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0introduced__identifier, _V60_V0vanity_V0compiler_V0hygienic_V0expand))));
    self->vars[23] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve, _V60_V0vanity_V0compiler_V0hygienic_V0expand))));
    self->vars[24] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0expand__identifier, _V60_V0vanity_V0compiler_V0hygienic_V0expand))));
    self->vars[25] = VEncodeBool(false);
    self->vars[26] = VEncodeBool(false);
    self->vars[27] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0fresh__toplevel__expand__env, _V60_V0vanity_V0compiler_V0hygienic_V0expand))));
    self->vars[28] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0alist__copy, _V60_V0vanity_V0compiler_V0hygienic_V0expand))));
    self->vars[29] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0init__global__forms, _V60_V0vanity_V0compiler_V0hygienic_V0expand))));
    self->vars[30] = VEncodeBool(false);
    self->vars[31] = VEncodeBool(false);
    self->vars[32] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__length, _V60_V0vanity_V0compiler_V0hygienic_V0expand))));
    self->vars[33] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__append, _V60_V0vanity_V0compiler_V0hygienic_V0expand))));
    self->vars[34] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__apply, _V60_V0vanity_V0compiler_V0hygienic_V0expand))));
    self->vars[35] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__copy__list, _V60_V0vanity_V0compiler_V0hygienic_V0expand))));
    self->vars[36] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0find__exact__binding, _V60_V0vanity_V0compiler_V0hygienic_V0expand))));
    self->vars[37] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0resolve__identifier, _V60_V0vanity_V0compiler_V0hygienic_V0expand))));
    self->vars[38] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0find__all__matching__bindings, _V60_V0vanity_V0compiler_V0hygienic_V0expand))));
    self->vars[39] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0argmax, _V60_V0vanity_V0compiler_V0hygienic_V0expand))));
    self->vars[40] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0check__unambiguous, _V60_V0vanity_V0compiler_V0hygienic_V0expand))));
    self->vars[41] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0syntax__object___Gdatum, _V60_V0vanity_V0compiler_V0hygienic_V0expand))));
    self->vars[42] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0datum___Gsyntax__object, _V60_V0vanity_V0compiler_V0hygienic_V0expand))));
    self->vars[43] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0add__binding_B, _V60_V0vanity_V0compiler_V0hygienic_V0expand))));
    self->vars[44] = VEncodeBool(false);
    self->vars[45] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0literal__identifier_E_Q, _V60_V0vanity_V0compiler_V0hygienic_V0expand))));
    self->vars[46] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0free__identifier_E_Q, _V60_V0vanity_V0compiler_V0hygienic_V0expand))));
    self->vars[47] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0expand_V0bound__identifier_E_Q, _V60_V0vanity_V0compiler_V0hygienic_V0expand))));
    VRegisterStaticEnv("_V0vanity_V0compiler_V0hygienic_V0expand_V20", &_V60_V0vanity_V0compiler_V0hygienic_V0expand);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[59]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0hygienic_V0expand_V20_V0k614, self)))),
      VEncodeBool(true));
    }
}
static void _V0vanity_V0compiler_V0hygienic_V0expand_V20_V0k8(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0hygienic_V0expand_V20_V0k8, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((##intrinsic "VMultiImport") (close _V0vanity_V0compiler_V0hygienic_V0expand_V20_V0lambda2) (##string ##.string.1815) (bruijn ##.%x.1392 0 0) 'map 'list 'global-scope 'make-syntax 'identifier? 'append-map 'compiler-error 'append 'syntax-pair? 'global-identifier 'make-scope 'syntax-caddr 'get-syntax-data 'assoc 'flip-scope 'values 'current-error-port 'format 'with-exception-handler 'assq 'sprintf 'get-scope-bindings 'set-scope-bindings! 'get-syntax-scopes 'reverse 'cadar 'caar 'every? 'cadr 'for-each 'member 'memq 'drop-right 'take-right 'lookup-intrinsic-name 'eval 'syntax? 'syntax-vector? 'global-form-env 'global-forms 'lset= 'cdar 'length 'filter 'lset<= 'fold 'syntax-vector-map 'syntax-list 'syntax-car 'syntax-cadr 'syntax-cddr 'syntax-map 'error 'equal? 'syntax-cdr 'syntax-cdar 'syntax-caar 'syntax-cons 'syntax-null? 'make-parameter 'generate-symbol)
    VCallFuncWithGC(runtime, (VFunc)VMultiImport, 64,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0hygienic_V0expand_V20_V0lambda2, self)))),
      VEncodePointer(&_V10_Dstring_D1815.sym, VPOINTER_OTHER),
      _var0,
      _V0map,
      _V0list,
      _V0global__scope,
      _V0make__syntax,
      _V0identifier_Q,
      _V0append__map,
      _V0compiler__error,
      _V0append,
      _V0syntax__pair_Q,
      _V0global__identifier,
      _V0make__scope,
      _V0syntax__caddr,
      _V0get__syntax__data,
      _V0assoc,
      _V0flip__scope,
      _V0values,
      _V0current__error__port,
      _V0format,
      _V0with__exception__handler,
      _V0assq,
      _V0sprintf,
      _V0get__scope__bindings,
      _V0set__scope__bindings_B,
      _V0get__syntax__scopes,
      _V0reverse,
      _V0cadar,
      _V0caar,
      _V0every_Q,
      _V0cadr,
      _V0for__each,
      _V0member,
      _V0memq,
      _V0drop__right,
      _V0take__right,
      _V0lookup__intrinsic__name,
      _V0eval,
      _V0syntax_Q,
      _V0syntax__vector_Q,
      _V0global__form__env,
      _V0global__forms,
      _V0lset_E,
      _V0cdar,
      _V0length,
      _V0filter,
      _V0lset_L_E,
      _V0fold,
      _V0syntax__vector__map,
      _V0syntax__list,
      _V0syntax__car,
      _V0syntax__cadr,
      _V0syntax__cddr,
      _V0syntax__map,
      _V0error,
      _V0equal_Q,
      _V0syntax__cdr,
      _V0syntax__cdar,
      _V0syntax__caar,
      _V0syntax__cons,
      _V0syntax__null_Q,
      _V0make__parameter,
      _V0generate__symbol);
}
static void _V0vanity_V0compiler_V0hygienic_V0expand_V20_V0k7(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0hygienic_V0expand_V20_V0k7, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.vector (close _V0vanity_V0compiler_V0hygienic_V0expand_V20_V0k8) (bruijn ##.%x.1393 6 0) (bruijn ##.%x.1394 5 0) (bruijn ##.%x.1395 4 0) (bruijn ##.%x.1396 3 0) (bruijn ##.%x.1397 2 0) (bruijn ##.%x.1398 1 0) (bruijn ##.%x.1399 0 0))
    VCallFuncWithGC(runtime, (VFunc)VCreateVector, 8,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0hygienic_V0expand_V20_V0k8, self)))),
      VGetArg(statics, 6-1, 0),
      VGetArg(statics, 5-1, 0),
      statics->up->up->up->vars[0],
      statics->up->up->vars[0],
      statics->up->vars[0],
      statics->vars[0],
      _var0);
}
static void _V0vanity_V0compiler_V0hygienic_V0expand_V20_V0k6(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0hygienic_V0expand_V20_V0k6, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0hygienic_V0expand_V20_V0k7) (##string ##.string.1816))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0hygienic_V0expand_V20_V0k7, self)))),
      VEncodePointer(&_V10_Dstring_D1816.sym, VPOINTER_OTHER));
}
static void _V0vanity_V0compiler_V0hygienic_V0expand_V20_V0k5(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0hygienic_V0expand_V20_V0k5, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0hygienic_V0expand_V20_V0k6) (##string ##.string.1817))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0hygienic_V0expand_V20_V0k6, self)))),
      VEncodePointer(&_V10_Dstring_D1817.sym, VPOINTER_OTHER));
}
static void _V0vanity_V0compiler_V0hygienic_V0expand_V20_V0k4(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0hygienic_V0expand_V20_V0k4, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0hygienic_V0expand_V20_V0k5) (##string ##.string.1818))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0hygienic_V0expand_V20_V0k5, self)))),
      VEncodePointer(&_V10_Dstring_D1818.sym, VPOINTER_OTHER));
}
static void _V0vanity_V0compiler_V0hygienic_V0expand_V20_V0k3(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0hygienic_V0expand_V20_V0k3, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0hygienic_V0expand_V20_V0k4) (##string ##.string.1819))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0hygienic_V0expand_V20_V0k4, self)))),
      VEncodePointer(&_V10_Dstring_D1819.sym, VPOINTER_OTHER));
}
static void _V0vanity_V0compiler_V0hygienic_V0expand_V20_V0k2(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0hygienic_V0expand_V20_V0k2, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0hygienic_V0expand_V20_V0k3) (##string ##.string.1820))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0hygienic_V0expand_V20_V0k3, self)))),
      VEncodePointer(&_V10_Dstring_D1820.sym, VPOINTER_OTHER));
}
static void _V0vanity_V0compiler_V0hygienic_V0expand_V20_V0k1(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0hygienic_V0expand_V20_V0k1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0hygienic_V0expand_V20_V0k2) (##string ##.string.1821))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0hygienic_V0expand_V20_V0k2, self)))),
      VEncodePointer(&_V10_Dstring_D1821.sym, VPOINTER_OTHER));
}
static void _V0vanity_V0compiler_V0hygienic_V0expand_V20_V0lambda1(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0hygienic_V0expand_V20_V0lambda1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0hygienic_V0expand_V20_V0k1) (##string ##.string.1822))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0hygienic_V0expand_V20_V0k1, self)))),
      VEncodePointer(&_V10_Dstring_D1822.sym, VPOINTER_OTHER));
}
VFunc _V0vanity_V0compiler_V0hygienic_V0expand_V20 = (VFunc)_V0vanity_V0compiler_V0hygienic_V0expand_V20_V0lambda1;
static __attribute__((constructor)) void VDllMain1() {
  _V0generate__symbol = VEncodePointer(VInternSymbol(-1987818883, &_VW_V0generate__symbol.sym), VPOINTER_OTHER);
  _V0make__parameter = VEncodePointer(VInternSymbol(57061984, &_VW_V0make__parameter.sym), VPOINTER_OTHER);
  _V0syntax__null_Q = VEncodePointer(VInternSymbol(-1668028446, &_VW_V0syntax__null_Q.sym), VPOINTER_OTHER);
  _V0syntax__cons = VEncodePointer(VInternSymbol(-713299037, &_VW_V0syntax__cons.sym), VPOINTER_OTHER);
  _V0syntax__caar = VEncodePointer(VInternSymbol(-1227349665, &_VW_V0syntax__caar.sym), VPOINTER_OTHER);
  _V0syntax__cdar = VEncodePointer(VInternSymbol(528412582, &_VW_V0syntax__cdar.sym), VPOINTER_OTHER);
  _V0syntax__cdr = VEncodePointer(VInternSymbol(1215523264, &_VW_V0syntax__cdr.sym), VPOINTER_OTHER);
  _V0syntax__map = VEncodePointer(VInternSymbol(-1912397961, &_VW_V0syntax__map.sym), VPOINTER_OTHER);
  _V0syntax__cddr = VEncodePointer(VInternSymbol(1072813644, &_VW_V0syntax__cddr.sym), VPOINTER_OTHER);
  _V0syntax__cadr = VEncodePointer(VInternSymbol(-176119071, &_VW_V0syntax__cadr.sym), VPOINTER_OTHER);
  _V0syntax__car = VEncodePointer(VInternSymbol(1390011611, &_VW_V0syntax__car.sym), VPOINTER_OTHER);
  _V0syntax__list = VEncodePointer(VInternSymbol(-605002697, &_VW_V0syntax__list.sym), VPOINTER_OTHER);
  _V0syntax__vector__map = VEncodePointer(VInternSymbol(-1500491324, &_VW_V0syntax__vector__map.sym), VPOINTER_OTHER);
  _V0fold = VEncodePointer(VInternSymbol(2090893058, &_VW_V0fold.sym), VPOINTER_OTHER);
  _V0lset_L_E = VEncodePointer(VInternSymbol(2095333289, &_VW_V0lset_L_E.sym), VPOINTER_OTHER);
  _V0filter = VEncodePointer(VInternSymbol(-52975199, &_VW_V0filter.sym), VPOINTER_OTHER);
  _V0lset_E = VEncodePointer(VInternSymbol(338280255, &_VW_V0lset_E.sym), VPOINTER_OTHER);
  _V0global__forms = VEncodePointer(VInternSymbol(1252986977, &_VW_V0global__forms.sym), VPOINTER_OTHER);
  _V0global__form__env = VEncodePointer(VInternSymbol(1415805201, &_VW_V0global__form__env.sym), VPOINTER_OTHER);
  _V0syntax__vector_Q = VEncodePointer(VInternSymbol(-1354385234, &_VW_V0syntax__vector_Q.sym), VPOINTER_OTHER);
  _V0syntax_Q = VEncodePointer(VInternSymbol(563065347, &_VW_V0syntax_Q.sym), VPOINTER_OTHER);
  _V0eval = VEncodePointer(VInternSymbol(-2078907041, &_VW_V0eval.sym), VPOINTER_OTHER);
  _V0lookup__intrinsic__name = VEncodePointer(VInternSymbol(451875892, &_VW_V0lookup__intrinsic__name.sym), VPOINTER_OTHER);
  _V0take__right = VEncodePointer(VInternSymbol(427694580, &_VW_V0take__right.sym), VPOINTER_OTHER);
  _V0drop__right = VEncodePointer(VInternSymbol(-377735426, &_VW_V0drop__right.sym), VPOINTER_OTHER);
  _V0memq = VEncodePointer(VInternSymbol(-1626778086, &_VW_V0memq.sym), VPOINTER_OTHER);
  _V0member = VEncodePointer(VInternSymbol(1983509194, &_VW_V0member.sym), VPOINTER_OTHER);
  _V0for__each = VEncodePointer(VInternSymbol(1903158638, &_VW_V0for__each.sym), VPOINTER_OTHER);
  _V0every_Q = VEncodePointer(VInternSymbol(-289757295, &_VW_V0every_Q.sym), VPOINTER_OTHER);
  _V0cadar = VEncodePointer(VInternSymbol(545720329, &_VW_V0cadar.sym), VPOINTER_OTHER);
  _V0reverse = VEncodePointer(VInternSymbol(418515197, &_VW_V0reverse.sym), VPOINTER_OTHER);
  _V0get__syntax__scopes = VEncodePointer(VInternSymbol(1433535723, &_VW_V0get__syntax__scopes.sym), VPOINTER_OTHER);
  _V0set__scope__bindings_B = VEncodePointer(VInternSymbol(-32175007, &_VW_V0set__scope__bindings_B.sym), VPOINTER_OTHER);
  _V0get__scope__bindings = VEncodePointer(VInternSymbol(706853436, &_VW_V0get__scope__bindings.sym), VPOINTER_OTHER);
  _V0sprintf = VEncodePointer(VInternSymbol(1933004612, &_VW_V0sprintf.sym), VPOINTER_OTHER);
  _V0assq = VEncodePointer(VInternSymbol(456349189, &_VW_V0assq.sym), VPOINTER_OTHER);
  _V0with__exception__handler = VEncodePointer(VInternSymbol(1043968208, &_VW_V0with__exception__handler.sym), VPOINTER_OTHER);
  _V0format = VEncodePointer(VInternSymbol(1942012929, &_VW_V0format.sym), VPOINTER_OTHER);
  _V0current__error__port = VEncodePointer(VInternSymbol(-1722675676, &_VW_V0current__error__port.sym), VPOINTER_OTHER);
  _V0values = VEncodePointer(VInternSymbol(711325068, &_VW_V0values.sym), VPOINTER_OTHER);
  _V0flip__scope = VEncodePointer(VInternSymbol(-1341584941, &_VW_V0flip__scope.sym), VPOINTER_OTHER);
  _V0assoc = VEncodePointer(VInternSymbol(760827368, &_VW_V0assoc.sym), VPOINTER_OTHER);
  _V0get__syntax__data = VEncodePointer(VInternSymbol(-1271181522, &_VW_V0get__syntax__data.sym), VPOINTER_OTHER);
  _V0syntax__caddr = VEncodePointer(VInternSymbol(43375589, &_VW_V0syntax__caddr.sym), VPOINTER_OTHER);
  _V0make__scope = VEncodePointer(VInternSymbol(1685021352, &_VW_V0make__scope.sym), VPOINTER_OTHER);
  _V0global__identifier = VEncodePointer(VInternSymbol(-1557481786, &_VW_V0global__identifier.sym), VPOINTER_OTHER);
  _V0syntax__pair_Q = VEncodePointer(VInternSymbol(-1139867809, &_VW_V0syntax__pair_Q.sym), VPOINTER_OTHER);
  _V0append = VEncodePointer(VInternSymbol(-700471979, &_VW_V0append.sym), VPOINTER_OTHER);
  _V0compiler__error = VEncodePointer(VInternSymbol(1345485686, &_VW_V0compiler__error.sym), VPOINTER_OTHER);
  _V0append__map = VEncodePointer(VInternSymbol(-2135287522, &_VW_V0append__map.sym), VPOINTER_OTHER);
  _V0identifier_Q = VEncodePointer(VInternSymbol(1823737055, &_VW_V0identifier_Q.sym), VPOINTER_OTHER);
  _V0make__syntax = VEncodePointer(VInternSymbol(1292393424, &_VW_V0make__syntax.sym), VPOINTER_OTHER);
  _V0global__scope = VEncodePointer(VInternSymbol(1381586664, &_VW_V0global__scope.sym), VPOINTER_OTHER);
  _V0export = VEncodePointer(VInternSymbol(1426862643, &_VW_V0export.sym), VPOINTER_OTHER);
  _V0variable = VEncodePointer(VInternSymbol(1686232624, &_VW_V0variable.sym), VPOINTER_OTHER);
  _V0expand__syntax = VEncodePointer(VInternSymbol(309030068, &_VW_V0expand__syntax.sym), VPOINTER_OTHER);
  _V10vcore_Dappend = VEncodePointer(VInternSymbol(1742285522, &_VW_V10vcore_Dappend.sym), VPOINTER_OTHER);
  _V10vcore_Dcons = VEncodePointer(VInternSymbol(-774369668, &_VW_V10vcore_Dcons.sym), VPOINTER_OTHER);
  _V0equal_Q = VEncodePointer(VInternSymbol(1746439164, &_VW_V0equal_Q.sym), VPOINTER_OTHER);
  _V0eqv_Q = VEncodePointer(VInternSymbol(232208272, &_VW_V0eqv_Q.sym), VPOINTER_OTHER);
  _V0eq_Q = VEncodePointer(VInternSymbol(-1583738215, &_VW_V0eq_Q.sym), VPOINTER_OTHER);
  _V0_G_E = VEncodePointer(VInternSymbol(1925865613, &_VW_V0_G_E.sym), VPOINTER_OTHER);
  _V0_G = VEncodePointer(VInternSymbol(-990041482, &_VW_V0_G.sym), VPOINTER_OTHER);
  _V0_L = VEncodePointer(VInternSymbol(1057406733, &_VW_V0_L.sym), VPOINTER_OTHER);
  _V0_W = VEncodePointer(VInternSymbol(-1980900630, &_VW_V0_W.sym), VPOINTER_OTHER);
  _V0_S = VEncodePointer(VInternSymbol(-1095746844, &_VW_V0_S.sym), VPOINTER_OTHER);
  _V0_P = VEncodePointer(VInternSymbol(-1632835872, &_VW_V0_P.sym), VPOINTER_OTHER);
  _V0map = VEncodePointer(VInternSymbol(-1940887657, &_VW_V0map.sym), VPOINTER_OTHER);
  _V0cdr = VEncodePointer(VInternSymbol(-27845161, &_VW_V0cdr.sym), VPOINTER_OTHER);
  _V0cddr = VEncodePointer(VInternSymbol(-569180081, &_VW_V0cddr.sym), VPOINTER_OTHER);
  _V0cdar = VEncodePointer(VInternSymbol(-1104539071, &_VW_V0cdar.sym), VPOINTER_OTHER);
  _V0cadr = VEncodePointer(VInternSymbol(137264287, &_VW_V0cadr.sym), VPOINTER_OTHER);
  _V0caar = VEncodePointer(VInternSymbol(-610927850, &_VW_V0caar.sym), VPOINTER_OTHER);
  _V0car = VEncodePointer(VInternSymbol(-5179575, &_VW_V0car.sym), VPOINTER_OTHER);
  _V0cons = VEncodePointer(VInternSymbol(943237530, &_VW_V0cons.sym), VPOINTER_OTHER);
  _V0list = VEncodePointer(VInternSymbol(-1594870040, &_VW_V0list.sym), VPOINTER_OTHER);
  _V0null_Q = VEncodePointer(VInternSymbol(1722024332, &_VW_V0null_Q.sym), VPOINTER_OTHER);
  _V0syntax__object___Gdatum = VEncodePointer(VInternSymbol(-925486414, &_VW_V0syntax__object___Gdatum.sym), VPOINTER_OTHER);
  _V0datum___Gsyntax__object = VEncodePointer(VInternSymbol(-180606471, &_VW_V0datum___Gsyntax__object.sym), VPOINTER_OTHER);
  _V10foreign_Dfunction = VEncodePointer(VInternSymbol(1321977372, &_VW_V10foreign_Dfunction.sym), VPOINTER_OTHER);
  _V10letrec = VEncodePointer(VInternSymbol(-1037390401, &_VW_V10letrec.sym), VPOINTER_OTHER);
  _V10qualified__case__lambda = VEncodePointer(VInternSymbol(-473367874, &_VW_V10qualified__case__lambda.sym), VPOINTER_OTHER);
  _V10qualified__lambda = VEncodePointer(VInternSymbol(905832333, &_VW_V10qualified__lambda.sym), VPOINTER_OTHER);
  _V10foreign__function = VEncodePointer(VInternSymbol(594095722, &_VW_V10foreign__function.sym), VPOINTER_OTHER);
  _V0let = VEncodePointer(VInternSymbol(-599055874, &_VW_V0let.sym), VPOINTER_OTHER);
  _V0ignored = VEncodePointer(VInternSymbol(825245967, &_VW_V0ignored.sym), VPOINTER_OTHER);
  _V10vcore_Dapply = VEncodePointer(VInternSymbol(1029936291, &_VW_V10vcore_Dapply.sym), VPOINTER_OTHER);
  _V0transformer = VEncodePointer(VInternSymbol(301928864, &_VW_V0transformer.sym), VPOINTER_OTHER);
  _V0error = VEncodePointer(VInternSymbol(147890691, &_VW_V0error.sym), VPOINTER_OTHER);
  _V0__ = VEncodePointer(VInternSymbol(1290206293, &_VW_V0__.sym), VPOINTER_OTHER);
  _V0length = VEncodePointer(VInternSymbol(-1077292005, &_VW_V0length.sym), VPOINTER_OTHER);
  _V0form = VEncodePointer(VInternSymbol(-180257785, &_VW_V0form.sym), VPOINTER_OTHER);
  _V0_L_E = VEncodePointer(VInternSymbol(-2106268102, &_VW_V0_L_E.sym), VPOINTER_OTHER);
  _V0_E = VEncodePointer(VInternSymbol(91122933, &_VW_V0_E.sym), VPOINTER_OTHER);
  _V0rename = VEncodePointer(VInternSymbol(1807760215, &_VW_V0rename.sym), VPOINTER_OTHER);
  _V10basic__intrinsic = VEncodePointer(VInternSymbol(1331380390, &_VW_V10basic__intrinsic.sym), VPOINTER_OTHER);
  _V10intrinsic = VEncodePointer(VInternSymbol(-701633456, &_VW_V10intrinsic.sym), VPOINTER_OTHER);
  _V10vcore_Dsetter = VEncodePointer(VInternSymbol(2136925547, &_VW_V10vcore_Dsetter.sym), VPOINTER_OTHER);
  _V0val = VEncodePointer(VInternSymbol(-1280639451, &_VW_V0val.sym), VPOINTER_OTHER);
  _V10vcore_Dmutator = VEncodePointer(VInternSymbol(-315800619, &_VW_V10vcore_Dmutator.sym), VPOINTER_OTHER);
  _V0or = VEncodePointer(VInternSymbol(2016919801, &_VW_V0or.sym), VPOINTER_OTHER);
  _V0and = VEncodePointer(VInternSymbol(-2136794974, &_VW_V0and.sym), VPOINTER_OTHER);
  _V0if = VEncodePointer(VInternSymbol(-1008835161, &_VW_V0if.sym), VPOINTER_OTHER);
  _V0quote = VEncodePointer(VInternSymbol(-278310088, &_VW_V0quote.sym), VPOINTER_OTHER);
  _V0syntax = VEncodePointer(VInternSymbol(-1845358186, &_VW_V0syntax.sym), VPOINTER_OTHER);
  _V0let__syntax = VEncodePointer(VInternSymbol(1899976589, &_VW_V0let__syntax.sym), VPOINTER_OTHER);
  _V0letrec = VEncodePointer(VInternSymbol(1712405540, &_VW_V0letrec.sym), VPOINTER_OTHER);
  _V0letrec_S = VEncodePointer(VInternSymbol(2021638346, &_VW_V0letrec_S.sym), VPOINTER_OTHER);
  _V0case__lambda = VEncodePointer(VInternSymbol(-1661638092, &_VW_V0case__lambda.sym), VPOINTER_OTHER);
  _V10vcore_Dpush__value = VEncodePointer(VInternSymbol(1433144780, &_VW_V10vcore_Dpush__value.sym), VPOINTER_OTHER);
  _V10vcore_Dpop__value = VEncodePointer(VInternSymbol(-858837018, &_VW_V10vcore_Dpop__value.sym), VPOINTER_OTHER);
  _V10vcore_Ddeclare = VEncodePointer(VInternSymbol(-1798172844, &_VW_V10vcore_Ddeclare.sym), VPOINTER_OTHER);
  _V0import = VEncodePointer(VInternSymbol(268366565, &_VW_V0import.sym), VPOINTER_OTHER);
  _V0define__syntax = VEncodePointer(VInternSymbol(-75888163, &_VW_V0define__syntax.sym), VPOINTER_OTHER);
  _V0tmp = VEncodePointer(VInternSymbol(1890156776, &_VW_V0tmp.sym), VPOINTER_OTHER);
  _V10vcore_Dcall__with__values = VEncodePointer(VInternSymbol(1537217383, &_VW_V10vcore_Dcall__with__values.sym), VPOINTER_OTHER);
  _V0lambda = VEncodePointer(VInternSymbol(1054233532, &_VW_V0lambda.sym), VPOINTER_OTHER);
  _V0set_B = VEncodePointer(VInternSymbol(-530681865, &_VW_V0set_B.sym), VPOINTER_OTHER);
  _V0define__values = VEncodePointer(VInternSymbol(734623460, &_VW_V0define__values.sym), VPOINTER_OTHER);
  _V0define__constant = VEncodePointer(VInternSymbol(471311928, &_VW_V0define__constant.sym), VPOINTER_OTHER);
  _V0define = VEncodePointer(VInternSymbol(-1044656496, &_VW_V0define.sym), VPOINTER_OTHER);
  _V0begin = VEncodePointer(VInternSymbol(1265111139, &_VW_V0begin.sym), VPOINTER_OTHER);
  _V0dummy = VEncodePointer(VInternSymbol(1450767474, &_VW_V0dummy.sym), VPOINTER_OTHER);
  _V10_Dpair_D1814.first = _V0begin;
  _V10_Dpair_D1814.rest = VEncodePointer(&_V10_Dpair_D1813, VPOINTER_PAIR);
  _V10_Dpair_D1813.first = _V0define;
  _V10_Dpair_D1813.rest = VEncodePointer(&_V10_Dpair_D1812, VPOINTER_PAIR);
  _V10_Dpair_D1812.first = _V0define__constant;
  _V10_Dpair_D1812.rest = VEncodePointer(&_V10_Dpair_D1811, VPOINTER_PAIR);
  _V10_Dpair_D1811.first = _V0define__values;
  _V10_Dpair_D1811.rest = VEncodePointer(&_V10_Dpair_D1810, VPOINTER_PAIR);
  _V10_Dpair_D1810.first = _V0lambda;
  _V10_Dpair_D1810.rest = VEncodePointer(&_V10_Dpair_D1809, VPOINTER_PAIR);
  _V10_Dpair_D1809.first = _V0case__lambda;
  _V10_Dpair_D1809.rest = VEncodePointer(&_V10_Dpair_D1808, VPOINTER_PAIR);
  _V10_Dpair_D1808.first = _V0letrec;
  _V10_Dpair_D1808.rest = VEncodePointer(&_V10_Dpair_D1807, VPOINTER_PAIR);
  _V10_Dpair_D1807.first = _V0letrec_S;
  _V10_Dpair_D1807.rest = VEncodePointer(&_V10_Dpair_D1806, VPOINTER_PAIR);
  _V10_Dpair_D1806.first = _V0let__syntax;
  _V10_Dpair_D1806.rest = VEncodePointer(&_V10_Dpair_D1805, VPOINTER_PAIR);
  _V10_Dpair_D1805.first = _V0define__syntax;
  _V10_Dpair_D1805.rest = VEncodePointer(&_V10_Dpair_D1804, VPOINTER_PAIR);
  _V10_Dpair_D1804.first = _V0quote;
  _V10_Dpair_D1804.rest = VEncodePointer(&_V10_Dpair_D1803, VPOINTER_PAIR);
  _V10_Dpair_D1803.first = _V0syntax;
  _V10_Dpair_D1803.rest = VEncodePointer(&_V10_Dpair_D1802, VPOINTER_PAIR);
  _V10_Dpair_D1802.first = _V0if;
  _V10_Dpair_D1802.rest = VEncodePointer(&_V10_Dpair_D1801, VPOINTER_PAIR);
  _V10_Dpair_D1801.first = _V0and;
  _V10_Dpair_D1801.rest = VEncodePointer(&_V10_Dpair_D1800, VPOINTER_PAIR);
  _V10_Dpair_D1800.first = _V0or;
  _V10_Dpair_D1800.rest = VEncodePointer(&_V10_Dpair_D1799, VPOINTER_PAIR);
  _V10_Dpair_D1799.first = _V0set_B;
  _V10_Dpair_D1799.rest = VEncodePointer(&_V10_Dpair_D1798, VPOINTER_PAIR);
  _V10_Dpair_D1798.first = _V10intrinsic;
  _V10_Dpair_D1798.rest = VEncodePointer(&_V10_Dpair_D1797, VPOINTER_PAIR);
  _V10_Dpair_D1797.first = _V10basic__intrinsic;
  _V10_Dpair_D1797.rest = VEncodePointer(&_V10_Dpair_D1796, VPOINTER_PAIR);
  _V10_Dpair_D1796.first = _V10vcore_Ddeclare;
  _V10_Dpair_D1796.rest = VEncodePointer(&_V10_Dpair_D1795, VPOINTER_PAIR);
  _V10_Dpair_D1795.first = _V0export;
  _V10_Dpair_D1795.rest = VEncodePointer(&_V10_Dpair_D1794, VPOINTER_PAIR);
  _V10_Dpair_D1794.first = _V0import;
  _V10_Dpair_D1794.rest = VNULL;
  _V40_V10vcore_D_G_E = VEncodePointer(VLookupConstant("_V40_V10vcore_D_G_E", &_VW_V40_V10vcore_D_G_E), VPOINTER_CLOSURE);
  _V40_V10vcore_D_G = VEncodePointer(VLookupConstant("_V40_V10vcore_D_G", &_VW_V40_V10vcore_D_G), VPOINTER_CLOSURE);
  _V40_V10vcore_D_E = VEncodePointer(VLookupConstant("_V40_V10vcore_D_E", &_VW_V40_V10vcore_D_E), VPOINTER_CLOSURE);
  _V40_V10vcore_D_L_E = VEncodePointer(VLookupConstant("_V40_V10vcore_D_L_E", &_VW_V40_V10vcore_D_L_E), VPOINTER_CLOSURE);
  _V40_V10vcore_D_L = VEncodePointer(VLookupConstant("_V40_V10vcore_D_L", &_VW_V40_V10vcore_D_L), VPOINTER_CLOSURE);
  _V40_V10vcore_D_W = VEncodePointer(VLookupConstant("_V40_V10vcore_D_W", &_VW_V40_V10vcore_D_W), VPOINTER_CLOSURE);
  _V40_V10vcore_D_S = VEncodePointer(VLookupConstant("_V40_V10vcore_D_S", &_VW_V40_V10vcore_D_S), VPOINTER_CLOSURE);
  _V40_V10vcore_D__ = VEncodePointer(VLookupConstant("_V40_V10vcore_D__", &_VW_V40_V10vcore_D__), VPOINTER_CLOSURE);
  _V40_V10vcore_D_P = VEncodePointer(VLookupConstant("_V40_V10vcore_D_P", &_VW_V40_V10vcore_D_P), VPOINTER_CLOSURE);
  _V40_V10vcore_Deq_Q = VEncodePointer(VLookupConstant("_V40_V10vcore_Deq_Q", &_VW_V40_V10vcore_Deq_Q), VPOINTER_CLOSURE);
  _V40_V10vcore_Dapply = VEncodePointer(VLookupConstant("_V40_V10vcore_Dapply", &_VW_V40_V10vcore_Dapply), VPOINTER_CLOSURE);
  _V10_Dpair_D1788.first = _V0quote;
  _V10_Dpair_D1788.rest = VEncodePointer(&_V10_Dpair_D1787, VPOINTER_PAIR);
  _V10_Dpair_D1787.first = _V0lambda;
  _V10_Dpair_D1787.rest = VEncodePointer(&_V10_Dpair_D1786, VPOINTER_PAIR);
  _V10_Dpair_D1786.first = _V0case__lambda;
  _V10_Dpair_D1786.rest = VEncodePointer(&_V10_Dpair_D1785, VPOINTER_PAIR);
  _V10_Dpair_D1785.first = _V10qualified__lambda;
  _V10_Dpair_D1785.rest = VEncodePointer(&_V10_Dpair_D1784, VPOINTER_PAIR);
  _V10_Dpair_D1784.first = _V10qualified__case__lambda;
  _V10_Dpair_D1784.rest = VEncodePointer(&_V10_Dpair_D1783, VPOINTER_PAIR);
  _V10_Dpair_D1783.first = _V10intrinsic;
  _V10_Dpair_D1783.rest = VEncodePointer(&_V10_Dpair_D1782, VPOINTER_PAIR);
  _V10_Dpair_D1782.first = _V10basic__intrinsic;
  _V10_Dpair_D1782.rest = VEncodePointer(&_V10_Dpair_D1781, VPOINTER_PAIR);
  _V10_Dpair_D1781.first = _V10foreign__function;
  _V10_Dpair_D1781.rest = VNULL;
  _V40VMultiImport = VEncodePointer(VLookupConstant("_V40VMultiImport", &_VW_V40VMultiImport), VPOINTER_CLOSURE);
}
