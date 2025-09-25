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


static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D669 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "_V0vanity_V0core_V20" };
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D668 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "_V0vanity_V0list_V20" };
VWEAK VWORD _V0cadr;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0cadr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "cadr" };
VWEAK VWORD _V0caddr;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0caddr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "caddr" };
VWEAK VWORD _V0cadddr;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0cadddr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "cadddr" };
VWEAK VWORD _V0list__ref;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0list__ref = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "list-ref" };
VWEAK VWORD _V0values;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0values = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "values" };
VWEAK VWORD _V0append;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0append = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "append" };
VWEAK VWORD _V0map;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0map = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "map" };
VWEAK VWORD _V0list;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0list = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "list" };
VWEAK VWORD _V0caar;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0caar = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "caar" };
VWEAK VWORD _V0equal_Q;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0equal_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "equal\?" };
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
VWEAK VWORD _V40_V10vcore_Dcdr;
VWEAK VClosure _VW_V40_V10vcore_Dcdr = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VCdr2, NULL };
VWEAK VWORD _V40_V10vcore_Dcar;
VWEAK VClosure _VW_V40_V10vcore_Dcar = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VCar2, NULL };
static __attribute__((constructor)) void VDllMain1() {
  _V0cadr = VEncodePointer(VInternSymbol(137264287, &_VW_V0cadr.sym), VPOINTER_OTHER);
  _V0caddr = VEncodePointer(VInternSymbol(396082650, &_VW_V0caddr.sym), VPOINTER_OTHER);
  _V0cadddr = VEncodePointer(VInternSymbol(-448763463, &_VW_V0cadddr.sym), VPOINTER_OTHER);
  _V0list__ref = VEncodePointer(VInternSymbol(-297841368, &_VW_V0list__ref.sym), VPOINTER_OTHER);
  _V0values = VEncodePointer(VInternSymbol(711325068, &_VW_V0values.sym), VPOINTER_OTHER);
  _V0append = VEncodePointer(VInternSymbol(-700471979, &_VW_V0append.sym), VPOINTER_OTHER);
  _V0map = VEncodePointer(VInternSymbol(-1940887657, &_VW_V0map.sym), VPOINTER_OTHER);
  _V0list = VEncodePointer(VInternSymbol(-1594870040, &_VW_V0list.sym), VPOINTER_OTHER);
  _V0caar = VEncodePointer(VInternSymbol(-610927850, &_VW_V0caar.sym), VPOINTER_OTHER);
  _V0equal_Q = VEncodePointer(VInternSymbol(1746439164, &_VW_V0equal_Q.sym), VPOINTER_OTHER);
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
  _V40_V10vcore_Dcdr = VEncodePointer(VLookupConstant("_V40_V10vcore_Dcdr", &_VW_V40_V10vcore_Dcdr), VPOINTER_CLOSURE);
  _V40_V10vcore_Dcar = VEncodePointer(VLookupConstant("_V40_V10vcore_Dcar", &_VW_V40_V10vcore_Dcar), VPOINTER_CLOSURE);
}
V_DECLARE_FUNC_MIN(_V50_V0vanity_V0list_V0assoc__update);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0assv__update, _var0, _var1, _var2, _var3);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0assq__update, _var0, _var1, _var2, _var3);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0delete, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0insert, _var0, _var1, _var2, _var3);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0list__index_V10_Dloop_D213, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0list__index, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0every_Q, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0any_Q, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0split__while, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0drop__while, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0take__while, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0partition, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0filter, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D191, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D185, _var0, _var1, _var2, _var3);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D178, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D173, _var0, _var1);
V_DECLARE_FUNC_MIN(_V50_V0vanity_V0list_V0append__map_B);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0append__map_V10_Dloop_D169, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0append__map_V10_Dloop_D163, _var0, _var1, _var2, _var3);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0append__map_V10_Dloop_D156, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0append__map_V10_Dloop_D151, _var0, _var1);
V_DECLARE_FUNC_MIN(_V50_V0vanity_V0list_V0append__map);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0fold__right, _var0, _var1, _var2, _var3);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0fold, _var0, _var1, _var2, _var3);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0count_V10_Dloop_D139, _var0, _var1, _var2, _var3);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0count, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0unzip5, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0unzip4, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0unzip3, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0unzip2, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0unzip1, _var0, _var1);
V_DECLARE_FUNC_MIN(_V50_V0vanity_V0list_V0zip, _var0);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0concatenate, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0append_B_V10_Dloop_D119, _var0, _var1);
V_DECLARE_FUNC_MIN(_V50_V0vanity_V0list_V0append_B);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0split__at, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0drop__right_V10_Dloop_D109, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0drop__right, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0take__right_V10_Dloop_D104, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0take__right, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0drop, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0take, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0car_Pcdr, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0tenth, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0ninth, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0eighth, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0seventh, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0sixth, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0fifth, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0list__tabulate_V10_Dloop_D89, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0list__tabulate, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0iota_V10_Dloop_D85, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0iota_V10_Dloop_D80, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0iota_V10_Dloop_D76, _var0, _var1);
V_DECLARE_FUNC_MIN(_V50_V0vanity_V0list_V0iota);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0my__num__pairs_V10_Dloop_D72, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0my__num__pairs, _var0, _var1);
void _V50_V0vanity_V0list_V0my__num__pairs_V10_Dloop_D72(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0my__num__pairs_V10_Dloop_D72, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (if (##inline ##vcore.pair? (bruijn ##.lst.73 0 1)) (basic-block 1 1 (##.reg.649) ((##vcore.+ (bruijn ##.n.74 1 2) 1)) (##qualified-call (vanity list my-num-pairs ##.loop.72) (bruijn ##.loop.72 2 0) (bruijn ##.k.247 1 0) (##inline ##vcore.cdr (bruijn ##.lst.73 1 1)) (bruijn ##.reg.649 0 0))) ((bruijn ##.k.247 0 0) (bruijn ##.n.74 0 2)))
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
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      VInlineCdr2(runtime,
        statics->vars[1]);
    VWORD _arg2 = 
      self->vars[0];
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0list_V0my__num__pairs_V10_Dloop_D72(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _var2);
}
}
void _V50_V0vanity_V0list_V0my__num__pairs(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
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
  // (letrec 1 ((close "_V50_V0vanity_V0list_V0my__num__pairs_V10_Dloop_D72")) (##qualified-call (vanity list my-num-pairs ##.loop.72) (bruijn ##.loop.72 0 0) (bruijn ##.k.246 1 0) (bruijn ##.lst.71 1 1) 0))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0my__num__pairs_V10_Dloop_D72, self))));
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      statics->vars[1];
    VWORD _arg2 = 
      VEncodeInt(0l);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0list_V0my__num__pairs_V10_Dloop_D72(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
void _V50_V0vanity_V0list_V0iota_V10_Dloop_D76_V0k13(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0iota_V10_Dloop_D76_V0k13, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.252 2 0) (##inline ##vcore.cons (bruijn ##.i.77 2 1) (bruijn ##.x.254 0 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VInlineCons2(runtime,
        statics->up->vars[1],
        _var0));
}
void _V50_V0vanity_V0list_V0iota_V10_Dloop_D76(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0iota_V10_Dloop_D76, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (if (##inline ##vcore.eq? (bruijn ##.i.77 0 1) (bruijn ##.n.75 2 1)) ((bruijn ##.k.252 0 0) '()) (basic-block 1 1 (##.reg.650) ((##vcore.+ (bruijn ##.i.77 1 1) 1)) (##qualified-call (vanity list iota ##.loop.76) (bruijn ##.loop.76 2 0) (close _V50_V0vanity_V0list_V0iota_V10_Dloop_D76_V0k13) (bruijn ##.reg.650 0 0))))
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
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0iota_V10_Dloop_D76_V0k13, self))));
    VWORD _arg1 = 
      self->vars[0];
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0list_V0iota_V10_Dloop_D76(runtime, _closure->env, 2, _arg0, _arg1);
    }
  }
    }
}
}
void _V50_V0vanity_V0list_V0iota_V10_Dloop_D80_V0k14(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0iota_V10_Dloop_D80_V0k14, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.257 2 0) (##inline ##vcore.cons (bruijn ##.reg.651 1 0) (bruijn ##.x.260 0 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VInlineCons2(runtime,
        statics->vars[0],
        _var0));
}
void _V50_V0vanity_V0list_V0iota_V10_Dloop_D80(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0iota_V10_Dloop_D80, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (if (##inline ##vcore.eq? (bruijn ##.i.81 0 1) (bruijn ##.n.78 2 1)) ((bruijn ##.k.257 0 0) '()) (basic-block 2 2 (##.reg.651 ##.reg.652) ((##vcore.+ (bruijn ##.i.81 1 1) (bruijn ##.b.79 3 2)) (##vcore.+ (bruijn ##.i.81 1 1) 1)) (##qualified-call (vanity list iota ##.loop.80) (bruijn ##.loop.80 2 0) (close _V50_V0vanity_V0list_V0iota_V10_Dloop_D80_V0k14) (bruijn ##.reg.652 0 1))))
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
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0iota_V10_Dloop_D80_V0k14, self))));
    VWORD _arg1 = 
      self->vars[1];
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0list_V0iota_V10_Dloop_D80(runtime, _closure->env, 2, _arg0, _arg1);
    }
  }
    }
}
}
void _V50_V0vanity_V0list_V0iota_V10_Dloop_D85_V0k15(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0iota_V10_Dloop_D85_V0k15, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.263 2 0) (##inline ##vcore.cons (bruijn ##.reg.654 1 1) (bruijn ##.x.266 0 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VInlineCons2(runtime,
        statics->vars[1],
        _var0));
}
void _V50_V0vanity_V0list_V0iota_V10_Dloop_D85(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0iota_V10_Dloop_D85, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (if (##inline ##vcore.eq? (bruijn ##.i.86 0 1) (bruijn ##.n.82 2 1)) ((bruijn ##.k.263 0 0) '()) (basic-block 3 3 (##.reg.653 ##.reg.654 ##.reg.655) ((##vcore.* (bruijn ##.s.84 3 3) (bruijn ##.i.86 1 1)) (##vcore.+ (bruijn ##.reg.653 0 0) (bruijn ##.b.83 3 2)) (##vcore.+ (bruijn ##.i.86 1 1) 1)) (##qualified-call (vanity list iota ##.loop.85) (bruijn ##.loop.85 2 0) (close _V50_V0vanity_V0list_V0iota_V10_Dloop_D85_V0k15) (bruijn ##.reg.655 0 2))))
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
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0iota_V10_Dloop_D85_V0k15, self))));
    VWORD _arg1 = 
      self->vars[2];
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0list_V0iota_V10_Dloop_D85(runtime, _closure->env, 2, _arg0, _arg1);
    }
  }
    }
}
}
__attribute__((used)) static void _V20CaseError__V50_V0vanity_V0list_V0iota(VRuntime * runtime, VEnv * statics, int argc, ...) {
 // ("_V50_V0vanity_V0list_V0iota" #t (2 (letrec 1 ((close "_V50_V0vanity_V0list_V0iota_V10_Dloop_D76")) (##qualified-call (vanity list iota ##.loop.76) (bruijn ##.loop.76 0 0) (bruijn ##.k.251 1 0) 0))) (3 (letrec 1 ((close "_V50_V0vanity_V0list_V0iota_V10_Dloop_D80")) (##qualified-call (vanity list iota ##.loop.80) (bruijn ##.loop.80 0 0) (bruijn ##.k.256 1 0) 0))) (4 (letrec 1 ((close "_V50_V0vanity_V0list_V0iota_V10_Dloop_D85")) (##qualified-call (vanity list iota ##.loop.85) (bruijn ##.loop.85 0 0) (bruijn ##.k.262 1 0) 0))))
 VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0iota, got ~D~N"
 "-- expected 2~N"
 "-- expected 3~N"
 "-- expected 4~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V50_V0vanity_V0list_V0iota(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (letrec 1 ((close "_V50_V0vanity_V0list_V0iota_V10_Dloop_D76")) (##qualified-call (vanity list iota ##.loop.76) (bruijn ##.loop.76 0 0) (bruijn ##.k.251 1 0) 0))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0iota_V10_Dloop_D76, self))));
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      VEncodeInt(0l);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0list_V0iota_V10_Dloop_D76(runtime, _closure->env, 2, _arg0, _arg1);
    }
  }
    }
}
__attribute__((used)) static void _V20Case1__V50_V0vanity_V0list_V0iota(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (letrec 1 ((close "_V50_V0vanity_V0list_V0iota_V10_Dloop_D80")) (##qualified-call (vanity list iota ##.loop.80) (bruijn ##.loop.80 0 0) (bruijn ##.k.256 1 0) 0))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0iota_V10_Dloop_D80, self))));
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      VEncodeInt(0l);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0list_V0iota_V10_Dloop_D80(runtime, _closure->env, 2, _arg0, _arg1);
    }
  }
    }
}
__attribute__((used)) static void _V20Case2__V50_V0vanity_V0list_V0iota(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
  struct { VEnv self; VWORD argv[4]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 4, 4, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _var3;
  // (letrec 1 ((close "_V50_V0vanity_V0list_V0iota_V10_Dloop_D85")) (##qualified-call (vanity list iota ##.loop.85) (bruijn ##.loop.85 0 0) (bruijn ##.k.262 1 0) 0))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0iota_V10_Dloop_D85, self))));
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      VEncodeInt(0l);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0list_V0iota_V10_Dloop_D85(runtime, _closure->env, 2, _arg0, _arg1);
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
void _V50_V0vanity_V0list_V0list__tabulate_V10_Dloop_D89_V0k17(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0list__tabulate_V10_Dloop_D89_V0k17, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.270 3 0) (##inline ##vcore.cons (bruijn ##.x.272 2 0) (bruijn ##.x.273 0 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VInlineCons2(runtime,
        statics->up->vars[0],
        _var0));
}
void _V50_V0vanity_V0list_V0list__tabulate_V10_Dloop_D89_V0k16(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0list__tabulate_V10_Dloop_D89_V0k16, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.656) ((##vcore.+ (bruijn ##.i.90 2 1) 1)) (##qualified-call (vanity list list-tabulate ##.loop.89) (bruijn ##.loop.89 3 0) (close _V50_V0vanity_V0list_V0list__tabulate_V10_Dloop_D89_V0k17) (bruijn ##.reg.656 0 0)))
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
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0list__tabulate_V10_Dloop_D89_V0k17, self))));
    VWORD _arg1 = 
      self->vars[0];
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0list_V0list__tabulate_V10_Dloop_D89(runtime, _closure->env, 2, _arg0, _arg1);
    }
  }
    }
}
void _V50_V0vanity_V0list_V0list__tabulate_V10_Dloop_D89(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0list__tabulate_V10_Dloop_D89, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (if (##inline ##vcore.eq? (bruijn ##.i.90 0 1) (bruijn ##.n.87 2 1)) ((bruijn ##.k.270 0 0) '()) ((bruijn ##.proc.88 2 2) (close _V50_V0vanity_V0list_V0list__tabulate_V10_Dloop_D89_V0k16) (bruijn ##.i.90 0 1)))
if(VDecodeBool(
VInlineEq2(runtime,
        _var1,
        statics->up->vars[1]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VNULL);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[2]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0list__tabulate_V10_Dloop_D89_V0k16, self)))),
      _var1);
}
}
void _V50_V0vanity_V0list_V0list__tabulate(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
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
  // (letrec 1 ((close "_V50_V0vanity_V0list_V0list__tabulate_V10_Dloop_D89")) (##qualified-call (vanity list list-tabulate ##.loop.89) (bruijn ##.loop.89 0 0) (bruijn ##.k.269 1 0) 0))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0list__tabulate_V10_Dloop_D89, self))));
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      VEncodeInt(0l);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0list_V0list__tabulate_V10_Dloop_D89(runtime, _closure->env, 2, _arg0, _arg1);
    }
  }
    }
}
void _V50_V0vanity_V0list_V0fifth(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0fifth, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.x.239 8 0) (bruijn ##.k.275 0 0) (bruijn ##.x.91 0 1) 4)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 0)), 3,
      _var0,
      _var1,
      VEncodeInt(4l));
}
void _V50_V0vanity_V0list_V0sixth(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0sixth, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.x.239 8 0) (bruijn ##.k.276 0 0) (bruijn ##.x.92 0 1) 5)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 0)), 3,
      _var0,
      _var1,
      VEncodeInt(5l));
}
void _V50_V0vanity_V0list_V0seventh(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0seventh, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.x.239 8 0) (bruijn ##.k.277 0 0) (bruijn ##.x.93 0 1) 6)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 0)), 3,
      _var0,
      _var1,
      VEncodeInt(6l));
}
void _V50_V0vanity_V0list_V0eighth(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0eighth, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.x.239 8 0) (bruijn ##.k.278 0 0) (bruijn ##.x.94 0 1) 7)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 0)), 3,
      _var0,
      _var1,
      VEncodeInt(7l));
}
void _V50_V0vanity_V0list_V0ninth(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0ninth, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.x.239 8 0) (bruijn ##.k.279 0 0) (bruijn ##.x.95 0 1) 8)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 0)), 3,
      _var0,
      _var1,
      VEncodeInt(8l));
}
void _V50_V0vanity_V0list_V0tenth(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0tenth, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.x.239 8 0) (bruijn ##.k.280 0 0) (bruijn ##.x.96 0 1) 9)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 0)), 3,
      _var0,
      _var1,
      VEncodeInt(9l));
}
void _V50_V0vanity_V0list_V0car_Pcdr(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0car_Pcdr, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.x.240 7 0) (bruijn ##.k.281 0 0) (##inline ##vcore.car (bruijn ##.x.97 0 1)) (##inline ##vcore.cdr (bruijn ##.x.97 0 1)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 3,
      _var0,
      VInlineCar2(runtime,
        _var1),
      VInlineCdr2(runtime,
        _var1));
}
void _V50_V0vanity_V0list_V0take_V0k18(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0take_V0k18, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.284 2 0) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.lst.98 2 1)) (bruijn ##.x.287 0 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VInlineCons2(runtime,
        VInlineCar2(runtime,
        statics->up->vars[1]),
        _var0));
}
void _V50_V0vanity_V0list_V0take(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
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
  // (if (##inline ##vcore.eq? (bruijn ##.i.99 0 2) 0) ((bruijn ##.k.284 0 0) '()) (basic-block 1 1 (##.reg.657) ((##vcore.- (bruijn ##.i.99 1 2) 1)) (##qualified-call (vanity list take) (bruijn ##.take.40 2 14) (close _V50_V0vanity_V0list_V0take_V0k18) (##inline ##vcore.cdr (bruijn ##.lst.98 1 1)) (bruijn ##.reg.657 0 0))))
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
    VClosure * _closure = VDecodeClosure(statics->up->vars[14]);
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0take_V0k18, self))));
    VWORD _arg1 = 
      VInlineCdr2(runtime,
        statics->vars[1]);
    VWORD _arg2 = 
      self->vars[0];
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0list_V0take(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
}
void _V50_V0vanity_V0list_V0drop(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
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
  // (if (##inline ##vcore.eq? (bruijn ##.i.101 0 2) 0) ((bruijn ##.k.290 0 0) (bruijn ##.lst.100 0 1)) (basic-block 1 1 (##.reg.658) ((##vcore.- (bruijn ##.i.101 1 2) 1)) (##qualified-call (vanity list drop) (bruijn ##.drop.41 2 15) (bruijn ##.k.290 1 0) (##inline ##vcore.cdr (bruijn ##.lst.100 1 1)) (bruijn ##.reg.658 0 0))))
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
    VClosure * _closure = VDecodeClosure(statics->up->vars[15]);
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      VInlineCdr2(runtime,
        statics->vars[1]);
    VWORD _arg2 = 
      self->vars[0];
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0list_V0drop(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
}
void _V50_V0vanity_V0list_V0take__right_V10_Dloop_D104(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0take__right_V10_Dloop_D104, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (if (##inline ##vcore.eq? (bruijn ##.len.106 0 2) (bruijn ##.i.103 2 2)) ((bruijn ##.k.295 0 0) (bruijn ##.lst.105 0 1)) (basic-block 1 1 (##.reg.659) ((##vcore.- (bruijn ##.len.106 1 2) 1)) (##qualified-call (vanity list take-right ##.loop.104) (bruijn ##.loop.104 2 0) (bruijn ##.k.295 1 0) (##inline ##vcore.cdr (bruijn ##.lst.105 1 1)) (bruijn ##.reg.659 0 0))))
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
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      VInlineCdr2(runtime,
        statics->vars[1]);
    VWORD _arg2 = 
      self->vars[0];
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0list_V0take__right_V10_Dloop_D104(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
}
void _V50_V0vanity_V0list_V0take__right_V0k19(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0take__right_V0k19, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity list take-right ##.loop.104) (bruijn ##.loop.104 1 0) (bruijn ##.k.294 2 0) (bruijn ##.lst.102 2 1) (bruijn ##.x.299 0 0))
  {
    VClosure * _closure = VDecodeClosure(statics->vars[0]);
    VWORD _arg0 = 
      statics->up->vars[0];
    VWORD _arg1 = 
      statics->up->vars[1];
    VWORD _arg2 = 
      _var0;
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0list_V0take__right_V10_Dloop_D104(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0list_V0take__right(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
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
  // (letrec 1 ((close "_V50_V0vanity_V0list_V0take__right_V10_Dloop_D104")) (##qualified-call (vanity list my-num-pairs) (bruijn ##.my-num-pairs.26 2 0) (close _V50_V0vanity_V0list_V0take__right_V0k19) (bruijn ##.lst.102 1 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0take__right_V10_Dloop_D104, self))));
  {
    VClosure * _closure = VDecodeClosure(statics->up->vars[0]);
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0take__right_V0k19, self))));
    VWORD _arg1 = 
      statics->vars[1];
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0list_V0my__num__pairs(runtime, _closure->env, 2, _arg0, _arg1);
    }
  }
    }
}
void _V50_V0vanity_V0list_V0drop__right_V10_Dloop_D109_V0k20(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0drop__right_V10_Dloop_D109_V0k20, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.301 2 0) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.lst.110 2 1)) (bruijn ##.x.304 0 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VInlineCons2(runtime,
        VInlineCar2(runtime,
        statics->up->vars[1]),
        _var0));
}
void _V50_V0vanity_V0list_V0drop__right_V10_Dloop_D109(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0drop__right_V10_Dloop_D109, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (if (##inline ##vcore.eq? (bruijn ##.len.111 0 2) (bruijn ##.i.108 2 2)) ((bruijn ##.k.301 0 0) '()) (basic-block 1 1 (##.reg.660) ((##vcore.- (bruijn ##.len.111 1 2) 1)) (##qualified-call (vanity list drop-right ##.loop.109) (bruijn ##.loop.109 2 0) (close _V50_V0vanity_V0list_V0drop__right_V10_Dloop_D109_V0k20) (##inline ##vcore.cdr (bruijn ##.lst.110 1 1)) (bruijn ##.reg.660 0 0))))
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
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0drop__right_V10_Dloop_D109_V0k20, self))));
    VWORD _arg1 = 
      VInlineCdr2(runtime,
        statics->vars[1]);
    VWORD _arg2 = 
      self->vars[0];
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0list_V0drop__right_V10_Dloop_D109(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
}
void _V50_V0vanity_V0list_V0drop__right_V0k21(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0drop__right_V0k21, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity list drop-right ##.loop.109) (bruijn ##.loop.109 1 0) (bruijn ##.k.300 2 0) (bruijn ##.lst.107 2 1) (bruijn ##.x.307 0 0))
  {
    VClosure * _closure = VDecodeClosure(statics->vars[0]);
    VWORD _arg0 = 
      statics->up->vars[0];
    VWORD _arg1 = 
      statics->up->vars[1];
    VWORD _arg2 = 
      _var0;
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0list_V0drop__right_V10_Dloop_D109(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0list_V0drop__right(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
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
  // (letrec 1 ((close "_V50_V0vanity_V0list_V0drop__right_V10_Dloop_D109")) (##qualified-call (vanity list my-num-pairs) (bruijn ##.my-num-pairs.26 2 0) (close _V50_V0vanity_V0list_V0drop__right_V0k21) (bruijn ##.lst.107 1 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0drop__right_V10_Dloop_D109, self))));
  {
    VClosure * _closure = VDecodeClosure(statics->up->vars[0]);
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0drop__right_V0k21, self))));
    VWORD _arg1 = 
      statics->vars[1];
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0list_V0my__num__pairs(runtime, _closure->env, 2, _arg0, _arg1);
    }
  }
    }
}
void _V50_V0vanity_V0list_V0split__at_V0lambda2(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0split__at_V0lambda2, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.661) ((##vcore.- (bruijn ##.i.113 2 2) 1)) (##qualified-call (vanity list split-at) (bruijn ##.split-at.44 3 18) (bruijn ##.k.310 1 0) (##inline ##vcore.cdr (bruijn ##.lst.112 2 1)) (bruijn ##.reg.661 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VSub2(runtime, NULL,
      statics->up->vars[2],
      VEncodeInt(1l));
  {
    VClosure * _closure = VDecodeClosure(statics->up->up->vars[18]);
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      VInlineCdr2(runtime,
        statics->up->vars[1]);
    VWORD _arg2 = 
      self->vars[0];
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0list_V0split__at(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
void _V50_V0vanity_V0list_V0split__at_V0lambda3(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0split__at_V0lambda3, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  // ((bruijn ##.x.240 8 0) (bruijn ##.k.313 0 0) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.lst.112 1 1)) (bruijn ##.t.114 0 1)) (bruijn ##.d.115 0 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 0)), 3,
      _var0,
      VInlineCons2(runtime,
        VInlineCar2(runtime,
        statics->vars[1]),
        _var1),
      _var2);
}
void _V50_V0vanity_V0list_V0split__at(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
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
  // (if (##inline ##vcore.eq? (bruijn ##.i.113 0 2) 0) ((bruijn ##.x.240 7 0) (bruijn ##.k.308 0 0) '() (bruijn ##.lst.112 0 1)) (##vcore.call-with-values (bruijn ##.k.308 0 0) (close _V50_V0vanity_V0list_V0split__at_V0lambda2) (close _V50_V0vanity_V0list_V0split__at_V0lambda3)))
if(VDecodeBool(
VInlineEq2(runtime,
        _var2,
        VEncodeInt(0l)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 3,
      _var0,
      VNULL,
      _var1);
} else {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0split__at_V0lambda2, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0split__at_V0lambda3, self)))));
}
}
void _V50_V0vanity_V0list_V0append_B_V10_Dloop_D119(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0append_B_V10_Dloop_D119, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.x.120 0 1))) (##vcore.set-cdr! (bruijn ##.k.321 0 0) (bruijn ##.x.120 0 1) (bruijn ##.y.118 2 2)) (##qualified-call (vanity list append! ##.loop.119) (bruijn ##.loop.119 1 0) (bruijn ##.k.321 0 0) (##inline ##vcore.cdr (bruijn ##.x.120 0 1))))
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
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      VInlineCdr2(runtime,
        _var1);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0list_V0append_B_V10_Dloop_D119(runtime, _closure->env, 2, _arg0, _arg1);
    }
  }
}
}
static void _V10_Dappend_B_D45_V0k22(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dappend_B_D45_V0k22, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.318 2 0) (bruijn ##.x.117 2 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      statics->up->vars[1]);
}
static void _V10_Dappend_B_D45_V0k23(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dappend_B_D45_V0k23, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity list append!) (bruijn ##.append!.45 2 19) (bruijn ##.k.325 1 0) (bruijn ##.x.121 1 1) (bruijn ##.x.326 0 0))
  {
    VClosure * _closure = VDecodeClosure(statics->up->vars[19]);
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      statics->vars[1];
    VWORD _arg2 = 
      _var0;
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0list_V0append_B(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
static void _V10_Dappend_B_D45_V0k25(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dappend_B_D45_V0k25, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity list append!) (bruijn ##.append!.45 3 19) (bruijn ##.k.327 2 0) (bruijn ##.x.124 2 1) (bruijn ##.x.328 0 0))
  {
    VClosure * _closure = VDecodeClosure(statics->up->up->vars[19]);
    VWORD _arg0 = 
      statics->up->vars[0];
    VWORD _arg1 = 
      statics->up->vars[1];
    VWORD _arg2 = 
      _var0;
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0list_V0append_B(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
static void _V10_Dappend_B_D45_V0k24(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dappend_B_D45_V0k24, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity list append!) (bruijn ##.append!.45 2 19) (close _V10_Dappend_B_D45_V0k25) (bruijn ##.y.125 1 2) (bruijn ##.x.329 0 0))
  {
    VClosure * _closure = VDecodeClosure(statics->up->vars[19]);
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dappend_B_D45_V0k25, self))));
    VWORD _arg1 = 
      statics->vars[2];
    VWORD _arg2 = 
      _var0;
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0list_V0append_B(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
__attribute__((used)) static void _V20CaseError__V50_V0vanity_V0list_V0append_B(VRuntime * runtime, VEnv * statics, int argc, ...) {
 // ("_V50_V0vanity_V0list_V0append_B" #t (1 ((bruijn ##.k.316 0 0) '())) (2 ((bruijn ##.k.317 0 0) (bruijn ##.x.116 0 1))) (3 (if (##inline ##vcore.null? (bruijn ##.x.117 0 1)) ((bruijn ##.k.318 0 0) (bruijn ##.y.118 0 2)) (letrec 1 ((close "_V50_V0vanity_V0list_V0append_B_V10_Dloop_D119")) (##qualified-call (vanity list append! ##.loop.119) (bruijn ##.loop.119 0 0) (close _V10_Dappend_B_D45_V0k22) (bruijn ##.x.117 1 1))))) (4 (##qualified-call (vanity list append!) (bruijn ##.append!.45 1 19) (close _V10_Dappend_B_D45_V0k23) (bruijn ##.y.122 0 2) (bruijn ##.z.123 0 3))) (5 (##qualified-call (vanity list append!) (bruijn ##.append!.45 1 19) (close _V10_Dappend_B_D45_V0k24) (bruijn ##.z.126 0 3) (bruijn ##.w.127 0 4))) (1 + (##qualified-call (vanity list fold-right) (bruijn ##.fold-right.55 1 29) (bruijn ##.k.330 0 0) (bruijn ##.append!.45 1 19) '() (bruijn ##.lsts.128 0 1))))
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
  // ((bruijn ##.k.316 0 0) '())
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VNULL);
}
__attribute__((used)) static void _V20Case1__V50_V0vanity_V0list_V0append_B(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
  // ((bruijn ##.k.317 0 0) (bruijn ##.x.116 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _var1);
}
__attribute__((used)) static void _V20Case2__V50_V0vanity_V0list_V0append_B(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (if (##inline ##vcore.null? (bruijn ##.x.117 0 1)) ((bruijn ##.k.318 0 0) (bruijn ##.y.118 0 2)) (letrec 1 ((close "_V50_V0vanity_V0list_V0append_B_V10_Dloop_D119")) (##qualified-call (vanity list append! ##.loop.119) (bruijn ##.loop.119 0 0) (close _V10_Dappend_B_D45_V0k22) (bruijn ##.x.117 1 1))))
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
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0append_B_V10_Dloop_D119, self))));
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dappend_B_D45_V0k22, self))));
    VWORD _arg1 = 
      statics->vars[1];
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0list_V0append_B_V10_Dloop_D119(runtime, _closure->env, 2, _arg0, _arg1);
    }
  }
    }
}
}
__attribute__((used)) static void _V20Case3__V50_V0vanity_V0list_V0append_B(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
  struct { VEnv self; VWORD argv[4]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 4, 4, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _var3;
  // (##qualified-call (vanity list append!) (bruijn ##.append!.45 1 19) (close _V10_Dappend_B_D45_V0k23) (bruijn ##.y.122 0 2) (bruijn ##.z.123 0 3))
  {
    VClosure * _closure = VDecodeClosure(statics->vars[19]);
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dappend_B_D45_V0k23, self))));
    VWORD _arg1 = 
      _var2;
    VWORD _arg2 = 
      _var3;
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0list_V0append_B(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
__attribute__((used)) static void _V20Case4__V50_V0vanity_V0list_V0append_B(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4) {
  struct { VEnv self; VWORD argv[5]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 5, 5, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _var3;
  self->vars[4] = _var4;
  // (##qualified-call (vanity list append!) (bruijn ##.append!.45 1 19) (close _V10_Dappend_B_D45_V0k24) (bruijn ##.z.126 0 3) (bruijn ##.w.127 0 4))
  {
    VClosure * _closure = VDecodeClosure(statics->vars[19]);
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dappend_B_D45_V0k24, self))));
    VWORD _arg1 = 
      _var3;
    VWORD _arg2 = 
      _var4;
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0list_V0append_B(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
__attribute__((used)) static void _V20Case5__V50_V0vanity_V0list_V0append_B(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, ...) {
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 1, argc, _var0);
  // (##qualified-call (vanity list fold-right) (bruijn ##.fold-right.55 1 29) (bruijn ##.k.330 0 0) (bruijn ##.append!.45 1 19) '() (bruijn ##.lsts.128 0 1))
  {
    VClosure * _closure = VDecodeClosure(statics->vars[29]);
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      statics->vars[19];
    VWORD _arg2 = 
      VNULL;
    VWORD _arg3 = 
      _varargs;
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0list_V0fold__right(runtime, _closure->env, 4, _arg0, _arg1, _arg2, _arg3);
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
void _V50_V0vanity_V0list_V0concatenate_V0k26(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0concatenate_V0k26, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.241 7 0) (bruijn ##.k.331 1 0) (##inline ##vcore.car (bruijn ##.lst-of-lsts.129 1 1)) (bruijn ##.x.334 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 3,
      statics->vars[0],
      VInlineCar2(runtime,
        statics->vars[1]),
      _var0);
}
void _V50_V0vanity_V0list_V0concatenate(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
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
  // (if (##inline ##vcore.null? (bruijn ##.lst-of-lsts.129 0 1)) ((bruijn ##.k.331 0 0) '()) (##qualified-call (vanity list concatenate) (bruijn ##.concatenate.46 1 20) (close _V50_V0vanity_V0list_V0concatenate_V0k26) (##inline ##vcore.cdr (bruijn ##.lst-of-lsts.129 0 1))))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var1))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VNULL);
} else {
  {
    VClosure * _closure = VDecodeClosure(statics->vars[20]);
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0concatenate_V0k26, self))));
    VWORD _arg1 = 
      VInlineCdr2(runtime,
        _var1);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0list_V0concatenate(runtime, _closure->env, 2, _arg0, _arg1);
    }
  }
}
}
void _V50_V0vanity_V0list_V0zip(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, ...) {
 if(argc < 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0zip, got ~D~N"
  "-- expected 1 or more~N"
  , argc);
 }
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 1, argc, _var0);
  // (##vcore.apply (bruijn ##.k.336 0 0) (bruijn ##.x.242 5 0) (bruijn ##.x.243 4 0) (bruijn ##.lsts.130 0 1))
    VCallFuncWithGC(runtime, (VFunc)VApply2, 4,
      _var0,
      VGetArg(statics, 5-1, 0),
      statics->up->up->up->vars[0],
      _varargs);
}
void _V50_V0vanity_V0list_V0unzip1(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0unzip1, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.x.242 5 0) (bruijn ##.k.337 0 0) (##intrinsic ##vcore.car) (bruijn ##.lst.131 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 3,
      _var0,
      _V40_V10vcore_Dcar,
      _var1);
}
void _V50_V0vanity_V0list_V0unzip2_V0k28(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0unzip2_V0k28, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.240 9 0) (bruijn ##.k.338 2 0) (bruijn ##.x.339 1 0) (bruijn ##.x.340 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 0)), 3,
      statics->up->vars[0],
      statics->vars[0],
      _var0);
}
void _V50_V0vanity_V0list_V0unzip2_V0k27(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0unzip2_V0k27, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.242 6 0) (close _V50_V0vanity_V0list_V0unzip2_V0k28) (bruijn ##.x.236 12 0) (bruijn ##.lst.132 1 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0unzip2_V0k28, self)))),
      VGetArg(statics, 12-1, 0),
      statics->vars[1]);
}
void _V50_V0vanity_V0list_V0unzip2(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
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
  // ((bruijn ##.x.242 5 0) (close _V50_V0vanity_V0list_V0unzip2_V0k27) (##intrinsic ##vcore.car) (bruijn ##.lst.132 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0unzip2_V0k27, self)))),
      _V40_V10vcore_Dcar,
      _var1);
}
void _V50_V0vanity_V0list_V0unzip3_V0k31(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0unzip3_V0k31, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.240 10 0) (bruijn ##.k.341 3 0) (bruijn ##.x.342 2 0) (bruijn ##.x.343 1 0) (bruijn ##.x.344 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 0)), 4,
      statics->up->up->vars[0],
      statics->up->vars[0],
      statics->vars[0],
      _var0);
}
void _V50_V0vanity_V0list_V0unzip3_V0k30(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0unzip3_V0k30, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.242 7 0) (close _V50_V0vanity_V0list_V0unzip3_V0k31) (bruijn ##.x.237 12 0) (bruijn ##.lst.133 2 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0unzip3_V0k31, self)))),
      VGetArg(statics, 12-1, 0),
      statics->up->vars[1]);
}
void _V50_V0vanity_V0list_V0unzip3_V0k29(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0unzip3_V0k29, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.242 6 0) (close _V50_V0vanity_V0list_V0unzip3_V0k30) (bruijn ##.x.236 12 0) (bruijn ##.lst.133 1 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0unzip3_V0k30, self)))),
      VGetArg(statics, 12-1, 0),
      statics->vars[1]);
}
void _V50_V0vanity_V0list_V0unzip3(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
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
  // ((bruijn ##.x.242 5 0) (close _V50_V0vanity_V0list_V0unzip3_V0k29) (##intrinsic ##vcore.car) (bruijn ##.lst.133 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0unzip3_V0k29, self)))),
      _V40_V10vcore_Dcar,
      _var1);
}
void _V50_V0vanity_V0list_V0unzip4_V0k35(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0unzip4_V0k35, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.240 11 0) (bruijn ##.k.345 4 0) (bruijn ##.x.346 3 0) (bruijn ##.x.347 2 0) (bruijn ##.x.348 1 0) (bruijn ##.x.349 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 0)), 5,
      statics->up->up->up->vars[0],
      statics->up->up->vars[0],
      statics->up->vars[0],
      statics->vars[0],
      _var0);
}
void _V50_V0vanity_V0list_V0unzip4_V0k34(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0unzip4_V0k34, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.242 8 0) (close _V50_V0vanity_V0list_V0unzip4_V0k35) (bruijn ##.x.238 12 0) (bruijn ##.lst.134 3 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0unzip4_V0k35, self)))),
      VGetArg(statics, 12-1, 0),
      statics->up->up->vars[1]);
}
void _V50_V0vanity_V0list_V0unzip4_V0k33(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0unzip4_V0k33, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.242 7 0) (close _V50_V0vanity_V0list_V0unzip4_V0k34) (bruijn ##.x.237 12 0) (bruijn ##.lst.134 2 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0unzip4_V0k34, self)))),
      VGetArg(statics, 12-1, 0),
      statics->up->vars[1]);
}
void _V50_V0vanity_V0list_V0unzip4_V0k32(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0unzip4_V0k32, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.242 6 0) (close _V50_V0vanity_V0list_V0unzip4_V0k33) (bruijn ##.x.236 12 0) (bruijn ##.lst.134 1 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0unzip4_V0k33, self)))),
      VGetArg(statics, 12-1, 0),
      statics->vars[1]);
}
void _V50_V0vanity_V0list_V0unzip4(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
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
  // ((bruijn ##.x.242 5 0) (close _V50_V0vanity_V0list_V0unzip4_V0k32) (##intrinsic ##vcore.car) (bruijn ##.lst.134 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0unzip4_V0k32, self)))),
      _V40_V10vcore_Dcar,
      _var1);
}
void _V50_V0vanity_V0list_V0unzip5_V0k40(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0unzip5_V0k40, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.240 12 0) (bruijn ##.k.350 5 0) (bruijn ##.x.351 4 0) (bruijn ##.x.352 3 0) (bruijn ##.x.353 2 0) (bruijn ##.x.354 1 0) (bruijn ##.x.355 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 0)), 6,
      VGetArg(statics, 5-1, 0),
      statics->up->up->up->vars[0],
      statics->up->up->vars[0],
      statics->up->vars[0],
      statics->vars[0],
      _var0);
}
void _V50_V0vanity_V0list_V0unzip5_V0lambda4(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0unzip5_V0lambda4, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.x.238 14 0) (bruijn ##.k.356 0 0) (##inline ##vcore.cdr (bruijn ##.e.136 0 1)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 0)), 2,
      _var0,
      VInlineCdr2(runtime,
        _var1));
}
void _V50_V0vanity_V0list_V0unzip5_V0k39(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0unzip5_V0k39, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.242 9 0) (close _V50_V0vanity_V0list_V0unzip5_V0k40) (close _V50_V0vanity_V0list_V0unzip5_V0lambda4) (bruijn ##.lst.135 4 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0unzip5_V0k40, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0unzip5_V0lambda4, self)))),
      statics->up->up->up->vars[1]);
}
void _V50_V0vanity_V0list_V0unzip5_V0k38(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0unzip5_V0k38, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.242 8 0) (close _V50_V0vanity_V0list_V0unzip5_V0k39) (bruijn ##.x.238 12 0) (bruijn ##.lst.135 3 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0unzip5_V0k39, self)))),
      VGetArg(statics, 12-1, 0),
      statics->up->up->vars[1]);
}
void _V50_V0vanity_V0list_V0unzip5_V0k37(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0unzip5_V0k37, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.242 7 0) (close _V50_V0vanity_V0list_V0unzip5_V0k38) (bruijn ##.x.237 12 0) (bruijn ##.lst.135 2 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0unzip5_V0k38, self)))),
      VGetArg(statics, 12-1, 0),
      statics->up->vars[1]);
}
void _V50_V0vanity_V0list_V0unzip5_V0k36(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0unzip5_V0k36, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.242 6 0) (close _V50_V0vanity_V0list_V0unzip5_V0k37) (bruijn ##.x.236 12 0) (bruijn ##.lst.135 1 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0unzip5_V0k37, self)))),
      VGetArg(statics, 12-1, 0),
      statics->vars[1]);
}
void _V50_V0vanity_V0list_V0unzip5(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
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
  // ((bruijn ##.x.242 5 0) (close _V50_V0vanity_V0list_V0unzip5_V0k36) (##intrinsic ##vcore.car) (bruijn ##.lst.135 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0unzip5_V0k36, self)))),
      _V40_V10vcore_Dcar,
      _var1);
}
void _V50_V0vanity_V0list_V0count_V10_Dloop_D139_V0k42(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0count_V10_Dloop_D139_V0k42, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.364 1 0) ((bruijn ##.k.365 0 0) 1) ((bruijn ##.k.365 0 0) 0))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeInt(1l));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeInt(0l));
}
}
void _V50_V0vanity_V0list_V0count_V10_Dloop_D139_V0k43(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0count_V10_Dloop_D139_V0k43, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.662) ((##vcore.+ (bruijn ##.n.140 3 1) (bruijn ##.x.363 1 0))) (##qualified-call (vanity list count ##.loop.139) (bruijn ##.loop.139 4 0) (bruijn ##.k.359 3 0) (bruijn ##.reg.662 0 0) (bruijn ##.pred.141 3 2) (##inline ##vcore.cdr (bruijn ##.lst.142 3 3))))
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
    VWORD _arg0 = 
      statics->up->up->vars[0];
    VWORD _arg1 = 
      self->vars[0];
    VWORD _arg2 = 
      statics->up->up->vars[2];
    VWORD _arg3 = 
      VInlineCdr2(runtime,
        statics->up->up->vars[3]);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0list_V0count_V10_Dloop_D139(runtime, _closure->env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
    }
}
void _V50_V0vanity_V0list_V0count_V10_Dloop_D139_V0k41(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0count_V10_Dloop_D139_V0k41, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0list_V0count_V10_Dloop_D139_V0k42) (close _V50_V0vanity_V0list_V0count_V10_Dloop_D139_V0k43))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0count_V10_Dloop_D139_V0k42, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0count_V10_Dloop_D139_V0k43, self)))));
}
void _V50_V0vanity_V0list_V0count_V10_Dloop_D139(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0count_V10_Dloop_D139, got ~D~N"
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
  // (if (##inline ##vcore.null? (bruijn ##.lst.142 0 3)) ((bruijn ##.k.359 0 0) (bruijn ##.n.140 0 1)) ((bruijn ##.pred.141 0 2) (close _V50_V0vanity_V0list_V0count_V10_Dloop_D139_V0k41) (##inline ##vcore.car (bruijn ##.lst.142 0 3))))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var3))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _var1);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var2), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0count_V10_Dloop_D139_V0k41, self)))),
      VInlineCar2(runtime,
        _var3));
}
}
void _V50_V0vanity_V0list_V0count(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
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
  // (letrec 1 ((close "_V50_V0vanity_V0list_V0count_V10_Dloop_D139")) (##qualified-call (vanity list count ##.loop.139) (bruijn ##.loop.139 0 0) (bruijn ##.k.358 1 0) 0 (bruijn ##.pred.137 1 1) (bruijn ##.lst.138 1 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0count_V10_Dloop_D139, self))));
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      VEncodeInt(0l);
    VWORD _arg2 = 
      statics->vars[1];
    VWORD _arg3 = 
      statics->vars[2];
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0list_V0count_V10_Dloop_D139(runtime, _closure->env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
    }
}
void _V50_V0vanity_V0list_V0fold_V0k44(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0fold_V0k44, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity list fold) (bruijn ##.fold.54 2 28) (bruijn ##.k.367 1 0) (bruijn ##.kons.143 1 1) (bruijn ##.x.369 0 0) (##inline ##vcore.cdr (bruijn ##.ks.145 1 3)))
  {
    VClosure * _closure = VDecodeClosure(statics->up->vars[28]);
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      statics->vars[1];
    VWORD _arg2 = 
      _var0;
    VWORD _arg3 = 
      VInlineCdr2(runtime,
        statics->vars[3]);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0list_V0fold(runtime, _closure->env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0list_V0fold(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
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
  // (if (##inline ##vcore.null? (bruijn ##.ks.145 0 3)) ((bruijn ##.k.367 0 0) (bruijn ##.knil.144 0 2)) ((bruijn ##.kons.143 0 1) (close _V50_V0vanity_V0list_V0fold_V0k44) (##inline ##vcore.car (bruijn ##.ks.145 0 3)) (bruijn ##.knil.144 0 2)))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var3))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _var2);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var1), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0fold_V0k44, self)))),
      VInlineCar2(runtime,
        _var3),
      _var2);
}
}
void _V50_V0vanity_V0list_V0fold__right_V0k45(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0fold__right_V0k45, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kons.146 1 1) (bruijn ##.k.372 1 0) (##inline ##vcore.car (bruijn ##.ks.148 1 3)) (bruijn ##.x.375 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[1]), 3,
      statics->vars[0],
      VInlineCar2(runtime,
        statics->vars[3]),
      _var0);
}
void _V50_V0vanity_V0list_V0fold__right(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
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
  // (if (##inline ##vcore.null? (bruijn ##.ks.148 0 3)) ((bruijn ##.k.372 0 0) (bruijn ##.knil.147 0 2)) (##qualified-call (vanity list fold-right) (bruijn ##.fold-right.55 1 29) (close _V50_V0vanity_V0list_V0fold__right_V0k45) (bruijn ##.kons.146 0 1) (bruijn ##.knil.147 0 2) (##inline ##vcore.cdr (bruijn ##.ks.148 0 3))))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var3))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _var2);
} else {
  {
    VClosure * _closure = VDecodeClosure(statics->vars[29]);
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0fold__right_V0k45, self))));
    VWORD _arg1 = 
      _var1;
    VWORD _arg2 = 
      _var2;
    VWORD _arg3 = 
      VInlineCdr2(runtime,
        _var3);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0list_V0fold__right(runtime, _closure->env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
}
void _V50_V0vanity_V0list_V0append__map_V10_Dloop_D151_V0k47(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0append__map_V10_Dloop_D151_V0k47, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.241 10 0) (bruijn ##.k.378 2 0) (bruijn ##.x.380 1 0) (bruijn ##.x.381 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 0)), 3,
      statics->up->vars[0],
      statics->vars[0],
      _var0);
}
void _V50_V0vanity_V0list_V0append__map_V10_Dloop_D151_V0k46(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0append__map_V10_Dloop_D151_V0k46, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity list append-map ##.loop.151) (bruijn ##.loop.151 2 0) (close _V50_V0vanity_V0list_V0append__map_V10_Dloop_D151_V0k47) (##inline ##vcore.cdr (bruijn ##.xs.152 1 1)))
  {
    VClosure * _closure = VDecodeClosure(statics->up->vars[0]);
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0append__map_V10_Dloop_D151_V0k47, self))));
    VWORD _arg1 = 
      VInlineCdr2(runtime,
        statics->vars[1]);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0list_V0append__map_V10_Dloop_D151(runtime, _closure->env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0list_V0append__map_V10_Dloop_D151(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0append__map_V10_Dloop_D151, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (if (##inline ##vcore.null? (bruijn ##.xs.152 0 1)) ((bruijn ##.k.378 0 0) '()) ((bruijn ##.f.149 2 1) (close _V50_V0vanity_V0list_V0append__map_V10_Dloop_D151_V0k46) (##inline ##vcore.car (bruijn ##.xs.152 0 1))))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var1))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VNULL);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[1]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0append__map_V10_Dloop_D151_V0k46, self)))),
      VInlineCar2(runtime,
        _var1));
}
}
void _V50_V0vanity_V0list_V0append__map_V10_Dloop_D156_V0k49(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0append__map_V10_Dloop_D156_V0k49, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.393 1 0) ((bruijn ##.k.394 0 0) (bruijn ##.p.393 1 0)) ((bruijn ##.k.394 0 0) (##inline ##vcore.null? (bruijn ##.ys.158 2 2))))
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
void _V50_V0vanity_V0list_V0append__map_V10_Dloop_D156_V0k52(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0append__map_V10_Dloop_D156_V0k52, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.241 12 0) (bruijn ##.k.385 4 0) (bruijn ##.x.387 1 0) (bruijn ##.x.388 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 0)), 3,
      statics->up->up->up->vars[0],
      statics->vars[0],
      _var0);
}
void _V50_V0vanity_V0list_V0append__map_V10_Dloop_D156_V0k51(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0append__map_V10_Dloop_D156_V0k51, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity list append-map ##.loop.156) (bruijn ##.loop.156 4 0) (close _V50_V0vanity_V0list_V0append__map_V10_Dloop_D156_V0k52) (##inline ##vcore.cdr (bruijn ##.xs.157 3 1)) (##inline ##vcore.cdr (bruijn ##.ys.158 3 2)))
  {
    VClosure * _closure = VDecodeClosure(statics->up->up->up->vars[0]);
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0append__map_V10_Dloop_D156_V0k52, self))));
    VWORD _arg1 = 
      VInlineCdr2(runtime,
        statics->up->up->vars[1]);
    VWORD _arg2 = 
      VInlineCdr2(runtime,
        statics->up->up->vars[2]);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0list_V0append__map_V10_Dloop_D156(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0list_V0append__map_V10_Dloop_D156_V0k50(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0append__map_V10_Dloop_D156_V0k50, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.386 0 0) ((bruijn ##.k.385 2 0) '()) ((bruijn ##.f.153 4 1) (close _V50_V0vanity_V0list_V0append__map_V10_Dloop_D156_V0k51) (##inline ##vcore.car (bruijn ##.xs.157 2 1)) (##inline ##vcore.car (bruijn ##.ys.158 2 2))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VNULL);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[1]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0append__map_V10_Dloop_D156_V0k51, self)))),
      VInlineCar2(runtime,
        statics->up->vars[1]),
      VInlineCar2(runtime,
        statics->up->vars[2]));
}
}
void _V50_V0vanity_V0list_V0append__map_V10_Dloop_D156_V0k48(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0append__map_V10_Dloop_D156_V0k48, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0list_V0append__map_V10_Dloop_D156_V0k49) (close _V50_V0vanity_V0list_V0append__map_V10_Dloop_D156_V0k50))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0append__map_V10_Dloop_D156_V0k49, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0append__map_V10_Dloop_D156_V0k50, self)))));
}
void _V50_V0vanity_V0list_V0append__map_V10_Dloop_D156(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0append__map_V10_Dloop_D156, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((close _V50_V0vanity_V0list_V0append__map_V10_Dloop_D156_V0k48) (##inline ##vcore.null? (bruijn ##.xs.157 0 1)))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0append__map_V10_Dloop_D156_V0k48, self)), 1,
      VInlineNullP2(runtime,
        _var1));
}
void _V50_V0vanity_V0list_V0append__map_V10_Dloop_D163_V0k55(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0append__map_V10_Dloop_D163_V0k55, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.408 0 0) ((bruijn ##.k.407 1 0) (bruijn ##.p.408 0 0)) ((bruijn ##.k.407 1 0) (##inline ##vcore.null? (bruijn ##.zs.166 3 3))))
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
void _V50_V0vanity_V0list_V0append__map_V10_Dloop_D163_V0k54(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0append__map_V10_Dloop_D163_V0k54, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.406 1 0) ((bruijn ##.k.407 0 0) (bruijn ##.p.406 1 0)) ((close _V50_V0vanity_V0list_V0append__map_V10_Dloop_D163_V0k55) (##inline ##vcore.null? (bruijn ##.ys.165 2 2))))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->vars[0]);
} else {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0append__map_V10_Dloop_D163_V0k55, self)), 1,
      VInlineNullP2(runtime,
        statics->up->vars[2]));
}
}
void _V50_V0vanity_V0list_V0append__map_V10_Dloop_D163_V0k58(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0append__map_V10_Dloop_D163_V0k58, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.241 12 0) (bruijn ##.k.396 4 0) (bruijn ##.x.398 1 0) (bruijn ##.x.399 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 0)), 3,
      statics->up->up->up->vars[0],
      statics->vars[0],
      _var0);
}
void _V50_V0vanity_V0list_V0append__map_V10_Dloop_D163_V0k57(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0append__map_V10_Dloop_D163_V0k57, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity list append-map ##.loop.163) (bruijn ##.loop.163 4 0) (close _V50_V0vanity_V0list_V0append__map_V10_Dloop_D163_V0k58) (##inline ##vcore.cdr (bruijn ##.xs.164 3 1)) (##inline ##vcore.cdr (bruijn ##.ys.165 3 2)) (##inline ##vcore.cdr (bruijn ##.zs.166 3 3)))
  {
    VClosure * _closure = VDecodeClosure(statics->up->up->up->vars[0]);
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0append__map_V10_Dloop_D163_V0k58, self))));
    VWORD _arg1 = 
      VInlineCdr2(runtime,
        statics->up->up->vars[1]);
    VWORD _arg2 = 
      VInlineCdr2(runtime,
        statics->up->up->vars[2]);
    VWORD _arg3 = 
      VInlineCdr2(runtime,
        statics->up->up->vars[3]);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0list_V0append__map_V10_Dloop_D163(runtime, _closure->env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0list_V0append__map_V10_Dloop_D163_V0k56(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0append__map_V10_Dloop_D163_V0k56, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.397 0 0) ((bruijn ##.k.396 2 0) '()) ((bruijn ##.f.159 4 1) (close _V50_V0vanity_V0list_V0append__map_V10_Dloop_D163_V0k57) (##inline ##vcore.car (bruijn ##.xs.164 2 1)) (##inline ##vcore.car (bruijn ##.ys.165 2 2)) (##inline ##vcore.car (bruijn ##.zs.166 2 3))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VNULL);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[1]), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0append__map_V10_Dloop_D163_V0k57, self)))),
      VInlineCar2(runtime,
        statics->up->vars[1]),
      VInlineCar2(runtime,
        statics->up->vars[2]),
      VInlineCar2(runtime,
        statics->up->vars[3]));
}
}
void _V50_V0vanity_V0list_V0append__map_V10_Dloop_D163_V0k53(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0append__map_V10_Dloop_D163_V0k53, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0list_V0append__map_V10_Dloop_D163_V0k54) (close _V50_V0vanity_V0list_V0append__map_V10_Dloop_D163_V0k56))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0append__map_V10_Dloop_D163_V0k54, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0append__map_V10_Dloop_D163_V0k56, self)))));
}
void _V50_V0vanity_V0list_V0append__map_V10_Dloop_D163(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0append__map_V10_Dloop_D163, got ~D~N"
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
  // ((close _V50_V0vanity_V0list_V0append__map_V10_Dloop_D163_V0k53) (##inline ##vcore.null? (bruijn ##.xs.164 0 1)))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0append__map_V10_Dloop_D163_V0k53, self)), 1,
      VInlineNullP2(runtime,
        _var1));
}
void _V50_V0vanity_V0list_V0append__map_V10_Dloop_D169_V0k63(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0append__map_V10_Dloop_D169_V0k63, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.241 13 0) (bruijn ##.k.410 5 0) (bruijn ##.x.412 2 0) (bruijn ##.x.413 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 0)), 3,
      VGetArg(statics, 5-1, 0),
      statics->up->vars[0],
      _var0);
}
void _V50_V0vanity_V0list_V0append__map_V10_Dloop_D169_V0k62(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0append__map_V10_Dloop_D169_V0k62, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity list append-map ##.loop.169) (bruijn ##.loop.169 5 0) (close _V50_V0vanity_V0list_V0append__map_V10_Dloop_D169_V0k63) (bruijn ##.x.414 0 0))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 5-1, 0));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0append__map_V10_Dloop_D169_V0k63, self))));
    VWORD _arg1 = 
      _var0;
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0list_V0append__map_V10_Dloop_D169(runtime, _closure->env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0list_V0append__map_V10_Dloop_D169_V0k61(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0append__map_V10_Dloop_D169_V0k61, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.242 10 0) (close _V50_V0vanity_V0list_V0append__map_V10_Dloop_D169_V0k62) (##intrinsic ##vcore.cdr) (bruijn ##.lsts.170 3 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0append__map_V10_Dloop_D169_V0k62, self)))),
      _V40_V10vcore_Dcdr,
      statics->up->up->vars[1]);
}
void _V50_V0vanity_V0list_V0append__map_V10_Dloop_D169_V0k60(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0append__map_V10_Dloop_D169_V0k60, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.apply (close _V50_V0vanity_V0list_V0append__map_V10_Dloop_D169_V0k61) (bruijn ##.f.167 4 1) (bruijn ##.x.415 0 0))
    VCallFuncWithGC(runtime, (VFunc)VApply2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0append__map_V10_Dloop_D169_V0k61, self)))),
      statics->up->up->up->vars[1],
      _var0);
}
void _V50_V0vanity_V0list_V0append__map_V10_Dloop_D169_V0k59(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0append__map_V10_Dloop_D169_V0k59, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.411 0 0) ((bruijn ##.k.410 1 0) '()) ((bruijn ##.x.242 8 0) (close _V50_V0vanity_V0list_V0append__map_V10_Dloop_D169_V0k60) (##intrinsic ##vcore.car) (bruijn ##.lsts.170 1 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VNULL);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0append__map_V10_Dloop_D169_V0k60, self)))),
      _V40_V10vcore_Dcar,
      statics->vars[1]);
}
}
void _V50_V0vanity_V0list_V0append__map_V10_Dloop_D169(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0append__map_V10_Dloop_D169, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (##qualified-call (vanity list any?) (bruijn ##.any?.63 3 37) (close _V50_V0vanity_V0list_V0append__map_V10_Dloop_D169_V0k59) (##intrinsic ##vcore.null?) (bruijn ##.lsts.170 0 1))
  {
    VClosure * _closure = VDecodeClosure(statics->up->up->vars[37]);
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0append__map_V10_Dloop_D169_V0k59, self))));
    VWORD _arg1 = 
      _V40_V10vcore_Dnull_Q;
    VWORD _arg2 = 
      _var1;
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0list_V0any_Q(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
__attribute__((used)) static void _V20CaseError__V50_V0vanity_V0list_V0append__map(VRuntime * runtime, VEnv * statics, int argc, ...) {
 // ("_V50_V0vanity_V0list_V0append__map" #t (3 (letrec 1 ((close "_V50_V0vanity_V0list_V0append__map_V10_Dloop_D151")) (##qualified-call (vanity list append-map ##.loop.151) (bruijn ##.loop.151 0 0) (bruijn ##.k.377 1 0) (bruijn ##.xs.150 1 2)))) (4 (letrec 1 ((close "_V50_V0vanity_V0list_V0append__map_V10_Dloop_D156")) (##qualified-call (vanity list append-map ##.loop.156) (bruijn ##.loop.156 0 0) (bruijn ##.k.384 1 0) (bruijn ##.xs.154 1 2) (bruijn ##.ys.155 1 3)))) (5 (letrec 1 ((close "_V50_V0vanity_V0list_V0append__map_V10_Dloop_D163")) (##qualified-call (vanity list append-map ##.loop.163) (bruijn ##.loop.163 0 0) (bruijn ##.k.395 1 0) (bruijn ##.xs.160 1 2) (bruijn ##.ys.161 1 3) (bruijn ##.zs.162 1 4)))) (2 + (letrec 1 ((close "_V50_V0vanity_V0list_V0append__map_V10_Dloop_D169")) (##qualified-call (vanity list append-map ##.loop.169) (bruijn ##.loop.169 0 0) (bruijn ##.k.409 1 0) (bruijn ##.lsts.168 1 2)))))
 VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0append__map, got ~D~N"
 "-- expected 3~N"
 "-- expected 4~N"
 "-- expected 5~N"
 "-- expected 2 or more~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V50_V0vanity_V0list_V0append__map(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (letrec 1 ((close "_V50_V0vanity_V0list_V0append__map_V10_Dloop_D151")) (##qualified-call (vanity list append-map ##.loop.151) (bruijn ##.loop.151 0 0) (bruijn ##.k.377 1 0) (bruijn ##.xs.150 1 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0append__map_V10_Dloop_D151, self))));
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      statics->vars[2];
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0list_V0append__map_V10_Dloop_D151(runtime, _closure->env, 2, _arg0, _arg1);
    }
  }
    }
}
__attribute__((used)) static void _V20Case1__V50_V0vanity_V0list_V0append__map(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
  struct { VEnv self; VWORD argv[4]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 4, 4, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _var3;
  // (letrec 1 ((close "_V50_V0vanity_V0list_V0append__map_V10_Dloop_D156")) (##qualified-call (vanity list append-map ##.loop.156) (bruijn ##.loop.156 0 0) (bruijn ##.k.384 1 0) (bruijn ##.xs.154 1 2) (bruijn ##.ys.155 1 3)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0append__map_V10_Dloop_D156, self))));
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      statics->vars[2];
    VWORD _arg2 = 
      statics->vars[3];
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0list_V0append__map_V10_Dloop_D156(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
__attribute__((used)) static void _V20Case2__V50_V0vanity_V0list_V0append__map(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4) {
  struct { VEnv self; VWORD argv[5]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 5, 5, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _var3;
  self->vars[4] = _var4;
  // (letrec 1 ((close "_V50_V0vanity_V0list_V0append__map_V10_Dloop_D163")) (##qualified-call (vanity list append-map ##.loop.163) (bruijn ##.loop.163 0 0) (bruijn ##.k.395 1 0) (bruijn ##.xs.160 1 2) (bruijn ##.ys.161 1 3) (bruijn ##.zs.162 1 4)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0append__map_V10_Dloop_D163, self))));
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      statics->vars[2];
    VWORD _arg2 = 
      statics->vars[3];
    VWORD _arg3 = 
      statics->vars[4];
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0list_V0append__map_V10_Dloop_D163(runtime, _closure->env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
    }
}
__attribute__((used)) static void _V20Case3__V50_V0vanity_V0list_V0append__map(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, ...) {
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 2, argc, _var1);
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _varargs;
  // (letrec 1 ((close "_V50_V0vanity_V0list_V0append__map_V10_Dloop_D169")) (##qualified-call (vanity list append-map ##.loop.169) (bruijn ##.loop.169 0 0) (bruijn ##.k.409 1 0) (bruijn ##.lsts.168 1 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0append__map_V10_Dloop_D169, self))));
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      statics->vars[2];
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0list_V0append__map_V10_Dloop_D169(runtime, _closure->env, 2, _arg0, _arg1);
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
void _V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D173_V0k65(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D173_V0k65, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity list append!) (bruijn ##.append!.45 5 19) (bruijn ##.k.417 2 0) (bruijn ##.x.419 1 0) (bruijn ##.x.420 0 0))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 5-1, 19));
    VWORD _arg0 = 
      statics->up->vars[0];
    VWORD _arg1 = 
      statics->vars[0];
    VWORD _arg2 = 
      _var0;
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0list_V0append_B(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D173_V0k64(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D173_V0k64, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity list append-map! ##.loop.173) (bruijn ##.loop.173 2 0) (close _V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D173_V0k65) (##inline ##vcore.cdr (bruijn ##.xs.174 1 1)))
  {
    VClosure * _closure = VDecodeClosure(statics->up->vars[0]);
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D173_V0k65, self))));
    VWORD _arg1 = 
      VInlineCdr2(runtime,
        statics->vars[1]);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D173(runtime, _closure->env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D173(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D173, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (if (##inline ##vcore.null? (bruijn ##.xs.174 0 1)) ((bruijn ##.k.417 0 0) '()) ((bruijn ##.f.171 2 1) (close _V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D173_V0k64) (##inline ##vcore.car (bruijn ##.xs.174 0 1))))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var1))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VNULL);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[1]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D173_V0k64, self)))),
      VInlineCar2(runtime,
        _var1));
}
}
void _V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D178_V0k67(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D178_V0k67, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.432 1 0) ((bruijn ##.k.433 0 0) (bruijn ##.p.432 1 0)) ((bruijn ##.k.433 0 0) (##inline ##vcore.null? (bruijn ##.ys.180 2 2))))
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
void _V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D178_V0k70(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D178_V0k70, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity list append!) (bruijn ##.append!.45 7 19) (bruijn ##.k.424 4 0) (bruijn ##.x.426 1 0) (bruijn ##.x.427 0 0))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 7-1, 19));
    VWORD _arg0 = 
      statics->up->up->up->vars[0];
    VWORD _arg1 = 
      statics->vars[0];
    VWORD _arg2 = 
      _var0;
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0list_V0append_B(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D178_V0k69(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D178_V0k69, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity list append-map! ##.loop.178) (bruijn ##.loop.178 4 0) (close _V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D178_V0k70) (##inline ##vcore.cdr (bruijn ##.xs.179 3 1)) (##inline ##vcore.cdr (bruijn ##.ys.180 3 2)))
  {
    VClosure * _closure = VDecodeClosure(statics->up->up->up->vars[0]);
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D178_V0k70, self))));
    VWORD _arg1 = 
      VInlineCdr2(runtime,
        statics->up->up->vars[1]);
    VWORD _arg2 = 
      VInlineCdr2(runtime,
        statics->up->up->vars[2]);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D178(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D178_V0k68(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D178_V0k68, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.425 0 0) ((bruijn ##.k.424 2 0) '()) ((bruijn ##.f.175 4 1) (close _V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D178_V0k69) (##inline ##vcore.car (bruijn ##.xs.179 2 1)) (##inline ##vcore.car (bruijn ##.ys.180 2 2))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VNULL);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[1]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D178_V0k69, self)))),
      VInlineCar2(runtime,
        statics->up->vars[1]),
      VInlineCar2(runtime,
        statics->up->vars[2]));
}
}
void _V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D178_V0k66(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D178_V0k66, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D178_V0k67) (close _V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D178_V0k68))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D178_V0k67, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D178_V0k68, self)))));
}
void _V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D178(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D178, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((close _V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D178_V0k66) (##inline ##vcore.null? (bruijn ##.xs.179 0 1)))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D178_V0k66, self)), 1,
      VInlineNullP2(runtime,
        _var1));
}
void _V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D185_V0k73(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D185_V0k73, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.447 0 0) ((bruijn ##.k.446 1 0) (bruijn ##.p.447 0 0)) ((bruijn ##.k.446 1 0) (##inline ##vcore.null? (bruijn ##.zs.188 3 3))))
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
void _V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D185_V0k72(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D185_V0k72, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.445 1 0) ((bruijn ##.k.446 0 0) (bruijn ##.p.445 1 0)) ((close _V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D185_V0k73) (##inline ##vcore.null? (bruijn ##.ys.187 2 2))))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->vars[0]);
} else {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D185_V0k73, self)), 1,
      VInlineNullP2(runtime,
        statics->up->vars[2]));
}
}
void _V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D185_V0k76(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D185_V0k76, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity list append!) (bruijn ##.append!.45 7 19) (bruijn ##.k.435 4 0) (bruijn ##.x.437 1 0) (bruijn ##.x.438 0 0))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 7-1, 19));
    VWORD _arg0 = 
      statics->up->up->up->vars[0];
    VWORD _arg1 = 
      statics->vars[0];
    VWORD _arg2 = 
      _var0;
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0list_V0append_B(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D185_V0k75(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D185_V0k75, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity list append-map! ##.loop.185) (bruijn ##.loop.185 4 0) (close _V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D185_V0k76) (##inline ##vcore.cdr (bruijn ##.xs.186 3 1)) (##inline ##vcore.cdr (bruijn ##.ys.187 3 2)) (##inline ##vcore.cdr (bruijn ##.zs.188 3 3)))
  {
    VClosure * _closure = VDecodeClosure(statics->up->up->up->vars[0]);
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D185_V0k76, self))));
    VWORD _arg1 = 
      VInlineCdr2(runtime,
        statics->up->up->vars[1]);
    VWORD _arg2 = 
      VInlineCdr2(runtime,
        statics->up->up->vars[2]);
    VWORD _arg3 = 
      VInlineCdr2(runtime,
        statics->up->up->vars[3]);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D185(runtime, _closure->env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D185_V0k74(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D185_V0k74, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.436 0 0) ((bruijn ##.k.435 2 0) '()) ((bruijn ##.f.181 4 1) (close _V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D185_V0k75) (##inline ##vcore.car (bruijn ##.xs.186 2 1)) (##inline ##vcore.car (bruijn ##.ys.187 2 2)) (##inline ##vcore.car (bruijn ##.zs.188 2 3))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VNULL);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[1]), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D185_V0k75, self)))),
      VInlineCar2(runtime,
        statics->up->vars[1]),
      VInlineCar2(runtime,
        statics->up->vars[2]),
      VInlineCar2(runtime,
        statics->up->vars[3]));
}
}
void _V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D185_V0k71(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D185_V0k71, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D185_V0k72) (close _V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D185_V0k74))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D185_V0k72, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D185_V0k74, self)))));
}
void _V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D185(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D185, got ~D~N"
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
  // ((close _V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D185_V0k71) (##inline ##vcore.null? (bruijn ##.xs.186 0 1)))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D185_V0k71, self)), 1,
      VInlineNullP2(runtime,
        _var1));
}
void _V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D191_V0k81(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D191_V0k81, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity list append!) (bruijn ##.append!.45 8 19) (bruijn ##.k.449 5 0) (bruijn ##.x.451 2 0) (bruijn ##.x.452 0 0))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 8-1, 19));
    VWORD _arg0 = 
      VGetArg(statics, 5-1, 0);
    VWORD _arg1 = 
      statics->up->vars[0];
    VWORD _arg2 = 
      _var0;
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0list_V0append_B(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D191_V0k80(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D191_V0k80, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity list append-map! ##.loop.191) (bruijn ##.loop.191 5 0) (close _V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D191_V0k81) (bruijn ##.x.453 0 0))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 5-1, 0));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D191_V0k81, self))));
    VWORD _arg1 = 
      _var0;
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D191(runtime, _closure->env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D191_V0k79(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D191_V0k79, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.242 10 0) (close _V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D191_V0k80) (##intrinsic ##vcore.cdr) (bruijn ##.lsts.192 3 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D191_V0k80, self)))),
      _V40_V10vcore_Dcdr,
      statics->up->up->vars[1]);
}
void _V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D191_V0k78(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D191_V0k78, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.apply (close _V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D191_V0k79) (bruijn ##.f.189 4 1) (bruijn ##.x.454 0 0))
    VCallFuncWithGC(runtime, (VFunc)VApply2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D191_V0k79, self)))),
      statics->up->up->up->vars[1],
      _var0);
}
void _V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D191_V0k77(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D191_V0k77, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.450 0 0) ((bruijn ##.k.449 1 0) '()) ((bruijn ##.x.242 8 0) (close _V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D191_V0k78) (##intrinsic ##vcore.car) (bruijn ##.lsts.192 1 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VNULL);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D191_V0k78, self)))),
      _V40_V10vcore_Dcar,
      statics->vars[1]);
}
}
void _V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D191(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D191, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (##qualified-call (vanity list any?) (bruijn ##.any?.63 3 37) (close _V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D191_V0k77) (##intrinsic ##vcore.null?) (bruijn ##.lsts.192 0 1))
  {
    VClosure * _closure = VDecodeClosure(statics->up->up->vars[37]);
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D191_V0k77, self))));
    VWORD _arg1 = 
      _V40_V10vcore_Dnull_Q;
    VWORD _arg2 = 
      _var1;
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0list_V0any_Q(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
__attribute__((used)) static void _V20CaseError__V50_V0vanity_V0list_V0append__map_B(VRuntime * runtime, VEnv * statics, int argc, ...) {
 // ("_V50_V0vanity_V0list_V0append__map_B" #t (3 (letrec 1 ((close "_V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D173")) (##qualified-call (vanity list append-map! ##.loop.173) (bruijn ##.loop.173 0 0) (bruijn ##.k.416 1 0) (bruijn ##.xs.172 1 2)))) (4 (letrec 1 ((close "_V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D178")) (##qualified-call (vanity list append-map! ##.loop.178) (bruijn ##.loop.178 0 0) (bruijn ##.k.423 1 0) (bruijn ##.xs.176 1 2) (bruijn ##.ys.177 1 3)))) (5 (letrec 1 ((close "_V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D185")) (##qualified-call (vanity list append-map! ##.loop.185) (bruijn ##.loop.185 0 0) (bruijn ##.k.434 1 0) (bruijn ##.xs.182 1 2) (bruijn ##.ys.183 1 3) (bruijn ##.zs.184 1 4)))) (2 + (letrec 1 ((close "_V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D191")) (##qualified-call (vanity list append-map! ##.loop.191) (bruijn ##.loop.191 0 0) (bruijn ##.k.448 1 0) (bruijn ##.lsts.190 1 2)))))
 VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0append__map_B, got ~D~N"
 "-- expected 3~N"
 "-- expected 4~N"
 "-- expected 5~N"
 "-- expected 2 or more~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V50_V0vanity_V0list_V0append__map_B(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (letrec 1 ((close "_V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D173")) (##qualified-call (vanity list append-map! ##.loop.173) (bruijn ##.loop.173 0 0) (bruijn ##.k.416 1 0) (bruijn ##.xs.172 1 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D173, self))));
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      statics->vars[2];
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D173(runtime, _closure->env, 2, _arg0, _arg1);
    }
  }
    }
}
__attribute__((used)) static void _V20Case1__V50_V0vanity_V0list_V0append__map_B(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
  struct { VEnv self; VWORD argv[4]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 4, 4, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _var3;
  // (letrec 1 ((close "_V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D178")) (##qualified-call (vanity list append-map! ##.loop.178) (bruijn ##.loop.178 0 0) (bruijn ##.k.423 1 0) (bruijn ##.xs.176 1 2) (bruijn ##.ys.177 1 3)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D178, self))));
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      statics->vars[2];
    VWORD _arg2 = 
      statics->vars[3];
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D178(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
__attribute__((used)) static void _V20Case2__V50_V0vanity_V0list_V0append__map_B(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4) {
  struct { VEnv self; VWORD argv[5]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 5, 5, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _var3;
  self->vars[4] = _var4;
  // (letrec 1 ((close "_V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D185")) (##qualified-call (vanity list append-map! ##.loop.185) (bruijn ##.loop.185 0 0) (bruijn ##.k.434 1 0) (bruijn ##.xs.182 1 2) (bruijn ##.ys.183 1 3) (bruijn ##.zs.184 1 4)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D185, self))));
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      statics->vars[2];
    VWORD _arg2 = 
      statics->vars[3];
    VWORD _arg3 = 
      statics->vars[4];
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D185(runtime, _closure->env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
    }
}
__attribute__((used)) static void _V20Case3__V50_V0vanity_V0list_V0append__map_B(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, ...) {
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 2, argc, _var1);
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _varargs;
  // (letrec 1 ((close "_V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D191")) (##qualified-call (vanity list append-map! ##.loop.191) (bruijn ##.loop.191 0 0) (bruijn ##.k.448 1 0) (bruijn ##.lsts.190 1 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D191, self))));
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      statics->vars[2];
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D191(runtime, _closure->env, 2, _arg0, _arg1);
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
void _V50_V0vanity_V0list_V0filter_V0k83(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0filter_V0k83, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.455 2 0) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.lst.194 2 2)) (bruijn ##.x.459 0 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VInlineCons2(runtime,
        VInlineCar2(runtime,
        statics->up->vars[2]),
        _var0));
}
void _V50_V0vanity_V0list_V0filter_V0k82(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0filter_V0k82, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.457 0 0) (##qualified-call (vanity list filter) (bruijn ##.filter.58 2 32) (close _V50_V0vanity_V0list_V0filter_V0k83) (bruijn ##.pred.193 1 1) (##inline ##vcore.cdr (bruijn ##.lst.194 1 2))) (##qualified-call (vanity list filter) (bruijn ##.filter.58 2 32) (bruijn ##.k.455 1 0) (bruijn ##.pred.193 1 1) (##inline ##vcore.cdr (bruijn ##.lst.194 1 2))))
if(VDecodeBool(
_var0)) {
  {
    VClosure * _closure = VDecodeClosure(statics->up->vars[32]);
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0filter_V0k83, self))));
    VWORD _arg1 = 
      statics->vars[1];
    VWORD _arg2 = 
      VInlineCdr2(runtime,
        statics->vars[2]);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0list_V0filter(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
} else {
  {
    VClosure * _closure = VDecodeClosure(statics->up->vars[32]);
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      statics->vars[1];
    VWORD _arg2 = 
      VInlineCdr2(runtime,
        statics->vars[2]);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0list_V0filter(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
}
void _V50_V0vanity_V0list_V0filter(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
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
  // (if (##inline ##vcore.null? (bruijn ##.lst.194 0 2)) ((bruijn ##.k.455 0 0) (bruijn ##.lst.194 0 2)) ((bruijn ##.pred.193 0 1) (close _V50_V0vanity_V0list_V0filter_V0k82) (##inline ##vcore.car (bruijn ##.lst.194 0 2))))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var2))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _var2);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var1), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0filter_V0k82, self)))),
      VInlineCar2(runtime,
        _var2));
}
}
void _V50_V0vanity_V0list_V0partition_V0lambda5(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0partition_V0lambda5, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity list partition) (bruijn ##.partition.59 2 33) (bruijn ##.k.465 0 0) (bruijn ##.pred.195 1 1) (##inline ##vcore.cdr (bruijn ##.lst.196 1 2)))
  {
    VClosure * _closure = VDecodeClosure(statics->up->vars[33]);
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      statics->vars[1];
    VWORD _arg2 = 
      VInlineCdr2(runtime,
        statics->vars[2]);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0list_V0partition(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0list_V0partition_V0k84(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0partition_V0k84, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.468 0 0) ((bruijn ##.x.240 9 0) (bruijn ##.k.467 1 0) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.lst.196 2 2)) (bruijn ##.l.197 1 1)) (bruijn ##.r.198 1 2)) ((bruijn ##.x.240 9 0) (bruijn ##.k.467 1 0) (bruijn ##.l.197 1 1) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.lst.196 2 2)) (bruijn ##.r.198 1 2))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 0)), 3,
      statics->vars[0],
      VInlineCons2(runtime,
        VInlineCar2(runtime,
        statics->up->vars[2]),
        statics->vars[1]),
      statics->vars[2]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 0)), 3,
      statics->vars[0],
      statics->vars[1],
      VInlineCons2(runtime,
        VInlineCar2(runtime,
        statics->up->vars[2]),
        statics->vars[2]));
}
}
void _V50_V0vanity_V0list_V0partition_V0lambda6(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0partition_V0lambda6, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((bruijn ##.pred.195 1 1) (close _V50_V0vanity_V0list_V0partition_V0k84) (##inline ##vcore.car (bruijn ##.lst.196 1 2)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[1]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0partition_V0k84, self)))),
      VInlineCar2(runtime,
        statics->vars[2]));
}
void _V50_V0vanity_V0list_V0partition(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
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
  // (if (##inline ##vcore.null? (bruijn ##.lst.196 0 2)) ((bruijn ##.x.240 7 0) (bruijn ##.k.463 0 0) '() '()) (##vcore.call-with-values (bruijn ##.k.463 0 0) (close _V50_V0vanity_V0list_V0partition_V0lambda5) (close _V50_V0vanity_V0list_V0partition_V0lambda6)))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var2))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 3,
      _var0,
      VNULL,
      VNULL);
} else {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0partition_V0lambda5, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0partition_V0lambda6, self)))));
}
}
void _V50_V0vanity_V0list_V0take__while_V0k87(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0take__while_V0k87, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.480 1 0) (##inline ##vcore.not (bruijn ##.x.481 0 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VInlineNot2(runtime,
        _var0));
}
void _V50_V0vanity_V0list_V0take__while_V0k86(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0take__while_V0k86, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.479 1 0) ((bruijn ##.k.480 0 0) (bruijn ##.p.479 1 0)) ((bruijn ##.pred.199 2 1) (close _V50_V0vanity_V0list_V0take__while_V0k87) (##inline ##vcore.car (bruijn ##.lst.200 2 2))))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->vars[0]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[1]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0take__while_V0k87, self)))),
      VInlineCar2(runtime,
        statics->up->vars[2]));
}
}
void _V50_V0vanity_V0list_V0take__while_V0k89(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0take__while_V0k89, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.474 3 0) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.lst.200 3 2)) (bruijn ##.x.477 0 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VInlineCons2(runtime,
        VInlineCar2(runtime,
        statics->up->up->vars[2]),
        _var0));
}
void _V50_V0vanity_V0list_V0take__while_V0k88(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0take__while_V0k88, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.475 0 0) ((bruijn ##.k.474 2 0) '()) (##qualified-call (vanity list take-while) (bruijn ##.take-while.60 3 34) (close _V50_V0vanity_V0list_V0take__while_V0k89) (bruijn ##.pred.199 2 1) (##inline ##vcore.cdr (bruijn ##.lst.200 2 2))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VNULL);
} else {
  {
    VClosure * _closure = VDecodeClosure(statics->up->up->vars[34]);
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0take__while_V0k89, self))));
    VWORD _arg1 = 
      statics->up->vars[1];
    VWORD _arg2 = 
      VInlineCdr2(runtime,
        statics->up->vars[2]);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0list_V0take__while(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
}
void _V50_V0vanity_V0list_V0take__while_V0k85(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0take__while_V0k85, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0list_V0take__while_V0k86) (close _V50_V0vanity_V0list_V0take__while_V0k88))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0take__while_V0k86, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0take__while_V0k88, self)))));
}
void _V50_V0vanity_V0list_V0take__while(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
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
  // ((close _V50_V0vanity_V0list_V0take__while_V0k85) (##inline ##vcore.null? (bruijn ##.lst.200 0 2)))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0take__while_V0k85, self)), 1,
      VInlineNullP2(runtime,
        _var2));
}
void _V50_V0vanity_V0list_V0drop__while_V0k92(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0drop__while_V0k92, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.487 1 0) (##inline ##vcore.not (bruijn ##.x.488 0 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VInlineNot2(runtime,
        _var0));
}
void _V50_V0vanity_V0list_V0drop__while_V0k91(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0drop__while_V0k91, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.486 1 0) ((bruijn ##.k.487 0 0) (bruijn ##.p.486 1 0)) ((bruijn ##.pred.201 2 1) (close _V50_V0vanity_V0list_V0drop__while_V0k92) (##inline ##vcore.car (bruijn ##.lst.202 2 2))))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->vars[0]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[1]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0drop__while_V0k92, self)))),
      VInlineCar2(runtime,
        statics->up->vars[2]));
}
}
void _V50_V0vanity_V0list_V0drop__while_V0k93(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0drop__while_V0k93, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.484 0 0) ((bruijn ##.k.483 2 0) (bruijn ##.lst.202 2 2)) (##qualified-call (vanity list drop-while) (bruijn ##.drop-while.61 3 35) (bruijn ##.k.483 2 0) (bruijn ##.pred.201 2 1) (##inline ##vcore.cdr (bruijn ##.lst.202 2 2))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      statics->up->vars[2]);
} else {
  {
    VClosure * _closure = VDecodeClosure(statics->up->up->vars[35]);
    VWORD _arg0 = 
      statics->up->vars[0];
    VWORD _arg1 = 
      statics->up->vars[1];
    VWORD _arg2 = 
      VInlineCdr2(runtime,
        statics->up->vars[2]);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0list_V0drop__while(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
}
void _V50_V0vanity_V0list_V0drop__while_V0k90(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0drop__while_V0k90, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0list_V0drop__while_V0k91) (close _V50_V0vanity_V0list_V0drop__while_V0k93))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0drop__while_V0k91, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0drop__while_V0k93, self)))));
}
void _V50_V0vanity_V0list_V0drop__while(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
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
  // ((close _V50_V0vanity_V0list_V0drop__while_V0k90) (##inline ##vcore.null? (bruijn ##.lst.202 0 2)))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0drop__while_V0k90, self)), 1,
      VInlineNullP2(runtime,
        _var2));
}
void _V50_V0vanity_V0list_V0split__while_V0k96(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0split__while_V0k96, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.498 1 0) (##inline ##vcore.not (bruijn ##.x.499 0 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VInlineNot2(runtime,
        _var0));
}
void _V50_V0vanity_V0list_V0split__while_V0k95(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0split__while_V0k95, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.497 1 0) ((bruijn ##.k.498 0 0) (bruijn ##.p.497 1 0)) ((bruijn ##.pred.203 2 1) (close _V50_V0vanity_V0list_V0split__while_V0k96) (##inline ##vcore.car (bruijn ##.lst.204 2 2))))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->vars[0]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[1]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0split__while_V0k96, self)))),
      VInlineCar2(runtime,
        statics->up->vars[2]));
}
}
void _V50_V0vanity_V0list_V0split__while_V0lambda7(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0split__while_V0lambda7, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity list split-while) (bruijn ##.split-while.62 4 36) (bruijn ##.k.492 0 0) (bruijn ##.pred.203 3 1) (##inline ##vcore.cdr (bruijn ##.lst.204 3 2)))
  {
    VClosure * _closure = VDecodeClosure(statics->up->up->up->vars[36]);
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      statics->up->up->vars[1];
    VWORD _arg2 = 
      VInlineCdr2(runtime,
        statics->up->up->vars[2]);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0list_V0split__while(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0list_V0split__while_V0lambda8(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0split__while_V0lambda8, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  // ((bruijn ##.x.240 10 0) (bruijn ##.k.494 0 0) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.lst.204 3 2)) (bruijn ##.t.205 0 1)) (bruijn ##.d.206 0 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 0)), 3,
      _var0,
      VInlineCons2(runtime,
        VInlineCar2(runtime,
        statics->up->up->vars[2]),
        _var1),
      _var2);
}
void _V50_V0vanity_V0list_V0split__while_V0k97(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0split__while_V0k97, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.491 0 0) ((bruijn ##.x.240 9 0) (bruijn ##.k.490 2 0) '() (bruijn ##.lst.204 2 2)) (##vcore.call-with-values (bruijn ##.k.490 2 0) (close _V50_V0vanity_V0list_V0split__while_V0lambda7) (close _V50_V0vanity_V0list_V0split__while_V0lambda8)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 0)), 3,
      statics->up->vars[0],
      VNULL,
      statics->up->vars[2]);
} else {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->up->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0split__while_V0lambda7, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0split__while_V0lambda8, self)))));
}
}
void _V50_V0vanity_V0list_V0split__while_V0k94(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0split__while_V0k94, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0list_V0split__while_V0k95) (close _V50_V0vanity_V0list_V0split__while_V0k97))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0split__while_V0k95, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0split__while_V0k97, self)))));
}
void _V50_V0vanity_V0list_V0split__while(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
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
  // ((close _V50_V0vanity_V0list_V0split__while_V0k94) (##inline ##vcore.null? (bruijn ##.lst.204 0 2)))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0split__while_V0k94, self)), 1,
      VInlineNullP2(runtime,
        _var2));
}
void _V50_V0vanity_V0list_V0any_Q_V0k98(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0any_Q_V0k98, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.503 0 0) ((bruijn ##.k.501 1 0) #t) (##qualified-call (vanity list any?) (bruijn ##.any?.63 2 37) (bruijn ##.k.501 1 0) (bruijn ##.p.207 1 1) (##inline ##vcore.cdr (bruijn ##.lst.208 1 2))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(true));
} else {
  {
    VClosure * _closure = VDecodeClosure(statics->up->vars[37]);
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      statics->vars[1];
    VWORD _arg2 = 
      VInlineCdr2(runtime,
        statics->vars[2]);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0list_V0any_Q(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
}
void _V50_V0vanity_V0list_V0any_Q(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
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
  // (if (##inline ##vcore.null? (bruijn ##.lst.208 0 2)) ((bruijn ##.k.501 0 0) #f) ((bruijn ##.p.207 0 1) (close _V50_V0vanity_V0list_V0any_Q_V0k98) (##inline ##vcore.car (bruijn ##.lst.208 0 2))))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var2))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var1), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0any_Q_V0k98, self)))),
      VInlineCar2(runtime,
        _var2));
}
}
void _V50_V0vanity_V0list_V0every_Q_V0k99(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0every_Q_V0k99, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.508 0 0) (##qualified-call (vanity list every?) (bruijn ##.every?.64 2 38) (bruijn ##.k.506 1 0) (bruijn ##.p.209 1 1) (##inline ##vcore.cdr (bruijn ##.lst.210 1 2))) ((bruijn ##.k.506 1 0) #f))
if(VDecodeBool(
_var0)) {
  {
    VClosure * _closure = VDecodeClosure(statics->up->vars[38]);
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      statics->vars[1];
    VWORD _arg2 = 
      VInlineCdr2(runtime,
        statics->vars[2]);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0list_V0every_Q(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0list_V0every_Q(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
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
  // (if (##inline ##vcore.null? (bruijn ##.lst.210 0 2)) ((bruijn ##.k.506 0 0) #t) ((bruijn ##.p.209 0 1) (close _V50_V0vanity_V0list_V0every_Q_V0k99) (##inline ##vcore.car (bruijn ##.lst.210 0 2))))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var2))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(true));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var1), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0every_Q_V0k99, self)))),
      VInlineCar2(runtime,
        _var2));
}
}
void _V50_V0vanity_V0list_V0list__index_V10_Dloop_D213_V0k100(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0list__index_V10_Dloop_D213_V0k100, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.514 0 0) ((bruijn ##.k.512 1 0) (bruijn ##.i.214 1 1)) (basic-block 1 1 (##.reg.663) ((##vcore.+ (bruijn ##.i.214 2 1) 1)) (##qualified-call (vanity list list-index ##.loop.213) (bruijn ##.loop.213 3 0) (bruijn ##.k.512 2 0) (bruijn ##.reg.663 0 0) (##inline ##vcore.cdr (bruijn ##.lst.215 2 2)))))
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
    VWORD _arg0 = 
      statics->up->vars[0];
    VWORD _arg1 = 
      self->vars[0];
    VWORD _arg2 = 
      VInlineCdr2(runtime,
        statics->up->vars[2]);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0list_V0list__index_V10_Dloop_D213(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
}
void _V50_V0vanity_V0list_V0list__index_V10_Dloop_D213(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0list__index_V10_Dloop_D213, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (if (##inline ##vcore.null? (bruijn ##.p.211 2 1)) ((bruijn ##.k.512 0 0) #f) ((bruijn ##.p.211 2 1) (close _V50_V0vanity_V0list_V0list__index_V10_Dloop_D213_V0k100) (##inline ##vcore.car (bruijn ##.lst.215 0 2))))
if(VDecodeBool(
VInlineNullP2(runtime,
        statics->up->vars[1]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[1]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0list__index_V10_Dloop_D213_V0k100, self)))),
      VInlineCar2(runtime,
        _var2));
}
}
void _V50_V0vanity_V0list_V0list__index(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
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
  // (letrec 1 ((close "_V50_V0vanity_V0list_V0list__index_V10_Dloop_D213")) (##qualified-call (vanity list list-index ##.loop.213) (bruijn ##.loop.213 0 0) (bruijn ##.k.511 1 0) 0 (bruijn ##.lst.212 1 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0list__index_V10_Dloop_D213, self))));
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      VEncodeInt(0l);
    VWORD _arg2 = 
      statics->vars[2];
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0list_V0list__index_V10_Dloop_D213(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
void _V50_V0vanity_V0list_V0insert_V0k101(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0insert_V0k101, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.518 3 0) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.lst.216 3 1)) (bruijn ##.x.521 0 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VInlineCons2(runtime,
        VInlineCar2(runtime,
        statics->up->up->vars[1]),
        _var0));
}
void _V50_V0vanity_V0list_V0insert(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
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
  // (basic-block 1 1 (##.reg.664) ((##vcore.= (bruijn ##.i.217 1 2) 0)) (if (bruijn ##.reg.664 0 0) ((bruijn ##.k.518 1 0) (##inline ##vcore.cons (bruijn ##.x.218 1 3) (bruijn ##.lst.216 1 1))) (basic-block 1 1 (##.reg.665) ((##vcore.- (bruijn ##.i.217 2 2) 1)) (##qualified-call (vanity list insert) (bruijn ##.insert.66 3 40) (close _V50_V0vanity_V0list_V0insert_V0k101) (##inline ##vcore.cdr (bruijn ##.lst.216 2 1)) (bruijn ##.reg.665 0 0) (bruijn ##.x.218 2 3)))))
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
    VClosure * _closure = VDecodeClosure(statics->up->up->vars[40]);
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0insert_V0k101, self))));
    VWORD _arg1 = 
      VInlineCdr2(runtime,
        statics->up->vars[1]);
    VWORD _arg2 = 
      self->vars[0];
    VWORD _arg3 = 
      statics->up->vars[3];
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0list_V0insert(runtime, _closure->env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
    }
}
    }
}
void _V50_V0vanity_V0list_V0delete_V0k102(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0delete_V0k102, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.524 3 0) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.lst.219 3 1)) (bruijn ##.x.527 0 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VInlineCons2(runtime,
        VInlineCar2(runtime,
        statics->up->up->vars[1]),
        _var0));
}
void _V50_V0vanity_V0list_V0delete(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
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
  // (basic-block 1 1 (##.reg.666) ((##vcore.= (bruijn ##.i.220 1 2) 0)) (if (bruijn ##.reg.666 0 0) ((bruijn ##.k.524 1 0) (##inline ##vcore.cdr (bruijn ##.lst.219 1 1))) (basic-block 1 1 (##.reg.667) ((##vcore.- (bruijn ##.i.220 2 2) 1)) (##qualified-call (vanity list delete) (bruijn ##.delete.67 3 41) (close _V50_V0vanity_V0list_V0delete_V0k102) (##inline ##vcore.cdr (bruijn ##.lst.219 2 1)) (bruijn ##.reg.667 0 0)))))
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
    VClosure * _closure = VDecodeClosure(statics->up->up->vars[41]);
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0delete_V0k102, self))));
    VWORD _arg1 = 
      VInlineCdr2(runtime,
        statics->up->vars[1]);
    VWORD _arg2 = 
      self->vars[0];
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0list_V0delete(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
    }
}
void _V50_V0vanity_V0list_V0assq__update_V0k104(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0assq__update_V0k104, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.530 2 0) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.lst.221 2 1)) (bruijn ##.x.537 0 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VInlineCons2(runtime,
        VInlineCar2(runtime,
        statics->up->vars[1]),
        _var0));
}
void _V50_V0vanity_V0list_V0assq__update_V0k103(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0assq__update_V0k103, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.eq? (bruijn ##.x.222 1 2) (bruijn ##.x.539 0 0)) ((bruijn ##.k.530 1 0) (##inline ##vcore.cons (##inline ##vcore.cons (bruijn ##.x.222 1 2) (bruijn ##.val.223 1 3)) (##inline ##vcore.cdr (bruijn ##.lst.221 1 1)))) (##qualified-call (vanity list assoc-update) (bruijn ##.assoc-update.70 2 44) (close _V50_V0vanity_V0list_V0assq__update_V0k104) (##inline ##vcore.cdr (bruijn ##.lst.221 1 1)) (bruijn ##.x.222 1 2) (bruijn ##.val.223 1 3)))
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
    VClosure * _closure = VDecodeClosure(statics->up->vars[44]);
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0assq__update_V0k104, self))));
    VWORD _arg1 = 
      VInlineCdr2(runtime,
        statics->vars[1]);
    VWORD _arg2 = 
      statics->vars[2];
    VWORD _arg3 = 
      statics->vars[3];
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0list_V0assoc__update(runtime, _closure->env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
}
void _V50_V0vanity_V0list_V0assq__update(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
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
  // (if (##inline ##vcore.null? (bruijn ##.lst.221 0 1)) ((bruijn ##.k.530 0 0) (##inline ##vcore.cons (##inline ##vcore.cons (bruijn ##.x.222 0 2) (bruijn ##.val.223 0 3)) '())) ((bruijn ##.x.244 3 0) (close _V50_V0vanity_V0list_V0assq__update_V0k103) (bruijn ##.lst.221 0 1)))
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
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0assq__update_V0k103, self)))),
      _var1);
}
}
void _V50_V0vanity_V0list_V0assv__update_V0k107(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0assv__update_V0k107, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.540 3 0) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.lst.224 3 1)) (bruijn ##.x.547 0 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VInlineCons2(runtime,
        VInlineCar2(runtime,
        statics->up->up->vars[1]),
        _var0));
}
void _V50_V0vanity_V0list_V0assv__update_V0k106(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0assv__update_V0k106, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.543 0 0) ((bruijn ##.k.540 2 0) (##inline ##vcore.cons (##inline ##vcore.cons (bruijn ##.x.225 2 2) (bruijn ##.val.226 2 3)) (##inline ##vcore.cdr (bruijn ##.lst.224 2 1)))) (##qualified-call (vanity list assoc-update) (bruijn ##.assoc-update.70 3 44) (close _V50_V0vanity_V0list_V0assv__update_V0k107) (##inline ##vcore.cdr (bruijn ##.lst.224 2 1)) (bruijn ##.x.225 2 2) (bruijn ##.val.226 2 3)))
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
    VClosure * _closure = VDecodeClosure(statics->up->up->vars[44]);
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0assv__update_V0k107, self))));
    VWORD _arg1 = 
      VInlineCdr2(runtime,
        statics->up->vars[1]);
    VWORD _arg2 = 
      statics->up->vars[2];
    VWORD _arg3 = 
      statics->up->vars[3];
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0list_V0assoc__update(runtime, _closure->env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
}
void _V50_V0vanity_V0list_V0assv__update_V0k105(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0assv__update_V0k105, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.eqv? (close _V50_V0vanity_V0list_V0assv__update_V0k106) (bruijn ##.x.225 1 2) (bruijn ##.x.549 0 0))
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0assv__update_V0k106, self)))),
      statics->vars[2],
      _var0);
}
void _V50_V0vanity_V0list_V0assv__update(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
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
  // (if (##inline ##vcore.null? (bruijn ##.lst.224 0 1)) ((bruijn ##.k.540 0 0) (##inline ##vcore.cons (##inline ##vcore.cons (bruijn ##.x.225 0 2) (bruijn ##.val.226 0 3)) '())) ((bruijn ##.x.244 3 0) (close _V50_V0vanity_V0list_V0assv__update_V0k105) (bruijn ##.lst.224 0 1)))
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
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0assv__update_V0k105, self)))),
      _var1);
}
}
static void _V10_Dassoc__update_D70_V0k110(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dassoc__update_D70_V0k110, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.551 3 0) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.lst.230 3 1)) (bruijn ##.x.558 0 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VInlineCons2(runtime,
        VInlineCar2(runtime,
        statics->up->up->vars[1]),
        _var0));
}
static void _V10_Dassoc__update_D70_V0k109(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dassoc__update_D70_V0k109, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.554 0 0) ((bruijn ##.k.551 2 0) (##inline ##vcore.cons (##inline ##vcore.cons (bruijn ##.x.231 2 2) (bruijn ##.val.232 2 3)) (##inline ##vcore.cdr (bruijn ##.lst.230 2 1)))) (##qualified-call (vanity list assoc-update) (bruijn ##.assoc-update.70 3 44) (close _V10_Dassoc__update_D70_V0k110) (##inline ##vcore.cdr (bruijn ##.lst.230 2 1)) (bruijn ##.x.231 2 2) (bruijn ##.val.232 2 3)))
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
    VClosure * _closure = VDecodeClosure(statics->up->up->vars[44]);
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dassoc__update_D70_V0k110, self))));
    VWORD _arg1 = 
      VInlineCdr2(runtime,
        statics->up->vars[1]);
    VWORD _arg2 = 
      statics->up->vars[2];
    VWORD _arg3 = 
      statics->up->vars[3];
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0list_V0assoc__update(runtime, _closure->env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
}
static void _V10_Dassoc__update_D70_V0k108(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dassoc__update_D70_V0k108, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.=.233 1 4) (close _V10_Dassoc__update_D70_V0k109) (bruijn ##.x.231 1 2) (bruijn ##.x.560 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[4]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dassoc__update_D70_V0k109, self)))),
      statics->vars[2],
      _var0);
}
__attribute__((used)) static void _V20CaseError__V50_V0vanity_V0list_V0assoc__update(VRuntime * runtime, VEnv * statics, int argc, ...) {
 // ("_V50_V0vanity_V0list_V0assoc__update" #t (4 (##qualified-call (vanity list assoc-update) (bruijn ##.assoc-update.70 1 44) (bruijn ##.k.550 0 0) (bruijn ##.lst.227 0 1) (bruijn ##.x.228 0 2) (bruijn ##.val.229 0 3) (bruijn ##.x.245 2 0))) (5 (if (##inline ##vcore.null? (bruijn ##.lst.230 0 1)) ((bruijn ##.k.551 0 0) (##inline ##vcore.cons (##inline ##vcore.cons (bruijn ##.x.231 0 2) (bruijn ##.val.232 0 3)) '())) ((bruijn ##.x.244 3 0) (close _V10_Dassoc__update_D70_V0k108) (bruijn ##.lst.230 0 1)))))
 VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0assoc__update, got ~D~N"
 "-- expected 4~N"
 "-- expected 5~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V50_V0vanity_V0list_V0assoc__update(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
  // (##qualified-call (vanity list assoc-update) (bruijn ##.assoc-update.70 1 44) (bruijn ##.k.550 0 0) (bruijn ##.lst.227 0 1) (bruijn ##.x.228 0 2) (bruijn ##.val.229 0 3) (bruijn ##.x.245 2 0))
  {
    VClosure * _closure = VDecodeClosure(statics->vars[44]);
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      _var1;
    VWORD _arg2 = 
      _var2;
    VWORD _arg3 = 
      _var3;
    VWORD _arg4 = 
      statics->up->vars[0];
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 5, _arg0, _arg1, _arg2, _arg3, _arg4);
    } else {
       _V50_V0vanity_V0list_V0assoc__update(runtime, _closure->env, 5, _arg0, _arg1, _arg2, _arg3, _arg4);
    }
  }
}
__attribute__((used)) static void _V20Case1__V50_V0vanity_V0list_V0assoc__update(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4) {
  struct { VEnv self; VWORD argv[5]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 5, 5, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _var3;
  self->vars[4] = _var4;
  // (if (##inline ##vcore.null? (bruijn ##.lst.230 0 1)) ((bruijn ##.k.551 0 0) (##inline ##vcore.cons (##inline ##vcore.cons (bruijn ##.x.231 0 2) (bruijn ##.val.232 0 3)) '())) ((bruijn ##.x.244 3 0) (close _V10_Dassoc__update_D70_V0k108) (bruijn ##.lst.230 0 1)))
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
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dassoc__update_D70_V0k108, self)))),
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
static void _V0vanity_V0list_V20_V0k12(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0list_V20_V0k12, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (letrec 45 ((close "_V50_V0vanity_V0list_V0my__num__pairs") (close "_V50_V0vanity_V0list_V0iota") (close "_V50_V0vanity_V0list_V0list__tabulate") (##intrinsic ##vcore.car) (bruijn ##.x.236 10 0) (bruijn ##.x.237 9 0) (bruijn ##.x.238 8 0) (close "_V50_V0vanity_V0list_V0fifth") (close "_V50_V0vanity_V0list_V0sixth") (close "_V50_V0vanity_V0list_V0seventh") (close "_V50_V0vanity_V0list_V0eighth") (close "_V50_V0vanity_V0list_V0ninth") (close "_V50_V0vanity_V0list_V0tenth") (close "_V50_V0vanity_V0list_V0car_Pcdr") (close "_V50_V0vanity_V0list_V0take") (close "_V50_V0vanity_V0list_V0drop") (close "_V50_V0vanity_V0list_V0take__right") (close "_V50_V0vanity_V0list_V0drop__right") (close "_V50_V0vanity_V0list_V0split__at") (close "_V50_V0vanity_V0list_V0append_B") (close "_V50_V0vanity_V0list_V0concatenate") (close "_V50_V0vanity_V0list_V0zip") (close "_V50_V0vanity_V0list_V0unzip1") (close "_V50_V0vanity_V0list_V0unzip2") (close "_V50_V0vanity_V0list_V0unzip3") (close "_V50_V0vanity_V0list_V0unzip4") (close "_V50_V0vanity_V0list_V0unzip5") (close "_V50_V0vanity_V0list_V0count") (close "_V50_V0vanity_V0list_V0fold") (close "_V50_V0vanity_V0list_V0fold__right") (close "_V50_V0vanity_V0list_V0append__map") (close "_V50_V0vanity_V0list_V0append__map_B") (close "_V50_V0vanity_V0list_V0filter") (close "_V50_V0vanity_V0list_V0partition") (close "_V50_V0vanity_V0list_V0take__while") (close "_V50_V0vanity_V0list_V0drop__while") (close "_V50_V0vanity_V0list_V0split__while") (close "_V50_V0vanity_V0list_V0any_Q") (close "_V50_V0vanity_V0list_V0every_Q") (close "_V50_V0vanity_V0list_V0list__index") (close "_V50_V0vanity_V0list_V0insert") (close "_V50_V0vanity_V0list_V0delete") (close "_V50_V0vanity_V0list_V0assq__update") (close "_V50_V0vanity_V0list_V0assv__update") (close "_V50_V0vanity_V0list_V0assoc__update")) ((bruijn ##.k.235 13 0) (##inline ##vcore.cons (##inline ##vcore.cons 'iota (bruijn ##.iota.27 0 1)) (##inline ##vcore.cons (##inline ##vcore.cons 'list-tabulate (bruijn ##.list-tabulate.28 0 2)) (##inline ##vcore.cons (##inline ##vcore.cons 'first (bruijn ##.first.29 0 3)) (##inline ##vcore.cons (##inline ##vcore.cons 'second (bruijn ##.second.30 0 4)) (##inline ##vcore.cons (##inline ##vcore.cons 'third (bruijn ##.third.31 0 5)) (##inline ##vcore.cons (##inline ##vcore.cons 'fourth (bruijn ##.fourth.32 0 6)) (##inline ##vcore.cons (##inline ##vcore.cons 'fifth (bruijn ##.fifth.33 0 7)) (##inline ##vcore.cons (##inline ##vcore.cons 'sixth (bruijn ##.sixth.34 0 8)) (##inline ##vcore.cons (##inline ##vcore.cons 'seventh (bruijn ##.seventh.35 0 9)) (##inline ##vcore.cons (##inline ##vcore.cons 'eighth (bruijn ##.eighth.36 0 10)) (##inline ##vcore.cons (##inline ##vcore.cons 'ninth (bruijn ##.ninth.37 0 11)) (##inline ##vcore.cons (##inline ##vcore.cons 'tenth (bruijn ##.tenth.38 0 12)) (##inline ##vcore.cons (##inline ##vcore.cons 'car+cdr (bruijn ##.car+cdr.39 0 13)) (##inline ##vcore.cons (##inline ##vcore.cons 'take (bruijn ##.take.40 0 14)) (##inline ##vcore.cons (##inline ##vcore.cons 'drop (bruijn ##.drop.41 0 15)) (##inline ##vcore.cons (##inline ##vcore.cons 'take-right (bruijn ##.take-right.42 0 16)) (##inline ##vcore.cons (##inline ##vcore.cons 'drop-right (bruijn ##.drop-right.43 0 17)) (##inline ##vcore.cons (##inline ##vcore.cons 'split-at (bruijn ##.split-at.44 0 18)) (##inline ##vcore.cons (##inline ##vcore.cons 'append! (bruijn ##.append!.45 0 19)) (##inline ##vcore.cons (##inline ##vcore.cons 'concatenate (bruijn ##.concatenate.46 0 20)) (##inline ##vcore.cons (##inline ##vcore.cons 'zip (bruijn ##.zip.47 0 21)) (##inline ##vcore.cons (##inline ##vcore.cons 'unzip1 (bruijn ##.unzip1.48 0 22)) (##inline ##vcore.cons (##inline ##vcore.cons 'unzip2 (bruijn ##.unzip2.49 0 23)) (##inline ##vcore.cons (##inline ##vcore.cons 'unzip3 (bruijn ##.unzip3.50 0 24)) (##inline ##vcore.cons (##inline ##vcore.cons 'unzip4 (bruijn ##.unzip4.51 0 25)) (##inline ##vcore.cons (##inline ##vcore.cons 'unzip5 (bruijn ##.unzip5.52 0 26)) (##inline ##vcore.cons (##inline ##vcore.cons 'count (bruijn ##.count.53 0 27)) (##inline ##vcore.cons (##inline ##vcore.cons 'fold (bruijn ##.fold.54 0 28)) (##inline ##vcore.cons (##inline ##vcore.cons 'fold-right (bruijn ##.fold-right.55 0 29)) (##inline ##vcore.cons (##inline ##vcore.cons 'append-map (bruijn ##.append-map.56 0 30)) (##inline ##vcore.cons (##inline ##vcore.cons 'append-map! (bruijn ##.append-map!.57 0 31)) (##inline ##vcore.cons (##inline ##vcore.cons 'filter (bruijn ##.filter.58 0 32)) (##inline ##vcore.cons (##inline ##vcore.cons 'partition (bruijn ##.partition.59 0 33)) (##inline ##vcore.cons (##inline ##vcore.cons 'take-while (bruijn ##.take-while.60 0 34)) (##inline ##vcore.cons (##inline ##vcore.cons 'drop-while (bruijn ##.drop-while.61 0 35)) (##inline ##vcore.cons (##inline ##vcore.cons 'split-while (bruijn ##.split-while.62 0 36)) (##inline ##vcore.cons (##inline ##vcore.cons 'any? (bruijn ##.any?.63 0 37)) (##inline ##vcore.cons (##inline ##vcore.cons 'every? (bruijn ##.every?.64 0 38)) (##inline ##vcore.cons (##inline ##vcore.cons 'list-index (bruijn ##.list-index.65 0 39)) (##inline ##vcore.cons (##inline ##vcore.cons 'insert (bruijn ##.insert.66 0 40)) (##inline ##vcore.cons (##inline ##vcore.cons 'delete (bruijn ##.delete.67 0 41)) (##inline ##vcore.cons (##inline ##vcore.cons 'assq-update (bruijn ##.assq-update.68 0 42)) (##inline ##vcore.cons (##inline ##vcore.cons 'assv-update (bruijn ##.assv-update.69 0 43)) (##inline ##vcore.cons (##inline ##vcore.cons 'assoc-update (bruijn ##.assoc-update.70 0 44)) '()))))))))))))))))))))))))))))))))))))))))))))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[45]; } container;
    self = &container.self;
    VInitEnv(self, 45, 45, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0my__num__pairs, self))));
    self->vars[1] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0iota, self))));
    self->vars[2] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0list__tabulate, self))));
    self->vars[3] = _V40_V10vcore_Dcar;
    self->vars[4] = VGetArg(statics, 10-1, 0);
    self->vars[5] = VGetArg(statics, 9-1, 0);
    self->vars[6] = VGetArg(statics, 8-1, 0);
    self->vars[7] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0fifth, self))));
    self->vars[8] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0sixth, self))));
    self->vars[9] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0seventh, self))));
    self->vars[10] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0eighth, self))));
    self->vars[11] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0ninth, self))));
    self->vars[12] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0tenth, self))));
    self->vars[13] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0car_Pcdr, self))));
    self->vars[14] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0take, self))));
    self->vars[15] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0drop, self))));
    self->vars[16] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0take__right, self))));
    self->vars[17] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0drop__right, self))));
    self->vars[18] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0split__at, self))));
    self->vars[19] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0append_B, self))));
    self->vars[20] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0concatenate, self))));
    self->vars[21] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0zip, self))));
    self->vars[22] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0unzip1, self))));
    self->vars[23] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0unzip2, self))));
    self->vars[24] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0unzip3, self))));
    self->vars[25] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0unzip4, self))));
    self->vars[26] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0unzip5, self))));
    self->vars[27] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0count, self))));
    self->vars[28] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0fold, self))));
    self->vars[29] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0fold__right, self))));
    self->vars[30] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0append__map, self))));
    self->vars[31] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0append__map_B, self))));
    self->vars[32] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0filter, self))));
    self->vars[33] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0partition, self))));
    self->vars[34] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0take__while, self))));
    self->vars[35] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0drop__while, self))));
    self->vars[36] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0split__while, self))));
    self->vars[37] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0any_Q, self))));
    self->vars[38] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0every_Q, self))));
    self->vars[39] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0list__index, self))));
    self->vars[40] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0insert, self))));
    self->vars[41] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0delete, self))));
    self->vars[42] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0assq__update, self))));
    self->vars[43] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0assv__update, self))));
    self->vars[44] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0assoc__update, self))));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 0)), 1,
      VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0iota,
        self->vars[1]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0list__tabulate,
        self->vars[2]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0first,
        self->vars[3]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0second,
        self->vars[4]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0third,
        self->vars[5]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0fourth,
        self->vars[6]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0fifth,
        self->vars[7]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0sixth,
        self->vars[8]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0seventh,
        self->vars[9]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0eighth,
        self->vars[10]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0ninth,
        self->vars[11]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0tenth,
        self->vars[12]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0car_Pcdr,
        self->vars[13]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0take,
        self->vars[14]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0drop,
        self->vars[15]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0take__right,
        self->vars[16]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0drop__right,
        self->vars[17]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0split__at,
        self->vars[18]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0append_B,
        self->vars[19]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0concatenate,
        self->vars[20]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0zip,
        self->vars[21]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0unzip1,
        self->vars[22]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0unzip2,
        self->vars[23]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0unzip3,
        self->vars[24]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0unzip4,
        self->vars[25]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0unzip5,
        self->vars[26]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0count,
        self->vars[27]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0fold,
        self->vars[28]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0fold__right,
        self->vars[29]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0append__map,
        self->vars[30]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0append__map_B,
        self->vars[31]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0filter,
        self->vars[32]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0partition,
        self->vars[33]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0take__while,
        self->vars[34]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0drop__while,
        self->vars[35]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0split__while,
        self->vars[36]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0any_Q,
        self->vars[37]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0every_Q,
        self->vars[38]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0list__index,
        self->vars[39]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0insert,
        self->vars[40]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0delete,
        self->vars[41]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0assq__update,
        self->vars[42]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0assv__update,
        self->vars[43]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0assoc__update,
        self->vars[44]),
        VNULL)))))))))))))))))))))))))))))))))))))))))))));
    }
}
static void _V0vanity_V0list_V20_V0k11(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0list_V20_V0k11, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 9 0) (close _V0vanity_V0list_V20_V0k12) 'equal?)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0list_V20_V0k12, self)))),
      _V0equal_Q);
}
static void _V0vanity_V0list_V20_V0k10(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0list_V20_V0k10, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 8 0) (close _V0vanity_V0list_V20_V0k11) 'caar)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0list_V20_V0k11, self)))),
      _V0caar);
}
static void _V0vanity_V0list_V20_V0k9(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0list_V20_V0k9, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 7 0) (close _V0vanity_V0list_V20_V0k10) 'list)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0list_V20_V0k10, self)))),
      _V0list);
}
static void _V0vanity_V0list_V20_V0k8(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0list_V20_V0k8, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 6 0) (close _V0vanity_V0list_V20_V0k9) 'map)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0list_V20_V0k9, self)))),
      _V0map);
}
static void _V0vanity_V0list_V20_V0k7(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0list_V20_V0k7, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 5 0) (close _V0vanity_V0list_V20_V0k8) 'append)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0list_V20_V0k8, self)))),
      _V0append);
}
static void _V0vanity_V0list_V20_V0k6(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0list_V20_V0k6, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 4 0) (close _V0vanity_V0list_V20_V0k7) 'values)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0list_V20_V0k7, self)))),
      _V0values);
}
static void _V0vanity_V0list_V20_V0k5(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0list_V20_V0k5, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 3 0) (close _V0vanity_V0list_V20_V0k6) 'list-ref)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0list_V20_V0k6, self)))),
      _V0list__ref);
}
static void _V0vanity_V0list_V20_V0k4(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0list_V20_V0k4, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 2 0) (close _V0vanity_V0list_V20_V0k5) 'cadddr)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0list_V20_V0k5, self)))),
      _V0cadddr);
}
static void _V0vanity_V0list_V20_V0k3(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0list_V20_V0k3, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 1 0) (close _V0vanity_V0list_V20_V0k4) 'caddr)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0list_V20_V0k4, self)))),
      _V0caddr);
}
static void _V0vanity_V0list_V20_V0k2(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0list_V20_V0k2, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 0 0) (close _V0vanity_V0list_V20_V0k3) 'cadr)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0list_V20_V0k3, self)))),
      _V0cadr);
}
static void _V0vanity_V0list_V20_V0k1(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0list_V20_V0k1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.make-import (close _V0vanity_V0list_V20_V0k2) (##string ##.string.668) (bruijn ##.x.648 0 0))
    VCallFuncWithGC(runtime, (VFunc)VMakeImport2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0list_V20_V0k2, self)))),
      VEncodePointer(&_V10_Dstring_D668.sym, VPOINTER_OTHER),
      _var0);
}
static void _V0vanity_V0list_V20_V0lambda1(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0list_V20_V0lambda1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0list_V20_V0k1) (##string ##.string.669))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0list_V20_V0k1, self)))),
      VEncodePointer(&_V10_Dstring_D669.sym, VPOINTER_OTHER));
}
VFunc _V0vanity_V0list_V20 = (VFunc)_V0vanity_V0list_V20_V0lambda1;
