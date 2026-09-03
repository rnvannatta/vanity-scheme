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

V_DECLARE_FUNC_BASIC(VHashTableP2, _var0);
V_DECLARE_FUNC(VEqHash, _var0);
V_DECLARE_FUNC(VHashCombine, _var0, _var1);
V_DECLARE_FUNC_BASIC(VHashBlob, _var0);
V_DECLARE_FUNC(VMakeHashTableImpl, _var0, _var1, _var2, _var3, _var4, _var5, _var6);
V_DECLARE_FUNC(VMakeWaybill, _var0, _var1, _var2, _var3, _var4, _var5, _var6);
V_DECLARE_FUNC_BASIC(VClearinghousePoll, _var0);
V_DECLARE_FUNC_BASIC(VWaybillAddress, _var0);
V_DECLARE_FUNC_BASIC(VHashTableSlotSet, _var0, _var1, _var2);
V_DECLARE_FUNC(VWaybillUnpack, _var0, _var1);
V_DECLARE_FUNC_BASIC(VHashTableSlot, _var0, _var1);
V_DECLARE_FUNC_MIN(VMultiImport, _var0, _var1, _var2);

VEnv * _V60_V0vanity_V0hash__table;

static struct { VBlob sym; char bytes[24]; } _V10_Dstring_D775 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 24 }, "_V0vanity_V0waybill_V20" };
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D774 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "_V0vanity_V0core_V20" };
VWEAK VWORD _V0equal_Q;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0equal_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "equal\?" };
VWEAK VWORD _V0vector__map;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V0vector__map = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "vector-map" };
VWEAK VWORD _V0displayln;VWEAK struct { VBlob sym; char bytes[10]; } _VW_V0displayln = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 10 }, "displayln" };
VWEAK VWORD _V0error;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0error = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "error" };
VWEAK VWORD _V0bitwise__and;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0bitwise__and = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "bitwise-and" };
static struct { VBlob sym; char bytes[28]; } _V10_Dstring_D773 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 28 }, "_V0vanity_V0hash__table_V20" };
VWEAK VWORD _V0hash__table___Galist;VWEAK struct { VBlob sym; char bytes[18]; } _VW_V0hash__table___Galist = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 18 }, "hash-table->alist" };
VWEAK VWORD _V0hash__table__fold;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V0hash__table__fold = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "hash-table-fold" };
VWEAK VWORD _V0hash__table__map___Glist;VWEAK struct { VBlob sym; char bytes[21]; } _VW_V0hash__table__map___Glist = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 21 }, "hash-table-map->list" };
VWEAK VWORD _V0hash__table__for__each;VWEAK struct { VBlob sym; char bytes[20]; } _VW_V0hash__table__for__each = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 20 }, "hash-table-for-each" };
VWEAK VWORD _V0hash__table__walk;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V0hash__table__walk = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "hash-table-walk" };
VWEAK VWORD _V0hash__table__size;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V0hash__table__size = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "hash-table-size" };
VWEAK VWORD _V0hash__table__delete_B;VWEAK struct { VBlob sym; char bytes[19]; } _VW_V0hash__table__delete_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 19 }, "hash-table-delete!" };
VWEAK VWORD _V0hash__table__set_B;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V0hash__table__set_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "hash-table-set!" };
VWEAK VWORD _V0hash__table__ref;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V0hash__table__ref = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "hash-table-ref" };
VWEAK VWORD _V40VHashTableP2;
VWEAK VClosure _VW_V40VHashTableP2 = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VHashTableP2, NULL };
VWEAK VWORD _V0hash__table_Q;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0hash__table_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "hash-table\?" };
VWEAK VWORD _V0make__hash__table;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V0make__hash__table = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "make-hash-table" };
VWEAK VWORD _V0make__eqv__hash__table;VWEAK struct { VBlob sym; char bytes[20]; } _VW_V0make__eqv__hash__table = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 20 }, "make-eqv-hash-table" };
VWEAK VWORD _V0make__eq__hash__table;VWEAK struct { VBlob sym; char bytes[19]; } _VW_V0make__eq__hash__table = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 19 }, "make-eq-hash-table" };
VWEAK VWORD _V0current__hash;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V0current__hash = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "current-hash" };
VWEAK VWORD _V40VEqHash;
VWEAK VClosure _VW_V40VEqHash = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VEqHash, NULL };
VWEAK VWORD _V40VHashCombine;
VWEAK VClosure _VW_V40VHashCombine = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VHashCombine, NULL };
VWEAK VWORD _V40VHashBlob;
VWEAK VClosure _VW_V40VHashBlob = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VHashBlob, NULL };
VWEAK VWORD _V40VMakeHashTableImpl;
VWEAK VClosure _VW_V40VMakeHashTableImpl = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VMakeHashTableImpl, NULL };
static struct { VBlob sym; char bytes[30]; } _V10_Dstring_D772 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 30 }, "only eq hash tables supported" };
VWEAK VWORD _V40_V10vcore_Deq_Q;
VWEAK VClosure _VW_V40_V10vcore_Deq_Q = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VEq2, NULL };
VWEAK VWORD _V40VMakeWaybill;
VWEAK VClosure _VW_V40VMakeWaybill = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VMakeWaybill, NULL };
static struct { VBlob sym; char bytes[62]; } _V10_Dstring_D771 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 62 }, "robinhood critereon failed: key slotting later appears before" };
static struct { VBlob sym; char bytes[34]; } _V10_Dstring_D770 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 34 }, "robinhood critereon failed: a gap" };
static struct { VBlob sym; char bytes[37]; } _V10_Dstring_D769 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 37 }, "probe length is too long to validate" };
static struct { VBlob sym; char bytes[17]; } _V10_Dstring_D768 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 17 }, "swept in rummage" };
static struct { VBlob sym; char bytes[22]; } _V10_Dstring_D767 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 22 }, "reinserted in rummage" };
VWEAK VWORD _V40VClearinghousePoll;
VWEAK VClosure _VW_V40VClearinghousePoll = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VClearinghousePoll, NULL };
static struct { VBlob sym; char bytes[28]; } _V10_Dstring_D766 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 28 }, "key not found in hash table" };
static struct { VBlob sym; char bytes[11]; } _V10_Dstring_D765 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 11 }, "grew table" };
VWEAK VWORD _V40VWaybillAddress;
VWEAK VClosure _VW_V40VWaybillAddress = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VWaybillAddress, NULL };
static struct { VBlob sym; char bytes[10]; } _V10_Dstring_D764 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 10 }, "set a key" };
static struct { VBlob sym; char bytes[23]; } _V10_Dstring_D763 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 23 }, "deleted a rummaged key" };
static struct { VBlob sym; char bytes[14]; } _V10_Dstring_D762 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 14 }, "deleted a key" };
VWEAK VWORD _V40VHashTableSlotSet;
VWEAK VClosure _VW_V40VHashTableSlotSet = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VHashTableSlotSet, NULL };
VWEAK VWORD _V40VWaybillUnpack;
VWEAK VClosure _VW_V40VWaybillUnpack = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VWaybillUnpack, NULL };
VWEAK VWORD _V40VHashTableSlot;
VWEAK VClosure _VW_V40VHashTableSlot = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VHashTableSlot, NULL };
VWEAK VWORD _V40_V10vcore_Dcons;
VWEAK VClosure _VW_V40_V10vcore_Dcons = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VCons2, NULL };
VWEAK VWORD _V40VMultiImport;
VWEAK VClosure _VW_V40VMultiImport = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VMultiImport, NULL };
V_DECLARE_FUNC_MIN(_V50_V0vanity_V0hash__table_V0make__hash__table);
V_DECLARE_FUNC_MIN(_V50_V0vanity_V0hash__table_V0make__eq__hash__table);
V_DECLARE_FUNC(_V50_V0vanity_V0hash__table_V0make__entry, _var0, _var1, _var2, _var3, _var4, _var5);
V_DECLARE_FUNC(_V50_V0vanity_V0hash__table_V0hash__slot, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0hash__table_V0hash__poverty, _var0, _var1, _var2, _var3);
V_DECLARE_FUNC(_V50_V0vanity_V0hash__table_V0waybill__key__matches_Q, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0hash__table_V0sequence_L, _var0, _var1, _var2, _var3);
V_DECLARE_FUNC(_V50_V0vanity_V0hash__table_V0sequence_G, _var0, _var1, _var2, _var3);
V_DECLARE_FUNC(_V50_V0vanity_V0hash__table_V0hash__table__keyvector, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0hash__table_V0validate__robinhood__impl_V10_Dfinalize_D2_D277, _var0);
V_DECLARE_FUNC(_V50_V0vanity_V0hash__table_V0validate__robinhood__impl_V10_Dloop_D1_D278_V10_Dfinalize_D15_D287, _var0);
V_DECLARE_FUNC(_V50_V0vanity_V0hash__table_V0validate__robinhood__impl_V10_Dloop_D1_D278_V10_Dloop_D14_D288, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0hash__table_V0validate__robinhood__impl_V10_Dloop_D1_D278, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0hash__table_V0validate__robinhood__impl, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0hash__table_V0validate__robinhood, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0hash__table_V0hash__table__find__impl_V10_Dloop_D266, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0hash__table_V0hash__table__find__impl, _var0, _var1, _var2, _var3);
V_DECLARE_FUNC(_V50_V0vanity_V0hash__table_V0hash__table__reinsert_B_V10_Dloop_D254, _var0, _var1, _var2, _var3);
V_DECLARE_FUNC(_V50_V0vanity_V0hash__table_V0hash__table__reinsert_B, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0hash__table_V0robinhood__shuffle_V10_Dloop_D243, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0hash__table_V0robinhood__shuffle, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0hash__table_V0hash__table__sweep_V10_Dloop_D235, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0hash__table_V0hash__table__sweep, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0hash__table_V0hash__table__rummage_V10_Dloop_D220, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0hash__table_V0hash__table__rummage, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0hash__table_V0hash__table__ref__impl_V10_Dfallback__ref_D203, _var0);
V_DECLARE_FUNC(_V50_V0vanity_V0hash__table_V0hash__table__ref__impl, _var0, _var1, _var2, _var3);
V_DECLARE_FUNC_MIN(_V50_V0vanity_V0hash__table_V0hash__table__ref);
V_DECLARE_FUNC(_V50_V0vanity_V0hash__table_V0hash__table__grow_V10_Dfinalize_D27_D187, _var0);
V_DECLARE_FUNC(_V50_V0vanity_V0hash__table_V0hash__table__grow_V10_Dloop_D26_D188, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0hash__table_V0hash__table__grow, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0hash__table_V0hash__table__set__impl_B_V10_Dloop_D172, _var0, _var1, _var2, _var3);
V_DECLARE_FUNC(_V50_V0vanity_V0hash__table_V0hash__table__set__impl_B, _var0, _var1, _var2, _var3);
V_DECLARE_FUNC(_V50_V0vanity_V0hash__table_V0hash__table__set_B, _var0, _var1, _var2, _var3);
V_DECLARE_FUNC(_V50_V0vanity_V0hash__table_V0hash__table__delete_B, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0hash__table_V0hash__table__size, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0hash__table_V0hash__table__for__each_V10_Dfinalize_D39_D139, _var0);
V_DECLARE_FUNC(_V50_V0vanity_V0hash__table_V0hash__table__for__each_V10_Dloop_D38_D140, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0hash__table_V0hash__table__for__each, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0hash__table_V0hash__table__walk, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0hash__table_V0hash__table__map___Glist, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0hash__table_V0hash__table__fold, _var0, _var1, _var2, _var3);
V_DECLARE_FUNC(_V50_V0vanity_V0hash__table_V0hash__table___Galist, _var0, _var1);
void _V50_V0vanity_V0hash__table_V0hash__table___Galist(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0hash__table_V0hash__table___Galist, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // (##qualified-call (vanity hash-table hash-table-map->list) #t (bruijn ##.hash-table-map->list.91 1 2) (bruijn ##.%k.339 0 0) (##intrinsic ##vcore.cons) (bruijn ##.ht.121 0 1))
  {
   VEnv * _closure_env = _V60_V0vanity_V0hash__table;
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      _V40_V10vcore_Dcons;
    VWORD _arg2 = 
      _var1;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0hash__table_V0hash__table__map___Glist, _V60_V0vanity_V0hash__table)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0hash__table_V0hash__table__map___Glist(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
static void _V50_V0vanity_V0hash__table_V0hash__table__fold_V0k4(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.%k.340 2 0) (bruijn ##.acc.125 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      self->vars[0]);
}
void _V50_V0vanity_V0hash__table_V0hash__table__fold_V0k5(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0hash__table_V0hash__table__fold_V0k5, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (bruijn ##.%k.342 1 0) (bruijn ##.acc.125 2 0) (bruijn ##.%x.343 0 0))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      statics->vars[0],
      VEncodeInt(2l), VEncodeInt(0l),
      _var0
    );
}
void _V50_V0vanity_V0hash__table_V0hash__table__fold_V0lambda4(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0hash__table_V0hash__table__fold_V0lambda4, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((bruijn ##.f.122 3 1) (close _V50_V0vanity_V0hash__table_V0hash__table__fold_V0k5) (bruijn ##.key.126 0 1) (bruijn ##.datum.127 0 2) (bruijn ##.acc.125 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[1]), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hash__table_V0hash__table__fold_V0k5, self)))),
      _var1,
      _var2,
      statics->vars[0]);
}
void _V50_V0vanity_V0hash__table_V0hash__table__fold_V0lambda3(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity hash-table hash-table-for-each) #t (bruijn ##.hash-table-for-each.93 3 4) (close _V50_V0vanity_V0hash__table_V0hash__table__fold_V0k4) (close _V50_V0vanity_V0hash__table_V0hash__table__fold_V0lambda4) (bruijn ##.ht.124 2 3))
  {
   VEnv * _closure_env = _V60_V0vanity_V0hash__table;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hash__table_V0hash__table__fold_V0k4, self))));
    VWORD _arg1 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hash__table_V0hash__table__fold_V0lambda4, self))));
    VWORD _arg2 = 
      statics->up->vars[3];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0hash__table_V0hash__table__for__each, _V60_V0vanity_V0hash__table)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0hash__table_V0hash__table__for__each(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0hash__table_V0hash__table__fold(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0hash__table_V0hash__table__fold, got ~D~N"
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
  // (basic-block 1 1 (##.%p.574) ((##vcore.procedure? (bruijn ##.f.122 1 1))) (if (bruijn ##.%p.574 0 0) ((close _V50_V0vanity_V0hash__table_V0hash__table__fold_V0lambda3) (bruijn ##.seed.123 1 2)) (##qualified-call (vanity hash-table hash-table-fold) #t (bruijn ##.hash-table-fold.90 2 1) (bruijn ##.%k.340 1 0) (bruijn ##.seed.123 1 2) (bruijn ##.ht.124 1 3) (bruijn ##.f.122 1 1))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VProcedureP2(runtime, NULL,
      statics->vars[1]);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hash__table_V0hash__table__fold_V0lambda3, self)), 1,
      statics->vars[2]);
} else {
  {
   VEnv * _closure_env = _V60_V0vanity_V0hash__table;
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      statics->vars[2];
    VWORD _arg2 = 
      statics->vars[3];
    VWORD _arg3 = 
      statics->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0hash__table_V0hash__table__fold, _V60_V0vanity_V0hash__table)}, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0hash__table_V0hash__table__fold(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
    }
}
static void _V50_V0vanity_V0hash__table_V0hash__table__map___Glist_V0k6(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.%k.344 1 0) (bruijn ##.acc.130 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      self->vars[0]);
}
void _V50_V0vanity_V0hash__table_V0hash__table__map___Glist_V0k7(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0hash__table_V0hash__table__map___Glist_V0k7, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%x.575) ((##vcore.cons (bruijn ##.%x.347 1 0) (bruijn ##.acc.130 3 0))) (set! (bruijn ##.%k.345 2 0) (bruijn ##.acc.130 3 0) (bruijn ##.%x.575 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      statics->up->up->vars[0]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      statics->up->vars[0],
      VEncodeInt(3l), VEncodeInt(0l),
      self->vars[0]
    );
    }
}
void _V50_V0vanity_V0hash__table_V0hash__table__map___Glist_V0lambda5(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0hash__table_V0hash__table__map___Glist_V0lambda5, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((bruijn ##.f.128 2 1) (close _V50_V0vanity_V0hash__table_V0hash__table__map___Glist_V0k7) (bruijn ##.key.131 0 1) (bruijn ##.datum.132 0 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[1]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hash__table_V0hash__table__map___Glist_V0k7, self)))),
      _var1,
      _var2);
}
void _V50_V0vanity_V0hash__table_V0hash__table__map___Glist(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0hash__table_V0hash__table__map___Glist, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (letrec 1 ('()) (##qualified-call (vanity hash-table hash-table-for-each) #t (bruijn ##.hash-table-for-each.93 2 4) (close _V50_V0vanity_V0hash__table_V0hash__table__map___Glist_V0k6) (close _V50_V0vanity_V0hash__table_V0hash__table__map___Glist_V0lambda5) (bruijn ##.ht.129 1 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = VNULL;
  {
   VEnv * _closure_env = _V60_V0vanity_V0hash__table;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hash__table_V0hash__table__map___Glist_V0k6, self))));
    VWORD _arg1 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hash__table_V0hash__table__map___Glist_V0lambda5, self))));
    VWORD _arg2 = 
      statics->vars[2];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0hash__table_V0hash__table__for__each, _V60_V0vanity_V0hash__table)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0hash__table_V0hash__table__for__each(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
void _V50_V0vanity_V0hash__table_V0hash__table__walk(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0hash__table_V0hash__table__walk, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  // (##qualified-call (vanity hash-table hash-table-for-each) #t (bruijn ##.hash-table-for-each.93 1 4) (bruijn ##.%k.348 0 0) (bruijn ##.f.134 0 2) (bruijn ##.ht.133 0 1))
  {
   VEnv * _closure_env = _V60_V0vanity_V0hash__table;
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      _var2;
    VWORD _arg2 = 
      _var1;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0hash__table_V0hash__table__for__each, _V60_V0vanity_V0hash__table)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0hash__table_V0hash__table__for__each(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0hash__table_V0hash__table__for__each_V10_Dloop_D38_D140_V0lambda7(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0hash__table_V0hash__table__for__each_V10_Dloop_D38_D140_V0lambda7, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 1 1 (##.%p.581) ((##vcore.not (bruijn ##.broke?.144 1 0))) (if (bruijn ##.%p.581 0 0) ((bruijn ##.f.135 9 1) (bruijn ##.%k.354 2 0) (bruijn ##.key.145 1 1) (bruijn ##.datum.146 1 2)) ((bruijn ##.%k.354 2 0) #f)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VNot2(runtime, NULL,
      statics->vars[0]);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 1)), 3,
      statics->up->vars[0],
      statics->vars[1],
      statics->vars[2]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
}
void _V50_V0vanity_V0hash__table_V0hash__table__for__each_V10_Dloop_D38_D140_V0k8(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0hash__table_V0hash__table__for__each_V10_Dloop_D38_D140_V0k8, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.waybill.579 1 0) ((##intrinsic "VWaybillUnpack") (close _V50_V0vanity_V0hash__table_V0hash__table__for__each_V10_Dloop_D38_D140_V0lambda7) (bruijn ##.waybill.579 1 0)) ((bruijn ##.%k.354 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallFuncWithGC(runtime, (VFunc)VWaybillUnpack, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hash__table_V0hash__table__for__each_V10_Dloop_D38_D140_V0lambda7, self)))),
      statics->vars[0]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V50_V0vanity_V0hash__table_V0hash__table__for__each_V10_Dloop_D38_D140_V0k9(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%x.580) ((##vcore.+ (bruijn ##.i.48.141 3 1) 1)) (##qualified-call (vanity hash-table hash-table-for-each ##.loop.38.140) #f (bruijn ##.loop.38.140 4 0) (bruijn ##.%k.351 3 0) (bruijn ##.%x.580 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      statics->up->up->vars[1],
      VEncodeInt(1l));
  {
    VClosure * _closure = VDecodeClosure(statics->up->up->up->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->up->up->vars[0];
    VWORD _arg1 = 
      self->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0hash__table_V0hash__table__for__each_V10_Dloop_D38_D140(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
}
void _V50_V0vanity_V0hash__table_V0hash__table__for__each_V10_Dloop_D38_D140(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0hash__table_V0hash__table__for__each_V10_Dloop_D38_D140, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 2 2 (##.%x.577 ##.%p.578) ((##vcore.vector-length (bruijn ##.vec.576 4 0)) (##vcore.< (bruijn ##.i.48.141 1 1) (bruijn ##.%x.577 0 0))) (if (bruijn ##.%p.578 0 1) (basic-block 1 1 (##.waybill.579) ((##vcore.vector-ref (bruijn ##.vec.576 5 0) (bruijn ##.i.48.141 2 1))) ((close _V50_V0vanity_V0hash__table_V0hash__table__for__each_V10_Dloop_D38_D140_V0k8) (close _V50_V0vanity_V0hash__table_V0hash__table__for__each_V10_Dloop_D38_D140_V0k9))) (##qualified-call (vanity hash-table hash-table-for-each ##.finalize.39.139) #f (bruijn ##.finalize.39.139 3 0) (bruijn ##.%k.351 1 0))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VVectorLength2(runtime, NULL,
      statics->up->up->up->vars[0]);
    self->vars[1] = _VBasic_VCmpLt(runtime, NULL,
      statics->vars[1],
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VVectorRef2(runtime, NULL,
      VGetArg(statics, 5-1, 0),
      statics->up->vars[1]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hash__table_V0hash__table__for__each_V10_Dloop_D38_D140_V0k8, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hash__table_V0hash__table__for__each_V10_Dloop_D38_D140_V0k9, self)))));
    }
} else {
  {
    VClosure * _closure = VDecodeClosure(statics->up->up->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 1, _arg0);
    } else {
       _V50_V0vanity_V0hash__table_V0hash__table__for__each_V10_Dfinalize_D39_D139(runtime, _closure_env, 1, _arg0);
    }
  }
}
    }
}
void _V50_V0vanity_V0hash__table_V0hash__table__for__each_V0lambda6(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (letrec 1 ((close "_V50_V0vanity_V0hash__table_V0hash__table__for__each_V10_Dloop_D38_D140")) (##qualified-call (vanity hash-table hash-table-for-each ##.loop.38.140) #f (bruijn ##.loop.38.140 0 0) (bruijn ##.%k.349 3 0) 0))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hash__table_V0hash__table__for__each_V10_Dloop_D38_D140, self))));
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->up->up->vars[0];
    VWORD _arg1 = 
      VEncodeInt(0l);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0hash__table_V0hash__table__for__each_V10_Dloop_D38_D140(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
}
void _V50_V0vanity_V0hash__table_V0hash__table__for__each_V10_Dfinalize_D39_D139(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0hash__table_V0hash__table__for__each_V10_Dfinalize_D39_D139, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%k.350 0 0) #void)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VVOID);
}
void _V50_V0vanity_V0hash__table_V0hash__table__for__each(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0hash__table_V0hash__table__for__each, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 1 1 (##.vec.576) (((##basic-intrinsic "VHashTableSlot") (bruijn ##.ht.136 1 2) 3)) ((close _V50_V0vanity_V0hash__table_V0hash__table__for__each_V0lambda6) (close "_V50_V0vanity_V0hash__table_V0hash__table__for__each_V10_Dfinalize_D39_D139")))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VHashTableSlot(runtime, NULL,
      statics->vars[2],
      VEncodeInt(3l));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hash__table_V0hash__table__for__each_V0lambda6, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hash__table_V0hash__table__for__each_V10_Dfinalize_D39_D139, self)))));
    }
}
static void _V50_V0vanity_V0hash__table_V0hash__table__size_V0k10(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%r.583) (((##basic-intrinsic "VHashTableSlot") (bruijn ##.ht.147 2 1) 1)) ((bruijn ##.%k.357 2 0) (bruijn ##.%r.583 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VHashTableSlot(runtime, NULL,
      statics->up->vars[1],
      VEncodeInt(1l));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      self->vars[0]);
    }
}
void _V50_V0vanity_V0hash__table_V0hash__table__size(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0hash__table_V0hash__table__size, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.%x.582) ((##vcore.cons '0 '0)) (##qualified-call (vanity hash-table hash-table-rummage) #t (bruijn ##.hash-table-rummage.101 2 12) (close _V50_V0vanity_V0hash__table_V0hash__table__size_V0k10) (bruijn ##.ht.147 1 1) (bruijn ##.%x.582 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      VEncodeInt(0l),
      VEncodeInt(0l));
  {
   VEnv * _closure_env = _V60_V0vanity_V0hash__table;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hash__table_V0hash__table__size_V0k10, self))));
    VWORD _arg1 = 
      statics->vars[1];
    VWORD _arg2 = 
      self->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0hash__table_V0hash__table__rummage, _V60_V0vanity_V0hash__table)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0hash__table_V0hash__table__rummage(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
void _V50_V0vanity_V0hash__table_V0hash__table__delete_B_V0k13(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0hash__table_V0hash__table__delete_B_V0k13, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.idx.152 1 0) (basic-block 1 1 (##.%r.588) ((##vcore.vector-ref (bruijn ##.vec.584 3 0) (bruijn ##.idx.152 2 0))) ((bruijn ##.%k.363 1 0) (bruijn ##.%r.588 0 0))) ((bruijn ##.%k.363 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VVectorRef2(runtime, NULL,
      statics->up->up->vars[0],
      statics->up->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V50_V0vanity_V0hash__table_V0hash__table__delete_B_V0k16(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##qualified-call (vanity hash-table validate-robinhood) #t (bruijn ##.validate-robinhood.106 6 17) (bruijn ##.%k.359 5 0) (##string ##.string.762) (bruijn ##.ht.148 5 1))
  {
   VEnv * _closure_env = _V60_V0vanity_V0hash__table;
    VWORD _arg0 = 
      VGetArg(statics, 5-1, 0);
    VWORD _arg1 = 
      VEncodePointer(&_V10_Dstring_D762.sym, VPOINTER_OTHER);
    VWORD _arg2 = 
      VGetArg(statics, 5-1, 1);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0hash__table_V0validate__robinhood, _V60_V0vanity_V0hash__table)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0hash__table_V0validate__robinhood(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
static void _V50_V0vanity_V0hash__table_V0hash__table__delete_B_V0k15(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 3 3 (##.%x.585 ##.%x.586 ##.%r.587) (((##basic-intrinsic "VHashTableSlot") (bruijn ##.ht.148 5 1) 1) (##vcore.- (bruijn ##.%x.585 0 0) 1) ((##basic-intrinsic "VHashTableSlotSet") (bruijn ##.ht.148 5 1) 1 (bruijn ##.%x.586 0 1))) (##qualified-call (vanity hash-table robinhood-shuffle) #t (bruijn ##.robinhood-shuffle.103 6 14) (close _V50_V0vanity_V0hash__table_V0hash__table__delete_B_V0k16) (bruijn ##.ht.148 5 1) (bruijn ##.idx.152 2 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VHashTableSlot(runtime, NULL,
      VGetArg(statics, 5-1, 1),
      VEncodeInt(1l));
    self->vars[1] = _VBasic_VSub2(runtime, NULL,
      self->vars[0],
      VEncodeInt(1l));
    self->vars[2] = _VBasic_VHashTableSlotSet(runtime, NULL,
      VGetArg(statics, 5-1, 1),
      VEncodeInt(1l),
      self->vars[1]);
  {
   VEnv * _closure_env = _V60_V0vanity_V0hash__table;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hash__table_V0hash__table__delete_B_V0k16, self))));
    VWORD _arg1 = 
      VGetArg(statics, 5-1, 1);
    VWORD _arg2 = 
      statics->up->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0hash__table_V0robinhood__shuffle, _V60_V0vanity_V0hash__table)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0hash__table_V0robinhood__shuffle(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
static void _V50_V0vanity_V0hash__table_V0hash__table__delete_B_V0k18(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##qualified-call (vanity hash-table validate-robinhood) #t (bruijn ##.validate-robinhood.106 6 17) (bruijn ##.%k.359 5 0) (##string ##.string.763) (bruijn ##.ht.148 5 1))
  {
   VEnv * _closure_env = _V60_V0vanity_V0hash__table;
    VWORD _arg0 = 
      VGetArg(statics, 5-1, 0);
    VWORD _arg1 = 
      VEncodePointer(&_V10_Dstring_D763.sym, VPOINTER_OTHER);
    VWORD _arg2 = 
      VGetArg(statics, 5-1, 1);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0hash__table_V0validate__robinhood, _V60_V0vanity_V0hash__table)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0hash__table_V0validate__robinhood(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0hash__table_V0hash__table__delete_B_V0k17(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0hash__table_V0hash__table__delete_B_V0k17, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.rummaged-waybill.153 0 0) (##qualified-call (vanity hash-table hash-table-sweep) #t (bruijn ##.hash-table-sweep.102 6 13) (close _V50_V0vanity_V0hash__table_V0hash__table__delete_B_V0k18) (bruijn ##.ht.148 5 1) (bruijn ##.rummaged-waybill.153 0 0)) ((bruijn ##.%k.359 5 0) #void))
if(VDecodeBool(
_var0)) {
  {
   VEnv * _closure_env = _V60_V0vanity_V0hash__table;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hash__table_V0hash__table__delete_B_V0k18, self))));
    VWORD _arg1 = 
      VGetArg(statics, 5-1, 1);
    VWORD _arg2 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0hash__table_V0hash__table__sweep, _V60_V0vanity_V0hash__table)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0hash__table_V0hash__table__sweep(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VVOID);
}
}
void _V50_V0vanity_V0hash__table_V0hash__table__delete_B_V0k14(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0hash__table_V0hash__table__delete_B_V0k14, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.360 0 0) (##vcore.vector-set! (close _V50_V0vanity_V0hash__table_V0hash__table__delete_B_V0k15) (bruijn ##.vec.584 2 0) (bruijn ##.idx.152 1 0) #f) (##qualified-call (vanity hash-table hash-table-rummage) #t (bruijn ##.hash-table-rummage.101 5 12) (close _V50_V0vanity_V0hash__table_V0hash__table__delete_B_V0k17) (bruijn ##.ht.148 4 1) (bruijn ##.key.149 4 2)))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VVectorSet2, 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hash__table_V0hash__table__delete_B_V0k15, self)))),
      statics->up->vars[0],
      statics->vars[0],
      VEncodeBool(false));
} else {
  {
   VEnv * _closure_env = _V60_V0vanity_V0hash__table;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hash__table_V0hash__table__delete_B_V0k17, self))));
    VWORD _arg1 = 
      statics->up->up->up->vars[1];
    VWORD _arg2 = 
      statics->up->up->up->vars[2];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0hash__table_V0hash__table__rummage, _V60_V0vanity_V0hash__table)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0hash__table_V0hash__table__rummage(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
}
void _V50_V0vanity_V0hash__table_V0hash__table__delete_B_V0k12(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0hash__table_V0hash__table__delete_B_V0k12, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0hash__table_V0hash__table__delete_B_V0k13) (close _V50_V0vanity_V0hash__table_V0hash__table__delete_B_V0k14))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hash__table_V0hash__table__delete_B_V0k13, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hash__table_V0hash__table__delete_B_V0k14, self)))));
}
void _V50_V0vanity_V0hash__table_V0hash__table__delete_B_V0k11(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0hash__table_V0hash__table__delete_B_V0k11, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.vec.584) (((##basic-intrinsic "VHashTableSlot") (bruijn ##.ht.148 2 1) 3)) (##qualified-call (vanity hash-table hash-table-find-impl) #t (bruijn ##.hash-table-find-impl.105 3 16) (close _V50_V0vanity_V0hash__table_V0hash__table__delete_B_V0k12) (bruijn ##.ht.148 2 1) (bruijn ##.key.149 2 2) (bruijn ##.hash.150 1 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VHashTableSlot(runtime, NULL,
      statics->up->vars[1],
      VEncodeInt(3l));
  {
   VEnv * _closure_env = _V60_V0vanity_V0hash__table;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hash__table_V0hash__table__delete_B_V0k12, self))));
    VWORD _arg1 = 
      statics->up->vars[1];
    VWORD _arg2 = 
      statics->up->vars[2];
    VWORD _arg3 = 
      statics->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0hash__table_V0hash__table__find__impl, _V60_V0vanity_V0hash__table)}, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0hash__table_V0hash__table__find__impl(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
    }
}
void _V50_V0vanity_V0hash__table_V0hash__table__delete_B(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0hash__table_V0hash__table__delete_B, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((bruijn ##.current-hash.120 1 31) (close _V50_V0vanity_V0hash__table_V0hash__table__delete_B_V0k11) (bruijn ##.key.149 0 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[31]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hash__table_V0hash__table__delete_B_V0k11, self)))),
      _var2);
}
void _V50_V0vanity_V0hash__table_V0hash__table__set_B_V0k21(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0hash__table_V0hash__table__set_B_V0k21, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.rummaged-waybill.163 1 0) (##qualified-call (vanity hash-table hash-table-sweep) #t (bruijn ##.hash-table-sweep.102 6 13) (bruijn ##.%k.365 0 0) (bruijn ##.ht.154 5 1) (bruijn ##.rummaged-waybill.163 1 0)) ((bruijn ##.%k.365 0 0) #void))
if(VDecodeBool(
statics->vars[0])) {
  {
   VEnv * _closure_env = _V60_V0vanity_V0hash__table;
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      VGetArg(statics, 5-1, 1);
    VWORD _arg2 = 
      statics->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0hash__table_V0hash__table__sweep, _V60_V0vanity_V0hash__table)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0hash__table_V0hash__table__sweep(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VVOID);
}
}
static void _V50_V0vanity_V0hash__table_V0hash__table__set_B_V0k24(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##qualified-call (vanity hash-table validate-robinhood) #t (bruijn ##.validate-robinhood.106 5 17) (bruijn ##.%k.364 4 0) (##string ##.string.764) (bruijn ##.ht.154 4 1))
  {
   VEnv * _closure_env = _V60_V0vanity_V0hash__table;
    VWORD _arg0 = 
      statics->up->up->up->vars[0];
    VWORD _arg1 = 
      VEncodePointer(&_V10_Dstring_D764.sym, VPOINTER_OTHER);
    VWORD _arg2 = 
      statics->up->up->up->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0hash__table_V0validate__robinhood, _V60_V0vanity_V0hash__table)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0hash__table_V0validate__robinhood(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
static void _V50_V0vanity_V0hash__table_V0hash__table__set_B_V0k23(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##qualified-call (vanity hash-table hash-table-set-impl!) #t (bruijn ##.hash-table-set-impl!.97 5 8) (close _V50_V0vanity_V0hash__table_V0hash__table__set_B_V0k24) (bruijn ##.ht.154 4 1) (bruijn ##.key.155 4 2) (bruijn ##.entry.161 2 0))
  {
   VEnv * _closure_env = _V60_V0vanity_V0hash__table;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hash__table_V0hash__table__set_B_V0k24, self))));
    VWORD _arg1 = 
      statics->up->up->up->vars[1];
    VWORD _arg2 = 
      statics->up->up->up->vars[2];
    VWORD _arg3 = 
      statics->up->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0hash__table_V0hash__table__set__impl_B, _V60_V0vanity_V0hash__table)}, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0hash__table_V0hash__table__set__impl_B(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
static void _V50_V0vanity_V0hash__table_V0hash__table__set_B_V0k22(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##qualified-call (vanity hash-table hash-table-grow) #t (bruijn ##.hash-table-grow.98 5 9) (close _V50_V0vanity_V0hash__table_V0hash__table__set_B_V0k23) (bruijn ##.ht.154 4 1))
  {
   VEnv * _closure_env = _V60_V0vanity_V0hash__table;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hash__table_V0hash__table__set_B_V0k23, self))));
    VWORD _arg1 = 
      statics->up->up->up->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0hash__table_V0hash__table__grow, _V60_V0vanity_V0hash__table)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0hash__table_V0hash__table__grow(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0hash__table_V0hash__table__set_B_V0k20(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0hash__table_V0hash__table__set_B_V0k20, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0hash__table_V0hash__table__set_B_V0k21) (close _V50_V0vanity_V0hash__table_V0hash__table__set_B_V0k22))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hash__table_V0hash__table__set_B_V0k21, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hash__table_V0hash__table__set_B_V0k22, self)))));
}
void _V50_V0vanity_V0hash__table_V0hash__table__set_B_V0k19(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0hash__table_V0hash__table__set_B_V0k19, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.vec.593) (((##basic-intrinsic "VHashTableSlot") (bruijn ##.ht.154 3 1) 3)) (##qualified-call (vanity hash-table hash-table-rummage) #t (bruijn ##.hash-table-rummage.101 4 12) (close _V50_V0vanity_V0hash__table_V0hash__table__set_B_V0k20) (bruijn ##.ht.154 3 1) (bruijn ##.key.155 3 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VHashTableSlot(runtime, NULL,
      statics->up->up->vars[1],
      VEncodeInt(3l));
  {
   VEnv * _closure_env = _V60_V0vanity_V0hash__table;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hash__table_V0hash__table__set_B_V0k20, self))));
    VWORD _arg1 = 
      statics->up->up->vars[1];
    VWORD _arg2 = 
      statics->up->up->vars[2];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0hash__table_V0hash__table__rummage, _V60_V0vanity_V0hash__table)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0hash__table_V0hash__table__rummage(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
void _V50_V0vanity_V0hash__table_V0hash__table__set_B(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0hash__table_V0hash__table__set_B, got ~D~N"
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
  // (basic-block 4 4 (##.weakness-stability.589 ##.weakness.590 ##.stability.591 ##.clearinghouse.592) (((##basic-intrinsic "VHashTableSlot") (bruijn ##.ht.154 1 1) 0) (##vcore.car (bruijn ##.weakness-stability.589 0 0)) (##vcore.cdr (bruijn ##.weakness-stability.589 0 0)) ((##basic-intrinsic "VHashTableSlot") (bruijn ##.ht.154 1 1) 6)) (##qualified-call (vanity hash-table make-entry) #t (bruijn ##.make-entry.114 2 25) (close _V50_V0vanity_V0hash__table_V0hash__table__set_B_V0k19) (bruijn ##.weakness.590 0 1) (bruijn ##.stability.591 0 2) (bruijn ##.clearinghouse.592 0 3) (bruijn ##.key.155 1 2) (bruijn ##.datum.156 1 3)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[4]; } container;
    self = &container.self;
    VInitEnv(self, 4, 4, statics);
    self->vars[0] = _VBasic_VHashTableSlot(runtime, NULL,
      statics->vars[1],
      VEncodeInt(0l));
    self->vars[1] = _VBasic_VCar2(runtime, NULL,
      self->vars[0]);
    self->vars[2] = _VBasic_VCdr2(runtime, NULL,
      self->vars[0]);
    self->vars[3] = _VBasic_VHashTableSlot(runtime, NULL,
      statics->vars[1],
      VEncodeInt(6l));
  {
   VEnv * _closure_env = _V60_V0vanity_V0hash__table;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hash__table_V0hash__table__set_B_V0k19, self))));
    VWORD _arg1 = 
      self->vars[1];
    VWORD _arg2 = 
      self->vars[2];
    VWORD _arg3 = 
      self->vars[3];
    VWORD _arg4 = 
      statics->vars[2];
    VWORD _arg5 = 
      statics->vars[3];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0hash__table_V0make__entry, _V60_V0vanity_V0hash__table)}, 6, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5);
    } else {
       _V50_V0vanity_V0hash__table_V0make__entry(runtime, _closure_env, 6, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5);
    }
  }
    }
}
void _V50_V0vanity_V0hash__table_V0hash__table__set__impl_B_V10_Dloop_D172_V0k26(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0hash__table_V0hash__table__set__impl_B_V10_Dloop_D172_V0k26, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.vec-entry.599 1 0) (basic-block 1 1 (##.%x.612) (((##basic-intrinsic "VWaybillAddress") (bruijn ##.vec-entry.599 2 0))) (##qualified-call (vanity hash-table hash-poverty) #t (bruijn ##.hash-poverty.112 8 23) (bruijn ##.%k.383 1 0) (bruijn ##.%x.612 0 0) (bruijn ##.idx.174 3 2) (bruijn ##.capacity.597 6 3))) ((bruijn ##.%k.383 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VWaybillAddress(runtime, NULL,
      statics->up->vars[0]);
  {
   VEnv * _closure_env = _V60_V0vanity_V0hash__table;
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      self->vars[0];
    VWORD _arg2 = 
      statics->up->up->vars[2];
    VWORD _arg3 = 
      VGetArg(statics, 6-1, 3);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0hash__table_V0hash__poverty, _V60_V0vanity_V0hash__table)}, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0hash__table_V0hash__poverty(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V50_V0vanity_V0hash__table_V0hash__table__set__impl_B_V10_Dloop_D172_V0k28(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 2 2 (##.%x.601 ##.%r.602) ((##vcore.+ (bruijn ##.occupancy.596 7 2) 1) ((##basic-intrinsic "VHashTableSlotSet") (bruijn ##.ht.164 8 1) 1 (bruijn ##.%x.601 0 0))) ((bruijn ##.%k.367 4 0) (bruijn ##.%r.602 0 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      VGetArg(statics, 7-1, 2),
      VEncodeInt(1l));
    self->vars[1] = _VBasic_VHashTableSlotSet(runtime, NULL,
      VGetArg(statics, 8-1, 1),
      VEncodeInt(1l),
      self->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      self->vars[1]);
    }
}
void _V50_V0vanity_V0hash__table_V0hash__table__set__impl_B_V10_Dloop_D172_V0k29(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0hash__table_V0hash__table__set__impl_B_V10_Dloop_D172_V0k29, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.604 1 1) (##qualified-call (vanity hash-table waybill-key-matches?) #t (bruijn ##.waybill-key-matches?.111 10 22) (bruijn ##.%k.381 0 0) (bruijn ##.vec-entry.599 4 0) (bruijn ##.key.165 9 2)) ((bruijn ##.%k.381 0 0) #f))
if(VDecodeBool(
statics->vars[1])) {
  {
   VEnv * _closure_env = _V60_V0vanity_V0hash__table;
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      statics->up->up->up->vars[0];
    VWORD _arg2 = 
      VGetArg(statics, 9-1, 2);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0hash__table_V0waybill__key__matches_Q, _V60_V0vanity_V0hash__table)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0hash__table_V0waybill__key__matches_Q(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0hash__table_V0hash__table__set__impl_B_V10_Dloop_D172_V0k32(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0hash__table_V0hash__table__set__impl_B_V10_Dloop_D172_V0k32, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%x.608) ((##vcore.+ (bruijn ##.vec-entry-poverty.177 7 0) 1)) (##qualified-call (vanity hash-table hash-table-set-impl! ##.loop.172) #f (bruijn ##.loop.172 10 0) (bruijn ##.%k.367 9 0) (bruijn ##.vec-entry.599 8 0) (bruijn ##.%x.372 1 0) (bruijn ##.%x.608 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      VGetArg(statics, 7-1, 0),
      VEncodeInt(1l));
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 10-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      VGetArg(statics, 9-1, 0);
    VWORD _arg1 = 
      VGetArg(statics, 8-1, 0);
    VWORD _arg2 = 
      statics->vars[0];
    VWORD _arg3 = 
      self->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0hash__table_V0hash__table__set__impl_B_V10_Dloop_D172(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
    }
}
static void _V50_V0vanity_V0hash__table_V0hash__table__set__impl_B_V10_Dloop_D172_V0k31(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 2 2 (##.%x.606 ##.%x.607) ((##vcore.+ (bruijn ##.idx.174 7 2) 1) (##vcore.- (bruijn ##.capacity.597 10 3) 1)) ((bruijn ##.bitwise-and.50 13 0) (close _V50_V0vanity_V0hash__table_V0hash__table__set__impl_B_V10_Dloop_D172_V0k32) (bruijn ##.%x.606 0 0) (bruijn ##.%x.607 0 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      VGetArg(statics, 7-1, 2),
      VEncodeInt(1l));
    self->vars[1] = _VBasic_VSub2(runtime, NULL,
      VGetArg(statics, 10-1, 3),
      VEncodeInt(1l));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hash__table_V0hash__table__set__impl_B_V10_Dloop_D172_V0k32, self)))),
      self->vars[0],
      self->vars[1]);
    }
}
void _V50_V0vanity_V0hash__table_V0hash__table__set__impl_B_V10_Dloop_D172_V0k33(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0hash__table_V0hash__table__set__impl_B_V10_Dloop_D172_V0k33, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%x.611) ((##vcore.+ (bruijn ##.poverty.175 9 3) 1)) (##qualified-call (vanity hash-table hash-table-set-impl! ##.loop.172) #f (bruijn ##.loop.172 10 0) (bruijn ##.%k.367 9 0) (bruijn ##.entry.173 9 1) (bruijn ##.%x.376 1 0) (bruijn ##.%x.611 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      VGetArg(statics, 9-1, 3),
      VEncodeInt(1l));
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 10-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      VGetArg(statics, 9-1, 0);
    VWORD _arg1 = 
      VGetArg(statics, 9-1, 1);
    VWORD _arg2 = 
      statics->vars[0];
    VWORD _arg3 = 
      self->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0hash__table_V0hash__table__set__impl_B_V10_Dloop_D172(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
    }
}
void _V50_V0vanity_V0hash__table_V0hash__table__set__impl_B_V10_Dloop_D172_V0k30(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0hash__table_V0hash__table__set__impl_B_V10_Dloop_D172_V0k30, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.370 0 0) (##vcore.vector-set! (bruijn ##.%k.367 5 0) (bruijn ##.vec.595 8 1) (bruijn ##.idx.174 5 2) (bruijn ##.entry.173 5 1)) (basic-block 1 1 (##.%p.605) ((##vcore.> (bruijn ##.poverty.175 6 3) (bruijn ##.vec-entry-poverty.177 4 0))) (if (bruijn ##.%p.605 0 0) (##vcore.vector-set! (close _V50_V0vanity_V0hash__table_V0hash__table__set__impl_B_V10_Dloop_D172_V0k31) (bruijn ##.vec.595 9 1) (bruijn ##.idx.174 6 2) (bruijn ##.entry.173 6 1)) (basic-block 2 2 (##.%x.609 ##.%x.610) ((##vcore.+ (bruijn ##.idx.174 7 2) 1) (##vcore.- (bruijn ##.capacity.597 10 3) 1)) ((bruijn ##.bitwise-and.50 13 0) (close _V50_V0vanity_V0hash__table_V0hash__table__set__impl_B_V10_Dloop_D172_V0k33) (bruijn ##.%x.609 0 0) (bruijn ##.%x.610 0 1))))))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VVectorSet2, 4,
      VGetArg(statics, 5-1, 0),
      VGetArg(statics, 8-1, 1),
      VGetArg(statics, 5-1, 2),
      VGetArg(statics, 5-1, 1));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCmpGt(runtime, NULL,
      VGetArg(statics, 6-1, 3),
      statics->up->up->up->vars[0]);
