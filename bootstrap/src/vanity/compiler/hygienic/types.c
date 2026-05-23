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

static VPair _V10_Dpair_D377 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D376 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0bindings;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0bindings = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "bindings" };
VWEAK VWORD _V0scope;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0scope = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "scope" };
static VPair _V10_Dpair_D375 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D374 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D373 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0flips;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0flips = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "flips" };
VWEAK VWORD _V0data;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0data = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "data" };
VWEAK VWORD _V0syntax;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0syntax = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "syntax" };
VWEAK VWORD _V40_V10vcore_Dcons;
VWEAK VClosure _VW_V40_V10vcore_Dcons = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VCons2, NULL };
VWEAK VWORD _V40_V10vcore_Dvector;
VWEAK VClosure _VW_V40_V10vcore_Dvector = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VCreateVector, NULL };
VWEAK VWORD _V40_V10vcore_Dmake__vector;
VWEAK VClosure _VW_V40_V10vcore_Dmake__vector = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VMakeVector, NULL };
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
VWEAK VWORD _V0global__scope;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V0global__scope = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "global-scope" };
VWEAK VWORD _V0scope_E_Q;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0scope_E_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "scope=\?" };
VWEAK VWORD _V0scope_Q;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0scope_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "scope\?" };
VWEAK VWORD _V0make__scope;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V0make__scope = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "make-scope" };
VWEAK VWORD _V0get__scope__bindings;VWEAK struct { VBlob sym; char bytes[19]; } _VW_V0get__scope__bindings = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 19 }, "get-scope-bindings" };
VWEAK VWORD _V0set__scope__bindings_B;VWEAK struct { VBlob sym; char bytes[20]; } _VW_V0set__scope__bindings_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 20 }, "set-scope-bindings!" };
VWEAK VWORD _V0get__syntax__data__impl;VWEAK struct { VBlob sym; char bytes[21]; } _VW_V0get__syntax__data__impl = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 21 }, "get-syntax-data-impl" };
VWEAK VWORD _V0set__syntax__data_B;VWEAK struct { VBlob sym; char bytes[17]; } _VW_V0set__syntax__data_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 17 }, "set-syntax-data!" };
VWEAK VWORD _V0get__syntax__scopes;VWEAK struct { VBlob sym; char bytes[18]; } _VW_V0get__syntax__scopes = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 18 }, "get-syntax-scopes" };
VWEAK VWORD _V0set__syntax__scopes_B;VWEAK struct { VBlob sym; char bytes[19]; } _VW_V0set__syntax__scopes_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 19 }, "set-syntax-scopes!" };
static struct { VBlob sym; char bytes[31]; } _V10_Dstring_D372 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 31 }, "not a record of the right type" };
VWEAK VWORD _V0error;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0error = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "error" };
VWEAK VWORD _V40_V10vcore_Deq_Q;
VWEAK VClosure _VW_V40_V10vcore_Deq_Q = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VEq2, NULL };
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D371 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "_V0vanity_V0core_V20" };
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D370 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "_V0vanity_V0list_V20" };
VWEAK VWORD _V0list;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0list = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "list" };
VWEAK VWORD _V0make__parameter;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V0make__parameter = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "make-parameter" };
VWEAK VWORD _V0lset__xor;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0lset__xor = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "lset-xor" };
VWEAK VWORD _V0memq;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0memq = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "memq" };
VWEAK VWORD _V0list_Q;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0list_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "list\?" };
VWEAK VWORD _V0any;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0any = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "any" };
VWEAK VWORD _V0vector__map;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V0vector__map = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "vector-map" };
VWEAK VWORD _V0map;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0map = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "map" };
VWEAK VWORD _V0vector__for__each;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V0vector__for__each = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "vector-for-each" };
static struct { VBlob sym; char bytes[44]; } _V10_Dstring_D369 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 44 }, "_V0vanity_V0compiler_V0hygienic_V0types_V20" };
VWEAK VWORD _V40VMultiImport;
VWEAK VClosure _VW_V40VMultiImport = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VMultiImport, NULL };
static __attribute__((constructor)) void VDllMain1() {
  _V0bindings = VEncodePointer(VInternSymbol(-448679587, &_VW_V0bindings.sym), VPOINTER_OTHER);
  _V0scope = VEncodePointer(VInternSymbol(70154970, &_VW_V0scope.sym), VPOINTER_OTHER);
  _V0flips = VEncodePointer(VInternSymbol(-1883505206, &_VW_V0flips.sym), VPOINTER_OTHER);
  _V0data = VEncodePointer(VInternSymbol(1429020067, &_VW_V0data.sym), VPOINTER_OTHER);
  _V0syntax = VEncodePointer(VInternSymbol(-1845358186, &_VW_V0syntax.sym), VPOINTER_OTHER);
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
  _V0global__scope = VEncodePointer(VInternSymbol(1381586664, &_VW_V0global__scope.sym), VPOINTER_OTHER);
  _V0scope_E_Q = VEncodePointer(VInternSymbol(-1451629464, &_VW_V0scope_E_Q.sym), VPOINTER_OTHER);
  _V0scope_Q = VEncodePointer(VInternSymbol(1860486257, &_VW_V0scope_Q.sym), VPOINTER_OTHER);
  _V0make__scope = VEncodePointer(VInternSymbol(1685021352, &_VW_V0make__scope.sym), VPOINTER_OTHER);
  _V0get__scope__bindings = VEncodePointer(VInternSymbol(706853436, &_VW_V0get__scope__bindings.sym), VPOINTER_OTHER);
  _V0set__scope__bindings_B = VEncodePointer(VInternSymbol(-32175007, &_VW_V0set__scope__bindings_B.sym), VPOINTER_OTHER);
  _V0get__syntax__data__impl = VEncodePointer(VInternSymbol(-1401117803, &_VW_V0get__syntax__data__impl.sym), VPOINTER_OTHER);
  _V0set__syntax__data_B = VEncodePointer(VInternSymbol(1171015389, &_VW_V0set__syntax__data_B.sym), VPOINTER_OTHER);
  _V0get__syntax__scopes = VEncodePointer(VInternSymbol(1433535723, &_VW_V0get__syntax__scopes.sym), VPOINTER_OTHER);
  _V0set__syntax__scopes_B = VEncodePointer(VInternSymbol(-1743293188, &_VW_V0set__syntax__scopes_B.sym), VPOINTER_OTHER);
  _V0error = VEncodePointer(VInternSymbol(147890691, &_VW_V0error.sym), VPOINTER_OTHER);
  _V0list = VEncodePointer(VInternSymbol(-1594870040, &_VW_V0list.sym), VPOINTER_OTHER);
  _V0make__parameter = VEncodePointer(VInternSymbol(57061984, &_VW_V0make__parameter.sym), VPOINTER_OTHER);
  _V0lset__xor = VEncodePointer(VInternSymbol(1623232448, &_VW_V0lset__xor.sym), VPOINTER_OTHER);
  _V0memq = VEncodePointer(VInternSymbol(-1626778086, &_VW_V0memq.sym), VPOINTER_OTHER);
  _V0list_Q = VEncodePointer(VInternSymbol(746894953, &_VW_V0list_Q.sym), VPOINTER_OTHER);
  _V0any = VEncodePointer(VInternSymbol(1273566383, &_VW_V0any.sym), VPOINTER_OTHER);
  _V0vector__map = VEncodePointer(VInternSymbol(848807183, &_VW_V0vector__map.sym), VPOINTER_OTHER);
  _V0map = VEncodePointer(VInternSymbol(-1940887657, &_VW_V0map.sym), VPOINTER_OTHER);
  _V0vector__for__each = VEncodePointer(VInternSymbol(2135063694, &_VW_V0vector__for__each.sym), VPOINTER_OTHER);
  _V10_Dpair_D377.first = _V0scope;
  _V10_Dpair_D377.rest = VEncodePointer(&_V10_Dpair_D376, VPOINTER_PAIR);
  _V10_Dpair_D376.first = _V0bindings;
  _V10_Dpair_D376.rest = VNULL;
  _V10_Dpair_D375.first = _V0syntax;
  _V10_Dpair_D375.rest = VEncodePointer(&_V10_Dpair_D374, VPOINTER_PAIR);
  _V10_Dpair_D374.first = _V0data;
  _V10_Dpair_D374.rest = VEncodePointer(&_V10_Dpair_D373, VPOINTER_PAIR);
  _V10_Dpair_D373.first = _V0flips;
  _V10_Dpair_D373.rest = VNULL;
  _V40_V10vcore_Dcons = VEncodePointer(VLookupConstant("_V40_V10vcore_Dcons", &_VW_V40_V10vcore_Dcons), VPOINTER_CLOSURE);
  _V40_V10vcore_Dvector = VEncodePointer(VLookupConstant("_V40_V10vcore_Dvector", &_VW_V40_V10vcore_Dvector), VPOINTER_CLOSURE);
  _V40_V10vcore_Dmake__vector = VEncodePointer(VLookupConstant("_V40_V10vcore_Dmake__vector", &_VW_V40_V10vcore_Dmake__vector), VPOINTER_CLOSURE);
  _V40_V10vcore_Deq_Q = VEncodePointer(VLookupConstant("_V40_V10vcore_Deq_Q", &_VW_V40_V10vcore_Deq_Q), VPOINTER_CLOSURE);
  _V40VMultiImport = VEncodePointer(VLookupConstant("_V40VMultiImport", &_VW_V40VMultiImport), VPOINTER_CLOSURE);
}
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0types_V10_Dscope_Q_D1, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0types_V0make__scope__impl, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__scope__bindings, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0types_V0set__scope__bindings_B, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0types_V0make__scope, _var0);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0types_V10_Dsyntax_Q_D3, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0types_V0make__syntax, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__syntax__data__impl, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0types_V0set__syntax__data_B, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__syntax__scopes, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0types_V0set__syntax__scopes_B, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0types_V0identifier_Q, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0types_V0propogate__flips, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__syntax__data, _var0, _var1);
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
V_DECLARE_FUNC_MIN(_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__map);
V_DECLARE_FUNC_MIN(_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__for__each);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__vector_Q, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__vector__ref, _var0, _var1, _var2);
V_DECLARE_FUNC_MIN(_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__vector__map, _var0, _var1);
V_DECLARE_FUNC_MIN(_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__vector__for__each, _var0, _var1);
static void _V0vanity_V0compiler_V0hygienic_V0types_V20_V0k3(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0hygienic_V0types_V20_V0k3" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0hygienic_V0types_V20_V0k3, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((##intrinsic "VMultiImport") (bruijn ##.k.132 3 0) (##string ##.string.369) (bruijn ##.x.133 0 0) 'vector-for-each 'map 'vector-map 'any 'list? 'memq 'lset-xor 'make-parameter 'list)
    VCallFuncWithGC(runtime, (VFunc)VMultiImport, 12,
      statics->up->up->vars[0],
      VEncodePointer(&_V10_Dstring_D369.sym, VPOINTER_OTHER),
      _var0,
      _V0vector__for__each,
      _V0map,
      _V0vector__map,
      _V0any,
      _V0list_Q,
      _V0memq,
      _V0lset__xor,
      _V0make__parameter,
      _V0list);
}
static void _V0vanity_V0compiler_V0hygienic_V0types_V20_V0k2(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0hygienic_V0types_V20_V0k2" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0hygienic_V0types_V20_V0k2, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.vector (close _V0vanity_V0compiler_V0hygienic_V0types_V20_V0k3) (bruijn ##.x.134 1 0) (bruijn ##.x.135 0 0))
    VCallFuncWithGC(runtime, (VFunc)VCreateVector, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0hygienic_V0types_V20_V0k3, self)))),
      statics->vars[0],
      _var0);
}
static void _V0vanity_V0compiler_V0hygienic_V0types_V20_V0k1(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0hygienic_V0types_V20_V0k1" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0hygienic_V0types_V20_V0k1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0hygienic_V0types_V20_V0k2) (##string ##.string.370))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0hygienic_V0types_V20_V0k2, self)))),
      VEncodePointer(&_V10_Dstring_D370.sym, VPOINTER_OTHER));
}
static void _V0vanity_V0compiler_V0hygienic_V0types_V20_V0lambda2(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0hygienic_V0types_V20_V0lambda2" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0hygienic_V0types_V20_V0lambda2, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0hygienic_V0types_V20_V0k1) (##string ##.string.371))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0hygienic_V0types_V20_V0k1, self)))),
      VEncodePointer(&_V10_Dstring_D371.sym, VPOINTER_OTHER));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__vector__for__each_V0k4(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__vector__for__each_V0k4" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__vector__for__each_V0k4, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.apply (bruijn ##.k.137 1 0) (bruijn ##.vector-for-each.4 3 1) (bruijn ##.f.69 1 1) (bruijn ##.x.138 0 0))
    VCallFuncWithGC(runtime, (VFunc)VApply2, 4,
      statics->vars[0],
      statics->up->up->vars[1],
      statics->vars[1],
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__vector__for__each(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, ...) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__vector__for__each" };
 VRecordCall2(runtime, &dbg);
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
  // ((bruijn ##.map.5 2 2) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__vector__for__each_V0k4) (bruijn ##.syntax-unpack.46 1 20) (bruijn ##.args.70 0 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[2]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__vector__for__each_V0k4, self)))),
      statics->vars[20],
      _varargs);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__vector__map_V0k5(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__vector__map_V0k5" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__vector__map_V0k5, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.apply (bruijn ##.k.139 1 0) (bruijn ##.vector-map.6 3 3) (bruijn ##.f.71 1 1) (bruijn ##.x.140 0 0))
    VCallFuncWithGC(runtime, (VFunc)VApply2, 4,
      statics->vars[0],
      statics->up->up->vars[3],
      statics->vars[1],
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__vector__map(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, ...) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__vector__map" };
 VRecordCall2(runtime, &dbg);
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
  // ((bruijn ##.map.5 2 2) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__vector__map_V0k5) (bruijn ##.syntax-unpack.46 1 20) (bruijn ##.args.72 0 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[2]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__vector__map_V0k5, self)))),
      statics->vars[20],
      _varargs);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__vector__ref_V0k6(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__vector__ref_V0k6" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__vector__ref_V0k6, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.355) ((##vcore.vector-ref (bruijn ##.x.142 1 0) (bruijn ##.i.74 2 2))) ((bruijn ##.k.141 2 0) (bruijn ##.reg.355 0 0)))
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
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__vector__ref" };
 VRecordCall2(runtime, &dbg);
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
  // ((bruijn ##.syntax-unpack.46 1 20) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__vector__ref_V0k6) (bruijn ##.v.73 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[20]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__vector__ref_V0k6, self)))),
      _var1);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__vector_Q_V0k8(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__vector_Q_V0k8" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__vector_Q_V0k8, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.357) ((##vcore.vector? (bruijn ##.x.146 1 0))) ((bruijn ##.k.143 4 0) (bruijn ##.reg.357 0 0)))
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
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__vector_Q_V0k7(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__vector_Q_V0k7" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__vector_Q_V0k7, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.145 0 0) ((bruijn ##.get-syntax-data-impl.56 3 30) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__vector_Q_V0k8) (bruijn ##.x.75 2 1)) ((bruijn ##.k.143 2 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[30]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__vector_Q_V0k8, self)))),
      statics->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__vector_Q(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__vector_Q" };
 VRecordCall2(runtime, &dbg);
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
  // (basic-block 1 1 (##.reg.356) ((##vcore.vector? (bruijn ##.x.75 1 1))) (if (bruijn ##.reg.356 0 0) ((bruijn ##.k.143 1 0) (bruijn ##.reg.356 0 0)) ((bruijn ##.syntax?.58 2 32) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__vector_Q_V0k7) (bruijn ##.x.75 1 1))))
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
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[32]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__vector_Q_V0k7, self)))),
      statics->vars[1]);
}
    }
}
static void _V10_Dsyntax__for__each_D33_V0k12(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dsyntax__for__each_D33_V0k12" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dsyntax__for__each_D33_V0k12, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.syntax-for-each.33 4 7) (bruijn ##.k.147 3 0) (bruijn ##.f.76 3 1) (bruijn ##.x.149 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[7]), 3,
      statics->up->up->vars[0],
      statics->up->up->vars[1],
      _var0);
}
static void _V10_Dsyntax__for__each_D33_V0k11(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.syntax-cdr.40 3 14) (close _V10_Dsyntax__for__each_D33_V0k12) (bruijn ##.xs.77 2 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[14]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dsyntax__for__each_D33_V0k12, self)))),
      statics->up->vars[2]);
}
static void _V10_Dsyntax__for__each_D33_V0k10(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dsyntax__for__each_D33_V0k10" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dsyntax__for__each_D33_V0k10, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.f.76 2 1) (close _V10_Dsyntax__for__each_D33_V0k11) (bruijn ##.x.150 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[1]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dsyntax__for__each_D33_V0k11, self)))),
      _var0);
}
static void _V10_Dsyntax__for__each_D33_V0k9(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dsyntax__for__each_D33_V0k9" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dsyntax__for__each_D33_V0k9, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.148 0 0) ((bruijn ##.k.147 1 0) #void) ((bruijn ##.syntax-car.41 2 15) (close _V10_Dsyntax__for__each_D33_V0k10) (bruijn ##.xs.77 1 2)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VVOID);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[15]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dsyntax__for__each_D33_V0k10, self)))),
      statics->vars[2]);
}
}
static void _V10_Dloop_D80_V0k16(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D80_V0k16" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D80_V0k16, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.loop.80 4 0) (bruijn ##.k.152 3 0) (bruijn ##.x.154 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 2,
      statics->up->up->vars[0],
      _var0);
}
static void _V10_Dloop_D80_V0k15(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.map.5 6 2) (close _V10_Dloop_D80_V0k16) (bruijn ##.syntax-cdr.40 5 14) (bruijn ##.xss.81 2 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 2)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D80_V0k16, self)))),
      VGetArg(statics, 5-1, 14),
      statics->up->vars[1]);
}
static void _V10_Dloop_D80_V0k14(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D80_V0k14" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D80_V0k14, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.apply (close _V10_Dloop_D80_V0k15) (bruijn ##.f.78 4 1) (bruijn ##.x.155 0 0))
    VCallFuncWithGC(runtime, (VFunc)VApply2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D80_V0k15, self)))),
      statics->up->up->up->vars[1],
      _var0);
}
static void _V10_Dloop_D80_V0k13(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D80_V0k13" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D80_V0k13, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.153 0 0) ((bruijn ##.k.152 1 0) #void) ((bruijn ##.map.5 5 2) (close _V10_Dloop_D80_V0k14) (bruijn ##.syntax-car.41 4 15) (bruijn ##.xss.81 1 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VVOID);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 2)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D80_V0k14, self)))),
      statics->up->up->up->vars[15],
      statics->vars[1]);
}
}
static void _V10_Dloop_D80_V0lambda4(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V10_Dloop_D80_V0lambda4" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D80_V0lambda4, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.any.7 4 4) (close _V10_Dloop_D80_V0k13) (bruijn ##.syntax-null?.44 3 18) (bruijn ##.xss.81 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[4]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D80_V0k13, self)))),
      statics->up->up->vars[18],
      _var1);
}
__attribute__((used)) static void _V20CaseError__V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__for__each(VRuntime * runtime, VEnv * statics, int argc, ...) {
 // ("_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__for__each" #t (3 ((bruijn ##.syntax-null?.44 1 18) (close _V10_Dsyntax__for__each_D33_V0k9) (bruijn ##.xs.77 0 2))) (2 + (letrec 1 ((close _V10_Dloop_D80_V0lambda4)) ((bruijn ##.loop.80 0 0) (bruijn ##.k.151 1 0) (bruijn ##.xss.79 1 2)))))
 VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__for__each, got ~D~N"
 "-- expected 3~N"
 "-- expected 2 or more~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__for__each(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V20Case0__V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__for__each" };
 VRecordCall2(runtime, &dbg);
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((bruijn ##.syntax-null?.44 1 18) (close _V10_Dsyntax__for__each_D33_V0k9) (bruijn ##.xs.77 0 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[18]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dsyntax__for__each_D33_V0k9, self)))),
      _var2);
}
__attribute__((used)) static void _V20Case1__V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__for__each(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, ...) {
 static VDebugInfo dbg = { "_V20Case1__V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__for__each" };
 VRecordCall2(runtime, &dbg);
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 2, argc, _var1);
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _varargs;
  // (letrec 1 ((close _V10_Dloop_D80_V0lambda4)) ((bruijn ##.loop.80 0 0) (bruijn ##.k.151 1 0) (bruijn ##.xss.79 1 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D80_V0lambda4, self))));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, self->vars[0]), 2,
      statics->vars[0],
      statics->vars[2]);
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
static void _V10_Dloop_D84_V0k21(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D84_V0k21" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D84_V0k21, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.157 5 0) (##inline ##vcore.cons (bruijn ##.x.159 2 0) (bruijn ##.x.160 0 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VInlineCons2(runtime,
        statics->up->vars[0],
        _var0));
}
static void _V10_Dloop_D84_V0k20(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D84_V0k20" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D84_V0k20, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.loop.84 5 0) (close _V10_Dloop_D84_V0k21) (bruijn ##.x.161 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D84_V0k21, self)))),
      _var0);
}
static void _V10_Dloop_D84_V0k19(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D84_V0k19" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D84_V0k19, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.syntax-cdr.40 6 14) (close _V10_Dloop_D84_V0k20) (bruijn ##.xs.85 3 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 14)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D84_V0k20, self)))),
      statics->up->up->vars[1]);
}
static void _V10_Dloop_D84_V0k18(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D84_V0k18" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D84_V0k18, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.f.82 4 1) (close _V10_Dloop_D84_V0k19) (bruijn ##.x.162 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[1]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D84_V0k19, self)))),
      _var0);
}
static void _V10_Dloop_D84_V0k17(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D84_V0k17" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D84_V0k17, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.158 0 0) ((bruijn ##.k.157 1 0) '()) ((bruijn ##.syntax-car.41 4 15) (close _V10_Dloop_D84_V0k18) (bruijn ##.xs.85 1 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VNULL);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[15]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D84_V0k18, self)))),
      statics->vars[1]);
}
}
static void _V10_Dloop_D84_V0lambda5(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V10_Dloop_D84_V0lambda5" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D84_V0lambda5, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.syntax-null?.44 3 18) (close _V10_Dloop_D84_V0k17) (bruijn ##.xs.85 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[18]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D84_V0k17, self)))),
      _var1);
}
static void _V10_Dloop_D88_V0k26(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D88_V0k26" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D88_V0k26, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.164 5 0) (##inline ##vcore.cons (bruijn ##.x.166 2 0) (bruijn ##.x.167 0 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VInlineCons2(runtime,
        statics->up->vars[0],
        _var0));
}
static void _V10_Dloop_D88_V0k25(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D88_V0k25" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D88_V0k25, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.loop.88 5 0) (close _V10_Dloop_D88_V0k26) (bruijn ##.x.168 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D88_V0k26, self)))),
      _var0);
}
static void _V10_Dloop_D88_V0k24(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D88_V0k24" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D88_V0k24, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.map.5 7 2) (close _V10_Dloop_D88_V0k25) (bruijn ##.syntax-cdr.40 6 14) (bruijn ##.xss.89 3 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 2)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D88_V0k25, self)))),
      VGetArg(statics, 6-1, 14),
      statics->up->up->vars[1]);
}
static void _V10_Dloop_D88_V0k23(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D88_V0k23" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D88_V0k23, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.apply (close _V10_Dloop_D88_V0k24) (bruijn ##.f.86 4 1) (bruijn ##.x.169 0 0))
    VCallFuncWithGC(runtime, (VFunc)VApply2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D88_V0k24, self)))),
      statics->up->up->up->vars[1],
      _var0);
}
static void _V10_Dloop_D88_V0k22(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D88_V0k22" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D88_V0k22, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.165 0 0) ((bruijn ##.k.164 1 0) '()) ((bruijn ##.map.5 5 2) (close _V10_Dloop_D88_V0k23) (bruijn ##.syntax-car.41 4 15) (bruijn ##.xss.89 1 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VNULL);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 2)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D88_V0k23, self)))),
      statics->up->up->up->vars[15],
      statics->vars[1]);
}
}
static void _V10_Dloop_D88_V0lambda6(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V10_Dloop_D88_V0lambda6" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D88_V0lambda6, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.any.7 4 4) (close _V10_Dloop_D88_V0k22) (bruijn ##.syntax-null?.44 3 18) (bruijn ##.xss.89 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[4]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D88_V0k22, self)))),
      statics->up->up->vars[18],
      _var1);
}
__attribute__((used)) static void _V20CaseError__V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__map(VRuntime * runtime, VEnv * statics, int argc, ...) {
 // ("_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__map" #t (3 (letrec 1 ((close _V10_Dloop_D84_V0lambda5)) ((bruijn ##.loop.84 0 0) (bruijn ##.k.156 1 0) (bruijn ##.xs.83 1 2)))) (2 + (letrec 1 ((close _V10_Dloop_D88_V0lambda6)) ((bruijn ##.loop.88 0 0) (bruijn ##.k.163 1 0) (bruijn ##.xss.87 1 2)))))
 VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__map, got ~D~N"
 "-- expected 3~N"
 "-- expected 2 or more~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__map(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V20Case0__V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__map" };
 VRecordCall2(runtime, &dbg);
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (letrec 1 ((close _V10_Dloop_D84_V0lambda5)) ((bruijn ##.loop.84 0 0) (bruijn ##.k.156 1 0) (bruijn ##.xs.83 1 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D84_V0lambda5, self))));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, self->vars[0]), 2,
      statics->vars[0],
      statics->vars[2]);
    }
}
__attribute__((used)) static void _V20Case1__V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__map(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, ...) {
 static VDebugInfo dbg = { "_V20Case1__V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__map" };
 VRecordCall2(runtime, &dbg);
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 2, argc, _var1);
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _varargs;
  // (letrec 1 ((close _V10_Dloop_D88_V0lambda6)) ((bruijn ##.loop.88 0 0) (bruijn ##.k.163 1 0) (bruijn ##.xss.87 1 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D88_V0lambda6, self))));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, self->vars[0]), 2,
      statics->vars[0],
      statics->vars[2]);
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
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__caddr_V0k28(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__caddr_V0k28" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__caddr_V0k28, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.syntax-car.41 3 15) (bruijn ##.k.170 2 0) (bruijn ##.x.171 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[15]), 2,
      statics->up->vars[0],
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__caddr_V0k27(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__caddr_V0k27" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__caddr_V0k27, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.syntax-cdr.40 2 14) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__caddr_V0k28) (bruijn ##.x.172 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[14]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__caddr_V0k28, self)))),
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__caddr(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__caddr" };
 VRecordCall2(runtime, &dbg);
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
  // ((bruijn ##.syntax-cdr.40 1 14) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__caddr_V0k27) (bruijn ##.pair.90 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[14]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__caddr_V0k27, self)))),
      _var1);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__cddr_V0k29(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__cddr_V0k29" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__cddr_V0k29, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.syntax-cdr.40 2 14) (bruijn ##.k.173 1 0) (bruijn ##.x.174 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[14]), 2,
      statics->vars[0],
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__cddr(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__cddr" };
 VRecordCall2(runtime, &dbg);
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
  // ((bruijn ##.syntax-cdr.40 1 14) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__cddr_V0k29) (bruijn ##.pair.91 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[14]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__cddr_V0k29, self)))),
      _var1);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__cdar_V0k30(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__cdar_V0k30" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__cdar_V0k30, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.syntax-cdr.40 2 14) (bruijn ##.k.175 1 0) (bruijn ##.x.176 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[14]), 2,
      statics->vars[0],
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__cdar(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__cdar" };
 VRecordCall2(runtime, &dbg);
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
  // ((bruijn ##.syntax-car.41 1 15) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__cdar_V0k30) (bruijn ##.pair.92 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[15]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__cdar_V0k30, self)))),
      _var1);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__cadr_V0k31(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__cadr_V0k31" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__cadr_V0k31, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.syntax-car.41 2 15) (bruijn ##.k.177 1 0) (bruijn ##.x.178 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[15]), 2,
      statics->vars[0],
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__cadr(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__cadr" };
 VRecordCall2(runtime, &dbg);
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
  // ((bruijn ##.syntax-cdr.40 1 14) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__cadr_V0k31) (bruijn ##.pair.93 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[14]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__cadr_V0k31, self)))),
      _var1);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__caar_V0k32(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__caar_V0k32" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__caar_V0k32, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.syntax-car.41 2 15) (bruijn ##.k.179 1 0) (bruijn ##.x.180 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[15]), 2,
      statics->vars[0],
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__caar(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__caar" };
 VRecordCall2(runtime, &dbg);
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
  // ((bruijn ##.syntax-car.41 1 15) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__caar_V0k32) (bruijn ##.pair.94 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[15]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__caar_V0k32, self)))),
      _var1);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__cdr_V0k33(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__cdr_V0k33" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__cdr_V0k33, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.181 1 0) (##inline ##vcore.cdr (bruijn ##.x.182 0 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VInlineCdr2(runtime,
        _var0));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__cdr(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__cdr" };
 VRecordCall2(runtime, &dbg);
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
  // ((bruijn ##.syntax-unpack.46 1 20) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__cdr_V0k33) (bruijn ##.pair.95 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[20]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__cdr_V0k33, self)))),
      _var1);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__car_V0k34(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__car_V0k34" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__car_V0k34, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.183 1 0) (##inline ##vcore.car (bruijn ##.x.184 0 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VInlineCar2(runtime,
        _var0));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__car(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__car" };
 VRecordCall2(runtime, &dbg);
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
  // ((bruijn ##.syntax-unpack.46 1 20) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__car_V0k34) (bruijn ##.pair.96 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[20]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__car_V0k34, self)))),
      _var1);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__pair_Q_V0k36(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__pair_Q_V0k36" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__pair_Q_V0k36, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.185 2 0) (##inline ##vcore.pair? (bruijn ##.x.188 0 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VInlinePairP2(runtime,
        _var0));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__pair_Q_V0k35(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__pair_Q_V0k35" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__pair_Q_V0k35, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.187 0 0) ((bruijn ##.get-syntax-data-impl.56 2 30) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__pair_Q_V0k36) (bruijn ##.x.97 1 1)) ((bruijn ##.k.185 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[30]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__pair_Q_V0k36, self)))),
      statics->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__pair_Q(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__pair_Q" };
 VRecordCall2(runtime, &dbg);
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
  // (if (##inline ##vcore.pair? (bruijn ##.x.97 0 1)) ((bruijn ##.k.185 0 0) #t) ((bruijn ##.syntax?.58 1 32) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__pair_Q_V0k35) (bruijn ##.x.97 0 1)))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var1))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(true));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[32]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__pair_Q_V0k35, self)))),
      _var1);
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__null_Q_V0k38(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__null_Q_V0k38" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__null_Q_V0k38, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.189 2 0) (##inline ##vcore.null? (bruijn ##.x.192 0 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VInlineNullP2(runtime,
        _var0));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__null_Q_V0k37(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__null_Q_V0k37" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__null_Q_V0k37, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.191 0 0) ((bruijn ##.get-syntax-data-impl.56 2 30) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__null_Q_V0k38) (bruijn ##.x.98 1 1)) ((bruijn ##.k.189 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[30]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__null_Q_V0k38, self)))),
      statics->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__null_Q(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__null_Q" };
 VRecordCall2(runtime, &dbg);
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
  // (if (##inline ##vcore.null? (bruijn ##.x.98 0 1)) ((bruijn ##.k.189 0 0) #t) ((bruijn ##.syntax?.58 1 32) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__null_Q_V0k37) (bruijn ##.x.98 0 1)))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var1))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(true));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[32]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__null_Q_V0k37, self)))),
      _var1);
}
}
static void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__unpack_V0k40(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.get-syntax-data-impl.56 2 30) (bruijn ##.k.193 1 0) (bruijn ##.x.99 1 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[30]), 2,
      statics->vars[0],
      statics->vars[1]);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__unpack_V0k39(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__unpack_V0k39" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__unpack_V0k39, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.194 0 0) ((bruijn ##.propogate-flips.51 2 25) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__unpack_V0k40) (bruijn ##.x.99 1 1)) ((bruijn ##.k.193 1 0) (bruijn ##.x.99 1 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[25]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__unpack_V0k40, self)))),
      statics->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      statics->vars[1]);
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__unpack(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__unpack" };
 VRecordCall2(runtime, &dbg);
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
  // ((bruijn ##.syntax?.58 1 32) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__unpack_V0k39) (bruijn ##.x.99 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[32]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__unpack_V0k39, self)))),
      _var1);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0eager__flip__scope_V0k44(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0eager__flip__scope_V0k44" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0eager__flip__scope_V0k44, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.make-syntax.57 5 31) (bruijn ##.k.195 4 0) (bruijn ##.x.197 2 0) (bruijn ##.x.198 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 31)), 3,
      statics->up->up->up->vars[0],
      statics->up->vars[0],
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0eager__flip__scope_V0k43(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0eager__flip__scope_V0k43" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0eager__flip__scope_V0k43, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.flip-scope-set.49 4 23) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0eager__flip__scope_V0k44) (bruijn ##.x.199 0 0) (bruijn ##.sc.101 3 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[23]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0eager__flip__scope_V0k44, self)))),
      _var0,
      statics->up->up->vars[2]);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0eager__flip__scope_V0k42(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0eager__flip__scope_V0k42" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0eager__flip__scope_V0k42, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.get-syntax-scopes.54 3 28) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0eager__flip__scope_V0k43) (bruijn ##.v.100 2 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[28]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0eager__flip__scope_V0k43, self)))),
      statics->up->vars[1]);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0eager__flip__scope_V0lambda7(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0eager__flip__scope_V0lambda7" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0eager__flip__scope_V0lambda7, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.eager-flip-scope.47 4 21) (bruijn ##.k.201 0 0) (bruijn ##.e.102 0 1) (bruijn ##.sc.101 3 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[21]), 3,
      _var0,
      _var1,
      statics->up->up->vars[2]);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0eager__flip__scope_V0k45(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0eager__flip__scope_V0k45" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0eager__flip__scope_V0k45, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.200 0 0) ((bruijn ##.map.5 4 2) (bruijn ##.k.195 2 0) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0eager__flip__scope_V0lambda7) (bruijn ##.v.100 2 1)) ((bruijn ##.k.195 2 0) (bruijn ##.v.100 2 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[2]), 3,
      statics->up->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0eager__flip__scope_V0lambda7, self)))),
      statics->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      statics->up->vars[1]);
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0eager__flip__scope_V0k41(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0eager__flip__scope_V0k41" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0eager__flip__scope_V0k41, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.196 0 0) ((bruijn ##.get-syntax-data-impl.56 2 30) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0eager__flip__scope_V0k42) (bruijn ##.v.100 1 1)) ((bruijn ##.list?.8 3 5) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0eager__flip__scope_V0k45) (bruijn ##.v.100 1 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[30]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0eager__flip__scope_V0k42, self)))),
      statics->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[5]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0eager__flip__scope_V0k45, self)))),
      statics->vars[1]);
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0eager__flip__scope(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0eager__flip__scope" };
 VRecordCall2(runtime, &dbg);
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
  // ((bruijn ##.identifier?.52 1 26) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0eager__flip__scope_V0k41) (bruijn ##.v.100 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[26]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0eager__flip__scope_V0k41, self)))),
      _var1);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0lazy__flip__scope_V0k49(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0lazy__flip__scope_V0k49" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0lazy__flip__scope_V0k49, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.make-syntax.57 5 31) (bruijn ##.k.202 4 0) (bruijn ##.x.204 2 0) (bruijn ##.x.205 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 31)), 3,
      statics->up->up->up->vars[0],
      statics->up->vars[0],
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0lazy__flip__scope_V0k48(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0lazy__flip__scope_V0k48" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0lazy__flip__scope_V0k48, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.flip-scope-set.49 4 23) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0lazy__flip__scope_V0k49) (bruijn ##.x.206 0 0) (bruijn ##.x.104 3 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[23]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0lazy__flip__scope_V0k49, self)))),
      _var0,
      statics->up->up->vars[2]);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0lazy__flip__scope_V0k47(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0lazy__flip__scope_V0k47" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0lazy__flip__scope_V0k47, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.get-syntax-scopes.54 3 28) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0lazy__flip__scope_V0k48) (bruijn ##.stx.103 2 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[28]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0lazy__flip__scope_V0k48, self)))),
      statics->up->vars[1]);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0lazy__flip__scope_V0k50(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0lazy__flip__scope_V0k50" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0lazy__flip__scope_V0k50, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.reg.358 1 0) ((bruijn ##.k.210 0 0) (bruijn ##.reg.358 1 0)) ((bruijn ##.k.210 0 0) (##inline ##vcore.pair? (bruijn ##.stx.103 3 1))))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->vars[0]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VInlinePairP2(runtime,
        statics->up->up->vars[1]));
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0lazy__flip__scope_V0k52(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0lazy__flip__scope_V0k52" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0lazy__flip__scope_V0k52, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.make-syntax.57 5 31) (bruijn ##.k.202 4 0) (bruijn ##.stx.103 4 1) (bruijn ##.x.208 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 31)), 3,
      statics->up->up->up->vars[0],
      statics->up->up->up->vars[1],
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0lazy__flip__scope_V0k51(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0lazy__flip__scope_V0k51" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0lazy__flip__scope_V0k51, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.207 0 0) ((bruijn ##.list.12 5 9) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0lazy__flip__scope_V0k52) (bruijn ##.x.104 3 2)) ((bruijn ##.k.202 3 0) (bruijn ##.stx.103 3 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 9)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0lazy__flip__scope_V0k52, self)))),
      statics->up->up->vars[2]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      statics->up->up->vars[1]);
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0lazy__flip__scope_V0k46(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0lazy__flip__scope_V0k46" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0lazy__flip__scope_V0k46, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.203 0 0) ((bruijn ##.get-syntax-data-impl.56 2 30) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0lazy__flip__scope_V0k47) (bruijn ##.stx.103 1 1)) (basic-block 1 1 (##.reg.358) ((##vcore.symbol? (bruijn ##.stx.103 2 1))) ((close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0lazy__flip__scope_V0k50) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0lazy__flip__scope_V0k51))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[30]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0lazy__flip__scope_V0k47, self)))),
      statics->vars[1]);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VSymbolP2(runtime, NULL,
      statics->up->vars[1]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0lazy__flip__scope_V0k50, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0lazy__flip__scope_V0k51, self)))));
    }
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0lazy__flip__scope(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0lazy__flip__scope" };
 VRecordCall2(runtime, &dbg);
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
  // ((bruijn ##.syntax?.58 1 32) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0lazy__flip__scope_V0k46) (bruijn ##.stx.103 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[32]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0lazy__flip__scope_V0k46, self)))),
      _var1);
}
static void _V10_Dloop_D107_V0k54(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D107_V0k54" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D107_V0k54, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.213 1 0) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.set.108 1 1)) (bruijn ##.x.216 0 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VInlineCons2(runtime,
        VInlineCar2(runtime,
        statics->vars[1]),
        _var0));
}
static void _V10_Dloop_D107_V0lambda8(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V10_Dloop_D107_V0lambda8" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D107_V0lambda8, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (if (##inline ##vcore.eq? (##inline ##vcore.car (bruijn ##.set.108 0 1)) (bruijn ##.x.106 3 2)) ((bruijn ##.k.213 0 0) (##inline ##vcore.cdr (bruijn ##.set.108 0 1))) ((bruijn ##.loop.107 1 0) (close _V10_Dloop_D107_V0k54) (##inline ##vcore.cdr (bruijn ##.set.108 0 1))))
if(VDecodeBool(
VInlineEq2(runtime,
        VInlineCar2(runtime,
        _var1),
        statics->up->up->vars[2]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VInlineCdr2(runtime,
        _var1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D107_V0k54, self)))),
      VInlineCdr2(runtime,
        _var1));
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0flip__scope__set_V0k53(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0flip__scope__set_V0k53" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0flip__scope__set_V0k53, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.212 0 0) (letrec 1 ((close _V10_Dloop_D107_V0lambda8)) ((bruijn ##.loop.107 0 0) (bruijn ##.k.211 2 0) (bruijn ##.set.105 2 1))) ((bruijn ##.k.211 1 0) (##inline ##vcore.cons (bruijn ##.x.106 1 2) (bruijn ##.set.105 1 1))))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D107_V0lambda8, self))));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, self->vars[0]), 2,
      statics->up->vars[0],
      statics->up->vars[1]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VInlineCons2(runtime,
        statics->vars[2],
        statics->vars[1]));
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0flip__scope__set(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0flip__scope__set" };
 VRecordCall2(runtime, &dbg);
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
  // ((bruijn ##.memq.9 2 6) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0flip__scope__set_V0k53) (bruijn ##.x.106 0 2) (bruijn ##.set.105 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[6]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0flip__scope__set_V0k53, self)))),
      _var2,
      _var1);
}
static void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__syntax__data_V0k55(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.get-syntax-data-impl.56 1 30) (bruijn ##.k.219 0 0) (bruijn ##.stx.109 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[30]), 2,
      self->vars[0],
      self->vars[1]);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__syntax__data(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__syntax__data" };
 VRecordCall2(runtime, &dbg);
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
  // ((bruijn ##.propogate-flips.51 1 25) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__syntax__data_V0k55) (bruijn ##.stx.109 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[25]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__syntax__data_V0k55, self)))),
      _var1);
}
static void _V10_Dflip_D113_V0k61(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dflip_D113_V0k61" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dflip_D113_V0k61, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.make-syntax.57 10 31) (bruijn ##.k.224 4 0) (bruijn ##.x.226 2 0) (bruijn ##.x.227 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 31)), 3,
      statics->up->up->up->vars[0],
      statics->up->vars[0],
      _var0);
}
static void _V10_Dflip_D113_V0k60(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dflip_D113_V0k60" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dflip_D113_V0k60, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.lset-xor.10 10 7) (close _V10_Dflip_D113_V0k61) (##intrinsic ##vcore.eq?) (bruijn ##.x.228 0 0) (bruijn ##.scopes.111 6 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 7)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dflip_D113_V0k61, self)))),
      _V40_V10vcore_Deq_Q,
      _var0,
      VGetArg(statics, 6-1, 0));
}
static void _V10_Dflip_D113_V0k59(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dflip_D113_V0k59" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dflip_D113_V0k59, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.get-syntax-scopes.54 8 28) (close _V10_Dflip_D113_V0k60) (bruijn ##.stx.114 2 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 28)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dflip_D113_V0k60, self)))),
      statics->up->vars[1]);
}
static void _V10_Dflip_D113_V0k62(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dflip_D113_V0k62" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dflip_D113_V0k62, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.reg.359 1 0) ((bruijn ##.k.231 0 0) (bruijn ##.reg.359 1 0)) ((bruijn ##.k.231 0 0) (##inline ##vcore.pair? (bruijn ##.stx.114 3 1))))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->vars[0]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VInlinePairP2(runtime,
        statics->up->up->vars[1]));
}
}
static void _V10_Dflip_D113_V0k63(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dflip_D113_V0k63" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dflip_D113_V0k63, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.229 0 0) ((bruijn ##.make-syntax.57 9 31) (bruijn ##.k.224 3 0) (bruijn ##.stx.114 3 1) (bruijn ##.scopes.111 6 0)) ((bruijn ##.k.224 3 0) (bruijn ##.stx.114 3 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 31)), 3,
      statics->up->up->vars[0],
      statics->up->up->vars[1],
      VGetArg(statics, 6-1, 0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      statics->up->up->vars[1]);
}
}
static void _V10_Dflip_D113_V0k58(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dflip_D113_V0k58" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dflip_D113_V0k58, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.225 0 0) ((bruijn ##.get-syntax-data-impl.56 7 30) (close _V10_Dflip_D113_V0k59) (bruijn ##.stx.114 1 1)) (basic-block 1 1 (##.reg.359) ((##vcore.symbol? (bruijn ##.stx.114 2 1))) ((close _V10_Dflip_D113_V0k62) (close _V10_Dflip_D113_V0k63))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 30)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dflip_D113_V0k59, self)))),
      statics->vars[1]);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VSymbolP2(runtime, NULL,
      statics->up->vars[1]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dflip_D113_V0k62, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dflip_D113_V0k63, self)))));
    }
}
}
static void _V10_Dflip_D113_V0lambda9(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V10_Dflip_D113_V0lambda9" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dflip_D113_V0lambda9, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.syntax?.58 6 32) (close _V10_Dflip_D113_V0k58) (bruijn ##.stx.114 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 32)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dflip_D113_V0k58, self)))),
      _var1);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0propogate__flips_V0k66(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0propogate__flips_V0k66" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0propogate__flips_V0k66, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.set-syntax-data!.55 7 29) (bruijn ##.k.220 6 0) (bruijn ##.stx.110 6 1) (##inline ##vcore.cons (bruijn ##.x.234 1 0) (bruijn ##.x.235 0 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 29)), 3,
      VGetArg(statics, 6-1, 0),
      VGetArg(statics, 6-1, 1),
      VInlineCons2(runtime,
        statics->vars[0],
        _var0));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0propogate__flips_V0k65(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0propogate__flips_V0k65" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0propogate__flips_V0k65, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.flip.113 1 1) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0propogate__flips_V0k66) (##inline ##vcore.cdr (bruijn ##.data.112 1 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[1]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0propogate__flips_V0k66, self)))),
      VInlineCdr2(runtime,
        statics->vars[0]));
}
static void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0propogate__flips_V0k64(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.flip.113 0 1) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0propogate__flips_V0k65) (##inline ##vcore.car (bruijn ##.data.112 0 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, self->vars[1]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0propogate__flips_V0k65, self)))),
      VInlineCar2(runtime,
        self->vars[0]));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0propogate__flips_V0k68(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0propogate__flips_V0k68" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0propogate__flips_V0k68, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.set-syntax-data!.55 7 29) (bruijn ##.k.220 6 0) (bruijn ##.stx.110 6 1) (bruijn ##.x.239 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 29)), 3,
      VGetArg(statics, 6-1, 0),
      VGetArg(statics, 6-1, 1),
      _var0);
}
static void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0propogate__flips_V0k67(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.vector-map.6 7 3) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0propogate__flips_V0k68) (bruijn ##.flip.113 1 1) (bruijn ##.data.112 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 3)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0propogate__flips_V0k68, self)))),
      statics->vars[1],
      statics->vars[0]);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0propogate__flips_V0k57(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0propogate__flips_V0k57" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0propogate__flips_V0k57, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (letrec 2 ((bruijn ##.x.223 1 0) (close _V10_Dflip_D113_V0lambda9)) (if (##inline ##vcore.pair? (bruijn ##.data.112 0 0)) ((bruijn ##.set-syntax-scopes!.53 5 27) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0propogate__flips_V0k64) (bruijn ##.stx.110 4 1) '()) (basic-block 1 1 (##.reg.360) ((##vcore.vector? (bruijn ##.data.112 1 0))) (if (bruijn ##.reg.360 0 0) ((bruijn ##.set-syntax-scopes!.53 6 27) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0propogate__flips_V0k67) (bruijn ##.stx.110 5 1) '()) ((bruijn ##.k.220 5 0) #f)))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = statics->vars[0];
    self->vars[1] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dflip_D113_V0lambda9, self))));
