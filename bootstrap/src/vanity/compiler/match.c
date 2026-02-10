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

VEnv * _V60_V0vanity_V0compiler_V0match;

VWEAK VWORD _V0transform__match;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V0transform__match = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "transform-match" };
static struct { VBlob sym; char bytes[6]; } _V10_Dstring_D445 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 6 }, "input" };
VWEAK VWORD _V0else;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0else = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "else" };
static struct { VBlob sym; char bytes[44]; } _V10_Dstring_D444 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 44 }, "match expression contains too many ellipses" };
static struct { VBlob sym; char bytes[70]; } _V10_Dstring_D443 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 70 }, "match expressions such as (x ... y ...) or (x ... . y) are ill formed" };
static struct { VBlob sym; char bytes[26]; } _V10_Dstring_D442 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 26 }, "match statement exhausted" };
VWEAK VWORD _V0error;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0error = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "error" };
VWEAK VWORD _V0_U;VWEAK struct { VBlob sym; char bytes[2]; } _VW_V0_U = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 2 }, "_" };
static struct { VBlob sym; char bytes[30]; } _V10_Dstring_D441 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 30 }, "unknown form in match pattern" };
VWEAK VWORD _V0equal_Q;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0equal_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "equal\?" };
static struct { VBlob sym; char bytes[16]; } _V10_Dstring_D440 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 16 }, "malformed quote" };
VWEAK VWORD _V10vcore_Dblob_E_Q;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V10vcore_Dblob_E_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "##vcore.blob=\?" };
VWEAK VWORD _V10vcore_Dstring_Q;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V10vcore_Dstring_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "##vcore.string\?" };
VWEAK VWORD _V0and;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0and = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "and" };
VWEAK VWORD _V10vcore_Dnull_Q;VWEAK struct { VBlob sym; char bytes[14]; } _VW_V10vcore_Dnull_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 14 }, "##vcore.null\?" };
static struct { VBlob sym; char bytes[37]; } _V10_Dstring_D439 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 37 }, "typevectors in matches not supported" };
static struct { VBlob sym; char bytes[39]; } _V10_Dstring_D438 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 39 }, "vectors in matches not implemented yet" };
static struct { VBlob sym; char bytes[3]; } _V10_Dstring_D437 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 3 }, "kk" };
static struct { VBlob sym; char bytes[5]; } _V10_Dstring_D436 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 5 }, "expr" };
VWEAK VWORD _V0quote;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0quote = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "quote" };
VWEAK VWORD _V10vcore_Dcar;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V10vcore_Dcar = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "##vcore.car" };
VWEAK VWORD _V10vcore_Dcons;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V10vcore_Dcons = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "##vcore.cons" };
VWEAK VWORD _V10vcore_Dcdr;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V10vcore_Dcdr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "##vcore.cdr" };
VWEAK VWORD _V0reverse;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0reverse = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "reverse" };
VWEAK VWORD _V0tail__expr;VWEAK struct { VBlob sym; char bytes[10]; } _VW_V0tail__expr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 10 }, "tail-expr" };
VWEAK VWORD _V10vcore_Dpair_Q;VWEAK struct { VBlob sym; char bytes[14]; } _VW_V10vcore_Dpair_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 14 }, "##vcore.pair\?" };
VWEAK VWORD _V10vcore_Dnot;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V10vcore_Dnot = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "##vcore.not" };
VWEAK VWORD _V0loop;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0loop = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "loop" };
VWEAK VWORD _V0let;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0let = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "let" };
VWEAK VWORD _V10vcore_Dcall_Wcc;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V10vcore_Dcall_Wcc = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "##vcore.call/cc" };
static struct { VBlob sym; char bytes[5]; } _V10_Dstring_D435 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 5 }, "head" };
static struct { VBlob sym; char bytes[5]; } _V10_Dstring_D434 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 5 }, "tail" };
VWEAK VWORD _V0_D_D_D;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0_D_D_D = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "..." };
VWEAK VWORD _V0split__at__right;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V0split__at__right = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "split-at-right" };
VWEAK VWORD _V0lambda;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0lambda = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "lambda" };
VWEAK VWORD _V10vcore_Dcall__with__values;VWEAK struct { VBlob sym; char bytes[25]; } _VW_V10vcore_Dcall__with__values = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 25 }, "##vcore.call-with-values" };
VWEAK VWORD _V10vcore_Dcmp;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V10vcore_Dcmp = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "##vcore.cmp" };
VWEAK VWORD _V10vcore_Deq_Q;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V10vcore_Deq_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "##vcore.eq\?" };
VWEAK VWORD _V0if;VWEAK struct { VBlob sym; char bytes[3]; } _VW_V0if = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 3 }, "if" };
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D433 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "_V0vanity_V0core_V20" };
static struct { VBlob sym; char bytes[33]; } _V10_Dstring_D432 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 33 }, "_V0vanity_V0compiler_V0utils_V20" };
VWEAK VWORD _V0map;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0map = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "map" };
VWEAK VWORD _V0cddar;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0cddar = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "cddar" };
VWEAK VWORD _V0num__pairs;VWEAK struct { VBlob sym; char bytes[10]; } _VW_V0num__pairs = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 10 }, "num-pairs" };
VWEAK VWORD _V0compiler__error;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V0compiler__error = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "compiler-error" };
VWEAK VWORD _V0cadar;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0cadar = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "cadar" };
VWEAK VWORD _V0atom_Q;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0atom_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "atom\?" };
VWEAK VWORD _V0typevector_Q;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0typevector_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "typevector\?" };
VWEAK VWORD _V0gensym;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0gensym = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "gensym" };
VWEAK VWORD _V0cddr;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0cddr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "cddr" };
VWEAK VWORD _V0compiler__warning;VWEAK struct { VBlob sym; char bytes[17]; } _VW_V0compiler__warning = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 17 }, "compiler-warning" };
VWEAK VWORD _V0list;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0list = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "list" };
VWEAK VWORD _V0caar;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0caar = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "caar" };
VWEAK VWORD _V0cdar;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0cdar = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "cdar" };
VWEAK VWORD _V0cadr;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0cadr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "cadr" };
static struct { VBlob sym; char bytes[33]; } _V10_Dstring_D431 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 33 }, "_V0vanity_V0compiler_V0match_V20" };
VWEAK VWORD _V40VMultiImport;
VWEAK VClosure _VW_V40VMultiImport = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VMultiImport, NULL };
static __attribute__((constructor)) void VDllMain1() {
  _V0transform__match = VEncodePointer(VInternSymbol(-834638833, &_VW_V0transform__match.sym), VPOINTER_OTHER);
  _V0else = VEncodePointer(VInternSymbol(1332432884, &_VW_V0else.sym), VPOINTER_OTHER);
  _V0error = VEncodePointer(VInternSymbol(147890691, &_VW_V0error.sym), VPOINTER_OTHER);
  _V0_U = VEncodePointer(VInternSymbol(-540102218, &_VW_V0_U.sym), VPOINTER_OTHER);
  _V0equal_Q = VEncodePointer(VInternSymbol(1746439164, &_VW_V0equal_Q.sym), VPOINTER_OTHER);
  _V10vcore_Dblob_E_Q = VEncodePointer(VInternSymbol(36075437, &_VW_V10vcore_Dblob_E_Q.sym), VPOINTER_OTHER);
  _V10vcore_Dstring_Q = VEncodePointer(VInternSymbol(-1296233363, &_VW_V10vcore_Dstring_Q.sym), VPOINTER_OTHER);
  _V0and = VEncodePointer(VInternSymbol(-2136794974, &_VW_V0and.sym), VPOINTER_OTHER);
  _V10vcore_Dnull_Q = VEncodePointer(VInternSymbol(-577062031, &_VW_V10vcore_Dnull_Q.sym), VPOINTER_OTHER);
  _V0quote = VEncodePointer(VInternSymbol(-278310088, &_VW_V0quote.sym), VPOINTER_OTHER);
  _V10vcore_Dcar = VEncodePointer(VInternSymbol(976741304, &_VW_V10vcore_Dcar.sym), VPOINTER_OTHER);
  _V10vcore_Dcons = VEncodePointer(VInternSymbol(-774369668, &_VW_V10vcore_Dcons.sym), VPOINTER_OTHER);
  _V10vcore_Dcdr = VEncodePointer(VInternSymbol(-1160051211, &_VW_V10vcore_Dcdr.sym), VPOINTER_OTHER);
  _V0reverse = VEncodePointer(VInternSymbol(418515197, &_VW_V0reverse.sym), VPOINTER_OTHER);
  _V0tail__expr = VEncodePointer(VInternSymbol(1213435809, &_VW_V0tail__expr.sym), VPOINTER_OTHER);
  _V10vcore_Dpair_Q = VEncodePointer(VInternSymbol(-2140366458, &_VW_V10vcore_Dpair_Q.sym), VPOINTER_OTHER);
  _V10vcore_Dnot = VEncodePointer(VInternSymbol(904118690, &_VW_V10vcore_Dnot.sym), VPOINTER_OTHER);
  _V0loop = VEncodePointer(VInternSymbol(-596409721, &_VW_V0loop.sym), VPOINTER_OTHER);
  _V0let = VEncodePointer(VInternSymbol(-599055874, &_VW_V0let.sym), VPOINTER_OTHER);
  _V10vcore_Dcall_Wcc = VEncodePointer(VInternSymbol(482979242, &_VW_V10vcore_Dcall_Wcc.sym), VPOINTER_OTHER);
  _V0_D_D_D = VEncodePointer(VInternSymbol(-1484744521, &_VW_V0_D_D_D.sym), VPOINTER_OTHER);
  _V0split__at__right = VEncodePointer(VInternSymbol(-1001750904, &_VW_V0split__at__right.sym), VPOINTER_OTHER);
  _V0lambda = VEncodePointer(VInternSymbol(1054233532, &_VW_V0lambda.sym), VPOINTER_OTHER);
  _V10vcore_Dcall__with__values = VEncodePointer(VInternSymbol(1537217383, &_VW_V10vcore_Dcall__with__values.sym), VPOINTER_OTHER);
  _V10vcore_Dcmp = VEncodePointer(VInternSymbol(499420365, &_VW_V10vcore_Dcmp.sym), VPOINTER_OTHER);
  _V10vcore_Deq_Q = VEncodePointer(VInternSymbol(434979212, &_VW_V10vcore_Deq_Q.sym), VPOINTER_OTHER);
  _V0if = VEncodePointer(VInternSymbol(-1008835161, &_VW_V0if.sym), VPOINTER_OTHER);
  _V0map = VEncodePointer(VInternSymbol(-1940887657, &_VW_V0map.sym), VPOINTER_OTHER);
  _V0cddar = VEncodePointer(VInternSymbol(-1851430374, &_VW_V0cddar.sym), VPOINTER_OTHER);
  _V0num__pairs = VEncodePointer(VInternSymbol(67164350, &_VW_V0num__pairs.sym), VPOINTER_OTHER);
  _V0compiler__error = VEncodePointer(VInternSymbol(1345485686, &_VW_V0compiler__error.sym), VPOINTER_OTHER);
  _V0cadar = VEncodePointer(VInternSymbol(545720329, &_VW_V0cadar.sym), VPOINTER_OTHER);
  _V0atom_Q = VEncodePointer(VInternSymbol(2133063198, &_VW_V0atom_Q.sym), VPOINTER_OTHER);
  _V0typevector_Q = VEncodePointer(VInternSymbol(1566825028, &_VW_V0typevector_Q.sym), VPOINTER_OTHER);
  _V0gensym = VEncodePointer(VInternSymbol(1130831505, &_VW_V0gensym.sym), VPOINTER_OTHER);
  _V0cddr = VEncodePointer(VInternSymbol(-569180081, &_VW_V0cddr.sym), VPOINTER_OTHER);
  _V0compiler__warning = VEncodePointer(VInternSymbol(245497745, &_VW_V0compiler__warning.sym), VPOINTER_OTHER);
  _V0list = VEncodePointer(VInternSymbol(-1594870040, &_VW_V0list.sym), VPOINTER_OTHER);
  _V0caar = VEncodePointer(VInternSymbol(-610927850, &_VW_V0caar.sym), VPOINTER_OTHER);
  _V0cdar = VEncodePointer(VInternSymbol(-1104539071, &_VW_V0cdar.sym), VPOINTER_OTHER);
  _V0cadr = VEncodePointer(VInternSymbol(137264287, &_VW_V0cadr.sym), VPOINTER_OTHER);
  _V40VMultiImport = VEncodePointer(VLookupConstant("_V40VMultiImport", &_VW_V40VMultiImport), VPOINTER_CLOSURE);
}
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0match_V0gather__variables, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0match_V0check__pattern_V10_Diter_D65, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0match_V0check__pattern, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D62, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D33, _var0, _var1, _var2, _var3);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D32, _var0, _var1, _var2, _var3);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0match_V0transform__match, _var0, _var1, _var2);
static void _V0vanity_V0compiler_V0match_V20_V0k3(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0match_V20_V0k3" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0match_V20_V0k3, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((##intrinsic "VMultiImport") (bruijn ##.k.72 3 0) (##string ##.string.431) (bruijn ##.x.73 0 0) 'cadr 'cdar 'caar 'list 'compiler-warning 'cddr 'gensym 'typevector? 'atom? 'cadar 'compiler-error 'num-pairs 'cddar 'map)
    VCallFuncWithGC(runtime, (VFunc)VMultiImport, 17,
      statics->up->up->vars[0],
      VEncodePointer(&_V10_Dstring_D431.sym, VPOINTER_OTHER),
      _var0,
      _V0cadr,
      _V0cdar,
      _V0caar,
      _V0list,
      _V0compiler__warning,
      _V0cddr,
      _V0gensym,
      _V0typevector_Q,
      _V0atom_Q,
      _V0cadar,
      _V0compiler__error,
      _V0num__pairs,
      _V0cddar,
      _V0map);
}
static void _V0vanity_V0compiler_V0match_V20_V0k2(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0match_V20_V0k2" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0match_V20_V0k2, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.vector (close _V0vanity_V0compiler_V0match_V20_V0k3) (bruijn ##.x.74 1 0) (bruijn ##.x.75 0 0))
    VCallFuncWithGC(runtime, (VFunc)VCreateVector, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_V0k3, self)))),
      statics->vars[0],
      _var0);
}
static void _V0vanity_V0compiler_V0match_V20_V0k1(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0match_V20_V0k1" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0match_V20_V0k1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0match_V20_V0k2) (##string ##.string.432))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_V0k2, self)))),
      VEncodePointer(&_V10_Dstring_D432.sym, VPOINTER_OTHER));
}
static void _V0vanity_V0compiler_V0match_V20_V0lambda2(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0match_V20_V0lambda2" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0match_V20_V0lambda2, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0match_V20_V0k1) (##string ##.string.433))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_V0k1, self)))),
      VEncodePointer(&_V10_Dstring_D433.sym, VPOINTER_OTHER));
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D32_V0k9(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D32_V0k9" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D32_V0k9, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.78 7 0) (##inline ##vcore.cons 'if (##inline ##vcore.cons (##inline ##vcore.cons '##vcore.eq? (##inline ##vcore.cons (##inline ##vcore.cons '##vcore.cmp (##inline ##vcore.cons (##inline ##vcore.cons 'num-pairs (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr-stack.34 7 1)) '())) (##inline ##vcore.cons (bruijn ##.len.39 4 0) '()))) (##inline ##vcore.cons '-1 '()))) (##inline ##vcore.cons '#f (##inline ##vcore.cons (##inline ##vcore.cons '##vcore.call-with-values (##inline ##vcore.cons (##inline ##vcore.cons 'lambda (##inline ##vcore.cons '() (##inline ##vcore.cons (##inline ##vcore.cons 'split-at-right (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr-stack.34 7 1)) (##inline ##vcore.cons (bruijn ##.len.39 4 0) '()))) '()))) (##inline ##vcore.cons (##inline ##vcore.cons 'lambda (##inline ##vcore.cons (##inline ##vcore.cons (bruijn ##.head.40 2 0) (##inline ##vcore.cons (bruijn ##.tail.41 1 0) '())) (##inline ##vcore.cons (bruijn ##.x.92 0 0) '()))) '()))) '())))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 1,
      VInlineCons2(runtime,
        _V0if,
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V10vcore_Deq_Q,
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V10vcore_Dcmp,
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0num__pairs,
        VInlineCons2(runtime,
        VInlineCar2(runtime,
        VGetArg(statics, 7-1, 1)),
        VNULL)),
        VInlineCons2(runtime,
        statics->up->up->up->vars[0],
        VNULL))),
        VInlineCons2(runtime,
        VEncodeInt(-1l),
        VNULL))),
        VInlineCons2(runtime,
        VEncodeBool(false),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V10vcore_Dcall__with__values,
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0lambda,
        VInlineCons2(runtime,
        VNULL,
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0split__at__right,
        VInlineCons2(runtime,
        VInlineCar2(runtime,
        VGetArg(statics, 7-1, 1)),
        VInlineCons2(runtime,
        statics->up->up->up->vars[0],
        VNULL))),
        VNULL))),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0lambda,
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        statics->up->vars[0],
        VInlineCons2(runtime,
        statics->vars[0],
        VNULL)),
        VInlineCons2(runtime,
        _var0,
        VNULL))),
        VNULL))),
        VNULL)))));
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D32_V0k8(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D32_V0k8" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D32_V0k8, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler match transform-match ##.match-iter.33) #f (bruijn ##.match-iter.33 7 1) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D32_V0k9) (##inline ##vcore.cons (bruijn ##.head.40 1 0) (##inline ##vcore.cons (bruijn ##.tail.41 0 0) (##inline ##vcore.cdr (bruijn ##.expr-stack.34 6 1)))) (##inline ##vcore.cons (##inline ##vcore.cons (bruijn ##.x.191 5 0) (##inline ##vcore.qcons '... '())) (##inline ##vcore.cons (bruijn ##.tail-pattern.38 4 0) (##inline ##vcore.cdr (bruijn ##.pattern-stack.35 6 2)))) (bruijn ##.success-expr.36 6 3))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 7-1, 1));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D32_V0k9, self))));
    VWORD _arg1 = 
      VInlineCons2(runtime,
        statics->vars[0],
        VInlineCons2(runtime,
        _var0,
        VInlineCdr2(runtime,
        VGetArg(statics, 6-1, 1))));
    VWORD _arg2 = 
      VInlineCons2(runtime,
        VInlineCons2(runtime,
        VGetArg(statics, 5-1, 0),
        VInlineCons2(runtime,
        _V0_D_D_D,
        VNULL)),
        VInlineCons2(runtime,
        statics->up->up->up->vars[0],
        VInlineCdr2(runtime,
        VGetArg(statics, 6-1, 2))));
    VWORD _arg3 = 
      VGetArg(statics, 6-1, 3);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D33(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D32_V0k7(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D32_V0k7" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D32_V0k7, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.gensym.6 9 7) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D32_V0k8) (##string ##.string.434))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 7)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D32_V0k8, self)))),
      VEncodePointer(&_V10_Dstring_D434.sym, VPOINTER_OTHER));
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D32_V0k25(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D32_V0k25" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D32_V0k25, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.78 20 0) (##inline ##vcore.cons '##vcore.call-with-values (##inline ##vcore.cons (##inline ##vcore.cons 'lambda (##inline ##vcore.cons '() (##inline ##vcore.cons (##inline ##vcore.cons '##vcore.call/cc (##inline ##vcore.cons (##inline ##vcore.cons 'lambda (##inline ##vcore.cons (##inline ##vcore.cons (bruijn ##.k.47 10 0) '()) (##inline ##vcore.cons (##inline ##vcore.cons 'let (##inline ##vcore.cons 'loop (##inline ##vcore.cons (##inline ##vcore.cons (##inline ##vcore.cons (bruijn ##.expr.49 8 0) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr-stack.34 20 1)) '())) (bruijn ##.x.183 7 0)) (##inline ##vcore.cons (##inline ##vcore.cons 'if (##inline ##vcore.cons (##inline ##vcore.cons '##vcore.not (##inline ##vcore.cons (##inline ##vcore.cons '##vcore.pair? (##inline ##vcore.cons (bruijn ##.expr.49 8 0) '())) '())) (##inline ##vcore.cons (##inline ##vcore.cons (bruijn ##.k.47 10 0) (##inline ##vcore.cons (bruijn ##.expr.49 8 0) (bruijn ##.x.176 6 0))) '()))) (##inline ##vcore.cons (##inline ##vcore.cons '##vcore.call-with-values (##inline ##vcore.cons (##inline ##vcore.cons 'lambda (##inline ##vcore.cons '() (##inline ##vcore.cons (##inline ##vcore.cons '##vcore.call/cc (##inline ##vcore.cons (##inline ##vcore.cons 'lambda (##inline ##vcore.cons (##inline ##vcore.cons (bruijn ##.k2.48 9 0) '()) (##inline ##vcore.cons (bruijn ##.x.152 2 0) (##inline ##vcore.cons (##inline ##vcore.cons (bruijn ##.k.47 10 0) (##inline ##vcore.cons (bruijn ##.expr.49 8 0) (bruijn ##.x.156 1 0))) '())))) '())) '()))) (##inline ##vcore.cons 'loop '()))) '()))))) '()))) '())) '()))) (##inline ##vcore.cons (##inline ##vcore.cons 'lambda (##inline ##vcore.cons (##inline ##vcore.cons 'tail-expr (bruijn ##.variables.45 12 0)) (##inline ##vcore.cons (bruijn ##.x.121 0 0) '()))) '()))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 20-1, 0)), 1,
      VInlineCons2(runtime,
        _V10vcore_Dcall__with__values,
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0lambda,
        VInlineCons2(runtime,
        VNULL,
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V10vcore_Dcall_Wcc,
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0lambda,
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        VGetArg(statics, 10-1, 0),
        VNULL),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0let,
        VInlineCons2(runtime,
        _V0loop,
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        VGetArg(statics, 8-1, 0),
        VInlineCons2(runtime,
        VInlineCar2(runtime,
        VGetArg(statics, 20-1, 1)),
        VNULL)),
        VGetArg(statics, 7-1, 0)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0if,
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V10vcore_Dnot,
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V10vcore_Dpair_Q,
        VInlineCons2(runtime,
        VGetArg(statics, 8-1, 0),
        VNULL)),
        VNULL)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        VGetArg(statics, 10-1, 0),
        VInlineCons2(runtime,
        VGetArg(statics, 8-1, 0),
        VGetArg(statics, 6-1, 0))),
        VNULL))),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V10vcore_Dcall__with__values,
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0lambda,
        VInlineCons2(runtime,
        VNULL,
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V10vcore_Dcall_Wcc,
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0lambda,
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        VGetArg(statics, 9-1, 0),
        VNULL),
        VInlineCons2(runtime,
        statics->up->vars[0],
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        VGetArg(statics, 10-1, 0),
        VInlineCons2(runtime,
        VGetArg(statics, 8-1, 0),
        statics->vars[0])),
        VNULL)))),
        VNULL)),
        VNULL))),
        VInlineCons2(runtime,
        _V0loop,
        VNULL))),
        VNULL))))),
        VNULL))),
        VNULL)),
        VNULL))),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0lambda,
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0tail__expr,
        VGetArg(statics, 12-1, 0)),
        VInlineCons2(runtime,
        _var0,
        VNULL))),
        VNULL))));
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D32_V0k24(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D32_V0k24" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D32_V0k24, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler match transform-match ##.match-iter.33) #f (bruijn ##.match-iter.33 20 1) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D32_V0k25) (##inline ##vcore.cons 'tail-expr (##inline ##vcore.cdr (bruijn ##.expr-stack.34 19 1))) (##inline ##vcore.cons (bruijn ##.tail-pattern.43 13 0) (##inline ##vcore.cdr (bruijn ##.pattern-stack.35 19 2))) (bruijn ##.success-expr.36 19 3))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 20-1, 1));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D32_V0k25, self))));
    VWORD _arg1 = 
      VInlineCons2(runtime,
        _V0tail__expr,
        VInlineCdr2(runtime,
        VGetArg(statics, 19-1, 1)));
    VWORD _arg2 = 
      VInlineCons2(runtime,
        VGetArg(statics, 13-1, 0),
        VInlineCdr2(runtime,
        VGetArg(statics, 19-1, 2)));
    VWORD _arg3 = 
      VGetArg(statics, 19-1, 3);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D33(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D32_V0lambda4(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D32_V0lambda4" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D32_V0lambda4, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.k.157 0 0) (##inline ##vcore.cons 'reverse (##inline ##vcore.cons (bruijn ##.sym.54 0 1) '())))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VInlineCons2(runtime,
        _V0reverse,
        VInlineCons2(runtime,
        _var1,
        VNULL)));
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D32_V0k23(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D32_V0k23" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D32_V0k23, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.map.13 22 14) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D32_V0k24) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D32_V0lambda4) (bruijn ##.syms.46 9 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 22-1, 14)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D32_V0k24, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D32_V0lambda4, self)))),
      VGetArg(statics, 9-1, 0));
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D32_V0k22(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D32_V0k22" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D32_V0k22, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler match transform-match ##.match-iter.33) #f (bruijn ##.match-iter.33 18 1) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D32_V0k23) (bruijn ##.x.159 2 0) (bruijn ##.x.160 1 0) (##inline ##vcore.cons (bruijn ##.k2.48 6 0) (##inline ##vcore.cons (##inline ##vcore.cons '##vcore.cdr (##inline ##vcore.cons (bruijn ##.expr.49 5 0) '())) (bruijn ##.x.164 0 0))))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 18-1, 1));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D32_V0k23, self))));
    VWORD _arg1 = 
      statics->up->vars[0];
    VWORD _arg2 = 
      statics->vars[0];
    VWORD _arg3 = 
      VInlineCons2(runtime,
        VGetArg(statics, 6-1, 0),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V10vcore_Dcdr,
        VInlineCons2(runtime,
        VGetArg(statics, 5-1, 0),
        VNULL)),
        _var0));
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D33(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D32_V0lambda5(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D32_V0lambda5" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D32_V0lambda5, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  // ((bruijn ##.k.165 0 0) (##inline ##vcore.cons '##vcore.cons (##inline ##vcore.cons (bruijn ##.var.52 0 1) (##inline ##vcore.cons (bruijn ##.sym.53 0 2) '()))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VInlineCons2(runtime,
        _V10vcore_Dcons,
        VInlineCons2(runtime,
        _var1,
        VInlineCons2(runtime,
        _var2,
        VNULL))));
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D32_V0k21(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D32_V0k21" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D32_V0k21, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.map.13 20 14) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D32_V0k22) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D32_V0lambda5) (bruijn ##.variables.45 8 0) (bruijn ##.syms.46 7 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 20-1, 14)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D32_V0k22, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D32_V0lambda5, self)))),
      VGetArg(statics, 8-1, 0),
      VGetArg(statics, 7-1, 0));
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D32_V0k20(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D32_V0k20" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D32_V0k20, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.list.3 19 4) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D32_V0k21) (bruijn ##.pattern.42 10 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 19-1, 4)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D32_V0k21, self)))),
      VGetArg(statics, 10-1, 0));
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D32_V0k19(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D32_V0k19" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D32_V0k19, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.list.3 18 4) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D32_V0k20) (##inline ##vcore.cons '##vcore.car (##inline ##vcore.cons (bruijn ##.expr.49 2 0) '())))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 18-1, 4)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D32_V0k20, self)))),
      VInlineCons2(runtime,
        _V10vcore_Dcar,
        VInlineCons2(runtime,
        statics->up->vars[0],
        VNULL)));
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D32_V0lambda6(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D32_V0lambda6" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D32_V0lambda6, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.k.177 0 0) (##inline ##vcore.cons 'reverse (##inline ##vcore.cons (bruijn ##.sym.51 0 1) '())))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VInlineCons2(runtime,
        _V0reverse,
        VInlineCons2(runtime,
        _var1,
        VNULL)));
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D32_V0k18(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D32_V0k18" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D32_V0k18, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.map.13 17 14) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D32_V0k19) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D32_V0lambda6) (bruijn ##.syms.46 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 17-1, 14)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D32_V0k19, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D32_V0lambda6, self)))),
      statics->up->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D32_V0lambda7(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D32_V0lambda7" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D32_V0lambda7, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.k.184 0 0) (##inline ##vcore.cons (bruijn ##.sym.50 0 1) (##inline ##vcore.cons (##inline ##vcore.cons 'quote (##inline ##vcore.cons '() '())) '())))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VInlineCons2(runtime,
        _var1,
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0quote,
        VInlineCons2(runtime,
        VNULL,
        VNULL)),
        VNULL)));
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D32_V0k17(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D32_V0k17" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D32_V0k17, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.map.13 16 14) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D32_V0k18) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D32_V0lambda7) (bruijn ##.syms.46 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 14)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D32_V0k18, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D32_V0lambda7, self)))),
      statics->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D32_V0k16(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D32_V0k16" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D32_V0k16, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.gensym.6 15 7) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D32_V0k17) (##string ##.string.436))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 7)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D32_V0k17, self)))),
      VEncodePointer(&_V10_Dstring_D436.sym, VPOINTER_OTHER));
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D32_V0k15(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D32_V0k15" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D32_V0k15, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.gensym.6 14 7) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D32_V0k16) (##string ##.string.437))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 7)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D32_V0k16, self)))),
      VEncodePointer(&_V10_Dstring_D437.sym, VPOINTER_OTHER));
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D32_V0k14(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D32_V0k14" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D32_V0k14, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.gensym.6 13 7) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D32_V0k15) (##string ##.string.437))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 7)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D32_V0k15, self)))),
      VEncodePointer(&_V10_Dstring_D437.sym, VPOINTER_OTHER));
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D32_V0k13(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D32_V0k13" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D32_V0k13, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.map.13 12 14) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D32_V0k14) (bruijn ##.gensym.6 12 7) (bruijn ##.variables.45 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 14)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D32_V0k14, self)))),
      VGetArg(statics, 12-1, 7),
      _var0);
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D32_V0k12(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D32_V0k12" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D32_V0k12, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler match gather-variables) #t (bruijn ##.gather-variables.29 10 2) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D32_V0k13) (bruijn ##.x.190 0 0) (bruijn ##.eqv?.31 9 2))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0match;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D32_V0k13, self))));
    VWORD _arg1 = 
      _var0;
    VWORD _arg2 = 
      VGetArg(statics, 9-1, 2);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0gather__variables, _V60_V0vanity_V0compiler_V0match)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0match_V0gather__variables(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D32_V0k11(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D32_V0k11" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D32_V0k11, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.list.3 10 4) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D32_V0k12) (bruijn ##.pattern.42 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 4)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D32_V0k12, self)))),
      statics->vars[0]);
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D32_V0k10(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D32_V0k10" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D32_V0k10, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.cddar.12 9 13) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D32_V0k11) (bruijn ##.pattern-stack.35 5 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 13)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D32_V0k11, self)))),
      VGetArg(statics, 5-1, 2));
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D32_V0k6(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D32_V0k6" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D32_V0k6, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.421) ((##vcore.> (bruijn ##.len.39 1 0) 0)) (if (bruijn ##.reg.421 0 0) ((bruijn ##.gensym.6 8 7) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D32_V0k7) (##string ##.string.435)) ((bruijn ##.caar.2 8 3) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D32_V0k10) (bruijn ##.pattern-stack.35 4 2))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCmpGt(runtime, NULL,
      statics->vars[0],
      VEncodeInt(0l));
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 7)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D32_V0k7, self)))),
      VEncodePointer(&_V10_Dstring_D435.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 3)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D32_V0k10, self)))),
      statics->up->up->up->vars[2]);
}
    }
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D32_V0k5(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D32_V0k5" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D32_V0k5, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.num-pairs.11 6 12) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D32_V0k6) (bruijn ##.tail-pattern.38 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 12)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D32_V0k6, self)))),
      _var0);
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D32_V0k4(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D32_V0k4" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D32_V0k4, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.cddar.12 5 13) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D32_V0k5) (bruijn ##.pattern-stack.35 1 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 13)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D32_V0k5, self)))),
      statics->vars[2]);
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D32(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D32" };
 VRecordCall2(runtime, &dbg);
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D32, got ~D~N"
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
  // ((bruijn ##.caar.2 4 3) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D32_V0k4) (bruijn ##.pattern-stack.35 0 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[3]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D32_V0k4, self)))),
      _var2);
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D33_V0k27(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D33_V0k27" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D33_V0k27, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.193 3 0) (##inline ##vcore.cons 'let (##inline ##vcore.cons (##inline ##vcore.cons (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.pattern-stack.56 3 2)) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr-stack.55 3 1)) '())) '()) (##inline ##vcore.cons (bruijn ##.x.202 0 0) '()))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VInlineCons2(runtime,
        _V0let,
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        VInlineCar2(runtime,
        statics->up->up->vars[2]),
        VInlineCons2(runtime,
        VInlineCar2(runtime,
        statics->up->up->vars[1]),
        VNULL)),
        VNULL),
        VInlineCons2(runtime,
        _var0,
        VNULL))));
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D33_V0k29(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D33_V0k29" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D33_V0k29, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.193 5 0) (##inline ##vcore.cons 'if (##inline ##vcore.cons (##inline ##vcore.cons '##vcore.null? (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr-stack.55 5 1)) '())) (##inline ##vcore.cons (bruijn ##.x.217 0 0) '()))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VInlineCons2(runtime,
        _V0if,
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V10vcore_Dnull_Q,
        VInlineCons2(runtime,
        VInlineCar2(runtime,
        VGetArg(statics, 5-1, 1)),
        VNULL)),
        VInlineCons2(runtime,
        _var0,
        VNULL))));
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D33_V0k30(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D33_V0k30" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D33_V0k30, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.193 6 0) (##inline ##vcore.cons 'if (##inline ##vcore.cons (##inline ##vcore.cons 'and (##inline ##vcore.cons (##inline ##vcore.cons '##vcore.string? (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr-stack.55 6 1)) '())) (##inline ##vcore.cons (##inline ##vcore.cons '##vcore.blob=? (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.pattern-stack.56 6 2)) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr-stack.55 6 1)) '()))) '()))) (##inline ##vcore.cons (bruijn ##.x.226 0 0) '()))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 1,
      VInlineCons2(runtime,
        _V0if,
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0and,
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V10vcore_Dstring_Q,
        VInlineCons2(runtime,
        VInlineCar2(runtime,
        VGetArg(statics, 6-1, 1)),
        VNULL)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V10vcore_Dblob_E_Q,
        VInlineCons2(runtime,
        VInlineCar2(runtime,
        VGetArg(statics, 6-1, 2)),
        VInlineCons2(runtime,
        VInlineCar2(runtime,
        VGetArg(statics, 6-1, 1)),
        VNULL))),
        VNULL))),
        VInlineCons2(runtime,
        _var0,
        VNULL))));
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D33_V0k32(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D33_V0k32" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D33_V0k32, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.193 7 0) (##inline ##vcore.cons 'if (##inline ##vcore.cons (##inline ##vcore.cons '##vcore.eq? (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.pattern-stack.56 7 2)) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr-stack.55 7 1)) '()))) (##inline ##vcore.cons (bruijn ##.x.243 0 0) '()))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 1,
      VInlineCons2(runtime,
        _V0if,
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V10vcore_Deq_Q,
        VInlineCons2(runtime,
        VInlineCar2(runtime,
        VGetArg(statics, 7-1, 2)),
        VInlineCons2(runtime,
        VInlineCar2(runtime,
        VGetArg(statics, 7-1, 1)),
        VNULL))),
        VInlineCons2(runtime,
        _var0,
        VNULL))));
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D33_V0k34(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D33_V0k34" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D33_V0k34, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.eqv?.31 10 2) (bruijn ##.k.315 1 0) (bruijn ##.x.316 0 0) 'quote)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 2)), 3,
      statics->vars[0],
      _var0,
      _V0quote);
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D33_V0k33(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D33_V0k33" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D33_V0k33, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (##inline ##vcore.car (bruijn ##.pattern-stack.56 7 2))) ((bruijn ##.caar.2 11 3) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D33_V0k34) (bruijn ##.pattern-stack.56 7 2)) ((bruijn ##.k.315 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VInlineCar2(runtime,
        VGetArg(statics, 7-1, 2))))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 3)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D33_V0k34, self)))),
      VGetArg(statics, 7-1, 2));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D33_V0k39(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D33_V0k39" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D33_V0k39, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.266 1 0) (##inline ##vcore.not (##inline ##vcore.null? (bruijn ##.x.268 0 0))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VInlineNot2(runtime,
        VInlineNullP2(runtime,
        _var0)));
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D33_V0k38(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D33_V0k38" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D33_V0k38, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.265 1 0) ((bruijn ##.k.266 0 0) (bruijn ##.p.265 1 0)) ((bruijn ##.cddar.12 14 13) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D33_V0k39) (bruijn ##.pattern-stack.56 10 2)))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->vars[0]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 13)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D33_V0k39, self)))),
      VGetArg(statics, 10-1, 2));
}
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D33_V0k41(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D33_V0k41" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D33_V0k41, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.263 1 0) ((bruijn ##.compiler-error.10 15 11) (bruijn ##.k.264 0 0) (##string ##.string.440)) ((bruijn ##.k.264 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 11)), 2,
      _var0,
      VEncodePointer(&_V10_Dstring_D440.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D33_V0k44(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D33_V0k44" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D33_V0k44, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.193 12 0) (##inline ##vcore.cons 'if (##inline ##vcore.cons (##inline ##vcore.cons 'equal? (##inline ##vcore.cons (##inline ##vcore.cons 'quote (##inline ##vcore.cons (bruijn ##.x.262 1 0) '())) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr-stack.55 12 1)) '()))) (##inline ##vcore.cons (bruijn ##.x.254 0 0) '()))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 0)), 1,
      VInlineCons2(runtime,
        _V0if,
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0equal_Q,
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0quote,
        VInlineCons2(runtime,
        statics->vars[0],
        VNULL)),
        VInlineCons2(runtime,
        VInlineCar2(runtime,
        VGetArg(statics, 12-1, 1)),
        VNULL))),
        VInlineCons2(runtime,
        _var0,
        VNULL))));
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D33_V0k43(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D33_V0k43" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D33_V0k43, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler match transform-match ##.match-iter.33) #f (bruijn ##.match-iter.33 12 1) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D33_V0k44) (##inline ##vcore.cdr (bruijn ##.expr-stack.55 11 1)) (##inline ##vcore.cdr (bruijn ##.pattern-stack.56 11 2)) (bruijn ##.success-expr.57 11 3))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 12-1, 1));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D33_V0k44, self))));
    VWORD _arg1 = 
      VInlineCdr2(runtime,
        VGetArg(statics, 11-1, 1));
    VWORD _arg2 = 
      VInlineCdr2(runtime,
        VGetArg(statics, 11-1, 2));
    VWORD _arg3 = 
      VGetArg(statics, 11-1, 3);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D33(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
static void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D33_V0k42(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.cadar.9 14 10) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D33_V0k43) (bruijn ##.pattern-stack.56 10 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 10)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D33_V0k43, self)))),
      VGetArg(statics, 10-1, 2));
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D33_V0k40(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D33_V0k40" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D33_V0k40, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D33_V0k41) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D33_V0k42))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D33_V0k41, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D33_V0k42, self)))));
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D33_V0k37(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D33_V0k37" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D33_V0k37, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D33_V0k38) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D33_V0k40))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D33_V0k38, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D33_V0k40, self)))));
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D33_V0k36(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D33_V0k36" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D33_V0k36, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D33_V0k37) (##inline ##vcore.not (##inline ##vcore.pair? (bruijn ##.x.270 0 0))))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D33_V0k37, self)), 1,
      VInlineNot2(runtime,
        VInlinePairP2(runtime,
        _var0)));
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D33_V0k47(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D33_V0k47" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D33_V0k47, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.eqv?.31 12 2) (bruijn ##.k.309 2 0) (bruijn ##.x.311 0 0) '...)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 2)), 3,
      statics->up->vars[0],
      _var0,
      _V0_D_D_D);
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D33_V0k46(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D33_V0k46" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D33_V0k46, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.x.312 0 0)) ((bruijn ##.cadar.9 13 10) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D33_V0k47) (bruijn ##.pattern-stack.56 9 2)) ((bruijn ##.k.309 1 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 10)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D33_V0k47, self)))),
      VGetArg(statics, 9-1, 2));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D33_V0k45(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D33_V0k45" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D33_V0k45, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (##inline ##vcore.car (bruijn ##.pattern-stack.56 8 2))) ((bruijn ##.cdar.1 12 2) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D33_V0k46) (bruijn ##.pattern-stack.56 8 2)) ((bruijn ##.k.309 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VInlineCar2(runtime,
        VGetArg(statics, 8-1, 2))))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 2)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D33_V0k46, self)))),
      VGetArg(statics, 8-1, 2));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D33_V0k50(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D33_V0k50" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D33_V0k50, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.193 10 0) (##inline ##vcore.cons 'let (##inline ##vcore.cons (##inline ##vcore.cons (##inline ##vcore.cons (bruijn ##.sym.58 1 0) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr-stack.55 10 1)) '())) '()) (##inline ##vcore.cons (bruijn ##.x.275 0 0) '()))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 0)), 1,
      VInlineCons2(runtime,
        _V0let,
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        statics->vars[0],
        VInlineCons2(runtime,
        VInlineCar2(runtime,
        VGetArg(statics, 10-1, 1)),
        VNULL)),
        VNULL),
        VInlineCons2(runtime,
        _var0,
        VNULL))));
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D33_V0k49(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D33_V0k49" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D33_V0k49, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler match transform-match ##.match-ellipses.32) #f (bruijn ##.match-ellipses.32 10 0) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D33_V0k50) (##inline ##vcore.cons (bruijn ##.sym.58 0 0) (##inline ##vcore.cdr (bruijn ##.expr-stack.55 9 1))) (bruijn ##.pattern-stack.56 9 2) (bruijn ##.success-expr.57 9 3))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 10-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D33_V0k50, self))));
    VWORD _arg1 = 
      VInlineCons2(runtime,
        _var0,
        VInlineCdr2(runtime,
        VGetArg(statics, 9-1, 1)));
    VWORD _arg2 = 
      VGetArg(statics, 9-1, 2);
    VWORD _arg3 = 
      VGetArg(statics, 9-1, 3);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D32(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D33_V0k54(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D33_V0k54" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D33_V0k54, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.193 12 0) (##inline ##vcore.cons 'let (##inline ##vcore.cons (##inline ##vcore.cons (##inline ##vcore.cons (bruijn ##.sym.59 3 0) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr-stack.55 12 1)) '())) '()) (##inline ##vcore.cons (##inline ##vcore.cons 'if (##inline ##vcore.cons (##inline ##vcore.cons '##vcore.pair? (##inline ##vcore.cons (bruijn ##.sym.59 3 0) '())) (##inline ##vcore.cons (bruijn ##.x.289 0 0) '()))) '()))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 0)), 1,
      VInlineCons2(runtime,
        _V0let,
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        statics->up->up->vars[0],
        VInlineCons2(runtime,
        VInlineCar2(runtime,
        VGetArg(statics, 12-1, 1)),
        VNULL)),
        VNULL),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0if,
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V10vcore_Dpair_Q,
        VInlineCons2(runtime,
        statics->up->up->vars[0],
        VNULL)),
        VInlineCons2(runtime,
        _var0,
        VNULL))),
        VNULL))));
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D33_V0k53(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D33_V0k53" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D33_V0k53, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler match transform-match ##.match-iter.33) #f (bruijn ##.match-iter.33 12 1) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D33_V0k54) (##inline ##vcore.cons (##inline ##vcore.cons '##vcore.car (##inline ##vcore.cons (bruijn ##.sym.59 2 0) '())) (##inline ##vcore.cons (##inline ##vcore.cons '##vcore.cdr (##inline ##vcore.cons (bruijn ##.sym.59 2 0) '())) (##inline ##vcore.cdr (bruijn ##.expr-stack.55 11 1)))) (##inline ##vcore.cons (bruijn ##.x.292 1 0) (##inline ##vcore.cons (bruijn ##.x.294 0 0) (##inline ##vcore.cdr (bruijn ##.pattern-stack.56 11 2)))) (bruijn ##.success-expr.57 11 3))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 12-1, 1));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D33_V0k54, self))));
    VWORD _arg1 = 
      VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V10vcore_Dcar,
        VInlineCons2(runtime,
        statics->up->vars[0],
        VNULL)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V10vcore_Dcdr,
        VInlineCons2(runtime,
        statics->up->vars[0],
        VNULL)),
        VInlineCdr2(runtime,
        VGetArg(statics, 11-1, 1))));
    VWORD _arg2 = 
      VInlineCons2(runtime,
        statics->vars[0],
        VInlineCons2(runtime,
        _var0,
        VInlineCdr2(runtime,
        VGetArg(statics, 11-1, 2))));
    VWORD _arg3 = 
      VGetArg(statics, 11-1, 3);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D33(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D33_V0k52(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D33_V0k52" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D33_V0k52, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.cdar.1 14 2) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D33_V0k53) (bruijn ##.pattern-stack.56 10 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 2)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D33_V0k53, self)))),
      VGetArg(statics, 10-1, 2));
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D33_V0k51(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D33_V0k51" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D33_V0k51, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.caar.2 13 3) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D33_V0k52) (bruijn ##.pattern-stack.56 9 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 3)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D33_V0k52, self)))),
      VGetArg(statics, 9-1, 2));
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D33_V0k48(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D33_V0k48" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D33_V0k48, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.271 0 0) ((bruijn ##.gensym.6 12 7) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D33_V0k49) (##string ##.string.436)) (if (##inline ##vcore.pair? (##inline ##vcore.car (bruijn ##.pattern-stack.56 8 2))) ((bruijn ##.gensym.6 12 7) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D33_V0k51) (##string ##.string.436)) ((bruijn ##.compiler-error.10 12 11) (bruijn ##.k.193 8 0) (##string ##.string.441) (##inline ##vcore.car (bruijn ##.pattern-stack.56 8 2)))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 7)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D33_V0k49, self)))),
      VEncodePointer(&_V10_Dstring_D436.sym, VPOINTER_OTHER));
} else {
if(VDecodeBool(
VInlinePairP2(runtime,
        VInlineCar2(runtime,
        VGetArg(statics, 8-1, 2))))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 7)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D33_V0k51, self)))),
      VEncodePointer(&_V10_Dstring_D436.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 11)), 3,
      VGetArg(statics, 8-1, 0),
      VEncodePointer(&_V10_Dstring_D441.sym, VPOINTER_OTHER),
      VInlineCar2(runtime,
        VGetArg(statics, 8-1, 2)));
}
}
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D33_V0k35(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D33_V0k35" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D33_V0k35, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.250 0 0) ((bruijn ##.cdar.1 11 2) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D33_V0k36) (bruijn ##.pattern-stack.56 7 2)) ((close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D33_V0k45) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D33_V0k48)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 2)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D33_V0k36, self)))),
      VGetArg(statics, 7-1, 2));
} else {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D33_V0k45, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D33_V0k48, self)))));
}
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D33_V0k31(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D33_V0k31" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D33_V0k31, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.239 0 0) (##qualified-call (vanity compiler match transform-match ##.match-iter.33) #f (bruijn ##.match-iter.33 7 1) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D33_V0k32) (##inline ##vcore.cdr (bruijn ##.expr-stack.55 6 1)) (##inline ##vcore.cdr (bruijn ##.pattern-stack.56 6 2)) (bruijn ##.success-expr.57 6 3)) ((close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D33_V0k33) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D33_V0k35)))
if(VDecodeBool(
_var0)) {
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 7-1, 1));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D33_V0k32, self))));
    VWORD _arg1 = 
      VInlineCdr2(runtime,
        VGetArg(statics, 6-1, 1));
    VWORD _arg2 = 
      VInlineCdr2(runtime,
        VGetArg(statics, 6-1, 2));
    VWORD _arg3 = 
      VGetArg(statics, 6-1, 3);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D33(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
} else {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D33_V0k33, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D33_V0k35, self)))));
}
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D33_V0k28(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D33_V0k28" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D33_V0k28, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.211 0 0) ((bruijn ##.compiler-error.10 8 11) (bruijn ##.k.193 4 0) (##string ##.string.439) (##inline ##vcore.car (bruijn ##.pattern-stack.56 4 2))) (if (##inline ##vcore.null? (##inline ##vcore.car (bruijn ##.pattern-stack.56 4 2))) (##qualified-call (vanity compiler match transform-match ##.match-iter.33) #f (bruijn ##.match-iter.33 5 1) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D33_V0k29) (##inline ##vcore.cdr (bruijn ##.expr-stack.55 4 1)) (##inline ##vcore.cdr (bruijn ##.pattern-stack.56 4 2)) (bruijn ##.success-expr.57 4 3)) (basic-block 1 1 (##.reg.424) ((##vcore.string? (##inline ##vcore.car (bruijn ##.pattern-stack.56 5 2)))) (if (bruijn ##.reg.424 0 0) (##qualified-call (vanity compiler match transform-match ##.match-iter.33) #f (bruijn ##.match-iter.33 6 1) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D33_V0k30) (##inline ##vcore.cdr (bruijn ##.expr-stack.55 5 1)) (##inline ##vcore.cdr (bruijn ##.pattern-stack.56 5 2)) (bruijn ##.success-expr.57 5 3)) ((bruijn ##.atom?.8 9 9) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D33_V0k31) (##inline ##vcore.car (bruijn ##.pattern-stack.56 5 2)))))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 11)), 3,
      statics->up->up->up->vars[0],
      VEncodePointer(&_V10_Dstring_D439.sym, VPOINTER_OTHER),
      VInlineCar2(runtime,
        statics->up->up->up->vars[2]));
} else {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCar2(runtime,
        statics->up->up->up->vars[2])))) {
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 5-1, 1));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D33_V0k29, self))));
    VWORD _arg1 = 
      VInlineCdr2(runtime,
        statics->up->up->up->vars[1]);
    VWORD _arg2 = 
      VInlineCdr2(runtime,
        statics->up->up->up->vars[2]);
    VWORD _arg3 = 
      statics->up->up->up->vars[3];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D33(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VStringP2(runtime, NULL,
      VInlineCar2(runtime,
        VGetArg(statics, 5-1, 2)));
if(VDecodeBool(
self->vars[0])) {
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 6-1, 1));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D33_V0k30, self))));
    VWORD _arg1 = 
      VInlineCdr2(runtime,
        VGetArg(statics, 5-1, 1));
    VWORD _arg2 = 
      VInlineCdr2(runtime,
        VGetArg(statics, 5-1, 2));
    VWORD _arg3 = 
      VGetArg(statics, 5-1, 3);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D33(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 9)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D33_V0k31, self)))),
      VInlineCar2(runtime,
        VGetArg(statics, 5-1, 2)));
}
    }
}
}
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D33_V0k26(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D33_V0k26" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D33_V0k26, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.195 0 0) (##qualified-call (vanity compiler match transform-match ##.match-iter.33) #f (bruijn ##.match-iter.33 2 1) (bruijn ##.k.193 1 0) (##inline ##vcore.cdr (bruijn ##.expr-stack.55 1 1)) (##inline ##vcore.cdr (bruijn ##.pattern-stack.56 1 2)) (bruijn ##.success-expr.57 1 3)) (basic-block 1 1 (##.reg.422) ((##vcore.symbol? (##inline ##vcore.car (bruijn ##.pattern-stack.56 2 2)))) (if (bruijn ##.reg.422 0 0) (##qualified-call (vanity compiler match transform-match ##.match-iter.33) #f (bruijn ##.match-iter.33 3 1) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D33_V0k27) (##inline ##vcore.cdr (bruijn ##.expr-stack.55 2 1)) (##inline ##vcore.cdr (bruijn ##.pattern-stack.56 2 2)) (bruijn ##.success-expr.57 2 3)) (basic-block 1 1 (##.reg.423) ((##vcore.vector? (##inline ##vcore.car (bruijn ##.pattern-stack.56 3 2)))) (if (bruijn ##.reg.423 0 0) ((bruijn ##.compiler-error.10 7 11) (bruijn ##.k.193 3 0) (##string ##.string.438) (##inline ##vcore.car (bruijn ##.pattern-stack.56 3 2))) ((bruijn ##.typevector?.7 7 8) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D33_V0k28) (##inline ##vcore.car (bruijn ##.pattern-stack.56 3 2))))))))
if(VDecodeBool(
_var0)) {
  {
    VClosure * _closure = VDecodeClosure(statics->up->vars[1]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      VInlineCdr2(runtime,
        statics->vars[1]);
    VWORD _arg2 = 
      VInlineCdr2(runtime,
        statics->vars[2]);
    VWORD _arg3 = 
      statics->vars[3];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D33(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VSymbolP2(runtime, NULL,
      VInlineCar2(runtime,
        statics->up->vars[2]));
if(VDecodeBool(
self->vars[0])) {
  {
    VClosure * _closure = VDecodeClosure(statics->up->up->vars[1]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D33_V0k27, self))));
    VWORD _arg1 = 
      VInlineCdr2(runtime,
        statics->up->vars[1]);
    VWORD _arg2 = 
      VInlineCdr2(runtime,
        statics->up->vars[2]);
    VWORD _arg3 = 
      statics->up->vars[3];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D33(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VVectorP2(runtime, NULL,
      VInlineCar2(runtime,
        statics->up->up->vars[2]));
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 11)), 3,
      statics->up->up->vars[0],
      VEncodePointer(&_V10_Dstring_D438.sym, VPOINTER_OTHER),
      VInlineCar2(runtime,
        statics->up->up->vars[2]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 8)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D33_V0k28, self)))),
      VInlineCar2(runtime,
        statics->up->up->vars[2]));
}
    }
}
    }
}
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D33(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D33" };
 VRecordCall2(runtime, &dbg);
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D33, got ~D~N"
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
  // (if (##inline ##vcore.null? (bruijn ##.pattern-stack.56 0 2)) ((bruijn ##.k.193 0 0) (bruijn ##.success-expr.57 0 3)) ((bruijn ##.eqv?.31 2 2) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D33_V0k26) (##inline ##vcore.car (bruijn ##.pattern-stack.56 0 2)) '_))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var2))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _var3);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[2]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D33_V0k26, self)))),
      VInlineCar2(runtime,
        _var2),
      _V0_U);
}
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D62_V0k60(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D62_V0k60" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D62_V0k60, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.336 3 0) (##inline ##vcore.cons (##inline ##vcore.cons '##vcore.call-with-values (##inline ##vcore.cons (##inline ##vcore.cons 'lambda (##inline ##vcore.cons '() (bruijn ##.x.346 0 0))) (##inline ##vcore.cons (bruijn ##.x.325 7 0) '()))) '()))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V10vcore_Dcall__with__values,
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0lambda,
        VInlineCons2(runtime,
        VNULL,
        _var0)),
        VInlineCons2(runtime,
        VGetArg(statics, 7-1, 0),
        VNULL))),
        VNULL));
}
static void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D62_V0k65(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.compiler-warning.4 14 5) (bruijn ##.k.361 1 0) (##string ##.string.443))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 5)), 2,
      statics->vars[0],
      VEncodePointer(&_V10_Dstring_D443.sym, VPOINTER_OTHER));
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D62_V0k64(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D62_V0k64" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D62_V0k64, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.compiler-warning.4 14 5) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D62_V0k65) (##string ##.string.444) (bruijn ##.x.362 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 5)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D62_V0k65, self)))),
      VEncodePointer(&_V10_Dstring_D444.sym, VPOINTER_OTHER),
      _var0);
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D62_V0k63(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D62_V0k63" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D62_V0k63, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.not (bruijn ##.x.363 1 0)) ((bruijn ##.caar.2 13 3) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D62_V0k64) (bruijn ##.patterns.63 5 1)) ((bruijn ##.k.361 0 0) #f))
if(VDecodeBool(
VInlineNot2(runtime,
        statics->vars[0]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 3)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D62_V0k64, self)))),
      VGetArg(statics, 5-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D62_V0k72(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D62_V0k72" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D62_V0k72, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.336 10 0) (##inline ##vcore.cons (bruijn ##.x.347 1 0) (bruijn ##.x.348 0 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 0)), 1,
      VInlineCons2(runtime,
        statics->vars[0],
        _var0));
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D62_V0k71(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D62_V0k71" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D62_V0k71, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler match transform-match ##.loop.62) #f (bruijn ##.loop.62 10 0) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D62_V0k72) (##inline ##vcore.cdr (bruijn ##.patterns.63 9 1)))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 10-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D62_V0k72, self))));
    VWORD _arg1 = 
      VInlineCdr2(runtime,
        VGetArg(statics, 9-1, 1));
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D62(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D62_V0k70(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D62_V0k70" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D62_V0k70, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler match transform-match ##.match-iter.33) #f (bruijn ##.match-iter.33 13 1) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D62_V0k71) (bruijn ##.x.350 3 0) (bruijn ##.x.351 1 0) (##inline ##vcore.cons (##inline ##vcore.cons '##vcore.call-with-values (##inline ##vcore.cons (##inline ##vcore.cons 'lambda (##inline ##vcore.cons '() (bruijn ##.x.358 0 0))) (##inline ##vcore.cons (bruijn ##.x.325 12 0) '()))) '()))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 13-1, 1));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D62_V0k71, self))));
    VWORD _arg1 = 
      statics->up->up->vars[0];
    VWORD _arg2 = 
      statics->vars[0];
    VWORD _arg3 = 
      VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V10vcore_Dcall__with__values,
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0lambda,
        VInlineCons2(runtime,
        VNULL,
        _var0)),
        VInlineCons2(runtime,
        VGetArg(statics, 12-1, 0),
        VNULL))),
        VNULL);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D33(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D62_V0k69(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D62_V0k69" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D62_V0k69, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.cdar.1 15 2) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D62_V0k70) (bruijn ##.patterns.63 7 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 2)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D62_V0k70, self)))),
      VGetArg(statics, 7-1, 1));
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D62_V0k68(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D62_V0k68" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D62_V0k68, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.list.3 14 4) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D62_V0k69) (bruijn ##.x.359 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 4)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D62_V0k69, self)))),
      _var0);
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D62_V0k67(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D62_V0k67" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D62_V0k67, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.caar.2 13 3) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D62_V0k68) (bruijn ##.patterns.63 5 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 3)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D62_V0k68, self)))),
      VGetArg(statics, 5-1, 1));
}
static void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D62_V0k66(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.list.3 12 4) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D62_V0k67) (bruijn ##.x.326 7 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 4)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D62_V0k67, self)))),
      VGetArg(statics, 7-1, 0));
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D62_V0k62(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D62_V0k62" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D62_V0k62, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D62_V0k63) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D62_V0k66))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D62_V0k63, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D62_V0k66, self)))));
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D62_V0k61(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D62_V0k61" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D62_V0k61, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler match check-pattern) #t (bruijn ##.check-pattern.28 10 1) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D62_V0k62) (bruijn ##.x.364 0 0))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0match;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D62_V0k62, self))));
    VWORD _arg1 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0check__pattern, _V60_V0vanity_V0compiler_V0match)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0match_V0check__pattern(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D62_V0k59(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D62_V0k59" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D62_V0k59, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.340 0 0) ((bruijn ##.cdar.1 10 2) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D62_V0k60) (bruijn ##.patterns.63 2 1)) ((bruijn ##.caar.2 10 3) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D62_V0k61) (bruijn ##.patterns.63 2 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 2)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D62_V0k60, self)))),
      statics->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 3)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D62_V0k61, self)))),
      statics->up->vars[1]);
}
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D62_V0k58(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D62_V0k58" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D62_V0k58, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.eqv?.31 7 2) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D62_V0k59) (bruijn ##.x.365 0 0) 'else)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 2)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D62_V0k59, self)))),
      _var0,
      _V0else);
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D62(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D62" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D62, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (if (##inline ##vcore.null? (bruijn ##.patterns.63 0 1)) ((bruijn ##.k.336 0 0) (##inline ##vcore.cons (##inline ##vcore.cons 'error (##inline ##vcore.cons '(##string ##.string.442) '())) '())) ((bruijn ##.caar.2 8 3) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D62_V0k58) (bruijn ##.patterns.63 0 1)))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var1))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0error,
        VInlineCons2(runtime,
        VEncodePointer(&_V10_Dstring_D442.sym, VPOINTER_OTHER),
        VNULL)),
        VNULL));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 3)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D62_V0k58, self)))),
      _var1);
}
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V0k74(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0match_V0transform__match_V0k74" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V0k74, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.77 7 0) (##inline ##vcore.cons '##vcore.call/cc (##inline ##vcore.cons (##inline ##vcore.cons 'lambda (##inline ##vcore.cons (##inline ##vcore.cons (bruijn ##.x.325 5 0) '()) (##inline ##vcore.cons (##inline ##vcore.cons 'let (##inline ##vcore.cons (##inline ##vcore.cons (##inline ##vcore.cons (bruijn ##.x.326 4 0) (##inline ##vcore.cons (bruijn ##.x.369 3 0) '())) '()) (bruijn ##.x.335 0 0))) '()))) '())))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 1,
      VInlineCons2(runtime,
        _V10vcore_Dcall_Wcc,
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0lambda,
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        VGetArg(statics, 5-1, 0),
        VNULL),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0let,
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        statics->up->up->up->vars[0],
        VInlineCons2(runtime,
        statics->up->up->vars[0],
        VNULL)),
        VNULL),
        _var0)),
        VNULL))),
        VNULL)));
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V0k73(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0match_V0transform__match_V0k73" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V0k73, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler match transform-match ##.loop.62) #f (bruijn ##.loop.62 1 0) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V0k74) (bruijn ##.x.366 0 0))
  {
    VClosure * _closure = VDecodeClosure(statics->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V0k74, self))));
    VWORD _arg1 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D62(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V0k57(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0match_V0transform__match_V0k57" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V0k57, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (letrec 1 ((close "_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D62")) ((bruijn ##.cddr.5 7 6) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V0k73) (bruijn ##.expr.30 5 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D62, self))));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 6)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V0k73, self)))),
      VGetArg(statics, 5-1, 1));
    }
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V0k56(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0match_V0transform__match_V0k56" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V0k56, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.cadr.0 5 1) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V0k57) (bruijn ##.expr.30 3 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 1)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V0k57, self)))),
      statics->up->up->vars[1]);
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V0k55(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0match_V0transform__match_V0k55" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V0k55, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.gensym.6 4 7) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V0k56) (##string ##.string.445))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[7]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V0k56, self)))),
      VEncodePointer(&_V10_Dstring_D445.sym, VPOINTER_OTHER));
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0match_V0transform__match" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (letrec 2 ((close "_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D32") (close "_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D33")) ((bruijn ##.gensym.6 3 7) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V0k55) (##string ##.string.437)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D32, self))));
    self->vars[1] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D33, self))));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[7]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V0k55, self)))),
      VEncodePointer(&_V10_Dstring_D437.sym, VPOINTER_OTHER));
    }
}
void _V50_V0vanity_V0compiler_V0match_V0check__pattern_V10_Diter_D65_V0k76(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0match_V0check__pattern_V10_Diter_D65_V0k76" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0check__pattern_V10_Diter_D65_V0k76, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.383 1 0) (##inline ##vcore.eq? (bruijn ##.x.385 0 0) '...))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VInlineEq2(runtime,
        _var0,
        _V0_D_D_D));
}
void _V50_V0vanity_V0compiler_V0match_V0check__pattern_V10_Diter_D65_V0k75(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0match_V0check__pattern_V10_Diter_D65_V0k75" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0check__pattern_V10_Diter_D65_V0k75, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.pattern.66 2 1)) (if (##inline ##vcore.pair? (##inline ##vcore.cdr (bruijn ##.pattern.66 2 1))) ((bruijn ##.cadr.0 6 1) (close _V50_V0vanity_V0compiler_V0match_V0check__pattern_V10_Diter_D65_V0k76) (bruijn ##.pattern.66 2 1)) ((bruijn ##.k.383 0 0) #f)) ((bruijn ##.k.383 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->vars[1]))) {
if(VDecodeBool(
VInlinePairP2(runtime,
        VInlineCdr2(runtime,
        statics->up->vars[1])))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 1)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0check__pattern_V10_Diter_D65_V0k76, self)))),
      statics->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0match_V0check__pattern_V10_Diter_D65_V0k79(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0match_V0check__pattern_V10_Diter_D65_V0k79" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0check__pattern_V10_Diter_D65_V0k79, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.427) ((##vcore.+ (bruijn ##.infinites.67 5 2) 1)) (##qualified-call (vanity compiler match check-pattern ##.iter.65) #f (bruijn ##.iter.65 6 0) (bruijn ##.k.371 5 0) (bruijn ##.x.375 1 0) (bruijn ##.reg.427 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      VGetArg(statics, 5-1, 2),
      VEncodeInt(1l));
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 6-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      VGetArg(statics, 5-1, 0);
    VWORD _arg1 = 
      statics->vars[0];
    VWORD _arg2 = 
      self->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0match_V0check__pattern_V10_Diter_D65(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0match_V0check__pattern_V10_Diter_D65_V0k78(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0match_V0check__pattern_V10_Diter_D65_V0k78" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0check__pattern_V10_Diter_D65_V0k78, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.374 0 0) ((bruijn ##.cddr.5 7 6) (close _V50_V0vanity_V0compiler_V0match_V0check__pattern_V10_Diter_D65_V0k79) (bruijn ##.pattern.66 3 1)) ((bruijn ##.k.371 3 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 6)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0check__pattern_V10_Diter_D65_V0k79, self)))),
      statics->up->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0match_V0check__pattern_V10_Diter_D65_V0k80(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0match_V0check__pattern_V10_Diter_D65_V0k80" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0check__pattern_V10_Diter_D65_V0k80, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.379 0 0) (##qualified-call (vanity compiler match check-pattern ##.iter.65) #f (bruijn ##.iter.65 4 0) (bruijn ##.k.371 3 0) (##inline ##vcore.cdr (bruijn ##.pattern.66 3 1)) (bruijn ##.infinites.67 3 2)) ((bruijn ##.k.371 3 0) #f))
if(VDecodeBool(
_var0)) {
  {
    VClosure * _closure = VDecodeClosure(statics->up->up->up->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->up->up->vars[0];
    VWORD _arg1 = 
      VInlineCdr2(runtime,
        statics->up->up->vars[1]);
    VWORD _arg2 = 
      statics->up->up->vars[2];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0match_V0check__pattern_V10_Diter_D65(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0match_V0check__pattern_V10_Diter_D65_V0k77(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0match_V0check__pattern_V10_Diter_D65_V0k77" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0check__pattern_V10_Diter_D65_V0k77, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.373 0 0) (##qualified-call (vanity compiler match check-pattern) #t (bruijn ##.check-pattern.28 5 1) (close _V50_V0vanity_V0compiler_V0match_V0check__pattern_V10_Diter_D65_V0k78) (##inline ##vcore.car (bruijn ##.pattern.66 2 1))) (if (##inline ##vcore.pair? (bruijn ##.pattern.66 2 1)) (##qualified-call (vanity compiler match check-pattern) #t (bruijn ##.check-pattern.28 5 1) (close _V50_V0vanity_V0compiler_V0match_V0check__pattern_V10_Diter_D65_V0k80) (##inline ##vcore.car (bruijn ##.pattern.66 2 1))) (basic-block 1 1 (##.reg.428) ((##vcore.<= (bruijn ##.infinites.67 3 2) 1)) ((bruijn ##.k.371 3 0) (bruijn ##.reg.428 0 0)))))
if(VDecodeBool(
_var0)) {
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0match;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0check__pattern_V10_Diter_D65_V0k78, self))));
    VWORD _arg1 = 
      VInlineCar2(runtime,
        statics->up->vars[1]);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0check__pattern, _V60_V0vanity_V0compiler_V0match)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0match_V0check__pattern(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
} else {
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->vars[1]))) {
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0match;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0check__pattern_V10_Diter_D65_V0k80, self))));
    VWORD _arg1 = 
      VInlineCar2(runtime,
        statics->up->vars[1]);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0check__pattern, _V60_V0vanity_V0compiler_V0match)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0match_V0check__pattern(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCmpLe(runtime, NULL,
      statics->up->up->vars[2],
      VEncodeInt(1l));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      self->vars[0]);
    }
}
}
}
void _V50_V0vanity_V0compiler_V0match_V0check__pattern_V10_Diter_D65(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0match_V0check__pattern_V10_Diter_D65" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0check__pattern_V10_Diter_D65, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 1 1 (##.reg.425) ((##vcore.symbol? (bruijn ##.pattern.66 1 1))) (if (bruijn ##.reg.425 0 0) (basic-block 1 1 (##.reg.426) ((##vcore.<= (bruijn ##.infinites.67 2 2) 0)) ((bruijn ##.k.371 2 0) (bruijn ##.reg.426 0 0))) ((close _V50_V0vanity_V0compiler_V0match_V0check__pattern_V10_Diter_D65_V0k75) (close _V50_V0vanity_V0compiler_V0match_V0check__pattern_V10_Diter_D65_V0k77))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VSymbolP2(runtime, NULL,
      statics->vars[1]);