if(VDecodeBool(
self->vars[0])) {
    VCallFuncWithGC(runtime, (VFunc)VVectorSet2, 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hash__table_V0hash__table__set__impl_B_V10_Dloop_D172_V0k31, self)))),
      VGetArg(statics, 9-1, 1),
      VGetArg(statics, 6-1, 2),
      VGetArg(statics, 6-1, 1));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      VGetArg(statics, 7-1, 2),
      VEncodeInt(1l));
    self->vars[1] = _VBasic_VSub2(runtime, NULL,
      VGetArg(statics, 10-1, 3),
      VEncodeInt(1l));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hash__table_V0hash__table__set__impl_B_V10_Dloop_D172_V0k33, self)))),
      self->vars[0],
      self->vars[1]);
    }
}
    }
}
}
void _V50_V0vanity_V0hash__table_V0hash__table__set__impl_B_V10_Dloop_D172_V0k27(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0hash__table_V0hash__table__set__impl_B_V10_Dloop_D172_V0k27, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%p.600) ((##vcore.not (bruijn ##.vec-entry.599 2 0))) (if (bruijn ##.%p.600 0 0) (##vcore.vector-set! (close _V50_V0vanity_V0hash__table_V0hash__table__set__impl_B_V10_Dloop_D172_V0k28) (bruijn ##.vec.595 6 1) (bruijn ##.idx.174 3 2) (bruijn ##.entry.173 3 1)) (basic-block 2 2 (##.%x.603 ##.%p.604) (((##basic-intrinsic "VWaybillAddress") (bruijn ##.vec-entry.599 3 0)) (##vcore.= (bruijn ##.%x.603 0 0) (bruijn ##.hash.594 7 0))) ((close _V50_V0vanity_V0hash__table_V0hash__table__set__impl_B_V10_Dloop_D172_V0k29) (close _V50_V0vanity_V0hash__table_V0hash__table__set__impl_B_V10_Dloop_D172_V0k30)))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VNot2(runtime, NULL,
      statics->up->vars[0]);
if(VDecodeBool(
self->vars[0])) {
    VCallFuncWithGC(runtime, (VFunc)VVectorSet2, 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hash__table_V0hash__table__set__impl_B_V10_Dloop_D172_V0k28, self)))),
      VGetArg(statics, 6-1, 1),
      statics->up->up->vars[2],
      statics->up->up->vars[1]);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VWaybillAddress(runtime, NULL,
      statics->up->up->vars[0]);
    self->vars[1] = _VBasic_VCmpEq(runtime, NULL,
      self->vars[0],
      VGetArg(statics, 7-1, 0));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hash__table_V0hash__table__set__impl_B_V10_Dloop_D172_V0k29, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hash__table_V0hash__table__set__impl_B_V10_Dloop_D172_V0k30, self)))));
    }
}
    }
}
void _V50_V0vanity_V0hash__table_V0hash__table__set__impl_B_V10_Dloop_D172(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0hash__table_V0hash__table__set__impl_B_V10_Dloop_D172, got ~D~N"
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
  // (basic-block 1 1 (##.vec-entry.599) ((##vcore.vector-ref (bruijn ##.vec.595 4 1) (bruijn ##.idx.174 1 2))) ((close _V50_V0vanity_V0hash__table_V0hash__table__set__impl_B_V10_Dloop_D172_V0k26) (close _V50_V0vanity_V0hash__table_V0hash__table__set__impl_B_V10_Dloop_D172_V0k27)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VVectorRef2(runtime, NULL,
      statics->up->up->up->vars[1],
      statics->vars[2]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hash__table_V0hash__table__set__impl_B_V10_Dloop_D172_V0k26, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hash__table_V0hash__table__set__impl_B_V10_Dloop_D172_V0k27, self)))));
    }
}
void _V50_V0vanity_V0hash__table_V0hash__table__set__impl_B_V0k25(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0hash__table_V0hash__table__set__impl_B_V0k25, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (letrec 1 ((close "_V50_V0vanity_V0hash__table_V0hash__table__set__impl_B_V10_Dloop_D172")) (##qualified-call (vanity hash-table hash-table-set-impl! ##.loop.172) #f (bruijn ##.loop.172 0 0) (bruijn ##.%k.366 3 0) (bruijn ##.entry.166 3 3) (bruijn ##.idx.171 1 0) 0))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hash__table_V0hash__table__set__impl_B_V10_Dloop_D172, self))));
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->up->up->vars[0];
    VWORD _arg1 = 
      statics->up->up->vars[3];
    VWORD _arg2 = 
      statics->vars[0];
    VWORD _arg3 = 
      VEncodeInt(0l);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0hash__table_V0hash__table__set__impl_B_V10_Dloop_D172(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
    }
}
void _V50_V0vanity_V0hash__table_V0hash__table__set__impl_B(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0hash__table_V0hash__table__set__impl_B, got ~D~N"
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
  // (basic-block 5 5 (##.hash.594 ##.vec.595 ##.occupancy.596 ##.capacity.597 ##.%x.598) (((##basic-intrinsic "VWaybillAddress") (bruijn ##.entry.166 1 3)) ((##basic-intrinsic "VHashTableSlot") (bruijn ##.ht.164 1 1) 3) ((##basic-intrinsic "VHashTableSlot") (bruijn ##.ht.164 1 1) 1) (##vcore.vector-length (bruijn ##.vec.595 0 1)) (##vcore.- (bruijn ##.capacity.597 0 3) 1)) ((bruijn ##.bitwise-and.50 3 0) (close _V50_V0vanity_V0hash__table_V0hash__table__set__impl_B_V0k25) (bruijn ##.hash.594 0 0) (bruijn ##.%x.598 0 4)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[5]; } container;
    self = &container.self;
    VInitEnv(self, 5, 5, statics);
    self->vars[0] = _VBasic_VWaybillAddress(runtime, NULL,
      statics->vars[3]);
    self->vars[1] = _VBasic_VHashTableSlot(runtime, NULL,
      statics->vars[1],
      VEncodeInt(3l));
    self->vars[2] = _VBasic_VHashTableSlot(runtime, NULL,
      statics->vars[1],
      VEncodeInt(1l));
    self->vars[3] = _VBasic_VVectorLength2(runtime, NULL,
      self->vars[1]);
    self->vars[4] = _VBasic_VSub2(runtime, NULL,
      self->vars[3],
      VEncodeInt(1l));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hash__table_V0hash__table__set__impl_B_V0k25, self)))),
      self->vars[0],
      self->vars[4]);
    }
}
void _V50_V0vanity_V0hash__table_V0hash__table__grow_V0k34(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0hash__table_V0hash__table__grow_V0k34, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.620 1 0) ((bruijn ##.%k.395 0 0) 8) (basic-block 1 1 (##.%r.627) ((##vcore.* 2 (bruijn ##.old-capacity.616 3 3))) ((bruijn ##.%k.395 1 0) (bruijn ##.%r.627 0 0))))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeInt(8l));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VMul2(runtime, NULL,
      VEncodeInt(2l),
      statics->up->up->vars[3]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      self->vars[0]);
    }
}
}
void _V50_V0vanity_V0hash__table_V0hash__table__grow_V10_Dloop_D26_D188_V0k37(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0hash__table_V0hash__table__grow_V10_Dloop_D26_D188_V0k37, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.entry.625 1 0) (##qualified-call (vanity hash-table hash-table-reinsert!) #t (bruijn ##.hash-table-reinsert!.104 12 15) (bruijn ##.%k.392 0 0) (bruijn ##.ht.178 11 1) (bruijn ##.entry.625 1 0)) ((bruijn ##.%k.392 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
  {
   VEnv * _closure_env = _V60_V0vanity_V0hash__table;
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      VGetArg(statics, 11-1, 1);
    VWORD _arg2 = 
      statics->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0hash__table_V0hash__table__reinsert_B, _V60_V0vanity_V0hash__table)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0hash__table_V0hash__table__reinsert_B(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V50_V0vanity_V0hash__table_V0hash__table__grow_V10_Dloop_D26_D188_V0k38(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%x.626) ((##vcore.+ (bruijn ##.i.36.189 3 1) 1)) (##qualified-call (vanity hash-table hash-table-grow ##.loop.26.188) #f (bruijn ##.loop.26.188 4 0) (bruijn ##.%k.389 3 0) (bruijn ##.%x.626 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      statics->up->up->vars[1],
      VEncodeInt(1l));
  {
    VClosure * _closure = VDecodeClosure(statics->up->up->up->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->up->up->vars[0];
    VWORD _arg1 = 
      self->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0hash__table_V0hash__table__grow_V10_Dloop_D26_D188(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
}
void _V50_V0vanity_V0hash__table_V0hash__table__grow_V10_Dloop_D26_D188(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0hash__table_V0hash__table__grow_V10_Dloop_D26_D188, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 2 2 (##.%x.623 ##.%p.624) ((##vcore.vector-length (bruijn ##.old-vec.613 8 0)) (##vcore.< (bruijn ##.i.36.189 1 1) (bruijn ##.%x.623 0 0))) (if (bruijn ##.%p.624 0 1) (basic-block 1 1 (##.entry.625) ((##vcore.vector-ref (bruijn ##.old-vec.613 9 0) (bruijn ##.i.36.189 2 1))) ((close _V50_V0vanity_V0hash__table_V0hash__table__grow_V10_Dloop_D26_D188_V0k37) (close _V50_V0vanity_V0hash__table_V0hash__table__grow_V10_Dloop_D26_D188_V0k38))) (##qualified-call (vanity hash-table hash-table-grow ##.finalize.27.187) #f (bruijn ##.finalize.27.187 3 0) (bruijn ##.%k.389 1 0))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VVectorLength2(runtime, NULL,
      VGetArg(statics, 8-1, 0));
    self->vars[1] = _VBasic_VCmpLt(runtime, NULL,
      statics->vars[1],
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VVectorRef2(runtime, NULL,
      VGetArg(statics, 9-1, 0),
      statics->up->vars[1]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hash__table_V0hash__table__grow_V10_Dloop_D26_D188_V0k37, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hash__table_V0hash__table__grow_V10_Dloop_D26_D188_V0k38, self)))));
    }
} else {
  {
    VClosure * _closure = VDecodeClosure(statics->up->up->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 1, _arg0);
    } else {
       _V50_V0vanity_V0hash__table_V0hash__table__grow_V10_Dfinalize_D27_D187(runtime, _closure_env, 1, _arg0);
    }
  }
}
    }
}
static void _V50_V0vanity_V0hash__table_V0hash__table__grow_V0k39(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##qualified-call (vanity hash-table validate-robinhood) #t (bruijn ##.validate-robinhood.106 8 17) (bruijn ##.%k.386 7 0) (##string ##.string.765) (bruijn ##.ht.178 7 1))
  {
   VEnv * _closure_env = _V60_V0vanity_V0hash__table;
    VWORD _arg0 = 
      VGetArg(statics, 7-1, 0);
    VWORD _arg1 = 
      VEncodePointer(&_V10_Dstring_D765.sym, VPOINTER_OTHER);
    VWORD _arg2 = 
      VGetArg(statics, 7-1, 1);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0hash__table_V0validate__robinhood, _V60_V0vanity_V0hash__table)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0hash__table_V0validate__robinhood(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0hash__table_V0hash__table__grow_V0lambda8(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (letrec 1 ((close "_V50_V0vanity_V0hash__table_V0hash__table__grow_V10_Dloop_D26_D188")) (##qualified-call (vanity hash-table hash-table-grow ##.loop.26.188) #f (bruijn ##.loop.26.188 0 0) (close _V50_V0vanity_V0hash__table_V0hash__table__grow_V0k39) 0))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hash__table_V0hash__table__grow_V10_Dloop_D26_D188, self))));
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hash__table_V0hash__table__grow_V0k39, self))));
    VWORD _arg1 = 
      VEncodeInt(0l);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0hash__table_V0hash__table__grow_V10_Dloop_D26_D188(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
}
void _V50_V0vanity_V0hash__table_V0hash__table__grow_V10_Dfinalize_D27_D187(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0hash__table_V0hash__table__grow_V10_Dfinalize_D27_D187, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%k.388 0 0) #void)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VVOID);
}
void _V50_V0vanity_V0hash__table_V0hash__table__grow_V0k36(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0hash__table_V0hash__table__grow_V0k36, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 2 2 (##.%r.621 ##.%r.622) (((##basic-intrinsic "VHashTableSlotSet") (bruijn ##.ht.178 5 1) 1 0) ((##basic-intrinsic "VHashTableSlotSet") (bruijn ##.ht.178 5 1) 3 (bruijn ##.vec.185 1 0))) ((close _V50_V0vanity_V0hash__table_V0hash__table__grow_V0lambda8) (close "_V50_V0vanity_V0hash__table_V0hash__table__grow_V10_Dfinalize_D27_D187")))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VHashTableSlotSet(runtime, NULL,
      VGetArg(statics, 5-1, 1),
      VEncodeInt(1l),
      VEncodeInt(0l));
    self->vars[1] = _VBasic_VHashTableSlotSet(runtime, NULL,
      VGetArg(statics, 5-1, 1),
      VEncodeInt(3l),
      statics->vars[0]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hash__table_V0hash__table__grow_V0lambda8, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hash__table_V0hash__table__grow_V10_Dfinalize_D27_D187, self)))));
    }
}
void _V50_V0vanity_V0hash__table_V0hash__table__grow_V0k35(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0hash__table_V0hash__table__grow_V0k35, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.make-vector (close _V50_V0vanity_V0hash__table_V0hash__table__grow_V0k36) (bruijn ##.capacity.184 0 0) #f)
    VCallFuncWithGC(runtime, (VFunc)VMakeVector, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hash__table_V0hash__table__grow_V0k36, self)))),
      _var0,
      VEncodeBool(false));
}
void _V50_V0vanity_V0hash__table_V0hash__table__grow(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0hash__table_V0hash__table__grow, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 7 7 (##.old-vec.613 ##.clearinghouse.614 ##.occupancy.615 ##.old-capacity.616 ##.load-factor.617 ##.%x.618 ##.%p.619) (((##basic-intrinsic "VHashTableSlot") (bruijn ##.ht.178 1 1) 3) ((##basic-intrinsic "VHashTableSlot") (bruijn ##.ht.178 1 1) 6) ((##basic-intrinsic "VHashTableSlot") (bruijn ##.ht.178 1 1) 1) (##vcore.vector-length (bruijn ##.old-vec.613 0 0)) ((##basic-intrinsic "VHashTableSlot") (bruijn ##.ht.178 1 1) 2) (##vcore.* (bruijn ##.load-factor.617 0 4) (bruijn ##.old-capacity.616 0 3)) (##vcore.>= (bruijn ##.occupancy.615 0 2) (bruijn ##.%x.618 0 5))) (if (bruijn ##.%p.619 0 6) (basic-block 1 1 (##.%p.620) ((##vcore.= (bruijn ##.old-capacity.616 1 3) 0)) ((close _V50_V0vanity_V0hash__table_V0hash__table__grow_V0k34) (close _V50_V0vanity_V0hash__table_V0hash__table__grow_V0k35))) ((bruijn ##.%k.386 1 0) #void)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[7]; } container;
    self = &container.self;
    VInitEnv(self, 7, 7, statics);
    self->vars[0] = _VBasic_VHashTableSlot(runtime, NULL,
      statics->vars[1],
      VEncodeInt(3l));
    self->vars[1] = _VBasic_VHashTableSlot(runtime, NULL,
      statics->vars[1],
      VEncodeInt(6l));
    self->vars[2] = _VBasic_VHashTableSlot(runtime, NULL,
      statics->vars[1],
      VEncodeInt(1l));
    self->vars[3] = _VBasic_VVectorLength2(runtime, NULL,
      self->vars[0]);
    self->vars[4] = _VBasic_VHashTableSlot(runtime, NULL,
      statics->vars[1],
      VEncodeInt(2l));
    self->vars[5] = _VBasic_VMul2(runtime, NULL,
      self->vars[4],
      self->vars[3]);
    self->vars[6] = _VBasic_VCmpGe(runtime, NULL,
      self->vars[2],
      self->vars[5]);
if(VDecodeBool(
self->vars[6])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCmpEq(runtime, NULL,
      statics->vars[3],
      VEncodeInt(0l));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hash__table_V0hash__table__grow_V0k34, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hash__table_V0hash__table__grow_V0k35, self)))));
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VVOID);
}
    }
}
static void _V10_Dhash__table__ref_D99_V0lambda9(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dhash__table__ref_D99_V0lambda9, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.error.51 3 1) (bruijn ##.%k.398 0 0) (##string ##.string.766) (bruijn ##.ht.192 1 1) (bruijn ##.key.193 1 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[1]), 4,
      _var0,
      VEncodePointer(&_V10_Dstring_D766.sym, VPOINTER_OTHER),
      statics->vars[1],
      statics->vars[2]);
}
__attribute__((used)) static void _V20CaseError__V50_V0vanity_V0hash__table_V0hash__table__ref(VRuntime * runtime, VEnv * statics, int argc, ...) {
 // ("_V50_V0vanity_V0hash__table_V0hash__table__ref" #t #f (3 (##qualified-call (vanity hash-table hash-table-ref-impl) #t (bruijn ##.hash-table-ref-impl.100 1 11) (bruijn ##.%k.397 0 0) (bruijn ##.ht.192 0 1) (bruijn ##.key.193 0 2) (close _V10_Dhash__table__ref_D99_V0lambda9))) (4 (##qualified-call (vanity hash-table hash-table-ref-impl) #t (bruijn ##.hash-table-ref-impl.100 1 11) (bruijn ##.%k.399 0 0) (bruijn ##.ht.194 0 1) (bruijn ##.key.195 0 2) (bruijn ##.thunk.196 0 3))))
 VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0hash__table_V0hash__table__ref, got ~D~N"
 "-- expected 3~N"
 "-- expected 4~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V50_V0vanity_V0hash__table_V0hash__table__ref(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (##qualified-call (vanity hash-table hash-table-ref-impl) #t (bruijn ##.hash-table-ref-impl.100 1 11) (bruijn ##.%k.397 0 0) (bruijn ##.ht.192 0 1) (bruijn ##.key.193 0 2) (close _V10_Dhash__table__ref_D99_V0lambda9))
  {
   VEnv * _closure_env = _V60_V0vanity_V0hash__table;
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      _var1;
    VWORD _arg2 = 
      _var2;
    VWORD _arg3 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dhash__table__ref_D99_V0lambda9, self))));
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0hash__table_V0hash__table__ref__impl, _V60_V0vanity_V0hash__table)}, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0hash__table_V0hash__table__ref__impl(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
__attribute__((used)) static void _V20Case1__V50_V0vanity_V0hash__table_V0hash__table__ref(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
  // (##qualified-call (vanity hash-table hash-table-ref-impl) #t (bruijn ##.hash-table-ref-impl.100 1 11) (bruijn ##.%k.399 0 0) (bruijn ##.ht.194 0 1) (bruijn ##.key.195 0 2) (bruijn ##.thunk.196 0 3))
  {
   VEnv * _closure_env = _V60_V0vanity_V0hash__table;
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      _var1;
    VWORD _arg2 = 
      _var2;
    VWORD _arg3 = 
      _var3;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0hash__table_V0hash__table__ref__impl, _V60_V0vanity_V0hash__table)}, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0hash__table_V0hash__table__ref__impl(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0hash__table_V0hash__table__ref(VRuntime * runtime, VEnv * statics, int argc, ...);
asm(
".intel_syntax noprefix\n"
#ifdef __linux__
".type _V50_V0vanity_V0hash__table_V0hash__table__ref, @function\n"
#endif
".globl _V50_V0vanity_V0hash__table_V0hash__table__ref\n"
"_V50_V0vanity_V0hash__table_V0hash__table__ref:\n"
"    cmp " ARGC_REG ", 3\n"
"    je _V20Case0__V50_V0vanity_V0hash__table_V0hash__table__ref\n"
"    cmp " ARGC_REG ", 4\n"
"    je _V20Case1__V50_V0vanity_V0hash__table_V0hash__table__ref\n"
"    jmp _V20CaseError__V50_V0vanity_V0hash__table_V0hash__table__ref\n"
);
void _V50_V0vanity_V0hash__table_V0hash__table__ref__impl_V10_Dfallback__ref_D203_V0lambda10(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0hash__table_V0hash__table__ref__impl_V10_Dfallback__ref_D203_V0lambda10, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  // (if (bruijn ##.broken?.205 0 0) ((bruijn ##.thunk.199 6 3) (bruijn ##.%k.401 2 0)) ((bruijn ##.%k.401 2 0) (bruijn ##.datum.207 0 2)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 3)), 1,
      statics->up->vars[0]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      _var2);
}
}
void _V50_V0vanity_V0hash__table_V0hash__table__ref__impl_V10_Dfallback__ref_D203_V0k41(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0hash__table_V0hash__table__ref__impl_V10_Dfallback__ref_D203_V0k41, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.waybill.204 0 0) ((##intrinsic "VWaybillUnpack") (close _V50_V0vanity_V0hash__table_V0hash__table__ref__impl_V10_Dfallback__ref_D203_V0lambda10) (bruijn ##.waybill.204 0 0)) ((bruijn ##.thunk.199 5 3) (bruijn ##.%k.401 1 0)))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VWaybillUnpack, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hash__table_V0hash__table__ref__impl_V10_Dfallback__ref_D203_V0lambda10, self)))),
      _var0);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 3)), 1,
      statics->vars[0]);
}
}
void _V50_V0vanity_V0hash__table_V0hash__table__ref__impl_V10_Dfallback__ref_D203(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0hash__table_V0hash__table__ref__impl_V10_Dfallback__ref_D203, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity hash-table hash-table-rummage) #t (bruijn ##.hash-table-rummage.101 5 12) (close _V50_V0vanity_V0hash__table_V0hash__table__ref__impl_V10_Dfallback__ref_D203_V0k41) (bruijn ##.ht.197 4 1) (bruijn ##.key.198 4 2))
  {
   VEnv * _closure_env = _V60_V0vanity_V0hash__table;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hash__table_V0hash__table__ref__impl_V10_Dfallback__ref_D203_V0k41, self))));
    VWORD _arg1 = 
      statics->up->up->up->vars[1];
    VWORD _arg2 = 
      statics->up->up->up->vars[2];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0hash__table_V0hash__table__rummage, _V60_V0vanity_V0hash__table)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0hash__table_V0hash__table__rummage(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0hash__table_V0hash__table__ref__impl_V0k43(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0hash__table_V0hash__table__ref__impl_V0k43, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.idx.208 1 0) (basic-block 1 1 (##.%r.630) ((##vcore.vector-ref (bruijn ##.vec.628 4 0) (bruijn ##.idx.208 2 0))) ((bruijn ##.%k.402 1 0) (bruijn ##.%r.630 0 0))) ((bruijn ##.%k.402 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VVectorRef2(runtime, NULL,
      statics->up->up->up->vars[0],
      statics->up->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0hash__table_V0hash__table__ref__impl_V0lambda11(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0hash__table_V0hash__table__ref__impl_V0lambda11, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  // (if (bruijn ##.wb-broken?.210 0 0) ((bruijn ##.thunk.199 6 3) (bruijn ##.%k.400 6 0)) ((bruijn ##.%k.400 6 0) (bruijn ##.wb-datum.212 0 2)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 3)), 1,
      VGetArg(statics, 6-1, 0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 1,
      _var2);
}
}
void _V50_V0vanity_V0hash__table_V0hash__table__ref__impl_V0k44(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0hash__table_V0hash__table__ref__impl_V0k44, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.waybill.209 0 0) ((##intrinsic "VWaybillUnpack") (close _V50_V0vanity_V0hash__table_V0hash__table__ref__impl_V0lambda11) (bruijn ##.waybill.209 0 0)) (##qualified-call (vanity hash-table hash-table-ref-impl ##.fallback-ref.203) #f (bruijn ##.fallback-ref.203 2 0) (bruijn ##.%k.400 5 0)))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VWaybillUnpack, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hash__table_V0hash__table__ref__impl_V0lambda11, self)))),
      _var0);
} else {
  {
    VClosure * _closure = VDecodeClosure(statics->up->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      VGetArg(statics, 5-1, 0);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 1, _arg0);
    } else {
       _V50_V0vanity_V0hash__table_V0hash__table__ref__impl_V10_Dfallback__ref_D203(runtime, _closure_env, 1, _arg0);
    }
  }
}
}
void _V50_V0vanity_V0hash__table_V0hash__table__ref__impl_V0k42(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0hash__table_V0hash__table__ref__impl_V0k42, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0hash__table_V0hash__table__ref__impl_V0k43) (close _V50_V0vanity_V0hash__table_V0hash__table__ref__impl_V0k44))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hash__table_V0hash__table__ref__impl_V0k43, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hash__table_V0hash__table__ref__impl_V0k44, self)))));
}
void _V50_V0vanity_V0hash__table_V0hash__table__ref__impl_V0k40(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0hash__table_V0hash__table__ref__impl_V0k40, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 2 2 (##.vec.628 ##.clearinghouse.629) (((##basic-intrinsic "VHashTableSlot") (bruijn ##.ht.197 2 1) 3) ((##basic-intrinsic "VHashTableSlot") (bruijn ##.ht.197 2 1) 6)) (letrec 1 ((close "_V50_V0vanity_V0hash__table_V0hash__table__ref__impl_V10_Dfallback__ref_D203")) (##qualified-call (vanity hash-table hash-table-find-impl) #t (bruijn ##.hash-table-find-impl.105 4 16) (close _V50_V0vanity_V0hash__table_V0hash__table__ref__impl_V0k42) (bruijn ##.ht.197 3 1) (bruijn ##.key.198 3 2) (bruijn ##.hash.200 2 0))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VHashTableSlot(runtime, NULL,
      statics->up->vars[1],
      VEncodeInt(3l));
    self->vars[1] = _VBasic_VHashTableSlot(runtime, NULL,
      statics->up->vars[1],
      VEncodeInt(6l));
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hash__table_V0hash__table__ref__impl_V10_Dfallback__ref_D203, self))));
  {
   VEnv * _closure_env = _V60_V0vanity_V0hash__table;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hash__table_V0hash__table__ref__impl_V0k42, self))));
    VWORD _arg1 = 
      statics->up->up->vars[1];
    VWORD _arg2 = 
      statics->up->up->vars[2];
    VWORD _arg3 = 
      statics->up->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0hash__table_V0hash__table__find__impl, _V60_V0vanity_V0hash__table)}, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0hash__table_V0hash__table__find__impl(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
    }
    }
}
void _V50_V0vanity_V0hash__table_V0hash__table__ref__impl(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0hash__table_V0hash__table__ref__impl, got ~D~N"
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
  // ((bruijn ##.current-hash.120 1 31) (close _V50_V0vanity_V0hash__table_V0hash__table__ref__impl_V0k40) (bruijn ##.key.198 0 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[31]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hash__table_V0hash__table__ref__impl_V0k40, self)))),
      _var2);
}
static void _V50_V0vanity_V0hash__table_V0hash__table__rummage_V10_Dloop_D220_V0k49(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.640) ((##vcore.eq? (bruijn ##.key.214 9 2) (bruijn ##.wb-key.224 2 1))) (if (bruijn ##.%p.640 0 0) ((bruijn ##.%k.404 6 0) (bruijn ##.new-waybill.226 1 0)) (basic-block 1 1 (##.%x.641) ((##vcore.+ (bruijn ##.i.221 7 1) 1)) (##qualified-call (vanity hash-table hash-table-rummage ##.loop.220) #f (bruijn ##.loop.220 8 0) (bruijn ##.%k.404 7 0) (bruijn ##.%x.641 0 0)))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 9-1, 2),
      statics->up->vars[1]);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 1,
      statics->vars[0]);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      VGetArg(statics, 7-1, 1),
      VEncodeInt(1l));
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 8-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      VGetArg(statics, 7-1, 0);
    VWORD _arg1 = 
      self->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0hash__table_V0hash__table__rummage_V10_Dloop_D220(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
}
    }
}
static void _V50_V0vanity_V0hash__table_V0hash__table__rummage_V10_Dloop_D220_V0k48(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##qualified-call (vanity hash-table validate-robinhood) #t (bruijn ##.validate-robinhood.106 9 17) (close _V50_V0vanity_V0hash__table_V0hash__table__rummage_V10_Dloop_D220_V0k49) (##string ##.string.767) (bruijn ##.ht.213 8 1))
  {
   VEnv * _closure_env = _V60_V0vanity_V0hash__table;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hash__table_V0hash__table__rummage_V10_Dloop_D220_V0k49, self))));
    VWORD _arg1 = 
      VEncodePointer(&_V10_Dstring_D767.sym, VPOINTER_OTHER);
    VWORD _arg2 = 
      VGetArg(statics, 8-1, 1);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0hash__table_V0validate__robinhood, _V60_V0vanity_V0hash__table)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0hash__table_V0validate__robinhood(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0hash__table_V0hash__table__rummage_V10_Dloop_D220_V0k47(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0hash__table_V0hash__table__rummage_V10_Dloop_D220_V0k47, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity hash-table hash-table-reinsert!) #t (bruijn ##.hash-table-reinsert!.104 9 15) (close _V50_V0vanity_V0hash__table_V0hash__table__rummage_V10_Dloop_D220_V0k48) (bruijn ##.ht.213 8 1) (bruijn ##.new-waybill.226 0 0))
  {
   VEnv * _closure_env = _V60_V0vanity_V0hash__table;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hash__table_V0hash__table__rummage_V10_Dloop_D220_V0k48, self))));
    VWORD _arg1 = 
      VGetArg(statics, 8-1, 1);
    VWORD _arg2 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0hash__table_V0hash__table__reinsert_B, _V60_V0vanity_V0hash__table)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0hash__table_V0hash__table__reinsert_B(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0hash__table_V0hash__table__rummage_V10_Dloop_D220_V0lambda12(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0hash__table_V0hash__table__rummage_V10_Dloop_D220_V0lambda12, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (if (bruijn ##.wb-broken?.223 0 0) (basic-block 1 1 (##.%x.639) ((##vcore.+ (bruijn ##.i.221 5 1) 1)) (##qualified-call (vanity hash-table hash-table-rummage ##.loop.220) #f (bruijn ##.loop.220 6 0) (bruijn ##.%k.404 5 0) (bruijn ##.%x.639 0 0))) (##qualified-call (vanity hash-table make-entry) #t (bruijn ##.make-entry.114 8 25) (close _V50_V0vanity_V0hash__table_V0hash__table__rummage_V10_Dloop_D220_V0k47) (bruijn ##.weakness.632 6 1) (bruijn ##.stability.633 6 2) (bruijn ##.clearinghouse.635 6 4) (bruijn ##.wb-key.224 0 1) (bruijn ##.wb-datum.225 0 2)))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      VGetArg(statics, 5-1, 1),
      VEncodeInt(1l));
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 6-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      VGetArg(statics, 5-1, 0);
    VWORD _arg1 = 
      self->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0hash__table_V0hash__table__rummage_V10_Dloop_D220(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
} else {
  {
   VEnv * _closure_env = _V60_V0vanity_V0hash__table;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hash__table_V0hash__table__rummage_V10_Dloop_D220_V0k47, self))));
    VWORD _arg1 = 
      VGetArg(statics, 6-1, 1);
    VWORD _arg2 = 
      VGetArg(statics, 6-1, 2);
    VWORD _arg3 = 
      VGetArg(statics, 6-1, 4);
    VWORD _arg4 = 
      _var1;
    VWORD _arg5 = 
      _var2;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0hash__table_V0make__entry, _V60_V0vanity_V0hash__table)}, 6, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5);
    } else {
       _V50_V0vanity_V0hash__table_V0make__entry(runtime, _closure_env, 6, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5);
    }
  }
}
}
static void _V50_V0vanity_V0hash__table_V0hash__table__rummage_V10_Dloop_D220_V0k46(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((##intrinsic "VWaybillUnpack") (close _V50_V0vanity_V0hash__table_V0hash__table__rummage_V10_Dloop_D220_V0lambda12) (bruijn ##.waybill.637 1 0))
    VCallFuncWithGC(runtime, (VFunc)VWaybillUnpack, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hash__table_V0hash__table__rummage_V10_Dloop_D220_V0lambda12, self)))),
      statics->vars[0]);
}
void _V50_V0vanity_V0hash__table_V0hash__table__rummage_V10_Dloop_D220_V0k45(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0hash__table_V0hash__table__rummage_V10_Dloop_D220_V0k45, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.407 0 0) (##qualified-call (vanity hash-table validate-robinhood) #t (bruijn ##.validate-robinhood.106 7 17) (close _V50_V0vanity_V0hash__table_V0hash__table__rummage_V10_Dloop_D220_V0k46) (##string ##.string.768) (bruijn ##.ht.213 6 1)) (##qualified-call (vanity hash-table hash-table-rummage ##.loop.220) #f (bruijn ##.loop.220 4 0) (bruijn ##.%k.404 3 0) (bruijn ##.i.221 3 1)))
if(VDecodeBool(
_var0)) {
  {
   VEnv * _closure_env = _V60_V0vanity_V0hash__table;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hash__table_V0hash__table__rummage_V10_Dloop_D220_V0k46, self))));
    VWORD _arg1 = 
      VEncodePointer(&_V10_Dstring_D768.sym, VPOINTER_OTHER);
    VWORD _arg2 = 
      VGetArg(statics, 6-1, 1);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0hash__table_V0validate__robinhood, _V60_V0vanity_V0hash__table)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0hash__table_V0validate__robinhood(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
} else {
  {
    VClosure * _closure = VDecodeClosure(statics->up->up->up->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->up->up->vars[0];
    VWORD _arg1 = 
      statics->up->up->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0hash__table_V0hash__table__rummage_V10_Dloop_D220(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
}
void _V50_V0vanity_V0hash__table_V0hash__table__rummage_V10_Dloop_D220(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0hash__table_V0hash__table__rummage_V10_Dloop_D220, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.%p.636) ((##vcore.= (bruijn ##.i.221 1 1) (bruijn ##.starting-occupancy.634 3 3))) (if (bruijn ##.%p.636 0 0) ((bruijn ##.%k.404 1 0) #f) (basic-block 2 2 (##.waybill.637 ##.%p.638) (((##basic-intrinsic "VClearinghousePoll") (bruijn ##.clearinghouse.635 4 4)) (##vcore.not (bruijn ##.waybill.637 0 0))) (if (bruijn ##.%p.638 0 1) ((bruijn ##.%k.404 2 0) #f) (##qualified-call (vanity hash-table hash-table-sweep) #t (bruijn ##.hash-table-sweep.102 6 13) (close _V50_V0vanity_V0hash__table_V0hash__table__rummage_V10_Dloop_D220_V0k45) (bruijn ##.ht.213 5 1) (bruijn ##.waybill.637 0 0))))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCmpEq(runtime, NULL,
      statics->vars[1],
      statics->up->up->vars[3]);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VClearinghousePoll(runtime, NULL,
      statics->up->up->up->vars[4]);
    self->vars[1] = _VBasic_VNot2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
} else {
  {
   VEnv * _closure_env = _V60_V0vanity_V0hash__table;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hash__table_V0hash__table__rummage_V10_Dloop_D220_V0k45, self))));
    VWORD _arg1 = 
      VGetArg(statics, 5-1, 1);
    VWORD _arg2 = 
      self->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0hash__table_V0hash__table__sweep, _V60_V0vanity_V0hash__table)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0hash__table_V0hash__table__sweep(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
    }
}
    }
}
void _V50_V0vanity_V0hash__table_V0hash__table__rummage(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0hash__table_V0hash__table__rummage, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 5 5 (##.weakness-stability.631 ##.weakness.632 ##.stability.633 ##.starting-occupancy.634 ##.clearinghouse.635) (((##basic-intrinsic "VHashTableSlot") (bruijn ##.ht.213 1 1) 0) (##vcore.car (bruijn ##.weakness-stability.631 0 0)) (##vcore.cdr (bruijn ##.weakness-stability.631 0 0)) ((##basic-intrinsic "VHashTableSlot") (bruijn ##.ht.213 1 1) 1) ((##basic-intrinsic "VHashTableSlot") (bruijn ##.ht.213 1 1) 6)) (letrec 1 ((close "_V50_V0vanity_V0hash__table_V0hash__table__rummage_V10_Dloop_D220")) (##qualified-call (vanity hash-table hash-table-rummage ##.loop.220) #f (bruijn ##.loop.220 0 0) (bruijn ##.%k.403 2 0) 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[5]; } container;
    self = &container.self;
    VInitEnv(self, 5, 5, statics);
    self->vars[0] = _VBasic_VHashTableSlot(runtime, NULL,
      statics->vars[1],
      VEncodeInt(0l));
    self->vars[1] = _VBasic_VCar2(runtime, NULL,
      self->vars[0]);
    self->vars[2] = _VBasic_VCdr2(runtime, NULL,
      self->vars[0]);
    self->vars[3] = _VBasic_VHashTableSlot(runtime, NULL,
      statics->vars[1],
      VEncodeInt(1l));
    self->vars[4] = _VBasic_VHashTableSlot(runtime, NULL,
      statics->vars[1],
      VEncodeInt(6l));
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hash__table_V0hash__table__rummage_V10_Dloop_D220, self))));
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->up->vars[0];
    VWORD _arg1 = 
      VEncodeInt(0l);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0hash__table_V0hash__table__rummage_V10_Dloop_D220(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
    }
}
void _V50_V0vanity_V0hash__table_V0hash__table__sweep_V10_Dloop_D235_V0k51(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0hash__table_V0hash__table__sweep_V10_Dloop_D235_V0k51, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.651 1 1) (basic-block 1 1 (##.%r.659) ((##vcore.eq? (bruijn ##.entry.228 8 2) (bruijn ##.vec-entry.648 3 0))) ((bruijn ##.%k.424 1 0) (bruijn ##.%r.659 0 0))) ((bruijn ##.%k.424 0 0) #f))
if(VDecodeBool(
statics->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      VGetArg(statics, 8-1, 2),
      statics->up->up->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V50_V0vanity_V0hash__table_V0hash__table__sweep_V10_Dloop_D235_V0k54(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.%k.412 4 0) #t)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(true));
}
static void _V50_V0vanity_V0hash__table_V0hash__table__sweep_V10_Dloop_D235_V0k53(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 2 2 (##.%x.652 ##.%r.653) ((##vcore.- (bruijn ##.occupancy.644 7 2) 1) ((##basic-intrinsic "VHashTableSlotSet") (bruijn ##.ht.227 8 1) 1 (bruijn ##.%x.652 0 0))) (##qualified-call (vanity hash-table robinhood-shuffle) #t (bruijn ##.robinhood-shuffle.103 9 14) (close _V50_V0vanity_V0hash__table_V0hash__table__sweep_V10_Dloop_D235_V0k54) (bruijn ##.ht.227 8 1) (bruijn ##.idx.236 4 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VSub2(runtime, NULL,
      VGetArg(statics, 7-1, 2),
      VEncodeInt(1l));
    self->vars[1] = _VBasic_VHashTableSlotSet(runtime, NULL,
      VGetArg(statics, 8-1, 1),
      VEncodeInt(1l),
      self->vars[0]);
  {
   VEnv * _closure_env = _V60_V0vanity_V0hash__table;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hash__table_V0hash__table__sweep_V10_Dloop_D235_V0k54, self))));
    VWORD _arg1 = 
      VGetArg(statics, 8-1, 1);
    VWORD _arg2 = 
      statics->up->up->up->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0hash__table_V0robinhood__shuffle, _V60_V0vanity_V0hash__table)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0hash__table_V0robinhood__shuffle(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
void _V50_V0vanity_V0hash__table_V0hash__table__sweep_V10_Dloop_D235_V0k56(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0hash__table_V0hash__table__sweep_V10_Dloop_D235_V0k56, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%x.658) ((##vcore.+ (bruijn ##.poverty.237 9 2) 1)) (##qualified-call (vanity hash-table hash-table-sweep ##.loop.235) #f (bruijn ##.loop.235 10 0) (bruijn ##.%k.412 9 0) (bruijn ##.%x.417 1 0) (bruijn ##.%x.658 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      VGetArg(statics, 9-1, 2),
      VEncodeInt(1l));
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 10-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      VGetArg(statics, 9-1, 0);
    VWORD _arg1 = 
      statics->vars[0];
    VWORD _arg2 = 
      self->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0hash__table_V0hash__table__sweep_V10_Dloop_D235(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
void _V50_V0vanity_V0hash__table_V0hash__table__sweep_V10_Dloop_D235_V0k55(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0hash__table_V0hash__table__sweep_V10_Dloop_D235_V0k55, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%p.655) ((##vcore.> (bruijn ##.poverty.237 6 2) (bruijn ##.%x.421 1 0))) (if (bruijn ##.%p.655 0 0) ((bruijn ##.%k.412 6 0) #f) (basic-block 2 2 (##.%x.656 ##.%x.657) ((##vcore.+ (bruijn ##.idx.236 7 1) 1) (##vcore.- (bruijn ##.capacity.646 10 4) 1)) ((bruijn ##.bitwise-and.50 13 0) (close _V50_V0vanity_V0hash__table_V0hash__table__sweep_V10_Dloop_D235_V0k56) (bruijn ##.%x.656 0 0) (bruijn ##.%x.657 0 1)))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCmpGt(runtime, NULL,
      VGetArg(statics, 6-1, 2),
      statics->vars[0]);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 1,
      VEncodeBool(false));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      VGetArg(statics, 7-1, 1),
      VEncodeInt(1l));
    self->vars[1] = _VBasic_VSub2(runtime, NULL,
      VGetArg(statics, 10-1, 4),
      VEncodeInt(1l));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hash__table_V0hash__table__sweep_V10_Dloop_D235_V0k56, self)))),
      self->vars[0],
      self->vars[1]);
    }
}
    }
}
void _V50_V0vanity_V0hash__table_V0hash__table__sweep_V10_Dloop_D235_V0k52(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0hash__table_V0hash__table__sweep_V10_Dloop_D235_V0k52, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.414 0 0) (##vcore.vector-set! (close _V50_V0vanity_V0hash__table_V0hash__table__sweep_V10_Dloop_D235_V0k53) (bruijn ##.vec.643 6 1) (bruijn ##.idx.236 3 1) #f) (basic-block 1 1 (##.%x.654) (((##basic-intrinsic "VWaybillAddress") (bruijn ##.vec-entry.648 3 0))) (##qualified-call (vanity hash-table hash-poverty) #t (bruijn ##.hash-poverty.112 9 23) (close _V50_V0vanity_V0hash__table_V0hash__table__sweep_V10_Dloop_D235_V0k55) (bruijn ##.%x.654 0 0) (bruijn ##.idx.236 4 1) (bruijn ##.capacity.646 7 4))))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VVectorSet2, 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hash__table_V0hash__table__sweep_V10_Dloop_D235_V0k53, self)))),
      VGetArg(statics, 6-1, 1),
      statics->up->up->vars[1],
      VEncodeBool(false));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VWaybillAddress(runtime, NULL,
      statics->up->up->vars[0]);
  {
   VEnv * _closure_env = _V60_V0vanity_V0hash__table;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hash__table_V0hash__table__sweep_V10_Dloop_D235_V0k55, self))));
    VWORD _arg1 = 
      self->vars[0];
    VWORD _arg2 = 
      statics->up->up->up->vars[1];
    VWORD _arg3 = 
      VGetArg(statics, 7-1, 4);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0hash__table_V0hash__poverty, _V60_V0vanity_V0hash__table)}, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0hash__table_V0hash__poverty(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
    }
}
}
void _V50_V0vanity_V0hash__table_V0hash__table__sweep_V10_Dloop_D235(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0hash__table_V0hash__table__sweep_V10_Dloop_D235, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 2 2 (##.vec-entry.648 ##.%p.649) ((##vcore.vector-ref (bruijn ##.vec.643 4 1) (bruijn ##.idx.236 1 1)) (##vcore.not (bruijn ##.vec-entry.648 0 0))) (if (bruijn ##.%p.649 0 1) ((bruijn ##.%k.412 1 0) #f) (basic-block 2 2 (##.%x.650 ##.%p.651) (((##basic-intrinsic "VWaybillAddress") (bruijn ##.vec-entry.648 1 0)) (##vcore.= (bruijn ##.%x.650 0 0) (bruijn ##.hash.642 5 0))) ((close _V50_V0vanity_V0hash__table_V0hash__table__sweep_V10_Dloop_D235_V0k51) (close _V50_V0vanity_V0hash__table_V0hash__table__sweep_V10_Dloop_D235_V0k52)))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VVectorRef2(runtime, NULL,
      statics->up->up->up->vars[1],
      statics->vars[1]);
    self->vars[1] = _VBasic_VNot2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VWaybillAddress(runtime, NULL,
      statics->vars[0]);
    self->vars[1] = _VBasic_VCmpEq(runtime, NULL,
      self->vars[0],
      VGetArg(statics, 5-1, 0));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hash__table_V0hash__table__sweep_V10_Dloop_D235_V0k51, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hash__table_V0hash__table__sweep_V10_Dloop_D235_V0k52, self)))));
    }
}
    }
}
void _V50_V0vanity_V0hash__table_V0hash__table__sweep_V0k50(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0hash__table_V0hash__table__sweep_V0k50, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (letrec 1 ((close "_V50_V0vanity_V0hash__table_V0hash__table__sweep_V10_Dloop_D235")) (##qualified-call (vanity hash-table hash-table-sweep ##.loop.235) #f (bruijn ##.loop.235 0 0) (bruijn ##.%k.411 3 0) (bruijn ##.idx.234 1 0) 0))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hash__table_V0hash__table__sweep_V10_Dloop_D235, self))));
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->up->up->vars[0];
    VWORD _arg1 = 
      statics->vars[0];
    VWORD _arg2 = 
      VEncodeInt(0l);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0hash__table_V0hash__table__sweep_V10_Dloop_D235(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
void _V50_V0vanity_V0hash__table_V0hash__table__sweep(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0hash__table_V0hash__table__sweep, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 6 6 (##.hash.642 ##.vec.643 ##.occupancy.644 ##.clearinghouse.645 ##.capacity.646 ##.%x.647) (((##basic-intrinsic "VWaybillAddress") (bruijn ##.entry.228 1 2)) ((##basic-intrinsic "VHashTableSlot") (bruijn ##.ht.227 1 1) 3) ((##basic-intrinsic "VHashTableSlot") (bruijn ##.ht.227 1 1) 1) ((##basic-intrinsic "VHashTableSlot") (bruijn ##.ht.227 1 1) 6) (##vcore.vector-length (bruijn ##.vec.643 0 1)) (##vcore.- (bruijn ##.capacity.646 0 4) 1)) ((bruijn ##.bitwise-and.50 3 0) (close _V50_V0vanity_V0hash__table_V0hash__table__sweep_V0k50) (bruijn ##.hash.642 0 0) (bruijn ##.%x.647 0 5)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[6]; } container;
    self = &container.self;
    VInitEnv(self, 6, 6, statics);
    self->vars[0] = _VBasic_VWaybillAddress(runtime, NULL,
      statics->vars[2]);
    self->vars[1] = _VBasic_VHashTableSlot(runtime, NULL,
      statics->vars[1],
      VEncodeInt(3l));
    self->vars[2] = _VBasic_VHashTableSlot(runtime, NULL,
      statics->vars[1],
      VEncodeInt(1l));
    self->vars[3] = _VBasic_VHashTableSlot(runtime, NULL,
      statics->vars[1],
      VEncodeInt(6l));
    self->vars[4] = _VBasic_VVectorLength2(runtime, NULL,
      self->vars[1]);
    self->vars[5] = _VBasic_VSub2(runtime, NULL,
      self->vars[4],
      VEncodeInt(1l));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hash__table_V0hash__table__sweep_V0k50, self)))),
      self->vars[0],
      self->vars[5]);
    }
}
static void _V50_V0vanity_V0hash__table_V0robinhood__shuffle_V10_Dloop_D243_V0k61(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##qualified-call (vanity hash-table robinhood-shuffle ##.loop.243) #f (bruijn ##.loop.243 9 0) (bruijn ##.%k.428 8 0) (bruijn ##.idx.245 5 0))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 9-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      VGetArg(statics, 8-1, 0);
    VWORD _arg1 = 
      VGetArg(statics, 5-1, 0);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0hash__table_V0robinhood__shuffle_V10_Dloop_D243(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
static void _V50_V0vanity_V0hash__table_V0robinhood__shuffle_V10_Dloop_D243_V0k60(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##vcore.vector-set! (close _V50_V0vanity_V0hash__table_V0robinhood__shuffle_V10_Dloop_D243_V0k61) (bruijn ##.vec.660 10 0) (bruijn ##.idx.245 5 0) #f)
    VCallFuncWithGC(runtime, (VFunc)VVectorSet2, 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hash__table_V0robinhood__shuffle_V10_Dloop_D243_V0k61, self)))),
      VGetArg(statics, 10-1, 0),
      VGetArg(statics, 5-1, 0),
      VEncodeBool(false));
}
void _V50_V0vanity_V0hash__table_V0robinhood__shuffle_V10_Dloop_D243_V0k59(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0hash__table_V0robinhood__shuffle_V10_Dloop_D243_V0k59, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (letrec 1 ((bruijn ##.%x.430 1 0)) (basic-block 1 1 (##.%p.666) ((##vcore.= (bruijn ##.elem-poverty.247 1 0) 0)) (if (bruijn ##.%p.666 0 0) ((bruijn ##.%k.428 8 0) #void) (##vcore.vector-set! (close _V50_V0vanity_V0hash__table_V0robinhood__shuffle_V10_Dloop_D243_V0k60) (bruijn ##.vec.660 10 0) (bruijn ##.oldidx.244 8 1) (bruijn ##.vec-entry.246 5 1)))))
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
    self->vars[0] = _VBasic_VCmpEq(runtime, NULL,
      statics->vars[0],
      VEncodeInt(0l));
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 0)), 1,
      VVOID);
} else {
    VCallFuncWithGC(runtime, (VFunc)VVectorSet2, 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hash__table_V0robinhood__shuffle_V10_Dloop_D243_V0k60, self)))),
      VGetArg(statics, 10-1, 0),
      VGetArg(statics, 8-1, 1),
      VGetArg(statics, 5-1, 1));
}
    }
    }
}
static void _V50_V0vanity_V0hash__table_V0robinhood__shuffle_V10_Dloop_D243_V0k58(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (if (bruijn ##.vec-entry.246 1 1) (basic-block 1 1 (##.%x.665) (((##basic-intrinsic "VWaybillAddress") (bruijn ##.vec-entry.246 2 1))) (##qualified-call (vanity hash-table hash-poverty) #t (bruijn ##.hash-poverty.112 9 23) (close _V50_V0vanity_V0hash__table_V0robinhood__shuffle_V10_Dloop_D243_V0k59) (bruijn ##.%x.665 0 0) (bruijn ##.idx.245 2 0) (bruijn ##.capacity.661 7 1))) ((bruijn ##.%k.428 4 0) #void))
if(VDecodeBool(
statics->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VWaybillAddress(runtime, NULL,
      statics->up->vars[1]);
  {
   VEnv * _closure_env = _V60_V0vanity_V0hash__table;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hash__table_V0robinhood__shuffle_V10_Dloop_D243_V0k59, self))));
    VWORD _arg1 = 
      self->vars[0];
    VWORD _arg2 = 
      statics->up->vars[0];
    VWORD _arg3 = 
      VGetArg(statics, 7-1, 1);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0hash__table_V0hash__poverty, _V60_V0vanity_V0hash__table)}, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0hash__table_V0hash__poverty(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VVOID);
}
}
void _V50_V0vanity_V0hash__table_V0robinhood__shuffle_V10_Dloop_D243_V0k57(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0hash__table_V0robinhood__shuffle_V10_Dloop_D243_V0k57, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (letrec 2 ((bruijn ##.%x.429 1 0) #f) (basic-block 1 1 (##.%x.664) ((##vcore.vector-ref (bruijn ##.vec.660 6 0) (bruijn ##.idx.245 1 0))) (set! (close _V50_V0vanity_V0hash__table_V0robinhood__shuffle_V10_Dloop_D243_V0k58) (bruijn ##.vec-entry.246 1 1) (bruijn ##.%x.664 0 0))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = statics->vars[0];
    self->vars[1] = VEncodeBool(false);
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VVectorRef2(runtime, NULL,
      VGetArg(statics, 6-1, 0),
      statics->vars[0]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hash__table_V0robinhood__shuffle_V10_Dloop_D243_V0k58, self)))),
      VEncodeInt(1l), VEncodeInt(1l),
      self->vars[0]
    );
    }
    }
}
void _V50_V0vanity_V0hash__table_V0robinhood__shuffle_V10_Dloop_D243(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0hash__table_V0robinhood__shuffle_V10_Dloop_D243, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 2 2 (##.%x.662 ##.%x.663) ((##vcore.+ (bruijn ##.oldidx.244 1 1) 1) (##vcore.- (bruijn ##.capacity.661 3 1) 1)) ((bruijn ##.bitwise-and.50 6 0) (close _V50_V0vanity_V0hash__table_V0robinhood__shuffle_V10_Dloop_D243_V0k57) (bruijn ##.%x.662 0 0) (bruijn ##.%x.663 0 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      statics->vars[1],
      VEncodeInt(1l));
    self->vars[1] = _VBasic_VSub2(runtime, NULL,
      statics->up->up->vars[1],
      VEncodeInt(1l));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hash__table_V0robinhood__shuffle_V10_Dloop_D243_V0k57, self)))),
      self->vars[0],
      self->vars[1]);
    }
}
void _V50_V0vanity_V0hash__table_V0robinhood__shuffle(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0hash__table_V0robinhood__shuffle, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 2 2 (##.vec.660 ##.capacity.661) (((##basic-intrinsic "VHashTableSlot") (bruijn ##.ht.239 1 1) 3) (##vcore.vector-length (bruijn ##.vec.660 0 0))) (letrec 1 ((close "_V50_V0vanity_V0hash__table_V0robinhood__shuffle_V10_Dloop_D243")) (##qualified-call (vanity hash-table robinhood-shuffle ##.loop.243) #f (bruijn ##.loop.243 0 0) (bruijn ##.%k.427 2 0) (bruijn ##.oldidx.240 2 2))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VHashTableSlot(runtime, NULL,
      statics->vars[1],
      VEncodeInt(3l));
    self->vars[1] = _VBasic_VVectorLength2(runtime, NULL,
      self->vars[0]);
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hash__table_V0robinhood__shuffle_V10_Dloop_D243, self))));
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->up->vars[0];
    VWORD _arg1 = 
      statics->up->vars[2];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0hash__table_V0robinhood__shuffle_V10_Dloop_D243(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
    }
}
void _V50_V0vanity_V0hash__table_V0hash__table__reinsert_B_V10_Dloop_D254_V0k63(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0hash__table_V0hash__table__reinsert_B_V10_Dloop_D254_V0k63, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.vec-entry.672 1 0) (basic-block 1 1 (##.%x.683) (((##basic-intrinsic "VWaybillAddress") (bruijn ##.vec-entry.672 2 0))) (##qualified-call (vanity hash-table hash-poverty) #t (bruijn ##.hash-poverty.112 8 23) (bruijn ##.%k.449 1 0) (bruijn ##.%x.683 0 0) (bruijn ##.idx.256 3 2) (bruijn ##.capacity.669 6 2))) ((bruijn ##.%k.449 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VWaybillAddress(runtime, NULL,
      statics->up->vars[0]);
  {
   VEnv * _closure_env = _V60_V0vanity_V0hash__table;
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      self->vars[0];
    VWORD _arg2 = 
      statics->up->up->vars[2];
    VWORD _arg3 = 
      VGetArg(statics, 6-1, 2);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0hash__table_V0hash__poverty, _V60_V0vanity_V0hash__table)}, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0hash__table_V0hash__poverty(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V50_V0vanity_V0hash__table_V0hash__table__reinsert_B_V10_Dloop_D254_V0k65(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 2 2 (##.%x.674 ##.%r.675) ((##vcore.+ (bruijn ##.occupancy.668 7 1) 1) ((##basic-intrinsic "VHashTableSlotSet") (bruijn ##.ht.248 8 1) 1 (bruijn ##.%x.674 0 0))) ((bruijn ##.%k.437 4 0) (bruijn ##.%r.675 0 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      VGetArg(statics, 7-1, 1),
      VEncodeInt(1l));
    self->vars[1] = _VBasic_VHashTableSlotSet(runtime, NULL,
      VGetArg(statics, 8-1, 1),
      VEncodeInt(1l),
      self->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      self->vars[1]);
    }
}
void _V50_V0vanity_V0hash__table_V0hash__table__reinsert_B_V10_Dloop_D254_V0k67(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0hash__table_V0hash__table__reinsert_B_V10_Dloop_D254_V0k67, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%x.679) ((##vcore.+ (bruijn ##.vec-entry-poverty.259 5 0) 1)) (##qualified-call (vanity hash-table hash-table-reinsert! ##.loop.254) #f (bruijn ##.loop.254 8 0) (bruijn ##.%k.437 7 0) (bruijn ##.vec-entry.672 6 0) (bruijn ##.%x.441 1 0) (bruijn ##.%x.679 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      VGetArg(statics, 5-1, 0),
      VEncodeInt(1l));
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 8-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      VGetArg(statics, 7-1, 0);
    VWORD _arg1 = 
      VGetArg(statics, 6-1, 0);
    VWORD _arg2 = 
      statics->vars[0];
    VWORD _arg3 = 
      self->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0hash__table_V0hash__table__reinsert_B_V10_Dloop_D254(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
    }
}
static void _V50_V0vanity_V0hash__table_V0hash__table__reinsert_B_V10_Dloop_D254_V0k66(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 2 2 (##.%x.677 ##.%x.678) ((##vcore.+ (bruijn ##.idx.256 5 2) 1) (##vcore.- (bruijn ##.capacity.669 8 2) 1)) ((bruijn ##.bitwise-and.50 11 0) (close _V50_V0vanity_V0hash__table_V0hash__table__reinsert_B_V10_Dloop_D254_V0k67) (bruijn ##.%x.677 0 0) (bruijn ##.%x.678 0 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      VGetArg(statics, 5-1, 2),
      VEncodeInt(1l));
    self->vars[1] = _VBasic_VSub2(runtime, NULL,
      VGetArg(statics, 8-1, 2),
      VEncodeInt(1l));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hash__table_V0hash__table__reinsert_B_V10_Dloop_D254_V0k67, self)))),
      self->vars[0],
      self->vars[1]);
    }
}
void _V50_V0vanity_V0hash__table_V0hash__table__reinsert_B_V10_Dloop_D254_V0k68(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0hash__table_V0hash__table__reinsert_B_V10_Dloop_D254_V0k68, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%x.682) ((##vcore.+ (bruijn ##.poverty.257 7 3) 1)) (##qualified-call (vanity hash-table hash-table-reinsert! ##.loop.254) #f (bruijn ##.loop.254 8 0) (bruijn ##.%k.437 7 0) (bruijn ##.entry.255 7 1) (bruijn ##.%x.445 1 0) (bruijn ##.%x.682 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      VGetArg(statics, 7-1, 3),
      VEncodeInt(1l));
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 8-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      VGetArg(statics, 7-1, 0);
    VWORD _arg1 = 
      VGetArg(statics, 7-1, 1);
    VWORD _arg2 = 
      statics->vars[0];
    VWORD _arg3 = 
      self->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0hash__table_V0hash__table__reinsert_B_V10_Dloop_D254(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
    }
}
void _V50_V0vanity_V0hash__table_V0hash__table__reinsert_B_V10_Dloop_D254_V0k64(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0hash__table_V0hash__table__reinsert_B_V10_Dloop_D254_V0k64, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%p.673) ((##vcore.not (bruijn ##.vec-entry.672 2 0))) (if (bruijn ##.%p.673 0 0) (##vcore.vector-set! (close _V50_V0vanity_V0hash__table_V0hash__table__reinsert_B_V10_Dloop_D254_V0k65) (bruijn ##.vec.667 6 0) (bruijn ##.idx.256 3 2) (bruijn ##.entry.255 3 1)) (basic-block 1 1 (##.%p.676) ((##vcore.> (bruijn ##.poverty.257 4 3) (bruijn ##.vec-entry-poverty.259 2 0))) (if (bruijn ##.%p.676 0 0) (##vcore.vector-set! (close _V50_V0vanity_V0hash__table_V0hash__table__reinsert_B_V10_Dloop_D254_V0k66) (bruijn ##.vec.667 7 0) (bruijn ##.idx.256 4 2) (bruijn ##.entry.255 4 1)) (basic-block 2 2 (##.%x.680 ##.%x.681) ((##vcore.+ (bruijn ##.idx.256 5 2) 1) (##vcore.- (bruijn ##.capacity.669 8 2) 1)) ((bruijn ##.bitwise-and.50 11 0) (close _V50_V0vanity_V0hash__table_V0hash__table__reinsert_B_V10_Dloop_D254_V0k68) (bruijn ##.%x.680 0 0) (bruijn ##.%x.681 0 1)))))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VNot2(runtime, NULL,
      statics->up->vars[0]);
if(VDecodeBool(
self->vars[0])) {
    VCallFuncWithGC(runtime, (VFunc)VVectorSet2, 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hash__table_V0hash__table__reinsert_B_V10_Dloop_D254_V0k65, self)))),
      VGetArg(statics, 6-1, 0),
      statics->up->up->vars[2],
      statics->up->up->vars[1]);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCmpGt(runtime, NULL,
      statics->up->up->up->vars[3],
      statics->up->vars[0]);
