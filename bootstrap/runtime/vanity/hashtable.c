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

VEnv * _V60_V0vanity_V0hashtable;

static struct { VBlob sym; char bytes[28]; } _V10_Dstring_D89 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 28 }, "_V0vanity_V0hash__table_V20" };
static struct { VBlob sym; char bytes[26]; } _V10_Dstring_D88 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 26 }, "_V0vanity_V0hashtable_V20" };
static VPair _V10_Dpair_D87 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D86 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D85 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D84 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D83 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D82 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D81 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D80 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D79 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D78 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D77 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D76 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D75 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D74 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D73 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D72 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0current__hash;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V0current__hash = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "current-hash" };
VWEAK VWORD _V0hash__table__ref;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V0hash__table__ref = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "hash-table-ref" };
VWEAK VWORD _V0hash__table__delete_B;VWEAK struct { VBlob sym; char bytes[19]; } _VW_V0hash__table__delete_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 19 }, "hash-table-delete!" };
VWEAK VWORD _V0hash__table__walk;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V0hash__table__walk = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "hash-table-walk" };
VWEAK VWORD _V0hash__table__map___Glist;VWEAK struct { VBlob sym; char bytes[21]; } _VW_V0hash__table__map___Glist = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 21 }, "hash-table-map->list" };
VWEAK VWORD _V0hash__table___Galist;VWEAK struct { VBlob sym; char bytes[18]; } _VW_V0hash__table___Galist = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 18 }, "hash-table->alist" };
VWEAK VWORD _V0hash__table__fold;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V0hash__table__fold = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "hash-table-fold" };
VWEAK VWORD _V0hash__table__for__each;VWEAK struct { VBlob sym; char bytes[20]; } _VW_V0hash__table__for__each = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 20 }, "hash-table-for-each" };
VWEAK VWORD _V0hash__table__size;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V0hash__table__size = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "hash-table-size" };
VWEAK VWORD _V0hash__table__set_B;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V0hash__table__set_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "hash-table-set!" };
VWEAK VWORD _V0make__hash__table;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V0make__hash__table = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "make-hash-table" };
VWEAK VWORD _V40VMultiImport;
VWEAK VClosure _VW_V40VMultiImport = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VMultiImport, NULL };
static VPair _V10_Dpair_D71 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D70 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D69 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D68 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D67 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D66 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D65 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D64 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0_Mx;VWEAK struct { VBlob sym; char bytes[3]; } _VW_V0_Mx = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 3 }, "%x" };
static VPair _V10_Dpair_D63 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D62 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D61 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D60 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D59 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0_Mk;VWEAK struct { VBlob sym; char bytes[3]; } _VW_V0_Mk = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 3 }, "%k" };
static void _V0vanity_V0hashtable_V20_V0lambda2(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4, VWORD _var5, VWORD _var6, VWORD _var7, VWORD _var8, VWORD _var9, VWORD _var10) {
 static VDebugInfo dbg = { "_V0vanity_V0hashtable_V20_V0lambda2" };
 VRecordCall2(runtime, &dbg);
 if(argc != 11) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0hashtable_V20_V0lambda2, got ~D~N"
  "-- expected 11~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[11]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 11, 11, statics);
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
  // (##letrec (vanity hashtable) 0 () (basic-block 22 22 (##.%x.37 ##.%x.38 ##.%x.39 ##.%x.40 ##.%x.41 ##.%x.42 ##.%x.43 ##.%x.44 ##.%x.45 ##.%x.46 ##.%x.47 ##.%x.48 ##.%x.49 ##.%x.50 ##.%x.51 ##.%x.52 ##.%x.53 ##.%x.54 ##.%x.55 ##.%x.56 ##.%x.57 ##.%r.58) ((##vcore.cons 'current-hash (bruijn ##.current-hash.11 2 10)) (##vcore.cons 'make-hash-table (bruijn ##.make-hash-table.1 2 0)) (##vcore.cons 'hash-table-ref (bruijn ##.hash-table-ref.10 2 9)) (##vcore.cons 'hash-table-set! (bruijn ##.hash-table-set!.2 2 1)) (##vcore.cons 'hash-table-delete! (bruijn ##.hash-table-delete!.9 2 8)) (##vcore.cons 'hash-table-size (bruijn ##.hash-table-size.3 2 2)) (##vcore.cons 'hash-table-walk (bruijn ##.hash-table-walk.8 2 7)) (##vcore.cons 'hash-table-for-each (bruijn ##.hash-table-for-each.4 2 3)) (##vcore.cons 'hash-table-map->list (bruijn ##.hash-table-map->list.7 2 6)) (##vcore.cons 'hash-table-fold (bruijn ##.hash-table-fold.5 2 4)) (##vcore.cons 'hash-table->alist (bruijn ##.hash-table->alist.6 2 5)) (##vcore.cons (bruijn ##.%x.47 0 10) '()) (##vcore.cons (bruijn ##.%x.46 0 9) (bruijn ##.%x.48 0 11)) (##vcore.cons (bruijn ##.%x.45 0 8) (bruijn ##.%x.49 0 12)) (##vcore.cons (bruijn ##.%x.44 0 7) (bruijn ##.%x.50 0 13)) (##vcore.cons (bruijn ##.%x.43 0 6) (bruijn ##.%x.51 0 14)) (##vcore.cons (bruijn ##.%x.42 0 5) (bruijn ##.%x.52 0 15)) (##vcore.cons (bruijn ##.%x.41 0 4) (bruijn ##.%x.53 0 16)) (##vcore.cons (bruijn ##.%x.40 0 3) (bruijn ##.%x.54 0 17)) (##vcore.cons (bruijn ##.%x.39 0 2) (bruijn ##.%x.55 0 18)) (##vcore.cons (bruijn ##.%x.38 0 1) (bruijn ##.%x.56 0 19)) (##vcore.cons (bruijn ##.%x.37 0 0) (bruijn ##.%x.57 0 20))) ((bruijn ##.%k.13 5 0) (bruijn ##.%r.58 0 21))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[0]; } container;
    self = &container.self;
    _V60_V0vanity_V0hashtable = self;
    VInitEnv(self, 0, 0, statics);
    VRegisterStaticEnv("_V0vanity_V0hashtable_V20", &_V60_V0vanity_V0hashtable);
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[22]; } container;
    self = &container.self;
    VInitEnv(self, 22, 22, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      _V0current__hash,
      statics->up->vars[10]);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      _V0make__hash__table,
      statics->up->vars[0]);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      _V0hash__table__ref,
      statics->up->vars[9]);
    self->vars[3] = _VBasic_VCons2(runtime, NULL,
      _V0hash__table__set_B,
      statics->up->vars[1]);
    self->vars[4] = _VBasic_VCons2(runtime, NULL,
      _V0hash__table__delete_B,
      statics->up->vars[8]);
    self->vars[5] = _VBasic_VCons2(runtime, NULL,
      _V0hash__table__size,
      statics->up->vars[2]);
    self->vars[6] = _VBasic_VCons2(runtime, NULL,
      _V0hash__table__walk,
      statics->up->vars[7]);
    self->vars[7] = _VBasic_VCons2(runtime, NULL,
      _V0hash__table__for__each,
      statics->up->vars[3]);
    self->vars[8] = _VBasic_VCons2(runtime, NULL,
      _V0hash__table__map___Glist,
      statics->up->vars[6]);
    self->vars[9] = _VBasic_VCons2(runtime, NULL,
      _V0hash__table__fold,
      statics->up->vars[4]);
    self->vars[10] = _VBasic_VCons2(runtime, NULL,
      _V0hash__table___Galist,
      statics->up->vars[5]);
    self->vars[11] = _VBasic_VCons2(runtime, NULL,
      self->vars[10],
      VNULL);
    self->vars[12] = _VBasic_VCons2(runtime, NULL,
      self->vars[9],
      self->vars[11]);
    self->vars[13] = _VBasic_VCons2(runtime, NULL,
      self->vars[8],
      self->vars[12]);
    self->vars[14] = _VBasic_VCons2(runtime, NULL,
      self->vars[7],
      self->vars[13]);
    self->vars[15] = _VBasic_VCons2(runtime, NULL,
      self->vars[6],
      self->vars[14]);
    self->vars[16] = _VBasic_VCons2(runtime, NULL,
      self->vars[5],
      self->vars[15]);
    self->vars[17] = _VBasic_VCons2(runtime, NULL,
      self->vars[4],
      self->vars[16]);
    self->vars[18] = _VBasic_VCons2(runtime, NULL,
      self->vars[3],
      self->vars[17]);
    self->vars[19] = _VBasic_VCons2(runtime, NULL,
      self->vars[2],
      self->vars[18]);
    self->vars[20] = _VBasic_VCons2(runtime, NULL,
      self->vars[1],
      self->vars[19]);
    self->vars[21] = _VBasic_VCons2(runtime, NULL,
      self->vars[0],
      self->vars[20]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      self->vars[21]);
    }
    }
}
static void _V0vanity_V0hashtable_V20_V0k2(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0hashtable_V20_V0k2" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0hashtable_V20_V0k2, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((##intrinsic "VMultiImport") (close _V0vanity_V0hashtable_V20_V0lambda2) (##string ##.string.88) (bruijn ##.%x.35 0 0) 'make-hash-table 'hash-table-set! 'hash-table-size 'hash-table-for-each 'hash-table-fold 'hash-table->alist 'hash-table-map->list 'hash-table-walk 'hash-table-delete! 'hash-table-ref 'current-hash)
    VCallFuncWithGC(runtime, (VFunc)VMultiImport, 14,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0hashtable_V20_V0lambda2, self)))),
      VEncodePointer(&_V10_Dstring_D88.sym, VPOINTER_OTHER),
      _var0,
      _V0make__hash__table,
      _V0hash__table__set_B,
      _V0hash__table__size,
      _V0hash__table__for__each,
      _V0hash__table__fold,
      _V0hash__table___Galist,
      _V0hash__table__map___Glist,
      _V0hash__table__walk,
      _V0hash__table__delete_B,
      _V0hash__table__ref,
      _V0current__hash);
}
static void _V0vanity_V0hashtable_V20_V0k1(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0hashtable_V20_V0k1" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0hashtable_V20_V0k1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.vector (close _V0vanity_V0hashtable_V20_V0k2) (bruijn ##.%x.36 0 0))
    VCallFuncWithGC(runtime, (VFunc)VCreateVector, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0hashtable_V20_V0k2, self)))),
      _var0);
}
static void _V0vanity_V0hashtable_V20_V0lambda1(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0hashtable_V20_V0lambda1" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0hashtable_V20_V0lambda1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0hashtable_V20_V0k1) (##string ##.string.89))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0hashtable_V20_V0k1, self)))),
      VEncodePointer(&_V10_Dstring_D89.sym, VPOINTER_OTHER));
}
VFunc _V0vanity_V0hashtable_V20 = (VFunc)_V0vanity_V0hashtable_V20_V0lambda1;
static __attribute__((constructor)) void VDllMain1() {
  _V0current__hash = VEncodePointer(VInternSymbol(-1388026837, &_VW_V0current__hash.sym), VPOINTER_OTHER);
  _V0hash__table__ref = VEncodePointer(VInternSymbol(987278019, &_VW_V0hash__table__ref.sym), VPOINTER_OTHER);
  _V0hash__table__delete_B = VEncodePointer(VInternSymbol(1653184530, &_VW_V0hash__table__delete_B.sym), VPOINTER_OTHER);
  _V0hash__table__walk = VEncodePointer(VInternSymbol(2018621625, &_VW_V0hash__table__walk.sym), VPOINTER_OTHER);
  _V0hash__table__map___Glist = VEncodePointer(VInternSymbol(-793455360, &_VW_V0hash__table__map___Glist.sym), VPOINTER_OTHER);
  _V0hash__table___Galist = VEncodePointer(VInternSymbol(-586883858, &_VW_V0hash__table___Galist.sym), VPOINTER_OTHER);
  _V0hash__table__fold = VEncodePointer(VInternSymbol(-579030885, &_VW_V0hash__table__fold.sym), VPOINTER_OTHER);
  _V0hash__table__for__each = VEncodePointer(VInternSymbol(-188805111, &_VW_V0hash__table__for__each.sym), VPOINTER_OTHER);
  _V0hash__table__size = VEncodePointer(VInternSymbol(2129173623, &_VW_V0hash__table__size.sym), VPOINTER_OTHER);
  _V0hash__table__set_B = VEncodePointer(VInternSymbol(-799540310, &_VW_V0hash__table__set_B.sym), VPOINTER_OTHER);
  _V0make__hash__table = VEncodePointer(VInternSymbol(-2146525516, &_VW_V0make__hash__table.sym), VPOINTER_OTHER);
  _V0_Mx = VEncodePointer(VInternSymbol(-1853698215, &_VW_V0_Mx.sym), VPOINTER_OTHER);
  _V0_Mk = VEncodePointer(VInternSymbol(-865914236, &_VW_V0_Mk.sym), VPOINTER_OTHER);
  _V10_Dpair_D87.first = VEncodePointer(&_V10_Dpair_D84, VPOINTER_PAIR);
  _V10_Dpair_D87.rest = VEncodePointer(&_V10_Dpair_D86, VPOINTER_PAIR);
  _V10_Dpair_D86.first = VEncodePointer(&_V10_Dpair_D85, VPOINTER_PAIR);
  _V10_Dpair_D86.rest = VNULL;
  _V10_Dpair_D85.first = VEncodePointer(&_V10_Dpair_D64, VPOINTER_PAIR);
  _V10_Dpair_D85.rest = VEncodePointer(&_V10_Dpair_D69, VPOINTER_PAIR);
  _V10_Dpair_D84.first = VEncodeBool(false);
  _V10_Dpair_D84.rest = VEncodePointer(&_V10_Dpair_D83, VPOINTER_PAIR);
  _V10_Dpair_D83.first = VEncodePointer(&_V10_Dpair_D82, VPOINTER_PAIR);
  _V10_Dpair_D83.rest = VNULL;
  _V10_Dpair_D82.first = _V0make__hash__table;
  _V10_Dpair_D82.rest = VEncodePointer(&_V10_Dpair_D81, VPOINTER_PAIR);
  _V10_Dpair_D81.first = _V0hash__table__set_B;
  _V10_Dpair_D81.rest = VEncodePointer(&_V10_Dpair_D80, VPOINTER_PAIR);
  _V10_Dpair_D80.first = _V0hash__table__size;
  _V10_Dpair_D80.rest = VEncodePointer(&_V10_Dpair_D79, VPOINTER_PAIR);
  _V10_Dpair_D79.first = _V0hash__table__for__each;
  _V10_Dpair_D79.rest = VEncodePointer(&_V10_Dpair_D78, VPOINTER_PAIR);
  _V10_Dpair_D78.first = _V0hash__table__fold;
  _V10_Dpair_D78.rest = VEncodePointer(&_V10_Dpair_D77, VPOINTER_PAIR);
  _V10_Dpair_D77.first = _V0hash__table___Galist;
  _V10_Dpair_D77.rest = VEncodePointer(&_V10_Dpair_D76, VPOINTER_PAIR);
  _V10_Dpair_D76.first = _V0hash__table__map___Glist;
  _V10_Dpair_D76.rest = VEncodePointer(&_V10_Dpair_D75, VPOINTER_PAIR);
  _V10_Dpair_D75.first = _V0hash__table__walk;
  _V10_Dpair_D75.rest = VEncodePointer(&_V10_Dpair_D74, VPOINTER_PAIR);
  _V10_Dpair_D74.first = _V0hash__table__delete_B;
  _V10_Dpair_D74.rest = VEncodePointer(&_V10_Dpair_D73, VPOINTER_PAIR);
  _V10_Dpair_D73.first = _V0hash__table__ref;
  _V10_Dpair_D73.rest = VEncodePointer(&_V10_Dpair_D72, VPOINTER_PAIR);
  _V10_Dpair_D72.first = _V0current__hash;
  _V10_Dpair_D72.rest = VNULL;
  _V40VMultiImport = VEncodePointer(VLookupConstant("_V40VMultiImport", &_VW_V40VMultiImport), VPOINTER_CLOSURE);
  _V10_Dpair_D71.first = VEncodePointer(&_V10_Dpair_D66, VPOINTER_PAIR);
  _V10_Dpair_D71.rest = VEncodePointer(&_V10_Dpair_D70, VPOINTER_PAIR);
  _V10_Dpair_D70.first = VEncodePointer(&_V10_Dpair_D69, VPOINTER_PAIR);
  _V10_Dpair_D70.rest = VNULL;
  _V10_Dpair_D69.first = VEncodePointer(&_V10_Dpair_D64, VPOINTER_PAIR);
  _V10_Dpair_D69.rest = VEncodePointer(&_V10_Dpair_D60, VPOINTER_PAIR);
  _V10_Dpair_D68.first = VEncodePointer(&_V10_Dpair_D66, VPOINTER_PAIR);
  _V10_Dpair_D68.rest = VEncodePointer(&_V10_Dpair_D67, VPOINTER_PAIR);
  _V10_Dpair_D67.first = VEncodePointer(&_V10_Dpair_D60, VPOINTER_PAIR);
  _V10_Dpair_D67.rest = VNULL;
  _V10_Dpair_D66.first = VEncodeBool(false);
  _V10_Dpair_D66.rest = VEncodePointer(&_V10_Dpair_D65, VPOINTER_PAIR);
  _V10_Dpair_D65.first = VEncodePointer(&_V10_Dpair_D64, VPOINTER_PAIR);
  _V10_Dpair_D65.rest = VNULL;
  _V10_Dpair_D64.first = _V0_Mx;
  _V10_Dpair_D64.rest = VNULL;
  _V10_Dpair_D63.first = VEncodePointer(&_V10_Dpair_D61, VPOINTER_PAIR);
  _V10_Dpair_D63.rest = VEncodePointer(&_V10_Dpair_D62, VPOINTER_PAIR);
  _V10_Dpair_D62.first = VNULL;
  _V10_Dpair_D62.rest = VNULL;
  _V10_Dpair_D61.first = VEncodeBool(false);
  _V10_Dpair_D61.rest = VEncodePointer(&_V10_Dpair_D60, VPOINTER_PAIR);
  _V10_Dpair_D60.first = VEncodePointer(&_V10_Dpair_D59, VPOINTER_PAIR);
  _V10_Dpair_D60.rest = VNULL;
  _V10_Dpair_D59.first = _V0_Mk;
  _V10_Dpair_D59.rest = VNULL;
  VRegisterProcDebugInfo((VFunc)_V0vanity_V0hashtable_V20_V0lambda2, VEncodePointer(&_V10_Dpair_D87, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0vanity_V0hashtable_V20_V0k2, VEncodePointer(&_V10_Dpair_D71, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0vanity_V0hashtable_V20_V0k1, VEncodePointer(&_V10_Dpair_D68, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0vanity_V0hashtable_V20_V0lambda1, VEncodePointer(&_V10_Dpair_D63, VPOINTER_PAIR));
}
