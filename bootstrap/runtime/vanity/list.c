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

VEnv * _V60_V0vanity_V0list;

VWEAK VWORD _V0assoc__update;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V0assoc__update = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "assoc-update" };
VWEAK VWORD _V0assv__update;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0assv__update = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "assv-update" };
VWEAK VWORD _V0assq__update;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0assq__update = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "assq-update" };
VWEAK VWORD _V0delete;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0delete = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "delete" };
VWEAK VWORD _V0insert;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0insert = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "insert" };
VWEAK VWORD _V0list__index;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V0list__index = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "list-index" };
VWEAK VWORD _V0every_Q;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0every_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "every\?" };
VWEAK VWORD _V0any_Q;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0any_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "any\?" };
VWEAK VWORD _V0split__while;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0split__while = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "split-while" };
VWEAK VWORD _V0drop__while;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V0drop__while = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "drop-while" };
VWEAK VWORD _V0take__while;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V0take__while = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "take-while" };
VWEAK VWORD _V0partition;VWEAK struct { VBlob sym; char bytes[10]; } _VW_V0partition = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 10 }, "partition" };
VWEAK VWORD _V0filter;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0filter = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "filter" };
VWEAK VWORD _V0append__map_B;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0append__map_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "append-map!" };
VWEAK VWORD _V0append__map;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V0append__map = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "append-map" };
VWEAK VWORD _V0fold__right;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V0fold__right = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "fold-right" };
VWEAK VWORD _V0fold;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0fold = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "fold" };
VWEAK VWORD _V0count;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0count = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "count" };
VWEAK VWORD _V0unzip5;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0unzip5 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "unzip5" };
VWEAK VWORD _V0unzip4;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0unzip4 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "unzip4" };
VWEAK VWORD _V0unzip3;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0unzip3 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "unzip3" };
VWEAK VWORD _V0unzip2;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0unzip2 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "unzip2" };
VWEAK VWORD _V0unzip1;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0unzip1 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "unzip1" };
VWEAK VWORD _V0zip;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0zip = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "zip" };
VWEAK VWORD _V0concatenate;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0concatenate = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "concatenate" };
VWEAK VWORD _V0append_B;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0append_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "append!" };
VWEAK VWORD _V0split__at;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0split__at = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "split-at" };
VWEAK VWORD _V0drop__right;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V0drop__right = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "drop-right" };
VWEAK VWORD _V0take__right;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V0take__right = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "take-right" };
VWEAK VWORD _V0drop;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0drop = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "drop" };
VWEAK VWORD _V0take;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0take = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "take" };
VWEAK VWORD _V0car_Pcdr;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0car_Pcdr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "car+cdr" };
VWEAK VWORD _V0tenth;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0tenth = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "tenth" };
VWEAK VWORD _V0ninth;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0ninth = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "ninth" };
VWEAK VWORD _V0eighth;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0eighth = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "eighth" };
VWEAK VWORD _V0seventh;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0seventh = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "seventh" };
VWEAK VWORD _V0sixth;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0sixth = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "sixth" };
VWEAK VWORD _V0fifth;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0fifth = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "fifth" };
VWEAK VWORD _V0fourth;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0fourth = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "fourth" };
VWEAK VWORD _V0third;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0third = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "third" };
VWEAK VWORD _V0second;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0second = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "second" };
VWEAK VWORD _V0first;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0first = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "first" };
VWEAK VWORD _V0list__tabulate;VWEAK struct { VBlob sym; char bytes[14]; } _VW_V0list__tabulate = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 14 }, "list-tabulate" };
VWEAK VWORD _V0iota;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0iota = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "iota" };
VWEAK VWORD _V40_V10vcore_Dnull_Q;
VWEAK VClosure _VW_V40_V10vcore_Dnull_Q = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VNullP2, NULL };
VWEAK VWORD _V40_V10vcore_Dcar;
VWEAK VClosure _VW_V40_V10vcore_Dcar = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VCar2, NULL };
VWEAK VWORD _V40_V10vcore_Dcdr;
VWEAK VClosure _VW_V40_V10vcore_Dcdr = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VCdr2, NULL };
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D660 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "_V0vanity_V0core_V20" };
VWEAK VWORD _V0cadddr;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0cadddr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "cadddr" };
VWEAK VWORD _V0caddr;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0caddr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "caddr" };
VWEAK VWORD _V0cadr;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0cadr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "cadr" };
VWEAK VWORD _V0list__ref;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0list__ref = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "list-ref" };
VWEAK VWORD _V0list;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0list = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "list" };
VWEAK VWORD _V0append;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0append = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "append" };
VWEAK VWORD _V0map;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0map = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "map" };
VWEAK VWORD _V0values;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0values = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "values" };
VWEAK VWORD _V0caar;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0caar = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "caar" };
VWEAK VWORD _V0equal_Q;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0equal_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "equal\?" };
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D659 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "_V0vanity_V0list_V20" };
VWEAK VWORD _V40VMultiImport;
VWEAK VClosure _VW_V40VMultiImport = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VMultiImport, NULL };
static __attribute__((constructor)) void VDllMain1() {
  _V0assoc__update = VEncodePointer(VInternSymbol(1368771548, &_VW_V0assoc__update.sym), VPOINTER_OTHER);
  _V0assv__update = VEncodePointer(VInternSymbol(-1576130224, &_VW_V0assv__update.sym), VPOINTER_OTHER);
  _V0assq__update = VEncodePointer(VInternSymbol(1106520835, &_VW_V0assq__update.sym), VPOINTER_OTHER);
  _V0delete = VEncodePointer(VInternSymbol(-987708468, &_VW_V0delete.sym), VPOINTER_OTHER);
  _V0insert = VEncodePointer(VInternSymbol(-159824537, &_VW_V0insert.sym), VPOINTER_OTHER);
  _V0list__index = VEncodePointer(VInternSymbol(-1895277672, &_VW_V0list__index.sym), VPOINTER_OTHER);
  _V0every_Q = VEncodePointer(VInternSymbol(-289757295, &_VW_V0every_Q.sym), VPOINTER_OTHER);
  _V0any_Q = VEncodePointer(VInternSymbol(-147461932, &_VW_V0any_Q.sym), VPOINTER_OTHER);
  _V0split__while = VEncodePointer(VInternSymbol(180691919, &_VW_V0split__while.sym), VPOINTER_OTHER);
  _V0drop__while = VEncodePointer(VInternSymbol(-1932936414, &_VW_V0drop__while.sym), VPOINTER_OTHER);
  _V0take__while = VEncodePointer(VInternSymbol(-1449233760, &_VW_V0take__while.sym), VPOINTER_OTHER);
  _V0partition = VEncodePointer(VInternSymbol(-1219313018, &_VW_V0partition.sym), VPOINTER_OTHER);
  _V0filter = VEncodePointer(VInternSymbol(-52975199, &_VW_V0filter.sym), VPOINTER_OTHER);
  _V0append__map_B = VEncodePointer(VInternSymbol(1728411039, &_VW_V0append__map_B.sym), VPOINTER_OTHER);
  _V0append__map = VEncodePointer(VInternSymbol(-2135287522, &_VW_V0append__map.sym), VPOINTER_OTHER);
  _V0fold__right = VEncodePointer(VInternSymbol(737791577, &_VW_V0fold__right.sym), VPOINTER_OTHER);
  _V0fold = VEncodePointer(VInternSymbol(2090893058, &_VW_V0fold.sym), VPOINTER_OTHER);
  _V0count = VEncodePointer(VInternSymbol(3689525, &_VW_V0count.sym), VPOINTER_OTHER);
  _V0unzip5 = VEncodePointer(VInternSymbol(1556752558, &_VW_V0unzip5.sym), VPOINTER_OTHER);
  _V0unzip4 = VEncodePointer(VInternSymbol(1623508883, &_VW_V0unzip4.sym), VPOINTER_OTHER);
  _V0unzip3 = VEncodePointer(VInternSymbol(624461900, &_VW_V0unzip3.sym), VPOINTER_OTHER);
  _V0unzip2 = VEncodePointer(VInternSymbol(-216934690, &_VW_V0unzip2.sym), VPOINTER_OTHER);
  _V0unzip1 = VEncodePointer(VInternSymbol(-1263425126, &_VW_V0unzip1.sym), VPOINTER_OTHER);
  _V0zip = VEncodePointer(VInternSymbol(171507829, &_VW_V0zip.sym), VPOINTER_OTHER);
  _V0concatenate = VEncodePointer(VInternSymbol(552835501, &_VW_V0concatenate.sym), VPOINTER_OTHER);
  _V0append_B = VEncodePointer(VInternSymbol(-622418166, &_VW_V0append_B.sym), VPOINTER_OTHER);
  _V0split__at = VEncodePointer(VInternSymbol(-397762858, &_VW_V0split__at.sym), VPOINTER_OTHER);
  _V0drop__right = VEncodePointer(VInternSymbol(-377735426, &_VW_V0drop__right.sym), VPOINTER_OTHER);
  _V0take__right = VEncodePointer(VInternSymbol(427694580, &_VW_V0take__right.sym), VPOINTER_OTHER);
  _V0drop = VEncodePointer(VInternSymbol(-174916613, &_VW_V0drop.sym), VPOINTER_OTHER);
  _V0take = VEncodePointer(VInternSymbol(-139209804, &_VW_V0take.sym), VPOINTER_OTHER);
  _V0car_Pcdr = VEncodePointer(VInternSymbol(-575765119, &_VW_V0car_Pcdr.sym), VPOINTER_OTHER);
  _V0tenth = VEncodePointer(VInternSymbol(695095262, &_VW_V0tenth.sym), VPOINTER_OTHER);
  _V0ninth = VEncodePointer(VInternSymbol(1617943990, &_VW_V0ninth.sym), VPOINTER_OTHER);
  _V0eighth = VEncodePointer(VInternSymbol(-625932867, &_VW_V0eighth.sym), VPOINTER_OTHER);
  _V0seventh = VEncodePointer(VInternSymbol(-656727372, &_VW_V0seventh.sym), VPOINTER_OTHER);
  _V0sixth = VEncodePointer(VInternSymbol(997818509, &_VW_V0sixth.sym), VPOINTER_OTHER);
  _V0fifth = VEncodePointer(VInternSymbol(-102958364, &_VW_V0fifth.sym), VPOINTER_OTHER);
  _V0fourth = VEncodePointer(VInternSymbol(1186982694, &_VW_V0fourth.sym), VPOINTER_OTHER);
  _V0third = VEncodePointer(VInternSymbol(312461507, &_VW_V0third.sym), VPOINTER_OTHER);
  _V0second = VEncodePointer(VInternSymbol(1298006071, &_VW_V0second.sym), VPOINTER_OTHER);
  _V0first = VEncodePointer(VInternSymbol(-457273510, &_VW_V0first.sym), VPOINTER_OTHER);
  _V0list__tabulate = VEncodePointer(VInternSymbol(683417405, &_VW_V0list__tabulate.sym), VPOINTER_OTHER);
  _V0iota = VEncodePointer(VInternSymbol(786799409, &_VW_V0iota.sym), VPOINTER_OTHER);
  _V40_V10vcore_Dnull_Q = VEncodePointer(VLookupConstant("_V40_V10vcore_Dnull_Q", &_VW_V40_V10vcore_Dnull_Q), VPOINTER_CLOSURE);
  _V40_V10vcore_Dcar = VEncodePointer(VLookupConstant("_V40_V10vcore_Dcar", &_VW_V40_V10vcore_Dcar), VPOINTER_CLOSURE);
  _V40_V10vcore_Dcdr = VEncodePointer(VLookupConstant("_V40_V10vcore_Dcdr", &_VW_V40_V10vcore_Dcdr), VPOINTER_CLOSURE);
  _V0cadddr = VEncodePointer(VInternSymbol(-448763463, &_VW_V0cadddr.sym), VPOINTER_OTHER);
  _V0caddr = VEncodePointer(VInternSymbol(396082650, &_VW_V0caddr.sym), VPOINTER_OTHER);
  _V0cadr = VEncodePointer(VInternSymbol(137264287, &_VW_V0cadr.sym), VPOINTER_OTHER);
  _V0list__ref = VEncodePointer(VInternSymbol(-297841368, &_VW_V0list__ref.sym), VPOINTER_OTHER);
  _V0list = VEncodePointer(VInternSymbol(-1594870040, &_VW_V0list.sym), VPOINTER_OTHER);
  _V0append = VEncodePointer(VInternSymbol(-700471979, &_VW_V0append.sym), VPOINTER_OTHER);
  _V0map = VEncodePointer(VInternSymbol(-1940887657, &_VW_V0map.sym), VPOINTER_OTHER);
  _V0values = VEncodePointer(VInternSymbol(711325068, &_VW_V0values.sym), VPOINTER_OTHER);
  _V0caar = VEncodePointer(VInternSymbol(-610927850, &_VW_V0caar.sym), VPOINTER_OTHER);
  _V0equal_Q = VEncodePointer(VInternSymbol(1746439164, &_VW_V0equal_Q.sym), VPOINTER_OTHER);
  _V40VMultiImport = VEncodePointer(VLookupConstant("_V40VMultiImport", &_VW_V40VMultiImport), VPOINTER_CLOSURE);
}
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0my__num__pairs_V10_Dloop_D230, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0my__num__pairs, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0iota_V10_Dloop_D227, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0iota_V10_Dloop_D222, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0iota_V10_Dloop_D218, _var0, _var1);
V_DECLARE_FUNC_MIN(_V50_V0vanity_V0list_V0iota);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0list__tabulate_V10_Dloop_D215, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0list__tabulate, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0fifth, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0sixth, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0seventh, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0eighth, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0ninth, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0tenth, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0car_Pcdr, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0take, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0drop, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0take__right_V10_Dloop_D199, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0take__right, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0drop__right_V10_Dloop_D194, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0drop__right, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0split__at, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0append_B_V10_Dloop_D178, _var0, _var1);
V_DECLARE_FUNC_MIN(_V50_V0vanity_V0list_V0append_B);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0concatenate, _var0, _var1);
V_DECLARE_FUNC_MIN(_V50_V0vanity_V0list_V0zip, _var0);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0unzip1, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0unzip2, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0unzip3, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0unzip4, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0unzip5, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0count_V10_Dloop_D163, _var0, _var1, _var2, _var3);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0count, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0fold, _var0, _var1, _var2, _var3);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0fold__right, _var0, _var1, _var2, _var3);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0append__map_V10_Dloop_D153, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0append__map_V10_Dloop_D147, _var0, _var1, _var2, _var3);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0append__map_V10_Dloop_D140, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0append__map_V10_Dloop_D135, _var0, _var1);
V_DECLARE_FUNC_MIN(_V50_V0vanity_V0list_V0append__map);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D131, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D125, _var0, _var1, _var2, _var3);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D118, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D113, _var0, _var1);
V_DECLARE_FUNC_MIN(_V50_V0vanity_V0list_V0append__map_B);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0filter, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0partition, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0take__while, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0drop__while, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0split__while, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0any_Q, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0every_Q, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0list__index_V10_Dloop_D90, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0list__index, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0insert, _var0, _var1, _var2, _var3);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0delete, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0assq__update, _var0, _var1, _var2, _var3);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0assv__update, _var0, _var1, _var2, _var3);
V_DECLARE_FUNC_MIN(_V50_V0vanity_V0list_V0assoc__update);
static void _V0vanity_V0list_V20_V0k2(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_V0k2" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0list_V20_V0k2, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((##intrinsic "VMultiImport") (bruijn ##.k.235 2 0) (##string ##.string.659) (bruijn ##.x.236 0 0) 'equal? 'caar 'values 'map 'append 'list 'list-ref 'cadr 'caddr 'cadddr)
    VCallFuncWithGC(runtime, (VFunc)VMultiImport, 13,
      statics->up->vars[0],
      VEncodePointer(&_V10_Dstring_D659.sym, VPOINTER_OTHER),
      _var0,
      _V0equal_Q,
      _V0caar,
      _V0values,
      _V0map,
      _V0append,
      _V0list,
      _V0list__ref,
      _V0cadr,
      _V0caddr,
      _V0cadddr);
}
static void _V0vanity_V0list_V20_V0k1(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_V0k1" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0list_V20_V0k1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.vector (close _V0vanity_V0list_V20_V0k2) (bruijn ##.x.237 0 0))
    VCallFuncWithGC(runtime, (VFunc)VCreateVector, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0list_V20_V0k2, self)))),
      _var0);
}
static void _V0vanity_V0list_V20_V0lambda2(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_V0lambda2" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0list_V20_V0lambda2, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0list_V20_V0k1) (##string ##.string.660))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0list_V20_V0k1, self)))),
      VEncodePointer(&_V10_Dstring_D660.sym, VPOINTER_OTHER));
}
static void _V10_Dassoc__update_D25_V0k5(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dassoc__update_D25_V0k5" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dassoc__update_D25_V0k5, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.240 3 0) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.lst.73 3 1)) (bruijn ##.x.247 0 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VInlineCons2(runtime,
        VInlineCar2(runtime,
        statics->up->up->vars[1]),
        _var0));
}
static void _V10_Dassoc__update_D25_V0k4(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dassoc__update_D25_V0k4" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dassoc__update_D25_V0k4, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.243 0 0) ((bruijn ##.k.240 2 0) (##inline ##vcore.cons (##inline ##vcore.cons (bruijn ##.x.74 2 2) (bruijn ##.val.75 2 3)) (##inline ##vcore.cdr (bruijn ##.lst.73 2 1)))) (##qualified-call (vanity list assoc-update) #t (bruijn ##.assoc-update.25 3 0) (close _V10_Dassoc__update_D25_V0k5) (##inline ##vcore.cdr (bruijn ##.lst.73 2 1)) (bruijn ##.x.74 2 2) (bruijn ##.val.75 2 3)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VInlineCons2(runtime,
        VInlineCons2(runtime,
        statics->up->vars[2],
        statics->up->vars[3]),
        VInlineCdr2(runtime,
        statics->up->vars[1])));
} else {
  {
   VEnv * _closure_env = _V60_V0vanity_V0list;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dassoc__update_D25_V0k5, self))));
    VWORD _arg1 = 
      VInlineCdr2(runtime,
        statics->up->vars[1]);
    VWORD _arg2 = 
      statics->up->vars[2];
    VWORD _arg3 = 
      statics->up->vars[3];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0assoc__update, _V60_V0vanity_V0list)}, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0list_V0assoc__update(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
}
static void _V10_Dassoc__update_D25_V0k3(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dassoc__update_D25_V0k3" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dassoc__update_D25_V0k3, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.=.76 1 4) (close _V10_Dassoc__update_D25_V0k4) (bruijn ##.x.74 1 2) (bruijn ##.x.249 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[4]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dassoc__update_D25_V0k4, self)))),
      statics->vars[2],
      _var0);
}
__attribute__((used)) static void _V20CaseError__V50_V0vanity_V0list_V0assoc__update(VRuntime * runtime, VEnv * statics, int argc, ...) {
 // ("_V50_V0vanity_V0list_V0assoc__update" #t (4 (##qualified-call (vanity list assoc-update) #t (bruijn ##.assoc-update.25 1 0) (bruijn ##.k.239 0 0) (bruijn ##.lst.70 0 1) (bruijn ##.x.71 0 2) (bruijn ##.val.72 0 3) (bruijn ##.equal?.0 2 1))) (5 (if (##inline ##vcore.null? (bruijn ##.lst.73 0 1)) ((bruijn ##.k.240 0 0) (##inline ##vcore.cons (##inline ##vcore.cons (bruijn ##.x.74 0 2) (bruijn ##.val.75 0 3)) '())) ((bruijn ##.caar.1 2 2) (close _V10_Dassoc__update_D25_V0k3) (bruijn ##.lst.73 0 1)))))
 VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0assoc__update, got ~D~N"
 "-- expected 4~N"
 "-- expected 5~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V50_V0vanity_V0list_V0assoc__update(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V20Case0__V50_V0vanity_V0list_V0assoc__update" };
 VRecordCall2(runtime, &dbg);
  // (##qualified-call (vanity list assoc-update) #t (bruijn ##.assoc-update.25 1 0) (bruijn ##.k.239 0 0) (bruijn ##.lst.70 0 1) (bruijn ##.x.71 0 2) (bruijn ##.val.72 0 3) (bruijn ##.equal?.0 2 1))
  {
   VEnv * _closure_env = _V60_V0vanity_V0list;
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      _var1;
    VWORD _arg2 = 
      _var2;
    VWORD _arg3 = 
      _var3;
    VWORD _arg4 = 
      statics->up->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0assoc__update, _V60_V0vanity_V0list)}, 5, _arg0, _arg1, _arg2, _arg3, _arg4);
    } else {
       _V50_V0vanity_V0list_V0assoc__update(runtime, _closure_env, 5, _arg0, _arg1, _arg2, _arg3, _arg4);
    }
  }
}
__attribute__((used)) static void _V20Case1__V50_V0vanity_V0list_V0assoc__update(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4) {
 static VDebugInfo dbg = { "_V20Case1__V50_V0vanity_V0list_V0assoc__update" };
 VRecordCall2(runtime, &dbg);
  struct { VEnv self; VWORD argv[5]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 5, 5, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _var3;
  self->vars[4] = _var4;
  // (if (##inline ##vcore.null? (bruijn ##.lst.73 0 1)) ((bruijn ##.k.240 0 0) (##inline ##vcore.cons (##inline ##vcore.cons (bruijn ##.x.74 0 2) (bruijn ##.val.75 0 3)) '())) ((bruijn ##.caar.1 2 2) (close _V10_Dassoc__update_D25_V0k3) (bruijn ##.lst.73 0 1)))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var1))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VInlineCons2(runtime,
        VInlineCons2(runtime,
        _var2,
        _var3),
        VNULL));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[2]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dassoc__update_D25_V0k3, self)))),
      _var1);
}
}
void _V50_V0vanity_V0list_V0assoc__update(VRuntime * runtime, VEnv * statics, int argc, ...);
asm(
".intel_syntax noprefix\n"
#ifdef __linux__
".type _V50_V0vanity_V0list_V0assoc__update, @function\n"
#endif
".globl _V50_V0vanity_V0list_V0assoc__update\n"
"_V50_V0vanity_V0list_V0assoc__update:\n"
"    cmp " ARGC_REG ", 4\n"
"    je _V20Case0__V50_V0vanity_V0list_V0assoc__update\n"
"    cmp " ARGC_REG ", 5\n"
"    je _V20Case1__V50_V0vanity_V0list_V0assoc__update\n"
"    jmp _V20CaseError__V50_V0vanity_V0list_V0assoc__update\n"
);
void _V50_V0vanity_V0list_V0assv__update_V0k7(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0assv__update_V0k7" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0assv__update_V0k7, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.250 2 0) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.lst.77 2 1)) (bruijn ##.x.257 0 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VInlineCons2(runtime,
        VInlineCar2(runtime,
        statics->up->vars[1]),
        _var0));
}
void _V50_V0vanity_V0list_V0assv__update_V0k6(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0assv__update_V0k6" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0assv__update_V0k6, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.eq? (bruijn ##.x.78 1 2) (bruijn ##.x.259 0 0)) ((bruijn ##.k.250 1 0) (##inline ##vcore.cons (##inline ##vcore.cons (bruijn ##.x.78 1 2) (bruijn ##.val.79 1 3)) (##inline ##vcore.cdr (bruijn ##.lst.77 1 1)))) (##qualified-call (vanity list assoc-update) #t (bruijn ##.assoc-update.25 2 0) (close _V50_V0vanity_V0list_V0assv__update_V0k7) (##inline ##vcore.cdr (bruijn ##.lst.77 1 1)) (bruijn ##.x.78 1 2) (bruijn ##.val.79 1 3)))
if(VDecodeBool(
VInlineEq2(runtime,
        statics->vars[2],
        _var0))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VInlineCons2(runtime,
        VInlineCons2(runtime,
        statics->vars[2],
        statics->vars[3]),
        VInlineCdr2(runtime,
        statics->vars[1])));
} else {
  {
   VEnv * _closure_env = _V60_V0vanity_V0list;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0assv__update_V0k7, self))));
    VWORD _arg1 = 
      VInlineCdr2(runtime,
        statics->vars[1]);
    VWORD _arg2 = 
      statics->vars[2];
    VWORD _arg3 = 
      statics->vars[3];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0assoc__update, _V60_V0vanity_V0list)}, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0list_V0assoc__update(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
}
void _V50_V0vanity_V0list_V0assv__update(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0assv__update" };
 VRecordCall2(runtime, &dbg);
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0assv__update, got ~D~N"
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
  // (if (##inline ##vcore.null? (bruijn ##.lst.77 0 1)) ((bruijn ##.k.250 0 0) (##inline ##vcore.cons (##inline ##vcore.cons (bruijn ##.x.78 0 2) (bruijn ##.val.79 0 3)) '())) ((bruijn ##.caar.1 2 2) (close _V50_V0vanity_V0list_V0assv__update_V0k6) (bruijn ##.lst.77 0 1)))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var1))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VInlineCons2(runtime,
        VInlineCons2(runtime,
        _var2,
        _var3),
        VNULL));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[2]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0assv__update_V0k6, self)))),
      _var1);
}
}
void _V50_V0vanity_V0list_V0assq__update_V0k9(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0assq__update_V0k9" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0assq__update_V0k9, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.260 2 0) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.lst.80 2 1)) (bruijn ##.x.267 0 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VInlineCons2(runtime,
        VInlineCar2(runtime,
        statics->up->vars[1]),
        _var0));
}
void _V50_V0vanity_V0list_V0assq__update_V0k8(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0assq__update_V0k8" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0assq__update_V0k8, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.eq? (bruijn ##.x.81 1 2) (bruijn ##.x.269 0 0)) ((bruijn ##.k.260 1 0) (##inline ##vcore.cons (##inline ##vcore.cons (bruijn ##.x.81 1 2) (bruijn ##.val.82 1 3)) (##inline ##vcore.cdr (bruijn ##.lst.80 1 1)))) (##qualified-call (vanity list assoc-update) #t (bruijn ##.assoc-update.25 2 0) (close _V50_V0vanity_V0list_V0assq__update_V0k9) (##inline ##vcore.cdr (bruijn ##.lst.80 1 1)) (bruijn ##.x.81 1 2) (bruijn ##.val.82 1 3)))
if(VDecodeBool(
VInlineEq2(runtime,
        statics->vars[2],
        _var0))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VInlineCons2(runtime,
        VInlineCons2(runtime,
        statics->vars[2],
        statics->vars[3]),
        VInlineCdr2(runtime,
        statics->vars[1])));
} else {
  {
   VEnv * _closure_env = _V60_V0vanity_V0list;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0assq__update_V0k9, self))));
    VWORD _arg1 = 
      VInlineCdr2(runtime,
        statics->vars[1]);
    VWORD _arg2 = 
      statics->vars[2];
    VWORD _arg3 = 
      statics->vars[3];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0assoc__update, _V60_V0vanity_V0list)}, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0list_V0assoc__update(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
}
void _V50_V0vanity_V0list_V0assq__update(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0assq__update" };
 VRecordCall2(runtime, &dbg);
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0assq__update, got ~D~N"
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
  // (if (##inline ##vcore.null? (bruijn ##.lst.80 0 1)) ((bruijn ##.k.260 0 0) (##inline ##vcore.cons (##inline ##vcore.cons (bruijn ##.x.81 0 2) (bruijn ##.val.82 0 3)) '())) ((bruijn ##.caar.1 2 2) (close _V50_V0vanity_V0list_V0assq__update_V0k8) (bruijn ##.lst.80 0 1)))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var1))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VInlineCons2(runtime,
        VInlineCons2(runtime,
        _var2,
        _var3),
        VNULL));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[2]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0assq__update_V0k8, self)))),
      _var1);
}
}
void _V50_V0vanity_V0list_V0delete_V0k10(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0delete_V0k10" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0delete_V0k10, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.270 3 0) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.lst.83 3 1)) (bruijn ##.x.273 0 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VInlineCons2(runtime,
        VInlineCar2(runtime,
        statics->up->up->vars[1]),
        _var0));
}
void _V50_V0vanity_V0list_V0delete(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0delete" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0delete, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 1 1 (##.reg.640) ((##vcore.= (bruijn ##.i.84 1 2) 0)) (if (bruijn ##.reg.640 0 0) ((bruijn ##.k.270 1 0) (##inline ##vcore.cdr (bruijn ##.lst.83 1 1))) (basic-block 1 1 (##.reg.641) ((##vcore.- (bruijn ##.i.84 2 2) 1)) (##qualified-call (vanity list delete) #t (bruijn ##.delete.28 3 3) (close _V50_V0vanity_V0list_V0delete_V0k10) (##inline ##vcore.cdr (bruijn ##.lst.83 2 1)) (bruijn ##.reg.641 0 0)))))
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
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VInlineCdr2(runtime,
        statics->vars[1]));
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
   VEnv * _closure_env = _V60_V0vanity_V0list;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0delete_V0k10, self))));
    VWORD _arg1 = 
      VInlineCdr2(runtime,
        statics->up->vars[1]);
    VWORD _arg2 = 
      self->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0delete, _V60_V0vanity_V0list)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0list_V0delete(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
    }
}
void _V50_V0vanity_V0list_V0insert_V0k11(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0insert_V0k11" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0insert_V0k11, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.276 3 0) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.lst.85 3 1)) (bruijn ##.x.279 0 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VInlineCons2(runtime,
        VInlineCar2(runtime,
        statics->up->up->vars[1]),
        _var0));
}
void _V50_V0vanity_V0list_V0insert(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0insert" };
 VRecordCall2(runtime, &dbg);
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0insert, got ~D~N"
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
  // (basic-block 1 1 (##.reg.642) ((##vcore.= (bruijn ##.i.86 1 2) 0)) (if (bruijn ##.reg.642 0 0) ((bruijn ##.k.276 1 0) (##inline ##vcore.cons (bruijn ##.x.87 1 3) (bruijn ##.lst.85 1 1))) (basic-block 1 1 (##.reg.643) ((##vcore.- (bruijn ##.i.86 2 2) 1)) (##qualified-call (vanity list insert) #t (bruijn ##.insert.29 3 4) (close _V50_V0vanity_V0list_V0insert_V0k11) (##inline ##vcore.cdr (bruijn ##.lst.85 2 1)) (bruijn ##.reg.643 0 0) (bruijn ##.x.87 2 3)))))
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
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VInlineCons2(runtime,
        statics->vars[3],
        statics->vars[1]));
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
   VEnv * _closure_env = _V60_V0vanity_V0list;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0insert_V0k11, self))));
    VWORD _arg1 = 
      VInlineCdr2(runtime,
        statics->up->vars[1]);
    VWORD _arg2 = 
      self->vars[0];
    VWORD _arg3 = 
      statics->up->vars[3];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0insert, _V60_V0vanity_V0list)}, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0list_V0insert(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
    }
}
    }
}
void _V50_V0vanity_V0list_V0list__index_V10_Dloop_D90_V0k12(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0list__index_V10_Dloop_D90_V0k12" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0list__index_V10_Dloop_D90_V0k12, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.285 0 0) ((bruijn ##.k.283 1 0) (bruijn ##.i.91 1 1)) (basic-block 1 1 (##.reg.644) ((##vcore.+ (bruijn ##.i.91 2 1) 1)) (##qualified-call (vanity list list-index ##.loop.90) #f (bruijn ##.loop.90 3 0) (bruijn ##.k.283 2 0) (bruijn ##.reg.644 0 0) (##inline ##vcore.cdr (bruijn ##.lst.92 2 2)))))
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
    VClosure * _closure = VDecodeClosure(statics->up->up->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->up->vars[0];
    VWORD _arg1 = 
      self->vars[0];
    VWORD _arg2 = 
      VInlineCdr2(runtime,
        statics->up->vars[2]);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0list_V0list__index_V10_Dloop_D90(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
}
void _V50_V0vanity_V0list_V0list__index_V10_Dloop_D90(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0list__index_V10_Dloop_D90" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0list__index_V10_Dloop_D90, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (if (##inline ##vcore.null? (bruijn ##.p.88 2 1)) ((bruijn ##.k.283 0 0) #f) ((bruijn ##.p.88 2 1) (close _V50_V0vanity_V0list_V0list__index_V10_Dloop_D90_V0k12) (##inline ##vcore.car (bruijn ##.lst.92 0 2))))
if(VDecodeBool(
VInlineNullP2(runtime,
        statics->up->vars[1]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[1]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0list__index_V10_Dloop_D90_V0k12, self)))),
      VInlineCar2(runtime,
        _var2));
}
}
void _V50_V0vanity_V0list_V0list__index(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0list__index" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0list__index, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (letrec 1 ((close "_V50_V0vanity_V0list_V0list__index_V10_Dloop_D90")) (##qualified-call (vanity list list-index ##.loop.90) #f (bruijn ##.loop.90 0 0) (bruijn ##.k.282 1 0) 0 (bruijn ##.lst.89 1 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0list__index_V10_Dloop_D90, self))));
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      VEncodeInt(0l);
    VWORD _arg2 = 
      statics->vars[2];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0list_V0list__index_V10_Dloop_D90(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
void _V50_V0vanity_V0list_V0every_Q_V0k13(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0every_Q_V0k13" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0every_Q_V0k13, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.291 0 0) (##qualified-call (vanity list every?) #t (bruijn ##.every?.31 2 6) (bruijn ##.k.289 1 0) (bruijn ##.p.93 1 1) (##inline ##vcore.cdr (bruijn ##.lst.94 1 2))) ((bruijn ##.k.289 1 0) #f))
if(VDecodeBool(
_var0)) {
  {
   VEnv * _closure_env = _V60_V0vanity_V0list;
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      statics->vars[1];
    VWORD _arg2 = 
      VInlineCdr2(runtime,
        statics->vars[2]);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0every_Q, _V60_V0vanity_V0list)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0list_V0every_Q(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0list_V0every_Q(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0every_Q" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0every_Q, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (if (##inline ##vcore.null? (bruijn ##.lst.94 0 2)) ((bruijn ##.k.289 0 0) #t) ((bruijn ##.p.93 0 1) (close _V50_V0vanity_V0list_V0every_Q_V0k13) (##inline ##vcore.car (bruijn ##.lst.94 0 2))))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var2))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(true));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var1), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0every_Q_V0k13, self)))),
      VInlineCar2(runtime,
        _var2));
}
}
void _V50_V0vanity_V0list_V0any_Q_V0k14(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0any_Q_V0k14" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0any_Q_V0k14, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.296 0 0) ((bruijn ##.k.294 1 0) #t) (##qualified-call (vanity list any?) #t (bruijn ##.any?.32 2 7) (bruijn ##.k.294 1 0) (bruijn ##.p.95 1 1) (##inline ##vcore.cdr (bruijn ##.lst.96 1 2))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(true));
} else {
  {
   VEnv * _closure_env = _V60_V0vanity_V0list;
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      statics->vars[1];
    VWORD _arg2 = 
      VInlineCdr2(runtime,
        statics->vars[2]);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0any_Q, _V60_V0vanity_V0list)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0list_V0any_Q(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
}
void _V50_V0vanity_V0list_V0any_Q(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0any_Q" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0any_Q, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (if (##inline ##vcore.null? (bruijn ##.lst.96 0 2)) ((bruijn ##.k.294 0 0) #f) ((bruijn ##.p.95 0 1) (close _V50_V0vanity_V0list_V0any_Q_V0k14) (##inline ##vcore.car (bruijn ##.lst.96 0 2))))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var2))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var1), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0any_Q_V0k14, self)))),
      VInlineCar2(runtime,
        _var2));
}
}
void _V50_V0vanity_V0list_V0split__while_V0k17(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0split__while_V0k17" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0split__while_V0k17, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.307 1 0) (##inline ##vcore.not (bruijn ##.x.308 0 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VInlineNot2(runtime,
        _var0));
}
void _V50_V0vanity_V0list_V0split__while_V0k16(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0split__while_V0k16" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0split__while_V0k16, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.306 1 0) ((bruijn ##.k.307 0 0) (bruijn ##.p.306 1 0)) ((bruijn ##.pred.97 2 1) (close _V50_V0vanity_V0list_V0split__while_V0k17) (##inline ##vcore.car (bruijn ##.lst.98 2 2))))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->vars[0]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[1]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0split__while_V0k17, self)))),
      VInlineCar2(runtime,
        statics->up->vars[2]));
}
}
void _V50_V0vanity_V0list_V0split__while_V0lambda4(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0split__while_V0lambda4" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0split__while_V0lambda4, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity list split-while) #t (bruijn ##.split-while.33 4 8) (bruijn ##.k.301 0 0) (bruijn ##.pred.97 3 1) (##inline ##vcore.cdr (bruijn ##.lst.98 3 2)))
  {
   VEnv * _closure_env = _V60_V0vanity_V0list;
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      statics->up->up->vars[1];
    VWORD _arg2 = 
      VInlineCdr2(runtime,
        statics->up->up->vars[2]);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0split__while, _V60_V0vanity_V0list)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0list_V0split__while(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0list_V0split__while_V0lambda5(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0split__while_V0lambda5" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0split__while_V0lambda5, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  // ((bruijn ##.values.2 5 3) (bruijn ##.k.303 0 0) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.lst.98 3 2)) (bruijn ##.t.99 0 1)) (bruijn ##.d.100 0 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 3)), 3,
      _var0,
      VInlineCons2(runtime,
        VInlineCar2(runtime,
        statics->up->up->vars[2]),
        _var1),
      _var2);
}
void _V50_V0vanity_V0list_V0split__while_V0k18(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0split__while_V0k18" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0split__while_V0k18, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.300 0 0) ((bruijn ##.values.2 4 3) (bruijn ##.k.299 2 0) '() (bruijn ##.lst.98 2 2)) (##vcore.call-with-values (bruijn ##.k.299 2 0) (close _V50_V0vanity_V0list_V0split__while_V0lambda4) (close _V50_V0vanity_V0list_V0split__while_V0lambda5)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[3]), 3,
      statics->up->vars[0],
      VNULL,
      statics->up->vars[2]);
} else {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->up->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0split__while_V0lambda4, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0split__while_V0lambda5, self)))));
}
}
void _V50_V0vanity_V0list_V0split__while_V0k15(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0split__while_V0k15" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0split__while_V0k15, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0list_V0split__while_V0k16) (close _V50_V0vanity_V0list_V0split__while_V0k18))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0split__while_V0k16, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0split__while_V0k18, self)))));
}
void _V50_V0vanity_V0list_V0split__while(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0split__while" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0split__while, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((close _V50_V0vanity_V0list_V0split__while_V0k15) (##inline ##vcore.null? (bruijn ##.lst.98 0 2)))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0split__while_V0k15, self)), 1,
      VInlineNullP2(runtime,
        _var2));
}
void _V50_V0vanity_V0list_V0drop__while_V0k21(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0drop__while_V0k21" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0drop__while_V0k21, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.314 1 0) (##inline ##vcore.not (bruijn ##.x.315 0 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VInlineNot2(runtime,
        _var0));
}
void _V50_V0vanity_V0list_V0drop__while_V0k20(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0drop__while_V0k20" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0drop__while_V0k20, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.313 1 0) ((bruijn ##.k.314 0 0) (bruijn ##.p.313 1 0)) ((bruijn ##.pred.101 2 1) (close _V50_V0vanity_V0list_V0drop__while_V0k21) (##inline ##vcore.car (bruijn ##.lst.102 2 2))))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->vars[0]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[1]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0drop__while_V0k21, self)))),
      VInlineCar2(runtime,
        statics->up->vars[2]));
}
}
void _V50_V0vanity_V0list_V0drop__while_V0k22(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0drop__while_V0k22" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0drop__while_V0k22, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.311 0 0) ((bruijn ##.k.310 2 0) (bruijn ##.lst.102 2 2)) (##qualified-call (vanity list drop-while) #t (bruijn ##.drop-while.34 3 9) (bruijn ##.k.310 2 0) (bruijn ##.pred.101 2 1) (##inline ##vcore.cdr (bruijn ##.lst.102 2 2))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      statics->up->vars[2]);
} else {
  {
   VEnv * _closure_env = _V60_V0vanity_V0list;
    VWORD _arg0 = 
      statics->up->vars[0];
    VWORD _arg1 = 
      statics->up->vars[1];
    VWORD _arg2 = 
      VInlineCdr2(runtime,
        statics->up->vars[2]);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0drop__while, _V60_V0vanity_V0list)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0list_V0drop__while(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
}
void _V50_V0vanity_V0list_V0drop__while_V0k19(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0drop__while_V0k19" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0drop__while_V0k19, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0list_V0drop__while_V0k20) (close _V50_V0vanity_V0list_V0drop__while_V0k22))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0drop__while_V0k20, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0drop__while_V0k22, self)))));
}
void _V50_V0vanity_V0list_V0drop__while(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0drop__while" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0drop__while, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((close _V50_V0vanity_V0list_V0drop__while_V0k19) (##inline ##vcore.null? (bruijn ##.lst.102 0 2)))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0drop__while_V0k19, self)), 1,
      VInlineNullP2(runtime,
        _var2));
}
void _V50_V0vanity_V0list_V0take__while_V0k25(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0take__while_V0k25" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0take__while_V0k25, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.323 1 0) (##inline ##vcore.not (bruijn ##.x.324 0 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VInlineNot2(runtime,
        _var0));
}
void _V50_V0vanity_V0list_V0take__while_V0k24(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0take__while_V0k24" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0take__while_V0k24, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.322 1 0) ((bruijn ##.k.323 0 0) (bruijn ##.p.322 1 0)) ((bruijn ##.pred.103 2 1) (close _V50_V0vanity_V0list_V0take__while_V0k25) (##inline ##vcore.car (bruijn ##.lst.104 2 2))))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->vars[0]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[1]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0take__while_V0k25, self)))),
      VInlineCar2(runtime,
        statics->up->vars[2]));
}
}
void _V50_V0vanity_V0list_V0take__while_V0k27(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0take__while_V0k27" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0take__while_V0k27, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.317 3 0) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.lst.104 3 2)) (bruijn ##.x.320 0 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VInlineCons2(runtime,
        VInlineCar2(runtime,
        statics->up->up->vars[2]),
        _var0));
}
void _V50_V0vanity_V0list_V0take__while_V0k26(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0take__while_V0k26" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0take__while_V0k26, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.318 0 0) ((bruijn ##.k.317 2 0) '()) (##qualified-call (vanity list take-while) #t (bruijn ##.take-while.35 3 10) (close _V50_V0vanity_V0list_V0take__while_V0k27) (bruijn ##.pred.103 2 1) (##inline ##vcore.cdr (bruijn ##.lst.104 2 2))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VNULL);
} else {
  {
   VEnv * _closure_env = _V60_V0vanity_V0list;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0take__while_V0k27, self))));
    VWORD _arg1 = 
      statics->up->vars[1];
    VWORD _arg2 = 
      VInlineCdr2(runtime,
        statics->up->vars[2]);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0take__while, _V60_V0vanity_V0list)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0list_V0take__while(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
}
void _V50_V0vanity_V0list_V0take__while_V0k23(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0take__while_V0k23" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0take__while_V0k23, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0list_V0take__while_V0k24) (close _V50_V0vanity_V0list_V0take__while_V0k26))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0take__while_V0k24, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0take__while_V0k26, self)))));
}
void _V50_V0vanity_V0list_V0take__while(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0take__while" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0take__while, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((close _V50_V0vanity_V0list_V0take__while_V0k23) (##inline ##vcore.null? (bruijn ##.lst.104 0 2)))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0take__while_V0k23, self)), 1,
      VInlineNullP2(runtime,
        _var2));
}
void _V50_V0vanity_V0list_V0partition_V0lambda6(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0partition_V0lambda6" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0partition_V0lambda6, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity list partition) #t (bruijn ##.partition.36 2 11) (bruijn ##.k.328 0 0) (bruijn ##.pred.105 1 1) (##inline ##vcore.cdr (bruijn ##.lst.106 1 2)))
  {
   VEnv * _closure_env = _V60_V0vanity_V0list;
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      statics->vars[1];
    VWORD _arg2 = 
      VInlineCdr2(runtime,
        statics->vars[2]);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0partition, _V60_V0vanity_V0list)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0list_V0partition(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0list_V0partition_V0k28(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0partition_V0k28" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0partition_V0k28, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.331 0 0) ((bruijn ##.values.2 4 3) (bruijn ##.k.330 1 0) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.lst.106 2 2)) (bruijn ##.l.107 1 1)) (bruijn ##.r.108 1 2)) ((bruijn ##.values.2 4 3) (bruijn ##.k.330 1 0) (bruijn ##.l.107 1 1) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.lst.106 2 2)) (bruijn ##.r.108 1 2))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[3]), 3,
      statics->vars[0],
      VInlineCons2(runtime,
        VInlineCar2(runtime,
        statics->up->vars[2]),
        statics->vars[1]),
      statics->vars[2]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[3]), 3,
      statics->vars[0],
      statics->vars[1],
      VInlineCons2(runtime,
        VInlineCar2(runtime,
        statics->up->vars[2]),
        statics->vars[2]));
}
}
void _V50_V0vanity_V0list_V0partition_V0lambda7(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0partition_V0lambda7" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0partition_V0lambda7, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((bruijn ##.pred.105 1 1) (close _V50_V0vanity_V0list_V0partition_V0k28) (##inline ##vcore.car (bruijn ##.lst.106 1 2)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[1]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0partition_V0k28, self)))),
      VInlineCar2(runtime,
        statics->vars[2]));
}
void _V50_V0vanity_V0list_V0partition(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0partition" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0partition, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (if (##inline ##vcore.null? (bruijn ##.lst.106 0 2)) ((bruijn ##.values.2 2 3) (bruijn ##.k.326 0 0) '() '()) (##vcore.call-with-values (bruijn ##.k.326 0 0) (close _V50_V0vanity_V0list_V0partition_V0lambda6) (close _V50_V0vanity_V0list_V0partition_V0lambda7)))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var2))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[3]), 3,
      _var0,
      VNULL,
      VNULL);
} else {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0partition_V0lambda6, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0partition_V0lambda7, self)))));
}
}
void _V50_V0vanity_V0list_V0filter_V0k30(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0filter_V0k30" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0filter_V0k30, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.337 2 0) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.lst.110 2 2)) (bruijn ##.x.341 0 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VInlineCons2(runtime,
        VInlineCar2(runtime,
        statics->up->vars[2]),
        _var0));
}
void _V50_V0vanity_V0list_V0filter_V0k29(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0filter_V0k29" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0filter_V0k29, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.339 0 0) (##qualified-call (vanity list filter) #t (bruijn ##.filter.37 2 12) (close _V50_V0vanity_V0list_V0filter_V0k30) (bruijn ##.pred.109 1 1) (##inline ##vcore.cdr (bruijn ##.lst.110 1 2))) (##qualified-call (vanity list filter) #t (bruijn ##.filter.37 2 12) (bruijn ##.k.337 1 0) (bruijn ##.pred.109 1 1) (##inline ##vcore.cdr (bruijn ##.lst.110 1 2))))
if(VDecodeBool(
_var0)) {
  {
   VEnv * _closure_env = _V60_V0vanity_V0list;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0filter_V0k30, self))));
    VWORD _arg1 = 
      statics->vars[1];
    VWORD _arg2 = 
      VInlineCdr2(runtime,
        statics->vars[2]);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0filter, _V60_V0vanity_V0list)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0list_V0filter(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
} else {
  {
   VEnv * _closure_env = _V60_V0vanity_V0list;
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      statics->vars[1];
    VWORD _arg2 = 
      VInlineCdr2(runtime,
        statics->vars[2]);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0filter, _V60_V0vanity_V0list)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0list_V0filter(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
}
void _V50_V0vanity_V0list_V0filter(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0filter" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0filter, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (if (##inline ##vcore.null? (bruijn ##.lst.110 0 2)) ((bruijn ##.k.337 0 0) (bruijn ##.lst.110 0 2)) ((bruijn ##.pred.109 0 1) (close _V50_V0vanity_V0list_V0filter_V0k29) (##inline ##vcore.car (bruijn ##.lst.110 0 2))))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var2))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _var2);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var1), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0filter_V0k29, self)))),
      VInlineCar2(runtime,
        _var2));
}
}
void _V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D113_V0k32(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D113_V0k32" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D113_V0k32, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity list append!) #t (bruijn ##.append!.50 5 25) (bruijn ##.k.346 2 0) (bruijn ##.x.348 1 0) (bruijn ##.x.349 0 0))
  {
   VEnv * _closure_env = _V60_V0vanity_V0list;
    VWORD _arg0 = 
      statics->up->vars[0];
    VWORD _arg1 = 
      statics->vars[0];
    VWORD _arg2 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0append_B, _V60_V0vanity_V0list)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0list_V0append_B(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D113_V0k31(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D113_V0k31" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D113_V0k31, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity list append-map! ##.loop.113) #f (bruijn ##.loop.113 2 0) (close _V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D113_V0k32) (##inline ##vcore.cdr (bruijn ##.xs.114 1 1)))
  {
    VClosure * _closure = VDecodeClosure(statics->up->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D113_V0k32, self))));
    VWORD _arg1 = 
      VInlineCdr2(runtime,
        statics->vars[1]);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D113(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D113(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D113" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D113, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (if (##inline ##vcore.null? (bruijn ##.xs.114 0 1)) ((bruijn ##.k.346 0 0) '()) ((bruijn ##.f.111 2 1) (close _V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D113_V0k31) (##inline ##vcore.car (bruijn ##.xs.114 0 1))))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var1))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VNULL);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[1]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D113_V0k31, self)))),
      VInlineCar2(runtime,
        _var1));
}
}
void _V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D118_V0k34(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D118_V0k34" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D118_V0k34, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.361 1 0) ((bruijn ##.k.362 0 0) (bruijn ##.p.361 1 0)) ((bruijn ##.k.362 0 0) (##inline ##vcore.null? (bruijn ##.ys.120 2 2))))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->vars[0]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VInlineNullP2(runtime,
        statics->up->vars[2]));
}
}
void _V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D118_V0k37(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D118_V0k37" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D118_V0k37, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity list append!) #t (bruijn ##.append!.50 7 25) (bruijn ##.k.353 4 0) (bruijn ##.x.355 1 0) (bruijn ##.x.356 0 0))
  {
   VEnv * _closure_env = _V60_V0vanity_V0list;
    VWORD _arg0 = 
      statics->up->up->up->vars[0];
    VWORD _arg1 = 
      statics->vars[0];
    VWORD _arg2 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0append_B, _V60_V0vanity_V0list)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0list_V0append_B(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D118_V0k36(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D118_V0k36" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D118_V0k36, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity list append-map! ##.loop.118) #f (bruijn ##.loop.118 4 0) (close _V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D118_V0k37) (##inline ##vcore.cdr (bruijn ##.xs.119 3 1)) (##inline ##vcore.cdr (bruijn ##.ys.120 3 2)))
  {
    VClosure * _closure = VDecodeClosure(statics->up->up->up->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D118_V0k37, self))));
    VWORD _arg1 = 
      VInlineCdr2(runtime,
        statics->up->up->vars[1]);
    VWORD _arg2 = 
      VInlineCdr2(runtime,
        statics->up->up->vars[2]);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D118(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D118_V0k35(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D118_V0k35" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D118_V0k35, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.354 0 0) ((bruijn ##.k.353 2 0) '()) ((bruijn ##.f.115 4 1) (close _V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D118_V0k36) (##inline ##vcore.car (bruijn ##.xs.119 2 1)) (##inline ##vcore.car (bruijn ##.ys.120 2 2))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VNULL);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[1]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D118_V0k36, self)))),
      VInlineCar2(runtime,
        statics->up->vars[1]),
      VInlineCar2(runtime,
        statics->up->vars[2]));
}
}
void _V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D118_V0k33(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D118_V0k33" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D118_V0k33, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D118_V0k34) (close _V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D118_V0k35))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D118_V0k34, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D118_V0k35, self)))));
}
void _V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D118(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D118" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D118, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((close _V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D118_V0k33) (##inline ##vcore.null? (bruijn ##.xs.119 0 1)))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D118_V0k33, self)), 1,
      VInlineNullP2(runtime,
        _var1));
}
void _V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D125_V0k40(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D125_V0k40" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D125_V0k40, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.376 0 0) ((bruijn ##.k.375 1 0) (bruijn ##.p.376 0 0)) ((bruijn ##.k.375 1 0) (##inline ##vcore.null? (bruijn ##.zs.128 3 3))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      _var0);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VInlineNullP2(runtime,
        statics->up->up->vars[3]));
}
}
void _V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D125_V0k39(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D125_V0k39" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D125_V0k39, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.374 1 0) ((bruijn ##.k.375 0 0) (bruijn ##.p.374 1 0)) ((close _V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D125_V0k40) (##inline ##vcore.null? (bruijn ##.ys.127 2 2))))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->vars[0]);
} else {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D125_V0k40, self)), 1,
      VInlineNullP2(runtime,
        statics->up->vars[2]));
}
}
void _V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D125_V0k43(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D125_V0k43" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D125_V0k43, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity list append!) #t (bruijn ##.append!.50 7 25) (bruijn ##.k.364 4 0) (bruijn ##.x.366 1 0) (bruijn ##.x.367 0 0))
  {
   VEnv * _closure_env = _V60_V0vanity_V0list;
    VWORD _arg0 = 
      statics->up->up->up->vars[0];
    VWORD _arg1 = 
      statics->vars[0];
    VWORD _arg2 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0append_B, _V60_V0vanity_V0list)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0list_V0append_B(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D125_V0k42(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D125_V0k42" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D125_V0k42, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity list append-map! ##.loop.125) #f (bruijn ##.loop.125 4 0) (close _V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D125_V0k43) (##inline ##vcore.cdr (bruijn ##.xs.126 3 1)) (##inline ##vcore.cdr (bruijn ##.ys.127 3 2)) (##inline ##vcore.cdr (bruijn ##.zs.128 3 3)))
  {
    VClosure * _closure = VDecodeClosure(statics->up->up->up->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D125_V0k43, self))));
    VWORD _arg1 = 
      VInlineCdr2(runtime,
        statics->up->up->vars[1]);
    VWORD _arg2 = 
      VInlineCdr2(runtime,
        statics->up->up->vars[2]);
    VWORD _arg3 = 
      VInlineCdr2(runtime,
        statics->up->up->vars[3]);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D125(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D125_V0k41(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D125_V0k41" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D125_V0k41, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.365 0 0) ((bruijn ##.k.364 2 0) '()) ((bruijn ##.f.121 4 1) (close _V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D125_V0k42) (##inline ##vcore.car (bruijn ##.xs.126 2 1)) (##inline ##vcore.car (bruijn ##.ys.127 2 2)) (##inline ##vcore.car (bruijn ##.zs.128 2 3))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VNULL);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[1]), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D125_V0k42, self)))),
      VInlineCar2(runtime,
        statics->up->vars[1]),
      VInlineCar2(runtime,
        statics->up->vars[2]),
      VInlineCar2(runtime,
        statics->up->vars[3]));
}
}
void _V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D125_V0k38(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D125_V0k38" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D125_V0k38, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D125_V0k39) (close _V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D125_V0k41))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D125_V0k39, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D125_V0k41, self)))));
}
void _V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D125(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D125" };
 VRecordCall2(runtime, &dbg);
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D125, got ~D~N"
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
  // ((close _V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D125_V0k38) (##inline ##vcore.null? (bruijn ##.xs.126 0 1)))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D125_V0k38, self)), 1,
      VInlineNullP2(runtime,
        _var1));
}
void _V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D131_V0k48(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D131_V0k48" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D131_V0k48, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity list append!) #t (bruijn ##.append!.50 8 25) (bruijn ##.k.378 5 0) (bruijn ##.x.380 2 0) (bruijn ##.x.381 0 0))
  {
   VEnv * _closure_env = _V60_V0vanity_V0list;
    VWORD _arg0 = 
      VGetArg(statics, 5-1, 0);
    VWORD _arg1 = 
      statics->up->vars[0];
    VWORD _arg2 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0append_B, _V60_V0vanity_V0list)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0list_V0append_B(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D131_V0k47(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D131_V0k47" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D131_V0k47, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity list append-map! ##.loop.131) #f (bruijn ##.loop.131 5 0) (close _V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D131_V0k48) (bruijn ##.x.382 0 0))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 5-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D131_V0k48, self))));
    VWORD _arg1 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D131(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D131_V0k46(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D131_V0k46" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D131_V0k46, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.map.3 7 4) (close _V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D131_V0k47) (##intrinsic ##vcore.cdr) (bruijn ##.lsts.132 3 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 4)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D131_V0k47, self)))),
      _V40_V10vcore_Dcdr,
      statics->up->up->vars[1]);
}
void _V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D131_V0k45(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D131_V0k45" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D131_V0k45, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.apply (close _V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D131_V0k46) (bruijn ##.f.129 4 1) (bruijn ##.x.383 0 0))
    VCallFuncWithGC(runtime, (VFunc)VApply2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D131_V0k46, self)))),
      statics->up->up->up->vars[1],
      _var0);
}
void _V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D131_V0k44(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D131_V0k44" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D131_V0k44, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.379 0 0) ((bruijn ##.k.378 1 0) '()) ((bruijn ##.map.3 5 4) (close _V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D131_V0k45) (##intrinsic ##vcore.car) (bruijn ##.lsts.132 1 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VNULL);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 4)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D131_V0k45, self)))),
      _V40_V10vcore_Dcar,
      statics->vars[1]);
}
}
void _V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D131(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D131" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D131, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (##qualified-call (vanity list any?) #t (bruijn ##.any?.32 3 7) (close _V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D131_V0k44) (##intrinsic ##vcore.null?) (bruijn ##.lsts.132 0 1))
  {
   VEnv * _closure_env = _V60_V0vanity_V0list;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D131_V0k44, self))));
    VWORD _arg1 = 
      _V40_V10vcore_Dnull_Q;
    VWORD _arg2 = 
      _var1;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0any_Q, _V60_V0vanity_V0list)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0list_V0any_Q(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
__attribute__((used)) static void _V20CaseError__V50_V0vanity_V0list_V0append__map_B(VRuntime * runtime, VEnv * statics, int argc, ...) {
 // ("_V50_V0vanity_V0list_V0append__map_B" #t (3 (letrec 1 ((close "_V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D113")) (##qualified-call (vanity list append-map! ##.loop.113) #f (bruijn ##.loop.113 0 0) (bruijn ##.k.345 1 0) (bruijn ##.xs.112 1 2)))) (4 (letrec 1 ((close "_V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D118")) (##qualified-call (vanity list append-map! ##.loop.118) #f (bruijn ##.loop.118 0 0) (bruijn ##.k.352 1 0) (bruijn ##.xs.116 1 2) (bruijn ##.ys.117 1 3)))) (5 (letrec 1 ((close "_V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D125")) (##qualified-call (vanity list append-map! ##.loop.125) #f (bruijn ##.loop.125 0 0) (bruijn ##.k.363 1 0) (bruijn ##.xs.122 1 2) (bruijn ##.ys.123 1 3) (bruijn ##.zs.124 1 4)))) (2 + (letrec 1 ((close "_V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D131")) (##qualified-call (vanity list append-map! ##.loop.131) #f (bruijn ##.loop.131 0 0) (bruijn ##.k.377 1 0) (bruijn ##.lsts.130 1 2)))))
 VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0append__map_B, got ~D~N"
 "-- expected 3~N"
 "-- expected 4~N"
 "-- expected 5~N"
 "-- expected 2 or more~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V50_V0vanity_V0list_V0append__map_B(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V20Case0__V50_V0vanity_V0list_V0append__map_B" };
 VRecordCall2(runtime, &dbg);
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (letrec 1 ((close "_V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D113")) (##qualified-call (vanity list append-map! ##.loop.113) #f (bruijn ##.loop.113 0 0) (bruijn ##.k.345 1 0) (bruijn ##.xs.112 1 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D113, self))));
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
       _V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D113(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
}
__attribute__((used)) static void _V20Case1__V50_V0vanity_V0list_V0append__map_B(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V20Case1__V50_V0vanity_V0list_V0append__map_B" };
 VRecordCall2(runtime, &dbg);
  struct { VEnv self; VWORD argv[4]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 4, 4, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _var3;
  // (letrec 1 ((close "_V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D118")) (##qualified-call (vanity list append-map! ##.loop.118) #f (bruijn ##.loop.118 0 0) (bruijn ##.k.352 1 0) (bruijn ##.xs.116 1 2) (bruijn ##.ys.117 1 3)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D118, self))));
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      statics->vars[2];
    VWORD _arg2 = 
      statics->vars[3];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D118(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
__attribute__((used)) static void _V20Case2__V50_V0vanity_V0list_V0append__map_B(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4) {
 static VDebugInfo dbg = { "_V20Case2__V50_V0vanity_V0list_V0append__map_B" };
 VRecordCall2(runtime, &dbg);
  struct { VEnv self; VWORD argv[5]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 5, 5, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _var3;
  self->vars[4] = _var4;
  // (letrec 1 ((close "_V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D125")) (##qualified-call (vanity list append-map! ##.loop.125) #f (bruijn ##.loop.125 0 0) (bruijn ##.k.363 1 0) (bruijn ##.xs.122 1 2) (bruijn ##.ys.123 1 3) (bruijn ##.zs.124 1 4)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D125, self))));
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      statics->vars[2];
    VWORD _arg2 = 
      statics->vars[3];
    VWORD _arg3 = 
      statics->vars[4];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D125(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
    }
}
__attribute__((used)) static void _V20Case3__V50_V0vanity_V0list_V0append__map_B(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, ...) {
 static VDebugInfo dbg = { "_V20Case3__V50_V0vanity_V0list_V0append__map_B" };
 VRecordCall2(runtime, &dbg);
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 2, argc, _var1);
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _varargs;
  // (letrec 1 ((close "_V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D131")) (##qualified-call (vanity list append-map! ##.loop.131) #f (bruijn ##.loop.131 0 0) (bruijn ##.k.377 1 0) (bruijn ##.lsts.130 1 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D131, self))));
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
       _V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D131(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
}
void _V50_V0vanity_V0list_V0append__map_B(VRuntime * runtime, VEnv * statics, int argc, ...);
asm(
".intel_syntax noprefix\n"
#ifdef __linux__
".type _V50_V0vanity_V0list_V0append__map_B, @function\n"
#endif
".globl _V50_V0vanity_V0list_V0append__map_B\n"
"_V50_V0vanity_V0list_V0append__map_B:\n"
"    cmp " ARGC_REG ", 3\n"
"    je _V20Case0__V50_V0vanity_V0list_V0append__map_B\n"
"    cmp " ARGC_REG ", 4\n"
"    je _V20Case1__V50_V0vanity_V0list_V0append__map_B\n"
"    cmp " ARGC_REG ", 5\n"
"    je _V20Case2__V50_V0vanity_V0list_V0append__map_B\n"
"    cmp " ARGC_REG ", 2\n"
"    jge _V20Case3__V50_V0vanity_V0list_V0append__map_B\n"
"    jmp _V20CaseError__V50_V0vanity_V0list_V0append__map_B\n"
);
void _V50_V0vanity_V0list_V0append__map_V10_Dloop_D135_V0k50(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0append__map_V10_Dloop_D135_V0k50" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0append__map_V10_Dloop_D135_V0k50, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.append.4 6 5) (bruijn ##.k.385 2 0) (bruijn ##.x.387 1 0) (bruijn ##.x.388 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 5)), 3,
      statics->up->vars[0],
      statics->vars[0],
      _var0);
}
void _V50_V0vanity_V0list_V0append__map_V10_Dloop_D135_V0k49(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0append__map_V10_Dloop_D135_V0k49" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0append__map_V10_Dloop_D135_V0k49, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity list append-map ##.loop.135) #f (bruijn ##.loop.135 2 0) (close _V50_V0vanity_V0list_V0append__map_V10_Dloop_D135_V0k50) (##inline ##vcore.cdr (bruijn ##.xs.136 1 1)))
  {
    VClosure * _closure = VDecodeClosure(statics->up->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0append__map_V10_Dloop_D135_V0k50, self))));
    VWORD _arg1 = 
      VInlineCdr2(runtime,
        statics->vars[1]);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0list_V0append__map_V10_Dloop_D135(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0list_V0append__map_V10_Dloop_D135(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0append__map_V10_Dloop_D135" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0append__map_V10_Dloop_D135, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (if (##inline ##vcore.null? (bruijn ##.xs.136 0 1)) ((bruijn ##.k.385 0 0) '()) ((bruijn ##.f.133 2 1) (close _V50_V0vanity_V0list_V0append__map_V10_Dloop_D135_V0k49) (##inline ##vcore.car (bruijn ##.xs.136 0 1))))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var1))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VNULL);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[1]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0append__map_V10_Dloop_D135_V0k49, self)))),
      VInlineCar2(runtime,
        _var1));
}
}
void _V50_V0vanity_V0list_V0append__map_V10_Dloop_D140_V0k52(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0append__map_V10_Dloop_D140_V0k52" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0append__map_V10_Dloop_D140_V0k52, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.400 1 0) ((bruijn ##.k.401 0 0) (bruijn ##.p.400 1 0)) ((bruijn ##.k.401 0 0) (##inline ##vcore.null? (bruijn ##.ys.142 2 2))))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->vars[0]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VInlineNullP2(runtime,
        statics->up->vars[2]));
}
}
void _V50_V0vanity_V0list_V0append__map_V10_Dloop_D140_V0k55(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0append__map_V10_Dloop_D140_V0k55" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0append__map_V10_Dloop_D140_V0k55, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.append.4 8 5) (bruijn ##.k.392 4 0) (bruijn ##.x.394 1 0) (bruijn ##.x.395 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 5)), 3,
      statics->up->up->up->vars[0],
      statics->vars[0],
      _var0);
}
void _V50_V0vanity_V0list_V0append__map_V10_Dloop_D140_V0k54(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0append__map_V10_Dloop_D140_V0k54" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0append__map_V10_Dloop_D140_V0k54, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity list append-map ##.loop.140) #f (bruijn ##.loop.140 4 0) (close _V50_V0vanity_V0list_V0append__map_V10_Dloop_D140_V0k55) (##inline ##vcore.cdr (bruijn ##.xs.141 3 1)) (##inline ##vcore.cdr (bruijn ##.ys.142 3 2)))
  {
    VClosure * _closure = VDecodeClosure(statics->up->up->up->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0append__map_V10_Dloop_D140_V0k55, self))));
    VWORD _arg1 = 
      VInlineCdr2(runtime,
        statics->up->up->vars[1]);
    VWORD _arg2 = 
      VInlineCdr2(runtime,
        statics->up->up->vars[2]);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0list_V0append__map_V10_Dloop_D140(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0list_V0append__map_V10_Dloop_D140_V0k53(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0append__map_V10_Dloop_D140_V0k53" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0append__map_V10_Dloop_D140_V0k53, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.393 0 0) ((bruijn ##.k.392 2 0) '()) ((bruijn ##.f.137 4 1) (close _V50_V0vanity_V0list_V0append__map_V10_Dloop_D140_V0k54) (##inline ##vcore.car (bruijn ##.xs.141 2 1)) (##inline ##vcore.car (bruijn ##.ys.142 2 2))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VNULL);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[1]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0append__map_V10_Dloop_D140_V0k54, self)))),
      VInlineCar2(runtime,
        statics->up->vars[1]),
      VInlineCar2(runtime,
        statics->up->vars[2]));
}
}
void _V50_V0vanity_V0list_V0append__map_V10_Dloop_D140_V0k51(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0append__map_V10_Dloop_D140_V0k51" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0append__map_V10_Dloop_D140_V0k51, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0list_V0append__map_V10_Dloop_D140_V0k52) (close _V50_V0vanity_V0list_V0append__map_V10_Dloop_D140_V0k53))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0append__map_V10_Dloop_D140_V0k52, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0append__map_V10_Dloop_D140_V0k53, self)))));
}
void _V50_V0vanity_V0list_V0append__map_V10_Dloop_D140(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0append__map_V10_Dloop_D140" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0append__map_V10_Dloop_D140, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((close _V50_V0vanity_V0list_V0append__map_V10_Dloop_D140_V0k51) (##inline ##vcore.null? (bruijn ##.xs.141 0 1)))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0append__map_V10_Dloop_D140_V0k51, self)), 1,
      VInlineNullP2(runtime,
        _var1));
}
void _V50_V0vanity_V0list_V0append__map_V10_Dloop_D147_V0k58(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0append__map_V10_Dloop_D147_V0k58" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0append__map_V10_Dloop_D147_V0k58, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.415 0 0) ((bruijn ##.k.414 1 0) (bruijn ##.p.415 0 0)) ((bruijn ##.k.414 1 0) (##inline ##vcore.null? (bruijn ##.zs.150 3 3))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      _var0);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VInlineNullP2(runtime,
        statics->up->up->vars[3]));
}
}
void _V50_V0vanity_V0list_V0append__map_V10_Dloop_D147_V0k57(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0append__map_V10_Dloop_D147_V0k57" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0append__map_V10_Dloop_D147_V0k57, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.413 1 0) ((bruijn ##.k.414 0 0) (bruijn ##.p.413 1 0)) ((close _V50_V0vanity_V0list_V0append__map_V10_Dloop_D147_V0k58) (##inline ##vcore.null? (bruijn ##.ys.149 2 2))))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->vars[0]);
} else {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0append__map_V10_Dloop_D147_V0k58, self)), 1,
      VInlineNullP2(runtime,
        statics->up->vars[2]));
}
}
void _V50_V0vanity_V0list_V0append__map_V10_Dloop_D147_V0k61(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0append__map_V10_Dloop_D147_V0k61" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0append__map_V10_Dloop_D147_V0k61, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.append.4 8 5) (bruijn ##.k.403 4 0) (bruijn ##.x.405 1 0) (bruijn ##.x.406 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 5)), 3,
      statics->up->up->up->vars[0],
      statics->vars[0],
      _var0);
}
void _V50_V0vanity_V0list_V0append__map_V10_Dloop_D147_V0k60(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0append__map_V10_Dloop_D147_V0k60" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0append__map_V10_Dloop_D147_V0k60, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity list append-map ##.loop.147) #f (bruijn ##.loop.147 4 0) (close _V50_V0vanity_V0list_V0append__map_V10_Dloop_D147_V0k61) (##inline ##vcore.cdr (bruijn ##.xs.148 3 1)) (##inline ##vcore.cdr (bruijn ##.ys.149 3 2)) (##inline ##vcore.cdr (bruijn ##.zs.150 3 3)))
  {
    VClosure * _closure = VDecodeClosure(statics->up->up->up->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0append__map_V10_Dloop_D147_V0k61, self))));
    VWORD _arg1 = 
      VInlineCdr2(runtime,
        statics->up->up->vars[1]);
    VWORD _arg2 = 
      VInlineCdr2(runtime,
        statics->up->up->vars[2]);
    VWORD _arg3 = 
      VInlineCdr2(runtime,
        statics->up->up->vars[3]);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0list_V0append__map_V10_Dloop_D147(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0list_V0append__map_V10_Dloop_D147_V0k59(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0append__map_V10_Dloop_D147_V0k59" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0append__map_V10_Dloop_D147_V0k59, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.404 0 0) ((bruijn ##.k.403 2 0) '()) ((bruijn ##.f.143 4 1) (close _V50_V0vanity_V0list_V0append__map_V10_Dloop_D147_V0k60) (##inline ##vcore.car (bruijn ##.xs.148 2 1)) (##inline ##vcore.car (bruijn ##.ys.149 2 2)) (##inline ##vcore.car (bruijn ##.zs.150 2 3))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VNULL);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[1]), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0append__map_V10_Dloop_D147_V0k60, self)))),
      VInlineCar2(runtime,
        statics->up->vars[1]),
      VInlineCar2(runtime,
        statics->up->vars[2]),
      VInlineCar2(runtime,
        statics->up->vars[3]));
}
}
void _V50_V0vanity_V0list_V0append__map_V10_Dloop_D147_V0k56(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0append__map_V10_Dloop_D147_V0k56" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0append__map_V10_Dloop_D147_V0k56, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0list_V0append__map_V10_Dloop_D147_V0k57) (close _V50_V0vanity_V0list_V0append__map_V10_Dloop_D147_V0k59))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0append__map_V10_Dloop_D147_V0k57, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0append__map_V10_Dloop_D147_V0k59, self)))));
}
void _V50_V0vanity_V0list_V0append__map_V10_Dloop_D147(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0append__map_V10_Dloop_D147" };
 VRecordCall2(runtime, &dbg);
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0append__map_V10_Dloop_D147, got ~D~N"
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
  // ((close _V50_V0vanity_V0list_V0append__map_V10_Dloop_D147_V0k56) (##inline ##vcore.null? (bruijn ##.xs.148 0 1)))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0append__map_V10_Dloop_D147_V0k56, self)), 1,
      VInlineNullP2(runtime,
        _var1));
}
void _V50_V0vanity_V0list_V0append__map_V10_Dloop_D153_V0k66(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0append__map_V10_Dloop_D153_V0k66" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0append__map_V10_Dloop_D153_V0k66, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.append.4 9 5) (bruijn ##.k.417 5 0) (bruijn ##.x.419 2 0) (bruijn ##.x.420 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 5)), 3,
      VGetArg(statics, 5-1, 0),
      statics->up->vars[0],
      _var0);
}
void _V50_V0vanity_V0list_V0append__map_V10_Dloop_D153_V0k65(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0append__map_V10_Dloop_D153_V0k65" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0append__map_V10_Dloop_D153_V0k65, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity list append-map ##.loop.153) #f (bruijn ##.loop.153 5 0) (close _V50_V0vanity_V0list_V0append__map_V10_Dloop_D153_V0k66) (bruijn ##.x.421 0 0))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 5-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0append__map_V10_Dloop_D153_V0k66, self))));
    VWORD _arg1 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0list_V0append__map_V10_Dloop_D153(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0list_V0append__map_V10_Dloop_D153_V0k64(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0append__map_V10_Dloop_D153_V0k64" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0append__map_V10_Dloop_D153_V0k64, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.map.3 7 4) (close _V50_V0vanity_V0list_V0append__map_V10_Dloop_D153_V0k65) (##intrinsic ##vcore.cdr) (bruijn ##.lsts.154 3 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 4)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0append__map_V10_Dloop_D153_V0k65, self)))),
      _V40_V10vcore_Dcdr,
      statics->up->up->vars[1]);
}
void _V50_V0vanity_V0list_V0append__map_V10_Dloop_D153_V0k63(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0append__map_V10_Dloop_D153_V0k63" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0append__map_V10_Dloop_D153_V0k63, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.apply (close _V50_V0vanity_V0list_V0append__map_V10_Dloop_D153_V0k64) (bruijn ##.f.151 4 1) (bruijn ##.x.422 0 0))
    VCallFuncWithGC(runtime, (VFunc)VApply2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0append__map_V10_Dloop_D153_V0k64, self)))),
      statics->up->up->up->vars[1],
      _var0);
}
void _V50_V0vanity_V0list_V0append__map_V10_Dloop_D153_V0k62(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0append__map_V10_Dloop_D153_V0k62" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0append__map_V10_Dloop_D153_V0k62, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.418 0 0) ((bruijn ##.k.417 1 0) '()) ((bruijn ##.map.3 5 4) (close _V50_V0vanity_V0list_V0append__map_V10_Dloop_D153_V0k63) (##intrinsic ##vcore.car) (bruijn ##.lsts.154 1 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VNULL);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 4)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0append__map_V10_Dloop_D153_V0k63, self)))),
      _V40_V10vcore_Dcar,
      statics->vars[1]);
}
}
void _V50_V0vanity_V0list_V0append__map_V10_Dloop_D153(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0append__map_V10_Dloop_D153" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0append__map_V10_Dloop_D153, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (##qualified-call (vanity list any?) #t (bruijn ##.any?.32 3 7) (close _V50_V0vanity_V0list_V0append__map_V10_Dloop_D153_V0k62) (##intrinsic ##vcore.null?) (bruijn ##.lsts.154 0 1))
  {
   VEnv * _closure_env = _V60_V0vanity_V0list;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0append__map_V10_Dloop_D153_V0k62, self))));
    VWORD _arg1 = 
      _V40_V10vcore_Dnull_Q;
    VWORD _arg2 = 
      _var1;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0any_Q, _V60_V0vanity_V0list)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0list_V0any_Q(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
__attribute__((used)) static void _V20CaseError__V50_V0vanity_V0list_V0append__map(VRuntime * runtime, VEnv * statics, int argc, ...) {
 // ("_V50_V0vanity_V0list_V0append__map" #t (3 (letrec 1 ((close "_V50_V0vanity_V0list_V0append__map_V10_Dloop_D135")) (##qualified-call (vanity list append-map ##.loop.135) #f (bruijn ##.loop.135 0 0) (bruijn ##.k.384 1 0) (bruijn ##.xs.134 1 2)))) (4 (letrec 1 ((close "_V50_V0vanity_V0list_V0append__map_V10_Dloop_D140")) (##qualified-call (vanity list append-map ##.loop.140) #f (bruijn ##.loop.140 0 0) (bruijn ##.k.391 1 0) (bruijn ##.xs.138 1 2) (bruijn ##.ys.139 1 3)))) (5 (letrec 1 ((close "_V50_V0vanity_V0list_V0append__map_V10_Dloop_D147")) (##qualified-call (vanity list append-map ##.loop.147) #f (bruijn ##.loop.147 0 0) (bruijn ##.k.402 1 0) (bruijn ##.xs.144 1 2) (bruijn ##.ys.145 1 3) (bruijn ##.zs.146 1 4)))) (2 + (letrec 1 ((close "_V50_V0vanity_V0list_V0append__map_V10_Dloop_D153")) (##qualified-call (vanity list append-map ##.loop.153) #f (bruijn ##.loop.153 0 0) (bruijn ##.k.416 1 0) (bruijn ##.lsts.152 1 2)))))
 VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0append__map, got ~D~N"
 "-- expected 3~N"
 "-- expected 4~N"
 "-- expected 5~N"
 "-- expected 2 or more~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V50_V0vanity_V0list_V0append__map(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V20Case0__V50_V0vanity_V0list_V0append__map" };
 VRecordCall2(runtime, &dbg);
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (letrec 1 ((close "_V50_V0vanity_V0list_V0append__map_V10_Dloop_D135")) (##qualified-call (vanity list append-map ##.loop.135) #f (bruijn ##.loop.135 0 0) (bruijn ##.k.384 1 0) (bruijn ##.xs.134 1 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0append__map_V10_Dloop_D135, self))));
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
       _V50_V0vanity_V0list_V0append__map_V10_Dloop_D135(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
}
__attribute__((used)) static void _V20Case1__V50_V0vanity_V0list_V0append__map(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V20Case1__V50_V0vanity_V0list_V0append__map" };
 VRecordCall2(runtime, &dbg);
  struct { VEnv self; VWORD argv[4]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 4, 4, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _var3;
  // (letrec 1 ((close "_V50_V0vanity_V0list_V0append__map_V10_Dloop_D140")) (##qualified-call (vanity list append-map ##.loop.140) #f (bruijn ##.loop.140 0 0) (bruijn ##.k.391 1 0) (bruijn ##.xs.138 1 2) (bruijn ##.ys.139 1 3)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0append__map_V10_Dloop_D140, self))));
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      statics->vars[2];
    VWORD _arg2 = 
      statics->vars[3];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0list_V0append__map_V10_Dloop_D140(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
__attribute__((used)) static void _V20Case2__V50_V0vanity_V0list_V0append__map(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4) {
 static VDebugInfo dbg = { "_V20Case2__V50_V0vanity_V0list_V0append__map" };
 VRecordCall2(runtime, &dbg);
  struct { VEnv self; VWORD argv[5]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 5, 5, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _var3;
  self->vars[4] = _var4;
  // (letrec 1 ((close "_V50_V0vanity_V0list_V0append__map_V10_Dloop_D147")) (##qualified-call (vanity list append-map ##.loop.147) #f (bruijn ##.loop.147 0 0) (bruijn ##.k.402 1 0) (bruijn ##.xs.144 1 2) (bruijn ##.ys.145 1 3) (bruijn ##.zs.146 1 4)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0append__map_V10_Dloop_D147, self))));
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      statics->vars[2];
    VWORD _arg2 = 
      statics->vars[3];
    VWORD _arg3 = 
      statics->vars[4];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0list_V0append__map_V10_Dloop_D147(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
    }
}
__attribute__((used)) static void _V20Case3__V50_V0vanity_V0list_V0append__map(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, ...) {
 static VDebugInfo dbg = { "_V20Case3__V50_V0vanity_V0list_V0append__map" };
 VRecordCall2(runtime, &dbg);
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 2, argc, _var1);
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _varargs;
  // (letrec 1 ((close "_V50_V0vanity_V0list_V0append__map_V10_Dloop_D153")) (##qualified-call (vanity list append-map ##.loop.153) #f (bruijn ##.loop.153 0 0) (bruijn ##.k.416 1 0) (bruijn ##.lsts.152 1 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0append__map_V10_Dloop_D153, self))));
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
       _V50_V0vanity_V0list_V0append__map_V10_Dloop_D153(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
}
void _V50_V0vanity_V0list_V0append__map(VRuntime * runtime, VEnv * statics, int argc, ...);
asm(
".intel_syntax noprefix\n"
#ifdef __linux__
".type _V50_V0vanity_V0list_V0append__map, @function\n"
#endif
".globl _V50_V0vanity_V0list_V0append__map\n"
"_V50_V0vanity_V0list_V0append__map:\n"
"    cmp " ARGC_REG ", 3\n"
"    je _V20Case0__V50_V0vanity_V0list_V0append__map\n"
"    cmp " ARGC_REG ", 4\n"
"    je _V20Case1__V50_V0vanity_V0list_V0append__map\n"
"    cmp " ARGC_REG ", 5\n"
"    je _V20Case2__V50_V0vanity_V0list_V0append__map\n"
"    cmp " ARGC_REG ", 2\n"
"    jge _V20Case3__V50_V0vanity_V0list_V0append__map\n"
"    jmp _V20CaseError__V50_V0vanity_V0list_V0append__map\n"
);
void _V50_V0vanity_V0list_V0fold__right_V0k67(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0fold__right_V0k67" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0fold__right_V0k67, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kons.155 1 1) (bruijn ##.k.423 1 0) (##inline ##vcore.car (bruijn ##.ks.157 1 3)) (bruijn ##.x.426 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[1]), 3,
      statics->vars[0],
      VInlineCar2(runtime,
        statics->vars[3]),
      _var0);
}
void _V50_V0vanity_V0list_V0fold__right(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0fold__right" };
 VRecordCall2(runtime, &dbg);
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0fold__right, got ~D~N"
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
  // (if (##inline ##vcore.null? (bruijn ##.ks.157 0 3)) ((bruijn ##.k.423 0 0) (bruijn ##.knil.156 0 2)) (##qualified-call (vanity list fold-right) #t (bruijn ##.fold-right.40 1 15) (close _V50_V0vanity_V0list_V0fold__right_V0k67) (bruijn ##.kons.155 0 1) (bruijn ##.knil.156 0 2) (##inline ##vcore.cdr (bruijn ##.ks.157 0 3))))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var3))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _var2);
} else {
  {
   VEnv * _closure_env = _V60_V0vanity_V0list;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0fold__right_V0k67, self))));
    VWORD _arg1 = 
      _var1;
    VWORD _arg2 = 
      _var2;
    VWORD _arg3 = 
      VInlineCdr2(runtime,
        _var3);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0fold__right, _V60_V0vanity_V0list)}, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0list_V0fold__right(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
}
void _V50_V0vanity_V0list_V0fold_V0k68(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0fold_V0k68" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0fold_V0k68, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity list fold) #t (bruijn ##.fold.41 2 16) (bruijn ##.k.428 1 0) (bruijn ##.kons.158 1 1) (bruijn ##.x.430 0 0) (##inline ##vcore.cdr (bruijn ##.ks.160 1 3)))
  {
   VEnv * _closure_env = _V60_V0vanity_V0list;
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      statics->vars[1];
    VWORD _arg2 = 
      _var0;
    VWORD _arg3 = 
      VInlineCdr2(runtime,
        statics->vars[3]);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0fold, _V60_V0vanity_V0list)}, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0list_V0fold(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0list_V0fold(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0fold" };
 VRecordCall2(runtime, &dbg);
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0fold, got ~D~N"
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
  // (if (##inline ##vcore.null? (bruijn ##.ks.160 0 3)) ((bruijn ##.k.428 0 0) (bruijn ##.knil.159 0 2)) ((bruijn ##.kons.158 0 1) (close _V50_V0vanity_V0list_V0fold_V0k68) (##inline ##vcore.car (bruijn ##.ks.160 0 3)) (bruijn ##.knil.159 0 2)))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var3))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _var2);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var1), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0fold_V0k68, self)))),
      VInlineCar2(runtime,
        _var3),
      _var2);
}
}
void _V50_V0vanity_V0list_V0count_V10_Dloop_D163_V0k70(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0count_V10_Dloop_D163_V0k70" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0count_V10_Dloop_D163_V0k70, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.439 1 0) ((bruijn ##.k.440 0 0) 1) ((bruijn ##.k.440 0 0) 0))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeInt(1l));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeInt(0l));
}
}
void _V50_V0vanity_V0list_V0count_V10_Dloop_D163_V0k71(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0count_V10_Dloop_D163_V0k71" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0count_V10_Dloop_D163_V0k71, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.645) ((##vcore.+ (bruijn ##.n.164 3 1) (bruijn ##.x.438 1 0))) (##qualified-call (vanity list count ##.loop.163) #f (bruijn ##.loop.163 4 0) (bruijn ##.k.434 3 0) (bruijn ##.reg.645 0 0) (bruijn ##.pred.165 3 2) (##inline ##vcore.cdr (bruijn ##.lst.166 3 3))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      statics->up->up->vars[1],
      statics->vars[0]);
  {
    VClosure * _closure = VDecodeClosure(statics->up->up->up->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->up->up->vars[0];
    VWORD _arg1 = 
      self->vars[0];
    VWORD _arg2 = 
      statics->up->up->vars[2];
    VWORD _arg3 = 
      VInlineCdr2(runtime,
        statics->up->up->vars[3]);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0list_V0count_V10_Dloop_D163(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
    }
}
void _V50_V0vanity_V0list_V0count_V10_Dloop_D163_V0k69(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0count_V10_Dloop_D163_V0k69" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0count_V10_Dloop_D163_V0k69, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0list_V0count_V10_Dloop_D163_V0k70) (close _V50_V0vanity_V0list_V0count_V10_Dloop_D163_V0k71))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0count_V10_Dloop_D163_V0k70, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0count_V10_Dloop_D163_V0k71, self)))));
}
void _V50_V0vanity_V0list_V0count_V10_Dloop_D163(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0count_V10_Dloop_D163" };
 VRecordCall2(runtime, &dbg);
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0count_V10_Dloop_D163, got ~D~N"
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
  // (if (##inline ##vcore.null? (bruijn ##.lst.166 0 3)) ((bruijn ##.k.434 0 0) (bruijn ##.n.164 0 1)) ((bruijn ##.pred.165 0 2) (close _V50_V0vanity_V0list_V0count_V10_Dloop_D163_V0k69) (##inline ##vcore.car (bruijn ##.lst.166 0 3))))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var3))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _var1);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var2), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0count_V10_Dloop_D163_V0k69, self)))),
      VInlineCar2(runtime,
        _var3));
}
}
void _V50_V0vanity_V0list_V0count(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0count" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0count, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (letrec 1 ((close "_V50_V0vanity_V0list_V0count_V10_Dloop_D163")) (##qualified-call (vanity list count ##.loop.163) #f (bruijn ##.loop.163 0 0) (bruijn ##.k.433 1 0) 0 (bruijn ##.pred.161 1 1) (bruijn ##.lst.162 1 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0count_V10_Dloop_D163, self))));
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      VEncodeInt(0l);
    VWORD _arg2 = 
      statics->vars[1];
    VWORD _arg3 = 
      statics->vars[2];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0list_V0count_V10_Dloop_D163(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
    }
}
void _V50_V0vanity_V0list_V0unzip5_V0k76(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0unzip5_V0k76" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0unzip5_V0k76, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.values.2 7 3) (bruijn ##.k.442 5 0) (bruijn ##.x.443 4 0) (bruijn ##.x.444 3 0) (bruijn ##.x.445 2 0) (bruijn ##.x.446 1 0) (bruijn ##.x.447 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 3)), 6,
      VGetArg(statics, 5-1, 0),
      statics->up->up->up->vars[0],
      statics->up->up->vars[0],
      statics->up->vars[0],
      statics->vars[0],
      _var0);
}
void _V50_V0vanity_V0list_V0unzip5_V0lambda8(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0unzip5_V0lambda8" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0unzip5_V0lambda8, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.cadddr.9 7 10) (bruijn ##.k.448 0 0) (##inline ##vcore.cdr (bruijn ##.e.168 0 1)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 10)), 2,
      _var0,
      VInlineCdr2(runtime,
        _var1));
}
void _V50_V0vanity_V0list_V0unzip5_V0k75(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0unzip5_V0k75" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0unzip5_V0k75, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.map.3 6 4) (close _V50_V0vanity_V0list_V0unzip5_V0k76) (close _V50_V0vanity_V0list_V0unzip5_V0lambda8) (bruijn ##.lst.167 4 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 4)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0unzip5_V0k76, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0unzip5_V0lambda8, self)))),
      statics->up->up->up->vars[1]);
}
void _V50_V0vanity_V0list_V0unzip5_V0k74(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0unzip5_V0k74" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0unzip5_V0k74, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.map.3 5 4) (close _V50_V0vanity_V0list_V0unzip5_V0k75) (bruijn ##.cadddr.9 5 10) (bruijn ##.lst.167 3 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 4)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0unzip5_V0k75, self)))),
      VGetArg(statics, 5-1, 10),
      statics->up->up->vars[1]);
}
void _V50_V0vanity_V0list_V0unzip5_V0k73(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0unzip5_V0k73" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0unzip5_V0k73, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.map.3 4 4) (close _V50_V0vanity_V0list_V0unzip5_V0k74) (bruijn ##.caddr.8 4 9) (bruijn ##.lst.167 2 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[4]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0unzip5_V0k74, self)))),
      statics->up->up->up->vars[9],
      statics->up->vars[1]);
}
void _V50_V0vanity_V0list_V0unzip5_V0k72(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0unzip5_V0k72" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0unzip5_V0k72, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.map.3 3 4) (close _V50_V0vanity_V0list_V0unzip5_V0k73) (bruijn ##.cadr.7 3 8) (bruijn ##.lst.167 1 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[4]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0unzip5_V0k73, self)))),
      statics->up->up->vars[8],
      statics->vars[1]);
}
void _V50_V0vanity_V0list_V0unzip5(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0unzip5" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0unzip5, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.map.3 2 4) (close _V50_V0vanity_V0list_V0unzip5_V0k72) (##intrinsic ##vcore.car) (bruijn ##.lst.167 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[4]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0unzip5_V0k72, self)))),
      _V40_V10vcore_Dcar,
      _var1);
}
void _V50_V0vanity_V0list_V0unzip4_V0k80(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0unzip4_V0k80" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0unzip4_V0k80, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.values.2 6 3) (bruijn ##.k.450 4 0) (bruijn ##.x.451 3 0) (bruijn ##.x.452 2 0) (bruijn ##.x.453 1 0) (bruijn ##.x.454 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 3)), 5,
      statics->up->up->up->vars[0],
      statics->up->up->vars[0],
      statics->up->vars[0],
      statics->vars[0],
      _var0);
}
void _V50_V0vanity_V0list_V0unzip4_V0k79(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0unzip4_V0k79" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0unzip4_V0k79, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.map.3 5 4) (close _V50_V0vanity_V0list_V0unzip4_V0k80) (bruijn ##.cadddr.9 5 10) (bruijn ##.lst.169 3 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 4)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0unzip4_V0k80, self)))),
      VGetArg(statics, 5-1, 10),
      statics->up->up->vars[1]);
}
void _V50_V0vanity_V0list_V0unzip4_V0k78(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0unzip4_V0k78" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0unzip4_V0k78, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.map.3 4 4) (close _V50_V0vanity_V0list_V0unzip4_V0k79) (bruijn ##.caddr.8 4 9) (bruijn ##.lst.169 2 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[4]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0unzip4_V0k79, self)))),
      statics->up->up->up->vars[9],
      statics->up->vars[1]);
}
void _V50_V0vanity_V0list_V0unzip4_V0k77(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0unzip4_V0k77" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0unzip4_V0k77, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.map.3 3 4) (close _V50_V0vanity_V0list_V0unzip4_V0k78) (bruijn ##.cadr.7 3 8) (bruijn ##.lst.169 1 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[4]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0unzip4_V0k78, self)))),
      statics->up->up->vars[8],
      statics->vars[1]);
}
void _V50_V0vanity_V0list_V0unzip4(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0unzip4" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0unzip4, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.map.3 2 4) (close _V50_V0vanity_V0list_V0unzip4_V0k77) (##intrinsic ##vcore.car) (bruijn ##.lst.169 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[4]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0unzip4_V0k77, self)))),
      _V40_V10vcore_Dcar,
      _var1);
}
void _V50_V0vanity_V0list_V0unzip3_V0k83(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0unzip3_V0k83" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0unzip3_V0k83, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.values.2 5 3) (bruijn ##.k.455 3 0) (bruijn ##.x.456 2 0) (bruijn ##.x.457 1 0) (bruijn ##.x.458 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 3)), 4,
      statics->up->up->vars[0],
      statics->up->vars[0],
      statics->vars[0],
      _var0);
}
void _V50_V0vanity_V0list_V0unzip3_V0k82(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0unzip3_V0k82" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0unzip3_V0k82, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.map.3 4 4) (close _V50_V0vanity_V0list_V0unzip3_V0k83) (bruijn ##.caddr.8 4 9) (bruijn ##.lst.170 2 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[4]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0unzip3_V0k83, self)))),
      statics->up->up->up->vars[9],
      statics->up->vars[1]);
}
void _V50_V0vanity_V0list_V0unzip3_V0k81(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0unzip3_V0k81" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0unzip3_V0k81, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.map.3 3 4) (close _V50_V0vanity_V0list_V0unzip3_V0k82) (bruijn ##.cadr.7 3 8) (bruijn ##.lst.170 1 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[4]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0unzip3_V0k82, self)))),
      statics->up->up->vars[8],
      statics->vars[1]);
}
void _V50_V0vanity_V0list_V0unzip3(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0unzip3" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0unzip3, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.map.3 2 4) (close _V50_V0vanity_V0list_V0unzip3_V0k81) (##intrinsic ##vcore.car) (bruijn ##.lst.170 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[4]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0unzip3_V0k81, self)))),
      _V40_V10vcore_Dcar,
      _var1);
}
void _V50_V0vanity_V0list_V0unzip2_V0k85(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0unzip2_V0k85" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0unzip2_V0k85, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.values.2 4 3) (bruijn ##.k.459 2 0) (bruijn ##.x.460 1 0) (bruijn ##.x.461 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[3]), 3,
      statics->up->vars[0],
      statics->vars[0],
      _var0);
}
void _V50_V0vanity_V0list_V0unzip2_V0k84(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0unzip2_V0k84" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0unzip2_V0k84, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.map.3 3 4) (close _V50_V0vanity_V0list_V0unzip2_V0k85) (bruijn ##.cadr.7 3 8) (bruijn ##.lst.171 1 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[4]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0unzip2_V0k85, self)))),
      statics->up->up->vars[8],
      statics->vars[1]);
}
void _V50_V0vanity_V0list_V0unzip2(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0unzip2" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0unzip2, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.map.3 2 4) (close _V50_V0vanity_V0list_V0unzip2_V0k84) (##intrinsic ##vcore.car) (bruijn ##.lst.171 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[4]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0unzip2_V0k84, self)))),
      _V40_V10vcore_Dcar,
      _var1);
}
void _V50_V0vanity_V0list_V0unzip1(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0unzip1" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0unzip1, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.map.3 2 4) (bruijn ##.k.462 0 0) (##intrinsic ##vcore.car) (bruijn ##.lst.172 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[4]), 3,
      _var0,
      _V40_V10vcore_Dcar,
      _var1);
}
void _V50_V0vanity_V0list_V0zip(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, ...) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0zip" };
 VRecordCall2(runtime, &dbg);
 if(argc < 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0zip, got ~D~N"
  "-- expected 1 or more~N"
  , argc);
 }
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 1, argc, _var0);
  // (##vcore.apply (bruijn ##.k.463 0 0) (bruijn ##.map.3 2 4) (bruijn ##.list.5 2 6) (bruijn ##.lsts.173 0 1))
    VCallFuncWithGC(runtime, (VFunc)VApply2, 4,
      _var0,
      statics->up->vars[4],
      statics->up->vars[6],
      _varargs);
}
void _V50_V0vanity_V0list_V0concatenate_V0k86(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0concatenate_V0k86" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0concatenate_V0k86, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.append.4 3 5) (bruijn ##.k.464 1 0) (##inline ##vcore.car (bruijn ##.lst-of-lsts.174 1 1)) (bruijn ##.x.467 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[5]), 3,
      statics->vars[0],
      VInlineCar2(runtime,
        statics->vars[1]),
      _var0);
}
void _V50_V0vanity_V0list_V0concatenate(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0concatenate" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0concatenate, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (if (##inline ##vcore.null? (bruijn ##.lst-of-lsts.174 0 1)) ((bruijn ##.k.464 0 0) '()) (##qualified-call (vanity list concatenate) #t (bruijn ##.concatenate.49 1 24) (close _V50_V0vanity_V0list_V0concatenate_V0k86) (##inline ##vcore.cdr (bruijn ##.lst-of-lsts.174 0 1))))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var1))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VNULL);
} else {
  {
   VEnv * _closure_env = _V60_V0vanity_V0list;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0concatenate_V0k86, self))));
    VWORD _arg1 = 
      VInlineCdr2(runtime,
        _var1);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0concatenate, _V60_V0vanity_V0list)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0list_V0concatenate(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
}
void _V50_V0vanity_V0list_V0append_B_V10_Dloop_D178(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0append_B_V10_Dloop_D178" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0append_B_V10_Dloop_D178, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.x.179 0 1))) (##vcore.set-cdr! (bruijn ##.k.473 0 0) (bruijn ##.x.179 0 1) (bruijn ##.y.177 2 2)) (##qualified-call (vanity list append! ##.loop.178) #f (bruijn ##.loop.178 1 0) (bruijn ##.k.473 0 0) (##inline ##vcore.cdr (bruijn ##.x.179 0 1))))
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var1)))) {
    VCallFuncWithGC(runtime, (VFunc)VSetCdr2, 3,
      _var0,
      _var1,
      statics->up->vars[2]);
} else {
  {
    VClosure * _closure = VDecodeClosure(statics->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      VInlineCdr2(runtime,
        _var1);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0list_V0append_B_V10_Dloop_D178(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
}
static void _V10_Dappend_B_D50_V0k87(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.k.471 1 0) (bruijn ##.x.176 1 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      statics->vars[1]);
}
static void _V10_Dappend_B_D50_V0k88(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dappend_B_D50_V0k88" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dappend_B_D50_V0k88, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity list append!) #t (bruijn ##.append!.50 2 25) (bruijn ##.k.477 1 0) (bruijn ##.x.180 1 1) (bruijn ##.x.478 0 0))
  {
   VEnv * _closure_env = _V60_V0vanity_V0list;
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      statics->vars[1];
    VWORD _arg2 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0append_B, _V60_V0vanity_V0list)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0list_V0append_B(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
static void _V10_Dappend_B_D50_V0k90(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dappend_B_D50_V0k90" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dappend_B_D50_V0k90, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity list append!) #t (bruijn ##.append!.50 3 25) (bruijn ##.k.479 2 0) (bruijn ##.x.183 2 1) (bruijn ##.x.480 0 0))
  {
   VEnv * _closure_env = _V60_V0vanity_V0list;
    VWORD _arg0 = 
      statics->up->vars[0];
    VWORD _arg1 = 
      statics->up->vars[1];
    VWORD _arg2 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0append_B, _V60_V0vanity_V0list)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0list_V0append_B(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
static void _V10_Dappend_B_D50_V0k89(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dappend_B_D50_V0k89" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dappend_B_D50_V0k89, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity list append!) #t (bruijn ##.append!.50 2 25) (close _V10_Dappend_B_D50_V0k90) (bruijn ##.y.184 1 2) (bruijn ##.x.481 0 0))
  {
   VEnv * _closure_env = _V60_V0vanity_V0list;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dappend_B_D50_V0k90, self))));
    VWORD _arg1 = 
      statics->vars[2];
    VWORD _arg2 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0append_B, _V60_V0vanity_V0list)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0list_V0append_B(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
__attribute__((used)) static void _V20CaseError__V50_V0vanity_V0list_V0append_B(VRuntime * runtime, VEnv * statics, int argc, ...) {
 // ("_V50_V0vanity_V0list_V0append_B" #t (1 ((bruijn ##.k.469 0 0) '())) (2 ((bruijn ##.k.470 0 0) (bruijn ##.x.175 0 1))) (3 (if (##inline ##vcore.null? (bruijn ##.x.176 0 1)) ((bruijn ##.k.471 0 0) (bruijn ##.y.177 0 2)) (letrec 1 ((close "_V50_V0vanity_V0list_V0append_B_V10_Dloop_D178")) (##qualified-call (vanity list append! ##.loop.178) #f (bruijn ##.loop.178 0 0) (close _V10_Dappend_B_D50_V0k87) (bruijn ##.x.176 1 1))))) (4 (##qualified-call (vanity list append!) #t (bruijn ##.append!.50 1 25) (close _V10_Dappend_B_D50_V0k88) (bruijn ##.y.181 0 2) (bruijn ##.z.182 0 3))) (5 (##qualified-call (vanity list append!) #t (bruijn ##.append!.50 1 25) (close _V10_Dappend_B_D50_V0k89) (bruijn ##.z.185 0 3) (bruijn ##.w.186 0 4))) (1 + (##qualified-call (vanity list fold-right) #t (bruijn ##.fold-right.40 1 15) (bruijn ##.k.482 0 0) (bruijn ##.append!.50 1 25) '() (bruijn ##.lsts.187 0 1))))
 VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0append_B, got ~D~N"
 "-- expected 1~N"
 "-- expected 2~N"
 "-- expected 3~N"
 "-- expected 4~N"
 "-- expected 5~N"
 "-- expected 1 or more~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V50_V0vanity_V0list_V0append_B(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V20Case0__V50_V0vanity_V0list_V0append_B" };
 VRecordCall2(runtime, &dbg);
  // ((bruijn ##.k.469 0 0) '())
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VNULL);
}
__attribute__((used)) static void _V20Case1__V50_V0vanity_V0list_V0append_B(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V20Case1__V50_V0vanity_V0list_V0append_B" };
 VRecordCall2(runtime, &dbg);
  // ((bruijn ##.k.470 0 0) (bruijn ##.x.175 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _var1);
}
__attribute__((used)) static void _V20Case2__V50_V0vanity_V0list_V0append_B(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V20Case2__V50_V0vanity_V0list_V0append_B" };
 VRecordCall2(runtime, &dbg);
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (if (##inline ##vcore.null? (bruijn ##.x.176 0 1)) ((bruijn ##.k.471 0 0) (bruijn ##.y.177 0 2)) (letrec 1 ((close "_V50_V0vanity_V0list_V0append_B_V10_Dloop_D178")) (##qualified-call (vanity list append! ##.loop.178) #f (bruijn ##.loop.178 0 0) (close _V10_Dappend_B_D50_V0k87) (bruijn ##.x.176 1 1))))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var1))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _var2);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0append_B_V10_Dloop_D178, self))));
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dappend_B_D50_V0k87, self))));
    VWORD _arg1 = 
      statics->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0list_V0append_B_V10_Dloop_D178(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
}
}
__attribute__((used)) static void _V20Case3__V50_V0vanity_V0list_V0append_B(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V20Case3__V50_V0vanity_V0list_V0append_B" };
 VRecordCall2(runtime, &dbg);
  struct { VEnv self; VWORD argv[4]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 4, 4, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _var3;
  // (##qualified-call (vanity list append!) #t (bruijn ##.append!.50 1 25) (close _V10_Dappend_B_D50_V0k88) (bruijn ##.y.181 0 2) (bruijn ##.z.182 0 3))
  {
   VEnv * _closure_env = _V60_V0vanity_V0list;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dappend_B_D50_V0k88, self))));
    VWORD _arg1 = 
      _var2;
    VWORD _arg2 = 
      _var3;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0append_B, _V60_V0vanity_V0list)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0list_V0append_B(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
__attribute__((used)) static void _V20Case4__V50_V0vanity_V0list_V0append_B(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4) {
 static VDebugInfo dbg = { "_V20Case4__V50_V0vanity_V0list_V0append_B" };
 VRecordCall2(runtime, &dbg);
  struct { VEnv self; VWORD argv[5]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 5, 5, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _var3;
  self->vars[4] = _var4;
  // (##qualified-call (vanity list append!) #t (bruijn ##.append!.50 1 25) (close _V10_Dappend_B_D50_V0k89) (bruijn ##.z.185 0 3) (bruijn ##.w.186 0 4))
  {
   VEnv * _closure_env = _V60_V0vanity_V0list;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dappend_B_D50_V0k89, self))));
    VWORD _arg1 = 
      _var3;
    VWORD _arg2 = 
      _var4;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0append_B, _V60_V0vanity_V0list)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0list_V0append_B(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
__attribute__((used)) static void _V20Case5__V50_V0vanity_V0list_V0append_B(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, ...) {
 static VDebugInfo dbg = { "_V20Case5__V50_V0vanity_V0list_V0append_B" };
 VRecordCall2(runtime, &dbg);
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 1, argc, _var0);
  // (##qualified-call (vanity list fold-right) #t (bruijn ##.fold-right.40 1 15) (bruijn ##.k.482 0 0) (bruijn ##.append!.50 1 25) '() (bruijn ##.lsts.187 0 1))
  {
   VEnv * _closure_env = _V60_V0vanity_V0list;
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      statics->vars[25];
    VWORD _arg2 = 
      VNULL;
    VWORD _arg3 = 
      _varargs;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0fold__right, _V60_V0vanity_V0list)}, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0list_V0fold__right(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0list_V0append_B(VRuntime * runtime, VEnv * statics, int argc, ...);
asm(
".intel_syntax noprefix\n"
#ifdef __linux__
".type _V50_V0vanity_V0list_V0append_B, @function\n"
#endif
".globl _V50_V0vanity_V0list_V0append_B\n"
"_V50_V0vanity_V0list_V0append_B:\n"
"    cmp " ARGC_REG ", 1\n"
"    je _V20Case0__V50_V0vanity_V0list_V0append_B\n"
"    cmp " ARGC_REG ", 2\n"
"    je _V20Case1__V50_V0vanity_V0list_V0append_B\n"
"    cmp " ARGC_REG ", 3\n"
"    je _V20Case2__V50_V0vanity_V0list_V0append_B\n"
"    cmp " ARGC_REG ", 4\n"
"    je _V20Case3__V50_V0vanity_V0list_V0append_B\n"
"    cmp " ARGC_REG ", 5\n"
"    je _V20Case4__V50_V0vanity_V0list_V0append_B\n"
"    cmp " ARGC_REG ", 1\n"
"    jge _V20Case5__V50_V0vanity_V0list_V0append_B\n"
"    jmp _V20CaseError__V50_V0vanity_V0list_V0append_B\n"
);
void _V50_V0vanity_V0list_V0split__at_V0lambda9(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0split__at_V0lambda9" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0split__at_V0lambda9, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.646) ((##vcore.- (bruijn ##.i.189 2 2) 1)) (##qualified-call (vanity list split-at) #t (bruijn ##.split-at.51 3 26) (bruijn ##.k.485 1 0) (##inline ##vcore.cdr (bruijn ##.lst.188 2 1)) (bruijn ##.reg.646 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VSub2(runtime, NULL,
      statics->up->vars[2],
      VEncodeInt(1l));
  {
   VEnv * _closure_env = _V60_V0vanity_V0list;
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      VInlineCdr2(runtime,
        statics->up->vars[1]);
    VWORD _arg2 = 
      self->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0split__at, _V60_V0vanity_V0list)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0list_V0split__at(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
void _V50_V0vanity_V0list_V0split__at_V0lambda10(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0split__at_V0lambda10" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0split__at_V0lambda10, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  // ((bruijn ##.values.2 3 3) (bruijn ##.k.488 0 0) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.lst.188 1 1)) (bruijn ##.t.190 0 1)) (bruijn ##.d.191 0 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[3]), 3,
      _var0,
      VInlineCons2(runtime,
        VInlineCar2(runtime,
        statics->vars[1]),
        _var1),
      _var2);
}
void _V50_V0vanity_V0list_V0split__at(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0split__at" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0split__at, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (if (##inline ##vcore.eq? (bruijn ##.i.189 0 2) 0) ((bruijn ##.values.2 2 3) (bruijn ##.k.483 0 0) '() (bruijn ##.lst.188 0 1)) (##vcore.call-with-values (bruijn ##.k.483 0 0) (close _V50_V0vanity_V0list_V0split__at_V0lambda9) (close _V50_V0vanity_V0list_V0split__at_V0lambda10)))
if(VDecodeBool(
VInlineEq2(runtime,
        _var2,
        VEncodeInt(0l)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[3]), 3,
      _var0,
      VNULL,
      _var1);
} else {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0split__at_V0lambda9, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0split__at_V0lambda10, self)))));
}
}
void _V50_V0vanity_V0list_V0drop__right_V10_Dloop_D194_V0k91(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0drop__right_V10_Dloop_D194_V0k91" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0drop__right_V10_Dloop_D194_V0k91, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.492 2 0) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.lst.195 2 1)) (bruijn ##.x.495 0 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VInlineCons2(runtime,
        VInlineCar2(runtime,
        statics->up->vars[1]),
        _var0));
}
void _V50_V0vanity_V0list_V0drop__right_V10_Dloop_D194(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0drop__right_V10_Dloop_D194" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0drop__right_V10_Dloop_D194, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (if (##inline ##vcore.eq? (bruijn ##.len.196 0 2) (bruijn ##.i.193 2 2)) ((bruijn ##.k.492 0 0) '()) (basic-block 1 1 (##.reg.647) ((##vcore.- (bruijn ##.len.196 1 2) 1)) (##qualified-call (vanity list drop-right ##.loop.194) #f (bruijn ##.loop.194 2 0) (close _V50_V0vanity_V0list_V0drop__right_V10_Dloop_D194_V0k91) (##inline ##vcore.cdr (bruijn ##.lst.195 1 1)) (bruijn ##.reg.647 0 0))))
if(VDecodeBool(
VInlineEq2(runtime,
        _var2,
        statics->up->vars[2]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VNULL);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VSub2(runtime, NULL,
      statics->vars[2],
      VEncodeInt(1l));
  {
    VClosure * _closure = VDecodeClosure(statics->up->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0drop__right_V10_Dloop_D194_V0k91, self))));
    VWORD _arg1 = 
      VInlineCdr2(runtime,
        statics->vars[1]);
    VWORD _arg2 = 
      self->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0list_V0drop__right_V10_Dloop_D194(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
}
void _V50_V0vanity_V0list_V0drop__right_V0k92(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0drop__right_V0k92" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0drop__right_V0k92, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity list drop-right ##.loop.194) #f (bruijn ##.loop.194 1 0) (bruijn ##.k.491 2 0) (bruijn ##.lst.192 2 1) (bruijn ##.x.498 0 0))
  {
    VClosure * _closure = VDecodeClosure(statics->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->up->vars[0];
    VWORD _arg1 = 
      statics->up->vars[1];
    VWORD _arg2 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0list_V0drop__right_V10_Dloop_D194(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0list_V0drop__right(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0drop__right" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0drop__right, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (letrec 1 ((close "_V50_V0vanity_V0list_V0drop__right_V10_Dloop_D194")) (##qualified-call (vanity list my-num-pairs) #t (bruijn ##.my-num-pairs.69 2 44) (close _V50_V0vanity_V0list_V0drop__right_V0k92) (bruijn ##.lst.192 1 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0drop__right_V10_Dloop_D194, self))));
  {
   VEnv * _closure_env = _V60_V0vanity_V0list;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0drop__right_V0k92, self))));
    VWORD _arg1 = 
      statics->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0my__num__pairs, _V60_V0vanity_V0list)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0list_V0my__num__pairs(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
}
void _V50_V0vanity_V0list_V0take__right_V10_Dloop_D199(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0take__right_V10_Dloop_D199" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0take__right_V10_Dloop_D199, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (if (##inline ##vcore.eq? (bruijn ##.len.201 0 2) (bruijn ##.i.198 2 2)) ((bruijn ##.k.500 0 0) (bruijn ##.lst.200 0 1)) (basic-block 1 1 (##.reg.648) ((##vcore.- (bruijn ##.len.201 1 2) 1)) (##qualified-call (vanity list take-right ##.loop.199) #f (bruijn ##.loop.199 2 0) (bruijn ##.k.500 1 0) (##inline ##vcore.cdr (bruijn ##.lst.200 1 1)) (bruijn ##.reg.648 0 0))))
if(VDecodeBool(
VInlineEq2(runtime,
        _var2,
        statics->up->vars[2]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _var1);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VSub2(runtime, NULL,
      statics->vars[2],
      VEncodeInt(1l));
  {
    VClosure * _closure = VDecodeClosure(statics->up->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      VInlineCdr2(runtime,
        statics->vars[1]);
    VWORD _arg2 = 
      self->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0list_V0take__right_V10_Dloop_D199(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
}
void _V50_V0vanity_V0list_V0take__right_V0k93(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0take__right_V0k93" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0take__right_V0k93, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity list take-right ##.loop.199) #f (bruijn ##.loop.199 1 0) (bruijn ##.k.499 2 0) (bruijn ##.lst.197 2 1) (bruijn ##.x.504 0 0))
  {
    VClosure * _closure = VDecodeClosure(statics->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->up->vars[0];
    VWORD _arg1 = 
      statics->up->vars[1];
    VWORD _arg2 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0list_V0take__right_V10_Dloop_D199(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0list_V0take__right(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0take__right" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0take__right, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (letrec 1 ((close "_V50_V0vanity_V0list_V0take__right_V10_Dloop_D199")) (##qualified-call (vanity list my-num-pairs) #t (bruijn ##.my-num-pairs.69 2 44) (close _V50_V0vanity_V0list_V0take__right_V0k93) (bruijn ##.lst.197 1 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0take__right_V10_Dloop_D199, self))));
  {
   VEnv * _closure_env = _V60_V0vanity_V0list;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0take__right_V0k93, self))));
    VWORD _arg1 = 
      statics->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0my__num__pairs, _V60_V0vanity_V0list)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0list_V0my__num__pairs(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
}
void _V50_V0vanity_V0list_V0drop(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0drop" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0drop, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (if (##inline ##vcore.eq? (bruijn ##.i.203 0 2) 0) ((bruijn ##.k.505 0 0) (bruijn ##.lst.202 0 1)) (basic-block 1 1 (##.reg.649) ((##vcore.- (bruijn ##.i.203 1 2) 1)) (##qualified-call (vanity list drop) #t (bruijn ##.drop.54 2 29) (bruijn ##.k.505 1 0) (##inline ##vcore.cdr (bruijn ##.lst.202 1 1)) (bruijn ##.reg.649 0 0))))
if(VDecodeBool(
VInlineEq2(runtime,
        _var2,
        VEncodeInt(0l)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _var1);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VSub2(runtime, NULL,
      statics->vars[2],
      VEncodeInt(1l));
  {
   VEnv * _closure_env = _V60_V0vanity_V0list;
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      VInlineCdr2(runtime,
        statics->vars[1]);
    VWORD _arg2 = 
      self->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0drop, _V60_V0vanity_V0list)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0list_V0drop(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
}
void _V50_V0vanity_V0list_V0take_V0k94(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0take_V0k94" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0take_V0k94, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.509 2 0) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.lst.204 2 1)) (bruijn ##.x.512 0 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VInlineCons2(runtime,
        VInlineCar2(runtime,
        statics->up->vars[1]),
        _var0));
}
void _V50_V0vanity_V0list_V0take(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0take" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0take, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (if (##inline ##vcore.eq? (bruijn ##.i.205 0 2) 0) ((bruijn ##.k.509 0 0) '()) (basic-block 1 1 (##.reg.650) ((##vcore.- (bruijn ##.i.205 1 2) 1)) (##qualified-call (vanity list take) #t (bruijn ##.take.55 2 30) (close _V50_V0vanity_V0list_V0take_V0k94) (##inline ##vcore.cdr (bruijn ##.lst.204 1 1)) (bruijn ##.reg.650 0 0))))
if(VDecodeBool(
VInlineEq2(runtime,
        _var2,
        VEncodeInt(0l)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VNULL);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VSub2(runtime, NULL,
      statics->vars[2],
      VEncodeInt(1l));
  {
   VEnv * _closure_env = _V60_V0vanity_V0list;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0take_V0k94, self))));
    VWORD _arg1 = 
      VInlineCdr2(runtime,
        statics->vars[1]);
    VWORD _arg2 = 
      self->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0take, _V60_V0vanity_V0list)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0list_V0take(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
}
void _V50_V0vanity_V0list_V0car_Pcdr(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0car_Pcdr" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0car_Pcdr, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.values.2 2 3) (bruijn ##.k.515 0 0) (##inline ##vcore.car (bruijn ##.x.206 0 1)) (##inline ##vcore.cdr (bruijn ##.x.206 0 1)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[3]), 3,
      _var0,
      VInlineCar2(runtime,
        _var1),
      VInlineCdr2(runtime,
        _var1));
}
void _V50_V0vanity_V0list_V0tenth(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0tenth" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0tenth, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.list-ref.6 2 7) (bruijn ##.k.518 0 0) (bruijn ##.x.207 0 1) 9)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[7]), 3,
      _var0,
      _var1,
      VEncodeInt(9l));
}
void _V50_V0vanity_V0list_V0ninth(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0ninth" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0ninth, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.list-ref.6 2 7) (bruijn ##.k.519 0 0) (bruijn ##.x.208 0 1) 8)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[7]), 3,
      _var0,
      _var1,
      VEncodeInt(8l));
}
void _V50_V0vanity_V0list_V0eighth(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0eighth" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0eighth, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.list-ref.6 2 7) (bruijn ##.k.520 0 0) (bruijn ##.x.209 0 1) 7)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[7]), 3,
      _var0,
      _var1,
      VEncodeInt(7l));
}
void _V50_V0vanity_V0list_V0seventh(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0seventh" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0seventh, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.list-ref.6 2 7) (bruijn ##.k.521 0 0) (bruijn ##.x.210 0 1) 6)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[7]), 3,
      _var0,
      _var1,
      VEncodeInt(6l));
}
void _V50_V0vanity_V0list_V0sixth(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0sixth" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0sixth, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.list-ref.6 2 7) (bruijn ##.k.522 0 0) (bruijn ##.x.211 0 1) 5)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[7]), 3,
      _var0,
      _var1,
      VEncodeInt(5l));
}
void _V50_V0vanity_V0list_V0fifth(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0fifth" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0fifth, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.list-ref.6 2 7) (bruijn ##.k.523 0 0) (bruijn ##.x.212 0 1) 4)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[7]), 3,
      _var0,
      _var1,
      VEncodeInt(4l));
}
void _V50_V0vanity_V0list_V0list__tabulate_V10_Dloop_D215_V0k96(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0list__tabulate_V10_Dloop_D215_V0k96" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0list__tabulate_V10_Dloop_D215_V0k96, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.525 3 0) (##inline ##vcore.cons (bruijn ##.x.527 2 0) (bruijn ##.x.528 0 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VInlineCons2(runtime,
        statics->up->vars[0],
        _var0));
}
void _V50_V0vanity_V0list_V0list__tabulate_V10_Dloop_D215_V0k95(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0list__tabulate_V10_Dloop_D215_V0k95" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0list__tabulate_V10_Dloop_D215_V0k95, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.651) ((##vcore.+ (bruijn ##.i.216 2 1) 1)) (##qualified-call (vanity list list-tabulate ##.loop.215) #f (bruijn ##.loop.215 3 0) (close _V50_V0vanity_V0list_V0list__tabulate_V10_Dloop_D215_V0k96) (bruijn ##.reg.651 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      statics->up->vars[1],
      VEncodeInt(1l));
  {
    VClosure * _closure = VDecodeClosure(statics->up->up->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0list__tabulate_V10_Dloop_D215_V0k96, self))));
    VWORD _arg1 = 
      self->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0list_V0list__tabulate_V10_Dloop_D215(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
}
void _V50_V0vanity_V0list_V0list__tabulate_V10_Dloop_D215(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0list__tabulate_V10_Dloop_D215" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0list__tabulate_V10_Dloop_D215, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (if (##inline ##vcore.eq? (bruijn ##.i.216 0 1) (bruijn ##.n.213 2 1)) ((bruijn ##.k.525 0 0) '()) ((bruijn ##.proc.214 2 2) (close _V50_V0vanity_V0list_V0list__tabulate_V10_Dloop_D215_V0k95) (bruijn ##.i.216 0 1)))
if(VDecodeBool(
VInlineEq2(runtime,
        _var1,
        statics->up->vars[1]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VNULL);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[2]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0list__tabulate_V10_Dloop_D215_V0k95, self)))),
      _var1);
}
}
void _V50_V0vanity_V0list_V0list__tabulate(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0list__tabulate" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0list__tabulate, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (letrec 1 ((close "_V50_V0vanity_V0list_V0list__tabulate_V10_Dloop_D215")) (##qualified-call (vanity list list-tabulate ##.loop.215) #f (bruijn ##.loop.215 0 0) (bruijn ##.k.524 1 0) 0))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0list__tabulate_V10_Dloop_D215, self))));
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      VEncodeInt(0l);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0list_V0list__tabulate_V10_Dloop_D215(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
}
void _V50_V0vanity_V0list_V0iota_V10_Dloop_D218_V0k97(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0iota_V10_Dloop_D218_V0k97" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0iota_V10_Dloop_D218_V0k97, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.531 2 0) (##inline ##vcore.cons (bruijn ##.i.219 2 1) (bruijn ##.x.533 0 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VInlineCons2(runtime,
        statics->up->vars[1],
        _var0));
}
void _V50_V0vanity_V0list_V0iota_V10_Dloop_D218(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0iota_V10_Dloop_D218" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0iota_V10_Dloop_D218, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (if (##inline ##vcore.eq? (bruijn ##.i.219 0 1) (bruijn ##.n.217 2 1)) ((bruijn ##.k.531 0 0) '()) (basic-block 1 1 (##.reg.652) ((##vcore.+ (bruijn ##.i.219 1 1) 1)) (##qualified-call (vanity list iota ##.loop.218) #f (bruijn ##.loop.218 2 0) (close _V50_V0vanity_V0list_V0iota_V10_Dloop_D218_V0k97) (bruijn ##.reg.652 0 0))))
if(VDecodeBool(
VInlineEq2(runtime,
        _var1,
        statics->up->vars[1]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VNULL);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      statics->vars[1],
      VEncodeInt(1l));
  {
    VClosure * _closure = VDecodeClosure(statics->up->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0iota_V10_Dloop_D218_V0k97, self))));
    VWORD _arg1 = 
      self->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0list_V0iota_V10_Dloop_D218(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
}
}
void _V50_V0vanity_V0list_V0iota_V10_Dloop_D222_V0k98(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0iota_V10_Dloop_D222_V0k98" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0iota_V10_Dloop_D222_V0k98, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.536 2 0) (##inline ##vcore.cons (bruijn ##.reg.653 1 0) (bruijn ##.x.539 0 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VInlineCons2(runtime,
        statics->vars[0],
        _var0));
}
void _V50_V0vanity_V0list_V0iota_V10_Dloop_D222(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0iota_V10_Dloop_D222" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0iota_V10_Dloop_D222, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (if (##inline ##vcore.eq? (bruijn ##.i.223 0 1) (bruijn ##.n.220 2 1)) ((bruijn ##.k.536 0 0) '()) (basic-block 2 2 (##.reg.653 ##.reg.654) ((##vcore.+ (bruijn ##.i.223 1 1) (bruijn ##.b.221 3 2)) (##vcore.+ (bruijn ##.i.223 1 1) 1)) (##qualified-call (vanity list iota ##.loop.222) #f (bruijn ##.loop.222 2 0) (close _V50_V0vanity_V0list_V0iota_V10_Dloop_D222_V0k98) (bruijn ##.reg.654 0 1))))
if(VDecodeBool(
VInlineEq2(runtime,
        _var1,
        statics->up->vars[1]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VNULL);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      statics->vars[1],
      statics->up->up->vars[2]);
    self->vars[1] = _VBasic_VAdd2(runtime, NULL,
      statics->vars[1],
      VEncodeInt(1l));
  {
    VClosure * _closure = VDecodeClosure(statics->up->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0iota_V10_Dloop_D222_V0k98, self))));
    VWORD _arg1 = 
      self->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0list_V0iota_V10_Dloop_D222(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
}
}
void _V50_V0vanity_V0list_V0iota_V10_Dloop_D227_V0k99(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0iota_V10_Dloop_D227_V0k99" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0iota_V10_Dloop_D227_V0k99, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.542 2 0) (##inline ##vcore.cons (bruijn ##.reg.656 1 1) (bruijn ##.x.545 0 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VInlineCons2(runtime,
        statics->vars[1],
        _var0));
}
void _V50_V0vanity_V0list_V0iota_V10_Dloop_D227(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0iota_V10_Dloop_D227" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0iota_V10_Dloop_D227, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (if (##inline ##vcore.eq? (bruijn ##.i.228 0 1) (bruijn ##.n.224 2 1)) ((bruijn ##.k.542 0 0) '()) (basic-block 3 3 (##.reg.655 ##.reg.656 ##.reg.657) ((##vcore.* (bruijn ##.s.226 3 3) (bruijn ##.i.228 1 1)) (##vcore.+ (bruijn ##.reg.655 0 0) (bruijn ##.b.225 3 2)) (##vcore.+ (bruijn ##.i.228 1 1) 1)) (##qualified-call (vanity list iota ##.loop.227) #f (bruijn ##.loop.227 2 0) (close _V50_V0vanity_V0list_V0iota_V10_Dloop_D227_V0k99) (bruijn ##.reg.657 0 2))))
if(VDecodeBool(
VInlineEq2(runtime,
        _var1,
        statics->up->vars[1]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VNULL);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VMul2(runtime, NULL,
      statics->up->up->vars[3],
      statics->vars[1]);
    self->vars[1] = _VBasic_VAdd2(runtime, NULL,
      self->vars[0],
      statics->up->up->vars[2]);
    self->vars[2] = _VBasic_VAdd2(runtime, NULL,
      statics->vars[1],
      VEncodeInt(1l));
  {
    VClosure * _closure = VDecodeClosure(statics->up->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0iota_V10_Dloop_D227_V0k99, self))));
    VWORD _arg1 = 
      self->vars[2];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0list_V0iota_V10_Dloop_D227(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
}
}
__attribute__((used)) static void _V20CaseError__V50_V0vanity_V0list_V0iota(VRuntime * runtime, VEnv * statics, int argc, ...) {
 // ("_V50_V0vanity_V0list_V0iota" #t (2 (letrec 1 ((close "_V50_V0vanity_V0list_V0iota_V10_Dloop_D218")) (##qualified-call (vanity list iota ##.loop.218) #f (bruijn ##.loop.218 0 0) (bruijn ##.k.530 1 0) 0))) (3 (letrec 1 ((close "_V50_V0vanity_V0list_V0iota_V10_Dloop_D222")) (##qualified-call (vanity list iota ##.loop.222) #f (bruijn ##.loop.222 0 0) (bruijn ##.k.535 1 0) 0))) (4 (letrec 1 ((close "_V50_V0vanity_V0list_V0iota_V10_Dloop_D227")) (##qualified-call (vanity list iota ##.loop.227) #f (bruijn ##.loop.227 0 0) (bruijn ##.k.541 1 0) 0))))
 VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0iota, got ~D~N"
 "-- expected 2~N"
 "-- expected 3~N"
 "-- expected 4~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V50_V0vanity_V0list_V0iota(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V20Case0__V50_V0vanity_V0list_V0iota" };
 VRecordCall2(runtime, &dbg);
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (letrec 1 ((close "_V50_V0vanity_V0list_V0iota_V10_Dloop_D218")) (##qualified-call (vanity list iota ##.loop.218) #f (bruijn ##.loop.218 0 0) (bruijn ##.k.530 1 0) 0))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0iota_V10_Dloop_D218, self))));
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      VEncodeInt(0l);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0list_V0iota_V10_Dloop_D218(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
}
__attribute__((used)) static void _V20Case1__V50_V0vanity_V0list_V0iota(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V20Case1__V50_V0vanity_V0list_V0iota" };
 VRecordCall2(runtime, &dbg);
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (letrec 1 ((close "_V50_V0vanity_V0list_V0iota_V10_Dloop_D222")) (##qualified-call (vanity list iota ##.loop.222) #f (bruijn ##.loop.222 0 0) (bruijn ##.k.535 1 0) 0))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0iota_V10_Dloop_D222, self))));
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      VEncodeInt(0l);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0list_V0iota_V10_Dloop_D222(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
}
__attribute__((used)) static void _V20Case2__V50_V0vanity_V0list_V0iota(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V20Case2__V50_V0vanity_V0list_V0iota" };
 VRecordCall2(runtime, &dbg);
  struct { VEnv self; VWORD argv[4]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 4, 4, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _var3;
  // (letrec 1 ((close "_V50_V0vanity_V0list_V0iota_V10_Dloop_D227")) (##qualified-call (vanity list iota ##.loop.227) #f (bruijn ##.loop.227 0 0) (bruijn ##.k.541 1 0) 0))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0iota_V10_Dloop_D227, self))));
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      VEncodeInt(0l);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0list_V0iota_V10_Dloop_D227(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
}
void _V50_V0vanity_V0list_V0iota(VRuntime * runtime, VEnv * statics, int argc, ...);
asm(
".intel_syntax noprefix\n"
#ifdef __linux__
".type _V50_V0vanity_V0list_V0iota, @function\n"
#endif
".globl _V50_V0vanity_V0list_V0iota\n"
"_V50_V0vanity_V0list_V0iota:\n"
"    cmp " ARGC_REG ", 2\n"
"    je _V20Case0__V50_V0vanity_V0list_V0iota\n"
"    cmp " ARGC_REG ", 3\n"
"    je _V20Case1__V50_V0vanity_V0list_V0iota\n"
"    cmp " ARGC_REG ", 4\n"
"    je _V20Case2__V50_V0vanity_V0list_V0iota\n"
"    jmp _V20CaseError__V50_V0vanity_V0list_V0iota\n"
);
void _V50_V0vanity_V0list_V0my__num__pairs_V10_Dloop_D230(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0my__num__pairs_V10_Dloop_D230" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0my__num__pairs_V10_Dloop_D230, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (if (##inline ##vcore.pair? (bruijn ##.lst.231 0 1)) (basic-block 1 1 (##.reg.658) ((##vcore.+ (bruijn ##.n.232 1 2) 1)) (##qualified-call (vanity list my-num-pairs ##.loop.230) #f (bruijn ##.loop.230 2 0) (bruijn ##.k.549 1 0) (##inline ##vcore.cdr (bruijn ##.lst.231 1 1)) (bruijn ##.reg.658 0 0))) ((bruijn ##.k.549 0 0) (bruijn ##.n.232 0 2)))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var1))) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      statics->vars[2],
      VEncodeInt(1l));
  {
    VClosure * _closure = VDecodeClosure(statics->up->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      VInlineCdr2(runtime,
        statics->vars[1]);
    VWORD _arg2 = 
      self->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0list_V0my__num__pairs_V10_Dloop_D230(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _var2);
}
}
void _V50_V0vanity_V0list_V0my__num__pairs(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0my__num__pairs" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0my__num__pairs, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (letrec 1 ((close "_V50_V0vanity_V0list_V0my__num__pairs_V10_Dloop_D230")) (##qualified-call (vanity list my-num-pairs ##.loop.230) #f (bruijn ##.loop.230 0 0) (bruijn ##.k.548 1 0) (bruijn ##.lst.229 1 1) 0))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0my__num__pairs_V10_Dloop_D230, self))));
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
       _V50_V0vanity_V0list_V0my__num__pairs_V10_Dloop_D230(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
static void _V0vanity_V0list_V20_V0k103(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.k.238 1 0) (##inline ##vcore.cons (##inline ##vcore.cons 'iota (bruijn ##.iota.68 0 43)) (##inline ##vcore.cons (##inline ##vcore.cons 'list-tabulate (bruijn ##.list-tabulate.67 0 42)) (##inline ##vcore.cons (##inline ##vcore.cons 'first (bruijn ##.first.66 0 41)) (##inline ##vcore.cons (##inline ##vcore.cons 'second (bruijn ##.second.65 0 40)) (##inline ##vcore.cons (##inline ##vcore.cons 'third (bruijn ##.third.64 0 39)) (##inline ##vcore.cons (##inline ##vcore.cons 'fourth (bruijn ##.fourth.63 0 38)) (##inline ##vcore.cons (##inline ##vcore.cons 'fifth (bruijn ##.fifth.62 0 37)) (##inline ##vcore.cons (##inline ##vcore.cons 'sixth (bruijn ##.sixth.61 0 36)) (##inline ##vcore.cons (##inline ##vcore.cons 'seventh (bruijn ##.seventh.60 0 35)) (##inline ##vcore.cons (##inline ##vcore.cons 'eighth (bruijn ##.eighth.59 0 34)) (##inline ##vcore.cons (##inline ##vcore.cons 'ninth (bruijn ##.ninth.58 0 33)) (##inline ##vcore.cons (##inline ##vcore.cons 'tenth (bruijn ##.tenth.57 0 32)) (##inline ##vcore.cons (##inline ##vcore.cons 'car+cdr (bruijn ##.car+cdr.56 0 31)) (##inline ##vcore.cons (##inline ##vcore.cons 'take (bruijn ##.take.55 0 30)) (##inline ##vcore.cons (##inline ##vcore.cons 'drop (bruijn ##.drop.54 0 29)) (##inline ##vcore.cons (##inline ##vcore.cons 'take-right (bruijn ##.take-right.53 0 28)) (##inline ##vcore.cons (##inline ##vcore.cons 'drop-right (bruijn ##.drop-right.52 0 27)) (##inline ##vcore.cons (##inline ##vcore.cons 'split-at (bruijn ##.split-at.51 0 26)) (##inline ##vcore.cons (##inline ##vcore.cons 'append! (bruijn ##.append!.50 0 25)) (##inline ##vcore.cons (##inline ##vcore.cons 'concatenate (bruijn ##.concatenate.49 0 24)) (##inline ##vcore.cons (##inline ##vcore.cons 'zip (bruijn ##.zip.48 0 23)) (##inline ##vcore.cons (##inline ##vcore.cons 'unzip1 (bruijn ##.unzip1.47 0 22)) (##inline ##vcore.cons (##inline ##vcore.cons 'unzip2 (bruijn ##.unzip2.46 0 21)) (##inline ##vcore.cons (##inline ##vcore.cons 'unzip3 (bruijn ##.unzip3.45 0 20)) (##inline ##vcore.cons (##inline ##vcore.cons 'unzip4 (bruijn ##.unzip4.44 0 19)) (##inline ##vcore.cons (##inline ##vcore.cons 'unzip5 (bruijn ##.unzip5.43 0 18)) (##inline ##vcore.cons (##inline ##vcore.cons 'count (bruijn ##.count.42 0 17)) (##inline ##vcore.cons (##inline ##vcore.cons 'fold (bruijn ##.fold.41 0 16)) (##inline ##vcore.cons (##inline ##vcore.cons 'fold-right (bruijn ##.fold-right.40 0 15)) (##inline ##vcore.cons (##inline ##vcore.cons 'append-map (bruijn ##.append-map.39 0 14)) (##inline ##vcore.cons (##inline ##vcore.cons 'append-map! (bruijn ##.append-map!.38 0 13)) (##inline ##vcore.cons (##inline ##vcore.cons 'filter (bruijn ##.filter.37 0 12)) (##inline ##vcore.cons (##inline ##vcore.cons 'partition (bruijn ##.partition.36 0 11)) (##inline ##vcore.cons (##inline ##vcore.cons 'take-while (bruijn ##.take-while.35 0 10)) (##inline ##vcore.cons (##inline ##vcore.cons 'drop-while (bruijn ##.drop-while.34 0 9)) (##inline ##vcore.cons (##inline ##vcore.cons 'split-while (bruijn ##.split-while.33 0 8)) (##inline ##vcore.cons (##inline ##vcore.cons 'any? (bruijn ##.any?.32 0 7)) (##inline ##vcore.cons (##inline ##vcore.cons 'every? (bruijn ##.every?.31 0 6)) (##inline ##vcore.cons (##inline ##vcore.cons 'list-index (bruijn ##.list-index.30 0 5)) (##inline ##vcore.cons (##inline ##vcore.cons 'insert (bruijn ##.insert.29 0 4)) (##inline ##vcore.cons (##inline ##vcore.cons 'delete (bruijn ##.delete.28 0 3)) (##inline ##vcore.cons (##inline ##vcore.cons 'assq-update (bruijn ##.assq-update.27 0 2)) (##inline ##vcore.cons (##inline ##vcore.cons 'assv-update (bruijn ##.assv-update.26 0 1)) (##inline ##vcore.cons (##inline ##vcore.cons 'assoc-update (bruijn ##.assoc-update.25 0 0)) '())))))))))))))))))))))))))))))))))))))))))))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0iota,
        self->vars[43]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0list__tabulate,
        self->vars[42]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0first,
        self->vars[41]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0second,
        self->vars[40]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0third,
        self->vars[39]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0fourth,
        self->vars[38]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0fifth,
        self->vars[37]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0sixth,
        self->vars[36]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0seventh,
        self->vars[35]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0eighth,
        self->vars[34]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0ninth,
        self->vars[33]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0tenth,
        self->vars[32]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0car_Pcdr,
        self->vars[31]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0take,
        self->vars[30]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0drop,
        self->vars[29]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0take__right,
        self->vars[28]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0drop__right,
        self->vars[27]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0split__at,
        self->vars[26]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0append_B,
        self->vars[25]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0concatenate,
        self->vars[24]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0zip,
        self->vars[23]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0unzip1,
        self->vars[22]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0unzip2,
        self->vars[21]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0unzip3,
        self->vars[20]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0unzip4,
        self->vars[19]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0unzip5,
        self->vars[18]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0count,
        self->vars[17]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0fold,
        self->vars[16]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0fold__right,
        self->vars[15]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0append__map,
        self->vars[14]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0append__map_B,
        self->vars[13]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0filter,
        self->vars[12]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0partition,
        self->vars[11]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0take__while,
        self->vars[10]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0drop__while,
        self->vars[9]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0split__while,
        self->vars[8]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0any_Q,
        self->vars[7]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0every_Q,
        self->vars[6]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0list__index,
        self->vars[5]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0insert,
        self->vars[4]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0delete,
        self->vars[3]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0assq__update,
        self->vars[2]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0assv__update,
        self->vars[1]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0assoc__update,
        self->vars[0]),
        VNULL)))))))))))))))))))))))))))))))))))))))))))));
}
static void _V0vanity_V0list_V20_V0k102(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (set! (close _V0vanity_V0list_V20_V0k103) (bruijn ##.fourth.63 0 38) (bruijn ##.cadddr.9 1 10))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0list_V20_V0k103, self)))),
      VEncodeInt(0l), VEncodeInt(38l),
      statics->vars[10]
    );
}
static void _V0vanity_V0list_V20_V0k101(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (set! (close _V0vanity_V0list_V20_V0k102) (bruijn ##.third.64 0 39) (bruijn ##.caddr.8 1 9))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0list_V20_V0k102, self)))),
      VEncodeInt(0l), VEncodeInt(39l),
      statics->vars[9]
    );
}
static void _V0vanity_V0list_V20_V0k100(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (set! (close _V0vanity_V0list_V20_V0k101) (bruijn ##.second.65 0 40) (bruijn ##.cadr.7 1 8))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0list_V20_V0k101, self)))),
      VEncodeInt(0l), VEncodeInt(40l),
      statics->vars[8]
    );
}
static void _V0vanity_V0list_V20_V0lambda3(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4, VWORD _var5, VWORD _var6, VWORD _var7, VWORD _var8, VWORD _var9, VWORD _var10) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_V0lambda3" };
 VRecordCall2(runtime, &dbg);
 if(argc != 11) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0list_V20_V0lambda3, got ~D~N"
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
  // (##letrec (vanity list) 45 ((close "_V50_V0vanity_V0list_V0assoc__update" "_V60_V0vanity_V0list") (close "_V50_V0vanity_V0list_V0assv__update" "_V60_V0vanity_V0list") (close "_V50_V0vanity_V0list_V0assq__update" "_V60_V0vanity_V0list") (close "_V50_V0vanity_V0list_V0delete" "_V60_V0vanity_V0list") (close "_V50_V0vanity_V0list_V0insert" "_V60_V0vanity_V0list") (close "_V50_V0vanity_V0list_V0list__index" "_V60_V0vanity_V0list") (close "_V50_V0vanity_V0list_V0every_Q" "_V60_V0vanity_V0list") (close "_V50_V0vanity_V0list_V0any_Q" "_V60_V0vanity_V0list") (close "_V50_V0vanity_V0list_V0split__while" "_V60_V0vanity_V0list") (close "_V50_V0vanity_V0list_V0drop__while" "_V60_V0vanity_V0list") (close "_V50_V0vanity_V0list_V0take__while" "_V60_V0vanity_V0list") (close "_V50_V0vanity_V0list_V0partition" "_V60_V0vanity_V0list") (close "_V50_V0vanity_V0list_V0filter" "_V60_V0vanity_V0list") (close "_V50_V0vanity_V0list_V0append__map_B" "_V60_V0vanity_V0list") (close "_V50_V0vanity_V0list_V0append__map" "_V60_V0vanity_V0list") (close "_V50_V0vanity_V0list_V0fold__right" "_V60_V0vanity_V0list") (close "_V50_V0vanity_V0list_V0fold" "_V60_V0vanity_V0list") (close "_V50_V0vanity_V0list_V0count" "_V60_V0vanity_V0list") (close "_V50_V0vanity_V0list_V0unzip5" "_V60_V0vanity_V0list") (close "_V50_V0vanity_V0list_V0unzip4" "_V60_V0vanity_V0list") (close "_V50_V0vanity_V0list_V0unzip3" "_V60_V0vanity_V0list") (close "_V50_V0vanity_V0list_V0unzip2" "_V60_V0vanity_V0list") (close "_V50_V0vanity_V0list_V0unzip1" "_V60_V0vanity_V0list") (close "_V50_V0vanity_V0list_V0zip" "_V60_V0vanity_V0list") (close "_V50_V0vanity_V0list_V0concatenate" "_V60_V0vanity_V0list") (close "_V50_V0vanity_V0list_V0append_B" "_V60_V0vanity_V0list") (close "_V50_V0vanity_V0list_V0split__at" "_V60_V0vanity_V0list") (close "_V50_V0vanity_V0list_V0drop__right" "_V60_V0vanity_V0list") (close "_V50_V0vanity_V0list_V0take__right" "_V60_V0vanity_V0list") (close "_V50_V0vanity_V0list_V0drop" "_V60_V0vanity_V0list") (close "_V50_V0vanity_V0list_V0take" "_V60_V0vanity_V0list") (close "_V50_V0vanity_V0list_V0car_Pcdr" "_V60_V0vanity_V0list") (close "_V50_V0vanity_V0list_V0tenth" "_V60_V0vanity_V0list") (close "_V50_V0vanity_V0list_V0ninth" "_V60_V0vanity_V0list") (close "_V50_V0vanity_V0list_V0eighth" "_V60_V0vanity_V0list") (close "_V50_V0vanity_V0list_V0seventh" "_V60_V0vanity_V0list") (close "_V50_V0vanity_V0list_V0sixth" "_V60_V0vanity_V0list") (close "_V50_V0vanity_V0list_V0fifth" "_V60_V0vanity_V0list") #f #f #f #f (close "_V50_V0vanity_V0list_V0list__tabulate" "_V60_V0vanity_V0list") (close "_V50_V0vanity_V0list_V0iota" "_V60_V0vanity_V0list") (close "_V50_V0vanity_V0list_V0my__num__pairs" "_V60_V0vanity_V0list")) (set! (close _V0vanity_V0list_V20_V0k100) (bruijn ##.first.66 0 41) (##intrinsic ##vcore.car)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[45]; } container;
    self = &container.self;
    _V60_V0vanity_V0list = self;
    VInitEnv(self, 45, 45, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0assoc__update, _V60_V0vanity_V0list))));
    self->vars[1] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0assv__update, _V60_V0vanity_V0list))));
    self->vars[2] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0assq__update, _V60_V0vanity_V0list))));
    self->vars[3] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0delete, _V60_V0vanity_V0list))));
    self->vars[4] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0insert, _V60_V0vanity_V0list))));
    self->vars[5] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0list__index, _V60_V0vanity_V0list))));
    self->vars[6] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0every_Q, _V60_V0vanity_V0list))));
    self->vars[7] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0any_Q, _V60_V0vanity_V0list))));
    self->vars[8] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0split__while, _V60_V0vanity_V0list))));
    self->vars[9] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0drop__while, _V60_V0vanity_V0list))));
    self->vars[10] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0take__while, _V60_V0vanity_V0list))));
    self->vars[11] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0partition, _V60_V0vanity_V0list))));
    self->vars[12] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0filter, _V60_V0vanity_V0list))));
    self->vars[13] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0append__map_B, _V60_V0vanity_V0list))));
    self->vars[14] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0append__map, _V60_V0vanity_V0list))));
    self->vars[15] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0fold__right, _V60_V0vanity_V0list))));
    self->vars[16] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0fold, _V60_V0vanity_V0list))));
    self->vars[17] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0count, _V60_V0vanity_V0list))));
    self->vars[18] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0unzip5, _V60_V0vanity_V0list))));
    self->vars[19] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0unzip4, _V60_V0vanity_V0list))));
    self->vars[20] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0unzip3, _V60_V0vanity_V0list))));
    self->vars[21] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0unzip2, _V60_V0vanity_V0list))));
    self->vars[22] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0unzip1, _V60_V0vanity_V0list))));
    self->vars[23] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0zip, _V60_V0vanity_V0list))));
    self->vars[24] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0concatenate, _V60_V0vanity_V0list))));
    self->vars[25] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0append_B, _V60_V0vanity_V0list))));
    self->vars[26] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0split__at, _V60_V0vanity_V0list))));
    self->vars[27] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0drop__right, _V60_V0vanity_V0list))));
    self->vars[28] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0take__right, _V60_V0vanity_V0list))));
    self->vars[29] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0drop, _V60_V0vanity_V0list))));
    self->vars[30] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0take, _V60_V0vanity_V0list))));
    self->vars[31] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0car_Pcdr, _V60_V0vanity_V0list))));
    self->vars[32] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0tenth, _V60_V0vanity_V0list))));
    self->vars[33] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0ninth, _V60_V0vanity_V0list))));
    self->vars[34] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0eighth, _V60_V0vanity_V0list))));
    self->vars[35] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0seventh, _V60_V0vanity_V0list))));
    self->vars[36] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0sixth, _V60_V0vanity_V0list))));
    self->vars[37] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0fifth, _V60_V0vanity_V0list))));
    self->vars[38] = VEncodeBool(false);
    self->vars[39] = VEncodeBool(false);
    self->vars[40] = VEncodeBool(false);
    self->vars[41] = VEncodeBool(false);
    self->vars[42] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0list__tabulate, _V60_V0vanity_V0list))));
    self->vars[43] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0iota, _V60_V0vanity_V0list))));
    self->vars[44] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0my__num__pairs, _V60_V0vanity_V0list))));
    VRegisterStaticEnv("_V0vanity_V0list_V20", &_V60_V0vanity_V0list);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0list_V20_V0k100, self)))),
      VEncodeInt(0l), VEncodeInt(41l),
      _V40_V10vcore_Dcar
    );
    }
}
static void _V0vanity_V0list_V20_V0lambda1(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_V0lambda1" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0list_V20_V0lambda1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.k.234 0 0) (close _V0vanity_V0list_V20_V0lambda2) (close _V0vanity_V0list_V20_V0lambda3))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0list_V20_V0lambda2, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0list_V20_V0lambda3, self)))));
}
VFunc _V0vanity_V0list_V20 = (VFunc)_V0vanity_V0list_V20_V0lambda1;