if(VDecodeBool(
self->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCmpLe(runtime, NULL,
      statics->up->vars[2],
      VEncodeInt(0l));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0check__pattern_V10_Diter_D65_V0k75, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0check__pattern_V10_Diter_D65_V0k77, self)))));
}
    }
}
void _V50_V0vanity_V0compiler_V0match_V0check__pattern(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0match_V0check__pattern" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0check__pattern, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (letrec 1 ((close "_V50_V0vanity_V0compiler_V0match_V0check__pattern_V10_Diter_D65")) (##qualified-call (vanity compiler match check-pattern ##.iter.65) #f (bruijn ##.iter.65 0 0) (bruijn ##.k.370 1 0) (bruijn ##.pattern.64 1 1) 0))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0check__pattern_V10_Diter_D65, self))));
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      statics->vars[1];
    VWORD _arg2 = 
      VEncodeInt(0l);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0match_V0check__pattern_V10_Diter_D65(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0match_V0gather__variables_V0k83(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0match_V0gather__variables_V0k83" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0gather__variables_V0k83, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.387 4 0) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.pattern.68 4 1)) (bruijn ##.x.395 0 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VInlineCons2(runtime,
        VInlineCar2(runtime,
        statics->up->up->up->vars[1]),
        _var0));
}
void _V50_V0vanity_V0compiler_V0match_V0gather__variables_V0k87(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0match_V0gather__variables_V0k87" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0gather__variables_V0k87, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.eqv?.69 8 2) (bruijn ##.k.411 1 0) (bruijn ##.x.412 0 0) 'quote)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 2)), 3,
      statics->vars[0],
      _var0,
      _V0quote);
}
void _V50_V0vanity_V0compiler_V0match_V0gather__variables_V0k86(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0match_V0gather__variables_V0k86" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0gather__variables_V0k86, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (##inline ##vcore.car (bruijn ##.pattern.68 7 1))) ((bruijn ##.caar.2 9 3) (close _V50_V0vanity_V0compiler_V0match_V0gather__variables_V0k87) (bruijn ##.pattern.68 7 1)) ((bruijn ##.k.411 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VInlineCar2(runtime,
        VGetArg(statics, 7-1, 1))))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 3)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0gather__variables_V0k87, self)))),
      VGetArg(statics, 7-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0match_V0gather__variables_V0k90(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0match_V0gather__variables_V0k90" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0gather__variables_V0k90, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler match gather-variables) #t (bruijn ##.gather-variables.29 10 2) (bruijn ##.k.387 9 0) (##inline ##vcore.cons (bruijn ##.x.406 1 0) (##inline ##vcore.cons (bruijn ##.x.408 0 0) (##inline ##vcore.cdr (bruijn ##.pattern.68 9 1)))) (bruijn ##.eqv?.69 9 2))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0match;
    VWORD _arg0 = 
      VGetArg(statics, 9-1, 0);
    VWORD _arg1 = 
      VInlineCons2(runtime,
        statics->vars[0],
        VInlineCons2(runtime,
        _var0,
        VInlineCdr2(runtime,
        VGetArg(statics, 9-1, 1))));
    VWORD _arg2 = 
      VGetArg(statics, 9-1, 2);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0gather__variables, _V60_V0vanity_V0compiler_V0match)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0match_V0gather__variables(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0match_V0gather__variables_V0k89(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0match_V0gather__variables_V0k89" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0gather__variables_V0k89, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.cdar.1 10 2) (close _V50_V0vanity_V0compiler_V0match_V0gather__variables_V0k90) (bruijn ##.pattern.68 8 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 2)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0gather__variables_V0k90, self)))),
      VGetArg(statics, 8-1, 1));
}
void _V50_V0vanity_V0compiler_V0match_V0gather__variables_V0k88(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0match_V0gather__variables_V0k88" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0gather__variables_V0k88, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.403 0 0) (##qualified-call (vanity compiler match gather-variables) #t (bruijn ##.gather-variables.29 8 2) (bruijn ##.k.387 7 0) (##inline ##vcore.cdr (bruijn ##.pattern.68 7 1)) (bruijn ##.eqv?.69 7 2)) ((bruijn ##.caar.2 9 3) (close _V50_V0vanity_V0compiler_V0match_V0gather__variables_V0k89) (bruijn ##.pattern.68 7 1)))
if(VDecodeBool(
_var0)) {
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0match;
    VWORD _arg0 = 
      VGetArg(statics, 7-1, 0);
    VWORD _arg1 = 
      VInlineCdr2(runtime,
        VGetArg(statics, 7-1, 1));
    VWORD _arg2 = 
      VGetArg(statics, 7-1, 2);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0gather__variables, _V60_V0vanity_V0compiler_V0match)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0match_V0gather__variables(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 3)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0gather__variables_V0k89, self)))),
      VGetArg(statics, 7-1, 1));
}
}
void _V50_V0vanity_V0compiler_V0match_V0gather__variables_V0k85(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0match_V0gather__variables_V0k85" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0gather__variables_V0k85, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.401 0 0) (##qualified-call (vanity compiler match gather-variables) #t (bruijn ##.gather-variables.29 7 2) (bruijn ##.k.387 6 0) (##inline ##vcore.cdr (bruijn ##.pattern.68 6 1)) (bruijn ##.eqv?.69 6 2)) ((close _V50_V0vanity_V0compiler_V0match_V0gather__variables_V0k86) (close _V50_V0vanity_V0compiler_V0match_V0gather__variables_V0k88)))
if(VDecodeBool(
_var0)) {
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0match;
    VWORD _arg0 = 
      VGetArg(statics, 6-1, 0);
    VWORD _arg1 = 
      VInlineCdr2(runtime,
        VGetArg(statics, 6-1, 1));
    VWORD _arg2 = 
      VGetArg(statics, 6-1, 2);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0gather__variables, _V60_V0vanity_V0compiler_V0match)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0match_V0gather__variables(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
} else {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0gather__variables_V0k86, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0gather__variables_V0k88, self)))));
}
}
void _V50_V0vanity_V0compiler_V0match_V0gather__variables_V0k84(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0match_V0gather__variables_V0k84" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0gather__variables_V0k84, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.399 0 0) ((bruijn ##.compiler-error.10 7 11) (bruijn ##.k.387 5 0) (##string ##.string.439) (##inline ##vcore.car (bruijn ##.pattern.68 5 1))) ((bruijn ##.atom?.8 7 9) (close _V50_V0vanity_V0compiler_V0match_V0gather__variables_V0k85) (##inline ##vcore.car (bruijn ##.pattern.68 5 1))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 11)), 3,
      VGetArg(statics, 5-1, 0),
      VEncodePointer(&_V10_Dstring_D439.sym, VPOINTER_OTHER),
      VInlineCar2(runtime,
        VGetArg(statics, 5-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 9)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0gather__variables_V0k85, self)))),
      VInlineCar2(runtime,
        VGetArg(statics, 5-1, 1)));
}
}
void _V50_V0vanity_V0compiler_V0match_V0gather__variables_V0k82(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0match_V0gather__variables_V0k82" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0gather__variables_V0k82, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.391 0 0) (##qualified-call (vanity compiler match gather-variables) #t (bruijn ##.gather-variables.29 3 2) (bruijn ##.k.387 2 0) (##inline ##vcore.cdr (bruijn ##.pattern.68 2 1)) (bruijn ##.eqv?.69 2 2)) (basic-block 1 1 (##.reg.429) ((##vcore.symbol? (##inline ##vcore.car (bruijn ##.pattern.68 3 1)))) (if (bruijn ##.reg.429 0 0) (##qualified-call (vanity compiler match gather-variables) #t (bruijn ##.gather-variables.29 4 2) (close _V50_V0vanity_V0compiler_V0match_V0gather__variables_V0k83) (##inline ##vcore.cdr (bruijn ##.pattern.68 3 1)) (bruijn ##.eqv?.69 3 2)) (basic-block 1 1 (##.reg.430) ((##vcore.vector? (##inline ##vcore.car (bruijn ##.pattern.68 4 1)))) (if (bruijn ##.reg.430 0 0) ((bruijn ##.compiler-error.10 6 11) (bruijn ##.k.387 4 0) (##string ##.string.438) (##inline ##vcore.car (bruijn ##.pattern.68 4 1))) ((bruijn ##.typevector?.7 6 8) (close _V50_V0vanity_V0compiler_V0match_V0gather__variables_V0k84) (##inline ##vcore.car (bruijn ##.pattern.68 4 1))))))))
if(VDecodeBool(
_var0)) {
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0match;
    VWORD _arg0 = 
      statics->up->vars[0];
    VWORD _arg1 = 
      VInlineCdr2(runtime,
        statics->up->vars[1]);
    VWORD _arg2 = 
      statics->up->vars[2];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0gather__variables, _V60_V0vanity_V0compiler_V0match)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0match_V0gather__variables(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VSymbolP2(runtime, NULL,
      VInlineCar2(runtime,
        statics->up->up->vars[1]));
if(VDecodeBool(
self->vars[0])) {
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0match;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0gather__variables_V0k83, self))));
    VWORD _arg1 = 
      VInlineCdr2(runtime,
        statics->up->up->vars[1]);
    VWORD _arg2 = 
      statics->up->up->vars[2];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0gather__variables, _V60_V0vanity_V0compiler_V0match)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0match_V0gather__variables(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VVectorP2(runtime, NULL,
      VInlineCar2(runtime,
        statics->up->up->up->vars[1]));
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 11)), 3,
      statics->up->up->up->vars[0],
      VEncodePointer(&_V10_Dstring_D438.sym, VPOINTER_OTHER),
      VInlineCar2(runtime,
        statics->up->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 8)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0gather__variables_V0k84, self)))),
      VInlineCar2(runtime,
        statics->up->up->up->vars[1]));
}
    }
}
    }
}
}
void _V50_V0vanity_V0compiler_V0match_V0gather__variables_V0k81(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0match_V0gather__variables_V0k81" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0gather__variables_V0k81, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.389 0 0) (##qualified-call (vanity compiler match gather-variables) #t (bruijn ##.gather-variables.29 2 2) (bruijn ##.k.387 1 0) (##inline ##vcore.cdr (bruijn ##.pattern.68 1 1)) (bruijn ##.eqv?.69 1 2)) ((bruijn ##.eqv?.69 1 2) (close _V50_V0vanity_V0compiler_V0match_V0gather__variables_V0k82) (##inline ##vcore.car (bruijn ##.pattern.68 1 1)) '...))
if(VDecodeBool(
_var0)) {
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0match;
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      VInlineCdr2(runtime,
        statics->vars[1]);
    VWORD _arg2 = 
      statics->vars[2];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0gather__variables, _V60_V0vanity_V0compiler_V0match)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0match_V0gather__variables(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[2]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0gather__variables_V0k82, self)))),
      VInlineCar2(runtime,
        statics->vars[1]),
      _V0_D_D_D);
}
}
void _V50_V0vanity_V0compiler_V0match_V0gather__variables(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0match_V0gather__variables" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0gather__variables, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (if (##inline ##vcore.null? (bruijn ##.pattern.68 0 1)) ((bruijn ##.k.387 0 0) '()) ((bruijn ##.eqv?.69 0 2) (close _V50_V0vanity_V0compiler_V0match_V0gather__variables_V0k81) (##inline ##vcore.car (bruijn ##.pattern.68 0 1)) '_))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var1))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VNULL);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var2), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0gather__variables_V0k81, self)))),
      VInlineCar2(runtime,
        _var1),
      _V0_U);
}
}
static void _V0vanity_V0compiler_V0match_V20_V0lambda3(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4, VWORD _var5, VWORD _var6, VWORD _var7, VWORD _var8, VWORD _var9, VWORD _var10, VWORD _var11, VWORD _var12, VWORD _var13, VWORD _var14) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0match_V20_V0lambda3" };
 VRecordCall2(runtime, &dbg);
 if(argc != 15) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0match_V20_V0lambda3, got ~D~N"
  "-- expected 15~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[15]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 15, 15, statics);
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
  // (##letrec (vanity compiler match) 3 ((close "_V50_V0vanity_V0compiler_V0match_V0transform__match" "_V60_V0vanity_V0compiler_V0match") (close "_V50_V0vanity_V0compiler_V0match_V0check__pattern" "_V60_V0vanity_V0compiler_V0match") (close "_V50_V0vanity_V0compiler_V0match_V0gather__variables" "_V60_V0vanity_V0compiler_V0match")) ((bruijn ##.k.76 1 0) (##inline ##vcore.cons (##inline ##vcore.cons 'transform-match (bruijn ##.transform-match.27 0 0)) '())))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    _V60_V0vanity_V0compiler_V0match = self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match, _V60_V0vanity_V0compiler_V0match))));
    self->vars[1] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0check__pattern, _V60_V0vanity_V0compiler_V0match))));
    self->vars[2] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0gather__variables, _V60_V0vanity_V0compiler_V0match))));
    VRegisterStaticEnv("_V0vanity_V0compiler_V0match_V20", &_V60_V0vanity_V0compiler_V0match);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0transform__match,
        self->vars[0]),
        VNULL));
    }
}
static void _V0vanity_V0compiler_V0match_V20_V0lambda1(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0match_V20_V0lambda1" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0match_V20_V0lambda1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.k.71 0 0) (close _V0vanity_V0compiler_V0match_V20_V0lambda2) (close _V0vanity_V0compiler_V0match_V20_V0lambda3))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_V0lambda2, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_V0lambda3, self)))));
}
VFunc _V0vanity_V0compiler_V0match_V20 = (VFunc)_V0vanity_V0compiler_V0match_V20_V0lambda1;
