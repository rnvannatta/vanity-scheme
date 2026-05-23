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

VEnv * _V60_V0vanity_V0compiler_V0hygienic_V0global__forms;

static VPair _V10_Dpair_D386 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D385 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D384 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0let;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0let = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "let" };
VWEAK VWORD _V0global__form__env;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V0global__form__env = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "global-form-env" };
VWEAK VWORD _V0global__forms;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V0global__forms = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "global-forms" };
VWEAK VWORD _V0global__identifier;VWEAK struct { VBlob sym; char bytes[18]; } _VW_V0global__identifier = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 18 }, "global-identifier" };
VWEAK VWORD _V0lambda;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0lambda = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "lambda" };
VWEAK VWORD _V0quasiquote;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V0quasiquote = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "quasiquote" };
VWEAK VWORD _V0syntax;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0syntax = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "syntax" };
VWEAK VWORD _V10vcore_Dappend;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V10vcore_Dappend = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "##vcore.append" };
VWEAK VWORD _V0unquote__splicing;VWEAK struct { VBlob sym; char bytes[17]; } _VW_V0unquote__splicing = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 17 }, "unquote-splicing" };
VWEAK VWORD _V10vcore_Dlist___Gs8vector;VWEAK struct { VBlob sym; char bytes[23]; } _VW_V10vcore_Dlist___Gs8vector = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 23 }, "##vcore.list->s8vector" };
VWEAK VWORD _V10vcore_Dlist___Gu8vector;VWEAK struct { VBlob sym; char bytes[23]; } _VW_V10vcore_Dlist___Gu8vector = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 23 }, "##vcore.list->u8vector" };
VWEAK VWORD _V10vcore_Dlist___Gs16vector;VWEAK struct { VBlob sym; char bytes[24]; } _VW_V10vcore_Dlist___Gs16vector = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 24 }, "##vcore.list->s16vector" };
VWEAK VWORD _V10vcore_Dlist___Gu16vector;VWEAK struct { VBlob sym; char bytes[24]; } _VW_V10vcore_Dlist___Gu16vector = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 24 }, "##vcore.list->u16vector" };
VWEAK VWORD _V10vcore_Dlist___Gs32vector;VWEAK struct { VBlob sym; char bytes[24]; } _VW_V10vcore_Dlist___Gs32vector = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 24 }, "##vcore.list->s32vector" };
VWEAK VWORD _V10vcore_Dlist___Gf32vector;VWEAK struct { VBlob sym; char bytes[24]; } _VW_V10vcore_Dlist___Gf32vector = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 24 }, "##vcore.list->f32vector" };
VWEAK VWORD _V10vcore_Dlist___Gf64vector;VWEAK struct { VBlob sym; char bytes[24]; } _VW_V10vcore_Dlist___Gf64vector = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 24 }, "##vcore.list->f64vector" };
VWEAK VWORD _V10vcore_Dlist___Gvector;VWEAK struct { VBlob sym; char bytes[21]; } _VW_V10vcore_Dlist___Gvector = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 21 }, "##vcore.list->vector" };
VWEAK VWORD _V0unquote;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0unquote = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "unquote" };
VWEAK VWORD _V10vcore_Dcons;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V10vcore_Dcons = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "##vcore.cons" };
VWEAK VWORD _V0quote;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0quote = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "quote" };
VWEAK VWORD _V0quasisyntax;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0quasisyntax = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "quasisyntax" };
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D383 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "_V0vanity_V0core_V20" };
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D382 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "_V0vanity_V0list_V20" };
static struct { VBlob sym; char bytes[44]; } _V10_Dstring_D381 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 44 }, "_V0vanity_V0compiler_V0hygienic_V0types_V20" };
VWEAK VWORD _V0list;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0list = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "list" };
VWEAK VWORD _V0global__scope;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V0global__scope = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "global-scope" };
VWEAK VWORD _V0make__syntax;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0make__syntax = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "make-syntax" };
VWEAK VWORD _V0syntax_Q;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0syntax_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "syntax\?" };
VWEAK VWORD _V0syntax__cddr;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0syntax__cddr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "syntax-cddr" };
VWEAK VWORD _V0syntax__map;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V0syntax__map = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "syntax-map" };
VWEAK VWORD _V0syntax__cdr;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V0syntax__cdr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "syntax-cdr" };
VWEAK VWORD _V0syntax__car;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V0syntax__car = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "syntax-car" };
VWEAK VWORD _V0syntax__pair_Q;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V0syntax__pair_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "syntax-pair\?" };
VWEAK VWORD _V0syntax__caar;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0syntax__caar = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "syntax-caar" };
VWEAK VWORD _V0get__syntax__data;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V0get__syntax__data = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "get-syntax-data" };
VWEAK VWORD _V0identifier_Q;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0identifier_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "identifier\?" };
VWEAK VWORD _V0s8vector___Glist;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V0s8vector___Glist = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "s8vector->list" };
VWEAK VWORD _V0u8vector___Glist;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V0u8vector___Glist = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "u8vector->list" };
VWEAK VWORD _V0s16vector___Glist;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V0s16vector___Glist = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "s16vector->list" };
VWEAK VWORD _V0u16vector___Glist;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V0u16vector___Glist = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "u16vector->list" };
VWEAK VWORD _V0s32vector___Glist;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V0s32vector___Glist = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "s32vector->list" };
VWEAK VWORD _V0f32vector___Glist;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V0f32vector___Glist = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "f32vector->list" };
VWEAK VWORD _V0f64vector___Glist;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V0f64vector___Glist = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "f64vector->list" };
VWEAK VWORD _V0vector___Glist;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V0vector___Glist = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "vector->list" };
VWEAK VWORD _V0syntax__vector_Q;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V0syntax__vector_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "syntax-vector\?" };
VWEAK VWORD _V0syntax__cadr;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0syntax__cadr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "syntax-cadr" };
static struct { VBlob sym; char bytes[52]; } _V10_Dstring_D380 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 52 }, "_V0vanity_V0compiler_V0hygienic_V0global__forms_V20" };
VWEAK VWORD _V40VMultiImport;
VWEAK VClosure _VW_V40VMultiImport = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VMultiImport, NULL };
static __attribute__((constructor)) void VDllMain1() {
  _V0let = VEncodePointer(VInternSymbol(-599055874, &_VW_V0let.sym), VPOINTER_OTHER);
  _V0global__form__env = VEncodePointer(VInternSymbol(1415805201, &_VW_V0global__form__env.sym), VPOINTER_OTHER);
  _V0global__forms = VEncodePointer(VInternSymbol(1252986977, &_VW_V0global__forms.sym), VPOINTER_OTHER);
  _V0global__identifier = VEncodePointer(VInternSymbol(-1557481786, &_VW_V0global__identifier.sym), VPOINTER_OTHER);
  _V0lambda = VEncodePointer(VInternSymbol(1054233532, &_VW_V0lambda.sym), VPOINTER_OTHER);
  _V0quasiquote = VEncodePointer(VInternSymbol(-1666054212, &_VW_V0quasiquote.sym), VPOINTER_OTHER);
  _V0syntax = VEncodePointer(VInternSymbol(-1845358186, &_VW_V0syntax.sym), VPOINTER_OTHER);
  _V10vcore_Dappend = VEncodePointer(VInternSymbol(1742285522, &_VW_V10vcore_Dappend.sym), VPOINTER_OTHER);
  _V0unquote__splicing = VEncodePointer(VInternSymbol(-922270485, &_VW_V0unquote__splicing.sym), VPOINTER_OTHER);
  _V10vcore_Dlist___Gs8vector = VEncodePointer(VInternSymbol(-1495667680, &_VW_V10vcore_Dlist___Gs8vector.sym), VPOINTER_OTHER);
  _V10vcore_Dlist___Gu8vector = VEncodePointer(VInternSymbol(-398660499, &_VW_V10vcore_Dlist___Gu8vector.sym), VPOINTER_OTHER);
  _V10vcore_Dlist___Gs16vector = VEncodePointer(VInternSymbol(-604043574, &_VW_V10vcore_Dlist___Gs16vector.sym), VPOINTER_OTHER);
  _V10vcore_Dlist___Gu16vector = VEncodePointer(VInternSymbol(-288736869, &_VW_V10vcore_Dlist___Gu16vector.sym), VPOINTER_OTHER);
  _V10vcore_Dlist___Gs32vector = VEncodePointer(VInternSymbol(-1792200977, &_VW_V10vcore_Dlist___Gs32vector.sym), VPOINTER_OTHER);
  _V10vcore_Dlist___Gf32vector = VEncodePointer(VInternSymbol(-797019339, &_VW_V10vcore_Dlist___Gf32vector.sym), VPOINTER_OTHER);
  _V10vcore_Dlist___Gf64vector = VEncodePointer(VInternSymbol(-1111467472, &_VW_V10vcore_Dlist___Gf64vector.sym), VPOINTER_OTHER);
  _V10vcore_Dlist___Gvector = VEncodePointer(VInternSymbol(484282061, &_VW_V10vcore_Dlist___Gvector.sym), VPOINTER_OTHER);
  _V0unquote = VEncodePointer(VInternSymbol(-374061087, &_VW_V0unquote.sym), VPOINTER_OTHER);
  _V10vcore_Dcons = VEncodePointer(VInternSymbol(-774369668, &_VW_V10vcore_Dcons.sym), VPOINTER_OTHER);
  _V0quote = VEncodePointer(VInternSymbol(-278310088, &_VW_V0quote.sym), VPOINTER_OTHER);
  _V0quasisyntax = VEncodePointer(VInternSymbol(71445183, &_VW_V0quasisyntax.sym), VPOINTER_OTHER);
  _V0list = VEncodePointer(VInternSymbol(-1594870040, &_VW_V0list.sym), VPOINTER_OTHER);
  _V0global__scope = VEncodePointer(VInternSymbol(1381586664, &_VW_V0global__scope.sym), VPOINTER_OTHER);
  _V0make__syntax = VEncodePointer(VInternSymbol(1292393424, &_VW_V0make__syntax.sym), VPOINTER_OTHER);
  _V0syntax_Q = VEncodePointer(VInternSymbol(563065347, &_VW_V0syntax_Q.sym), VPOINTER_OTHER);
  _V0syntax__cddr = VEncodePointer(VInternSymbol(1072813644, &_VW_V0syntax__cddr.sym), VPOINTER_OTHER);
  _V0syntax__map = VEncodePointer(VInternSymbol(-1912397961, &_VW_V0syntax__map.sym), VPOINTER_OTHER);
  _V0syntax__cdr = VEncodePointer(VInternSymbol(1215523264, &_VW_V0syntax__cdr.sym), VPOINTER_OTHER);
  _V0syntax__car = VEncodePointer(VInternSymbol(1390011611, &_VW_V0syntax__car.sym), VPOINTER_OTHER);
  _V0syntax__pair_Q = VEncodePointer(VInternSymbol(-1139867809, &_VW_V0syntax__pair_Q.sym), VPOINTER_OTHER);
  _V0syntax__caar = VEncodePointer(VInternSymbol(-1227349665, &_VW_V0syntax__caar.sym), VPOINTER_OTHER);
  _V0get__syntax__data = VEncodePointer(VInternSymbol(-1271181522, &_VW_V0get__syntax__data.sym), VPOINTER_OTHER);
  _V0identifier_Q = VEncodePointer(VInternSymbol(1823737055, &_VW_V0identifier_Q.sym), VPOINTER_OTHER);
  _V0s8vector___Glist = VEncodePointer(VInternSymbol(-909584740, &_VW_V0s8vector___Glist.sym), VPOINTER_OTHER);
  _V0u8vector___Glist = VEncodePointer(VInternSymbol(-1502612760, &_VW_V0u8vector___Glist.sym), VPOINTER_OTHER);
  _V0s16vector___Glist = VEncodePointer(VInternSymbol(730976843, &_VW_V0s16vector___Glist.sym), VPOINTER_OTHER);
  _V0u16vector___Glist = VEncodePointer(VInternSymbol(403480187, &_VW_V0u16vector___Glist.sym), VPOINTER_OTHER);
  _V0s32vector___Glist = VEncodePointer(VInternSymbol(1109387554, &_VW_V0s32vector___Glist.sym), VPOINTER_OTHER);
  _V0f32vector___Glist = VEncodePointer(VInternSymbol(1214355089, &_VW_V0f32vector___Glist.sym), VPOINTER_OTHER);
  _V0f64vector___Glist = VEncodePointer(VInternSymbol(1257547487, &_VW_V0f64vector___Glist.sym), VPOINTER_OTHER);
  _V0vector___Glist = VEncodePointer(VInternSymbol(45656078, &_VW_V0vector___Glist.sym), VPOINTER_OTHER);
  _V0syntax__vector_Q = VEncodePointer(VInternSymbol(-1354385234, &_VW_V0syntax__vector_Q.sym), VPOINTER_OTHER);
  _V0syntax__cadr = VEncodePointer(VInternSymbol(-176119071, &_VW_V0syntax__cadr.sym), VPOINTER_OTHER);
  _V10_Dpair_D386.first = _V0let;
  _V10_Dpair_D386.rest = VEncodePointer(&_V10_Dpair_D385, VPOINTER_PAIR);
  _V10_Dpair_D385.first = _V0quasiquote;
  _V10_Dpair_D385.rest = VEncodePointer(&_V10_Dpair_D384, VPOINTER_PAIR);
  _V10_Dpair_D384.first = _V0quasisyntax;
  _V10_Dpair_D384.rest = VNULL;
  _V40VMultiImport = VEncodePointer(VLookupConstant("_V40VMultiImport", &_VW_V40VMultiImport), VPOINTER_CLOSURE);
}
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0global__identifier, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0syntax__unpack, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__let, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax, _var0, _var1);
static void _V0vanity_V0compiler_V0hygienic_V0global__forms_V20_V0k4(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0hygienic_V0global__forms_V20_V0k4" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0hygienic_V0global__forms_V20_V0k4, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((##intrinsic "VMultiImport") (bruijn ##.k.61 4 0) (##string ##.string.380) (bruijn ##.x.62 0 0) 'syntax-cadr 'syntax-vector? 'vector->list 'f64vector->list 'f32vector->list 's32vector->list 'u16vector->list 's16vector->list 'u8vector->list 's8vector->list 'identifier? 'get-syntax-data 'syntax-caar 'syntax-pair? 'syntax-car 'syntax-cdr 'syntax-map 'syntax-cddr 'syntax? 'make-syntax 'global-scope 'list)
    VCallFuncWithGC(runtime, (VFunc)VMultiImport, 25,
      statics->up->up->up->vars[0],
      VEncodePointer(&_V10_Dstring_D380.sym, VPOINTER_OTHER),
      _var0,
      _V0syntax__cadr,
      _V0syntax__vector_Q,
      _V0vector___Glist,
      _V0f64vector___Glist,
      _V0f32vector___Glist,
      _V0s32vector___Glist,
      _V0u16vector___Glist,
      _V0s16vector___Glist,
      _V0u8vector___Glist,
      _V0s8vector___Glist,
      _V0identifier_Q,
      _V0get__syntax__data,
      _V0syntax__caar,
      _V0syntax__pair_Q,
      _V0syntax__car,
      _V0syntax__cdr,
      _V0syntax__map,
      _V0syntax__cddr,
      _V0syntax_Q,
      _V0make__syntax,
      _V0global__scope,
      _V0list);
}
static void _V0vanity_V0compiler_V0hygienic_V0global__forms_V20_V0k3(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0hygienic_V0global__forms_V20_V0k3" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0hygienic_V0global__forms_V20_V0k3, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.vector (close _V0vanity_V0compiler_V0hygienic_V0global__forms_V20_V0k4) (bruijn ##.x.63 2 0) (bruijn ##.x.64 1 0) (bruijn ##.x.65 0 0))
    VCallFuncWithGC(runtime, (VFunc)VCreateVector, 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0hygienic_V0global__forms_V20_V0k4, self)))),
      statics->up->vars[0],
      statics->vars[0],
      _var0);
}
static void _V0vanity_V0compiler_V0hygienic_V0global__forms_V20_V0k2(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0hygienic_V0global__forms_V20_V0k2" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0hygienic_V0global__forms_V20_V0k2, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0hygienic_V0global__forms_V20_V0k3) (##string ##.string.381))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0hygienic_V0global__forms_V20_V0k3, self)))),
      VEncodePointer(&_V10_Dstring_D381.sym, VPOINTER_OTHER));
}
static void _V0vanity_V0compiler_V0hygienic_V0global__forms_V20_V0k1(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0hygienic_V0global__forms_V20_V0k1" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0hygienic_V0global__forms_V20_V0k1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0hygienic_V0global__forms_V20_V0k2) (##string ##.string.382))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0hygienic_V0global__forms_V20_V0k2, self)))),
      VEncodePointer(&_V10_Dstring_D382.sym, VPOINTER_OTHER));
}
static void _V0vanity_V0compiler_V0hygienic_V0global__forms_V20_V0lambda2(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0hygienic_V0global__forms_V20_V0lambda2" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0hygienic_V0global__forms_V20_V0lambda2, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0hygienic_V0global__forms_V20_V0k1) (##string ##.string.383))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0hygienic_V0global__forms_V20_V0k1, self)))),
      VEncodePointer(&_V10_Dstring_D383.sym, VPOINTER_OTHER));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax_V0k5(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax_V0k5" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax_V0k5, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.expand-quasisyntax-impl.40 2 3) (bruijn ##.k.67 1 0) 1 (bruijn ##.x.68 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[3]), 3,
      statics->vars[0],
      VEncodeInt(1l),
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.syntax-cadr.2 2 1) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax_V0k5) (bruijn ##.form.46 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[1]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax_V0k5, self)))),
      _var1);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k10(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k10" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k10, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.get-syntax-data.13 7 12) (bruijn ##.k.187 1 0) (bruijn ##.x.188 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 12)), 2,
      statics->vars[0],
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k9(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k9" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k9, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.186 1 0) ((bruijn ##.syntax-car.16 6 15) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k10) (bruijn ##.expr.48 4 2)) ((bruijn ##.k.187 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 15)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k10, self)))),
      statics->up->up->up->vars[2]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k18(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k18" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k18, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.69 12 0) (##inline ##vcore.cons (bruijn ##.x.72 7 0) (##inline ##vcore.cons (##inline ##vcore.cons (bruijn ##.x.86 6 0) (##inline ##vcore.cons (bruijn ##.x.88 5 0) '())) (##inline ##vcore.cons (##inline ##vcore.cons (bruijn ##.x.77 4 0) (##inline ##vcore.cons (bruijn ##.x.79 1 0) (##inline ##vcore.cons (##inline ##vcore.cons (bruijn ##.x.82 0 0) (##inline ##vcore.cons '() '())) '()))) '()))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 0)), 1,
      VInlineCons2(runtime,
        VGetArg(statics, 7-1, 0),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        VGetArg(statics, 6-1, 0),
        VInlineCons2(runtime,
        VGetArg(statics, 5-1, 0),
        VNULL)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        statics->up->up->up->vars[0],
        VInlineCons2(runtime,
        statics->vars[0],
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _var0,
        VInlineCons2(runtime,
        VNULL,
        VNULL)),
        VNULL))),
        VNULL))));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k17(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k17" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k17, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.global-identifier.45 12 8) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k18) 'quote)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 8)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k18, self)))),
      _V0quote);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k16(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k16" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k16, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.expand-quasisyntax-impl.40 11 3) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k17) (bruijn ##.reg.354 1 0) (bruijn ##.x.85 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 3)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k17, self)))),
      statics->vars[0],
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k15(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k15" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k15, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.354) ((##vcore.+ (bruijn ##.quotation.47 9 1) 1)) ((bruijn ##.syntax-cadr.2 11 1) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k16) (bruijn ##.expr.48 9 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      VGetArg(statics, 9-1, 1),
      VEncodeInt(1l));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 1)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k16, self)))),
      VGetArg(statics, 9-1, 2));
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k14(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k14" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k14, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.global-identifier.45 8 8) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k15) '##vcore.cons)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 8)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k15, self)))),
      _V10vcore_Dcons);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k13(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k13" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k13, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.global-identifier.45 7 8) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k14) 'quasisyntax)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 8)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k14, self)))),
      _V0quasisyntax);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k12(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k12" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k12, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.global-identifier.45 6 8) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k13) 'quote)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 8)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k13, self)))),
      _V0quote);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k21(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k21" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k21, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.69 9 0) (##inline ##vcore.cons (bruijn ##.x.92 1 0) (##inline ##vcore.cons (bruijn ##.x.94 0 0) '())))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 0)), 1,
      VInlineCons2(runtime,
        statics->vars[0],
        VInlineCons2(runtime,
        _var0,
        VNULL)));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k20(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k20" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k20, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.vector->list.4 10 3) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k21) (bruijn ##.x.50 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 3)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k21, self)))),
      statics->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k23(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k23" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k23, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.69 10 0) (##inline ##vcore.cons (bruijn ##.x.96 1 0) (##inline ##vcore.cons (bruijn ##.x.98 0 0) '())))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 0)), 1,
      VInlineCons2(runtime,
        statics->vars[0],
        VInlineCons2(runtime,
        _var0,
        VNULL)));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k22(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k22" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k22, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.f64vector->list.5 11 4) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k23) (bruijn ##.x.50 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 4)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k23, self)))),
      statics->up->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k25(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k25" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k25, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.69 11 0) (##inline ##vcore.cons (bruijn ##.x.100 1 0) (##inline ##vcore.cons (bruijn ##.x.102 0 0) '())))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 0)), 1,
      VInlineCons2(runtime,
        statics->vars[0],
        VInlineCons2(runtime,
        _var0,
        VNULL)));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k24(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k24" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k24, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.f32vector->list.6 12 5) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k25) (bruijn ##.x.50 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 5)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k25, self)))),
      VGetArg(statics, 5-1, 0));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k27(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k27" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k27, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.69 12 0) (##inline ##vcore.cons (bruijn ##.x.104 1 0) (##inline ##vcore.cons (bruijn ##.x.106 0 0) '())))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 0)), 1,
      VInlineCons2(runtime,
        statics->vars[0],
        VInlineCons2(runtime,
        _var0,
        VNULL)));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k26(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k26" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k26, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.s32vector->list.7 13 6) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k27) (bruijn ##.x.50 6 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 6)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k27, self)))),
      VGetArg(statics, 6-1, 0));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k29(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k29" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k29, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.69 13 0) (##inline ##vcore.cons (bruijn ##.x.108 1 0) (##inline ##vcore.cons (bruijn ##.x.110 0 0) '())))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 0)), 1,
      VInlineCons2(runtime,
        statics->vars[0],
        VInlineCons2(runtime,
        _var0,
        VNULL)));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k28(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k28" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k28, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.u16vector->list.8 14 7) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k29) (bruijn ##.x.50 7 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 7)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k29, self)))),
      VGetArg(statics, 7-1, 0));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k31(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k31" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k31, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.69 14 0) (##inline ##vcore.cons (bruijn ##.x.112 1 0) (##inline ##vcore.cons (bruijn ##.x.114 0 0) '())))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 0)), 1,
      VInlineCons2(runtime,
        statics->vars[0],
        VInlineCons2(runtime,
        _var0,
        VNULL)));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k30(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k30" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k30, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.s16vector->list.9 15 8) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k31) (bruijn ##.x.50 8 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 8)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k31, self)))),
      VGetArg(statics, 8-1, 0));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k33(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k33" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k33, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.69 15 0) (##inline ##vcore.cons (bruijn ##.x.116 1 0) (##inline ##vcore.cons (bruijn ##.x.118 0 0) '())))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 0)), 1,
      VInlineCons2(runtime,
        statics->vars[0],
        VInlineCons2(runtime,
        _var0,
        VNULL)));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k32(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k32" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k32, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.u8vector->list.10 16 9) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k33) (bruijn ##.x.50 9 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 9)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k33, self)))),
      VGetArg(statics, 9-1, 0));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k35(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k35" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k35, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.69 16 0) (##inline ##vcore.cons (bruijn ##.x.120 1 0) (##inline ##vcore.cons (bruijn ##.x.122 0 0) '())))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 0)), 1,
      VInlineCons2(runtime,
        statics->vars[0],
        VInlineCons2(runtime,
        _var0,
        VNULL)));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k34(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k34" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k34, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.s8vector->list.11 17 10) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k35) (bruijn ##.x.50 10 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 17-1, 10)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k35, self)))),
      VGetArg(statics, 10-1, 0));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k41(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k41" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k41, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.69 13 0) (##inline ##vcore.cons (bruijn ##.x.123 6 0) (##inline ##vcore.cons (##inline ##vcore.cons (bruijn ##.x.136 5 0) (##inline ##vcore.cons (bruijn ##.x.138 4 0) '())) (##inline ##vcore.cons (##inline ##vcore.cons (bruijn ##.x.128 3 0) (##inline ##vcore.cons (bruijn ##.x.130 1 0) (##inline ##vcore.cons (##inline ##vcore.cons (bruijn ##.x.133 0 0) (##inline ##vcore.cons '() '())) '()))) '()))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 0)), 1,
      VInlineCons2(runtime,
        VGetArg(statics, 6-1, 0),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        VGetArg(statics, 5-1, 0),
        VInlineCons2(runtime,
        statics->up->up->up->vars[0],
        VNULL)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        statics->up->up->vars[0],
        VInlineCons2(runtime,
        statics->vars[0],
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _var0,
        VInlineCons2(runtime,
        VNULL,
        VNULL)),
        VNULL))),
        VNULL))));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k40(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k40" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k40, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.global-identifier.45 13 8) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k41) 'quote)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 8)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k41, self)))),
      _V0quote);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k39(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k39" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k39, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.364) ((##vcore.- (bruijn ##.quotation.47 11 1) 1)) ((bruijn ##.expand-quasisyntax-impl.40 12 3) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k40) (bruijn ##.reg.364 0 0) (bruijn ##.x.50 6 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VSub2(runtime, NULL,
      VGetArg(statics, 11-1, 1),
      VEncodeInt(1l));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 3)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k40, self)))),
      self->vars[0],
      VGetArg(statics, 6-1, 0));
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k38(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k38" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k38, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.global-identifier.45 10 8) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k39) '##vcore.cons)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 8)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k39, self)))),
      _V10vcore_Dcons);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k37(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k37" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k37, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.global-identifier.45 9 8) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k38) 'unquote)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 8)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k38, self)))),
      _V0unquote);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k36(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k36" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k36, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.global-identifier.45 8 8) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k37) 'quote)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 8)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k37, self)))),
      _V0quote);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k19(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k19" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k19, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.355) ((##vcore.= (bruijn ##.quotation.47 6 1) 1)) (if (bruijn ##.reg.355 0 0) (basic-block 1 1 (##.reg.356) ((##vcore.vector? (bruijn ##.x.50 2 0))) (if (bruijn ##.reg.356 0 0) ((bruijn ##.global-identifier.45 8 8) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k20) '##vcore.list->vector) (basic-block 1 1 (##.reg.357) ((##vcore.f64vector? (bruijn ##.x.50 3 0))) (if (bruijn ##.reg.357 0 0) ((bruijn ##.global-identifier.45 9 8) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k22) '##vcore.list->f64vector) (basic-block 1 1 (##.reg.358) ((##vcore.f32vector? (bruijn ##.x.50 4 0))) (if (bruijn ##.reg.358 0 0) ((bruijn ##.global-identifier.45 10 8) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k24) '##vcore.list->f32vector) (basic-block 1 1 (##.reg.359) ((##vcore.s32vector? (bruijn ##.x.50 5 0))) (if (bruijn ##.reg.359 0 0) ((bruijn ##.global-identifier.45 11 8) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k26) '##vcore.list->s32vector) (basic-block 1 1 (##.reg.360) ((##vcore.u16vector? (bruijn ##.x.50 6 0))) (if (bruijn ##.reg.360 0 0) ((bruijn ##.global-identifier.45 12 8) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k28) '##vcore.list->u16vector) (basic-block 1 1 (##.reg.361) ((##vcore.s16vector? (bruijn ##.x.50 7 0))) (if (bruijn ##.reg.361 0 0) ((bruijn ##.global-identifier.45 13 8) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k30) '##vcore.list->s16vector) (basic-block 1 1 (##.reg.362) ((##vcore.u8vector? (bruijn ##.x.50 8 0))) (if (bruijn ##.reg.362 0 0) ((bruijn ##.global-identifier.45 14 8) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k32) '##vcore.list->u8vector) (basic-block 1 1 (##.reg.363) ((##vcore.s8vector? (bruijn ##.x.50 9 0))) (if (bruijn ##.reg.363 0 0) ((bruijn ##.global-identifier.45 15 8) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k34) '##vcore.list->s8vector) ((bruijn ##.k.69 14 0) (bruijn ##.x.50 9 0)))))))))))))))))) ((bruijn ##.global-identifier.45 7 8) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k36) '##vcore.cons)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCmpEq(runtime, NULL,
      VGetArg(statics, 6-1, 1),
      VEncodeInt(1l));