if(VDecodeBool(
self->vars[0])) {
    VCallFuncWithGC(runtime, (VFunc)VVectorSet2, 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hash__table_V0hash__table__reinsert_B_V10_Dloop_D254_V0k66, self)))),
      VGetArg(statics, 7-1, 0),
      statics->up->up->up->vars[2],
      statics->up->up->up->vars[1]);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      VGetArg(statics, 5-1, 2),
      VEncodeInt(1l));
    self->vars[1] = _VBasic_VSub2(runtime, NULL,
      VGetArg(statics, 8-1, 2),
      VEncodeInt(1l));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hash__table_V0hash__table__reinsert_B_V10_Dloop_D254_V0k68, self)))),
      self->vars[0],
      self->vars[1]);
    }
}
    }
}
    }
}
void _V50_V0vanity_V0hash__table_V0hash__table__reinsert_B_V10_Dloop_D254(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0hash__table_V0hash__table__reinsert_B_V10_Dloop_D254, got ~D~N"
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
  // (basic-block 1 1 (##.vec-entry.672) ((##vcore.vector-ref (bruijn ##.vec.667 4 0) (bruijn ##.idx.256 1 2))) ((close _V50_V0vanity_V0hash__table_V0hash__table__reinsert_B_V10_Dloop_D254_V0k63) (close _V50_V0vanity_V0hash__table_V0hash__table__reinsert_B_V10_Dloop_D254_V0k64)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VVectorRef2(runtime, NULL,
      statics->up->up->up->vars[0],
      statics->vars[2]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hash__table_V0hash__table__reinsert_B_V10_Dloop_D254_V0k63, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hash__table_V0hash__table__reinsert_B_V10_Dloop_D254_V0k64, self)))));
    }
}
void _V50_V0vanity_V0hash__table_V0hash__table__reinsert_B_V0k62(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0hash__table_V0hash__table__reinsert_B_V0k62, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (letrec 1 ((close "_V50_V0vanity_V0hash__table_V0hash__table__reinsert_B_V10_Dloop_D254")) (##qualified-call (vanity hash-table hash-table-reinsert! ##.loop.254) #f (bruijn ##.loop.254 0 0) (bruijn ##.%k.436 3 0) (bruijn ##.entry.249 3 2) (bruijn ##.idx.253 1 0) 0))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hash__table_V0hash__table__reinsert_B_V10_Dloop_D254, self))));
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->up->up->vars[0];
    VWORD _arg1 = 
      statics->up->up->vars[2];
    VWORD _arg2 = 
      statics->vars[0];
    VWORD _arg3 = 
      VEncodeInt(0l);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0hash__table_V0hash__table__reinsert_B_V10_Dloop_D254(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
    }
}
void _V50_V0vanity_V0hash__table_V0hash__table__reinsert_B(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0hash__table_V0hash__table__reinsert_B, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 5 5 (##.vec.667 ##.occupancy.668 ##.capacity.669 ##.%x.670 ##.%x.671) (((##basic-intrinsic "VHashTableSlot") (bruijn ##.ht.248 1 1) 3) ((##basic-intrinsic "VHashTableSlot") (bruijn ##.ht.248 1 1) 1) (##vcore.vector-length (bruijn ##.vec.667 0 0)) ((##basic-intrinsic "VWaybillAddress") (bruijn ##.entry.249 1 2)) (##vcore.- (bruijn ##.capacity.669 0 2) 1)) ((bruijn ##.bitwise-and.50 3 0) (close _V50_V0vanity_V0hash__table_V0hash__table__reinsert_B_V0k62) (bruijn ##.%x.670 0 3) (bruijn ##.%x.671 0 4)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[5]; } container;
    self = &container.self;
    VInitEnv(self, 5, 5, statics);
    self->vars[0] = _VBasic_VHashTableSlot(runtime, NULL,
      statics->vars[1],
      VEncodeInt(3l));
    self->vars[1] = _VBasic_VHashTableSlot(runtime, NULL,
      statics->vars[1],
      VEncodeInt(1l));
    self->vars[2] = _VBasic_VVectorLength2(runtime, NULL,
      self->vars[0]);
    self->vars[3] = _VBasic_VWaybillAddress(runtime, NULL,
      statics->vars[2]);
    self->vars[4] = _VBasic_VSub2(runtime, NULL,
      self->vars[2],
      VEncodeInt(1l));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hash__table_V0hash__table__reinsert_B_V0k62, self)))),
      self->vars[3],
      self->vars[4]);
    }
}
void _V50_V0vanity_V0hash__table_V0hash__table__find__impl_V10_Dloop_D266_V0k70(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0hash__table_V0hash__table__find__impl_V10_Dloop_D266_V0k70, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.690 1 1) (##qualified-call (vanity hash-table waybill-key-matches?) #t (bruijn ##.waybill-key-matches?.111 8 22) (bruijn ##.%k.465 0 0) (bruijn ##.vec-entry.687 2 0) (bruijn ##.key.261 7 2)) ((bruijn ##.%k.465 0 0) #f))
if(VDecodeBool(
statics->vars[1])) {
  {
   VEnv * _closure_env = _V60_V0vanity_V0hash__table;
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      statics->up->vars[0];
    VWORD _arg2 = 
      VGetArg(statics, 7-1, 2);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0hash__table_V0waybill__key__matches_Q, _V60_V0vanity_V0hash__table)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0hash__table_V0waybill__key__matches_Q(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0hash__table_V0hash__table__find__impl_V10_Dloop_D266_V0k73(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0hash__table_V0hash__table__find__impl_V10_Dloop_D266_V0k73, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%x.695) ((##vcore.+ (bruijn ##.poverty.268 9 2) 1)) (##qualified-call (vanity hash-table hash-table-find-impl ##.loop.266) #f (bruijn ##.loop.266 10 0) (bruijn ##.%k.454 9 0) (bruijn ##.%x.458 1 0) (bruijn ##.%x.695 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      VGetArg(statics, 9-1, 2),
      VEncodeInt(1l));
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 10-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      VGetArg(statics, 9-1, 0);
    VWORD _arg1 = 
      statics->vars[0];
    VWORD _arg2 = 
      self->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0hash__table_V0hash__table__find__impl_V10_Dloop_D266(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
void _V50_V0vanity_V0hash__table_V0hash__table__find__impl_V10_Dloop_D266_V0k72(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0hash__table_V0hash__table__find__impl_V10_Dloop_D266_V0k72, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%p.692) ((##vcore.> (bruijn ##.poverty.268 6 2) (bruijn ##.%x.462 1 0))) (if (bruijn ##.%p.692 0 0) ((bruijn ##.%k.454 6 0) #f) (basic-block 2 2 (##.%x.693 ##.%x.694) ((##vcore.+ (bruijn ##.idx.267 7 1) 1) (##vcore.- (bruijn ##.capacity.685 10 1) 1)) ((bruijn ##.bitwise-and.50 13 0) (close _V50_V0vanity_V0hash__table_V0hash__table__find__impl_V10_Dloop_D266_V0k73) (bruijn ##.%x.693 0 0) (bruijn ##.%x.694 0 1)))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCmpGt(runtime, NULL,
      VGetArg(statics, 6-1, 2),
      statics->vars[0]);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 1,
      VEncodeBool(false));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      VGetArg(statics, 7-1, 1),
      VEncodeInt(1l));
    self->vars[1] = _VBasic_VSub2(runtime, NULL,
      VGetArg(statics, 10-1, 1),
      VEncodeInt(1l));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hash__table_V0hash__table__find__impl_V10_Dloop_D266_V0k73, self)))),
      self->vars[0],
      self->vars[1]);
    }
}
    }
}
void _V50_V0vanity_V0hash__table_V0hash__table__find__impl_V10_Dloop_D266_V0k71(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0hash__table_V0hash__table__find__impl_V10_Dloop_D266_V0k71, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.456 0 0) ((bruijn ##.%k.454 3 0) (bruijn ##.idx.267 3 1)) (basic-block 1 1 (##.%x.691) (((##basic-intrinsic "VWaybillAddress") (bruijn ##.vec-entry.687 3 0))) (##qualified-call (vanity hash-table hash-poverty) #t (bruijn ##.hash-poverty.112 9 23) (close _V50_V0vanity_V0hash__table_V0hash__table__find__impl_V10_Dloop_D266_V0k72) (bruijn ##.%x.691 0 0) (bruijn ##.idx.267 4 1) (bruijn ##.capacity.685 7 1))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      statics->up->up->vars[1]);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VWaybillAddress(runtime, NULL,
      statics->up->up->vars[0]);
  {
   VEnv * _closure_env = _V60_V0vanity_V0hash__table;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hash__table_V0hash__table__find__impl_V10_Dloop_D266_V0k72, self))));
    VWORD _arg1 = 
      self->vars[0];
    VWORD _arg2 = 
      statics->up->up->up->vars[1];
    VWORD _arg3 = 
      VGetArg(statics, 7-1, 1);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0hash__table_V0hash__poverty, _V60_V0vanity_V0hash__table)}, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0hash__table_V0hash__poverty(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
    }
}
}
void _V50_V0vanity_V0hash__table_V0hash__table__find__impl_V10_Dloop_D266(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0hash__table_V0hash__table__find__impl_V10_Dloop_D266, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 2 2 (##.vec-entry.687 ##.%p.688) ((##vcore.vector-ref (bruijn ##.vec.684 4 0) (bruijn ##.idx.267 1 1)) (##vcore.not (bruijn ##.vec-entry.687 0 0))) (if (bruijn ##.%p.688 0 1) ((bruijn ##.%k.454 1 0) (bruijn ##.idx.267 1 1)) (basic-block 2 2 (##.%x.689 ##.%p.690) (((##basic-intrinsic "VWaybillAddress") (bruijn ##.vec-entry.687 1 0)) (##vcore.= (bruijn ##.%x.689 0 0) (bruijn ##.hash.262 6 3))) ((close _V50_V0vanity_V0hash__table_V0hash__table__find__impl_V10_Dloop_D266_V0k70) (close _V50_V0vanity_V0hash__table_V0hash__table__find__impl_V10_Dloop_D266_V0k71)))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VVectorRef2(runtime, NULL,
      statics->up->up->up->vars[0],
      statics->vars[1]);
    self->vars[1] = _VBasic_VNot2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      statics->vars[1]);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VWaybillAddress(runtime, NULL,
      statics->vars[0]);
    self->vars[1] = _VBasic_VCmpEq(runtime, NULL,
      self->vars[0],
      VGetArg(statics, 6-1, 3));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hash__table_V0hash__table__find__impl_V10_Dloop_D266_V0k70, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hash__table_V0hash__table__find__impl_V10_Dloop_D266_V0k71, self)))));
    }
}
    }
}
void _V50_V0vanity_V0hash__table_V0hash__table__find__impl_V0k69(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0hash__table_V0hash__table__find__impl_V0k69, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (letrec 1 ((close "_V50_V0vanity_V0hash__table_V0hash__table__find__impl_V10_Dloop_D266")) (##qualified-call (vanity hash-table hash-table-find-impl ##.loop.266) #f (bruijn ##.loop.266 0 0) (bruijn ##.%k.453 3 0) (bruijn ##.idx.265 1 0) 0))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hash__table_V0hash__table__find__impl_V10_Dloop_D266, self))));
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->up->up->vars[0];
    VWORD _arg1 = 
      statics->vars[0];
    VWORD _arg2 = 
      VEncodeInt(0l);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0hash__table_V0hash__table__find__impl_V10_Dloop_D266(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
void _V50_V0vanity_V0hash__table_V0hash__table__find__impl(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0hash__table_V0hash__table__find__impl, got ~D~N"
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
  // (basic-block 3 3 (##.vec.684 ##.capacity.685 ##.%x.686) (((##basic-intrinsic "VHashTableSlot") (bruijn ##.ht.260 1 1) 3) (##vcore.vector-length (bruijn ##.vec.684 0 0)) (##vcore.- (bruijn ##.capacity.685 0 1) 1)) ((bruijn ##.bitwise-and.50 3 0) (close _V50_V0vanity_V0hash__table_V0hash__table__find__impl_V0k69) (bruijn ##.hash.262 1 3) (bruijn ##.%x.686 0 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VHashTableSlot(runtime, NULL,
      statics->vars[1],
      VEncodeInt(3l));
    self->vars[1] = _VBasic_VVectorLength2(runtime, NULL,
      self->vars[0]);
    self->vars[2] = _VBasic_VSub2(runtime, NULL,
      self->vars[1],
      VEncodeInt(1l));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hash__table_V0hash__table__find__impl_V0k69, self)))),
      statics->vars[3],
      self->vars[2]);
    }
}
void _V50_V0vanity_V0hash__table_V0validate__robinhood(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0hash__table_V0validate__robinhood, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  // ((bruijn ##.%k.468 0 0) #f)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
void _V50_V0vanity_V0hash__table_V0validate__robinhood__impl_V10_Dloop_D1_D278_V0k75(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0hash__table_V0validate__robinhood__impl_V10_Dloop_D1_D278_V0k75, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.x.700 1 0) (basic-block 1 1 (##.%r.714) (((##basic-intrinsic "VWaybillAddress") (bruijn ##.x.700 2 0))) ((bruijn ##.%k.500 1 0) (bruijn ##.%r.714 0 0))) ((bruijn ##.%k.500 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VWaybillAddress(runtime, NULL,
      statics->up->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0hash__table_V0validate__robinhood__impl_V10_Dloop_D1_D278_V0k77(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0hash__table_V0validate__robinhood__impl_V10_Dloop_D1_D278_V0k77, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.x.700 2 0) (##qualified-call (vanity hash-table hash-slot) #t (bruijn ##.hash-slot.113 11 24) (bruijn ##.%k.499 0 0) (bruijn ##.ihash.282 1 0) (bruijn ##.capacity.275 8 1)) ((bruijn ##.%k.499 0 0) #f))
if(VDecodeBool(
statics->up->vars[0])) {
  {
   VEnv * _closure_env = _V60_V0vanity_V0hash__table;
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      statics->vars[0];
    VWORD _arg2 = 
      VGetArg(statics, 8-1, 1);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0hash__table_V0hash__slot, _V60_V0vanity_V0hash__table)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0hash__table_V0hash__slot(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0hash__table_V0validate__robinhood__impl_V10_Dloop_D1_D278_V0k79(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0hash__table_V0validate__robinhood__impl_V10_Dloop_D1_D278_V0k79, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.x.700 3 0) (##qualified-call (vanity hash-table hash-poverty) #t (bruijn ##.hash-poverty.112 12 23) (bruijn ##.%k.498 0 0) (bruijn ##.ihash.282 2 0) (bruijn ##.idx.280 5 2) (bruijn ##.capacity.275 9 1)) ((bruijn ##.%k.498 0 0) #f))
if(VDecodeBool(
statics->up->up->vars[0])) {
  {
   VEnv * _closure_env = _V60_V0vanity_V0hash__table;
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      statics->up->vars[0];
    VWORD _arg2 = 
      VGetArg(statics, 5-1, 2);
    VWORD _arg3 = 
      VGetArg(statics, 9-1, 1);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0hash__table_V0hash__poverty, _V60_V0vanity_V0hash__table)}, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0hash__table_V0hash__poverty(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0hash__table_V0validate__robinhood__impl_V10_Dloop_D1_D278_V0k81(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0hash__table_V0validate__robinhood__impl_V10_Dloop_D1_D278_V0k81, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.ipoverty.284 1 0) (basic-block 2 2 (##.%x.712 ##.%r.713) ((##vcore.quotient (bruijn ##.capacity.275 11 1) 2) (##vcore.>= (bruijn ##.ipoverty.284 2 0) (bruijn ##.%x.712 0 0))) ((bruijn ##.%k.496 1 0) (bruijn ##.%r.713 0 1))) ((bruijn ##.%k.496 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VQuot2(runtime, NULL,
      VGetArg(statics, 11-1, 1),
      VEncodeInt(2l));
    self->vars[1] = _VBasic_VCmpGe(runtime, NULL,
      statics->up->vars[0],
      self->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      self->vars[1]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0hash__table_V0validate__robinhood__impl_V10_Dloop_D1_D278_V0k83(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0hash__table_V0validate__robinhood__impl_V10_Dloop_D1_D278_V0k83, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.12.285 1 0) ((bruijn ##.error.51 15 1) (bruijn ##.%k.495 0 0) (##string ##.string.769) (bruijn ##.ipoverty.284 2 0)) ((bruijn ##.%k.495 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 1)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D769.sym, VPOINTER_OTHER),
      statics->up->vars[0]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0hash__table_V0validate__robinhood__impl_V10_Dloop_D1_D278_V10_Dloop_D14_D288_V0k87(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0hash__table_V0validate__robinhood__impl_V10_Dloop_D1_D278_V10_Dloop_D14_D288_V0k87, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.y.706 1 0) (basic-block 1 1 (##.%r.711) (((##basic-intrinsic "VWaybillAddress") (bruijn ##.y.706 2 0))) ((bruijn ##.%k.492 1 0) (bruijn ##.%r.711 0 0))) ((bruijn ##.%k.492 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VWaybillAddress(runtime, NULL,
      statics->up->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0hash__table_V0validate__robinhood__impl_V10_Dloop_D1_D278_V10_Dloop_D14_D288_V0k89(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0hash__table_V0validate__robinhood__impl_V10_Dloop_D1_D278_V10_Dloop_D14_D288_V0k89, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.y.706 2 0) (##qualified-call (vanity hash-table hash-slot) #t (bruijn ##.hash-slot.113 23 24) (bruijn ##.%k.491 0 0) (bruijn ##.jhash.292 1 0) (bruijn ##.capacity.275 20 1)) ((bruijn ##.%k.491 0 0) #f))
if(VDecodeBool(
statics->up->vars[0])) {
  {
   VEnv * _closure_env = _V60_V0vanity_V0hash__table;
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      statics->vars[0];
    VWORD _arg2 = 
      VGetArg(statics, 20-1, 1);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0hash__table_V0hash__slot, _V60_V0vanity_V0hash__table)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0hash__table_V0hash__slot(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0hash__table_V0validate__robinhood__impl_V10_Dloop_D1_D278_V10_Dloop_D14_D288_V0k91(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0hash__table_V0validate__robinhood__impl_V10_Dloop_D1_D278_V10_Dloop_D14_D288_V0k91, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.y.706 3 0) (##qualified-call (vanity hash-table hash-poverty) #t (bruijn ##.hash-poverty.112 24 23) (bruijn ##.%k.490 0 0) (bruijn ##.jhash.292 2 0) (bruijn ##.jdx.290 4 0) (bruijn ##.capacity.275 21 1)) ((bruijn ##.%k.490 0 0) #f))
if(VDecodeBool(
statics->up->up->vars[0])) {
  {
   VEnv * _closure_env = _V60_V0vanity_V0hash__table;
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      statics->up->vars[0];
    VWORD _arg2 = 
      statics->up->up->up->vars[0];
    VWORD _arg3 = 
      VGetArg(statics, 21-1, 1);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0hash__table_V0hash__poverty, _V60_V0vanity_V0hash__table)}, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0hash__table_V0hash__poverty(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0hash__table_V0validate__robinhood__impl_V10_Dloop_D1_D278_V10_Dloop_D14_D288_V0k93(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0hash__table_V0validate__robinhood__impl_V10_Dloop_D1_D278_V10_Dloop_D14_D288_V0k93, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.jpoverty.294 1 0) (basic-block 2 2 (##.%x.709 ##.%r.710) ((##vcore.quotient (bruijn ##.capacity.275 23 1) 2) (##vcore.>= (bruijn ##.jpoverty.294 2 0) (bruijn ##.%x.709 0 0))) ((bruijn ##.%k.488 1 0) (bruijn ##.%r.710 0 1))) ((bruijn ##.%k.488 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VQuot2(runtime, NULL,
      VGetArg(statics, 23-1, 1),
      VEncodeInt(2l));
    self->vars[1] = _VBasic_VCmpGe(runtime, NULL,
      statics->up->vars[0],
      self->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      self->vars[1]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0hash__table_V0validate__robinhood__impl_V10_Dloop_D1_D278_V10_Dloop_D14_D288_V0k95(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0hash__table_V0validate__robinhood__impl_V10_Dloop_D1_D278_V10_Dloop_D14_D288_V0k95, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.23.295 1 0) ((bruijn ##.error.51 27 1) (bruijn ##.%k.487 0 0) (##string ##.string.769) (bruijn ##.jpoverty.294 2 0)) ((bruijn ##.%k.487 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 27-1, 1)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D769.sym, VPOINTER_OTHER),
      statics->up->vars[0]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0hash__table_V0validate__robinhood__impl_V10_Dloop_D1_D278_V10_Dloop_D14_D288_V0k98(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0hash__table_V0validate__robinhood__impl_V10_Dloop_D1_D278_V10_Dloop_D14_D288_V0k98, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.displayln.52 29 2) (bruijn ##.%k.485 1 0) (bruijn ##.%x.486 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 29-1, 2)), 2,
      statics->vars[0],
      _var0);
}
void _V50_V0vanity_V0hash__table_V0validate__robinhood__impl_V10_Dloop_D1_D278_V10_Dloop_D14_D288_V0k97(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0hash__table_V0validate__robinhood__impl_V10_Dloop_D1_D278_V10_Dloop_D14_D288_V0k97, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.24.707 1 0) (##qualified-call (vanity hash-table hash-table-keyvector) #t (bruijn ##.hash-table-keyvector.108 27 19) (close _V50_V0vanity_V0hash__table_V0validate__robinhood__impl_V10_Dloop_D1_D278_V10_Dloop_D14_D288_V0k98) (bruijn ##.ht.273 26 2)) ((bruijn ##.%k.485 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
  {
   VEnv * _closure_env = _V60_V0vanity_V0hash__table;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hash__table_V0validate__robinhood__impl_V10_Dloop_D1_D278_V10_Dloop_D14_D288_V0k98, self))));
    VWORD _arg1 = 
      VGetArg(statics, 26-1, 2);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0hash__table_V0hash__table__keyvector, _V60_V0vanity_V0hash__table)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0hash__table_V0hash__table__keyvector(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0hash__table_V0validate__robinhood__impl_V10_Dloop_D1_D278_V10_Dloop_D14_D288_V0k100(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0hash__table_V0validate__robinhood__impl_V10_Dloop_D1_D278_V10_Dloop_D14_D288_V0k100, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.24.707 1 0) ((bruijn ##.error.51 28 1) (bruijn ##.%k.484 0 0) (##string ##.string.770) (bruijn ##.what-we-did.272 26 1) (bruijn ##.idx.280 20 2) (bruijn ##.ipoverty.284 15 0) (bruijn ##.jdx.290 7 0)) ((bruijn ##.%k.484 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 28-1, 1)), 6,
      _var0,
      VEncodePointer(&_V10_Dstring_D770.sym, VPOINTER_OTHER),
      VGetArg(statics, 26-1, 1),
      VGetArg(statics, 20-1, 2),
      VGetArg(statics, 15-1, 0),
      VGetArg(statics, 7-1, 0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0hash__table_V0validate__robinhood__impl_V10_Dloop_D1_D278_V10_Dloop_D14_D288_V0k104(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0hash__table_V0validate__robinhood__impl_V10_Dloop_D1_D278_V10_Dloop_D14_D288_V0k104, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.displayln.52 30 2) (bruijn ##.%k.482 1 0) (bruijn ##.%x.483 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 30-1, 2)), 2,
      statics->vars[0],
      _var0);
}
void _V50_V0vanity_V0hash__table_V0validate__robinhood__impl_V10_Dloop_D1_D278_V10_Dloop_D14_D288_V0k103(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0hash__table_V0validate__robinhood__impl_V10_Dloop_D1_D278_V10_Dloop_D14_D288_V0k103, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.25.297 1 0) (##qualified-call (vanity hash-table hash-table-keyvector) #t (bruijn ##.hash-table-keyvector.108 28 19) (close _V50_V0vanity_V0hash__table_V0validate__robinhood__impl_V10_Dloop_D1_D278_V10_Dloop_D14_D288_V0k104) (bruijn ##.ht.273 27 2)) ((bruijn ##.%k.482 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
  {
   VEnv * _closure_env = _V60_V0vanity_V0hash__table;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hash__table_V0validate__robinhood__impl_V10_Dloop_D1_D278_V10_Dloop_D14_D288_V0k104, self))));
    VWORD _arg1 = 
      VGetArg(statics, 27-1, 2);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0hash__table_V0hash__table__keyvector, _V60_V0vanity_V0hash__table)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0hash__table_V0hash__table__keyvector(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0hash__table_V0validate__robinhood__impl_V10_Dloop_D1_D278_V10_Dloop_D14_D288_V0k106(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0hash__table_V0validate__robinhood__impl_V10_Dloop_D1_D278_V10_Dloop_D14_D288_V0k106, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.25.297 1 0) ((bruijn ##.error.51 29 1) (bruijn ##.%k.481 0 0) (##string ##.string.771) (bruijn ##.what-we-did.272 27 1) (bruijn ##.idx.280 21 2) (bruijn ##.ipoverty.284 16 0) (bruijn ##.jdx.290 8 0) (bruijn ##.jpoverty.294 4 0)) ((bruijn ##.%k.481 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 29-1, 1)), 7,
      _var0,
      VEncodePointer(&_V10_Dstring_D771.sym, VPOINTER_OTHER),
      VGetArg(statics, 27-1, 1),
      VGetArg(statics, 21-1, 2),
      VGetArg(statics, 16-1, 0),
      VGetArg(statics, 8-1, 0),
      statics->up->up->up->vars[0]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V50_V0vanity_V0hash__table_V0validate__robinhood__impl_V10_Dloop_D1_D278_V10_Dloop_D14_D288_V0k107(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%x.708) ((##vcore.+ (bruijn ##.j.289 11 1) 1)) (##qualified-call (vanity hash-table validate-robinhood-impl ##.loop.1.278 ##.loop.14.288) #f (bruijn ##.loop.14.288 12 0) (bruijn ##.%k.478 11 0) (bruijn ##.%x.708 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      VGetArg(statics, 11-1, 1),
      VEncodeInt(1l));
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 12-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      VGetArg(statics, 11-1, 0);
    VWORD _arg1 = 
      self->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0hash__table_V0validate__robinhood__impl_V10_Dloop_D1_D278_V10_Dloop_D14_D288(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
}
static void _V50_V0vanity_V0hash__table_V0validate__robinhood__impl_V10_Dloop_D1_D278_V10_Dloop_D14_D288_V0k105(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((close _V50_V0vanity_V0hash__table_V0validate__robinhood__impl_V10_Dloop_D1_D278_V10_Dloop_D14_D288_V0k106) (close _V50_V0vanity_V0hash__table_V0validate__robinhood__impl_V10_Dloop_D1_D278_V10_Dloop_D14_D288_V0k107))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hash__table_V0validate__robinhood__impl_V10_Dloop_D1_D278_V10_Dloop_D14_D288_V0k106, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hash__table_V0validate__robinhood__impl_V10_Dloop_D1_D278_V10_Dloop_D14_D288_V0k107, self)))));
}
void _V50_V0vanity_V0hash__table_V0validate__robinhood__impl_V10_Dloop_D1_D278_V10_Dloop_D14_D288_V0k102(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0hash__table_V0validate__robinhood__impl_V10_Dloop_D1_D278_V10_Dloop_D14_D288_V0k102, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0hash__table_V0validate__robinhood__impl_V10_Dloop_D1_D278_V10_Dloop_D14_D288_V0k103) (close _V50_V0vanity_V0hash__table_V0validate__robinhood__impl_V10_Dloop_D1_D278_V10_Dloop_D14_D288_V0k105))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hash__table_V0validate__robinhood__impl_V10_Dloop_D1_D278_V10_Dloop_D14_D288_V0k103, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hash__table_V0validate__robinhood__impl_V10_Dloop_D1_D278_V10_Dloop_D14_D288_V0k105, self)))));
}
static void _V50_V0vanity_V0hash__table_V0validate__robinhood__impl_V10_Dloop_D1_D278_V10_Dloop_D14_D288_V0k101(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##qualified-call (vanity hash-table sequence>) #t (bruijn ##.sequence>.109 26 20) (close _V50_V0vanity_V0hash__table_V0validate__robinhood__impl_V10_Dloop_D1_D278_V10_Dloop_D14_D288_V0k102) (bruijn ##.jslot.293 3 0) (bruijn ##.islot.283 15 0) (bruijn ##.capacity.275 23 1))
  {
   VEnv * _closure_env = _V60_V0vanity_V0hash__table;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hash__table_V0validate__robinhood__impl_V10_Dloop_D1_D278_V10_Dloop_D14_D288_V0k102, self))));
    VWORD _arg1 = 
      statics->up->up->vars[0];
    VWORD _arg2 = 
      VGetArg(statics, 15-1, 0);
    VWORD _arg3 = 
      VGetArg(statics, 23-1, 1);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0hash__table_V0sequence_G, _V60_V0vanity_V0hash__table)}, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0hash__table_V0sequence_G(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
static void _V50_V0vanity_V0hash__table_V0validate__robinhood__impl_V10_Dloop_D1_D278_V10_Dloop_D14_D288_V0k99(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((close _V50_V0vanity_V0hash__table_V0validate__robinhood__impl_V10_Dloop_D1_D278_V10_Dloop_D14_D288_V0k100) (close _V50_V0vanity_V0hash__table_V0validate__robinhood__impl_V10_Dloop_D1_D278_V10_Dloop_D14_D288_V0k101))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hash__table_V0validate__robinhood__impl_V10_Dloop_D1_D278_V10_Dloop_D14_D288_V0k100, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hash__table_V0validate__robinhood__impl_V10_Dloop_D1_D278_V10_Dloop_D14_D288_V0k101, self)))));
}
static void _V50_V0vanity_V0hash__table_V0validate__robinhood__impl_V10_Dloop_D1_D278_V10_Dloop_D14_D288_V0k96(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.p.24.707) ((##vcore.not (bruijn ##.y.706 5 0))) ((close _V50_V0vanity_V0hash__table_V0validate__robinhood__impl_V10_Dloop_D1_D278_V10_Dloop_D14_D288_V0k97) (close _V50_V0vanity_V0hash__table_V0validate__robinhood__impl_V10_Dloop_D1_D278_V10_Dloop_D14_D288_V0k99)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VNot2(runtime, NULL,
      VGetArg(statics, 5-1, 0));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hash__table_V0validate__robinhood__impl_V10_Dloop_D1_D278_V10_Dloop_D14_D288_V0k97, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hash__table_V0validate__robinhood__impl_V10_Dloop_D1_D278_V10_Dloop_D14_D288_V0k99, self)))));
    }
}
void _V50_V0vanity_V0hash__table_V0validate__robinhood__impl_V10_Dloop_D1_D278_V10_Dloop_D14_D288_V0k94(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0hash__table_V0validate__robinhood__impl_V10_Dloop_D1_D278_V10_Dloop_D14_D288_V0k94, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0hash__table_V0validate__robinhood__impl_V10_Dloop_D1_D278_V10_Dloop_D14_D288_V0k95) (close _V50_V0vanity_V0hash__table_V0validate__robinhood__impl_V10_Dloop_D1_D278_V10_Dloop_D14_D288_V0k96))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hash__table_V0validate__robinhood__impl_V10_Dloop_D1_D278_V10_Dloop_D14_D288_V0k95, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hash__table_V0validate__robinhood__impl_V10_Dloop_D1_D278_V10_Dloop_D14_D288_V0k96, self)))));
}
void _V50_V0vanity_V0hash__table_V0validate__robinhood__impl_V10_Dloop_D1_D278_V10_Dloop_D14_D288_V0k92(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0hash__table_V0validate__robinhood__impl_V10_Dloop_D1_D278_V10_Dloop_D14_D288_V0k92, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0hash__table_V0validate__robinhood__impl_V10_Dloop_D1_D278_V10_Dloop_D14_D288_V0k93) (close _V50_V0vanity_V0hash__table_V0validate__robinhood__impl_V10_Dloop_D1_D278_V10_Dloop_D14_D288_V0k94))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hash__table_V0validate__robinhood__impl_V10_Dloop_D1_D278_V10_Dloop_D14_D288_V0k93, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hash__table_V0validate__robinhood__impl_V10_Dloop_D1_D278_V10_Dloop_D14_D288_V0k94, self)))));
}
void _V50_V0vanity_V0hash__table_V0validate__robinhood__impl_V10_Dloop_D1_D278_V10_Dloop_D14_D288_V0k90(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0hash__table_V0validate__robinhood__impl_V10_Dloop_D1_D278_V10_Dloop_D14_D288_V0k90, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0hash__table_V0validate__robinhood__impl_V10_Dloop_D1_D278_V10_Dloop_D14_D288_V0k91) (close _V50_V0vanity_V0hash__table_V0validate__robinhood__impl_V10_Dloop_D1_D278_V10_Dloop_D14_D288_V0k92))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hash__table_V0validate__robinhood__impl_V10_Dloop_D1_D278_V10_Dloop_D14_D288_V0k91, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hash__table_V0validate__robinhood__impl_V10_Dloop_D1_D278_V10_Dloop_D14_D288_V0k92, self)))));
}
void _V50_V0vanity_V0hash__table_V0validate__robinhood__impl_V10_Dloop_D1_D278_V10_Dloop_D14_D288_V0k88(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0hash__table_V0validate__robinhood__impl_V10_Dloop_D1_D278_V10_Dloop_D14_D288_V0k88, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0hash__table_V0validate__robinhood__impl_V10_Dloop_D1_D278_V10_Dloop_D14_D288_V0k89) (close _V50_V0vanity_V0hash__table_V0validate__robinhood__impl_V10_Dloop_D1_D278_V10_Dloop_D14_D288_V0k90))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hash__table_V0validate__robinhood__impl_V10_Dloop_D1_D278_V10_Dloop_D14_D288_V0k89, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hash__table_V0validate__robinhood__impl_V10_Dloop_D1_D278_V10_Dloop_D14_D288_V0k90, self)))));
}
void _V50_V0vanity_V0hash__table_V0validate__robinhood__impl_V10_Dloop_D1_D278_V10_Dloop_D14_D288_V0k86(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0hash__table_V0validate__robinhood__impl_V10_Dloop_D1_D278_V10_Dloop_D14_D288_V0k86, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.y.706) ((##vcore.vector-ref (bruijn ##.vec.274 18 0) (bruijn ##.jdx.290 1 0))) ((close _V50_V0vanity_V0hash__table_V0validate__robinhood__impl_V10_Dloop_D1_D278_V10_Dloop_D14_D288_V0k87) (close _V50_V0vanity_V0hash__table_V0validate__robinhood__impl_V10_Dloop_D1_D278_V10_Dloop_D14_D288_V0k88)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VVectorRef2(runtime, NULL,
      VGetArg(statics, 18-1, 0),
      statics->vars[0]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hash__table_V0validate__robinhood__impl_V10_Dloop_D1_D278_V10_Dloop_D14_D288_V0k87, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hash__table_V0validate__robinhood__impl_V10_Dloop_D1_D278_V10_Dloop_D14_D288_V0k88, self)))));
    }
}
void _V50_V0vanity_V0hash__table_V0validate__robinhood__impl_V10_Dloop_D1_D278_V10_Dloop_D14_D288(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0hash__table_V0validate__robinhood__impl_V10_Dloop_D1_D278_V10_Dloop_D14_D288, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.%p.703) ((##vcore.<= (bruijn ##.j.289 1 1) (bruijn ##.ipoverty.284 6 0))) (if (bruijn ##.%p.703 0 0) (basic-block 2 2 (##.%x.704 ##.%x.705) ((##vcore.- (bruijn ##.idx.280 12 2) (bruijn ##.j.289 2 1)) (##vcore.- (bruijn ##.capacity.275 16 1) 1)) ((bruijn ##.bitwise-and.50 20 0) (close _V50_V0vanity_V0hash__table_V0validate__robinhood__impl_V10_Dloop_D1_D278_V10_Dloop_D14_D288_V0k86) (bruijn ##.%x.704 0 0) (bruijn ##.%x.705 0 1))) (##qualified-call (vanity hash-table validate-robinhood-impl ##.loop.1.278 ##.finalize.15.287) #f (bruijn ##.finalize.15.287 3 0) (bruijn ##.%k.478 1 0))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCmpLe(runtime, NULL,
      statics->vars[1],
      VGetArg(statics, 6-1, 0));
if(VDecodeBool(
self->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VSub2(runtime, NULL,
      VGetArg(statics, 12-1, 2),
      statics->up->vars[1]);
    self->vars[1] = _VBasic_VSub2(runtime, NULL,
      VGetArg(statics, 16-1, 1),
      VEncodeInt(1l));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 20-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hash__table_V0validate__robinhood__impl_V10_Dloop_D1_D278_V10_Dloop_D14_D288_V0k86, self)))),
      self->vars[0],
      self->vars[1]);
    }
} else {
  {
    VClosure * _closure = VDecodeClosure(statics->up->up->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 1, _arg0);
    } else {
       _V50_V0vanity_V0hash__table_V0validate__robinhood__impl_V10_Dloop_D1_D278_V10_Dfinalize_D15_D287(runtime, _closure_env, 1, _arg0);
    }
  }
}
    }
}
void _V50_V0vanity_V0hash__table_V0validate__robinhood__impl_V10_Dloop_D1_D278_V0lambda14(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (letrec 1 ((close "_V50_V0vanity_V0hash__table_V0validate__robinhood__impl_V10_Dloop_D1_D278_V10_Dloop_D14_D288")) (##qualified-call (vanity hash-table validate-robinhood-impl ##.loop.1.278 ##.loop.14.288) #f (bruijn ##.loop.14.288 0 0) (bruijn ##.%k.476 2 0) 1))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hash__table_V0validate__robinhood__impl_V10_Dloop_D1_D278_V10_Dloop_D14_D288, self))));
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->up->vars[0];
    VWORD _arg1 = 
      VEncodeInt(1l);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0hash__table_V0validate__robinhood__impl_V10_Dloop_D1_D278_V10_Dloop_D14_D288(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
}
void _V50_V0vanity_V0hash__table_V0validate__robinhood__impl_V10_Dloop_D1_D278_V10_Dfinalize_D15_D287(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0hash__table_V0validate__robinhood__impl_V10_Dloop_D1_D278_V10_Dfinalize_D15_D287, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%k.477 0 0) #void)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VVOID);
}
void _V50_V0vanity_V0hash__table_V0validate__robinhood__impl_V10_Dloop_D1_D278_V0k85(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0hash__table_V0validate__robinhood__impl_V10_Dloop_D1_D278_V0k85, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.x.700 5 0) ((close _V50_V0vanity_V0hash__table_V0validate__robinhood__impl_V10_Dloop_D1_D278_V0lambda14) (close "_V50_V0vanity_V0hash__table_V0validate__robinhood__impl_V10_Dloop_D1_D278_V10_Dfinalize_D15_D287")) ((bruijn ##.%k.476 0 0) #f))
if(VDecodeBool(
VGetArg(statics, 5-1, 0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hash__table_V0validate__robinhood__impl_V10_Dloop_D1_D278_V0lambda14, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hash__table_V0validate__robinhood__impl_V10_Dloop_D1_D278_V10_Dfinalize_D15_D287, self)))));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V50_V0vanity_V0hash__table_V0validate__robinhood__impl_V10_Dloop_D1_D278_V0k108(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 2 2 (##.%x.701 ##.%x.702) ((##vcore.+ (bruijn ##.i.11.279 7 1) 1) (##vcore.+ (bruijn ##.idx.280 7 2) 1)) (##qualified-call (vanity hash-table validate-robinhood-impl ##.loop.1.278) #f (bruijn ##.loop.1.278 8 0) (bruijn ##.%k.472 7 0) (bruijn ##.%x.701 0 0) (bruijn ##.%x.702 0 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      VGetArg(statics, 7-1, 1),
      VEncodeInt(1l));
    self->vars[1] = _VBasic_VAdd2(runtime, NULL,
      VGetArg(statics, 7-1, 2),
      VEncodeInt(1l));
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 8-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      VGetArg(statics, 7-1, 0);
    VWORD _arg1 = 
      self->vars[0];
    VWORD _arg2 = 
      self->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0hash__table_V0validate__robinhood__impl_V10_Dloop_D1_D278(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
static void _V50_V0vanity_V0hash__table_V0validate__robinhood__impl_V10_Dloop_D1_D278_V0k84(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((close _V50_V0vanity_V0hash__table_V0validate__robinhood__impl_V10_Dloop_D1_D278_V0k85) (close _V50_V0vanity_V0hash__table_V0validate__robinhood__impl_V10_Dloop_D1_D278_V0k108))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hash__table_V0validate__robinhood__impl_V10_Dloop_D1_D278_V0k85, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hash__table_V0validate__robinhood__impl_V10_Dloop_D1_D278_V0k108, self)))));
}
void _V50_V0vanity_V0hash__table_V0validate__robinhood__impl_V10_Dloop_D1_D278_V0k82(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0hash__table_V0validate__robinhood__impl_V10_Dloop_D1_D278_V0k82, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0hash__table_V0validate__robinhood__impl_V10_Dloop_D1_D278_V0k83) (close _V50_V0vanity_V0hash__table_V0validate__robinhood__impl_V10_Dloop_D1_D278_V0k84))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hash__table_V0validate__robinhood__impl_V10_Dloop_D1_D278_V0k83, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hash__table_V0validate__robinhood__impl_V10_Dloop_D1_D278_V0k84, self)))));
}
void _V50_V0vanity_V0hash__table_V0validate__robinhood__impl_V10_Dloop_D1_D278_V0k80(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0hash__table_V0validate__robinhood__impl_V10_Dloop_D1_D278_V0k80, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0hash__table_V0validate__robinhood__impl_V10_Dloop_D1_D278_V0k81) (close _V50_V0vanity_V0hash__table_V0validate__robinhood__impl_V10_Dloop_D1_D278_V0k82))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hash__table_V0validate__robinhood__impl_V10_Dloop_D1_D278_V0k81, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hash__table_V0validate__robinhood__impl_V10_Dloop_D1_D278_V0k82, self)))));
}
void _V50_V0vanity_V0hash__table_V0validate__robinhood__impl_V10_Dloop_D1_D278_V0k78(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0hash__table_V0validate__robinhood__impl_V10_Dloop_D1_D278_V0k78, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0hash__table_V0validate__robinhood__impl_V10_Dloop_D1_D278_V0k79) (close _V50_V0vanity_V0hash__table_V0validate__robinhood__impl_V10_Dloop_D1_D278_V0k80))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hash__table_V0validate__robinhood__impl_V10_Dloop_D1_D278_V0k79, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hash__table_V0validate__robinhood__impl_V10_Dloop_D1_D278_V0k80, self)))));
}
void _V50_V0vanity_V0hash__table_V0validate__robinhood__impl_V10_Dloop_D1_D278_V0k76(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0hash__table_V0validate__robinhood__impl_V10_Dloop_D1_D278_V0k76, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0hash__table_V0validate__robinhood__impl_V10_Dloop_D1_D278_V0k77) (close _V50_V0vanity_V0hash__table_V0validate__robinhood__impl_V10_Dloop_D1_D278_V0k78))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hash__table_V0validate__robinhood__impl_V10_Dloop_D1_D278_V0k77, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hash__table_V0validate__robinhood__impl_V10_Dloop_D1_D278_V0k78, self)))));
}
void _V50_V0vanity_V0hash__table_V0validate__robinhood__impl_V10_Dloop_D1_D278(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0hash__table_V0validate__robinhood__impl_V10_Dloop_D1_D278, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 2 2 (##.%x.698 ##.%p.699) ((##vcore.vector-length (bruijn ##.vec.274 5 0)) (##vcore.< (bruijn ##.i.11.279 1 1) (bruijn ##.%x.698 0 0))) (if (bruijn ##.%p.699 0 1) (basic-block 1 1 (##.x.700) ((##vcore.vector-ref (bruijn ##.vec.274 6 0) (bruijn ##.i.11.279 2 1))) ((close _V50_V0vanity_V0hash__table_V0validate__robinhood__impl_V10_Dloop_D1_D278_V0k75) (close _V50_V0vanity_V0hash__table_V0validate__robinhood__impl_V10_Dloop_D1_D278_V0k76))) (##qualified-call (vanity hash-table validate-robinhood-impl ##.finalize.2.277) #f (bruijn ##.finalize.2.277 3 0) (bruijn ##.%k.472 1 0))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VVectorLength2(runtime, NULL,
      VGetArg(statics, 5-1, 0));
    self->vars[1] = _VBasic_VCmpLt(runtime, NULL,
      statics->vars[1],
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VVectorRef2(runtime, NULL,
      VGetArg(statics, 6-1, 0),
      statics->up->vars[1]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hash__table_V0validate__robinhood__impl_V10_Dloop_D1_D278_V0k75, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hash__table_V0validate__robinhood__impl_V10_Dloop_D1_D278_V0k76, self)))));
    }
} else {
  {
    VClosure * _closure = VDecodeClosure(statics->up->up->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 1, _arg0);
    } else {
       _V50_V0vanity_V0hash__table_V0validate__robinhood__impl_V10_Dfinalize_D2_D277(runtime, _closure_env, 1, _arg0);
    }
  }
}
    }
}
void _V50_V0vanity_V0hash__table_V0validate__robinhood__impl_V0lambda13(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (letrec 1 ((close "_V50_V0vanity_V0hash__table_V0validate__robinhood__impl_V10_Dloop_D1_D278")) (##qualified-call (vanity hash-table validate-robinhood-impl ##.loop.1.278) #f (bruijn ##.loop.1.278 0 0) (bruijn ##.%k.469 5 0) 0 0))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hash__table_V0validate__robinhood__impl_V10_Dloop_D1_D278, self))));
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      VGetArg(statics, 5-1, 0);
    VWORD _arg1 = 
      VEncodeInt(0l);
    VWORD _arg2 = 
      VEncodeInt(0l);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0hash__table_V0validate__robinhood__impl_V10_Dloop_D1_D278(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
void _V50_V0vanity_V0hash__table_V0validate__robinhood__impl_V10_Dfinalize_D2_D277(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0hash__table_V0validate__robinhood__impl_V10_Dfinalize_D2_D277, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%k.471 0 0) #void)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VVOID);
}
static void _V50_V0vanity_V0hash__table_V0validate__robinhood__impl_V0k74(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((close _V50_V0vanity_V0hash__table_V0validate__robinhood__impl_V0lambda13) (close "_V50_V0vanity_V0hash__table_V0validate__robinhood__impl_V10_Dfinalize_D2_D277"))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hash__table_V0validate__robinhood__impl_V0lambda13, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hash__table_V0validate__robinhood__impl_V10_Dfinalize_D2_D277, self)))));
}
void _V50_V0vanity_V0hash__table_V0validate__robinhood__impl(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0hash__table_V0validate__robinhood__impl, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 1 1 (##.%x.696) (((##basic-intrinsic "VHashTableSlot") (bruijn ##.ht.273 1 2) 3)) (letrec 2 ((bruijn ##.%x.696 1 0) #f) (basic-block 1 1 (##.%x.697) ((##vcore.vector-length (bruijn ##.vec.274 1 0))) (set! (close _V50_V0vanity_V0hash__table_V0validate__robinhood__impl_V0k74) (bruijn ##.capacity.275 1 1) (bruijn ##.%x.697 0 0)))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VHashTableSlot(runtime, NULL,
      statics->vars[2],
      VEncodeInt(3l));
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = statics->vars[0];
    self->vars[1] = VEncodeBool(false);
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VVectorLength2(runtime, NULL,
      statics->vars[0]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hash__table_V0validate__robinhood__impl_V0k74, self)))),
      VEncodeInt(1l), VEncodeInt(1l),
      self->vars[0]
    );
    }
    }
    }
}
void _V50_V0vanity_V0hash__table_V0hash__table__keyvector_V0lambda16(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0hash__table_V0hash__table__keyvector_V0lambda16, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  // ((bruijn ##.%k.504 1 0) (bruijn ##.k.301 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      _var1);
}
void _V50_V0vanity_V0hash__table_V0hash__table__keyvector_V0lambda15(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0hash__table_V0hash__table__keyvector_V0lambda15, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (if (bruijn ##.waybill.299 0 1) ((##intrinsic "VWaybillUnpack") (close _V50_V0vanity_V0hash__table_V0hash__table__keyvector_V0lambda16) (bruijn ##.waybill.299 0 1)) ((bruijn ##.%k.504 0 0) #void))
if(VDecodeBool(
_var1)) {
    VCallFuncWithGC(runtime, (VFunc)VWaybillUnpack, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hash__table_V0hash__table__keyvector_V0lambda16, self)))),
      _var1);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VVOID);
}
}
void _V50_V0vanity_V0hash__table_V0hash__table__keyvector(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0hash__table_V0hash__table__keyvector, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.%x.715) (((##basic-intrinsic "VHashTableSlot") (bruijn ##.ht.298 1 1) 3)) ((bruijn ##.vector-map.53 3 3) (bruijn ##.%k.503 1 0) (close _V50_V0vanity_V0hash__table_V0hash__table__keyvector_V0lambda15) (bruijn ##.%x.715 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VHashTableSlot(runtime, NULL,
      statics->vars[1],
      VEncodeInt(3l));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[3]), 3,
      statics->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hash__table_V0hash__table__keyvector_V0lambda15, self)))),
      self->vars[0]);
    }
}
void _V50_V0vanity_V0hash__table_V0sequence_G(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0hash__table_V0sequence_G, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
  // (##qualified-call (vanity hash-table sequence<) #t (bruijn ##.sequence<.110 1 21) (bruijn ##.%k.506 0 0) (bruijn ##.b.304 0 2) (bruijn ##.a.303 0 1) (bruijn ##.capacity.305 0 3))
  {
   VEnv * _closure_env = _V60_V0vanity_V0hash__table;
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      _var2;
    VWORD _arg2 = 
      _var1;
    VWORD _arg3 = 
      _var3;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0hash__table_V0sequence_L, _V60_V0vanity_V0hash__table)}, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0hash__table_V0sequence_L(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0hash__table_V0sequence_L_V0k109(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0hash__table_V0sequence_L_V0k109, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 2 2 (##.%x.718 ##.%r.719) ((##vcore.quotient (bruijn ##.capacity.308 3 3) 2) (##vcore.< 0 (bruijn ##.%x.508 1 0) (bruijn ##.%x.718 0 0))) ((bruijn ##.%k.507 3 0) (bruijn ##.%r.719 0 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VQuot2(runtime, NULL,
      statics->up->up->vars[3],
      VEncodeInt(2l));
    self->vars[1] = _VBasic_VCmpLt(runtime, NULL,
      VEncodeInt(0l),
      statics->vars[0],
      self->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      self->vars[1]);
    }
}
void _V50_V0vanity_V0hash__table_V0sequence_L(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0hash__table_V0sequence_L, got ~D~N"
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
  // (basic-block 2 2 (##.%x.716 ##.%x.717) ((##vcore.- (bruijn ##.b.307 1 2) (bruijn ##.a.306 1 1)) (##vcore.- (bruijn ##.capacity.308 1 3) 1)) ((bruijn ##.bitwise-and.50 3 0) (close _V50_V0vanity_V0hash__table_V0sequence_L_V0k109) (bruijn ##.%x.716 0 0) (bruijn ##.%x.717 0 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VSub2(runtime, NULL,
      statics->vars[2],
      statics->vars[1]);
    self->vars[1] = _VBasic_VSub2(runtime, NULL,
      statics->vars[3],
      VEncodeInt(1l));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hash__table_V0sequence_L_V0k109, self)))),
      self->vars[0],
      self->vars[1]);
    }
}
void _V50_V0vanity_V0hash__table_V0waybill__key__matches_Q_V0lambda17(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0hash__table_V0waybill__key__matches_Q_V0lambda17, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 1 1 (##.%p.720) ((##vcore.not (bruijn ##.wb-broken?.311 1 0))) (if (bruijn ##.%p.720 0 0) (basic-block 1 1 (##.%r.721) ((##vcore.eq? (bruijn ##.wb-key.312 2 1) (bruijn ##.key.310 3 2))) ((bruijn ##.%k.512 3 0) (bruijn ##.%r.721 0 0))) ((bruijn ##.%k.512 2 0) #f)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VNot2(runtime, NULL,
      statics->vars[0]);
if(VDecodeBool(
self->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      statics->up->vars[1],
      statics->up->up->vars[2]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
}
void _V50_V0vanity_V0hash__table_V0waybill__key__matches_Q(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0hash__table_V0waybill__key__matches_Q, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((##intrinsic "VWaybillUnpack") (close _V50_V0vanity_V0hash__table_V0waybill__key__matches_Q_V0lambda17) (bruijn ##.waybill.309 0 1))
    VCallFuncWithGC(runtime, (VFunc)VWaybillUnpack, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hash__table_V0waybill__key__matches_Q_V0lambda17, self)))),
      _var1);
}
void _V50_V0vanity_V0hash__table_V0hash__poverty_V0k110(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0hash__table_V0hash__poverty_V0k110, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 2 2 (##.%x.723 ##.%x.724) ((##vcore.- (bruijn ##.idx.315 3 2) (bruijn ##.%x.517 1 0)) (##vcore.- (bruijn ##.capacity.316 3 3) 1)) ((bruijn ##.bitwise-and.50 5 0) (bruijn ##.%k.514 3 0) (bruijn ##.%x.723 0 0) (bruijn ##.%x.724 0 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VSub2(runtime, NULL,
      statics->up->up->vars[2],
      statics->vars[0]);
    self->vars[1] = _VBasic_VSub2(runtime, NULL,
      statics->up->up->vars[3],
      VEncodeInt(1l));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 3,
      statics->up->up->vars[0],
      self->vars[0],
      self->vars[1]);
    }
}
void _V50_V0vanity_V0hash__table_V0hash__poverty(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0hash__table_V0hash__poverty, got ~D~N"
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
  // (basic-block 1 1 (##.%x.722) ((##vcore.- (bruijn ##.capacity.316 1 3) 1)) ((bruijn ##.bitwise-and.50 3 0) (close _V50_V0vanity_V0hash__table_V0hash__poverty_V0k110) (bruijn ##.hash.314 1 1) (bruijn ##.%x.722 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VSub2(runtime, NULL,
      statics->vars[3],
      VEncodeInt(1l));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hash__table_V0hash__poverty_V0k110, self)))),
      statics->vars[1],
      self->vars[0]);
    }
}
void _V50_V0vanity_V0hash__table_V0hash__slot(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0hash__table_V0hash__slot, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 1 1 (##.%x.725) ((##vcore.- (bruijn ##.capacity.318 1 2) 1)) ((bruijn ##.bitwise-and.50 3 0) (bruijn ##.%k.519 1 0) (bruijn ##.hash.317 1 1) (bruijn ##.%x.725 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VSub2(runtime, NULL,
      statics->vars[2],
      VEncodeInt(1l));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 3,
      statics->vars[0],
      statics->vars[1],
      self->vars[0]);
    }
}
void _V50_V0vanity_V0hash__table_V0make__entry_V0k113(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0hash__table_V0make__entry_V0k113, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%p.726) ((##vcore.eq? (bruijn ##.h.324 3 0) (bruijn ##.%x.523 1 0))) (if (bruijn ##.%p.726 0 0) ((bruijn ##.%k.521 4 0) (bruijn ##.waybill.325 2 0)) (##qualified-call (vanity hash-table make-entry) #t (bruijn ##.make-entry.114 5 25) (bruijn ##.%k.521 4 0) (bruijn ##.weakness.319 4 1) (bruijn ##.stability.320 4 2) (bruijn ##.clearinghouse.321 4 3) (bruijn ##.key.322 4 4) (bruijn ##.datum.323 4 5))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      statics->up->up->vars[0],
      statics->vars[0]);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      statics->up->vars[0]);
} else {
  {
   VEnv * _closure_env = _V60_V0vanity_V0hash__table;
    VWORD _arg0 = 
      statics->up->up->up->vars[0];
    VWORD _arg1 = 
      statics->up->up->up->vars[1];
    VWORD _arg2 = 
      statics->up->up->up->vars[2];
    VWORD _arg3 = 
      statics->up->up->up->vars[3];
    VWORD _arg4 = 
      statics->up->up->up->vars[4];
    VWORD _arg5 = 
      statics->up->up->up->vars[5];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0hash__table_V0make__entry, _V60_V0vanity_V0hash__table)}, 6, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5);
    } else {
       _V50_V0vanity_V0hash__table_V0make__entry(runtime, _closure_env, 6, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5);
    }
  }
}
    }
}
void _V50_V0vanity_V0hash__table_V0make__entry_V0k112(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0hash__table_V0make__entry_V0k112, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.current-hash.120 3 31) (close _V50_V0vanity_V0hash__table_V0make__entry_V0k113) (bruijn ##.key.322 2 4))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[31]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hash__table_V0make__entry_V0k113, self)))),
      statics->up->vars[4]);
}
void _V50_V0vanity_V0hash__table_V0make__entry_V0k111(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0hash__table_V0make__entry_V0k111, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((##intrinsic "VMakeWaybill") (close _V50_V0vanity_V0hash__table_V0make__entry_V0k112) (bruijn ##.weakness.319 1 1) (bruijn ##.stability.320 1 2) (bruijn ##.clearinghouse.321 1 3) (bruijn ##.key.322 1 4) (bruijn ##.datum.323 1 5) (bruijn ##.h.324 0 0))
    VCallFuncWithGC(runtime, (VFunc)VMakeWaybill, 7,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hash__table_V0make__entry_V0k112, self)))),
      statics->vars[1],
      statics->vars[2],
      statics->vars[3],
      statics->vars[4],
      statics->vars[5],
      _var0);
}
void _V50_V0vanity_V0hash__table_V0make__entry(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4, VWORD _var5) {
 if(argc != 6) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0hash__table_V0make__entry, got ~D~N"
  "-- expected 6~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[6]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 6, 6, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _var3;
  self->vars[4] = _var4;
  self->vars[5] = _var5;
  // ((bruijn ##.current-hash.120 1 31) (close _V50_V0vanity_V0hash__table_V0make__entry_V0k111) (bruijn ##.key.322 0 4))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[31]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hash__table_V0make__entry_V0k111, self)))),
      _var4);
}
__attribute__((used)) static void _V20CaseError__V50_V0vanity_V0hash__table_V0make__eq__hash__table(VRuntime * runtime, VEnv * statics, int argc, ...) {
 // ("_V50_V0vanity_V0hash__table_V0make__eq__hash__table" #t #f (1 (##qualified-call (vanity hash-table make-hash-table) #t (bruijn ##.make-hash-table.117 1 28) (bruijn ##.%k.524 0 0) (##intrinsic ##vcore.eq?) (bruijn ##.current-hash.120 1 31) #f #f)) (2 (##qualified-call (vanity hash-table make-hash-table) #t (bruijn ##.make-hash-table.117 1 28) (bruijn ##.%k.525 0 0) (##intrinsic ##vcore.eq?) (bruijn ##.current-hash.120 1 31) (bruijn ##.weakness.326 0 1) #f)))
 VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0hash__table_V0make__eq__hash__table, got ~D~N"
 "-- expected 1~N"
 "-- expected 2~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V50_V0vanity_V0hash__table_V0make__eq__hash__table(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
  // (##qualified-call (vanity hash-table make-hash-table) #t (bruijn ##.make-hash-table.117 1 28) (bruijn ##.%k.524 0 0) (##intrinsic ##vcore.eq?) (bruijn ##.current-hash.120 1 31) #f #f)
  {
   VEnv * _closure_env = _V60_V0vanity_V0hash__table;
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      _V40_V10vcore_Deq_Q;
    VWORD _arg2 = 
      statics->vars[31];
    VWORD _arg3 = 
      VEncodeBool(false);
    VWORD _arg4 = 
      VEncodeBool(false);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0hash__table_V0make__hash__table, _V60_V0vanity_V0hash__table)}, 5, _arg0, _arg1, _arg2, _arg3, _arg4);
    } else {
       _V50_V0vanity_V0hash__table_V0make__hash__table(runtime, _closure_env, 5, _arg0, _arg1, _arg2, _arg3, _arg4);
    }
  }
}
__attribute__((used)) static void _V20Case1__V50_V0vanity_V0hash__table_V0make__eq__hash__table(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
  // (##qualified-call (vanity hash-table make-hash-table) #t (bruijn ##.make-hash-table.117 1 28) (bruijn ##.%k.525 0 0) (##intrinsic ##vcore.eq?) (bruijn ##.current-hash.120 1 31) (bruijn ##.weakness.326 0 1) #f)
  {
   VEnv * _closure_env = _V60_V0vanity_V0hash__table;
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      _V40_V10vcore_Deq_Q;
    VWORD _arg2 = 
      statics->vars[31];
    VWORD _arg3 = 
      _var1;
    VWORD _arg4 = 
      VEncodeBool(false);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0hash__table_V0make__hash__table, _V60_V0vanity_V0hash__table)}, 5, _arg0, _arg1, _arg2, _arg3, _arg4);
    } else {
       _V50_V0vanity_V0hash__table_V0make__hash__table(runtime, _closure_env, 5, _arg0, _arg1, _arg2, _arg3, _arg4);
    }
  }
}
void _V50_V0vanity_V0hash__table_V0make__eq__hash__table(VRuntime * runtime, VEnv * statics, int argc, ...);
asm(
".intel_syntax noprefix\n"
#ifdef __linux__
".type _V50_V0vanity_V0hash__table_V0make__eq__hash__table, @function\n"
#endif
".globl _V50_V0vanity_V0hash__table_V0make__eq__hash__table\n"
"_V50_V0vanity_V0hash__table_V0make__eq__hash__table:\n"
"    cmp " ARGC_REG ", 1\n"
"    je _V20Case0__V50_V0vanity_V0hash__table_V0make__eq__hash__table\n"
"    cmp " ARGC_REG ", 2\n"
"    je _V20Case1__V50_V0vanity_V0hash__table_V0make__eq__hash__table\n"
"    jmp _V20CaseError__V50_V0vanity_V0hash__table_V0make__eq__hash__table\n"
);
static void _V10_Dmake__hash__table_D117_V0k114(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmake__hash__table_D117_V0k114, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.727 1 0) ((bruijn ##.%k.532 0 0) (bruijn ##.current-hash.120 3 31)) ((bruijn ##.%k.532 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->vars[31]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dmake__hash__table_D117_V0k115(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmake__hash__table_D117_V0k115, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 2 2 (##.%x.728 ##.%x.729) ((##vcore.eq? (bruijn ##.equal.327 3 1) (##intrinsic ##vcore.eq?)) (##vcore.not (bruijn ##.%x.728 0 0))) (##qualified-call (vanity hash-table make-hash-table) #t (bruijn ##.make-hash-table.117 4 28) (bruijn ##.%k.527 3 0) (bruijn ##.equal.327 3 1) (bruijn ##.%x.528 1 0) #f (bruijn ##.%x.729 0 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      statics->up->up->vars[1],
      _V40_V10vcore_Deq_Q);
    self->vars[1] = _VBasic_VNot2(runtime, NULL,
      self->vars[0]);
  {
   VEnv * _closure_env = _V60_V0vanity_V0hash__table;
    VWORD _arg0 = 
      statics->up->up->vars[0];
    VWORD _arg1 = 
      statics->up->up->vars[1];
    VWORD _arg2 = 
      statics->vars[0];
    VWORD _arg3 = 
      VEncodeBool(false);
    VWORD _arg4 = 
      self->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0hash__table_V0make__hash__table, _V60_V0vanity_V0hash__table)}, 5, _arg0, _arg1, _arg2, _arg3, _arg4);
    } else {
       _V50_V0vanity_V0hash__table_V0make__hash__table(runtime, _closure_env, 5, _arg0, _arg1, _arg2, _arg3, _arg4);
    }
  }
    }
}
static void _V10_Dmake__hash__table_D117_V0k117(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmake__hash__table_D117_V0k117, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.542 1 0) ((bruijn ##.equal?.54 4 4) (bruijn ##.%k.543 0 0) (bruijn ##.hash.334 2 2) (bruijn ##.current-hash.120 3 31)) ((bruijn ##.%k.543 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[4]), 3,
      _var0,
      statics->up->vars[2],
      statics->up->up->vars[31]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dmake__hash__table_D117_V0k119(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmake__hash__table_D117_V0k119, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.540 1 0) ((bruijn ##.%k.541 0 0) #void) ((bruijn ##.error.51 5 1) (bruijn ##.%k.541 0 0) (##string ##.string.772)))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VVOID);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 1)), 2,
      _var0,
      VEncodePointer(&_V10_Dstring_D772.sym, VPOINTER_OTHER));
}
}
static void _V10_Dmake__hash__table_D117_V0k120(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((##intrinsic "VMakeHashTableImpl") (bruijn ##.%k.539 2 0) (##intrinsic ##vcore.eq?) (bruijn ##.current-hash.120 3 31) 16 (bruijn ##.weakness.335 2 3) (bruijn ##.stability.336 2 4) 0.8)
    VCallFuncWithGC(runtime, (VFunc)VMakeHashTableImpl, 7,
      statics->up->vars[0],
      _V40_V10vcore_Deq_Q,
      statics->up->up->vars[31],
      VEncodeInt(16l),
      statics->up->vars[3],
      statics->up->vars[4],
      VEncodeNumber(0.8));
}
static void _V10_Dmake__hash__table_D117_V0k118(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmake__hash__table_D117_V0k118, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dmake__hash__table_D117_V0k119) (close _V10_Dmake__hash__table_D117_V0k120))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dmake__hash__table_D117_V0k119, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dmake__hash__table_D117_V0k120, self)))));
}
static void _V10_Dmake__hash__table_D117_V0k116(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmake__hash__table_D117_V0k116, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dmake__hash__table_D117_V0k117) (close _V10_Dmake__hash__table_D117_V0k118))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dmake__hash__table_D117_V0k117, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dmake__hash__table_D117_V0k118, self)))));
}
__attribute__((used)) static void _V20CaseError__V50_V0vanity_V0hash__table_V0make__hash__table(VRuntime * runtime, VEnv * statics, int argc, ...) {
 // ("_V50_V0vanity_V0hash__table_V0make__hash__table" #t #f (1 (##qualified-call (vanity hash-table make-hash-table) #t (bruijn ##.make-hash-table.117 1 28) (bruijn ##.%k.526 0 0) (bruijn ##.equal?.54 2 4) #f #f #t)) (2 (basic-block 1 1 (##.%p.727) ((##vcore.eq? (bruijn ##.equal.327 1 1) (##intrinsic ##vcore.eq?))) ((close _V10_Dmake__hash__table_D117_V0k114) (close _V10_Dmake__hash__table_D117_V0k115)))) (3 (basic-block 2 2 (##.%x.730 ##.%x.731) ((##vcore.eq? (bruijn ##.equal.328 1 1) (##intrinsic ##vcore.eq?)) (##vcore.not (bruijn ##.%x.730 0 0))) (##qualified-call (vanity hash-table make-hash-table) #t (bruijn ##.make-hash-table.117 2 28) (bruijn ##.%k.533 1 0) (bruijn ##.equal.328 1 1) (bruijn ##.hash.329 1 2) #f (bruijn ##.%x.731 0 1)))) (4 (basic-block 2 2 (##.%x.732 ##.%x.733) ((##vcore.eq? (bruijn ##.equal.330 1 1) (##intrinsic ##vcore.eq?)) (##vcore.not (bruijn ##.%x.732 0 0))) (##qualified-call (vanity hash-table make-hash-table) #t (bruijn ##.make-hash-table.117 2 28) (bruijn ##.%k.536 1 0) (bruijn ##.equal.330 1 1) (bruijn ##.hash.331 1 2) (bruijn ##.weakness.332 1 3) (bruijn ##.%x.733 0 1)))) (5 ((bruijn ##.equal?.54 2 4) (close _V10_Dmake__hash__table_D117_V0k116) (bruijn ##.equal.333 0 1) (##intrinsic ##vcore.eq?))))
 VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0hash__table_V0make__hash__table, got ~D~N"
 "-- expected 1~N"
 "-- expected 2~N"
 "-- expected 3~N"
 "-- expected 4~N"
 "-- expected 5~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V50_V0vanity_V0hash__table_V0make__hash__table(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
  // (##qualified-call (vanity hash-table make-hash-table) #t (bruijn ##.make-hash-table.117 1 28) (bruijn ##.%k.526 0 0) (bruijn ##.equal?.54 2 4) #f #f #t)
  {
   VEnv * _closure_env = _V60_V0vanity_V0hash__table;
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      statics->up->vars[4];
    VWORD _arg2 = 
      VEncodeBool(false);
    VWORD _arg3 = 
      VEncodeBool(false);
    VWORD _arg4 = 
      VEncodeBool(true);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0hash__table_V0make__hash__table, _V60_V0vanity_V0hash__table)}, 5, _arg0, _arg1, _arg2, _arg3, _arg4);
    } else {
       _V50_V0vanity_V0hash__table_V0make__hash__table(runtime, _closure_env, 5, _arg0, _arg1, _arg2, _arg3, _arg4);
    }
  }
}
__attribute__((used)) static void _V20Case1__V50_V0vanity_V0hash__table_V0make__hash__table(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.%p.727) ((##vcore.eq? (bruijn ##.equal.327 1 1) (##intrinsic ##vcore.eq?))) ((close _V10_Dmake__hash__table_D117_V0k114) (close _V10_Dmake__hash__table_D117_V0k115)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      statics->vars[1],
      _V40_V10vcore_Deq_Q);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dmake__hash__table_D117_V0k114, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dmake__hash__table_D117_V0k115, self)))));
    }
}
__attribute__((used)) static void _V20Case2__V50_V0vanity_V0hash__table_V0make__hash__table(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 2 2 (##.%x.730 ##.%x.731) ((##vcore.eq? (bruijn ##.equal.328 1 1) (##intrinsic ##vcore.eq?)) (##vcore.not (bruijn ##.%x.730 0 0))) (##qualified-call (vanity hash-table make-hash-table) #t (bruijn ##.make-hash-table.117 2 28) (bruijn ##.%k.533 1 0) (bruijn ##.equal.328 1 1) (bruijn ##.hash.329 1 2) #f (bruijn ##.%x.731 0 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      statics->vars[1],
      _V40_V10vcore_Deq_Q);
    self->vars[1] = _VBasic_VNot2(runtime, NULL,
      self->vars[0]);
  {
   VEnv * _closure_env = _V60_V0vanity_V0hash__table;
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      statics->vars[1];
    VWORD _arg2 = 
      statics->vars[2];
    VWORD _arg3 = 
      VEncodeBool(false);
    VWORD _arg4 = 
      self->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0hash__table_V0make__hash__table, _V60_V0vanity_V0hash__table)}, 5, _arg0, _arg1, _arg2, _arg3, _arg4);
    } else {
       _V50_V0vanity_V0hash__table_V0make__hash__table(runtime, _closure_env, 5, _arg0, _arg1, _arg2, _arg3, _arg4);
    }
  }
    }
}
__attribute__((used)) static void _V20Case3__V50_V0vanity_V0hash__table_V0make__hash__table(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
  struct { VEnv self; VWORD argv[4]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 4, 4, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _var3;
  // (basic-block 2 2 (##.%x.732 ##.%x.733) ((##vcore.eq? (bruijn ##.equal.330 1 1) (##intrinsic ##vcore.eq?)) (##vcore.not (bruijn ##.%x.732 0 0))) (##qualified-call (vanity hash-table make-hash-table) #t (bruijn ##.make-hash-table.117 2 28) (bruijn ##.%k.536 1 0) (bruijn ##.equal.330 1 1) (bruijn ##.hash.331 1 2) (bruijn ##.weakness.332 1 3) (bruijn ##.%x.733 0 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      statics->vars[1],
      _V40_V10vcore_Deq_Q);
    self->vars[1] = _VBasic_VNot2(runtime, NULL,
      self->vars[0]);
  {
   VEnv * _closure_env = _V60_V0vanity_V0hash__table;
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      statics->vars[1];
    VWORD _arg2 = 
      statics->vars[2];
    VWORD _arg3 = 
      statics->vars[3];
    VWORD _arg4 = 
      self->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0hash__table_V0make__hash__table, _V60_V0vanity_V0hash__table)}, 5, _arg0, _arg1, _arg2, _arg3, _arg4);
    } else {
       _V50_V0vanity_V0hash__table_V0make__hash__table(runtime, _closure_env, 5, _arg0, _arg1, _arg2, _arg3, _arg4);
    }
  }
    }
}
__attribute__((used)) static void _V20Case4__V50_V0vanity_V0hash__table_V0make__hash__table(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4) {
  struct { VEnv self; VWORD argv[5]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 5, 5, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _var3;
  self->vars[4] = _var4;
  // ((bruijn ##.equal?.54 2 4) (close _V10_Dmake__hash__table_D117_V0k116) (bruijn ##.equal.333 0 1) (##intrinsic ##vcore.eq?))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[4]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dmake__hash__table_D117_V0k116, self)))),
      _var1,
      _V40_V10vcore_Deq_Q);
}
void _V50_V0vanity_V0hash__table_V0make__hash__table(VRuntime * runtime, VEnv * statics, int argc, ...);
asm(
".intel_syntax noprefix\n"
#ifdef __linux__
".type _V50_V0vanity_V0hash__table_V0make__hash__table, @function\n"
#endif
".globl _V50_V0vanity_V0hash__table_V0make__hash__table\n"
"_V50_V0vanity_V0hash__table_V0make__hash__table:\n"
"    cmp " ARGC_REG ", 1\n"
"    je _V20Case0__V50_V0vanity_V0hash__table_V0make__hash__table\n"
"    cmp " ARGC_REG ", 2\n"
"    je _V20Case1__V50_V0vanity_V0hash__table_V0make__hash__table\n"
"    cmp " ARGC_REG ", 3\n"
"    je _V20Case2__V50_V0vanity_V0hash__table_V0make__hash__table\n"
"    cmp " ARGC_REG ", 4\n"
"    je _V20Case3__V50_V0vanity_V0hash__table_V0make__hash__table\n"
"    cmp " ARGC_REG ", 5\n"
"    je _V20Case4__V50_V0vanity_V0hash__table_V0make__hash__table\n"
"    jmp _V20CaseError__V50_V0vanity_V0hash__table_V0make__hash__table\n"
);
static void _V0vanity_V0hash__table_V20_V0k121(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 28 28 (##.%x.734 ##.%x.735 ##.%x.736 ##.%x.737 ##.%x.738 ##.%x.739 ##.%x.740 ##.%x.741 ##.%x.742 ##.%x.743 ##.%x.744 ##.%x.745 ##.%x.746 ##.%x.747 ##.%x.748 ##.%x.749 ##.%x.750 ##.%x.751 ##.%x.752 ##.%x.753 ##.%x.754 ##.%x.755 ##.%x.756 ##.%x.757 ##.%x.758 ##.%x.759 ##.%x.760 ##.%r.761) ((##vcore.cons 'current-hash (bruijn ##.current-hash.120 1 31)) (##vcore.cons 'make-eq-hash-table (bruijn ##.make-eq-hash-table.116 1 27)) (##vcore.cons 'make-eqv-hash-table (bruijn ##.make-eqv-hash-table.115 1 26)) (##vcore.cons 'make-hash-table (bruijn ##.make-hash-table.117 1 28)) (##vcore.cons 'hash-table? (##basic-intrinsic "VHashTableP2")) (##vcore.cons 'hash-table-ref (bruijn ##.hash-table-ref.99 1 10)) (##vcore.cons 'hash-table-set! (bruijn ##.hash-table-set!.96 1 7)) (##vcore.cons 'hash-table-delete! (bruijn ##.hash-table-delete!.95 1 6)) (##vcore.cons 'hash-table-size (bruijn ##.hash-table-size.94 1 5)) (##vcore.cons 'hash-table-walk (bruijn ##.hash-table-walk.92 1 3)) (##vcore.cons 'hash-table-for-each (bruijn ##.hash-table-for-each.93 1 4)) (##vcore.cons 'hash-table-map->list (bruijn ##.hash-table-map->list.91 1 2)) (##vcore.cons 'hash-table-fold (bruijn ##.hash-table-fold.90 1 1)) (##vcore.cons 'hash-table->alist (bruijn ##.hash-table->alist.89 1 0)) (##vcore.cons (bruijn ##.%x.747 0 13) '()) (##vcore.cons (bruijn ##.%x.746 0 12) (bruijn ##.%x.748 0 14)) (##vcore.cons (bruijn ##.%x.745 0 11) (bruijn ##.%x.749 0 15)) (##vcore.cons (bruijn ##.%x.744 0 10) (bruijn ##.%x.750 0 16)) (##vcore.cons (bruijn ##.%x.743 0 9) (bruijn ##.%x.751 0 17)) (##vcore.cons (bruijn ##.%x.742 0 8) (bruijn ##.%x.752 0 18)) (##vcore.cons (bruijn ##.%x.741 0 7) (bruijn ##.%x.753 0 19)) (##vcore.cons (bruijn ##.%x.740 0 6) (bruijn ##.%x.754 0 20)) (##vcore.cons (bruijn ##.%x.739 0 5) (bruijn ##.%x.755 0 21)) (##vcore.cons (bruijn ##.%x.738 0 4) (bruijn ##.%x.756 0 22)) (##vcore.cons (bruijn ##.%x.737 0 3) (bruijn ##.%x.757 0 23)) (##vcore.cons (bruijn ##.%x.736 0 2) (bruijn ##.%x.758 0 24)) (##vcore.cons (bruijn ##.%x.735 0 1) (bruijn ##.%x.759 0 25)) (##vcore.cons (bruijn ##.%x.734 0 0) (bruijn ##.%x.760 0 26))) ((bruijn ##.%k.338 6 0) (bruijn ##.%r.761 0 27)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[28]; } container;
    self = &container.self;
    VInitEnv(self, 28, 28, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      _V0current__hash,
      statics->vars[31]);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      _V0make__eq__hash__table,
      statics->vars[27]);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      _V0make__eqv__hash__table,
      statics->vars[26]);
    self->vars[3] = _VBasic_VCons2(runtime, NULL,
      _V0make__hash__table,
      statics->vars[28]);
    self->vars[4] = _VBasic_VCons2(runtime, NULL,
      _V0hash__table_Q,
      _V40VHashTableP2);
    self->vars[5] = _VBasic_VCons2(runtime, NULL,
      _V0hash__table__ref,
      statics->vars[10]);
    self->vars[6] = _VBasic_VCons2(runtime, NULL,
      _V0hash__table__set_B,
      statics->vars[7]);
    self->vars[7] = _VBasic_VCons2(runtime, NULL,
      _V0hash__table__delete_B,
      statics->vars[6]);
    self->vars[8] = _VBasic_VCons2(runtime, NULL,
      _V0hash__table__size,
      statics->vars[5]);
    self->vars[9] = _VBasic_VCons2(runtime, NULL,
      _V0hash__table__walk,
      statics->vars[3]);
    self->vars[10] = _VBasic_VCons2(runtime, NULL,
      _V0hash__table__for__each,
      statics->vars[4]);
    self->vars[11] = _VBasic_VCons2(runtime, NULL,
      _V0hash__table__map___Glist,
      statics->vars[2]);
    self->vars[12] = _VBasic_VCons2(runtime, NULL,
      _V0hash__table__fold,
      statics->vars[1]);
    self->vars[13] = _VBasic_VCons2(runtime, NULL,
      _V0hash__table___Galist,
      statics->vars[0]);
    self->vars[14] = _VBasic_VCons2(runtime, NULL,
      self->vars[13],
      VNULL);
    self->vars[15] = _VBasic_VCons2(runtime, NULL,
      self->vars[12],
      self->vars[14]);
    self->vars[16] = _VBasic_VCons2(runtime, NULL,
      self->vars[11],
      self->vars[15]);
    self->vars[17] = _VBasic_VCons2(runtime, NULL,
      self->vars[10],
      self->vars[16]);
    self->vars[18] = _VBasic_VCons2(runtime, NULL,
      self->vars[9],
      self->vars[17]);
    self->vars[19] = _VBasic_VCons2(runtime, NULL,
      self->vars[8],
      self->vars[18]);
    self->vars[20] = _VBasic_VCons2(runtime, NULL,
      self->vars[7],
      self->vars[19]);
    self->vars[21] = _VBasic_VCons2(runtime, NULL,
      self->vars[6],
      self->vars[20]);
    self->vars[22] = _VBasic_VCons2(runtime, NULL,
      self->vars[5],
      self->vars[21]);
    self->vars[23] = _VBasic_VCons2(runtime, NULL,
      self->vars[4],
      self->vars[22]);
    self->vars[24] = _VBasic_VCons2(runtime, NULL,
      self->vars[3],
      self->vars[23]);
    self->vars[25] = _VBasic_VCons2(runtime, NULL,
      self->vars[2],
      self->vars[24]);
    self->vars[26] = _VBasic_VCons2(runtime, NULL,
      self->vars[1],
      self->vars[25]);
    self->vars[27] = _VBasic_VCons2(runtime, NULL,
      self->vars[0],
      self->vars[26]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 1,
      self->vars[27]);
    }
}
static void _V0vanity_V0hash__table_V20_V0lambda2(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4) {
 if(argc != 5) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0hash__table_V20_V0lambda2, got ~D~N"
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
  // (##letrec (vanity hash-table) 32 ((close "_V50_V0vanity_V0hash__table_V0hash__table___Galist" (vanity hash-table)) (close "_V50_V0vanity_V0hash__table_V0hash__table__fold" (vanity hash-table)) (close "_V50_V0vanity_V0hash__table_V0hash__table__map___Glist" (vanity hash-table)) (close "_V50_V0vanity_V0hash__table_V0hash__table__walk" (vanity hash-table)) (close "_V50_V0vanity_V0hash__table_V0hash__table__for__each" (vanity hash-table)) (close "_V50_V0vanity_V0hash__table_V0hash__table__size" (vanity hash-table)) (close "_V50_V0vanity_V0hash__table_V0hash__table__delete_B" (vanity hash-table)) (close "_V50_V0vanity_V0hash__table_V0hash__table__set_B" (vanity hash-table)) (close "_V50_V0vanity_V0hash__table_V0hash__table__set__impl_B" (vanity hash-table)) (close "_V50_V0vanity_V0hash__table_V0hash__table__grow" (vanity hash-table)) (close "_V50_V0vanity_V0hash__table_V0hash__table__ref" (vanity hash-table)) (close "_V50_V0vanity_V0hash__table_V0hash__table__ref__impl" (vanity hash-table)) (close "_V50_V0vanity_V0hash__table_V0hash__table__rummage" (vanity hash-table)) (close "_V50_V0vanity_V0hash__table_V0hash__table__sweep" (vanity hash-table)) (close "_V50_V0vanity_V0hash__table_V0robinhood__shuffle" (vanity hash-table)) (close "_V50_V0vanity_V0hash__table_V0hash__table__reinsert_B" (vanity hash-table)) (close "_V50_V0vanity_V0hash__table_V0hash__table__find__impl" (vanity hash-table)) (close "_V50_V0vanity_V0hash__table_V0validate__robinhood" (vanity hash-table)) (close "_V50_V0vanity_V0hash__table_V0validate__robinhood__impl" (vanity hash-table)) (close "_V50_V0vanity_V0hash__table_V0hash__table__keyvector" (vanity hash-table)) (close "_V50_V0vanity_V0hash__table_V0sequence_G" (vanity hash-table)) (close "_V50_V0vanity_V0hash__table_V0sequence_L" (vanity hash-table)) (close "_V50_V0vanity_V0hash__table_V0waybill__key__matches_Q" (vanity hash-table)) (close "_V50_V0vanity_V0hash__table_V0hash__poverty" (vanity hash-table)) (close "_V50_V0vanity_V0hash__table_V0hash__slot" (vanity hash-table)) (close "_V50_V0vanity_V0hash__table_V0make__entry" (vanity hash-table)) #f (close "_V50_V0vanity_V0hash__table_V0make__eq__hash__table" (vanity hash-table)) (close "_V50_V0vanity_V0hash__table_V0make__hash__table" (vanity hash-table)) (##basic-intrinsic "VHashBlob") (##intrinsic "VHashCombine") (##intrinsic "VEqHash")) (set! (close _V0vanity_V0hash__table_V20_V0k121) (bruijn ##.make-eqv-hash-table.115 0 26) (bruijn ##.make-eq-hash-table.116 0 27)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[32]; } container;
    self = &container.self;
    _V60_V0vanity_V0hash__table = self;
    VInitEnv(self, 32, 32, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hash__table_V0hash__table___Galist, _V60_V0vanity_V0hash__table))));
    self->vars[1] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hash__table_V0hash__table__fold, _V60_V0vanity_V0hash__table))));
    self->vars[2] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hash__table_V0hash__table__map___Glist, _V60_V0vanity_V0hash__table))));
    self->vars[3] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hash__table_V0hash__table__walk, _V60_V0vanity_V0hash__table))));
    self->vars[4] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hash__table_V0hash__table__for__each, _V60_V0vanity_V0hash__table))));
    self->vars[5] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hash__table_V0hash__table__size, _V60_V0vanity_V0hash__table))));
    self->vars[6] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hash__table_V0hash__table__delete_B, _V60_V0vanity_V0hash__table))));
    self->vars[7] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hash__table_V0hash__table__set_B, _V60_V0vanity_V0hash__table))));
    self->vars[8] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hash__table_V0hash__table__set__impl_B, _V60_V0vanity_V0hash__table))));
    self->vars[9] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hash__table_V0hash__table__grow, _V60_V0vanity_V0hash__table))));
    self->vars[10] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hash__table_V0hash__table__ref, _V60_V0vanity_V0hash__table))));
    self->vars[11] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hash__table_V0hash__table__ref__impl, _V60_V0vanity_V0hash__table))));
    self->vars[12] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hash__table_V0hash__table__rummage, _V60_V0vanity_V0hash__table))));
    self->vars[13] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hash__table_V0hash__table__sweep, _V60_V0vanity_V0hash__table))));
    self->vars[14] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hash__table_V0robinhood__shuffle, _V60_V0vanity_V0hash__table))));
    self->vars[15] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hash__table_V0hash__table__reinsert_B, _V60_V0vanity_V0hash__table))));
    self->vars[16] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hash__table_V0hash__table__find__impl, _V60_V0vanity_V0hash__table))));
    self->vars[17] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hash__table_V0validate__robinhood, _V60_V0vanity_V0hash__table))));
    self->vars[18] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hash__table_V0validate__robinhood__impl, _V60_V0vanity_V0hash__table))));
    self->vars[19] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hash__table_V0hash__table__keyvector, _V60_V0vanity_V0hash__table))));
    self->vars[20] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hash__table_V0sequence_G, _V60_V0vanity_V0hash__table))));
    self->vars[21] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hash__table_V0sequence_L, _V60_V0vanity_V0hash__table))));
    self->vars[22] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hash__table_V0waybill__key__matches_Q, _V60_V0vanity_V0hash__table))));
    self->vars[23] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hash__table_V0hash__poverty, _V60_V0vanity_V0hash__table))));
    self->vars[24] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hash__table_V0hash__slot, _V60_V0vanity_V0hash__table))));
    self->vars[25] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hash__table_V0make__entry, _V60_V0vanity_V0hash__table))));
    self->vars[26] = VEncodeBool(false);
    self->vars[27] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hash__table_V0make__eq__hash__table, _V60_V0vanity_V0hash__table))));
    self->vars[28] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0hash__table_V0make__hash__table, _V60_V0vanity_V0hash__table))));
    self->vars[29] = _V40VHashBlob;
    self->vars[30] = _V40VHashCombine;
    self->vars[31] = _V40VEqHash;
    VRegisterStaticEnv("_V0vanity_V0hash__table_V20", &_V60_V0vanity_V0hash__table);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0hash__table_V20_V0k121, self)))),
      VEncodeInt(0l), VEncodeInt(26l),
      self->vars[27]
    );
    }
}
static void _V0vanity_V0hash__table_V20_V0k3(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0hash__table_V20_V0k3, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((##intrinsic "VMultiImport") (close _V0vanity_V0hash__table_V20_V0lambda2) (##string ##.string.773) (bruijn ##.%x.571 0 0) 'bitwise-and 'error 'displayln 'vector-map 'equal?)
    VCallFuncWithGC(runtime, (VFunc)VMultiImport, 8,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0hash__table_V20_V0lambda2, self)))),
      VEncodePointer(&_V10_Dstring_D773.sym, VPOINTER_OTHER),
      _var0,
      _V0bitwise__and,
      _V0error,
      _V0displayln,
      _V0vector__map,
      _V0equal_Q);
}
static void _V0vanity_V0hash__table_V20_V0k2(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0hash__table_V20_V0k2, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.vector (close _V0vanity_V0hash__table_V20_V0k3) (bruijn ##.%x.572 1 0) (bruijn ##.%x.573 0 0))
    VCallFuncWithGC(runtime, (VFunc)VCreateVector, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0hash__table_V20_V0k3, self)))),
      statics->vars[0],
      _var0);
}
static void _V0vanity_V0hash__table_V20_V0k1(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0hash__table_V20_V0k1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0hash__table_V20_V0k2) (##string ##.string.774))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0hash__table_V20_V0k2, self)))),
      VEncodePointer(&_V10_Dstring_D774.sym, VPOINTER_OTHER));
}
static void _V0vanity_V0hash__table_V20_V0lambda1(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0hash__table_V20_V0lambda1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0hash__table_V20_V0k1) (##string ##.string.775))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0hash__table_V20_V0k1, self)))),
      VEncodePointer(&_V10_Dstring_D775.sym, VPOINTER_OTHER));
}
VFunc _V0vanity_V0hash__table_V20 = (VFunc)_V0vanity_V0hash__table_V20_V0lambda1;
static __attribute__((constructor)) void VDllMain1() {
  _V0equal_Q = VEncodePointer(VInternSymbol(1746439164, &_VW_V0equal_Q.sym), VPOINTER_OTHER);
  _V0vector__map = VEncodePointer(VInternSymbol(848807183, &_VW_V0vector__map.sym), VPOINTER_OTHER);
  _V0displayln = VEncodePointer(VInternSymbol(-298314537, &_VW_V0displayln.sym), VPOINTER_OTHER);
  _V0error = VEncodePointer(VInternSymbol(147890691, &_VW_V0error.sym), VPOINTER_OTHER);
  _V0bitwise__and = VEncodePointer(VInternSymbol(1093359781, &_VW_V0bitwise__and.sym), VPOINTER_OTHER);
  _V0hash__table___Galist = VEncodePointer(VInternSymbol(-586883858, &_VW_V0hash__table___Galist.sym), VPOINTER_OTHER);
  _V0hash__table__fold = VEncodePointer(VInternSymbol(-579030885, &_VW_V0hash__table__fold.sym), VPOINTER_OTHER);
  _V0hash__table__map___Glist = VEncodePointer(VInternSymbol(-793455360, &_VW_V0hash__table__map___Glist.sym), VPOINTER_OTHER);
  _V0hash__table__for__each = VEncodePointer(VInternSymbol(-188805111, &_VW_V0hash__table__for__each.sym), VPOINTER_OTHER);
  _V0hash__table__walk = VEncodePointer(VInternSymbol(2018621625, &_VW_V0hash__table__walk.sym), VPOINTER_OTHER);
  _V0hash__table__size = VEncodePointer(VInternSymbol(2129173623, &_VW_V0hash__table__size.sym), VPOINTER_OTHER);
  _V0hash__table__delete_B = VEncodePointer(VInternSymbol(1653184530, &_VW_V0hash__table__delete_B.sym), VPOINTER_OTHER);
  _V0hash__table__set_B = VEncodePointer(VInternSymbol(-799540310, &_VW_V0hash__table__set_B.sym), VPOINTER_OTHER);
  _V0hash__table__ref = VEncodePointer(VInternSymbol(987278019, &_VW_V0hash__table__ref.sym), VPOINTER_OTHER);
  _V0hash__table_Q = VEncodePointer(VInternSymbol(316483628, &_VW_V0hash__table_Q.sym), VPOINTER_OTHER);
  _V0make__hash__table = VEncodePointer(VInternSymbol(-2146525516, &_VW_V0make__hash__table.sym), VPOINTER_OTHER);
  _V0make__eqv__hash__table = VEncodePointer(VInternSymbol(-1853304348, &_VW_V0make__eqv__hash__table.sym), VPOINTER_OTHER);
  _V0make__eq__hash__table = VEncodePointer(VInternSymbol(-223768755, &_VW_V0make__eq__hash__table.sym), VPOINTER_OTHER);
  _V0current__hash = VEncodePointer(VInternSymbol(-1388026837, &_VW_V0current__hash.sym), VPOINTER_OTHER);
  _V40VHashTableP2 = VEncodePointer(VLookupConstant("_V40VHashTableP2", &_VW_V40VHashTableP2), VPOINTER_CLOSURE);
  _V40VEqHash = VEncodePointer(VLookupConstant("_V40VEqHash", &_VW_V40VEqHash), VPOINTER_CLOSURE);
  _V40VHashCombine = VEncodePointer(VLookupConstant("_V40VHashCombine", &_VW_V40VHashCombine), VPOINTER_CLOSURE);
  _V40VHashBlob = VEncodePointer(VLookupConstant("_V40VHashBlob", &_VW_V40VHashBlob), VPOINTER_CLOSURE);
  _V40VMakeHashTableImpl = VEncodePointer(VLookupConstant("_V40VMakeHashTableImpl", &_VW_V40VMakeHashTableImpl), VPOINTER_CLOSURE);
  _V40_V10vcore_Deq_Q = VEncodePointer(VLookupConstant("_V40_V10vcore_Deq_Q", &_VW_V40_V10vcore_Deq_Q), VPOINTER_CLOSURE);
  _V40VMakeWaybill = VEncodePointer(VLookupConstant("_V40VMakeWaybill", &_VW_V40VMakeWaybill), VPOINTER_CLOSURE);
  _V40VClearinghousePoll = VEncodePointer(VLookupConstant("_V40VClearinghousePoll", &_VW_V40VClearinghousePoll), VPOINTER_CLOSURE);
  _V40VWaybillAddress = VEncodePointer(VLookupConstant("_V40VWaybillAddress", &_VW_V40VWaybillAddress), VPOINTER_CLOSURE);
  _V40VHashTableSlotSet = VEncodePointer(VLookupConstant("_V40VHashTableSlotSet", &_VW_V40VHashTableSlotSet), VPOINTER_CLOSURE);
  _V40VWaybillUnpack = VEncodePointer(VLookupConstant("_V40VWaybillUnpack", &_VW_V40VWaybillUnpack), VPOINTER_CLOSURE);
  _V40VHashTableSlot = VEncodePointer(VLookupConstant("_V40VHashTableSlot", &_VW_V40VHashTableSlot), VPOINTER_CLOSURE);
  _V40_V10vcore_Dcons = VEncodePointer(VLookupConstant("_V40_V10vcore_Dcons", &_VW_V40_V10vcore_Dcons), VPOINTER_CLOSURE);
  _V40VMultiImport = VEncodePointer(VLookupConstant("_V40VMultiImport", &_VW_V40VMultiImport), VPOINTER_CLOSURE);
}