if(VDecodeBool(
VInlinePairP2(runtime,
        self->vars[0]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 27)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0propogate__flips_V0k64, self)))),
      statics->up->up->up->vars[1],
      VNULL);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VVectorP2(runtime, NULL,
      statics->vars[0]);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 27)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0propogate__flips_V0k67, self)))),
      VGetArg(statics, 5-1, 1),
      VNULL);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VEncodeBool(false));
}
    }
}
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0propogate__flips_V0k56(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0propogate__flips_V0k56" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0propogate__flips_V0k56, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (letrec 1 ((bruijn ##.x.221 1 0)) (if (##inline ##vcore.null? (bruijn ##.scopes.111 0 0)) ((bruijn ##.k.220 2 0) #void) ((bruijn ##.get-syntax-data-impl.56 3 30) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0propogate__flips_V0k57) (bruijn ##.stx.110 2 1))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = statics->vars[0];
if(VDecodeBool(
VInlineNullP2(runtime,
        self->vars[0]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VVOID);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[30]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0propogate__flips_V0k57, self)))),
      statics->up->vars[1]);
}
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0propogate__flips(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0propogate__flips" };
 VRecordCall2(runtime, &dbg);
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
  // ((bruijn ##.get-syntax-scopes.54 1 28) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0propogate__flips_V0k56) (bruijn ##.stx.110 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[28]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0propogate__flips_V0k56, self)))),
      _var1);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0identifier_Q_V0k70(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0identifier_Q_V0k70" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0identifier_Q_V0k70, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.361) ((##vcore.symbol? (bruijn ##.x.242 1 0))) ((bruijn ##.k.240 3 0) (bruijn ##.reg.361 0 0)))
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
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0identifier_Q_V0k69(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0identifier_Q_V0k69" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0identifier_Q_V0k69, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.241 0 0) ((bruijn ##.get-syntax-data-impl.56 2 30) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0identifier_Q_V0k70) (bruijn ##.x.115 1 1)) ((bruijn ##.k.240 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[30]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0identifier_Q_V0k70, self)))),
      statics->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0identifier_Q(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0identifier_Q" };
 VRecordCall2(runtime, &dbg);
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
  // ((bruijn ##.syntax?.58 1 32) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0identifier_Q_V0k69) (bruijn ##.x.115 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[32]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0identifier_Q_V0k69, self)))),
      _var1);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0set__syntax__scopes_B_V0k72(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0set__syntax__scopes_B_V0k72" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0set__syntax__scopes_B_V0k72, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.raise (bruijn ##.k.243 2 0) (bruijn ##.x.245 0 0))
    VCallFuncWithGC(runtime, (VFunc)VRaise, 2,
      statics->up->vars[0],
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0set__syntax__scopes_B_V0k71(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0set__syntax__scopes_B_V0k71" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0set__syntax__scopes_B_V0k71, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.244 0 0) (##vcore.record-set! (bruijn ##.k.243 1 0) (bruijn ##.rec.116 1 1) 2 (bruijn ##.x.117 1 2)) (##vcore.record (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0set__syntax__scopes_B_V0k72) #f 'error (##string ##.string.372) (##inline ##vcore.cons 'set-syntax-scopes! (##inline ##vcore.cons (bruijn ##.rec.116 1 1) '()))))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VRecordSet2, 4,
      statics->vars[0],
      statics->vars[1],
      VEncodeInt(2l),
      statics->vars[2]);
} else {
    VCallFuncWithGC(runtime, (VFunc)VCreateRecord2, 5,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0set__syntax__scopes_B_V0k72, self)))),
      VEncodeBool(false),
      _V0error,
      VEncodePointer(&_V10_Dstring_D372.sym, VPOINTER_OTHER),
      VInlineCons2(runtime,
        _V0set__syntax__scopes_B,
        VInlineCons2(runtime,
        statics->vars[1],
        VNULL)));
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0set__syntax__scopes_B(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0set__syntax__scopes_B" };
 VRecordCall2(runtime, &dbg);
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
  // ((bruijn ##.syntax?.3.59 1 33) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0set__syntax__scopes_B_V0k71) (bruijn ##.rec.116 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[33]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0set__syntax__scopes_B_V0k71, self)))),
      _var1);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__syntax__scopes_V0k74(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__syntax__scopes_V0k74" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__syntax__scopes_V0k74, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.raise (bruijn ##.k.248 2 0) (bruijn ##.x.250 0 0))
    VCallFuncWithGC(runtime, (VFunc)VRaise, 2,
      statics->up->vars[0],
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__syntax__scopes_V0k73(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__syntax__scopes_V0k73" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__syntax__scopes_V0k73, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.249 0 0) (basic-block 1 1 (##.reg.362) ((##vcore.record-ref (bruijn ##.rec.118 2 1) 2)) ((bruijn ##.k.248 2 0) (bruijn ##.reg.362 0 0))) (##vcore.record (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__syntax__scopes_V0k74) #f 'error (##string ##.string.372) (##inline ##vcore.cons 'get-syntax-scopes (##inline ##vcore.cons (bruijn ##.rec.118 1 1) '()))))
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
    VCallFuncWithGC(runtime, (VFunc)VCreateRecord2, 5,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__syntax__scopes_V0k74, self)))),
      VEncodeBool(false),
      _V0error,
      VEncodePointer(&_V10_Dstring_D372.sym, VPOINTER_OTHER),
      VInlineCons2(runtime,
        _V0get__syntax__scopes,
        VInlineCons2(runtime,
        statics->vars[1],
        VNULL)));
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__syntax__scopes(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__syntax__scopes" };
 VRecordCall2(runtime, &dbg);
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
  // ((bruijn ##.syntax?.3.59 1 33) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__syntax__scopes_V0k73) (bruijn ##.rec.118 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[33]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__syntax__scopes_V0k73, self)))),
      _var1);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0set__syntax__data_B_V0k76(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0set__syntax__data_B_V0k76" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0set__syntax__data_B_V0k76, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.raise (bruijn ##.k.253 2 0) (bruijn ##.x.255 0 0))
    VCallFuncWithGC(runtime, (VFunc)VRaise, 2,
      statics->up->vars[0],
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0set__syntax__data_B_V0k75(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0set__syntax__data_B_V0k75" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0set__syntax__data_B_V0k75, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.254 0 0) (##vcore.record-set! (bruijn ##.k.253 1 0) (bruijn ##.rec.119 1 1) 1 (bruijn ##.x.120 1 2)) (##vcore.record (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0set__syntax__data_B_V0k76) #f 'error (##string ##.string.372) (##inline ##vcore.cons 'set-syntax-data! (##inline ##vcore.cons (bruijn ##.rec.119 1 1) '()))))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VRecordSet2, 4,
      statics->vars[0],
      statics->vars[1],
      VEncodeInt(1l),
      statics->vars[2]);
} else {
    VCallFuncWithGC(runtime, (VFunc)VCreateRecord2, 5,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0set__syntax__data_B_V0k76, self)))),
      VEncodeBool(false),
      _V0error,
      VEncodePointer(&_V10_Dstring_D372.sym, VPOINTER_OTHER),
      VInlineCons2(runtime,
        _V0set__syntax__data_B,
        VInlineCons2(runtime,
        statics->vars[1],
        VNULL)));
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0set__syntax__data_B(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0set__syntax__data_B" };
 VRecordCall2(runtime, &dbg);
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
  // ((bruijn ##.syntax?.3.59 1 33) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0set__syntax__data_B_V0k75) (bruijn ##.rec.119 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[33]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0set__syntax__data_B_V0k75, self)))),
      _var1);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__syntax__data__impl_V0k78(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__syntax__data__impl_V0k78" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__syntax__data__impl_V0k78, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.raise (bruijn ##.k.258 2 0) (bruijn ##.x.260 0 0))
    VCallFuncWithGC(runtime, (VFunc)VRaise, 2,
      statics->up->vars[0],
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__syntax__data__impl_V0k77(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__syntax__data__impl_V0k77" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__syntax__data__impl_V0k77, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.259 0 0) (basic-block 1 1 (##.reg.363) ((##vcore.record-ref (bruijn ##.rec.121 2 1) 1)) ((bruijn ##.k.258 2 0) (bruijn ##.reg.363 0 0))) (##vcore.record (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__syntax__data__impl_V0k78) #f 'error (##string ##.string.372) (##inline ##vcore.cons 'get-syntax-data-impl (##inline ##vcore.cons (bruijn ##.rec.121 1 1) '()))))
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
    VCallFuncWithGC(runtime, (VFunc)VCreateRecord2, 5,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__syntax__data__impl_V0k78, self)))),
      VEncodeBool(false),
      _V0error,
      VEncodePointer(&_V10_Dstring_D372.sym, VPOINTER_OTHER),
      VInlineCons2(runtime,
        _V0get__syntax__data__impl,
        VInlineCons2(runtime,
        statics->vars[1],
        VNULL)));
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__syntax__data__impl(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__syntax__data__impl" };
 VRecordCall2(runtime, &dbg);
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
  // ((bruijn ##.syntax?.3.59 1 33) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__syntax__data__impl_V0k77) (bruijn ##.rec.121 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[33]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__syntax__data__impl_V0k77, self)))),
      _var1);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0make__syntax(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0make__syntax" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0make__syntax, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  // (##vcore.record (bruijn ##.k.263 0 0) (bruijn ##.syntax.2.60 1 34) (bruijn ##.data.122 0 1) (bruijn ##.flips.123 0 2))
    VCallFuncWithGC(runtime, (VFunc)VCreateRecord2, 4,
      _var0,
      statics->vars[34],
      _var1,
      _var2);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V10_Dsyntax_Q_D3(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0types_V10_Dsyntax_Q_D3" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V10_Dsyntax_Q_D3, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.reg.364) ((##vcore.record? (bruijn ##.x.124 1 1))) (if (bruijn ##.reg.364 0 0) (basic-block 1 1 (##.reg.365) ((##vcore.record-ref (bruijn ##.x.124 2 1) 0)) (##vcore.eqv? (bruijn ##.k.264 2 0) (bruijn ##.reg.365 0 0) (bruijn ##.syntax.2.60 3 34))) ((bruijn ##.k.264 1 0) #f)))
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
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VRecordRef2(runtime, NULL,
      statics->up->vars[1],
      VEncodeInt(0l));
    VCallFuncWithGC(runtime, (VFunc)VEq2, 3,
      statics->up->vars[0],
      self->vars[0],
      statics->up->up->vars[34]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0make__scope(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0make__scope" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0make__scope, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.make-scope-impl.65 1 39) (bruijn ##.k.267 0 0) '())
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[39]), 2,
      _var0,
      VNULL);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0set__scope__bindings_B_V0k80(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0set__scope__bindings_B_V0k80" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0set__scope__bindings_B_V0k80, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.raise (bruijn ##.k.268 2 0) (bruijn ##.x.270 0 0))
    VCallFuncWithGC(runtime, (VFunc)VRaise, 2,
      statics->up->vars[0],
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0set__scope__bindings_B_V0k79(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0set__scope__bindings_B_V0k79" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0set__scope__bindings_B_V0k79, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.269 0 0) (##vcore.record-set! (bruijn ##.k.268 1 0) (bruijn ##.rec.125 1 1) 1 (bruijn ##.x.126 1 2)) (##vcore.record (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0set__scope__bindings_B_V0k80) #f 'error (##string ##.string.372) (##inline ##vcore.cons 'set-scope-bindings! (##inline ##vcore.cons (bruijn ##.rec.125 1 1) '()))))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VRecordSet2, 4,
      statics->vars[0],
      statics->vars[1],
      VEncodeInt(1l),
      statics->vars[2]);
} else {
    VCallFuncWithGC(runtime, (VFunc)VCreateRecord2, 5,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0set__scope__bindings_B_V0k80, self)))),
      VEncodeBool(false),
      _V0error,
      VEncodePointer(&_V10_Dstring_D372.sym, VPOINTER_OTHER),
      VInlineCons2(runtime,
        _V0set__scope__bindings_B,
        VInlineCons2(runtime,
        statics->vars[1],
        VNULL)));
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0set__scope__bindings_B(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0set__scope__bindings_B" };
 VRecordCall2(runtime, &dbg);
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
  // ((bruijn ##.scope?.1.67 1 41) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0set__scope__bindings_B_V0k79) (bruijn ##.rec.125 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[41]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0set__scope__bindings_B_V0k79, self)))),
      _var1);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__scope__bindings_V0k82(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__scope__bindings_V0k82" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__scope__bindings_V0k82, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.raise (bruijn ##.k.273 2 0) (bruijn ##.x.275 0 0))
    VCallFuncWithGC(runtime, (VFunc)VRaise, 2,
      statics->up->vars[0],
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__scope__bindings_V0k81(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__scope__bindings_V0k81" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__scope__bindings_V0k81, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.274 0 0) (basic-block 1 1 (##.reg.366) ((##vcore.record-ref (bruijn ##.rec.127 2 1) 1)) ((bruijn ##.k.273 2 0) (bruijn ##.reg.366 0 0))) (##vcore.record (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__scope__bindings_V0k82) #f 'error (##string ##.string.372) (##inline ##vcore.cons 'get-scope-bindings (##inline ##vcore.cons (bruijn ##.rec.127 1 1) '()))))
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
    VCallFuncWithGC(runtime, (VFunc)VCreateRecord2, 5,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__scope__bindings_V0k82, self)))),
      VEncodeBool(false),
      _V0error,
      VEncodePointer(&_V10_Dstring_D372.sym, VPOINTER_OTHER),
      VInlineCons2(runtime,
        _V0get__scope__bindings,
        VInlineCons2(runtime,
        statics->vars[1],
        VNULL)));
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__scope__bindings(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__scope__bindings" };
 VRecordCall2(runtime, &dbg);
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
  // ((bruijn ##.scope?.1.67 1 41) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__scope__bindings_V0k81) (bruijn ##.rec.127 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[41]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__scope__bindings_V0k81, self)))),
      _var1);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0make__scope__impl(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0make__scope__impl" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0make__scope__impl, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // (##vcore.record (bruijn ##.k.278 0 0) (bruijn ##.scope.0.68 1 42) (bruijn ##.bindings.128 0 1))
    VCallFuncWithGC(runtime, (VFunc)VCreateRecord2, 3,
      _var0,
      statics->vars[42],
      _var1);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V10_Dscope_Q_D1(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0types_V10_Dscope_Q_D1" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V10_Dscope_Q_D1, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.reg.367) ((##vcore.record? (bruijn ##.x.129 1 1))) (if (bruijn ##.reg.367 0 0) (basic-block 1 1 (##.reg.368) ((##vcore.record-ref (bruijn ##.x.129 2 1) 0)) (##vcore.eqv? (bruijn ##.k.279 2 0) (bruijn ##.reg.368 0 0) (bruijn ##.scope.0.68 3 42))) ((bruijn ##.k.279 1 0) #f)))
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
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VRecordRef2(runtime, NULL,
      statics->up->vars[1],
      VEncodeInt(0l));
    VCallFuncWithGC(runtime, (VFunc)VEq2, 3,
      statics->up->vars[0],
      self->vars[0],
      statics->up->up->vars[42]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
    }
}
static void _V0vanity_V0compiler_V0hygienic_V0types_V20_V0k94(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.k.136 3 0) (##inline ##vcore.cons (##inline ##vcore.cons 'make-scope (bruijn ##.make-scope.62 2 36)) (##inline ##vcore.cons (##inline ##vcore.cons 'scope? (bruijn ##.scope?.66 2 40)) (##inline ##vcore.cons (##inline ##vcore.cons 'scope=? (##intrinsic ##vcore.eq?)) (##inline ##vcore.cons (##inline ##vcore.cons 'get-scope-bindings (bruijn ##.get-scope-bindings.64 2 38)) (##inline ##vcore.cons (##inline ##vcore.cons 'set-scope-bindings! (bruijn ##.set-scope-bindings!.63 2 37)) (##inline ##vcore.cons (##inline ##vcore.cons 'global-scope (bruijn ##.global-scope.61 2 35)) (##inline ##vcore.cons (##inline ##vcore.cons 'identifier? (bruijn ##.identifier?.52 2 26)) (##inline ##vcore.cons (##inline ##vcore.cons 'get-syntax-scopes (bruijn ##.get-syntax-scopes.54 2 28)) (##inline ##vcore.cons (##inline ##vcore.cons 'set-syntax-scopes! (bruijn ##.set-syntax-scopes!.53 2 27)) (##inline ##vcore.cons (##inline ##vcore.cons 'make-syntax (bruijn ##.make-syntax.57 2 31)) (##inline ##vcore.cons (##inline ##vcore.cons 'syntax? (bruijn ##.syntax?.58 2 32)) (##inline ##vcore.cons (##inline ##vcore.cons 'get-syntax-data (bruijn ##.get-syntax-data.50 2 24)) (##inline ##vcore.cons (##inline ##vcore.cons 'set-syntax-data! (bruijn ##.set-syntax-data!.55 2 29)) (##inline ##vcore.cons (##inline ##vcore.cons 'syntax-null? (bruijn ##.syntax-null?.44 2 18)) (##inline ##vcore.cons (##inline ##vcore.cons 'syntax-pair? (bruijn ##.syntax-pair?.43 2 17)) (##inline ##vcore.cons (##inline ##vcore.cons 'syntax-cons (bruijn ##.syntax-cons.42 2 16)) (##inline ##vcore.cons (##inline ##vcore.cons 'syntax-car (bruijn ##.syntax-car.41 2 15)) (##inline ##vcore.cons (##inline ##vcore.cons 'syntax-cdr (bruijn ##.syntax-cdr.40 2 14)) (##inline ##vcore.cons (##inline ##vcore.cons 'syntax-caar (bruijn ##.syntax-caar.39 2 13)) (##inline ##vcore.cons (##inline ##vcore.cons 'syntax-cadr (bruijn ##.syntax-cadr.38 2 12)) (##inline ##vcore.cons (##inline ##vcore.cons 'syntax-cdar (bruijn ##.syntax-cdar.37 2 11)) (##inline ##vcore.cons (##inline ##vcore.cons 'syntax-cddr (bruijn ##.syntax-cddr.36 2 10)) (##inline ##vcore.cons (##inline ##vcore.cons 'syntax-map (bruijn ##.syntax-map.34 2 8)) (##inline ##vcore.cons (##inline ##vcore.cons 'syntax-for-each (bruijn ##.syntax-for-each.33 2 7)) (##inline ##vcore.cons (##inline ##vcore.cons 'syntax-list (bruijn ##.syntax-list.32 2 6)) (##inline ##vcore.cons (##inline ##vcore.cons 'syntax-caddr (bruijn ##.syntax-caddr.35 2 9)) (##inline ##vcore.cons (##inline ##vcore.cons 'syntax-vector? (bruijn ##.syntax-vector?.31 2 5)) (##inline ##vcore.cons (##inline ##vcore.cons 'syntax-vector (bruijn ##.syntax-vector.30 2 4)) (##inline ##vcore.cons (##inline ##vcore.cons 'syntax-make-vector (bruijn ##.syntax-make-vector.29 2 3)) (##inline ##vcore.cons (##inline ##vcore.cons 'syntax-vector-ref (bruijn ##.syntax-vector-ref.28 2 2)) (##inline ##vcore.cons (##inline ##vcore.cons 'syntax-vector-map (bruijn ##.syntax-vector-map.27 2 1)) (##inline ##vcore.cons (##inline ##vcore.cons 'syntax-vector-for-each (bruijn ##.syntax-vector-for-each.26 2 0)) (##inline ##vcore.cons (##inline ##vcore.cons 'lazy-flip-scope (bruijn ##.lazy-flip-scope.48 2 22)) (##inline ##vcore.cons (##inline ##vcore.cons 'eager-flip-scope (bruijn ##.eager-flip-scope.47 2 21)) (##inline ##vcore.cons (##inline ##vcore.cons 'flip-scope (bruijn ##.flip-scope.45 2 19)) '()))))))))))))))))))))))))))))))))))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0make__scope,
        statics->up->vars[36]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0scope_Q,
        statics->up->vars[40]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0scope_E_Q,
        _V40_V10vcore_Deq_Q),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0get__scope__bindings,
        statics->up->vars[38]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0set__scope__bindings_B,
        statics->up->vars[37]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0global__scope,
        statics->up->vars[35]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0identifier_Q,
        statics->up->vars[26]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0get__syntax__scopes,
        statics->up->vars[28]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0set__syntax__scopes_B,
        statics->up->vars[27]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0make__syntax,
        statics->up->vars[31]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0syntax_Q,
        statics->up->vars[32]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0get__syntax__data,
        statics->up->vars[24]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0set__syntax__data_B,
        statics->up->vars[29]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0syntax__null_Q,
        statics->up->vars[18]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0syntax__pair_Q,
        statics->up->vars[17]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0syntax__cons,
        statics->up->vars[16]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0syntax__car,
        statics->up->vars[15]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0syntax__cdr,
        statics->up->vars[14]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0syntax__caar,
        statics->up->vars[13]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0syntax__cadr,
        statics->up->vars[12]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0syntax__cdar,
        statics->up->vars[11]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0syntax__cddr,
        statics->up->vars[10]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0syntax__map,
        statics->up->vars[8]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0syntax__for__each,
        statics->up->vars[7]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0syntax__list,
        statics->up->vars[6]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0syntax__caddr,
        statics->up->vars[9]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0syntax__vector_Q,
        statics->up->vars[5]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0syntax__vector,
        statics->up->vars[4]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0syntax__make__vector,
        statics->up->vars[3]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0syntax__vector__ref,
        statics->up->vars[2]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0syntax__vector__map,
        statics->up->vars[1]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0syntax__vector__for__each,
        statics->up->vars[0]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0lazy__flip__scope,
        statics->up->vars[22]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0eager__flip__scope,
        statics->up->vars[21]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0flip__scope,
        statics->up->vars[19]),
        VNULL))))))))))))))))))))))))))))))))))));
}
static void _V0vanity_V0compiler_V0hygienic_V0types_V20_V0k93(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (set! (close _V0vanity_V0compiler_V0hygienic_V0types_V20_V0k94) (bruijn ##.syntax-make-vector.29 2 3) (##intrinsic ##vcore.make-vector))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0hygienic_V0types_V20_V0k94, self)))),
      VEncodeInt(2l), VEncodeInt(3l),
      _V40_V10vcore_Dmake__vector
    );
}
static void _V0vanity_V0compiler_V0hygienic_V0types_V20_V0k92(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (set! (close _V0vanity_V0compiler_V0hygienic_V0types_V20_V0k93) (bruijn ##.syntax-vector.30 2 4) (##intrinsic ##vcore.vector))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0hygienic_V0types_V20_V0k93, self)))),
      VEncodeInt(2l), VEncodeInt(4l),
      _V40_V10vcore_Dvector
    );
}
static void _V0vanity_V0compiler_V0hygienic_V0types_V20_V0k91(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (set! (close _V0vanity_V0compiler_V0hygienic_V0types_V20_V0k92) (bruijn ##.syntax-list.32 2 6) (bruijn ##.list.12 3 9))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0hygienic_V0types_V20_V0k92, self)))),
      VEncodeInt(2l), VEncodeInt(6l),
      statics->up->up->vars[9]
    );
}
static void _V0vanity_V0compiler_V0hygienic_V0types_V20_V0k90(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (set! (close _V0vanity_V0compiler_V0hygienic_V0types_V20_V0k91) (bruijn ##.syntax-cons.42 2 16) (##intrinsic ##vcore.cons))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0hygienic_V0types_V20_V0k91, self)))),
      VEncodeInt(2l), VEncodeInt(16l),
      _V40_V10vcore_Dcons
    );
}
static void _V0vanity_V0compiler_V0hygienic_V0types_V20_V0k89(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (set! (close _V0vanity_V0compiler_V0hygienic_V0types_V20_V0k90) (bruijn ##.flip-scope.45 2 19) (bruijn ##.lazy-flip-scope.48 2 22))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0hygienic_V0types_V20_V0k90, self)))),
      VEncodeInt(2l), VEncodeInt(19l),
      statics->up->vars[22]
    );
}
static void _V0vanity_V0compiler_V0hygienic_V0types_V20_V0k88(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (set! (close _V0vanity_V0compiler_V0hygienic_V0types_V20_V0k89) (bruijn ##.syntax?.58 2 32) (bruijn ##.syntax?.3.59 2 33))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0hygienic_V0types_V20_V0k89, self)))),
      VEncodeInt(2l), VEncodeInt(32l),
      statics->up->vars[33]
    );
}
static void _V0vanity_V0compiler_V0hygienic_V0types_V20_V0k87(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (set! (close _V0vanity_V0compiler_V0hygienic_V0types_V20_V0k88) (bruijn ##.syntax.2.60 2 34) (##inline ##vcore.cons '(##pair ##.pair.375) '()))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0hygienic_V0types_V20_V0k88, self)))),
      VEncodeInt(2l), VEncodeInt(34l),
      VInlineCons2(runtime,
        VEncodePointer(&_V10_Dpair_D375, VPOINTER_PAIR),
        VNULL)
    );
}
static void _V0vanity_V0compiler_V0hygienic_V0types_V20_V0k86(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0hygienic_V0types_V20_V0k86" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0hygienic_V0types_V20_V0k86, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (close _V0vanity_V0compiler_V0hygienic_V0types_V20_V0k87) (bruijn ##.global-scope.61 2 35) (bruijn ##.x.352 0 0))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0hygienic_V0types_V20_V0k87, self)))),
      VEncodeInt(2l), VEncodeInt(35l),
      _var0
    );
}
static void _V0vanity_V0compiler_V0hygienic_V0types_V20_V0k85(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0hygienic_V0types_V20_V0k85" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0hygienic_V0types_V20_V0k85, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.make-parameter.11 2 8) (close _V0vanity_V0compiler_V0hygienic_V0types_V20_V0k86) (bruijn ##.x.353 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[8]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0hygienic_V0types_V20_V0k86, self)))),
      _var0);
}
static void _V0vanity_V0compiler_V0hygienic_V0types_V20_V0k84(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.make-scope.62 0 36) (close _V0vanity_V0compiler_V0hygienic_V0types_V20_V0k85))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, self->vars[36]), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0hygienic_V0types_V20_V0k85, self)))));
}
static void _V0vanity_V0compiler_V0hygienic_V0types_V20_V0k83(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (set! (close _V0vanity_V0compiler_V0hygienic_V0types_V20_V0k84) (bruijn ##.scope?.66 0 40) (bruijn ##.scope?.1.67 0 41))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0hygienic_V0types_V20_V0k84, self)))),
      VEncodeInt(0l), VEncodeInt(40l),
      self->vars[41]
    );
}
static void _V0vanity_V0compiler_V0hygienic_V0types_V20_V0lambda3(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4, VWORD _var5, VWORD _var6, VWORD _var7, VWORD _var8, VWORD _var9) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0hygienic_V0types_V20_V0lambda3" };
 VRecordCall2(runtime, &dbg);
 if(argc != 10) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0hygienic_V0types_V20_V0lambda3, got ~D~N"
  "-- expected 10~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[10]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 10, 10, statics);
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
  // (##letrec (vanity compiler hygienic types) 43 ((close "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__vector__for__each" (vanity compiler hygienic types)) (close "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__vector__map" (vanity compiler hygienic types)) (close "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__vector__ref" (vanity compiler hygienic types)) #f #f (close "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__vector_Q" (vanity compiler hygienic types)) #f (close "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__for__each" (vanity compiler hygienic types)) (close "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__map" (vanity compiler hygienic types)) (close "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__caddr" (vanity compiler hygienic types)) (close "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__cddr" (vanity compiler hygienic types)) (close "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__cdar" (vanity compiler hygienic types)) (close "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__cadr" (vanity compiler hygienic types)) (close "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__caar" (vanity compiler hygienic types)) (close "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__cdr" (vanity compiler hygienic types)) (close "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__car" (vanity compiler hygienic types)) #f (close "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__pair_Q" (vanity compiler hygienic types)) (close "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__null_Q" (vanity compiler hygienic types)) #f (close "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__unpack" (vanity compiler hygienic types)) (close "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0eager__flip__scope" (vanity compiler hygienic types)) (close "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0lazy__flip__scope" (vanity compiler hygienic types)) (close "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0flip__scope__set" (vanity compiler hygienic types)) (close "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__syntax__data" (vanity compiler hygienic types)) (close "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0propogate__flips" (vanity compiler hygienic types)) (close "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0identifier_Q" (vanity compiler hygienic types)) (close "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0set__syntax__scopes_B" (vanity compiler hygienic types)) (close "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__syntax__scopes" (vanity compiler hygienic types)) (close "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0set__syntax__data_B" (vanity compiler hygienic types)) (close "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__syntax__data__impl" (vanity compiler hygienic types)) (close "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0make__syntax" (vanity compiler hygienic types)) #f (close "_V50_V0vanity_V0compiler_V0hygienic_V0types_V10_Dsyntax_Q_D3" (vanity compiler hygienic types)) #f #f (close "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0make__scope" (vanity compiler hygienic types)) (close "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0set__scope__bindings_B" (vanity compiler hygienic types)) (close "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__scope__bindings" (vanity compiler hygienic types)) (close "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0make__scope__impl" (vanity compiler hygienic types)) #f (close "_V50_V0vanity_V0compiler_V0hygienic_V0types_V10_Dscope_Q_D1" (vanity compiler hygienic types)) #f) (set! (close _V0vanity_V0compiler_V0hygienic_V0types_V20_V0k83) (bruijn ##.scope.0.68 0 42) (##inline ##vcore.cons '(##pair ##.pair.377) '())))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[43]; } container;
    self = &container.self;
    _V60_V0vanity_V0compiler_V0hygienic_V0types = self;
    VInitEnv(self, 43, 43, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__vector__for__each, _V60_V0vanity_V0compiler_V0hygienic_V0types))));
    self->vars[1] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__vector__map, _V60_V0vanity_V0compiler_V0hygienic_V0types))));
    self->vars[2] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__vector__ref, _V60_V0vanity_V0compiler_V0hygienic_V0types))));
    self->vars[3] = VEncodeBool(false);
    self->vars[4] = VEncodeBool(false);
    self->vars[5] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__vector_Q, _V60_V0vanity_V0compiler_V0hygienic_V0types))));
    self->vars[6] = VEncodeBool(false);
    self->vars[7] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__for__each, _V60_V0vanity_V0compiler_V0hygienic_V0types))));
    self->vars[8] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__map, _V60_V0vanity_V0compiler_V0hygienic_V0types))));
    self->vars[9] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__caddr, _V60_V0vanity_V0compiler_V0hygienic_V0types))));
    self->vars[10] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__cddr, _V60_V0vanity_V0compiler_V0hygienic_V0types))));
    self->vars[11] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__cdar, _V60_V0vanity_V0compiler_V0hygienic_V0types))));
    self->vars[12] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__cadr, _V60_V0vanity_V0compiler_V0hygienic_V0types))));
    self->vars[13] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__caar, _V60_V0vanity_V0compiler_V0hygienic_V0types))));
    self->vars[14] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__cdr, _V60_V0vanity_V0compiler_V0hygienic_V0types))));
    self->vars[15] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__car, _V60_V0vanity_V0compiler_V0hygienic_V0types))));
    self->vars[16] = VEncodeBool(false);
    self->vars[17] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__pair_Q, _V60_V0vanity_V0compiler_V0hygienic_V0types))));
    self->vars[18] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__null_Q, _V60_V0vanity_V0compiler_V0hygienic_V0types))));
    self->vars[19] = VEncodeBool(false);
    self->vars[20] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__unpack, _V60_V0vanity_V0compiler_V0hygienic_V0types))));
    self->vars[21] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0eager__flip__scope, _V60_V0vanity_V0compiler_V0hygienic_V0types))));
    self->vars[22] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0lazy__flip__scope, _V60_V0vanity_V0compiler_V0hygienic_V0types))));
    self->vars[23] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0flip__scope__set, _V60_V0vanity_V0compiler_V0hygienic_V0types))));
    self->vars[24] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__syntax__data, _V60_V0vanity_V0compiler_V0hygienic_V0types))));
    self->vars[25] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0propogate__flips, _V60_V0vanity_V0compiler_V0hygienic_V0types))));
    self->vars[26] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0identifier_Q, _V60_V0vanity_V0compiler_V0hygienic_V0types))));
    self->vars[27] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0set__syntax__scopes_B, _V60_V0vanity_V0compiler_V0hygienic_V0types))));
    self->vars[28] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__syntax__scopes, _V60_V0vanity_V0compiler_V0hygienic_V0types))));
    self->vars[29] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0set__syntax__data_B, _V60_V0vanity_V0compiler_V0hygienic_V0types))));
    self->vars[30] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__syntax__data__impl, _V60_V0vanity_V0compiler_V0hygienic_V0types))));
    self->vars[31] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0make__syntax, _V60_V0vanity_V0compiler_V0hygienic_V0types))));
    self->vars[32] = VEncodeBool(false);
    self->vars[33] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V10_Dsyntax_Q_D3, _V60_V0vanity_V0compiler_V0hygienic_V0types))));
    self->vars[34] = VEncodeBool(false);
    self->vars[35] = VEncodeBool(false);
    self->vars[36] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0make__scope, _V60_V0vanity_V0compiler_V0hygienic_V0types))));
    self->vars[37] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0set__scope__bindings_B, _V60_V0vanity_V0compiler_V0hygienic_V0types))));
    self->vars[38] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__scope__bindings, _V60_V0vanity_V0compiler_V0hygienic_V0types))));
    self->vars[39] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0make__scope__impl, _V60_V0vanity_V0compiler_V0hygienic_V0types))));
    self->vars[40] = VEncodeBool(false);
    self->vars[41] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V10_Dscope_Q_D1, _V60_V0vanity_V0compiler_V0hygienic_V0types))));
    self->vars[42] = VEncodeBool(false);
    VRegisterStaticEnv("_V0vanity_V0compiler_V0hygienic_V0types_V20", &_V60_V0vanity_V0compiler_V0hygienic_V0types);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0hygienic_V0types_V20_V0k83, self)))),
      VEncodeInt(0l), VEncodeInt(42l),
      VInlineCons2(runtime,
        VEncodePointer(&_V10_Dpair_D377, VPOINTER_PAIR),
        VNULL)
    );
    }
}
static void _V0vanity_V0compiler_V0hygienic_V0types_V20_V0lambda1(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0hygienic_V0types_V20_V0lambda1" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0hygienic_V0types_V20_V0lambda1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.k.131 0 0) (close _V0vanity_V0compiler_V0hygienic_V0types_V20_V0lambda2) (close _V0vanity_V0compiler_V0hygienic_V0types_V20_V0lambda3))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0hygienic_V0types_V20_V0lambda2, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0hygienic_V0types_V20_V0lambda3, self)))));
}
VFunc _V0vanity_V0compiler_V0hygienic_V0types_V20 = (VFunc)_V0vanity_V0compiler_V0hygienic_V0types_V20_V0lambda1;