if(VDecodeBool(
self->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VVectorP2(runtime, NULL,
      statics->up->vars[0]);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 8)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k20, self)))),
      _V10vcore_Dlist___Gvector);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VF64VectorP(runtime, NULL,
      statics->up->up->vars[0]);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 8)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k22, self)))),
      _V10vcore_Dlist___Gf64vector);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VF32VectorP(runtime, NULL,
      statics->up->up->up->vars[0]);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 8)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k24, self)))),
      _V10vcore_Dlist___Gf32vector);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VS32VectorP(runtime, NULL,
      VGetArg(statics, 5-1, 0));
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 8)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k26, self)))),
      _V10vcore_Dlist___Gs32vector);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VU16VectorP(runtime, NULL,
      VGetArg(statics, 6-1, 0));
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 8)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k28, self)))),
      _V10vcore_Dlist___Gu16vector);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VS16VectorP(runtime, NULL,
      VGetArg(statics, 7-1, 0));
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 8)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k30, self)))),
      _V10vcore_Dlist___Gs16vector);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VU8VectorP(runtime, NULL,
      VGetArg(statics, 8-1, 0));
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 8)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k32, self)))),
      _V10vcore_Dlist___Gu8vector);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VS8VectorP(runtime, NULL,
      VGetArg(statics, 9-1, 0));
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 8)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k34, self)))),
      _V10vcore_Dlist___Gs8vector);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 0)), 1,
      VGetArg(statics, 9-1, 0));
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
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 8)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k36, self)))),
      _V10vcore_Dcons);
}
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k48(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k48" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k48, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.180 4 0) (##inline ##vcore.eq? (bruijn ##.x.182 0 0) 'unquote-splicing))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VInlineEq2(runtime,
        _var0,
        _V0unquote__splicing));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k47(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k47" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k47, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.get-syntax-data.13 12 12) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k48) (bruijn ##.x.183 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 12)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k48, self)))),
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k46(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k46" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k46, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.181 0 0) ((bruijn ##.syntax-caar.14 11 13) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k47) (bruijn ##.expr.48 9 2)) ((bruijn ##.k.180 2 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 13)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k47, self)))),
      VGetArg(statics, 9-1, 2));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k45(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k45" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k45, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.identifier?.12 10 11) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k46) (bruijn ##.x.184 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 11)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k46, self)))),
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k44(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k44" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k44, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.179 1 0) ((bruijn ##.syntax-caar.14 9 13) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k45) (bruijn ##.expr.48 7 2)) ((bruijn ##.k.180 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 13)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k45, self)))),
      VGetArg(statics, 7-1, 2));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k54(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k54" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k54, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.69 13 0) (##inline ##vcore.cons (bruijn ##.x.141 4 0) (##inline ##vcore.cons (bruijn ##.x.143 2 0) (##inline ##vcore.cons (bruijn ##.x.145 0 0) '()))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 0)), 1,
      VInlineCons2(runtime,
        statics->up->up->up->vars[0],
        VInlineCons2(runtime,
        statics->up->vars[0],
        VInlineCons2(runtime,
        _var0,
        VNULL))));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k53(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k53" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k53, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.expand-quasisyntax-impl.40 13 3) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k54) (bruijn ##.quotation.47 12 1) (bruijn ##.x.146 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 3)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k54, self)))),
      VGetArg(statics, 12-1, 1),
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k52(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k52" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k52, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.syntax-cdr.17 13 16) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k53) (bruijn ##.expr.48 11 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 16)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k53, self)))),
      VGetArg(statics, 11-1, 2));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k51(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k51" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k51, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.syntax-cadr.2 12 1) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k52) (bruijn ##.x.147 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 1)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k52, self)))),
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k50(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k50" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k50, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.syntax-car.16 11 15) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k51) (bruijn ##.expr.48 9 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 15)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k51, self)))),
      VGetArg(statics, 9-1, 2));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k65(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k65" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k65, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.69 20 0) (##inline ##vcore.cons (bruijn ##.x.148 11 0) (##inline ##vcore.cons (##inline ##vcore.cons (bruijn ##.x.151 10 0) (##inline ##vcore.cons (##inline ##vcore.cons (bruijn ##.x.169 9 0) (##inline ##vcore.cons (bruijn ##.x.171 8 0) '())) (##inline ##vcore.cons (##inline ##vcore.cons (bruijn ##.x.159 7 0) (##inline ##vcore.cons (bruijn ##.x.161 3 0) (##inline ##vcore.cons (##inline ##vcore.cons (bruijn ##.x.164 2 0) (##inline ##vcore.cons '() '())) '()))) (##inline ##vcore.cons (bruijn ##.x.157 0 0) '())))) '())))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 20-1, 0)), 1,
      VInlineCons2(runtime,
        VGetArg(statics, 11-1, 0),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        VGetArg(statics, 10-1, 0),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        VGetArg(statics, 9-1, 0),
        VInlineCons2(runtime,
        VGetArg(statics, 8-1, 0),
        VNULL)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        VGetArg(statics, 7-1, 0),
        VInlineCons2(runtime,
        statics->up->up->vars[0],
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        statics->up->vars[0],
        VInlineCons2(runtime,
        VNULL,
        VNULL)),
        VNULL))),
        VInlineCons2(runtime,
        _var0,
        VNULL)))),
        VNULL)));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k64(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k64" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k64, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.expand-quasisyntax-impl.40 20 3) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k65) (bruijn ##.quotation.47 19 1) (bruijn ##.x.158 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 20-1, 3)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k65, self)))),
      VGetArg(statics, 19-1, 1),
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k63(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k63" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k63, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.syntax-cdr.17 20 16) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k64) (bruijn ##.expr.48 18 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 20-1, 16)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k64, self)))),
      VGetArg(statics, 18-1, 2));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k62(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k62" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k62, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.global-identifier.45 18 8) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k63) 'quote)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 18-1, 8)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k63, self)))),
      _V0quote);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k61(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k61" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k61, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.expand-quasisyntax-impl.40 17 3) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k62) (bruijn ##.reg.366 2 0) (bruijn ##.x.167 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 17-1, 3)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k62, self)))),
      statics->up->vars[0],
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k60(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k60" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k60, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.syntax-cadr.2 17 1) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k61) (bruijn ##.x.168 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 17-1, 1)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k61, self)))),
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k59(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k59" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k59, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.366) ((##vcore.- (bruijn ##.quotation.47 14 1) 1)) ((bruijn ##.syntax-car.16 16 15) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k60) (bruijn ##.expr.48 14 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VSub2(runtime, NULL,
      VGetArg(statics, 14-1, 1),
      VEncodeInt(1l));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 15)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k60, self)))),
      VGetArg(statics, 14-1, 2));
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k58(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k58" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k58, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.global-identifier.45 13 8) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k59) '##vcore.cons)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 8)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k59, self)))),
      _V10vcore_Dcons);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k57(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k57" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k57, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.global-identifier.45 12 8) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k58) 'unquote-splicing)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 8)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k58, self)))),
      _V0unquote__splicing);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k56(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k56" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k56, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.global-identifier.45 11 8) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k57) 'quote)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 8)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k57, self)))),
      _V0quote);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k55(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k55" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k55, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.global-identifier.45 10 8) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k56) '##vcore.cons)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 8)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k56, self)))),
      _V10vcore_Dcons);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k70(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k70" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k70, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.69 12 0) (##inline ##vcore.cons (bruijn ##.x.172 4 0) (##inline ##vcore.cons (bruijn ##.x.174 2 0) (##inline ##vcore.cons (bruijn ##.x.176 0 0) '()))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 0)), 1,
      VInlineCons2(runtime,
        statics->up->up->up->vars[0],
        VInlineCons2(runtime,
        statics->up->vars[0],
        VInlineCons2(runtime,
        _var0,
        VNULL))));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k69(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k69" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k69, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.expand-quasisyntax-impl.40 12 3) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k70) (bruijn ##.quotation.47 11 1) (bruijn ##.x.177 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 3)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k70, self)))),
      VGetArg(statics, 11-1, 1),
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k68(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k68" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k68, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.syntax-cdr.17 12 16) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k69) (bruijn ##.expr.48 10 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 16)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k69, self)))),
      VGetArg(statics, 10-1, 2));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k67(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k67" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k67, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.expand-quasisyntax-impl.40 10 3) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k68) (bruijn ##.quotation.47 9 1) (bruijn ##.x.178 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 3)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k68, self)))),
      VGetArg(statics, 9-1, 1),
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k66(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k66" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k66, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.syntax-car.16 10 15) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k67) (bruijn ##.expr.48 8 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 15)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k67, self)))),
      VGetArg(statics, 8-1, 2));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k49(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k49" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k49, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.139 0 0) (basic-block 1 1 (##.reg.365) ((##vcore.= (bruijn ##.quotation.47 8 1) 1)) (if (bruijn ##.reg.365 0 0) ((bruijn ##.global-identifier.45 9 8) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k50) '##vcore.append) ((bruijn ##.global-identifier.45 9 8) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k55) '##vcore.cons))) ((bruijn ##.global-identifier.45 8 8) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k66) '##vcore.cons))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCmpEq(runtime, NULL,
      VGetArg(statics, 8-1, 1),
      VEncodeInt(1l));
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 8)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k50, self)))),
      _V10vcore_Dappend);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 8)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k55, self)))),
      _V10vcore_Dcons);
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 8)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k66, self)))),
      _V10vcore_Dcons);
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k43(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k43" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k43, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k44) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k49))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k44, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k49, self)))));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k42(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k42" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k42, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.syntax-pair?.15 7 14) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k43) (bruijn ##.x.185 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 14)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k43, self)))),
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k11(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k11" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k11, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.eq? (bruijn ##.x.1.49 0 0) 'quasisyntax) ((bruijn ##.global-identifier.45 5 8) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k12) '##vcore.cons) (if (##inline ##vcore.eq? (bruijn ##.x.1.49 0 0) 'unquote) ((bruijn ##.syntax-cadr.2 6 1) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k19) (bruijn ##.expr.48 4 2)) ((bruijn ##.syntax-car.16 6 15) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k42) (bruijn ##.expr.48 4 2))))
if(VDecodeBool(
VInlineEq2(runtime,
        _var0,
        _V0quasisyntax))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 8)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k12, self)))),
      _V10vcore_Dcons);
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        _var0,
        _V0unquote))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 1)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k19, self)))),
      statics->up->up->up->vars[2]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 15)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k42, self)))),
      statics->up->up->up->vars[2]);
}
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k8(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k8" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k8, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k9) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k11))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k9, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k11, self)))));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k7(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k7" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k7, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.identifier?.12 4 11) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k8) (bruijn ##.x.189 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[11]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k8, self)))),
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k75(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k75" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k75, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.69 6 0) (##inline ##vcore.cons (bruijn ##.x.191 3 0) (##inline ##vcore.cons (bruijn ##.x.193 0 0) '())))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 1,
      VInlineCons2(runtime,
        statics->up->up->vars[0],
        VInlineCons2(runtime,
        _var0,
        VNULL)));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k74(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k74" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k74, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.expand-quasisyntax-impl.40 6 3) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k75) (bruijn ##.quotation.47 5 1) (bruijn ##.x.194 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 3)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k75, self)))),
      VGetArg(statics, 5-1, 1),
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k73(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k73" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k73, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.vector->list.4 6 3) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k74) (bruijn ##.x.195 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 3)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k74, self)))),
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k72(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k72" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k72, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.syntax-unpack.44 4 7) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k73) (bruijn ##.expr.48 3 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[7]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k73, self)))),
      statics->up->up->vars[2]);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k76(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k76" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k76, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.69 3 0) (##inline ##vcore.cons (bruijn ##.x.196 0 0) (##inline ##vcore.cons (bruijn ##.expr.48 3 2) '())))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VInlineCons2(runtime,
        _var0,
        VInlineCons2(runtime,
        statics->up->up->vars[2],
        VNULL)));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k71(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k71" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k71, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.190 0 0) ((bruijn ##.global-identifier.45 3 8) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k72) '##vcore.list->vector) ((bruijn ##.global-identifier.45 3 8) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k76) 'syntax))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[8]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k72, self)))),
      _V10vcore_Dlist___Gvector);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[8]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k76, self)))),
      _V0syntax);
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k6(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k6" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k6, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.70 0 0) ((bruijn ##.syntax-car.16 3 15) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k7) (bruijn ##.expr.48 1 2)) ((bruijn ##.syntax-vector?.3 3 2) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k71) (bruijn ##.expr.48 1 2)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[15]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k7, self)))),
      statics->vars[2]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[2]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k71, self)))),
      statics->vars[2]);
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((bruijn ##.syntax-pair?.15 2 14) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k6) (bruijn ##.expr.48 0 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[14]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k6, self)))),
      _var2);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote_V0k77(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote_V0k77" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote_V0k77, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.expand-quasiquote-impl.42 2 5) (bruijn ##.k.198 1 0) 1 (bruijn ##.x.199 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[5]), 3,
      statics->vars[0],
      VEncodeInt(1l),
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.syntax-cadr.2 2 1) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote_V0k77) (bruijn ##.form.51 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[1]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote_V0k77, self)))),
      _var1);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k82(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k82" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k82, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.get-syntax-data.13 7 12) (bruijn ##.k.318 1 0) (bruijn ##.x.319 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 12)), 2,
      statics->vars[0],
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k81(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k81" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k81, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.317 1 0) ((bruijn ##.syntax-car.16 6 15) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k82) (bruijn ##.expr.53 4 2)) ((bruijn ##.k.318 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 15)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k82, self)))),
      statics->up->up->up->vars[2]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k90(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k90" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k90, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.200 12 0) (##inline ##vcore.cons (bruijn ##.x.203 7 0) (##inline ##vcore.cons (##inline ##vcore.cons (bruijn ##.x.217 6 0) (##inline ##vcore.cons (bruijn ##.x.219 5 0) '())) (##inline ##vcore.cons (##inline ##vcore.cons (bruijn ##.x.208 4 0) (##inline ##vcore.cons (bruijn ##.x.210 1 0) (##inline ##vcore.cons (##inline ##vcore.cons (bruijn ##.x.213 0 0) (##inline ##vcore.cons '() '())) '()))) '()))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 0)), 1,
      VInlineCons2(runtime,
        VGetArg(statics, 7-1, 0),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        VGetArg(statics, 6-1, 0),
        VInlineCons2(runtime,
        VGetArg(statics, 5-1, 0),
        VNULL)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        statics->up->up->up->vars[0],
        VInlineCons2(runtime,
        statics->vars[0],
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _var0,
        VInlineCons2(runtime,
        VNULL,
        VNULL)),
        VNULL))),
        VNULL))));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k89(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k89" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k89, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.global-identifier.45 12 8) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k90) 'quote)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 8)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k90, self)))),
      _V0quote);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k88(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k88" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k88, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.expand-quasiquote-impl.42 11 5) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k89) (bruijn ##.reg.367 1 0) (bruijn ##.x.216 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 5)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k89, self)))),
      statics->vars[0],
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k87(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k87" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k87, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.367) ((##vcore.+ (bruijn ##.quotation.52 9 1) 1)) ((bruijn ##.syntax-cadr.2 11 1) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k88) (bruijn ##.expr.53 9 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      VGetArg(statics, 9-1, 1),
      VEncodeInt(1l));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 1)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k88, self)))),
      VGetArg(statics, 9-1, 2));
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k86(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k86" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k86, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.global-identifier.45 8 8) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k87) '##vcore.cons)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 8)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k87, self)))),
      _V10vcore_Dcons);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k85(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k85" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k85, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.global-identifier.45 7 8) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k86) 'quasiquote)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 8)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k86, self)))),
      _V0quasiquote);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k84(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k84" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k84, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.global-identifier.45 6 8) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k85) 'quote)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 8)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k85, self)))),
      _V0quote);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k93(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k93" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k93, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.200 9 0) (##inline ##vcore.cons (bruijn ##.x.223 1 0) (##inline ##vcore.cons (bruijn ##.x.225 0 0) '())))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 0)), 1,
      VInlineCons2(runtime,
        statics->vars[0],
        VInlineCons2(runtime,
        _var0,
        VNULL)));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k92(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k92" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k92, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.vector->list.4 10 3) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k93) (bruijn ##.x.55 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 3)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k93, self)))),
      statics->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k95(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k95" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k95, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.200 10 0) (##inline ##vcore.cons (bruijn ##.x.227 1 0) (##inline ##vcore.cons (bruijn ##.x.229 0 0) '())))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 0)), 1,
      VInlineCons2(runtime,
        statics->vars[0],
        VInlineCons2(runtime,
        _var0,
        VNULL)));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k94(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k94" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k94, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.f64vector->list.5 11 4) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k95) (bruijn ##.x.55 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 4)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k95, self)))),
      statics->up->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k97(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k97" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k97, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.200 11 0) (##inline ##vcore.cons (bruijn ##.x.231 1 0) (##inline ##vcore.cons (bruijn ##.x.233 0 0) '())))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 0)), 1,
      VInlineCons2(runtime,
        statics->vars[0],
        VInlineCons2(runtime,
        _var0,
        VNULL)));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k96(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k96" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k96, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.f32vector->list.6 12 5) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k97) (bruijn ##.x.55 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 5)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k97, self)))),
      VGetArg(statics, 5-1, 0));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k99(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k99" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k99, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.200 12 0) (##inline ##vcore.cons (bruijn ##.x.235 1 0) (##inline ##vcore.cons (bruijn ##.x.237 0 0) '())))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 0)), 1,
      VInlineCons2(runtime,
        statics->vars[0],
        VInlineCons2(runtime,
        _var0,
        VNULL)));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k98(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k98" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k98, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.s32vector->list.7 13 6) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k99) (bruijn ##.x.55 6 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 6)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k99, self)))),
      VGetArg(statics, 6-1, 0));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k101(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k101" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k101, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.200 13 0) (##inline ##vcore.cons (bruijn ##.x.239 1 0) (##inline ##vcore.cons (bruijn ##.x.241 0 0) '())))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 0)), 1,
      VInlineCons2(runtime,
        statics->vars[0],
        VInlineCons2(runtime,
        _var0,
        VNULL)));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k100(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k100" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k100, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.u16vector->list.8 14 7) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k101) (bruijn ##.x.55 7 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 7)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k101, self)))),
      VGetArg(statics, 7-1, 0));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k103(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k103" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k103, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.200 14 0) (##inline ##vcore.cons (bruijn ##.x.243 1 0) (##inline ##vcore.cons (bruijn ##.x.245 0 0) '())))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 0)), 1,
      VInlineCons2(runtime,
        statics->vars[0],
        VInlineCons2(runtime,
        _var0,
        VNULL)));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k102(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k102" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k102, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.s16vector->list.9 15 8) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k103) (bruijn ##.x.55 8 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 8)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k103, self)))),
      VGetArg(statics, 8-1, 0));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k105(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k105" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k105, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.200 15 0) (##inline ##vcore.cons (bruijn ##.x.247 1 0) (##inline ##vcore.cons (bruijn ##.x.249 0 0) '())))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 0)), 1,
      VInlineCons2(runtime,
        statics->vars[0],
        VInlineCons2(runtime,
        _var0,
        VNULL)));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k104(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k104" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k104, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.u8vector->list.10 16 9) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k105) (bruijn ##.x.55 9 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 9)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k105, self)))),
      VGetArg(statics, 9-1, 0));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k107(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k107" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k107, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.200 16 0) (##inline ##vcore.cons (bruijn ##.x.251 1 0) (##inline ##vcore.cons (bruijn ##.x.253 0 0) '())))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 0)), 1,
      VInlineCons2(runtime,
        statics->vars[0],
        VInlineCons2(runtime,
        _var0,
        VNULL)));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k106(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k106" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k106, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.s8vector->list.11 17 10) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k107) (bruijn ##.x.55 10 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 17-1, 10)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k107, self)))),
      VGetArg(statics, 10-1, 0));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k113(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k113" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k113, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.200 13 0) (##inline ##vcore.cons (bruijn ##.x.254 6 0) (##inline ##vcore.cons (##inline ##vcore.cons (bruijn ##.x.267 5 0) (##inline ##vcore.cons (bruijn ##.x.269 4 0) '())) (##inline ##vcore.cons (##inline ##vcore.cons (bruijn ##.x.259 3 0) (##inline ##vcore.cons (bruijn ##.x.261 1 0) (##inline ##vcore.cons (##inline ##vcore.cons (bruijn ##.x.264 0 0) (##inline ##vcore.cons '() '())) '()))) '()))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 0)), 1,
      VInlineCons2(runtime,
        VGetArg(statics, 6-1, 0),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        VGetArg(statics, 5-1, 0),
        VInlineCons2(runtime,
        statics->up->up->up->vars[0],
        VNULL)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        statics->up->up->vars[0],
        VInlineCons2(runtime,
        statics->vars[0],
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _var0,
        VInlineCons2(runtime,
        VNULL,
        VNULL)),
        VNULL))),
        VNULL))));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k112(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k112" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k112, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.global-identifier.45 13 8) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k113) 'quote)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 8)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k113, self)))),
      _V0quote);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k111(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k111" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k111, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.377) ((##vcore.- (bruijn ##.quotation.52 11 1) 1)) ((bruijn ##.expand-quasiquote-impl.42 12 5) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k112) (bruijn ##.reg.377 0 0) (bruijn ##.x.55 6 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VSub2(runtime, NULL,
      VGetArg(statics, 11-1, 1),
      VEncodeInt(1l));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 5)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k112, self)))),
      self->vars[0],
      VGetArg(statics, 6-1, 0));
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k110(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k110" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k110, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.global-identifier.45 10 8) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k111) '##vcore.cons)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 8)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k111, self)))),
      _V10vcore_Dcons);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k109(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k109" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k109, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.global-identifier.45 9 8) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k110) 'unquote)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 8)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k110, self)))),
      _V0unquote);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k108(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k108" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k108, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.global-identifier.45 8 8) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k109) 'quote)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 8)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k109, self)))),
      _V0quote);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k91(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k91" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k91, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.368) ((##vcore.= (bruijn ##.quotation.52 6 1) 1)) (if (bruijn ##.reg.368 0 0) (basic-block 1 1 (##.reg.369) ((##vcore.vector? (bruijn ##.x.55 2 0))) (if (bruijn ##.reg.369 0 0) ((bruijn ##.global-identifier.45 8 8) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k92) '##vcore.list->vector) (basic-block 1 1 (##.reg.370) ((##vcore.f64vector? (bruijn ##.x.55 3 0))) (if (bruijn ##.reg.370 0 0) ((bruijn ##.global-identifier.45 9 8) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k94) '##vcore.list->f64vector) (basic-block 1 1 (##.reg.371) ((##vcore.f32vector? (bruijn ##.x.55 4 0))) (if (bruijn ##.reg.371 0 0) ((bruijn ##.global-identifier.45 10 8) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k96) '##vcore.list->f32vector) (basic-block 1 1 (##.reg.372) ((##vcore.s32vector? (bruijn ##.x.55 5 0))) (if (bruijn ##.reg.372 0 0) ((bruijn ##.global-identifier.45 11 8) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k98) '##vcore.list->s32vector) (basic-block 1 1 (##.reg.373) ((##vcore.u16vector? (bruijn ##.x.55 6 0))) (if (bruijn ##.reg.373 0 0) ((bruijn ##.global-identifier.45 12 8) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k100) '##vcore.list->u16vector) (basic-block 1 1 (##.reg.374) ((##vcore.s16vector? (bruijn ##.x.55 7 0))) (if (bruijn ##.reg.374 0 0) ((bruijn ##.global-identifier.45 13 8) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k102) '##vcore.list->s16vector) (basic-block 1 1 (##.reg.375) ((##vcore.u8vector? (bruijn ##.x.55 8 0))) (if (bruijn ##.reg.375 0 0) ((bruijn ##.global-identifier.45 14 8) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k104) '##vcore.list->u8vector) (basic-block 1 1 (##.reg.376) ((##vcore.s8vector? (bruijn ##.x.55 9 0))) (if (bruijn ##.reg.376 0 0) ((bruijn ##.global-identifier.45 15 8) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k106) '##vcore.list->s8vector) ((bruijn ##.k.200 14 0) (bruijn ##.x.55 9 0)))))))))))))))))) ((bruijn ##.global-identifier.45 7 8) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k108) '##vcore.cons)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCmpEq(runtime, NULL,
      VGetArg(statics, 6-1, 1),
      VEncodeInt(1l));
