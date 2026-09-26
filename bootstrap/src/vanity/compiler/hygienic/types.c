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

VEnv * _V60_V0vanity_V0compiler_V0hygienic_V0types;

static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D734 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "_V0vanity_V0core_V20" };
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D733 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "_V0vanity_V0list_V20" };
VWEAK VWORD _V0list;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0list = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "list" };
VWEAK VWORD _V0make__parameter;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V0make__parameter = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "make-parameter" };
VWEAK VWORD _V0cadr;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0cadr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "cadr" };
VWEAK VWORD _V0string__append;VWEAK struct { VBlob sym; char bytes[14]; } _VW_V0string__append = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 14 }, "string-append" };
VWEAK VWORD _V0sprintf;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0sprintf = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "sprintf" };
VWEAK VWORD _V0lset__xor;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0lset__xor = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "lset-xor" };
VWEAK VWORD _V0memq;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0memq = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "memq" };
VWEAK VWORD _V0list_Q;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0list_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "list\?" };
VWEAK VWORD _V0any;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0any = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "any" };
VWEAK VWORD _V0vector__map;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V0vector__map = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "vector-map" };
VWEAK VWORD _V0map;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0map = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "map" };
VWEAK VWORD _V0vector__for__each;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V0vector__for__each = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "vector-for-each" };
VWEAK VWORD _V0append;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0append = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "append" };
static struct { VBlob sym; char bytes[44]; } _V10_Dstring_D732 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 44 }, "_V0vanity_V0compiler_V0hygienic_V0types_V20" };
VWEAK VWORD _V0global;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0global = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "global" };
VWEAK VWORD _V0program;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0program = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "program" };
VWEAK VWORD _V40_V10vcore_Dcons;
VWEAK VClosure _VW_V40_V10vcore_Dcons = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VCons2, NULL };
VWEAK VWORD _V40_V10vcore_Dvector;
VWEAK VClosure _VW_V40_V10vcore_Dvector = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VCreateVector, NULL };
VWEAK VWORD _V40_V10vcore_Dmake__vector;
VWEAK VClosure _VW_V40_V10vcore_Dmake__vector = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VMakeVector, NULL };
VWEAK VWORD _V0syntax___Glist;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V0syntax___Glist = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "syntax->list" };
VWEAK VWORD _V0syntax__undot__list;VWEAK struct { VBlob sym; char bytes[18]; } _VW_V0syntax__undot__list = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 18 }, "syntax-undot-list" };
VWEAK VWORD _V0syntax__proper__list_Q;VWEAK struct { VBlob sym; char bytes[20]; } _VW_V0syntax__proper__list_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 20 }, "syntax-proper-list\?" };
VWEAK VWORD _V0syntax__length;VWEAK struct { VBlob sym; char bytes[14]; } _VW_V0syntax__length = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 14 }, "syntax-length" };
VWEAK VWORD _V0datum___Gsyntax__object;VWEAK struct { VBlob sym; char bytes[21]; } _VW_V0datum___Gsyntax__object = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 21 }, "datum->syntax-object" };
VWEAK VWORD _V0syntax__object___Gdatum;VWEAK struct { VBlob sym; char bytes[21]; } _VW_V0syntax__object___Gdatum = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 21 }, "syntax-object->datum" };
VWEAK VWORD _V0flip__scope;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V0flip__scope = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "flip-scope" };
VWEAK VWORD _V0eager__flip__scope;VWEAK struct { VBlob sym; char bytes[17]; } _VW_V0eager__flip__scope = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 17 }, "eager-flip-scope" };
VWEAK VWORD _V0lazy__flip__scope;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V0lazy__flip__scope = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "lazy-flip-scope" };
VWEAK VWORD _V0syntax__vector__for__each;VWEAK struct { VBlob sym; char bytes[23]; } _VW_V0syntax__vector__for__each = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 23 }, "syntax-vector-for-each" };
VWEAK VWORD _V0syntax__vector__map;VWEAK struct { VBlob sym; char bytes[18]; } _VW_V0syntax__vector__map = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 18 }, "syntax-vector-map" };
VWEAK VWORD _V0syntax__vector__ref;VWEAK struct { VBlob sym; char bytes[18]; } _VW_V0syntax__vector__ref = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 18 }, "syntax-vector-ref" };
VWEAK VWORD _V0syntax__make__vector;VWEAK struct { VBlob sym; char bytes[19]; } _VW_V0syntax__make__vector = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 19 }, "syntax-make-vector" };
VWEAK VWORD _V0syntax__vector;VWEAK struct { VBlob sym; char bytes[14]; } _VW_V0syntax__vector = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 14 }, "syntax-vector" };
VWEAK VWORD _V0syntax__vector_Q;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V0syntax__vector_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "syntax-vector\?" };
VWEAK VWORD _V0syntax__caddr;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V0syntax__caddr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "syntax-caddr" };
VWEAK VWORD _V0syntax__list;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0syntax__list = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "syntax-list" };
VWEAK VWORD _V0syntax__for__each;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V0syntax__for__each = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "syntax-for-each" };
VWEAK VWORD _V0syntax__append__map;VWEAK struct { VBlob sym; char bytes[18]; } _VW_V0syntax__append__map = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 18 }, "syntax-append-map" };
VWEAK VWORD _V0syntax__map;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V0syntax__map = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "syntax-map" };
VWEAK VWORD _V0syntax__cddr;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0syntax__cddr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "syntax-cddr" };
VWEAK VWORD _V0syntax__cdar;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0syntax__cdar = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "syntax-cdar" };
VWEAK VWORD _V0syntax__cadr;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0syntax__cadr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "syntax-cadr" };
VWEAK VWORD _V0syntax__caar;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0syntax__caar = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "syntax-caar" };
VWEAK VWORD _V0syntax__cdr;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V0syntax__cdr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "syntax-cdr" };
VWEAK VWORD _V0syntax__car;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V0syntax__car = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "syntax-car" };
VWEAK VWORD _V0syntax__cons;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0syntax__cons = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "syntax-cons" };
VWEAK VWORD _V0syntax__pair_Q;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V0syntax__pair_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "syntax-pair\?" };
VWEAK VWORD _V0syntax__null_Q;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V0syntax__null_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "syntax-null\?" };
VWEAK VWORD _V0get__syntax__data;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V0get__syntax__data = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "get-syntax-data" };
VWEAK VWORD _V0syntax_Q;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0syntax_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "syntax\?" };
VWEAK VWORD _V0make__syntax;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0make__syntax = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "make-syntax" };
VWEAK VWORD _V0identifier_Q;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0identifier_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "identifier\?" };
VWEAK VWORD _V0expansion__timed__out_Q;VWEAK struct { VBlob sym; char bytes[21]; } _VW_V0expansion__timed__out_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 21 }, "expansion-timed-out\?" };
VWEAK VWORD _V0set__expansion__deadline_B;VWEAK struct { VBlob sym; char bytes[24]; } _VW_V0set__expansion__deadline_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 24 }, "set-expansion-deadline!" };
VWEAK VWORD _V0all__registered__scopes;VWEAK struct { VBlob sym; char bytes[22]; } _VW_V0all__registered__scopes = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 22 }, "all-registered-scopes" };
VWEAK VWORD _V0explain__scopes_Q;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V0explain__scopes_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "explain-scopes\?" };
VWEAK VWORD _V0scope__set___Gstring;VWEAK struct { VBlob sym; char bytes[18]; } _VW_V0scope__set___Gstring = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 18 }, "scope-set->string" };
VWEAK VWORD _V0scope___Gstring;VWEAK struct { VBlob sym; char bytes[14]; } _VW_V0scope___Gstring = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 14 }, "scope->string" };
VWEAK VWORD _V0toplevel__scope;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V0toplevel__scope = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "toplevel-scope" };
VWEAK VWORD _V0global__scope;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V0global__scope = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "global-scope" };
VWEAK VWORD _V0scope_E_Q;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0scope_E_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "scope=\?" };
VWEAK VWORD _V0scope_Q;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0scope_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "scope\?" };
VWEAK VWORD _V0make__scope;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V0make__scope = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "make-scope" };
static VPair _V10_Dpair_D731 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D730 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0flips;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0flips = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "flips" };
VWEAK VWORD _V0data;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0data = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "data" };
VWEAK VWORD _V0syntax;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0syntax = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "syntax" };
static VPair _V10_Dpair_D729 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D728 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D727 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0provenance;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V0provenance = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "provenance" };
VWEAK VWORD _V0serial;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0serial = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "serial" };
VWEAK VWORD _V0bindings;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0bindings = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "bindings" };
VWEAK VWORD _V0get__scope__bindings;VWEAK struct { VBlob sym; char bytes[19]; } _VW_V0get__scope__bindings = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 19 }, "get-scope-bindings" };
VWEAK VWORD _V0set__scope__bindings_B;VWEAK struct { VBlob sym; char bytes[20]; } _VW_V0set__scope__bindings_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 20 }, "set-scope-bindings!" };
VWEAK VWORD _V0get__scope__serial;VWEAK struct { VBlob sym; char bytes[17]; } _VW_V0get__scope__serial = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 17 }, "get-scope-serial" };
VWEAK VWORD _V0get__scope__provenance;VWEAK struct { VBlob sym; char bytes[21]; } _VW_V0get__scope__provenance = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 21 }, "get-scope-provenance" };
VWEAK VWORD _V0scope;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0scope = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "scope" };
static struct { VBlob sym; char bytes[6]; } _V10_Dstring_D726 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 6 }, "~A#~A" };
static struct { VBlob sym; char bytes[12]; } _V10_Dstring_D725 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 12 }, "(use#~A ~A)" };
VWEAK VWORD _V0use;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0use = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "use" };
static struct { VBlob sym; char bytes[14]; } _V10_Dstring_D724 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 14 }, "(intro#~A ~A)" };
VWEAK VWORD _V0intro;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0intro = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "intro" };
static struct { VBlob sym; char bytes[2]; } _V10_Dstring_D723 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 2 }, " " };
static struct { VBlob sym; char bytes[5]; } _V10_Dstring_D722 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 5 }, "(~A)" };
static struct { VBlob sym; char bytes[1]; } _V10_Dstring_D721 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 1 }, "" };
VWEAK VWORD _V0get__syntax__data__impl;VWEAK struct { VBlob sym; char bytes[21]; } _VW_V0get__syntax__data__impl = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 21 }, "get-syntax-data-impl" };
VWEAK VWORD _V0set__syntax__data_B;VWEAK struct { VBlob sym; char bytes[17]; } _VW_V0set__syntax__data_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 17 }, "set-syntax-data!" };
VWEAK VWORD _V0get__syntax__scopes;VWEAK struct { VBlob sym; char bytes[18]; } _VW_V0get__syntax__scopes = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 18 }, "get-syntax-scopes" };
static struct { VBlob sym; char bytes[31]; } _V10_Dstring_D720 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 31 }, "not a record of the right type" };
VWEAK VWORD _V0error;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0error = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "error" };
VWEAK VWORD _V0set__syntax__scopes_B;VWEAK struct { VBlob sym; char bytes[19]; } _VW_V0set__syntax__scopes_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 19 }, "set-syntax-scopes!" };
VWEAK VWORD _V40_V10vcore_Deq_Q;
VWEAK VClosure _VW_V40_V10vcore_Deq_Q = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VEq2, NULL };
VWEAK VWORD _V40VMultiImport;
VWEAK VClosure _VW_V40VMultiImport = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VMultiImport, NULL };
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0types_V0all__registered__scopes, _var0);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0types_V10_Dscope_Q_D2, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0types_V0make__scope__impl, _var0, _var1, _var2, _var3);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__scope__bindings, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0types_V0set__scope__bindings_B, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__scope__serial, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__scope__provenance, _var0, _var1);
V_DECLARE_FUNC_MIN(_V50_V0vanity_V0compiler_V0hygienic_V0types_V0make__scope);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0types_V0scope___Gstring, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0types_V0scope__set___Gstring_V10_Djoin_D170_V10_Dloop_D173, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0types_V0scope__set___Gstring_V10_Djoin_D170, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0types_V0scope__set___Gstring, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0types_V0set__expansion__deadline_B, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0types_V0expansion__timed__out_Q, _var0);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0types_V10_Dsyntax_Q_D4, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0types_V0make__syntax, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__syntax__data__impl, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0types_V0set__syntax__data_B, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__syntax__scopes, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0types_V0set__syntax__scopes_B, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0types_V0identifier_Q, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0types_V0propogate__flips_V10_Dflip_D156, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0types_V0propogate__flips, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__syntax__data, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0types_V0flip__scope__set_V10_Dloop_D150, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0types_V0flip__scope__set, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0types_V0lazy__flip__scope, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0types_V0eager__flip__scope, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__unpack, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__null_Q, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__pair_Q, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__car, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__cdr, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__caar, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__cadr, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__cdar, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__cddr, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__caddr, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__map_V10_Dloop_D131, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__map_V10_Dloop_D127, _var0, _var1);
V_DECLARE_FUNC_MIN(_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__map);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__for__each_V10_Dloop_D123, _var0, _var1);
V_DECLARE_FUNC_MIN(_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__for__each);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__vector_Q, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__vector__ref, _var0, _var1, _var2);
V_DECLARE_FUNC_MIN(_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__vector__map, _var0, _var1);
V_DECLARE_FUNC_MIN(_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__vector__for__each, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__append__map_V10_Dloop_D110, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__append__map, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0types_V0datum___Gsyntax__object, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__object___Gdatum, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__length_V10_Dloop_D101, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__length, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__proper__list_Q, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__undot__list, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax___Glist, _var0, _var1);
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax___Glist_V0k7(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax___Glist_V0k7, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%r.538) ((##vcore.cons (bruijn ##.%x.194 3 0) (bruijn ##.%x.195 1 0))) ((bruijn ##.%k.192 5 0) (bruijn ##.%r.538 0 0)))
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
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax___Glist_V0k6(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax___Glist_V0k6, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler hygienic types syntax->list) #t (bruijn ##.syntax->list.35 4 0) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax___Glist_V0k7) (bruijn ##.%x.196 0 0))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0types;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax___Glist_V0k7, self))));
    VWORD _arg1 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax___Glist, _V60_V0vanity_V0compiler_V0hygienic_V0types)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax___Glist(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax___Glist_V0k5(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax___Glist_V0k5, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler hygienic types syntax-cdr) #t (bruijn ##.syntax-cdr.56 3 21) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax___Glist_V0k6) (bruijn ##.xs.97 2 1))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0types;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax___Glist_V0k6, self))));
    VWORD _arg1 = 
      statics->up->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__cdr, _V60_V0vanity_V0compiler_V0hygienic_V0types)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__cdr(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax___Glist_V0k4(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax___Glist_V0k4, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.193 0 0) ((bruijn ##.%k.192 1 0) '()) (##qualified-call (vanity compiler hygienic types syntax-car) #t (bruijn ##.syntax-car.57 2 22) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax___Glist_V0k5) (bruijn ##.xs.97 1 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VNULL);
} else {
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0types;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax___Glist_V0k5, self))));
    VWORD _arg1 = 
      statics->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__car, _V60_V0vanity_V0compiler_V0hygienic_V0types)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__car(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax___Glist(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax___Glist, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (##qualified-call (vanity compiler hygienic types syntax-null?) #t (bruijn ##.syntax-null?.60 1 25) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax___Glist_V0k4) (bruijn ##.xs.97 0 1))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0types;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax___Glist_V0k4, self))));
    VWORD _arg1 = 
      _var1;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__null_Q, _V60_V0vanity_V0compiler_V0hygienic_V0types)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__null_Q(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__undot__list_V0k12(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__undot__list_V0k12, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%r.539) ((##vcore.cons (bruijn ##.%x.200 3 0) (bruijn ##.%x.201 1 0))) ((bruijn ##.%k.197 6 0) (bruijn ##.%r.539 0 0)))
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
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__undot__list_V0k11(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__undot__list_V0k11, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler hygienic types syntax-undot-list) #t (bruijn ##.syntax-undot-list.36 5 1) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__undot__list_V0k12) (bruijn ##.%x.202 0 0))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0types;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__undot__list_V0k12, self))));
    VWORD _arg1 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__undot__list, _V60_V0vanity_V0compiler_V0hygienic_V0types)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__undot__list(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__undot__list_V0k10(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__undot__list_V0k10, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler hygienic types syntax-cdr) #t (bruijn ##.syntax-cdr.56 4 21) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__undot__list_V0k11) (bruijn ##.xs.98 3 1))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0types;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__undot__list_V0k11, self))));
    VWORD _arg1 = 
      statics->up->up->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__cdr, _V60_V0vanity_V0compiler_V0hygienic_V0types)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__cdr(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__undot__list_V0k9(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__undot__list_V0k9, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.199 0 0) (##qualified-call (vanity compiler hygienic types syntax-car) #t (bruijn ##.syntax-car.57 3 22) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__undot__list_V0k10) (bruijn ##.xs.98 2 1)) (basic-block 1 1 (##.%r.540) ((##vcore.cons (bruijn ##.xs.98 3 1) '())) ((bruijn ##.%k.197 3 0) (bruijn ##.%r.540 0 0))))
if(VDecodeBool(
_var0)) {
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0types;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__undot__list_V0k10, self))));
    VWORD _arg1 = 
      statics->up->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__car, _V60_V0vanity_V0compiler_V0hygienic_V0types)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__car(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
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
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__undot__list_V0k8(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__undot__list_V0k8, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.198 0 0) ((bruijn ##.%k.197 1 0) '()) (##qualified-call (vanity compiler hygienic types syntax-pair?) #t (bruijn ##.syntax-pair?.59 2 24) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__undot__list_V0k9) (bruijn ##.xs.98 1 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VNULL);
} else {
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0types;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__undot__list_V0k9, self))));
    VWORD _arg1 = 
      statics->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__pair_Q, _V60_V0vanity_V0compiler_V0hygienic_V0types)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__pair_Q(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__undot__list(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__undot__list, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (##qualified-call (vanity compiler hygienic types syntax-null?) #t (bruijn ##.syntax-null?.60 1 25) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__undot__list_V0k8) (bruijn ##.xs.98 0 1))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0types;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__undot__list_V0k8, self))));
    VWORD _arg1 = 
      _var1;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__null_Q, _V60_V0vanity_V0compiler_V0hygienic_V0types)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__null_Q(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__proper__list_Q_V0k15(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__proper__list_Q_V0k15, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler hygienic types syntax-proper-list?) #t (bruijn ##.syntax-proper-list?.37 4 2) (bruijn ##.%k.203 3 0) (bruijn ##.%x.206 0 0))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0types;
    VWORD _arg0 = 
      statics->up->up->vars[0];
    VWORD _arg1 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__proper__list_Q, _V60_V0vanity_V0compiler_V0hygienic_V0types)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__proper__list_Q(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__proper__list_Q_V0k14(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__proper__list_Q_V0k14, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.205 0 0) (##qualified-call (vanity compiler hygienic types syntax-cdr) #t (bruijn ##.syntax-cdr.56 3 21) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__proper__list_Q_V0k15) (bruijn ##.xs.99 2 1)) ((bruijn ##.%k.203 2 0) #f))
if(VDecodeBool(
_var0)) {
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0types;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__proper__list_Q_V0k15, self))));
    VWORD _arg1 = 
      statics->up->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__cdr, _V60_V0vanity_V0compiler_V0hygienic_V0types)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__cdr(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__proper__list_Q_V0k13(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__proper__list_Q_V0k13, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.204 0 0) ((bruijn ##.%k.203 1 0) #t) (##qualified-call (vanity compiler hygienic types syntax-pair?) #t (bruijn ##.syntax-pair?.59 2 24) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__proper__list_Q_V0k14) (bruijn ##.xs.99 1 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(true));
} else {
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0types;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__proper__list_Q_V0k14, self))));
    VWORD _arg1 = 
      statics->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__pair_Q, _V60_V0vanity_V0compiler_V0hygienic_V0types)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__pair_Q(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__proper__list_Q(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__proper__list_Q, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (##qualified-call (vanity compiler hygienic types syntax-null?) #t (bruijn ##.syntax-null?.60 1 25) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__proper__list_Q_V0k13) (bruijn ##.xs.99 0 1))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0types;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__proper__list_Q_V0k13, self))));
    VWORD _arg1 = 
      _var1;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__null_Q, _V60_V0vanity_V0compiler_V0hygienic_V0types)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__null_Q(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__length_V10_Dloop_D101_V0k17(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__length_V10_Dloop_D101_V0k17, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler hygienic types syntax-length ##.loop.101) #f (bruijn ##.loop.101 4 0) (bruijn ##.%k.208 3 0) (bruijn ##.%x.541 1 0) (bruijn ##.%x.211 0 0))
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
       _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__length_V10_Dloop_D101(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__length_V10_Dloop_D101_V0k16(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__length_V10_Dloop_D101_V0k16, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.209 0 0) ((bruijn ##.%k.208 1 0) (bruijn ##.acc.102 1 1)) (basic-block 1 1 (##.%x.541) ((##vcore.+ (bruijn ##.acc.102 2 1) 1)) (##qualified-call (vanity compiler hygienic types syntax-cdr) #t (bruijn ##.syntax-cdr.56 5 21) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__length_V10_Dloop_D101_V0k17) (bruijn ##.xs.103 2 2))))
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
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0types;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__length_V10_Dloop_D101_V0k17, self))));
    VWORD _arg1 = 
      statics->up->vars[2];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__cdr, _V60_V0vanity_V0compiler_V0hygienic_V0types)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__cdr(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__length_V10_Dloop_D101(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__length_V10_Dloop_D101, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (##qualified-call (vanity compiler hygienic types syntax-null?) #t (bruijn ##.syntax-null?.60 3 25) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__length_V10_Dloop_D101_V0k16) (bruijn ##.xs.103 0 2))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0types;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__length_V10_Dloop_D101_V0k16, self))));
    VWORD _arg1 = 
      _var2;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__null_Q, _V60_V0vanity_V0compiler_V0hygienic_V0types)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__null_Q(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__length(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__length, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (letrec 1 ((close "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__length_V10_Dloop_D101")) (##qualified-call (vanity compiler hygienic types syntax-length ##.loop.101) #f (bruijn ##.loop.101 0 0) (bruijn ##.%k.207 1 0) 0 (bruijn ##.xs.100 1 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__length_V10_Dloop_D101, self))));
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
       _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__length_V10_Dloop_D101(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__object___Gdatum_V0k23(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__object___Gdatum_V0k23, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%r.542) ((##vcore.cons (bruijn ##.%x.215 3 0) (bruijn ##.%x.216 1 0))) ((bruijn ##.%k.212 7 0) (bruijn ##.%r.542 0 0)))
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
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__object___Gdatum_V0k22(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__object___Gdatum_V0k22, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler hygienic types syntax-object->datum) #t (bruijn ##.syntax-object->datum.39 6 4) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__object___Gdatum_V0k23) (bruijn ##.%x.217 0 0))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0types;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__object___Gdatum_V0k23, self))));
    VWORD _arg1 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__object___Gdatum, _V60_V0vanity_V0compiler_V0hygienic_V0types)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__object___Gdatum(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__object___Gdatum_V0k21(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__object___Gdatum_V0k21, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler hygienic types syntax-cdr) #t (bruijn ##.syntax-cdr.56 5 21) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__object___Gdatum_V0k22) (bruijn ##.v.104 4 1))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0types;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__object___Gdatum_V0k22, self))));
    VWORD _arg1 = 
      statics->up->up->up->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__cdr, _V60_V0vanity_V0compiler_V0hygienic_V0types)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__cdr(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__object___Gdatum_V0k20(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__object___Gdatum_V0k20, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler hygienic types syntax-object->datum) #t (bruijn ##.syntax-object->datum.39 4 4) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__object___Gdatum_V0k21) (bruijn ##.%x.218 0 0))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0types;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__object___Gdatum_V0k21, self))));
    VWORD _arg1 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__object___Gdatum, _V60_V0vanity_V0compiler_V0hygienic_V0types)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__object___Gdatum(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__object___Gdatum_V0k24(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__object___Gdatum_V0k24, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.219 0 0) (##qualified-call (vanity compiler hygienic types syntax-vector-map) #t (bruijn ##.syntax-vector-map.43 4 8) (bruijn ##.%k.212 3 0) (bruijn ##.syntax-object->datum.39 4 4) (bruijn ##.v.104 3 1)) ((bruijn ##.%k.212 3 0) (bruijn ##.v.104 3 1)))
if(VDecodeBool(
_var0)) {
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0types;
    VWORD _arg0 = 
      statics->up->up->vars[0];
    VWORD _arg1 = 
      statics->up->up->up->vars[4];
    VWORD _arg2 = 
      statics->up->up->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__vector__map, _V60_V0vanity_V0compiler_V0hygienic_V0types)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__vector__map(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      statics->up->up->vars[1]);
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__object___Gdatum_V0k19(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__object___Gdatum_V0k19, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.214 0 0) (##qualified-call (vanity compiler hygienic types syntax-car) #t (bruijn ##.syntax-car.57 3 22) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__object___Gdatum_V0k20) (bruijn ##.v.104 2 1)) (##qualified-call (vanity compiler hygienic types syntax-vector?) #t (bruijn ##.syntax-vector?.47 3 12) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__object___Gdatum_V0k24) (bruijn ##.v.104 2 1)))
if(VDecodeBool(
_var0)) {
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0types;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__object___Gdatum_V0k20, self))));
    VWORD _arg1 = 
      statics->up->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__car, _V60_V0vanity_V0compiler_V0hygienic_V0types)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__car(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
} else {
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0types;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__object___Gdatum_V0k24, self))));
    VWORD _arg1 = 
      statics->up->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__vector_Q, _V60_V0vanity_V0compiler_V0hygienic_V0types)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__vector_Q(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__object___Gdatum_V0k18(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__object___Gdatum_V0k18, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.213 0 0) (##qualified-call (vanity compiler hygienic types get-syntax-data) #t (bruijn ##.get-syntax-data.66 2 31) (bruijn ##.%k.212 1 0) (bruijn ##.v.104 1 1)) (##qualified-call (vanity compiler hygienic types syntax-pair?) #t (bruijn ##.syntax-pair?.59 2 24) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__object___Gdatum_V0k19) (bruijn ##.v.104 1 1)))
if(VDecodeBool(
_var0)) {
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0types;
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      statics->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__syntax__data, _V60_V0vanity_V0compiler_V0hygienic_V0types)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__syntax__data(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
} else {
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0types;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__object___Gdatum_V0k19, self))));
    VWORD _arg1 = 
      statics->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__pair_Q, _V60_V0vanity_V0compiler_V0hygienic_V0types)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__pair_Q(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__object___Gdatum(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__object___Gdatum, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (##qualified-call (vanity compiler hygienic types identifier?) #t (bruijn ##.identifier?.68 1 33) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__object___Gdatum_V0k18) (bruijn ##.v.104 0 1))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0types;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__object___Gdatum_V0k18, self))));
    VWORD _arg1 = 
      _var1;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0identifier_Q, _V60_V0vanity_V0compiler_V0hygienic_V0types)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0types_V0identifier_Q(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0datum___Gsyntax__object_V0k26(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0datum___Gsyntax__object_V0k26, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler hygienic types make-syntax) #t (bruijn ##.make-syntax.73 4 38) (bruijn ##.%k.220 3 0) (bruijn ##.v.106 3 2) (bruijn ##.%x.223 0 0))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0types;
    VWORD _arg0 = 
      statics->up->up->vars[0];
    VWORD _arg1 = 
      statics->up->up->vars[2];
    VWORD _arg2 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0make__syntax, _V60_V0vanity_V0compiler_V0hygienic_V0types)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0types_V0make__syntax(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0datum___Gsyntax__object_V0k31(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0datum___Gsyntax__object_V0k31, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.syntax-cons.58 8 23) (bruijn ##.%k.220 7 0) (bruijn ##.%x.225 2 0) (bruijn ##.%x.226 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 23)), 3,
      VGetArg(statics, 7-1, 0),
      statics->up->vars[0],
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0datum___Gsyntax__object_V0k30(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0datum___Gsyntax__object_V0k30, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler hygienic types datum->syntax-object) #t (bruijn ##.datum->syntax-object.40 7 5) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0datum___Gsyntax__object_V0k31) (bruijn ##.template.105 6 1) (bruijn ##.%x.227 0 0))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0types;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0datum___Gsyntax__object_V0k31, self))));
    VWORD _arg1 = 
      VGetArg(statics, 6-1, 1);
    VWORD _arg2 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0datum___Gsyntax__object, _V60_V0vanity_V0compiler_V0hygienic_V0types)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0types_V0datum___Gsyntax__object(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0datum___Gsyntax__object_V0k29(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0datum___Gsyntax__object_V0k29, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler hygienic types syntax-cdr) #t (bruijn ##.syntax-cdr.56 6 21) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0datum___Gsyntax__object_V0k30) (bruijn ##.v.106 5 2))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0types;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0datum___Gsyntax__object_V0k30, self))));
    VWORD _arg1 = 
      VGetArg(statics, 5-1, 2);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__cdr, _V60_V0vanity_V0compiler_V0hygienic_V0types)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__cdr(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0datum___Gsyntax__object_V0k28(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0datum___Gsyntax__object_V0k28, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler hygienic types datum->syntax-object) #t (bruijn ##.datum->syntax-object.40 5 5) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0datum___Gsyntax__object_V0k29) (bruijn ##.template.105 4 1) (bruijn ##.%x.228 0 0))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0types;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0datum___Gsyntax__object_V0k29, self))));
    VWORD _arg1 = 
      statics->up->up->up->vars[1];
    VWORD _arg2 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0datum___Gsyntax__object, _V60_V0vanity_V0compiler_V0hygienic_V0types)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0types_V0datum___Gsyntax__object(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0datum___Gsyntax__object_V0lambda3(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0datum___Gsyntax__object_V0lambda3, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // (##qualified-call (vanity compiler hygienic types datum->syntax-object) #t (bruijn ##.datum->syntax-object.40 6 5) (bruijn ##.%k.230 0 0) (bruijn ##.template.105 5 1) (bruijn ##.x.5.107 0 1))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0types;
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      VGetArg(statics, 5-1, 1);
    VWORD _arg2 = 
      _var1;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0datum___Gsyntax__object, _V60_V0vanity_V0compiler_V0hygienic_V0types)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0types_V0datum___Gsyntax__object(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0datum___Gsyntax__object_V0k32(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0datum___Gsyntax__object_V0k32, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.229 0 0) (##qualified-call (vanity compiler hygienic types syntax-vector-map) #t (bruijn ##.syntax-vector-map.43 5 8) (bruijn ##.%k.220 4 0) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0datum___Gsyntax__object_V0lambda3) (bruijn ##.v.106 4 2)) ((bruijn ##.%k.220 4 0) (bruijn ##.v.106 4 2)))
if(VDecodeBool(
_var0)) {
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0types;
    VWORD _arg0 = 
      statics->up->up->up->vars[0];
    VWORD _arg1 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0datum___Gsyntax__object_V0lambda3, self))));
    VWORD _arg2 = 
      statics->up->up->up->vars[2];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__vector__map, _V60_V0vanity_V0compiler_V0hygienic_V0types)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__vector__map(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      statics->up->up->up->vars[2]);
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0datum___Gsyntax__object_V0k27(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0datum___Gsyntax__object_V0k27, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.224 0 0) (##qualified-call (vanity compiler hygienic types syntax-car) #t (bruijn ##.syntax-car.57 4 22) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0datum___Gsyntax__object_V0k28) (bruijn ##.v.106 3 2)) (##qualified-call (vanity compiler hygienic types syntax-vector?) #t (bruijn ##.syntax-vector?.47 4 12) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0datum___Gsyntax__object_V0k32) (bruijn ##.v.106 3 2)))
if(VDecodeBool(
_var0)) {
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0types;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0datum___Gsyntax__object_V0k28, self))));
    VWORD _arg1 = 
      statics->up->up->vars[2];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__car, _V60_V0vanity_V0compiler_V0hygienic_V0types)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__car(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
} else {
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0types;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0datum___Gsyntax__object_V0k32, self))));
    VWORD _arg1 = 
      statics->up->up->vars[2];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__vector_Q, _V60_V0vanity_V0compiler_V0hygienic_V0types)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__vector_Q(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0datum___Gsyntax__object_V0k25(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0datum___Gsyntax__object_V0k25, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.221 0 0) ((bruijn ##.%k.220 1 0) (bruijn ##.v.106 1 2)) (basic-block 1 1 (##.%p.543) ((##vcore.symbol? (bruijn ##.v.106 2 2))) (if (bruijn ##.%p.543 0 0) (##qualified-call (vanity compiler hygienic types get-syntax-scopes) #t (bruijn ##.get-syntax-scopes.70 3 35) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0datum___Gsyntax__object_V0k26) (bruijn ##.template.105 2 1)) (##qualified-call (vanity compiler hygienic types syntax-pair?) #t (bruijn ##.syntax-pair?.59 3 24) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0datum___Gsyntax__object_V0k27) (bruijn ##.v.106 2 2)))))
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
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0types;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0datum___Gsyntax__object_V0k26, self))));
    VWORD _arg1 = 
      statics->up->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__syntax__scopes, _V60_V0vanity_V0compiler_V0hygienic_V0types)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__syntax__scopes(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
} else {
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0types;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0datum___Gsyntax__object_V0k27, self))));
    VWORD _arg1 = 
      statics->up->vars[2];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__pair_Q, _V60_V0vanity_V0compiler_V0hygienic_V0types)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__pair_Q(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
    }
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0datum___Gsyntax__object(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0datum___Gsyntax__object, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (##qualified-call (vanity compiler hygienic types identifier?) #t (bruijn ##.identifier?.68 1 33) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0datum___Gsyntax__object_V0k25) (bruijn ##.v.106 0 2))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0types;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0datum___Gsyntax__object_V0k25, self))));
    VWORD _arg1 = 
      _var2;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0identifier_Q, _V60_V0vanity_V0compiler_V0hygienic_V0types)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0types_V0identifier_Q(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__append__map_V10_Dloop_D110_V0k37(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__append__map_V10_Dloop_D110_V0k37, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.append.6 9 0) (bruijn ##.%k.232 5 0) (bruijn ##.%x.234 2 0) (bruijn ##.%x.235 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 0)), 3,
      VGetArg(statics, 5-1, 0),
      statics->up->vars[0],
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__append__map_V10_Dloop_D110_V0k36(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__append__map_V10_Dloop_D110_V0k36, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler hygienic types syntax-append-map ##.loop.110) #f (bruijn ##.loop.110 5 0) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__append__map_V10_Dloop_D110_V0k37) (bruijn ##.%x.236 0 0))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 5-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__append__map_V10_Dloop_D110_V0k37, self))));
    VWORD _arg1 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__append__map_V10_Dloop_D110(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__append__map_V10_Dloop_D110_V0k35(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__append__map_V10_Dloop_D110_V0k35, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler hygienic types syntax-cdr) #t (bruijn ##.syntax-cdr.56 6 21) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__append__map_V10_Dloop_D110_V0k36) (bruijn ##.xs.111 3 1))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0types;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__append__map_V10_Dloop_D110_V0k36, self))));
    VWORD _arg1 = 
      statics->up->up->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__cdr, _V60_V0vanity_V0compiler_V0hygienic_V0types)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__cdr(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__append__map_V10_Dloop_D110_V0k34(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__append__map_V10_Dloop_D110_V0k34, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.f.108 4 1) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__append__map_V10_Dloop_D110_V0k35) (bruijn ##.%x.237 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[1]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__append__map_V10_Dloop_D110_V0k35, self)))),
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__append__map_V10_Dloop_D110_V0k33(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__append__map_V10_Dloop_D110_V0k33, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.233 0 0) ((bruijn ##.%k.232 1 0) '()) (##qualified-call (vanity compiler hygienic types syntax-car) #t (bruijn ##.syntax-car.57 4 22) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__append__map_V10_Dloop_D110_V0k34) (bruijn ##.xs.111 1 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VNULL);
} else {
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0types;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__append__map_V10_Dloop_D110_V0k34, self))));
    VWORD _arg1 = 
      statics->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__car, _V60_V0vanity_V0compiler_V0hygienic_V0types)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__car(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__append__map_V10_Dloop_D110(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__append__map_V10_Dloop_D110, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (##qualified-call (vanity compiler hygienic types syntax-null?) #t (bruijn ##.syntax-null?.60 3 25) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__append__map_V10_Dloop_D110_V0k33) (bruijn ##.xs.111 0 1))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0types;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__append__map_V10_Dloop_D110_V0k33, self))));
    VWORD _arg1 = 
      _var1;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__null_Q, _V60_V0vanity_V0compiler_V0hygienic_V0types)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__null_Q(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__append__map(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__append__map, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (letrec 1 ((close "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__append__map_V10_Dloop_D110")) (##qualified-call (vanity compiler hygienic types syntax-append-map ##.loop.110) #f (bruijn ##.loop.110 0 0) (bruijn ##.%k.231 1 0) (bruijn ##.xs.109 1 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__append__map_V10_Dloop_D110, self))));
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      statics->vars[2];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__append__map_V10_Dloop_D110(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__vector__for__each_V0k38(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__vector__for__each_V0k38, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.apply (bruijn ##.%k.238 1 0) (bruijn ##.vector-for-each.7 3 1) (bruijn ##.f.112 1 1) (bruijn ##.%x.239 0 0))
    VCallFuncWithGC(runtime, (VFunc)VApply2, 4,
      statics->vars[0],
      statics->up->up->vars[1],
      statics->vars[1],
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__vector__for__each(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, ...) {
 if(argc < 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__vector__for__each, got ~D~N"
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
  // ((bruijn ##.map.8 2 2) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__vector__for__each_V0k38) (bruijn ##.syntax-unpack.62 1 27) (bruijn ##.args.113 0 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[2]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__vector__for__each_V0k38, self)))),
      statics->vars[27],
      _varargs);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__vector__map_V0k39(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__vector__map_V0k39, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.apply (bruijn ##.%k.240 1 0) (bruijn ##.vector-map.9 3 3) (bruijn ##.f.114 1 1) (bruijn ##.%x.241 0 0))
    VCallFuncWithGC(runtime, (VFunc)VApply2, 4,
      statics->vars[0],
      statics->up->up->vars[3],
      statics->vars[1],
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__vector__map(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, ...) {
 if(argc < 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__vector__map, got ~D~N"
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
  // ((bruijn ##.map.8 2 2) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__vector__map_V0k39) (bruijn ##.syntax-unpack.62 1 27) (bruijn ##.args.115 0 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[2]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__vector__map_V0k39, self)))),
      statics->vars[27],
      _varargs);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__vector__ref_V0k40(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__vector__ref_V0k40, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%r.544) ((##vcore.vector-ref (bruijn ##.%x.243 1 0) (bruijn ##.i.117 2 2))) ((bruijn ##.%k.242 2 0) (bruijn ##.%r.544 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VVectorRef2(runtime, NULL,
      statics->vars[0],
      statics->up->vars[2]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      self->vars[0]);
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__vector__ref(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__vector__ref, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (##qualified-call (vanity compiler hygienic types syntax-unpack) #t (bruijn ##.syntax-unpack.62 1 27) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__vector__ref_V0k40) (bruijn ##.v.116 0 1))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0types;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__vector__ref_V0k40, self))));
    VWORD _arg1 = 
      _var1;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__unpack, _V60_V0vanity_V0compiler_V0hygienic_V0types)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__unpack(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__vector_Q_V0k42(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__vector_Q_V0k42, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%r.546) ((##vcore.vector? (bruijn ##.%x.247 1 0))) ((bruijn ##.%k.244 4 0) (bruijn ##.%r.546 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VVectorP2(runtime, NULL,
      statics->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      self->vars[0]);
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__vector_Q_V0k41(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__vector_Q_V0k41, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.246 0 0) (##qualified-call (vanity compiler hygienic types get-syntax-data-impl) #t (bruijn ##.get-syntax-data-impl.72 3 37) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__vector_Q_V0k42) (bruijn ##.x.118 2 1)) ((bruijn ##.%k.244 2 0) #f))
if(VDecodeBool(
_var0)) {
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0types;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__vector_Q_V0k42, self))));
    VWORD _arg1 = 
      statics->up->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__syntax__data__impl, _V60_V0vanity_V0compiler_V0hygienic_V0types)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__syntax__data__impl(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__vector_Q(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__vector_Q, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.%p.545) ((##vcore.vector? (bruijn ##.x.118 1 1))) (if (bruijn ##.%p.545 0 0) ((bruijn ##.%k.244 1 0) (bruijn ##.%p.545 0 0)) ((bruijn ##.syntax?.74 2 39) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__vector_Q_V0k41) (bruijn ##.x.118 1 1))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VVectorP2(runtime, NULL,
      statics->vars[1]);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      self->vars[0]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[39]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__vector_Q_V0k41, self)))),
      statics->vars[1]);
}
    }
}
static void _V10_Dsyntax__for__each_D49_V0k46(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dsyntax__for__each_D49_V0k46, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler hygienic types syntax-for-each) #t (bruijn ##.syntax-for-each.49 4 14) (bruijn ##.%k.248 3 0) (bruijn ##.f.119 3 1) (bruijn ##.%x.250 0 0))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0types;
    VWORD _arg0 = 
      statics->up->up->vars[0];
    VWORD _arg1 = 
      statics->up->up->vars[1];
    VWORD _arg2 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__for__each, _V60_V0vanity_V0compiler_V0hygienic_V0types)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__for__each(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
static void _V10_Dsyntax__for__each_D49_V0k45(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##qualified-call (vanity compiler hygienic types syntax-cdr) #t (bruijn ##.syntax-cdr.56 3 21) (close _V10_Dsyntax__for__each_D49_V0k46) (bruijn ##.xs.120 2 2))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0types;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dsyntax__for__each_D49_V0k46, self))));
    VWORD _arg1 = 
      statics->up->vars[2];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__cdr, _V60_V0vanity_V0compiler_V0hygienic_V0types)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__cdr(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
static void _V10_Dsyntax__for__each_D49_V0k44(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dsyntax__for__each_D49_V0k44, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.f.119 2 1) (close _V10_Dsyntax__for__each_D49_V0k45) (bruijn ##.%x.251 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[1]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dsyntax__for__each_D49_V0k45, self)))),
      _var0);
}
static void _V10_Dsyntax__for__each_D49_V0k43(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dsyntax__for__each_D49_V0k43, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.249 0 0) ((bruijn ##.%k.248 1 0) #void) (##qualified-call (vanity compiler hygienic types syntax-car) #t (bruijn ##.syntax-car.57 2 22) (close _V10_Dsyntax__for__each_D49_V0k44) (bruijn ##.xs.120 1 2)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VVOID);
} else {
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0types;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dsyntax__for__each_D49_V0k44, self))));
    VWORD _arg1 = 
      statics->vars[2];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__car, _V60_V0vanity_V0compiler_V0hygienic_V0types)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__car(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__for__each_V10_Dloop_D123_V0k50(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__for__each_V10_Dloop_D123_V0k50, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler hygienic types syntax-for-each ##.loop.123) #f (bruijn ##.loop.123 4 0) (bruijn ##.%k.253 3 0) (bruijn ##.%x.255 0 0))
  {
    VClosure * _closure = VDecodeClosure(statics->up->up->up->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->up->up->vars[0];
    VWORD _arg1 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__for__each_V10_Dloop_D123(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
static void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__for__each_V10_Dloop_D123_V0k49(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.map.8 6 2) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__for__each_V10_Dloop_D123_V0k50) (bruijn ##.syntax-cdr.56 5 21) (bruijn ##.xss.124 2 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 2)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__for__each_V10_Dloop_D123_V0k50, self)))),
      VGetArg(statics, 5-1, 21),
      statics->up->vars[1]);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__for__each_V10_Dloop_D123_V0k48(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__for__each_V10_Dloop_D123_V0k48, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.apply (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__for__each_V10_Dloop_D123_V0k49) (bruijn ##.f.121 4 1) (bruijn ##.%x.256 0 0))
    VCallFuncWithGC(runtime, (VFunc)VApply2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__for__each_V10_Dloop_D123_V0k49, self)))),
      statics->up->up->up->vars[1],
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__for__each_V10_Dloop_D123_V0k47(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__for__each_V10_Dloop_D123_V0k47, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.254 0 0) ((bruijn ##.%k.253 1 0) #void) ((bruijn ##.map.8 5 2) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__for__each_V10_Dloop_D123_V0k48) (bruijn ##.syntax-car.57 4 22) (bruijn ##.xss.124 1 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VVOID);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 2)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__for__each_V10_Dloop_D123_V0k48, self)))),
      statics->up->up->up->vars[22],
      statics->vars[1]);
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__for__each_V10_Dloop_D123(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__for__each_V10_Dloop_D123, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.any.10 4 4) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__for__each_V10_Dloop_D123_V0k47) (bruijn ##.syntax-null?.60 3 25) (bruijn ##.xss.124 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[4]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__for__each_V10_Dloop_D123_V0k47, self)))),
      statics->up->up->vars[25],
      _var1);
}
__attribute__((used)) static void _V20CaseError__V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__for__each(VRuntime * runtime, VEnv * statics, int argc, ...) {
 // ("_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__for__each" #t #f (3 (##qualified-call (vanity compiler hygienic types syntax-null?) #t (bruijn ##.syntax-null?.60 1 25) (close _V10_Dsyntax__for__each_D49_V0k43) (bruijn ##.xs.120 0 2))) (2 + (letrec 1 ((close "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__for__each_V10_Dloop_D123")) (##qualified-call (vanity compiler hygienic types syntax-for-each ##.loop.123) #f (bruijn ##.loop.123 0 0) (bruijn ##.%k.252 1 0) (bruijn ##.xss.122 1 2)))))
 VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__for__each, got ~D~N"
 "-- expected 3~N"
 "-- expected 2 or more~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__for__each(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (##qualified-call (vanity compiler hygienic types syntax-null?) #t (bruijn ##.syntax-null?.60 1 25) (close _V10_Dsyntax__for__each_D49_V0k43) (bruijn ##.xs.120 0 2))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0types;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dsyntax__for__each_D49_V0k43, self))));
    VWORD _arg1 = 
      _var2;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__null_Q, _V60_V0vanity_V0compiler_V0hygienic_V0types)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__null_Q(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
__attribute__((used)) static void _V20Case1__V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__for__each(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, ...) {
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 2, argc, _var1);
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _varargs;
  // (letrec 1 ((close "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__for__each_V10_Dloop_D123")) (##qualified-call (vanity compiler hygienic types syntax-for-each ##.loop.123) #f (bruijn ##.loop.123 0 0) (bruijn ##.%k.252 1 0) (bruijn ##.xss.122 1 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__for__each_V10_Dloop_D123, self))));
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      statics->vars[2];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__for__each_V10_Dloop_D123(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__for__each(VRuntime * runtime, VEnv * statics, int argc, ...);
asm(
".intel_syntax noprefix\n"
#ifdef __linux__
".type _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__for__each, @function\n"
#endif
".globl _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__for__each\n"
"_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__for__each:\n"
"    cmp " ARGC_REG ", 3\n"
"    je _V20Case0__V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__for__each\n"
"    cmp " ARGC_REG ", 2\n"
"    jge _V20Case1__V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__for__each\n"
"    jmp _V20CaseError__V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__for__each\n"
);
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__map_V10_Dloop_D127_V0k55(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__map_V10_Dloop_D127_V0k55, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%r.547) ((##vcore.cons (bruijn ##.%x.260 3 0) (bruijn ##.%x.261 1 0))) ((bruijn ##.%k.258 6 0) (bruijn ##.%r.547 0 0)))
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
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__map_V10_Dloop_D127_V0k54(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__map_V10_Dloop_D127_V0k54, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler hygienic types syntax-map ##.loop.127) #f (bruijn ##.loop.127 5 0) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__map_V10_Dloop_D127_V0k55) (bruijn ##.%x.262 0 0))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 5-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__map_V10_Dloop_D127_V0k55, self))));
    VWORD _arg1 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__map_V10_Dloop_D127(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__map_V10_Dloop_D127_V0k53(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__map_V10_Dloop_D127_V0k53, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler hygienic types syntax-cdr) #t (bruijn ##.syntax-cdr.56 6 21) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__map_V10_Dloop_D127_V0k54) (bruijn ##.xs.128 3 1))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0types;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__map_V10_Dloop_D127_V0k54, self))));
    VWORD _arg1 = 
      statics->up->up->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__cdr, _V60_V0vanity_V0compiler_V0hygienic_V0types)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__cdr(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__map_V10_Dloop_D127_V0k52(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__map_V10_Dloop_D127_V0k52, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.f.125 4 1) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__map_V10_Dloop_D127_V0k53) (bruijn ##.%x.263 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[1]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__map_V10_Dloop_D127_V0k53, self)))),
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__map_V10_Dloop_D127_V0k51(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__map_V10_Dloop_D127_V0k51, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.259 0 0) ((bruijn ##.%k.258 1 0) '()) (##qualified-call (vanity compiler hygienic types syntax-car) #t (bruijn ##.syntax-car.57 4 22) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__map_V10_Dloop_D127_V0k52) (bruijn ##.xs.128 1 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VNULL);
} else {
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0types;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__map_V10_Dloop_D127_V0k52, self))));
    VWORD _arg1 = 
      statics->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__car, _V60_V0vanity_V0compiler_V0hygienic_V0types)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__car(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__map_V10_Dloop_D127(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__map_V10_Dloop_D127, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (##qualified-call (vanity compiler hygienic types syntax-null?) #t (bruijn ##.syntax-null?.60 3 25) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__map_V10_Dloop_D127_V0k51) (bruijn ##.xs.128 0 1))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0types;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__map_V10_Dloop_D127_V0k51, self))));
    VWORD _arg1 = 
      _var1;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__null_Q, _V60_V0vanity_V0compiler_V0hygienic_V0types)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__null_Q(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__map_V10_Dloop_D131_V0k60(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__map_V10_Dloop_D131_V0k60, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%r.548) ((##vcore.cons (bruijn ##.%x.267 3 0) (bruijn ##.%x.268 1 0))) ((bruijn ##.%k.265 6 0) (bruijn ##.%r.548 0 0)))
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
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__map_V10_Dloop_D131_V0k59(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__map_V10_Dloop_D131_V0k59, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler hygienic types syntax-map ##.loop.131) #f (bruijn ##.loop.131 5 0) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__map_V10_Dloop_D131_V0k60) (bruijn ##.%x.269 0 0))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 5-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__map_V10_Dloop_D131_V0k60, self))));
    VWORD _arg1 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__map_V10_Dloop_D131(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__map_V10_Dloop_D131_V0k58(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__map_V10_Dloop_D131_V0k58, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.map.8 7 2) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__map_V10_Dloop_D131_V0k59) (bruijn ##.syntax-cdr.56 6 21) (bruijn ##.xss.132 3 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 2)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__map_V10_Dloop_D131_V0k59, self)))),
      VGetArg(statics, 6-1, 21),
      statics->up->up->vars[1]);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__map_V10_Dloop_D131_V0k57(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__map_V10_Dloop_D131_V0k57, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.apply (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__map_V10_Dloop_D131_V0k58) (bruijn ##.f.129 4 1) (bruijn ##.%x.270 0 0))
    VCallFuncWithGC(runtime, (VFunc)VApply2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__map_V10_Dloop_D131_V0k58, self)))),
      statics->up->up->up->vars[1],
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__map_V10_Dloop_D131_V0k56(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__map_V10_Dloop_D131_V0k56, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.266 0 0) ((bruijn ##.%k.265 1 0) '()) ((bruijn ##.map.8 5 2) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__map_V10_Dloop_D131_V0k57) (bruijn ##.syntax-car.57 4 22) (bruijn ##.xss.132 1 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VNULL);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 2)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__map_V10_Dloop_D131_V0k57, self)))),
      statics->up->up->up->vars[22],
      statics->vars[1]);
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__map_V10_Dloop_D131(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__map_V10_Dloop_D131, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.any.10 4 4) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__map_V10_Dloop_D131_V0k56) (bruijn ##.syntax-null?.60 3 25) (bruijn ##.xss.132 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[4]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__map_V10_Dloop_D131_V0k56, self)))),
      statics->up->up->vars[25],
      _var1);
}
__attribute__((used)) static void _V20CaseError__V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__map(VRuntime * runtime, VEnv * statics, int argc, ...) {
 // ("_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__map" #t #f (3 (letrec 1 ((close "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__map_V10_Dloop_D127")) (##qualified-call (vanity compiler hygienic types syntax-map ##.loop.127) #f (bruijn ##.loop.127 0 0) (bruijn ##.%k.257 1 0) (bruijn ##.xs.126 1 2)))) (2 + (letrec 1 ((close "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__map_V10_Dloop_D131")) (##qualified-call (vanity compiler hygienic types syntax-map ##.loop.131) #f (bruijn ##.loop.131 0 0) (bruijn ##.%k.264 1 0) (bruijn ##.xss.130 1 2)))))
 VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__map, got ~D~N"
 "-- expected 3~N"
 "-- expected 2 or more~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__map(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (letrec 1 ((close "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__map_V10_Dloop_D127")) (##qualified-call (vanity compiler hygienic types syntax-map ##.loop.127) #f (bruijn ##.loop.127 0 0) (bruijn ##.%k.257 1 0) (bruijn ##.xs.126 1 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__map_V10_Dloop_D127, self))));
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      statics->vars[2];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__map_V10_Dloop_D127(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
}
__attribute__((used)) static void _V20Case1__V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__map(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, ...) {
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 2, argc, _var1);
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _varargs;
  // (letrec 1 ((close "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__map_V10_Dloop_D131")) (##qualified-call (vanity compiler hygienic types syntax-map ##.loop.131) #f (bruijn ##.loop.131 0 0) (bruijn ##.%k.264 1 0) (bruijn ##.xss.130 1 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__map_V10_Dloop_D131, self))));
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      statics->vars[2];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__map_V10_Dloop_D131(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__map(VRuntime * runtime, VEnv * statics, int argc, ...);
asm(
".intel_syntax noprefix\n"
#ifdef __linux__
".type _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__map, @function\n"
#endif
".globl _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__map\n"
"_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__map:\n"
"    cmp " ARGC_REG ", 3\n"
"    je _V20Case0__V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__map\n"
"    cmp " ARGC_REG ", 2\n"
"    jge _V20Case1__V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__map\n"
"    jmp _V20CaseError__V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__map\n"
);
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__caddr_V0k62(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__caddr_V0k62, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler hygienic types syntax-car) #t (bruijn ##.syntax-car.57 3 22) (bruijn ##.%k.271 2 0) (bruijn ##.%x.272 0 0))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0types;
    VWORD _arg0 = 
      statics->up->vars[0];
    VWORD _arg1 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__car, _V60_V0vanity_V0compiler_V0hygienic_V0types)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__car(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__caddr_V0k61(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__caddr_V0k61, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler hygienic types syntax-cdr) #t (bruijn ##.syntax-cdr.56 2 21) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__caddr_V0k62) (bruijn ##.%x.273 0 0))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0types;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__caddr_V0k62, self))));
    VWORD _arg1 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__cdr, _V60_V0vanity_V0compiler_V0hygienic_V0types)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__cdr(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__caddr(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__caddr, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (##qualified-call (vanity compiler hygienic types syntax-cdr) #t (bruijn ##.syntax-cdr.56 1 21) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__caddr_V0k61) (bruijn ##.pair.133 0 1))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0types;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__caddr_V0k61, self))));
    VWORD _arg1 = 
      _var1;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__cdr, _V60_V0vanity_V0compiler_V0hygienic_V0types)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__cdr(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__cddr_V0k63(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__cddr_V0k63, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler hygienic types syntax-cdr) #t (bruijn ##.syntax-cdr.56 2 21) (bruijn ##.%k.274 1 0) (bruijn ##.%x.275 0 0))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0types;
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__cdr, _V60_V0vanity_V0compiler_V0hygienic_V0types)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__cdr(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__cddr(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__cddr, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (##qualified-call (vanity compiler hygienic types syntax-cdr) #t (bruijn ##.syntax-cdr.56 1 21) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__cddr_V0k63) (bruijn ##.pair.134 0 1))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0types;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__cddr_V0k63, self))));
    VWORD _arg1 = 
      _var1;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__cdr, _V60_V0vanity_V0compiler_V0hygienic_V0types)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__cdr(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__cdar_V0k64(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__cdar_V0k64, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler hygienic types syntax-cdr) #t (bruijn ##.syntax-cdr.56 2 21) (bruijn ##.%k.276 1 0) (bruijn ##.%x.277 0 0))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0types;
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__cdr, _V60_V0vanity_V0compiler_V0hygienic_V0types)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__cdr(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__cdar(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__cdar, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (##qualified-call (vanity compiler hygienic types syntax-car) #t (bruijn ##.syntax-car.57 1 22) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__cdar_V0k64) (bruijn ##.pair.135 0 1))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0types;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__cdar_V0k64, self))));
    VWORD _arg1 = 
      _var1;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__car, _V60_V0vanity_V0compiler_V0hygienic_V0types)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__car(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__cadr_V0k65(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__cadr_V0k65, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler hygienic types syntax-car) #t (bruijn ##.syntax-car.57 2 22) (bruijn ##.%k.278 1 0) (bruijn ##.%x.279 0 0))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0types;
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__car, _V60_V0vanity_V0compiler_V0hygienic_V0types)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__car(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__cadr(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__cadr, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (##qualified-call (vanity compiler hygienic types syntax-cdr) #t (bruijn ##.syntax-cdr.56 1 21) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__cadr_V0k65) (bruijn ##.pair.136 0 1))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0types;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__cadr_V0k65, self))));
    VWORD _arg1 = 
      _var1;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__cdr, _V60_V0vanity_V0compiler_V0hygienic_V0types)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__cdr(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__caar_V0k66(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__caar_V0k66, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler hygienic types syntax-car) #t (bruijn ##.syntax-car.57 2 22) (bruijn ##.%k.280 1 0) (bruijn ##.%x.281 0 0))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0types;
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__car, _V60_V0vanity_V0compiler_V0hygienic_V0types)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__car(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__caar(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__caar, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (##qualified-call (vanity compiler hygienic types syntax-car) #t (bruijn ##.syntax-car.57 1 22) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__caar_V0k66) (bruijn ##.pair.137 0 1))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0types;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__caar_V0k66, self))));
    VWORD _arg1 = 
      _var1;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__car, _V60_V0vanity_V0compiler_V0hygienic_V0types)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__car(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__cdr_V0k67(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__cdr_V0k67, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%r.549) ((##vcore.cdr (bruijn ##.%x.283 1 0))) ((bruijn ##.%k.282 2 0) (bruijn ##.%r.549 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      self->vars[0]);
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__cdr(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__cdr, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (##qualified-call (vanity compiler hygienic types syntax-unpack) #t (bruijn ##.syntax-unpack.62 1 27) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__cdr_V0k67) (bruijn ##.pair.138 0 1))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0types;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__cdr_V0k67, self))));
    VWORD _arg1 = 
      _var1;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__unpack, _V60_V0vanity_V0compiler_V0hygienic_V0types)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__unpack(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__car_V0k68(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__car_V0k68, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%r.550) ((##vcore.car (bruijn ##.%x.285 1 0))) ((bruijn ##.%k.284 2 0) (bruijn ##.%r.550 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      self->vars[0]);
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__car(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__car, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (##qualified-call (vanity compiler hygienic types syntax-unpack) #t (bruijn ##.syntax-unpack.62 1 27) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__car_V0k68) (bruijn ##.pair.139 0 1))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0types;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__car_V0k68, self))));
    VWORD _arg1 = 
      _var1;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__unpack, _V60_V0vanity_V0compiler_V0hygienic_V0types)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__unpack(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__pair_Q_V0k70(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__pair_Q_V0k70, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%r.552) ((##vcore.pair? (bruijn ##.%x.289 1 0))) ((bruijn ##.%k.286 4 0) (bruijn ##.%r.552 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      self->vars[0]);
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__pair_Q_V0k69(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__pair_Q_V0k69, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.288 0 0) (##qualified-call (vanity compiler hygienic types get-syntax-data-impl) #t (bruijn ##.get-syntax-data-impl.72 3 37) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__pair_Q_V0k70) (bruijn ##.x.140 2 1)) ((bruijn ##.%k.286 2 0) #f))
if(VDecodeBool(
_var0)) {
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0types;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__pair_Q_V0k70, self))));
    VWORD _arg1 = 
      statics->up->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__syntax__data__impl, _V60_V0vanity_V0compiler_V0hygienic_V0types)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__syntax__data__impl(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__pair_Q(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__pair_Q, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.%p.551) ((##vcore.pair? (bruijn ##.x.140 1 1))) (if (bruijn ##.%p.551 0 0) ((bruijn ##.%k.286 1 0) #t) ((bruijn ##.syntax?.74 2 39) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__pair_Q_V0k69) (bruijn ##.x.140 1 1))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->vars[1]);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(true));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[39]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__pair_Q_V0k69, self)))),
      statics->vars[1]);
}
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__null_Q_V0k72(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__null_Q_V0k72, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%r.554) ((##vcore.null? (bruijn ##.%x.293 1 0))) ((bruijn ##.%k.290 4 0) (bruijn ##.%r.554 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VNullP2(runtime, NULL,
      statics->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      self->vars[0]);
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__null_Q_V0k71(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__null_Q_V0k71, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.292 0 0) (##qualified-call (vanity compiler hygienic types get-syntax-data-impl) #t (bruijn ##.get-syntax-data-impl.72 3 37) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__null_Q_V0k72) (bruijn ##.x.141 2 1)) ((bruijn ##.%k.290 2 0) #f))
if(VDecodeBool(
_var0)) {
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0types;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__null_Q_V0k72, self))));
    VWORD _arg1 = 
      statics->up->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__syntax__data__impl, _V60_V0vanity_V0compiler_V0hygienic_V0types)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__syntax__data__impl(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__null_Q(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__null_Q, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.%p.553) ((##vcore.null? (bruijn ##.x.141 1 1))) (if (bruijn ##.%p.553 0 0) ((bruijn ##.%k.290 1 0) #t) ((bruijn ##.syntax?.74 2 39) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__null_Q_V0k71) (bruijn ##.x.141 1 1))))
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
      VEncodeBool(true));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[39]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__null_Q_V0k71, self)))),
      statics->vars[1]);
}
    }
}
static void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__unpack_V0k74(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##qualified-call (vanity compiler hygienic types get-syntax-data-impl) #t (bruijn ##.get-syntax-data-impl.72 2 37) (bruijn ##.%k.294 1 0) (bruijn ##.x.142 1 1))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0types;
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      statics->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__syntax__data__impl, _V60_V0vanity_V0compiler_V0hygienic_V0types)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__syntax__data__impl(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__unpack_V0k73(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__unpack_V0k73, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.295 0 0) (##qualified-call (vanity compiler hygienic types propogate-flips) #t (bruijn ##.propogate-flips.67 2 32) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__unpack_V0k74) (bruijn ##.x.142 1 1)) ((bruijn ##.%k.294 1 0) (bruijn ##.x.142 1 1)))
if(VDecodeBool(
_var0)) {
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0types;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__unpack_V0k74, self))));
    VWORD _arg1 = 
      statics->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0propogate__flips, _V60_V0vanity_V0compiler_V0hygienic_V0types)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0types_V0propogate__flips(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      statics->vars[1]);
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__unpack(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__unpack, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.syntax?.74 1 39) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__unpack_V0k73) (bruijn ##.x.142 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[39]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__unpack_V0k73, self)))),
      _var1);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0eager__flip__scope_V0k78(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0eager__flip__scope_V0k78, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler hygienic types make-syntax) #t (bruijn ##.make-syntax.73 5 38) (bruijn ##.%k.296 4 0) (bruijn ##.%x.298 2 0) (bruijn ##.%x.299 0 0))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0types;
    VWORD _arg0 = 
      statics->up->up->up->vars[0];
    VWORD _arg1 = 
      statics->up->vars[0];
    VWORD _arg2 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0make__syntax, _V60_V0vanity_V0compiler_V0hygienic_V0types)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0types_V0make__syntax(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0eager__flip__scope_V0k77(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0eager__flip__scope_V0k77, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler hygienic types flip-scope-set) #t (bruijn ##.flip-scope-set.65 4 30) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0eager__flip__scope_V0k78) (bruijn ##.%x.300 0 0) (bruijn ##.sc.144 3 2))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0types;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0eager__flip__scope_V0k78, self))));
    VWORD _arg1 = 
      _var0;
    VWORD _arg2 = 
      statics->up->up->vars[2];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0flip__scope__set, _V60_V0vanity_V0compiler_V0hygienic_V0types)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0types_V0flip__scope__set(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0eager__flip__scope_V0k76(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0eager__flip__scope_V0k76, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler hygienic types get-syntax-scopes) #t (bruijn ##.get-syntax-scopes.70 3 35) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0eager__flip__scope_V0k77) (bruijn ##.v.143 2 1))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0types;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0eager__flip__scope_V0k77, self))));
    VWORD _arg1 = 
      statics->up->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__syntax__scopes, _V60_V0vanity_V0compiler_V0hygienic_V0types)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__syntax__scopes(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0eager__flip__scope_V0lambda4(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0eager__flip__scope_V0lambda4, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // (##qualified-call (vanity compiler hygienic types eager-flip-scope) #t (bruijn ##.eager-flip-scope.63 4 28) (bruijn ##.%k.302 0 0) (bruijn ##.e.145 0 1) (bruijn ##.sc.144 3 2))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0types;
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      _var1;
    VWORD _arg2 = 
      statics->up->up->vars[2];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0eager__flip__scope, _V60_V0vanity_V0compiler_V0hygienic_V0types)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0types_V0eager__flip__scope(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0eager__flip__scope_V0k79(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0eager__flip__scope_V0k79, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.301 0 0) ((bruijn ##.map.8 4 2) (bruijn ##.%k.296 2 0) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0eager__flip__scope_V0lambda4) (bruijn ##.v.143 2 1)) ((bruijn ##.%k.296 2 0) (bruijn ##.v.143 2 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[2]), 3,
      statics->up->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0eager__flip__scope_V0lambda4, self)))),
      statics->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      statics->up->vars[1]);
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0eager__flip__scope_V0k75(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0eager__flip__scope_V0k75, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.297 0 0) (##qualified-call (vanity compiler hygienic types get-syntax-data-impl) #t (bruijn ##.get-syntax-data-impl.72 2 37) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0eager__flip__scope_V0k76) (bruijn ##.v.143 1 1)) ((bruijn ##.list?.11 3 5) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0eager__flip__scope_V0k79) (bruijn ##.v.143 1 1)))
if(VDecodeBool(
_var0)) {
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0types;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0eager__flip__scope_V0k76, self))));
    VWORD _arg1 = 
      statics->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__syntax__data__impl, _V60_V0vanity_V0compiler_V0hygienic_V0types)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__syntax__data__impl(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[5]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0eager__flip__scope_V0k79, self)))),
      statics->vars[1]);
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0eager__flip__scope(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0eager__flip__scope, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (##qualified-call (vanity compiler hygienic types identifier?) #t (bruijn ##.identifier?.68 1 33) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0eager__flip__scope_V0k75) (bruijn ##.v.143 0 1))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0types;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0eager__flip__scope_V0k75, self))));
    VWORD _arg1 = 
      _var1;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0identifier_Q, _V60_V0vanity_V0compiler_V0hygienic_V0types)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0types_V0identifier_Q(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0lazy__flip__scope_V0k83(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0lazy__flip__scope_V0k83, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler hygienic types make-syntax) #t (bruijn ##.make-syntax.73 5 38) (bruijn ##.%k.303 4 0) (bruijn ##.%x.305 2 0) (bruijn ##.%x.306 0 0))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0types;
    VWORD _arg0 = 
      statics->up->up->up->vars[0];
    VWORD _arg1 = 
      statics->up->vars[0];
    VWORD _arg2 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0make__syntax, _V60_V0vanity_V0compiler_V0hygienic_V0types)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0types_V0make__syntax(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0lazy__flip__scope_V0k82(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0lazy__flip__scope_V0k82, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler hygienic types flip-scope-set) #t (bruijn ##.flip-scope-set.65 4 30) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0lazy__flip__scope_V0k83) (bruijn ##.%x.307 0 0) (bruijn ##.x.147 3 2))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0types;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0lazy__flip__scope_V0k83, self))));
    VWORD _arg1 = 
      _var0;
    VWORD _arg2 = 
      statics->up->up->vars[2];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0flip__scope__set, _V60_V0vanity_V0compiler_V0hygienic_V0types)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0types_V0flip__scope__set(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0lazy__flip__scope_V0k81(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0lazy__flip__scope_V0k81, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler hygienic types get-syntax-scopes) #t (bruijn ##.get-syntax-scopes.70 3 35) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0lazy__flip__scope_V0k82) (bruijn ##.stx.146 2 1))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0types;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0lazy__flip__scope_V0k82, self))));
    VWORD _arg1 = 
      statics->up->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__syntax__scopes, _V60_V0vanity_V0compiler_V0hygienic_V0types)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__syntax__scopes(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0lazy__flip__scope_V0k84(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0lazy__flip__scope_V0k84, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.555 1 0) ((bruijn ##.%k.311 0 0) (bruijn ##.%p.555 1 0)) (basic-block 1 1 (##.%r.556) ((##vcore.pair? (bruijn ##.stx.146 4 1))) ((bruijn ##.%k.311 1 0) (bruijn ##.%r.556 0 0))))
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
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->up->up->up->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      self->vars[0]);
    }
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0lazy__flip__scope_V0k86(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0lazy__flip__scope_V0k86, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler hygienic types make-syntax) #t (bruijn ##.make-syntax.73 5 38) (bruijn ##.%k.303 4 0) (bruijn ##.stx.146 4 1) (bruijn ##.%x.309 0 0))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0types;
    VWORD _arg0 = 
      statics->up->up->up->vars[0];
    VWORD _arg1 = 
      statics->up->up->up->vars[1];
    VWORD _arg2 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0make__syntax, _V60_V0vanity_V0compiler_V0hygienic_V0types)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0types_V0make__syntax(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0lazy__flip__scope_V0k85(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0lazy__flip__scope_V0k85, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.308 0 0) ((bruijn ##.list.18 5 12) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0lazy__flip__scope_V0k86) (bruijn ##.x.147 3 2)) ((bruijn ##.%k.303 3 0) (bruijn ##.stx.146 3 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 12)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0lazy__flip__scope_V0k86, self)))),
      statics->up->up->vars[2]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      statics->up->up->vars[1]);
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0lazy__flip__scope_V0k80(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0lazy__flip__scope_V0k80, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.304 0 0) (##qualified-call (vanity compiler hygienic types get-syntax-data-impl) #t (bruijn ##.get-syntax-data-impl.72 2 37) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0lazy__flip__scope_V0k81) (bruijn ##.stx.146 1 1)) (basic-block 1 1 (##.%p.555) ((##vcore.symbol? (bruijn ##.stx.146 2 1))) ((close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0lazy__flip__scope_V0k84) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0lazy__flip__scope_V0k85))))
if(VDecodeBool(
_var0)) {
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0types;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0lazy__flip__scope_V0k81, self))));
    VWORD _arg1 = 
      statics->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__syntax__data__impl, _V60_V0vanity_V0compiler_V0hygienic_V0types)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__syntax__data__impl(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VSymbolP2(runtime, NULL,
      statics->up->vars[1]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0lazy__flip__scope_V0k84, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0lazy__flip__scope_V0k85, self)))));
    }
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0lazy__flip__scope(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0lazy__flip__scope, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((bruijn ##.syntax?.74 1 39) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0lazy__flip__scope_V0k80) (bruijn ##.stx.146 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[39]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0lazy__flip__scope_V0k80, self)))),
      _var1);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0flip__scope__set_V10_Dloop_D150_V0k88(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0flip__scope__set_V10_Dloop_D150_V0k88, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%r.562) ((##vcore.cons (bruijn ##.%x.560 2 0) (bruijn ##.%x.317 1 0))) ((bruijn ##.%k.314 4 0) (bruijn ##.%r.562 0 0)))
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
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0flip__scope__set_V10_Dloop_D150(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0flip__scope__set_V10_Dloop_D150, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 2 2 (##.%x.557 ##.%p.558) ((##vcore.car (bruijn ##.set.151 1 1)) (##vcore.eq? (bruijn ##.%x.557 0 0) (bruijn ##.x.149 4 2))) (if (bruijn ##.%p.558 0 1) (basic-block 1 1 (##.%r.559) ((##vcore.cdr (bruijn ##.set.151 2 1))) ((bruijn ##.%k.314 2 0) (bruijn ##.%r.559 0 0))) (basic-block 2 2 (##.%x.560 ##.%x.561) ((##vcore.car (bruijn ##.set.151 2 1)) (##vcore.cdr (bruijn ##.set.151 2 1))) (##qualified-call (vanity compiler hygienic types flip-scope-set ##.loop.150) #f (bruijn ##.loop.150 3 0) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0flip__scope__set_V10_Dloop_D150_V0k88) (bruijn ##.%x.561 0 1)))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[1]);
    self->vars[1] = _VBasic_VEq2(runtime, NULL,
      self->vars[0],
      statics->up->up->up->vars[2]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      statics->up->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      self->vars[0]);
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
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0flip__scope__set_V10_Dloop_D150_V0k88, self))));
    VWORD _arg1 = 
      self->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0types_V0flip__scope__set_V10_Dloop_D150(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
}
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0flip__scope__set_V0k87(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0flip__scope__set_V0k87, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.313 0 0) (letrec 1 ((close "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0flip__scope__set_V10_Dloop_D150")) (##qualified-call (vanity compiler hygienic types flip-scope-set ##.loop.150) #f (bruijn ##.loop.150 0 0) (bruijn ##.%k.312 2 0) (bruijn ##.set.148 2 1))) (basic-block 1 1 (##.%r.563) ((##vcore.cons (bruijn ##.x.149 2 2) (bruijn ##.set.148 2 1))) ((bruijn ##.%k.312 2 0) (bruijn ##.%r.563 0 0))))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0flip__scope__set_V10_Dloop_D150, self))));
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->up->vars[0];
    VWORD _arg1 = 
      statics->up->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0types_V0flip__scope__set_V10_Dloop_D150(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[2],
      statics->up->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      self->vars[0]);
    }
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0flip__scope__set(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0flip__scope__set, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((bruijn ##.memq.12 2 6) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0flip__scope__set_V0k87) (bruijn ##.x.149 0 2) (bruijn ##.set.148 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[6]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0flip__scope__set_V0k87, self)))),
      _var2,
      _var1);
}
static void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__syntax__data_V0k89(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##qualified-call (vanity compiler hygienic types get-syntax-data-impl) #t (bruijn ##.get-syntax-data-impl.72 1 37) (bruijn ##.%k.320 0 0) (bruijn ##.stx.152 0 1))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0types;
    VWORD _arg0 = 
      self->vars[0];
    VWORD _arg1 = 
      self->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__syntax__data__impl, _V60_V0vanity_V0compiler_V0hygienic_V0types)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__syntax__data__impl(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__syntax__data(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__syntax__data, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (##qualified-call (vanity compiler hygienic types propogate-flips) #t (bruijn ##.propogate-flips.67 1 32) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__syntax__data_V0k89) (bruijn ##.stx.152 0 1))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0types;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__syntax__data_V0k89, self))));
    VWORD _arg1 = 
      _var1;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0propogate__flips, _V60_V0vanity_V0compiler_V0hygienic_V0types)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0types_V0propogate__flips(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0propogate__flips_V10_Dflip_D156_V0k95(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0propogate__flips_V10_Dflip_D156_V0k95, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler hygienic types make-syntax) #t (bruijn ##.make-syntax.73 11 38) (bruijn ##.%k.325 4 0) (bruijn ##.%x.327 2 0) (bruijn ##.%x.328 0 0))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0types;
    VWORD _arg0 = 
      statics->up->up->up->vars[0];
    VWORD _arg1 = 
      statics->up->vars[0];
    VWORD _arg2 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0make__syntax, _V60_V0vanity_V0compiler_V0hygienic_V0types)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0types_V0make__syntax(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0propogate__flips_V10_Dflip_D156_V0k94(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0propogate__flips_V10_Dflip_D156_V0k94, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.lset-xor.13 11 7) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0propogate__flips_V10_Dflip_D156_V0k95) (##intrinsic ##vcore.eq?) (bruijn ##.%x.329 0 0) (bruijn ##.scopes.154 7 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 7)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0propogate__flips_V10_Dflip_D156_V0k95, self)))),
      _V40_V10vcore_Deq_Q,
      _var0,
      VGetArg(statics, 7-1, 0));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0propogate__flips_V10_Dflip_D156_V0k93(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0propogate__flips_V10_Dflip_D156_V0k93, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler hygienic types get-syntax-scopes) #t (bruijn ##.get-syntax-scopes.70 9 35) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0propogate__flips_V10_Dflip_D156_V0k94) (bruijn ##.stx.157 2 1))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0types;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0propogate__flips_V10_Dflip_D156_V0k94, self))));
    VWORD _arg1 = 
      statics->up->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__syntax__scopes, _V60_V0vanity_V0compiler_V0hygienic_V0types)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__syntax__scopes(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0propogate__flips_V10_Dflip_D156_V0k96(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0propogate__flips_V10_Dflip_D156_V0k96, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.565 1 0) ((bruijn ##.%k.332 0 0) (bruijn ##.%p.565 1 0)) (basic-block 1 1 (##.%r.566) ((##vcore.pair? (bruijn ##.stx.157 4 1))) ((bruijn ##.%k.332 1 0) (bruijn ##.%r.566 0 0))))
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
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->up->up->up->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      self->vars[0]);
    }
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0propogate__flips_V10_Dflip_D156_V0k97(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0propogate__flips_V10_Dflip_D156_V0k97, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.330 0 0) (##qualified-call (vanity compiler hygienic types make-syntax) #t (bruijn ##.make-syntax.73 10 38) (bruijn ##.%k.325 3 0) (bruijn ##.stx.157 3 1) (bruijn ##.scopes.154 7 0)) ((bruijn ##.%k.325 3 0) (bruijn ##.stx.157 3 1)))
if(VDecodeBool(
_var0)) {
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0types;
    VWORD _arg0 = 
      statics->up->up->vars[0];
    VWORD _arg1 = 
      statics->up->up->vars[1];
    VWORD _arg2 = 
      VGetArg(statics, 7-1, 0);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0make__syntax, _V60_V0vanity_V0compiler_V0hygienic_V0types)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0types_V0make__syntax(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      statics->up->up->vars[1]);
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0propogate__flips_V10_Dflip_D156_V0k92(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0propogate__flips_V10_Dflip_D156_V0k92, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.326 0 0) (##qualified-call (vanity compiler hygienic types get-syntax-data-impl) #t (bruijn ##.get-syntax-data-impl.72 8 37) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0propogate__flips_V10_Dflip_D156_V0k93) (bruijn ##.stx.157 1 1)) (basic-block 1 1 (##.%p.565) ((##vcore.symbol? (bruijn ##.stx.157 2 1))) ((close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0propogate__flips_V10_Dflip_D156_V0k96) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0propogate__flips_V10_Dflip_D156_V0k97))))
if(VDecodeBool(
_var0)) {
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0types;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0propogate__flips_V10_Dflip_D156_V0k93, self))));
    VWORD _arg1 = 
      statics->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__syntax__data__impl, _V60_V0vanity_V0compiler_V0hygienic_V0types)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__syntax__data__impl(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VSymbolP2(runtime, NULL,
      statics->up->vars[1]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0propogate__flips_V10_Dflip_D156_V0k96, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0propogate__flips_V10_Dflip_D156_V0k97, self)))));
    }
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0propogate__flips_V10_Dflip_D156(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0propogate__flips_V10_Dflip_D156, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.syntax?.74 7 39) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0propogate__flips_V10_Dflip_D156_V0k92) (bruijn ##.stx.157 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 39)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0propogate__flips_V10_Dflip_D156_V0k92, self)))),
      _var1);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0propogate__flips_V0k100(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0propogate__flips_V0k100, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%x.570) ((##vcore.cons (bruijn ##.%x.335 3 0) (bruijn ##.%x.336 1 0))) (##qualified-call (vanity compiler hygienic types set-syntax-data!) #t (bruijn ##.set-syntax-data!.71 12 36) (bruijn ##.%k.321 11 0) (bruijn ##.stx.153 11 1) (bruijn ##.%x.570 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->up->up->vars[0],
      statics->vars[0]);
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0types;
    VWORD _arg0 = 
      VGetArg(statics, 11-1, 0);
    VWORD _arg1 = 
      VGetArg(statics, 11-1, 1);
    VWORD _arg2 = 
      self->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0set__syntax__data_B, _V60_V0vanity_V0compiler_V0hygienic_V0types)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0types_V0set__syntax__data_B(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0propogate__flips_V0k99(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0propogate__flips_V0k99, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%x.569) ((##vcore.cdr (bruijn ##.data.155 4 0))) (##qualified-call (vanity compiler hygienic types propogate-flips ##.flip.156) #f (bruijn ##.flip.156 4 1) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0propogate__flips_V0k100) (bruijn ##.%x.569 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      statics->up->up->up->vars[0]);
  {
    VClosure * _closure = VDecodeClosure(statics->up->up->up->vars[1]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0propogate__flips_V0k100, self))));
    VWORD _arg1 = 
      self->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0types_V0propogate__flips_V10_Dflip_D156(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
}
static void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0propogate__flips_V0k98(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%x.568) ((##vcore.car (bruijn ##.data.155 2 0))) (##qualified-call (vanity compiler hygienic types propogate-flips ##.flip.156) #f (bruijn ##.flip.156 2 1) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0propogate__flips_V0k99) (bruijn ##.%x.568 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->vars[0]);
  {
    VClosure * _closure = VDecodeClosure(statics->up->vars[1]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0propogate__flips_V0k99, self))));
    VWORD _arg1 = 
      self->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0types_V0propogate__flips_V10_Dflip_D156(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0propogate__flips_V0k102(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0propogate__flips_V0k102, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler hygienic types set-syntax-data!) #t (bruijn ##.set-syntax-data!.71 9 36) (bruijn ##.%k.321 8 0) (bruijn ##.stx.153 8 1) (bruijn ##.%x.340 0 0))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0types;
    VWORD _arg0 = 
      VGetArg(statics, 8-1, 0);
    VWORD _arg1 = 
      VGetArg(statics, 8-1, 1);
    VWORD _arg2 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0set__syntax__data_B, _V60_V0vanity_V0compiler_V0hygienic_V0types)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0types_V0set__syntax__data_B(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
static void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0propogate__flips_V0k101(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.vector-map.9 9 3) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0propogate__flips_V0k102) (bruijn ##.flip.156 2 1) (bruijn ##.data.155 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 3)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0propogate__flips_V0k102, self)))),
      statics->up->vars[1],
      statics->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0propogate__flips_V0k91(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0propogate__flips_V0k91, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (letrec 2 ((bruijn ##.%x.324 1 0) (close "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0propogate__flips_V10_Dflip_D156")) (basic-block 1 1 (##.%p.567) ((##vcore.pair? (bruijn ##.data.155 1 0))) (if (bruijn ##.%p.567 0 0) (##qualified-call (vanity compiler hygienic types set-syntax-scopes!) #t (bruijn ##.set-syntax-scopes!.69 7 34) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0propogate__flips_V0k98) (bruijn ##.stx.153 6 1) '()) (basic-block 1 1 (##.%p.571) ((##vcore.vector? (bruijn ##.data.155 2 0))) (if (bruijn ##.%p.571 0 0) (##qualified-call (vanity compiler hygienic types set-syntax-scopes!) #t (bruijn ##.set-syntax-scopes!.69 8 34) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0propogate__flips_V0k101) (bruijn ##.stx.153 7 1) '()) ((bruijn ##.%k.321 7 0) #f))))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = statics->vars[0];
    self->vars[1] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0propogate__flips_V10_Dflip_D156, self))));
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->vars[0]);
if(VDecodeBool(
self->vars[0])) {
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0types;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0propogate__flips_V0k98, self))));
    VWORD _arg1 = 
      VGetArg(statics, 6-1, 1);
    VWORD _arg2 = 
      VNULL;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0set__syntax__scopes_B, _V60_V0vanity_V0compiler_V0hygienic_V0types)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0types_V0set__syntax__scopes_B(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VVectorP2(runtime, NULL,
      statics->up->vars[0]);
if(VDecodeBool(
self->vars[0])) {
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0types;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0propogate__flips_V0k101, self))));
    VWORD _arg1 = 
      VGetArg(statics, 7-1, 1);
    VWORD _arg2 = 
      VNULL;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0set__syntax__scopes_B, _V60_V0vanity_V0compiler_V0hygienic_V0types)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0types_V0set__syntax__scopes_B(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 1,
      VEncodeBool(false));
}
    }
}
    }
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0propogate__flips_V0k90(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0propogate__flips_V0k90, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (letrec 1 ((bruijn ##.%x.322 1 0)) (basic-block 1 1 (##.%p.564) ((##vcore.null? (bruijn ##.scopes.154 1 0))) (if (bruijn ##.%p.564 0 0) ((bruijn ##.%k.321 3 0) #void) (##qualified-call (vanity compiler hygienic types get-syntax-data-impl) #t (bruijn ##.get-syntax-data-impl.72 4 37) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0propogate__flips_V0k91) (bruijn ##.stx.153 3 1)))))
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
      VVOID);
} else {
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0types;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0propogate__flips_V0k91, self))));
    VWORD _arg1 = 
      statics->up->up->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__syntax__data__impl, _V60_V0vanity_V0compiler_V0hygienic_V0types)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__syntax__data__impl(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
    }
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0propogate__flips(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0propogate__flips, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (##qualified-call (vanity compiler hygienic types get-syntax-scopes) #t (bruijn ##.get-syntax-scopes.70 1 35) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0propogate__flips_V0k90) (bruijn ##.stx.153 0 1))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0types;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0propogate__flips_V0k90, self))));
    VWORD _arg1 = 
      _var1;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__syntax__scopes, _V60_V0vanity_V0compiler_V0hygienic_V0types)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__syntax__scopes(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0identifier_Q_V0k104(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0identifier_Q_V0k104, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%r.572) ((##vcore.symbol? (bruijn ##.%x.343 1 0))) ((bruijn ##.%k.341 3 0) (bruijn ##.%r.572 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VSymbolP2(runtime, NULL,
      statics->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      self->vars[0]);
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0identifier_Q_V0k103(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0identifier_Q_V0k103, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.342 0 0) (##qualified-call (vanity compiler hygienic types get-syntax-data-impl) #t (bruijn ##.get-syntax-data-impl.72 2 37) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0identifier_Q_V0k104) (bruijn ##.x.158 1 1)) ((bruijn ##.%k.341 1 0) #f))
if(VDecodeBool(
_var0)) {
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0types;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0identifier_Q_V0k104, self))));
    VWORD _arg1 = 
      statics->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__syntax__data__impl, _V60_V0vanity_V0compiler_V0hygienic_V0types)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__syntax__data__impl(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0identifier_Q(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0identifier_Q, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.syntax?.74 1 39) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0identifier_Q_V0k103) (bruijn ##.x.158 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[39]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0identifier_Q_V0k103, self)))),
      _var1);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0set__syntax__scopes_B_V0k106(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0set__syntax__scopes_B_V0k106, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.raise (bruijn ##.%k.344 3 0) (bruijn ##.%x.346 0 0))
    VCallFuncWithGC(runtime, (VFunc)VRaise, 2,
      statics->up->up->vars[0],
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0set__syntax__scopes_B_V0k105(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0set__syntax__scopes_B_V0k105, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.345 0 0) (##vcore.record-set! (bruijn ##.%k.344 1 0) (bruijn ##.rec.159 1 1) 2 (bruijn ##.x.160 1 2)) (basic-block 2 2 (##.%x.573 ##.%x.574) ((##vcore.cons (bruijn ##.rec.159 2 1) '()) (##vcore.cons 'set-syntax-scopes! (bruijn ##.%x.573 0 0))) (##vcore.record (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0set__syntax__scopes_B_V0k106) #f 'error (##string ##.string.720) (bruijn ##.%x.574 0 1))))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VRecordSet2, 4,
      statics->vars[0],
      statics->vars[1],
      VEncodeInt(2l),
      statics->vars[2]);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[1],
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      _V0set__syntax__scopes_B,
      self->vars[0]);
    VCallFuncWithGC(runtime, (VFunc)VCreateRecord2, 5,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0set__syntax__scopes_B_V0k106, self)))),
      VEncodeBool(false),
      _V0error,
      VEncodePointer(&_V10_Dstring_D720.sym, VPOINTER_OTHER),
      self->vars[1]);
    }
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0set__syntax__scopes_B(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0set__syntax__scopes_B, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (##qualified-call (vanity compiler hygienic types ##.syntax?.4) #t (bruijn ##.syntax?.4.75 1 40) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0set__syntax__scopes_B_V0k105) (bruijn ##.rec.159 0 1))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0types;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0set__syntax__scopes_B_V0k105, self))));
    VWORD _arg1 = 
      _var1;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V10_Dsyntax_Q_D4, _V60_V0vanity_V0compiler_V0hygienic_V0types)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0types_V10_Dsyntax_Q_D4(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__syntax__scopes_V0k108(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__syntax__scopes_V0k108, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.raise (bruijn ##.%k.349 3 0) (bruijn ##.%x.351 0 0))
    VCallFuncWithGC(runtime, (VFunc)VRaise, 2,
      statics->up->up->vars[0],
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__syntax__scopes_V0k107(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__syntax__scopes_V0k107, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.350 0 0) (basic-block 1 1 (##.%r.575) ((##vcore.record-ref (bruijn ##.rec.161 2 1) 2)) ((bruijn ##.%k.349 2 0) (bruijn ##.%r.575 0 0))) (basic-block 2 2 (##.%x.576 ##.%x.577) ((##vcore.cons (bruijn ##.rec.161 2 1) '()) (##vcore.cons 'get-syntax-scopes (bruijn ##.%x.576 0 0))) (##vcore.record (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__syntax__scopes_V0k108) #f 'error (##string ##.string.720) (bruijn ##.%x.577 0 1))))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VRecordRef2(runtime, NULL,
      statics->up->vars[1],
      VEncodeInt(2l));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      self->vars[0]);
    }
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[1],
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      _V0get__syntax__scopes,
      self->vars[0]);
    VCallFuncWithGC(runtime, (VFunc)VCreateRecord2, 5,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__syntax__scopes_V0k108, self)))),
      VEncodeBool(false),
      _V0error,
      VEncodePointer(&_V10_Dstring_D720.sym, VPOINTER_OTHER),
      self->vars[1]);
    }
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__syntax__scopes(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__syntax__scopes, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (##qualified-call (vanity compiler hygienic types ##.syntax?.4) #t (bruijn ##.syntax?.4.75 1 40) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__syntax__scopes_V0k107) (bruijn ##.rec.161 0 1))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0types;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__syntax__scopes_V0k107, self))));
    VWORD _arg1 = 
      _var1;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V10_Dsyntax_Q_D4, _V60_V0vanity_V0compiler_V0hygienic_V0types)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0types_V10_Dsyntax_Q_D4(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0set__syntax__data_B_V0k110(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0set__syntax__data_B_V0k110, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.raise (bruijn ##.%k.354 3 0) (bruijn ##.%x.356 0 0))
    VCallFuncWithGC(runtime, (VFunc)VRaise, 2,
      statics->up->up->vars[0],
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0set__syntax__data_B_V0k109(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0set__syntax__data_B_V0k109, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.355 0 0) (##vcore.record-set! (bruijn ##.%k.354 1 0) (bruijn ##.rec.162 1 1) 1 (bruijn ##.x.163 1 2)) (basic-block 2 2 (##.%x.578 ##.%x.579) ((##vcore.cons (bruijn ##.rec.162 2 1) '()) (##vcore.cons 'set-syntax-data! (bruijn ##.%x.578 0 0))) (##vcore.record (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0set__syntax__data_B_V0k110) #f 'error (##string ##.string.720) (bruijn ##.%x.579 0 1))))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VRecordSet2, 4,
      statics->vars[0],
      statics->vars[1],
      VEncodeInt(1l),
      statics->vars[2]);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[1],
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      _V0set__syntax__data_B,
      self->vars[0]);
    VCallFuncWithGC(runtime, (VFunc)VCreateRecord2, 5,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0set__syntax__data_B_V0k110, self)))),
      VEncodeBool(false),
      _V0error,
      VEncodePointer(&_V10_Dstring_D720.sym, VPOINTER_OTHER),
      self->vars[1]);
    }
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0set__syntax__data_B(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0set__syntax__data_B, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (##qualified-call (vanity compiler hygienic types ##.syntax?.4) #t (bruijn ##.syntax?.4.75 1 40) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0set__syntax__data_B_V0k109) (bruijn ##.rec.162 0 1))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0types;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0set__syntax__data_B_V0k109, self))));
    VWORD _arg1 = 
      _var1;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V10_Dsyntax_Q_D4, _V60_V0vanity_V0compiler_V0hygienic_V0types)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0types_V10_Dsyntax_Q_D4(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__syntax__data__impl_V0k112(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__syntax__data__impl_V0k112, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.raise (bruijn ##.%k.359 3 0) (bruijn ##.%x.361 0 0))
    VCallFuncWithGC(runtime, (VFunc)VRaise, 2,
      statics->up->up->vars[0],
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__syntax__data__impl_V0k111(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__syntax__data__impl_V0k111, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.360 0 0) (basic-block 1 1 (##.%r.580) ((##vcore.record-ref (bruijn ##.rec.164 2 1) 1)) ((bruijn ##.%k.359 2 0) (bruijn ##.%r.580 0 0))) (basic-block 2 2 (##.%x.581 ##.%x.582) ((##vcore.cons (bruijn ##.rec.164 2 1) '()) (##vcore.cons 'get-syntax-data-impl (bruijn ##.%x.581 0 0))) (##vcore.record (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__syntax__data__impl_V0k112) #f 'error (##string ##.string.720) (bruijn ##.%x.582 0 1))))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VRecordRef2(runtime, NULL,
      statics->up->vars[1],
      VEncodeInt(1l));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      self->vars[0]);
    }
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[1],
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      _V0get__syntax__data__impl,
      self->vars[0]);
    VCallFuncWithGC(runtime, (VFunc)VCreateRecord2, 5,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__syntax__data__impl_V0k112, self)))),
      VEncodeBool(false),
      _V0error,
      VEncodePointer(&_V10_Dstring_D720.sym, VPOINTER_OTHER),
      self->vars[1]);
    }
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__syntax__data__impl(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__syntax__data__impl, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (##qualified-call (vanity compiler hygienic types ##.syntax?.4) #t (bruijn ##.syntax?.4.75 1 40) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__syntax__data__impl_V0k111) (bruijn ##.rec.164 0 1))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0types;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__syntax__data__impl_V0k111, self))));
    VWORD _arg1 = 
      _var1;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V10_Dsyntax_Q_D4, _V60_V0vanity_V0compiler_V0hygienic_V0types)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0types_V10_Dsyntax_Q_D4(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0make__syntax(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0make__syntax, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  // (##vcore.record (bruijn ##.%k.364 0 0) (bruijn ##.syntax.3.76 1 41) (bruijn ##.data.165 0 1) (bruijn ##.flips.166 0 2))
    VCallFuncWithGC(runtime, (VFunc)VCreateRecord2, 4,
      _var0,
      statics->vars[41],
      _var1,
      _var2);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V10_Dsyntax_Q_D4(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V10_Dsyntax_Q_D4, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.%p.583) ((##vcore.record? (bruijn ##.x.167 1 1))) (if (bruijn ##.%p.583 0 0) (basic-block 2 2 (##.%x.584 ##.%r.585) ((##vcore.record-ref (bruijn ##.x.167 2 1) 0) (##vcore.eqv? (bruijn ##.%x.584 0 0) (bruijn ##.syntax.3.76 3 41))) ((bruijn ##.%k.365 2 0) (bruijn ##.%r.585 0 1))) ((bruijn ##.%k.365 1 0) #f)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VRecordP2(runtime, NULL,
      statics->vars[1]);
if(VDecodeBool(
self->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VRecordRef2(runtime, NULL,
      statics->up->vars[1],
      VEncodeInt(0l));
    self->vars[1] = _VBasic_VEq2(runtime, NULL,
      self->vars[0],
      statics->up->up->vars[41]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      self->vars[1]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0expansion__timed__out_Q_V0k113(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0expansion__timed__out_Q_V0k113, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%r.586) ((##vcore.> (bruijn ##.%x.369 1 0) (bruijn ##.expansion-deadline.79 3 44))) ((bruijn ##.%k.368 2 0) (bruijn ##.%r.586 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCmpGt(runtime, NULL,
      statics->vars[0],
      statics->up->up->vars[44]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      self->vars[0]);
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0expansion__timed__out_Q(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0expansion__timed__out_Q, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.expansion-deadline.79 1 44) (##vcore.current-jiffy (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0expansion__timed__out_Q_V0k113)) ((bruijn ##.%k.368 0 0) #f))
if(VDecodeBool(
statics->vars[44])) {
    VCallFuncWithGC(runtime, (VFunc)VCurrentJiffy, 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0expansion__timed__out_Q_V0k113, self)))));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0set__expansion__deadline_B(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0set__expansion__deadline_B, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (set! (bruijn ##.%k.370 0 0) (bruijn ##.expansion-deadline.79 1 44) (bruijn ##.d.168 0 1))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      _var0,
      VEncodeInt(1l), VEncodeInt(44l),
      _var1
    );
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0scope__set___Gstring_V10_Djoin_D170_V10_Dloop_D173_V0k114(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0scope__set___Gstring_V10_Djoin_D170_V10_Dloop_D173_V0k114, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%x.590) ((##vcore.cdr (bruijn ##.strs.175 4 2))) (##qualified-call (vanity compiler hygienic types scope-set->string ##.join.170 ##.loop.173) #f (bruijn ##.loop.173 5 0) (bruijn ##.%k.374 4 0) (bruijn ##.%x.376 1 0) (bruijn ##.%x.590 0 0)))
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
      statics->up->up->up->vars[0];
    VWORD _arg1 = 
      statics->vars[0];
    VWORD _arg2 = 
      self->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0types_V0scope__set___Gstring_V10_Djoin_D170_V10_Dloop_D173(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0scope__set___Gstring_V10_Djoin_D170_V10_Dloop_D173(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0scope__set___Gstring_V10_Djoin_D170_V10_Dloop_D173, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 1 1 (##.%p.588) ((##vcore.null? (bruijn ##.strs.175 1 2))) (if (bruijn ##.%p.588 0 0) ((bruijn ##.%k.374 1 0) (bruijn ##.acc.174 1 1)) (basic-block 1 1 (##.%x.589) ((##vcore.car (bruijn ##.strs.175 2 2))) ((bruijn ##.string-append.15 9 9) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0scope__set___Gstring_V10_Djoin_D170_V10_Dloop_D173_V0k114) (bruijn ##.acc.174 2 1) (bruijn ##.sep.171 5 1) (bruijn ##.%x.589 0 0)))))
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
      statics->vars[1]);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->vars[2]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 9)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0scope__set___Gstring_V10_Djoin_D170_V10_Dloop_D173_V0k114, self)))),
      statics->up->vars[1],
      VGetArg(statics, 5-1, 1),
      self->vars[0]);
    }
}
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0scope__set___Gstring_V10_Djoin_D170(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0scope__set___Gstring_V10_Djoin_D170, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 1 1 (##.%p.587) ((##vcore.null? (bruijn ##.strs.172 1 2))) (if (bruijn ##.%p.587 0 0) ((bruijn ##.%k.372 1 0) (##string ##.string.721)) (letrec 1 ((close "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0scope__set___Gstring_V10_Djoin_D170_V10_Dloop_D173")) (basic-block 2 2 (##.%x.591 ##.%x.592) ((##vcore.car (bruijn ##.strs.172 3 2)) (##vcore.cdr (bruijn ##.strs.172 3 2))) (##qualified-call (vanity compiler hygienic types scope-set->string ##.join.170 ##.loop.173) #f (bruijn ##.loop.173 1 0) (bruijn ##.%k.372 3 0) (bruijn ##.%x.591 0 0) (bruijn ##.%x.592 0 1))))))
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
      VEncodePointer(&_V10_Dstring_D721.sym, VPOINTER_OTHER));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0scope__set___Gstring_V10_Djoin_D170_V10_Dloop_D173, self))));
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->up->vars[2]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->up->up->vars[2]);
  {
    VClosure * _closure = VDecodeClosure(statics->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->up->up->vars[0];
    VWORD _arg1 = 
      self->vars[0];
    VWORD _arg2 = 
      self->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0types_V0scope__set___Gstring_V10_Djoin_D170_V10_Dloop_D173(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
    }
}
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0scope__set___Gstring_V0k116(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0scope__set___Gstring_V0k116, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.sprintf.14 5 8) (bruijn ##.%k.371 3 0) (##string ##.string.722) (bruijn ##.%x.381 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 8)), 3,
      statics->up->up->vars[0],
      VEncodePointer(&_V10_Dstring_D722.sym, VPOINTER_OTHER),
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0scope__set___Gstring_V0k115(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0scope__set___Gstring_V0k115, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler hygienic types scope-set->string ##.join.170) #f (bruijn ##.join.170 1 0) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0scope__set___Gstring_V0k116) (##string ##.string.723) (bruijn ##.%x.382 0 0))
  {
    VClosure * _closure = VDecodeClosure(statics->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0scope__set___Gstring_V0k116, self))));
    VWORD _arg1 = 
      VEncodePointer(&_V10_Dstring_D723.sym, VPOINTER_OTHER);
    VWORD _arg2 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0types_V0scope__set___Gstring_V10_Djoin_D170(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0scope__set___Gstring(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0scope__set___Gstring, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (letrec 1 ((close "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0scope__set___Gstring_V10_Djoin_D170")) ((bruijn ##.map.8 3 2) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0scope__set___Gstring_V0k115) (bruijn ##.scope->string.81 2 46) (bruijn ##.scopes.169 1 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0scope__set___Gstring_V10_Djoin_D170, self))));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[2]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0scope__set___Gstring_V0k115, self)))),
      statics->up->vars[46],
      statics->vars[1]);
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0scope___Gstring_V0k119(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0scope___Gstring_V0k119, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.593 1 0) (basic-block 2 2 (##.%x.598 ##.%r.599) ((##vcore.car (bruijn ##.p.384 4 0)) (##vcore.eq? (bruijn ##.%x.598 0 0) 'intro)) ((bruijn ##.%k.394 1 0) (bruijn ##.%r.599 0 1))) ((bruijn ##.%k.394 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->up->up->vars[0]);
    self->vars[1] = _VBasic_VEq2(runtime, NULL,
      self->vars[0],
      _V0intro);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      self->vars[1]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0scope___Gstring_V0k121(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0scope___Gstring_V0k121, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.595 1 0) (basic-block 2 2 (##.%x.596 ##.%r.597) ((##vcore.car (bruijn ##.p.384 6 0)) (##vcore.eq? (bruijn ##.%x.596 0 0) 'use)) ((bruijn ##.%k.391 1 0) (bruijn ##.%r.597 0 1))) ((bruijn ##.%k.391 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 6-1, 0));
    self->vars[1] = _VBasic_VEq2(runtime, NULL,
      self->vars[0],
      _V0use);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      self->vars[1]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0scope___Gstring_V0k123(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0scope___Gstring_V0k123, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.sprintf.14 9 8) (bruijn ##.%k.383 7 0) (##string ##.string.725) (bruijn ##.n.385 5 0) (bruijn ##.%x.389 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 8)), 4,
      VGetArg(statics, 7-1, 0),
      VEncodePointer(&_V10_Dstring_D725.sym, VPOINTER_OTHER),
      VGetArg(statics, 5-1, 0),
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0scope___Gstring_V0k122(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0scope___Gstring_V0k122, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.388 0 0) ((bruijn ##.cadr.16 8 10) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0scope___Gstring_V0k123) (bruijn ##.p.384 5 0)) ((bruijn ##.sprintf.14 8 8) (bruijn ##.%k.383 6 0) (##string ##.string.726) (bruijn ##.p.384 5 0) (bruijn ##.n.385 4 0)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 10)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0scope___Gstring_V0k123, self)))),
      VGetArg(statics, 5-1, 0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 8)), 4,
      VGetArg(statics, 6-1, 0),
      VEncodePointer(&_V10_Dstring_D726.sym, VPOINTER_OTHER),
      VGetArg(statics, 5-1, 0),
      statics->up->up->up->vars[0]);
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0scope___Gstring_V0k120(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0scope___Gstring_V0k120, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.386 0 0) (basic-block 1 1 (##.%x.594) ((##vcore.cdr (bruijn ##.p.384 4 0))) ((bruijn ##.sprintf.14 7 8) (bruijn ##.%k.383 5 0) (##string ##.string.724) (bruijn ##.n.385 3 0) (bruijn ##.%x.594 0 0))) (basic-block 1 1 (##.%p.595) ((##vcore.pair? (bruijn ##.p.384 4 0))) ((close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0scope___Gstring_V0k121) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0scope___Gstring_V0k122))))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      statics->up->up->up->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 8)), 4,
      VGetArg(statics, 5-1, 0),
      VEncodePointer(&_V10_Dstring_D724.sym, VPOINTER_OTHER),
      statics->up->up->vars[0],
      self->vars[0]);
    }
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->up->up->up->vars[0]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0scope___Gstring_V0k121, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0scope___Gstring_V0k122, self)))));
    }
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0scope___Gstring_V0k118(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0scope___Gstring_V0k118, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%p.593) ((##vcore.pair? (bruijn ##.p.384 2 0))) ((close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0scope___Gstring_V0k119) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0scope___Gstring_V0k120)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->up->vars[0]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0scope___Gstring_V0k119, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0scope___Gstring_V0k120, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0scope___Gstring_V0k117(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0scope___Gstring_V0k117, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler hygienic types get-scope-serial) #t (bruijn ##.get-scope-serial.86 2 51) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0scope___Gstring_V0k118) (bruijn ##.sc.176 1 1))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0types;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0scope___Gstring_V0k118, self))));
    VWORD _arg1 = 
      statics->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__scope__serial, _V60_V0vanity_V0compiler_V0hygienic_V0types)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__scope__serial(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0scope___Gstring(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0scope___Gstring, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (##qualified-call (vanity compiler hygienic types get-scope-provenance) #t (bruijn ##.get-scope-provenance.85 1 50) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0scope___Gstring_V0k117) (bruijn ##.sc.176 0 1))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0types;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0scope___Gstring_V0k117, self))));
    VWORD _arg1 = 
      _var1;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__scope__provenance, _V60_V0vanity_V0compiler_V0hygienic_V0types)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__scope__provenance(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
static void _V10_Dmake__scope_D84_V0k127(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmake__scope_D84_V0k127, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.398 1 0) (basic-block 1 1 (##.%x.601) ((##vcore.cons (bruijn ##.sc.180 3 0) (bruijn ##.scope-registry.95 6 60))) (set! (bruijn ##.%k.399 1 0) (bruijn ##.scope-registry.95 6 60) (bruijn ##.%x.601 0 0))) ((bruijn ##.%k.399 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->up->up->vars[0],
      VGetArg(statics, 6-1, 60));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      statics->vars[0],
      VEncodeInt(6l), VEncodeInt(60l),
      self->vars[0]
    );
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dmake__scope_D84_V0k128(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.%k.397 3 0) (bruijn ##.sc.180 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      statics->vars[0]);
}
static void _V10_Dmake__scope_D84_V0k126(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmake__scope_D84_V0k126, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dmake__scope_D84_V0k127) (close _V10_Dmake__scope_D84_V0k128))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dmake__scope_D84_V0k127, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dmake__scope_D84_V0k128, self)))));
}
static void _V10_Dmake__scope_D84_V0k125(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmake__scope_D84_V0k125, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.explain-scopes?.96 3 61) (close _V10_Dmake__scope_D84_V0k126))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[61]), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dmake__scope_D84_V0k126, self)))));
}
static void _V10_Dmake__scope_D84_V0k124(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##qualified-call (vanity compiler hygienic types make-scope-impl) #t (bruijn ##.make-scope-impl.89 2 54) (close _V10_Dmake__scope_D84_V0k125) '() (bruijn ##.scope-serial-counter.93 2 58) (bruijn ##.provenance.179 1 1))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0types;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dmake__scope_D84_V0k125, self))));
    VWORD _arg1 = 
      VNULL;
    VWORD _arg2 = 
      statics->up->vars[58];
    VWORD _arg3 = 
      statics->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0make__scope__impl, _V60_V0vanity_V0compiler_V0hygienic_V0types)}, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0types_V0make__scope__impl(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
__attribute__((used)) static void _V20CaseError__V50_V0vanity_V0compiler_V0hygienic_V0types_V0make__scope(VRuntime * runtime, VEnv * statics, int argc, ...) {
 // ("_V50_V0vanity_V0compiler_V0hygienic_V0types_V0make__scope" #t #f (1 (##qualified-call (vanity compiler hygienic types make-scope) #t (bruijn ##.make-scope.84 1 49) (bruijn ##.%k.396 0 0) 'scope)) (2 (basic-block 1 1 (##.%x.600) ((##vcore.+ (bruijn ##.scope-serial-counter.93 2 58) 1.0)) (set! (close _V10_Dmake__scope_D84_V0k124) (bruijn ##.scope-serial-counter.93 2 58) (bruijn ##.%x.600 0 0)))))
 VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0make__scope, got ~D~N"
 "-- expected 1~N"
 "-- expected 2~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V50_V0vanity_V0compiler_V0hygienic_V0types_V0make__scope(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
  // (##qualified-call (vanity compiler hygienic types make-scope) #t (bruijn ##.make-scope.84 1 49) (bruijn ##.%k.396 0 0) 'scope)
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0types;
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      _V0scope;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0make__scope, _V60_V0vanity_V0compiler_V0hygienic_V0types)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0types_V0make__scope(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
__attribute__((used)) static void _V20Case1__V50_V0vanity_V0compiler_V0hygienic_V0types_V0make__scope(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.%x.600) ((##vcore.+ (bruijn ##.scope-serial-counter.93 2 58) 1.0)) (set! (close _V10_Dmake__scope_D84_V0k124) (bruijn ##.scope-serial-counter.93 2 58) (bruijn ##.%x.600 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      statics->up->vars[58],
      VEncodeNumber(1.0));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dmake__scope_D84_V0k124, self)))),
      VEncodeInt(2l), VEncodeInt(58l),
      self->vars[0]
    );
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0make__scope(VRuntime * runtime, VEnv * statics, int argc, ...);
asm(
".intel_syntax noprefix\n"
#ifdef __linux__
".type _V50_V0vanity_V0compiler_V0hygienic_V0types_V0make__scope, @function\n"
#endif
".globl _V50_V0vanity_V0compiler_V0hygienic_V0types_V0make__scope\n"
"_V50_V0vanity_V0compiler_V0hygienic_V0types_V0make__scope:\n"
"    cmp " ARGC_REG ", 1\n"
"    je _V20Case0__V50_V0vanity_V0compiler_V0hygienic_V0types_V0make__scope\n"
"    cmp " ARGC_REG ", 2\n"
"    je _V20Case1__V50_V0vanity_V0compiler_V0hygienic_V0types_V0make__scope\n"
"    jmp _V20CaseError__V50_V0vanity_V0compiler_V0hygienic_V0types_V0make__scope\n"
);
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__scope__provenance_V0k130(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__scope__provenance_V0k130, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.raise (bruijn ##.%k.402 3 0) (bruijn ##.%x.404 0 0))
    VCallFuncWithGC(runtime, (VFunc)VRaise, 2,
      statics->up->up->vars[0],
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__scope__provenance_V0k129(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__scope__provenance_V0k129, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.403 0 0) (basic-block 1 1 (##.%r.602) ((##vcore.record-ref (bruijn ##.rec.181 2 1) 3)) ((bruijn ##.%k.402 2 0) (bruijn ##.%r.602 0 0))) (basic-block 2 2 (##.%x.603 ##.%x.604) ((##vcore.cons (bruijn ##.rec.181 2 1) '()) (##vcore.cons 'get-scope-provenance (bruijn ##.%x.603 0 0))) (##vcore.record (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__scope__provenance_V0k130) #f 'error (##string ##.string.720) (bruijn ##.%x.604 0 1))))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VRecordRef2(runtime, NULL,
      statics->up->vars[1],
      VEncodeInt(3l));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      self->vars[0]);
    }
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[1],
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      _V0get__scope__provenance,
      self->vars[0]);
    VCallFuncWithGC(runtime, (VFunc)VCreateRecord2, 5,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__scope__provenance_V0k130, self)))),
      VEncodeBool(false),
      _V0error,
      VEncodePointer(&_V10_Dstring_D720.sym, VPOINTER_OTHER),
      self->vars[1]);
    }
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__scope__provenance(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__scope__provenance, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (##qualified-call (vanity compiler hygienic types ##.scope?.2) #t (bruijn ##.scope?.2.91 1 56) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__scope__provenance_V0k129) (bruijn ##.rec.181 0 1))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0types;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__scope__provenance_V0k129, self))));
    VWORD _arg1 = 
      _var1;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V10_Dscope_Q_D2, _V60_V0vanity_V0compiler_V0hygienic_V0types)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0types_V10_Dscope_Q_D2(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__scope__serial_V0k132(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__scope__serial_V0k132, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.raise (bruijn ##.%k.407 3 0) (bruijn ##.%x.409 0 0))
    VCallFuncWithGC(runtime, (VFunc)VRaise, 2,
      statics->up->up->vars[0],
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__scope__serial_V0k131(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__scope__serial_V0k131, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.408 0 0) (basic-block 1 1 (##.%r.605) ((##vcore.record-ref (bruijn ##.rec.182 2 1) 2)) ((bruijn ##.%k.407 2 0) (bruijn ##.%r.605 0 0))) (basic-block 2 2 (##.%x.606 ##.%x.607) ((##vcore.cons (bruijn ##.rec.182 2 1) '()) (##vcore.cons 'get-scope-serial (bruijn ##.%x.606 0 0))) (##vcore.record (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__scope__serial_V0k132) #f 'error (##string ##.string.720) (bruijn ##.%x.607 0 1))))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VRecordRef2(runtime, NULL,
      statics->up->vars[1],
      VEncodeInt(2l));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      self->vars[0]);
    }
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[1],
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      _V0get__scope__serial,
      self->vars[0]);
    VCallFuncWithGC(runtime, (VFunc)VCreateRecord2, 5,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__scope__serial_V0k132, self)))),
      VEncodeBool(false),
      _V0error,
      VEncodePointer(&_V10_Dstring_D720.sym, VPOINTER_OTHER),
      self->vars[1]);
    }
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__scope__serial(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__scope__serial, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (##qualified-call (vanity compiler hygienic types ##.scope?.2) #t (bruijn ##.scope?.2.91 1 56) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__scope__serial_V0k131) (bruijn ##.rec.182 0 1))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0types;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__scope__serial_V0k131, self))));
    VWORD _arg1 = 
      _var1;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V10_Dscope_Q_D2, _V60_V0vanity_V0compiler_V0hygienic_V0types)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0types_V10_Dscope_Q_D2(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0set__scope__bindings_B_V0k134(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0set__scope__bindings_B_V0k134, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.raise (bruijn ##.%k.412 3 0) (bruijn ##.%x.414 0 0))
    VCallFuncWithGC(runtime, (VFunc)VRaise, 2,
      statics->up->up->vars[0],
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0set__scope__bindings_B_V0k133(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0set__scope__bindings_B_V0k133, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.413 0 0) (##vcore.record-set! (bruijn ##.%k.412 1 0) (bruijn ##.rec.183 1 1) 1 (bruijn ##.x.184 1 2)) (basic-block 2 2 (##.%x.608 ##.%x.609) ((##vcore.cons (bruijn ##.rec.183 2 1) '()) (##vcore.cons 'set-scope-bindings! (bruijn ##.%x.608 0 0))) (##vcore.record (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0set__scope__bindings_B_V0k134) #f 'error (##string ##.string.720) (bruijn ##.%x.609 0 1))))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VRecordSet2, 4,
      statics->vars[0],
      statics->vars[1],
      VEncodeInt(1l),
      statics->vars[2]);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[1],
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      _V0set__scope__bindings_B,
      self->vars[0]);
    VCallFuncWithGC(runtime, (VFunc)VCreateRecord2, 5,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0set__scope__bindings_B_V0k134, self)))),
      VEncodeBool(false),
      _V0error,
      VEncodePointer(&_V10_Dstring_D720.sym, VPOINTER_OTHER),
      self->vars[1]);
    }
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0set__scope__bindings_B(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0set__scope__bindings_B, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (##qualified-call (vanity compiler hygienic types ##.scope?.2) #t (bruijn ##.scope?.2.91 1 56) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0set__scope__bindings_B_V0k133) (bruijn ##.rec.183 0 1))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0types;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0set__scope__bindings_B_V0k133, self))));
    VWORD _arg1 = 
      _var1;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V10_Dscope_Q_D2, _V60_V0vanity_V0compiler_V0hygienic_V0types)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0types_V10_Dscope_Q_D2(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__scope__bindings_V0k136(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__scope__bindings_V0k136, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.raise (bruijn ##.%k.417 3 0) (bruijn ##.%x.419 0 0))
    VCallFuncWithGC(runtime, (VFunc)VRaise, 2,
      statics->up->up->vars[0],
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__scope__bindings_V0k135(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__scope__bindings_V0k135, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.418 0 0) (basic-block 1 1 (##.%r.610) ((##vcore.record-ref (bruijn ##.rec.185 2 1) 1)) ((bruijn ##.%k.417 2 0) (bruijn ##.%r.610 0 0))) (basic-block 2 2 (##.%x.611 ##.%x.612) ((##vcore.cons (bruijn ##.rec.185 2 1) '()) (##vcore.cons 'get-scope-bindings (bruijn ##.%x.611 0 0))) (##vcore.record (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__scope__bindings_V0k136) #f 'error (##string ##.string.720) (bruijn ##.%x.612 0 1))))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VRecordRef2(runtime, NULL,
      statics->up->vars[1],
      VEncodeInt(1l));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      self->vars[0]);
    }
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[1],
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      _V0get__scope__bindings,
      self->vars[0]);
    VCallFuncWithGC(runtime, (VFunc)VCreateRecord2, 5,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__scope__bindings_V0k136, self)))),
      VEncodeBool(false),
      _V0error,
      VEncodePointer(&_V10_Dstring_D720.sym, VPOINTER_OTHER),
      self->vars[1]);
    }
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__scope__bindings(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__scope__bindings, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (##qualified-call (vanity compiler hygienic types ##.scope?.2) #t (bruijn ##.scope?.2.91 1 56) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__scope__bindings_V0k135) (bruijn ##.rec.185 0 1))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0types;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__scope__bindings_V0k135, self))));
    VWORD _arg1 = 
      _var1;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V10_Dscope_Q_D2, _V60_V0vanity_V0compiler_V0hygienic_V0types)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0types_V10_Dscope_Q_D2(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0make__scope__impl(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0make__scope__impl, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
  // (##vcore.record (bruijn ##.%k.422 0 0) (bruijn ##.scope.1.92 1 57) (bruijn ##.bindings.186 0 1) (bruijn ##.serial.187 0 2) (bruijn ##.provenance.188 0 3))
    VCallFuncWithGC(runtime, (VFunc)VCreateRecord2, 5,
      _var0,
      statics->vars[57],
      _var1,
      _var2,
      _var3);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V10_Dscope_Q_D2(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V10_Dscope_Q_D2, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.%p.613) ((##vcore.record? (bruijn ##.x.189 1 1))) (if (bruijn ##.%p.613 0 0) (basic-block 2 2 (##.%x.614 ##.%r.615) ((##vcore.record-ref (bruijn ##.x.189 2 1) 0) (##vcore.eqv? (bruijn ##.%x.614 0 0) (bruijn ##.scope.1.92 3 57))) ((bruijn ##.%k.423 2 0) (bruijn ##.%r.615 0 1))) ((bruijn ##.%k.423 1 0) #f)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VRecordP2(runtime, NULL,
      statics->vars[1]);
if(VDecodeBool(
self->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VRecordRef2(runtime, NULL,
      statics->up->vars[1],
      VEncodeInt(0l));
    self->vars[1] = _VBasic_VEq2(runtime, NULL,
      self->vars[0],
      statics->up->up->vars[57]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      self->vars[1]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0all__registered__scopes(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0all__registered__scopes, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%k.426 0 0) (bruijn ##.scope-registry.95 1 60))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->vars[60]);
}
static void _V0vanity_V0compiler_V0hygienic_V0types_V20_V0k154(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 102 102 (##.%x.618 ##.%x.619 ##.%x.620 ##.%x.621 ##.%x.622 ##.%x.623 ##.%x.624 ##.%x.625 ##.%x.626 ##.%x.627 ##.%x.628 ##.%x.629 ##.%x.630 ##.%x.631 ##.%x.632 ##.%x.633 ##.%x.634 ##.%x.635 ##.%x.636 ##.%x.637 ##.%x.638 ##.%x.639 ##.%x.640 ##.%x.641 ##.%x.642 ##.%x.643 ##.%x.644 ##.%x.645 ##.%x.646 ##.%x.647 ##.%x.648 ##.%x.649 ##.%x.650 ##.%x.651 ##.%x.652 ##.%x.653 ##.%x.654 ##.%x.655 ##.%x.656 ##.%x.657 ##.%x.658 ##.%x.659 ##.%x.660 ##.%x.661 ##.%x.662 ##.%x.663 ##.%x.664 ##.%x.665 ##.%x.666 ##.%x.667 ##.%x.668 ##.%x.669 ##.%x.670 ##.%x.671 ##.%x.672 ##.%x.673 ##.%x.674 ##.%x.675 ##.%x.676 ##.%x.677 ##.%x.678 ##.%x.679 ##.%x.680 ##.%x.681 ##.%x.682 ##.%x.683 ##.%x.684 ##.%x.685 ##.%x.686 ##.%x.687 ##.%x.688 ##.%x.689 ##.%x.690 ##.%x.691 ##.%x.692 ##.%x.693 ##.%x.694 ##.%x.695 ##.%x.696 ##.%x.697 ##.%x.698 ##.%x.699 ##.%x.700 ##.%x.701 ##.%x.702 ##.%x.703 ##.%x.704 ##.%x.705 ##.%x.706 ##.%x.707 ##.%x.708 ##.%x.709 ##.%x.710 ##.%x.711 ##.%x.712 ##.%x.713 ##.%x.714 ##.%x.715 ##.%x.716 ##.%x.717 ##.%x.718 ##.%r.719) ((##vcore.cons 'make-scope (bruijn ##.make-scope.84 8 49)) (##vcore.cons 'scope? (bruijn ##.scope?.90 8 55)) (##vcore.cons 'scope=? (##intrinsic ##vcore.eq?)) (##vcore.cons 'get-scope-bindings (bruijn ##.get-scope-bindings.88 8 53)) (##vcore.cons 'set-scope-bindings! (bruijn ##.set-scope-bindings!.87 8 52)) (##vcore.cons 'global-scope (bruijn ##.global-scope.83 8 48)) (##vcore.cons 'toplevel-scope (bruijn ##.toplevel-scope.82 8 47)) (##vcore.cons 'get-scope-serial (bruijn ##.get-scope-serial.86 8 51)) (##vcore.cons 'get-scope-provenance (bruijn ##.get-scope-provenance.85 8 50)) (##vcore.cons 'scope->string (bruijn ##.scope->string.81 8 46)) (##vcore.cons 'scope-set->string (bruijn ##.scope-set->string.80 8 45)) (##vcore.cons 'explain-scopes? (bruijn ##.explain-scopes?.96 8 61)) (##vcore.cons 'all-registered-scopes (bruijn ##.all-registered-scopes.94 8 59)) (##vcore.cons 'set-expansion-deadline! (bruijn ##.set-expansion-deadline!.78 8 43)) (##vcore.cons 'expansion-timed-out? (bruijn ##.expansion-timed-out?.77 8 42)) (##vcore.cons 'identifier? (bruijn ##.identifier?.68 8 33)) (##vcore.cons 'get-syntax-scopes (bruijn ##.get-syntax-scopes.70 8 35)) (##vcore.cons 'set-syntax-scopes! (bruijn ##.set-syntax-scopes!.69 8 34)) (##vcore.cons 'make-syntax (bruijn ##.make-syntax.73 8 38)) (##vcore.cons 'syntax? (bruijn ##.syntax?.74 8 39)) (##vcore.cons 'get-syntax-data (bruijn ##.get-syntax-data.66 8 31)) (##vcore.cons 'set-syntax-data! (bruijn ##.set-syntax-data!.71 8 36)) (##vcore.cons 'syntax-null? (bruijn ##.syntax-null?.60 8 25)) (##vcore.cons 'syntax-pair? (bruijn ##.syntax-pair?.59 8 24)) (##vcore.cons 'syntax-cons (bruijn ##.syntax-cons.58 8 23)) (##vcore.cons 'syntax-car (bruijn ##.syntax-car.57 8 22)) (##vcore.cons 'syntax-cdr (bruijn ##.syntax-cdr.56 8 21)) (##vcore.cons 'syntax-caar (bruijn ##.syntax-caar.55 8 20)) (##vcore.cons 'syntax-cadr (bruijn ##.syntax-cadr.54 8 19)) (##vcore.cons 'syntax-cdar (bruijn ##.syntax-cdar.53 8 18)) (##vcore.cons 'syntax-cddr (bruijn ##.syntax-cddr.52 8 17)) (##vcore.cons 'syntax-map (bruijn ##.syntax-map.50 8 15)) (##vcore.cons 'syntax-append-map (bruijn ##.syntax-append-map.41 8 6)) (##vcore.cons 'syntax-for-each (bruijn ##.syntax-for-each.49 8 14)) (##vcore.cons 'syntax-list (bruijn ##.syntax-list.48 8 13)) (##vcore.cons 'syntax-caddr (bruijn ##.syntax-caddr.51 8 16)) (##vcore.cons 'syntax-vector? (bruijn ##.syntax-vector?.47 8 12)) (##vcore.cons 'syntax-vector (bruijn ##.syntax-vector.46 8 11)) (##vcore.cons 'syntax-make-vector (bruijn ##.syntax-make-vector.45 8 10)) (##vcore.cons 'syntax-vector-ref (bruijn ##.syntax-vector-ref.44 8 9)) (##vcore.cons 'syntax-vector-map (bruijn ##.syntax-vector-map.43 8 8)) (##vcore.cons 'syntax-vector-for-each (bruijn ##.syntax-vector-for-each.42 8 7)) (##vcore.cons 'lazy-flip-scope (bruijn ##.lazy-flip-scope.64 8 29)) (##vcore.cons 'eager-flip-scope (bruijn ##.eager-flip-scope.63 8 28)) (##vcore.cons 'flip-scope (bruijn ##.flip-scope.61 8 26)) (##vcore.cons 'syntax-object->datum (bruijn ##.syntax-object->datum.39 8 4)) (##vcore.cons 'datum->syntax-object (bruijn ##.datum->syntax-object.40 8 5)) (##vcore.cons 'syntax-length (bruijn ##.syntax-length.38 8 3)) (##vcore.cons 'syntax-proper-list? (bruijn ##.syntax-proper-list?.37 8 2)) (##vcore.cons 'syntax-undot-list (bruijn ##.syntax-undot-list.36 8 1)) (##vcore.cons 'syntax->list (bruijn ##.syntax->list.35 8 0)) (##vcore.cons (bruijn ##.%x.668 0 50) '()) (##vcore.cons (bruijn ##.%x.667 0 49) (bruijn ##.%x.669 0 51)) (##vcore.cons (bruijn ##.%x.666 0 48) (bruijn ##.%x.670 0 52)) (##vcore.cons (bruijn ##.%x.665 0 47) (bruijn ##.%x.671 0 53)) (##vcore.cons (bruijn ##.%x.664 0 46) (bruijn ##.%x.672 0 54)) (##vcore.cons (bruijn ##.%x.663 0 45) (bruijn ##.%x.673 0 55)) (##vcore.cons (bruijn ##.%x.662 0 44) (bruijn ##.%x.674 0 56)) (##vcore.cons (bruijn ##.%x.661 0 43) (bruijn ##.%x.675 0 57)) (##vcore.cons (bruijn ##.%x.660 0 42) (bruijn ##.%x.676 0 58)) (##vcore.cons (bruijn ##.%x.659 0 41) (bruijn ##.%x.677 0 59)) (##vcore.cons (bruijn ##.%x.658 0 40) (bruijn ##.%x.678 0 60)) (##vcore.cons (bruijn ##.%x.657 0 39) (bruijn ##.%x.679 0 61)) (##vcore.cons (bruijn ##.%x.656 0 38) (bruijn ##.%x.680 0 62)) (##vcore.cons (bruijn ##.%x.655 0 37) (bruijn ##.%x.681 0 63)) (##vcore.cons (bruijn ##.%x.654 0 36) (bruijn ##.%x.682 0 64)) (##vcore.cons (bruijn ##.%x.653 0 35) (bruijn ##.%x.683 0 65)) (##vcore.cons (bruijn ##.%x.652 0 34) (bruijn ##.%x.684 0 66)) (##vcore.cons (bruijn ##.%x.651 0 33) (bruijn ##.%x.685 0 67)) (##vcore.cons (bruijn ##.%x.650 0 32) (bruijn ##.%x.686 0 68)) (##vcore.cons (bruijn ##.%x.649 0 31) (bruijn ##.%x.687 0 69)) (##vcore.cons (bruijn ##.%x.648 0 30) (bruijn ##.%x.688 0 70)) (##vcore.cons (bruijn ##.%x.647 0 29) (bruijn ##.%x.689 0 71)) (##vcore.cons (bruijn ##.%x.646 0 28) (bruijn ##.%x.690 0 72)) (##vcore.cons (bruijn ##.%x.645 0 27) (bruijn ##.%x.691 0 73)) (##vcore.cons (bruijn ##.%x.644 0 26) (bruijn ##.%x.692 0 74)) (##vcore.cons (bruijn ##.%x.643 0 25) (bruijn ##.%x.693 0 75)) (##vcore.cons (bruijn ##.%x.642 0 24) (bruijn ##.%x.694 0 76)) (##vcore.cons (bruijn ##.%x.641 0 23) (bruijn ##.%x.695 0 77)) (##vcore.cons (bruijn ##.%x.640 0 22) (bruijn ##.%x.696 0 78)) (##vcore.cons (bruijn ##.%x.639 0 21) (bruijn ##.%x.697 0 79)) (##vcore.cons (bruijn ##.%x.638 0 20) (bruijn ##.%x.698 0 80)) (##vcore.cons (bruijn ##.%x.637 0 19) (bruijn ##.%x.699 0 81)) (##vcore.cons (bruijn ##.%x.636 0 18) (bruijn ##.%x.700 0 82)) (##vcore.cons (bruijn ##.%x.635 0 17) (bruijn ##.%x.701 0 83)) (##vcore.cons (bruijn ##.%x.634 0 16) (bruijn ##.%x.702 0 84)) (##vcore.cons (bruijn ##.%x.633 0 15) (bruijn ##.%x.703 0 85)) (##vcore.cons (bruijn ##.%x.632 0 14) (bruijn ##.%x.704 0 86)) (##vcore.cons (bruijn ##.%x.631 0 13) (bruijn ##.%x.705 0 87)) (##vcore.cons (bruijn ##.%x.630 0 12) (bruijn ##.%x.706 0 88)) (##vcore.cons (bruijn ##.%x.629 0 11) (bruijn ##.%x.707 0 89)) (##vcore.cons (bruijn ##.%x.628 0 10) (bruijn ##.%x.708 0 90)) (##vcore.cons (bruijn ##.%x.627 0 9) (bruijn ##.%x.709 0 91)) (##vcore.cons (bruijn ##.%x.626 0 8) (bruijn ##.%x.710 0 92)) (##vcore.cons (bruijn ##.%x.625 0 7) (bruijn ##.%x.711 0 93)) (##vcore.cons (bruijn ##.%x.624 0 6) (bruijn ##.%x.712 0 94)) (##vcore.cons (bruijn ##.%x.623 0 5) (bruijn ##.%x.713 0 95)) (##vcore.cons (bruijn ##.%x.622 0 4) (bruijn ##.%x.714 0 96)) (##vcore.cons (bruijn ##.%x.621 0 3) (bruijn ##.%x.715 0 97)) (##vcore.cons (bruijn ##.%x.620 0 2) (bruijn ##.%x.716 0 98)) (##vcore.cons (bruijn ##.%x.619 0 1) (bruijn ##.%x.717 0 99)) (##vcore.cons (bruijn ##.%x.618 0 0) (bruijn ##.%x.718 0 100))) ((bruijn ##.%k.191 13 0) (bruijn ##.%r.719 0 101)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[102]; } container;
    self = &container.self;
    VInitEnv(self, 102, 102, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      _V0make__scope,
      VGetArg(statics, 8-1, 49));
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      _V0scope_Q,
      VGetArg(statics, 8-1, 55));
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      _V0scope_E_Q,
      _V40_V10vcore_Deq_Q);
    self->vars[3] = _VBasic_VCons2(runtime, NULL,
      _V0get__scope__bindings,
      VGetArg(statics, 8-1, 53));
    self->vars[4] = _VBasic_VCons2(runtime, NULL,
      _V0set__scope__bindings_B,
      VGetArg(statics, 8-1, 52));
    self->vars[5] = _VBasic_VCons2(runtime, NULL,
      _V0global__scope,
      VGetArg(statics, 8-1, 48));
    self->vars[6] = _VBasic_VCons2(runtime, NULL,
      _V0toplevel__scope,
      VGetArg(statics, 8-1, 47));
    self->vars[7] = _VBasic_VCons2(runtime, NULL,
      _V0get__scope__serial,
      VGetArg(statics, 8-1, 51));
    self->vars[8] = _VBasic_VCons2(runtime, NULL,
      _V0get__scope__provenance,
      VGetArg(statics, 8-1, 50));
    self->vars[9] = _VBasic_VCons2(runtime, NULL,
      _V0scope___Gstring,
      VGetArg(statics, 8-1, 46));
    self->vars[10] = _VBasic_VCons2(runtime, NULL,
      _V0scope__set___Gstring,
      VGetArg(statics, 8-1, 45));
    self->vars[11] = _VBasic_VCons2(runtime, NULL,
      _V0explain__scopes_Q,
      VGetArg(statics, 8-1, 61));
    self->vars[12] = _VBasic_VCons2(runtime, NULL,
      _V0all__registered__scopes,
      VGetArg(statics, 8-1, 59));
    self->vars[13] = _VBasic_VCons2(runtime, NULL,
      _V0set__expansion__deadline_B,
      VGetArg(statics, 8-1, 43));
    self->vars[14] = _VBasic_VCons2(runtime, NULL,
      _V0expansion__timed__out_Q,
      VGetArg(statics, 8-1, 42));
    self->vars[15] = _VBasic_VCons2(runtime, NULL,
      _V0identifier_Q,
      VGetArg(statics, 8-1, 33));
    self->vars[16] = _VBasic_VCons2(runtime, NULL,
      _V0get__syntax__scopes,
      VGetArg(statics, 8-1, 35));
    self->vars[17] = _VBasic_VCons2(runtime, NULL,
      _V0set__syntax__scopes_B,
      VGetArg(statics, 8-1, 34));
    self->vars[18] = _VBasic_VCons2(runtime, NULL,
      _V0make__syntax,
      VGetArg(statics, 8-1, 38));
    self->vars[19] = _VBasic_VCons2(runtime, NULL,
      _V0syntax_Q,
      VGetArg(statics, 8-1, 39));
    self->vars[20] = _VBasic_VCons2(runtime, NULL,
      _V0get__syntax__data,
      VGetArg(statics, 8-1, 31));
    self->vars[21] = _VBasic_VCons2(runtime, NULL,
      _V0set__syntax__data_B,
      VGetArg(statics, 8-1, 36));
    self->vars[22] = _VBasic_VCons2(runtime, NULL,
      _V0syntax__null_Q,
      VGetArg(statics, 8-1, 25));
    self->vars[23] = _VBasic_VCons2(runtime, NULL,
      _V0syntax__pair_Q,
      VGetArg(statics, 8-1, 24));
    self->vars[24] = _VBasic_VCons2(runtime, NULL,
      _V0syntax__cons,
      VGetArg(statics, 8-1, 23));
    self->vars[25] = _VBasic_VCons2(runtime, NULL,
      _V0syntax__car,
      VGetArg(statics, 8-1, 22));
    self->vars[26] = _VBasic_VCons2(runtime, NULL,
      _V0syntax__cdr,
      VGetArg(statics, 8-1, 21));
    self->vars[27] = _VBasic_VCons2(runtime, NULL,
      _V0syntax__caar,
      VGetArg(statics, 8-1, 20));
    self->vars[28] = _VBasic_VCons2(runtime, NULL,
      _V0syntax__cadr,
      VGetArg(statics, 8-1, 19));
    self->vars[29] = _VBasic_VCons2(runtime, NULL,
      _V0syntax__cdar,
      VGetArg(statics, 8-1, 18));
    self->vars[30] = _VBasic_VCons2(runtime, NULL,
      _V0syntax__cddr,
      VGetArg(statics, 8-1, 17));
    self->vars[31] = _VBasic_VCons2(runtime, NULL,
      _V0syntax__map,
      VGetArg(statics, 8-1, 15));
    self->vars[32] = _VBasic_VCons2(runtime, NULL,
      _V0syntax__append__map,
      VGetArg(statics, 8-1, 6));
    self->vars[33] = _VBasic_VCons2(runtime, NULL,
      _V0syntax__for__each,
      VGetArg(statics, 8-1, 14));
    self->vars[34] = _VBasic_VCons2(runtime, NULL,
      _V0syntax__list,
      VGetArg(statics, 8-1, 13));
    self->vars[35] = _VBasic_VCons2(runtime, NULL,
      _V0syntax__caddr,
      VGetArg(statics, 8-1, 16));
    self->vars[36] = _VBasic_VCons2(runtime, NULL,
      _V0syntax__vector_Q,
      VGetArg(statics, 8-1, 12));
    self->vars[37] = _VBasic_VCons2(runtime, NULL,
      _V0syntax__vector,
      VGetArg(statics, 8-1, 11));
    self->vars[38] = _VBasic_VCons2(runtime, NULL,
      _V0syntax__make__vector,
      VGetArg(statics, 8-1, 10));
    self->vars[39] = _VBasic_VCons2(runtime, NULL,
      _V0syntax__vector__ref,
      VGetArg(statics, 8-1, 9));
    self->vars[40] = _VBasic_VCons2(runtime, NULL,
      _V0syntax__vector__map,
      VGetArg(statics, 8-1, 8));
    self->vars[41] = _VBasic_VCons2(runtime, NULL,
      _V0syntax__vector__for__each,
      VGetArg(statics, 8-1, 7));
    self->vars[42] = _VBasic_VCons2(runtime, NULL,
      _V0lazy__flip__scope,
      VGetArg(statics, 8-1, 29));
    self->vars[43] = _VBasic_VCons2(runtime, NULL,
      _V0eager__flip__scope,
      VGetArg(statics, 8-1, 28));
    self->vars[44] = _VBasic_VCons2(runtime, NULL,
      _V0flip__scope,
      VGetArg(statics, 8-1, 26));
    self->vars[45] = _VBasic_VCons2(runtime, NULL,
      _V0syntax__object___Gdatum,
      VGetArg(statics, 8-1, 4));
    self->vars[46] = _VBasic_VCons2(runtime, NULL,
      _V0datum___Gsyntax__object,
      VGetArg(statics, 8-1, 5));
    self->vars[47] = _VBasic_VCons2(runtime, NULL,
      _V0syntax__length,
      VGetArg(statics, 8-1, 3));
    self->vars[48] = _VBasic_VCons2(runtime, NULL,
      _V0syntax__proper__list_Q,
      VGetArg(statics, 8-1, 2));
    self->vars[49] = _VBasic_VCons2(runtime, NULL,
      _V0syntax__undot__list,
      VGetArg(statics, 8-1, 1));
    self->vars[50] = _VBasic_VCons2(runtime, NULL,
      _V0syntax___Glist,
      VGetArg(statics, 8-1, 0));
    self->vars[51] = _VBasic_VCons2(runtime, NULL,
      self->vars[50],
      VNULL);
    self->vars[52] = _VBasic_VCons2(runtime, NULL,
      self->vars[49],
      self->vars[51]);
    self->vars[53] = _VBasic_VCons2(runtime, NULL,
      self->vars[48],
      self->vars[52]);
    self->vars[54] = _VBasic_VCons2(runtime, NULL,
      self->vars[47],
      self->vars[53]);
    self->vars[55] = _VBasic_VCons2(runtime, NULL,
      self->vars[46],
      self->vars[54]);
    self->vars[56] = _VBasic_VCons2(runtime, NULL,
      self->vars[45],
      self->vars[55]);
    self->vars[57] = _VBasic_VCons2(runtime, NULL,
      self->vars[44],
      self->vars[56]);
    self->vars[58] = _VBasic_VCons2(runtime, NULL,
      self->vars[43],
      self->vars[57]);
    self->vars[59] = _VBasic_VCons2(runtime, NULL,
      self->vars[42],
      self->vars[58]);
    self->vars[60] = _VBasic_VCons2(runtime, NULL,
      self->vars[41],
      self->vars[59]);
    self->vars[61] = _VBasic_VCons2(runtime, NULL,
      self->vars[40],
      self->vars[60]);
    self->vars[62] = _VBasic_VCons2(runtime, NULL,
      self->vars[39],
      self->vars[61]);
    self->vars[63] = _VBasic_VCons2(runtime, NULL,
      self->vars[38],
      self->vars[62]);
    self->vars[64] = _VBasic_VCons2(runtime, NULL,
      self->vars[37],
      self->vars[63]);
    self->vars[65] = _VBasic_VCons2(runtime, NULL,
      self->vars[36],
      self->vars[64]);
    self->vars[66] = _VBasic_VCons2(runtime, NULL,
      self->vars[35],
      self->vars[65]);
    self->vars[67] = _VBasic_VCons2(runtime, NULL,
      self->vars[34],
      self->vars[66]);
    self->vars[68] = _VBasic_VCons2(runtime, NULL,
      self->vars[33],
      self->vars[67]);
    self->vars[69] = _VBasic_VCons2(runtime, NULL,
      self->vars[32],
      self->vars[68]);
    self->vars[70] = _VBasic_VCons2(runtime, NULL,
      self->vars[31],
      self->vars[69]);
    self->vars[71] = _VBasic_VCons2(runtime, NULL,
      self->vars[30],
      self->vars[70]);
    self->vars[72] = _VBasic_VCons2(runtime, NULL,
      self->vars[29],
      self->vars[71]);
    self->vars[73] = _VBasic_VCons2(runtime, NULL,
      self->vars[28],
      self->vars[72]);
    self->vars[74] = _VBasic_VCons2(runtime, NULL,
      self->vars[27],
      self->vars[73]);
    self->vars[75] = _VBasic_VCons2(runtime, NULL,
      self->vars[26],
      self->vars[74]);
    self->vars[76] = _VBasic_VCons2(runtime, NULL,
      self->vars[25],
      self->vars[75]);
    self->vars[77] = _VBasic_VCons2(runtime, NULL,
      self->vars[24],
      self->vars[76]);
    self->vars[78] = _VBasic_VCons2(runtime, NULL,
      self->vars[23],
      self->vars[77]);
    self->vars[79] = _VBasic_VCons2(runtime, NULL,
      self->vars[22],
      self->vars[78]);
    self->vars[80] = _VBasic_VCons2(runtime, NULL,
      self->vars[21],
      self->vars[79]);
    self->vars[81] = _VBasic_VCons2(runtime, NULL,
      self->vars[20],
      self->vars[80]);
    self->vars[82] = _VBasic_VCons2(runtime, NULL,
      self->vars[19],
      self->vars[81]);
    self->vars[83] = _VBasic_VCons2(runtime, NULL,
      self->vars[18],
      self->vars[82]);
    self->vars[84] = _VBasic_VCons2(runtime, NULL,
      self->vars[17],
      self->vars[83]);
    self->vars[85] = _VBasic_VCons2(runtime, NULL,
      self->vars[16],
      self->vars[84]);
    self->vars[86] = _VBasic_VCons2(runtime, NULL,
      self->vars[15],
      self->vars[85]);
    self->vars[87] = _VBasic_VCons2(runtime, NULL,
      self->vars[14],
      self->vars[86]);
    self->vars[88] = _VBasic_VCons2(runtime, NULL,
      self->vars[13],
      self->vars[87]);
    self->vars[89] = _VBasic_VCons2(runtime, NULL,
      self->vars[12],
      self->vars[88]);
    self->vars[90] = _VBasic_VCons2(runtime, NULL,
      self->vars[11],
      self->vars[89]);
    self->vars[91] = _VBasic_VCons2(runtime, NULL,
      self->vars[10],
      self->vars[90]);
    self->vars[92] = _VBasic_VCons2(runtime, NULL,
      self->vars[9],
      self->vars[91]);
    self->vars[93] = _VBasic_VCons2(runtime, NULL,
      self->vars[8],
      self->vars[92]);
    self->vars[94] = _VBasic_VCons2(runtime, NULL,
      self->vars[7],
      self->vars[93]);
    self->vars[95] = _VBasic_VCons2(runtime, NULL,
      self->vars[6],
      self->vars[94]);
    self->vars[96] = _VBasic_VCons2(runtime, NULL,
      self->vars[5],
      self->vars[95]);
    self->vars[97] = _VBasic_VCons2(runtime, NULL,
      self->vars[4],
      self->vars[96]);
    self->vars[98] = _VBasic_VCons2(runtime, NULL,
      self->vars[3],
      self->vars[97]);
    self->vars[99] = _VBasic_VCons2(runtime, NULL,
      self->vars[2],
      self->vars[98]);
    self->vars[100] = _VBasic_VCons2(runtime, NULL,
      self->vars[1],
      self->vars[99]);
    self->vars[101] = _VBasic_VCons2(runtime, NULL,
      self->vars[0],
      self->vars[100]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 0)), 1,
      self->vars[101]);
    }
}
static void _V0vanity_V0compiler_V0hygienic_V0types_V20_V0k153(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (set! (close _V0vanity_V0compiler_V0hygienic_V0types_V20_V0k154) (bruijn ##.syntax-make-vector.45 7 10) (##intrinsic ##vcore.make-vector))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0hygienic_V0types_V20_V0k154, self)))),
      VEncodeInt(7l), VEncodeInt(10l),
      _V40_V10vcore_Dmake__vector
    );
}
static void _V0vanity_V0compiler_V0hygienic_V0types_V20_V0k152(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (set! (close _V0vanity_V0compiler_V0hygienic_V0types_V20_V0k153) (bruijn ##.syntax-vector.46 7 11) (##intrinsic ##vcore.vector))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0hygienic_V0types_V20_V0k153, self)))),
      VEncodeInt(7l), VEncodeInt(11l),
      _V40_V10vcore_Dvector
    );
}
static void _V0vanity_V0compiler_V0hygienic_V0types_V20_V0k151(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (set! (close _V0vanity_V0compiler_V0hygienic_V0types_V20_V0k152) (bruijn ##.syntax-list.48 7 13) (bruijn ##.list.18 8 12))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0hygienic_V0types_V20_V0k152, self)))),
      VEncodeInt(7l), VEncodeInt(13l),
      VGetArg(statics, 8-1, 12)
    );
}
static void _V0vanity_V0compiler_V0hygienic_V0types_V20_V0k150(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (set! (close _V0vanity_V0compiler_V0hygienic_V0types_V20_V0k151) (bruijn ##.syntax-cons.58 7 23) (##intrinsic ##vcore.cons))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0hygienic_V0types_V20_V0k151, self)))),
      VEncodeInt(7l), VEncodeInt(23l),
      _V40_V10vcore_Dcons
    );
}
static void _V0vanity_V0compiler_V0hygienic_V0types_V20_V0k149(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (set! (close _V0vanity_V0compiler_V0hygienic_V0types_V20_V0k150) (bruijn ##.flip-scope.61 7 26) (bruijn ##.lazy-flip-scope.64 7 29))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0hygienic_V0types_V20_V0k150, self)))),
      VEncodeInt(7l), VEncodeInt(26l),
      VGetArg(statics, 7-1, 29)
    );
}
static void _V0vanity_V0compiler_V0hygienic_V0types_V20_V0k148(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (set! (close _V0vanity_V0compiler_V0hygienic_V0types_V20_V0k149) (bruijn ##.syntax?.74 7 39) (bruijn ##.syntax?.4.75 7 40))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0hygienic_V0types_V20_V0k149, self)))),
      VEncodeInt(7l), VEncodeInt(39l),
      VGetArg(statics, 7-1, 40)
    );
}
static void _V0vanity_V0compiler_V0hygienic_V0types_V20_V0k147(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%x.617) ((##vcore.cons 'syntax '(##pair ##.pair.731))) (set! (close _V0vanity_V0compiler_V0hygienic_V0types_V20_V0k148) (bruijn ##.syntax.3.76 7 41) (bruijn ##.%x.617 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      _V0syntax,
      VEncodePointer(&_V10_Dpair_D731, VPOINTER_PAIR));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0hygienic_V0types_V20_V0k148, self)))),
      VEncodeInt(7l), VEncodeInt(41l),
      self->vars[0]
    );
    }
}
static void _V0vanity_V0compiler_V0hygienic_V0types_V20_V0k146(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0hygienic_V0types_V20_V0k146, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (close _V0vanity_V0compiler_V0hygienic_V0types_V20_V0k147) (bruijn ##.toplevel-scope.82 6 47) (bruijn ##.%x.529 0 0))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0hygienic_V0types_V20_V0k147, self)))),
      VEncodeInt(6l), VEncodeInt(47l),
      _var0
    );
}
static void _V0vanity_V0compiler_V0hygienic_V0types_V20_V0k145(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0hygienic_V0types_V20_V0k145, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.make-parameter.17 6 11) (close _V0vanity_V0compiler_V0hygienic_V0types_V20_V0k146) (bruijn ##.%x.530 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 11)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0hygienic_V0types_V20_V0k146, self)))),
      _var0);
}
static void _V0vanity_V0compiler_V0hygienic_V0types_V20_V0k144(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##qualified-call (vanity compiler hygienic types make-scope) #t (bruijn ##.make-scope.84 4 49) (close _V0vanity_V0compiler_V0hygienic_V0types_V20_V0k145) 'program)
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0types;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0hygienic_V0types_V20_V0k145, self))));
    VWORD _arg1 = 
      _V0program;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0make__scope, _V60_V0vanity_V0compiler_V0hygienic_V0types)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0types_V0make__scope(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
static void _V0vanity_V0compiler_V0hygienic_V0types_V20_V0k143(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0hygienic_V0types_V20_V0k143, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (close _V0vanity_V0compiler_V0hygienic_V0types_V20_V0k144) (bruijn ##.global-scope.83 4 48) (bruijn ##.%x.531 0 0))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0hygienic_V0types_V20_V0k144, self)))),
      VEncodeInt(4l), VEncodeInt(48l),
      _var0
    );
}
static void _V0vanity_V0compiler_V0hygienic_V0types_V20_V0k142(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0hygienic_V0types_V20_V0k142, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.make-parameter.17 4 11) (close _V0vanity_V0compiler_V0hygienic_V0types_V20_V0k143) (bruijn ##.%x.532 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[11]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0hygienic_V0types_V20_V0k143, self)))),
      _var0);
}
static void _V0vanity_V0compiler_V0hygienic_V0types_V20_V0k141(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##qualified-call (vanity compiler hygienic types make-scope) #t (bruijn ##.make-scope.84 2 49) (close _V0vanity_V0compiler_V0hygienic_V0types_V20_V0k142) 'global)
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0types;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0hygienic_V0types_V20_V0k142, self))));
    VWORD _arg1 = 
      _V0global;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0make__scope, _V60_V0vanity_V0compiler_V0hygienic_V0types)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0types_V0make__scope(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
static void _V0vanity_V0compiler_V0hygienic_V0types_V20_V0k140(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (set! (close _V0vanity_V0compiler_V0hygienic_V0types_V20_V0k141) (bruijn ##.scope?.90 2 55) (bruijn ##.scope?.2.91 2 56))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0hygienic_V0types_V20_V0k141, self)))),
      VEncodeInt(2l), VEncodeInt(55l),
      statics->up->vars[56]
    );
}
static void _V0vanity_V0compiler_V0hygienic_V0types_V20_V0k139(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%x.616) ((##vcore.cons 'scope '(##pair ##.pair.729))) (set! (close _V0vanity_V0compiler_V0hygienic_V0types_V20_V0k140) (bruijn ##.scope.1.92 2 57) (bruijn ##.%x.616 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      _V0scope,
      VEncodePointer(&_V10_Dpair_D729, VPOINTER_PAIR));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0hygienic_V0types_V20_V0k140, self)))),
      VEncodeInt(2l), VEncodeInt(57l),
      self->vars[0]
    );
    }
}
static void _V0vanity_V0compiler_V0hygienic_V0types_V20_V0k138(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (set! (close _V0vanity_V0compiler_V0hygienic_V0types_V20_V0k139) (bruijn ##.scope-registry.95 1 60) '())
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0hygienic_V0types_V20_V0k139, self)))),
      VEncodeInt(1l), VEncodeInt(60l),
      VNULL
    );
}
static void _V0vanity_V0compiler_V0hygienic_V0types_V20_V0k137(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0hygienic_V0types_V20_V0k137, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (close _V0vanity_V0compiler_V0hygienic_V0types_V20_V0k138) (bruijn ##.explain-scopes?.96 1 61) (bruijn ##.%x.534 0 0))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0hygienic_V0types_V20_V0k138, self)))),
      VEncodeInt(1l), VEncodeInt(61l),
      _var0
    );
}
static void _V0vanity_V0compiler_V0hygienic_V0types_V20_V0lambda2(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4, VWORD _var5, VWORD _var6, VWORD _var7, VWORD _var8, VWORD _var9, VWORD _var10, VWORD _var11, VWORD _var12) {
 if(argc != 13) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0hygienic_V0types_V20_V0lambda2, got ~D~N"
  "-- expected 13~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[13]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 13, 13, statics);
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
  // (##letrec (vanity compiler hygienic types) 62 ((close "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax___Glist" (vanity compiler hygienic types)) (close "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__undot__list" (vanity compiler hygienic types)) (close "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__proper__list_Q" (vanity compiler hygienic types)) (close "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__length" (vanity compiler hygienic types)) (close "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__object___Gdatum" (vanity compiler hygienic types)) (close "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0datum___Gsyntax__object" (vanity compiler hygienic types)) (close "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__append__map" (vanity compiler hygienic types)) (close "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__vector__for__each" (vanity compiler hygienic types)) (close "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__vector__map" (vanity compiler hygienic types)) (close "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__vector__ref" (vanity compiler hygienic types)) #f #f (close "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__vector_Q" (vanity compiler hygienic types)) #f (close "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__for__each" (vanity compiler hygienic types)) (close "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__map" (vanity compiler hygienic types)) (close "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__caddr" (vanity compiler hygienic types)) (close "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__cddr" (vanity compiler hygienic types)) (close "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__cdar" (vanity compiler hygienic types)) (close "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__cadr" (vanity compiler hygienic types)) (close "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__caar" (vanity compiler hygienic types)) (close "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__cdr" (vanity compiler hygienic types)) (close "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__car" (vanity compiler hygienic types)) #f (close "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__pair_Q" (vanity compiler hygienic types)) (close "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__null_Q" (vanity compiler hygienic types)) #f (close "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__unpack" (vanity compiler hygienic types)) (close "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0eager__flip__scope" (vanity compiler hygienic types)) (close "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0lazy__flip__scope" (vanity compiler hygienic types)) (close "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0flip__scope__set" (vanity compiler hygienic types)) (close "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__syntax__data" (vanity compiler hygienic types)) (close "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0propogate__flips" (vanity compiler hygienic types)) (close "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0identifier_Q" (vanity compiler hygienic types)) (close "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0set__syntax__scopes_B" (vanity compiler hygienic types)) (close "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__syntax__scopes" (vanity compiler hygienic types)) (close "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0set__syntax__data_B" (vanity compiler hygienic types)) (close "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__syntax__data__impl" (vanity compiler hygienic types)) (close "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0make__syntax" (vanity compiler hygienic types)) #f (close "_V50_V0vanity_V0compiler_V0hygienic_V0types_V10_Dsyntax_Q_D4" (vanity compiler hygienic types)) #f (close "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0expansion__timed__out_Q" (vanity compiler hygienic types)) (close "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0set__expansion__deadline_B" (vanity compiler hygienic types)) #f (close "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0scope__set___Gstring" (vanity compiler hygienic types)) (close "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0scope___Gstring" (vanity compiler hygienic types)) #f #f (close "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0make__scope" (vanity compiler hygienic types)) (close "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__scope__provenance" (vanity compiler hygienic types)) (close "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__scope__serial" (vanity compiler hygienic types)) (close "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0set__scope__bindings_B" (vanity compiler hygienic types)) (close "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__scope__bindings" (vanity compiler hygienic types)) (close "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0make__scope__impl" (vanity compiler hygienic types)) #f (close "_V50_V0vanity_V0compiler_V0hygienic_V0types_V10_Dscope_Q_D2" (vanity compiler hygienic types)) #f 0.0 (close "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0all__registered__scopes" (vanity compiler hygienic types)) #f #f) ((bruijn ##.make-parameter.17 1 11) (close _V0vanity_V0compiler_V0hygienic_V0types_V20_V0k137) #f))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[62]; } container;
    self = &container.self;
    _V60_V0vanity_V0compiler_V0hygienic_V0types = self;
    VInitEnv(self, 62, 62, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax___Glist, _V60_V0vanity_V0compiler_V0hygienic_V0types))));
    self->vars[1] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__undot__list, _V60_V0vanity_V0compiler_V0hygienic_V0types))));
    self->vars[2] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__proper__list_Q, _V60_V0vanity_V0compiler_V0hygienic_V0types))));
    self->vars[3] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__length, _V60_V0vanity_V0compiler_V0hygienic_V0types))));
    self->vars[4] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__object___Gdatum, _V60_V0vanity_V0compiler_V0hygienic_V0types))));
    self->vars[5] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0datum___Gsyntax__object, _V60_V0vanity_V0compiler_V0hygienic_V0types))));
    self->vars[6] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__append__map, _V60_V0vanity_V0compiler_V0hygienic_V0types))));
    self->vars[7] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__vector__for__each, _V60_V0vanity_V0compiler_V0hygienic_V0types))));
    self->vars[8] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__vector__map, _V60_V0vanity_V0compiler_V0hygienic_V0types))));
    self->vars[9] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__vector__ref, _V60_V0vanity_V0compiler_V0hygienic_V0types))));
    self->vars[10] = VEncodeBool(false);
    self->vars[11] = VEncodeBool(false);
    self->vars[12] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__vector_Q, _V60_V0vanity_V0compiler_V0hygienic_V0types))));
    self->vars[13] = VEncodeBool(false);
    self->vars[14] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__for__each, _V60_V0vanity_V0compiler_V0hygienic_V0types))));
    self->vars[15] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__map, _V60_V0vanity_V0compiler_V0hygienic_V0types))));
    self->vars[16] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__caddr, _V60_V0vanity_V0compiler_V0hygienic_V0types))));
    self->vars[17] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__cddr, _V60_V0vanity_V0compiler_V0hygienic_V0types))));
    self->vars[18] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__cdar, _V60_V0vanity_V0compiler_V0hygienic_V0types))));
    self->vars[19] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__cadr, _V60_V0vanity_V0compiler_V0hygienic_V0types))));
    self->vars[20] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__caar, _V60_V0vanity_V0compiler_V0hygienic_V0types))));
    self->vars[21] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__cdr, _V60_V0vanity_V0compiler_V0hygienic_V0types))));
    self->vars[22] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__car, _V60_V0vanity_V0compiler_V0hygienic_V0types))));
    self->vars[23] = VEncodeBool(false);
    self->vars[24] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__pair_Q, _V60_V0vanity_V0compiler_V0hygienic_V0types))));
    self->vars[25] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__null_Q, _V60_V0vanity_V0compiler_V0hygienic_V0types))));
    self->vars[26] = VEncodeBool(false);
    self->vars[27] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__unpack, _V60_V0vanity_V0compiler_V0hygienic_V0types))));
    self->vars[28] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0eager__flip__scope, _V60_V0vanity_V0compiler_V0hygienic_V0types))));
    self->vars[29] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0lazy__flip__scope, _V60_V0vanity_V0compiler_V0hygienic_V0types))));
    self->vars[30] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0flip__scope__set, _V60_V0vanity_V0compiler_V0hygienic_V0types))));
    self->vars[31] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__syntax__data, _V60_V0vanity_V0compiler_V0hygienic_V0types))));
    self->vars[32] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0propogate__flips, _V60_V0vanity_V0compiler_V0hygienic_V0types))));
    self->vars[33] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0identifier_Q, _V60_V0vanity_V0compiler_V0hygienic_V0types))));
    self->vars[34] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0set__syntax__scopes_B, _V60_V0vanity_V0compiler_V0hygienic_V0types))));
    self->vars[35] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__syntax__scopes, _V60_V0vanity_V0compiler_V0hygienic_V0types))));
    self->vars[36] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0set__syntax__data_B, _V60_V0vanity_V0compiler_V0hygienic_V0types))));
    self->vars[37] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__syntax__data__impl, _V60_V0vanity_V0compiler_V0hygienic_V0types))));
    self->vars[38] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0make__syntax, _V60_V0vanity_V0compiler_V0hygienic_V0types))));
    self->vars[39] = VEncodeBool(false);
    self->vars[40] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V10_Dsyntax_Q_D4, _V60_V0vanity_V0compiler_V0hygienic_V0types))));
    self->vars[41] = VEncodeBool(false);
    self->vars[42] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0expansion__timed__out_Q, _V60_V0vanity_V0compiler_V0hygienic_V0types))));
    self->vars[43] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0set__expansion__deadline_B, _V60_V0vanity_V0compiler_V0hygienic_V0types))));
    self->vars[44] = VEncodeBool(false);
    self->vars[45] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0scope__set___Gstring, _V60_V0vanity_V0compiler_V0hygienic_V0types))));
    self->vars[46] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0scope___Gstring, _V60_V0vanity_V0compiler_V0hygienic_V0types))));
    self->vars[47] = VEncodeBool(false);
    self->vars[48] = VEncodeBool(false);
    self->vars[49] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0make__scope, _V60_V0vanity_V0compiler_V0hygienic_V0types))));
    self->vars[50] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__scope__provenance, _V60_V0vanity_V0compiler_V0hygienic_V0types))));
    self->vars[51] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__scope__serial, _V60_V0vanity_V0compiler_V0hygienic_V0types))));
    self->vars[52] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0set__scope__bindings_B, _V60_V0vanity_V0compiler_V0hygienic_V0types))));
    self->vars[53] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__scope__bindings, _V60_V0vanity_V0compiler_V0hygienic_V0types))));
    self->vars[54] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0make__scope__impl, _V60_V0vanity_V0compiler_V0hygienic_V0types))));
    self->vars[55] = VEncodeBool(false);
    self->vars[56] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V10_Dscope_Q_D2, _V60_V0vanity_V0compiler_V0hygienic_V0types))));
    self->vars[57] = VEncodeBool(false);
    self->vars[58] = VEncodeNumber(0.0);
    self->vars[59] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0all__registered__scopes, _V60_V0vanity_V0compiler_V0hygienic_V0types))));
    self->vars[60] = VEncodeBool(false);
    self->vars[61] = VEncodeBool(false);
    VRegisterStaticEnv("_V0vanity_V0compiler_V0hygienic_V0types_V20", &_V60_V0vanity_V0compiler_V0hygienic_V0types);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[11]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0hygienic_V0types_V20_V0k137, self)))),
      VEncodeBool(false));
    }
}
static void _V0vanity_V0compiler_V0hygienic_V0types_V20_V0k3(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0hygienic_V0types_V20_V0k3, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((##intrinsic "VMultiImport") (close _V0vanity_V0compiler_V0hygienic_V0types_V20_V0lambda2) (##string ##.string.732) (bruijn ##.%x.535 0 0) 'append 'vector-for-each 'map 'vector-map 'any 'list? 'memq 'lset-xor 'sprintf 'string-append 'cadr 'make-parameter 'list)
    VCallFuncWithGC(runtime, (VFunc)VMultiImport, 16,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0hygienic_V0types_V20_V0lambda2, self)))),
      VEncodePointer(&_V10_Dstring_D732.sym, VPOINTER_OTHER),
      _var0,
      _V0append,
      _V0vector__for__each,
      _V0map,
      _V0vector__map,
      _V0any,
      _V0list_Q,
      _V0memq,
      _V0lset__xor,
      _V0sprintf,
      _V0string__append,
      _V0cadr,
      _V0make__parameter,
      _V0list);
}
static void _V0vanity_V0compiler_V0hygienic_V0types_V20_V0k2(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0hygienic_V0types_V20_V0k2, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.vector (close _V0vanity_V0compiler_V0hygienic_V0types_V20_V0k3) (bruijn ##.%x.536 1 0) (bruijn ##.%x.537 0 0))
    VCallFuncWithGC(runtime, (VFunc)VCreateVector, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0hygienic_V0types_V20_V0k3, self)))),
      statics->vars[0],
      _var0);
}
static void _V0vanity_V0compiler_V0hygienic_V0types_V20_V0k1(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0hygienic_V0types_V20_V0k1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0hygienic_V0types_V20_V0k2) (##string ##.string.733))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0hygienic_V0types_V20_V0k2, self)))),
      VEncodePointer(&_V10_Dstring_D733.sym, VPOINTER_OTHER));
}
static void _V0vanity_V0compiler_V0hygienic_V0types_V20_V0lambda1(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0hygienic_V0types_V20_V0lambda1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0hygienic_V0types_V20_V0k1) (##string ##.string.734))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0hygienic_V0types_V20_V0k1, self)))),
      VEncodePointer(&_V10_Dstring_D734.sym, VPOINTER_OTHER));
}
VFunc _V0vanity_V0compiler_V0hygienic_V0types_V20 = (VFunc)_V0vanity_V0compiler_V0hygienic_V0types_V20_V0lambda1;
static __attribute__((constructor)) void VDllMain1() {
  _V0list = VEncodePointer(VInternSymbol(-1594870040, &_VW_V0list.sym), VPOINTER_OTHER);
  _V0make__parameter = VEncodePointer(VInternSymbol(57061984, &_VW_V0make__parameter.sym), VPOINTER_OTHER);
  _V0cadr = VEncodePointer(VInternSymbol(137264287, &_VW_V0cadr.sym), VPOINTER_OTHER);
  _V0string__append = VEncodePointer(VInternSymbol(1893973929, &_VW_V0string__append.sym), VPOINTER_OTHER);
  _V0sprintf = VEncodePointer(VInternSymbol(1933004612, &_VW_V0sprintf.sym), VPOINTER_OTHER);
  _V0lset__xor = VEncodePointer(VInternSymbol(1623232448, &_VW_V0lset__xor.sym), VPOINTER_OTHER);
  _V0memq = VEncodePointer(VInternSymbol(-1626778086, &_VW_V0memq.sym), VPOINTER_OTHER);
  _V0list_Q = VEncodePointer(VInternSymbol(746894953, &_VW_V0list_Q.sym), VPOINTER_OTHER);
  _V0any = VEncodePointer(VInternSymbol(1273566383, &_VW_V0any.sym), VPOINTER_OTHER);
  _V0vector__map = VEncodePointer(VInternSymbol(848807183, &_VW_V0vector__map.sym), VPOINTER_OTHER);
  _V0map = VEncodePointer(VInternSymbol(-1940887657, &_VW_V0map.sym), VPOINTER_OTHER);
  _V0vector__for__each = VEncodePointer(VInternSymbol(2135063694, &_VW_V0vector__for__each.sym), VPOINTER_OTHER);
  _V0append = VEncodePointer(VInternSymbol(-700471979, &_VW_V0append.sym), VPOINTER_OTHER);
  _V0global = VEncodePointer(VInternSymbol(1332800798, &_VW_V0global.sym), VPOINTER_OTHER);
  _V0program = VEncodePointer(VInternSymbol(1741443655, &_VW_V0program.sym), VPOINTER_OTHER);
  _V0syntax___Glist = VEncodePointer(VInternSymbol(-1472244376, &_VW_V0syntax___Glist.sym), VPOINTER_OTHER);
  _V0syntax__undot__list = VEncodePointer(VInternSymbol(212799455, &_VW_V0syntax__undot__list.sym), VPOINTER_OTHER);
  _V0syntax__proper__list_Q = VEncodePointer(VInternSymbol(375492284, &_VW_V0syntax__proper__list_Q.sym), VPOINTER_OTHER);
  _V0syntax__length = VEncodePointer(VInternSymbol(-1802700003, &_VW_V0syntax__length.sym), VPOINTER_OTHER);
  _V0datum___Gsyntax__object = VEncodePointer(VInternSymbol(-180606471, &_VW_V0datum___Gsyntax__object.sym), VPOINTER_OTHER);
  _V0syntax__object___Gdatum = VEncodePointer(VInternSymbol(-925486414, &_VW_V0syntax__object___Gdatum.sym), VPOINTER_OTHER);
  _V0flip__scope = VEncodePointer(VInternSymbol(-1341584941, &_VW_V0flip__scope.sym), VPOINTER_OTHER);
  _V0eager__flip__scope = VEncodePointer(VInternSymbol(-1453646135, &_VW_V0eager__flip__scope.sym), VPOINTER_OTHER);
  _V0lazy__flip__scope = VEncodePointer(VInternSymbol(24378627, &_VW_V0lazy__flip__scope.sym), VPOINTER_OTHER);
  _V0syntax__vector__for__each = VEncodePointer(VInternSymbol(1789865652, &_VW_V0syntax__vector__for__each.sym), VPOINTER_OTHER);
  _V0syntax__vector__map = VEncodePointer(VInternSymbol(-1500491324, &_VW_V0syntax__vector__map.sym), VPOINTER_OTHER);
  _V0syntax__vector__ref = VEncodePointer(VInternSymbol(1415884220, &_VW_V0syntax__vector__ref.sym), VPOINTER_OTHER);
  _V0syntax__make__vector = VEncodePointer(VInternSymbol(1757627800, &_VW_V0syntax__make__vector.sym), VPOINTER_OTHER);
  _V0syntax__vector = VEncodePointer(VInternSymbol(2095870854, &_VW_V0syntax__vector.sym), VPOINTER_OTHER);
  _V0syntax__vector_Q = VEncodePointer(VInternSymbol(-1354385234, &_VW_V0syntax__vector_Q.sym), VPOINTER_OTHER);
  _V0syntax__caddr = VEncodePointer(VInternSymbol(43375589, &_VW_V0syntax__caddr.sym), VPOINTER_OTHER);
  _V0syntax__list = VEncodePointer(VInternSymbol(-605002697, &_VW_V0syntax__list.sym), VPOINTER_OTHER);
  _V0syntax__for__each = VEncodePointer(VInternSymbol(-248708222, &_VW_V0syntax__for__each.sym), VPOINTER_OTHER);
  _V0syntax__append__map = VEncodePointer(VInternSymbol(1549628134, &_VW_V0syntax__append__map.sym), VPOINTER_OTHER);
  _V0syntax__map = VEncodePointer(VInternSymbol(-1912397961, &_VW_V0syntax__map.sym), VPOINTER_OTHER);
  _V0syntax__cddr = VEncodePointer(VInternSymbol(1072813644, &_VW_V0syntax__cddr.sym), VPOINTER_OTHER);
  _V0syntax__cdar = VEncodePointer(VInternSymbol(528412582, &_VW_V0syntax__cdar.sym), VPOINTER_OTHER);
  _V0syntax__cadr = VEncodePointer(VInternSymbol(-176119071, &_VW_V0syntax__cadr.sym), VPOINTER_OTHER);
  _V0syntax__caar = VEncodePointer(VInternSymbol(-1227349665, &_VW_V0syntax__caar.sym), VPOINTER_OTHER);
  _V0syntax__cdr = VEncodePointer(VInternSymbol(1215523264, &_VW_V0syntax__cdr.sym), VPOINTER_OTHER);
  _V0syntax__car = VEncodePointer(VInternSymbol(1390011611, &_VW_V0syntax__car.sym), VPOINTER_OTHER);
  _V0syntax__cons = VEncodePointer(VInternSymbol(-713299037, &_VW_V0syntax__cons.sym), VPOINTER_OTHER);
  _V0syntax__pair_Q = VEncodePointer(VInternSymbol(-1139867809, &_VW_V0syntax__pair_Q.sym), VPOINTER_OTHER);
  _V0syntax__null_Q = VEncodePointer(VInternSymbol(-1668028446, &_VW_V0syntax__null_Q.sym), VPOINTER_OTHER);
  _V0get__syntax__data = VEncodePointer(VInternSymbol(-1271181522, &_VW_V0get__syntax__data.sym), VPOINTER_OTHER);
  _V0syntax_Q = VEncodePointer(VInternSymbol(563065347, &_VW_V0syntax_Q.sym), VPOINTER_OTHER);
  _V0make__syntax = VEncodePointer(VInternSymbol(1292393424, &_VW_V0make__syntax.sym), VPOINTER_OTHER);
  _V0identifier_Q = VEncodePointer(VInternSymbol(1823737055, &_VW_V0identifier_Q.sym), VPOINTER_OTHER);
  _V0expansion__timed__out_Q = VEncodePointer(VInternSymbol(281159716, &_VW_V0expansion__timed__out_Q.sym), VPOINTER_OTHER);
  _V0set__expansion__deadline_B = VEncodePointer(VInternSymbol(-52463240, &_VW_V0set__expansion__deadline_B.sym), VPOINTER_OTHER);
  _V0all__registered__scopes = VEncodePointer(VInternSymbol(1692955432, &_VW_V0all__registered__scopes.sym), VPOINTER_OTHER);
  _V0explain__scopes_Q = VEncodePointer(VInternSymbol(-133964656, &_VW_V0explain__scopes_Q.sym), VPOINTER_OTHER);
  _V0scope__set___Gstring = VEncodePointer(VInternSymbol(648674922, &_VW_V0scope__set___Gstring.sym), VPOINTER_OTHER);
  _V0scope___Gstring = VEncodePointer(VInternSymbol(1835880148, &_VW_V0scope___Gstring.sym), VPOINTER_OTHER);
  _V0toplevel__scope = VEncodePointer(VInternSymbol(-729565561, &_VW_V0toplevel__scope.sym), VPOINTER_OTHER);
  _V0global__scope = VEncodePointer(VInternSymbol(1381586664, &_VW_V0global__scope.sym), VPOINTER_OTHER);
  _V0scope_E_Q = VEncodePointer(VInternSymbol(-1451629464, &_VW_V0scope_E_Q.sym), VPOINTER_OTHER);
  _V0scope_Q = VEncodePointer(VInternSymbol(1860486257, &_VW_V0scope_Q.sym), VPOINTER_OTHER);
  _V0make__scope = VEncodePointer(VInternSymbol(1685021352, &_VW_V0make__scope.sym), VPOINTER_OTHER);
  _V0flips = VEncodePointer(VInternSymbol(-1883505206, &_VW_V0flips.sym), VPOINTER_OTHER);
  _V0data = VEncodePointer(VInternSymbol(1429020067, &_VW_V0data.sym), VPOINTER_OTHER);
  _V0syntax = VEncodePointer(VInternSymbol(-1845358186, &_VW_V0syntax.sym), VPOINTER_OTHER);
  _V0provenance = VEncodePointer(VInternSymbol(1109709474, &_VW_V0provenance.sym), VPOINTER_OTHER);
  _V0serial = VEncodePointer(VInternSymbol(-250144057, &_VW_V0serial.sym), VPOINTER_OTHER);
  _V0bindings = VEncodePointer(VInternSymbol(-448679587, &_VW_V0bindings.sym), VPOINTER_OTHER);
  _V0get__scope__bindings = VEncodePointer(VInternSymbol(706853436, &_VW_V0get__scope__bindings.sym), VPOINTER_OTHER);
  _V0set__scope__bindings_B = VEncodePointer(VInternSymbol(-32175007, &_VW_V0set__scope__bindings_B.sym), VPOINTER_OTHER);
  _V0get__scope__serial = VEncodePointer(VInternSymbol(-1055286587, &_VW_V0get__scope__serial.sym), VPOINTER_OTHER);
  _V0get__scope__provenance = VEncodePointer(VInternSymbol(-1770192015, &_VW_V0get__scope__provenance.sym), VPOINTER_OTHER);
  _V0scope = VEncodePointer(VInternSymbol(70154970, &_VW_V0scope.sym), VPOINTER_OTHER);
  _V0use = VEncodePointer(VInternSymbol(-1419439163, &_VW_V0use.sym), VPOINTER_OTHER);
  _V0intro = VEncodePointer(VInternSymbol(-1142351208, &_VW_V0intro.sym), VPOINTER_OTHER);
  _V0get__syntax__data__impl = VEncodePointer(VInternSymbol(-1401117803, &_VW_V0get__syntax__data__impl.sym), VPOINTER_OTHER);
  _V0set__syntax__data_B = VEncodePointer(VInternSymbol(1171015389, &_VW_V0set__syntax__data_B.sym), VPOINTER_OTHER);
  _V0get__syntax__scopes = VEncodePointer(VInternSymbol(1433535723, &_VW_V0get__syntax__scopes.sym), VPOINTER_OTHER);
  _V0error = VEncodePointer(VInternSymbol(147890691, &_VW_V0error.sym), VPOINTER_OTHER);
  _V0set__syntax__scopes_B = VEncodePointer(VInternSymbol(-1743293188, &_VW_V0set__syntax__scopes_B.sym), VPOINTER_OTHER);
  _V40_V10vcore_Dcons = VEncodePointer(VLookupConstant("_V40_V10vcore_Dcons", &_VW_V40_V10vcore_Dcons), VPOINTER_CLOSURE);
  _V40_V10vcore_Dvector = VEncodePointer(VLookupConstant("_V40_V10vcore_Dvector", &_VW_V40_V10vcore_Dvector), VPOINTER_CLOSURE);
  _V40_V10vcore_Dmake__vector = VEncodePointer(VLookupConstant("_V40_V10vcore_Dmake__vector", &_VW_V40_V10vcore_Dmake__vector), VPOINTER_CLOSURE);
  _V10_Dpair_D731.first = _V0data;
  _V10_Dpair_D731.rest = VEncodePointer(&_V10_Dpair_D730, VPOINTER_PAIR);
  _V10_Dpair_D730.first = _V0flips;
  _V10_Dpair_D730.rest = VNULL;
  _V10_Dpair_D729.first = _V0bindings;
  _V10_Dpair_D729.rest = VEncodePointer(&_V10_Dpair_D728, VPOINTER_PAIR);
  _V10_Dpair_D728.first = _V0serial;
  _V10_Dpair_D728.rest = VEncodePointer(&_V10_Dpair_D727, VPOINTER_PAIR);
  _V10_Dpair_D727.first = _V0provenance;
  _V10_Dpair_D727.rest = VNULL;
  _V40_V10vcore_Deq_Q = VEncodePointer(VLookupConstant("_V40_V10vcore_Deq_Q", &_VW_V40_V10vcore_Deq_Q), VPOINTER_CLOSURE);
  _V40VMultiImport = VEncodePointer(VLookupConstant("_V40VMultiImport", &_VW_V40VMultiImport), VPOINTER_CLOSURE);
}
