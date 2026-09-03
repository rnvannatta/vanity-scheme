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

static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D2629 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "_V0vanity_V0core_V20" };
VWEAK VWORD _V0list__ref;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0list__ref = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "list-ref" };
VWEAK VWORD _V0zero_Q;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0zero_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "zero\?" };
VWEAK VWORD _V0error;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0error = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "error" };
VWEAK VWORD _V0values;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0values = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "values" };
VWEAK VWORD _V0equal_Q;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0equal_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "equal\?" };
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D2628 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "_V0vanity_V0list_V20" };
VWEAK VWORD _V0assoc__update;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V0assoc__update = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "assoc-update" };
VWEAK VWORD _V0assv__update;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0assv__update = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "assv-update" };
VWEAK VWORD _V0assq__update;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0assq__update = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "assq-update" };
VWEAK VWORD _V0erase;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0erase = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "erase" };
VWEAK VWORD _V0delete;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0delete = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "delete" };
VWEAK VWORD _V0insert;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0insert = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "insert" };
VWEAK VWORD _V0lset__diff_Pintersection_B;VWEAK struct { VBlob sym; char bytes[24]; } _VW_V0lset__diff_Pintersection_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 24 }, "lset-diff+intersection!" };
VWEAK VWORD _V0lset__diff_Pintersection;VWEAK struct { VBlob sym; char bytes[23]; } _VW_V0lset__diff_Pintersection = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 23 }, "lset-diff+intersection" };
VWEAK VWORD _V0lset__xor_B;VWEAK struct { VBlob sym; char bytes[10]; } _VW_V0lset__xor_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 10 }, "lset-xor!" };
VWEAK VWORD _V0lset__xor;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0lset__xor = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "lset-xor" };
VWEAK VWORD _V0lset__difference_B;VWEAK struct { VBlob sym; char bytes[17]; } _VW_V0lset__difference_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 17 }, "lset-difference!" };
VWEAK VWORD _V0lset__difference;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V0lset__difference = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "lset-difference" };
VWEAK VWORD _V0lset__intersection_B;VWEAK struct { VBlob sym; char bytes[19]; } _VW_V0lset__intersection_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 19 }, "lset-intersection!" };
VWEAK VWORD _V0lset__intersection;VWEAK struct { VBlob sym; char bytes[18]; } _VW_V0lset__intersection = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 18 }, "lset-intersection" };
VWEAK VWORD _V0lset__union_B;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0lset__union_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "lset-union!" };
VWEAK VWORD _V0lset__union;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V0lset__union = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "lset-union" };
VWEAK VWORD _V0lset__adjoin;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0lset__adjoin = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "lset-adjoin" };
VWEAK VWORD _V0lset_E;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0lset_E = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "lset=" };
VWEAK VWORD _V0lset_L_E;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0lset_L_E = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "lset<=" };
VWEAK VWORD _V0alist__delete_B;VWEAK struct { VBlob sym; char bytes[14]; } _VW_V0alist__delete_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 14 }, "alist-delete!" };
VWEAK VWORD _V0alist__delete;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V0alist__delete = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "alist-delete" };
VWEAK VWORD _V0alist__copy;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V0alist__copy = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "alist-copy" };
VWEAK VWORD _V0alist__cons;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V0alist__cons = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "alist-cons" };
VWEAK VWORD _V0assv;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0assv = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "assv" };
VWEAK VWORD _V0assq;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0assq = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "assq" };
VWEAK VWORD _V0assoc;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0assoc = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "assoc" };
VWEAK VWORD _V0delete__duplicates_B;VWEAK struct { VBlob sym; char bytes[19]; } _VW_V0delete__duplicates_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 19 }, "delete-duplicates!" };
VWEAK VWORD _V0delete__duplicates;VWEAK struct { VBlob sym; char bytes[18]; } _VW_V0delete__duplicates = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 18 }, "delete-duplicates" };
VWEAK VWORD _V0break_B;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0break_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "break!" };
VWEAK VWORD _V0break;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0break = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "break" };
VWEAK VWORD _V0span_B;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0span_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "span!" };
VWEAK VWORD _V0span;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0span = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "span" };
VWEAK VWORD _V0split__while;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0split__while = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "split-while" };
VWEAK VWORD _V0drop__while;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V0drop__while = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "drop-while" };
VWEAK VWORD _V0take__while_B;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0take__while_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "take-while!" };
VWEAK VWORD _V0take__while;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V0take__while = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "take-while" };
VWEAK VWORD _V0list__index;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V0list__index = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "list-index" };
VWEAK VWORD _V0every;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0every = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "every" };
VWEAK VWORD _V0any;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0any = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "any" };
VWEAK VWORD _V0every_Q;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0every_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "every\?" };
VWEAK VWORD _V0any_Q;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0any_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "any\?" };
VWEAK VWORD _V0find__tail;VWEAK struct { VBlob sym; char bytes[10]; } _VW_V0find__tail = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 10 }, "find-tail" };
VWEAK VWORD _V0find;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0find = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "find" };
VWEAK VWORD _V0memv;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0memv = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "memv" };
VWEAK VWORD _V0memq;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0memq = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "memq" };
VWEAK VWORD _V0member;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0member = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "member" };
VWEAK VWORD _V0filter__map;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V0filter__map = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "filter-map" };
VWEAK VWORD _V0remove_B;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0remove_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "remove!" };
VWEAK VWORD _V0remove;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0remove = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "remove" };
VWEAK VWORD _V0partition_B;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V0partition_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "partition!" };
VWEAK VWORD _V0partition;VWEAK struct { VBlob sym; char bytes[10]; } _VW_V0partition = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 10 }, "partition" };
VWEAK VWORD _V0filter_B;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0filter_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "filter!" };
VWEAK VWORD _V0filter;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0filter = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "filter" };
VWEAK VWORD _V0append__map_B;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0append__map_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "append-map!" };
VWEAK VWORD _V0append__map;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V0append__map = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "append-map" };
VWEAK VWORD _V0reduce__right;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V0reduce__right = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "reduce-right" };
VWEAK VWORD _V0reduce;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0reduce = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "reduce" };
VWEAK VWORD _V0pair__fold__right;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V0pair__fold__right = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "pair-fold-right" };
VWEAK VWORD _V0pair__fold;VWEAK struct { VBlob sym; char bytes[10]; } _VW_V0pair__fold = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 10 }, "pair-fold" };
VWEAK VWORD _V0unfold__right;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V0unfold__right = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "unfold-right" };
VWEAK VWORD _V0unfold;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0unfold = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "unfold" };
VWEAK VWORD _V0fold__right;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V0fold__right = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "fold-right" };
VWEAK VWORD _V0fold;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0fold = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "fold" };
VWEAK VWORD _V0pair__for__each;VWEAK struct { VBlob sym; char bytes[14]; } _VW_V0pair__for__each = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 14 }, "pair-for-each" };
VWEAK VWORD _V0for__each;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0for__each = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "for-each" };
VWEAK VWORD _V0map__in__order;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V0map__in__order = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "map-in-order" };
VWEAK VWORD _V0map_B;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0map_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "map!" };
VWEAK VWORD _V0map;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0map = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "map" };
VWEAK VWORD _V0count;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0count = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "count" };
VWEAK VWORD _V0unzip5;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0unzip5 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "unzip5" };
VWEAK VWORD _V0unzip4;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0unzip4 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "unzip4" };
VWEAK VWORD _V0unzip3;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0unzip3 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "unzip3" };
VWEAK VWORD _V0unzip2;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0unzip2 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "unzip2" };
VWEAK VWORD _V0unzip1;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0unzip1 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "unzip1" };
VWEAK VWORD _V0zip;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0zip = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "zip" };
VWEAK VWORD _V0append__reverse_B;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V0append__reverse_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "append-reverse!" };
VWEAK VWORD _V0append__reverse;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V0append__reverse = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "append-reverse" };
VWEAK VWORD _V0reverse_B;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0reverse_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "reverse!" };
VWEAK VWORD _V0reverse;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0reverse = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "reverse" };
VWEAK VWORD _V0concatenate_B;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V0concatenate_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "concatenate!" };
VWEAK VWORD _V0concatenate;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0concatenate = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "concatenate" };
VWEAK VWORD _V0append_B;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0append_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "append!" };
VWEAK VWORD _V0append;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0append = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "append" };
VWEAK VWORD _V0length_P;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0length_P = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "length+" };
VWEAK VWORD _V0length;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0length = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "length" };
VWEAK VWORD _V0last__pair;VWEAK struct { VBlob sym; char bytes[10]; } _VW_V0last__pair = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 10 }, "last-pair" };
VWEAK VWORD _V0last;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0last = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "last" };
VWEAK VWORD _V0split__at_B;VWEAK struct { VBlob sym; char bytes[10]; } _VW_V0split__at_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 10 }, "split-at!" };
VWEAK VWORD _V0split__at;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0split__at = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "split-at" };
VWEAK VWORD _V0drop__right_B;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0drop__right_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "drop-right!" };
VWEAK VWORD _V0take_B;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0take_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "take!" };
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
VWEAK VWORD _V0cddddr;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0cddddr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "cddddr" };
VWEAK VWORD _V0cdddar;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0cdddar = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "cdddar" };
VWEAK VWORD _V0cddadr;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0cddadr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "cddadr" };
VWEAK VWORD _V0cddaar;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0cddaar = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "cddaar" };
VWEAK VWORD _V0cdaddr;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0cdaddr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "cdaddr" };
VWEAK VWORD _V0cdadar;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0cdadar = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "cdadar" };
VWEAK VWORD _V0cdaadr;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0cdaadr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "cdaadr" };
VWEAK VWORD _V0cdaaar;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0cdaaar = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "cdaaar" };
VWEAK VWORD _V0cadddr;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0cadddr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "cadddr" };
VWEAK VWORD _V0caddar;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0caddar = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "caddar" };
VWEAK VWORD _V0cadadr;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0cadadr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "cadadr" };
VWEAK VWORD _V0cadaar;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0cadaar = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "cadaar" };
VWEAK VWORD _V0caaddr;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0caaddr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "caaddr" };
VWEAK VWORD _V0caadar;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0caadar = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "caadar" };
VWEAK VWORD _V0caaadr;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0caaadr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "caaadr" };
VWEAK VWORD _V0caaaar;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0caaaar = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "caaaar" };
VWEAK VWORD _V0cdddr;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0cdddr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "cdddr" };
VWEAK VWORD _V0cddar;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0cddar = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "cddar" };
VWEAK VWORD _V0cdadr;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0cdadr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "cdadr" };
VWEAK VWORD _V0cdaar;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0cdaar = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "cdaar" };
VWEAK VWORD _V0caddr;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0caddr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "caddr" };
VWEAK VWORD _V0cadar;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0cadar = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "cadar" };
VWEAK VWORD _V0caadr;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0caadr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "caadr" };
VWEAK VWORD _V0caaar;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0caaar = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "caaar" };
VWEAK VWORD _V0cddr;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0cddr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "cddr" };
VWEAK VWORD _V0cdar;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0cdar = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "cdar" };
VWEAK VWORD _V0cadr;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0cadr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "cadr" };
VWEAK VWORD _V0caar;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0caar = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "caar" };
VWEAK VWORD _V0cdr;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0cdr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "cdr" };
VWEAK VWORD _V0car;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0car = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "car" };
VWEAK VWORD _V0list_E;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0list_E = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "list=" };
VWEAK VWORD _V0null__list_Q;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V0null__list_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "null-list\?" };
VWEAK VWORD _V0not__pair_Q;VWEAK struct { VBlob sym; char bytes[10]; } _VW_V0not__pair_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 10 }, "not-pair\?" };
VWEAK VWORD _V0dotted__list_Q;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V0dotted__list_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "dotted-list\?" };
VWEAK VWORD _V0circular__list_Q;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V0circular__list_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "circular-list\?" };
VWEAK VWORD _V0proper__list_Q;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V0proper__list_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "proper-list\?" };
VWEAK VWORD _V0null_Q;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0null_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "null\?" };
VWEAK VWORD _V0pair_Q;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0pair_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "pair\?" };
VWEAK VWORD _V0iota;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0iota = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "iota" };
VWEAK VWORD _V0circular__list;VWEAK struct { VBlob sym; char bytes[14]; } _VW_V0circular__list = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 14 }, "circular-list" };
VWEAK VWORD _V0list__copy;VWEAK struct { VBlob sym; char bytes[10]; } _VW_V0list__copy = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 10 }, "list-copy" };
VWEAK VWORD _V0list__tabulate;VWEAK struct { VBlob sym; char bytes[14]; } _VW_V0list__tabulate = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 14 }, "list-tabulate" };
VWEAK VWORD _V0cons_S;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0cons_S = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "cons*" };
VWEAK VWORD _V0xcons;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0xcons = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "xcons" };
VWEAK VWORD _V0list;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0list = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "list" };
VWEAK VWORD _V40_V10vcore_Dcons;
VWEAK VClosure _VW_V40_V10vcore_Dcons = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VCons2, NULL };
VWEAK VWORD _V0cons;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0cons = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "cons" };
static struct { VBlob sym; char bytes[35]; } _V10_Dstring_D2627 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 35 }, "null-list\?: argument out of domain" };
static struct { VBlob sym; char bytes[13]; } _V10_Dstring_D2626 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 13 }, "Bad argument" };
VWEAK VWORD _V40_V10vcore_Dint_Q;
VWEAK VClosure _VW_V40_V10vcore_Dint_Q = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VIntP2, NULL };
static struct { VBlob sym; char bytes[19]; } _V10_Dstring_D2625 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 19 }, "Too many arguments" };
VWEAK VWORD _V40_V10vcore_Dnull_Q;
VWEAK VClosure _VW_V40_V10vcore_Dnull_Q = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VNullP2, NULL };
VWEAK VWORD _V40_V10vcore_Dcar;
VWEAK VClosure _VW_V40_V10vcore_Dcar = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VCar2, NULL };
VWEAK VWORD _V40_V10vcore_Dcdr;
VWEAK VClosure _VW_V40_V10vcore_Dcdr = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VCdr2, NULL };
VWEAK VWORD _V40_V10vcore_Deq_Q;
VWEAK VClosure _VW_V40_V10vcore_Deq_Q = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VEq2, NULL };
VWEAK VWORD _V40_V10vcore_Dpair_Q;
VWEAK VClosure _VW_V40_V10vcore_Dpair_Q = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VPairP2, NULL };
VWEAK VWORD _V40_V10vcore_Dprocedure_Q;
VWEAK VClosure _VW_V40_V10vcore_Dprocedure_Q = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VProcedureP2, NULL };
VWEAK VWORD _V40VMultiImport;
VWEAK VClosure _VW_V40VMultiImport = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VMultiImport, NULL };
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0get__optional, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0_Mcdrs_V10_Drecur_D762, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0_Mcdrs, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0_Mcars_Pcdrs_V10_Drecur_D752, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0_Mcars_Pcdrs, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0xcons, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0cons_S_V10_Drecur_D745, _var0, _var1, _var2);
V_DECLARE_FUNC_MIN(_V50_V0vanity_V0list_V0cons_S, _var0, _var1);
V_DECLARE_FUNC_MIN(_V50_V0vanity_V0list_V0circular__list, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0my__num__pairs_V10_Dloop_D737, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0my__num__pairs, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0iota_V10_Dloop_D734, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0iota_V10_Dloop_D729, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0iota_V10_Dloop_D725, _var0, _var1);
V_DECLARE_FUNC_MIN(_V50_V0vanity_V0list_V0iota);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0proper__list_Q_V10_Dlp_D718, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0proper__list_Q, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0dotted__list_Q_V10_Dlp_D711, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0dotted__list_Q, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0circular__list_Q_V10_Dlp_D704, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0circular__list_Q, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0not__pair_Q, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0null__list_Q, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0list__tabulate_V10_Dloop_D699, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0list__tabulate, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0list_E_V10_Dlp1_D689_V10_Dlp2_D694, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0list_E_V10_Dlp1_D689, _var0, _var1, _var2);
V_DECLARE_FUNC_MIN(_V50_V0vanity_V0list_V0list_E, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0fifth, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0sixth, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0seventh, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0eighth, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0ninth, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0tenth, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0car_Pcdr, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0take, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0drop, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0take__right_V10_Dloop_D673, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0take__right, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0drop__right_V10_Dloop_D668, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0drop__right, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0split__at, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0split__at_B, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0check__arg_V10_Dlp_D656, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0check__arg, _var0, _var1, _var2, _var3);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0take_B, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0drop__right_B_V10_Dlp_D648, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0drop__right_B, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0last, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0last__pair_V10_Dlp_D641, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0last__pair, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0length_P_V10_Dlp_D631, _var0, _var1, _var2, _var3);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0length_P, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0append_B_V10_Dloop_D620, _var0, _var1);
V_DECLARE_FUNC_MIN(_V50_V0vanity_V0list_V0append_B);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0reverse_B_V10_Dlp_D613, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0reverse_B, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0append__reverse_V10_Dlp_D609, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0append__reverse, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0append__reverse_B_V10_Dlp_D603, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0append__reverse_B, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0concatenate, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0concatenate_B, _var0, _var1);
V_DECLARE_FUNC_MIN(_V50_V0vanity_V0list_V0zip, _var0);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0unzip1, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0unzip2, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0unzip3, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0unzip4, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0unzip5, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0count_V10_Dloop_D588, _var0, _var1, _var2, _var3);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0count, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0map_B_V10_Dlp_D580, _var0, _var1, _var2);
V_DECLARE_FUNC_MIN(_V50_V0vanity_V0list_V0map_B, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0pair__for__each_V10_Dlp_D574, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0pair__for__each_V10_Dlp_D571, _var0, _var1);
V_DECLARE_FUNC_MIN(_V50_V0vanity_V0list_V0pair__for__each, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0fold, _var0, _var1, _var2, _var3);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0fold__right, _var0, _var1, _var2, _var3);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0unfold__right_V10_Dlp_D559, _var0, _var1, _var2);
V_DECLARE_FUNC_MIN(_V50_V0vanity_V0list_V0unfold__right, _var0, _var1, _var2, _var3, _var4);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0unfold_V10_Drecur_D552, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0unfold_V10_Drecur_D550, _var0, _var1);
V_DECLARE_FUNC_MIN(_V50_V0vanity_V0list_V0unfold, _var0, _var1, _var2, _var3, _var4);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0pair__fold__right_V10_Drecur_D542, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0pair__fold__right_V10_Drecur_D539, _var0, _var1);
V_DECLARE_FUNC_MIN(_V50_V0vanity_V0list_V0pair__fold__right, _var0, _var1, _var2, _var3);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0pair__fold_V10_Dlp_D531, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0pair__fold_V10_Dlp_D527, _var0, _var1, _var2);
V_DECLARE_FUNC_MIN(_V50_V0vanity_V0list_V0pair__fold, _var0, _var1, _var2, _var3);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0reduce, _var0, _var1, _var2, _var3);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0reduce__right_V10_Drecur_D517, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0reduce__right, _var0, _var1, _var2, _var3);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0append__map_V10_Dloop_D512, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0append__map_V10_Dloop_D506, _var0, _var1, _var2, _var3);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0append__map_V10_Dloop_D499, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0append__map_V10_Dloop_D494, _var0, _var1);
V_DECLARE_FUNC_MIN(_V50_V0vanity_V0list_V0append__map);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D490, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D484, _var0, _var1, _var2, _var3);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D477, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D472, _var0, _var1);
V_DECLARE_FUNC_MIN(_V50_V0vanity_V0list_V0append__map_B);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0filter, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0filter_B_V10_Dlp_D458_V10_Dscan__out_D461_V10_Dlp_D466, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0filter_B_V10_Dlp_D458_V10_Dscan__out_D461, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0filter_B_V10_Dlp_D458_V10_Dscan__in_D460, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0filter_B_V10_Dlp_D458, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0filter_B, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0partition, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0partition_B_V10_Dlp_D449, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0partition_B_V10_Dlp_D446, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0partition_B_V10_Dscan__out_D433_V10_Dlp_D443, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0partition_B_V10_Dscan__out_D433, _var0, _var1, _var2, _var3);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0partition_B_V10_Dscan__in_D432_V10_Dlp_D437, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0partition_B_V10_Dscan__in_D432, _var0, _var1, _var2, _var3);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0partition_B, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0remove, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0remove_B, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0filter__map_V10_Drecur_D419, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0filter__map_V10_Drecur_D413, _var0, _var1);
V_DECLARE_FUNC_MIN(_V50_V0vanity_V0list_V0filter__map, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0find, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0find__tail_V10_Dlp_D405, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0find__tail, _var0, _var1, _var2);
V_DECLARE_FUNC_MIN(_V50_V0vanity_V0list_V0delete, _var0, _var1, _var2);
V_DECLARE_FUNC_MIN(_V50_V0vanity_V0list_V0delete_B, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0take__while, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0drop__while, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0split__while, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0take__while_B_V10_Dlp_D381, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0take__while_B, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0span_V10_Drecur_D374, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0span, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0span_B_V10_Dlp_D368, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0span_B, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0break, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0break_B, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0any_Q, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0every_Q, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0any_V10_Dlp_D352, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0any_V10_Dlp_D347, _var0, _var1, _var2);
V_DECLARE_FUNC_MIN(_V50_V0vanity_V0list_V0any, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0every_V10_Dlp_D339, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0every_V10_Dlp_D334, _var0, _var1, _var2);
V_DECLARE_FUNC_MIN(_V50_V0vanity_V0list_V0every, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0list__index_V10_Dloop_D326, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0list__index, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0delete__duplicates_V10_Drecur_D319, _var0, _var1);
V_DECLARE_FUNC_MIN(_V50_V0vanity_V0list_V0delete__duplicates, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0delete__duplicates_B_V10_Drecur_D311, _var0, _var1);
V_DECLARE_FUNC_MIN(_V50_V0vanity_V0list_V0delete__duplicates_B, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0alist__cons, _var0, _var1, _var2, _var3);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0alist__copy, _var0, _var1);
V_DECLARE_FUNC_MIN(_V50_V0vanity_V0list_V0alist__delete, _var0, _var1, _var2);
V_DECLARE_FUNC_MIN(_V50_V0vanity_V0list_V0alist__delete_B, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0_Mlset2_L_E, _var0, _var1, _var2, _var3);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0lset_L_E_V10_Dlp_D284, _var0, _var1, _var2);
V_DECLARE_FUNC_MIN(_V50_V0vanity_V0list_V0lset_L_E, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0lset_E_V10_Dlp_D277, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0lset_E_V10_Dflip_D273, _var0, _var1);
V_DECLARE_FUNC_MIN(_V50_V0vanity_V0list_V0lset_E, _var0, _var1);
V_DECLARE_FUNC_MIN(_V50_V0vanity_V0list_V0lset__adjoin, _var0, _var1, _var2);
V_DECLARE_FUNC_MIN(_V50_V0vanity_V0list_V0lset__union, _var0, _var1);
V_DECLARE_FUNC_MIN(_V50_V0vanity_V0list_V0lset__union_B, _var0, _var1);
V_DECLARE_FUNC_MIN(_V50_V0vanity_V0list_V0lset__intersection, _var0, _var1, _var2);
V_DECLARE_FUNC_MIN(_V50_V0vanity_V0list_V0lset__intersection_B, _var0, _var1, _var2);
V_DECLARE_FUNC_MIN(_V50_V0vanity_V0list_V0lset__difference, _var0, _var1, _var2);
V_DECLARE_FUNC_MIN(_V50_V0vanity_V0list_V0lset__difference_B, _var0, _var1, _var2);
V_DECLARE_FUNC_MIN(_V50_V0vanity_V0list_V0lset__xor, _var0, _var1);
V_DECLARE_FUNC_MIN(_V50_V0vanity_V0list_V0lset__xor_B, _var0, _var1);
V_DECLARE_FUNC_MIN(_V50_V0vanity_V0list_V0lset__diff_Pintersection, _var0, _var1, _var2);
V_DECLARE_FUNC_MIN(_V50_V0vanity_V0list_V0lset__diff_Pintersection_B, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0insert, _var0, _var1, _var2, _var3);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0erase, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0assq__update, _var0, _var1, _var2, _var3);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0assv__update, _var0, _var1, _var2, _var3);
V_DECLARE_FUNC_MIN(_V50_V0vanity_V0list_V0assoc__update);
static void _V10_Dassoc__update_D69_V0k5(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dassoc__update_D69_V0k5, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%r.1896) ((##vcore.cons (bruijn ##.%x.1894 2 0) (bruijn ##.%x.777 1 0))) ((bruijn ##.%k.770 6 0) (bruijn ##.%r.1896 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[0],
      statics->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 1,
      self->vars[0]);
    }
}
static void _V10_Dassoc__update_D69_V0k4(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dassoc__update_D69_V0k4, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.773 0 0) (basic-block 3 3 (##.%x.1891 ##.%x.1892 ##.%r.1893) ((##vcore.cons (bruijn ##.x.187 4 2) (bruijn ##.val.188 4 3)) (##vcore.cdr (bruijn ##.lst.186 4 1)) (##vcore.cons (bruijn ##.%x.1891 0 0) (bruijn ##.%x.1892 0 1))) ((bruijn ##.%k.770 4 0) (bruijn ##.%r.1893 0 2))) (basic-block 2 2 (##.%x.1894 ##.%x.1895) ((##vcore.car (bruijn ##.lst.186 4 1)) (##vcore.cdr (bruijn ##.lst.186 4 1))) (##qualified-call (vanity list assoc-update) #t (bruijn ##.assoc-update.69 5 0) (close _V10_Dassoc__update_D69_V0k5) (bruijn ##.%x.1895 0 1) (bruijn ##.x.187 4 2) (bruijn ##.val.188 4 3))))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->up->up->up->vars[2],
      statics->up->up->up->vars[3]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->up->up->up->vars[1]);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      self->vars[0],
      self->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      self->vars[2]);
    }
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->up->up->vars[1]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->up->up->up->vars[1]);
  {
   VEnv * _closure_env = _V60_V0vanity_V0list;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dassoc__update_D69_V0k5, self))));
    VWORD _arg1 = 
      self->vars[1];
    VWORD _arg2 = 
      statics->up->up->up->vars[2];
    VWORD _arg3 = 
      statics->up->up->up->vars[3];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0assoc__update, _V60_V0vanity_V0list)}, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0list_V0assoc__update(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
    }
}
}
static void _V10_Dassoc__update_D69_V0k3(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dassoc__update_D69_V0k3, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.=.189 2 4) (close _V10_Dassoc__update_D69_V0k4) (bruijn ##.x.187 2 2) (bruijn ##.%x.779 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[4]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dassoc__update_D69_V0k4, self)))),
      statics->up->vars[2],
      _var0);
}
__attribute__((used)) static void _V20CaseError__V50_V0vanity_V0list_V0assoc__update(VRuntime * runtime, VEnv * statics, int argc, ...) {
 // ("_V50_V0vanity_V0list_V0assoc__update" #t #f (4 (##qualified-call (vanity list assoc-update) #t (bruijn ##.assoc-update.69 1 0) (bruijn ##.%k.769 0 0) (bruijn ##.lst.183 0 1) (bruijn ##.x.184 0 2) (bruijn ##.val.185 0 3) (bruijn ##.equal?.4 2 0))) (5 (basic-block 1 1 (##.%p.1888) ((##vcore.null? (bruijn ##.lst.186 1 1))) (if (bruijn ##.%p.1888 0 0) (basic-block 2 2 (##.%x.1889 ##.%r.1890) ((##vcore.cons (bruijn ##.x.187 2 2) (bruijn ##.val.188 2 3)) (##vcore.cons (bruijn ##.%x.1889 0 0) '())) ((bruijn ##.%k.770 2 0) (bruijn ##.%r.1890 0 1))) ((bruijn ##.caar.49 3 45) (close _V10_Dassoc__update_D69_V0k3) (bruijn ##.lst.186 1 1))))))
 VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0assoc__update, got ~D~N"
 "-- expected 4~N"
 "-- expected 5~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V50_V0vanity_V0list_V0assoc__update(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
  // (##qualified-call (vanity list assoc-update) #t (bruijn ##.assoc-update.69 1 0) (bruijn ##.%k.769 0 0) (bruijn ##.lst.183 0 1) (bruijn ##.x.184 0 2) (bruijn ##.val.185 0 3) (bruijn ##.equal?.4 2 0))
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
      statics->up->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0assoc__update, _V60_V0vanity_V0list)}, 5, _arg0, _arg1, _arg2, _arg3, _arg4);
    } else {
       _V50_V0vanity_V0list_V0assoc__update(runtime, _closure_env, 5, _arg0, _arg1, _arg2, _arg3, _arg4);
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
  // (basic-block 1 1 (##.%p.1888) ((##vcore.null? (bruijn ##.lst.186 1 1))) (if (bruijn ##.%p.1888 0 0) (basic-block 2 2 (##.%x.1889 ##.%r.1890) ((##vcore.cons (bruijn ##.x.187 2 2) (bruijn ##.val.188 2 3)) (##vcore.cons (bruijn ##.%x.1889 0 0) '())) ((bruijn ##.%k.770 2 0) (bruijn ##.%r.1890 0 1))) ((bruijn ##.caar.49 3 45) (close _V10_Dassoc__update_D69_V0k3) (bruijn ##.lst.186 1 1))))
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
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[2],
      statics->up->vars[3]);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      self->vars[0],
      VNULL);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      self->vars[1]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[45]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dassoc__update_D69_V0k3, self)))),
      statics->vars[1]);
}
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
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0assv__update_V0k7, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%r.1906) ((##vcore.cons (bruijn ##.%x.1904 2 0) (bruijn ##.%x.787 1 0))) ((bruijn ##.%k.780 6 0) (bruijn ##.%r.1906 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[0],
      statics->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 1,
      self->vars[0]);
    }
}
void _V50_V0vanity_V0list_V0assv__update_V0k6(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0assv__update_V0k6, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%p.1900) ((##vcore.eq? (bruijn ##.x.191 3 2) (bruijn ##.%x.789 1 0))) (if (bruijn ##.%p.1900 0 0) (basic-block 3 3 (##.%x.1901 ##.%x.1902 ##.%r.1903) ((##vcore.cons (bruijn ##.x.191 4 2) (bruijn ##.val.192 4 3)) (##vcore.cdr (bruijn ##.lst.190 4 1)) (##vcore.cons (bruijn ##.%x.1901 0 0) (bruijn ##.%x.1902 0 1))) ((bruijn ##.%k.780 4 0) (bruijn ##.%r.1903 0 2))) (basic-block 2 2 (##.%x.1904 ##.%x.1905) ((##vcore.car (bruijn ##.lst.190 4 1)) (##vcore.cdr (bruijn ##.lst.190 4 1))) (##qualified-call (vanity list assoc-update) #t (bruijn ##.assoc-update.69 5 0) (close _V50_V0vanity_V0list_V0assv__update_V0k7) (bruijn ##.%x.1905 0 1) (bruijn ##.x.191 4 2) (bruijn ##.val.192 4 3)))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      statics->up->up->vars[2],
      statics->vars[0]);
if(VDecodeBool(
self->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->up->up->up->vars[2],
      statics->up->up->up->vars[3]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->up->up->up->vars[1]);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      self->vars[0],
      self->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      self->vars[2]);
    }
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->up->up->vars[1]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->up->up->up->vars[1]);
  {
   VEnv * _closure_env = _V60_V0vanity_V0list;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0assv__update_V0k7, self))));
    VWORD _arg1 = 
      self->vars[1];
    VWORD _arg2 = 
      statics->up->up->up->vars[2];
    VWORD _arg3 = 
      statics->up->up->up->vars[3];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0assoc__update, _V60_V0vanity_V0list)}, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0list_V0assoc__update(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
    }
}
    }
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
  // (basic-block 1 1 (##.%p.1897) ((##vcore.null? (bruijn ##.lst.190 1 1))) (if (bruijn ##.%p.1897 0 0) (basic-block 2 2 (##.%x.1898 ##.%r.1899) ((##vcore.cons (bruijn ##.x.191 2 2) (bruijn ##.val.192 2 3)) (##vcore.cons (bruijn ##.%x.1898 0 0) '())) ((bruijn ##.%k.780 2 0) (bruijn ##.%r.1899 0 1))) ((bruijn ##.caar.49 3 45) (close _V50_V0vanity_V0list_V0assv__update_V0k6) (bruijn ##.lst.190 1 1))))
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
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[2],
      statics->up->vars[3]);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      self->vars[0],
      VNULL);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      self->vars[1]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[45]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0assv__update_V0k6, self)))),
      statics->vars[1]);
}
    }
}
void _V50_V0vanity_V0list_V0assq__update_V0k9(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0assq__update_V0k9, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%r.1916) ((##vcore.cons (bruijn ##.%x.1914 2 0) (bruijn ##.%x.797 1 0))) ((bruijn ##.%k.790 6 0) (bruijn ##.%r.1916 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[0],
      statics->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 1,
      self->vars[0]);
    }
}
void _V50_V0vanity_V0list_V0assq__update_V0k8(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0assq__update_V0k8, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%p.1910) ((##vcore.eq? (bruijn ##.x.194 3 2) (bruijn ##.%x.799 1 0))) (if (bruijn ##.%p.1910 0 0) (basic-block 3 3 (##.%x.1911 ##.%x.1912 ##.%r.1913) ((##vcore.cons (bruijn ##.x.194 4 2) (bruijn ##.val.195 4 3)) (##vcore.cdr (bruijn ##.lst.193 4 1)) (##vcore.cons (bruijn ##.%x.1911 0 0) (bruijn ##.%x.1912 0 1))) ((bruijn ##.%k.790 4 0) (bruijn ##.%r.1913 0 2))) (basic-block 2 2 (##.%x.1914 ##.%x.1915) ((##vcore.car (bruijn ##.lst.193 4 1)) (##vcore.cdr (bruijn ##.lst.193 4 1))) (##qualified-call (vanity list assoc-update) #t (bruijn ##.assoc-update.69 5 0) (close _V50_V0vanity_V0list_V0assq__update_V0k9) (bruijn ##.%x.1915 0 1) (bruijn ##.x.194 4 2) (bruijn ##.val.195 4 3)))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      statics->up->up->vars[2],
      statics->vars[0]);
if(VDecodeBool(
self->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->up->up->up->vars[2],
      statics->up->up->up->vars[3]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->up->up->up->vars[1]);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      self->vars[0],
      self->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      self->vars[2]);
    }
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->up->up->vars[1]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->up->up->up->vars[1]);
  {
   VEnv * _closure_env = _V60_V0vanity_V0list;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0assq__update_V0k9, self))));
    VWORD _arg1 = 
      self->vars[1];
    VWORD _arg2 = 
      statics->up->up->up->vars[2];
    VWORD _arg3 = 
      statics->up->up->up->vars[3];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0assoc__update, _V60_V0vanity_V0list)}, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0list_V0assoc__update(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
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
  // (basic-block 1 1 (##.%p.1907) ((##vcore.null? (bruijn ##.lst.193 1 1))) (if (bruijn ##.%p.1907 0 0) (basic-block 2 2 (##.%x.1908 ##.%r.1909) ((##vcore.cons (bruijn ##.x.194 2 2) (bruijn ##.val.195 2 3)) (##vcore.cons (bruijn ##.%x.1908 0 0) '())) ((bruijn ##.%k.790 2 0) (bruijn ##.%r.1909 0 1))) ((bruijn ##.caar.49 3 45) (close _V50_V0vanity_V0list_V0assq__update_V0k8) (bruijn ##.lst.193 1 1))))
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
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[2],
      statics->up->vars[3]);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      self->vars[0],
      VNULL);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      self->vars[1]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[45]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0assq__update_V0k8, self)))),
      statics->vars[1]);
}
    }
}
void _V50_V0vanity_V0list_V0erase_V0k10(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0erase_V0k10, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%r.1922) ((##vcore.cons (bruijn ##.%x.1919 2 0) (bruijn ##.%x.803 1 0))) ((bruijn ##.%k.800 4 0) (bruijn ##.%r.1922 0 0)))
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
void _V50_V0vanity_V0list_V0erase(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0erase, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 1 1 (##.%p.1917) ((##vcore.= (bruijn ##.i.197 1 2) 0)) (if (bruijn ##.%p.1917 0 0) (basic-block 1 1 (##.%r.1918) ((##vcore.cdr (bruijn ##.lst.196 2 1))) ((bruijn ##.%k.800 2 0) (bruijn ##.%r.1918 0 0))) (basic-block 3 3 (##.%x.1919 ##.%x.1920 ##.%x.1921) ((##vcore.car (bruijn ##.lst.196 2 1)) (##vcore.cdr (bruijn ##.lst.196 2 1)) (##vcore.- (bruijn ##.i.197 2 2) 1)) (##qualified-call (vanity list erase) #t (bruijn ##.erase.72 3 3) (close _V50_V0vanity_V0list_V0erase_V0k10) (bruijn ##.%x.1920 0 1) (bruijn ##.%x.1921 0 2)))))
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
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->vars[1]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->up->vars[1]);
    self->vars[2] = _VBasic_VSub2(runtime, NULL,
      statics->up->vars[2],
      VEncodeInt(1l));
  {
   VEnv * _closure_env = _V60_V0vanity_V0list;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0erase_V0k10, self))));
    VWORD _arg1 = 
      self->vars[1];
    VWORD _arg2 = 
      self->vars[2];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0erase, _V60_V0vanity_V0list)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0list_V0erase(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
    }
}
void _V50_V0vanity_V0list_V0insert_V0k11(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0insert_V0k11, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%r.1928) ((##vcore.cons (bruijn ##.%x.1925 2 0) (bruijn ##.%x.809 1 0))) ((bruijn ##.%k.806 4 0) (bruijn ##.%r.1928 0 0)))
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
  // (basic-block 1 1 (##.%p.1923) ((##vcore.= (bruijn ##.i.199 1 2) 0)) (if (bruijn ##.%p.1923 0 0) (basic-block 1 1 (##.%r.1924) ((##vcore.cons (bruijn ##.x.200 2 3) (bruijn ##.lst.198 2 1))) ((bruijn ##.%k.806 2 0) (bruijn ##.%r.1924 0 0))) (basic-block 3 3 (##.%x.1925 ##.%x.1926 ##.%x.1927) ((##vcore.car (bruijn ##.lst.198 2 1)) (##vcore.cdr (bruijn ##.lst.198 2 1)) (##vcore.- (bruijn ##.i.199 2 2) 1)) (##qualified-call (vanity list insert) #t (bruijn ##.insert.73 3 4) (close _V50_V0vanity_V0list_V0insert_V0k11) (bruijn ##.%x.1926 0 1) (bruijn ##.%x.1927 0 2) (bruijn ##.x.200 2 3)))))
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
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[3],
      statics->up->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      self->vars[0]);
    }
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->vars[1]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->up->vars[1]);
    self->vars[2] = _VBasic_VSub2(runtime, NULL,
      statics->up->vars[2],
      VEncodeInt(1l));
  {
   VEnv * _closure_env = _V60_V0vanity_V0list;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0insert_V0k11, self))));
    VWORD _arg1 = 
      self->vars[1];
    VWORD _arg2 = 
      self->vars[2];
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
void _V50_V0vanity_V0list_V0lset__diff_Pintersection_B_V0k15(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0lset__diff_Pintersection_B_V0k15, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%r.1929) ((##vcore.not (bruijn ##.%x.816 1 0))) ((bruijn ##.%k.815 2 0) (bruijn ##.%r.1929 0 0)))
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
void _V50_V0vanity_V0list_V0lset__diff_Pintersection_B_V0lambda4(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0lset__diff_Pintersection_B_V0lambda4, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.member.34 6 30) (bruijn ##.%k.817 0 0) (bruijn ##.elt.204 1 1) (bruijn ##.lis.205 0 1) (bruijn ##.=.201 4 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 30)), 4,
      _var0,
      statics->vars[1],
      _var1,
      statics->up->up->up->vars[1]);
}
void _V50_V0vanity_V0list_V0lset__diff_Pintersection_B_V0lambda3(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0lset__diff_Pintersection_B_V0lambda3, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (##qualified-call (vanity list any) #t (bruijn ##.any.96 4 27) (close _V50_V0vanity_V0list_V0lset__diff_Pintersection_B_V0k15) (close _V50_V0vanity_V0list_V0lset__diff_Pintersection_B_V0lambda4) (bruijn ##.lists.203 3 3))
  {
   VEnv * _closure_env = _V60_V0vanity_V0list;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0lset__diff_Pintersection_B_V0k15, self))));
    VWORD _arg1 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0lset__diff_Pintersection_B_V0lambda4, self))));
    VWORD _arg2 = 
      statics->up->up->vars[3];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0any, _V60_V0vanity_V0list)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0list_V0any(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0list_V0lset__diff_Pintersection_B_V0k14(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0lset__diff_Pintersection_B_V0k14, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.814 0 0) ((bruijn ##.values.5 4 1) (bruijn ##.%k.812 2 0) '() (bruijn ##.lis1.202 2 2)) (##qualified-call (vanity list partition!) #t (bruijn ##.partition!.114 3 45) (bruijn ##.%k.812 2 0) (close _V50_V0vanity_V0list_V0lset__diff_Pintersection_B_V0lambda3) (bruijn ##.lis1.202 2 2)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[1]), 3,
      statics->up->vars[0],
      VNULL,
      statics->up->vars[2]);
} else {
  {
   VEnv * _closure_env = _V60_V0vanity_V0list;
    VWORD _arg0 = 
      statics->up->vars[0];
    VWORD _arg1 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0lset__diff_Pintersection_B_V0lambda3, self))));
    VWORD _arg2 = 
      statics->up->vars[2];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0partition_B, _V60_V0vanity_V0list)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0list_V0partition_B(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
}
void _V50_V0vanity_V0list_V0lset__diff_Pintersection_B_V0k13(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0lset__diff_Pintersection_B_V0k13, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.813 0 0) ((bruijn ##.values.5 3 1) (bruijn ##.%k.812 1 0) (bruijn ##.lis1.202 1 2) '()) ((bruijn ##.memq.29 3 25) (close _V50_V0vanity_V0list_V0lset__diff_Pintersection_B_V0k14) (bruijn ##.lis1.202 1 2) (bruijn ##.lists.203 1 3)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[1]), 3,
      statics->vars[0],
      statics->vars[2],
      VNULL);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[25]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0lset__diff_Pintersection_B_V0k14, self)))),
      statics->vars[2],
      statics->vars[3]);
}
}
static void _V50_V0vanity_V0list_V0lset__diff_Pintersection_B_V0k12(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##qualified-call (vanity list every) #t (bruijn ##.every.95 1 26) (close _V50_V0vanity_V0list_V0lset__diff_Pintersection_B_V0k13) (bruijn ##.null-list?.169 1 100) (bruijn ##.lists.203 0 3))
  {
   VEnv * _closure_env = _V60_V0vanity_V0list;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0lset__diff_Pintersection_B_V0k13, self))));
    VWORD _arg1 = 
      statics->vars[100];
    VWORD _arg2 = 
      self->vars[3];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0every, _V60_V0vanity_V0list)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0list_V0every(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0list_V0lset__diff_Pintersection_B(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, ...) {
 if(argc < 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0lset__diff_Pintersection_B, got ~D~N"
  "-- expected 3 or more~N"
  , argc);
 }
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 3, argc, _var2);
  struct { VEnv self; VWORD argv[4]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 4, 4, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _varargs;
  // (##qualified-call (vanity list check-arg) #t (bruijn ##.check-arg.149 1 80) (close _V50_V0vanity_V0list_V0lset__diff_Pintersection_B_V0k12) (##intrinsic ##vcore.procedure?) (bruijn ##.=.201 0 1) (bruijn ##.lset-diff+intersection!.74 1 5))
  {
   VEnv * _closure_env = _V60_V0vanity_V0list;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0lset__diff_Pintersection_B_V0k12, self))));
    VWORD _arg1 = 
      _V40_V10vcore_Dprocedure_Q;
    VWORD _arg2 = 
      _var1;
    VWORD _arg3 = 
      statics->vars[5];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0check__arg, _V60_V0vanity_V0list)}, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0list_V0check__arg(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0list_V0lset__diff_Pintersection_V0k19(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0lset__diff_Pintersection_V0k19, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%r.1930) ((##vcore.not (bruijn ##.%x.822 1 0))) ((bruijn ##.%k.821 2 0) (bruijn ##.%r.1930 0 0)))
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
void _V50_V0vanity_V0list_V0lset__diff_Pintersection_V0lambda6(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0lset__diff_Pintersection_V0lambda6, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.member.34 6 30) (bruijn ##.%k.823 0 0) (bruijn ##.elt.209 1 1) (bruijn ##.lis.210 0 1) (bruijn ##.=.206 4 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 30)), 4,
      _var0,
      statics->vars[1],
      _var1,
      statics->up->up->up->vars[1]);
}
void _V50_V0vanity_V0list_V0lset__diff_Pintersection_V0lambda5(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0lset__diff_Pintersection_V0lambda5, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (##qualified-call (vanity list any) #t (bruijn ##.any.96 4 27) (close _V50_V0vanity_V0list_V0lset__diff_Pintersection_V0k19) (close _V50_V0vanity_V0list_V0lset__diff_Pintersection_V0lambda6) (bruijn ##.lists.208 3 3))
  {
   VEnv * _closure_env = _V60_V0vanity_V0list;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0lset__diff_Pintersection_V0k19, self))));
    VWORD _arg1 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0lset__diff_Pintersection_V0lambda6, self))));
    VWORD _arg2 = 
      statics->up->up->vars[3];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0any, _V60_V0vanity_V0list)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0list_V0any(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0list_V0lset__diff_Pintersection_V0k18(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0lset__diff_Pintersection_V0k18, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.820 0 0) ((bruijn ##.values.5 4 1) (bruijn ##.%k.818 2 0) '() (bruijn ##.lis1.207 2 2)) (##qualified-call (vanity list partition) #t (bruijn ##.partition.115 3 46) (bruijn ##.%k.818 2 0) (close _V50_V0vanity_V0list_V0lset__diff_Pintersection_V0lambda5) (bruijn ##.lis1.207 2 2)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[1]), 3,
      statics->up->vars[0],
      VNULL,
      statics->up->vars[2]);
} else {
  {
   VEnv * _closure_env = _V60_V0vanity_V0list;
    VWORD _arg0 = 
      statics->up->vars[0];
    VWORD _arg1 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0lset__diff_Pintersection_V0lambda5, self))));
    VWORD _arg2 = 
      statics->up->vars[2];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0partition, _V60_V0vanity_V0list)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0list_V0partition(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
}
void _V50_V0vanity_V0list_V0lset__diff_Pintersection_V0k17(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0lset__diff_Pintersection_V0k17, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.819 0 0) ((bruijn ##.values.5 3 1) (bruijn ##.%k.818 1 0) (bruijn ##.lis1.207 1 2) '()) ((bruijn ##.memq.29 3 25) (close _V50_V0vanity_V0list_V0lset__diff_Pintersection_V0k18) (bruijn ##.lis1.207 1 2) (bruijn ##.lists.208 1 3)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[1]), 3,
      statics->vars[0],
      statics->vars[2],
      VNULL);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[25]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0lset__diff_Pintersection_V0k18, self)))),
      statics->vars[2],
      statics->vars[3]);
}
}
static void _V50_V0vanity_V0list_V0lset__diff_Pintersection_V0k16(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##qualified-call (vanity list every) #t (bruijn ##.every.95 1 26) (close _V50_V0vanity_V0list_V0lset__diff_Pintersection_V0k17) (bruijn ##.null-list?.169 1 100) (bruijn ##.lists.208 0 3))
  {
   VEnv * _closure_env = _V60_V0vanity_V0list;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0lset__diff_Pintersection_V0k17, self))));
    VWORD _arg1 = 
      statics->vars[100];
    VWORD _arg2 = 
      self->vars[3];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0every, _V60_V0vanity_V0list)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0list_V0every(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0list_V0lset__diff_Pintersection(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, ...) {
 if(argc < 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0lset__diff_Pintersection, got ~D~N"
  "-- expected 3 or more~N"
  , argc);
 }
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 3, argc, _var2);
  struct { VEnv self; VWORD argv[4]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 4, 4, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _varargs;
  // (##qualified-call (vanity list check-arg) #t (bruijn ##.check-arg.149 1 80) (close _V50_V0vanity_V0list_V0lset__diff_Pintersection_V0k16) (##intrinsic ##vcore.procedure?) (bruijn ##.=.206 0 1) (bruijn ##.lset-diff+intersection.75 1 6))
  {
   VEnv * _closure_env = _V60_V0vanity_V0list;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0lset__diff_Pintersection_V0k16, self))));
    VWORD _arg1 = 
      _V40_V10vcore_Dprocedure_Q;
    VWORD _arg2 = 
      _var1;
    VWORD _arg3 = 
      statics->vars[6];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0check__arg, _V60_V0vanity_V0list)}, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0list_V0check__arg(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0list_V0lset__xor_B_V0lambda8(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0lset__xor_B_V0lambda8, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity list lset-diff+intersection!) #t (bruijn ##.lset-diff+intersection!.74 3 5) (bruijn ##.%k.826 0 0) (bruijn ##.=.211 2 1) (bruijn ##.a.214 1 2) (bruijn ##.b.213 1 1))
  {
   VEnv * _closure_env = _V60_V0vanity_V0list;
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      statics->up->vars[1];
    VWORD _arg2 = 
      statics->vars[2];
    VWORD _arg3 = 
      statics->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0lset__diff_Pintersection_B, _V60_V0vanity_V0list)}, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0list_V0lset__diff_Pintersection_B(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
static void _V50_V0vanity_V0list_V0lset__xor_B_V0k22(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.%k.830 2 0) (bruijn ##.b-pair.217 2 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      statics->up->vars[1]);
}
void _V50_V0vanity_V0list_V0lset__xor_B_V0k21(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0lset__xor_B_V0k21, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.831 0 0) ((bruijn ##.%k.830 2 0) (bruijn ##.ans.218 2 2)) (##vcore.set-cdr! (close _V50_V0vanity_V0list_V0lset__xor_B_V0k22) (bruijn ##.b-pair.217 2 1) (bruijn ##.ans.218 2 2)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      statics->up->vars[2]);
} else {
    VCallFuncWithGC(runtime, (VFunc)VSetCdr2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0lset__xor_B_V0k22, self)))),
      statics->up->vars[1],
      statics->up->vars[2]);
}
}
void _V50_V0vanity_V0list_V0lset__xor_B_V0lambda10(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0lset__xor_B_V0lambda10, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 1 1 (##.%x.1933) ((##vcore.car (bruijn ##.b-pair.217 1 1))) ((bruijn ##.member.34 8 30) (close _V50_V0vanity_V0list_V0lset__xor_B_V0k21) (bruijn ##.%x.1933 0 0) (bruijn ##.a-int-b.216 4 2) (bruijn ##.=.211 6 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 30)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0lset__xor_B_V0k21, self)))),
      self->vars[0],
      statics->up->up->up->vars[2],
      VGetArg(statics, 6-1, 1));
    }
}
void _V50_V0vanity_V0list_V0lset__xor_B_V0lambda9(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0lset__xor_B_V0lambda9, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 1 1 (##.%p.1931) ((##vcore.null? (bruijn ##.a-b.215 1 1))) (if (bruijn ##.%p.1931 0 0) (##qualified-call (vanity list lset-difference!) #t (bruijn ##.lset-difference!.78 4 9) (bruijn ##.%k.827 1 0) (bruijn ##.=.211 3 1) (bruijn ##.b.213 2 1) (bruijn ##.a.214 2 2)) (basic-block 1 1 (##.%p.1932) ((##vcore.null? (bruijn ##.a-int-b.216 2 2))) (if (bruijn ##.%p.1932 0 0) (##qualified-call (vanity list append!) #t (bruijn ##.append!.143 5 74) (bruijn ##.%k.827 2 0) (bruijn ##.b.213 3 1) (bruijn ##.a.214 3 2)) (##qualified-call (vanity list pair-fold) #t (bruijn ##.pair-fold.122 5 53) (bruijn ##.%k.827 2 0) (close _V50_V0vanity_V0list_V0lset__xor_B_V0lambda10) (bruijn ##.a-b.215 2 1) (bruijn ##.b.213 3 1))))))
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
   VEnv * _closure_env = _V60_V0vanity_V0list;
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      statics->up->up->vars[1];
    VWORD _arg2 = 
      statics->up->vars[1];
    VWORD _arg3 = 
      statics->up->vars[2];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0lset__difference_B, _V60_V0vanity_V0list)}, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0list_V0lset__difference_B(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VNullP2(runtime, NULL,
      statics->up->vars[2]);
if(VDecodeBool(
self->vars[0])) {
  {
   VEnv * _closure_env = _V60_V0vanity_V0list;
    VWORD _arg0 = 
      statics->up->vars[0];
    VWORD _arg1 = 
      statics->up->up->vars[1];
    VWORD _arg2 = 
      statics->up->up->vars[2];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0append_B, _V60_V0vanity_V0list)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0list_V0append_B(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
} else {
  {
   VEnv * _closure_env = _V60_V0vanity_V0list;
    VWORD _arg0 = 
      statics->up->vars[0];
    VWORD _arg1 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0lset__xor_B_V0lambda10, self))));
    VWORD _arg2 = 
      statics->up->vars[1];
    VWORD _arg3 = 
      statics->up->up->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0pair__fold, _V60_V0vanity_V0list)}, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0list_V0pair__fold(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
    }
}
    }
}
void _V50_V0vanity_V0list_V0lset__xor_B_V0lambda7(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0lset__xor_B_V0lambda7, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (##vcore.call-with-values (bruijn ##.%k.825 0 0) (close _V50_V0vanity_V0list_V0lset__xor_B_V0lambda8) (close _V50_V0vanity_V0list_V0lset__xor_B_V0lambda9))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0lset__xor_B_V0lambda8, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0lset__xor_B_V0lambda9, self)))));
}
static void _V50_V0vanity_V0list_V0lset__xor_B_V0k20(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##qualified-call (vanity list reduce) #t (bruijn ##.reduce.121 1 52) (bruijn ##.%k.824 0 0) (close _V50_V0vanity_V0list_V0lset__xor_B_V0lambda7) '() (bruijn ##.lists.212 0 2))
  {
   VEnv * _closure_env = _V60_V0vanity_V0list;
    VWORD _arg0 = 
      self->vars[0];
    VWORD _arg1 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0lset__xor_B_V0lambda7, self))));
    VWORD _arg2 = 
      VNULL;
    VWORD _arg3 = 
      self->vars[2];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0reduce, _V60_V0vanity_V0list)}, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0list_V0reduce(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0list_V0lset__xor_B(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, ...) {
 if(argc < 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0lset__xor_B, got ~D~N"
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
  // (##qualified-call (vanity list check-arg) #t (bruijn ##.check-arg.149 1 80) (close _V50_V0vanity_V0list_V0lset__xor_B_V0k20) (##intrinsic ##vcore.procedure?) (bruijn ##.=.211 0 1) (bruijn ##.lset-xor!.76 1 7))
  {
   VEnv * _closure_env = _V60_V0vanity_V0list;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0lset__xor_B_V0k20, self))));
    VWORD _arg1 = 
      _V40_V10vcore_Dprocedure_Q;
    VWORD _arg2 = 
      _var1;
    VWORD _arg3 = 
      statics->vars[7];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0check__arg, _V60_V0vanity_V0list)}, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0list_V0check__arg(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0list_V0lset__xor_V0lambda12(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0lset__xor_V0lambda12, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity list lset-diff+intersection) #t (bruijn ##.lset-diff+intersection.75 3 6) (bruijn ##.%k.835 0 0) (bruijn ##.=.219 2 1) (bruijn ##.a.222 1 2) (bruijn ##.b.221 1 1))
  {
   VEnv * _closure_env = _V60_V0vanity_V0list;
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      statics->up->vars[1];
    VWORD _arg2 = 
      statics->vars[2];
    VWORD _arg3 = 
      statics->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0lset__diff_Pintersection, _V60_V0vanity_V0list)}, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0list_V0lset__diff_Pintersection(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0list_V0lset__xor_V0k24(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0lset__xor_V0k24, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.840 0 0) ((bruijn ##.%k.839 1 0) (bruijn ##.ans.226 1 2)) (basic-block 1 1 (##.%r.1936) ((##vcore.cons (bruijn ##.xb.225 2 1) (bruijn ##.ans.226 2 2))) ((bruijn ##.%k.839 2 0) (bruijn ##.%r.1936 0 0))))
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
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[1],
      statics->up->vars[2]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      self->vars[0]);
    }
}
}
void _V50_V0vanity_V0list_V0lset__xor_V0lambda14(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0lset__xor_V0lambda14, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((bruijn ##.member.34 7 30) (close _V50_V0vanity_V0list_V0lset__xor_V0k24) (bruijn ##.xb.225 0 1) (bruijn ##.a-int-b.224 3 2) (bruijn ##.=.219 5 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 30)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0lset__xor_V0k24, self)))),
      _var1,
      statics->up->up->vars[2],
      VGetArg(statics, 5-1, 1));
}
void _V50_V0vanity_V0list_V0lset__xor_V0lambda13(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0lset__xor_V0lambda13, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 1 1 (##.%p.1934) ((##vcore.null? (bruijn ##.a-b.223 1 1))) (if (bruijn ##.%p.1934 0 0) (##qualified-call (vanity list lset-difference) #t (bruijn ##.lset-difference.79 4 10) (bruijn ##.%k.836 1 0) (bruijn ##.=.219 3 1) (bruijn ##.b.221 2 1) (bruijn ##.a.222 2 2)) (basic-block 1 1 (##.%p.1935) ((##vcore.null? (bruijn ##.a-int-b.224 2 2))) (if (bruijn ##.%p.1935 0 0) ((bruijn ##.append.26 6 22) (bruijn ##.%k.836 2 0) (bruijn ##.b.221 3 1) (bruijn ##.a.222 3 2)) (##qualified-call (vanity list fold) #t (bruijn ##.fold.127 5 58) (bruijn ##.%k.836 2 0) (close _V50_V0vanity_V0list_V0lset__xor_V0lambda14) (bruijn ##.a-b.223 2 1) (bruijn ##.b.221 3 1))))))
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
   VEnv * _closure_env = _V60_V0vanity_V0list;
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      statics->up->up->vars[1];
    VWORD _arg2 = 
      statics->up->vars[1];
    VWORD _arg3 = 
      statics->up->vars[2];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0lset__difference, _V60_V0vanity_V0list)}, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0list_V0lset__difference(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VNullP2(runtime, NULL,
      statics->up->vars[2]);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 22)), 3,
      statics->up->vars[0],
      statics->up->up->vars[1],
      statics->up->up->vars[2]);
} else {
  {
   VEnv * _closure_env = _V60_V0vanity_V0list;
    VWORD _arg0 = 
      statics->up->vars[0];
    VWORD _arg1 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0lset__xor_V0lambda14, self))));
    VWORD _arg2 = 
      statics->up->vars[1];
    VWORD _arg3 = 
      statics->up->up->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0fold, _V60_V0vanity_V0list)}, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0list_V0fold(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
    }
}
    }
}
void _V50_V0vanity_V0list_V0lset__xor_V0lambda11(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0lset__xor_V0lambda11, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (##vcore.call-with-values (bruijn ##.%k.834 0 0) (close _V50_V0vanity_V0list_V0lset__xor_V0lambda12) (close _V50_V0vanity_V0list_V0lset__xor_V0lambda13))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0lset__xor_V0lambda12, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0lset__xor_V0lambda13, self)))));
}
static void _V50_V0vanity_V0list_V0lset__xor_V0k23(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##qualified-call (vanity list reduce) #t (bruijn ##.reduce.121 1 52) (bruijn ##.%k.833 0 0) (close _V50_V0vanity_V0list_V0lset__xor_V0lambda11) '() (bruijn ##.lists.220 0 2))
  {
   VEnv * _closure_env = _V60_V0vanity_V0list;
    VWORD _arg0 = 
      self->vars[0];
    VWORD _arg1 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0lset__xor_V0lambda11, self))));
    VWORD _arg2 = 
      VNULL;
    VWORD _arg3 = 
      self->vars[2];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0reduce, _V60_V0vanity_V0list)}, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0list_V0reduce(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0list_V0lset__xor(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, ...) {
 if(argc < 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0lset__xor, got ~D~N"
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
  // (##qualified-call (vanity list check-arg) #t (bruijn ##.check-arg.149 1 80) (close _V50_V0vanity_V0list_V0lset__xor_V0k23) (##intrinsic ##vcore.procedure?) (bruijn ##.=.219 0 1) (bruijn ##.lset-xor.77 1 8))
  {
   VEnv * _closure_env = _V60_V0vanity_V0list;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0lset__xor_V0k23, self))));
    VWORD _arg1 = 
      _V40_V10vcore_Dprocedure_Q;
    VWORD _arg2 = 
      _var1;
    VWORD _arg3 = 
      statics->vars[8];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0check__arg, _V60_V0vanity_V0list)}, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0list_V0check__arg(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0list_V0lset__difference_B_V0k28(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0lset__difference_B_V0k28, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%r.1938) ((##vcore.not (bruijn ##.%x.846 1 0))) ((bruijn ##.%k.845 2 0) (bruijn ##.%r.1938 0 0)))
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
void _V50_V0vanity_V0list_V0lset__difference_B_V0lambda16(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0lset__difference_B_V0lambda16, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.member.34 7 30) (close _V50_V0vanity_V0list_V0lset__difference_B_V0k28) (bruijn ##.x.231 1 1) (bruijn ##.lis.232 0 1) (bruijn ##.=.227 5 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 30)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0lset__difference_B_V0k28, self)))),
      statics->vars[1],
      _var1,
      VGetArg(statics, 5-1, 1));
}
void _V50_V0vanity_V0list_V0lset__difference_B_V0lambda15(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0lset__difference_B_V0lambda15, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (##qualified-call (vanity list every) #t (bruijn ##.every.95 5 26) (bruijn ##.%k.844 0 0) (close _V50_V0vanity_V0list_V0lset__difference_B_V0lambda16) (bruijn ##.lists.230 3 0))
  {
   VEnv * _closure_env = _V60_V0vanity_V0list;
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0lset__difference_B_V0lambda16, self))));
    VWORD _arg2 = 
      statics->up->up->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0every, _V60_V0vanity_V0list)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0list_V0every(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0list_V0lset__difference_B_V0k27(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0lset__difference_B_V0k27, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.843 0 0) ((bruijn ##.%k.841 3 0) '()) (##qualified-call (vanity list filter!) #t (bruijn ##.filter!.116 4 47) (bruijn ##.%k.841 3 0) (close _V50_V0vanity_V0list_V0lset__difference_B_V0lambda15) (bruijn ##.lis1.228 3 2)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VNULL);
} else {
  {
   VEnv * _closure_env = _V60_V0vanity_V0list;
    VWORD _arg0 = 
      statics->up->up->vars[0];
    VWORD _arg1 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0lset__difference_B_V0lambda15, self))));
    VWORD _arg2 = 
      statics->up->up->vars[2];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0filter_B, _V60_V0vanity_V0list)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0list_V0filter_B(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
}
void _V50_V0vanity_V0list_V0lset__difference_B_V0k26(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0lset__difference_B_V0k26, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%p.1937) ((##vcore.null? (bruijn ##.lists.230 1 0))) (if (bruijn ##.%p.1937 0 0) ((bruijn ##.%k.841 2 0) (bruijn ##.lis1.228 2 2)) ((bruijn ##.memq.29 4 25) (close _V50_V0vanity_V0list_V0lset__difference_B_V0k27) (bruijn ##.lis1.228 2 2) (bruijn ##.lists.230 1 0))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VNullP2(runtime, NULL,
      statics->vars[0]);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      statics->up->vars[2]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[25]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0lset__difference_B_V0k27, self)))),
      statics->up->vars[2],
      statics->vars[0]);
}
    }
}
static void _V50_V0vanity_V0list_V0lset__difference_B_V0k25(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##qualified-call (vanity list filter) #t (bruijn ##.filter.117 1 48) (close _V50_V0vanity_V0list_V0lset__difference_B_V0k26) (##intrinsic ##vcore.pair?) (bruijn ##.lists.229 0 3))
  {
   VEnv * _closure_env = _V60_V0vanity_V0list;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0lset__difference_B_V0k26, self))));
    VWORD _arg1 = 
      _V40_V10vcore_Dpair_Q;
    VWORD _arg2 = 
      self->vars[3];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0filter, _V60_V0vanity_V0list)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0list_V0filter(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0list_V0lset__difference_B(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, ...) {
 if(argc < 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0lset__difference_B, got ~D~N"
  "-- expected 3 or more~N"
  , argc);
 }
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 3, argc, _var2);
  struct { VEnv self; VWORD argv[4]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 4, 4, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _varargs;
  // (##qualified-call (vanity list check-arg) #t (bruijn ##.check-arg.149 1 80) (close _V50_V0vanity_V0list_V0lset__difference_B_V0k25) (##intrinsic ##vcore.procedure?) (bruijn ##.=.227 0 1) (bruijn ##.lset-difference!.78 1 9))
  {
   VEnv * _closure_env = _V60_V0vanity_V0list;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0lset__difference_B_V0k25, self))));
    VWORD _arg1 = 
      _V40_V10vcore_Dprocedure_Q;
    VWORD _arg2 = 
      _var1;
    VWORD _arg3 = 
      statics->vars[9];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0check__arg, _V60_V0vanity_V0list)}, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0list_V0check__arg(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0list_V0lset__difference_V0k32(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0lset__difference_V0k32, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%r.1940) ((##vcore.not (bruijn ##.%x.852 1 0))) ((bruijn ##.%k.851 2 0) (bruijn ##.%r.1940 0 0)))
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
void _V50_V0vanity_V0list_V0lset__difference_V0lambda18(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0lset__difference_V0lambda18, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.member.34 7 30) (close _V50_V0vanity_V0list_V0lset__difference_V0k32) (bruijn ##.x.237 1 1) (bruijn ##.lis.238 0 1) (bruijn ##.=.233 5 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 30)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0lset__difference_V0k32, self)))),
      statics->vars[1],
      _var1,
      VGetArg(statics, 5-1, 1));
}
void _V50_V0vanity_V0list_V0lset__difference_V0lambda17(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0lset__difference_V0lambda17, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (##qualified-call (vanity list every) #t (bruijn ##.every.95 5 26) (bruijn ##.%k.850 0 0) (close _V50_V0vanity_V0list_V0lset__difference_V0lambda18) (bruijn ##.lists.236 3 0))
  {
   VEnv * _closure_env = _V60_V0vanity_V0list;
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0lset__difference_V0lambda18, self))));
    VWORD _arg2 = 
      statics->up->up->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0every, _V60_V0vanity_V0list)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0list_V0every(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0list_V0lset__difference_V0k31(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0lset__difference_V0k31, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.849 0 0) ((bruijn ##.%k.847 3 0) '()) (##qualified-call (vanity list filter) #t (bruijn ##.filter.117 4 48) (bruijn ##.%k.847 3 0) (close _V50_V0vanity_V0list_V0lset__difference_V0lambda17) (bruijn ##.lis1.234 3 2)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VNULL);
} else {
  {
   VEnv * _closure_env = _V60_V0vanity_V0list;
    VWORD _arg0 = 
      statics->up->up->vars[0];
    VWORD _arg1 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0lset__difference_V0lambda17, self))));
    VWORD _arg2 = 
      statics->up->up->vars[2];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0filter, _V60_V0vanity_V0list)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0list_V0filter(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
}
void _V50_V0vanity_V0list_V0lset__difference_V0k30(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0lset__difference_V0k30, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%p.1939) ((##vcore.null? (bruijn ##.lists.236 1 0))) (if (bruijn ##.%p.1939 0 0) ((bruijn ##.%k.847 2 0) (bruijn ##.lis1.234 2 2)) ((bruijn ##.memq.29 4 25) (close _V50_V0vanity_V0list_V0lset__difference_V0k31) (bruijn ##.lis1.234 2 2) (bruijn ##.lists.236 1 0))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VNullP2(runtime, NULL,
      statics->vars[0]);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      statics->up->vars[2]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[25]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0lset__difference_V0k31, self)))),
      statics->up->vars[2],
      statics->vars[0]);
}
    }
}
static void _V50_V0vanity_V0list_V0lset__difference_V0k29(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##qualified-call (vanity list filter) #t (bruijn ##.filter.117 1 48) (close _V50_V0vanity_V0list_V0lset__difference_V0k30) (##intrinsic ##vcore.pair?) (bruijn ##.lists.235 0 3))
  {
   VEnv * _closure_env = _V60_V0vanity_V0list;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0lset__difference_V0k30, self))));
    VWORD _arg1 = 
      _V40_V10vcore_Dpair_Q;
    VWORD _arg2 = 
      self->vars[3];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0filter, _V60_V0vanity_V0list)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0list_V0filter(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0list_V0lset__difference(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, ...) {
 if(argc < 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0lset__difference, got ~D~N"
  "-- expected 3 or more~N"
  , argc);
 }
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 3, argc, _var2);
  struct { VEnv self; VWORD argv[4]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 4, 4, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _varargs;
  // (##qualified-call (vanity list check-arg) #t (bruijn ##.check-arg.149 1 80) (close _V50_V0vanity_V0list_V0lset__difference_V0k29) (##intrinsic ##vcore.procedure?) (bruijn ##.=.233 0 1) (bruijn ##.lset-difference.79 1 10))
  {
   VEnv * _closure_env = _V60_V0vanity_V0list;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0lset__difference_V0k29, self))));
    VWORD _arg1 = 
      _V40_V10vcore_Dprocedure_Q;
    VWORD _arg2 = 
      _var1;
    VWORD _arg3 = 
      statics->vars[10];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0check__arg, _V60_V0vanity_V0list)}, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0list_V0check__arg(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0list_V0lset__intersection_B_V0lambda20(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0lset__intersection_B_V0lambda20, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.member.34 7 30) (bruijn ##.%k.857 0 0) (bruijn ##.x.243 1 1) (bruijn ##.lis.244 0 1) (bruijn ##.=.239 5 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 30)), 4,
      _var0,
      statics->vars[1],
      _var1,
      VGetArg(statics, 5-1, 1));
}
void _V50_V0vanity_V0list_V0lset__intersection_B_V0lambda19(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0lset__intersection_B_V0lambda19, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (##qualified-call (vanity list every) #t (bruijn ##.every.95 5 26) (bruijn ##.%k.856 0 0) (close _V50_V0vanity_V0list_V0lset__intersection_B_V0lambda20) (bruijn ##.lists.242 3 0))
  {
   VEnv * _closure_env = _V60_V0vanity_V0list;
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0lset__intersection_B_V0lambda20, self))));
    VWORD _arg2 = 
      statics->up->up->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0every, _V60_V0vanity_V0list)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0list_V0every(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0list_V0lset__intersection_B_V0k35(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0lset__intersection_B_V0k35, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.854 0 0) ((bruijn ##.%k.853 2 0) '()) (basic-block 1 1 (##.%p.1941) ((##vcore.null? (bruijn ##.lists.242 2 0))) (if (bruijn ##.%p.1941 0 0) ((bruijn ##.%k.853 3 0) (bruijn ##.lis1.240 3 2)) (##qualified-call (vanity list filter!) #t (bruijn ##.filter!.116 4 47) (bruijn ##.%k.853 3 0) (close _V50_V0vanity_V0list_V0lset__intersection_B_V0lambda19) (bruijn ##.lis1.240 3 2)))))
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
    self->vars[0] = _VBasic_VNullP2(runtime, NULL,
      statics->up->vars[0]);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      statics->up->up->vars[2]);
} else {
  {
   VEnv * _closure_env = _V60_V0vanity_V0list;
    VWORD _arg0 = 
      statics->up->up->vars[0];
    VWORD _arg1 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0lset__intersection_B_V0lambda19, self))));
    VWORD _arg2 = 
      statics->up->up->vars[2];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0filter_B, _V60_V0vanity_V0list)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0list_V0filter_B(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
    }
}
}
void _V50_V0vanity_V0list_V0lset__intersection_B_V0k34(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0lset__intersection_B_V0k34, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity list any) #t (bruijn ##.any.96 2 27) (close _V50_V0vanity_V0list_V0lset__intersection_B_V0k35) (bruijn ##.null-list?.169 2 100) (bruijn ##.lists.242 0 0))
  {
   VEnv * _closure_env = _V60_V0vanity_V0list;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0lset__intersection_B_V0k35, self))));
    VWORD _arg1 = 
      statics->up->vars[100];
    VWORD _arg2 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0any, _V60_V0vanity_V0list)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0list_V0any(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
static void _V50_V0vanity_V0list_V0lset__intersection_B_V0k33(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##qualified-call (vanity list delete) #t (bruijn ##.delete.108 1 39) (close _V50_V0vanity_V0list_V0lset__intersection_B_V0k34) (bruijn ##.lis1.240 0 2) (bruijn ##.lists.241 0 3) (##intrinsic ##vcore.eq?))
  {
   VEnv * _closure_env = _V60_V0vanity_V0list;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0lset__intersection_B_V0k34, self))));
    VWORD _arg1 = 
      self->vars[2];
    VWORD _arg2 = 
      self->vars[3];
    VWORD _arg3 = 
      _V40_V10vcore_Deq_Q;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0delete, _V60_V0vanity_V0list)}, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0list_V0delete(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0list_V0lset__intersection_B(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, ...) {
 if(argc < 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0lset__intersection_B, got ~D~N"
  "-- expected 3 or more~N"
  , argc);
 }
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 3, argc, _var2);
  struct { VEnv self; VWORD argv[4]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 4, 4, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _varargs;
  // (##qualified-call (vanity list check-arg) #t (bruijn ##.check-arg.149 1 80) (close _V50_V0vanity_V0list_V0lset__intersection_B_V0k33) (##intrinsic ##vcore.procedure?) (bruijn ##.=.239 0 1) (bruijn ##.lset-intersection!.80 1 11))
  {
   VEnv * _closure_env = _V60_V0vanity_V0list;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0lset__intersection_B_V0k33, self))));
    VWORD _arg1 = 
      _V40_V10vcore_Dprocedure_Q;
    VWORD _arg2 = 
      _var1;
    VWORD _arg3 = 
      statics->vars[11];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0check__arg, _V60_V0vanity_V0list)}, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0list_V0check__arg(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0list_V0lset__intersection_V0lambda22(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0lset__intersection_V0lambda22, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.member.34 7 30) (bruijn ##.%k.862 0 0) (bruijn ##.x.249 1 1) (bruijn ##.lis.250 0 1) (bruijn ##.=.245 5 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 30)), 4,
      _var0,
      statics->vars[1],
      _var1,
      VGetArg(statics, 5-1, 1));
}
void _V50_V0vanity_V0list_V0lset__intersection_V0lambda21(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0lset__intersection_V0lambda21, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (##qualified-call (vanity list every) #t (bruijn ##.every.95 5 26) (bruijn ##.%k.861 0 0) (close _V50_V0vanity_V0list_V0lset__intersection_V0lambda22) (bruijn ##.lists.248 3 0))
  {
   VEnv * _closure_env = _V60_V0vanity_V0list;
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0lset__intersection_V0lambda22, self))));
    VWORD _arg2 = 
      statics->up->up->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0every, _V60_V0vanity_V0list)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0list_V0every(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0list_V0lset__intersection_V0k38(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0lset__intersection_V0k38, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.859 0 0) ((bruijn ##.%k.858 2 0) '()) (basic-block 1 1 (##.%p.1942) ((##vcore.null? (bruijn ##.lists.248 2 0))) (if (bruijn ##.%p.1942 0 0) ((bruijn ##.%k.858 3 0) (bruijn ##.lis1.246 3 2)) (##qualified-call (vanity list filter) #t (bruijn ##.filter.117 4 48) (bruijn ##.%k.858 3 0) (close _V50_V0vanity_V0list_V0lset__intersection_V0lambda21) (bruijn ##.lis1.246 3 2)))))
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
    self->vars[0] = _VBasic_VNullP2(runtime, NULL,
      statics->up->vars[0]);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      statics->up->up->vars[2]);
} else {
  {
   VEnv * _closure_env = _V60_V0vanity_V0list;
    VWORD _arg0 = 
      statics->up->up->vars[0];
    VWORD _arg1 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0lset__intersection_V0lambda21, self))));
    VWORD _arg2 = 
      statics->up->up->vars[2];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0filter, _V60_V0vanity_V0list)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0list_V0filter(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
    }
}
}
void _V50_V0vanity_V0list_V0lset__intersection_V0k37(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0lset__intersection_V0k37, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity list any) #t (bruijn ##.any.96 2 27) (close _V50_V0vanity_V0list_V0lset__intersection_V0k38) (bruijn ##.null-list?.169 2 100) (bruijn ##.lists.248 0 0))
  {
   VEnv * _closure_env = _V60_V0vanity_V0list;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0lset__intersection_V0k38, self))));
    VWORD _arg1 = 
      statics->up->vars[100];
    VWORD _arg2 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0any, _V60_V0vanity_V0list)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0list_V0any(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
static void _V50_V0vanity_V0list_V0lset__intersection_V0k36(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##qualified-call (vanity list delete) #t (bruijn ##.delete.108 1 39) (close _V50_V0vanity_V0list_V0lset__intersection_V0k37) (bruijn ##.lis1.246 0 2) (bruijn ##.lists.247 0 3) (##intrinsic ##vcore.eq?))
  {
   VEnv * _closure_env = _V60_V0vanity_V0list;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0lset__intersection_V0k37, self))));
    VWORD _arg1 = 
      self->vars[2];
    VWORD _arg2 = 
      self->vars[3];
    VWORD _arg3 = 
      _V40_V10vcore_Deq_Q;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0delete, _V60_V0vanity_V0list)}, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0list_V0delete(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0list_V0lset__intersection(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, ...) {
 if(argc < 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0lset__intersection, got ~D~N"
  "-- expected 3 or more~N"
  , argc);
 }
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 3, argc, _var2);
  struct { VEnv self; VWORD argv[4]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 4, 4, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _varargs;
  // (##qualified-call (vanity list check-arg) #t (bruijn ##.check-arg.149 1 80) (close _V50_V0vanity_V0list_V0lset__intersection_V0k36) (##intrinsic ##vcore.procedure?) (bruijn ##.=.245 0 1) (bruijn ##.lset-intersection.81 1 12))
  {
   VEnv * _closure_env = _V60_V0vanity_V0list;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0lset__intersection_V0k36, self))));
    VWORD _arg1 = 
      _V40_V10vcore_Dprocedure_Q;
    VWORD _arg2 = 
      _var1;
    VWORD _arg3 = 
      statics->vars[12];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0check__arg, _V60_V0vanity_V0list)}, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0list_V0check__arg(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
static void _V50_V0vanity_V0list_V0lset__union_B_V0k41(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.%k.868 2 0) (bruijn ##.pair.255 2 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      statics->up->vars[1]);
}
void _V50_V0vanity_V0list_V0lset__union_B_V0k40(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0lset__union_B_V0k40, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.869 0 0) ((bruijn ##.%k.868 2 0) (bruijn ##.ans.256 2 2)) (##vcore.set-cdr! (close _V50_V0vanity_V0list_V0lset__union_B_V0k41) (bruijn ##.pair.255 2 1) (bruijn ##.ans.256 2 2)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      statics->up->vars[2]);
} else {
    VCallFuncWithGC(runtime, (VFunc)VSetCdr2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0lset__union_B_V0k41, self)))),
      statics->up->vars[1],
      statics->up->vars[2]);
}
}
void _V50_V0vanity_V0list_V0lset__union_B_V0lambda25(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0lset__union_B_V0lambda25, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.=.251 7 1) (bruijn ##.%k.870 0 0) (bruijn ##.x.258 0 1) (bruijn ##.elt.1946 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 1)), 3,
      _var0,
      _var1,
      statics->vars[0]);
}
void _V50_V0vanity_V0list_V0lset__union_B_V0lambda24(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0lset__union_B_V0lambda24, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 1 1 (##.elt.1946) ((##vcore.car (bruijn ##.pair.255 1 1))) (##qualified-call (vanity list any) #t (bruijn ##.any.96 7 27) (close _V50_V0vanity_V0list_V0lset__union_B_V0k40) (close _V50_V0vanity_V0list_V0lset__union_B_V0lambda25) (bruijn ##.ans.256 1 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[1]);
  {
   VEnv * _closure_env = _V60_V0vanity_V0list;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0lset__union_B_V0k40, self))));
    VWORD _arg1 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0lset__union_B_V0lambda25, self))));
    VWORD _arg2 = 
      statics->vars[2];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0any, _V60_V0vanity_V0list)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0list_V0any(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
void _V50_V0vanity_V0list_V0lset__union_B_V0lambda23(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0lset__union_B_V0lambda23, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 1 1 (##.%p.1943) ((##vcore.null? (bruijn ##.lis.253 1 1))) (if (bruijn ##.%p.1943 0 0) ((bruijn ##.%k.864 1 0) (bruijn ##.ans.254 1 2)) (basic-block 1 1 (##.%p.1944) ((##vcore.null? (bruijn ##.ans.254 2 2))) (if (bruijn ##.%p.1944 0 0) ((bruijn ##.%k.864 2 0) (bruijn ##.lis.253 2 1)) (basic-block 1 1 (##.%p.1945) ((##vcore.eq? (bruijn ##.lis.253 3 1) (bruijn ##.ans.254 3 2))) (if (bruijn ##.%p.1945 0 0) ((bruijn ##.%k.864 3 0) (bruijn ##.ans.254 3 2)) (##qualified-call (vanity list pair-fold) #t (bruijn ##.pair-fold.122 5 53) (bruijn ##.%k.864 3 0) (close _V50_V0vanity_V0list_V0lset__union_B_V0lambda24) (bruijn ##.ans.254 3 2) (bruijn ##.lis.253 3 1))))))))
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
      statics->vars[2]);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VNullP2(runtime, NULL,
      statics->up->vars[2]);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      statics->up->vars[1]);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      statics->up->up->vars[1],
      statics->up->up->vars[2]);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      statics->up->up->vars[2]);
} else {
  {
   VEnv * _closure_env = _V60_V0vanity_V0list;
    VWORD _arg0 = 
      statics->up->up->vars[0];
    VWORD _arg1 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0lset__union_B_V0lambda24, self))));
    VWORD _arg2 = 
      statics->up->up->vars[2];
    VWORD _arg3 = 
      statics->up->up->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0pair__fold, _V60_V0vanity_V0list)}, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0list_V0pair__fold(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
    }
}
    }
}
    }
}
static void _V50_V0vanity_V0list_V0lset__union_B_V0k39(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##qualified-call (vanity list reduce) #t (bruijn ##.reduce.121 1 52) (bruijn ##.%k.863 0 0) (close _V50_V0vanity_V0list_V0lset__union_B_V0lambda23) '() (bruijn ##.lists.252 0 2))
  {
   VEnv * _closure_env = _V60_V0vanity_V0list;
    VWORD _arg0 = 
      self->vars[0];
    VWORD _arg1 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0lset__union_B_V0lambda23, self))));
    VWORD _arg2 = 
      VNULL;
    VWORD _arg3 = 
      self->vars[2];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0reduce, _V60_V0vanity_V0list)}, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0list_V0reduce(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0list_V0lset__union_B(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, ...) {
 if(argc < 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0lset__union_B, got ~D~N"
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
  // (##qualified-call (vanity list check-arg) #t (bruijn ##.check-arg.149 1 80) (close _V50_V0vanity_V0list_V0lset__union_B_V0k39) (##intrinsic ##vcore.procedure?) (bruijn ##.=.251 0 1) (bruijn ##.lset-union!.82 1 13))
  {
   VEnv * _closure_env = _V60_V0vanity_V0list;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0lset__union_B_V0k39, self))));
    VWORD _arg1 = 
      _V40_V10vcore_Dprocedure_Q;
    VWORD _arg2 = 
      _var1;
    VWORD _arg3 = 
      statics->vars[13];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0check__arg, _V60_V0vanity_V0list)}, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0list_V0check__arg(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0list_V0lset__union_V0k43(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0lset__union_V0k43, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.877 0 0) ((bruijn ##.%k.876 1 0) (bruijn ##.ans.264 1 2)) (basic-block 1 1 (##.%r.1950) ((##vcore.cons (bruijn ##.elt.263 2 1) (bruijn ##.ans.264 2 2))) ((bruijn ##.%k.876 2 0) (bruijn ##.%r.1950 0 0))))
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
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[1],
      statics->up->vars[2]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      self->vars[0]);
    }
}
}
void _V50_V0vanity_V0list_V0lset__union_V0lambda28(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0lset__union_V0lambda28, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.=.259 6 1) (bruijn ##.%k.878 0 0) (bruijn ##.x.265 0 1) (bruijn ##.elt.263 1 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 1)), 3,
      _var0,
      _var1,
      statics->vars[1]);
}
void _V50_V0vanity_V0list_V0lset__union_V0lambda27(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0lset__union_V0lambda27, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (##qualified-call (vanity list any) #t (bruijn ##.any.96 6 27) (close _V50_V0vanity_V0list_V0lset__union_V0k43) (close _V50_V0vanity_V0list_V0lset__union_V0lambda28) (bruijn ##.ans.264 0 2))
  {
   VEnv * _closure_env = _V60_V0vanity_V0list;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0lset__union_V0k43, self))));
    VWORD _arg1 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0lset__union_V0lambda28, self))));
    VWORD _arg2 = 
      _var2;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0any, _V60_V0vanity_V0list)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0list_V0any(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0list_V0lset__union_V0lambda26(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0lset__union_V0lambda26, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 1 1 (##.%p.1947) ((##vcore.null? (bruijn ##.lis.261 1 1))) (if (bruijn ##.%p.1947 0 0) ((bruijn ##.%k.872 1 0) (bruijn ##.ans.262 1 2)) (basic-block 1 1 (##.%p.1948) ((##vcore.null? (bruijn ##.ans.262 2 2))) (if (bruijn ##.%p.1948 0 0) ((bruijn ##.%k.872 2 0) (bruijn ##.lis.261 2 1)) (basic-block 1 1 (##.%p.1949) ((##vcore.eq? (bruijn ##.lis.261 3 1) (bruijn ##.ans.262 3 2))) (if (bruijn ##.%p.1949 0 0) ((bruijn ##.%k.872 3 0) (bruijn ##.ans.262 3 2)) (##qualified-call (vanity list fold) #t (bruijn ##.fold.127 5 58) (bruijn ##.%k.872 3 0) (close _V50_V0vanity_V0list_V0lset__union_V0lambda27) (bruijn ##.ans.262 3 2) (bruijn ##.lis.261 3 1))))))))
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
      statics->vars[2]);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VNullP2(runtime, NULL,
      statics->up->vars[2]);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      statics->up->vars[1]);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      statics->up->up->vars[1],
      statics->up->up->vars[2]);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      statics->up->up->vars[2]);
} else {
  {
   VEnv * _closure_env = _V60_V0vanity_V0list;
    VWORD _arg0 = 
      statics->up->up->vars[0];
    VWORD _arg1 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0lset__union_V0lambda27, self))));
    VWORD _arg2 = 
      statics->up->up->vars[2];
    VWORD _arg3 = 
      statics->up->up->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0fold, _V60_V0vanity_V0list)}, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0list_V0fold(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
    }
}
    }
}
    }
}
static void _V50_V0vanity_V0list_V0lset__union_V0k42(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##qualified-call (vanity list reduce) #t (bruijn ##.reduce.121 1 52) (bruijn ##.%k.871 0 0) (close _V50_V0vanity_V0list_V0lset__union_V0lambda26) '() (bruijn ##.lists.260 0 2))
  {
   VEnv * _closure_env = _V60_V0vanity_V0list;
    VWORD _arg0 = 
      self->vars[0];
    VWORD _arg1 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0lset__union_V0lambda26, self))));
    VWORD _arg2 = 
      VNULL;
    VWORD _arg3 = 
      self->vars[2];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0reduce, _V60_V0vanity_V0list)}, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0list_V0reduce(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0list_V0lset__union(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, ...) {
 if(argc < 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0lset__union, got ~D~N"
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
  // (##qualified-call (vanity list check-arg) #t (bruijn ##.check-arg.149 1 80) (close _V50_V0vanity_V0list_V0lset__union_V0k42) (##intrinsic ##vcore.procedure?) (bruijn ##.=.259 0 1) (bruijn ##.lset-union.83 1 14))
  {
   VEnv * _closure_env = _V60_V0vanity_V0list;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0lset__union_V0k42, self))));
    VWORD _arg1 = 
      _V40_V10vcore_Dprocedure_Q;
    VWORD _arg2 = 
      _var1;
    VWORD _arg3 = 
      statics->vars[14];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0check__arg, _V60_V0vanity_V0list)}, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0list_V0check__arg(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0list_V0lset__adjoin_V0k45(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0lset__adjoin_V0k45, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.881 0 0) ((bruijn ##.%k.880 1 0) (bruijn ##.ans.270 1 2)) (basic-block 1 1 (##.%r.1951) ((##vcore.cons (bruijn ##.elt.269 2 1) (bruijn ##.ans.270 2 2))) ((bruijn ##.%k.880 2 0) (bruijn ##.%r.1951 0 0))))
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
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[1],
      statics->up->vars[2]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      self->vars[0]);
    }
}
}
void _V50_V0vanity_V0list_V0lset__adjoin_V0lambda29(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0lset__adjoin_V0lambda29, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((bruijn ##.member.34 3 30) (close _V50_V0vanity_V0list_V0lset__adjoin_V0k45) (bruijn ##.elt.269 0 1) (bruijn ##.ans.270 0 2) (bruijn ##.=.266 1 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[30]), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0lset__adjoin_V0k45, self)))),
      _var1,
      _var2,
      statics->vars[1]);
}
static void _V50_V0vanity_V0list_V0lset__adjoin_V0k44(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##qualified-call (vanity list fold) #t (bruijn ##.fold.127 1 58) (bruijn ##.%k.879 0 0) (close _V50_V0vanity_V0list_V0lset__adjoin_V0lambda29) (bruijn ##.lis.267 0 2) (bruijn ##.elts.268 0 3))
  {
   VEnv * _closure_env = _V60_V0vanity_V0list;
    VWORD _arg0 = 
      self->vars[0];
    VWORD _arg1 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0lset__adjoin_V0lambda29, self))));
    VWORD _arg2 = 
      self->vars[2];
    VWORD _arg3 = 
      self->vars[3];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0fold, _V60_V0vanity_V0list)}, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0list_V0fold(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0list_V0lset__adjoin(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, ...) {
 if(argc < 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0lset__adjoin, got ~D~N"
  "-- expected 3 or more~N"
  , argc);
 }
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 3, argc, _var2);
  struct { VEnv self; VWORD argv[4]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 4, 4, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _varargs;
  // (##qualified-call (vanity list check-arg) #t (bruijn ##.check-arg.149 1 80) (close _V50_V0vanity_V0list_V0lset__adjoin_V0k44) (##intrinsic ##vcore.procedure?) (bruijn ##.=.266 0 1) (bruijn ##.lset-adjoin.84 1 15))
  {
   VEnv * _closure_env = _V60_V0vanity_V0list;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0lset__adjoin_V0k44, self))));
    VWORD _arg1 = 
      _V40_V10vcore_Dprocedure_Q;
    VWORD _arg2 = 
      _var1;
    VWORD _arg3 = 
      statics->vars[15];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0check__arg, _V60_V0vanity_V0list)}, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0list_V0check__arg(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0list_V0lset_E_V10_Dflip_D273_V0lambda30(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0lset_E_V10_Dflip_D273_V0lambda30, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  // ((bruijn ##.proc.274 1 1) (bruijn ##.%k.884 0 0) (bruijn ##.y.276 0 2) (bruijn ##.x.275 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[1]), 3,
      _var0,
      _var2,
      _var1);
}
void _V50_V0vanity_V0list_V0lset_E_V10_Dflip_D273(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0lset_E_V10_Dflip_D273, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.%k.883 0 0) (close _V50_V0vanity_V0list_V0lset_E_V10_Dflip_D273_V0lambda30))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0lset_E_V10_Dflip_D273_V0lambda30, self)))));
}
void _V50_V0vanity_V0list_V0lset_E_V10_Dlp_D277_V0k49(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0lset_E_V10_Dlp_D277_V0k49, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity list %lset2<=) #t (bruijn ##.%lset2<=.87 10 18) (bruijn ##.%k.892 2 0) (bruijn ##.%x.894 0 0) (bruijn ##.s2.1956 3 0) (bruijn ##.s1.278 5 1))
  {
   VEnv * _closure_env = _V60_V0vanity_V0list;
    VWORD _arg0 = 
      statics->up->vars[0];
    VWORD _arg1 = 
      _var0;
    VWORD _arg2 = 
      statics->up->up->vars[0];
    VWORD _arg3 = 
      VGetArg(statics, 5-1, 1);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0_Mlset2_L_E, _V60_V0vanity_V0list)}, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0list_V0_Mlset2_L_E(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0list_V0lset_E_V10_Dlp_D277_V0k48(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0lset_E_V10_Dlp_D277_V0k48, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.893 0 0) (##qualified-call (vanity list lset= ##.flip.273) #f (bruijn ##.flip.273 7 0) (close _V50_V0vanity_V0list_V0lset_E_V10_Dlp_D277_V0k49) (bruijn ##.=.271 8 1)) ((bruijn ##.%k.892 1 0) #f))
if(VDecodeBool(
_var0)) {
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 7-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0lset_E_V10_Dlp_D277_V0k49, self))));
    VWORD _arg1 = 
      VGetArg(statics, 8-1, 1);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0list_V0lset_E_V10_Dflip_D273(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0list_V0lset_E_V10_Dlp_D277_V0k47(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0lset_E_V10_Dlp_D277_V0k47, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1958 1 2) ((bruijn ##.%k.892 0 0) (bruijn ##.%p.1958 1 2)) (##qualified-call (vanity list %lset2<=) #t (bruijn ##.%lset2<=.87 8 18) (close _V50_V0vanity_V0list_V0lset_E_V10_Dlp_D277_V0k48) (bruijn ##.=.271 7 1) (bruijn ##.s1.278 3 1) (bruijn ##.s2.1956 1 0)))
if(VDecodeBool(
statics->vars[2])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->vars[2]);
} else {
  {
   VEnv * _closure_env = _V60_V0vanity_V0list;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0lset_E_V10_Dlp_D277_V0k48, self))));
    VWORD _arg1 = 
      VGetArg(statics, 7-1, 1);
    VWORD _arg2 = 
      statics->up->up->vars[1];
    VWORD _arg3 = 
      statics->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0_Mlset2_L_E, _V60_V0vanity_V0list)}, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0list_V0_Mlset2_L_E(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
}
void _V50_V0vanity_V0list_V0lset_E_V10_Dlp_D277_V0k50(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0lset_E_V10_Dlp_D277_V0k50, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.890 0 0) (##qualified-call (vanity list lset= ##.lp.277) #f (bruijn ##.lp.277 4 0) (bruijn ##.%k.886 3 0) (bruijn ##.s2.1956 1 0) (bruijn ##.rest.1957 1 1)) ((bruijn ##.%k.886 3 0) #f))
if(VDecodeBool(
_var0)) {
  {
    VClosure * _closure = VDecodeClosure(statics->up->up->up->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->up->up->vars[0];
    VWORD _arg1 = 
      statics->vars[0];
    VWORD _arg2 = 
      statics->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0list_V0lset_E_V10_Dlp_D277(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0list_V0lset_E_V10_Dlp_D277(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0lset_E_V10_Dlp_D277, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 2 2 (##.%x.1954 ##.%p.1955) ((##vcore.pair? (bruijn ##.rest.279 1 2)) (##vcore.not (bruijn ##.%x.1954 0 0))) (if (bruijn ##.%p.1955 0 1) ((bruijn ##.%k.886 1 0) (bruijn ##.%p.1955 0 1)) (basic-block 3 3 (##.s2.1956 ##.rest.1957 ##.%p.1958) ((##vcore.car (bruijn ##.rest.279 2 2)) (##vcore.cdr (bruijn ##.rest.279 2 2)) (##vcore.eq? (bruijn ##.s1.278 2 1) (bruijn ##.s2.1956 0 0))) ((close _V50_V0vanity_V0list_V0lset_E_V10_Dlp_D277_V0k47) (close _V50_V0vanity_V0list_V0lset_E_V10_Dlp_D277_V0k50)))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->vars[2]);
    self->vars[1] = _VBasic_VNot2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      self->vars[1]);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->vars[2]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->up->vars[2]);
    self->vars[2] = _VBasic_VEq2(runtime, NULL,
      statics->up->vars[1],
      self->vars[0]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0lset_E_V10_Dlp_D277_V0k47, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0lset_E_V10_Dlp_D277_V0k50, self)))));
    }
}
    }
}
static void _V50_V0vanity_V0list_V0lset_E_V0k46(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 2 2 (##.%x.1952 ##.%p.1953) ((##vcore.pair? (bruijn ##.lists.272 2 2)) (##vcore.not (bruijn ##.%x.1952 0 0))) (if (bruijn ##.%p.1953 0 1) ((bruijn ##.%k.882 2 0) (bruijn ##.%p.1953 0 1)) (letrec 1 ((close "_V50_V0vanity_V0list_V0lset_E_V10_Dlp_D277")) (basic-block 2 2 (##.%x.1959 ##.%x.1960) ((##vcore.car (bruijn ##.lists.272 4 2)) (##vcore.cdr (bruijn ##.lists.272 4 2))) (##qualified-call (vanity list lset= ##.lp.277) #f (bruijn ##.lp.277 1 0) (bruijn ##.%k.882 4 0) (bruijn ##.%x.1959 0 0) (bruijn ##.%x.1960 0 1))))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->up->vars[2]);
    self->vars[1] = _VBasic_VNot2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      self->vars[1]);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0lset_E_V10_Dlp_D277, self))));
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->up->up->vars[2]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->up->up->up->vars[2]);
  {
    VClosure * _closure = VDecodeClosure(statics->vars[0]);
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
       _V50_V0vanity_V0list_V0lset_E_V10_Dlp_D277(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
    }
}
    }
}
void _V50_V0vanity_V0list_V0lset_E(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, ...) {
 if(argc < 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0lset_E, got ~D~N"
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
  // (letrec 1 ((close "_V50_V0vanity_V0list_V0lset_E_V10_Dflip_D273")) (##qualified-call (vanity list check-arg) #t (bruijn ##.check-arg.149 2 80) (close _V50_V0vanity_V0list_V0lset_E_V0k46) (##intrinsic ##vcore.procedure?) (bruijn ##.=.271 1 1) (bruijn ##.lset=.85 2 16)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0lset_E_V10_Dflip_D273, self))));
  {
   VEnv * _closure_env = _V60_V0vanity_V0list;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0lset_E_V0k46, self))));
    VWORD _arg1 = 
      _V40_V10vcore_Dprocedure_Q;
    VWORD _arg2 = 
      statics->vars[1];
    VWORD _arg3 = 
      statics->up->vars[16];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0check__arg, _V60_V0vanity_V0list)}, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0list_V0check__arg(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
    }
}
void _V50_V0vanity_V0list_V0lset_L_E_V10_Dlp_D284_V0k52(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0lset_L_E_V10_Dlp_D284_V0k52, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.1967 1 2) ((bruijn ##.%k.907 0 0) (bruijn ##.%p.1967 1 2)) (##qualified-call (vanity list %lset2<=) #t (bruijn ##.%lset2<=.87 7 18) (bruijn ##.%k.907 0 0) (bruijn ##.=.282 6 1) (bruijn ##.s1.285 3 1) (bruijn ##.s2.1965 1 0)))
if(VDecodeBool(
statics->vars[2])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->vars[2]);
} else {
  {
   VEnv * _closure_env = _V60_V0vanity_V0list;
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      VGetArg(statics, 6-1, 1);
    VWORD _arg2 = 
      statics->up->up->vars[1];
    VWORD _arg3 = 
      statics->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0_Mlset2_L_E, _V60_V0vanity_V0list)}, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0list_V0_Mlset2_L_E(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
}
void _V50_V0vanity_V0list_V0lset_L_E_V10_Dlp_D284_V0k53(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0lset_L_E_V10_Dlp_D284_V0k53, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.905 0 0) (##qualified-call (vanity list lset<= ##.lp.284) #f (bruijn ##.lp.284 4 0) (bruijn ##.%k.901 3 0) (bruijn ##.s2.1965 1 0) (bruijn ##.rest.1966 1 1)) ((bruijn ##.%k.901 3 0) #f))
if(VDecodeBool(
_var0)) {
  {
    VClosure * _closure = VDecodeClosure(statics->up->up->up->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->up->up->vars[0];
    VWORD _arg1 = 
      statics->vars[0];
    VWORD _arg2 = 
      statics->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0list_V0lset_L_E_V10_Dlp_D284(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0list_V0lset_L_E_V10_Dlp_D284(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0lset_L_E_V10_Dlp_D284, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 2 2 (##.%x.1963 ##.%p.1964) ((##vcore.pair? (bruijn ##.rest.286 1 2)) (##vcore.not (bruijn ##.%x.1963 0 0))) (if (bruijn ##.%p.1964 0 1) ((bruijn ##.%k.901 1 0) (bruijn ##.%p.1964 0 1)) (basic-block 3 3 (##.s2.1965 ##.rest.1966 ##.%p.1967) ((##vcore.car (bruijn ##.rest.286 2 2)) (##vcore.cdr (bruijn ##.rest.286 2 2)) (##vcore.eq? (bruijn ##.s2.1965 0 0) (bruijn ##.s1.285 2 1))) ((close _V50_V0vanity_V0list_V0lset_L_E_V10_Dlp_D284_V0k52) (close _V50_V0vanity_V0list_V0lset_L_E_V10_Dlp_D284_V0k53)))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->vars[2]);
    self->vars[1] = _VBasic_VNot2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      self->vars[1]);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->vars[2]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->up->vars[2]);
    self->vars[2] = _VBasic_VEq2(runtime, NULL,
      self->vars[0],
      statics->up->vars[1]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0lset_L_E_V10_Dlp_D284_V0k52, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0lset_L_E_V10_Dlp_D284_V0k53, self)))));
    }
}
    }
}
static void _V50_V0vanity_V0list_V0lset_L_E_V0k51(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 2 2 (##.%x.1961 ##.%p.1962) ((##vcore.pair? (bruijn ##.lists.283 1 2)) (##vcore.not (bruijn ##.%x.1961 0 0))) (if (bruijn ##.%p.1962 0 1) ((bruijn ##.%k.899 1 0) (bruijn ##.%p.1962 0 1)) (letrec 1 ((close "_V50_V0vanity_V0list_V0lset_L_E_V10_Dlp_D284")) (basic-block 2 2 (##.%x.1968 ##.%x.1969) ((##vcore.car (bruijn ##.lists.283 3 2)) (##vcore.cdr (bruijn ##.lists.283 3 2))) (##qualified-call (vanity list lset<= ##.lp.284) #f (bruijn ##.lp.284 1 0) (bruijn ##.%k.899 3 0) (bruijn ##.%x.1968 0 0) (bruijn ##.%x.1969 0 1))))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->vars[2]);
    self->vars[1] = _VBasic_VNot2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      self->vars[1]);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0lset_L_E_V10_Dlp_D284, self))));
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
       _V50_V0vanity_V0list_V0lset_L_E_V10_Dlp_D284(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
    }
}
    }
}
void _V50_V0vanity_V0list_V0lset_L_E(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, ...) {
 if(argc < 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0lset_L_E, got ~D~N"
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
  // (##qualified-call (vanity list check-arg) #t (bruijn ##.check-arg.149 1 80) (close _V50_V0vanity_V0list_V0lset_L_E_V0k51) (##intrinsic ##vcore.procedure?) (bruijn ##.=.282 0 1) (bruijn ##.lset<=.86 1 17))
  {
   VEnv * _closure_env = _V60_V0vanity_V0list;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0lset_L_E_V0k51, self))));
    VWORD _arg1 = 
      _V40_V10vcore_Dprocedure_Q;
    VWORD _arg2 = 
      _var1;
    VWORD _arg3 = 
      statics->vars[17];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0check__arg, _V60_V0vanity_V0list)}, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0list_V0check__arg(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0list_V0_Mlset2_L_E_V0lambda31(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0_Mlset2_L_E_V0lambda31, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.member.34 3 30) (bruijn ##.%k.913 0 0) (bruijn ##.x.292 0 1) (bruijn ##.lis2.291 1 3) (bruijn ##.=.289 1 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[30]), 4,
      _var0,
      _var1,
      statics->vars[3],
      statics->vars[1]);
}
void _V50_V0vanity_V0list_V0_Mlset2_L_E(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0_Mlset2_L_E, got ~D~N"
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
  // (##qualified-call (vanity list every) #t (bruijn ##.every.95 1 26) (bruijn ##.%k.912 0 0) (close _V50_V0vanity_V0list_V0_Mlset2_L_E_V0lambda31) (bruijn ##.lis1.290 0 2))
  {
   VEnv * _closure_env = _V60_V0vanity_V0list;
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0_Mlset2_L_E_V0lambda31, self))));
    VWORD _arg2 = 
      _var2;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0every, _V60_V0vanity_V0list)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0list_V0every(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0list_V0alist__delete_B_V0k55(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0alist__delete_B_V0k55, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%r.1971) ((##vcore.not (bruijn ##.%x.916 1 0))) ((bruijn ##.%k.915 3 0) (bruijn ##.%r.1971 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VNot2(runtime, NULL,
      statics->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      self->vars[0]);
    }
}
void _V50_V0vanity_V0list_V0alist__delete_B_V0lambda32(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0alist__delete_B_V0lambda32, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.%x.1970) ((##vcore.car (bruijn ##.elt.297 1 1))) ((bruijn ##.=.296 2 0) (close _V50_V0vanity_V0list_V0alist__delete_B_V0k55) (bruijn ##.key.293 3 1) (bruijn ##.%x.1970 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0alist__delete_B_V0k55, self)))),
      statics->up->up->vars[1],
      self->vars[0]);
    }
}
void _V50_V0vanity_V0list_V0alist__delete_B_V0k54(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0alist__delete_B_V0k54, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity list filter!) #t (bruijn ##.filter!.116 2 47) (bruijn ##.%k.914 1 0) (close _V50_V0vanity_V0list_V0alist__delete_B_V0lambda32) (bruijn ##.alist.294 1 2))
  {
   VEnv * _closure_env = _V60_V0vanity_V0list;
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0alist__delete_B_V0lambda32, self))));
    VWORD _arg2 = 
      statics->vars[2];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0filter_B, _V60_V0vanity_V0list)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0list_V0filter_B(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0list_V0alist__delete_B(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, ...) {
 if(argc < 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0alist__delete_B, got ~D~N"
  "-- expected 3 or more~N"
  , argc);
 }
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 3, argc, _var2);
  struct { VEnv self; VWORD argv[4]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 4, 4, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _varargs;
  // (##qualified-call (vanity list get-optional) #t (bruijn ##.get-optional.182 1 113) (close _V50_V0vanity_V0list_V0alist__delete_B_V0k54) (bruijn ##.maybe-=.295 0 3) (bruijn ##.equal?.4 2 0))
  {
   VEnv * _closure_env = _V60_V0vanity_V0list;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0alist__delete_B_V0k54, self))));
    VWORD _arg1 = 
      _varargs;
    VWORD _arg2 = 
      statics->up->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0get__optional, _V60_V0vanity_V0list)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0list_V0get__optional(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0list_V0alist__delete_V0k57(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0alist__delete_V0k57, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%r.1973) ((##vcore.not (bruijn ##.%x.920 1 0))) ((bruijn ##.%k.919 3 0) (bruijn ##.%r.1973 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VNot2(runtime, NULL,
      statics->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      self->vars[0]);
    }
}
void _V50_V0vanity_V0list_V0alist__delete_V0lambda33(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0alist__delete_V0lambda33, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.%x.1972) ((##vcore.car (bruijn ##.elt.302 1 1))) ((bruijn ##.=.301 2 0) (close _V50_V0vanity_V0list_V0alist__delete_V0k57) (bruijn ##.key.298 3 1) (bruijn ##.%x.1972 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0alist__delete_V0k57, self)))),
      statics->up->up->vars[1],
      self->vars[0]);
    }
}
void _V50_V0vanity_V0list_V0alist__delete_V0k56(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0alist__delete_V0k56, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity list filter) #t (bruijn ##.filter.117 2 48) (bruijn ##.%k.918 1 0) (close _V50_V0vanity_V0list_V0alist__delete_V0lambda33) (bruijn ##.alist.299 1 2))
  {
   VEnv * _closure_env = _V60_V0vanity_V0list;
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0alist__delete_V0lambda33, self))));
    VWORD _arg2 = 
      statics->vars[2];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0filter, _V60_V0vanity_V0list)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0list_V0filter(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0list_V0alist__delete(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, ...) {
 if(argc < 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0alist__delete, got ~D~N"
  "-- expected 3 or more~N"
  , argc);
 }
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 3, argc, _var2);
  struct { VEnv self; VWORD argv[4]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 4, 4, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _varargs;
  // (##qualified-call (vanity list get-optional) #t (bruijn ##.get-optional.182 1 113) (close _V50_V0vanity_V0list_V0alist__delete_V0k56) (bruijn ##.maybe-=.300 0 3) (bruijn ##.equal?.4 2 0))
  {
   VEnv * _closure_env = _V60_V0vanity_V0list;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0alist__delete_V0k56, self))));
    VWORD _arg1 = 
      _varargs;
    VWORD _arg2 = 
      statics->up->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0get__optional, _V60_V0vanity_V0list)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0list_V0get__optional(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0list_V0alist__copy_V0lambda34(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0alist__copy_V0lambda34, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 3 3 (##.%x.1974 ##.%x.1975 ##.%r.1976) ((##vcore.car (bruijn ##.elt.304 1 1)) (##vcore.cdr (bruijn ##.elt.304 1 1)) (##vcore.cons (bruijn ##.%x.1974 0 0) (bruijn ##.%x.1975 0 1))) ((bruijn ##.%k.923 1 0) (bruijn ##.%r.1976 0 2)))
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
void _V50_V0vanity_V0list_V0alist__copy(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0alist__copy, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.map.35 2 31) (bruijn ##.%k.922 0 0) (close _V50_V0vanity_V0list_V0alist__copy_V0lambda34) (bruijn ##.alist.303 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[31]), 3,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0alist__copy_V0lambda34, self)))),
      _var1);
}
void _V50_V0vanity_V0list_V0alist__cons(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0alist__cons, got ~D~N"
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
  // (basic-block 2 2 (##.%x.1977 ##.%r.1978) ((##vcore.cons (bruijn ##.key.305 1 1) (bruijn ##.datum.306 1 2)) (##vcore.cons (bruijn ##.%x.1977 0 0) (bruijn ##.alist.307 1 3))) ((bruijn ##.%k.926 1 0) (bruijn ##.%r.1978 0 1)))
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
      statics->vars[3]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      self->vars[1]);
    }
}
void _V50_V0vanity_V0list_V0delete__duplicates_B_V10_Drecur_D311_V0k62(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0delete__duplicates_B_V10_Drecur_D311_V0k62, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%p.1981) ((##vcore.eq? (bruijn ##.tail.1980 3 1) (bruijn ##.new-tail.315 1 0))) (if (bruijn ##.%p.1981 0 0) ((bruijn ##.%k.929 5 0) (bruijn ##.lis.312 5 1)) (basic-block 1 1 (##.%r.1982) ((##vcore.cons (bruijn ##.x.1979 4 0) (bruijn ##.new-tail.315 2 0))) ((bruijn ##.%k.929 6 0) (bruijn ##.%r.1982 0 0)))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      statics->up->up->vars[1],
      statics->vars[0]);
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
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->up->up->up->vars[0],
      statics->up->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 1,
      self->vars[0]);
    }
}
    }
}
void _V50_V0vanity_V0list_V0delete__duplicates_B_V10_Drecur_D311_V0k61(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0delete__duplicates_B_V10_Drecur_D311_V0k61, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity list delete-duplicates! ##.recur.311) #f (bruijn ##.recur.311 4 0) (close _V50_V0vanity_V0list_V0delete__duplicates_B_V10_Drecur_D311_V0k62) (bruijn ##.%x.932 0 0))
  {
    VClosure * _closure = VDecodeClosure(statics->up->up->up->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0delete__duplicates_B_V10_Drecur_D311_V0k62, self))));
    VWORD _arg1 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0list_V0delete__duplicates_B_V10_Drecur_D311(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0list_V0delete__duplicates_B_V10_Drecur_D311_V0k60(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0delete__duplicates_B_V10_Drecur_D311_V0k60, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.930 0 0) ((bruijn ##.%k.929 1 0) (bruijn ##.lis.312 1 1)) (basic-block 2 2 (##.x.1979 ##.tail.1980) ((##vcore.car (bruijn ##.lis.312 2 1)) (##vcore.cdr (bruijn ##.lis.312 2 1))) (##qualified-call (vanity list delete!) #t (bruijn ##.delete!.107 6 38) (close _V50_V0vanity_V0list_V0delete__duplicates_B_V10_Drecur_D311_V0k61) (bruijn ##.x.1979 0 0) (bruijn ##.tail.1980 0 1) (bruijn ##.elt=.310 4 0))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      statics->vars[1]);
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
   VEnv * _closure_env = _V60_V0vanity_V0list;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0delete__duplicates_B_V10_Drecur_D311_V0k61, self))));
    VWORD _arg1 = 
      self->vars[0];
    VWORD _arg2 = 
      self->vars[1];
    VWORD _arg3 = 
      statics->up->up->up->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0delete_B, _V60_V0vanity_V0list)}, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0list_V0delete_B(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
    }
}
}
void _V50_V0vanity_V0list_V0delete__duplicates_B_V10_Drecur_D311(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0delete__duplicates_B_V10_Drecur_D311, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (##qualified-call (vanity list null-list?) #t (bruijn ##.null-list?.169 4 100) (close _V50_V0vanity_V0list_V0delete__duplicates_B_V10_Drecur_D311_V0k60) (bruijn ##.lis.312 0 1))
  {
   VEnv * _closure_env = _V60_V0vanity_V0list;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0delete__duplicates_B_V10_Drecur_D311_V0k60, self))));
    VWORD _arg1 = 
      _var1;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0null__list_Q, _V60_V0vanity_V0list)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0list_V0null__list_Q(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
static void _V50_V0vanity_V0list_V0delete__duplicates_B_V0k59(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (letrec 1 ((close "_V50_V0vanity_V0list_V0delete__duplicates_B_V10_Drecur_D311")) (##qualified-call (vanity list delete-duplicates! ##.recur.311) #f (bruijn ##.recur.311 0 0) (bruijn ##.%k.928 2 0) (bruijn ##.lis.308 2 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0delete__duplicates_B_V10_Drecur_D311, self))));
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
       _V50_V0vanity_V0list_V0delete__duplicates_B_V10_Drecur_D311(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
}
void _V50_V0vanity_V0list_V0delete__duplicates_B_V0k58(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0delete__duplicates_B_V0k58, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity list check-arg) #t (bruijn ##.check-arg.149 2 80) (close _V50_V0vanity_V0list_V0delete__duplicates_B_V0k59) (##intrinsic ##vcore.procedure?) (bruijn ##.elt=.310 0 0) (bruijn ##.delete-duplicates!.92 2 23))
  {
   VEnv * _closure_env = _V60_V0vanity_V0list;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0delete__duplicates_B_V0k59, self))));
    VWORD _arg1 = 
      _V40_V10vcore_Dprocedure_Q;
    VWORD _arg2 = 
      _var0;
    VWORD _arg3 = 
      statics->up->vars[23];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0check__arg, _V60_V0vanity_V0list)}, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0list_V0check__arg(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0list_V0delete__duplicates_B(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, ...) {
 if(argc < 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0delete__duplicates_B, got ~D~N"
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
  // (##qualified-call (vanity list get-optional) #t (bruijn ##.get-optional.182 1 113) (close _V50_V0vanity_V0list_V0delete__duplicates_B_V0k58) (bruijn ##.maybe-=.309 0 2) (bruijn ##.equal?.4 2 0))
  {
   VEnv * _closure_env = _V60_V0vanity_V0list;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0delete__duplicates_B_V0k58, self))));
    VWORD _arg1 = 
      _varargs;
    VWORD _arg2 = 
      statics->up->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0get__optional, _V60_V0vanity_V0list)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0list_V0get__optional(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0list_V0delete__duplicates_V10_Drecur_D319_V0k67(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0delete__duplicates_V10_Drecur_D319_V0k67, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%p.1985) ((##vcore.eq? (bruijn ##.tail.1984 3 1) (bruijn ##.new-tail.323 1 0))) (if (bruijn ##.%p.1985 0 0) ((bruijn ##.%k.934 5 0) (bruijn ##.lis.320 5 1)) (basic-block 1 1 (##.%r.1986) ((##vcore.cons (bruijn ##.x.1983 4 0) (bruijn ##.new-tail.323 2 0))) ((bruijn ##.%k.934 6 0) (bruijn ##.%r.1986 0 0)))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      statics->up->up->vars[1],
      statics->vars[0]);
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
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->up->up->up->vars[0],
      statics->up->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 1,
      self->vars[0]);
    }
}
    }
}
void _V50_V0vanity_V0list_V0delete__duplicates_V10_Drecur_D319_V0k66(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0delete__duplicates_V10_Drecur_D319_V0k66, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity list delete-duplicates ##.recur.319) #f (bruijn ##.recur.319 4 0) (close _V50_V0vanity_V0list_V0delete__duplicates_V10_Drecur_D319_V0k67) (bruijn ##.%x.937 0 0))
  {
    VClosure * _closure = VDecodeClosure(statics->up->up->up->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0delete__duplicates_V10_Drecur_D319_V0k67, self))));
    VWORD _arg1 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0list_V0delete__duplicates_V10_Drecur_D319(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0list_V0delete__duplicates_V10_Drecur_D319_V0k65(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0delete__duplicates_V10_Drecur_D319_V0k65, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.935 0 0) ((bruijn ##.%k.934 1 0) (bruijn ##.lis.320 1 1)) (basic-block 2 2 (##.x.1983 ##.tail.1984) ((##vcore.car (bruijn ##.lis.320 2 1)) (##vcore.cdr (bruijn ##.lis.320 2 1))) (##qualified-call (vanity list delete) #t (bruijn ##.delete.108 6 39) (close _V50_V0vanity_V0list_V0delete__duplicates_V10_Drecur_D319_V0k66) (bruijn ##.x.1983 0 0) (bruijn ##.tail.1984 0 1) (bruijn ##.elt=.318 4 0))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      statics->vars[1]);
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
   VEnv * _closure_env = _V60_V0vanity_V0list;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0delete__duplicates_V10_Drecur_D319_V0k66, self))));
    VWORD _arg1 = 
      self->vars[0];
    VWORD _arg2 = 
      self->vars[1];
    VWORD _arg3 = 
      statics->up->up->up->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0delete, _V60_V0vanity_V0list)}, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0list_V0delete(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
    }
}
}
void _V50_V0vanity_V0list_V0delete__duplicates_V10_Drecur_D319(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0delete__duplicates_V10_Drecur_D319, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (##qualified-call (vanity list null-list?) #t (bruijn ##.null-list?.169 4 100) (close _V50_V0vanity_V0list_V0delete__duplicates_V10_Drecur_D319_V0k65) (bruijn ##.lis.320 0 1))
  {
   VEnv * _closure_env = _V60_V0vanity_V0list;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0delete__duplicates_V10_Drecur_D319_V0k65, self))));
    VWORD _arg1 = 
      _var1;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0null__list_Q, _V60_V0vanity_V0list)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0list_V0null__list_Q(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
static void _V50_V0vanity_V0list_V0delete__duplicates_V0k64(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (letrec 1 ((close "_V50_V0vanity_V0list_V0delete__duplicates_V10_Drecur_D319")) (##qualified-call (vanity list delete-duplicates ##.recur.319) #f (bruijn ##.recur.319 0 0) (bruijn ##.%k.933 2 0) (bruijn ##.lis.316 2 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0delete__duplicates_V10_Drecur_D319, self))));
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
       _V50_V0vanity_V0list_V0delete__duplicates_V10_Drecur_D319(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
}
void _V50_V0vanity_V0list_V0delete__duplicates_V0k63(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0delete__duplicates_V0k63, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity list check-arg) #t (bruijn ##.check-arg.149 2 80) (close _V50_V0vanity_V0list_V0delete__duplicates_V0k64) (##intrinsic ##vcore.procedure?) (bruijn ##.elt=.318 0 0) (bruijn ##.delete-duplicates.93 2 24))
  {
   VEnv * _closure_env = _V60_V0vanity_V0list;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0delete__duplicates_V0k64, self))));
    VWORD _arg1 = 
      _V40_V10vcore_Dprocedure_Q;
    VWORD _arg2 = 
      _var0;
    VWORD _arg3 = 
      statics->up->vars[24];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0check__arg, _V60_V0vanity_V0list)}, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0list_V0check__arg(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0list_V0delete__duplicates(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, ...) {
 if(argc < 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0delete__duplicates, got ~D~N"
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
  // (##qualified-call (vanity list get-optional) #t (bruijn ##.get-optional.182 1 113) (close _V50_V0vanity_V0list_V0delete__duplicates_V0k63) (bruijn ##.maybe-=.317 0 2) (bruijn ##.equal?.4 2 0))
  {
   VEnv * _closure_env = _V60_V0vanity_V0list;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0delete__duplicates_V0k63, self))));
    VWORD _arg1 = 
      _varargs;
    VWORD _arg2 = 
      statics->up->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0get__optional, _V60_V0vanity_V0list)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0list_V0get__optional(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0list_V0list__index_V10_Dloop_D326_V0k68(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0list__index_V10_Dloop_D326_V0k68, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.941 0 0) ((bruijn ##.%k.939 3 0) (bruijn ##.i.327 3 1)) (basic-block 2 2 (##.%x.1989 ##.%x.1990) ((##vcore.+ (bruijn ##.i.327 4 1) 1) (##vcore.cdr (bruijn ##.lst.328 4 2))) (##qualified-call (vanity list list-index ##.loop.326) #f (bruijn ##.loop.326 5 0) (bruijn ##.%k.939 4 0) (bruijn ##.%x.1989 0 0) (bruijn ##.%x.1990 0 1))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      statics->up->up->vars[1]);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      statics->up->up->up->vars[1],
      VEncodeInt(1l));
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
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0list_V0list__index_V10_Dloop_D326(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
}
void _V50_V0vanity_V0list_V0list__index_V10_Dloop_D326(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0list__index_V10_Dloop_D326, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 1 1 (##.%p.1987) ((##vcore.null? (bruijn ##.p.324 3 1))) (if (bruijn ##.%p.1987 0 0) ((bruijn ##.%k.939 1 0) #f) (basic-block 1 1 (##.%x.1988) ((##vcore.car (bruijn ##.lst.328 2 2))) ((bruijn ##.p.324 4 1) (close _V50_V0vanity_V0list_V0list__index_V10_Dloop_D326_V0k68) (bruijn ##.%x.1988 0 0)))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VNullP2(runtime, NULL,
      statics->up->up->vars[1]);
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
      statics->up->vars[2]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[1]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0list__index_V10_Dloop_D326_V0k68, self)))),
      self->vars[0]);
    }
}
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
  // (letrec 1 ((close "_V50_V0vanity_V0list_V0list__index_V10_Dloop_D326")) (##qualified-call (vanity list list-index ##.loop.326) #f (bruijn ##.loop.326 0 0) (bruijn ##.%k.938 1 0) 0 (bruijn ##.lst.325 1 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0list__index_V10_Dloop_D326, self))));
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
       _V50_V0vanity_V0list_V0list__index_V10_Dloop_D326(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
void _V50_V0vanity_V0list_V0every_V0lambda35(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0every_V0lambda35, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%x.1992) ((##vcore.cons (bruijn ##.lis1.330 3 2) (bruijn ##.lists.331 3 3))) (##qualified-call (vanity list %cars+cdrs) #t (bruijn ##.%cars+cdrs.180 4 111) (bruijn ##.%k.947 1 0) (bruijn ##.%x.1992 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->up->up->vars[2],
      statics->up->up->vars[3]);
  {
   VEnv * _closure_env = _V60_V0vanity_V0list;
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      self->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0_Mcars_Pcdrs, _V60_V0vanity_V0list)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0list_V0_Mcars_Pcdrs(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
}
void _V50_V0vanity_V0list_V0every_V10_Dlp_D334_V0lambda37(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0every_V10_Dlp_D334_V0lambda37, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity list %cars+cdrs) #t (bruijn ##.%cars+cdrs.180 7 111) (bruijn ##.%k.952 0 0) (bruijn ##.tails.336 1 2))
  {
   VEnv * _closure_env = _V60_V0vanity_V0list;
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      statics->vars[2];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0_Mcars_Pcdrs, _V60_V0vanity_V0list)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0list_V0_Mcars_Pcdrs(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0list_V0every_V10_Dlp_D334_V0k70(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0every_V10_Dlp_D334_V0k70, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.955 0 0) (##qualified-call (vanity list every ##.lp.334) #f (bruijn ##.lp.334 4 0) (bruijn ##.%k.953 2 0) (bruijn ##.next-heads.337 2 1) (bruijn ##.next-tails.338 2 2)) ((bruijn ##.%k.953 2 0) #f))
if(VDecodeBool(
_var0)) {
  {
    VClosure * _closure = VDecodeClosure(statics->up->up->up->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->up->vars[0];
    VWORD _arg1 = 
      statics->up->vars[1];
    VWORD _arg2 = 
      statics->up->vars[2];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0list_V0every_V10_Dlp_D334(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0list_V0every_V10_Dlp_D334_V0lambda38(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0every_V10_Dlp_D334_V0lambda38, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 1 1 (##.%p.1995) ((##vcore.pair? (bruijn ##.next-heads.337 1 1))) (if (bruijn ##.%p.1995 0 0) (##vcore.apply (close _V50_V0vanity_V0list_V0every_V10_Dlp_D334_V0k70) (bruijn ##.pred.329 7 1) (bruijn ##.heads.335 2 1)) (##vcore.apply (bruijn ##.%k.953 1 0) (bruijn ##.pred.329 7 1) (bruijn ##.heads.335 2 1))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->vars[1]);
if(VDecodeBool(
self->vars[0])) {
    VCallFuncWithGC(runtime, (VFunc)VApply2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0every_V10_Dlp_D334_V0k70, self)))),
      VGetArg(statics, 7-1, 1),
      statics->up->vars[1]);
} else {
    VCallFuncWithGC(runtime, (VFunc)VApply2, 3,
      statics->vars[0],
      VGetArg(statics, 7-1, 1),
      statics->up->vars[1]);
}
    }
}
void _V50_V0vanity_V0list_V0every_V10_Dlp_D334(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0every_V10_Dlp_D334, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (##vcore.call-with-values (bruijn ##.%k.951 0 0) (close _V50_V0vanity_V0list_V0every_V10_Dlp_D334_V0lambda37) (close _V50_V0vanity_V0list_V0every_V10_Dlp_D334_V0lambda38))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0every_V10_Dlp_D334_V0lambda37, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0every_V10_Dlp_D334_V0lambda38, self)))));
}
void _V50_V0vanity_V0list_V0every_V0lambda36(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0every_V0lambda36, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 2 2 (##.%x.1993 ##.%p.1994) ((##vcore.pair? (bruijn ##.heads.332 1 1)) (##vcore.not (bruijn ##.%x.1993 0 0))) (if (bruijn ##.%p.1994 0 1) ((bruijn ##.%k.949 1 0) (bruijn ##.%p.1994 0 1)) (letrec 1 ((close "_V50_V0vanity_V0list_V0every_V10_Dlp_D334")) (##qualified-call (vanity list every ##.lp.334) #f (bruijn ##.lp.334 0 0) (bruijn ##.%k.949 2 0) (bruijn ##.heads.332 2 1) (bruijn ##.tails.333 2 2)))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->vars[1]);
    self->vars[1] = _VBasic_VNot2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      self->vars[1]);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0every_V10_Dlp_D334, self))));
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->up->vars[0];
    VWORD _arg1 = 
      statics->up->vars[1];
    VWORD _arg2 = 
      statics->up->vars[2];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0list_V0every_V10_Dlp_D334(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
    }
}
void _V50_V0vanity_V0list_V0every_V10_Dlp_D339_V0k73(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0every_V10_Dlp_D339_V0k73, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.960 0 0) (basic-block 2 2 (##.%x.1996 ##.%x.1997) ((##vcore.car (bruijn ##.tail.341 3 2)) (##vcore.cdr (bruijn ##.tail.341 3 2))) (##qualified-call (vanity list every ##.lp.339) #f (bruijn ##.lp.339 4 0) (bruijn ##.%k.958 3 0) (bruijn ##.%x.1996 0 0) (bruijn ##.%x.1997 0 1))) ((bruijn ##.%k.958 2 0) #f))
if(VDecodeBool(
_var0)) {
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
    VClosure * _closure = VDecodeClosure(statics->up->up->up->vars[0]);
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
       _V50_V0vanity_V0list_V0every_V10_Dlp_D339(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0list_V0every_V10_Dlp_D339_V0k72(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0every_V10_Dlp_D339_V0k72, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.959 0 0) ((bruijn ##.pred.329 5 1) (bruijn ##.%k.958 1 0) (bruijn ##.head.340 1 1)) ((bruijn ##.pred.329 5 1) (close _V50_V0vanity_V0list_V0every_V10_Dlp_D339_V0k73) (bruijn ##.head.340 1 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 1)), 2,
      statics->vars[0],
      statics->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 1)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0every_V10_Dlp_D339_V0k73, self)))),
      statics->vars[1]);
}
}
void _V50_V0vanity_V0list_V0every_V10_Dlp_D339(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0every_V10_Dlp_D339, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (##qualified-call (vanity list null-list?) #t (bruijn ##.null-list?.169 5 100) (close _V50_V0vanity_V0list_V0every_V10_Dlp_D339_V0k72) (bruijn ##.tail.341 0 2))
  {
   VEnv * _closure_env = _V60_V0vanity_V0list;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0every_V10_Dlp_D339_V0k72, self))));
    VWORD _arg1 = 
      _var2;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0null__list_Q, _V60_V0vanity_V0list)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0list_V0null__list_Q(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0list_V0every_V0k71(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0every_V0k71, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.957 0 0) ((bruijn ##.%k.945 2 0) (bruijn ##.%p.957 0 0)) (letrec 1 ((close "_V50_V0vanity_V0list_V0every_V10_Dlp_D339")) (basic-block 2 2 (##.%x.1998 ##.%x.1999) ((##vcore.car (bruijn ##.lis1.330 4 2)) (##vcore.cdr (bruijn ##.lis1.330 4 2))) (##qualified-call (vanity list every ##.lp.339) #f (bruijn ##.lp.339 1 0) (bruijn ##.%k.945 4 0) (bruijn ##.%x.1998 0 0) (bruijn ##.%x.1999 0 1)))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      _var0);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0every_V10_Dlp_D339, self))));
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->up->up->vars[2]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->up->up->up->vars[2]);
  {
    VClosure * _closure = VDecodeClosure(statics->vars[0]);
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
       _V50_V0vanity_V0list_V0every_V10_Dlp_D339(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
    }
}
}
static void _V50_V0vanity_V0list_V0every_V0k69(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.1991) ((##vcore.pair? (bruijn ##.lists.331 1 3))) (if (bruijn ##.%p.1991 0 0) (##vcore.call-with-values (bruijn ##.%k.945 1 0) (close _V50_V0vanity_V0list_V0every_V0lambda35) (close _V50_V0vanity_V0list_V0every_V0lambda36)) (##qualified-call (vanity list null-list?) #t (bruijn ##.null-list?.169 2 100) (close _V50_V0vanity_V0list_V0every_V0k71) (bruijn ##.lis1.330 1 2))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->vars[3]);
if(VDecodeBool(
self->vars[0])) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0every_V0lambda35, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0every_V0lambda36, self)))));
} else {
  {
   VEnv * _closure_env = _V60_V0vanity_V0list;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0every_V0k71, self))));
    VWORD _arg1 = 
      statics->vars[2];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0null__list_Q, _V60_V0vanity_V0list)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0list_V0null__list_Q(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
    }
}
void _V50_V0vanity_V0list_V0every(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, ...) {
 if(argc < 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0every, got ~D~N"
  "-- expected 3 or more~N"
  , argc);
 }
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 3, argc, _var2);
  struct { VEnv self; VWORD argv[4]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 4, 4, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _varargs;
  // (##qualified-call (vanity list check-arg) #t (bruijn ##.check-arg.149 1 80) (close _V50_V0vanity_V0list_V0every_V0k69) (##intrinsic ##vcore.procedure?) (bruijn ##.pred.329 0 1) (bruijn ##.every.95 1 26))
  {
   VEnv * _closure_env = _V60_V0vanity_V0list;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0every_V0k69, self))));
    VWORD _arg1 = 
      _V40_V10vcore_Dprocedure_Q;
    VWORD _arg2 = 
      _var1;
    VWORD _arg3 = 
      statics->vars[26];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0check__arg, _V60_V0vanity_V0list)}, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0list_V0check__arg(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0list_V0any_V0lambda39(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0any_V0lambda39, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%x.2001) ((##vcore.cons (bruijn ##.lis1.343 3 2) (bruijn ##.lists.344 3 3))) (##qualified-call (vanity list %cars+cdrs) #t (bruijn ##.%cars+cdrs.180 4 111) (bruijn ##.%k.967 1 0) (bruijn ##.%x.2001 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->up->up->vars[2],
      statics->up->up->vars[3]);
  {
   VEnv * _closure_env = _V60_V0vanity_V0list;
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      self->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0_Mcars_Pcdrs, _V60_V0vanity_V0list)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0list_V0_Mcars_Pcdrs(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
}
void _V50_V0vanity_V0list_V0any_V10_Dlp_D347_V0lambda41(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0any_V10_Dlp_D347_V0lambda41, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity list %cars+cdrs) #t (bruijn ##.%cars+cdrs.180 7 111) (bruijn ##.%k.972 0 0) (bruijn ##.tails.349 1 2))
  {
   VEnv * _closure_env = _V60_V0vanity_V0list;
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      statics->vars[2];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0_Mcars_Pcdrs, _V60_V0vanity_V0list)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0list_V0_Mcars_Pcdrs(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0list_V0any_V10_Dlp_D347_V0k75(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0any_V10_Dlp_D347_V0k75, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.975 0 0) ((bruijn ##.%k.973 2 0) (bruijn ##.%p.975 0 0)) (##qualified-call (vanity list any ##.lp.347) #f (bruijn ##.lp.347 4 0) (bruijn ##.%k.973 2 0) (bruijn ##.next-heads.350 2 1) (bruijn ##.next-tails.351 2 2)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      _var0);
} else {
  {
    VClosure * _closure = VDecodeClosure(statics->up->up->up->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->up->vars[0];
    VWORD _arg1 = 
      statics->up->vars[1];
    VWORD _arg2 = 
      statics->up->vars[2];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0list_V0any_V10_Dlp_D347(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
}
void _V50_V0vanity_V0list_V0any_V10_Dlp_D347_V0lambda42(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0any_V10_Dlp_D347_V0lambda42, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 1 1 (##.%p.2003) ((##vcore.pair? (bruijn ##.next-heads.350 1 1))) (if (bruijn ##.%p.2003 0 0) (##vcore.apply (close _V50_V0vanity_V0list_V0any_V10_Dlp_D347_V0k75) (bruijn ##.pred.342 7 1) (bruijn ##.heads.348 2 1)) (##vcore.apply (bruijn ##.%k.973 1 0) (bruijn ##.pred.342 7 1) (bruijn ##.heads.348 2 1))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->vars[1]);
if(VDecodeBool(
self->vars[0])) {
    VCallFuncWithGC(runtime, (VFunc)VApply2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0any_V10_Dlp_D347_V0k75, self)))),
      VGetArg(statics, 7-1, 1),
      statics->up->vars[1]);
} else {
    VCallFuncWithGC(runtime, (VFunc)VApply2, 3,
      statics->vars[0],
      VGetArg(statics, 7-1, 1),
      statics->up->vars[1]);
}
    }
}
void _V50_V0vanity_V0list_V0any_V10_Dlp_D347(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0any_V10_Dlp_D347, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (##vcore.call-with-values (bruijn ##.%k.971 0 0) (close _V50_V0vanity_V0list_V0any_V10_Dlp_D347_V0lambda41) (close _V50_V0vanity_V0list_V0any_V10_Dlp_D347_V0lambda42))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0any_V10_Dlp_D347_V0lambda41, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0any_V10_Dlp_D347_V0lambda42, self)))));
}
void _V50_V0vanity_V0list_V0any_V0lambda40(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0any_V0lambda40, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 1 1 (##.%p.2002) ((##vcore.pair? (bruijn ##.heads.345 1 1))) (if (bruijn ##.%p.2002 0 0) (letrec 1 ((close "_V50_V0vanity_V0list_V0any_V10_Dlp_D347")) (##qualified-call (vanity list any ##.lp.347) #f (bruijn ##.lp.347 0 0) (bruijn ##.%k.969 2 0) (bruijn ##.heads.345 2 1) (bruijn ##.tails.346 2 2))) ((bruijn ##.%k.969 1 0) #f)))
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
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0any_V10_Dlp_D347, self))));
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->up->vars[0];
    VWORD _arg1 = 
      statics->up->vars[1];
    VWORD _arg2 = 
      statics->up->vars[2];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0list_V0any_V10_Dlp_D347(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
    }
}
void _V50_V0vanity_V0list_V0any_V10_Dlp_D352_V0k78(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0any_V10_Dlp_D352_V0k78, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.979 0 0) ((bruijn ##.%k.977 2 0) (bruijn ##.%p.979 0 0)) (basic-block 2 2 (##.%x.2005 ##.%x.2006) ((##vcore.car (bruijn ##.tail.354 3 2)) (##vcore.cdr (bruijn ##.tail.354 3 2))) (##qualified-call (vanity list any ##.lp.352) #f (bruijn ##.lp.352 4 0) (bruijn ##.%k.977 3 0) (bruijn ##.%x.2005 0 0) (bruijn ##.%x.2006 0 1))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      _var0);
} else {
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
    VClosure * _closure = VDecodeClosure(statics->up->up->up->vars[0]);
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
       _V50_V0vanity_V0list_V0any_V10_Dlp_D352(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
}
void _V50_V0vanity_V0list_V0any_V10_Dlp_D352_V0k77(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0any_V10_Dlp_D352_V0k77, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.978 0 0) ((bruijn ##.pred.342 6 1) (bruijn ##.%k.977 1 0) (bruijn ##.head.353 1 1)) ((bruijn ##.pred.342 6 1) (close _V50_V0vanity_V0list_V0any_V10_Dlp_D352_V0k78) (bruijn ##.head.353 1 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 1)), 2,
      statics->vars[0],
      statics->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 1)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0any_V10_Dlp_D352_V0k78, self)))),
      statics->vars[1]);
}
}
void _V50_V0vanity_V0list_V0any_V10_Dlp_D352(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0any_V10_Dlp_D352, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (##qualified-call (vanity list null-list?) #t (bruijn ##.null-list?.169 6 100) (close _V50_V0vanity_V0list_V0any_V10_Dlp_D352_V0k77) (bruijn ##.tail.354 0 2))
  {
   VEnv * _closure_env = _V60_V0vanity_V0list;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0any_V10_Dlp_D352_V0k77, self))));
    VWORD _arg1 = 
      _var2;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0null__list_Q, _V60_V0vanity_V0list)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0list_V0null__list_Q(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0list_V0any_V0k76(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0any_V0k76, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%p.2004) ((##vcore.not (bruijn ##.%x.984 1 0))) (if (bruijn ##.%p.2004 0 0) (letrec 1 ((close "_V50_V0vanity_V0list_V0any_V10_Dlp_D352")) (basic-block 2 2 (##.%x.2007 ##.%x.2008) ((##vcore.car (bruijn ##.lis1.343 5 2)) (##vcore.cdr (bruijn ##.lis1.343 5 2))) (##qualified-call (vanity list any ##.lp.352) #f (bruijn ##.lp.352 1 0) (bruijn ##.%k.965 5 0) (bruijn ##.%x.2007 0 0) (bruijn ##.%x.2008 0 1)))) ((bruijn ##.%k.965 3 0) #f)))
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
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0any_V10_Dlp_D352, self))));
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 5-1, 2));
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 5-1, 2));
  {
    VClosure * _closure = VDecodeClosure(statics->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      VGetArg(statics, 5-1, 0);
    VWORD _arg1 = 
      self->vars[0];
    VWORD _arg2 = 
      self->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0list_V0any_V10_Dlp_D352(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
}
static void _V50_V0vanity_V0list_V0any_V0k74(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.2000) ((##vcore.pair? (bruijn ##.lists.344 1 3))) (if (bruijn ##.%p.2000 0 0) (##vcore.call-with-values (bruijn ##.%k.965 1 0) (close _V50_V0vanity_V0list_V0any_V0lambda39) (close _V50_V0vanity_V0list_V0any_V0lambda40)) (##qualified-call (vanity list null-list?) #t (bruijn ##.null-list?.169 2 100) (close _V50_V0vanity_V0list_V0any_V0k76) (bruijn ##.lis1.343 1 2))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->vars[3]);
if(VDecodeBool(
self->vars[0])) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0any_V0lambda39, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0any_V0lambda40, self)))));
} else {
  {
   VEnv * _closure_env = _V60_V0vanity_V0list;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0any_V0k76, self))));
    VWORD _arg1 = 
      statics->vars[2];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0null__list_Q, _V60_V0vanity_V0list)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0list_V0null__list_Q(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
    }
}
void _V50_V0vanity_V0list_V0any(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, ...) {
 if(argc < 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0any, got ~D~N"
  "-- expected 3 or more~N"
  , argc);
 }
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 3, argc, _var2);
  struct { VEnv self; VWORD argv[4]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 4, 4, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _varargs;
  // (##qualified-call (vanity list check-arg) #t (bruijn ##.check-arg.149 1 80) (close _V50_V0vanity_V0list_V0any_V0k74) (##intrinsic ##vcore.procedure?) (bruijn ##.pred.342 0 1) (bruijn ##.any.96 1 27))
  {
   VEnv * _closure_env = _V60_V0vanity_V0list;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0any_V0k74, self))));
    VWORD _arg1 = 
      _V40_V10vcore_Dprocedure_Q;
    VWORD _arg2 = 
      _var1;
    VWORD _arg3 = 
      statics->vars[27];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0check__arg, _V60_V0vanity_V0list)}, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0list_V0check__arg(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0list_V0every_Q_V0k79(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0every_Q_V0k79, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.987 0 0) (basic-block 1 1 (##.%x.2011) ((##vcore.cdr (bruijn ##.lst.356 4 2))) (##qualified-call (vanity list every?) #t (bruijn ##.every?.97 5 28) (bruijn ##.%k.985 4 0) (bruijn ##.p.355 4 1) (bruijn ##.%x.2011 0 0))) ((bruijn ##.%k.985 3 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      statics->up->up->up->vars[2]);
  {
   VEnv * _closure_env = _V60_V0vanity_V0list;
    VWORD _arg0 = 
      statics->up->up->up->vars[0];
    VWORD _arg1 = 
      statics->up->up->up->vars[1];
    VWORD _arg2 = 
      self->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0every_Q, _V60_V0vanity_V0list)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0list_V0every_Q(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
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
  // (basic-block 1 1 (##.%p.2009) ((##vcore.null? (bruijn ##.lst.356 1 2))) (if (bruijn ##.%p.2009 0 0) ((bruijn ##.%k.985 1 0) #t) (basic-block 1 1 (##.%x.2010) ((##vcore.car (bruijn ##.lst.356 2 2))) ((bruijn ##.p.355 2 1) (close _V50_V0vanity_V0list_V0every_Q_V0k79) (bruijn ##.%x.2010 0 0)))))
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
      VEncodeBool(true));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->vars[2]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[1]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0every_Q_V0k79, self)))),
      self->vars[0]);
    }
}
    }
}
void _V50_V0vanity_V0list_V0any_Q_V0k80(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0any_Q_V0k80, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.992 0 0) ((bruijn ##.%k.990 3 0) #t) (basic-block 1 1 (##.%x.2014) ((##vcore.cdr (bruijn ##.lst.358 4 2))) (##qualified-call (vanity list any?) #t (bruijn ##.any?.98 5 29) (bruijn ##.%k.990 4 0) (bruijn ##.p.357 4 1) (bruijn ##.%x.2014 0 0))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(true));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      statics->up->up->up->vars[2]);
  {
   VEnv * _closure_env = _V60_V0vanity_V0list;
    VWORD _arg0 = 
      statics->up->up->up->vars[0];
    VWORD _arg1 = 
      statics->up->up->up->vars[1];
    VWORD _arg2 = 
      self->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0any_Q, _V60_V0vanity_V0list)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0list_V0any_Q(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
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
  // (basic-block 1 1 (##.%p.2012) ((##vcore.null? (bruijn ##.lst.358 1 2))) (if (bruijn ##.%p.2012 0 0) ((bruijn ##.%k.990 1 0) #f) (basic-block 1 1 (##.%x.2013) ((##vcore.car (bruijn ##.lst.358 2 2))) ((bruijn ##.p.357 2 1) (close _V50_V0vanity_V0list_V0any_Q_V0k80) (bruijn ##.%x.2013 0 0)))))
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
      VEncodeBool(false));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->vars[2]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[1]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0any_Q_V0k80, self)))),
      self->vars[0]);
    }
}
    }
}
void _V50_V0vanity_V0list_V0break_B_V0k81(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0break_B_V0k81, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%r.2015) ((##vcore.not (bruijn ##.%x.997 1 0))) ((bruijn ##.%k.996 2 0) (bruijn ##.%r.2015 0 0)))
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
void _V50_V0vanity_V0list_V0break_B_V0lambda43(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0break_B_V0lambda43, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.pred.359 1 1) (close _V50_V0vanity_V0list_V0break_B_V0k81) (bruijn ##.x.361 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[1]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0break_B_V0k81, self)))),
      _var1);
}
void _V50_V0vanity_V0list_V0break_B(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0break_B, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (##qualified-call (vanity list span!) #t (bruijn ##.span!.101 1 32) (bruijn ##.%k.995 0 0) (close _V50_V0vanity_V0list_V0break_B_V0lambda43) (bruijn ##.lis.360 0 2))
  {
   VEnv * _closure_env = _V60_V0vanity_V0list;
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0break_B_V0lambda43, self))));
    VWORD _arg2 = 
      _var2;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0span_B, _V60_V0vanity_V0list)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0list_V0span_B(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0list_V0break_V0k82(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0break_V0k82, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%r.2016) ((##vcore.not (bruijn ##.%x.1000 1 0))) ((bruijn ##.%k.999 2 0) (bruijn ##.%r.2016 0 0)))
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
void _V50_V0vanity_V0list_V0break_V0lambda44(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0break_V0lambda44, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.pred.362 1 1) (close _V50_V0vanity_V0list_V0break_V0k82) (bruijn ##.x.364 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[1]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0break_V0k82, self)))),
      _var1);
}
void _V50_V0vanity_V0list_V0break(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0break, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (##qualified-call (vanity list span) #t (bruijn ##.span.102 1 33) (bruijn ##.%k.998 0 0) (close _V50_V0vanity_V0list_V0break_V0lambda44) (bruijn ##.lis.363 0 2))
  {
   VEnv * _closure_env = _V60_V0vanity_V0list;
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0break_V0lambda44, self))));
    VWORD _arg2 = 
      _var2;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0span, _V60_V0vanity_V0list)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0list_V0span(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0list_V0span_B_V0k86(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0span_B_V0k86, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%r.2021) ((##vcore.not (bruijn ##.%x.1010 1 0))) ((bruijn ##.%k.1009 3 0) (bruijn ##.%r.2021 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VNot2(runtime, NULL,
      statics->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      self->vars[0]);
    }
}
void _V50_V0vanity_V0list_V0span_B_V0k85(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0span_B_V0k85, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1008 1 0) ((bruijn ##.%k.1009 0 0) (bruijn ##.%p.1008 1 0)) (basic-block 1 1 (##.%x.2020) ((##vcore.car (bruijn ##.lis.366 3 2))) ((bruijn ##.pred.365 3 1) (close _V50_V0vanity_V0list_V0span_B_V0k86) (bruijn ##.%x.2020 0 0))))
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
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->up->vars[2]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[1]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0span_B_V0k86, self)))),
      self->vars[0]);
    }
}
}
static void _V50_V0vanity_V0list_V0span_B_V10_Dlp_D368_V0k90(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.%k.1003 3 0) (bruijn ##.rest.370 3 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      statics->up->up->vars[2]);
}
void _V50_V0vanity_V0list_V0span_B_V10_Dlp_D368_V0k89(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0span_B_V10_Dlp_D368_V0k89, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1005 0 0) (basic-block 1 1 (##.%x.2018) ((##vcore.cdr (bruijn ##.rest.370 4 2))) (##qualified-call (vanity list span! ##.lp.368) #f (bruijn ##.lp.368 5 0) (bruijn ##.%k.1003 4 0) (bruijn ##.rest.370 4 2) (bruijn ##.%x.2018 0 0))) (##vcore.set-cdr! (close _V50_V0vanity_V0list_V0span_B_V10_Dlp_D368_V0k90) (bruijn ##.prev.369 3 1) '()))
if(VDecodeBool(
_var0)) {
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
      statics->up->up->up->vars[2];
    VWORD _arg2 = 
      self->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0list_V0span_B_V10_Dlp_D368(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
} else {
    VCallFuncWithGC(runtime, (VFunc)VSetCdr2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0span_B_V10_Dlp_D368_V0k90, self)))),
      statics->up->up->vars[1],
      VNULL);
}
}
void _V50_V0vanity_V0list_V0span_B_V10_Dlp_D368_V0k88(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0span_B_V10_Dlp_D368_V0k88, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1004 0 0) ((bruijn ##.%k.1003 1 0) (bruijn ##.rest.370 1 2)) (basic-block 1 1 (##.x.2017) ((##vcore.car (bruijn ##.rest.370 2 2))) ((bruijn ##.pred.365 6 1) (close _V50_V0vanity_V0list_V0span_B_V10_Dlp_D368_V0k89) (bruijn ##.x.2017 0 0))))
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
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->vars[2]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 1)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0span_B_V10_Dlp_D368_V0k89, self)))),
      self->vars[0]);
    }
}
}
void _V50_V0vanity_V0list_V0span_B_V10_Dlp_D368(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0span_B_V10_Dlp_D368, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (##qualified-call (vanity list null-list?) #t (bruijn ##.null-list?.169 5 100) (close _V50_V0vanity_V0list_V0span_B_V10_Dlp_D368_V0k88) (bruijn ##.rest.370 0 2))
  {
   VEnv * _closure_env = _V60_V0vanity_V0list;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0span_B_V10_Dlp_D368_V0k88, self))));
    VWORD _arg1 = 
      _var2;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0null__list_Q, _V60_V0vanity_V0list)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0list_V0null__list_Q(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0list_V0span_B_V0k91(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0span_B_V0k91, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.values.5 7 1) (bruijn ##.%k.1001 5 0) (bruijn ##.lis.366 5 2) (bruijn ##.suffix.367 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 1)), 3,
      VGetArg(statics, 5-1, 0),
      VGetArg(statics, 5-1, 2),
      _var0);
}
void _V50_V0vanity_V0list_V0span_B_V0k87(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0span_B_V0k87, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1002 0 0) ((bruijn ##.values.5 4 1) (bruijn ##.%k.1001 2 0) '() (bruijn ##.lis.366 2 2)) (letrec 1 ((close "_V50_V0vanity_V0list_V0span_B_V10_Dlp_D368")) (basic-block 1 1 (##.%x.2019) ((##vcore.cdr (bruijn ##.lis.366 4 2))) (##qualified-call (vanity list span! ##.lp.368) #f (bruijn ##.lp.368 1 0) (close _V50_V0vanity_V0list_V0span_B_V0k91) (bruijn ##.lis.366 4 2) (bruijn ##.%x.2019 0 0)))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[1]), 3,
      statics->up->vars[0],
      VNULL,
      statics->up->vars[2]);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0span_B_V10_Dlp_D368, self))));
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      statics->up->up->up->vars[2]);
  {
    VClosure * _closure = VDecodeClosure(statics->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0span_B_V0k91, self))));
    VWORD _arg1 = 
      statics->up->up->up->vars[2];
    VWORD _arg2 = 
      self->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0list_V0span_B_V10_Dlp_D368(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
    }
}
}
void _V50_V0vanity_V0list_V0span_B_V0k84(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0span_B_V0k84, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0list_V0span_B_V0k85) (close _V50_V0vanity_V0list_V0span_B_V0k87))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0span_B_V0k85, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0span_B_V0k87, self)))));
}
static void _V50_V0vanity_V0list_V0span_B_V0k83(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##qualified-call (vanity list null-list?) #t (bruijn ##.null-list?.169 1 100) (close _V50_V0vanity_V0list_V0span_B_V0k84) (bruijn ##.lis.366 0 2))
  {
   VEnv * _closure_env = _V60_V0vanity_V0list;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0span_B_V0k84, self))));
    VWORD _arg1 = 
      self->vars[2];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0null__list_Q, _V60_V0vanity_V0list)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0list_V0null__list_Q(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0list_V0span_B(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0span_B, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (##qualified-call (vanity list check-arg) #t (bruijn ##.check-arg.149 1 80) (close _V50_V0vanity_V0list_V0span_B_V0k83) (##intrinsic ##vcore.procedure?) (bruijn ##.pred.365 0 1) (bruijn ##.span!.101 1 32))
  {
   VEnv * _closure_env = _V60_V0vanity_V0list;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0span_B_V0k83, self))));
    VWORD _arg1 = 
      _V40_V10vcore_Dprocedure_Q;
    VWORD _arg2 = 
      _var1;
    VWORD _arg3 = 
      statics->vars[32];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0check__arg, _V60_V0vanity_V0list)}, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0list_V0check__arg(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0list_V0span_V10_Drecur_D374_V0lambda45(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0span_V10_Drecur_D374_V0lambda45, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%x.2023) ((##vcore.cdr (bruijn ##.lis.375 5 1))) (##qualified-call (vanity list span ##.recur.374) #f (bruijn ##.recur.374 6 0) (bruijn ##.%k.1016 1 0) (bruijn ##.%x.2023 0 0)))
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
      statics->vars[0];
    VWORD _arg1 = 
      self->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0list_V0span_V10_Drecur_D374(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
}
void _V50_V0vanity_V0list_V0span_V10_Drecur_D374_V0lambda46(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0span_V10_Drecur_D374_V0lambda46, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 1 1 (##.%x.2024) ((##vcore.cons (bruijn ##.x.2022 3 0) (bruijn ##.prefix.377 1 1))) ((bruijn ##.values.5 9 1) (bruijn ##.%k.1018 1 0) (bruijn ##.%x.2024 0 0) (bruijn ##.suffix.378 1 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->up->up->vars[0],
      statics->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 1)), 3,
      statics->vars[0],
      self->vars[0],
      statics->vars[2]);
    }
}
void _V50_V0vanity_V0list_V0span_V10_Drecur_D374_V0k94(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0span_V10_Drecur_D374_V0k94, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1015 0 0) (##vcore.call-with-values (bruijn ##.%k.1013 3 0) (close _V50_V0vanity_V0list_V0span_V10_Drecur_D374_V0lambda45) (close _V50_V0vanity_V0list_V0span_V10_Drecur_D374_V0lambda46)) ((bruijn ##.values.5 7 1) (bruijn ##.%k.1013 3 0) '() (bruijn ##.lis.375 3 1)))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->up->up->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0span_V10_Drecur_D374_V0lambda45, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0span_V10_Drecur_D374_V0lambda46, self)))));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 1)), 3,
      statics->up->up->vars[0],
      VNULL,
      statics->up->up->vars[1]);
}
}
void _V50_V0vanity_V0list_V0span_V10_Drecur_D374_V0k93(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0span_V10_Drecur_D374_V0k93, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1014 0 0) ((bruijn ##.values.5 5 1) (bruijn ##.%k.1013 1 0) '() '()) (basic-block 1 1 (##.x.2022) ((##vcore.car (bruijn ##.lis.375 2 1))) ((bruijn ##.pred.372 4 1) (close _V50_V0vanity_V0list_V0span_V10_Drecur_D374_V0k94) (bruijn ##.x.2022 0 0))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 1)), 3,
      statics->vars[0],
      VNULL,
      VNULL);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[1]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0span_V10_Drecur_D374_V0k94, self)))),
      self->vars[0]);
    }
}
}
void _V50_V0vanity_V0list_V0span_V10_Drecur_D374(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0span_V10_Drecur_D374, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (##qualified-call (vanity list null-list?) #t (bruijn ##.null-list?.169 3 100) (close _V50_V0vanity_V0list_V0span_V10_Drecur_D374_V0k93) (bruijn ##.lis.375 0 1))
  {
   VEnv * _closure_env = _V60_V0vanity_V0list;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0span_V10_Drecur_D374_V0k93, self))));
    VWORD _arg1 = 
      _var1;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0null__list_Q, _V60_V0vanity_V0list)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0list_V0null__list_Q(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
static void _V50_V0vanity_V0list_V0span_V0k92(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (letrec 1 ((close "_V50_V0vanity_V0list_V0span_V10_Drecur_D374")) (##qualified-call (vanity list span ##.recur.374) #f (bruijn ##.recur.374 0 0) (bruijn ##.%k.1012 1 0) (bruijn ##.lis.373 1 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0span_V10_Drecur_D374, self))));
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
       _V50_V0vanity_V0list_V0span_V10_Drecur_D374(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
}
void _V50_V0vanity_V0list_V0span(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0span, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (##qualified-call (vanity list check-arg) #t (bruijn ##.check-arg.149 1 80) (close _V50_V0vanity_V0list_V0span_V0k92) (##intrinsic ##vcore.procedure?) (bruijn ##.pred.372 0 1) (bruijn ##.span.102 1 33))
  {
   VEnv * _closure_env = _V60_V0vanity_V0list;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0span_V0k92, self))));
    VWORD _arg1 = 
      _V40_V10vcore_Dprocedure_Q;
    VWORD _arg2 = 
      _var1;
    VWORD _arg3 = 
      statics->vars[33];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0check__arg, _V60_V0vanity_V0list)}, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0list_V0check__arg(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0list_V0take__while_B_V0k98(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0take__while_B_V0k98, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%r.2030) ((##vcore.not (bruijn ##.%x.1029 1 0))) ((bruijn ##.%k.1028 3 0) (bruijn ##.%r.2030 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VNot2(runtime, NULL,
      statics->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      self->vars[0]);
    }
}
void _V50_V0vanity_V0list_V0take__while_B_V0k97(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0take__while_B_V0k97, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1027 1 0) ((bruijn ##.%k.1028 0 0) (bruijn ##.%p.1027 1 0)) (basic-block 1 1 (##.%x.2029) ((##vcore.car (bruijn ##.lis.380 3 2))) ((bruijn ##.pred.379 3 1) (close _V50_V0vanity_V0list_V0take__while_B_V0k98) (bruijn ##.%x.2029 0 0))))
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
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->up->vars[2]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[1]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0take__while_B_V0k98, self)))),
      self->vars[0]);
    }
}
}
void _V50_V0vanity_V0list_V0take__while_B_V10_Dlp_D381_V0k100(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0take__while_B_V10_Dlp_D381_V0k100, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1024 0 0) (basic-block 1 1 (##.%x.2027) ((##vcore.cdr (bruijn ##.rest.383 4 2))) (##qualified-call (vanity list take-while! ##.lp.381) #f (bruijn ##.lp.381 5 0) (bruijn ##.%k.1022 4 0) (bruijn ##.rest.383 4 2) (bruijn ##.%x.2027 0 0))) (##vcore.set-cdr! (bruijn ##.%k.1022 3 0) (bruijn ##.prev.382 3 1) '()))
if(VDecodeBool(
_var0)) {
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
      statics->up->up->up->vars[2];
    VWORD _arg2 = 
      self->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0list_V0take__while_B_V10_Dlp_D381(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
} else {
    VCallFuncWithGC(runtime, (VFunc)VSetCdr2, 3,
      statics->up->up->vars[0],
      statics->up->up->vars[1],
      VNULL);
}
}
void _V50_V0vanity_V0list_V0take__while_B_V10_Dlp_D381(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0take__while_B_V10_Dlp_D381, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 1 1 (##.%p.2025) ((##vcore.pair? (bruijn ##.rest.383 1 2))) (if (bruijn ##.%p.2025 0 0) (basic-block 1 1 (##.x.2026) ((##vcore.car (bruijn ##.rest.383 2 2))) ((bruijn ##.pred.379 6 1) (close _V50_V0vanity_V0list_V0take__while_B_V10_Dlp_D381_V0k100) (bruijn ##.x.2026 0 0))) ((bruijn ##.%k.1022 1 0) #f)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->vars[2]);
if(VDecodeBool(
self->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->vars[2]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 1)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0take__while_B_V10_Dlp_D381_V0k100, self)))),
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
    }
}
static void _V50_V0vanity_V0list_V0take__while_B_V0k101(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.%k.1020 4 0) (bruijn ##.lis.380 4 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      statics->up->up->up->vars[2]);
}
void _V50_V0vanity_V0list_V0take__while_B_V0k99(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0take__while_B_V0k99, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1021 0 0) ((bruijn ##.%k.1020 2 0) '()) (letrec 1 ((close "_V50_V0vanity_V0list_V0take__while_B_V10_Dlp_D381")) (basic-block 1 1 (##.%x.2028) ((##vcore.cdr (bruijn ##.lis.380 4 2))) (##qualified-call (vanity list take-while! ##.lp.381) #f (bruijn ##.lp.381 1 0) (close _V50_V0vanity_V0list_V0take__while_B_V0k101) (bruijn ##.lis.380 4 2) (bruijn ##.%x.2028 0 0)))))
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
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0take__while_B_V10_Dlp_D381, self))));
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      statics->up->up->up->vars[2]);
  {
    VClosure * _closure = VDecodeClosure(statics->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0take__while_B_V0k101, self))));
    VWORD _arg1 = 
      statics->up->up->up->vars[2];
    VWORD _arg2 = 
      self->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0list_V0take__while_B_V10_Dlp_D381(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
    }
}
}
void _V50_V0vanity_V0list_V0take__while_B_V0k96(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0take__while_B_V0k96, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0list_V0take__while_B_V0k97) (close _V50_V0vanity_V0list_V0take__while_B_V0k99))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0take__while_B_V0k97, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0take__while_B_V0k99, self)))));
}
static void _V50_V0vanity_V0list_V0take__while_B_V0k95(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##qualified-call (vanity list null-list?) #t (bruijn ##.null-list?.169 1 100) (close _V50_V0vanity_V0list_V0take__while_B_V0k96) (bruijn ##.lis.380 0 2))
  {
   VEnv * _closure_env = _V60_V0vanity_V0list;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0take__while_B_V0k96, self))));
    VWORD _arg1 = 
      self->vars[2];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0null__list_Q, _V60_V0vanity_V0list)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0list_V0null__list_Q(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0list_V0take__while_B(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0take__while_B, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (##qualified-call (vanity list check-arg) #t (bruijn ##.check-arg.149 1 80) (close _V50_V0vanity_V0list_V0take__while_B_V0k95) (##intrinsic ##vcore.procedure?) (bruijn ##.pred.379 0 1) (bruijn ##.take-while!.103 1 34))
  {
   VEnv * _closure_env = _V60_V0vanity_V0list;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0take__while_B_V0k95, self))));
    VWORD _arg1 = 
      _V40_V10vcore_Dprocedure_Q;
    VWORD _arg2 = 
      _var1;
    VWORD _arg3 = 
      statics->vars[34];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0check__arg, _V60_V0vanity_V0list)}, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0list_V0check__arg(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0list_V0split__while_V0k103(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0split__while_V0k103, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%r.2036) ((##vcore.not (bruijn ##.%x.1040 1 0))) ((bruijn ##.%k.1039 3 0) (bruijn ##.%r.2036 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VNot2(runtime, NULL,
      statics->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      self->vars[0]);
    }
}
void _V50_V0vanity_V0list_V0split__while_V0k102(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0split__while_V0k102, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.2031 1 0) ((bruijn ##.%k.1039 0 0) (bruijn ##.%p.2031 1 0)) (basic-block 1 1 (##.%x.2035) ((##vcore.car (bruijn ##.lst.386 3 2))) ((bruijn ##.pred.385 3 1) (close _V50_V0vanity_V0list_V0split__while_V0k103) (bruijn ##.%x.2035 0 0))))
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
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->up->vars[2]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[1]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0split__while_V0k103, self)))),
      self->vars[0]);
    }
}
}
void _V50_V0vanity_V0list_V0split__while_V0lambda47(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0split__while_V0lambda47, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%x.2032) ((##vcore.cdr (bruijn ##.lst.386 4 2))) (##qualified-call (vanity list split-while) #t (bruijn ##.split-while.104 5 35) (bruijn ##.%k.1033 1 0) (bruijn ##.pred.385 4 1) (bruijn ##.%x.2032 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      statics->up->up->up->vars[2]);
  {
   VEnv * _closure_env = _V60_V0vanity_V0list;
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      statics->up->up->up->vars[1];
    VWORD _arg2 = 
      self->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0split__while, _V60_V0vanity_V0list)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0list_V0split__while(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
void _V50_V0vanity_V0list_V0split__while_V0lambda48(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0split__while_V0lambda48, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 2 2 (##.%x.2033 ##.%x.2034) ((##vcore.car (bruijn ##.lst.386 4 2)) (##vcore.cons (bruijn ##.%x.2033 0 0) (bruijn ##.t.387 1 1))) ((bruijn ##.values.5 6 1) (bruijn ##.%k.1035 1 0) (bruijn ##.%x.2034 0 1) (bruijn ##.d.388 1 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->up->up->vars[2]);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      self->vars[0],
      statics->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 1)), 3,
      statics->vars[0],
      self->vars[1],
      statics->vars[2]);
    }
}
void _V50_V0vanity_V0list_V0split__while_V0k104(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0split__while_V0k104, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1032 0 0) ((bruijn ##.values.5 4 1) (bruijn ##.%k.1031 2 0) '() (bruijn ##.lst.386 2 2)) (##vcore.call-with-values (bruijn ##.%k.1031 2 0) (close _V50_V0vanity_V0list_V0split__while_V0lambda47) (close _V50_V0vanity_V0list_V0split__while_V0lambda48)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[1]), 3,
      statics->up->vars[0],
      VNULL,
      statics->up->vars[2]);
} else {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->up->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0split__while_V0lambda47, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0split__while_V0lambda48, self)))));
}
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
  // (basic-block 1 1 (##.%p.2031) ((##vcore.null? (bruijn ##.lst.386 1 2))) ((close _V50_V0vanity_V0list_V0split__while_V0k102) (close _V50_V0vanity_V0list_V0split__while_V0k104)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VNullP2(runtime, NULL,
      statics->vars[2]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0split__while_V0k102, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0split__while_V0k104, self)))));
    }
}
void _V50_V0vanity_V0list_V0drop__while_V0k106(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0drop__while_V0k106, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%r.2040) ((##vcore.not (bruijn ##.%x.1047 1 0))) ((bruijn ##.%k.1046 3 0) (bruijn ##.%r.2040 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VNot2(runtime, NULL,
      statics->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      self->vars[0]);
    }
}
void _V50_V0vanity_V0list_V0drop__while_V0k105(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0drop__while_V0k105, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.2037 1 0) ((bruijn ##.%k.1046 0 0) (bruijn ##.%p.2037 1 0)) (basic-block 1 1 (##.%x.2039) ((##vcore.car (bruijn ##.lst.390 3 2))) ((bruijn ##.pred.389 3 1) (close _V50_V0vanity_V0list_V0drop__while_V0k106) (bruijn ##.%x.2039 0 0))))
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
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->up->vars[2]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[1]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0drop__while_V0k106, self)))),
      self->vars[0]);
    }
}
}
void _V50_V0vanity_V0list_V0drop__while_V0k107(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0drop__while_V0k107, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1043 0 0) ((bruijn ##.%k.1042 2 0) (bruijn ##.lst.390 2 2)) (basic-block 1 1 (##.%x.2038) ((##vcore.cdr (bruijn ##.lst.390 3 2))) (##qualified-call (vanity list drop-while) #t (bruijn ##.drop-while.105 4 36) (bruijn ##.%k.1042 3 0) (bruijn ##.pred.389 3 1) (bruijn ##.%x.2038 0 0))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      statics->up->vars[2]);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      statics->up->up->vars[2]);
  {
   VEnv * _closure_env = _V60_V0vanity_V0list;
    VWORD _arg0 = 
      statics->up->up->vars[0];
    VWORD _arg1 = 
      statics->up->up->vars[1];
    VWORD _arg2 = 
      self->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0drop__while, _V60_V0vanity_V0list)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0list_V0drop__while(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
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
  // (basic-block 1 1 (##.%p.2037) ((##vcore.null? (bruijn ##.lst.390 1 2))) ((close _V50_V0vanity_V0list_V0drop__while_V0k105) (close _V50_V0vanity_V0list_V0drop__while_V0k107)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VNullP2(runtime, NULL,
      statics->vars[2]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0drop__while_V0k105, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0drop__while_V0k107, self)))));
    }
}
void _V50_V0vanity_V0list_V0take__while_V0k109(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0take__while_V0k109, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%r.2046) ((##vcore.not (bruijn ##.%x.1056 1 0))) ((bruijn ##.%k.1055 3 0) (bruijn ##.%r.2046 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VNot2(runtime, NULL,
      statics->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      self->vars[0]);
    }
}
void _V50_V0vanity_V0list_V0take__while_V0k108(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0take__while_V0k108, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.2041 1 0) ((bruijn ##.%k.1055 0 0) (bruijn ##.%p.2041 1 0)) (basic-block 1 1 (##.%x.2045) ((##vcore.car (bruijn ##.lst.392 3 2))) ((bruijn ##.pred.391 3 1) (close _V50_V0vanity_V0list_V0take__while_V0k109) (bruijn ##.%x.2045 0 0))))
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
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->up->vars[2]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[1]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0take__while_V0k109, self)))),
      self->vars[0]);
    }
}
}
void _V50_V0vanity_V0list_V0take__while_V0k111(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0take__while_V0k111, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%r.2044) ((##vcore.cons (bruijn ##.%x.2042 2 0) (bruijn ##.%x.1052 1 0))) ((bruijn ##.%k.1049 5 0) (bruijn ##.%r.2044 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[0],
      statics->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      self->vars[0]);
    }
}
void _V50_V0vanity_V0list_V0take__while_V0k110(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0take__while_V0k110, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1050 0 0) ((bruijn ##.%k.1049 2 0) '()) (basic-block 2 2 (##.%x.2042 ##.%x.2043) ((##vcore.car (bruijn ##.lst.392 3 2)) (##vcore.cdr (bruijn ##.lst.392 3 2))) (##qualified-call (vanity list take-while) #t (bruijn ##.take-while.106 4 37) (close _V50_V0vanity_V0list_V0take__while_V0k111) (bruijn ##.pred.391 3 1) (bruijn ##.%x.2043 0 1))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VNULL);
} else {
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
   VEnv * _closure_env = _V60_V0vanity_V0list;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0take__while_V0k111, self))));
    VWORD _arg1 = 
      statics->up->up->vars[1];
    VWORD _arg2 = 
      self->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0take__while, _V60_V0vanity_V0list)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0list_V0take__while(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
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
  // (basic-block 1 1 (##.%p.2041) ((##vcore.null? (bruijn ##.lst.392 1 2))) ((close _V50_V0vanity_V0list_V0take__while_V0k108) (close _V50_V0vanity_V0list_V0take__while_V0k110)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VNullP2(runtime, NULL,
      statics->vars[2]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0take__while_V0k108, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0take__while_V0k110, self)))));
    }
}
void _V50_V0vanity_V0list_V0delete_B_V0k113(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0delete_B_V0k113, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%r.2047) ((##vcore.not (bruijn ##.%x.1060 1 0))) ((bruijn ##.%k.1059 2 0) (bruijn ##.%r.2047 0 0)))
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
void _V50_V0vanity_V0list_V0delete_B_V0lambda49(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0delete_B_V0lambda49, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.=.396 1 0) (close _V50_V0vanity_V0list_V0delete_B_V0k113) (bruijn ##.x.393 2 1) (bruijn ##.y.397 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0delete_B_V0k113, self)))),
      statics->up->vars[1],
      _var1);
}
void _V50_V0vanity_V0list_V0delete_B_V0k112(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0delete_B_V0k112, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity list filter!) #t (bruijn ##.filter!.116 2 47) (bruijn ##.%k.1058 1 0) (close _V50_V0vanity_V0list_V0delete_B_V0lambda49) (bruijn ##.lis.394 1 2))
  {
   VEnv * _closure_env = _V60_V0vanity_V0list;
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0delete_B_V0lambda49, self))));
    VWORD _arg2 = 
      statics->vars[2];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0filter_B, _V60_V0vanity_V0list)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0list_V0filter_B(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0list_V0delete_B(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, ...) {
 if(argc < 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0delete_B, got ~D~N"
  "-- expected 3 or more~N"
  , argc);
 }
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 3, argc, _var2);
  struct { VEnv self; VWORD argv[4]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 4, 4, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _varargs;
  // (##qualified-call (vanity list get-optional) #t (bruijn ##.get-optional.182 1 113) (close _V50_V0vanity_V0list_V0delete_B_V0k112) (bruijn ##.maybe-=.395 0 3) (bruijn ##.equal?.4 2 0))
  {
   VEnv * _closure_env = _V60_V0vanity_V0list;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0delete_B_V0k112, self))));
    VWORD _arg1 = 
      _varargs;
    VWORD _arg2 = 
      statics->up->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0get__optional, _V60_V0vanity_V0list)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0list_V0get__optional(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0list_V0delete_V0k115(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0delete_V0k115, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%r.2048) ((##vcore.not (bruijn ##.%x.1063 1 0))) ((bruijn ##.%k.1062 2 0) (bruijn ##.%r.2048 0 0)))
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
void _V50_V0vanity_V0list_V0delete_V0lambda50(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0delete_V0lambda50, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.=.401 1 0) (close _V50_V0vanity_V0list_V0delete_V0k115) (bruijn ##.x.398 2 1) (bruijn ##.y.402 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0delete_V0k115, self)))),
      statics->up->vars[1],
      _var1);
}
void _V50_V0vanity_V0list_V0delete_V0k114(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0delete_V0k114, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity list filter) #t (bruijn ##.filter.117 2 48) (bruijn ##.%k.1061 1 0) (close _V50_V0vanity_V0list_V0delete_V0lambda50) (bruijn ##.lis.399 1 2))
  {
   VEnv * _closure_env = _V60_V0vanity_V0list;
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0delete_V0lambda50, self))));
    VWORD _arg2 = 
      statics->vars[2];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0filter, _V60_V0vanity_V0list)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0list_V0filter(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0list_V0delete(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, ...) {
 if(argc < 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0delete, got ~D~N"
  "-- expected 3 or more~N"
  , argc);
 }
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 3, argc, _var2);
  struct { VEnv self; VWORD argv[4]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 4, 4, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _varargs;
  // (##qualified-call (vanity list get-optional) #t (bruijn ##.get-optional.182 1 113) (close _V50_V0vanity_V0list_V0delete_V0k114) (bruijn ##.maybe-=.400 0 3) (bruijn ##.equal?.4 2 0))
  {
   VEnv * _closure_env = _V60_V0vanity_V0list;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0delete_V0k114, self))));
    VWORD _arg1 = 
      _varargs;
    VWORD _arg2 = 
      statics->up->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0get__optional, _V60_V0vanity_V0list)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0list_V0get__optional(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0list_V0find__tail_V10_Dlp_D405_V0k118(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0find__tail_V10_Dlp_D405_V0k118, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1067 0 0) ((bruijn ##.%k.1065 4 0) (bruijn ##.list.406 4 1)) (basic-block 1 1 (##.%x.2051) ((##vcore.cdr (bruijn ##.list.406 5 1))) (##qualified-call (vanity list find-tail ##.lp.405) #f (bruijn ##.lp.405 6 0) (bruijn ##.%k.1065 5 0) (bruijn ##.%x.2051 0 0))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      statics->up->up->up->vars[1]);
} else {
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
      VGetArg(statics, 5-1, 0);
    VWORD _arg1 = 
      self->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0list_V0find__tail_V10_Dlp_D405(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
}
}
void _V50_V0vanity_V0list_V0find__tail_V10_Dlp_D405_V0k117(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0find__tail_V10_Dlp_D405_V0k117, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%p.2049) ((##vcore.not (bruijn ##.%x.1070 1 0))) (if (bruijn ##.%p.2049 0 0) (basic-block 1 1 (##.%x.2050) ((##vcore.car (bruijn ##.list.406 3 1))) ((bruijn ##.pred.403 5 1) (close _V50_V0vanity_V0list_V0find__tail_V10_Dlp_D405_V0k118) (bruijn ##.%x.2050 0 0))) ((bruijn ##.%k.1065 2 0) #f)))
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
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->up->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 1)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0find__tail_V10_Dlp_D405_V0k118, self)))),
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
}
void _V50_V0vanity_V0list_V0find__tail_V10_Dlp_D405(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0find__tail_V10_Dlp_D405, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (##qualified-call (vanity list null-list?) #t (bruijn ##.null-list?.169 3 100) (close _V50_V0vanity_V0list_V0find__tail_V10_Dlp_D405_V0k117) (bruijn ##.list.406 0 1))
  {
   VEnv * _closure_env = _V60_V0vanity_V0list;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0find__tail_V10_Dlp_D405_V0k117, self))));
    VWORD _arg1 = 
      _var1;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0null__list_Q, _V60_V0vanity_V0list)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0list_V0null__list_Q(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
static void _V50_V0vanity_V0list_V0find__tail_V0k116(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (letrec 1 ((close "_V50_V0vanity_V0list_V0find__tail_V10_Dlp_D405")) (##qualified-call (vanity list find-tail ##.lp.405) #f (bruijn ##.lp.405 0 0) (bruijn ##.%k.1064 1 0) (bruijn ##.list.404 1 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0find__tail_V10_Dlp_D405, self))));
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
       _V50_V0vanity_V0list_V0find__tail_V10_Dlp_D405(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
}
void _V50_V0vanity_V0list_V0find__tail(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0find__tail, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (##qualified-call (vanity list check-arg) #t (bruijn ##.check-arg.149 1 80) (close _V50_V0vanity_V0list_V0find__tail_V0k116) (##intrinsic ##vcore.procedure?) (bruijn ##.pred.403 0 1) (bruijn ##.find-tail.109 1 40))
  {
   VEnv * _closure_env = _V60_V0vanity_V0list;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0find__tail_V0k116, self))));
    VWORD _arg1 = 
      _V40_V10vcore_Dprocedure_Q;
    VWORD _arg2 = 
      _var1;
    VWORD _arg3 = 
      statics->vars[40];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0check__arg, _V60_V0vanity_V0list)}, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0list_V0check__arg(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0list_V0find_V0k119(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0find_V0k119, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.x.3.409 0 0) (basic-block 1 1 (##.%r.2052) ((##vcore.car (bruijn ##.x.3.409 1 0))) ((bruijn ##.%k.1071 2 0) (bruijn ##.%r.2052 0 0))) ((bruijn ##.%k.1071 1 0) #f))
if(VDecodeBool(
_var0)) {
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
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0list_V0find(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0find, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (##qualified-call (vanity list find-tail) #t (bruijn ##.find-tail.109 1 40) (close _V50_V0vanity_V0list_V0find_V0k119) (bruijn ##.pred.407 0 1) (bruijn ##.list.408 0 2))
  {
   VEnv * _closure_env = _V60_V0vanity_V0list;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0find_V0k119, self))));
    VWORD _arg1 = 
      _var1;
    VWORD _arg2 = 
      _var2;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0find__tail, _V60_V0vanity_V0list)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0list_V0find__tail(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0list_V0filter__map_V10_Drecur_D413_V0lambda51(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0filter__map_V10_Drecur_D413_V0lambda51, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity list %cars+cdrs) #t (bruijn ##.%cars+cdrs.180 5 111) (bruijn ##.%k.1075 0 0) (bruijn ##.lists.414 1 1))
  {
   VEnv * _closure_env = _V60_V0vanity_V0list;
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      statics->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0_Mcars_Pcdrs, _V60_V0vanity_V0list)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0list_V0_Mcars_Pcdrs(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0list_V0filter__map_V10_Drecur_D413_V0k122(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0filter__map_V10_Drecur_D413_V0k122, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%r.2055) ((##vcore.cons (bruijn ##.x.1.417 2 0) (bruijn ##.%x.1078 1 0))) ((bruijn ##.%k.1076 4 0) (bruijn ##.%r.2055 0 0)))
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
void _V50_V0vanity_V0list_V0filter__map_V10_Drecur_D413_V0k121(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0filter__map_V10_Drecur_D413_V0k121, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.x.1.417 0 0) (##qualified-call (vanity list filter-map ##.recur.413) #f (bruijn ##.recur.413 4 0) (close _V50_V0vanity_V0list_V0filter__map_V10_Drecur_D413_V0k122) (bruijn ##.cdrs.416 2 2)) (##qualified-call (vanity list filter-map ##.recur.413) #f (bruijn ##.recur.413 4 0) (bruijn ##.%k.1076 2 0) (bruijn ##.cdrs.416 2 2)))
if(VDecodeBool(
_var0)) {
  {
    VClosure * _closure = VDecodeClosure(statics->up->up->up->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0filter__map_V10_Drecur_D413_V0k122, self))));
    VWORD _arg1 = 
      statics->up->vars[2];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0list_V0filter__map_V10_Drecur_D413(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
} else {
  {
    VClosure * _closure = VDecodeClosure(statics->up->up->up->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->up->vars[0];
    VWORD _arg1 = 
      statics->up->vars[2];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0list_V0filter__map_V10_Drecur_D413(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
}
void _V50_V0vanity_V0list_V0filter__map_V10_Drecur_D413_V0lambda52(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0filter__map_V10_Drecur_D413_V0lambda52, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 1 1 (##.%p.2054) ((##vcore.pair? (bruijn ##.cars.415 1 1))) (if (bruijn ##.%p.2054 0 0) (##vcore.apply (close _V50_V0vanity_V0list_V0filter__map_V10_Drecur_D413_V0k121) (bruijn ##.f.410 5 1) (bruijn ##.cars.415 1 1)) ((bruijn ##.%k.1076 1 0) '())))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->vars[1]);
if(VDecodeBool(
self->vars[0])) {
    VCallFuncWithGC(runtime, (VFunc)VApply2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0filter__map_V10_Drecur_D413_V0k121, self)))),
      VGetArg(statics, 5-1, 1),
      statics->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VNULL);
}
    }
}
void _V50_V0vanity_V0list_V0filter__map_V10_Drecur_D413(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0filter__map_V10_Drecur_D413, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (##vcore.call-with-values (bruijn ##.%k.1074 0 0) (close _V50_V0vanity_V0list_V0filter__map_V10_Drecur_D413_V0lambda51) (close _V50_V0vanity_V0list_V0filter__map_V10_Drecur_D413_V0lambda52))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0filter__map_V10_Drecur_D413_V0lambda51, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0filter__map_V10_Drecur_D413_V0lambda52, self)))));
}
void _V50_V0vanity_V0list_V0filter__map_V10_Drecur_D419_V0k125(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0filter__map_V10_Drecur_D419_V0k125, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.x.2.422 0 0) (basic-block 1 1 (##.%r.2059) ((##vcore.cons (bruijn ##.x.2.422 1 0) (bruijn ##.tail.421 3 0))) ((bruijn ##.%k.1080 6 0) (bruijn ##.%r.2059 0 0))) ((bruijn ##.%k.1080 5 0) (bruijn ##.tail.421 2 0)))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      statics->up->up->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 1,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      statics->up->vars[0]);
}
}
void _V50_V0vanity_V0list_V0filter__map_V10_Drecur_D419_V0k124(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0filter__map_V10_Drecur_D419_V0k124, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%x.2058) ((##vcore.car (bruijn ##.lis.420 4 1))) ((bruijn ##.f.410 7 1) (close _V50_V0vanity_V0list_V0filter__map_V10_Drecur_D419_V0k125) (bruijn ##.%x.2058 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->up->up->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 1)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0filter__map_V10_Drecur_D419_V0k125, self)))),
      self->vars[0]);
    }
}
void _V50_V0vanity_V0list_V0filter__map_V10_Drecur_D419_V0k123(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0filter__map_V10_Drecur_D419_V0k123, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1081 0 0) ((bruijn ##.%k.1080 1 0) (bruijn ##.lis.420 1 1)) (basic-block 1 1 (##.%x.2057) ((##vcore.cdr (bruijn ##.lis.420 2 1))) (##qualified-call (vanity list filter-map ##.recur.419) #f (bruijn ##.recur.419 3 0) (close _V50_V0vanity_V0list_V0filter__map_V10_Drecur_D419_V0k124) (bruijn ##.%x.2057 0 0))))
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
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      statics->up->vars[1]);
  {
    VClosure * _closure = VDecodeClosure(statics->up->up->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0filter__map_V10_Drecur_D419_V0k124, self))));
    VWORD _arg1 = 
      self->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0list_V0filter__map_V10_Drecur_D419(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
}
}
void _V50_V0vanity_V0list_V0filter__map_V10_Drecur_D419(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0filter__map_V10_Drecur_D419, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (##qualified-call (vanity list null-list?) #t (bruijn ##.null-list?.169 4 100) (close _V50_V0vanity_V0list_V0filter__map_V10_Drecur_D419_V0k123) (bruijn ##.lis.420 0 1))
  {
   VEnv * _closure_env = _V60_V0vanity_V0list;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0filter__map_V10_Drecur_D419_V0k123, self))));
    VWORD _arg1 = 
      _var1;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0null__list_Q, _V60_V0vanity_V0list)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0list_V0null__list_Q(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
static void _V50_V0vanity_V0list_V0filter__map_V0k120(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.2053) ((##vcore.pair? (bruijn ##.lists.412 1 3))) (if (bruijn ##.%p.2053 0 0) (letrec 1 ((close "_V50_V0vanity_V0list_V0filter__map_V10_Drecur_D413")) (basic-block 1 1 (##.%x.2056) ((##vcore.cons (bruijn ##.lis1.411 3 2) (bruijn ##.lists.412 3 3))) (##qualified-call (vanity list filter-map ##.recur.413) #f (bruijn ##.recur.413 1 0) (bruijn ##.%k.1072 3 0) (bruijn ##.%x.2056 0 0)))) (letrec 1 ((close "_V50_V0vanity_V0list_V0filter__map_V10_Drecur_D419")) (##qualified-call (vanity list filter-map ##.recur.419) #f (bruijn ##.recur.419 0 0) (bruijn ##.%k.1072 2 0) (bruijn ##.lis1.411 2 2)))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->vars[3]);
if(VDecodeBool(
self->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0filter__map_V10_Drecur_D413, self))));
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->up->up->vars[2],
      statics->up->up->vars[3]);
  {
    VClosure * _closure = VDecodeClosure(statics->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->up->up->vars[0];
    VWORD _arg1 = 
      self->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0list_V0filter__map_V10_Drecur_D413(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
    }
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0filter__map_V10_Drecur_D419, self))));
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
       _V50_V0vanity_V0list_V0filter__map_V10_Drecur_D419(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
}
    }
}
void _V50_V0vanity_V0list_V0filter__map(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, ...) {
 if(argc < 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0filter__map, got ~D~N"
  "-- expected 3 or more~N"
  , argc);
 }
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 3, argc, _var2);
  struct { VEnv self; VWORD argv[4]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 4, 4, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _varargs;
  // (##qualified-call (vanity list check-arg) #t (bruijn ##.check-arg.149 1 80) (close _V50_V0vanity_V0list_V0filter__map_V0k120) (##intrinsic ##vcore.procedure?) (bruijn ##.f.410 0 1) (bruijn ##.filter-map.111 1 42))
  {
   VEnv * _closure_env = _V60_V0vanity_V0list;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0filter__map_V0k120, self))));
    VWORD _arg1 = 
      _V40_V10vcore_Dprocedure_Q;
    VWORD _arg2 = 
      _var1;
    VWORD _arg3 = 
      statics->vars[42];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0check__arg, _V60_V0vanity_V0list)}, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0list_V0check__arg(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0list_V0remove_B_V0k126(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0remove_B_V0k126, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%r.2060) ((##vcore.not (bruijn ##.%x.1086 1 0))) ((bruijn ##.%k.1085 2 0) (bruijn ##.%r.2060 0 0)))
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
void _V50_V0vanity_V0list_V0remove_B_V0lambda53(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0remove_B_V0lambda53, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.pred.424 1 1) (close _V50_V0vanity_V0list_V0remove_B_V0k126) (bruijn ##.x.426 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[1]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0remove_B_V0k126, self)))),
      _var1);
}
void _V50_V0vanity_V0list_V0remove_B(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0remove_B, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (##qualified-call (vanity list filter!) #t (bruijn ##.filter!.116 1 47) (bruijn ##.%k.1084 0 0) (close _V50_V0vanity_V0list_V0remove_B_V0lambda53) (bruijn ##.l.425 0 2))
  {
   VEnv * _closure_env = _V60_V0vanity_V0list;
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0remove_B_V0lambda53, self))));
    VWORD _arg2 = 
      _var2;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0filter_B, _V60_V0vanity_V0list)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0list_V0filter_B(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0list_V0remove_V0k127(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0remove_V0k127, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%r.2061) ((##vcore.not (bruijn ##.%x.1089 1 0))) ((bruijn ##.%k.1088 2 0) (bruijn ##.%r.2061 0 0)))
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
void _V50_V0vanity_V0list_V0remove_V0lambda54(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0remove_V0lambda54, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.pred.427 1 1) (close _V50_V0vanity_V0list_V0remove_V0k127) (bruijn ##.x.429 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[1]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0remove_V0k127, self)))),
      _var1);
}
void _V50_V0vanity_V0list_V0remove(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0remove, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (##qualified-call (vanity list filter) #t (bruijn ##.filter.117 1 48) (bruijn ##.%k.1087 0 0) (close _V50_V0vanity_V0list_V0remove_V0lambda54) (bruijn ##.l.428 0 2))
  {
   VEnv * _closure_env = _V60_V0vanity_V0list;
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0remove_V0lambda54, self))));
    VWORD _arg2 = 
      _var2;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0filter, _V60_V0vanity_V0list)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0list_V0filter(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
static void _V50_V0vanity_V0list_V0partition_B_V10_Dscan__in_D432_V10_Dlp_D437_V0k131(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%x.2065) ((##vcore.cdr (bruijn ##.lis.439 4 2))) (##qualified-call (vanity list partition! ##.scan-out.433) #f (bruijn ##.scan-out.433 7 1) (bruijn ##.%k.1093 4 0) (bruijn ##.in-prev.438 4 1) (bruijn ##.lis.439 4 2) (bruijn ##.%x.2065 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      statics->up->up->up->vars[2]);
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 7-1, 1));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->up->up->up->vars[0];
    VWORD _arg1 = 
      statics->up->up->up->vars[1];
    VWORD _arg2 = 
      statics->up->up->up->vars[2];
    VWORD _arg3 = 
      self->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0list_V0partition_B_V10_Dscan__out_D433(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
    }
}
void _V50_V0vanity_V0list_V0partition_B_V10_Dscan__in_D432_V10_Dlp_D437_V0k130(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0partition_B_V10_Dscan__in_D432_V10_Dlp_D437_V0k130, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1095 0 0) (basic-block 1 1 (##.%x.2064) ((##vcore.cdr (bruijn ##.lis.439 4 2))) (##qualified-call (vanity list partition! ##.scan-in.432 ##.lp.437) #f (bruijn ##.lp.437 5 0) (bruijn ##.%k.1093 4 0) (bruijn ##.lis.439 4 2) (bruijn ##.%x.2064 0 0))) (##vcore.set-cdr! (close _V50_V0vanity_V0list_V0partition_B_V10_Dscan__in_D432_V10_Dlp_D437_V0k131) (bruijn ##.out-prev.435 5 2) (bruijn ##.lis.439 3 2)))
if(VDecodeBool(
_var0)) {
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
      statics->up->up->up->vars[2];
    VWORD _arg2 = 
      self->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0list_V0partition_B_V10_Dscan__in_D432_V10_Dlp_D437(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
} else {
    VCallFuncWithGC(runtime, (VFunc)VSetCdr2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0partition_B_V10_Dscan__in_D432_V10_Dlp_D437_V0k131, self)))),
      VGetArg(statics, 5-1, 2),
      statics->up->up->vars[2]);
}
}
void _V50_V0vanity_V0list_V0partition_B_V10_Dscan__in_D432_V10_Dlp_D437(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0partition_B_V10_Dscan__in_D432_V10_Dlp_D437, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 1 1 (##.%p.2062) ((##vcore.pair? (bruijn ##.lis.439 1 2))) (if (bruijn ##.%p.2062 0 0) (basic-block 1 1 (##.%x.2063) ((##vcore.car (bruijn ##.lis.439 2 2))) ((bruijn ##.pred.430 7 1) (close _V50_V0vanity_V0list_V0partition_B_V10_Dscan__in_D432_V10_Dlp_D437_V0k130) (bruijn ##.%x.2063 0 0))) (##vcore.set-cdr! (bruijn ##.%k.1093 1 0) (bruijn ##.out-prev.435 3 2) (bruijn ##.lis.439 1 2))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->vars[2]);
if(VDecodeBool(
self->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->vars[2]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 1)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0partition_B_V10_Dscan__in_D432_V10_Dlp_D437_V0k130, self)))),
      self->vars[0]);
    }
} else {
    VCallFuncWithGC(runtime, (VFunc)VSetCdr2, 3,
      statics->vars[0],
      statics->up->up->vars[2],
      statics->vars[2]);
}
    }
}
void _V50_V0vanity_V0list_V0partition_B_V10_Dscan__in_D432(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0partition_B_V10_Dscan__in_D432, got ~D~N"
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
  // (letrec 1 ((close "_V50_V0vanity_V0list_V0partition_B_V10_Dscan__in_D432_V10_Dlp_D437")) (##qualified-call (vanity list partition! ##.scan-in.432 ##.lp.437) #f (bruijn ##.lp.437 0 0) (bruijn ##.%k.1092 1 0) (bruijn ##.in-prev.434 1 1) (bruijn ##.lis.436 1 3)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0partition_B_V10_Dscan__in_D432_V10_Dlp_D437, self))));
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      statics->vars[1];
    VWORD _arg2 = 
      statics->vars[3];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0list_V0partition_B_V10_Dscan__in_D432_V10_Dlp_D437(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
static void _V50_V0vanity_V0list_V0partition_B_V10_Dscan__out_D433_V10_Dlp_D443_V0k133(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%x.2068) ((##vcore.cdr (bruijn ##.lis.445 4 2))) (##qualified-call (vanity list partition! ##.scan-in.432) #f (bruijn ##.scan-in.432 7 0) (bruijn ##.%k.1100 4 0) (bruijn ##.lis.445 4 2) (bruijn ##.out-prev.444 4 1) (bruijn ##.%x.2068 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      statics->up->up->up->vars[2]);
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 7-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->up->up->up->vars[0];
    VWORD _arg1 = 
      statics->up->up->up->vars[2];
    VWORD _arg2 = 
      statics->up->up->up->vars[1];
    VWORD _arg3 = 
      self->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0list_V0partition_B_V10_Dscan__in_D432(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
    }
}
void _V50_V0vanity_V0list_V0partition_B_V10_Dscan__out_D433_V10_Dlp_D443_V0k132(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0partition_B_V10_Dscan__out_D433_V10_Dlp_D443_V0k132, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1102 0 0) (##vcore.set-cdr! (close _V50_V0vanity_V0list_V0partition_B_V10_Dscan__out_D433_V10_Dlp_D443_V0k133) (bruijn ##.in-prev.440 5 1) (bruijn ##.lis.445 3 2)) (basic-block 1 1 (##.%x.2069) ((##vcore.cdr (bruijn ##.lis.445 4 2))) (##qualified-call (vanity list partition! ##.scan-out.433 ##.lp.443) #f (bruijn ##.lp.443 5 0) (bruijn ##.%k.1100 4 0) (bruijn ##.lis.445 4 2) (bruijn ##.%x.2069 0 0))))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VSetCdr2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0partition_B_V10_Dscan__out_D433_V10_Dlp_D443_V0k133, self)))),
      VGetArg(statics, 5-1, 1),
      statics->up->up->vars[2]);
} else {
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
      statics->up->up->up->vars[2];
    VWORD _arg2 = 
      self->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0list_V0partition_B_V10_Dscan__out_D433_V10_Dlp_D443(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
}
void _V50_V0vanity_V0list_V0partition_B_V10_Dscan__out_D433_V10_Dlp_D443(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0partition_B_V10_Dscan__out_D433_V10_Dlp_D443, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 1 1 (##.%p.2066) ((##vcore.pair? (bruijn ##.lis.445 1 2))) (if (bruijn ##.%p.2066 0 0) (basic-block 1 1 (##.%x.2067) ((##vcore.car (bruijn ##.lis.445 2 2))) ((bruijn ##.pred.430 7 1) (close _V50_V0vanity_V0list_V0partition_B_V10_Dscan__out_D433_V10_Dlp_D443_V0k132) (bruijn ##.%x.2067 0 0))) (##vcore.set-cdr! (bruijn ##.%k.1100 1 0) (bruijn ##.in-prev.440 3 1) (bruijn ##.lis.445 1 2))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->vars[2]);
if(VDecodeBool(
self->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->vars[2]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 1)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0partition_B_V10_Dscan__out_D433_V10_Dlp_D443_V0k132, self)))),
      self->vars[0]);
    }
} else {
    VCallFuncWithGC(runtime, (VFunc)VSetCdr2, 3,
      statics->vars[0],
      statics->up->up->vars[1],
      statics->vars[2]);
}
    }
}
void _V50_V0vanity_V0list_V0partition_B_V10_Dscan__out_D433(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0partition_B_V10_Dscan__out_D433, got ~D~N"
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
  // (letrec 1 ((close "_V50_V0vanity_V0list_V0partition_B_V10_Dscan__out_D433_V10_Dlp_D443")) (##qualified-call (vanity list partition! ##.scan-out.433 ##.lp.443) #f (bruijn ##.lp.443 0 0) (bruijn ##.%k.1099 1 0) (bruijn ##.out-prev.441 1 2) (bruijn ##.lis.442 1 3)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0partition_B_V10_Dscan__out_D433_V10_Dlp_D443, self))));
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
       _V50_V0vanity_V0list_V0partition_B_V10_Dscan__out_D433_V10_Dlp_D443(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
static void _V50_V0vanity_V0list_V0partition_B_V10_Dlp_D446_V0k136(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.values.5 12 1) (bruijn ##.%k.1107 4 0) (bruijn ##.lis.431 10 2) (bruijn ##.l.448 4 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 1)), 3,
      statics->up->up->up->vars[0],
      VGetArg(statics, 10-1, 2),
      statics->up->up->up->vars[2]);
}
void _V50_V0vanity_V0list_V0partition_B_V10_Dlp_D446_V0k135(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0partition_B_V10_Dlp_D446_V0k135, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1109 0 0) (basic-block 1 1 (##.%x.2074) ((##vcore.cdr (bruijn ##.l.448 4 2))) (##qualified-call (vanity list partition! ##.lp.446) #f (bruijn ##.lp.446 5 0) (bruijn ##.%k.1107 4 0) (bruijn ##.l.448 4 2) (bruijn ##.%x.2074 0 0))) (basic-block 1 1 (##.%x.2075) ((##vcore.cdr (bruijn ##.l.448 4 2))) (##qualified-call (vanity list partition! ##.scan-out.433) #f (bruijn ##.scan-out.433 8 1) (close _V50_V0vanity_V0list_V0partition_B_V10_Dlp_D446_V0k136) (bruijn ##.prev-l.447 4 1) (bruijn ##.l.448 4 2) (bruijn ##.%x.2075 0 0))))
if(VDecodeBool(
_var0)) {
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
      statics->up->up->up->vars[2];
    VWORD _arg2 = 
      self->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0list_V0partition_B_V10_Dlp_D446(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      statics->up->up->up->vars[2]);
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 8-1, 1));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0partition_B_V10_Dlp_D446_V0k136, self))));
    VWORD _arg1 = 
      statics->up->up->up->vars[1];
    VWORD _arg2 = 
      statics->up->up->up->vars[2];
    VWORD _arg3 = 
      self->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0list_V0partition_B_V10_Dscan__out_D433(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
    }
}
}
void _V50_V0vanity_V0list_V0partition_B_V10_Dlp_D446(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0partition_B_V10_Dlp_D446, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 2 2 (##.%x.2071 ##.%p.2072) ((##vcore.pair? (bruijn ##.l.448 1 2)) (##vcore.not (bruijn ##.%x.2071 0 0))) (if (bruijn ##.%p.2072 0 1) ((bruijn ##.values.5 9 1) (bruijn ##.%k.1107 1 0) (bruijn ##.lis.431 7 2) (bruijn ##.l.448 1 2)) (basic-block 1 1 (##.%x.2073) ((##vcore.car (bruijn ##.l.448 2 2))) ((bruijn ##.pred.430 8 1) (close _V50_V0vanity_V0list_V0partition_B_V10_Dlp_D446_V0k135) (bruijn ##.%x.2073 0 0)))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->vars[2]);
    self->vars[1] = _VBasic_VNot2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 1)), 3,
      statics->vars[0],
      VGetArg(statics, 7-1, 2),
      statics->vars[2]);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->vars[2]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 1)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0partition_B_V10_Dlp_D446_V0k135, self)))),
      self->vars[0]);
    }
}
    }
}
static void _V50_V0vanity_V0list_V0partition_B_V10_Dlp_D449_V0k138(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.values.5 12 1) (bruijn ##.%k.1115 4 0) (bruijn ##.l.451 4 2) (bruijn ##.lis.431 10 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 1)), 3,
      statics->up->up->up->vars[0],
      statics->up->up->up->vars[2],
      VGetArg(statics, 10-1, 2));
}
void _V50_V0vanity_V0list_V0partition_B_V10_Dlp_D449_V0k137(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0partition_B_V10_Dlp_D449_V0k137, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1117 0 0) (basic-block 1 1 (##.%x.2080) ((##vcore.cdr (bruijn ##.l.451 4 2))) (##qualified-call (vanity list partition! ##.scan-in.432) #f (bruijn ##.scan-in.432 8 0) (close _V50_V0vanity_V0list_V0partition_B_V10_Dlp_D449_V0k138) (bruijn ##.l.451 4 2) (bruijn ##.prev-l.450 4 1) (bruijn ##.%x.2080 0 0))) (basic-block 1 1 (##.%x.2081) ((##vcore.cdr (bruijn ##.l.451 4 2))) (##qualified-call (vanity list partition! ##.lp.449) #f (bruijn ##.lp.449 5 0) (bruijn ##.%k.1115 4 0) (bruijn ##.l.451 4 2) (bruijn ##.%x.2081 0 0))))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      statics->up->up->up->vars[2]);
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 8-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0partition_B_V10_Dlp_D449_V0k138, self))));
    VWORD _arg1 = 
      statics->up->up->up->vars[2];
    VWORD _arg2 = 
      statics->up->up->up->vars[1];
    VWORD _arg3 = 
      self->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0list_V0partition_B_V10_Dscan__in_D432(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
    }
} else {
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
      statics->up->up->up->vars[2];
    VWORD _arg2 = 
      self->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0list_V0partition_B_V10_Dlp_D449(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
}
void _V50_V0vanity_V0list_V0partition_B_V10_Dlp_D449(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0partition_B_V10_Dlp_D449, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 2 2 (##.%x.2077 ##.%p.2078) ((##vcore.pair? (bruijn ##.l.451 1 2)) (##vcore.not (bruijn ##.%x.2077 0 0))) (if (bruijn ##.%p.2078 0 1) ((bruijn ##.values.5 9 1) (bruijn ##.%k.1115 1 0) (bruijn ##.l.451 1 2) (bruijn ##.lis.431 7 2)) (basic-block 1 1 (##.%x.2079) ((##vcore.car (bruijn ##.l.451 2 2))) ((bruijn ##.pred.430 8 1) (close _V50_V0vanity_V0list_V0partition_B_V10_Dlp_D449_V0k137) (bruijn ##.%x.2079 0 0)))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->vars[2]);
    self->vars[1] = _VBasic_VNot2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 1)), 3,
      statics->vars[0],
      statics->vars[2],
      VGetArg(statics, 7-1, 2));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->vars[2]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 1)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0partition_B_V10_Dlp_D449_V0k137, self)))),
      self->vars[0]);
    }
}
    }
}
void _V50_V0vanity_V0list_V0partition_B_V0k134(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0partition_B_V0k134, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1106 0 0) (letrec 1 ((close "_V50_V0vanity_V0list_V0partition_B_V10_Dlp_D446")) (basic-block 1 1 (##.%x.2076) ((##vcore.cdr (bruijn ##.lis.431 6 2))) (##qualified-call (vanity list partition! ##.lp.446) #f (bruijn ##.lp.446 1 0) (bruijn ##.%k.1090 6 0) (bruijn ##.lis.431 6 2) (bruijn ##.%x.2076 0 0)))) (letrec 1 ((close "_V50_V0vanity_V0list_V0partition_B_V10_Dlp_D449")) (basic-block 1 1 (##.%x.2082) ((##vcore.cdr (bruijn ##.lis.431 6 2))) (##qualified-call (vanity list partition! ##.lp.449) #f (bruijn ##.lp.449 1 0) (bruijn ##.%k.1090 6 0) (bruijn ##.lis.431 6 2) (bruijn ##.%x.2082 0 0)))))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0partition_B_V10_Dlp_D446, self))));
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 6-1, 2));
  {
    VClosure * _closure = VDecodeClosure(statics->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      VGetArg(statics, 6-1, 0);
    VWORD _arg1 = 
      VGetArg(statics, 6-1, 2);
    VWORD _arg2 = 
      self->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0list_V0partition_B_V10_Dlp_D446(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
    }
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0partition_B_V10_Dlp_D449, self))));
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 6-1, 2));
  {
    VClosure * _closure = VDecodeClosure(statics->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      VGetArg(statics, 6-1, 0);
    VWORD _arg1 = 
      VGetArg(statics, 6-1, 2);
    VWORD _arg2 = 
      self->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0list_V0partition_B_V10_Dlp_D449(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
    }
}
}
void _V50_V0vanity_V0list_V0partition_B_V0k129(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0partition_B_V0k129, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1091 0 0) ((bruijn ##.values.5 3 1) (bruijn ##.%k.1090 1 0) (bruijn ##.lis.431 1 2) (bruijn ##.lis.431 1 2)) (letrec 2 ((close "_V50_V0vanity_V0list_V0partition_B_V10_Dscan__in_D432") (close "_V50_V0vanity_V0list_V0partition_B_V10_Dscan__out_D433")) (basic-block 1 1 (##.%x.2070) ((##vcore.car (bruijn ##.lis.431 3 2))) ((bruijn ##.pred.430 3 1) (close _V50_V0vanity_V0list_V0partition_B_V0k134) (bruijn ##.%x.2070 0 0)))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[1]), 3,
      statics->vars[0],
      statics->vars[2],
      statics->vars[2]);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0partition_B_V10_Dscan__in_D432, self))));
    self->vars[1] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0partition_B_V10_Dscan__out_D433, self))));
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->up->vars[2]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[1]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0partition_B_V0k134, self)))),
      self->vars[0]);
    }
    }
}
}
static void _V50_V0vanity_V0list_V0partition_B_V0k128(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##qualified-call (vanity list null-list?) #t (bruijn ##.null-list?.169 1 100) (close _V50_V0vanity_V0list_V0partition_B_V0k129) (bruijn ##.lis.431 0 2))
  {
   VEnv * _closure_env = _V60_V0vanity_V0list;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0partition_B_V0k129, self))));
    VWORD _arg1 = 
      self->vars[2];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0null__list_Q, _V60_V0vanity_V0list)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0list_V0null__list_Q(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0list_V0partition_B(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0partition_B, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (##qualified-call (vanity list check-arg) #t (bruijn ##.check-arg.149 1 80) (close _V50_V0vanity_V0list_V0partition_B_V0k128) (##intrinsic ##vcore.procedure?) (bruijn ##.pred.430 0 1) (bruijn ##.partition!.114 1 45))
  {
   VEnv * _closure_env = _V60_V0vanity_V0list;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0partition_B_V0k128, self))));
    VWORD _arg1 = 
      _V40_V10vcore_Dprocedure_Q;
    VWORD _arg2 = 
      _var1;
    VWORD _arg3 = 
      statics->vars[45];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0check__arg, _V60_V0vanity_V0list)}, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0list_V0check__arg(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0list_V0partition_V0lambda55(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0partition_V0lambda55, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%x.2084) ((##vcore.cdr (bruijn ##.lst.453 3 2))) (##qualified-call (vanity list partition) #t (bruijn ##.partition.115 4 46) (bruijn ##.%k.1126 1 0) (bruijn ##.pred.452 3 1) (bruijn ##.%x.2084 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      statics->up->up->vars[2]);
  {
   VEnv * _closure_env = _V60_V0vanity_V0list;
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      statics->up->up->vars[1];
    VWORD _arg2 = 
      self->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0partition, _V60_V0vanity_V0list)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0list_V0partition(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
void _V50_V0vanity_V0list_V0partition_V0k139(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0partition_V0k139, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1129 0 0) (basic-block 2 2 (##.%x.2086 ##.%x.2087) ((##vcore.car (bruijn ##.lst.453 5 2)) (##vcore.cons (bruijn ##.%x.2086 0 0) (bruijn ##.l.454 3 1))) ((bruijn ##.values.5 7 1) (bruijn ##.%k.1128 3 0) (bruijn ##.%x.2087 0 1) (bruijn ##.r.455 3 2))) (basic-block 2 2 (##.%x.2088 ##.%x.2089) ((##vcore.car (bruijn ##.lst.453 5 2)) (##vcore.cons (bruijn ##.%x.2088 0 0) (bruijn ##.r.455 3 2))) ((bruijn ##.values.5 7 1) (bruijn ##.%k.1128 3 0) (bruijn ##.l.454 3 1) (bruijn ##.%x.2089 0 1))))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 5-1, 2));
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      self->vars[0],
      statics->up->up->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 1)), 3,
      statics->up->up->vars[0],
      self->vars[1],
      statics->up->up->vars[2]);
    }
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 5-1, 2));
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      self->vars[0],
      statics->up->up->vars[2]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 1)), 3,
      statics->up->up->vars[0],
      statics->up->up->vars[1],
      self->vars[1]);
    }
}
}
void _V50_V0vanity_V0list_V0partition_V0lambda56(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0partition_V0lambda56, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 1 1 (##.%x.2085) ((##vcore.car (bruijn ##.lst.453 3 2))) ((bruijn ##.pred.452 3 1) (close _V50_V0vanity_V0list_V0partition_V0k139) (bruijn ##.%x.2085 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->up->vars[2]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[1]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0partition_V0k139, self)))),
      self->vars[0]);
    }
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
  // (basic-block 1 1 (##.%p.2083) ((##vcore.null? (bruijn ##.lst.453 1 2))) (if (bruijn ##.%p.2083 0 0) ((bruijn ##.values.5 3 1) (bruijn ##.%k.1124 1 0) '() '()) (##vcore.call-with-values (bruijn ##.%k.1124 1 0) (close _V50_V0vanity_V0list_V0partition_V0lambda55) (close _V50_V0vanity_V0list_V0partition_V0lambda56))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VNullP2(runtime, NULL,
      statics->vars[2]);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[1]), 3,
      statics->vars[0],
      VNULL,
      VNULL);
} else {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0partition_V0lambda55, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0partition_V0lambda56, self)))));
}
    }
}
void _V50_V0vanity_V0list_V0filter_B_V10_Dlp_D458_V10_Dscan__in_D460_V0k143(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0filter_B_V10_Dlp_D458_V10_Dscan__in_D460_V0k143, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1142 0 0) (basic-block 1 1 (##.%x.2095) ((##vcore.cdr (bruijn ##.lis.463 4 2))) (##qualified-call (vanity list filter! ##.lp.458 ##.scan-in.460) #f (bruijn ##.scan-in.460 5 0) (bruijn ##.%k.1140 4 0) (bruijn ##.lis.463 4 2) (bruijn ##.%x.2095 0 0))) (basic-block 1 1 (##.%x.2096) ((##vcore.cdr (bruijn ##.lis.463 4 2))) (##qualified-call (vanity list filter! ##.lp.458 ##.scan-out.461) #f (bruijn ##.scan-out.461 5 1) (bruijn ##.%k.1140 4 0) (bruijn ##.prev.462 4 1) (bruijn ##.%x.2096 0 0))))
if(VDecodeBool(
_var0)) {
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
      statics->up->up->up->vars[2];
    VWORD _arg2 = 
      self->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0list_V0filter_B_V10_Dlp_D458_V10_Dscan__in_D460(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      statics->up->up->up->vars[2]);
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 5-1, 1));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->up->up->up->vars[0];
    VWORD _arg1 = 
      statics->up->up->up->vars[1];
    VWORD _arg2 = 
      self->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0list_V0filter_B_V10_Dlp_D458_V10_Dscan__out_D461(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
}
void _V50_V0vanity_V0list_V0filter_B_V10_Dlp_D458_V10_Dscan__in_D460(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0filter_B_V10_Dlp_D458_V10_Dscan__in_D460, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 1 1 (##.%p.2093) ((##vcore.pair? (bruijn ##.lis.463 1 2))) (if (bruijn ##.%p.2093 0 0) (basic-block 1 1 (##.%x.2094) ((##vcore.car (bruijn ##.lis.463 2 2))) ((bruijn ##.pred.456 10 1) (close _V50_V0vanity_V0list_V0filter_B_V10_Dlp_D458_V10_Dscan__in_D460_V0k143) (bruijn ##.%x.2094 0 0))) ((bruijn ##.%k.1140 1 0) #f)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->vars[2]);
if(VDecodeBool(
self->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->vars[2]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 1)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0filter_B_V10_Dlp_D458_V10_Dscan__in_D460_V0k143, self)))),
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
    }
}
static void _V50_V0vanity_V0list_V0filter_B_V10_Dlp_D458_V10_Dscan__out_D461_V10_Dlp_D466_V0k145(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%x.2099) ((##vcore.cdr (bruijn ##.lis.467 4 1))) (##qualified-call (vanity list filter! ##.lp.458 ##.scan-in.460) #f (bruijn ##.scan-in.460 7 0) (bruijn ##.%k.1147 4 0) (bruijn ##.lis.467 4 1) (bruijn ##.%x.2099 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      statics->up->up->up->vars[1]);
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 7-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->up->up->up->vars[0];
    VWORD _arg1 = 
      statics->up->up->up->vars[1];
    VWORD _arg2 = 
      self->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0list_V0filter_B_V10_Dlp_D458_V10_Dscan__in_D460(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
void _V50_V0vanity_V0list_V0filter_B_V10_Dlp_D458_V10_Dscan__out_D461_V10_Dlp_D466_V0k144(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0filter_B_V10_Dlp_D458_V10_Dscan__out_D461_V10_Dlp_D466_V0k144, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1149 0 0) (##vcore.set-cdr! (close _V50_V0vanity_V0list_V0filter_B_V10_Dlp_D458_V10_Dscan__out_D461_V10_Dlp_D466_V0k145) (bruijn ##.prev.464 5 1) (bruijn ##.lis.467 3 1)) (basic-block 1 1 (##.%x.2100) ((##vcore.cdr (bruijn ##.lis.467 4 1))) (##qualified-call (vanity list filter! ##.lp.458 ##.scan-out.461 ##.lp.466) #f (bruijn ##.lp.466 5 0) (bruijn ##.%k.1147 4 0) (bruijn ##.%x.2100 0 0))))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VSetCdr2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0filter_B_V10_Dlp_D458_V10_Dscan__out_D461_V10_Dlp_D466_V0k145, self)))),
      VGetArg(statics, 5-1, 1),
      statics->up->up->vars[1]);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      statics->up->up->up->vars[1]);
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 5-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->up->up->up->vars[0];
    VWORD _arg1 = 
      self->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0list_V0filter_B_V10_Dlp_D458_V10_Dscan__out_D461_V10_Dlp_D466(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
}
}
void _V50_V0vanity_V0list_V0filter_B_V10_Dlp_D458_V10_Dscan__out_D461_V10_Dlp_D466(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0filter_B_V10_Dlp_D458_V10_Dscan__out_D461_V10_Dlp_D466, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.%p.2097) ((##vcore.pair? (bruijn ##.lis.467 1 1))) (if (bruijn ##.%p.2097 0 0) (basic-block 1 1 (##.%x.2098) ((##vcore.car (bruijn ##.lis.467 2 1))) ((bruijn ##.pred.456 12 1) (close _V50_V0vanity_V0list_V0filter_B_V10_Dlp_D458_V10_Dscan__out_D461_V10_Dlp_D466_V0k144) (bruijn ##.%x.2098 0 0))) (##vcore.set-cdr! (bruijn ##.%k.1147 1 0) (bruijn ##.prev.464 3 1) (bruijn ##.lis.467 1 1))))
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
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 1)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0filter_B_V10_Dlp_D458_V10_Dscan__out_D461_V10_Dlp_D466_V0k144, self)))),
      self->vars[0]);
    }
} else {
    VCallFuncWithGC(runtime, (VFunc)VSetCdr2, 3,
      statics->vars[0],
      statics->up->up->vars[1],
      statics->vars[1]);
}
    }
}
void _V50_V0vanity_V0list_V0filter_B_V10_Dlp_D458_V10_Dscan__out_D461(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0filter_B_V10_Dlp_D458_V10_Dscan__out_D461, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (letrec 1 ((close "_V50_V0vanity_V0list_V0filter_B_V10_Dlp_D458_V10_Dscan__out_D461_V10_Dlp_D466")) (##qualified-call (vanity list filter! ##.lp.458 ##.scan-out.461 ##.lp.466) #f (bruijn ##.lp.466 0 0) (bruijn ##.%k.1146 1 0) (bruijn ##.lis.465 1 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0filter_B_V10_Dlp_D458_V10_Dscan__out_D461_V10_Dlp_D466, self))));
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
       _V50_V0vanity_V0list_V0filter_B_V10_Dlp_D458_V10_Dscan__out_D461_V10_Dlp_D466(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
}
static void _V50_V0vanity_V0list_V0filter_B_V10_Dlp_D458_V0k146(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.%k.1136 6 0) (bruijn ##.ans.459 6 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 1,
      VGetArg(statics, 6-1, 1));
}
void _V50_V0vanity_V0list_V0filter_B_V10_Dlp_D458_V0k142(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0filter_B_V10_Dlp_D458_V0k142, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%p.2091) ((##vcore.not (bruijn ##.%x.1154 1 0))) (if (bruijn ##.%p.2091 0 0) (basic-block 1 1 (##.%x.2092) ((##vcore.cdr (bruijn ##.ans.459 5 1))) (##qualified-call (vanity list filter! ##.lp.458) #f (bruijn ##.lp.458 6 0) (bruijn ##.%k.1136 5 0) (bruijn ##.%x.2092 0 0))) (letrec 2 ((close "_V50_V0vanity_V0list_V0filter_B_V10_Dlp_D458_V10_Dscan__in_D460") (close "_V50_V0vanity_V0list_V0filter_B_V10_Dlp_D458_V10_Dscan__out_D461")) (basic-block 1 1 (##.%x.2101) ((##vcore.cdr (bruijn ##.ans.459 6 1))) (##qualified-call (vanity list filter! ##.lp.458 ##.scan-in.460) #f (bruijn ##.scan-in.460 1 0) (close _V50_V0vanity_V0list_V0filter_B_V10_Dlp_D458_V0k146) (bruijn ##.ans.459 6 1) (bruijn ##.%x.2101 0 0))))))
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
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 5-1, 1));
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
       _V50_V0vanity_V0list_V0filter_B_V10_Dlp_D458(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0filter_B_V10_Dlp_D458_V10_Dscan__in_D460, self))));
    self->vars[1] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0filter_B_V10_Dlp_D458_V10_Dscan__out_D461, self))));
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 6-1, 1));
  {
    VClosure * _closure = VDecodeClosure(statics->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0filter_B_V10_Dlp_D458_V0k146, self))));
    VWORD _arg1 = 
      VGetArg(statics, 6-1, 1);
    VWORD _arg2 = 
      self->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0list_V0filter_B_V10_Dlp_D458_V10_Dscan__in_D460(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
    }
}
    }
}
void _V50_V0vanity_V0list_V0filter_B_V10_Dlp_D458_V0k141(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0filter_B_V10_Dlp_D458_V0k141, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1137 0 0) ((bruijn ##.%k.1136 1 0) (bruijn ##.ans.459 1 1)) (basic-block 1 1 (##.%x.2090) ((##vcore.car (bruijn ##.ans.459 2 1))) ((bruijn ##.pred.456 4 1) (close _V50_V0vanity_V0list_V0filter_B_V10_Dlp_D458_V0k142) (bruijn ##.%x.2090 0 0))))
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
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[1]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0filter_B_V10_Dlp_D458_V0k142, self)))),
      self->vars[0]);
    }
}
}
void _V50_V0vanity_V0list_V0filter_B_V10_Dlp_D458(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0filter_B_V10_Dlp_D458, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (##qualified-call (vanity list null-list?) #t (bruijn ##.null-list?.169 3 100) (close _V50_V0vanity_V0list_V0filter_B_V10_Dlp_D458_V0k141) (bruijn ##.ans.459 0 1))
  {
   VEnv * _closure_env = _V60_V0vanity_V0list;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0filter_B_V10_Dlp_D458_V0k141, self))));
    VWORD _arg1 = 
      _var1;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0null__list_Q, _V60_V0vanity_V0list)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0list_V0null__list_Q(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
static void _V50_V0vanity_V0list_V0filter_B_V0k140(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (letrec 1 ((close "_V50_V0vanity_V0list_V0filter_B_V10_Dlp_D458")) (##qualified-call (vanity list filter! ##.lp.458) #f (bruijn ##.lp.458 0 0) (bruijn ##.%k.1135 1 0) (bruijn ##.lis.457 1 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0filter_B_V10_Dlp_D458, self))));
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
       _V50_V0vanity_V0list_V0filter_B_V10_Dlp_D458(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
}
void _V50_V0vanity_V0list_V0filter_B(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0filter_B, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (##qualified-call (vanity list check-arg) #t (bruijn ##.check-arg.149 1 80) (close _V50_V0vanity_V0list_V0filter_B_V0k140) (##intrinsic ##vcore.procedure?) (bruijn ##.pred.456 0 1) (bruijn ##.filter!.116 1 47))
  {
   VEnv * _closure_env = _V60_V0vanity_V0list;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0filter_B_V0k140, self))));
    VWORD _arg1 = 
      _V40_V10vcore_Dprocedure_Q;
    VWORD _arg2 = 
      _var1;
    VWORD _arg3 = 
      statics->vars[47];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0check__arg, _V60_V0vanity_V0list)}, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0list_V0check__arg(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0list_V0filter_V0k148(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0filter_V0k148, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%r.2106) ((##vcore.cons (bruijn ##.%x.2104 2 0) (bruijn ##.%x.1160 1 0))) ((bruijn ##.%k.1156 6 0) (bruijn ##.%r.2106 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[0],
      statics->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 1,
      self->vars[0]);
    }
}
void _V50_V0vanity_V0list_V0filter_V0k147(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0filter_V0k147, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1158 0 0) (basic-block 2 2 (##.%x.2104 ##.%x.2105) ((##vcore.car (bruijn ##.lst.469 4 2)) (##vcore.cdr (bruijn ##.lst.469 4 2))) (##qualified-call (vanity list filter) #t (bruijn ##.filter.117 5 48) (close _V50_V0vanity_V0list_V0filter_V0k148) (bruijn ##.pred.468 4 1) (bruijn ##.%x.2105 0 1))) (basic-block 1 1 (##.%x.2107) ((##vcore.cdr (bruijn ##.lst.469 4 2))) (##qualified-call (vanity list filter) #t (bruijn ##.filter.117 5 48) (bruijn ##.%k.1156 4 0) (bruijn ##.pred.468 4 1) (bruijn ##.%x.2107 0 0))))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->up->up->vars[2]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->up->up->up->vars[2]);
  {
   VEnv * _closure_env = _V60_V0vanity_V0list;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0filter_V0k148, self))));
    VWORD _arg1 = 
      statics->up->up->up->vars[1];
    VWORD _arg2 = 
      self->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0filter, _V60_V0vanity_V0list)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0list_V0filter(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      statics->up->up->up->vars[2]);
  {
   VEnv * _closure_env = _V60_V0vanity_V0list;
    VWORD _arg0 = 
      statics->up->up->up->vars[0];
    VWORD _arg1 = 
      statics->up->up->up->vars[1];
    VWORD _arg2 = 
      self->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0filter, _V60_V0vanity_V0list)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0list_V0filter(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
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
  // (basic-block 1 1 (##.%p.2102) ((##vcore.null? (bruijn ##.lst.469 1 2))) (if (bruijn ##.%p.2102 0 0) ((bruijn ##.%k.1156 1 0) (bruijn ##.lst.469 1 2)) (basic-block 1 1 (##.%x.2103) ((##vcore.car (bruijn ##.lst.469 2 2))) ((bruijn ##.pred.468 2 1) (close _V50_V0vanity_V0list_V0filter_V0k147) (bruijn ##.%x.2103 0 0)))))
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
      statics->vars[2]);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->vars[2]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[1]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0filter_V0k147, self)))),
      self->vars[0]);
    }
}
    }
}
void _V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D472_V0k150(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D472_V0k150, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity list append!) #t (bruijn ##.append!.143 8 74) (bruijn ##.%k.1165 5 0) (bruijn ##.%x.1167 2 0) (bruijn ##.%x.1168 0 0))
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
void _V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D472_V0k149(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D472_V0k149, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%x.2110) ((##vcore.cdr (bruijn ##.xs.473 4 1))) (##qualified-call (vanity list append-map! ##.loop.472) #f (bruijn ##.loop.472 5 0) (close _V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D472_V0k150) (bruijn ##.%x.2110 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      statics->up->up->up->vars[1]);
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 5-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D472_V0k150, self))));
    VWORD _arg1 = 
      self->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D472(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
}
void _V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D472(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D472, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.%p.2108) ((##vcore.null? (bruijn ##.xs.473 1 1))) (if (bruijn ##.%p.2108 0 0) ((bruijn ##.%k.1165 1 0) '()) (basic-block 1 1 (##.%x.2109) ((##vcore.car (bruijn ##.xs.473 2 1))) ((bruijn ##.f.470 4 1) (close _V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D472_V0k149) (bruijn ##.%x.2109 0 0)))))
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
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[1]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D472_V0k149, self)))),
      self->vars[0]);
    }
}
    }
}
void _V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D477_V0k151(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D477_V0k151, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.2111 1 0) ((bruijn ##.%k.1181 0 0) (bruijn ##.%p.2111 1 0)) (basic-block 1 1 (##.%r.2116) ((##vcore.null? (bruijn ##.ys.479 3 2))) ((bruijn ##.%k.1181 1 0) (bruijn ##.%r.2116 0 0))))
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
    self->vars[0] = _VBasic_VNullP2(runtime, NULL,
      statics->up->up->vars[2]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      self->vars[0]);
    }
}
}
void _V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D477_V0k154(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D477_V0k154, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity list append!) #t (bruijn ##.append!.143 9 74) (bruijn ##.%k.1172 6 0) (bruijn ##.%x.1174 2 0) (bruijn ##.%x.1175 0 0))
  {
   VEnv * _closure_env = _V60_V0vanity_V0list;
    VWORD _arg0 = 
      VGetArg(statics, 6-1, 0);
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
void _V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D477_V0k153(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D477_V0k153, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 2 2 (##.%x.2114 ##.%x.2115) ((##vcore.cdr (bruijn ##.xs.478 5 1)) (##vcore.cdr (bruijn ##.ys.479 5 2))) (##qualified-call (vanity list append-map! ##.loop.477) #f (bruijn ##.loop.477 6 0) (close _V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D477_V0k154) (bruijn ##.%x.2114 0 0) (bruijn ##.%x.2115 0 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 5-1, 1));
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 5-1, 2));
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 6-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D477_V0k154, self))));
    VWORD _arg1 = 
      self->vars[0];
    VWORD _arg2 = 
      self->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D477(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
void _V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D477_V0k152(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D477_V0k152, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1173 0 0) ((bruijn ##.%k.1172 2 0) '()) (basic-block 2 2 (##.%x.2112 ##.%x.2113) ((##vcore.car (bruijn ##.xs.478 3 1)) (##vcore.car (bruijn ##.ys.479 3 2))) ((bruijn ##.f.474 5 1) (close _V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D477_V0k153) (bruijn ##.%x.2112 0 0) (bruijn ##.%x.2113 0 1))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VNULL);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->up->vars[1]);
    self->vars[1] = _VBasic_VCar2(runtime, NULL,
      statics->up->up->vars[2]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 1)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D477_V0k153, self)))),
      self->vars[0],
      self->vars[1]);
    }
}
}
void _V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D477(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D477, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 1 1 (##.%p.2111) ((##vcore.null? (bruijn ##.xs.478 1 1))) ((close _V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D477_V0k151) (close _V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D477_V0k152)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VNullP2(runtime, NULL,
      statics->vars[1]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D477_V0k151, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D477_V0k152, self)))));
    }
}
void _V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D484_V0k155(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D484_V0k155, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.2117 1 0) ((bruijn ##.%k.1194 0 0) (bruijn ##.%p.2117 1 0)) (basic-block 1 1 (##.%p.2124) ((##vcore.null? (bruijn ##.ys.486 3 2))) (if (bruijn ##.%p.2124 0 0) ((bruijn ##.%k.1194 1 0) (bruijn ##.%p.2124 0 0)) (basic-block 1 1 (##.%r.2125) ((##vcore.null? (bruijn ##.zs.487 4 3))) ((bruijn ##.%k.1194 2 0) (bruijn ##.%r.2125 0 0))))))
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
    self->vars[0] = _VBasic_VNullP2(runtime, NULL,
      statics->up->up->vars[2]);
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
    self->vars[0] = _VBasic_VNullP2(runtime, NULL,
      statics->up->up->up->vars[3]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      self->vars[0]);
    }
}
    }
}
}
void _V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D484_V0k158(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D484_V0k158, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity list append!) #t (bruijn ##.append!.143 9 74) (bruijn ##.%k.1183 6 0) (bruijn ##.%x.1185 2 0) (bruijn ##.%x.1186 0 0))
  {
   VEnv * _closure_env = _V60_V0vanity_V0list;
    VWORD _arg0 = 
      VGetArg(statics, 6-1, 0);
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
void _V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D484_V0k157(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D484_V0k157, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 3 3 (##.%x.2121 ##.%x.2122 ##.%x.2123) ((##vcore.cdr (bruijn ##.xs.485 5 1)) (##vcore.cdr (bruijn ##.ys.486 5 2)) (##vcore.cdr (bruijn ##.zs.487 5 3))) (##qualified-call (vanity list append-map! ##.loop.484) #f (bruijn ##.loop.484 6 0) (close _V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D484_V0k158) (bruijn ##.%x.2121 0 0) (bruijn ##.%x.2122 0 1) (bruijn ##.%x.2123 0 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 5-1, 1));
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 5-1, 2));
    self->vars[2] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 5-1, 3));
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 6-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D484_V0k158, self))));
    VWORD _arg1 = 
      self->vars[0];
    VWORD _arg2 = 
      self->vars[1];
    VWORD _arg3 = 
      self->vars[2];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D484(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
    }
}
void _V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D484_V0k156(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D484_V0k156, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1184 0 0) ((bruijn ##.%k.1183 2 0) '()) (basic-block 3 3 (##.%x.2118 ##.%x.2119 ##.%x.2120) ((##vcore.car (bruijn ##.xs.485 3 1)) (##vcore.car (bruijn ##.ys.486 3 2)) (##vcore.car (bruijn ##.zs.487 3 3))) ((bruijn ##.f.480 5 1) (close _V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D484_V0k157) (bruijn ##.%x.2118 0 0) (bruijn ##.%x.2119 0 1) (bruijn ##.%x.2120 0 2))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VNULL);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->up->vars[1]);
    self->vars[1] = _VBasic_VCar2(runtime, NULL,
      statics->up->up->vars[2]);
    self->vars[2] = _VBasic_VCar2(runtime, NULL,
      statics->up->up->vars[3]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 1)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D484_V0k157, self)))),
      self->vars[0],
      self->vars[1],
      self->vars[2]);
    }
}
}
void _V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D484(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D484, got ~D~N"
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
  // (basic-block 1 1 (##.%p.2117) ((##vcore.null? (bruijn ##.xs.485 1 1))) ((close _V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D484_V0k155) (close _V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D484_V0k156)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VNullP2(runtime, NULL,
      statics->vars[1]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D484_V0k155, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D484_V0k156, self)))));
    }
}
void _V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D490_V0k163(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D490_V0k163, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity list append!) #t (bruijn ##.append!.143 8 74) (bruijn ##.%k.1197 5 0) (bruijn ##.%x.1199 2 0) (bruijn ##.%x.1200 0 0))
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
void _V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D490_V0k162(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D490_V0k162, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity list append-map! ##.loop.490) #f (bruijn ##.loop.490 5 0) (close _V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D490_V0k163) (bruijn ##.%x.1201 0 0))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 5-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D490_V0k163, self))));
    VWORD _arg1 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D490(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D490_V0k161(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D490_V0k161, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.map.35 7 31) (close _V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D490_V0k162) (##intrinsic ##vcore.cdr) (bruijn ##.lsts.491 3 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 31)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D490_V0k162, self)))),
      _V40_V10vcore_Dcdr,
      statics->up->up->vars[1]);
}
void _V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D490_V0k160(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D490_V0k160, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.apply (close _V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D490_V0k161) (bruijn ##.f.488 4 1) (bruijn ##.%x.1202 0 0))
    VCallFuncWithGC(runtime, (VFunc)VApply2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D490_V0k161, self)))),
      statics->up->up->up->vars[1],
      _var0);
}
void _V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D490_V0k159(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D490_V0k159, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1198 0 0) ((bruijn ##.%k.1197 1 0) '()) ((bruijn ##.map.35 5 31) (close _V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D490_V0k160) (##intrinsic ##vcore.car) (bruijn ##.lsts.491 1 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VNULL);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 31)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D490_V0k160, self)))),
      _V40_V10vcore_Dcar,
      statics->vars[1]);
}
}
void _V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D490(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D490, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (##qualified-call (vanity list any?) #t (bruijn ##.any?.98 3 29) (close _V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D490_V0k159) (##intrinsic ##vcore.null?) (bruijn ##.lsts.491 0 1))
  {
   VEnv * _closure_env = _V60_V0vanity_V0list;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D490_V0k159, self))));
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
 // ("_V50_V0vanity_V0list_V0append__map_B" #t #f (3 (letrec 1 ((close "_V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D472")) (##qualified-call (vanity list append-map! ##.loop.472) #f (bruijn ##.loop.472 0 0) (bruijn ##.%k.1164 1 0) (bruijn ##.xs.471 1 2)))) (4 (letrec 1 ((close "_V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D477")) (##qualified-call (vanity list append-map! ##.loop.477) #f (bruijn ##.loop.477 0 0) (bruijn ##.%k.1171 1 0) (bruijn ##.xs.475 1 2) (bruijn ##.ys.476 1 3)))) (5 (letrec 1 ((close "_V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D484")) (##qualified-call (vanity list append-map! ##.loop.484) #f (bruijn ##.loop.484 0 0) (bruijn ##.%k.1182 1 0) (bruijn ##.xs.481 1 2) (bruijn ##.ys.482 1 3) (bruijn ##.zs.483 1 4)))) (2 + (letrec 1 ((close "_V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D490")) (##qualified-call (vanity list append-map! ##.loop.490) #f (bruijn ##.loop.490 0 0) (bruijn ##.%k.1196 1 0) (bruijn ##.lsts.489 1 2)))))
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
  // (letrec 1 ((close "_V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D472")) (##qualified-call (vanity list append-map! ##.loop.472) #f (bruijn ##.loop.472 0 0) (bruijn ##.%k.1164 1 0) (bruijn ##.xs.471 1 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D472, self))));
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
       _V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D472(runtime, _closure_env, 2, _arg0, _arg1);
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
  // (letrec 1 ((close "_V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D477")) (##qualified-call (vanity list append-map! ##.loop.477) #f (bruijn ##.loop.477 0 0) (bruijn ##.%k.1171 1 0) (bruijn ##.xs.475 1 2) (bruijn ##.ys.476 1 3)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D477, self))));
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
       _V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D477(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
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
  // (letrec 1 ((close "_V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D484")) (##qualified-call (vanity list append-map! ##.loop.484) #f (bruijn ##.loop.484 0 0) (bruijn ##.%k.1182 1 0) (bruijn ##.xs.481 1 2) (bruijn ##.ys.482 1 3) (bruijn ##.zs.483 1 4)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D484, self))));
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
       _V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D484(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
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
  // (letrec 1 ((close "_V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D490")) (##qualified-call (vanity list append-map! ##.loop.490) #f (bruijn ##.loop.490 0 0) (bruijn ##.%k.1196 1 0) (bruijn ##.lsts.489 1 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D490, self))));
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
       _V50_V0vanity_V0list_V0append__map_B_V10_Dloop_D490(runtime, _closure_env, 2, _arg0, _arg1);
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
void _V50_V0vanity_V0list_V0append__map_V10_Dloop_D494_V0k165(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0append__map_V10_Dloop_D494_V0k165, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.append.26 9 22) (bruijn ##.%k.1204 5 0) (bruijn ##.%x.1206 2 0) (bruijn ##.%x.1207 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 22)), 3,
      VGetArg(statics, 5-1, 0),
      statics->up->vars[0],
      _var0);
}
void _V50_V0vanity_V0list_V0append__map_V10_Dloop_D494_V0k164(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0append__map_V10_Dloop_D494_V0k164, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%x.2128) ((##vcore.cdr (bruijn ##.xs.495 4 1))) (##qualified-call (vanity list append-map ##.loop.494) #f (bruijn ##.loop.494 5 0) (close _V50_V0vanity_V0list_V0append__map_V10_Dloop_D494_V0k165) (bruijn ##.%x.2128 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      statics->up->up->up->vars[1]);
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 5-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0append__map_V10_Dloop_D494_V0k165, self))));
    VWORD _arg1 = 
      self->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0list_V0append__map_V10_Dloop_D494(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
}
void _V50_V0vanity_V0list_V0append__map_V10_Dloop_D494(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0append__map_V10_Dloop_D494, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.%p.2126) ((##vcore.null? (bruijn ##.xs.495 1 1))) (if (bruijn ##.%p.2126 0 0) ((bruijn ##.%k.1204 1 0) '()) (basic-block 1 1 (##.%x.2127) ((##vcore.car (bruijn ##.xs.495 2 1))) ((bruijn ##.f.492 4 1) (close _V50_V0vanity_V0list_V0append__map_V10_Dloop_D494_V0k164) (bruijn ##.%x.2127 0 0)))))
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
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[1]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0append__map_V10_Dloop_D494_V0k164, self)))),
      self->vars[0]);
    }
}
    }
}
void _V50_V0vanity_V0list_V0append__map_V10_Dloop_D499_V0k166(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0append__map_V10_Dloop_D499_V0k166, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.2129 1 0) ((bruijn ##.%k.1220 0 0) (bruijn ##.%p.2129 1 0)) (basic-block 1 1 (##.%r.2134) ((##vcore.null? (bruijn ##.ys.501 3 2))) ((bruijn ##.%k.1220 1 0) (bruijn ##.%r.2134 0 0))))
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
    self->vars[0] = _VBasic_VNullP2(runtime, NULL,
      statics->up->up->vars[2]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      self->vars[0]);
    }
}
}
void _V50_V0vanity_V0list_V0append__map_V10_Dloop_D499_V0k169(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0append__map_V10_Dloop_D499_V0k169, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.append.26 10 22) (bruijn ##.%k.1211 6 0) (bruijn ##.%x.1213 2 0) (bruijn ##.%x.1214 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 22)), 3,
      VGetArg(statics, 6-1, 0),
      statics->up->vars[0],
      _var0);
}
void _V50_V0vanity_V0list_V0append__map_V10_Dloop_D499_V0k168(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0append__map_V10_Dloop_D499_V0k168, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 2 2 (##.%x.2132 ##.%x.2133) ((##vcore.cdr (bruijn ##.xs.500 5 1)) (##vcore.cdr (bruijn ##.ys.501 5 2))) (##qualified-call (vanity list append-map ##.loop.499) #f (bruijn ##.loop.499 6 0) (close _V50_V0vanity_V0list_V0append__map_V10_Dloop_D499_V0k169) (bruijn ##.%x.2132 0 0) (bruijn ##.%x.2133 0 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 5-1, 1));
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 5-1, 2));
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 6-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0append__map_V10_Dloop_D499_V0k169, self))));
    VWORD _arg1 = 
      self->vars[0];
    VWORD _arg2 = 
      self->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0list_V0append__map_V10_Dloop_D499(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
void _V50_V0vanity_V0list_V0append__map_V10_Dloop_D499_V0k167(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0append__map_V10_Dloop_D499_V0k167, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1212 0 0) ((bruijn ##.%k.1211 2 0) '()) (basic-block 2 2 (##.%x.2130 ##.%x.2131) ((##vcore.car (bruijn ##.xs.500 3 1)) (##vcore.car (bruijn ##.ys.501 3 2))) ((bruijn ##.f.496 5 1) (close _V50_V0vanity_V0list_V0append__map_V10_Dloop_D499_V0k168) (bruijn ##.%x.2130 0 0) (bruijn ##.%x.2131 0 1))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VNULL);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->up->vars[1]);
    self->vars[1] = _VBasic_VCar2(runtime, NULL,
      statics->up->up->vars[2]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 1)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0append__map_V10_Dloop_D499_V0k168, self)))),
      self->vars[0],
      self->vars[1]);
    }
}
}
void _V50_V0vanity_V0list_V0append__map_V10_Dloop_D499(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0append__map_V10_Dloop_D499, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 1 1 (##.%p.2129) ((##vcore.null? (bruijn ##.xs.500 1 1))) ((close _V50_V0vanity_V0list_V0append__map_V10_Dloop_D499_V0k166) (close _V50_V0vanity_V0list_V0append__map_V10_Dloop_D499_V0k167)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VNullP2(runtime, NULL,
      statics->vars[1]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0append__map_V10_Dloop_D499_V0k166, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0append__map_V10_Dloop_D499_V0k167, self)))));
    }
}
void _V50_V0vanity_V0list_V0append__map_V10_Dloop_D506_V0k170(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0append__map_V10_Dloop_D506_V0k170, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.2135 1 0) ((bruijn ##.%k.1233 0 0) (bruijn ##.%p.2135 1 0)) (basic-block 1 1 (##.%p.2142) ((##vcore.null? (bruijn ##.ys.508 3 2))) (if (bruijn ##.%p.2142 0 0) ((bruijn ##.%k.1233 1 0) (bruijn ##.%p.2142 0 0)) (basic-block 1 1 (##.%r.2143) ((##vcore.null? (bruijn ##.zs.509 4 3))) ((bruijn ##.%k.1233 2 0) (bruijn ##.%r.2143 0 0))))))
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
    self->vars[0] = _VBasic_VNullP2(runtime, NULL,
      statics->up->up->vars[2]);
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
    self->vars[0] = _VBasic_VNullP2(runtime, NULL,
      statics->up->up->up->vars[3]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      self->vars[0]);
    }
}
    }
}
}
void _V50_V0vanity_V0list_V0append__map_V10_Dloop_D506_V0k173(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0append__map_V10_Dloop_D506_V0k173, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.append.26 10 22) (bruijn ##.%k.1222 6 0) (bruijn ##.%x.1224 2 0) (bruijn ##.%x.1225 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 22)), 3,
      VGetArg(statics, 6-1, 0),
      statics->up->vars[0],
      _var0);
}
void _V50_V0vanity_V0list_V0append__map_V10_Dloop_D506_V0k172(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0append__map_V10_Dloop_D506_V0k172, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 3 3 (##.%x.2139 ##.%x.2140 ##.%x.2141) ((##vcore.cdr (bruijn ##.xs.507 5 1)) (##vcore.cdr (bruijn ##.ys.508 5 2)) (##vcore.cdr (bruijn ##.zs.509 5 3))) (##qualified-call (vanity list append-map ##.loop.506) #f (bruijn ##.loop.506 6 0) (close _V50_V0vanity_V0list_V0append__map_V10_Dloop_D506_V0k173) (bruijn ##.%x.2139 0 0) (bruijn ##.%x.2140 0 1) (bruijn ##.%x.2141 0 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 5-1, 1));
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 5-1, 2));
    self->vars[2] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 5-1, 3));
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 6-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0append__map_V10_Dloop_D506_V0k173, self))));
    VWORD _arg1 = 
      self->vars[0];
    VWORD _arg2 = 
      self->vars[1];
    VWORD _arg3 = 
      self->vars[2];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0list_V0append__map_V10_Dloop_D506(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
    }
}
void _V50_V0vanity_V0list_V0append__map_V10_Dloop_D506_V0k171(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0append__map_V10_Dloop_D506_V0k171, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1223 0 0) ((bruijn ##.%k.1222 2 0) '()) (basic-block 3 3 (##.%x.2136 ##.%x.2137 ##.%x.2138) ((##vcore.car (bruijn ##.xs.507 3 1)) (##vcore.car (bruijn ##.ys.508 3 2)) (##vcore.car (bruijn ##.zs.509 3 3))) ((bruijn ##.f.502 5 1) (close _V50_V0vanity_V0list_V0append__map_V10_Dloop_D506_V0k172) (bruijn ##.%x.2136 0 0) (bruijn ##.%x.2137 0 1) (bruijn ##.%x.2138 0 2))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VNULL);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->up->vars[1]);
    self->vars[1] = _VBasic_VCar2(runtime, NULL,
      statics->up->up->vars[2]);
    self->vars[2] = _VBasic_VCar2(runtime, NULL,
      statics->up->up->vars[3]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 1)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0append__map_V10_Dloop_D506_V0k172, self)))),
      self->vars[0],
      self->vars[1],
      self->vars[2]);
    }
}
}
void _V50_V0vanity_V0list_V0append__map_V10_Dloop_D506(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0append__map_V10_Dloop_D506, got ~D~N"
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
  // (basic-block 1 1 (##.%p.2135) ((##vcore.null? (bruijn ##.xs.507 1 1))) ((close _V50_V0vanity_V0list_V0append__map_V10_Dloop_D506_V0k170) (close _V50_V0vanity_V0list_V0append__map_V10_Dloop_D506_V0k171)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VNullP2(runtime, NULL,
      statics->vars[1]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0append__map_V10_Dloop_D506_V0k170, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0append__map_V10_Dloop_D506_V0k171, self)))));
    }
}
void _V50_V0vanity_V0list_V0append__map_V10_Dloop_D512_V0k178(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0append__map_V10_Dloop_D512_V0k178, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.append.26 9 22) (bruijn ##.%k.1236 5 0) (bruijn ##.%x.1238 2 0) (bruijn ##.%x.1239 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 22)), 3,
      VGetArg(statics, 5-1, 0),
      statics->up->vars[0],
      _var0);
}
void _V50_V0vanity_V0list_V0append__map_V10_Dloop_D512_V0k177(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0append__map_V10_Dloop_D512_V0k177, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity list append-map ##.loop.512) #f (bruijn ##.loop.512 5 0) (close _V50_V0vanity_V0list_V0append__map_V10_Dloop_D512_V0k178) (bruijn ##.%x.1240 0 0))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 5-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0append__map_V10_Dloop_D512_V0k178, self))));
    VWORD _arg1 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0list_V0append__map_V10_Dloop_D512(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0list_V0append__map_V10_Dloop_D512_V0k176(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0append__map_V10_Dloop_D512_V0k176, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.map.35 7 31) (close _V50_V0vanity_V0list_V0append__map_V10_Dloop_D512_V0k177) (##intrinsic ##vcore.cdr) (bruijn ##.lsts.513 3 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 31)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0append__map_V10_Dloop_D512_V0k177, self)))),
      _V40_V10vcore_Dcdr,
      statics->up->up->vars[1]);
}
void _V50_V0vanity_V0list_V0append__map_V10_Dloop_D512_V0k175(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0append__map_V10_Dloop_D512_V0k175, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.apply (close _V50_V0vanity_V0list_V0append__map_V10_Dloop_D512_V0k176) (bruijn ##.f.510 4 1) (bruijn ##.%x.1241 0 0))
    VCallFuncWithGC(runtime, (VFunc)VApply2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0append__map_V10_Dloop_D512_V0k176, self)))),
      statics->up->up->up->vars[1],
      _var0);
}
void _V50_V0vanity_V0list_V0append__map_V10_Dloop_D512_V0k174(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0append__map_V10_Dloop_D512_V0k174, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1237 0 0) ((bruijn ##.%k.1236 1 0) '()) ((bruijn ##.map.35 5 31) (close _V50_V0vanity_V0list_V0append__map_V10_Dloop_D512_V0k175) (##intrinsic ##vcore.car) (bruijn ##.lsts.513 1 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VNULL);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 31)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0append__map_V10_Dloop_D512_V0k175, self)))),
      _V40_V10vcore_Dcar,
      statics->vars[1]);
}
}
void _V50_V0vanity_V0list_V0append__map_V10_Dloop_D512(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0append__map_V10_Dloop_D512, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (##qualified-call (vanity list any?) #t (bruijn ##.any?.98 3 29) (close _V50_V0vanity_V0list_V0append__map_V10_Dloop_D512_V0k174) (##intrinsic ##vcore.null?) (bruijn ##.lsts.513 0 1))
  {
   VEnv * _closure_env = _V60_V0vanity_V0list;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0append__map_V10_Dloop_D512_V0k174, self))));
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
 // ("_V50_V0vanity_V0list_V0append__map" #t #f (3 (letrec 1 ((close "_V50_V0vanity_V0list_V0append__map_V10_Dloop_D494")) (##qualified-call (vanity list append-map ##.loop.494) #f (bruijn ##.loop.494 0 0) (bruijn ##.%k.1203 1 0) (bruijn ##.xs.493 1 2)))) (4 (letrec 1 ((close "_V50_V0vanity_V0list_V0append__map_V10_Dloop_D499")) (##qualified-call (vanity list append-map ##.loop.499) #f (bruijn ##.loop.499 0 0) (bruijn ##.%k.1210 1 0) (bruijn ##.xs.497 1 2) (bruijn ##.ys.498 1 3)))) (5 (letrec 1 ((close "_V50_V0vanity_V0list_V0append__map_V10_Dloop_D506")) (##qualified-call (vanity list append-map ##.loop.506) #f (bruijn ##.loop.506 0 0) (bruijn ##.%k.1221 1 0) (bruijn ##.xs.503 1 2) (bruijn ##.ys.504 1 3) (bruijn ##.zs.505 1 4)))) (2 + (letrec 1 ((close "_V50_V0vanity_V0list_V0append__map_V10_Dloop_D512")) (##qualified-call (vanity list append-map ##.loop.512) #f (bruijn ##.loop.512 0 0) (bruijn ##.%k.1235 1 0) (bruijn ##.lsts.511 1 2)))))
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
  // (letrec 1 ((close "_V50_V0vanity_V0list_V0append__map_V10_Dloop_D494")) (##qualified-call (vanity list append-map ##.loop.494) #f (bruijn ##.loop.494 0 0) (bruijn ##.%k.1203 1 0) (bruijn ##.xs.493 1 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0append__map_V10_Dloop_D494, self))));
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
       _V50_V0vanity_V0list_V0append__map_V10_Dloop_D494(runtime, _closure_env, 2, _arg0, _arg1);
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
  // (letrec 1 ((close "_V50_V0vanity_V0list_V0append__map_V10_Dloop_D499")) (##qualified-call (vanity list append-map ##.loop.499) #f (bruijn ##.loop.499 0 0) (bruijn ##.%k.1210 1 0) (bruijn ##.xs.497 1 2) (bruijn ##.ys.498 1 3)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0append__map_V10_Dloop_D499, self))));
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
       _V50_V0vanity_V0list_V0append__map_V10_Dloop_D499(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
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
  // (letrec 1 ((close "_V50_V0vanity_V0list_V0append__map_V10_Dloop_D506")) (##qualified-call (vanity list append-map ##.loop.506) #f (bruijn ##.loop.506 0 0) (bruijn ##.%k.1221 1 0) (bruijn ##.xs.503 1 2) (bruijn ##.ys.504 1 3) (bruijn ##.zs.505 1 4)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0append__map_V10_Dloop_D506, self))));
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
       _V50_V0vanity_V0list_V0append__map_V10_Dloop_D506(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
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
  // (letrec 1 ((close "_V50_V0vanity_V0list_V0append__map_V10_Dloop_D512")) (##qualified-call (vanity list append-map ##.loop.512) #f (bruijn ##.loop.512 0 0) (bruijn ##.%k.1235 1 0) (bruijn ##.lsts.511 1 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0append__map_V10_Dloop_D512, self))));
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
       _V50_V0vanity_V0list_V0append__map_V10_Dloop_D512(runtime, _closure_env, 2, _arg0, _arg1);
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
void _V50_V0vanity_V0list_V0reduce__right_V10_Drecur_D517_V0k181(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0reduce__right_V10_Drecur_D517_V0k181, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.f.514 6 1) (bruijn ##.%k.1244 3 0) (bruijn ##.head.518 3 1) (bruijn ##.%x.1246 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 1)), 3,
      statics->up->up->vars[0],
      statics->up->up->vars[1],
      _var0);
}
void _V50_V0vanity_V0list_V0reduce__right_V10_Drecur_D517(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0reduce__right_V10_Drecur_D517, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 1 1 (##.%p.2144) ((##vcore.pair? (bruijn ##.lis.519 1 2))) (if (bruijn ##.%p.2144 0 0) (basic-block 2 2 (##.%x.2145 ##.%x.2146) ((##vcore.car (bruijn ##.lis.519 2 2)) (##vcore.cdr (bruijn ##.lis.519 2 2))) (##qualified-call (vanity list reduce-right ##.recur.517) #f (bruijn ##.recur.517 3 0) (close _V50_V0vanity_V0list_V0reduce__right_V10_Drecur_D517_V0k181) (bruijn ##.%x.2145 0 0) (bruijn ##.%x.2146 0 1))) ((bruijn ##.%k.1244 1 0) (bruijn ##.head.518 1 1))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->vars[2]);
if(VDecodeBool(
self->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->vars[2]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->up->vars[2]);
  {
    VClosure * _closure = VDecodeClosure(statics->up->up->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0reduce__right_V10_Drecur_D517_V0k181, self))));
    VWORD _arg1 = 
      self->vars[0];
    VWORD _arg2 = 
      self->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0list_V0reduce__right_V10_Drecur_D517(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      statics->vars[1]);
}
    }
}
void _V50_V0vanity_V0list_V0reduce__right_V0k180(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0reduce__right_V0k180, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1243 0 0) ((bruijn ##.%k.1242 1 0) (bruijn ##.ridentity.515 1 2)) (letrec 1 ((close "_V50_V0vanity_V0list_V0reduce__right_V10_Drecur_D517")) (basic-block 2 2 (##.%x.2147 ##.%x.2148) ((##vcore.car (bruijn ##.lis.516 3 3)) (##vcore.cdr (bruijn ##.lis.516 3 3))) (##qualified-call (vanity list reduce-right ##.recur.517) #f (bruijn ##.recur.517 1 0) (bruijn ##.%k.1242 3 0) (bruijn ##.%x.2147 0 0) (bruijn ##.%x.2148 0 1)))))
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
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0reduce__right_V10_Drecur_D517, self))));
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->up->vars[3]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->up->up->vars[3]);
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
       _V50_V0vanity_V0list_V0reduce__right_V10_Drecur_D517(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
    }
}
}
static void _V50_V0vanity_V0list_V0reduce__right_V0k179(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##qualified-call (vanity list null-list?) #t (bruijn ##.null-list?.169 1 100) (close _V50_V0vanity_V0list_V0reduce__right_V0k180) (bruijn ##.lis.516 0 3))
  {
   VEnv * _closure_env = _V60_V0vanity_V0list;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0reduce__right_V0k180, self))));
    VWORD _arg1 = 
      self->vars[3];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0null__list_Q, _V60_V0vanity_V0list)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0list_V0null__list_Q(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0list_V0reduce__right(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0reduce__right, got ~D~N"
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
  // (##qualified-call (vanity list check-arg) #t (bruijn ##.check-arg.149 1 80) (close _V50_V0vanity_V0list_V0reduce__right_V0k179) (##intrinsic ##vcore.procedure?) (bruijn ##.f.514 0 1) (bruijn ##.reduce-right.120 1 51))
  {
   VEnv * _closure_env = _V60_V0vanity_V0list;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0reduce__right_V0k179, self))));
    VWORD _arg1 = 
      _V40_V10vcore_Dprocedure_Q;
    VWORD _arg2 = 
      _var1;
    VWORD _arg3 = 
      statics->vars[51];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0check__arg, _V60_V0vanity_V0list)}, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0list_V0check__arg(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0list_V0reduce_V0k183(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0reduce_V0k183, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1252 0 0) ((bruijn ##.%k.1251 1 0) (bruijn ##.ridentity.521 1 2)) (basic-block 2 2 (##.%x.2149 ##.%x.2150) ((##vcore.car (bruijn ##.lis.522 2 3)) (##vcore.cdr (bruijn ##.lis.522 2 3))) (##qualified-call (vanity list fold) #t (bruijn ##.fold.127 3 58) (bruijn ##.%k.1251 2 0) (bruijn ##.f.520 2 1) (bruijn ##.%x.2149 0 0) (bruijn ##.%x.2150 0 1))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      statics->vars[2]);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->vars[3]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->up->vars[3]);
  {
   VEnv * _closure_env = _V60_V0vanity_V0list;
    VWORD _arg0 = 
      statics->up->vars[0];
    VWORD _arg1 = 
      statics->up->vars[1];
    VWORD _arg2 = 
      self->vars[0];
    VWORD _arg3 = 
      self->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0fold, _V60_V0vanity_V0list)}, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0list_V0fold(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
    }
}
}
static void _V50_V0vanity_V0list_V0reduce_V0k182(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##qualified-call (vanity list null-list?) #t (bruijn ##.null-list?.169 1 100) (close _V50_V0vanity_V0list_V0reduce_V0k183) (bruijn ##.lis.522 0 3))
  {
   VEnv * _closure_env = _V60_V0vanity_V0list;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0reduce_V0k183, self))));
    VWORD _arg1 = 
      self->vars[3];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0null__list_Q, _V60_V0vanity_V0list)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0list_V0null__list_Q(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0list_V0reduce(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0reduce, got ~D~N"
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
  // (##qualified-call (vanity list check-arg) #t (bruijn ##.check-arg.149 1 80) (close _V50_V0vanity_V0list_V0reduce_V0k182) (##intrinsic ##vcore.procedure?) (bruijn ##.f.520 0 1) (bruijn ##.reduce.121 1 52))
  {
   VEnv * _closure_env = _V60_V0vanity_V0list;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0reduce_V0k182, self))));
    VWORD _arg1 = 
      _V40_V10vcore_Dprocedure_Q;
    VWORD _arg2 = 
      _var1;
    VWORD _arg3 = 
      statics->vars[52];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0check__arg, _V60_V0vanity_V0list)}, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0list_V0check__arg(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0list_V0pair__fold_V10_Dlp_D527_V0k188(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0pair__fold_V10_Dlp_D527_V0k188, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity list pair-fold ##.lp.527) #f (bruijn ##.lp.527 6 0) (bruijn ##.%k.1257 5 0) (bruijn ##.tails.530 4 0) (bruijn ##.%x.1259 0 0))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 6-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      VGetArg(statics, 5-1, 0);
    VWORD _arg1 = 
      statics->up->up->up->vars[0];
    VWORD _arg2 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0list_V0pair__fold_V10_Dlp_D527(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0list_V0pair__fold_V10_Dlp_D527_V0k187(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0pair__fold_V10_Dlp_D527_V0k187, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.apply (close _V50_V0vanity_V0list_V0pair__fold_V10_Dlp_D527_V0k188) (bruijn ##.f.523 7 1) (bruijn ##.%x.1260 0 0))
    VCallFuncWithGC(runtime, (VFunc)VApply2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0pair__fold_V10_Dlp_D527_V0k188, self)))),
      VGetArg(statics, 7-1, 1),
      _var0);
}
void _V50_V0vanity_V0list_V0pair__fold_V10_Dlp_D527_V0k186(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0pair__fold_V10_Dlp_D527_V0k186, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity list append!) #t (bruijn ##.append!.143 7 74) (close _V50_V0vanity_V0list_V0pair__fold_V10_Dlp_D527_V0k187) (bruijn ##.lists.528 3 1) (bruijn ##.%x.1261 0 0))
  {
   VEnv * _closure_env = _V60_V0vanity_V0list;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0pair__fold_V10_Dlp_D527_V0k187, self))));
    VWORD _arg1 = 
      statics->up->up->vars[1];
    VWORD _arg2 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0append_B, _V60_V0vanity_V0list)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0list_V0append_B(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0list_V0pair__fold_V10_Dlp_D527_V0k185(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0pair__fold_V10_Dlp_D527_V0k185, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%p.2152) ((##vcore.null? (bruijn ##.tails.530 1 0))) (if (bruijn ##.%p.2152 0 0) ((bruijn ##.%k.1257 2 0) (bruijn ##.ans.529 2 2)) ((bruijn ##.list.9 7 5) (close _V50_V0vanity_V0list_V0pair__fold_V10_Dlp_D527_V0k186) (bruijn ##.ans.529 2 2))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VNullP2(runtime, NULL,
      statics->vars[0]);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      statics->up->vars[2]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 5)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0pair__fold_V10_Dlp_D527_V0k186, self)))),
      statics->up->vars[2]);
}
    }
}
void _V50_V0vanity_V0list_V0pair__fold_V10_Dlp_D527(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0pair__fold_V10_Dlp_D527, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (##qualified-call (vanity list %cdrs) #t (bruijn ##.%cdrs.181 4 112) (close _V50_V0vanity_V0list_V0pair__fold_V10_Dlp_D527_V0k185) (bruijn ##.lists.528 0 1))
  {
   VEnv * _closure_env = _V60_V0vanity_V0list;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0pair__fold_V10_Dlp_D527_V0k185, self))));
    VWORD _arg1 = 
      _var1;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0_Mcdrs, _V60_V0vanity_V0list)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0list_V0_Mcdrs(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0list_V0pair__fold_V10_Dlp_D531_V0k190(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0pair__fold_V10_Dlp_D531_V0k190, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity list pair-fold ##.lp.531) #f (bruijn ##.lp.531 4 0) (bruijn ##.%k.1263 3 0) (bruijn ##.tail.2154 1 0) (bruijn ##.%x.1265 0 0))
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
       _V50_V0vanity_V0list_V0pair__fold_V10_Dlp_D531(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0list_V0pair__fold_V10_Dlp_D531_V0k189(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0pair__fold_V10_Dlp_D531_V0k189, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1264 0 0) ((bruijn ##.%k.1263 1 0) (bruijn ##.ans.533 1 2)) (basic-block 1 1 (##.tail.2154) ((##vcore.cdr (bruijn ##.lis.532 2 1))) ((bruijn ##.f.523 5 1) (close _V50_V0vanity_V0list_V0pair__fold_V10_Dlp_D531_V0k190) (bruijn ##.lis.532 2 1) (bruijn ##.ans.533 2 2))))
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
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      statics->up->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 1)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0pair__fold_V10_Dlp_D531_V0k190, self)))),
      statics->up->vars[1],
      statics->up->vars[2]);
    }
}
}
void _V50_V0vanity_V0list_V0pair__fold_V10_Dlp_D531(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0pair__fold_V10_Dlp_D531, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (##qualified-call (vanity list null-list?) #t (bruijn ##.null-list?.169 4 100) (close _V50_V0vanity_V0list_V0pair__fold_V10_Dlp_D531_V0k189) (bruijn ##.lis.532 0 1))
  {
   VEnv * _closure_env = _V60_V0vanity_V0list;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0pair__fold_V10_Dlp_D531_V0k189, self))));
    VWORD _arg1 = 
      _var1;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0null__list_Q, _V60_V0vanity_V0list)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0list_V0null__list_Q(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
static void _V50_V0vanity_V0list_V0pair__fold_V0k184(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.2151) ((##vcore.pair? (bruijn ##.lists.526 1 4))) (if (bruijn ##.%p.2151 0 0) (letrec 1 ((close "_V50_V0vanity_V0list_V0pair__fold_V10_Dlp_D527")) (basic-block 1 1 (##.%x.2153) ((##vcore.cons (bruijn ##.lis1.525 3 3) (bruijn ##.lists.526 3 4))) (##qualified-call (vanity list pair-fold ##.lp.527) #f (bruijn ##.lp.527 1 0) (bruijn ##.%k.1255 3 0) (bruijn ##.%x.2153 0 0) (bruijn ##.zero.524 3 2)))) (letrec 1 ((close "_V50_V0vanity_V0list_V0pair__fold_V10_Dlp_D531")) (##qualified-call (vanity list pair-fold ##.lp.531) #f (bruijn ##.lp.531 0 0) (bruijn ##.%k.1255 2 0) (bruijn ##.lis1.525 2 3) (bruijn ##.zero.524 2 2)))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->vars[4]);
if(VDecodeBool(
self->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0pair__fold_V10_Dlp_D527, self))));
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->up->up->vars[3],
      statics->up->up->vars[4]);
  {
    VClosure * _closure = VDecodeClosure(statics->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->up->up->vars[0];
    VWORD _arg1 = 
      self->vars[0];
    VWORD _arg2 = 
      statics->up->up->vars[2];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0list_V0pair__fold_V10_Dlp_D527(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
    }
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0pair__fold_V10_Dlp_D531, self))));
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->up->vars[0];
    VWORD _arg1 = 
      statics->up->vars[3];
    VWORD _arg2 = 
      statics->up->vars[2];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0list_V0pair__fold_V10_Dlp_D531(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
    }
}
void _V50_V0vanity_V0list_V0pair__fold(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, ...) {
 if(argc < 4) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0pair__fold, got ~D~N"
  "-- expected 4 or more~N"
  , argc);
 }
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 4, argc, _var3);
  struct { VEnv self; VWORD argv[5]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 5, 5, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _var3;
  self->vars[4] = _varargs;
  // (##qualified-call (vanity list check-arg) #t (bruijn ##.check-arg.149 1 80) (close _V50_V0vanity_V0list_V0pair__fold_V0k184) (##intrinsic ##vcore.procedure?) (bruijn ##.f.523 0 1) (bruijn ##.pair-fold.122 1 53))
  {
   VEnv * _closure_env = _V60_V0vanity_V0list;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0pair__fold_V0k184, self))));
    VWORD _arg1 = 
      _V40_V10vcore_Dprocedure_Q;
    VWORD _arg2 = 
      _var1;
    VWORD _arg3 = 
      statics->vars[53];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0check__arg, _V60_V0vanity_V0list)}, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0list_V0check__arg(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0list_V0pair__fold__right_V10_Drecur_D539_V0k195(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0pair__fold__right_V10_Drecur_D539_V0k195, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.apply (bruijn ##.%k.1268 5 0) (bruijn ##.f.535 8 1) (bruijn ##.%x.1270 0 0))
    VCallFuncWithGC(runtime, (VFunc)VApply2, 3,
      VGetArg(statics, 5-1, 0),
      VGetArg(statics, 8-1, 1),
      _var0);
}
void _V50_V0vanity_V0list_V0pair__fold__right_V10_Drecur_D539_V0k194(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0pair__fold__right_V10_Drecur_D539_V0k194, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity list append!) #t (bruijn ##.append!.143 8 74) (close _V50_V0vanity_V0list_V0pair__fold__right_V10_Drecur_D539_V0k195) (bruijn ##.lists.540 4 1) (bruijn ##.%x.1271 0 0))
  {
   VEnv * _closure_env = _V60_V0vanity_V0list;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0pair__fold__right_V10_Drecur_D539_V0k195, self))));
    VWORD _arg1 = 
      statics->up->up->up->vars[1];
    VWORD _arg2 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0append_B, _V60_V0vanity_V0list)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0list_V0append_B(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0list_V0pair__fold__right_V10_Drecur_D539_V0k193(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0pair__fold__right_V10_Drecur_D539_V0k193, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.list.9 8 5) (close _V50_V0vanity_V0list_V0pair__fold__right_V10_Drecur_D539_V0k194) (bruijn ##.%x.1272 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 5)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0pair__fold__right_V10_Drecur_D539_V0k194, self)))),
      _var0);
}
void _V50_V0vanity_V0list_V0pair__fold__right_V10_Drecur_D539_V0k192(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0pair__fold__right_V10_Drecur_D539_V0k192, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%p.2156) ((##vcore.null? (bruijn ##.cdrs.541 1 0))) (if (bruijn ##.%p.2156 0 0) ((bruijn ##.%k.1268 2 0) (bruijn ##.zero.536 5 2)) (##qualified-call (vanity list pair-fold-right ##.recur.539) #f (bruijn ##.recur.539 3 0) (close _V50_V0vanity_V0list_V0pair__fold__right_V10_Drecur_D539_V0k193) (bruijn ##.cdrs.541 1 0))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VNullP2(runtime, NULL,
      statics->vars[0]);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VGetArg(statics, 5-1, 2));
} else {
  {
    VClosure * _closure = VDecodeClosure(statics->up->up->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0pair__fold__right_V10_Drecur_D539_V0k193, self))));
    VWORD _arg1 = 
      statics->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0list_V0pair__fold__right_V10_Drecur_D539(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
    }
}
void _V50_V0vanity_V0list_V0pair__fold__right_V10_Drecur_D539(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0pair__fold__right_V10_Drecur_D539, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (##qualified-call (vanity list %cdrs) #t (bruijn ##.%cdrs.181 4 112) (close _V50_V0vanity_V0list_V0pair__fold__right_V10_Drecur_D539_V0k192) (bruijn ##.lists.540 0 1))
  {
   VEnv * _closure_env = _V60_V0vanity_V0list;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0pair__fold__right_V10_Drecur_D539_V0k192, self))));
    VWORD _arg1 = 
      _var1;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0_Mcdrs, _V60_V0vanity_V0list)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0list_V0_Mcdrs(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0list_V0pair__fold__right_V10_Drecur_D542_V0k197(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0pair__fold__right_V10_Drecur_D542_V0k197, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.f.535 6 1) (bruijn ##.%k.1274 3 0) (bruijn ##.lis.543 3 1) (bruijn ##.%x.1276 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 1)), 3,
      statics->up->up->vars[0],
      statics->up->up->vars[1],
      _var0);
}
void _V50_V0vanity_V0list_V0pair__fold__right_V10_Drecur_D542_V0k196(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0pair__fold__right_V10_Drecur_D542_V0k196, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1275 0 0) ((bruijn ##.%k.1274 1 0) (bruijn ##.zero.536 4 2)) (basic-block 1 1 (##.%x.2158) ((##vcore.cdr (bruijn ##.lis.543 2 1))) (##qualified-call (vanity list pair-fold-right ##.recur.542) #f (bruijn ##.recur.542 3 0) (close _V50_V0vanity_V0list_V0pair__fold__right_V10_Drecur_D542_V0k197) (bruijn ##.%x.2158 0 0))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      statics->up->up->up->vars[2]);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      statics->up->vars[1]);
  {
    VClosure * _closure = VDecodeClosure(statics->up->up->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0pair__fold__right_V10_Drecur_D542_V0k197, self))));
    VWORD _arg1 = 
      self->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0list_V0pair__fold__right_V10_Drecur_D542(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
}
}
void _V50_V0vanity_V0list_V0pair__fold__right_V10_Drecur_D542(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0pair__fold__right_V10_Drecur_D542, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (##qualified-call (vanity list null-list?) #t (bruijn ##.null-list?.169 4 100) (close _V50_V0vanity_V0list_V0pair__fold__right_V10_Drecur_D542_V0k196) (bruijn ##.lis.543 0 1))
  {
   VEnv * _closure_env = _V60_V0vanity_V0list;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0pair__fold__right_V10_Drecur_D542_V0k196, self))));
    VWORD _arg1 = 
      _var1;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0null__list_Q, _V60_V0vanity_V0list)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0list_V0null__list_Q(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
static void _V50_V0vanity_V0list_V0pair__fold__right_V0k191(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.2155) ((##vcore.pair? (bruijn ##.lists.538 1 4))) (if (bruijn ##.%p.2155 0 0) (letrec 1 ((close "_V50_V0vanity_V0list_V0pair__fold__right_V10_Drecur_D539")) (basic-block 1 1 (##.%x.2157) ((##vcore.cons (bruijn ##.lis1.537 3 3) (bruijn ##.lists.538 3 4))) (##qualified-call (vanity list pair-fold-right ##.recur.539) #f (bruijn ##.recur.539 1 0) (bruijn ##.%k.1266 3 0) (bruijn ##.%x.2157 0 0)))) (letrec 1 ((close "_V50_V0vanity_V0list_V0pair__fold__right_V10_Drecur_D542")) (##qualified-call (vanity list pair-fold-right ##.recur.542) #f (bruijn ##.recur.542 0 0) (bruijn ##.%k.1266 2 0) (bruijn ##.lis1.537 2 3)))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->vars[4]);
if(VDecodeBool(
self->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0pair__fold__right_V10_Drecur_D539, self))));
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->up->up->vars[3],
      statics->up->up->vars[4]);
  {
    VClosure * _closure = VDecodeClosure(statics->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->up->up->vars[0];
    VWORD _arg1 = 
      self->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0list_V0pair__fold__right_V10_Drecur_D539(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
    }
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0pair__fold__right_V10_Drecur_D542, self))));
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->up->vars[0];
    VWORD _arg1 = 
      statics->up->vars[3];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0list_V0pair__fold__right_V10_Drecur_D542(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
}
    }
}
void _V50_V0vanity_V0list_V0pair__fold__right(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, ...) {
 if(argc < 4) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0pair__fold__right, got ~D~N"
  "-- expected 4 or more~N"
  , argc);
 }
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 4, argc, _var3);
  struct { VEnv self; VWORD argv[5]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 5, 5, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _var3;
  self->vars[4] = _varargs;
  // (##qualified-call (vanity list check-arg) #t (bruijn ##.check-arg.149 1 80) (close _V50_V0vanity_V0list_V0pair__fold__right_V0k191) (##intrinsic ##vcore.procedure?) (bruijn ##.f.535 0 1) (bruijn ##.pair-fold-right.123 1 54))
  {
   VEnv * _closure_env = _V60_V0vanity_V0list;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0pair__fold__right_V0k191, self))));
    VWORD _arg1 = 
      _V40_V10vcore_Dprocedure_Q;
    VWORD _arg2 = 
      _var1;
    VWORD _arg3 = 
      statics->vars[54];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0check__arg, _V60_V0vanity_V0list)}, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0list_V0check__arg(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0list_V0unfold_V10_Drecur_D550_V0k204(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0unfold_V10_Drecur_D550_V0k204, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%r.2163) ((##vcore.cons (bruijn ##.%x.1283 3 0) (bruijn ##.%x.1284 1 0))) ((bruijn ##.%k.1281 5 0) (bruijn ##.%r.2163 0 0)))
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
void _V50_V0vanity_V0list_V0unfold_V10_Drecur_D550_V0k203(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0unfold_V10_Drecur_D550_V0k203, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity list unfold ##.recur.550) #f (bruijn ##.recur.550 4 0) (close _V50_V0vanity_V0list_V0unfold_V10_Drecur_D550_V0k204) (bruijn ##.%x.1285 0 0))
  {
    VClosure * _closure = VDecodeClosure(statics->up->up->up->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0unfold_V10_Drecur_D550_V0k204, self))));
    VWORD _arg1 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0list_V0unfold_V10_Drecur_D550(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0list_V0unfold_V10_Drecur_D550_V0k202(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0unfold_V10_Drecur_D550_V0k202, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.g.546 6 3) (close _V50_V0vanity_V0list_V0unfold_V10_Drecur_D550_V0k203) (bruijn ##.seed.551 2 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 3)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0unfold_V10_Drecur_D550_V0k203, self)))),
      statics->up->vars[1]);
}
void _V50_V0vanity_V0list_V0unfold_V10_Drecur_D550_V0k201(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0unfold_V10_Drecur_D550_V0k201, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1282 0 0) ((bruijn ##.tail-gen.2160 3 0) (bruijn ##.%k.1281 1 0) (bruijn ##.seed.551 1 1)) ((bruijn ##.f.545 5 2) (close _V50_V0vanity_V0list_V0unfold_V10_Drecur_D550_V0k202) (bruijn ##.seed.551 1 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 2,
      statics->vars[0],
      statics->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 2)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0unfold_V10_Drecur_D550_V0k202, self)))),
      statics->vars[1]);
}
}
void _V50_V0vanity_V0list_V0unfold_V10_Drecur_D550(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0unfold_V10_Drecur_D550, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.p.544 4 1) (close _V50_V0vanity_V0list_V0unfold_V10_Drecur_D550_V0k201) (bruijn ##.seed.551 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[1]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0unfold_V10_Drecur_D550_V0k201, self)))),
      _var1);
}
void _V50_V0vanity_V0list_V0unfold_V10_Drecur_D552_V0k208(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0unfold_V10_Drecur_D552_V0k208, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%r.2164) ((##vcore.cons (bruijn ##.%x.1289 3 0) (bruijn ##.%x.1290 1 0))) ((bruijn ##.%k.1287 5 0) (bruijn ##.%r.2164 0 0)))
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
void _V50_V0vanity_V0list_V0unfold_V10_Drecur_D552_V0k207(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0unfold_V10_Drecur_D552_V0k207, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity list unfold ##.recur.552) #f (bruijn ##.recur.552 4 0) (close _V50_V0vanity_V0list_V0unfold_V10_Drecur_D552_V0k208) (bruijn ##.%x.1291 0 0))
  {
    VClosure * _closure = VDecodeClosure(statics->up->up->up->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0unfold_V10_Drecur_D552_V0k208, self))));
    VWORD _arg1 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0list_V0unfold_V10_Drecur_D552(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0list_V0unfold_V10_Drecur_D552_V0k206(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0unfold_V10_Drecur_D552_V0k206, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.g.546 5 3) (close _V50_V0vanity_V0list_V0unfold_V10_Drecur_D552_V0k207) (bruijn ##.seed.553 2 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 3)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0unfold_V10_Drecur_D552_V0k207, self)))),
      statics->up->vars[1]);
}
void _V50_V0vanity_V0list_V0unfold_V10_Drecur_D552_V0k205(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0unfold_V10_Drecur_D552_V0k205, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1288 0 0) ((bruijn ##.%k.1287 1 0) '()) ((bruijn ##.f.545 4 2) (close _V50_V0vanity_V0list_V0unfold_V10_Drecur_D552_V0k206) (bruijn ##.seed.553 1 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VNULL);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[2]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0unfold_V10_Drecur_D552_V0k206, self)))),
      statics->vars[1]);
}
}
void _V50_V0vanity_V0list_V0unfold_V10_Drecur_D552(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0unfold_V10_Drecur_D552, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.p.544 3 1) (close _V50_V0vanity_V0list_V0unfold_V10_Drecur_D552_V0k205) (bruijn ##.seed.553 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[1]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0unfold_V10_Drecur_D552_V0k205, self)))),
      _var1);
}
static void _V50_V0vanity_V0list_V0unfold_V0k200(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.2159) ((##vcore.pair? (bruijn ##.maybe-tail-gen.548 1 5))) (if (bruijn ##.%p.2159 0 0) (basic-block 3 3 (##.tail-gen.2160 ##.%x.2161 ##.%p.2162) ((##vcore.car (bruijn ##.maybe-tail-gen.548 2 5)) (##vcore.cdr (bruijn ##.maybe-tail-gen.548 2 5)) (##vcore.pair? (bruijn ##.%x.2161 0 1))) (if (bruijn ##.%p.2162 0 2) (##vcore.apply (bruijn ##.%k.1278 2 0) (bruijn ##.error.6 4 2) (##string ##.string.2625) (bruijn ##.unfold.124 3 55) (bruijn ##.p.544 2 1) (bruijn ##.f.545 2 2) (bruijn ##.g.546 2 3) (bruijn ##.seed.547 2 4) (bruijn ##.maybe-tail-gen.548 2 5)) (letrec 1 ((close "_V50_V0vanity_V0list_V0unfold_V10_Drecur_D550")) (##qualified-call (vanity list unfold ##.recur.550) #f (bruijn ##.recur.550 0 0) (bruijn ##.%k.1278 3 0) (bruijn ##.seed.547 3 4))))) (letrec 1 ((close "_V50_V0vanity_V0list_V0unfold_V10_Drecur_D552")) (##qualified-call (vanity list unfold ##.recur.552) #f (bruijn ##.recur.552 0 0) (bruijn ##.%k.1278 2 0) (bruijn ##.seed.547 2 4)))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->vars[5]);
if(VDecodeBool(
self->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->vars[5]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->up->vars[5]);
    self->vars[2] = _VBasic_VPairP2(runtime, NULL,
      self->vars[1]);
if(VDecodeBool(
self->vars[2])) {
    VCallFuncWithGC(runtime, (VFunc)VApply2, 9,
      statics->up->vars[0],
      statics->up->up->up->vars[2],
      VEncodePointer(&_V10_Dstring_D2625.sym, VPOINTER_OTHER),
      statics->up->up->vars[55],
      statics->up->vars[1],
      statics->up->vars[2],
      statics->up->vars[3],
      statics->up->vars[4],
      statics->up->vars[5]);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0unfold_V10_Drecur_D550, self))));
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->up->up->vars[0];
    VWORD _arg1 = 
      statics->up->up->vars[4];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0list_V0unfold_V10_Drecur_D550(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
}
    }
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0unfold_V10_Drecur_D552, self))));
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->up->vars[0];
    VWORD _arg1 = 
      statics->up->vars[4];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0list_V0unfold_V10_Drecur_D552(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
}
    }
}
static void _V50_V0vanity_V0list_V0unfold_V0k199(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##qualified-call (vanity list check-arg) #t (bruijn ##.check-arg.149 1 80) (close _V50_V0vanity_V0list_V0unfold_V0k200) (##intrinsic ##vcore.procedure?) (bruijn ##.g.546 0 3) (bruijn ##.unfold.124 1 55))
  {
   VEnv * _closure_env = _V60_V0vanity_V0list;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0unfold_V0k200, self))));
    VWORD _arg1 = 
      _V40_V10vcore_Dprocedure_Q;
    VWORD _arg2 = 
      self->vars[3];
    VWORD _arg3 = 
      statics->vars[55];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0check__arg, _V60_V0vanity_V0list)}, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0list_V0check__arg(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
static void _V50_V0vanity_V0list_V0unfold_V0k198(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##qualified-call (vanity list check-arg) #t (bruijn ##.check-arg.149 1 80) (close _V50_V0vanity_V0list_V0unfold_V0k199) (##intrinsic ##vcore.procedure?) (bruijn ##.f.545 0 2) (bruijn ##.unfold.124 1 55))
  {
   VEnv * _closure_env = _V60_V0vanity_V0list;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0unfold_V0k199, self))));
    VWORD _arg1 = 
      _V40_V10vcore_Dprocedure_Q;
    VWORD _arg2 = 
      self->vars[2];
    VWORD _arg3 = 
      statics->vars[55];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0check__arg, _V60_V0vanity_V0list)}, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0list_V0check__arg(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0list_V0unfold(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4, ...) {
 if(argc < 5) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0unfold, got ~D~N"
  "-- expected 5 or more~N"
  , argc);
 }
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 5, argc, _var4);
  struct { VEnv self; VWORD argv[6]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 6, 6, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _var3;
  self->vars[4] = _var4;
  self->vars[5] = _varargs;
  // (##qualified-call (vanity list check-arg) #t (bruijn ##.check-arg.149 1 80) (close _V50_V0vanity_V0list_V0unfold_V0k198) (##intrinsic ##vcore.procedure?) (bruijn ##.p.544 0 1) (bruijn ##.unfold.124 1 55))
  {
   VEnv * _closure_env = _V60_V0vanity_V0list;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0unfold_V0k198, self))));
    VWORD _arg1 = 
      _V40_V10vcore_Dprocedure_Q;
    VWORD _arg2 = 
      _var1;
    VWORD _arg3 = 
      statics->vars[55];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0check__arg, _V60_V0vanity_V0list)}, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0list_V0check__arg(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0list_V0unfold__right_V10_Dlp_D559_V0k214(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0unfold__right_V10_Dlp_D559_V0k214, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%x.2165) ((##vcore.cons (bruijn ##.%x.1297 1 0) (bruijn ##.ans.561 4 2))) (##qualified-call (vanity list unfold-right ##.lp.559) #f (bruijn ##.lp.559 5 0) (bruijn ##.%k.1293 4 0) (bruijn ##.%x.1295 2 0) (bruijn ##.%x.2165 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      statics->up->up->up->vars[2]);
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 5-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->up->up->up->vars[0];
    VWORD _arg1 = 
      statics->up->vars[0];
    VWORD _arg2 = 
      self->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0list_V0unfold__right_V10_Dlp_D559(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
void _V50_V0vanity_V0list_V0unfold__right_V10_Dlp_D559_V0k213(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0unfold__right_V10_Dlp_D559_V0k213, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.f.555 4 2) (close _V50_V0vanity_V0list_V0unfold__right_V10_Dlp_D559_V0k214) (bruijn ##.seed.560 2 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[2]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0unfold__right_V10_Dlp_D559_V0k214, self)))),
      statics->up->vars[1]);
}
void _V50_V0vanity_V0list_V0unfold__right_V10_Dlp_D559_V0k212(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0unfold__right_V10_Dlp_D559_V0k212, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1294 0 0) ((bruijn ##.%k.1293 1 0) (bruijn ##.ans.561 1 2)) ((bruijn ##.g.556 3 3) (close _V50_V0vanity_V0list_V0unfold__right_V10_Dlp_D559_V0k213) (bruijn ##.seed.560 1 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      statics->vars[2]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[3]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0unfold__right_V10_Dlp_D559_V0k213, self)))),
      statics->vars[1]);
}
}
void _V50_V0vanity_V0list_V0unfold__right_V10_Dlp_D559(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0unfold__right_V10_Dlp_D559, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((bruijn ##.p.554 2 1) (close _V50_V0vanity_V0list_V0unfold__right_V10_Dlp_D559_V0k212) (bruijn ##.seed.560 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[1]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0unfold__right_V10_Dlp_D559_V0k212, self)))),
      _var1);
}
void _V50_V0vanity_V0list_V0unfold__right_V0k215(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0unfold__right_V0k215, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity list unfold-right ##.lp.559) #f (bruijn ##.lp.559 1 0) (bruijn ##.%k.1292 2 0) (bruijn ##.seed.557 2 4) (bruijn ##.%x.1298 0 0))
  {
    VClosure * _closure = VDecodeClosure(statics->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->up->vars[0];
    VWORD _arg1 = 
      statics->up->vars[4];
    VWORD _arg2 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0list_V0unfold__right_V10_Dlp_D559(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
static void _V50_V0vanity_V0list_V0unfold__right_V0k211(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (letrec 1 ((close "_V50_V0vanity_V0list_V0unfold__right_V10_Dlp_D559")) (##qualified-call (vanity list get-optional) #t (bruijn ##.get-optional.182 2 113) (close _V50_V0vanity_V0list_V0unfold__right_V0k215) (bruijn ##.maybe-tail.558 1 5) '()))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0unfold__right_V10_Dlp_D559, self))));
  {
   VEnv * _closure_env = _V60_V0vanity_V0list;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0unfold__right_V0k215, self))));
    VWORD _arg1 = 
      statics->vars[5];
    VWORD _arg2 = 
      VNULL;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0get__optional, _V60_V0vanity_V0list)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0list_V0get__optional(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
static void _V50_V0vanity_V0list_V0unfold__right_V0k210(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##qualified-call (vanity list check-arg) #t (bruijn ##.check-arg.149 1 80) (close _V50_V0vanity_V0list_V0unfold__right_V0k211) (##intrinsic ##vcore.procedure?) (bruijn ##.g.556 0 3) (bruijn ##.unfold-right.125 1 56))
  {
   VEnv * _closure_env = _V60_V0vanity_V0list;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0unfold__right_V0k211, self))));
    VWORD _arg1 = 
      _V40_V10vcore_Dprocedure_Q;
    VWORD _arg2 = 
      self->vars[3];
    VWORD _arg3 = 
      statics->vars[56];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0check__arg, _V60_V0vanity_V0list)}, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0list_V0check__arg(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
static void _V50_V0vanity_V0list_V0unfold__right_V0k209(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##qualified-call (vanity list check-arg) #t (bruijn ##.check-arg.149 1 80) (close _V50_V0vanity_V0list_V0unfold__right_V0k210) (##intrinsic ##vcore.procedure?) (bruijn ##.f.555 0 2) (bruijn ##.unfold-right.125 1 56))
  {
   VEnv * _closure_env = _V60_V0vanity_V0list;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0unfold__right_V0k210, self))));
    VWORD _arg1 = 
      _V40_V10vcore_Dprocedure_Q;
    VWORD _arg2 = 
      self->vars[2];
    VWORD _arg3 = 
      statics->vars[56];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0check__arg, _V60_V0vanity_V0list)}, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0list_V0check__arg(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0list_V0unfold__right(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4, ...) {
 if(argc < 5) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0unfold__right, got ~D~N"
  "-- expected 5 or more~N"
  , argc);
 }
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 5, argc, _var4);
  struct { VEnv self; VWORD argv[6]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 6, 6, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _var3;
  self->vars[4] = _var4;
  self->vars[5] = _varargs;
  // (##qualified-call (vanity list check-arg) #t (bruijn ##.check-arg.149 1 80) (close _V50_V0vanity_V0list_V0unfold__right_V0k209) (##intrinsic ##vcore.procedure?) (bruijn ##.p.554 0 1) (bruijn ##.unfold-right.125 1 56))
  {
   VEnv * _closure_env = _V60_V0vanity_V0list;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0unfold__right_V0k209, self))));
    VWORD _arg1 = 
      _V40_V10vcore_Dprocedure_Q;
    VWORD _arg2 = 
      _var1;
    VWORD _arg3 = 
      statics->vars[56];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0check__arg, _V60_V0vanity_V0list)}, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0list_V0check__arg(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0list_V0fold__right_V0k216(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0fold__right_V0k216, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kons.562 3 1) (bruijn ##.%k.1299 3 0) (bruijn ##.%x.2167 1 0) (bruijn ##.%x.1302 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[1]), 3,
      statics->up->up->vars[0],
      statics->vars[0],
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
  // (basic-block 1 1 (##.%p.2166) ((##vcore.null? (bruijn ##.ks.564 1 3))) (if (bruijn ##.%p.2166 0 0) ((bruijn ##.%k.1299 1 0) (bruijn ##.knil.563 1 2)) (basic-block 2 2 (##.%x.2167 ##.%x.2168) ((##vcore.car (bruijn ##.ks.564 2 3)) (##vcore.cdr (bruijn ##.ks.564 2 3))) (##qualified-call (vanity list fold-right) #t (bruijn ##.fold-right.126 3 57) (close _V50_V0vanity_V0list_V0fold__right_V0k216) (bruijn ##.kons.562 2 1) (bruijn ##.knil.563 2 2) (bruijn ##.%x.2168 0 1)))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VNullP2(runtime, NULL,
      statics->vars[3]);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      statics->vars[2]);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->vars[3]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->up->vars[3]);
  {
   VEnv * _closure_env = _V60_V0vanity_V0list;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0fold__right_V0k216, self))));
    VWORD _arg1 = 
      statics->up->vars[1];
    VWORD _arg2 = 
      statics->up->vars[2];
    VWORD _arg3 = 
      self->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0fold__right, _V60_V0vanity_V0list)}, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0list_V0fold__right(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
    }
}
    }
}
void _V50_V0vanity_V0list_V0fold_V0k217(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0fold_V0k217, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%x.2171) ((##vcore.cdr (bruijn ##.ks.567 4 3))) (##qualified-call (vanity list fold) #t (bruijn ##.fold.127 5 58) (bruijn ##.%k.1304 4 0) (bruijn ##.kons.565 4 1) (bruijn ##.%x.1306 1 0) (bruijn ##.%x.2171 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      statics->up->up->up->vars[3]);
  {
   VEnv * _closure_env = _V60_V0vanity_V0list;
    VWORD _arg0 = 
      statics->up->up->up->vars[0];
    VWORD _arg1 = 
      statics->up->up->up->vars[1];
    VWORD _arg2 = 
      statics->vars[0];
    VWORD _arg3 = 
      self->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0fold, _V60_V0vanity_V0list)}, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0list_V0fold(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
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
  // (basic-block 1 1 (##.%p.2169) ((##vcore.null? (bruijn ##.ks.567 1 3))) (if (bruijn ##.%p.2169 0 0) ((bruijn ##.%k.1304 1 0) (bruijn ##.knil.566 1 2)) (basic-block 1 1 (##.%x.2170) ((##vcore.car (bruijn ##.ks.567 2 3))) ((bruijn ##.kons.565 2 1) (close _V50_V0vanity_V0list_V0fold_V0k217) (bruijn ##.%x.2170 0 0) (bruijn ##.knil.566 2 2)))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VNullP2(runtime, NULL,
      statics->vars[3]);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      statics->vars[2]);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->vars[3]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[1]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0fold_V0k217, self)))),
      self->vars[0],
      statics->up->vars[2]);
    }
}
    }
}
static void _V50_V0vanity_V0list_V0pair__for__each_V10_Dlp_D571_V0k220(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##qualified-call (vanity list pair-for-each ##.lp.571) #f (bruijn ##.lp.571 3 0) (bruijn ##.%k.1311 2 0) (bruijn ##.tails.573 1 0))
  {
    VClosure * _closure = VDecodeClosure(statics->up->up->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->up->vars[0];
    VWORD _arg1 = 
      statics->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0list_V0pair__for__each_V10_Dlp_D571(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0list_V0pair__for__each_V10_Dlp_D571_V0k219(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0pair__for__each_V10_Dlp_D571_V0k219, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%p.2173) ((##vcore.pair? (bruijn ##.tails.573 1 0))) (if (bruijn ##.%p.2173 0 0) (##vcore.apply (close _V50_V0vanity_V0list_V0pair__for__each_V10_Dlp_D571_V0k220) (bruijn ##.proc.568 5 1) (bruijn ##.lists.572 2 1)) ((bruijn ##.%k.1311 2 0) #f)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->vars[0]);
if(VDecodeBool(
self->vars[0])) {
    VCallFuncWithGC(runtime, (VFunc)VApply2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0pair__for__each_V10_Dlp_D571_V0k220, self)))),
      VGetArg(statics, 5-1, 1),
      statics->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
}
void _V50_V0vanity_V0list_V0pair__for__each_V10_Dlp_D571(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0pair__for__each_V10_Dlp_D571, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (##qualified-call (vanity list %cdrs) #t (bruijn ##.%cdrs.181 4 112) (close _V50_V0vanity_V0list_V0pair__for__each_V10_Dlp_D571_V0k219) (bruijn ##.lists.572 0 1))
  {
   VEnv * _closure_env = _V60_V0vanity_V0list;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0pair__for__each_V10_Dlp_D571_V0k219, self))));
    VWORD _arg1 = 
      _var1;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0_Mcdrs, _V60_V0vanity_V0list)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0list_V0_Mcdrs(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
static void _V50_V0vanity_V0list_V0pair__for__each_V10_Dlp_D574_V0k222(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##qualified-call (vanity list pair-for-each ##.lp.574) #f (bruijn ##.lp.574 4 0) (bruijn ##.%k.1314 3 0) (bruijn ##.tail.2176 0 0))
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
       _V50_V0vanity_V0list_V0pair__for__each_V10_Dlp_D574(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0list_V0pair__for__each_V10_Dlp_D574_V0k221(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0pair__for__each_V10_Dlp_D574_V0k221, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%p.2175) ((##vcore.not (bruijn ##.%x.1316 1 0))) (if (bruijn ##.%p.2175 0 0) (basic-block 1 1 (##.tail.2176) ((##vcore.cdr (bruijn ##.lis.575 3 1))) ((bruijn ##.proc.568 6 1) (close _V50_V0vanity_V0list_V0pair__for__each_V10_Dlp_D574_V0k222) (bruijn ##.lis.575 3 1))) ((bruijn ##.%k.1314 2 0) #f)))
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
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      statics->up->up->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 1)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0pair__for__each_V10_Dlp_D574_V0k222, self)))),
      statics->up->up->vars[1]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
}
void _V50_V0vanity_V0list_V0pair__for__each_V10_Dlp_D574(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0pair__for__each_V10_Dlp_D574, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (##qualified-call (vanity list null-list?) #t (bruijn ##.null-list?.169 4 100) (close _V50_V0vanity_V0list_V0pair__for__each_V10_Dlp_D574_V0k221) (bruijn ##.lis.575 0 1))
  {
   VEnv * _closure_env = _V60_V0vanity_V0list;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0pair__for__each_V10_Dlp_D574_V0k221, self))));
    VWORD _arg1 = 
      _var1;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0null__list_Q, _V60_V0vanity_V0list)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0list_V0null__list_Q(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
static void _V50_V0vanity_V0list_V0pair__for__each_V0k218(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.2172) ((##vcore.pair? (bruijn ##.lists.570 1 3))) (if (bruijn ##.%p.2172 0 0) (letrec 1 ((close "_V50_V0vanity_V0list_V0pair__for__each_V10_Dlp_D571")) (basic-block 1 1 (##.%x.2174) ((##vcore.cons (bruijn ##.lis1.569 3 2) (bruijn ##.lists.570 3 3))) (##qualified-call (vanity list pair-for-each ##.lp.571) #f (bruijn ##.lp.571 1 0) (bruijn ##.%k.1309 3 0) (bruijn ##.%x.2174 0 0)))) (letrec 1 ((close "_V50_V0vanity_V0list_V0pair__for__each_V10_Dlp_D574")) (##qualified-call (vanity list pair-for-each ##.lp.574) #f (bruijn ##.lp.574 0 0) (bruijn ##.%k.1309 2 0) (bruijn ##.lis1.569 2 2)))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->vars[3]);
if(VDecodeBool(
self->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0pair__for__each_V10_Dlp_D571, self))));
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->up->up->vars[2],
      statics->up->up->vars[3]);
  {
    VClosure * _closure = VDecodeClosure(statics->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->up->up->vars[0];
    VWORD _arg1 = 
      self->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0list_V0pair__for__each_V10_Dlp_D571(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
    }
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0pair__for__each_V10_Dlp_D574, self))));
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
       _V50_V0vanity_V0list_V0pair__for__each_V10_Dlp_D574(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
}
    }
}
void _V50_V0vanity_V0list_V0pair__for__each(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, ...) {
 if(argc < 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0pair__for__each, got ~D~N"
  "-- expected 3 or more~N"
  , argc);
 }
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 3, argc, _var2);
  struct { VEnv self; VWORD argv[4]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 4, 4, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _varargs;
  // (##qualified-call (vanity list check-arg) #t (bruijn ##.check-arg.149 1 80) (close _V50_V0vanity_V0list_V0pair__for__each_V0k218) (##intrinsic ##vcore.procedure?) (bruijn ##.proc.568 0 1) (bruijn ##.pair-for-each.128 1 59))
  {
   VEnv * _closure_env = _V60_V0vanity_V0list;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0pair__for__each_V0k218, self))));
    VWORD _arg1 = 
      _V40_V10vcore_Dprocedure_Q;
    VWORD _arg2 = 
      _var1;
    VWORD _arg3 = 
      statics->vars[59];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0check__arg, _V60_V0vanity_V0list)}, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0list_V0check__arg(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0list_V0map_B_V10_Dlp_D580_V0lambda57(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0map_B_V10_Dlp_D580_V0lambda57, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%cars+cdrs/no-test.179 8 110) (bruijn ##.%k.1322 0 0) (bruijn ##.lists.582 3 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 110)), 2,
      _var0,
      statics->up->up->vars[2]);
}
static void _V50_V0vanity_V0list_V0map_B_V10_Dlp_D580_V0k227(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%x.2180) ((##vcore.cdr (bruijn ##.lis1.581 6 1))) (##qualified-call (vanity list map! ##.lp.580) #f (bruijn ##.lp.580 7 0) (bruijn ##.%k.1323 3 0) (bruijn ##.%x.2180 0 0) (bruijn ##.tails.584 3 2)))
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
      statics->up->up->vars[0];
    VWORD _arg1 = 
      self->vars[0];
    VWORD _arg2 = 
      statics->up->up->vars[2];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0list_V0map_B_V10_Dlp_D580(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
void _V50_V0vanity_V0list_V0map_B_V10_Dlp_D580_V0k226(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0map_B_V10_Dlp_D580_V0k226, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.set-car! (close _V50_V0vanity_V0list_V0map_B_V10_Dlp_D580_V0k227) (bruijn ##.lis1.581 5 1) (bruijn ##.%x.1325 0 0))
    VCallFuncWithGC(runtime, (VFunc)VSetCar2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0map_B_V10_Dlp_D580_V0k227, self)))),
      VGetArg(statics, 5-1, 1),
      _var0);
}
void _V50_V0vanity_V0list_V0map_B_V10_Dlp_D580_V0lambda58(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0map_B_V10_Dlp_D580_V0lambda58, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 1 1 (##.%x.2179) ((##vcore.car (bruijn ##.lis1.581 4 1))) (##vcore.apply (close _V50_V0vanity_V0list_V0map_B_V10_Dlp_D580_V0k226) (bruijn ##.f.577 8 1) (bruijn ##.%x.2179 0 0) (bruijn ##.heads.583 1 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->up->up->vars[1]);
    VCallFuncWithGC(runtime, (VFunc)VApply2, 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0map_B_V10_Dlp_D580_V0k226, self)))),
      VGetArg(statics, 8-1, 1),
      self->vars[0],
      statics->vars[1]);
    }
}
void _V50_V0vanity_V0list_V0map_B_V10_Dlp_D580_V0k225(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0map_B_V10_Dlp_D580_V0k225, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%p.2178) ((##vcore.not (bruijn ##.%x.1327 1 0))) (if (bruijn ##.%p.2178 0 0) (##vcore.call-with-values (bruijn ##.%k.1320 2 0) (close _V50_V0vanity_V0list_V0map_B_V10_Dlp_D580_V0lambda57) (close _V50_V0vanity_V0list_V0map_B_V10_Dlp_D580_V0lambda58)) ((bruijn ##.%k.1320 2 0) #f)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VNot2(runtime, NULL,
      statics->vars[0]);
if(VDecodeBool(
self->vars[0])) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->up->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0map_B_V10_Dlp_D580_V0lambda57, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0map_B_V10_Dlp_D580_V0lambda58, self)))));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
}
void _V50_V0vanity_V0list_V0map_B_V10_Dlp_D580(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0map_B_V10_Dlp_D580, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (##qualified-call (vanity list null-list?) #t (bruijn ##.null-list?.169 5 100) (close _V50_V0vanity_V0list_V0map_B_V10_Dlp_D580_V0k225) (bruijn ##.lis1.581 0 1))
  {
   VEnv * _closure_env = _V60_V0vanity_V0list;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0map_B_V10_Dlp_D580_V0k225, self))));
    VWORD _arg1 = 
      _var1;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0null__list_Q, _V60_V0vanity_V0list)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0list_V0null__list_Q(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0list_V0map_B_V0k228(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0map_B_V0k228, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.set-car! (bruijn ##.%k.1328 2 0) (bruijn ##.pair.585 2 1) (bruijn ##.%x.1329 0 0))
    VCallFuncWithGC(runtime, (VFunc)VSetCar2, 3,
      statics->up->vars[0],
      statics->up->vars[1],
      _var0);
}
void _V50_V0vanity_V0list_V0map_B_V0lambda59(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0map_B_V0lambda59, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.%x.2181) ((##vcore.car (bruijn ##.pair.585 1 1))) ((bruijn ##.f.577 4 1) (close _V50_V0vanity_V0list_V0map_B_V0k228) (bruijn ##.%x.2181 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[1]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0map_B_V0k228, self)))),
      self->vars[0]);
    }
}
void _V50_V0vanity_V0list_V0map_B_V0k224(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0map_B_V0k224, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.2177 1 0) (letrec 1 ((close "_V50_V0vanity_V0list_V0map_B_V10_Dlp_D580")) (##qualified-call (vanity list map! ##.lp.580) #f (bruijn ##.lp.580 0 0) (bruijn ##.%k.1319 1 0) (bruijn ##.lis1.578 3 2) (bruijn ##.lists.579 3 3))) (##qualified-call (vanity list pair-for-each) #t (bruijn ##.pair-for-each.128 3 59) (bruijn ##.%k.1319 0 0) (close _V50_V0vanity_V0list_V0map_B_V0lambda59) (bruijn ##.lis1.578 2 2)))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0map_B_V10_Dlp_D580, self))));
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      statics->up->up->vars[2];
    VWORD _arg2 = 
      statics->up->up->vars[3];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0list_V0map_B_V10_Dlp_D580(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
} else {
  {
   VEnv * _closure_env = _V60_V0vanity_V0list;
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0map_B_V0lambda59, self))));
    VWORD _arg2 = 
      statics->up->vars[2];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0pair__for__each, _V60_V0vanity_V0list)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0list_V0pair__for__each(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
}
static void _V50_V0vanity_V0list_V0map_B_V0k229(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.%k.1317 1 0) (bruijn ##.lis1.578 1 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      statics->vars[2]);
}
static void _V50_V0vanity_V0list_V0map_B_V0k223(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.2177) ((##vcore.pair? (bruijn ##.lists.579 1 3))) ((close _V50_V0vanity_V0list_V0map_B_V0k224) (close _V50_V0vanity_V0list_V0map_B_V0k229)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->vars[3]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0map_B_V0k224, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0map_B_V0k229, self)))));
    }
}
void _V50_V0vanity_V0list_V0map_B(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, ...) {
 if(argc < 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0map_B, got ~D~N"
  "-- expected 3 or more~N"
  , argc);
 }
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 3, argc, _var2);
  struct { VEnv self; VWORD argv[4]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 4, 4, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _varargs;
  // (##qualified-call (vanity list check-arg) #t (bruijn ##.check-arg.149 1 80) (close _V50_V0vanity_V0list_V0map_B_V0k223) (##intrinsic ##vcore.procedure?) (bruijn ##.f.577 0 1) (bruijn ##.map!.130 1 61))
  {
   VEnv * _closure_env = _V60_V0vanity_V0list;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0map_B_V0k223, self))));
    VWORD _arg1 = 
      _V40_V10vcore_Dprocedure_Q;
    VWORD _arg2 = 
      _var1;
    VWORD _arg3 = 
      statics->vars[61];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0check__arg, _V60_V0vanity_V0list)}, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0list_V0check__arg(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0list_V0count_V10_Dloop_D588_V0k231(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0count_V10_Dloop_D588_V0k231, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.1337 1 0) ((bruijn ##.%k.1338 0 0) 1) ((bruijn ##.%k.1338 0 0) 0))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeInt(1l));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeInt(0l));
}
}
void _V50_V0vanity_V0list_V0count_V10_Dloop_D588_V0k232(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0count_V10_Dloop_D588_V0k232, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 2 2 (##.%x.2184 ##.%x.2185) ((##vcore.+ (bruijn ##.n.589 5 1) (bruijn ##.%x.1336 1 0)) (##vcore.cdr (bruijn ##.lst.591 5 3))) (##qualified-call (vanity list count ##.loop.588) #f (bruijn ##.loop.588 6 0) (bruijn ##.%k.1332 5 0) (bruijn ##.%x.2184 0 0) (bruijn ##.pred.590 5 2) (bruijn ##.%x.2185 0 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      VGetArg(statics, 5-1, 1),
      statics->vars[0]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 5-1, 3));
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 6-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      VGetArg(statics, 5-1, 0);
    VWORD _arg1 = 
      self->vars[0];
    VWORD _arg2 = 
      VGetArg(statics, 5-1, 2);
    VWORD _arg3 = 
      self->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0list_V0count_V10_Dloop_D588(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
    }
}
void _V50_V0vanity_V0list_V0count_V10_Dloop_D588_V0k230(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0count_V10_Dloop_D588_V0k230, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0list_V0count_V10_Dloop_D588_V0k231) (close _V50_V0vanity_V0list_V0count_V10_Dloop_D588_V0k232))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0count_V10_Dloop_D588_V0k231, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0count_V10_Dloop_D588_V0k232, self)))));
}
void _V50_V0vanity_V0list_V0count_V10_Dloop_D588(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0count_V10_Dloop_D588, got ~D~N"
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
  // (basic-block 1 1 (##.%p.2182) ((##vcore.null? (bruijn ##.lst.591 1 3))) (if (bruijn ##.%p.2182 0 0) ((bruijn ##.%k.1332 1 0) (bruijn ##.n.589 1 1)) (basic-block 1 1 (##.%x.2183) ((##vcore.car (bruijn ##.lst.591 2 3))) ((bruijn ##.pred.590 2 2) (close _V50_V0vanity_V0list_V0count_V10_Dloop_D588_V0k230) (bruijn ##.%x.2183 0 0)))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VNullP2(runtime, NULL,
      statics->vars[3]);
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
      statics->up->vars[3]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[2]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0count_V10_Dloop_D588_V0k230, self)))),
      self->vars[0]);
    }
}
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
  // (letrec 1 ((close "_V50_V0vanity_V0list_V0count_V10_Dloop_D588")) (##qualified-call (vanity list count ##.loop.588) #f (bruijn ##.loop.588 0 0) (bruijn ##.%k.1331 1 0) 0 (bruijn ##.pred.586 1 1) (bruijn ##.lst.587 1 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0count_V10_Dloop_D588, self))));
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
       _V50_V0vanity_V0list_V0count_V10_Dloop_D588(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
    }
}
void _V50_V0vanity_V0list_V0unzip5_V0k237(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0unzip5_V0k237, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.values.5 7 1) (bruijn ##.%k.1340 5 0) (bruijn ##.%x.1341 4 0) (bruijn ##.%x.1342 3 0) (bruijn ##.%x.1343 2 0) (bruijn ##.%x.1344 1 0) (bruijn ##.%x.1345 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 1)), 6,
      VGetArg(statics, 5-1, 0),
      statics->up->up->up->vars[0],
      statics->up->up->vars[0],
      statics->up->vars[0],
      statics->vars[0],
      _var0);
}
void _V50_V0vanity_V0list_V0unzip5_V0lambda60(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0unzip5_V0lambda60, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.%x.2186) ((##vcore.cdr (bruijn ##.e.593 1 1))) ((bruijn ##.cadddr.20 8 16) (bruijn ##.%k.1346 1 0) (bruijn ##.%x.2186 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 16)), 2,
      statics->vars[0],
      self->vars[0]);
    }
}
void _V50_V0vanity_V0list_V0unzip5_V0k236(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0unzip5_V0k236, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.map.35 6 31) (close _V50_V0vanity_V0list_V0unzip5_V0k237) (close _V50_V0vanity_V0list_V0unzip5_V0lambda60) (bruijn ##.lst.592 4 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 31)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0unzip5_V0k237, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0unzip5_V0lambda60, self)))),
      statics->up->up->up->vars[1]);
}
void _V50_V0vanity_V0list_V0unzip5_V0k235(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0unzip5_V0k235, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.map.35 5 31) (close _V50_V0vanity_V0list_V0unzip5_V0k236) (bruijn ##.cadddr.20 5 16) (bruijn ##.lst.592 3 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 31)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0unzip5_V0k236, self)))),
      VGetArg(statics, 5-1, 16),
      statics->up->up->vars[1]);
}
void _V50_V0vanity_V0list_V0unzip5_V0k234(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0unzip5_V0k234, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.map.35 4 31) (close _V50_V0vanity_V0list_V0unzip5_V0k235) (bruijn ##.caddr.14 4 10) (bruijn ##.lst.592 2 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[31]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0unzip5_V0k235, self)))),
      statics->up->up->up->vars[10],
      statics->up->vars[1]);
}
void _V50_V0vanity_V0list_V0unzip5_V0k233(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0unzip5_V0k233, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.map.35 3 31) (close _V50_V0vanity_V0list_V0unzip5_V0k234) (bruijn ##.cadr.11 3 7) (bruijn ##.lst.592 1 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[31]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0unzip5_V0k234, self)))),
      statics->up->up->vars[7],
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
  // ((bruijn ##.map.35 2 31) (close _V50_V0vanity_V0list_V0unzip5_V0k233) (##intrinsic ##vcore.car) (bruijn ##.lst.592 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[31]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0unzip5_V0k233, self)))),
      _V40_V10vcore_Dcar,
      _var1);
}
void _V50_V0vanity_V0list_V0unzip4_V0k241(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0unzip4_V0k241, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.values.5 6 1) (bruijn ##.%k.1348 4 0) (bruijn ##.%x.1349 3 0) (bruijn ##.%x.1350 2 0) (bruijn ##.%x.1351 1 0) (bruijn ##.%x.1352 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 1)), 5,
      statics->up->up->up->vars[0],
      statics->up->up->vars[0],
      statics->up->vars[0],
      statics->vars[0],
      _var0);
}
void _V50_V0vanity_V0list_V0unzip4_V0k240(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0unzip4_V0k240, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.map.35 5 31) (close _V50_V0vanity_V0list_V0unzip4_V0k241) (bruijn ##.cadddr.20 5 16) (bruijn ##.lst.594 3 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 31)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0unzip4_V0k241, self)))),
      VGetArg(statics, 5-1, 16),
      statics->up->up->vars[1]);
}
void _V50_V0vanity_V0list_V0unzip4_V0k239(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0unzip4_V0k239, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.map.35 4 31) (close _V50_V0vanity_V0list_V0unzip4_V0k240) (bruijn ##.caddr.14 4 10) (bruijn ##.lst.594 2 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[31]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0unzip4_V0k240, self)))),
      statics->up->up->up->vars[10],
      statics->up->vars[1]);
}
void _V50_V0vanity_V0list_V0unzip4_V0k238(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0unzip4_V0k238, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.map.35 3 31) (close _V50_V0vanity_V0list_V0unzip4_V0k239) (bruijn ##.cadr.11 3 7) (bruijn ##.lst.594 1 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[31]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0unzip4_V0k239, self)))),
      statics->up->up->vars[7],
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
  // ((bruijn ##.map.35 2 31) (close _V50_V0vanity_V0list_V0unzip4_V0k238) (##intrinsic ##vcore.car) (bruijn ##.lst.594 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[31]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0unzip4_V0k238, self)))),
      _V40_V10vcore_Dcar,
      _var1);
}
void _V50_V0vanity_V0list_V0unzip3_V0k244(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0unzip3_V0k244, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.values.5 5 1) (bruijn ##.%k.1353 3 0) (bruijn ##.%x.1354 2 0) (bruijn ##.%x.1355 1 0) (bruijn ##.%x.1356 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 1)), 4,
      statics->up->up->vars[0],
      statics->up->vars[0],
      statics->vars[0],
      _var0);
}
void _V50_V0vanity_V0list_V0unzip3_V0k243(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0unzip3_V0k243, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.map.35 4 31) (close _V50_V0vanity_V0list_V0unzip3_V0k244) (bruijn ##.caddr.14 4 10) (bruijn ##.lst.595 2 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[31]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0unzip3_V0k244, self)))),
      statics->up->up->up->vars[10],
      statics->up->vars[1]);
}
void _V50_V0vanity_V0list_V0unzip3_V0k242(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0unzip3_V0k242, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.map.35 3 31) (close _V50_V0vanity_V0list_V0unzip3_V0k243) (bruijn ##.cadr.11 3 7) (bruijn ##.lst.595 1 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[31]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0unzip3_V0k243, self)))),
      statics->up->up->vars[7],
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
  // ((bruijn ##.map.35 2 31) (close _V50_V0vanity_V0list_V0unzip3_V0k242) (##intrinsic ##vcore.car) (bruijn ##.lst.595 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[31]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0unzip3_V0k242, self)))),
      _V40_V10vcore_Dcar,
      _var1);
}
void _V50_V0vanity_V0list_V0unzip2_V0k246(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0unzip2_V0k246, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.values.5 4 1) (bruijn ##.%k.1357 2 0) (bruijn ##.%x.1358 1 0) (bruijn ##.%x.1359 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[1]), 3,
      statics->up->vars[0],
      statics->vars[0],
      _var0);
}
void _V50_V0vanity_V0list_V0unzip2_V0k245(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0unzip2_V0k245, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.map.35 3 31) (close _V50_V0vanity_V0list_V0unzip2_V0k246) (bruijn ##.cadr.11 3 7) (bruijn ##.lst.596 1 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[31]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0unzip2_V0k246, self)))),
      statics->up->up->vars[7],
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
  // ((bruijn ##.map.35 2 31) (close _V50_V0vanity_V0list_V0unzip2_V0k245) (##intrinsic ##vcore.car) (bruijn ##.lst.596 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[31]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0unzip2_V0k245, self)))),
      _V40_V10vcore_Dcar,
      _var1);
}
void _V50_V0vanity_V0list_V0unzip1(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0unzip1, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.map.35 2 31) (bruijn ##.%k.1360 0 0) (##intrinsic ##vcore.car) (bruijn ##.lst.597 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[31]), 3,
      _var0,
      _V40_V10vcore_Dcar,
      _var1);
}
void _V50_V0vanity_V0list_V0zip(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, ...) {
 if(argc < 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0zip, got ~D~N"
  "-- expected 1 or more~N"
  , argc);
 }
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 1, argc, _var0);
  // (##vcore.apply (bruijn ##.%k.1361 0 0) (bruijn ##.map.35 2 31) (bruijn ##.list.9 2 5) (bruijn ##.lsts.598 0 1))
    VCallFuncWithGC(runtime, (VFunc)VApply2, 4,
      _var0,
      statics->up->vars[31],
      statics->up->vars[5],
      _varargs);
}
void _V50_V0vanity_V0list_V0concatenate_B_V0k247(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0concatenate_B_V0k247, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity list append!) #t (bruijn ##.append!.143 4 74) (bruijn ##.%k.1362 3 0) (bruijn ##.%x.2188 1 0) (bruijn ##.%x.1365 0 0))
  {
   VEnv * _closure_env = _V60_V0vanity_V0list;
    VWORD _arg0 = 
      statics->up->up->vars[0];
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
void _V50_V0vanity_V0list_V0concatenate_B(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0concatenate_B, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.%p.2187) ((##vcore.null? (bruijn ##.lst-of-lsts.599 1 1))) (if (bruijn ##.%p.2187 0 0) ((bruijn ##.%k.1362 1 0) '()) (basic-block 2 2 (##.%x.2188 ##.%x.2189) ((##vcore.car (bruijn ##.lst-of-lsts.599 2 1)) (##vcore.cdr (bruijn ##.lst-of-lsts.599 2 1))) (##qualified-call (vanity list concatenate!) #t (bruijn ##.concatenate!.138 3 69) (close _V50_V0vanity_V0list_V0concatenate_B_V0k247) (bruijn ##.%x.2189 0 1)))))
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
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->vars[1]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->up->vars[1]);
  {
   VEnv * _closure_env = _V60_V0vanity_V0list;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0concatenate_B_V0k247, self))));
    VWORD _arg1 = 
      self->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0concatenate_B, _V60_V0vanity_V0list)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0list_V0concatenate_B(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
}
    }
}
void _V50_V0vanity_V0list_V0concatenate_V0k248(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0concatenate_V0k248, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.append.26 5 22) (bruijn ##.%k.1367 3 0) (bruijn ##.%x.2191 1 0) (bruijn ##.%x.1370 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 22)), 3,
      statics->up->up->vars[0],
      statics->vars[0],
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
  // (basic-block 1 1 (##.%p.2190) ((##vcore.null? (bruijn ##.lst-of-lsts.600 1 1))) (if (bruijn ##.%p.2190 0 0) ((bruijn ##.%k.1367 1 0) '()) (basic-block 2 2 (##.%x.2191 ##.%x.2192) ((##vcore.car (bruijn ##.lst-of-lsts.600 2 1)) (##vcore.cdr (bruijn ##.lst-of-lsts.600 2 1))) (##qualified-call (vanity list concatenate) #t (bruijn ##.concatenate.139 3 70) (close _V50_V0vanity_V0list_V0concatenate_V0k248) (bruijn ##.%x.2192 0 1)))))
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
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->vars[1]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->up->vars[1]);
  {
   VEnv * _closure_env = _V60_V0vanity_V0list;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0concatenate_V0k248, self))));
    VWORD _arg1 = 
      self->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0concatenate, _V60_V0vanity_V0list)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0list_V0concatenate(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
}
    }
}
static void _V50_V0vanity_V0list_V0append__reverse_B_V10_Dlp_D603_V0k250(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##qualified-call (vanity list append-reverse! ##.lp.603) #f (bruijn ##.lp.603 3 0) (bruijn ##.%k.1373 2 0) (bruijn ##.next-rev.2193 0 0) (bruijn ##.rev-head.604 2 1))
  {
    VClosure * _closure = VDecodeClosure(statics->up->up->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->up->vars[0];
    VWORD _arg1 = 
      self->vars[0];
    VWORD _arg2 = 
      statics->up->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0list_V0append__reverse_B_V10_Dlp_D603(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0list_V0append__reverse_B_V10_Dlp_D603_V0k249(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0append__reverse_B_V10_Dlp_D603_V0k249, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1374 0 0) ((bruijn ##.%k.1373 1 0) (bruijn ##.tail.605 1 2)) (basic-block 1 1 (##.next-rev.2193) ((##vcore.cdr (bruijn ##.rev-head.604 2 1))) (##vcore.set-cdr! (close _V50_V0vanity_V0list_V0append__reverse_B_V10_Dlp_D603_V0k250) (bruijn ##.rev-head.604 2 1) (bruijn ##.tail.605 2 2))))
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
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      statics->up->vars[1]);
    VCallFuncWithGC(runtime, (VFunc)VSetCdr2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0append__reverse_B_V10_Dlp_D603_V0k250, self)))),
      statics->up->vars[1],
      statics->up->vars[2]);
    }
}
}
void _V50_V0vanity_V0list_V0append__reverse_B_V10_Dlp_D603(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0append__reverse_B_V10_Dlp_D603, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (##qualified-call (vanity list null-list?) #t (bruijn ##.null-list?.169 3 100) (close _V50_V0vanity_V0list_V0append__reverse_B_V10_Dlp_D603_V0k249) (bruijn ##.rev-head.604 0 1))
  {
   VEnv * _closure_env = _V60_V0vanity_V0list;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0append__reverse_B_V10_Dlp_D603_V0k249, self))));
    VWORD _arg1 = 
      _var1;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0null__list_Q, _V60_V0vanity_V0list)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0list_V0null__list_Q(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0list_V0append__reverse_B(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0append__reverse_B, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (letrec 1 ((close "_V50_V0vanity_V0list_V0append__reverse_B_V10_Dlp_D603")) (##qualified-call (vanity list append-reverse! ##.lp.603) #f (bruijn ##.lp.603 0 0) (bruijn ##.%k.1372 1 0) (bruijn ##.rev-head.601 1 1) (bruijn ##.tail.602 1 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0append__reverse_B_V10_Dlp_D603, self))));
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      statics->vars[1];
    VWORD _arg2 = 
      statics->vars[2];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0list_V0append__reverse_B_V10_Dlp_D603(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
void _V50_V0vanity_V0list_V0append__reverse_V10_Dlp_D609_V0k251(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0append__reverse_V10_Dlp_D609_V0k251, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1377 0 0) ((bruijn ##.%k.1376 1 0) (bruijn ##.tail.611 1 2)) (basic-block 3 3 (##.%x.2194 ##.%x.2195 ##.%x.2196) ((##vcore.cdr (bruijn ##.rev-head.610 2 1)) (##vcore.car (bruijn ##.rev-head.610 2 1)) (##vcore.cons (bruijn ##.%x.2195 0 1) (bruijn ##.tail.611 2 2))) (##qualified-call (vanity list append-reverse ##.lp.609) #f (bruijn ##.lp.609 3 0) (bruijn ##.%k.1376 2 0) (bruijn ##.%x.2194 0 0) (bruijn ##.%x.2196 0 2))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      statics->vars[2]);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      statics->up->vars[1]);
    self->vars[1] = _VBasic_VCar2(runtime, NULL,
      statics->up->vars[1]);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      self->vars[1],
      statics->up->vars[2]);
  {
    VClosure * _closure = VDecodeClosure(statics->up->up->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->up->vars[0];
    VWORD _arg1 = 
      self->vars[0];
    VWORD _arg2 = 
      self->vars[2];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0list_V0append__reverse_V10_Dlp_D609(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
}
void _V50_V0vanity_V0list_V0append__reverse_V10_Dlp_D609(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0append__reverse_V10_Dlp_D609, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (##qualified-call (vanity list null-list?) #t (bruijn ##.null-list?.169 3 100) (close _V50_V0vanity_V0list_V0append__reverse_V10_Dlp_D609_V0k251) (bruijn ##.rev-head.610 0 1))
  {
   VEnv * _closure_env = _V60_V0vanity_V0list;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0append__reverse_V10_Dlp_D609_V0k251, self))));
    VWORD _arg1 = 
      _var1;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0null__list_Q, _V60_V0vanity_V0list)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0list_V0null__list_Q(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0list_V0append__reverse(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0append__reverse, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (letrec 1 ((close "_V50_V0vanity_V0list_V0append__reverse_V10_Dlp_D609")) (##qualified-call (vanity list append-reverse ##.lp.609) #f (bruijn ##.lp.609 0 0) (bruijn ##.%k.1375 1 0) (bruijn ##.rev-head.607 1 1) (bruijn ##.tail.608 1 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0append__reverse_V10_Dlp_D609, self))));
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      statics->vars[1];
    VWORD _arg2 = 
      statics->vars[2];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0list_V0append__reverse_V10_Dlp_D609(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
static void _V50_V0vanity_V0list_V0reverse_B_V10_Dlp_D613_V0k253(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##qualified-call (vanity list reverse! ##.lp.613) #f (bruijn ##.lp.613 3 0) (bruijn ##.%k.1382 2 0) (bruijn ##.tail.2197 0 0) (bruijn ##.lis.614 2 1))
  {
    VClosure * _closure = VDecodeClosure(statics->up->up->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->up->vars[0];
    VWORD _arg1 = 
      self->vars[0];
    VWORD _arg2 = 
      statics->up->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0list_V0reverse_B_V10_Dlp_D613(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0list_V0reverse_B_V10_Dlp_D613_V0k252(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0reverse_B_V10_Dlp_D613_V0k252, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1383 0 0) ((bruijn ##.%k.1382 1 0) (bruijn ##.ans.615 1 2)) (basic-block 1 1 (##.tail.2197) ((##vcore.cdr (bruijn ##.lis.614 2 1))) (##vcore.set-cdr! (close _V50_V0vanity_V0list_V0reverse_B_V10_Dlp_D613_V0k253) (bruijn ##.lis.614 2 1) (bruijn ##.ans.615 2 2))))
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
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      statics->up->vars[1]);
    VCallFuncWithGC(runtime, (VFunc)VSetCdr2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0reverse_B_V10_Dlp_D613_V0k253, self)))),
      statics->up->vars[1],
      statics->up->vars[2]);
    }
}
}
void _V50_V0vanity_V0list_V0reverse_B_V10_Dlp_D613(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0reverse_B_V10_Dlp_D613, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (##qualified-call (vanity list null-list?) #t (bruijn ##.null-list?.169 3 100) (close _V50_V0vanity_V0list_V0reverse_B_V10_Dlp_D613_V0k252) (bruijn ##.lis.614 0 1))
  {
   VEnv * _closure_env = _V60_V0vanity_V0list;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0reverse_B_V10_Dlp_D613_V0k252, self))));
    VWORD _arg1 = 
      _var1;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0null__list_Q, _V60_V0vanity_V0list)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0list_V0null__list_Q(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0list_V0reverse_B(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0reverse_B, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (letrec 1 ((close "_V50_V0vanity_V0list_V0reverse_B_V10_Dlp_D613")) (##qualified-call (vanity list reverse! ##.lp.613) #f (bruijn ##.lp.613 0 0) (bruijn ##.%k.1381 1 0) (bruijn ##.lis.612 1 1) '()))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0reverse_B_V10_Dlp_D613, self))));
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      statics->vars[1];
    VWORD _arg2 = 
      VNULL;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0list_V0reverse_B_V10_Dlp_D613(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
void _V50_V0vanity_V0list_V0append_B_V10_Dloop_D620(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0append_B_V10_Dloop_D620, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 2 2 (##.%x.2199 ##.%p.2200) ((##vcore.cdr (bruijn ##.x.621 1 1)) (##vcore.null? (bruijn ##.%x.2199 0 0))) (if (bruijn ##.%p.2200 0 1) (##vcore.set-cdr! (bruijn ##.%k.1388 1 0) (bruijn ##.x.621 1 1) (bruijn ##.y.619 4 2)) (basic-block 1 1 (##.%x.2201) ((##vcore.cdr (bruijn ##.x.621 2 1))) (##qualified-call (vanity list append! ##.loop.620) #f (bruijn ##.loop.620 3 0) (bruijn ##.%k.1388 2 0) (bruijn ##.%x.2201 0 0)))))
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
    VCallFuncWithGC(runtime, (VFunc)VSetCdr2, 3,
      statics->vars[0],
      statics->vars[1],
      statics->up->up->up->vars[2]);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      statics->up->vars[1]);
  {
    VClosure * _closure = VDecodeClosure(statics->up->up->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->up->vars[0];
    VWORD _arg1 = 
      self->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0list_V0append_B_V10_Dloop_D620(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
}
    }
}
static void _V10_Dappend_B_D143_V0k254(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.%k.1386 2 0) (bruijn ##.x.618 2 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      statics->up->vars[1]);
}
static void _V10_Dappend_B_D143_V0k255(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dappend_B_D143_V0k255, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity list append!) #t (bruijn ##.append!.143 2 74) (bruijn ##.%k.1392 1 0) (bruijn ##.x.622 1 1) (bruijn ##.%x.1393 0 0))
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
static void _V10_Dappend_B_D143_V0k257(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dappend_B_D143_V0k257, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity list append!) #t (bruijn ##.append!.143 3 74) (bruijn ##.%k.1394 2 0) (bruijn ##.x.625 2 1) (bruijn ##.%x.1395 0 0))
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
static void _V10_Dappend_B_D143_V0k256(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dappend_B_D143_V0k256, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity list append!) #t (bruijn ##.append!.143 2 74) (close _V10_Dappend_B_D143_V0k257) (bruijn ##.y.626 1 2) (bruijn ##.%x.1396 0 0))
  {
   VEnv * _closure_env = _V60_V0vanity_V0list;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dappend_B_D143_V0k257, self))));
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
 // ("_V50_V0vanity_V0list_V0append_B" #t #f (1 ((bruijn ##.%k.1384 0 0) '())) (2 ((bruijn ##.%k.1385 0 0) (bruijn ##.x.617 0 1))) (3 (basic-block 1 1 (##.%p.2198) ((##vcore.null? (bruijn ##.x.618 1 1))) (if (bruijn ##.%p.2198 0 0) ((bruijn ##.%k.1386 1 0) (bruijn ##.y.619 1 2)) (letrec 1 ((close "_V50_V0vanity_V0list_V0append_B_V10_Dloop_D620")) (##qualified-call (vanity list append! ##.loop.620) #f (bruijn ##.loop.620 0 0) (close _V10_Dappend_B_D143_V0k254) (bruijn ##.x.618 2 1)))))) (4 (##qualified-call (vanity list append!) #t (bruijn ##.append!.143 1 74) (close _V10_Dappend_B_D143_V0k255) (bruijn ##.y.623 0 2) (bruijn ##.z.624 0 3))) (5 (##qualified-call (vanity list append!) #t (bruijn ##.append!.143 1 74) (close _V10_Dappend_B_D143_V0k256) (bruijn ##.z.627 0 3) (bruijn ##.w.628 0 4))) (1 + (##qualified-call (vanity list fold-right) #t (bruijn ##.fold-right.126 1 57) (bruijn ##.%k.1397 0 0) (bruijn ##.append!.143 1 74) '() (bruijn ##.lsts.629 0 1))))
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
  // ((bruijn ##.%k.1384 0 0) '())
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VNULL);
}
__attribute__((used)) static void _V20Case1__V50_V0vanity_V0list_V0append_B(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
  // ((bruijn ##.%k.1385 0 0) (bruijn ##.x.617 0 1))
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
  // (basic-block 1 1 (##.%p.2198) ((##vcore.null? (bruijn ##.x.618 1 1))) (if (bruijn ##.%p.2198 0 0) ((bruijn ##.%k.1386 1 0) (bruijn ##.y.619 1 2)) (letrec 1 ((close "_V50_V0vanity_V0list_V0append_B_V10_Dloop_D620")) (##qualified-call (vanity list append! ##.loop.620) #f (bruijn ##.loop.620 0 0) (close _V10_Dappend_B_D143_V0k254) (bruijn ##.x.618 2 1)))))
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
      statics->vars[2]);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0append_B_V10_Dloop_D620, self))));
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dappend_B_D143_V0k254, self))));
    VWORD _arg1 = 
      statics->up->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0list_V0append_B_V10_Dloop_D620(runtime, _closure_env, 2, _arg0, _arg1);
    }
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
  // (##qualified-call (vanity list append!) #t (bruijn ##.append!.143 1 74) (close _V10_Dappend_B_D143_V0k255) (bruijn ##.y.623 0 2) (bruijn ##.z.624 0 3))
  {
   VEnv * _closure_env = _V60_V0vanity_V0list;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dappend_B_D143_V0k255, self))));
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
  struct { VEnv self; VWORD argv[5]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 5, 5, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _var3;
  self->vars[4] = _var4;
  // (##qualified-call (vanity list append!) #t (bruijn ##.append!.143 1 74) (close _V10_Dappend_B_D143_V0k256) (bruijn ##.z.627 0 3) (bruijn ##.w.628 0 4))
  {
   VEnv * _closure_env = _V60_V0vanity_V0list;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dappend_B_D143_V0k256, self))));
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
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 1, argc, _var0);
  // (##qualified-call (vanity list fold-right) #t (bruijn ##.fold-right.126 1 57) (bruijn ##.%k.1397 0 0) (bruijn ##.append!.143 1 74) '() (bruijn ##.lsts.629 0 1))
  {
   VEnv * _closure_env = _V60_V0vanity_V0list;
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      statics->vars[74];
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
void _V50_V0vanity_V0list_V0length_P_V10_Dlp_D631(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0length_P_V10_Dlp_D631, got ~D~N"
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
  // (basic-block 1 1 (##.%p.2202) ((##vcore.pair? (bruijn ##.x.632 1 1))) (if (bruijn ##.%p.2202 0 0) (basic-block 3 3 (##.x.2203 ##.len.2204 ##.%p.2205) ((##vcore.cdr (bruijn ##.x.632 2 1)) (##vcore.+ (bruijn ##.len.634 2 3) 1) (##vcore.pair? (bruijn ##.x.2203 0 0))) (if (bruijn ##.%p.2205 0 2) (basic-block 5 5 (##.x.2206 ##.lag.2207 ##.len.2208 ##.%x.2209 ##.%p.2210) ((##vcore.cdr (bruijn ##.x.2203 1 0)) (##vcore.cdr (bruijn ##.lag.633 3 2)) (##vcore.+ (bruijn ##.len.2204 1 1) 1) (##vcore.eq? (bruijn ##.x.2206 0 0) (bruijn ##.lag.2207 0 1)) (##vcore.not (bruijn ##.%x.2209 0 3))) (if (bruijn ##.%p.2210 0 4) (##qualified-call (vanity list length+ ##.lp.631) #f (bruijn ##.lp.631 4 0) (bruijn ##.%k.1399 3 0) (bruijn ##.x.2206 0 0) (bruijn ##.lag.2207 0 1) (bruijn ##.len.2208 0 2)) ((bruijn ##.%k.1399 3 0) #f))) ((bruijn ##.%k.1399 2 0) (bruijn ##.len.2204 0 1)))) ((bruijn ##.%k.1399 1 0) (bruijn ##.len.634 1 3))))
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
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      statics->up->vars[1]);
    self->vars[1] = _VBasic_VAdd2(runtime, NULL,
      statics->up->vars[3],
      VEncodeInt(1l));
    self->vars[2] = _VBasic_VPairP2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[2])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[5]; } container;
    self = &container.self;
    VInitEnv(self, 5, 5, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[0]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->up->up->vars[2]);
    self->vars[2] = _VBasic_VAdd2(runtime, NULL,
      statics->vars[1],
      VEncodeInt(1l));
    self->vars[3] = _VBasic_VEq2(runtime, NULL,
      self->vars[0],
      self->vars[1]);
    self->vars[4] = _VBasic_VNot2(runtime, NULL,
      self->vars[3]);
if(VDecodeBool(
self->vars[4])) {
  {
    VClosure * _closure = VDecodeClosure(statics->up->up->up->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->up->up->vars[0];
    VWORD _arg1 = 
      self->vars[0];
    VWORD _arg2 = 
      self->vars[1];
    VWORD _arg3 = 
      self->vars[2];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0list_V0length_P_V10_Dlp_D631(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      self->vars[1]);
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      statics->vars[3]);
}
    }
}
void _V50_V0vanity_V0list_V0length_P(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0length_P, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (letrec 1 ((close "_V50_V0vanity_V0list_V0length_P_V10_Dlp_D631")) (##qualified-call (vanity list length+ ##.lp.631) #f (bruijn ##.lp.631 0 0) (bruijn ##.%k.1398 1 0) (bruijn ##.x.630 1 1) (bruijn ##.x.630 1 1) 0))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0length_P_V10_Dlp_D631, self))));
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      statics->vars[1];
    VWORD _arg2 = 
      statics->vars[1];
    VWORD _arg3 = 
      VEncodeInt(0l);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0list_V0length_P_V10_Dlp_D631(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
    }
}
void _V50_V0vanity_V0list_V0last__pair_V10_Dlp_D641(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0last__pair_V10_Dlp_D641, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 2 2 (##.tail.2211 ##.%p.2212) ((##vcore.cdr (bruijn ##.lis.642 1 1)) (##vcore.pair? (bruijn ##.tail.2211 0 0))) (if (bruijn ##.%p.2212 0 1) (##qualified-call (vanity list last-pair ##.lp.641) #f (bruijn ##.lp.641 2 0) (bruijn ##.%k.1410 1 0) (bruijn ##.tail.2211 0 0)) ((bruijn ##.%k.1410 1 0) (bruijn ##.lis.642 1 1))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[1]);
    self->vars[1] = _VBasic_VPairP2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
  {
    VClosure * _closure = VDecodeClosure(statics->up->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      self->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0list_V0last__pair_V10_Dlp_D641(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      statics->vars[1]);
}
    }
}
static void _V50_V0vanity_V0list_V0last__pair_V0k258(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (letrec 1 ((close "_V50_V0vanity_V0list_V0last__pair_V10_Dlp_D641")) (##qualified-call (vanity list last-pair ##.lp.641) #f (bruijn ##.lp.641 0 0) (bruijn ##.%k.1409 1 0) (bruijn ##.lis.640 1 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0last__pair_V10_Dlp_D641, self))));
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      statics->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0list_V0last__pair_V10_Dlp_D641(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
}
void _V50_V0vanity_V0list_V0last__pair(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0last__pair, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (##qualified-call (vanity list check-arg) #t (bruijn ##.check-arg.149 1 80) (close _V50_V0vanity_V0list_V0last__pair_V0k258) (##intrinsic ##vcore.pair?) (bruijn ##.lis.640 0 1) (bruijn ##.last-pair.145 1 76))
  {
   VEnv * _closure_env = _V60_V0vanity_V0list;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0last__pair_V0k258, self))));
    VWORD _arg1 = 
      _V40_V10vcore_Dpair_Q;
    VWORD _arg2 = 
      _var1;
    VWORD _arg3 = 
      statics->vars[76];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0check__arg, _V60_V0vanity_V0list)}, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0list_V0check__arg(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0list_V0last_V0k259(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0last_V0k259, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%r.2213) ((##vcore.car (bruijn ##.%x.1413 1 0))) ((bruijn ##.%k.1412 2 0) (bruijn ##.%r.2213 0 0)))
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
void _V50_V0vanity_V0list_V0last(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0last, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (##qualified-call (vanity list last-pair) #t (bruijn ##.last-pair.145 1 76) (close _V50_V0vanity_V0list_V0last_V0k259) (bruijn ##.lis.644 0 1))
  {
   VEnv * _closure_env = _V60_V0vanity_V0list;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0last_V0k259, self))));
    VWORD _arg1 = 
      _var1;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0last__pair, _V60_V0vanity_V0list)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0list_V0last__pair(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
static void _V50_V0vanity_V0list_V0drop__right_B_V10_Dlp_D648_V0k262(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.%k.1416 1 0) (bruijn ##.lis.645 5 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VGetArg(statics, 5-1, 1));
}
void _V50_V0vanity_V0list_V0drop__right_B_V10_Dlp_D648(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0drop__right_B_V10_Dlp_D648, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 1 1 (##.%p.2215) ((##vcore.pair? (bruijn ##.lead.650 1 2))) (if (bruijn ##.%p.2215 0 0) (basic-block 2 2 (##.%x.2216 ##.%x.2217) ((##vcore.cdr (bruijn ##.lag.649 2 1)) (##vcore.cdr (bruijn ##.lead.650 2 2))) (##qualified-call (vanity list drop-right! ##.lp.648) #f (bruijn ##.lp.648 3 0) (bruijn ##.%k.1416 2 0) (bruijn ##.%x.2216 0 0) (bruijn ##.%x.2217 0 1))) (##vcore.set-cdr! (close _V50_V0vanity_V0list_V0drop__right_B_V10_Dlp_D648_V0k262) (bruijn ##.lag.649 1 1) '())))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->vars[2]);
if(VDecodeBool(
self->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      statics->up->vars[1]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->up->vars[2]);
  {
    VClosure * _closure = VDecodeClosure(statics->up->up->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->up->vars[0];
    VWORD _arg1 = 
      self->vars[0];
    VWORD _arg2 = 
      self->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0list_V0drop__right_B_V10_Dlp_D648(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
} else {
    VCallFuncWithGC(runtime, (VFunc)VSetCdr2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0drop__right_B_V10_Dlp_D648_V0k262, self)))),
      statics->vars[1],
      VNULL);
}
    }
}
void _V50_V0vanity_V0list_V0drop__right_B_V0k261(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0drop__right_B_V0k261, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%p.2214) ((##vcore.pair? (bruijn ##.lead.647 1 0))) (if (bruijn ##.%p.2214 0 0) (letrec 1 ((close "_V50_V0vanity_V0list_V0drop__right_B_V10_Dlp_D648")) (basic-block 1 1 (##.%x.2218) ((##vcore.cdr (bruijn ##.lead.647 3 0))) (##qualified-call (vanity list drop-right! ##.lp.648) #f (bruijn ##.lp.648 1 0) (bruijn ##.%k.1414 4 0) (bruijn ##.lis.645 4 1) (bruijn ##.%x.2218 0 0)))) ((bruijn ##.%k.1414 2 0) '())))
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
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0drop__right_B_V10_Dlp_D648, self))));
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      statics->up->up->vars[0]);
  {
    VClosure * _closure = VDecodeClosure(statics->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->up->up->up->vars[0];
    VWORD _arg1 = 
      statics->up->up->up->vars[1];
    VWORD _arg2 = 
      self->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0list_V0drop__right_B_V10_Dlp_D648(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VNULL);
}
    }
}
static void _V50_V0vanity_V0list_V0drop__right_B_V0k260(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##qualified-call (vanity list drop) #t (bruijn ##.drop.154 1 85) (close _V50_V0vanity_V0list_V0drop__right_B_V0k261) (bruijn ##.lis.645 0 1) (bruijn ##.k.646 0 2))
  {
   VEnv * _closure_env = _V60_V0vanity_V0list;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0drop__right_B_V0k261, self))));
    VWORD _arg1 = 
      self->vars[1];
    VWORD _arg2 = 
      self->vars[2];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0drop, _V60_V0vanity_V0list)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0list_V0drop(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0list_V0drop__right_B(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0drop__right_B, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (##qualified-call (vanity list check-arg) #t (bruijn ##.check-arg.149 1 80) (close _V50_V0vanity_V0list_V0drop__right_B_V0k260) (##intrinsic ##vcore.int?) (bruijn ##.k.646 0 2) (bruijn ##.drop-right!.147 1 78))
  {
   VEnv * _closure_env = _V60_V0vanity_V0list;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0drop__right_B_V0k260, self))));
    VWORD _arg1 = 
      _V40_V10vcore_Dint_Q;
    VWORD _arg2 = 
      _var2;
    VWORD _arg3 = 
      statics->vars[78];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0check__arg, _V60_V0vanity_V0list)}, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0list_V0check__arg(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
static void _V50_V0vanity_V0list_V0take_B_V0k266(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.%k.1421 3 0) (bruijn ##.lis.651 3 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      statics->up->up->vars[1]);
}
void _V50_V0vanity_V0list_V0take_B_V0k265(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0take_B_V0k265, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.set-cdr! (close _V50_V0vanity_V0list_V0take_B_V0k266) (bruijn ##.%x.1423 0 0) '())
    VCallFuncWithGC(runtime, (VFunc)VSetCdr2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0take_B_V0k266, self)))),
      _var0,
      VNULL);
}
void _V50_V0vanity_V0list_V0take_B_V0k264(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0take_B_V0k264, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1422 0 0) ((bruijn ##.%k.1421 1 0) '()) (basic-block 1 1 (##.%x.2219) ((##vcore.- (bruijn ##.k.652 2 2) 1)) (##qualified-call (vanity list drop) #t (bruijn ##.drop.154 3 85) (close _V50_V0vanity_V0list_V0take_B_V0k265) (bruijn ##.lis.651 2 1) (bruijn ##.%x.2219 0 0))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VNULL);
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
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0take_B_V0k265, self))));
    VWORD _arg1 = 
      statics->up->vars[1];
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
static void _V50_V0vanity_V0list_V0take_B_V0k263(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.zero?.7 2 3) (close _V50_V0vanity_V0list_V0take_B_V0k264) (bruijn ##.k.652 0 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[3]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0take_B_V0k264, self)))),
      self->vars[2]);
}
void _V50_V0vanity_V0list_V0take_B(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0take_B, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (##qualified-call (vanity list check-arg) #t (bruijn ##.check-arg.149 1 80) (close _V50_V0vanity_V0list_V0take_B_V0k263) (##intrinsic ##vcore.int?) (bruijn ##.k.652 0 2) (bruijn ##.take!.148 1 79))
  {
   VEnv * _closure_env = _V60_V0vanity_V0list;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0take_B_V0k263, self))));
    VWORD _arg1 = 
      _V40_V10vcore_Dint_Q;
    VWORD _arg2 = 
      _var2;
    VWORD _arg3 = 
      statics->vars[79];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0check__arg, _V60_V0vanity_V0list)}, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0list_V0check__arg(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0list_V0check__arg_V10_Dlp_D656_V0k268(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0check__arg_V10_Dlp_D656_V0k268, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity list check-arg ##.lp.656) #f (bruijn ##.lp.656 3 0) (bruijn ##.%k.1426 2 0) (bruijn ##.%x.1428 0 0))
  {
    VClosure * _closure = VDecodeClosure(statics->up->up->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->up->vars[0];
    VWORD _arg1 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0list_V0check__arg_V10_Dlp_D656(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0list_V0check__arg_V10_Dlp_D656_V0k267(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0check__arg_V10_Dlp_D656_V0k267, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1427 0 0) ((bruijn ##.%k.1426 1 0) (bruijn ##.val.657 1 1)) ((bruijn ##.error.6 5 2) (close _V50_V0vanity_V0list_V0check__arg_V10_Dlp_D656_V0k268) (##string ##.string.2626) (bruijn ##.val.657 1 1) (bruijn ##.pred.653 3 1) (bruijn ##.caller.655 3 3)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      statics->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 2)), 5,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0check__arg_V10_Dlp_D656_V0k268, self)))),
      VEncodePointer(&_V10_Dstring_D2626.sym, VPOINTER_OTHER),
      statics->vars[1],
      statics->up->up->vars[1],
      statics->up->up->vars[3]);
}
}
void _V50_V0vanity_V0list_V0check__arg_V10_Dlp_D656(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0check__arg_V10_Dlp_D656, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.pred.653 2 1) (close _V50_V0vanity_V0list_V0check__arg_V10_Dlp_D656_V0k267) (bruijn ##.val.657 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[1]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0check__arg_V10_Dlp_D656_V0k267, self)))),
      _var1);
}
void _V50_V0vanity_V0list_V0check__arg(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0check__arg, got ~D~N"
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
  // (letrec 1 ((close "_V50_V0vanity_V0list_V0check__arg_V10_Dlp_D656")) (##qualified-call (vanity list check-arg ##.lp.656) #f (bruijn ##.lp.656 0 0) (bruijn ##.%k.1425 1 0) (bruijn ##.val.654 1 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0check__arg_V10_Dlp_D656, self))));
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
       _V50_V0vanity_V0list_V0check__arg_V10_Dlp_D656(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
}
static void _V50_V0vanity_V0list_V0split__at_B_V0k272(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.values.5 6 1) (bruijn ##.%k.1429 4 0) (bruijn ##.x.658 4 1) (bruijn ##.suffix.2221 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 1)), 3,
      statics->up->up->up->vars[0],
      statics->up->up->up->vars[1],
      self->vars[0]);
}
void _V50_V0vanity_V0list_V0split__at_B_V0k271(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0split__at_B_V0k271, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.suffix.2221) ((##vcore.cdr (bruijn ##.prev.660 1 0))) (##vcore.set-cdr! (close _V50_V0vanity_V0list_V0split__at_B_V0k272) (bruijn ##.prev.660 1 0) '()))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[0]);
    VCallFuncWithGC(runtime, (VFunc)VSetCdr2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0split__at_B_V0k272, self)))),
      statics->vars[0],
      VNULL);
    }
}
void _V50_V0vanity_V0list_V0split__at_B_V0k270(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0split__at_B_V0k270, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1430 0 0) ((bruijn ##.values.5 3 1) (bruijn ##.%k.1429 1 0) '() (bruijn ##.x.658 1 1)) (basic-block 1 1 (##.%x.2220) ((##vcore.- (bruijn ##.k.659 2 2) 1)) (##qualified-call (vanity list drop) #t (bruijn ##.drop.154 3 85) (close _V50_V0vanity_V0list_V0split__at_B_V0k271) (bruijn ##.x.658 2 1) (bruijn ##.%x.2220 0 0))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[1]), 3,
      statics->vars[0],
      VNULL,
      statics->vars[1]);
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
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0split__at_B_V0k271, self))));
    VWORD _arg1 = 
      statics->up->vars[1];
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
static void _V50_V0vanity_V0list_V0split__at_B_V0k269(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.zero?.7 2 3) (close _V50_V0vanity_V0list_V0split__at_B_V0k270) (bruijn ##.k.659 0 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[3]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0split__at_B_V0k270, self)))),
      self->vars[2]);
}
void _V50_V0vanity_V0list_V0split__at_B(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0split__at_B, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (##qualified-call (vanity list check-arg) #t (bruijn ##.check-arg.149 1 80) (close _V50_V0vanity_V0list_V0split__at_B_V0k269) (##intrinsic ##vcore.int?) (bruijn ##.k.659 0 2) (bruijn ##.split-at!.150 1 81))
  {
   VEnv * _closure_env = _V60_V0vanity_V0list;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0split__at_B_V0k269, self))));
    VWORD _arg1 = 
      _V40_V10vcore_Dint_Q;
    VWORD _arg2 = 
      _var2;
    VWORD _arg3 = 
      statics->vars[81];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0check__arg, _V60_V0vanity_V0list)}, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0list_V0check__arg(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0list_V0split__at_V0lambda61(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0split__at_V0lambda61, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 2 2 (##.%x.2223 ##.%x.2224) ((##vcore.cdr (bruijn ##.lst.662 3 1)) (##vcore.- (bruijn ##.i.663 3 2) 1)) (##qualified-call (vanity list split-at) #t (bruijn ##.split-at.151 4 82) (bruijn ##.%k.1434 1 0) (bruijn ##.%x.2223 0 0) (bruijn ##.%x.2224 0 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      statics->up->up->vars[1]);
    self->vars[1] = _VBasic_VSub2(runtime, NULL,
      statics->up->up->vars[2],
      VEncodeInt(1l));
  {
   VEnv * _closure_env = _V60_V0vanity_V0list;
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      self->vars[0];
    VWORD _arg2 = 
      self->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0split__at, _V60_V0vanity_V0list)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0list_V0split__at(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
void _V50_V0vanity_V0list_V0split__at_V0lambda62(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0split__at_V0lambda62, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 2 2 (##.%x.2225 ##.%x.2226) ((##vcore.car (bruijn ##.lst.662 3 1)) (##vcore.cons (bruijn ##.%x.2225 0 0) (bruijn ##.t.664 1 1))) ((bruijn ##.values.5 5 1) (bruijn ##.%k.1437 1 0) (bruijn ##.%x.2226 0 1) (bruijn ##.d.665 1 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->up->vars[1]);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      self->vars[0],
      statics->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 1)), 3,
      statics->vars[0],
      self->vars[1],
      statics->vars[2]);
    }
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
  // (basic-block 1 1 (##.%p.2222) ((##vcore.eq? (bruijn ##.i.663 1 2) 0)) (if (bruijn ##.%p.2222 0 0) ((bruijn ##.values.5 3 1) (bruijn ##.%k.1432 1 0) '() (bruijn ##.lst.662 1 1)) (##vcore.call-with-values (bruijn ##.%k.1432 1 0) (close _V50_V0vanity_V0list_V0split__at_V0lambda61) (close _V50_V0vanity_V0list_V0split__at_V0lambda62))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      statics->vars[2],
      VEncodeInt(0l));
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[1]), 3,
      statics->vars[0],
      VNULL,
      statics->vars[1]);
} else {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0split__at_V0lambda61, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0split__at_V0lambda62, self)))));
}
    }
}
void _V50_V0vanity_V0list_V0drop__right_V10_Dloop_D668_V0k273(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0drop__right_V10_Dloop_D668_V0k273, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%r.2231) ((##vcore.cons (bruijn ##.%x.2228 2 0) (bruijn ##.%x.1444 1 0))) ((bruijn ##.%k.1441 4 0) (bruijn ##.%r.2231 0 0)))
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
void _V50_V0vanity_V0list_V0drop__right_V10_Dloop_D668(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0drop__right_V10_Dloop_D668, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 1 1 (##.%p.2227) ((##vcore.eq? (bruijn ##.len.670 1 2) (bruijn ##.i.667 3 2))) (if (bruijn ##.%p.2227 0 0) ((bruijn ##.%k.1441 1 0) '()) (basic-block 3 3 (##.%x.2228 ##.%x.2229 ##.%x.2230) ((##vcore.car (bruijn ##.lst.669 2 1)) (##vcore.cdr (bruijn ##.lst.669 2 1)) (##vcore.- (bruijn ##.len.670 2 2) 1)) (##qualified-call (vanity list drop-right ##.loop.668) #f (bruijn ##.loop.668 3 0) (close _V50_V0vanity_V0list_V0drop__right_V10_Dloop_D668_V0k273) (bruijn ##.%x.2229 0 1) (bruijn ##.%x.2230 0 2)))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      statics->vars[2],
      statics->up->up->vars[2]);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VNULL);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->vars[1]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->up->vars[1]);
    self->vars[2] = _VBasic_VSub2(runtime, NULL,
      statics->up->vars[2],
      VEncodeInt(1l));
  {
    VClosure * _closure = VDecodeClosure(statics->up->up->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0drop__right_V10_Dloop_D668_V0k273, self))));
    VWORD _arg1 = 
      self->vars[1];
    VWORD _arg2 = 
      self->vars[2];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0list_V0drop__right_V10_Dloop_D668(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
    }
}
void _V50_V0vanity_V0list_V0drop__right_V0k274(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0drop__right_V0k274, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity list drop-right ##.loop.668) #f (bruijn ##.loop.668 1 0) (bruijn ##.%k.1440 2 0) (bruijn ##.lst.666 2 1) (bruijn ##.%x.1447 0 0))
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
       _V50_V0vanity_V0list_V0drop__right_V10_Dloop_D668(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
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
  // (letrec 1 ((close "_V50_V0vanity_V0list_V0drop__right_V10_Dloop_D668")) (##qualified-call (vanity list my-num-pairs) #t (bruijn ##.my-num-pairs.175 2 106) (close _V50_V0vanity_V0list_V0drop__right_V0k274) (bruijn ##.lst.666 1 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0drop__right_V10_Dloop_D668, self))));
  {
   VEnv * _closure_env = _V60_V0vanity_V0list;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0drop__right_V0k274, self))));
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
void _V50_V0vanity_V0list_V0take__right_V10_Dloop_D673(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0take__right_V10_Dloop_D673, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 1 1 (##.%p.2232) ((##vcore.eq? (bruijn ##.len.675 1 2) (bruijn ##.i.672 3 2))) (if (bruijn ##.%p.2232 0 0) ((bruijn ##.%k.1449 1 0) (bruijn ##.lst.674 1 1)) (basic-block 2 2 (##.%x.2233 ##.%x.2234) ((##vcore.cdr (bruijn ##.lst.674 2 1)) (##vcore.- (bruijn ##.len.675 2 2) 1)) (##qualified-call (vanity list take-right ##.loop.673) #f (bruijn ##.loop.673 3 0) (bruijn ##.%k.1449 2 0) (bruijn ##.%x.2233 0 0) (bruijn ##.%x.2234 0 1)))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      statics->vars[2],
      statics->up->up->vars[2]);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      statics->vars[1]);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      statics->up->vars[1]);
    self->vars[1] = _VBasic_VSub2(runtime, NULL,
      statics->up->vars[2],
      VEncodeInt(1l));
  {
    VClosure * _closure = VDecodeClosure(statics->up->up->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->up->vars[0];
    VWORD _arg1 = 
      self->vars[0];
    VWORD _arg2 = 
      self->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0list_V0take__right_V10_Dloop_D673(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
    }
}
void _V50_V0vanity_V0list_V0take__right_V0k275(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0take__right_V0k275, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity list take-right ##.loop.673) #f (bruijn ##.loop.673 1 0) (bruijn ##.%k.1448 2 0) (bruijn ##.lst.671 2 1) (bruijn ##.%x.1453 0 0))
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
       _V50_V0vanity_V0list_V0take__right_V10_Dloop_D673(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
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
  // (letrec 1 ((close "_V50_V0vanity_V0list_V0take__right_V10_Dloop_D673")) (##qualified-call (vanity list my-num-pairs) #t (bruijn ##.my-num-pairs.175 2 106) (close _V50_V0vanity_V0list_V0take__right_V0k275) (bruijn ##.lst.671 1 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0take__right_V10_Dloop_D673, self))));
  {
   VEnv * _closure_env = _V60_V0vanity_V0list;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0take__right_V0k275, self))));
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
  // (basic-block 1 1 (##.%p.2235) ((##vcore.eq? (bruijn ##.i.677 1 2) 0)) (if (bruijn ##.%p.2235 0 0) ((bruijn ##.%k.1454 1 0) (bruijn ##.lst.676 1 1)) (basic-block 2 2 (##.%x.2236 ##.%x.2237) ((##vcore.cdr (bruijn ##.lst.676 2 1)) (##vcore.- (bruijn ##.i.677 2 2) 1)) (##qualified-call (vanity list drop) #t (bruijn ##.drop.154 3 85) (bruijn ##.%k.1454 2 0) (bruijn ##.%x.2236 0 0) (bruijn ##.%x.2237 0 1)))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      statics->vars[2],
      VEncodeInt(0l));
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      statics->vars[1]);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      statics->up->vars[1]);
    self->vars[1] = _VBasic_VSub2(runtime, NULL,
      statics->up->vars[2],
      VEncodeInt(1l));
  {
   VEnv * _closure_env = _V60_V0vanity_V0list;
    VWORD _arg0 = 
      statics->up->vars[0];
    VWORD _arg1 = 
      self->vars[0];
    VWORD _arg2 = 
      self->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0drop, _V60_V0vanity_V0list)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0list_V0drop(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
    }
}
void _V50_V0vanity_V0list_V0take_V0k276(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0take_V0k276, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%r.2242) ((##vcore.cons (bruijn ##.%x.2239 2 0) (bruijn ##.%x.1461 1 0))) ((bruijn ##.%k.1458 4 0) (bruijn ##.%r.2242 0 0)))
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
  // (basic-block 1 1 (##.%p.2238) ((##vcore.eq? (bruijn ##.i.679 1 2) 0)) (if (bruijn ##.%p.2238 0 0) ((bruijn ##.%k.1458 1 0) '()) (basic-block 3 3 (##.%x.2239 ##.%x.2240 ##.%x.2241) ((##vcore.car (bruijn ##.lst.678 2 1)) (##vcore.cdr (bruijn ##.lst.678 2 1)) (##vcore.- (bruijn ##.i.679 2 2) 1)) (##qualified-call (vanity list take) #t (bruijn ##.take.155 3 86) (close _V50_V0vanity_V0list_V0take_V0k276) (bruijn ##.%x.2240 0 1) (bruijn ##.%x.2241 0 2)))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      statics->vars[2],
      VEncodeInt(0l));
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VNULL);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->vars[1]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->up->vars[1]);
    self->vars[2] = _VBasic_VSub2(runtime, NULL,
      statics->up->vars[2],
      VEncodeInt(1l));
  {
   VEnv * _closure_env = _V60_V0vanity_V0list;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0take_V0k276, self))));
    VWORD _arg1 = 
      self->vars[1];
    VWORD _arg2 = 
      self->vars[2];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0take, _V60_V0vanity_V0list)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0list_V0take(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
    }
}
void _V50_V0vanity_V0list_V0car_Pcdr(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0car_Pcdr, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 2 2 (##.%x.2243 ##.%x.2244) ((##vcore.car (bruijn ##.x.680 1 1)) (##vcore.cdr (bruijn ##.x.680 1 1))) ((bruijn ##.values.5 3 1) (bruijn ##.%k.1464 1 0) (bruijn ##.%x.2243 0 0) (bruijn ##.%x.2244 0 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[1]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[1]), 3,
      statics->vars[0],
      self->vars[0],
      self->vars[1]);
    }
}
void _V50_V0vanity_V0list_V0tenth(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0tenth, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.list-ref.8 2 4) (bruijn ##.%k.1467 0 0) (bruijn ##.x.681 0 1) 9)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[4]), 3,
      _var0,
      _var1,
      VEncodeInt(9l));
}
void _V50_V0vanity_V0list_V0ninth(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0ninth, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.list-ref.8 2 4) (bruijn ##.%k.1468 0 0) (bruijn ##.x.682 0 1) 8)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[4]), 3,
      _var0,
      _var1,
      VEncodeInt(8l));
}
void _V50_V0vanity_V0list_V0eighth(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0eighth, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.list-ref.8 2 4) (bruijn ##.%k.1469 0 0) (bruijn ##.x.683 0 1) 7)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[4]), 3,
      _var0,
      _var1,
      VEncodeInt(7l));
}
void _V50_V0vanity_V0list_V0seventh(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0seventh, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.list-ref.8 2 4) (bruijn ##.%k.1470 0 0) (bruijn ##.x.684 0 1) 6)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[4]), 3,
      _var0,
      _var1,
      VEncodeInt(6l));
}
void _V50_V0vanity_V0list_V0sixth(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0sixth, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.list-ref.8 2 4) (bruijn ##.%k.1471 0 0) (bruijn ##.x.685 0 1) 5)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[4]), 3,
      _var0,
      _var1,
      VEncodeInt(5l));
}
void _V50_V0vanity_V0list_V0fifth(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0fifth, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.list-ref.8 2 4) (bruijn ##.%k.1472 0 0) (bruijn ##.x.686 0 1) 4)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[4]), 3,
      _var0,
      _var1,
      VEncodeInt(4l));
}
void _V50_V0vanity_V0list_V0list_E_V10_Dlp1_D689_V10_Dlp2_D694_V0k278(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0list_E_V10_Dlp1_D689_V10_Dlp2_D694_V0k278, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.1482 0 0) (##qualified-call (vanity list list= ##.lp1.689) #f (bruijn ##.lp1.689 7 0) (bruijn ##.%k.1480 2 0) (bruijn ##.list-b.2247 4 0) (bruijn ##.others.2248 4 1)) ((bruijn ##.%k.1480 2 0) #f))
if(VDecodeBool(
_var0)) {
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 7-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->up->vars[0];
    VWORD _arg1 = 
      statics->up->up->up->vars[0];
    VWORD _arg2 = 
      statics->up->up->up->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0list_V0list_E_V10_Dlp1_D689(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0list_V0list_E_V10_Dlp1_D689_V10_Dlp2_D694_V0k280(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0list_E_V10_Dlp1_D689_V10_Dlp2_D694_V0k280, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1484 0 0) (basic-block 2 2 (##.%x.2253 ##.%x.2254) ((##vcore.cdr (bruijn ##.pair-a.695 6 1)) (##vcore.cdr (bruijn ##.pair-b.696 6 2))) (##qualified-call (vanity list list= ##.lp1.689 ##.lp2.694) #f (bruijn ##.lp2.694 7 0) (bruijn ##.%k.1480 6 0) (bruijn ##.%x.2253 0 0) (bruijn ##.%x.2254 0 1))) ((bruijn ##.%k.1480 5 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 6-1, 1));
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 6-1, 2));
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 7-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      VGetArg(statics, 6-1, 0);
    VWORD _arg1 = 
      self->vars[0];
    VWORD _arg2 = 
      self->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0list_V0list_E_V10_Dlp1_D689_V10_Dlp2_D694(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0list_V0list_E_V10_Dlp1_D689_V10_Dlp2_D694_V0k279(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0list_E_V10_Dlp1_D689_V10_Dlp2_D694_V0k279, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%p.2250) ((##vcore.not (bruijn ##.%x.1489 1 0))) (if (bruijn ##.%p.2250 0 0) (basic-block 2 2 (##.%x.2251 ##.%x.2252) ((##vcore.car (bruijn ##.pair-a.695 4 1)) (##vcore.car (bruijn ##.pair-b.696 4 2))) ((bruijn ##.=.687 11 1) (close _V50_V0vanity_V0list_V0list_E_V10_Dlp1_D689_V10_Dlp2_D694_V0k280) (bruijn ##.%x.2251 0 0) (bruijn ##.%x.2252 0 1))) ((bruijn ##.%k.1480 3 0) #f)))
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
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->up->up->vars[1]);
    self->vars[1] = _VBasic_VCar2(runtime, NULL,
      statics->up->up->up->vars[2]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 1)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0list_E_V10_Dlp1_D689_V10_Dlp2_D694_V0k280, self)))),
      self->vars[0],
      self->vars[1]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
}
void _V50_V0vanity_V0list_V0list_E_V10_Dlp1_D689_V10_Dlp2_D694_V0k277(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0list_E_V10_Dlp1_D689_V10_Dlp2_D694_V0k277, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1481 0 0) (##qualified-call (vanity list null-list?) #t (bruijn ##.null-list?.169 9 100) (close _V50_V0vanity_V0list_V0list_E_V10_Dlp1_D689_V10_Dlp2_D694_V0k278) (bruijn ##.pair-b.696 1 2)) (##qualified-call (vanity list null-list?) #t (bruijn ##.null-list?.169 9 100) (close _V50_V0vanity_V0list_V0list_E_V10_Dlp1_D689_V10_Dlp2_D694_V0k279) (bruijn ##.pair-b.696 1 2)))
if(VDecodeBool(
_var0)) {
  {
   VEnv * _closure_env = _V60_V0vanity_V0list;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0list_E_V10_Dlp1_D689_V10_Dlp2_D694_V0k278, self))));
    VWORD _arg1 = 
      statics->vars[2];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0null__list_Q, _V60_V0vanity_V0list)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0list_V0null__list_Q(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
} else {
  {
   VEnv * _closure_env = _V60_V0vanity_V0list;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0list_E_V10_Dlp1_D689_V10_Dlp2_D694_V0k279, self))));
    VWORD _arg1 = 
      statics->vars[2];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0null__list_Q, _V60_V0vanity_V0list)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0list_V0null__list_Q(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
}
void _V50_V0vanity_V0list_V0list_E_V10_Dlp1_D689_V10_Dlp2_D694(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0list_E_V10_Dlp1_D689_V10_Dlp2_D694, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (##qualified-call (vanity list null-list?) #t (bruijn ##.null-list?.169 8 100) (close _V50_V0vanity_V0list_V0list_E_V10_Dlp1_D689_V10_Dlp2_D694_V0k277) (bruijn ##.pair-a.695 0 1))
  {
   VEnv * _closure_env = _V60_V0vanity_V0list;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0list_E_V10_Dlp1_D689_V10_Dlp2_D694_V0k277, self))));
    VWORD _arg1 = 
      _var1;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0null__list_Q, _V60_V0vanity_V0list)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0list_V0null__list_Q(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0list_V0list_E_V10_Dlp1_D689(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0list_E_V10_Dlp1_D689, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 1 1 (##.%p.2246) ((##vcore.null? (bruijn ##.others.691 1 2))) (if (bruijn ##.%p.2246 0 0) ((bruijn ##.%k.1475 1 0) (bruijn ##.%p.2246 0 0)) (basic-block 3 3 (##.list-b.2247 ##.others.2248 ##.%p.2249) ((##vcore.car (bruijn ##.others.691 2 2)) (##vcore.cdr (bruijn ##.others.691 2 2)) (##vcore.eq? (bruijn ##.list-a.690 2 1) (bruijn ##.list-b.2247 0 0))) (if (bruijn ##.%p.2249 0 2) (##qualified-call (vanity list list= ##.lp1.689) #f (bruijn ##.lp1.689 3 0) (bruijn ##.%k.1475 2 0) (bruijn ##.list-b.2247 0 0) (bruijn ##.others.2248 0 1)) (letrec 1 ((close "_V50_V0vanity_V0list_V0list_E_V10_Dlp1_D689_V10_Dlp2_D694")) (##qualified-call (vanity list list= ##.lp1.689 ##.lp2.694) #f (bruijn ##.lp2.694 0 0) (bruijn ##.%k.1475 3 0) (bruijn ##.list-a.690 3 1) (bruijn ##.list-b.2247 1 0)))))))
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
      self->vars[0]);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->vars[2]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->up->vars[2]);
    self->vars[2] = _VBasic_VEq2(runtime, NULL,
      statics->up->vars[1],
      self->vars[0]);
if(VDecodeBool(
self->vars[2])) {
  {
    VClosure * _closure = VDecodeClosure(statics->up->up->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->up->vars[0];
    VWORD _arg1 = 
      self->vars[0];
    VWORD _arg2 = 
      self->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0list_V0list_E_V10_Dlp1_D689(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0list_E_V10_Dlp1_D689_V10_Dlp2_D694, self))));
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->up->up->vars[0];
    VWORD _arg1 = 
      statics->up->up->vars[1];
    VWORD _arg2 = 
      statics->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0list_V0list_E_V10_Dlp1_D689_V10_Dlp2_D694(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
    }
}
    }
}
void _V50_V0vanity_V0list_V0list_E(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, ...) {
 if(argc < 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0list_E, got ~D~N"
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
  // (basic-block 1 1 (##.%p.2245) ((##vcore.null? (bruijn ##.lists.688 1 2))) (if (bruijn ##.%p.2245 0 0) ((bruijn ##.%k.1473 1 0) (bruijn ##.%p.2245 0 0)) (letrec 1 ((close "_V50_V0vanity_V0list_V0list_E_V10_Dlp1_D689")) (basic-block 2 2 (##.%x.2255 ##.%x.2256) ((##vcore.car (bruijn ##.lists.688 3 2)) (##vcore.cdr (bruijn ##.lists.688 3 2))) (##qualified-call (vanity list list= ##.lp1.689) #f (bruijn ##.lp1.689 1 0) (bruijn ##.%k.1473 3 0) (bruijn ##.%x.2255 0 0) (bruijn ##.%x.2256 0 1))))))
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
      self->vars[0]);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0list_E_V10_Dlp1_D689, self))));
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
       _V50_V0vanity_V0list_V0list_E_V10_Dlp1_D689(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
    }
}
    }
}
void _V50_V0vanity_V0list_V0list__tabulate_V10_Dloop_D699_V0k282(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0list__tabulate_V10_Dloop_D699_V0k282, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%r.2259) ((##vcore.cons (bruijn ##.%x.1495 3 0) (bruijn ##.%x.1496 1 0))) ((bruijn ##.%k.1493 5 0) (bruijn ##.%r.2259 0 0)))
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
void _V50_V0vanity_V0list_V0list__tabulate_V10_Dloop_D699_V0k281(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0list__tabulate_V10_Dloop_D699_V0k281, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%x.2258) ((##vcore.+ (bruijn ##.i.700 3 1) 1)) (##qualified-call (vanity list list-tabulate ##.loop.699) #f (bruijn ##.loop.699 4 0) (close _V50_V0vanity_V0list_V0list__tabulate_V10_Dloop_D699_V0k282) (bruijn ##.%x.2258 0 0)))
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
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0list__tabulate_V10_Dloop_D699_V0k282, self))));
    VWORD _arg1 = 
      self->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0list_V0list__tabulate_V10_Dloop_D699(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
}
void _V50_V0vanity_V0list_V0list__tabulate_V10_Dloop_D699(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0list__tabulate_V10_Dloop_D699, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.%p.2257) ((##vcore.eq? (bruijn ##.i.700 1 1) (bruijn ##.n.697 3 1))) (if (bruijn ##.%p.2257 0 0) ((bruijn ##.%k.1493 1 0) '()) ((bruijn ##.proc.698 3 2) (close _V50_V0vanity_V0list_V0list__tabulate_V10_Dloop_D699_V0k281) (bruijn ##.i.700 1 1))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      statics->vars[1],
      statics->up->up->vars[1]);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VNULL);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[2]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0list__tabulate_V10_Dloop_D699_V0k281, self)))),
      statics->vars[1]);
}
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
  // (letrec 1 ((close "_V50_V0vanity_V0list_V0list__tabulate_V10_Dloop_D699")) (##qualified-call (vanity list list-tabulate ##.loop.699) #f (bruijn ##.loop.699 0 0) (bruijn ##.%k.1492 1 0) 0))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0list__tabulate_V10_Dloop_D699, self))));
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
       _V50_V0vanity_V0list_V0list__tabulate_V10_Dloop_D699(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
}
void _V50_V0vanity_V0list_V0null__list_Q(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0null__list_Q, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.%p.2260) ((##vcore.pair? (bruijn ##.l.701 1 1))) (if (bruijn ##.%p.2260 0 0) ((bruijn ##.%k.1498 1 0) #f) (basic-block 1 1 (##.%p.2261) ((##vcore.null? (bruijn ##.l.701 2 1))) (if (bruijn ##.%p.2261 0 0) ((bruijn ##.%k.1498 2 0) #t) ((bruijn ##.error.6 4 2) (bruijn ##.%k.1498 2 0) (##string ##.string.2627) (bruijn ##.l.701 2 1))))))
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
      VEncodeBool(false));
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
      VEncodeBool(true));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[2]), 3,
      statics->up->vars[0],
      VEncodePointer(&_V10_Dstring_D2627.sym, VPOINTER_OTHER),
      statics->up->vars[1]);
}
    }
}
    }
}
void _V50_V0vanity_V0list_V0not__pair_Q(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0not__pair_Q, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 2 2 (##.%x.2262 ##.%r.2263) ((##vcore.pair? (bruijn ##.x.702 1 1)) (##vcore.not (bruijn ##.%x.2262 0 0))) ((bruijn ##.%k.1501 1 0) (bruijn ##.%r.2263 0 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->vars[1]);
    self->vars[1] = _VBasic_VNot2(runtime, NULL,
      self->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      self->vars[1]);
    }
}
void _V50_V0vanity_V0list_V0circular__list_Q_V10_Dlp_D704(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0circular__list_Q_V10_Dlp_D704, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 1 1 (##.%p.2264) ((##vcore.pair? (bruijn ##.x.705 1 1))) (if (bruijn ##.%p.2264 0 0) (basic-block 2 2 (##.x.2265 ##.%p.2266) ((##vcore.cdr (bruijn ##.x.705 2 1)) (##vcore.pair? (bruijn ##.x.2265 0 0))) (if (bruijn ##.%p.2266 0 1) (basic-block 3 3 (##.x.2267 ##.lag.2268 ##.%p.2269) ((##vcore.cdr (bruijn ##.x.2265 1 0)) (##vcore.cdr (bruijn ##.lag.706 3 2)) (##vcore.eq? (bruijn ##.x.2267 0 0) (bruijn ##.lag.2268 0 1))) (if (bruijn ##.%p.2269 0 2) ((bruijn ##.%k.1504 3 0) (bruijn ##.%p.2269 0 2)) (##qualified-call (vanity list circular-list? ##.lp.704) #f (bruijn ##.lp.704 4 0) (bruijn ##.%k.1504 3 0) (bruijn ##.x.2267 0 0) (bruijn ##.lag.2268 0 1)))) ((bruijn ##.%k.1504 2 0) #f))) ((bruijn ##.%k.1504 1 0) #f)))
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
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      statics->up->vars[1]);
    self->vars[1] = _VBasic_VPairP2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[0]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->up->up->vars[2]);
    self->vars[2] = _VBasic_VEq2(runtime, NULL,
      self->vars[0],
      self->vars[1]);
if(VDecodeBool(
self->vars[2])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      self->vars[2]);
} else {
  {
    VClosure * _closure = VDecodeClosure(statics->up->up->up->vars[0]);
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
       _V50_V0vanity_V0list_V0circular__list_Q_V10_Dlp_D704(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
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
}
void _V50_V0vanity_V0list_V0circular__list_Q(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0circular__list_Q, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (letrec 1 ((close "_V50_V0vanity_V0list_V0circular__list_Q_V10_Dlp_D704")) (##qualified-call (vanity list circular-list? ##.lp.704) #f (bruijn ##.lp.704 0 0) (bruijn ##.%k.1503 1 0) (bruijn ##.x.703 1 1) (bruijn ##.x.703 1 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0circular__list_Q_V10_Dlp_D704, self))));
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      statics->vars[1];
    VWORD _arg2 = 
      statics->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0list_V0circular__list_Q_V10_Dlp_D704(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
void _V50_V0vanity_V0list_V0dotted__list_Q_V10_Dlp_D711(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0dotted__list_Q_V10_Dlp_D711, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 1 1 (##.%p.2270) ((##vcore.pair? (bruijn ##.x.712 1 1))) (if (bruijn ##.%p.2270 0 0) (basic-block 2 2 (##.x.2271 ##.%p.2272) ((##vcore.cdr (bruijn ##.x.712 2 1)) (##vcore.pair? (bruijn ##.x.2271 0 0))) (if (bruijn ##.%p.2272 0 1) (basic-block 4 4 (##.x.2273 ##.lag.2274 ##.%x.2275 ##.%p.2276) ((##vcore.cdr (bruijn ##.x.2271 1 0)) (##vcore.cdr (bruijn ##.lag.713 3 2)) (##vcore.eq? (bruijn ##.x.2273 0 0) (bruijn ##.lag.2274 0 1)) (##vcore.not (bruijn ##.%x.2275 0 2))) (if (bruijn ##.%p.2276 0 3) (##qualified-call (vanity list dotted-list? ##.lp.711) #f (bruijn ##.lp.711 4 0) (bruijn ##.%k.1511 3 0) (bruijn ##.x.2273 0 0) (bruijn ##.lag.2274 0 1)) ((bruijn ##.%k.1511 3 0) #f))) (basic-block 2 2 (##.%x.2277 ##.%r.2278) ((##vcore.null? (bruijn ##.x.2271 1 0)) (##vcore.not (bruijn ##.%x.2277 0 0))) ((bruijn ##.%k.1511 3 0) (bruijn ##.%r.2278 0 1))))) (basic-block 2 2 (##.%x.2279 ##.%r.2280) ((##vcore.null? (bruijn ##.x.712 2 1)) (##vcore.not (bruijn ##.%x.2279 0 0))) ((bruijn ##.%k.1511 2 0) (bruijn ##.%r.2280 0 1)))))
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
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      statics->up->vars[1]);
    self->vars[1] = _VBasic_VPairP2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[4]; } container;
    self = &container.self;
    VInitEnv(self, 4, 4, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[0]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->up->up->vars[2]);
    self->vars[2] = _VBasic_VEq2(runtime, NULL,
      self->vars[0],
      self->vars[1]);
    self->vars[3] = _VBasic_VNot2(runtime, NULL,
      self->vars[2]);
if(VDecodeBool(
self->vars[3])) {
  {
    VClosure * _closure = VDecodeClosure(statics->up->up->up->vars[0]);
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
       _V50_V0vanity_V0list_V0dotted__list_Q_V10_Dlp_D711(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VNullP2(runtime, NULL,
      statics->vars[0]);
    self->vars[1] = _VBasic_VNot2(runtime, NULL,
      self->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      self->vars[1]);
    }
}
    }
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VNullP2(runtime, NULL,
      statics->up->vars[1]);
    self->vars[1] = _VBasic_VNot2(runtime, NULL,
      self->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      self->vars[1]);
    }
}
    }
}
void _V50_V0vanity_V0list_V0dotted__list_Q(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0dotted__list_Q, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (letrec 1 ((close "_V50_V0vanity_V0list_V0dotted__list_Q_V10_Dlp_D711")) (##qualified-call (vanity list dotted-list? ##.lp.711) #f (bruijn ##.lp.711 0 0) (bruijn ##.%k.1510 1 0) (bruijn ##.x.710 1 1) (bruijn ##.x.710 1 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0dotted__list_Q_V10_Dlp_D711, self))));
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      statics->vars[1];
    VWORD _arg2 = 
      statics->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0list_V0dotted__list_Q_V10_Dlp_D711(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
void _V50_V0vanity_V0list_V0proper__list_Q_V10_Dlp_D718(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0proper__list_Q_V10_Dlp_D718, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 1 1 (##.%p.2281) ((##vcore.pair? (bruijn ##.x.719 1 1))) (if (bruijn ##.%p.2281 0 0) (basic-block 2 2 (##.x.2282 ##.%p.2283) ((##vcore.cdr (bruijn ##.x.719 2 1)) (##vcore.pair? (bruijn ##.x.2282 0 0))) (if (bruijn ##.%p.2283 0 1) (basic-block 4 4 (##.x.2284 ##.lag.2285 ##.%x.2286 ##.%p.2287) ((##vcore.cdr (bruijn ##.x.2282 1 0)) (##vcore.cdr (bruijn ##.lag.720 3 2)) (##vcore.eq? (bruijn ##.x.2284 0 0) (bruijn ##.lag.2285 0 1)) (##vcore.not (bruijn ##.%x.2286 0 2))) (if (bruijn ##.%p.2287 0 3) (##qualified-call (vanity list proper-list? ##.lp.718) #f (bruijn ##.lp.718 4 0) (bruijn ##.%k.1521 3 0) (bruijn ##.x.2284 0 0) (bruijn ##.lag.2285 0 1)) ((bruijn ##.%k.1521 3 0) #f))) (basic-block 1 1 (##.%r.2288) ((##vcore.null? (bruijn ##.x.2282 1 0))) ((bruijn ##.%k.1521 3 0) (bruijn ##.%r.2288 0 0))))) (basic-block 1 1 (##.%r.2289) ((##vcore.null? (bruijn ##.x.719 2 1))) ((bruijn ##.%k.1521 2 0) (bruijn ##.%r.2289 0 0)))))
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
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      statics->up->vars[1]);
    self->vars[1] = _VBasic_VPairP2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[4]; } container;
    self = &container.self;
    VInitEnv(self, 4, 4, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[0]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->up->up->vars[2]);
    self->vars[2] = _VBasic_VEq2(runtime, NULL,
      self->vars[0],
      self->vars[1]);
    self->vars[3] = _VBasic_VNot2(runtime, NULL,
      self->vars[2]);
if(VDecodeBool(
self->vars[3])) {
  {
    VClosure * _closure = VDecodeClosure(statics->up->up->up->vars[0]);
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
       _V50_V0vanity_V0list_V0proper__list_Q_V10_Dlp_D718(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VNullP2(runtime, NULL,
      statics->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      self->vars[0]);
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
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      self->vars[0]);
    }
}
    }
}
void _V50_V0vanity_V0list_V0proper__list_Q(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0proper__list_Q, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (letrec 1 ((close "_V50_V0vanity_V0list_V0proper__list_Q_V10_Dlp_D718")) (##qualified-call (vanity list proper-list? ##.lp.718) #f (bruijn ##.lp.718 0 0) (bruijn ##.%k.1520 1 0) (bruijn ##.x.717 1 1) (bruijn ##.x.717 1 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0proper__list_Q_V10_Dlp_D718, self))));
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      statics->vars[1];
    VWORD _arg2 = 
      statics->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0list_V0proper__list_Q_V10_Dlp_D718(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
void _V50_V0vanity_V0list_V0iota_V10_Dloop_D725_V0k283(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0iota_V10_Dloop_D725_V0k283, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%r.2292) ((##vcore.cons (bruijn ##.i.726 4 1) (bruijn ##.%x.1531 1 0))) ((bruijn ##.%k.1529 4 0) (bruijn ##.%r.2292 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->up->up->up->vars[1],
      statics->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      self->vars[0]);
    }
}
void _V50_V0vanity_V0list_V0iota_V10_Dloop_D725(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0iota_V10_Dloop_D725, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.%p.2290) ((##vcore.eq? (bruijn ##.i.726 1 1) (bruijn ##.n.724 3 1))) (if (bruijn ##.%p.2290 0 0) ((bruijn ##.%k.1529 1 0) '()) (basic-block 1 1 (##.%x.2291) ((##vcore.+ (bruijn ##.i.726 2 1) 1)) (##qualified-call (vanity list iota ##.loop.725) #f (bruijn ##.loop.725 3 0) (close _V50_V0vanity_V0list_V0iota_V10_Dloop_D725_V0k283) (bruijn ##.%x.2291 0 0)))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      statics->vars[1],
      statics->up->up->vars[1]);
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
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      statics->up->vars[1],
      VEncodeInt(1l));
  {
    VClosure * _closure = VDecodeClosure(statics->up->up->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0iota_V10_Dloop_D725_V0k283, self))));
    VWORD _arg1 = 
      self->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0list_V0iota_V10_Dloop_D725(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
}
    }
}
void _V50_V0vanity_V0list_V0iota_V10_Dloop_D729_V0k284(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0iota_V10_Dloop_D729_V0k284, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%r.2296) ((##vcore.cons (bruijn ##.%x.2294 2 0) (bruijn ##.%x.1537 1 0))) ((bruijn ##.%k.1534 4 0) (bruijn ##.%r.2296 0 0)))
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
void _V50_V0vanity_V0list_V0iota_V10_Dloop_D729(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0iota_V10_Dloop_D729, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.%p.2293) ((##vcore.eq? (bruijn ##.i.730 1 1) (bruijn ##.n.727 3 1))) (if (bruijn ##.%p.2293 0 0) ((bruijn ##.%k.1534 1 0) '()) (basic-block 2 2 (##.%x.2294 ##.%x.2295) ((##vcore.+ (bruijn ##.i.730 2 1) (bruijn ##.b.728 4 2)) (##vcore.+ (bruijn ##.i.730 2 1) 1)) (##qualified-call (vanity list iota ##.loop.729) #f (bruijn ##.loop.729 3 0) (close _V50_V0vanity_V0list_V0iota_V10_Dloop_D729_V0k284) (bruijn ##.%x.2295 0 1)))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      statics->vars[1],
      statics->up->up->vars[1]);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VNULL);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      statics->up->vars[1],
      statics->up->up->up->vars[2]);
    self->vars[1] = _VBasic_VAdd2(runtime, NULL,
      statics->up->vars[1],
      VEncodeInt(1l));
  {
    VClosure * _closure = VDecodeClosure(statics->up->up->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0iota_V10_Dloop_D729_V0k284, self))));
    VWORD _arg1 = 
      self->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0list_V0iota_V10_Dloop_D729(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
}
    }
}
void _V50_V0vanity_V0list_V0iota_V10_Dloop_D734_V0k285(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0iota_V10_Dloop_D734_V0k285, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%r.2301) ((##vcore.cons (bruijn ##.%x.2299 2 1) (bruijn ##.%x.1543 1 0))) ((bruijn ##.%k.1540 4 0) (bruijn ##.%r.2301 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[1],
      statics->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      self->vars[0]);
    }
}
void _V50_V0vanity_V0list_V0iota_V10_Dloop_D734(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0iota_V10_Dloop_D734, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.%p.2297) ((##vcore.eq? (bruijn ##.i.735 1 1) (bruijn ##.n.731 3 1))) (if (bruijn ##.%p.2297 0 0) ((bruijn ##.%k.1540 1 0) '()) (basic-block 3 3 (##.%x.2298 ##.%x.2299 ##.%x.2300) ((##vcore.* (bruijn ##.s.733 4 3) (bruijn ##.i.735 2 1)) (##vcore.+ (bruijn ##.%x.2298 0 0) (bruijn ##.b.732 4 2)) (##vcore.+ (bruijn ##.i.735 2 1) 1)) (##qualified-call (vanity list iota ##.loop.734) #f (bruijn ##.loop.734 3 0) (close _V50_V0vanity_V0list_V0iota_V10_Dloop_D734_V0k285) (bruijn ##.%x.2300 0 2)))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      statics->vars[1],
      statics->up->up->vars[1]);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VNULL);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VMul2(runtime, NULL,
      statics->up->up->up->vars[3],
      statics->up->vars[1]);
    self->vars[1] = _VBasic_VAdd2(runtime, NULL,
      self->vars[0],
      statics->up->up->up->vars[2]);
    self->vars[2] = _VBasic_VAdd2(runtime, NULL,
      statics->up->vars[1],
      VEncodeInt(1l));
  {
    VClosure * _closure = VDecodeClosure(statics->up->up->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0iota_V10_Dloop_D734_V0k285, self))));
    VWORD _arg1 = 
      self->vars[2];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0list_V0iota_V10_Dloop_D734(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
}
    }
}
__attribute__((used)) static void _V20CaseError__V50_V0vanity_V0list_V0iota(VRuntime * runtime, VEnv * statics, int argc, ...) {
 // ("_V50_V0vanity_V0list_V0iota" #t #f (2 (letrec 1 ((close "_V50_V0vanity_V0list_V0iota_V10_Dloop_D725")) (##qualified-call (vanity list iota ##.loop.725) #f (bruijn ##.loop.725 0 0) (bruijn ##.%k.1528 1 0) 0))) (3 (letrec 1 ((close "_V50_V0vanity_V0list_V0iota_V10_Dloop_D729")) (##qualified-call (vanity list iota ##.loop.729) #f (bruijn ##.loop.729 0 0) (bruijn ##.%k.1533 1 0) 0))) (4 (letrec 1 ((close "_V50_V0vanity_V0list_V0iota_V10_Dloop_D734")) (##qualified-call (vanity list iota ##.loop.734) #f (bruijn ##.loop.734 0 0) (bruijn ##.%k.1539 1 0) 0))))
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
  // (letrec 1 ((close "_V50_V0vanity_V0list_V0iota_V10_Dloop_D725")) (##qualified-call (vanity list iota ##.loop.725) #f (bruijn ##.loop.725 0 0) (bruijn ##.%k.1528 1 0) 0))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0iota_V10_Dloop_D725, self))));
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
       _V50_V0vanity_V0list_V0iota_V10_Dloop_D725(runtime, _closure_env, 2, _arg0, _arg1);
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
  // (letrec 1 ((close "_V50_V0vanity_V0list_V0iota_V10_Dloop_D729")) (##qualified-call (vanity list iota ##.loop.729) #f (bruijn ##.loop.729 0 0) (bruijn ##.%k.1533 1 0) 0))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0iota_V10_Dloop_D729, self))));
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
       _V50_V0vanity_V0list_V0iota_V10_Dloop_D729(runtime, _closure_env, 2, _arg0, _arg1);
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
  // (letrec 1 ((close "_V50_V0vanity_V0list_V0iota_V10_Dloop_D734")) (##qualified-call (vanity list iota ##.loop.734) #f (bruijn ##.loop.734 0 0) (bruijn ##.%k.1539 1 0) 0))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0iota_V10_Dloop_D734, self))));
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
       _V50_V0vanity_V0list_V0iota_V10_Dloop_D734(runtime, _closure_env, 2, _arg0, _arg1);
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
void _V50_V0vanity_V0list_V0my__num__pairs_V10_Dloop_D737(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0my__num__pairs_V10_Dloop_D737, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 1 1 (##.%p.2302) ((##vcore.pair? (bruijn ##.lst.738 1 1))) (if (bruijn ##.%p.2302 0 0) (basic-block 2 2 (##.%x.2303 ##.%x.2304) ((##vcore.cdr (bruijn ##.lst.738 2 1)) (##vcore.+ (bruijn ##.n.739 2 2) 1)) (##qualified-call (vanity list my-num-pairs ##.loop.737) #f (bruijn ##.loop.737 3 0) (bruijn ##.%k.1547 2 0) (bruijn ##.%x.2303 0 0) (bruijn ##.%x.2304 0 1))) ((bruijn ##.%k.1547 1 0) (bruijn ##.n.739 1 2))))
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
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      statics->up->vars[1]);
    self->vars[1] = _VBasic_VAdd2(runtime, NULL,
      statics->up->vars[2],
      VEncodeInt(1l));
  {
    VClosure * _closure = VDecodeClosure(statics->up->up->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->up->vars[0];
    VWORD _arg1 = 
      self->vars[0];
    VWORD _arg2 = 
      self->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0list_V0my__num__pairs_V10_Dloop_D737(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      statics->vars[2]);
}
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
  // (letrec 1 ((close "_V50_V0vanity_V0list_V0my__num__pairs_V10_Dloop_D737")) (##qualified-call (vanity list my-num-pairs ##.loop.737) #f (bruijn ##.loop.737 0 0) (bruijn ##.%k.1546 1 0) (bruijn ##.lst.736 1 1) 0))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0my__num__pairs_V10_Dloop_D737, self))));
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
       _V50_V0vanity_V0list_V0my__num__pairs_V10_Dloop_D737(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
static void _V50_V0vanity_V0list_V0circular__list_V0k287(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.%k.1551 2 0) (bruijn ##.ans.2305 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      statics->vars[0]);
}
void _V50_V0vanity_V0list_V0circular__list_V0k286(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0circular__list_V0k286, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.set-cdr! (close _V50_V0vanity_V0list_V0circular__list_V0k287) (bruijn ##.%x.1552 0 0) (bruijn ##.ans.2305 1 0))
    VCallFuncWithGC(runtime, (VFunc)VSetCdr2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0circular__list_V0k287, self)))),
      _var0,
      statics->vars[0]);
}
void _V50_V0vanity_V0list_V0circular__list(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, ...) {
 if(argc < 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0circular__list, got ~D~N"
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
  // (basic-block 1 1 (##.ans.2305) ((##vcore.cons (bruijn ##.val1.740 1 1) (bruijn ##.vals.741 1 2))) (##qualified-call (vanity list last-pair) #t (bruijn ##.last-pair.145 2 76) (close _V50_V0vanity_V0list_V0circular__list_V0k286) (bruijn ##.ans.2305 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->vars[1],
      statics->vars[2]);
  {
   VEnv * _closure_env = _V60_V0vanity_V0list;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0circular__list_V0k286, self))));
    VWORD _arg1 = 
      self->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0last__pair, _V60_V0vanity_V0list)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0list_V0last__pair(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
}
void _V50_V0vanity_V0list_V0cons_S_V10_Drecur_D745_V0k288(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0cons_S_V10_Drecur_D745_V0k288, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%r.2309) ((##vcore.cons (bruijn ##.x.746 4 1) (bruijn ##.%x.1556 1 0))) ((bruijn ##.%k.1554 4 0) (bruijn ##.%r.2309 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->up->up->up->vars[1],
      statics->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      self->vars[0]);
    }
}
void _V50_V0vanity_V0list_V0cons_S_V10_Drecur_D745(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0cons_S_V10_Drecur_D745, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 1 1 (##.%p.2306) ((##vcore.pair? (bruijn ##.rest.747 1 2))) (if (bruijn ##.%p.2306 0 0) (basic-block 2 2 (##.%x.2307 ##.%x.2308) ((##vcore.car (bruijn ##.rest.747 2 2)) (##vcore.cdr (bruijn ##.rest.747 2 2))) (##qualified-call (vanity list cons* ##.recur.745) #f (bruijn ##.recur.745 3 0) (close _V50_V0vanity_V0list_V0cons_S_V10_Drecur_D745_V0k288) (bruijn ##.%x.2307 0 0) (bruijn ##.%x.2308 0 1))) ((bruijn ##.%k.1554 1 0) (bruijn ##.x.746 1 1))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->vars[2]);
if(VDecodeBool(
self->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->vars[2]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->up->vars[2]);
  {
    VClosure * _closure = VDecodeClosure(statics->up->up->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0cons_S_V10_Drecur_D745_V0k288, self))));
    VWORD _arg1 = 
      self->vars[0];
    VWORD _arg2 = 
      self->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0list_V0cons_S_V10_Drecur_D745(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      statics->vars[1]);
}
    }
}
void _V50_V0vanity_V0list_V0cons_S(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, ...) {
 if(argc < 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0cons_S, got ~D~N"
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
  // (letrec 1 ((close "_V50_V0vanity_V0list_V0cons_S_V10_Drecur_D745")) (##qualified-call (vanity list cons* ##.recur.745) #f (bruijn ##.recur.745 0 0) (bruijn ##.%k.1553 1 0) (bruijn ##.first.743 1 1) (bruijn ##.rest.744 1 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0cons_S_V10_Drecur_D745, self))));
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      statics->vars[1];
    VWORD _arg2 = 
      statics->vars[2];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0list_V0cons_S_V10_Drecur_D745(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
void _V50_V0vanity_V0list_V0xcons(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0xcons, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 1 1 (##.%r.2310) ((##vcore.cons (bruijn ##.a.749 1 2) (bruijn ##.d.748 1 1))) ((bruijn ##.%k.1559 1 0) (bruijn ##.%r.2310 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->vars[2],
      statics->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      self->vars[0]);
    }
}
void _V50_V0vanity_V0list_V0_Mcars_Pcdrs_V10_Drecur_D752_V0lambda64(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0_Mcars_Pcdrs_V10_Drecur_D752_V0lambda64, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity list car+cdr) #t (bruijn ##.car+cdr.156 6 87) (bruijn ##.%k.1564 0 0) (bruijn ##.lists.753 2 1))
  {
   VEnv * _closure_env = _V60_V0vanity_V0list;
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      statics->up->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0car_Pcdr, _V60_V0vanity_V0list)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0list_V0car_Pcdr(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0list_V0_Mcars_Pcdrs_V10_Drecur_D752_V0lambda66(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0_Mcars_Pcdrs_V10_Drecur_D752_V0lambda66, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity list car+cdr) #t (bruijn ##.car+cdr.156 8 87) (bruijn ##.%k.1567 0 0) (bruijn ##.list.754 2 1))
  {
   VEnv * _closure_env = _V60_V0vanity_V0list;
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      statics->up->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0car_Pcdr, _V60_V0vanity_V0list)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0list_V0car_Pcdr(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0list_V0_Mcars_Pcdrs_V10_Drecur_D752_V0lambda68(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0_Mcars_Pcdrs_V10_Drecur_D752_V0lambda68, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity list %cars+cdrs ##.recur.752) #f (bruijn ##.recur.752 6 0) (bruijn ##.%k.1569 0 0) (bruijn ##.other-lists.755 3 2))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 6-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      statics->up->up->vars[2];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0list_V0_Mcars_Pcdrs_V10_Drecur_D752(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0list_V0_Mcars_Pcdrs_V10_Drecur_D752_V0lambda69(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0_Mcars_Pcdrs_V10_Drecur_D752_V0lambda69, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 2 2 (##.%x.2312 ##.%x.2313) ((##vcore.cons (bruijn ##.a.756 2 1) (bruijn ##.cars.758 1 1)) (##vcore.cons (bruijn ##.d.757 2 2) (bruijn ##.cdrs.759 1 2))) ((bruijn ##.values.5 11 1) (bruijn ##.%k.1570 1 0) (bruijn ##.%x.2312 0 0) (bruijn ##.%x.2313 0 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[1],
      statics->vars[1]);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[2],
      statics->vars[2]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 1)), 3,
      statics->vars[0],
      self->vars[0],
      self->vars[1]);
    }
}
void _V50_V0vanity_V0list_V0_Mcars_Pcdrs_V10_Drecur_D752_V0lambda67(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0_Mcars_Pcdrs_V10_Drecur_D752_V0lambda67, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (##vcore.call-with-values (bruijn ##.%k.1568 0 0) (close _V50_V0vanity_V0list_V0_Mcars_Pcdrs_V10_Drecur_D752_V0lambda68) (close _V50_V0vanity_V0list_V0_Mcars_Pcdrs_V10_Drecur_D752_V0lambda69))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0_Mcars_Pcdrs_V10_Drecur_D752_V0lambda68, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0_Mcars_Pcdrs_V10_Drecur_D752_V0lambda69, self)))));
}
void _V50_V0vanity_V0list_V0_Mcars_Pcdrs_V10_Drecur_D752_V0k289(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0_Mcars_Pcdrs_V10_Drecur_D752_V0k289, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1566 0 0) ((bruijn ##.abort.751 5 1) (bruijn ##.%k.1565 1 0) '() '()) (##vcore.call-with-values (bruijn ##.%k.1565 1 0) (close _V50_V0vanity_V0list_V0_Mcars_Pcdrs_V10_Drecur_D752_V0lambda66) (close _V50_V0vanity_V0list_V0_Mcars_Pcdrs_V10_Drecur_D752_V0lambda67)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 1)), 3,
      statics->vars[0],
      VNULL,
      VNULL);
} else {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0_Mcars_Pcdrs_V10_Drecur_D752_V0lambda66, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0_Mcars_Pcdrs_V10_Drecur_D752_V0lambda67, self)))));
}
}
void _V50_V0vanity_V0list_V0_Mcars_Pcdrs_V10_Drecur_D752_V0lambda65(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0_Mcars_Pcdrs_V10_Drecur_D752_V0lambda65, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (##qualified-call (vanity list null-list?) #t (bruijn ##.null-list?.169 6 100) (close _V50_V0vanity_V0list_V0_Mcars_Pcdrs_V10_Drecur_D752_V0k289) (bruijn ##.list.754 0 1))
  {
   VEnv * _closure_env = _V60_V0vanity_V0list;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0_Mcars_Pcdrs_V10_Drecur_D752_V0k289, self))));
    VWORD _arg1 = 
      _var1;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0null__list_Q, _V60_V0vanity_V0list)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0list_V0null__list_Q(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0list_V0_Mcars_Pcdrs_V10_Drecur_D752(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0_Mcars_Pcdrs_V10_Drecur_D752, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.%p.2311) ((##vcore.pair? (bruijn ##.lists.753 1 1))) (if (bruijn ##.%p.2311 0 0) (##vcore.call-with-values (bruijn ##.%k.1562 1 0) (close _V50_V0vanity_V0list_V0_Mcars_Pcdrs_V10_Drecur_D752_V0lambda64) (close _V50_V0vanity_V0list_V0_Mcars_Pcdrs_V10_Drecur_D752_V0lambda65)) ((bruijn ##.values.5 6 1) (bruijn ##.%k.1562 1 0) '() '())))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->vars[1]);
if(VDecodeBool(
self->vars[0])) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0_Mcars_Pcdrs_V10_Drecur_D752_V0lambda64, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0_Mcars_Pcdrs_V10_Drecur_D752_V0lambda65, self)))));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 1)), 3,
      statics->vars[0],
      VNULL,
      VNULL);
}
    }
}
void _V50_V0vanity_V0list_V0_Mcars_Pcdrs_V0lambda63(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0_Mcars_Pcdrs_V0lambda63, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (letrec 1 ((close "_V50_V0vanity_V0list_V0_Mcars_Pcdrs_V10_Drecur_D752")) (##qualified-call (vanity list %cars+cdrs ##.recur.752) #f (bruijn ##.recur.752 0 0) (bruijn ##.%k.1561 1 0) (bruijn ##.lists.750 2 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0_Mcars_Pcdrs_V10_Drecur_D752, self))));
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      statics->up->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0list_V0_Mcars_Pcdrs_V10_Drecur_D752(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
}
void _V50_V0vanity_V0list_V0_Mcars_Pcdrs(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0_Mcars_Pcdrs, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (##vcore.call/cc (bruijn ##.%k.1560 0 0) (close _V50_V0vanity_V0list_V0_Mcars_Pcdrs_V0lambda63))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0_Mcars_Pcdrs_V0lambda63, self)))));
}
void _V50_V0vanity_V0list_V0_Mcdrs_V10_Drecur_D762_V0k291(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0_Mcdrs_V10_Drecur_D762_V0k291, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%r.2318) ((##vcore.cons (bruijn ##.%x.2316 2 0) (bruijn ##.%x.1579 1 0))) ((bruijn ##.%k.1575 6 0) (bruijn ##.%r.2318 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[0],
      statics->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 1,
      self->vars[0]);
    }
}
void _V50_V0vanity_V0list_V0_Mcdrs_V10_Drecur_D762_V0k290(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0_Mcdrs_V10_Drecur_D762_V0k290, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1577 0 0) ((bruijn ##.abort.761 5 1) (bruijn ##.%k.1575 3 0) '()) (basic-block 2 2 (##.%x.2316 ##.%x.2317) ((##vcore.cdr (bruijn ##.lis.2315 2 0)) (##vcore.cdr (bruijn ##.lists.763 4 1))) (##qualified-call (vanity list %cdrs ##.recur.762) #f (bruijn ##.recur.762 5 0) (close _V50_V0vanity_V0list_V0_Mcdrs_V10_Drecur_D762_V0k291) (bruijn ##.%x.2317 0 1))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 1)), 2,
      statics->up->up->vars[0],
      VNULL);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      statics->up->vars[0]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->up->up->up->vars[1]);
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 5-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0_Mcdrs_V10_Drecur_D762_V0k291, self))));
    VWORD _arg1 = 
      self->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0list_V0_Mcdrs_V10_Drecur_D762(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
}
}
void _V50_V0vanity_V0list_V0_Mcdrs_V10_Drecur_D762(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0_Mcdrs_V10_Drecur_D762, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.%p.2314) ((##vcore.pair? (bruijn ##.lists.763 1 1))) (if (bruijn ##.%p.2314 0 0) (basic-block 1 1 (##.lis.2315) ((##vcore.car (bruijn ##.lists.763 2 1))) (##qualified-call (vanity list null-list?) #t (bruijn ##.null-list?.169 6 100) (close _V50_V0vanity_V0list_V0_Mcdrs_V10_Drecur_D762_V0k290) (bruijn ##.lis.2315 0 0))) ((bruijn ##.%k.1575 1 0) '())))
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
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->vars[1]);
  {
   VEnv * _closure_env = _V60_V0vanity_V0list;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0_Mcdrs_V10_Drecur_D762_V0k290, self))));
    VWORD _arg1 = 
      self->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0null__list_Q, _V60_V0vanity_V0list)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0list_V0null__list_Q(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VNULL);
}
    }
}
void _V50_V0vanity_V0list_V0_Mcdrs_V0lambda70(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0_Mcdrs_V0lambda70, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (letrec 1 ((close "_V50_V0vanity_V0list_V0_Mcdrs_V10_Drecur_D762")) (##qualified-call (vanity list %cdrs ##.recur.762) #f (bruijn ##.recur.762 0 0) (bruijn ##.%k.1574 1 0) (bruijn ##.lists.760 2 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0_Mcdrs_V10_Drecur_D762, self))));
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      statics->up->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0list_V0_Mcdrs_V10_Drecur_D762(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
}
void _V50_V0vanity_V0list_V0_Mcdrs(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0_Mcdrs, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (##vcore.call/cc (bruijn ##.%k.1573 0 0) (close _V50_V0vanity_V0list_V0_Mcdrs_V0lambda70))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0_Mcdrs_V0lambda70, self)))));
}
void _V50_V0vanity_V0list_V0get__optional(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0get__optional, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 1 1 (##.%p.2319) ((##vcore.null? (bruijn ##.optarg.765 1 1))) (if (bruijn ##.%p.2319 0 0) ((bruijn ##.%k.1581 1 0) (bruijn ##.default.766 1 2)) (basic-block 1 1 (##.%r.2320) ((##vcore.car (bruijn ##.optarg.765 2 1))) ((bruijn ##.%k.1581 2 0) (bruijn ##.%r.2320 0 0)))))
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
      statics->vars[2]);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      self->vars[0]);
    }
}
    }
}
static void _V0vanity_V0list_V20_V0k297(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 304 304 (##.%x.2321 ##.%x.2322 ##.%x.2323 ##.%x.2324 ##.%x.2325 ##.%x.2326 ##.%x.2327 ##.%x.2328 ##.%x.2329 ##.%x.2330 ##.%x.2331 ##.%x.2332 ##.%x.2333 ##.%x.2334 ##.%x.2335 ##.%x.2336 ##.%x.2337 ##.%x.2338 ##.%x.2339 ##.%x.2340 ##.%x.2341 ##.%x.2342 ##.%x.2343 ##.%x.2344 ##.%x.2345 ##.%x.2346 ##.%x.2347 ##.%x.2348 ##.%x.2349 ##.%x.2350 ##.%x.2351 ##.%x.2352 ##.%x.2353 ##.%x.2354 ##.%x.2355 ##.%x.2356 ##.%x.2357 ##.%x.2358 ##.%x.2359 ##.%x.2360 ##.%x.2361 ##.%x.2362 ##.%x.2363 ##.%x.2364 ##.%x.2365 ##.%x.2366 ##.%x.2367 ##.%x.2368 ##.%x.2369 ##.%x.2370 ##.%x.2371 ##.%x.2372 ##.%x.2373 ##.%x.2374 ##.%x.2375 ##.%x.2376 ##.%x.2377 ##.%x.2378 ##.%x.2379 ##.%x.2380 ##.%x.2381 ##.%x.2382 ##.%x.2383 ##.%x.2384 ##.%x.2385 ##.%x.2386 ##.%x.2387 ##.%x.2388 ##.%x.2389 ##.%x.2390 ##.%x.2391 ##.%x.2392 ##.%x.2393 ##.%x.2394 ##.%x.2395 ##.%x.2396 ##.%x.2397 ##.%x.2398 ##.%x.2399 ##.%x.2400 ##.%x.2401 ##.%x.2402 ##.%x.2403 ##.%x.2404 ##.%x.2405 ##.%x.2406 ##.%x.2407 ##.%x.2408 ##.%x.2409 ##.%x.2410 ##.%x.2411 ##.%x.2412 ##.%x.2413 ##.%x.2414 ##.%x.2415 ##.%x.2416 ##.%x.2417 ##.%x.2418 ##.%x.2419 ##.%x.2420 ##.%x.2421 ##.%x.2422 ##.%x.2423 ##.%x.2424 ##.%x.2425 ##.%x.2426 ##.%x.2427 ##.%x.2428 ##.%x.2429 ##.%x.2430 ##.%x.2431 ##.%x.2432 ##.%x.2433 ##.%x.2434 ##.%x.2435 ##.%x.2436 ##.%x.2437 ##.%x.2438 ##.%x.2439 ##.%x.2440 ##.%x.2441 ##.%x.2442 ##.%x.2443 ##.%x.2444 ##.%x.2445 ##.%x.2446 ##.%x.2447 ##.%x.2448 ##.%x.2449 ##.%x.2450 ##.%x.2451 ##.%x.2452 ##.%x.2453 ##.%x.2454 ##.%x.2455 ##.%x.2456 ##.%x.2457 ##.%x.2458 ##.%x.2459 ##.%x.2460 ##.%x.2461 ##.%x.2462 ##.%x.2463 ##.%x.2464 ##.%x.2465 ##.%x.2466 ##.%x.2467 ##.%x.2468 ##.%x.2469 ##.%x.2470 ##.%x.2471 ##.%x.2472 ##.%x.2473 ##.%x.2474 ##.%x.2475 ##.%x.2476 ##.%x.2477 ##.%x.2478 ##.%x.2479 ##.%x.2480 ##.%x.2481 ##.%x.2482 ##.%x.2483 ##.%x.2484 ##.%x.2485 ##.%x.2486 ##.%x.2487 ##.%x.2488 ##.%x.2489 ##.%x.2490 ##.%x.2491 ##.%x.2492 ##.%x.2493 ##.%x.2494 ##.%x.2495 ##.%x.2496 ##.%x.2497 ##.%x.2498 ##.%x.2499 ##.%x.2500 ##.%x.2501 ##.%x.2502 ##.%x.2503 ##.%x.2504 ##.%x.2505 ##.%x.2506 ##.%x.2507 ##.%x.2508 ##.%x.2509 ##.%x.2510 ##.%x.2511 ##.%x.2512 ##.%x.2513 ##.%x.2514 ##.%x.2515 ##.%x.2516 ##.%x.2517 ##.%x.2518 ##.%x.2519 ##.%x.2520 ##.%x.2521 ##.%x.2522 ##.%x.2523 ##.%x.2524 ##.%x.2525 ##.%x.2526 ##.%x.2527 ##.%x.2528 ##.%x.2529 ##.%x.2530 ##.%x.2531 ##.%x.2532 ##.%x.2533 ##.%x.2534 ##.%x.2535 ##.%x.2536 ##.%x.2537 ##.%x.2538 ##.%x.2539 ##.%x.2540 ##.%x.2541 ##.%x.2542 ##.%x.2543 ##.%x.2544 ##.%x.2545 ##.%x.2546 ##.%x.2547 ##.%x.2548 ##.%x.2549 ##.%x.2550 ##.%x.2551 ##.%x.2552 ##.%x.2553 ##.%x.2554 ##.%x.2555 ##.%x.2556 ##.%x.2557 ##.%x.2558 ##.%x.2559 ##.%x.2560 ##.%x.2561 ##.%x.2562 ##.%x.2563 ##.%x.2564 ##.%x.2565 ##.%x.2566 ##.%x.2567 ##.%x.2568 ##.%x.2569 ##.%x.2570 ##.%x.2571 ##.%x.2572 ##.%x.2573 ##.%x.2574 ##.%x.2575 ##.%x.2576 ##.%x.2577 ##.%x.2578 ##.%x.2579 ##.%x.2580 ##.%x.2581 ##.%x.2582 ##.%x.2583 ##.%x.2584 ##.%x.2585 ##.%x.2586 ##.%x.2587 ##.%x.2588 ##.%x.2589 ##.%x.2590 ##.%x.2591 ##.%x.2592 ##.%x.2593 ##.%x.2594 ##.%x.2595 ##.%x.2596 ##.%x.2597 ##.%x.2598 ##.%x.2599 ##.%x.2600 ##.%x.2601 ##.%x.2602 ##.%x.2603 ##.%x.2604 ##.%x.2605 ##.%x.2606 ##.%x.2607 ##.%x.2608 ##.%x.2609 ##.%x.2610 ##.%x.2611 ##.%x.2612 ##.%x.2613 ##.%x.2614 ##.%x.2615 ##.%x.2616 ##.%x.2617 ##.%x.2618 ##.%x.2619 ##.%x.2620 ##.%x.2621 ##.%x.2622 ##.%x.2623 ##.%r.2624) ((##vcore.cons 'cons (##intrinsic ##vcore.cons)) (##vcore.cons 'list (bruijn ##.list.9 2 5)) (##vcore.cons 'xcons (bruijn ##.xcons.178 1 109)) (##vcore.cons 'cons* (bruijn ##.cons*.177 1 108)) (##vcore.cons 'list-tabulate (bruijn ##.list-tabulate.168 1 99)) (##vcore.cons 'list-copy (bruijn ##.list-copy.10 2 6)) (##vcore.cons 'circular-list (bruijn ##.circular-list.176 1 107)) (##vcore.cons 'iota (bruijn ##.iota.174 1 105)) (##vcore.cons 'pair? (##intrinsic ##vcore.pair?)) (##vcore.cons 'null? (##intrinsic ##vcore.null?)) (##vcore.cons 'proper-list? (bruijn ##.proper-list?.173 1 104)) (##vcore.cons 'circular-list? (bruijn ##.circular-list?.171 1 102)) (##vcore.cons 'dotted-list? (bruijn ##.dotted-list?.172 1 103)) (##vcore.cons 'not-pair? (bruijn ##.not-pair?.170 1 101)) (##vcore.cons 'null-list? (bruijn ##.null-list?.169 1 100)) (##vcore.cons 'list= (bruijn ##.list=.167 1 98)) (##vcore.cons 'car (##intrinsic ##vcore.car)) (##vcore.cons 'cdr (##intrinsic ##vcore.cdr)) (##vcore.cons 'caar (bruijn ##.caar.49 2 45)) (##vcore.cons 'cadr (bruijn ##.cadr.11 2 7)) (##vcore.cons 'cdar (bruijn ##.cdar.48 2 44)) (##vcore.cons 'cddr (bruijn ##.cddr.12 2 8)) (##vcore.cons 'caaar (bruijn ##.caaar.47 2 43)) (##vcore.cons 'caadr (bruijn ##.caadr.13 2 9)) (##vcore.cons 'cadar (bruijn ##.cadar.46 2 42)) (##vcore.cons 'caddr (bruijn ##.caddr.14 2 10)) (##vcore.cons 'cdaar (bruijn ##.cdaar.45 2 41)) (##vcore.cons 'cdadr (bruijn ##.cdadr.15 2 11)) (##vcore.cons 'cddar (bruijn ##.cddar.44 2 40)) (##vcore.cons 'cdddr (bruijn ##.cdddr.16 2 12)) (##vcore.cons 'caaaar (bruijn ##.caaaar.43 2 39)) (##vcore.cons 'caaadr (bruijn ##.caaadr.17 2 13)) (##vcore.cons 'caadar (bruijn ##.caadar.42 2 38)) (##vcore.cons 'caaddr (bruijn ##.caaddr.18 2 14)) (##vcore.cons 'cadaar (bruijn ##.cadaar.41 2 37)) (##vcore.cons 'cadadr (bruijn ##.cadadr.19 2 15)) (##vcore.cons 'caddar (bruijn ##.caddar.40 2 36)) (##vcore.cons 'cadddr (bruijn ##.cadddr.20 2 16)) (##vcore.cons 'cdaaar (bruijn ##.cdaaar.39 2 35)) (##vcore.cons 'cdaadr (bruijn ##.cdaadr.21 2 17)) (##vcore.cons 'cdadar (bruijn ##.cdadar.38 2 34)) (##vcore.cons 'cdaddr (bruijn ##.cdaddr.22 2 18)) (##vcore.cons 'cddaar (bruijn ##.cddaar.37 2 33)) (##vcore.cons 'cddadr (bruijn ##.cddadr.23 2 19)) (##vcore.cons 'cdddar (bruijn ##.cdddar.36 2 32)) (##vcore.cons 'cddddr (bruijn ##.cddddr.24 2 20)) (##vcore.cons 'first (bruijn ##.first.166 1 97)) (##vcore.cons 'second (bruijn ##.second.165 1 96)) (##vcore.cons 'third (bruijn ##.third.164 1 95)) (##vcore.cons 'fourth (bruijn ##.fourth.163 1 94)) (##vcore.cons 'fifth (bruijn ##.fifth.162 1 93)) (##vcore.cons 'sixth (bruijn ##.sixth.161 1 92)) (##vcore.cons 'seventh (bruijn ##.seventh.160 1 91)) (##vcore.cons 'eighth (bruijn ##.eighth.159 1 90)) (##vcore.cons 'ninth (bruijn ##.ninth.158 1 89)) (##vcore.cons 'tenth (bruijn ##.tenth.157 1 88)) (##vcore.cons 'car+cdr (bruijn ##.car+cdr.156 1 87)) (##vcore.cons 'take (bruijn ##.take.155 1 86)) (##vcore.cons 'drop (bruijn ##.drop.154 1 85)) (##vcore.cons 'take-right (bruijn ##.take-right.153 1 84)) (##vcore.cons 'drop-right (bruijn ##.drop-right.152 1 83)) (##vcore.cons 'take! (bruijn ##.take!.148 1 79)) (##vcore.cons 'drop-right! (bruijn ##.drop-right!.147 1 78)) (##vcore.cons 'split-at (bruijn ##.split-at.151 1 82)) (##vcore.cons 'split-at! (bruijn ##.split-at!.150 1 81)) (##vcore.cons 'last (bruijn ##.last.146 1 77)) (##vcore.cons 'last-pair (bruijn ##.last-pair.145 1 76)) (##vcore.cons 'length (bruijn ##.length.25 2 21)) (##vcore.cons 'length+ (bruijn ##.length+.144 1 75)) (##vcore.cons 'append (bruijn ##.append.26 2 22)) (##vcore.cons 'append! (bruijn ##.append!.143 1 74)) (##vcore.cons 'concatenate (bruijn ##.concatenate.139 1 70)) (##vcore.cons 'concatenate! (bruijn ##.concatenate!.138 1 69)) (##vcore.cons 'reverse (bruijn ##.reverse.27 2 23)) (##vcore.cons 'reverse! (bruijn ##.reverse!.142 1 73)) (##vcore.cons 'append-reverse (bruijn ##.append-reverse.141 1 72)) (##vcore.cons 'append-reverse! (bruijn ##.append-reverse!.140 1 71)) (##vcore.cons 'zip (bruijn ##.zip.137 1 68)) (##vcore.cons 'unzip1 (bruijn ##.unzip1.136 1 67)) (##vcore.cons 'unzip2 (bruijn ##.unzip2.135 1 66)) (##vcore.cons 'unzip3 (bruijn ##.unzip3.134 1 65)) (##vcore.cons 'unzip4 (bruijn ##.unzip4.133 1 64)) (##vcore.cons 'unzip5 (bruijn ##.unzip5.132 1 63)) (##vcore.cons 'count (bruijn ##.count.131 1 62)) (##vcore.cons 'map (bruijn ##.map.35 2 31)) (##vcore.cons 'map! (bruijn ##.map!.130 1 61)) (##vcore.cons 'map-in-order (bruijn ##.map-in-order.129 1 60)) (##vcore.cons 'for-each (bruijn ##.for-each.28 2 24)) (##vcore.cons 'pair-for-each (bruijn ##.pair-for-each.128 1 59)) (##vcore.cons 'fold (bruijn ##.fold.127 1 58)) (##vcore.cons 'fold-right (bruijn ##.fold-right.126 1 57)) (##vcore.cons 'unfold (bruijn ##.unfold.124 1 55)) (##vcore.cons 'unfold-right (bruijn ##.unfold-right.125 1 56)) (##vcore.cons 'pair-fold (bruijn ##.pair-fold.122 1 53)) (##vcore.cons 'pair-fold-right (bruijn ##.pair-fold-right.123 1 54)) (##vcore.cons 'reduce (bruijn ##.reduce.121 1 52)) (##vcore.cons 'reduce-right (bruijn ##.reduce-right.120 1 51)) (##vcore.cons 'append-map (bruijn ##.append-map.119 1 50)) (##vcore.cons 'append-map! (bruijn ##.append-map!.118 1 49)) (##vcore.cons 'filter (bruijn ##.filter.117 1 48)) (##vcore.cons 'filter! (bruijn ##.filter!.116 1 47)) (##vcore.cons 'partition (bruijn ##.partition.115 1 46)) (##vcore.cons 'partition! (bruijn ##.partition!.114 1 45)) (##vcore.cons 'remove (bruijn ##.remove.113 1 44)) (##vcore.cons 'remove! (bruijn ##.remove!.112 1 43)) (##vcore.cons 'filter-map (bruijn ##.filter-map.111 1 42)) (##vcore.cons 'member (bruijn ##.member.34 2 30)) (##vcore.cons 'memq (bruijn ##.memq.29 2 25)) (##vcore.cons 'memv (bruijn ##.memv.33 2 29)) (##vcore.cons 'find (bruijn ##.find.110 1 41)) (##vcore.cons 'find-tail (bruijn ##.find-tail.109 1 40)) (##vcore.cons 'any? (bruijn ##.any?.98 1 29)) (##vcore.cons 'every? (bruijn ##.every?.97 1 28)) (##vcore.cons 'any (bruijn ##.any.96 1 27)) (##vcore.cons 'every (bruijn ##.every.95 1 26)) (##vcore.cons 'list-index (bruijn ##.list-index.94 1 25)) (##vcore.cons 'take-while (bruijn ##.take-while.106 1 37)) (##vcore.cons 'take-while! (bruijn ##.take-while!.103 1 34)) (##vcore.cons 'drop-while (bruijn ##.drop-while.105 1 36)) (##vcore.cons 'split-while (bruijn ##.split-while.104 1 35)) (##vcore.cons 'span (bruijn ##.span.102 1 33)) (##vcore.cons 'span! (bruijn ##.span!.101 1 32)) (##vcore.cons 'break (bruijn ##.break.100 1 31)) (##vcore.cons 'break! (bruijn ##.break!.99 1 30)) (##vcore.cons 'delete-duplicates (bruijn ##.delete-duplicates.93 1 24)) (##vcore.cons 'delete-duplicates! (bruijn ##.delete-duplicates!.92 1 23)) (##vcore.cons 'assoc (bruijn ##.assoc.32 2 28)) (##vcore.cons 'assq (bruijn ##.assq.30 2 26)) (##vcore.cons 'assv (bruijn ##.assv.31 2 27)) (##vcore.cons 'alist-cons (bruijn ##.alist-cons.91 1 22)) (##vcore.cons 'alist-copy (bruijn ##.alist-copy.90 1 21)) (##vcore.cons 'alist-delete (bruijn ##.alist-delete.89 1 20)) (##vcore.cons 'alist-delete! (bruijn ##.alist-delete!.88 1 19)) (##vcore.cons 'lset<= (bruijn ##.lset<=.86 1 17)) (##vcore.cons 'lset= (bruijn ##.lset=.85 1 16)) (##vcore.cons 'lset-adjoin (bruijn ##.lset-adjoin.84 1 15)) (##vcore.cons 'lset-union (bruijn ##.lset-union.83 1 14)) (##vcore.cons 'lset-union! (bruijn ##.lset-union!.82 1 13)) (##vcore.cons 'lset-intersection (bruijn ##.lset-intersection.81 1 12)) (##vcore.cons 'lset-intersection! (bruijn ##.lset-intersection!.80 1 11)) (##vcore.cons 'lset-difference (bruijn ##.lset-difference.79 1 10)) (##vcore.cons 'lset-difference! (bruijn ##.lset-difference!.78 1 9)) (##vcore.cons 'lset-xor (bruijn ##.lset-xor.77 1 8)) (##vcore.cons 'lset-xor! (bruijn ##.lset-xor!.76 1 7)) (##vcore.cons 'lset-diff+intersection (bruijn ##.lset-diff+intersection.75 1 6)) (##vcore.cons 'lset-diff+intersection! (bruijn ##.lset-diff+intersection!.74 1 5)) (##vcore.cons 'insert (bruijn ##.insert.73 1 4)) (##vcore.cons 'delete (bruijn ##.delete.108 1 39)) (##vcore.cons 'erase (bruijn ##.erase.72 1 3)) (##vcore.cons 'assq-update (bruijn ##.assq-update.71 1 2)) (##vcore.cons 'assv-update (bruijn ##.assv-update.70 1 1)) (##vcore.cons 'assoc-update (bruijn ##.assoc-update.69 1 0)) (##vcore.cons (bruijn ##.%x.2472 0 151) '()) (##vcore.cons (bruijn ##.%x.2471 0 150) (bruijn ##.%x.2473 0 152)) (##vcore.cons (bruijn ##.%x.2470 0 149) (bruijn ##.%x.2474 0 153)) (##vcore.cons (bruijn ##.%x.2469 0 148) (bruijn ##.%x.2475 0 154)) (##vcore.cons (bruijn ##.%x.2468 0 147) (bruijn ##.%x.2476 0 155)) (##vcore.cons (bruijn ##.%x.2467 0 146) (bruijn ##.%x.2477 0 156)) (##vcore.cons (bruijn ##.%x.2466 0 145) (bruijn ##.%x.2478 0 157)) (##vcore.cons (bruijn ##.%x.2465 0 144) (bruijn ##.%x.2479 0 158)) (##vcore.cons (bruijn ##.%x.2464 0 143) (bruijn ##.%x.2480 0 159)) (##vcore.cons (bruijn ##.%x.2463 0 142) (bruijn ##.%x.2481 0 160)) (##vcore.cons (bruijn ##.%x.2462 0 141) (bruijn ##.%x.2482 0 161)) (##vcore.cons (bruijn ##.%x.2461 0 140) (bruijn ##.%x.2483 0 162)) (##vcore.cons (bruijn ##.%x.2460 0 139) (bruijn ##.%x.2484 0 163)) (##vcore.cons (bruijn ##.%x.2459 0 138) (bruijn ##.%x.2485 0 164)) (##vcore.cons (bruijn ##.%x.2458 0 137) (bruijn ##.%x.2486 0 165)) (##vcore.cons (bruijn ##.%x.2457 0 136) (bruijn ##.%x.2487 0 166)) (##vcore.cons (bruijn ##.%x.2456 0 135) (bruijn ##.%x.2488 0 167)) (##vcore.cons (bruijn ##.%x.2455 0 134) (bruijn ##.%x.2489 0 168)) (##vcore.cons (bruijn ##.%x.2454 0 133) (bruijn ##.%x.2490 0 169)) (##vcore.cons (bruijn ##.%x.2453 0 132) (bruijn ##.%x.2491 0 170)) (##vcore.cons (bruijn ##.%x.2452 0 131) (bruijn ##.%x.2492 0 171)) (##vcore.cons (bruijn ##.%x.2451 0 130) (bruijn ##.%x.2493 0 172)) (##vcore.cons (bruijn ##.%x.2450 0 129) (bruijn ##.%x.2494 0 173)) (##vcore.cons (bruijn ##.%x.2449 0 128) (bruijn ##.%x.2495 0 174)) (##vcore.cons (bruijn ##.%x.2448 0 127) (bruijn ##.%x.2496 0 175)) (##vcore.cons (bruijn ##.%x.2447 0 126) (bruijn ##.%x.2497 0 176)) (##vcore.cons (bruijn ##.%x.2446 0 125) (bruijn ##.%x.2498 0 177)) (##vcore.cons (bruijn ##.%x.2445 0 124) (bruijn ##.%x.2499 0 178)) (##vcore.cons (bruijn ##.%x.2444 0 123) (bruijn ##.%x.2500 0 179)) (##vcore.cons (bruijn ##.%x.2443 0 122) (bruijn ##.%x.2501 0 180)) (##vcore.cons (bruijn ##.%x.2442 0 121) (bruijn ##.%x.2502 0 181)) (##vcore.cons (bruijn ##.%x.2441 0 120) (bruijn ##.%x.2503 0 182)) (##vcore.cons (bruijn ##.%x.2440 0 119) (bruijn ##.%x.2504 0 183)) (##vcore.cons (bruijn ##.%x.2439 0 118) (bruijn ##.%x.2505 0 184)) (##vcore.cons (bruijn ##.%x.2438 0 117) (bruijn ##.%x.2506 0 185)) (##vcore.cons (bruijn ##.%x.2437 0 116) (bruijn ##.%x.2507 0 186)) (##vcore.cons (bruijn ##.%x.2436 0 115) (bruijn ##.%x.2508 0 187)) (##vcore.cons (bruijn ##.%x.2435 0 114) (bruijn ##.%x.2509 0 188)) (##vcore.cons (bruijn ##.%x.2434 0 113) (bruijn ##.%x.2510 0 189)) (##vcore.cons (bruijn ##.%x.2433 0 112) (bruijn ##.%x.2511 0 190)) (##vcore.cons (bruijn ##.%x.2432 0 111) (bruijn ##.%x.2512 0 191)) (##vcore.cons (bruijn ##.%x.2431 0 110) (bruijn ##.%x.2513 0 192)) (##vcore.cons (bruijn ##.%x.2430 0 109) (bruijn ##.%x.2514 0 193)) (##vcore.cons (bruijn ##.%x.2429 0 108) (bruijn ##.%x.2515 0 194)) (##vcore.cons (bruijn ##.%x.2428 0 107) (bruijn ##.%x.2516 0 195)) (##vcore.cons (bruijn ##.%x.2427 0 106) (bruijn ##.%x.2517 0 196)) (##vcore.cons (bruijn ##.%x.2426 0 105) (bruijn ##.%x.2518 0 197)) (##vcore.cons (bruijn ##.%x.2425 0 104) (bruijn ##.%x.2519 0 198)) (##vcore.cons (bruijn ##.%x.2424 0 103) (bruijn ##.%x.2520 0 199)) (##vcore.cons (bruijn ##.%x.2423 0 102) (bruijn ##.%x.2521 0 200)) (##vcore.cons (bruijn ##.%x.2422 0 101) (bruijn ##.%x.2522 0 201)) (##vcore.cons (bruijn ##.%x.2421 0 100) (bruijn ##.%x.2523 0 202)) (##vcore.cons (bruijn ##.%x.2420 0 99) (bruijn ##.%x.2524 0 203)) (##vcore.cons (bruijn ##.%x.2419 0 98) (bruijn ##.%x.2525 0 204)) (##vcore.cons (bruijn ##.%x.2418 0 97) (bruijn ##.%x.2526 0 205)) (##vcore.cons (bruijn ##.%x.2417 0 96) (bruijn ##.%x.2527 0 206)) (##vcore.cons (bruijn ##.%x.2416 0 95) (bruijn ##.%x.2528 0 207)) (##vcore.cons (bruijn ##.%x.2415 0 94) (bruijn ##.%x.2529 0 208)) (##vcore.cons (bruijn ##.%x.2414 0 93) (bruijn ##.%x.2530 0 209)) (##vcore.cons (bruijn ##.%x.2413 0 92) (bruijn ##.%x.2531 0 210)) (##vcore.cons (bruijn ##.%x.2412 0 91) (bruijn ##.%x.2532 0 211)) (##vcore.cons (bruijn ##.%x.2411 0 90) (bruijn ##.%x.2533 0 212)) (##vcore.cons (bruijn ##.%x.2410 0 89) (bruijn ##.%x.2534 0 213)) (##vcore.cons (bruijn ##.%x.2409 0 88) (bruijn ##.%x.2535 0 214)) (##vcore.cons (bruijn ##.%x.2408 0 87) (bruijn ##.%x.2536 0 215)) (##vcore.cons (bruijn ##.%x.2407 0 86) (bruijn ##.%x.2537 0 216)) (##vcore.cons (bruijn ##.%x.2406 0 85) (bruijn ##.%x.2538 0 217)) (##vcore.cons (bruijn ##.%x.2405 0 84) (bruijn ##.%x.2539 0 218)) (##vcore.cons (bruijn ##.%x.2404 0 83) (bruijn ##.%x.2540 0 219)) (##vcore.cons (bruijn ##.%x.2403 0 82) (bruijn ##.%x.2541 0 220)) (##vcore.cons (bruijn ##.%x.2402 0 81) (bruijn ##.%x.2542 0 221)) (##vcore.cons (bruijn ##.%x.2401 0 80) (bruijn ##.%x.2543 0 222)) (##vcore.cons (bruijn ##.%x.2400 0 79) (bruijn ##.%x.2544 0 223)) (##vcore.cons (bruijn ##.%x.2399 0 78) (bruijn ##.%x.2545 0 224)) (##vcore.cons (bruijn ##.%x.2398 0 77) (bruijn ##.%x.2546 0 225)) (##vcore.cons (bruijn ##.%x.2397 0 76) (bruijn ##.%x.2547 0 226)) (##vcore.cons (bruijn ##.%x.2396 0 75) (bruijn ##.%x.2548 0 227)) (##vcore.cons (bruijn ##.%x.2395 0 74) (bruijn ##.%x.2549 0 228)) (##vcore.cons (bruijn ##.%x.2394 0 73) (bruijn ##.%x.2550 0 229)) (##vcore.cons (bruijn ##.%x.2393 0 72) (bruijn ##.%x.2551 0 230)) (##vcore.cons (bruijn ##.%x.2392 0 71) (bruijn ##.%x.2552 0 231)) (##vcore.cons (bruijn ##.%x.2391 0 70) (bruijn ##.%x.2553 0 232)) (##vcore.cons (bruijn ##.%x.2390 0 69) (bruijn ##.%x.2554 0 233)) (##vcore.cons (bruijn ##.%x.2389 0 68) (bruijn ##.%x.2555 0 234)) (##vcore.cons (bruijn ##.%x.2388 0 67) (bruijn ##.%x.2556 0 235)) (##vcore.cons (bruijn ##.%x.2387 0 66) (bruijn ##.%x.2557 0 236)) (##vcore.cons (bruijn ##.%x.2386 0 65) (bruijn ##.%x.2558 0 237)) (##vcore.cons (bruijn ##.%x.2385 0 64) (bruijn ##.%x.2559 0 238)) (##vcore.cons (bruijn ##.%x.2384 0 63) (bruijn ##.%x.2560 0 239)) (##vcore.cons (bruijn ##.%x.2383 0 62) (bruijn ##.%x.2561 0 240)) (##vcore.cons (bruijn ##.%x.2382 0 61) (bruijn ##.%x.2562 0 241)) (##vcore.cons (bruijn ##.%x.2381 0 60) (bruijn ##.%x.2563 0 242)) (##vcore.cons (bruijn ##.%x.2380 0 59) (bruijn ##.%x.2564 0 243)) (##vcore.cons (bruijn ##.%x.2379 0 58) (bruijn ##.%x.2565 0 244)) (##vcore.cons (bruijn ##.%x.2378 0 57) (bruijn ##.%x.2566 0 245)) (##vcore.cons (bruijn ##.%x.2377 0 56) (bruijn ##.%x.2567 0 246)) (##vcore.cons (bruijn ##.%x.2376 0 55) (bruijn ##.%x.2568 0 247)) (##vcore.cons (bruijn ##.%x.2375 0 54) (bruijn ##.%x.2569 0 248)) (##vcore.cons (bruijn ##.%x.2374 0 53) (bruijn ##.%x.2570 0 249)) (##vcore.cons (bruijn ##.%x.2373 0 52) (bruijn ##.%x.2571 0 250)) (##vcore.cons (bruijn ##.%x.2372 0 51) (bruijn ##.%x.2572 0 251)) (##vcore.cons (bruijn ##.%x.2371 0 50) (bruijn ##.%x.2573 0 252)) (##vcore.cons (bruijn ##.%x.2370 0 49) (bruijn ##.%x.2574 0 253)) (##vcore.cons (bruijn ##.%x.2369 0 48) (bruijn ##.%x.2575 0 254)) (##vcore.cons (bruijn ##.%x.2368 0 47) (bruijn ##.%x.2576 0 255)) (##vcore.cons (bruijn ##.%x.2367 0 46) (bruijn ##.%x.2577 0 256)) (##vcore.cons (bruijn ##.%x.2366 0 45) (bruijn ##.%x.2578 0 257)) (##vcore.cons (bruijn ##.%x.2365 0 44) (bruijn ##.%x.2579 0 258)) (##vcore.cons (bruijn ##.%x.2364 0 43) (bruijn ##.%x.2580 0 259)) (##vcore.cons (bruijn ##.%x.2363 0 42) (bruijn ##.%x.2581 0 260)) (##vcore.cons (bruijn ##.%x.2362 0 41) (bruijn ##.%x.2582 0 261)) (##vcore.cons (bruijn ##.%x.2361 0 40) (bruijn ##.%x.2583 0 262)) (##vcore.cons (bruijn ##.%x.2360 0 39) (bruijn ##.%x.2584 0 263)) (##vcore.cons (bruijn ##.%x.2359 0 38) (bruijn ##.%x.2585 0 264)) (##vcore.cons (bruijn ##.%x.2358 0 37) (bruijn ##.%x.2586 0 265)) (##vcore.cons (bruijn ##.%x.2357 0 36) (bruijn ##.%x.2587 0 266)) (##vcore.cons (bruijn ##.%x.2356 0 35) (bruijn ##.%x.2588 0 267)) (##vcore.cons (bruijn ##.%x.2355 0 34) (bruijn ##.%x.2589 0 268)) (##vcore.cons (bruijn ##.%x.2354 0 33) (bruijn ##.%x.2590 0 269)) (##vcore.cons (bruijn ##.%x.2353 0 32) (bruijn ##.%x.2591 0 270)) (##vcore.cons (bruijn ##.%x.2352 0 31) (bruijn ##.%x.2592 0 271)) (##vcore.cons (bruijn ##.%x.2351 0 30) (bruijn ##.%x.2593 0 272)) (##vcore.cons (bruijn ##.%x.2350 0 29) (bruijn ##.%x.2594 0 273)) (##vcore.cons (bruijn ##.%x.2349 0 28) (bruijn ##.%x.2595 0 274)) (##vcore.cons (bruijn ##.%x.2348 0 27) (bruijn ##.%x.2596 0 275)) (##vcore.cons (bruijn ##.%x.2347 0 26) (bruijn ##.%x.2597 0 276)) (##vcore.cons (bruijn ##.%x.2346 0 25) (bruijn ##.%x.2598 0 277)) (##vcore.cons (bruijn ##.%x.2345 0 24) (bruijn ##.%x.2599 0 278)) (##vcore.cons (bruijn ##.%x.2344 0 23) (bruijn ##.%x.2600 0 279)) (##vcore.cons (bruijn ##.%x.2343 0 22) (bruijn ##.%x.2601 0 280)) (##vcore.cons (bruijn ##.%x.2342 0 21) (bruijn ##.%x.2602 0 281)) (##vcore.cons (bruijn ##.%x.2341 0 20) (bruijn ##.%x.2603 0 282)) (##vcore.cons (bruijn ##.%x.2340 0 19) (bruijn ##.%x.2604 0 283)) (##vcore.cons (bruijn ##.%x.2339 0 18) (bruijn ##.%x.2605 0 284)) (##vcore.cons (bruijn ##.%x.2338 0 17) (bruijn ##.%x.2606 0 285)) (##vcore.cons (bruijn ##.%x.2337 0 16) (bruijn ##.%x.2607 0 286)) (##vcore.cons (bruijn ##.%x.2336 0 15) (bruijn ##.%x.2608 0 287)) (##vcore.cons (bruijn ##.%x.2335 0 14) (bruijn ##.%x.2609 0 288)) (##vcore.cons (bruijn ##.%x.2334 0 13) (bruijn ##.%x.2610 0 289)) (##vcore.cons (bruijn ##.%x.2333 0 12) (bruijn ##.%x.2611 0 290)) (##vcore.cons (bruijn ##.%x.2332 0 11) (bruijn ##.%x.2612 0 291)) (##vcore.cons (bruijn ##.%x.2331 0 10) (bruijn ##.%x.2613 0 292)) (##vcore.cons (bruijn ##.%x.2330 0 9) (bruijn ##.%x.2614 0 293)) (##vcore.cons (bruijn ##.%x.2329 0 8) (bruijn ##.%x.2615 0 294)) (##vcore.cons (bruijn ##.%x.2328 0 7) (bruijn ##.%x.2616 0 295)) (##vcore.cons (bruijn ##.%x.2327 0 6) (bruijn ##.%x.2617 0 296)) (##vcore.cons (bruijn ##.%x.2326 0 5) (bruijn ##.%x.2618 0 297)) (##vcore.cons (bruijn ##.%x.2325 0 4) (bruijn ##.%x.2619 0 298)) (##vcore.cons (bruijn ##.%x.2324 0 3) (bruijn ##.%x.2620 0 299)) (##vcore.cons (bruijn ##.%x.2323 0 2) (bruijn ##.%x.2621 0 300)) (##vcore.cons (bruijn ##.%x.2322 0 1) (bruijn ##.%x.2622 0 301)) (##vcore.cons (bruijn ##.%x.2321 0 0) (bruijn ##.%x.2623 0 302))) ((bruijn ##.%k.768 5 0) (bruijn ##.%r.2624 0 303)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[304]; } container;
    self = &container.self;
    VInitEnv(self, 304, 304, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      _V0cons,
      _V40_V10vcore_Dcons);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      _V0list,
      statics->up->vars[5]);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      _V0xcons,
      statics->vars[109]);
    self->vars[3] = _VBasic_VCons2(runtime, NULL,
      _V0cons_S,
      statics->vars[108]);
    self->vars[4] = _VBasic_VCons2(runtime, NULL,
      _V0list__tabulate,
      statics->vars[99]);
    self->vars[5] = _VBasic_VCons2(runtime, NULL,
      _V0list__copy,
      statics->up->vars[6]);
    self->vars[6] = _VBasic_VCons2(runtime, NULL,
      _V0circular__list,
      statics->vars[107]);
    self->vars[7] = _VBasic_VCons2(runtime, NULL,
      _V0iota,
      statics->vars[105]);
    self->vars[8] = _VBasic_VCons2(runtime, NULL,
      _V0pair_Q,
      _V40_V10vcore_Dpair_Q);
    self->vars[9] = _VBasic_VCons2(runtime, NULL,
      _V0null_Q,
      _V40_V10vcore_Dnull_Q);
    self->vars[10] = _VBasic_VCons2(runtime, NULL,
      _V0proper__list_Q,
      statics->vars[104]);
    self->vars[11] = _VBasic_VCons2(runtime, NULL,
      _V0circular__list_Q,
      statics->vars[102]);
    self->vars[12] = _VBasic_VCons2(runtime, NULL,
      _V0dotted__list_Q,
      statics->vars[103]);
    self->vars[13] = _VBasic_VCons2(runtime, NULL,
      _V0not__pair_Q,
      statics->vars[101]);
    self->vars[14] = _VBasic_VCons2(runtime, NULL,
      _V0null__list_Q,
      statics->vars[100]);
    self->vars[15] = _VBasic_VCons2(runtime, NULL,
      _V0list_E,
      statics->vars[98]);
    self->vars[16] = _VBasic_VCons2(runtime, NULL,
      _V0car,
      _V40_V10vcore_Dcar);
    self->vars[17] = _VBasic_VCons2(runtime, NULL,
      _V0cdr,
      _V40_V10vcore_Dcdr);
    self->vars[18] = _VBasic_VCons2(runtime, NULL,
      _V0caar,
      statics->up->vars[45]);
    self->vars[19] = _VBasic_VCons2(runtime, NULL,
      _V0cadr,
      statics->up->vars[7]);
    self->vars[20] = _VBasic_VCons2(runtime, NULL,
      _V0cdar,
      statics->up->vars[44]);
    self->vars[21] = _VBasic_VCons2(runtime, NULL,
      _V0cddr,
      statics->up->vars[8]);
    self->vars[22] = _VBasic_VCons2(runtime, NULL,
      _V0caaar,
      statics->up->vars[43]);
    self->vars[23] = _VBasic_VCons2(runtime, NULL,
      _V0caadr,
      statics->up->vars[9]);
    self->vars[24] = _VBasic_VCons2(runtime, NULL,
      _V0cadar,
      statics->up->vars[42]);
    self->vars[25] = _VBasic_VCons2(runtime, NULL,
      _V0caddr,
      statics->up->vars[10]);
    self->vars[26] = _VBasic_VCons2(runtime, NULL,
      _V0cdaar,
      statics->up->vars[41]);
    self->vars[27] = _VBasic_VCons2(runtime, NULL,
      _V0cdadr,
      statics->up->vars[11]);
    self->vars[28] = _VBasic_VCons2(runtime, NULL,
      _V0cddar,
      statics->up->vars[40]);
    self->vars[29] = _VBasic_VCons2(runtime, NULL,
      _V0cdddr,
      statics->up->vars[12]);
    self->vars[30] = _VBasic_VCons2(runtime, NULL,
      _V0caaaar,
      statics->up->vars[39]);
    self->vars[31] = _VBasic_VCons2(runtime, NULL,
      _V0caaadr,
      statics->up->vars[13]);
    self->vars[32] = _VBasic_VCons2(runtime, NULL,
      _V0caadar,
      statics->up->vars[38]);
    self->vars[33] = _VBasic_VCons2(runtime, NULL,
      _V0caaddr,
      statics->up->vars[14]);
    self->vars[34] = _VBasic_VCons2(runtime, NULL,
      _V0cadaar,
      statics->up->vars[37]);
    self->vars[35] = _VBasic_VCons2(runtime, NULL,
      _V0cadadr,
      statics->up->vars[15]);
    self->vars[36] = _VBasic_VCons2(runtime, NULL,
      _V0caddar,
      statics->up->vars[36]);
    self->vars[37] = _VBasic_VCons2(runtime, NULL,
      _V0cadddr,
      statics->up->vars[16]);
    self->vars[38] = _VBasic_VCons2(runtime, NULL,
      _V0cdaaar,
      statics->up->vars[35]);
    self->vars[39] = _VBasic_VCons2(runtime, NULL,
      _V0cdaadr,
      statics->up->vars[17]);
    self->vars[40] = _VBasic_VCons2(runtime, NULL,
      _V0cdadar,
      statics->up->vars[34]);
    self->vars[41] = _VBasic_VCons2(runtime, NULL,
      _V0cdaddr,
      statics->up->vars[18]);
    self->vars[42] = _VBasic_VCons2(runtime, NULL,
      _V0cddaar,
      statics->up->vars[33]);
    self->vars[43] = _VBasic_VCons2(runtime, NULL,
      _V0cddadr,
      statics->up->vars[19]);
    self->vars[44] = _VBasic_VCons2(runtime, NULL,
      _V0cdddar,
      statics->up->vars[32]);
    self->vars[45] = _VBasic_VCons2(runtime, NULL,
      _V0cddddr,
      statics->up->vars[20]);
    self->vars[46] = _VBasic_VCons2(runtime, NULL,
      _V0first,
      statics->vars[97]);
    self->vars[47] = _VBasic_VCons2(runtime, NULL,
      _V0second,
      statics->vars[96]);
    self->vars[48] = _VBasic_VCons2(runtime, NULL,
      _V0third,
      statics->vars[95]);
    self->vars[49] = _VBasic_VCons2(runtime, NULL,
      _V0fourth,
      statics->vars[94]);
    self->vars[50] = _VBasic_VCons2(runtime, NULL,
      _V0fifth,
      statics->vars[93]);
    self->vars[51] = _VBasic_VCons2(runtime, NULL,
      _V0sixth,
      statics->vars[92]);
    self->vars[52] = _VBasic_VCons2(runtime, NULL,
      _V0seventh,
      statics->vars[91]);
    self->vars[53] = _VBasic_VCons2(runtime, NULL,
      _V0eighth,
      statics->vars[90]);
    self->vars[54] = _VBasic_VCons2(runtime, NULL,
      _V0ninth,
      statics->vars[89]);
    self->vars[55] = _VBasic_VCons2(runtime, NULL,
      _V0tenth,
      statics->vars[88]);
    self->vars[56] = _VBasic_VCons2(runtime, NULL,
      _V0car_Pcdr,
      statics->vars[87]);
    self->vars[57] = _VBasic_VCons2(runtime, NULL,
      _V0take,
      statics->vars[86]);
    self->vars[58] = _VBasic_VCons2(runtime, NULL,
      _V0drop,
      statics->vars[85]);
    self->vars[59] = _VBasic_VCons2(runtime, NULL,
      _V0take__right,
      statics->vars[84]);
    self->vars[60] = _VBasic_VCons2(runtime, NULL,
      _V0drop__right,
      statics->vars[83]);
    self->vars[61] = _VBasic_VCons2(runtime, NULL,
      _V0take_B,
      statics->vars[79]);
    self->vars[62] = _VBasic_VCons2(runtime, NULL,
      _V0drop__right_B,
      statics->vars[78]);
    self->vars[63] = _VBasic_VCons2(runtime, NULL,
      _V0split__at,
      statics->vars[82]);
    self->vars[64] = _VBasic_VCons2(runtime, NULL,
      _V0split__at_B,
      statics->vars[81]);
    self->vars[65] = _VBasic_VCons2(runtime, NULL,
      _V0last,
      statics->vars[77]);
    self->vars[66] = _VBasic_VCons2(runtime, NULL,
      _V0last__pair,
      statics->vars[76]);
    self->vars[67] = _VBasic_VCons2(runtime, NULL,
      _V0length,
      statics->up->vars[21]);
    self->vars[68] = _VBasic_VCons2(runtime, NULL,
      _V0length_P,
      statics->vars[75]);
    self->vars[69] = _VBasic_VCons2(runtime, NULL,
      _V0append,
      statics->up->vars[22]);
    self->vars[70] = _VBasic_VCons2(runtime, NULL,
      _V0append_B,
      statics->vars[74]);
    self->vars[71] = _VBasic_VCons2(runtime, NULL,
      _V0concatenate,
      statics->vars[70]);
    self->vars[72] = _VBasic_VCons2(runtime, NULL,
      _V0concatenate_B,
      statics->vars[69]);
    self->vars[73] = _VBasic_VCons2(runtime, NULL,
      _V0reverse,
      statics->up->vars[23]);
    self->vars[74] = _VBasic_VCons2(runtime, NULL,
      _V0reverse_B,
      statics->vars[73]);
    self->vars[75] = _VBasic_VCons2(runtime, NULL,
      _V0append__reverse,
      statics->vars[72]);
    self->vars[76] = _VBasic_VCons2(runtime, NULL,
      _V0append__reverse_B,
      statics->vars[71]);
    self->vars[77] = _VBasic_VCons2(runtime, NULL,
      _V0zip,
      statics->vars[68]);
    self->vars[78] = _VBasic_VCons2(runtime, NULL,
      _V0unzip1,
      statics->vars[67]);
    self->vars[79] = _VBasic_VCons2(runtime, NULL,
      _V0unzip2,
      statics->vars[66]);
    self->vars[80] = _VBasic_VCons2(runtime, NULL,
      _V0unzip3,
      statics->vars[65]);
    self->vars[81] = _VBasic_VCons2(runtime, NULL,
      _V0unzip4,
      statics->vars[64]);
    self->vars[82] = _VBasic_VCons2(runtime, NULL,
      _V0unzip5,
      statics->vars[63]);
    self->vars[83] = _VBasic_VCons2(runtime, NULL,
      _V0count,
      statics->vars[62]);
    self->vars[84] = _VBasic_VCons2(runtime, NULL,
      _V0map,
      statics->up->vars[31]);
    self->vars[85] = _VBasic_VCons2(runtime, NULL,
      _V0map_B,
      statics->vars[61]);
    self->vars[86] = _VBasic_VCons2(runtime, NULL,
      _V0map__in__order,
      statics->vars[60]);
    self->vars[87] = _VBasic_VCons2(runtime, NULL,
      _V0for__each,
      statics->up->vars[24]);
    self->vars[88] = _VBasic_VCons2(runtime, NULL,
      _V0pair__for__each,
      statics->vars[59]);
    self->vars[89] = _VBasic_VCons2(runtime, NULL,
      _V0fold,
      statics->vars[58]);
    self->vars[90] = _VBasic_VCons2(runtime, NULL,
      _V0fold__right,
      statics->vars[57]);
    self->vars[91] = _VBasic_VCons2(runtime, NULL,
      _V0unfold,
      statics->vars[55]);
    self->vars[92] = _VBasic_VCons2(runtime, NULL,
      _V0unfold__right,
      statics->vars[56]);
    self->vars[93] = _VBasic_VCons2(runtime, NULL,
      _V0pair__fold,
      statics->vars[53]);
    self->vars[94] = _VBasic_VCons2(runtime, NULL,
      _V0pair__fold__right,
      statics->vars[54]);
    self->vars[95] = _VBasic_VCons2(runtime, NULL,
      _V0reduce,
      statics->vars[52]);
    self->vars[96] = _VBasic_VCons2(runtime, NULL,
      _V0reduce__right,
      statics->vars[51]);
    self->vars[97] = _VBasic_VCons2(runtime, NULL,
      _V0append__map,
      statics->vars[50]);
    self->vars[98] = _VBasic_VCons2(runtime, NULL,
      _V0append__map_B,
      statics->vars[49]);
    self->vars[99] = _VBasic_VCons2(runtime, NULL,
      _V0filter,
      statics->vars[48]);
    self->vars[100] = _VBasic_VCons2(runtime, NULL,
      _V0filter_B,
      statics->vars[47]);
    self->vars[101] = _VBasic_VCons2(runtime, NULL,
      _V0partition,
      statics->vars[46]);
    self->vars[102] = _VBasic_VCons2(runtime, NULL,
      _V0partition_B,
      statics->vars[45]);
    self->vars[103] = _VBasic_VCons2(runtime, NULL,
      _V0remove,
      statics->vars[44]);
    self->vars[104] = _VBasic_VCons2(runtime, NULL,
      _V0remove_B,
      statics->vars[43]);
    self->vars[105] = _VBasic_VCons2(runtime, NULL,
      _V0filter__map,
      statics->vars[42]);
    self->vars[106] = _VBasic_VCons2(runtime, NULL,
      _V0member,
      statics->up->vars[30]);
    self->vars[107] = _VBasic_VCons2(runtime, NULL,
      _V0memq,
      statics->up->vars[25]);
    self->vars[108] = _VBasic_VCons2(runtime, NULL,
      _V0memv,
      statics->up->vars[29]);
    self->vars[109] = _VBasic_VCons2(runtime, NULL,
      _V0find,
      statics->vars[41]);
    self->vars[110] = _VBasic_VCons2(runtime, NULL,
      _V0find__tail,
      statics->vars[40]);
    self->vars[111] = _VBasic_VCons2(runtime, NULL,
      _V0any_Q,
      statics->vars[29]);
    self->vars[112] = _VBasic_VCons2(runtime, NULL,
      _V0every_Q,
      statics->vars[28]);
    self->vars[113] = _VBasic_VCons2(runtime, NULL,
      _V0any,
      statics->vars[27]);
    self->vars[114] = _VBasic_VCons2(runtime, NULL,
      _V0every,
      statics->vars[26]);
    self->vars[115] = _VBasic_VCons2(runtime, NULL,
      _V0list__index,
      statics->vars[25]);
    self->vars[116] = _VBasic_VCons2(runtime, NULL,
      _V0take__while,
      statics->vars[37]);
    self->vars[117] = _VBasic_VCons2(runtime, NULL,
      _V0take__while_B,
      statics->vars[34]);
    self->vars[118] = _VBasic_VCons2(runtime, NULL,
      _V0drop__while,
      statics->vars[36]);
    self->vars[119] = _VBasic_VCons2(runtime, NULL,
      _V0split__while,
      statics->vars[35]);
    self->vars[120] = _VBasic_VCons2(runtime, NULL,
      _V0span,
      statics->vars[33]);
    self->vars[121] = _VBasic_VCons2(runtime, NULL,
      _V0span_B,
      statics->vars[32]);
    self->vars[122] = _VBasic_VCons2(runtime, NULL,
      _V0break,
      statics->vars[31]);
    self->vars[123] = _VBasic_VCons2(runtime, NULL,
      _V0break_B,
      statics->vars[30]);
    self->vars[124] = _VBasic_VCons2(runtime, NULL,
      _V0delete__duplicates,
      statics->vars[24]);
    self->vars[125] = _VBasic_VCons2(runtime, NULL,
      _V0delete__duplicates_B,
      statics->vars[23]);
    self->vars[126] = _VBasic_VCons2(runtime, NULL,
      _V0assoc,
      statics->up->vars[28]);
    self->vars[127] = _VBasic_VCons2(runtime, NULL,
      _V0assq,
      statics->up->vars[26]);
    self->vars[128] = _VBasic_VCons2(runtime, NULL,
      _V0assv,
      statics->up->vars[27]);
    self->vars[129] = _VBasic_VCons2(runtime, NULL,
      _V0alist__cons,
      statics->vars[22]);
    self->vars[130] = _VBasic_VCons2(runtime, NULL,
      _V0alist__copy,
      statics->vars[21]);
    self->vars[131] = _VBasic_VCons2(runtime, NULL,
      _V0alist__delete,
      statics->vars[20]);
    self->vars[132] = _VBasic_VCons2(runtime, NULL,
      _V0alist__delete_B,
      statics->vars[19]);
    self->vars[133] = _VBasic_VCons2(runtime, NULL,
      _V0lset_L_E,
      statics->vars[17]);
    self->vars[134] = _VBasic_VCons2(runtime, NULL,
      _V0lset_E,
      statics->vars[16]);
    self->vars[135] = _VBasic_VCons2(runtime, NULL,
      _V0lset__adjoin,
      statics->vars[15]);
    self->vars[136] = _VBasic_VCons2(runtime, NULL,
      _V0lset__union,
      statics->vars[14]);
    self->vars[137] = _VBasic_VCons2(runtime, NULL,
      _V0lset__union_B,
      statics->vars[13]);
    self->vars[138] = _VBasic_VCons2(runtime, NULL,
      _V0lset__intersection,
      statics->vars[12]);
    self->vars[139] = _VBasic_VCons2(runtime, NULL,
      _V0lset__intersection_B,
      statics->vars[11]);
    self->vars[140] = _VBasic_VCons2(runtime, NULL,
      _V0lset__difference,
      statics->vars[10]);
    self->vars[141] = _VBasic_VCons2(runtime, NULL,
      _V0lset__difference_B,
      statics->vars[9]);
    self->vars[142] = _VBasic_VCons2(runtime, NULL,
      _V0lset__xor,
      statics->vars[8]);
    self->vars[143] = _VBasic_VCons2(runtime, NULL,
      _V0lset__xor_B,
      statics->vars[7]);
    self->vars[144] = _VBasic_VCons2(runtime, NULL,
      _V0lset__diff_Pintersection,
      statics->vars[6]);
    self->vars[145] = _VBasic_VCons2(runtime, NULL,
      _V0lset__diff_Pintersection_B,
      statics->vars[5]);
    self->vars[146] = _VBasic_VCons2(runtime, NULL,
      _V0insert,
      statics->vars[4]);
    self->vars[147] = _VBasic_VCons2(runtime, NULL,
      _V0delete,
      statics->vars[39]);
    self->vars[148] = _VBasic_VCons2(runtime, NULL,
      _V0erase,
      statics->vars[3]);
    self->vars[149] = _VBasic_VCons2(runtime, NULL,
      _V0assq__update,
      statics->vars[2]);
    self->vars[150] = _VBasic_VCons2(runtime, NULL,
      _V0assv__update,
      statics->vars[1]);
    self->vars[151] = _VBasic_VCons2(runtime, NULL,
      _V0assoc__update,
      statics->vars[0]);
    self->vars[152] = _VBasic_VCons2(runtime, NULL,
      self->vars[151],
      VNULL);
    self->vars[153] = _VBasic_VCons2(runtime, NULL,
      self->vars[150],
      self->vars[152]);
    self->vars[154] = _VBasic_VCons2(runtime, NULL,
      self->vars[149],
      self->vars[153]);
    self->vars[155] = _VBasic_VCons2(runtime, NULL,
      self->vars[148],
      self->vars[154]);
    self->vars[156] = _VBasic_VCons2(runtime, NULL,
      self->vars[147],
      self->vars[155]);
    self->vars[157] = _VBasic_VCons2(runtime, NULL,
      self->vars[146],
      self->vars[156]);
    self->vars[158] = _VBasic_VCons2(runtime, NULL,
      self->vars[145],
      self->vars[157]);
    self->vars[159] = _VBasic_VCons2(runtime, NULL,
      self->vars[144],
      self->vars[158]);
    self->vars[160] = _VBasic_VCons2(runtime, NULL,
      self->vars[143],
      self->vars[159]);
    self->vars[161] = _VBasic_VCons2(runtime, NULL,
      self->vars[142],
      self->vars[160]);
    self->vars[162] = _VBasic_VCons2(runtime, NULL,
      self->vars[141],
      self->vars[161]);
    self->vars[163] = _VBasic_VCons2(runtime, NULL,
      self->vars[140],
      self->vars[162]);
    self->vars[164] = _VBasic_VCons2(runtime, NULL,
      self->vars[139],
      self->vars[163]);
    self->vars[165] = _VBasic_VCons2(runtime, NULL,
      self->vars[138],
      self->vars[164]);
    self->vars[166] = _VBasic_VCons2(runtime, NULL,
      self->vars[137],
      self->vars[165]);
    self->vars[167] = _VBasic_VCons2(runtime, NULL,
      self->vars[136],
      self->vars[166]);
    self->vars[168] = _VBasic_VCons2(runtime, NULL,
      self->vars[135],
      self->vars[167]);
    self->vars[169] = _VBasic_VCons2(runtime, NULL,
      self->vars[134],
      self->vars[168]);
    self->vars[170] = _VBasic_VCons2(runtime, NULL,
      self->vars[133],
      self->vars[169]);
    self->vars[171] = _VBasic_VCons2(runtime, NULL,
      self->vars[132],
      self->vars[170]);
    self->vars[172] = _VBasic_VCons2(runtime, NULL,
      self->vars[131],
      self->vars[171]);
    self->vars[173] = _VBasic_VCons2(runtime, NULL,
      self->vars[130],
      self->vars[172]);
    self->vars[174] = _VBasic_VCons2(runtime, NULL,
      self->vars[129],
      self->vars[173]);
    self->vars[175] = _VBasic_VCons2(runtime, NULL,
      self->vars[128],
      self->vars[174]);
    self->vars[176] = _VBasic_VCons2(runtime, NULL,
      self->vars[127],
      self->vars[175]);
    self->vars[177] = _VBasic_VCons2(runtime, NULL,
      self->vars[126],
      self->vars[176]);
    self->vars[178] = _VBasic_VCons2(runtime, NULL,
      self->vars[125],
      self->vars[177]);
    self->vars[179] = _VBasic_VCons2(runtime, NULL,
      self->vars[124],
      self->vars[178]);
    self->vars[180] = _VBasic_VCons2(runtime, NULL,
      self->vars[123],
      self->vars[179]);
    self->vars[181] = _VBasic_VCons2(runtime, NULL,
      self->vars[122],
      self->vars[180]);
    self->vars[182] = _VBasic_VCons2(runtime, NULL,
      self->vars[121],
      self->vars[181]);
    self->vars[183] = _VBasic_VCons2(runtime, NULL,
      self->vars[120],
      self->vars[182]);
    self->vars[184] = _VBasic_VCons2(runtime, NULL,
      self->vars[119],
      self->vars[183]);
    self->vars[185] = _VBasic_VCons2(runtime, NULL,
      self->vars[118],
      self->vars[184]);
    self->vars[186] = _VBasic_VCons2(runtime, NULL,
      self->vars[117],
      self->vars[185]);
    self->vars[187] = _VBasic_VCons2(runtime, NULL,
      self->vars[116],
      self->vars[186]);
    self->vars[188] = _VBasic_VCons2(runtime, NULL,
      self->vars[115],
      self->vars[187]);
    self->vars[189] = _VBasic_VCons2(runtime, NULL,
      self->vars[114],
      self->vars[188]);
    self->vars[190] = _VBasic_VCons2(runtime, NULL,
      self->vars[113],
      self->vars[189]);
    self->vars[191] = _VBasic_VCons2(runtime, NULL,
      self->vars[112],
      self->vars[190]);
    self->vars[192] = _VBasic_VCons2(runtime, NULL,
      self->vars[111],
      self->vars[191]);
    self->vars[193] = _VBasic_VCons2(runtime, NULL,
      self->vars[110],
      self->vars[192]);
    self->vars[194] = _VBasic_VCons2(runtime, NULL,
      self->vars[109],
      self->vars[193]);
    self->vars[195] = _VBasic_VCons2(runtime, NULL,
      self->vars[108],
      self->vars[194]);
    self->vars[196] = _VBasic_VCons2(runtime, NULL,
      self->vars[107],
      self->vars[195]);
    self->vars[197] = _VBasic_VCons2(runtime, NULL,
      self->vars[106],
      self->vars[196]);
    self->vars[198] = _VBasic_VCons2(runtime, NULL,
      self->vars[105],
      self->vars[197]);
    self->vars[199] = _VBasic_VCons2(runtime, NULL,
      self->vars[104],
      self->vars[198]);
    self->vars[200] = _VBasic_VCons2(runtime, NULL,
      self->vars[103],
      self->vars[199]);
    self->vars[201] = _VBasic_VCons2(runtime, NULL,
      self->vars[102],
      self->vars[200]);
    self->vars[202] = _VBasic_VCons2(runtime, NULL,
      self->vars[101],
      self->vars[201]);
    self->vars[203] = _VBasic_VCons2(runtime, NULL,
      self->vars[100],
      self->vars[202]);
    self->vars[204] = _VBasic_VCons2(runtime, NULL,
      self->vars[99],
      self->vars[203]);
    self->vars[205] = _VBasic_VCons2(runtime, NULL,
      self->vars[98],
      self->vars[204]);
    self->vars[206] = _VBasic_VCons2(runtime, NULL,
      self->vars[97],
      self->vars[205]);
    self->vars[207] = _VBasic_VCons2(runtime, NULL,
      self->vars[96],
      self->vars[206]);
    self->vars[208] = _VBasic_VCons2(runtime, NULL,
      self->vars[95],
      self->vars[207]);
    self->vars[209] = _VBasic_VCons2(runtime, NULL,
      self->vars[94],
      self->vars[208]);
    self->vars[210] = _VBasic_VCons2(runtime, NULL,
      self->vars[93],
      self->vars[209]);
    self->vars[211] = _VBasic_VCons2(runtime, NULL,
      self->vars[92],
      self->vars[210]);
    self->vars[212] = _VBasic_VCons2(runtime, NULL,
      self->vars[91],
      self->vars[211]);
    self->vars[213] = _VBasic_VCons2(runtime, NULL,
      self->vars[90],
      self->vars[212]);
    self->vars[214] = _VBasic_VCons2(runtime, NULL,
      self->vars[89],
      self->vars[213]);
    self->vars[215] = _VBasic_VCons2(runtime, NULL,
      self->vars[88],
      self->vars[214]);
    self->vars[216] = _VBasic_VCons2(runtime, NULL,
      self->vars[87],
      self->vars[215]);
    self->vars[217] = _VBasic_VCons2(runtime, NULL,
      self->vars[86],
      self->vars[216]);
    self->vars[218] = _VBasic_VCons2(runtime, NULL,
      self->vars[85],
      self->vars[217]);
    self->vars[219] = _VBasic_VCons2(runtime, NULL,
      self->vars[84],
      self->vars[218]);
    self->vars[220] = _VBasic_VCons2(runtime, NULL,
      self->vars[83],
      self->vars[219]);
    self->vars[221] = _VBasic_VCons2(runtime, NULL,
      self->vars[82],
      self->vars[220]);
    self->vars[222] = _VBasic_VCons2(runtime, NULL,
      self->vars[81],
      self->vars[221]);
    self->vars[223] = _VBasic_VCons2(runtime, NULL,
      self->vars[80],
      self->vars[222]);
    self->vars[224] = _VBasic_VCons2(runtime, NULL,
      self->vars[79],
      self->vars[223]);
    self->vars[225] = _VBasic_VCons2(runtime, NULL,
      self->vars[78],
      self->vars[224]);
    self->vars[226] = _VBasic_VCons2(runtime, NULL,
      self->vars[77],
      self->vars[225]);
    self->vars[227] = _VBasic_VCons2(runtime, NULL,
      self->vars[76],
      self->vars[226]);
    self->vars[228] = _VBasic_VCons2(runtime, NULL,
      self->vars[75],
      self->vars[227]);
    self->vars[229] = _VBasic_VCons2(runtime, NULL,
      self->vars[74],
      self->vars[228]);
    self->vars[230] = _VBasic_VCons2(runtime, NULL,
      self->vars[73],
      self->vars[229]);
    self->vars[231] = _VBasic_VCons2(runtime, NULL,
      self->vars[72],
      self->vars[230]);
    self->vars[232] = _VBasic_VCons2(runtime, NULL,
      self->vars[71],
      self->vars[231]);
    self->vars[233] = _VBasic_VCons2(runtime, NULL,
      self->vars[70],
      self->vars[232]);
    self->vars[234] = _VBasic_VCons2(runtime, NULL,
      self->vars[69],
      self->vars[233]);
    self->vars[235] = _VBasic_VCons2(runtime, NULL,
      self->vars[68],
      self->vars[234]);
    self->vars[236] = _VBasic_VCons2(runtime, NULL,
      self->vars[67],
      self->vars[235]);
    self->vars[237] = _VBasic_VCons2(runtime, NULL,
      self->vars[66],
      self->vars[236]);
    self->vars[238] = _VBasic_VCons2(runtime, NULL,
      self->vars[65],
      self->vars[237]);
    self->vars[239] = _VBasic_VCons2(runtime, NULL,
      self->vars[64],
      self->vars[238]);
    self->vars[240] = _VBasic_VCons2(runtime, NULL,
      self->vars[63],
      self->vars[239]);
    self->vars[241] = _VBasic_VCons2(runtime, NULL,
      self->vars[62],
      self->vars[240]);
    self->vars[242] = _VBasic_VCons2(runtime, NULL,
      self->vars[61],
      self->vars[241]);
    self->vars[243] = _VBasic_VCons2(runtime, NULL,
      self->vars[60],
      self->vars[242]);
    self->vars[244] = _VBasic_VCons2(runtime, NULL,
      self->vars[59],
      self->vars[243]);
    self->vars[245] = _VBasic_VCons2(runtime, NULL,
      self->vars[58],
      self->vars[244]);
    self->vars[246] = _VBasic_VCons2(runtime, NULL,
      self->vars[57],
      self->vars[245]);
    self->vars[247] = _VBasic_VCons2(runtime, NULL,
      self->vars[56],
      self->vars[246]);
    self->vars[248] = _VBasic_VCons2(runtime, NULL,
      self->vars[55],
      self->vars[247]);
    self->vars[249] = _VBasic_VCons2(runtime, NULL,
      self->vars[54],
      self->vars[248]);
    self->vars[250] = _VBasic_VCons2(runtime, NULL,
      self->vars[53],
      self->vars[249]);
    self->vars[251] = _VBasic_VCons2(runtime, NULL,
      self->vars[52],
      self->vars[250]);
    self->vars[252] = _VBasic_VCons2(runtime, NULL,
      self->vars[51],
      self->vars[251]);
    self->vars[253] = _VBasic_VCons2(runtime, NULL,
      self->vars[50],
      self->vars[252]);
    self->vars[254] = _VBasic_VCons2(runtime, NULL,
      self->vars[49],
      self->vars[253]);
    self->vars[255] = _VBasic_VCons2(runtime, NULL,
      self->vars[48],
      self->vars[254]);
    self->vars[256] = _VBasic_VCons2(runtime, NULL,
      self->vars[47],
      self->vars[255]);
    self->vars[257] = _VBasic_VCons2(runtime, NULL,
      self->vars[46],
      self->vars[256]);
    self->vars[258] = _VBasic_VCons2(runtime, NULL,
      self->vars[45],
      self->vars[257]);
    self->vars[259] = _VBasic_VCons2(runtime, NULL,
      self->vars[44],
      self->vars[258]);
    self->vars[260] = _VBasic_VCons2(runtime, NULL,
      self->vars[43],
      self->vars[259]);
    self->vars[261] = _VBasic_VCons2(runtime, NULL,
      self->vars[42],
      self->vars[260]);
    self->vars[262] = _VBasic_VCons2(runtime, NULL,
      self->vars[41],
      self->vars[261]);
    self->vars[263] = _VBasic_VCons2(runtime, NULL,
      self->vars[40],
      self->vars[262]);
    self->vars[264] = _VBasic_VCons2(runtime, NULL,
      self->vars[39],
      self->vars[263]);
    self->vars[265] = _VBasic_VCons2(runtime, NULL,
      self->vars[38],
      self->vars[264]);
    self->vars[266] = _VBasic_VCons2(runtime, NULL,
      self->vars[37],
      self->vars[265]);
    self->vars[267] = _VBasic_VCons2(runtime, NULL,
      self->vars[36],
      self->vars[266]);
    self->vars[268] = _VBasic_VCons2(runtime, NULL,
      self->vars[35],
      self->vars[267]);
    self->vars[269] = _VBasic_VCons2(runtime, NULL,
      self->vars[34],
      self->vars[268]);
    self->vars[270] = _VBasic_VCons2(runtime, NULL,
      self->vars[33],
      self->vars[269]);
    self->vars[271] = _VBasic_VCons2(runtime, NULL,
      self->vars[32],
      self->vars[270]);
    self->vars[272] = _VBasic_VCons2(runtime, NULL,
      self->vars[31],
      self->vars[271]);
    self->vars[273] = _VBasic_VCons2(runtime, NULL,
      self->vars[30],
      self->vars[272]);
    self->vars[274] = _VBasic_VCons2(runtime, NULL,
      self->vars[29],
      self->vars[273]);
    self->vars[275] = _VBasic_VCons2(runtime, NULL,
      self->vars[28],
      self->vars[274]);
    self->vars[276] = _VBasic_VCons2(runtime, NULL,
      self->vars[27],
      self->vars[275]);
    self->vars[277] = _VBasic_VCons2(runtime, NULL,
      self->vars[26],
      self->vars[276]);
    self->vars[278] = _VBasic_VCons2(runtime, NULL,
      self->vars[25],
      self->vars[277]);
    self->vars[279] = _VBasic_VCons2(runtime, NULL,
      self->vars[24],
      self->vars[278]);
    self->vars[280] = _VBasic_VCons2(runtime, NULL,
      self->vars[23],
      self->vars[279]);
    self->vars[281] = _VBasic_VCons2(runtime, NULL,
      self->vars[22],
      self->vars[280]);
    self->vars[282] = _VBasic_VCons2(runtime, NULL,
      self->vars[21],
      self->vars[281]);
    self->vars[283] = _VBasic_VCons2(runtime, NULL,
      self->vars[20],
      self->vars[282]);
    self->vars[284] = _VBasic_VCons2(runtime, NULL,
      self->vars[19],
      self->vars[283]);
    self->vars[285] = _VBasic_VCons2(runtime, NULL,
      self->vars[18],
      self->vars[284]);
    self->vars[286] = _VBasic_VCons2(runtime, NULL,
      self->vars[17],
      self->vars[285]);
    self->vars[287] = _VBasic_VCons2(runtime, NULL,
      self->vars[16],
      self->vars[286]);
    self->vars[288] = _VBasic_VCons2(runtime, NULL,
      self->vars[15],
      self->vars[287]);
    self->vars[289] = _VBasic_VCons2(runtime, NULL,
      self->vars[14],
      self->vars[288]);
    self->vars[290] = _VBasic_VCons2(runtime, NULL,
      self->vars[13],
      self->vars[289]);
    self->vars[291] = _VBasic_VCons2(runtime, NULL,
      self->vars[12],
      self->vars[290]);
    self->vars[292] = _VBasic_VCons2(runtime, NULL,
      self->vars[11],
      self->vars[291]);
    self->vars[293] = _VBasic_VCons2(runtime, NULL,
      self->vars[10],
      self->vars[292]);
    self->vars[294] = _VBasic_VCons2(runtime, NULL,
      self->vars[9],
      self->vars[293]);
    self->vars[295] = _VBasic_VCons2(runtime, NULL,
      self->vars[8],
      self->vars[294]);
    self->vars[296] = _VBasic_VCons2(runtime, NULL,
      self->vars[7],
      self->vars[295]);
    self->vars[297] = _VBasic_VCons2(runtime, NULL,
      self->vars[6],
      self->vars[296]);
    self->vars[298] = _VBasic_VCons2(runtime, NULL,
      self->vars[5],
      self->vars[297]);
    self->vars[299] = _VBasic_VCons2(runtime, NULL,
      self->vars[4],
      self->vars[298]);
    self->vars[300] = _VBasic_VCons2(runtime, NULL,
      self->vars[3],
      self->vars[299]);
    self->vars[301] = _VBasic_VCons2(runtime, NULL,
      self->vars[2],
      self->vars[300]);
    self->vars[302] = _VBasic_VCons2(runtime, NULL,
      self->vars[1],
      self->vars[301]);
    self->vars[303] = _VBasic_VCons2(runtime, NULL,
      self->vars[0],
      self->vars[302]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      self->vars[303]);
    }
}
static void _V0vanity_V0list_V20_V0k296(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (set! (close _V0vanity_V0list_V20_V0k297) (bruijn ##.map-in-order.129 0 60) (bruijn ##.map.35 1 31))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0list_V20_V0k297, self)))),
      VEncodeInt(0l), VEncodeInt(60l),
      statics->vars[31]
    );
}
static void _V0vanity_V0list_V20_V0k295(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (set! (close _V0vanity_V0list_V20_V0k296) (bruijn ##.fourth.163 0 94) (bruijn ##.cadddr.20 1 16))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0list_V20_V0k296, self)))),
      VEncodeInt(0l), VEncodeInt(94l),
      statics->vars[16]
    );
}
static void _V0vanity_V0list_V20_V0k294(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (set! (close _V0vanity_V0list_V20_V0k295) (bruijn ##.third.164 0 95) (bruijn ##.caddr.14 1 10))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0list_V20_V0k295, self)))),
      VEncodeInt(0l), VEncodeInt(95l),
      statics->vars[10]
    );
}
static void _V0vanity_V0list_V20_V0k293(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (set! (close _V0vanity_V0list_V20_V0k294) (bruijn ##.second.165 0 96) (bruijn ##.cadr.11 1 7))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0list_V20_V0k294, self)))),
      VEncodeInt(0l), VEncodeInt(96l),
      statics->vars[7]
    );
}
static void _V0vanity_V0list_V20_V0k292(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (set! (close _V0vanity_V0list_V20_V0k293) (bruijn ##.first.166 0 97) (##intrinsic ##vcore.car))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0list_V20_V0k293, self)))),
      VEncodeInt(0l), VEncodeInt(97l),
      _V40_V10vcore_Dcar
    );
}
static void _V0vanity_V0list_V20_V0lambda2(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4, VWORD _var5, VWORD _var6, VWORD _var7, VWORD _var8, VWORD _var9, VWORD _var10, VWORD _var11, VWORD _var12, VWORD _var13, VWORD _var14, VWORD _var15, VWORD _var16, VWORD _var17, VWORD _var18, VWORD _var19, VWORD _var20, VWORD _var21, VWORD _var22, VWORD _var23, VWORD _var24, VWORD _var25, VWORD _var26, VWORD _var27, VWORD _var28, VWORD _var29, VWORD _var30, VWORD _var31, VWORD _var32, VWORD _var33, VWORD _var34, VWORD _var35, VWORD _var36, VWORD _var37, VWORD _var38, VWORD _var39, VWORD _var40, VWORD _var41, VWORD _var42, VWORD _var43, VWORD _var44, VWORD _var45) {
 if(argc != 46) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0list_V20_V0lambda2, got ~D~N"
  "-- expected 46~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[46]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 46, 46, statics);
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
  // (##letrec (vanity list) 114 ((close "_V50_V0vanity_V0list_V0assoc__update" (vanity list)) (close "_V50_V0vanity_V0list_V0assv__update" (vanity list)) (close "_V50_V0vanity_V0list_V0assq__update" (vanity list)) (close "_V50_V0vanity_V0list_V0erase" (vanity list)) (close "_V50_V0vanity_V0list_V0insert" (vanity list)) (close "_V50_V0vanity_V0list_V0lset__diff_Pintersection_B" (vanity list)) (close "_V50_V0vanity_V0list_V0lset__diff_Pintersection" (vanity list)) (close "_V50_V0vanity_V0list_V0lset__xor_B" (vanity list)) (close "_V50_V0vanity_V0list_V0lset__xor" (vanity list)) (close "_V50_V0vanity_V0list_V0lset__difference_B" (vanity list)) (close "_V50_V0vanity_V0list_V0lset__difference" (vanity list)) (close "_V50_V0vanity_V0list_V0lset__intersection_B" (vanity list)) (close "_V50_V0vanity_V0list_V0lset__intersection" (vanity list)) (close "_V50_V0vanity_V0list_V0lset__union_B" (vanity list)) (close "_V50_V0vanity_V0list_V0lset__union" (vanity list)) (close "_V50_V0vanity_V0list_V0lset__adjoin" (vanity list)) (close "_V50_V0vanity_V0list_V0lset_E" (vanity list)) (close "_V50_V0vanity_V0list_V0lset_L_E" (vanity list)) (close "_V50_V0vanity_V0list_V0_Mlset2_L_E" (vanity list)) (close "_V50_V0vanity_V0list_V0alist__delete_B" (vanity list)) (close "_V50_V0vanity_V0list_V0alist__delete" (vanity list)) (close "_V50_V0vanity_V0list_V0alist__copy" (vanity list)) (close "_V50_V0vanity_V0list_V0alist__cons" (vanity list)) (close "_V50_V0vanity_V0list_V0delete__duplicates_B" (vanity list)) (close "_V50_V0vanity_V0list_V0delete__duplicates" (vanity list)) (close "_V50_V0vanity_V0list_V0list__index" (vanity list)) (close "_V50_V0vanity_V0list_V0every" (vanity list)) (close "_V50_V0vanity_V0list_V0any" (vanity list)) (close "_V50_V0vanity_V0list_V0every_Q" (vanity list)) (close "_V50_V0vanity_V0list_V0any_Q" (vanity list)) (close "_V50_V0vanity_V0list_V0break_B" (vanity list)) (close "_V50_V0vanity_V0list_V0break" (vanity list)) (close "_V50_V0vanity_V0list_V0span_B" (vanity list)) (close "_V50_V0vanity_V0list_V0span" (vanity list)) (close "_V50_V0vanity_V0list_V0take__while_B" (vanity list)) (close "_V50_V0vanity_V0list_V0split__while" (vanity list)) (close "_V50_V0vanity_V0list_V0drop__while" (vanity list)) (close "_V50_V0vanity_V0list_V0take__while" (vanity list)) (close "_V50_V0vanity_V0list_V0delete_B" (vanity list)) (close "_V50_V0vanity_V0list_V0delete" (vanity list)) (close "_V50_V0vanity_V0list_V0find__tail" (vanity list)) (close "_V50_V0vanity_V0list_V0find" (vanity list)) (close "_V50_V0vanity_V0list_V0filter__map" (vanity list)) (close "_V50_V0vanity_V0list_V0remove_B" (vanity list)) (close "_V50_V0vanity_V0list_V0remove" (vanity list)) (close "_V50_V0vanity_V0list_V0partition_B" (vanity list)) (close "_V50_V0vanity_V0list_V0partition" (vanity list)) (close "_V50_V0vanity_V0list_V0filter_B" (vanity list)) (close "_V50_V0vanity_V0list_V0filter" (vanity list)) (close "_V50_V0vanity_V0list_V0append__map_B" (vanity list)) (close "_V50_V0vanity_V0list_V0append__map" (vanity list)) (close "_V50_V0vanity_V0list_V0reduce__right" (vanity list)) (close "_V50_V0vanity_V0list_V0reduce" (vanity list)) (close "_V50_V0vanity_V0list_V0pair__fold" (vanity list)) (close "_V50_V0vanity_V0list_V0pair__fold__right" (vanity list)) (close "_V50_V0vanity_V0list_V0unfold" (vanity list)) (close "_V50_V0vanity_V0list_V0unfold__right" (vanity list)) (close "_V50_V0vanity_V0list_V0fold__right" (vanity list)) (close "_V50_V0vanity_V0list_V0fold" (vanity list)) (close "_V50_V0vanity_V0list_V0pair__for__each" (vanity list)) #f (close "_V50_V0vanity_V0list_V0map_B" (vanity list)) (close "_V50_V0vanity_V0list_V0count" (vanity list)) (close "_V50_V0vanity_V0list_V0unzip5" (vanity list)) (close "_V50_V0vanity_V0list_V0unzip4" (vanity list)) (close "_V50_V0vanity_V0list_V0unzip3" (vanity list)) (close "_V50_V0vanity_V0list_V0unzip2" (vanity list)) (close "_V50_V0vanity_V0list_V0unzip1" (vanity list)) (close "_V50_V0vanity_V0list_V0zip" (vanity list)) (close "_V50_V0vanity_V0list_V0concatenate_B" (vanity list)) (close "_V50_V0vanity_V0list_V0concatenate" (vanity list)) (close "_V50_V0vanity_V0list_V0append__reverse_B" (vanity list)) (close "_V50_V0vanity_V0list_V0append__reverse" (vanity list)) (close "_V50_V0vanity_V0list_V0reverse_B" (vanity list)) (close "_V50_V0vanity_V0list_V0append_B" (vanity list)) (close "_V50_V0vanity_V0list_V0length_P" (vanity list)) (close "_V50_V0vanity_V0list_V0last__pair" (vanity list)) (close "_V50_V0vanity_V0list_V0last" (vanity list)) (close "_V50_V0vanity_V0list_V0drop__right_B" (vanity list)) (close "_V50_V0vanity_V0list_V0take_B" (vanity list)) (close "_V50_V0vanity_V0list_V0check__arg" (vanity list)) (close "_V50_V0vanity_V0list_V0split__at_B" (vanity list)) (close "_V50_V0vanity_V0list_V0split__at" (vanity list)) (close "_V50_V0vanity_V0list_V0drop__right" (vanity list)) (close "_V50_V0vanity_V0list_V0take__right" (vanity list)) (close "_V50_V0vanity_V0list_V0drop" (vanity list)) (close "_V50_V0vanity_V0list_V0take" (vanity list)) (close "_V50_V0vanity_V0list_V0car_Pcdr" (vanity list)) (close "_V50_V0vanity_V0list_V0tenth" (vanity list)) (close "_V50_V0vanity_V0list_V0ninth" (vanity list)) (close "_V50_V0vanity_V0list_V0eighth" (vanity list)) (close "_V50_V0vanity_V0list_V0seventh" (vanity list)) (close "_V50_V0vanity_V0list_V0sixth" (vanity list)) (close "_V50_V0vanity_V0list_V0fifth" (vanity list)) #f #f #f #f (close "_V50_V0vanity_V0list_V0list_E" (vanity list)) (close "_V50_V0vanity_V0list_V0list__tabulate" (vanity list)) (close "_V50_V0vanity_V0list_V0null__list_Q" (vanity list)) (close "_V50_V0vanity_V0list_V0not__pair_Q" (vanity list)) (close "_V50_V0vanity_V0list_V0circular__list_Q" (vanity list)) (close "_V50_V0vanity_V0list_V0dotted__list_Q" (vanity list)) (close "_V50_V0vanity_V0list_V0proper__list_Q" (vanity list)) (close "_V50_V0vanity_V0list_V0iota" (vanity list)) (close "_V50_V0vanity_V0list_V0my__num__pairs" (vanity list)) (close "_V50_V0vanity_V0list_V0circular__list" (vanity list)) (close "_V50_V0vanity_V0list_V0cons_S" (vanity list)) (close "_V50_V0vanity_V0list_V0xcons" (vanity list)) #f (close "_V50_V0vanity_V0list_V0_Mcars_Pcdrs" (vanity list)) (close "_V50_V0vanity_V0list_V0_Mcdrs" (vanity list)) (close "_V50_V0vanity_V0list_V0get__optional" (vanity list))) (set! (close _V0vanity_V0list_V20_V0k292) (bruijn ##.%cars+cdrs/no-test.179 0 110) (bruijn ##.%cars+cdrs.180 0 111)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[114]; } container;
    self = &container.self;
    _V60_V0vanity_V0list = self;
    VInitEnv(self, 114, 114, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0assoc__update, _V60_V0vanity_V0list))));
    self->vars[1] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0assv__update, _V60_V0vanity_V0list))));
    self->vars[2] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0assq__update, _V60_V0vanity_V0list))));
    self->vars[3] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0erase, _V60_V0vanity_V0list))));
    self->vars[4] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0insert, _V60_V0vanity_V0list))));
    self->vars[5] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0lset__diff_Pintersection_B, _V60_V0vanity_V0list))));
    self->vars[6] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0lset__diff_Pintersection, _V60_V0vanity_V0list))));
    self->vars[7] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0lset__xor_B, _V60_V0vanity_V0list))));
    self->vars[8] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0lset__xor, _V60_V0vanity_V0list))));
    self->vars[9] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0lset__difference_B, _V60_V0vanity_V0list))));
    self->vars[10] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0lset__difference, _V60_V0vanity_V0list))));
    self->vars[11] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0lset__intersection_B, _V60_V0vanity_V0list))));
    self->vars[12] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0lset__intersection, _V60_V0vanity_V0list))));
    self->vars[13] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0lset__union_B, _V60_V0vanity_V0list))));
    self->vars[14] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0lset__union, _V60_V0vanity_V0list))));
    self->vars[15] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0lset__adjoin, _V60_V0vanity_V0list))));
    self->vars[16] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0lset_E, _V60_V0vanity_V0list))));
    self->vars[17] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0lset_L_E, _V60_V0vanity_V0list))));
    self->vars[18] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0_Mlset2_L_E, _V60_V0vanity_V0list))));
    self->vars[19] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0alist__delete_B, _V60_V0vanity_V0list))));
    self->vars[20] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0alist__delete, _V60_V0vanity_V0list))));
    self->vars[21] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0alist__copy, _V60_V0vanity_V0list))));
    self->vars[22] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0alist__cons, _V60_V0vanity_V0list))));
    self->vars[23] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0delete__duplicates_B, _V60_V0vanity_V0list))));
    self->vars[24] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0delete__duplicates, _V60_V0vanity_V0list))));
    self->vars[25] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0list__index, _V60_V0vanity_V0list))));
    self->vars[26] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0every, _V60_V0vanity_V0list))));
    self->vars[27] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0any, _V60_V0vanity_V0list))));
    self->vars[28] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0every_Q, _V60_V0vanity_V0list))));
    self->vars[29] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0any_Q, _V60_V0vanity_V0list))));
    self->vars[30] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0break_B, _V60_V0vanity_V0list))));
    self->vars[31] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0break, _V60_V0vanity_V0list))));
    self->vars[32] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0span_B, _V60_V0vanity_V0list))));
    self->vars[33] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0span, _V60_V0vanity_V0list))));
    self->vars[34] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0take__while_B, _V60_V0vanity_V0list))));
    self->vars[35] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0split__while, _V60_V0vanity_V0list))));
    self->vars[36] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0drop__while, _V60_V0vanity_V0list))));
    self->vars[37] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0take__while, _V60_V0vanity_V0list))));
    self->vars[38] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0delete_B, _V60_V0vanity_V0list))));
    self->vars[39] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0delete, _V60_V0vanity_V0list))));
    self->vars[40] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0find__tail, _V60_V0vanity_V0list))));
    self->vars[41] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0find, _V60_V0vanity_V0list))));
    self->vars[42] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0filter__map, _V60_V0vanity_V0list))));
    self->vars[43] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0remove_B, _V60_V0vanity_V0list))));
    self->vars[44] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0remove, _V60_V0vanity_V0list))));
    self->vars[45] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0partition_B, _V60_V0vanity_V0list))));
    self->vars[46] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0partition, _V60_V0vanity_V0list))));
    self->vars[47] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0filter_B, _V60_V0vanity_V0list))));
    self->vars[48] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0filter, _V60_V0vanity_V0list))));
    self->vars[49] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0append__map_B, _V60_V0vanity_V0list))));
    self->vars[50] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0append__map, _V60_V0vanity_V0list))));
    self->vars[51] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0reduce__right, _V60_V0vanity_V0list))));
    self->vars[52] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0reduce, _V60_V0vanity_V0list))));
    self->vars[53] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0pair__fold, _V60_V0vanity_V0list))));
    self->vars[54] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0pair__fold__right, _V60_V0vanity_V0list))));
    self->vars[55] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0unfold, _V60_V0vanity_V0list))));
    self->vars[56] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0unfold__right, _V60_V0vanity_V0list))));
    self->vars[57] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0fold__right, _V60_V0vanity_V0list))));
    self->vars[58] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0fold, _V60_V0vanity_V0list))));
    self->vars[59] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0pair__for__each, _V60_V0vanity_V0list))));
    self->vars[60] = VEncodeBool(false);
    self->vars[61] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0map_B, _V60_V0vanity_V0list))));
    self->vars[62] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0count, _V60_V0vanity_V0list))));
    self->vars[63] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0unzip5, _V60_V0vanity_V0list))));
    self->vars[64] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0unzip4, _V60_V0vanity_V0list))));
    self->vars[65] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0unzip3, _V60_V0vanity_V0list))));
    self->vars[66] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0unzip2, _V60_V0vanity_V0list))));
    self->vars[67] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0unzip1, _V60_V0vanity_V0list))));
    self->vars[68] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0zip, _V60_V0vanity_V0list))));
    self->vars[69] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0concatenate_B, _V60_V0vanity_V0list))));
    self->vars[70] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0concatenate, _V60_V0vanity_V0list))));
    self->vars[71] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0append__reverse_B, _V60_V0vanity_V0list))));
    self->vars[72] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0append__reverse, _V60_V0vanity_V0list))));
    self->vars[73] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0reverse_B, _V60_V0vanity_V0list))));
    self->vars[74] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0append_B, _V60_V0vanity_V0list))));
    self->vars[75] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0length_P, _V60_V0vanity_V0list))));
    self->vars[76] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0last__pair, _V60_V0vanity_V0list))));
    self->vars[77] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0last, _V60_V0vanity_V0list))));
    self->vars[78] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0drop__right_B, _V60_V0vanity_V0list))));
    self->vars[79] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0take_B, _V60_V0vanity_V0list))));
    self->vars[80] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0check__arg, _V60_V0vanity_V0list))));
    self->vars[81] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0split__at_B, _V60_V0vanity_V0list))));
    self->vars[82] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0split__at, _V60_V0vanity_V0list))));
    self->vars[83] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0drop__right, _V60_V0vanity_V0list))));
    self->vars[84] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0take__right, _V60_V0vanity_V0list))));
    self->vars[85] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0drop, _V60_V0vanity_V0list))));
    self->vars[86] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0take, _V60_V0vanity_V0list))));
    self->vars[87] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0car_Pcdr, _V60_V0vanity_V0list))));
    self->vars[88] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0tenth, _V60_V0vanity_V0list))));
    self->vars[89] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0ninth, _V60_V0vanity_V0list))));
    self->vars[90] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0eighth, _V60_V0vanity_V0list))));
    self->vars[91] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0seventh, _V60_V0vanity_V0list))));
    self->vars[92] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0sixth, _V60_V0vanity_V0list))));
    self->vars[93] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0fifth, _V60_V0vanity_V0list))));
    self->vars[94] = VEncodeBool(false);
    self->vars[95] = VEncodeBool(false);
    self->vars[96] = VEncodeBool(false);
    self->vars[97] = VEncodeBool(false);
    self->vars[98] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0list_E, _V60_V0vanity_V0list))));
    self->vars[99] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0list__tabulate, _V60_V0vanity_V0list))));
    self->vars[100] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0null__list_Q, _V60_V0vanity_V0list))));
    self->vars[101] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0not__pair_Q, _V60_V0vanity_V0list))));
    self->vars[102] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0circular__list_Q, _V60_V0vanity_V0list))));
    self->vars[103] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0dotted__list_Q, _V60_V0vanity_V0list))));
    self->vars[104] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0proper__list_Q, _V60_V0vanity_V0list))));
    self->vars[105] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0iota, _V60_V0vanity_V0list))));
    self->vars[106] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0my__num__pairs, _V60_V0vanity_V0list))));
    self->vars[107] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0circular__list, _V60_V0vanity_V0list))));
    self->vars[108] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0cons_S, _V60_V0vanity_V0list))));
    self->vars[109] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0xcons, _V60_V0vanity_V0list))));
    self->vars[110] = VEncodeBool(false);
    self->vars[111] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0_Mcars_Pcdrs, _V60_V0vanity_V0list))));
    self->vars[112] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0_Mcdrs, _V60_V0vanity_V0list))));
    self->vars[113] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0get__optional, _V60_V0vanity_V0list))));
    VRegisterStaticEnv("_V0vanity_V0list_V20", &_V60_V0vanity_V0list);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0list_V20_V0k292, self)))),
      VEncodeInt(0l), VEncodeInt(110l),
      self->vars[111]
    );
    }
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
  // ((##intrinsic "VMultiImport") (close _V0vanity_V0list_V20_V0lambda2) (##string ##.string.2628) (bruijn ##.%x.1886 0 0) 'equal? 'values 'error 'zero? 'list-ref 'list 'list-copy 'cadr 'cddr 'caadr 'caddr 'cdadr 'cdddr 'caaadr 'caaddr 'cadadr 'cadddr 'cdaadr 'cdaddr 'cddadr 'cddddr 'length 'append 'reverse 'for-each 'memq 'assq 'assv 'assoc 'memv 'member 'map 'cdddar 'cddaar 'cdadar 'cdaaar 'caddar 'cadaar 'caadar 'caaaar 'cddar 'cdaar 'cadar 'caaar 'cdar 'caar)
    VCallFuncWithGC(runtime, (VFunc)VMultiImport, 49,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0list_V20_V0lambda2, self)))),
      VEncodePointer(&_V10_Dstring_D2628.sym, VPOINTER_OTHER),
      _var0,
      _V0equal_Q,
      _V0values,
      _V0error,
      _V0zero_Q,
      _V0list__ref,
      _V0list,
      _V0list__copy,
      _V0cadr,
      _V0cddr,
      _V0caadr,
      _V0caddr,
      _V0cdadr,
      _V0cdddr,
      _V0caaadr,
      _V0caaddr,
      _V0cadadr,
      _V0cadddr,
      _V0cdaadr,
      _V0cdaddr,
      _V0cddadr,
      _V0cddddr,
      _V0length,
      _V0append,
      _V0reverse,
      _V0for__each,
      _V0memq,
      _V0assq,
      _V0assv,
      _V0assoc,
      _V0memv,
      _V0member,
      _V0map,
      _V0cdddar,
      _V0cddaar,
      _V0cdadar,
      _V0cdaaar,
      _V0caddar,
      _V0cadaar,
      _V0caadar,
      _V0caaaar,
      _V0cddar,
      _V0cdaar,
      _V0cadar,
      _V0caaar,
      _V0cdar,
      _V0caar);
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
  // (##vcore.vector (close _V0vanity_V0list_V20_V0k2) (bruijn ##.%x.1887 0 0))
    VCallFuncWithGC(runtime, (VFunc)VCreateVector, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0list_V20_V0k2, self)))),
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
  // (##vcore.load-library (close _V0vanity_V0list_V20_V0k1) (##string ##.string.2629))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0list_V20_V0k1, self)))),
      VEncodePointer(&_V10_Dstring_D2629.sym, VPOINTER_OTHER));
}
VFunc _V0vanity_V0list_V20 = (VFunc)_V0vanity_V0list_V20_V0lambda1;
static __attribute__((constructor)) void VDllMain1() {
  _V0list__ref = VEncodePointer(VInternSymbol(-297841368, &_VW_V0list__ref.sym), VPOINTER_OTHER);
  _V0zero_Q = VEncodePointer(VInternSymbol(301807779, &_VW_V0zero_Q.sym), VPOINTER_OTHER);
  _V0error = VEncodePointer(VInternSymbol(147890691, &_VW_V0error.sym), VPOINTER_OTHER);
  _V0values = VEncodePointer(VInternSymbol(711325068, &_VW_V0values.sym), VPOINTER_OTHER);
  _V0equal_Q = VEncodePointer(VInternSymbol(1746439164, &_VW_V0equal_Q.sym), VPOINTER_OTHER);
  _V0assoc__update = VEncodePointer(VInternSymbol(1368771548, &_VW_V0assoc__update.sym), VPOINTER_OTHER);
  _V0assv__update = VEncodePointer(VInternSymbol(-1576130224, &_VW_V0assv__update.sym), VPOINTER_OTHER);
  _V0assq__update = VEncodePointer(VInternSymbol(1106520835, &_VW_V0assq__update.sym), VPOINTER_OTHER);
  _V0erase = VEncodePointer(VInternSymbol(-573483051, &_VW_V0erase.sym), VPOINTER_OTHER);
  _V0delete = VEncodePointer(VInternSymbol(-987708468, &_VW_V0delete.sym), VPOINTER_OTHER);
  _V0insert = VEncodePointer(VInternSymbol(-159824537, &_VW_V0insert.sym), VPOINTER_OTHER);
  _V0lset__diff_Pintersection_B = VEncodePointer(VInternSymbol(-553053252, &_VW_V0lset__diff_Pintersection_B.sym), VPOINTER_OTHER);
  _V0lset__diff_Pintersection = VEncodePointer(VInternSymbol(128202090, &_VW_V0lset__diff_Pintersection.sym), VPOINTER_OTHER);
  _V0lset__xor_B = VEncodePointer(VInternSymbol(-1311773400, &_VW_V0lset__xor_B.sym), VPOINTER_OTHER);
  _V0lset__xor = VEncodePointer(VInternSymbol(1623232448, &_VW_V0lset__xor.sym), VPOINTER_OTHER);
  _V0lset__difference_B = VEncodePointer(VInternSymbol(1842437642, &_VW_V0lset__difference_B.sym), VPOINTER_OTHER);
  _V0lset__difference = VEncodePointer(VInternSymbol(935065052, &_VW_V0lset__difference.sym), VPOINTER_OTHER);
  _V0lset__intersection_B = VEncodePointer(VInternSymbol(667213920, &_VW_V0lset__intersection_B.sym), VPOINTER_OTHER);
  _V0lset__intersection = VEncodePointer(VInternSymbol(-823041336, &_VW_V0lset__intersection.sym), VPOINTER_OTHER);
  _V0lset__union_B = VEncodePointer(VInternSymbol(-918498986, &_VW_V0lset__union_B.sym), VPOINTER_OTHER);
  _V0lset__union = VEncodePointer(VInternSymbol(1695447340, &_VW_V0lset__union.sym), VPOINTER_OTHER);
  _V0lset__adjoin = VEncodePointer(VInternSymbol(-465257081, &_VW_V0lset__adjoin.sym), VPOINTER_OTHER);
  _V0lset_E = VEncodePointer(VInternSymbol(338280255, &_VW_V0lset_E.sym), VPOINTER_OTHER);
  _V0lset_L_E = VEncodePointer(VInternSymbol(2095333289, &_VW_V0lset_L_E.sym), VPOINTER_OTHER);
  _V0alist__delete_B = VEncodePointer(VInternSymbol(-104483261, &_VW_V0alist__delete_B.sym), VPOINTER_OTHER);
  _V0alist__delete = VEncodePointer(VInternSymbol(-1247288743, &_VW_V0alist__delete.sym), VPOINTER_OTHER);
  _V0alist__copy = VEncodePointer(VInternSymbol(-833082660, &_VW_V0alist__copy.sym), VPOINTER_OTHER);
  _V0alist__cons = VEncodePointer(VInternSymbol(468178263, &_VW_V0alist__cons.sym), VPOINTER_OTHER);
  _V0assv = VEncodePointer(VInternSymbol(-1259600321, &_VW_V0assv.sym), VPOINTER_OTHER);
  _V0assq = VEncodePointer(VInternSymbol(456349189, &_VW_V0assq.sym), VPOINTER_OTHER);
  _V0assoc = VEncodePointer(VInternSymbol(760827368, &_VW_V0assoc.sym), VPOINTER_OTHER);
  _V0delete__duplicates_B = VEncodePointer(VInternSymbol(1422310415, &_VW_V0delete__duplicates_B.sym), VPOINTER_OTHER);
  _V0delete__duplicates = VEncodePointer(VInternSymbol(-2073520431, &_VW_V0delete__duplicates.sym), VPOINTER_OTHER);
  _V0break_B = VEncodePointer(VInternSymbol(-2142338704, &_VW_V0break_B.sym), VPOINTER_OTHER);
  _V0break = VEncodePointer(VInternSymbol(368192355, &_VW_V0break.sym), VPOINTER_OTHER);
  _V0span_B = VEncodePointer(VInternSymbol(-156593920, &_VW_V0span_B.sym), VPOINTER_OTHER);
  _V0span = VEncodePointer(VInternSymbol(-2119758885, &_VW_V0span.sym), VPOINTER_OTHER);
  _V0split__while = VEncodePointer(VInternSymbol(180691919, &_VW_V0split__while.sym), VPOINTER_OTHER);
  _V0drop__while = VEncodePointer(VInternSymbol(-1932936414, &_VW_V0drop__while.sym), VPOINTER_OTHER);
  _V0take__while_B = VEncodePointer(VInternSymbol(-388457382, &_VW_V0take__while_B.sym), VPOINTER_OTHER);
  _V0take__while = VEncodePointer(VInternSymbol(-1449233760, &_VW_V0take__while.sym), VPOINTER_OTHER);
  _V0list__index = VEncodePointer(VInternSymbol(-1895277672, &_VW_V0list__index.sym), VPOINTER_OTHER);
  _V0every = VEncodePointer(VInternSymbol(-1117750735, &_VW_V0every.sym), VPOINTER_OTHER);
  _V0any = VEncodePointer(VInternSymbol(1273566383, &_VW_V0any.sym), VPOINTER_OTHER);
  _V0every_Q = VEncodePointer(VInternSymbol(-289757295, &_VW_V0every_Q.sym), VPOINTER_OTHER);
  _V0any_Q = VEncodePointer(VInternSymbol(-147461932, &_VW_V0any_Q.sym), VPOINTER_OTHER);
  _V0find__tail = VEncodePointer(VInternSymbol(-1675804155, &_VW_V0find__tail.sym), VPOINTER_OTHER);
  _V0find = VEncodePointer(VInternSymbol(1436938733, &_VW_V0find.sym), VPOINTER_OTHER);
  _V0memv = VEncodePointer(VInternSymbol(157128241, &_VW_V0memv.sym), VPOINTER_OTHER);
  _V0memq = VEncodePointer(VInternSymbol(-1626778086, &_VW_V0memq.sym), VPOINTER_OTHER);
  _V0member = VEncodePointer(VInternSymbol(1983509194, &_VW_V0member.sym), VPOINTER_OTHER);
  _V0filter__map = VEncodePointer(VInternSymbol(-548052281, &_VW_V0filter__map.sym), VPOINTER_OTHER);
  _V0remove_B = VEncodePointer(VInternSymbol(-2049402052, &_VW_V0remove_B.sym), VPOINTER_OTHER);
  _V0remove = VEncodePointer(VInternSymbol(-906294752, &_VW_V0remove.sym), VPOINTER_OTHER);
  _V0partition_B = VEncodePointer(VInternSymbol(-535498888, &_VW_V0partition_B.sym), VPOINTER_OTHER);
  _V0partition = VEncodePointer(VInternSymbol(-1219313018, &_VW_V0partition.sym), VPOINTER_OTHER);
  _V0filter_B = VEncodePointer(VInternSymbol(-1009199472, &_VW_V0filter_B.sym), VPOINTER_OTHER);
  _V0filter = VEncodePointer(VInternSymbol(-52975199, &_VW_V0filter.sym), VPOINTER_OTHER);
  _V0append__map_B = VEncodePointer(VInternSymbol(1728411039, &_VW_V0append__map_B.sym), VPOINTER_OTHER);
  _V0append__map = VEncodePointer(VInternSymbol(-2135287522, &_VW_V0append__map.sym), VPOINTER_OTHER);
  _V0reduce__right = VEncodePointer(VInternSymbol(1655791875, &_VW_V0reduce__right.sym), VPOINTER_OTHER);
  _V0reduce = VEncodePointer(VInternSymbol(1600722049, &_VW_V0reduce.sym), VPOINTER_OTHER);
  _V0pair__fold__right = VEncodePointer(VInternSymbol(-1456735855, &_VW_V0pair__fold__right.sym), VPOINTER_OTHER);
  _V0pair__fold = VEncodePointer(VInternSymbol(326385788, &_VW_V0pair__fold.sym), VPOINTER_OTHER);
  _V0unfold__right = VEncodePointer(VInternSymbol(-1768670932, &_VW_V0unfold__right.sym), VPOINTER_OTHER);
  _V0unfold = VEncodePointer(VInternSymbol(429435851, &_VW_V0unfold.sym), VPOINTER_OTHER);
  _V0fold__right = VEncodePointer(VInternSymbol(737791577, &_VW_V0fold__right.sym), VPOINTER_OTHER);
  _V0fold = VEncodePointer(VInternSymbol(2090893058, &_VW_V0fold.sym), VPOINTER_OTHER);
  _V0pair__for__each = VEncodePointer(VInternSymbol(-954374789, &_VW_V0pair__for__each.sym), VPOINTER_OTHER);
  _V0for__each = VEncodePointer(VInternSymbol(1903158638, &_VW_V0for__each.sym), VPOINTER_OTHER);
  _V0map__in__order = VEncodePointer(VInternSymbol(866370653, &_VW_V0map__in__order.sym), VPOINTER_OTHER);
  _V0map_B = VEncodePointer(VInternSymbol(-903979057, &_VW_V0map_B.sym), VPOINTER_OTHER);
  _V0map = VEncodePointer(VInternSymbol(-1940887657, &_VW_V0map.sym), VPOINTER_OTHER);
  _V0count = VEncodePointer(VInternSymbol(3689525, &_VW_V0count.sym), VPOINTER_OTHER);
  _V0unzip5 = VEncodePointer(VInternSymbol(1556752558, &_VW_V0unzip5.sym), VPOINTER_OTHER);
  _V0unzip4 = VEncodePointer(VInternSymbol(1623508883, &_VW_V0unzip4.sym), VPOINTER_OTHER);
  _V0unzip3 = VEncodePointer(VInternSymbol(624461900, &_VW_V0unzip3.sym), VPOINTER_OTHER);
  _V0unzip2 = VEncodePointer(VInternSymbol(-216934690, &_VW_V0unzip2.sym), VPOINTER_OTHER);
  _V0unzip1 = VEncodePointer(VInternSymbol(-1263425126, &_VW_V0unzip1.sym), VPOINTER_OTHER);
  _V0zip = VEncodePointer(VInternSymbol(171507829, &_VW_V0zip.sym), VPOINTER_OTHER);
  _V0append__reverse_B = VEncodePointer(VInternSymbol(35541202, &_VW_V0append__reverse_B.sym), VPOINTER_OTHER);
  _V0append__reverse = VEncodePointer(VInternSymbol(948789885, &_VW_V0append__reverse.sym), VPOINTER_OTHER);
  _V0reverse_B = VEncodePointer(VInternSymbol(-608174657, &_VW_V0reverse_B.sym), VPOINTER_OTHER);
  _V0reverse = VEncodePointer(VInternSymbol(418515197, &_VW_V0reverse.sym), VPOINTER_OTHER);
  _V0concatenate_B = VEncodePointer(VInternSymbol(1465658050, &_VW_V0concatenate_B.sym), VPOINTER_OTHER);
  _V0concatenate = VEncodePointer(VInternSymbol(552835501, &_VW_V0concatenate.sym), VPOINTER_OTHER);
  _V0append_B = VEncodePointer(VInternSymbol(-622418166, &_VW_V0append_B.sym), VPOINTER_OTHER);
  _V0append = VEncodePointer(VInternSymbol(-700471979, &_VW_V0append.sym), VPOINTER_OTHER);
  _V0length_P = VEncodePointer(VInternSymbol(-1636911318, &_VW_V0length_P.sym), VPOINTER_OTHER);
  _V0length = VEncodePointer(VInternSymbol(-1077292005, &_VW_V0length.sym), VPOINTER_OTHER);
  _V0last__pair = VEncodePointer(VInternSymbol(-1339915020, &_VW_V0last__pair.sym), VPOINTER_OTHER);
  _V0last = VEncodePointer(VInternSymbol(-1733907247, &_VW_V0last.sym), VPOINTER_OTHER);
  _V0split__at_B = VEncodePointer(VInternSymbol(-1159342902, &_VW_V0split__at_B.sym), VPOINTER_OTHER);
  _V0split__at = VEncodePointer(VInternSymbol(-397762858, &_VW_V0split__at.sym), VPOINTER_OTHER);
  _V0drop__right_B = VEncodePointer(VInternSymbol(1807792000, &_VW_V0drop__right_B.sym), VPOINTER_OTHER);
  _V0take_B = VEncodePointer(VInternSymbol(76910845, &_VW_V0take_B.sym), VPOINTER_OTHER);
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
  _V0cddddr = VEncodePointer(VInternSymbol(-1400798210, &_VW_V0cddddr.sym), VPOINTER_OTHER);
  _V0cdddar = VEncodePointer(VInternSymbol(-1552563578, &_VW_V0cdddar.sym), VPOINTER_OTHER);
  _V0cddadr = VEncodePointer(VInternSymbol(253578786, &_VW_V0cddadr.sym), VPOINTER_OTHER);
  _V0cddaar = VEncodePointer(VInternSymbol(-2001026799, &_VW_V0cddaar.sym), VPOINTER_OTHER);
  _V0cdaddr = VEncodePointer(VInternSymbol(-940068257, &_VW_V0cdaddr.sym), VPOINTER_OTHER);
  _V0cdadar = VEncodePointer(VInternSymbol(-1207654366, &_VW_V0cdadar.sym), VPOINTER_OTHER);
  _V0cdaadr = VEncodePointer(VInternSymbol(-1890799430, &_VW_V0cdaadr.sym), VPOINTER_OTHER);
  _V0cdaaar = VEncodePointer(VInternSymbol(1380569715, &_VW_V0cdaaar.sym), VPOINTER_OTHER);
  _V0cadddr = VEncodePointer(VInternSymbol(-448763463, &_VW_V0cadddr.sym), VPOINTER_OTHER);
  _V0caddar = VEncodePointer(VInternSymbol(-974166901, &_VW_V0caddar.sym), VPOINTER_OTHER);
  _V0cadadr = VEncodePointer(VInternSymbol(879370799, &_VW_V0cadadr.sym), VPOINTER_OTHER);
  _V0cadaar = VEncodePointer(VInternSymbol(-789146610, &_VW_V0cadaar.sym), VPOINTER_OTHER);
  _V0caaddr = VEncodePointer(VInternSymbol(-1166727585, &_VW_V0caaddr.sym), VPOINTER_OTHER);
  _V0caadar = VEncodePointer(VInternSymbol(118144657, &_VW_V0caadar.sym), VPOINTER_OTHER);
  _V0caaadr = VEncodePointer(VInternSymbol(-260616953, &_VW_V0caaadr.sym), VPOINTER_OTHER);
  _V0caaaar = VEncodePointer(VInternSymbol(1780001564, &_VW_V0caaaar.sym), VPOINTER_OTHER);
  _V0cdddr = VEncodePointer(VInternSymbol(584415821, &_VW_V0cdddr.sym), VPOINTER_OTHER);
  _V0cddar = VEncodePointer(VInternSymbol(-1851430374, &_VW_V0cddar.sym), VPOINTER_OTHER);
  _V0cdadr = VEncodePointer(VInternSymbol(-1987367307, &_VW_V0cdadr.sym), VPOINTER_OTHER);
  _V0cdaar = VEncodePointer(VInternSymbol(128292593, &_VW_V0cdaar.sym), VPOINTER_OTHER);
  _V0caddr = VEncodePointer(VInternSymbol(396082650, &_VW_V0caddr.sym), VPOINTER_OTHER);
  _V0cadar = VEncodePointer(VInternSymbol(545720329, &_VW_V0cadar.sym), VPOINTER_OTHER);
  _V0caadr = VEncodePointer(VInternSymbol(1112754322, &_VW_V0caadr.sym), VPOINTER_OTHER);
  _V0caaar = VEncodePointer(VInternSymbol(-380092063, &_VW_V0caaar.sym), VPOINTER_OTHER);
  _V0cddr = VEncodePointer(VInternSymbol(-569180081, &_VW_V0cddr.sym), VPOINTER_OTHER);
  _V0cdar = VEncodePointer(VInternSymbol(-1104539071, &_VW_V0cdar.sym), VPOINTER_OTHER);
  _V0cadr = VEncodePointer(VInternSymbol(137264287, &_VW_V0cadr.sym), VPOINTER_OTHER);
  _V0caar = VEncodePointer(VInternSymbol(-610927850, &_VW_V0caar.sym), VPOINTER_OTHER);
  _V0cdr = VEncodePointer(VInternSymbol(-27845161, &_VW_V0cdr.sym), VPOINTER_OTHER);
  _V0car = VEncodePointer(VInternSymbol(-5179575, &_VW_V0car.sym), VPOINTER_OTHER);
  _V0list_E = VEncodePointer(VInternSymbol(-74656716, &_VW_V0list_E.sym), VPOINTER_OTHER);
  _V0null__list_Q = VEncodePointer(VInternSymbol(477870744, &_VW_V0null__list_Q.sym), VPOINTER_OTHER);
  _V0not__pair_Q = VEncodePointer(VInternSymbol(-1138614648, &_VW_V0not__pair_Q.sym), VPOINTER_OTHER);
  _V0dotted__list_Q = VEncodePointer(VInternSymbol(-406297127, &_VW_V0dotted__list_Q.sym), VPOINTER_OTHER);
  _V0circular__list_Q = VEncodePointer(VInternSymbol(1010754243, &_VW_V0circular__list_Q.sym), VPOINTER_OTHER);
  _V0proper__list_Q = VEncodePointer(VInternSymbol(1385954062, &_VW_V0proper__list_Q.sym), VPOINTER_OTHER);
  _V0null_Q = VEncodePointer(VInternSymbol(1722024332, &_VW_V0null_Q.sym), VPOINTER_OTHER);
  _V0pair_Q = VEncodePointer(VInternSymbol(1000447642, &_VW_V0pair_Q.sym), VPOINTER_OTHER);
  _V0iota = VEncodePointer(VInternSymbol(786799409, &_VW_V0iota.sym), VPOINTER_OTHER);
  _V0circular__list = VEncodePointer(VInternSymbol(-1087207513, &_VW_V0circular__list.sym), VPOINTER_OTHER);
  _V0list__copy = VEncodePointer(VInternSymbol(600805102, &_VW_V0list__copy.sym), VPOINTER_OTHER);
  _V0list__tabulate = VEncodePointer(VInternSymbol(683417405, &_VW_V0list__tabulate.sym), VPOINTER_OTHER);
  _V0cons_S = VEncodePointer(VInternSymbol(-868668799, &_VW_V0cons_S.sym), VPOINTER_OTHER);
  _V0xcons = VEncodePointer(VInternSymbol(432249588, &_VW_V0xcons.sym), VPOINTER_OTHER);
  _V0list = VEncodePointer(VInternSymbol(-1594870040, &_VW_V0list.sym), VPOINTER_OTHER);
  _V0cons = VEncodePointer(VInternSymbol(943237530, &_VW_V0cons.sym), VPOINTER_OTHER);
  _V40_V10vcore_Dcons = VEncodePointer(VLookupConstant("_V40_V10vcore_Dcons", &_VW_V40_V10vcore_Dcons), VPOINTER_CLOSURE);
  _V40_V10vcore_Dint_Q = VEncodePointer(VLookupConstant("_V40_V10vcore_Dint_Q", &_VW_V40_V10vcore_Dint_Q), VPOINTER_CLOSURE);
  _V40_V10vcore_Dnull_Q = VEncodePointer(VLookupConstant("_V40_V10vcore_Dnull_Q", &_VW_V40_V10vcore_Dnull_Q), VPOINTER_CLOSURE);
  _V40_V10vcore_Dcar = VEncodePointer(VLookupConstant("_V40_V10vcore_Dcar", &_VW_V40_V10vcore_Dcar), VPOINTER_CLOSURE);
  _V40_V10vcore_Dcdr = VEncodePointer(VLookupConstant("_V40_V10vcore_Dcdr", &_VW_V40_V10vcore_Dcdr), VPOINTER_CLOSURE);
  _V40_V10vcore_Deq_Q = VEncodePointer(VLookupConstant("_V40_V10vcore_Deq_Q", &_VW_V40_V10vcore_Deq_Q), VPOINTER_CLOSURE);
  _V40_V10vcore_Dpair_Q = VEncodePointer(VLookupConstant("_V40_V10vcore_Dpair_Q", &_VW_V40_V10vcore_Dpair_Q), VPOINTER_CLOSURE);
  _V40_V10vcore_Dprocedure_Q = VEncodePointer(VLookupConstant("_V40_V10vcore_Dprocedure_Q", &_VW_V40_V10vcore_Dprocedure_Q), VPOINTER_CLOSURE);
  _V40VMultiImport = VEncodePointer(VLookupConstant("_V40VMultiImport", &_VW_V40VMultiImport), VPOINTER_CLOSURE);
}