if(VDecodeBool(
self->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VVectorP2(runtime, NULL,
      statics->up->vars[0]);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 8)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k92, self)))),
      _V10vcore_Dlist___Gvector);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VF64VectorP(runtime, NULL,
      statics->up->up->vars[0]);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 8)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k94, self)))),
      _V10vcore_Dlist___Gf64vector);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VF32VectorP(runtime, NULL,
      statics->up->up->up->vars[0]);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 8)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k96, self)))),
      _V10vcore_Dlist___Gf32vector);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VS32VectorP(runtime, NULL,
      VGetArg(statics, 5-1, 0));
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 8)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k98, self)))),
      _V10vcore_Dlist___Gs32vector);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VU16VectorP(runtime, NULL,
      VGetArg(statics, 6-1, 0));
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 8)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k100, self)))),
      _V10vcore_Dlist___Gu16vector);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VS16VectorP(runtime, NULL,
      VGetArg(statics, 7-1, 0));
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 8)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k102, self)))),
      _V10vcore_Dlist___Gs16vector);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VU8VectorP(runtime, NULL,
      VGetArg(statics, 8-1, 0));
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 8)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k104, self)))),
      _V10vcore_Dlist___Gu8vector);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VS8VectorP(runtime, NULL,
      VGetArg(statics, 9-1, 0));
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 8)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k106, self)))),
      _V10vcore_Dlist___Gs8vector);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 0)), 1,
      VGetArg(statics, 9-1, 0));
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
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 8)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k108, self)))),
      _V10vcore_Dcons);
}
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k120(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k120" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k120, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.311 4 0) (##inline ##vcore.eq? (bruijn ##.x.313 0 0) 'unquote-splicing))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VInlineEq2(runtime,
        _var0,
        _V0unquote__splicing));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k119(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k119" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k119, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.get-syntax-data.13 12 12) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k120) (bruijn ##.x.314 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 12)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k120, self)))),
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k118(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k118" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k118, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.312 0 0) ((bruijn ##.syntax-caar.14 11 13) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k119) (bruijn ##.expr.53 9 2)) ((bruijn ##.k.311 2 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 13)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k119, self)))),
      VGetArg(statics, 9-1, 2));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k117(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k117" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k117, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.identifier?.12 10 11) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k118) (bruijn ##.x.315 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 11)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k118, self)))),
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k116(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k116" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k116, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.310 1 0) ((bruijn ##.syntax-caar.14 9 13) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k117) (bruijn ##.expr.53 7 2)) ((bruijn ##.k.311 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 13)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k117, self)))),
      VGetArg(statics, 7-1, 2));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k126(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k126" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k126, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.200 13 0) (##inline ##vcore.cons (bruijn ##.x.272 4 0) (##inline ##vcore.cons (bruijn ##.x.274 2 0) (##inline ##vcore.cons (bruijn ##.x.276 0 0) '()))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 0)), 1,
      VInlineCons2(runtime,
        statics->up->up->up->vars[0],
        VInlineCons2(runtime,
        statics->up->vars[0],
        VInlineCons2(runtime,
        _var0,
        VNULL))));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k125(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k125" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k125, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.expand-quasiquote-impl.42 13 5) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k126) (bruijn ##.quotation.52 12 1) (bruijn ##.x.277 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 5)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k126, self)))),
      VGetArg(statics, 12-1, 1),
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k124(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k124" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k124, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.syntax-cdr.17 13 16) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k125) (bruijn ##.expr.53 11 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 16)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k125, self)))),
      VGetArg(statics, 11-1, 2));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k123(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k123" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k123, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.syntax-cadr.2 12 1) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k124) (bruijn ##.x.278 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 1)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k124, self)))),
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k122(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k122" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k122, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.syntax-car.16 11 15) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k123) (bruijn ##.expr.53 9 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 15)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k123, self)))),
      VGetArg(statics, 9-1, 2));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k137(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k137" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k137, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.200 20 0) (##inline ##vcore.cons (bruijn ##.x.279 11 0) (##inline ##vcore.cons (##inline ##vcore.cons (bruijn ##.x.282 10 0) (##inline ##vcore.cons (##inline ##vcore.cons (bruijn ##.x.300 9 0) (##inline ##vcore.cons (bruijn ##.x.302 8 0) '())) (##inline ##vcore.cons (##inline ##vcore.cons (bruijn ##.x.290 7 0) (##inline ##vcore.cons (bruijn ##.x.292 3 0) (##inline ##vcore.cons (##inline ##vcore.cons (bruijn ##.x.295 2 0) (##inline ##vcore.cons '() '())) '()))) (##inline ##vcore.cons (bruijn ##.x.288 0 0) '())))) '())))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 20-1, 0)), 1,
      VInlineCons2(runtime,
        VGetArg(statics, 11-1, 0),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        VGetArg(statics, 10-1, 0),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        VGetArg(statics, 9-1, 0),
        VInlineCons2(runtime,
        VGetArg(statics, 8-1, 0),
        VNULL)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        VGetArg(statics, 7-1, 0),
        VInlineCons2(runtime,
        statics->up->up->vars[0],
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        statics->up->vars[0],
        VInlineCons2(runtime,
        VNULL,
        VNULL)),
        VNULL))),
        VInlineCons2(runtime,
        _var0,
        VNULL)))),
        VNULL)));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k136(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k136" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k136, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.expand-quasiquote-impl.42 20 5) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k137) (bruijn ##.quotation.52 19 1) (bruijn ##.x.289 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 20-1, 5)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k137, self)))),
      VGetArg(statics, 19-1, 1),
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k135(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k135" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k135, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.syntax-cdr.17 20 16) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k136) (bruijn ##.expr.53 18 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 20-1, 16)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k136, self)))),
      VGetArg(statics, 18-1, 2));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k134(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k134" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k134, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.global-identifier.45 18 8) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k135) 'quote)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 18-1, 8)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k135, self)))),
      _V0quote);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k133(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k133" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k133, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.expand-quasiquote-impl.42 17 5) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k134) (bruijn ##.reg.379 2 0) (bruijn ##.x.298 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 17-1, 5)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k134, self)))),
      statics->up->vars[0],
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k132(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k132" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k132, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.syntax-cadr.2 17 1) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k133) (bruijn ##.x.299 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 17-1, 1)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k133, self)))),
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k131(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k131" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k131, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.379) ((##vcore.- (bruijn ##.quotation.52 14 1) 1)) ((bruijn ##.syntax-car.16 16 15) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k132) (bruijn ##.expr.53 14 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VSub2(runtime, NULL,
      VGetArg(statics, 14-1, 1),
      VEncodeInt(1l));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 15)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k132, self)))),
      VGetArg(statics, 14-1, 2));
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k130(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k130" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k130, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.global-identifier.45 13 8) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k131) '##vcore.cons)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 8)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k131, self)))),
      _V10vcore_Dcons);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k129(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k129" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k129, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.global-identifier.45 12 8) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k130) 'unquote-splicing)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 8)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k130, self)))),
      _V0unquote__splicing);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k128(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k128" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k128, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.global-identifier.45 11 8) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k129) 'quote)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 8)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k129, self)))),
      _V0quote);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k127(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k127" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k127, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.global-identifier.45 10 8) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k128) '##vcore.cons)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 8)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k128, self)))),
      _V10vcore_Dcons);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k142(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k142" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k142, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.200 12 0) (##inline ##vcore.cons (bruijn ##.x.303 4 0) (##inline ##vcore.cons (bruijn ##.x.305 2 0) (##inline ##vcore.cons (bruijn ##.x.307 0 0) '()))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 0)), 1,
      VInlineCons2(runtime,
        statics->up->up->up->vars[0],
        VInlineCons2(runtime,
        statics->up->vars[0],
        VInlineCons2(runtime,
        _var0,
        VNULL))));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k141(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k141" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k141, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.expand-quasiquote-impl.42 12 5) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k142) (bruijn ##.quotation.52 11 1) (bruijn ##.x.308 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 5)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k142, self)))),
      VGetArg(statics, 11-1, 1),
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k140(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k140" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k140, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.syntax-cdr.17 12 16) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k141) (bruijn ##.expr.53 10 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 16)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k141, self)))),
      VGetArg(statics, 10-1, 2));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k139(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k139" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k139, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.expand-quasiquote-impl.42 10 5) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k140) (bruijn ##.quotation.52 9 1) (bruijn ##.x.309 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 5)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k140, self)))),
      VGetArg(statics, 9-1, 1),
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k138(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k138" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k138, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.syntax-car.16 10 15) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k139) (bruijn ##.expr.53 8 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 15)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k139, self)))),
      VGetArg(statics, 8-1, 2));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k121(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k121" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k121, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.270 0 0) (basic-block 1 1 (##.reg.378) ((##vcore.= (bruijn ##.quotation.52 8 1) 1)) (if (bruijn ##.reg.378 0 0) ((bruijn ##.global-identifier.45 9 8) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k122) '##vcore.append) ((bruijn ##.global-identifier.45 9 8) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k127) '##vcore.cons))) ((bruijn ##.global-identifier.45 8 8) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k138) '##vcore.cons))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCmpEq(runtime, NULL,
      VGetArg(statics, 8-1, 1),
      VEncodeInt(1l));
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 8)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k122, self)))),
      _V10vcore_Dappend);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 8)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k127, self)))),
      _V10vcore_Dcons);
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 8)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k138, self)))),
      _V10vcore_Dcons);
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k115(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k115" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k115, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k116) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k121))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k116, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k121, self)))));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k114(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k114" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k114, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.syntax-pair?.15 7 14) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k115) (bruijn ##.x.316 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 14)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k115, self)))),
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k83(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k83" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k83, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.eq? (bruijn ##.x.0.54 0 0) 'quasiquote) ((bruijn ##.global-identifier.45 5 8) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k84) '##vcore.cons) (if (##inline ##vcore.eq? (bruijn ##.x.0.54 0 0) 'unquote) ((bruijn ##.syntax-cadr.2 6 1) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k91) (bruijn ##.expr.53 4 2)) ((bruijn ##.syntax-car.16 6 15) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k114) (bruijn ##.expr.53 4 2))))
if(VDecodeBool(
VInlineEq2(runtime,
        _var0,
        _V0quasiquote))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 8)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k84, self)))),
      _V10vcore_Dcons);
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        _var0,
        _V0unquote))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 1)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k91, self)))),
      statics->up->up->up->vars[2]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 15)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k114, self)))),
      statics->up->up->up->vars[2]);
}
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k80(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k80" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k80, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k81) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k83))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k81, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k83, self)))));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k79(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k79" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k79, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.identifier?.12 4 11) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k80) (bruijn ##.x.320 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[11]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k80, self)))),
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k147(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k147" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k147, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.200 6 0) (##inline ##vcore.cons (bruijn ##.x.322 3 0) (##inline ##vcore.cons (bruijn ##.x.324 0 0) '())))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 1,
      VInlineCons2(runtime,
        statics->up->up->vars[0],
        VInlineCons2(runtime,
        _var0,
        VNULL)));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k146(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k146" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k146, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.expand-quasiquote-impl.42 6 5) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k147) (bruijn ##.quotation.52 5 1) (bruijn ##.x.325 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 5)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k147, self)))),
      VGetArg(statics, 5-1, 1),
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k145(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k145" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k145, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.vector->list.4 6 3) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k146) (bruijn ##.x.326 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 3)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k146, self)))),
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k144(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k144" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k144, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.syntax-unpack.44 4 7) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k145) (bruijn ##.expr.53 3 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[7]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k145, self)))),
      statics->up->up->vars[2]);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k148(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k148" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k148, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.200 3 0) (##inline ##vcore.cons (bruijn ##.x.327 0 0) (##inline ##vcore.cons (bruijn ##.expr.53 3 2) '())))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VInlineCons2(runtime,
        _var0,
        VInlineCons2(runtime,
        statics->up->up->vars[2],
        VNULL)));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k143(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k143" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k143, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.321 0 0) ((bruijn ##.global-identifier.45 3 8) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k144) '##vcore.list->vector) ((bruijn ##.global-identifier.45 3 8) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k148) 'quote))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[8]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k144, self)))),
      _V10vcore_Dlist___Gvector);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[8]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k148, self)))),
      _V0quote);
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k78(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k78" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k78, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.201 0 0) ((bruijn ##.syntax-car.16 3 15) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k79) (bruijn ##.expr.53 1 2)) ((bruijn ##.syntax-vector?.3 3 2) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k143) (bruijn ##.expr.53 1 2)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[15]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k79, self)))),
      statics->vars[2]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[2]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k143, self)))),
      statics->vars[2]);
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((bruijn ##.syntax-pair?.15 2 14) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k78) (bruijn ##.expr.53 0 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[14]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k78, self)))),
      _var2);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__let_V0k154(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__let_V0k154" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__let_V0k154, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.329 6 0) (##inline ##vcore.cons (##inline ##vcore.cons (bruijn ##.x.333 5 0) (##inline ##vcore.cons (bruijn ##.x.335 3 0) (bruijn ##.x.336 2 0))) (bruijn ##.x.331 0 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 1,
      VInlineCons2(runtime,
        VInlineCons2(runtime,
        VGetArg(statics, 5-1, 0),
        VInlineCons2(runtime,
        statics->up->up->vars[0],
        statics->up->vars[0])),
        _var0));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__let_V0k153(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__let_V0k153" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__let_V0k153, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.syntax-map.18 7 17) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__let_V0k154) (bruijn ##.syntax-cadr.2 7 1) (bruijn ##.x.332 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 17)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__let_V0k154, self)))),
      VGetArg(statics, 7-1, 1),
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__let_V0k152(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__let_V0k152" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__let_V0k152, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.syntax-cadr.2 6 1) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__let_V0k153) (bruijn ##.form.56 4 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 1)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__let_V0k153, self)))),
      statics->up->up->up->vars[1]);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__let_V0k151(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__let_V0k151" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__let_V0k151, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.syntax-cddr.19 5 18) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__let_V0k152) (bruijn ##.form.56 3 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 18)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__let_V0k152, self)))),
      statics->up->up->vars[1]);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__let_V0k150(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__let_V0k150" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__let_V0k150, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.syntax-map.18 4 17) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__let_V0k151) (bruijn ##.syntax-car.16 4 15) (bruijn ##.x.337 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[17]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__let_V0k151, self)))),
      statics->up->up->up->vars[15],
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__let_V0k149(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__let_V0k149" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__let_V0k149, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.syntax-cadr.2 3 1) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__let_V0k150) (bruijn ##.form.56 1 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[1]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__let_V0k150, self)))),
      statics->vars[1]);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__let(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__let" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__let, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.global-identifier.45 1 8) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__let_V0k149) 'lambda)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[8]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__let_V0k149, self)))),
      _V0lambda);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0syntax__unpack_V0k155(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0syntax__unpack_V0k155" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0syntax__unpack_V0k155, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.339 0 0) ((bruijn ##.get-syntax-data.13 3 12) (bruijn ##.k.338 1 0) (bruijn ##.x.57 1 1)) ((bruijn ##.k.338 1 0) (bruijn ##.x.57 1 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[12]), 2,
      statics->vars[0],
      statics->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      statics->vars[1]);
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0syntax__unpack(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0syntax__unpack" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0syntax__unpack, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.syntax?.20 2 19) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0syntax__unpack_V0k155) (bruijn ##.x.57 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[19]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0syntax__unpack_V0k155, self)))),
      _var1);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0global__identifier_V0k157(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0global__identifier_V0k157" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0global__identifier_V0k157, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.make-syntax.21 4 20) (bruijn ##.k.340 2 0) (bruijn ##.expr.58 2 1) (bruijn ##.x.341 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[20]), 3,
      statics->up->vars[0],
      statics->up->vars[1],
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0global__identifier_V0k156(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0global__identifier_V0k156" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0global__identifier_V0k156, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.list.23 3 22) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0global__identifier_V0k157) (bruijn ##.x.342 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[22]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0global__identifier_V0k157, self)))),
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0global__identifier(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0global__identifier" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0global__identifier, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.global-scope.22 2 21) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0global__identifier_V0k156))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[21]), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0global__identifier_V0k156, self)))));
}
static void _V0vanity_V0compiler_V0hygienic_V0global__forms_V20_V0k159(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.k.66 1 0) (##inline ##vcore.cons (##inline ##vcore.cons 'global-identifier (bruijn ##.global-identifier.45 0 8)) (##inline ##vcore.cons (##inline ##vcore.cons 'global-forms (bruijn ##.global-forms.38 0 1)) (##inline ##vcore.cons (##inline ##vcore.cons 'global-form-env (bruijn ##.global-form-env.37 0 0)) '()))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0global__identifier,
        self->vars[8]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0global__forms,
        self->vars[1]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0global__form__env,
        self->vars[0]),
        VNULL))));
}
static void _V0vanity_V0compiler_V0hygienic_V0global__forms_V20_V0k158(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (set! (close _V0vanity_V0compiler_V0hygienic_V0global__forms_V20_V0k159) (bruijn ##.global-form-env.37 0 0) (##inline ##vcore.cons (##inline ##vcore.cons 'let (bruijn ##.expand-let.43 0 6)) (##inline ##vcore.cons (##inline ##vcore.cons 'quasiquote (bruijn ##.expand-quasiquote.41 0 4)) (##inline ##vcore.cons (##inline ##vcore.cons 'quasisyntax (bruijn ##.expand-quasisyntax.39 0 2)) '()))))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0hygienic_V0global__forms_V20_V0k159, self)))),
      VEncodeInt(0l), VEncodeInt(0l),
      VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0let,
        self->vars[6]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0quasiquote,
        self->vars[4]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0quasisyntax,
        self->vars[2]),
        VNULL)))
    );
}
static void _V0vanity_V0compiler_V0hygienic_V0global__forms_V20_V0lambda3(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4, VWORD _var5, VWORD _var6, VWORD _var7, VWORD _var8, VWORD _var9, VWORD _var10, VWORD _var11, VWORD _var12, VWORD _var13, VWORD _var14, VWORD _var15, VWORD _var16, VWORD _var17, VWORD _var18, VWORD _var19, VWORD _var20, VWORD _var21, VWORD _var22) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0hygienic_V0global__forms_V20_V0lambda3" };
 VRecordCall2(runtime, &dbg);
 if(argc != 23) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0hygienic_V0global__forms_V20_V0lambda3, got ~D~N"
  "-- expected 23~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[23]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 23, 23, statics);
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
  // (##letrec (vanity compiler hygienic global-forms) 9 (#f #f (close "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax" (vanity compiler hygienic global-forms)) (close "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl" (vanity compiler hygienic global-forms)) (close "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote" (vanity compiler hygienic global-forms)) (close "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl" (vanity compiler hygienic global-forms)) (close "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__let" (vanity compiler hygienic global-forms)) (close "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0syntax__unpack" (vanity compiler hygienic global-forms)) (close "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0global__identifier" (vanity compiler hygienic global-forms))) (set! (close _V0vanity_V0compiler_V0hygienic_V0global__forms_V20_V0k158) (bruijn ##.global-forms.38 0 1) '(##pair ##.pair.386)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[9]; } container;
    self = &container.self;
    _V60_V0vanity_V0compiler_V0hygienic_V0global__forms = self;
    VInitEnv(self, 9, 9, statics);
    self->vars[0] = VEncodeBool(false);
    self->vars[1] = VEncodeBool(false);
    self->vars[2] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax, _V60_V0vanity_V0compiler_V0hygienic_V0global__forms))));
    self->vars[3] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl, _V60_V0vanity_V0compiler_V0hygienic_V0global__forms))));
    self->vars[4] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote, _V60_V0vanity_V0compiler_V0hygienic_V0global__forms))));
    self->vars[5] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl, _V60_V0vanity_V0compiler_V0hygienic_V0global__forms))));
    self->vars[6] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__let, _V60_V0vanity_V0compiler_V0hygienic_V0global__forms))));
    self->vars[7] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0syntax__unpack, _V60_V0vanity_V0compiler_V0hygienic_V0global__forms))));
    self->vars[8] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0global__identifier, _V60_V0vanity_V0compiler_V0hygienic_V0global__forms))));
    VRegisterStaticEnv("_V0vanity_V0compiler_V0hygienic_V0global__forms_V20", &_V60_V0vanity_V0compiler_V0hygienic_V0global__forms);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0hygienic_V0global__forms_V20_V0k158, self)))),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodePointer(&_V10_Dpair_D386, VPOINTER_PAIR)
    );
    }
}
static void _V0vanity_V0compiler_V0hygienic_V0global__forms_V20_V0lambda1(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0hygienic_V0global__forms_V20_V0lambda1" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0hygienic_V0global__forms_V20_V0lambda1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.k.60 0 0) (close _V0vanity_V0compiler_V0hygienic_V0global__forms_V20_V0lambda2) (close _V0vanity_V0compiler_V0hygienic_V0global__forms_V20_V0lambda3))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0hygienic_V0global__forms_V20_V0lambda2, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0hygienic_V0global__forms_V20_V0lambda3, self)))));
}
VFunc _V0vanity_V0compiler_V0hygienic_V0global__forms_V20 = (VFunc)_V0vanity_V0compiler_V0hygienic_V0global__forms_V20_V0lambda1;
