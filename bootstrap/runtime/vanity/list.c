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
VWEAK VWORD _V0map__in__order;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V0map__in__order = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "map-in-order" };
VWEAK VWORD _V0map_B;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0map_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "map!" };
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
VWEAK VWORD _V0concatenate_B;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V0concatenate_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "concatenate!" };
VWEAK VWORD _V0concatenate;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0concatenate = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "concatenate" };
VWEAK VWORD _V0append_B;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0append_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "append!" };
VWEAK VWORD _V0length_P;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0length_P = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "length+" };
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
VWEAK VWORD _V0list__tabulate;VWEAK struct { VBlob sym; char bytes[14]; } _VW_V0list__tabulate = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 14 }, "list-tabulate" };
VWEAK VWORD _V0cons_S;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0cons_S = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "cons*" };
VWEAK VWORD _V0xcons;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0xcons = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "xcons" };
VWEAK VWORD _V40_V10vcore_Dcons;
VWEAK VClosure _VW_V40_V10vcore_Dcons = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VCons2, NULL };
VWEAK VWORD _V0cons;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0cons = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "cons" };
static struct { VBlob sym; char bytes[35]; } _V10_Dstring_D1916 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 35 }, "null-list\?: argument out of domain" };
static struct { VBlob sym; char bytes[13]; } _V10_Dstring_D1915 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 13 }, "Bad argument" };
VWEAK VWORD _V40_V10vcore_Dint_Q;
VWEAK VClosure _VW_V40_V10vcore_Dint_Q = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VIntP2, NULL };
static struct { VBlob sym; char bytes[19]; } _V10_Dstring_D1914 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 19 }, "Too many arguments" };
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
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D1913 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "_V0vanity_V0core_V20" };
VWEAK VWORD _V0caar;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0caar = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "caar" };
VWEAK VWORD _V0cdar;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0cdar = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "cdar" };
VWEAK VWORD _V0caaar;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0caaar = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "caaar" };
VWEAK VWORD _V0cadar;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0cadar = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "cadar" };
VWEAK VWORD _V0cdaar;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0cdaar = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "cdaar" };
VWEAK VWORD _V0cddar;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0cddar = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "cddar" };
VWEAK VWORD _V0caaaar;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0caaaar = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "caaaar" };
VWEAK VWORD _V0caadar;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0caadar = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "caadar" };
VWEAK VWORD _V0cadaar;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0cadaar = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "cadaar" };
VWEAK VWORD _V0caddar;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0caddar = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "caddar" };
VWEAK VWORD _V0cdaaar;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0cdaaar = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "cdaaar" };
VWEAK VWORD _V0cdadar;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0cdadar = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "cdadar" };
VWEAK VWORD _V0cddaar;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0cddaar = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "cddaar" };
VWEAK VWORD _V0cdddar;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0cdddar = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "cdddar" };
VWEAK VWORD _V0map;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0map = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "map" };
VWEAK VWORD _V0member;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0member = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "member" };
VWEAK VWORD _V0memv;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0memv = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "memv" };
VWEAK VWORD _V0assoc;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0assoc = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "assoc" };
VWEAK VWORD _V0assv;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0assv = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "assv" };
VWEAK VWORD _V0assq;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0assq = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "assq" };
VWEAK VWORD _V0memq;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0memq = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "memq" };
VWEAK VWORD _V0for__each;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0for__each = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "for-each" };
VWEAK VWORD _V0reverse;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0reverse = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "reverse" };
VWEAK VWORD _V0append;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0append = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "append" };
VWEAK VWORD _V0length;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0length = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "length" };
VWEAK VWORD _V0cddddr;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0cddddr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "cddddr" };
VWEAK VWORD _V0cddadr;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0cddadr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "cddadr" };
VWEAK VWORD _V0cdaddr;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0cdaddr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "cdaddr" };
VWEAK VWORD _V0cdaadr;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0cdaadr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "cdaadr" };
VWEAK VWORD _V0cadddr;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0cadddr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "cadddr" };
VWEAK VWORD _V0cadadr;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0cadadr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "cadadr" };
VWEAK VWORD _V0caaddr;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0caaddr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "caaddr" };
VWEAK VWORD _V0caaadr;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0caaadr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "caaadr" };
VWEAK VWORD _V0cdddr;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0cdddr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "cdddr" };
VWEAK VWORD _V0cdadr;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0cdadr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "cdadr" };
VWEAK VWORD _V0caddr;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0caddr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "caddr" };
VWEAK VWORD _V0caadr;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0caadr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "caadr" };
VWEAK VWORD _V0cddr;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0cddr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "cddr" };
VWEAK VWORD _V0cadr;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0cadr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "cadr" };
VWEAK VWORD _V0list__copy;VWEAK struct { VBlob sym; char bytes[10]; } _VW_V0list__copy = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 10 }, "list-copy" };
VWEAK VWORD _V0list;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0list = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "list" };
VWEAK VWORD _V0list__ref;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0list__ref = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "list-ref" };
VWEAK VWORD _V0zero_Q;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0zero_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "zero\?" };
VWEAK VWORD _V0error;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0error = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "error" };
VWEAK VWORD _V0values;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0values = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "values" };
VWEAK VWORD _V0equal_Q;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0equal_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "equal\?" };
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D1912 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "_V0vanity_V0list_V20" };
VWEAK VWORD _V40VMultiImport;
VWEAK VClosure _VW_V40VMultiImport = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VMultiImport, NULL };
static __attribute__((constructor)) void VDllMain1() {
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
  _V0map__in__order = VEncodePointer(VInternSymbol(866370653, &_VW_V0map__in__order.sym), VPOINTER_OTHER);
  _V0map_B = VEncodePointer(VInternSymbol(-903979057, &_VW_V0map_B.sym), VPOINTER_OTHER);
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
  _V0concatenate_B = VEncodePointer(VInternSymbol(1465658050, &_VW_V0concatenate_B.sym), VPOINTER_OTHER);
  _V0concatenate = VEncodePointer(VInternSymbol(552835501, &_VW_V0concatenate.sym), VPOINTER_OTHER);
  _V0append_B = VEncodePointer(VInternSymbol(-622418166, &_VW_V0append_B.sym), VPOINTER_OTHER);
  _V0length_P = VEncodePointer(VInternSymbol(-1636911318, &_VW_V0length_P.sym), VPOINTER_OTHER);
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
  _V0list__tabulate = VEncodePointer(VInternSymbol(683417405, &_VW_V0list__tabulate.sym), VPOINTER_OTHER);
  _V0cons_S = VEncodePointer(VInternSymbol(-868668799, &_VW_V0cons_S.sym), VPOINTER_OTHER);
  _V0xcons = VEncodePointer(VInternSymbol(432249588, &_VW_V0xcons.sym), VPOINTER_OTHER);
  _V0cons = VEncodePointer(VInternSymbol(943237530, &_VW_V0cons.sym), VPOINTER_OTHER);
  _V0caar = VEncodePointer(VInternSymbol(-610927850, &_VW_V0caar.sym), VPOINTER_OTHER);
  _V0cdar = VEncodePointer(VInternSymbol(-1104539071, &_VW_V0cdar.sym), VPOINTER_OTHER);
  _V0caaar = VEncodePointer(VInternSymbol(-380092063, &_VW_V0caaar.sym), VPOINTER_OTHER);
  _V0cadar = VEncodePointer(VInternSymbol(545720329, &_VW_V0cadar.sym), VPOINTER_OTHER);
  _V0cdaar = VEncodePointer(VInternSymbol(128292593, &_VW_V0cdaar.sym), VPOINTER_OTHER);
  _V0cddar = VEncodePointer(VInternSymbol(-1851430374, &_VW_V0cddar.sym), VPOINTER_OTHER);
  _V0caaaar = VEncodePointer(VInternSymbol(1780001564, &_VW_V0caaaar.sym), VPOINTER_OTHER);
  _V0caadar = VEncodePointer(VInternSymbol(118144657, &_VW_V0caadar.sym), VPOINTER_OTHER);
  _V0cadaar = VEncodePointer(VInternSymbol(-789146610, &_VW_V0cadaar.sym), VPOINTER_OTHER);
  _V0caddar = VEncodePointer(VInternSymbol(-974166901, &_VW_V0caddar.sym), VPOINTER_OTHER);
  _V0cdaaar = VEncodePointer(VInternSymbol(1380569715, &_VW_V0cdaaar.sym), VPOINTER_OTHER);
  _V0cdadar = VEncodePointer(VInternSymbol(-1207654366, &_VW_V0cdadar.sym), VPOINTER_OTHER);
  _V0cddaar = VEncodePointer(VInternSymbol(-2001026799, &_VW_V0cddaar.sym), VPOINTER_OTHER);
  _V0cdddar = VEncodePointer(VInternSymbol(-1552563578, &_VW_V0cdddar.sym), VPOINTER_OTHER);
  _V0map = VEncodePointer(VInternSymbol(-1940887657, &_VW_V0map.sym), VPOINTER_OTHER);
  _V0member = VEncodePointer(VInternSymbol(1983509194, &_VW_V0member.sym), VPOINTER_OTHER);
  _V0memv = VEncodePointer(VInternSymbol(157128241, &_VW_V0memv.sym), VPOINTER_OTHER);
  _V0assoc = VEncodePointer(VInternSymbol(760827368, &_VW_V0assoc.sym), VPOINTER_OTHER);
  _V0assv = VEncodePointer(VInternSymbol(-1259600321, &_VW_V0assv.sym), VPOINTER_OTHER);
  _V0assq = VEncodePointer(VInternSymbol(456349189, &_VW_V0assq.sym), VPOINTER_OTHER);
  _V0memq = VEncodePointer(VInternSymbol(-1626778086, &_VW_V0memq.sym), VPOINTER_OTHER);
  _V0for__each = VEncodePointer(VInternSymbol(1903158638, &_VW_V0for__each.sym), VPOINTER_OTHER);
  _V0reverse = VEncodePointer(VInternSymbol(418515197, &_VW_V0reverse.sym), VPOINTER_OTHER);
  _V0append = VEncodePointer(VInternSymbol(-700471979, &_VW_V0append.sym), VPOINTER_OTHER);
  _V0length = VEncodePointer(VInternSymbol(-1077292005, &_VW_V0length.sym), VPOINTER_OTHER);
  _V0cddddr = VEncodePointer(VInternSymbol(-1400798210, &_VW_V0cddddr.sym), VPOINTER_OTHER);
  _V0cddadr = VEncodePointer(VInternSymbol(253578786, &_VW_V0cddadr.sym), VPOINTER_OTHER);
  _V0cdaddr = VEncodePointer(VInternSymbol(-940068257, &_VW_V0cdaddr.sym), VPOINTER_OTHER);
  _V0cdaadr = VEncodePointer(VInternSymbol(-1890799430, &_VW_V0cdaadr.sym), VPOINTER_OTHER);
  _V0cadddr = VEncodePointer(VInternSymbol(-448763463, &_VW_V0cadddr.sym), VPOINTER_OTHER);
  _V0cadadr = VEncodePointer(VInternSymbol(879370799, &_VW_V0cadadr.sym), VPOINTER_OTHER);
  _V0caaddr = VEncodePointer(VInternSymbol(-1166727585, &_VW_V0caaddr.sym), VPOINTER_OTHER);
  _V0caaadr = VEncodePointer(VInternSymbol(-260616953, &_VW_V0caaadr.sym), VPOINTER_OTHER);
  _V0cdddr = VEncodePointer(VInternSymbol(584415821, &_VW_V0cdddr.sym), VPOINTER_OTHER);
  _V0cdadr = VEncodePointer(VInternSymbol(-1987367307, &_VW_V0cdadr.sym), VPOINTER_OTHER);
  _V0caddr = VEncodePointer(VInternSymbol(396082650, &_VW_V0caddr.sym), VPOINTER_OTHER);
  _V0caadr = VEncodePointer(VInternSymbol(1112754322, &_VW_V0caadr.sym), VPOINTER_OTHER);
  _V0cddr = VEncodePointer(VInternSymbol(-569180081, &_VW_V0cddr.sym), VPOINTER_OTHER);
  _V0cadr = VEncodePointer(VInternSymbol(137264287, &_VW_V0cadr.sym), VPOINTER_OTHER);
  _V0list__copy = VEncodePointer(VInternSymbol(600805102, &_VW_V0list__copy.sym), VPOINTER_OTHER);
  _V0list = VEncodePointer(VInternSymbol(-1594870040, &_VW_V0list.sym), VPOINTER_OTHER);
  _V0list__ref = VEncodePointer(VInternSymbol(-297841368, &_VW_V0list__ref.sym), VPOINTER_OTHER);
  _V0zero_Q = VEncodePointer(VInternSymbol(301807779, &_VW_V0zero_Q.sym), VPOINTER_OTHER);
  _V0error = VEncodePointer(VInternSymbol(147890691, &_VW_V0error.sym), VPOINTER_OTHER);
  _V0values = VEncodePointer(VInternSymbol(711325068, &_VW_V0values.sym), VPOINTER_OTHER);
  _V0equal_Q = VEncodePointer(VInternSymbol(1746439164, &_VW_V0equal_Q.sym), VPOINTER_OTHER);
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
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0get__optional, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0_Mcdrs, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0_Mcars_Pcdrs, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0xcons, _var0, _var1, _var2);
V_DECLARE_FUNC_MIN(_V50_V0vanity_V0list_V0cons_S, _var0, _var1);
V_DECLARE_FUNC_MIN(_V50_V0vanity_V0list_V0circular__list, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0my__num__pairs, _var0, _var1);
V_DECLARE_FUNC_MIN(_V50_V0vanity_V0list_V0iota);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0proper__list_Q, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0dotted__list_Q, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0circular__list_Q, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0not__pair_Q, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0null__list_Q, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0list__tabulate, _var0, _var1, _var2);
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
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0take__right, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0drop__right, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0split__at, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0split__at_B, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0check__arg, _var0, _var1, _var2, _var3);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0take_B, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0drop__right_B, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0last, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0last__pair, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0length_P, _var0, _var1);
V_DECLARE_FUNC_MIN(_V50_V0vanity_V0list_V0append_B);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0reverse_B, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0append__reverse, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0append__reverse_B, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0concatenate, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0concatenate_B, _var0, _var1);
V_DECLARE_FUNC_MIN(_V50_V0vanity_V0list_V0zip, _var0);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0unzip1, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0unzip2, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0unzip3, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0unzip4, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0unzip5, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0count, _var0, _var1, _var2);
V_DECLARE_FUNC_MIN(_V50_V0vanity_V0list_V0map_B, _var0, _var1, _var2);
V_DECLARE_FUNC_MIN(_V50_V0vanity_V0list_V0pair__for__each, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0fold, _var0, _var1, _var2, _var3);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0fold__right, _var0, _var1, _var2, _var3);
V_DECLARE_FUNC_MIN(_V50_V0vanity_V0list_V0unfold__right, _var0, _var1, _var2, _var3, _var4);
V_DECLARE_FUNC_MIN(_V50_V0vanity_V0list_V0unfold, _var0, _var1, _var2, _var3, _var4);
V_DECLARE_FUNC_MIN(_V50_V0vanity_V0list_V0pair__fold__right, _var0, _var1, _var2, _var3);
V_DECLARE_FUNC_MIN(_V50_V0vanity_V0list_V0pair__fold, _var0, _var1, _var2, _var3);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0reduce, _var0, _var1, _var2, _var3);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0reduce__right, _var0, _var1, _var2, _var3);
V_DECLARE_FUNC_MIN(_V50_V0vanity_V0list_V0append__map);
V_DECLARE_FUNC_MIN(_V50_V0vanity_V0list_V0append__map_B);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0filter, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0filter_B, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0partition, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0partition_B, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0remove, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0remove_B, _var0, _var1, _var2);
V_DECLARE_FUNC_MIN(_V50_V0vanity_V0list_V0filter__map, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0find, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0find__tail, _var0, _var1, _var2);
V_DECLARE_FUNC_MIN(_V50_V0vanity_V0list_V0delete, _var0, _var1, _var2);
V_DECLARE_FUNC_MIN(_V50_V0vanity_V0list_V0delete_B, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0take__while, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0drop__while, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0split__while, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0take__while_B, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0span, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0span_B, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0break, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0break_B, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0any_Q, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0every_Q, _var0, _var1, _var2);
V_DECLARE_FUNC_MIN(_V50_V0vanity_V0list_V0any, _var0, _var1, _var2);
V_DECLARE_FUNC_MIN(_V50_V0vanity_V0list_V0every, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0list__index, _var0, _var1, _var2);
V_DECLARE_FUNC_MIN(_V50_V0vanity_V0list_V0delete__duplicates, _var0, _var1);
V_DECLARE_FUNC_MIN(_V50_V0vanity_V0list_V0delete__duplicates_B, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0alist__cons, _var0, _var1, _var2, _var3);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0alist__copy, _var0, _var1);
V_DECLARE_FUNC_MIN(_V50_V0vanity_V0list_V0alist__delete, _var0, _var1, _var2);
V_DECLARE_FUNC_MIN(_V50_V0vanity_V0list_V0alist__delete_B, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0list_V0_Mlset2_L_E, _var0, _var1, _var2, _var3);
V_DECLARE_FUNC_MIN(_V50_V0vanity_V0list_V0lset_L_E, _var0, _var1);
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
static void _V0vanity_V0list_V20_V0k2(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_V0k2" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0list_V20_V0k2, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((##intrinsic "VMultiImport") (bruijn ##.k.768 2 0) (##string ##.string.1912) (bruijn ##.x.769 0 0) 'equal? 'values 'error 'zero? 'list-ref 'list 'list-copy 'cadr 'cddr 'caadr 'caddr 'cdadr 'cdddr 'caaadr 'caaddr 'cadadr 'cadddr 'cdaadr 'cdaddr 'cddadr 'cddddr 'length 'append 'reverse 'for-each 'memq 'assq 'assv 'assoc 'memv 'member 'map 'cdddar 'cddaar 'cdadar 'cdaaar 'caddar 'cadaar 'caadar 'caaaar 'cddar 'cdaar 'cadar 'caaar 'cdar 'caar)
    VCallFuncWithGC(runtime, (VFunc)VMultiImport, 49,
      statics->up->vars[0],
      VEncodePointer(&_V10_Dstring_D1912.sym, VPOINTER_OTHER),
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
  // (##vcore.vector (close _V0vanity_V0list_V20_V0k2) (bruijn ##.x.770 0 0))
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
  // (##vcore.load-library (close _V0vanity_V0list_V20_V0k1) (##string ##.string.1913))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0list_V20_V0k1, self)))),
      VEncodePointer(&_V10_Dstring_D1913.sym, VPOINTER_OTHER));
}
static void _V10_Dassoc__update_D68_V0k5(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dassoc__update_D68_V0k5" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dassoc__update_D68_V0k5, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.773 3 0) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.lst.185 3 1)) (bruijn ##.x.780 0 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VInlineCons2(runtime,
        VInlineCar2(runtime,
        statics->up->up->vars[1]),
        _var0));
}
static void _V10_Dassoc__update_D68_V0k4(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dassoc__update_D68_V0k4" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dassoc__update_D68_V0k4, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.776 0 0) ((bruijn ##.k.773 2 0) (##inline ##vcore.cons (##inline ##vcore.cons (bruijn ##.x.186 2 2) (bruijn ##.val.187 2 3)) (##inline ##vcore.cdr (bruijn ##.lst.185 2 1)))) ((bruijn ##.assoc-update.68 3 0) (close _V10_Dassoc__update_D68_V0k5) (##inline ##vcore.cdr (bruijn ##.lst.185 2 1)) (bruijn ##.x.186 2 2) (bruijn ##.val.187 2 3)))
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
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dassoc__update_D68_V0k5, self)))),
      VInlineCdr2(runtime,
        statics->up->vars[1]),
      statics->up->vars[2],
      statics->up->vars[3]);
}
}
static void _V10_Dassoc__update_D68_V0k3(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dassoc__update_D68_V0k3" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dassoc__update_D68_V0k3, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.=.188 1 4) (close _V10_Dassoc__update_D68_V0k4) (bruijn ##.x.186 1 2) (bruijn ##.x.782 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[4]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dassoc__update_D68_V0k4, self)))),
      statics->vars[2],
      _var0);
}
__attribute__((used)) static void _V20CaseError__V50_V0vanity_V0list_V0assoc__update(VRuntime * runtime, VEnv * statics, int argc, ...) {
 // ("_V50_V0vanity_V0list_V0assoc__update" #t (4 ((bruijn ##.assoc-update.68 1 0) (bruijn ##.k.772 0 0) (bruijn ##.lst.182 0 1) (bruijn ##.x.183 0 2) (bruijn ##.val.184 0 3) (bruijn ##.equal?.3 2 1))) (5 (if (##inline ##vcore.null? (bruijn ##.lst.185 0 1)) ((bruijn ##.k.773 0 0) (##inline ##vcore.cons (##inline ##vcore.cons (bruijn ##.x.186 0 2) (bruijn ##.val.187 0 3)) '())) ((bruijn ##.caar.48 2 46) (close _V10_Dassoc__update_D68_V0k3) (bruijn ##.lst.185 0 1)))))
 VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0assoc__update, got ~D~N"
 "-- expected 4~N"
 "-- expected 5~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V50_V0vanity_V0list_V0assoc__update(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V20Case0__V50_V0vanity_V0list_V0assoc__update" };
 VRecordCall2(runtime, &dbg);
  // ((bruijn ##.assoc-update.68 1 0) (bruijn ##.k.772 0 0) (bruijn ##.lst.182 0 1) (bruijn ##.x.183 0 2) (bruijn ##.val.184 0 3) (bruijn ##.equal?.3 2 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 5,
      _var0,
      _var1,
      _var2,
      _var3,
      statics->up->vars[1]);
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
  // (if (##inline ##vcore.null? (bruijn ##.lst.185 0 1)) ((bruijn ##.k.773 0 0) (##inline ##vcore.cons (##inline ##vcore.cons (bruijn ##.x.186 0 2) (bruijn ##.val.187 0 3)) '())) ((bruijn ##.caar.48 2 46) (close _V10_Dassoc__update_D68_V0k3) (bruijn ##.lst.185 0 1)))
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
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[46]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dassoc__update_D68_V0k3, self)))),
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
  // ((bruijn ##.k.783 2 0) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.lst.189 2 1)) (bruijn ##.x.790 0 0)))
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
  // (if (##inline ##vcore.eq? (bruijn ##.x.190 1 2) (bruijn ##.x.792 0 0)) ((bruijn ##.k.783 1 0) (##inline ##vcore.cons (##inline ##vcore.cons (bruijn ##.x.190 1 2) (bruijn ##.val.191 1 3)) (##inline ##vcore.cdr (bruijn ##.lst.189 1 1)))) ((bruijn ##.assoc-update.68 2 0) (close _V50_V0vanity_V0list_V0assv__update_V0k7) (##inline ##vcore.cdr (bruijn ##.lst.189 1 1)) (bruijn ##.x.190 1 2) (bruijn ##.val.191 1 3)))
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
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0assv__update_V0k7, self)))),
      VInlineCdr2(runtime,
        statics->vars[1]),
      statics->vars[2],
      statics->vars[3]);
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
  // (if (##inline ##vcore.null? (bruijn ##.lst.189 0 1)) ((bruijn ##.k.783 0 0) (##inline ##vcore.cons (##inline ##vcore.cons (bruijn ##.x.190 0 2) (bruijn ##.val.191 0 3)) '())) ((bruijn ##.caar.48 2 46) (close _V50_V0vanity_V0list_V0assv__update_V0k6) (bruijn ##.lst.189 0 1)))
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
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[46]), 2,
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
  // ((bruijn ##.k.793 2 0) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.lst.192 2 1)) (bruijn ##.x.800 0 0)))
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
  // (if (##inline ##vcore.eq? (bruijn ##.x.193 1 2) (bruijn ##.x.802 0 0)) ((bruijn ##.k.793 1 0) (##inline ##vcore.cons (##inline ##vcore.cons (bruijn ##.x.193 1 2) (bruijn ##.val.194 1 3)) (##inline ##vcore.cdr (bruijn ##.lst.192 1 1)))) ((bruijn ##.assoc-update.68 2 0) (close _V50_V0vanity_V0list_V0assq__update_V0k9) (##inline ##vcore.cdr (bruijn ##.lst.192 1 1)) (bruijn ##.x.193 1 2) (bruijn ##.val.194 1 3)))
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
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0assq__update_V0k9, self)))),
      VInlineCdr2(runtime,
        statics->vars[1]),
      statics->vars[2],
      statics->vars[3]);
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
  // (if (##inline ##vcore.null? (bruijn ##.lst.192 0 1)) ((bruijn ##.k.793 0 0) (##inline ##vcore.cons (##inline ##vcore.cons (bruijn ##.x.193 0 2) (bruijn ##.val.194 0 3)) '())) ((bruijn ##.caar.48 2 46) (close _V50_V0vanity_V0list_V0assq__update_V0k8) (bruijn ##.lst.192 0 1)))
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
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[46]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0assq__update_V0k8, self)))),
      _var1);
}
}
void _V50_V0vanity_V0list_V0erase_V0k10(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0erase_V0k10" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0erase_V0k10, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.803 3 0) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.lst.195 3 1)) (bruijn ##.x.806 0 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VInlineCons2(runtime,
        VInlineCar2(runtime,
        statics->up->up->vars[1]),
        _var0));
}
void _V50_V0vanity_V0list_V0erase(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0erase" };
 VRecordCall2(runtime, &dbg);
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
  // (basic-block 1 1 (##.reg.1889) ((##vcore.= (bruijn ##.i.196 1 2) 0)) (if (bruijn ##.reg.1889 0 0) ((bruijn ##.k.803 1 0) (##inline ##vcore.cdr (bruijn ##.lst.195 1 1))) (basic-block 1 1 (##.reg.1890) ((##vcore.- (bruijn ##.i.196 2 2) 1)) ((bruijn ##.erase.71 3 3) (close _V50_V0vanity_V0list_V0erase_V0k10) (##inline ##vcore.cdr (bruijn ##.lst.195 2 1)) (bruijn ##.reg.1890 0 0)))))
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
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[3]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0erase_V0k10, self)))),
      VInlineCdr2(runtime,
        statics->up->vars[1]),
      self->vars[0]);
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
  // ((bruijn ##.k.809 3 0) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.lst.197 3 1)) (bruijn ##.x.812 0 0)))
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
  // (basic-block 1 1 (##.reg.1891) ((##vcore.= (bruijn ##.i.198 1 2) 0)) (if (bruijn ##.reg.1891 0 0) ((bruijn ##.k.809 1 0) (##inline ##vcore.cons (bruijn ##.x.199 1 3) (bruijn ##.lst.197 1 1))) (basic-block 1 1 (##.reg.1892) ((##vcore.- (bruijn ##.i.198 2 2) 1)) ((bruijn ##.insert.72 3 4) (close _V50_V0vanity_V0list_V0insert_V0k11) (##inline ##vcore.cdr (bruijn ##.lst.197 2 1)) (bruijn ##.reg.1892 0 0) (bruijn ##.x.199 2 3)))))
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
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[4]), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0insert_V0k11, self)))),
      VInlineCdr2(runtime,
        statics->up->vars[1]),
      self->vars[0],
      statics->up->vars[3]);
    }
}
    }
}
void _V50_V0vanity_V0list_V0lset__diff_Pintersection_B_V0k15(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0lset__diff_Pintersection_B_V0k15" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0lset__diff_Pintersection_B_V0k15, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.818 1 0) (##inline ##vcore.not (bruijn ##.x.819 0 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VInlineNot2(runtime,
        _var0));
}
void _V50_V0vanity_V0list_V0lset__diff_Pintersection_B_V0lambda5(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0lset__diff_Pintersection_B_V0lambda5" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0lset__diff_Pintersection_B_V0lambda5, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.member.33 6 31) (bruijn ##.k.820 0 0) (bruijn ##.elt.203 1 1) (bruijn ##.lis.204 0 1) (bruijn ##.=.200 4 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 31)), 4,
      _var0,
      statics->vars[1],
      _var1,
      statics->up->up->up->vars[1]);
}
void _V50_V0vanity_V0list_V0lset__diff_Pintersection_B_V0lambda4(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0lset__diff_Pintersection_B_V0lambda4" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0lset__diff_Pintersection_B_V0lambda4, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.any.95 4 27) (close _V50_V0vanity_V0list_V0lset__diff_Pintersection_B_V0k15) (close _V50_V0vanity_V0list_V0lset__diff_Pintersection_B_V0lambda5) (bruijn ##.lists.202 3 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[27]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0lset__diff_Pintersection_B_V0k15, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0lset__diff_Pintersection_B_V0lambda5, self)))),
      statics->up->up->vars[3]);
}
void _V50_V0vanity_V0list_V0lset__diff_Pintersection_B_V0k14(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0lset__diff_Pintersection_B_V0k14" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0lset__diff_Pintersection_B_V0k14, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.817 0 0) ((bruijn ##.values.4 4 2) (bruijn ##.k.815 2 0) '() (bruijn ##.lis1.201 2 2)) ((bruijn ##.partition!.113 3 45) (bruijn ##.k.815 2 0) (close _V50_V0vanity_V0list_V0lset__diff_Pintersection_B_V0lambda4) (bruijn ##.lis1.201 2 2)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[2]), 3,
      statics->up->vars[0],
      VNULL,
      statics->up->vars[2]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[45]), 3,
      statics->up->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0lset__diff_Pintersection_B_V0lambda4, self)))),
      statics->up->vars[2]);
}
}
void _V50_V0vanity_V0list_V0lset__diff_Pintersection_B_V0k13(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0lset__diff_Pintersection_B_V0k13" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0lset__diff_Pintersection_B_V0k13, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.816 0 0) ((bruijn ##.values.4 3 2) (bruijn ##.k.815 1 0) (bruijn ##.lis1.201 1 2) '()) ((bruijn ##.memq.28 3 26) (close _V50_V0vanity_V0list_V0lset__diff_Pintersection_B_V0k14) (bruijn ##.lis1.201 1 2) (bruijn ##.lists.202 1 3)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[2]), 3,
      statics->vars[0],
      statics->vars[2],
      VNULL);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[26]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0lset__diff_Pintersection_B_V0k14, self)))),
      statics->vars[2],
      statics->vars[3]);
}
}
static void _V50_V0vanity_V0list_V0lset__diff_Pintersection_B_V0k12(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.every.94 1 26) (close _V50_V0vanity_V0list_V0lset__diff_Pintersection_B_V0k13) (bruijn ##.null-list?.168 1 100) (bruijn ##.lists.202 0 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[26]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0lset__diff_Pintersection_B_V0k13, self)))),
      statics->vars[100],
      self->vars[3]);
}
void _V50_V0vanity_V0list_V0lset__diff_Pintersection_B(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, ...) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0lset__diff_Pintersection_B" };
 VRecordCall2(runtime, &dbg);
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
  // ((bruijn ##.check-arg.148 1 80) (close _V50_V0vanity_V0list_V0lset__diff_Pintersection_B_V0k12) (##intrinsic ##vcore.procedure?) (bruijn ##.=.200 0 1) (bruijn ##.lset-diff+intersection!.73 1 5))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[80]), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0lset__diff_Pintersection_B_V0k12, self)))),
      _V40_V10vcore_Dprocedure_Q,
      _var1,
      statics->vars[5]);
}
void _V50_V0vanity_V0list_V0lset__diff_Pintersection_V0k19(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0lset__diff_Pintersection_V0k19" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0lset__diff_Pintersection_V0k19, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.824 1 0) (##inline ##vcore.not (bruijn ##.x.825 0 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VInlineNot2(runtime,
        _var0));
}
void _V50_V0vanity_V0list_V0lset__diff_Pintersection_V0lambda7(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0lset__diff_Pintersection_V0lambda7" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0lset__diff_Pintersection_V0lambda7, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.member.33 6 31) (bruijn ##.k.826 0 0) (bruijn ##.elt.208 1 1) (bruijn ##.lis.209 0 1) (bruijn ##.=.205 4 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 31)), 4,
      _var0,
      statics->vars[1],
      _var1,
      statics->up->up->up->vars[1]);
}
void _V50_V0vanity_V0list_V0lset__diff_Pintersection_V0lambda6(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0lset__diff_Pintersection_V0lambda6" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0lset__diff_Pintersection_V0lambda6, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.any.95 4 27) (close _V50_V0vanity_V0list_V0lset__diff_Pintersection_V0k19) (close _V50_V0vanity_V0list_V0lset__diff_Pintersection_V0lambda7) (bruijn ##.lists.207 3 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[27]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0lset__diff_Pintersection_V0k19, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0lset__diff_Pintersection_V0lambda7, self)))),
      statics->up->up->vars[3]);
}
void _V50_V0vanity_V0list_V0lset__diff_Pintersection_V0k18(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0lset__diff_Pintersection_V0k18" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0lset__diff_Pintersection_V0k18, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.823 0 0) ((bruijn ##.values.4 4 2) (bruijn ##.k.821 2 0) '() (bruijn ##.lis1.206 2 2)) ((bruijn ##.partition.114 3 46) (bruijn ##.k.821 2 0) (close _V50_V0vanity_V0list_V0lset__diff_Pintersection_V0lambda6) (bruijn ##.lis1.206 2 2)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[2]), 3,
      statics->up->vars[0],
      VNULL,
      statics->up->vars[2]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[46]), 3,
      statics->up->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0lset__diff_Pintersection_V0lambda6, self)))),
      statics->up->vars[2]);
}
}
void _V50_V0vanity_V0list_V0lset__diff_Pintersection_V0k17(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0lset__diff_Pintersection_V0k17" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0lset__diff_Pintersection_V0k17, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.822 0 0) ((bruijn ##.values.4 3 2) (bruijn ##.k.821 1 0) (bruijn ##.lis1.206 1 2) '()) ((bruijn ##.memq.28 3 26) (close _V50_V0vanity_V0list_V0lset__diff_Pintersection_V0k18) (bruijn ##.lis1.206 1 2) (bruijn ##.lists.207 1 3)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[2]), 3,
      statics->vars[0],
      statics->vars[2],
      VNULL);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[26]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0lset__diff_Pintersection_V0k18, self)))),
      statics->vars[2],
      statics->vars[3]);
}
}
static void _V50_V0vanity_V0list_V0lset__diff_Pintersection_V0k16(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.every.94 1 26) (close _V50_V0vanity_V0list_V0lset__diff_Pintersection_V0k17) (bruijn ##.null-list?.168 1 100) (bruijn ##.lists.207 0 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[26]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0lset__diff_Pintersection_V0k17, self)))),
      statics->vars[100],
      self->vars[3]);
}
void _V50_V0vanity_V0list_V0lset__diff_Pintersection(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, ...) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0lset__diff_Pintersection" };
 VRecordCall2(runtime, &dbg);
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
  // ((bruijn ##.check-arg.148 1 80) (close _V50_V0vanity_V0list_V0lset__diff_Pintersection_V0k16) (##intrinsic ##vcore.procedure?) (bruijn ##.=.205 0 1) (bruijn ##.lset-diff+intersection.74 1 6))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[80]), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0lset__diff_Pintersection_V0k16, self)))),
      _V40_V10vcore_Dprocedure_Q,
      _var1,
      statics->vars[6]);
}
void _V50_V0vanity_V0list_V0lset__xor_B_V0lambda9(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0lset__xor_B_V0lambda9" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0lset__xor_B_V0lambda9, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.lset-diff+intersection!.73 3 5) (bruijn ##.k.829 0 0) (bruijn ##.=.210 2 1) (bruijn ##.a.213 1 2) (bruijn ##.b.212 1 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[5]), 4,
      _var0,
      statics->up->vars[1],
      statics->vars[2],
      statics->vars[1]);
}
static void _V50_V0vanity_V0list_V0lset__xor_B_V0k22(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.k.833 1 0) (bruijn ##.b-pair.216 1 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      statics->vars[1]);
}
void _V50_V0vanity_V0list_V0lset__xor_B_V0k21(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0lset__xor_B_V0k21" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0lset__xor_B_V0k21, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.834 0 0) ((bruijn ##.k.833 1 0) (bruijn ##.ans.217 1 2)) (##vcore.set-cdr! (close _V50_V0vanity_V0list_V0lset__xor_B_V0k22) (bruijn ##.b-pair.216 1 1) (bruijn ##.ans.217 1 2)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      statics->vars[2]);
} else {
    VCallFuncWithGC(runtime, (VFunc)VSetCdr2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0lset__xor_B_V0k22, self)))),
      statics->vars[1],
      statics->vars[2]);
}
}
void _V50_V0vanity_V0list_V0lset__xor_B_V0lambda11(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0lset__xor_B_V0lambda11" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0lset__xor_B_V0lambda11, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((bruijn ##.member.33 5 31) (close _V50_V0vanity_V0list_V0lset__xor_B_V0k21) (##inline ##vcore.car (bruijn ##.b-pair.216 0 1)) (bruijn ##.a-int-b.215 1 2) (bruijn ##.=.210 3 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 31)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0lset__xor_B_V0k21, self)))),
      VInlineCar2(runtime,
        _var1),
      statics->vars[2],
      statics->up->up->vars[1]);
}
void _V50_V0vanity_V0list_V0lset__xor_B_V0lambda10(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0lset__xor_B_V0lambda10" };
 VRecordCall2(runtime, &dbg);
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
  // (if (##inline ##vcore.null? (bruijn ##.a-b.214 0 1)) ((bruijn ##.lset-difference!.77 3 9) (bruijn ##.k.830 0 0) (bruijn ##.=.210 2 1) (bruijn ##.b.212 1 1) (bruijn ##.a.213 1 2)) (if (##inline ##vcore.null? (bruijn ##.a-int-b.215 0 2)) ((bruijn ##.append!.142 3 74) (bruijn ##.k.830 0 0) (bruijn ##.b.212 1 1) (bruijn ##.a.213 1 2)) ((bruijn ##.pair-fold.121 3 53) (bruijn ##.k.830 0 0) (close _V50_V0vanity_V0list_V0lset__xor_B_V0lambda11) (bruijn ##.a-b.214 0 1) (bruijn ##.b.212 1 1))))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var1))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[9]), 4,
      _var0,
      statics->up->vars[1],
      statics->vars[1],
      statics->vars[2]);
} else {
if(VDecodeBool(
VInlineNullP2(runtime,
        _var2))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[74]), 3,
      _var0,
      statics->vars[1],
      statics->vars[2]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[53]), 4,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0lset__xor_B_V0lambda11, self)))),
      _var1,
      statics->vars[1]);
}
}
}
void _V50_V0vanity_V0list_V0lset__xor_B_V0lambda8(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0lset__xor_B_V0lambda8" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0lset__xor_B_V0lambda8, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (##vcore.call-with-values (bruijn ##.k.828 0 0) (close _V50_V0vanity_V0list_V0lset__xor_B_V0lambda9) (close _V50_V0vanity_V0list_V0lset__xor_B_V0lambda10))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0lset__xor_B_V0lambda9, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0lset__xor_B_V0lambda10, self)))));
}
static void _V50_V0vanity_V0list_V0lset__xor_B_V0k20(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.reduce.120 1 52) (bruijn ##.k.827 0 0) (close _V50_V0vanity_V0list_V0lset__xor_B_V0lambda8) '() (bruijn ##.lists.211 0 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[52]), 4,
      self->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0lset__xor_B_V0lambda8, self)))),
      VNULL,
      self->vars[2]);
}
void _V50_V0vanity_V0list_V0lset__xor_B(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, ...) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0lset__xor_B" };
 VRecordCall2(runtime, &dbg);
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
  // ((bruijn ##.check-arg.148 1 80) (close _V50_V0vanity_V0list_V0lset__xor_B_V0k20) (##intrinsic ##vcore.procedure?) (bruijn ##.=.210 0 1) (bruijn ##.lset-xor!.75 1 7))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[80]), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0lset__xor_B_V0k20, self)))),
      _V40_V10vcore_Dprocedure_Q,
      _var1,
      statics->vars[7]);
}
void _V50_V0vanity_V0list_V0lset__xor_V0lambda13(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0lset__xor_V0lambda13" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0lset__xor_V0lambda13, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.lset-diff+intersection.74 3 6) (bruijn ##.k.838 0 0) (bruijn ##.=.218 2 1) (bruijn ##.a.221 1 2) (bruijn ##.b.220 1 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[6]), 4,
      _var0,
      statics->up->vars[1],
      statics->vars[2],
      statics->vars[1]);
}
void _V50_V0vanity_V0list_V0lset__xor_V0k24(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0lset__xor_V0k24" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0lset__xor_V0k24, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.843 0 0) ((bruijn ##.k.842 1 0) (bruijn ##.ans.225 1 2)) ((bruijn ##.k.842 1 0) (##inline ##vcore.cons (bruijn ##.xb.224 1 1) (bruijn ##.ans.225 1 2))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      statics->vars[2]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VInlineCons2(runtime,
        statics->vars[1],
        statics->vars[2]));
}
}
void _V50_V0vanity_V0list_V0lset__xor_V0lambda15(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0lset__xor_V0lambda15" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0lset__xor_V0lambda15, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((bruijn ##.member.33 5 31) (close _V50_V0vanity_V0list_V0lset__xor_V0k24) (bruijn ##.xb.224 0 1) (bruijn ##.a-int-b.223 1 2) (bruijn ##.=.218 3 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 31)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0lset__xor_V0k24, self)))),
      _var1,
      statics->vars[2],
      statics->up->up->vars[1]);
}
void _V50_V0vanity_V0list_V0lset__xor_V0lambda14(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0lset__xor_V0lambda14" };
 VRecordCall2(runtime, &dbg);
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
  // (if (##inline ##vcore.null? (bruijn ##.a-b.222 0 1)) ((bruijn ##.lset-difference.78 3 10) (bruijn ##.k.839 0 0) (bruijn ##.=.218 2 1) (bruijn ##.b.220 1 1) (bruijn ##.a.221 1 2)) (if (##inline ##vcore.null? (bruijn ##.a-int-b.223 0 2)) ((bruijn ##.append.25 4 23) (bruijn ##.k.839 0 0) (bruijn ##.b.220 1 1) (bruijn ##.a.221 1 2)) ((bruijn ##.fold.126 3 58) (bruijn ##.k.839 0 0) (close _V50_V0vanity_V0list_V0lset__xor_V0lambda15) (bruijn ##.a-b.222 0 1) (bruijn ##.b.220 1 1))))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var1))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[10]), 4,
      _var0,
      statics->up->vars[1],
      statics->vars[1],
      statics->vars[2]);
} else {
if(VDecodeBool(
VInlineNullP2(runtime,
        _var2))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[23]), 3,
      _var0,
      statics->vars[1],
      statics->vars[2]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[58]), 4,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0lset__xor_V0lambda15, self)))),
      _var1,
      statics->vars[1]);
}
}
}
void _V50_V0vanity_V0list_V0lset__xor_V0lambda12(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0lset__xor_V0lambda12" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0lset__xor_V0lambda12, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (##vcore.call-with-values (bruijn ##.k.837 0 0) (close _V50_V0vanity_V0list_V0lset__xor_V0lambda13) (close _V50_V0vanity_V0list_V0lset__xor_V0lambda14))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0lset__xor_V0lambda13, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0lset__xor_V0lambda14, self)))));
}
static void _V50_V0vanity_V0list_V0lset__xor_V0k23(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.reduce.120 1 52) (bruijn ##.k.836 0 0) (close _V50_V0vanity_V0list_V0lset__xor_V0lambda12) '() (bruijn ##.lists.219 0 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[52]), 4,
      self->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0lset__xor_V0lambda12, self)))),
      VNULL,
      self->vars[2]);
}
void _V50_V0vanity_V0list_V0lset__xor(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, ...) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0lset__xor" };
 VRecordCall2(runtime, &dbg);
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
  // ((bruijn ##.check-arg.148 1 80) (close _V50_V0vanity_V0list_V0lset__xor_V0k23) (##intrinsic ##vcore.procedure?) (bruijn ##.=.218 0 1) (bruijn ##.lset-xor.76 1 8))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[80]), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0lset__xor_V0k23, self)))),
      _V40_V10vcore_Dprocedure_Q,
      _var1,
      statics->vars[8]);
}
void _V50_V0vanity_V0list_V0lset__difference_B_V0k28(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0lset__difference_B_V0k28" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0lset__difference_B_V0k28, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.848 1 0) (##inline ##vcore.not (bruijn ##.x.849 0 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VInlineNot2(runtime,
        _var0));
}
void _V50_V0vanity_V0list_V0lset__difference_B_V0lambda17(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0lset__difference_B_V0lambda17" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0lset__difference_B_V0lambda17, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.member.33 6 31) (close _V50_V0vanity_V0list_V0lset__difference_B_V0k28) (bruijn ##.x.230 1 1) (bruijn ##.lis.231 0 1) (bruijn ##.=.226 4 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 31)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0lset__difference_B_V0k28, self)))),
      statics->vars[1],
      _var1,
      statics->up->up->up->vars[1]);
}
void _V50_V0vanity_V0list_V0lset__difference_B_V0lambda16(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0lset__difference_B_V0lambda16" };
 VRecordCall2(runtime, &dbg);
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
  // ((bruijn ##.every.94 4 26) (bruijn ##.k.847 0 0) (close _V50_V0vanity_V0list_V0lset__difference_B_V0lambda17) (bruijn ##.lists.229 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[26]), 3,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0lset__difference_B_V0lambda17, self)))),
      statics->up->vars[0]);
}
void _V50_V0vanity_V0list_V0lset__difference_B_V0k27(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0lset__difference_B_V0k27" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0lset__difference_B_V0k27, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.846 0 0) ((bruijn ##.k.844 2 0) '()) ((bruijn ##.filter!.115 3 47) (bruijn ##.k.844 2 0) (close _V50_V0vanity_V0list_V0lset__difference_B_V0lambda16) (bruijn ##.lis1.227 2 2)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VNULL);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[47]), 3,
      statics->up->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0lset__difference_B_V0lambda16, self)))),
      statics->up->vars[2]);
}
}
void _V50_V0vanity_V0list_V0lset__difference_B_V0k26(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0lset__difference_B_V0k26" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0lset__difference_B_V0k26, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.null? (bruijn ##.lists.229 0 0)) ((bruijn ##.k.844 1 0) (bruijn ##.lis1.227 1 2)) ((bruijn ##.memq.28 3 26) (close _V50_V0vanity_V0list_V0lset__difference_B_V0k27) (bruijn ##.lis1.227 1 2) (bruijn ##.lists.229 0 0)))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      statics->vars[2]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[26]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0lset__difference_B_V0k27, self)))),
      statics->vars[2],
      _var0);
}
}
static void _V50_V0vanity_V0list_V0lset__difference_B_V0k25(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.filter.116 1 48) (close _V50_V0vanity_V0list_V0lset__difference_B_V0k26) (##intrinsic ##vcore.pair?) (bruijn ##.lists.228 0 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[48]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0lset__difference_B_V0k26, self)))),
      _V40_V10vcore_Dpair_Q,
      self->vars[3]);
}
void _V50_V0vanity_V0list_V0lset__difference_B(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, ...) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0lset__difference_B" };
 VRecordCall2(runtime, &dbg);
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
  // ((bruijn ##.check-arg.148 1 80) (close _V50_V0vanity_V0list_V0lset__difference_B_V0k25) (##intrinsic ##vcore.procedure?) (bruijn ##.=.226 0 1) (bruijn ##.lset-difference!.77 1 9))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[80]), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0lset__difference_B_V0k25, self)))),
      _V40_V10vcore_Dprocedure_Q,
      _var1,
      statics->vars[9]);
}
void _V50_V0vanity_V0list_V0lset__difference_V0k32(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0lset__difference_V0k32" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0lset__difference_V0k32, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.854 1 0) (##inline ##vcore.not (bruijn ##.x.855 0 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VInlineNot2(runtime,
        _var0));
}
void _V50_V0vanity_V0list_V0lset__difference_V0lambda19(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0lset__difference_V0lambda19" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0lset__difference_V0lambda19, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.member.33 6 31) (close _V50_V0vanity_V0list_V0lset__difference_V0k32) (bruijn ##.x.236 1 1) (bruijn ##.lis.237 0 1) (bruijn ##.=.232 4 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 31)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0lset__difference_V0k32, self)))),
      statics->vars[1],
      _var1,
      statics->up->up->up->vars[1]);
}
void _V50_V0vanity_V0list_V0lset__difference_V0lambda18(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0lset__difference_V0lambda18" };
 VRecordCall2(runtime, &dbg);
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
  // ((bruijn ##.every.94 4 26) (bruijn ##.k.853 0 0) (close _V50_V0vanity_V0list_V0lset__difference_V0lambda19) (bruijn ##.lists.235 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[26]), 3,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0lset__difference_V0lambda19, self)))),
      statics->up->vars[0]);
}
void _V50_V0vanity_V0list_V0lset__difference_V0k31(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0lset__difference_V0k31" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0lset__difference_V0k31, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.852 0 0) ((bruijn ##.k.850 2 0) '()) ((bruijn ##.filter.116 3 48) (bruijn ##.k.850 2 0) (close _V50_V0vanity_V0list_V0lset__difference_V0lambda18) (bruijn ##.lis1.233 2 2)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VNULL);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[48]), 3,
      statics->up->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0lset__difference_V0lambda18, self)))),
      statics->up->vars[2]);
}
}
void _V50_V0vanity_V0list_V0lset__difference_V0k30(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0lset__difference_V0k30" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0lset__difference_V0k30, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.null? (bruijn ##.lists.235 0 0)) ((bruijn ##.k.850 1 0) (bruijn ##.lis1.233 1 2)) ((bruijn ##.memq.28 3 26) (close _V50_V0vanity_V0list_V0lset__difference_V0k31) (bruijn ##.lis1.233 1 2) (bruijn ##.lists.235 0 0)))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      statics->vars[2]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[26]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0lset__difference_V0k31, self)))),
      statics->vars[2],
      _var0);
}
}
static void _V50_V0vanity_V0list_V0lset__difference_V0k29(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.filter.116 1 48) (close _V50_V0vanity_V0list_V0lset__difference_V0k30) (##intrinsic ##vcore.pair?) (bruijn ##.lists.234 0 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[48]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0lset__difference_V0k30, self)))),
      _V40_V10vcore_Dpair_Q,
      self->vars[3]);
}
void _V50_V0vanity_V0list_V0lset__difference(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, ...) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0lset__difference" };
 VRecordCall2(runtime, &dbg);
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
  // ((bruijn ##.check-arg.148 1 80) (close _V50_V0vanity_V0list_V0lset__difference_V0k29) (##intrinsic ##vcore.procedure?) (bruijn ##.=.232 0 1) (bruijn ##.lset-difference.78 1 10))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[80]), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0lset__difference_V0k29, self)))),
      _V40_V10vcore_Dprocedure_Q,
      _var1,
      statics->vars[10]);
}
void _V50_V0vanity_V0list_V0lset__intersection_B_V0lambda21(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0lset__intersection_B_V0lambda21" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0lset__intersection_B_V0lambda21, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.member.33 6 31) (bruijn ##.k.860 0 0) (bruijn ##.x.242 1 1) (bruijn ##.lis.243 0 1) (bruijn ##.=.238 4 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 31)), 4,
      _var0,
      statics->vars[1],
      _var1,
      statics->up->up->up->vars[1]);
}
void _V50_V0vanity_V0list_V0lset__intersection_B_V0lambda20(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0lset__intersection_B_V0lambda20" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0lset__intersection_B_V0lambda20, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.every.94 4 26) (bruijn ##.k.859 0 0) (close _V50_V0vanity_V0list_V0lset__intersection_B_V0lambda21) (bruijn ##.lists.241 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[26]), 3,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0lset__intersection_B_V0lambda21, self)))),
      statics->up->vars[0]);
}
void _V50_V0vanity_V0list_V0lset__intersection_B_V0k35(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0lset__intersection_B_V0k35" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0lset__intersection_B_V0k35, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.857 0 0) ((bruijn ##.k.856 2 0) '()) (if (##inline ##vcore.null? (bruijn ##.lists.241 1 0)) ((bruijn ##.k.856 2 0) (bruijn ##.lis1.239 2 2)) ((bruijn ##.filter!.115 3 47) (bruijn ##.k.856 2 0) (close _V50_V0vanity_V0list_V0lset__intersection_B_V0lambda20) (bruijn ##.lis1.239 2 2))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VNULL);
} else {
if(VDecodeBool(
VInlineNullP2(runtime,
        statics->vars[0]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      statics->up->vars[2]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[47]), 3,
      statics->up->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0lset__intersection_B_V0lambda20, self)))),
      statics->up->vars[2]);
}
}
}
void _V50_V0vanity_V0list_V0lset__intersection_B_V0k34(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0lset__intersection_B_V0k34" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0lset__intersection_B_V0k34, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.any.95 2 27) (close _V50_V0vanity_V0list_V0lset__intersection_B_V0k35) (bruijn ##.null-list?.168 2 100) (bruijn ##.lists.241 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[27]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0lset__intersection_B_V0k35, self)))),
      statics->up->vars[100],
      _var0);
}
static void _V50_V0vanity_V0list_V0lset__intersection_B_V0k33(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.delete.107 1 39) (close _V50_V0vanity_V0list_V0lset__intersection_B_V0k34) (bruijn ##.lis1.239 0 2) (bruijn ##.lists.240 0 3) (##intrinsic ##vcore.eq?))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[39]), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0lset__intersection_B_V0k34, self)))),
      self->vars[2],
      self->vars[3],
      _V40_V10vcore_Deq_Q);
}
void _V50_V0vanity_V0list_V0lset__intersection_B(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, ...) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0lset__intersection_B" };
 VRecordCall2(runtime, &dbg);
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
  // ((bruijn ##.check-arg.148 1 80) (close _V50_V0vanity_V0list_V0lset__intersection_B_V0k33) (##intrinsic ##vcore.procedure?) (bruijn ##.=.238 0 1) (bruijn ##.lset-intersection!.79 1 11))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[80]), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0lset__intersection_B_V0k33, self)))),
      _V40_V10vcore_Dprocedure_Q,
      _var1,
      statics->vars[11]);
}
void _V50_V0vanity_V0list_V0lset__intersection_V0lambda23(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0lset__intersection_V0lambda23" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0lset__intersection_V0lambda23, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.member.33 6 31) (bruijn ##.k.865 0 0) (bruijn ##.x.248 1 1) (bruijn ##.lis.249 0 1) (bruijn ##.=.244 4 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 31)), 4,
      _var0,
      statics->vars[1],
      _var1,
      statics->up->up->up->vars[1]);
}
void _V50_V0vanity_V0list_V0lset__intersection_V0lambda22(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0lset__intersection_V0lambda22" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0lset__intersection_V0lambda22, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.every.94 4 26) (bruijn ##.k.864 0 0) (close _V50_V0vanity_V0list_V0lset__intersection_V0lambda23) (bruijn ##.lists.247 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[26]), 3,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0lset__intersection_V0lambda23, self)))),
      statics->up->vars[0]);
}
void _V50_V0vanity_V0list_V0lset__intersection_V0k38(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0lset__intersection_V0k38" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0lset__intersection_V0k38, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.862 0 0) ((bruijn ##.k.861 2 0) '()) (if (##inline ##vcore.null? (bruijn ##.lists.247 1 0)) ((bruijn ##.k.861 2 0) (bruijn ##.lis1.245 2 2)) ((bruijn ##.filter.116 3 48) (bruijn ##.k.861 2 0) (close _V50_V0vanity_V0list_V0lset__intersection_V0lambda22) (bruijn ##.lis1.245 2 2))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VNULL);
} else {
if(VDecodeBool(
VInlineNullP2(runtime,
        statics->vars[0]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      statics->up->vars[2]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[48]), 3,
      statics->up->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0lset__intersection_V0lambda22, self)))),
      statics->up->vars[2]);
}
}
}
void _V50_V0vanity_V0list_V0lset__intersection_V0k37(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0lset__intersection_V0k37" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0lset__intersection_V0k37, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.any.95 2 27) (close _V50_V0vanity_V0list_V0lset__intersection_V0k38) (bruijn ##.null-list?.168 2 100) (bruijn ##.lists.247 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[27]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0lset__intersection_V0k38, self)))),
      statics->up->vars[100],
      _var0);
}
static void _V50_V0vanity_V0list_V0lset__intersection_V0k36(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.delete.107 1 39) (close _V50_V0vanity_V0list_V0lset__intersection_V0k37) (bruijn ##.lis1.245 0 2) (bruijn ##.lists.246 0 3) (##intrinsic ##vcore.eq?))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[39]), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0lset__intersection_V0k37, self)))),
      self->vars[2],
      self->vars[3],
      _V40_V10vcore_Deq_Q);
}
void _V50_V0vanity_V0list_V0lset__intersection(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, ...) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0lset__intersection" };
 VRecordCall2(runtime, &dbg);
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
  // ((bruijn ##.check-arg.148 1 80) (close _V50_V0vanity_V0list_V0lset__intersection_V0k36) (##intrinsic ##vcore.procedure?) (bruijn ##.=.244 0 1) (bruijn ##.lset-intersection.80 1 12))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[80]), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0lset__intersection_V0k36, self)))),
      _V40_V10vcore_Dprocedure_Q,
      _var1,
      statics->vars[12]);
}
static void _V50_V0vanity_V0list_V0lset__union_B_V0k41(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.k.871 1 0) (bruijn ##.pair.254 1 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      statics->vars[1]);
}
void _V50_V0vanity_V0list_V0lset__union_B_V0k40(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0lset__union_B_V0k40" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0lset__union_B_V0k40, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.872 0 0) ((bruijn ##.k.871 1 0) (bruijn ##.ans.255 1 2)) (##vcore.set-cdr! (close _V50_V0vanity_V0list_V0lset__union_B_V0k41) (bruijn ##.pair.254 1 1) (bruijn ##.ans.255 1 2)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      statics->vars[2]);
} else {
    VCallFuncWithGC(runtime, (VFunc)VSetCdr2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0lset__union_B_V0k41, self)))),
      statics->vars[1],
      statics->vars[2]);
}
}
void _V50_V0vanity_V0list_V0lset__union_B_V0lambda26(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0lset__union_B_V0lambda26" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0lset__union_B_V0lambda26, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.=.250 3 1) (bruijn ##.k.873 0 0) (bruijn ##.x.257 0 1) (##inline ##vcore.car (bruijn ##.pair.254 1 1)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[1]), 3,
      _var0,
      _var1,
      VInlineCar2(runtime,
        statics->vars[1]));
}
void _V50_V0vanity_V0list_V0lset__union_B_V0lambda25(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0lset__union_B_V0lambda25" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0lset__union_B_V0lambda25, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((bruijn ##.any.95 3 27) (close _V50_V0vanity_V0list_V0lset__union_B_V0k40) (close _V50_V0vanity_V0list_V0lset__union_B_V0lambda26) (bruijn ##.ans.255 0 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[27]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0lset__union_B_V0k40, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0lset__union_B_V0lambda26, self)))),
      _var2);
}
void _V50_V0vanity_V0list_V0lset__union_B_V0lambda24(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0lset__union_B_V0lambda24" };
 VRecordCall2(runtime, &dbg);
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
  // (if (##inline ##vcore.null? (bruijn ##.lis.252 0 1)) ((bruijn ##.k.867 0 0) (bruijn ##.ans.253 0 2)) (if (##inline ##vcore.null? (bruijn ##.ans.253 0 2)) ((bruijn ##.k.867 0 0) (bruijn ##.lis.252 0 1)) (if (##inline ##vcore.eq? (bruijn ##.lis.252 0 1) (bruijn ##.ans.253 0 2)) ((bruijn ##.k.867 0 0) (bruijn ##.ans.253 0 2)) ((bruijn ##.pair-fold.121 2 53) (bruijn ##.k.867 0 0) (close _V50_V0vanity_V0list_V0lset__union_B_V0lambda25) (bruijn ##.ans.253 0 2) (bruijn ##.lis.252 0 1)))))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var1))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _var2);
} else {
if(VDecodeBool(
VInlineNullP2(runtime,
        _var2))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _var1);
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        _var1,
        _var2))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _var2);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[53]), 4,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0lset__union_B_V0lambda25, self)))),
      _var2,
      _var1);
}
}
}
}
static void _V50_V0vanity_V0list_V0lset__union_B_V0k39(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.reduce.120 1 52) (bruijn ##.k.866 0 0) (close _V50_V0vanity_V0list_V0lset__union_B_V0lambda24) '() (bruijn ##.lists.251 0 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[52]), 4,
      self->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0lset__union_B_V0lambda24, self)))),
      VNULL,
      self->vars[2]);
}
void _V50_V0vanity_V0list_V0lset__union_B(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, ...) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0lset__union_B" };
 VRecordCall2(runtime, &dbg);
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
  // ((bruijn ##.check-arg.148 1 80) (close _V50_V0vanity_V0list_V0lset__union_B_V0k39) (##intrinsic ##vcore.procedure?) (bruijn ##.=.250 0 1) (bruijn ##.lset-union!.81 1 13))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[80]), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0lset__union_B_V0k39, self)))),
      _V40_V10vcore_Dprocedure_Q,
      _var1,
      statics->vars[13]);
}
void _V50_V0vanity_V0list_V0lset__union_V0k43(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0lset__union_V0k43" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0lset__union_V0k43, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.880 0 0) ((bruijn ##.k.879 1 0) (bruijn ##.ans.263 1 2)) ((bruijn ##.k.879 1 0) (##inline ##vcore.cons (bruijn ##.elt.262 1 1) (bruijn ##.ans.263 1 2))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      statics->vars[2]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VInlineCons2(runtime,
        statics->vars[1],
        statics->vars[2]));
}
}
void _V50_V0vanity_V0list_V0lset__union_V0lambda29(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0lset__union_V0lambda29" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0lset__union_V0lambda29, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.=.258 3 1) (bruijn ##.k.881 0 0) (bruijn ##.x.264 0 1) (bruijn ##.elt.262 1 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[1]), 3,
      _var0,
      _var1,
      statics->vars[1]);
}
void _V50_V0vanity_V0list_V0lset__union_V0lambda28(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0lset__union_V0lambda28" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0lset__union_V0lambda28, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((bruijn ##.any.95 3 27) (close _V50_V0vanity_V0list_V0lset__union_V0k43) (close _V50_V0vanity_V0list_V0lset__union_V0lambda29) (bruijn ##.ans.263 0 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[27]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0lset__union_V0k43, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0lset__union_V0lambda29, self)))),
      _var2);
}
void _V50_V0vanity_V0list_V0lset__union_V0lambda27(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0lset__union_V0lambda27" };
 VRecordCall2(runtime, &dbg);
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
  // (if (##inline ##vcore.null? (bruijn ##.lis.260 0 1)) ((bruijn ##.k.875 0 0) (bruijn ##.ans.261 0 2)) (if (##inline ##vcore.null? (bruijn ##.ans.261 0 2)) ((bruijn ##.k.875 0 0) (bruijn ##.lis.260 0 1)) (if (##inline ##vcore.eq? (bruijn ##.lis.260 0 1) (bruijn ##.ans.261 0 2)) ((bruijn ##.k.875 0 0) (bruijn ##.ans.261 0 2)) ((bruijn ##.fold.126 2 58) (bruijn ##.k.875 0 0) (close _V50_V0vanity_V0list_V0lset__union_V0lambda28) (bruijn ##.ans.261 0 2) (bruijn ##.lis.260 0 1)))))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var1))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _var2);
} else {
if(VDecodeBool(
VInlineNullP2(runtime,
        _var2))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _var1);
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        _var1,
        _var2))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _var2);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[58]), 4,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0lset__union_V0lambda28, self)))),
      _var2,
      _var1);
}
}
}
}
static void _V50_V0vanity_V0list_V0lset__union_V0k42(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.reduce.120 1 52) (bruijn ##.k.874 0 0) (close _V50_V0vanity_V0list_V0lset__union_V0lambda27) '() (bruijn ##.lists.259 0 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[52]), 4,
      self->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0lset__union_V0lambda27, self)))),
      VNULL,
      self->vars[2]);
}
void _V50_V0vanity_V0list_V0lset__union(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, ...) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0lset__union" };
 VRecordCall2(runtime, &dbg);
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
  // ((bruijn ##.check-arg.148 1 80) (close _V50_V0vanity_V0list_V0lset__union_V0k42) (##intrinsic ##vcore.procedure?) (bruijn ##.=.258 0 1) (bruijn ##.lset-union.82 1 14))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[80]), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0lset__union_V0k42, self)))),
      _V40_V10vcore_Dprocedure_Q,
      _var1,
      statics->vars[14]);
}
void _V50_V0vanity_V0list_V0lset__adjoin_V0k45(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0lset__adjoin_V0k45" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0lset__adjoin_V0k45, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.884 0 0) ((bruijn ##.k.883 1 0) (bruijn ##.ans.269 1 2)) ((bruijn ##.k.883 1 0) (##inline ##vcore.cons (bruijn ##.elt.268 1 1) (bruijn ##.ans.269 1 2))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      statics->vars[2]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VInlineCons2(runtime,
        statics->vars[1],
        statics->vars[2]));
}
}
void _V50_V0vanity_V0list_V0lset__adjoin_V0lambda30(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0lset__adjoin_V0lambda30" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0lset__adjoin_V0lambda30, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((bruijn ##.member.33 3 31) (close _V50_V0vanity_V0list_V0lset__adjoin_V0k45) (bruijn ##.elt.268 0 1) (bruijn ##.ans.269 0 2) (bruijn ##.=.265 1 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[31]), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0lset__adjoin_V0k45, self)))),
      _var1,
      _var2,
      statics->vars[1]);
}
static void _V50_V0vanity_V0list_V0lset__adjoin_V0k44(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.fold.126 1 58) (bruijn ##.k.882 0 0) (close _V50_V0vanity_V0list_V0lset__adjoin_V0lambda30) (bruijn ##.lis.266 0 2) (bruijn ##.elts.267 0 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[58]), 4,
      self->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0lset__adjoin_V0lambda30, self)))),
      self->vars[2],
      self->vars[3]);
}
void _V50_V0vanity_V0list_V0lset__adjoin(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, ...) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0lset__adjoin" };
 VRecordCall2(runtime, &dbg);
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
  // ((bruijn ##.check-arg.148 1 80) (close _V50_V0vanity_V0list_V0lset__adjoin_V0k44) (##intrinsic ##vcore.procedure?) (bruijn ##.=.265 0 1) (bruijn ##.lset-adjoin.83 1 15))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[80]), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0lset__adjoin_V0k44, self)))),
      _V40_V10vcore_Dprocedure_Q,
      _var1,
      statics->vars[15]);
}
static void _V10_Dflip_D272_V0lambda32(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V10_Dflip_D272_V0lambda32" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dflip_D272_V0lambda32, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  // ((bruijn ##.proc.273 1 1) (bruijn ##.k.887 0 0) (bruijn ##.y.275 0 2) (bruijn ##.x.274 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[1]), 3,
      _var0,
      _var2,
      _var1);
}
static void _V10_Dflip_D272_V0lambda31(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V10_Dflip_D272_V0lambda31" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dflip_D272_V0lambda31, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.k.886 0 0) (close _V10_Dflip_D272_V0lambda32))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dflip_D272_V0lambda32, self)))));
}
static void _V10_Dlp_D276_V0k53(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlp_D276_V0k53" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlp_D276_V0k53, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%lset2<=.86 11 18) (bruijn ##.k.895 2 0) (bruijn ##.x.897 0 0) (bruijn ##.x.891 4 0) (bruijn ##.s1.277 6 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 18)), 4,
      statics->up->vars[0],
      _var0,
      statics->up->up->up->vars[0],
      VGetArg(statics, 6-1, 1));
}
static void _V10_Dlp_D276_V0k52(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlp_D276_V0k52" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlp_D276_V0k52, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.896 0 0) ((bruijn ##.flip.272 8 0) (close _V10_Dlp_D276_V0k53) (bruijn ##.=.270 9 1)) ((bruijn ##.k.895 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dlp_D276_V0k53, self)))),
      VGetArg(statics, 9-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dlp_D276_V0k51(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlp_D276_V0k51" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlp_D276_V0k51, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.894 1 0) ((bruijn ##.k.895 0 0) (bruijn ##.p.894 1 0)) ((bruijn ##.%lset2<=.86 9 18) (close _V10_Dlp_D276_V0k52) (bruijn ##.=.270 8 1) (bruijn ##.s1.277 4 1) (bruijn ##.x.891 2 0)))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->vars[0]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 18)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dlp_D276_V0k52, self)))),
      VGetArg(statics, 8-1, 1),
      statics->up->up->up->vars[1],
      statics->up->vars[0]);
}
}
static void _V10_Dlp_D276_V0k54(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlp_D276_V0k54" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlp_D276_V0k54, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.893 0 0) ((bruijn ##.lp.276 5 0) (bruijn ##.k.889 4 0) (bruijn ##.x.891 2 0) (##inline ##vcore.cdr (bruijn ##.rest.278 4 2))) ((bruijn ##.k.889 4 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 3,
      statics->up->up->up->vars[0],
      statics->up->vars[0],
      VInlineCdr2(runtime,
        statics->up->up->up->vars[2]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dlp_D276_V0k50(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlp_D276_V0k50" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlp_D276_V0k50, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dlp_D276_V0k51) (close _V10_Dlp_D276_V0k54))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dlp_D276_V0k51, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dlp_D276_V0k54, self)))));
}
static void _V10_Dlp_D276_V0k49(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlp_D276_V0k49" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlp_D276_V0k49, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dlp_D276_V0k50) (##inline ##vcore.eq? (bruijn ##.s1.277 2 1) (bruijn ##.x.891 0 0)))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dlp_D276_V0k50, self)), 1,
      VInlineEq2(runtime,
        statics->up->vars[1],
        _var0));
}
static void _V10_Dlp_D276_V0k48(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlp_D276_V0k48" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlp_D276_V0k48, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.890 0 0) ((bruijn ##.k.889 1 0) (bruijn ##.p.890 0 0)) ((close _V10_Dlp_D276_V0k49) (##inline ##vcore.car (bruijn ##.rest.278 1 2))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      _var0);
} else {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dlp_D276_V0k49, self)), 1,
      VInlineCar2(runtime,
        statics->vars[2]));
}
}
static void _V10_Dlp_D276_V0lambda33(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V10_Dlp_D276_V0lambda33" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlp_D276_V0lambda33, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((close _V10_Dlp_D276_V0k48) (##inline ##vcore.not (##inline ##vcore.pair? (bruijn ##.rest.278 0 2))))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dlp_D276_V0k48, self)), 1,
      VInlineNot2(runtime,
        VInlinePairP2(runtime,
        _var2)));
}
void _V50_V0vanity_V0list_V0lset_E_V0k47(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0lset_E_V0k47" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0lset_E_V0k47, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.888 0 0) ((bruijn ##.k.885 2 0) (bruijn ##.p.888 0 0)) (letrec 1 ((close _V10_Dlp_D276_V0lambda33)) ((bruijn ##.lp.276 0 0) (bruijn ##.k.885 3 0) (##inline ##vcore.car (bruijn ##.lists.271 3 2)) (##inline ##vcore.cdr (bruijn ##.lists.271 3 2)))))
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
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dlp_D276_V0lambda33, self))));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, self->vars[0]), 3,
      statics->up->up->vars[0],
      VInlineCar2(runtime,
        statics->up->up->vars[2]),
      VInlineCdr2(runtime,
        statics->up->up->vars[2]));
    }
}
}
static void _V50_V0vanity_V0list_V0lset_E_V0k46(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((close _V50_V0vanity_V0list_V0lset_E_V0k47) (##inline ##vcore.not (##inline ##vcore.pair? (bruijn ##.lists.271 1 2))))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0lset_E_V0k47, self)), 1,
      VInlineNot2(runtime,
        VInlinePairP2(runtime,
        statics->vars[2])));
}
void _V50_V0vanity_V0list_V0lset_E(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, ...) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0lset_E" };
 VRecordCall2(runtime, &dbg);
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
  // (letrec 1 ((close _V10_Dflip_D272_V0lambda31)) ((bruijn ##.check-arg.148 2 80) (close _V50_V0vanity_V0list_V0lset_E_V0k46) (##intrinsic ##vcore.procedure?) (bruijn ##.=.270 1 1) (bruijn ##.lset=.84 2 16)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dflip_D272_V0lambda31, self))));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[80]), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0lset_E_V0k46, self)))),
      _V40_V10vcore_Dprocedure_Q,
      statics->vars[1],
      statics->up->vars[16]);
    }
}
static void _V10_Dlp_D283_V0k60(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlp_D283_V0k60" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlp_D283_V0k60, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.909 1 0) ((bruijn ##.k.910 0 0) (bruijn ##.p.909 1 0)) ((bruijn ##.%lset2<=.86 8 18) (bruijn ##.k.910 0 0) (bruijn ##.=.281 7 1) (bruijn ##.s1.284 4 1) (bruijn ##.x.906 2 0)))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->vars[0]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 18)), 4,
      _var0,
      VGetArg(statics, 7-1, 1),
      statics->up->up->up->vars[1],
      statics->up->vars[0]);
}
}
static void _V10_Dlp_D283_V0k61(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlp_D283_V0k61" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlp_D283_V0k61, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.908 0 0) ((bruijn ##.lp.283 5 0) (bruijn ##.k.904 4 0) (bruijn ##.x.906 2 0) (##inline ##vcore.cdr (bruijn ##.rest.285 4 2))) ((bruijn ##.k.904 4 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 3,
      statics->up->up->up->vars[0],
      statics->up->vars[0],
      VInlineCdr2(runtime,
        statics->up->up->up->vars[2]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dlp_D283_V0k59(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlp_D283_V0k59" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlp_D283_V0k59, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dlp_D283_V0k60) (close _V10_Dlp_D283_V0k61))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dlp_D283_V0k60, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dlp_D283_V0k61, self)))));
}
static void _V10_Dlp_D283_V0k58(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlp_D283_V0k58" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlp_D283_V0k58, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dlp_D283_V0k59) (##inline ##vcore.eq? (bruijn ##.x.906 0 0) (bruijn ##.s1.284 2 1)))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dlp_D283_V0k59, self)), 1,
      VInlineEq2(runtime,
        _var0,
        statics->up->vars[1]));
}
static void _V10_Dlp_D283_V0k57(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlp_D283_V0k57" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlp_D283_V0k57, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.905 0 0) ((bruijn ##.k.904 1 0) (bruijn ##.p.905 0 0)) ((close _V10_Dlp_D283_V0k58) (##inline ##vcore.car (bruijn ##.rest.285 1 2))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      _var0);
} else {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dlp_D283_V0k58, self)), 1,
      VInlineCar2(runtime,
        statics->vars[2]));
}
}
static void _V10_Dlp_D283_V0lambda34(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V10_Dlp_D283_V0lambda34" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlp_D283_V0lambda34, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((close _V10_Dlp_D283_V0k57) (##inline ##vcore.not (##inline ##vcore.pair? (bruijn ##.rest.285 0 2))))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dlp_D283_V0k57, self)), 1,
      VInlineNot2(runtime,
        VInlinePairP2(runtime,
        _var2)));
}
void _V50_V0vanity_V0list_V0lset_L_E_V0k56(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0lset_L_E_V0k56" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0lset_L_E_V0k56, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.903 0 0) ((bruijn ##.k.902 1 0) (bruijn ##.p.903 0 0)) (letrec 1 ((close _V10_Dlp_D283_V0lambda34)) ((bruijn ##.lp.283 0 0) (bruijn ##.k.902 2 0) (##inline ##vcore.car (bruijn ##.lists.282 2 2)) (##inline ##vcore.cdr (bruijn ##.lists.282 2 2)))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      _var0);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dlp_D283_V0lambda34, self))));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, self->vars[0]), 3,
      statics->up->vars[0],
      VInlineCar2(runtime,
        statics->up->vars[2]),
      VInlineCdr2(runtime,
        statics->up->vars[2]));
    }
}
}
static void _V50_V0vanity_V0list_V0lset_L_E_V0k55(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((close _V50_V0vanity_V0list_V0lset_L_E_V0k56) (##inline ##vcore.not (##inline ##vcore.pair? (bruijn ##.lists.282 0 2))))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0lset_L_E_V0k56, self)), 1,
      VInlineNot2(runtime,
        VInlinePairP2(runtime,
        self->vars[2])));
}
void _V50_V0vanity_V0list_V0lset_L_E(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, ...) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0lset_L_E" };
 VRecordCall2(runtime, &dbg);
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
  // ((bruijn ##.check-arg.148 1 80) (close _V50_V0vanity_V0list_V0lset_L_E_V0k55) (##intrinsic ##vcore.procedure?) (bruijn ##.=.281 0 1) (bruijn ##.lset<=.85 1 17))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[80]), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0lset_L_E_V0k55, self)))),
      _V40_V10vcore_Dprocedure_Q,
      _var1,
      statics->vars[17]);
}
void _V50_V0vanity_V0list_V0_Mlset2_L_E_V0lambda35(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0_Mlset2_L_E_V0lambda35" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0_Mlset2_L_E_V0lambda35, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.member.33 3 31) (bruijn ##.k.916 0 0) (bruijn ##.x.291 0 1) (bruijn ##.lis2.290 1 3) (bruijn ##.=.288 1 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[31]), 4,
      _var0,
      _var1,
      statics->vars[3],
      statics->vars[1]);
}
void _V50_V0vanity_V0list_V0_Mlset2_L_E(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0_Mlset2_L_E" };
 VRecordCall2(runtime, &dbg);
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
  // ((bruijn ##.every.94 1 26) (bruijn ##.k.915 0 0) (close _V50_V0vanity_V0list_V0_Mlset2_L_E_V0lambda35) (bruijn ##.lis1.289 0 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[26]), 3,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0_Mlset2_L_E_V0lambda35, self)))),
      _var2);
}
void _V50_V0vanity_V0list_V0alist__delete_B_V0k63(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0alist__delete_B_V0k63" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0alist__delete_B_V0k63, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.918 1 0) (##inline ##vcore.not (bruijn ##.x.919 0 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VInlineNot2(runtime,
        _var0));
}
void _V50_V0vanity_V0list_V0alist__delete_B_V0lambda36(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0alist__delete_B_V0lambda36" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0alist__delete_B_V0lambda36, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.=.295 1 0) (close _V50_V0vanity_V0list_V0alist__delete_B_V0k63) (bruijn ##.key.292 2 1) (##inline ##vcore.car (bruijn ##.elt.296 0 1)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0alist__delete_B_V0k63, self)))),
      statics->up->vars[1],
      VInlineCar2(runtime,
        _var1));
}
void _V50_V0vanity_V0list_V0alist__delete_B_V0k62(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0alist__delete_B_V0k62" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0alist__delete_B_V0k62, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.filter!.115 2 47) (bruijn ##.k.917 1 0) (close _V50_V0vanity_V0list_V0alist__delete_B_V0lambda36) (bruijn ##.alist.293 1 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[47]), 3,
      statics->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0alist__delete_B_V0lambda36, self)))),
      statics->vars[2]);
}
void _V50_V0vanity_V0list_V0alist__delete_B(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, ...) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0alist__delete_B" };
 VRecordCall2(runtime, &dbg);
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
  // ((bruijn ##.get-optional.181 1 113) (close _V50_V0vanity_V0list_V0alist__delete_B_V0k62) (bruijn ##.maybe-=.294 0 3) (bruijn ##.equal?.3 2 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[113]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0alist__delete_B_V0k62, self)))),
      _varargs,
      statics->up->vars[1]);
}
void _V50_V0vanity_V0list_V0alist__delete_V0k65(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0alist__delete_V0k65" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0alist__delete_V0k65, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.922 1 0) (##inline ##vcore.not (bruijn ##.x.923 0 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VInlineNot2(runtime,
        _var0));
}
void _V50_V0vanity_V0list_V0alist__delete_V0lambda37(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0alist__delete_V0lambda37" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0alist__delete_V0lambda37, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.=.300 1 0) (close _V50_V0vanity_V0list_V0alist__delete_V0k65) (bruijn ##.key.297 2 1) (##inline ##vcore.car (bruijn ##.elt.301 0 1)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0alist__delete_V0k65, self)))),
      statics->up->vars[1],
      VInlineCar2(runtime,
        _var1));
}
void _V50_V0vanity_V0list_V0alist__delete_V0k64(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0alist__delete_V0k64" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0alist__delete_V0k64, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.filter.116 2 48) (bruijn ##.k.921 1 0) (close _V50_V0vanity_V0list_V0alist__delete_V0lambda37) (bruijn ##.alist.298 1 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[48]), 3,
      statics->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0alist__delete_V0lambda37, self)))),
      statics->vars[2]);
}
void _V50_V0vanity_V0list_V0alist__delete(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, ...) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0alist__delete" };
 VRecordCall2(runtime, &dbg);
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
  // ((bruijn ##.get-optional.181 1 113) (close _V50_V0vanity_V0list_V0alist__delete_V0k64) (bruijn ##.maybe-=.299 0 3) (bruijn ##.equal?.3 2 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[113]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0alist__delete_V0k64, self)))),
      _varargs,
      statics->up->vars[1]);
}
void _V50_V0vanity_V0list_V0alist__copy_V0lambda38(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0alist__copy_V0lambda38" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0alist__copy_V0lambda38, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.k.926 0 0) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.elt.303 0 1)) (##inline ##vcore.cdr (bruijn ##.elt.303 0 1))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VInlineCons2(runtime,
        VInlineCar2(runtime,
        _var1),
        VInlineCdr2(runtime,
        _var1)));
}
void _V50_V0vanity_V0list_V0alist__copy(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0alist__copy" };
 VRecordCall2(runtime, &dbg);
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
  // ((bruijn ##.map.34 2 32) (bruijn ##.k.925 0 0) (close _V50_V0vanity_V0list_V0alist__copy_V0lambda38) (bruijn ##.alist.302 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[32]), 3,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0alist__copy_V0lambda38, self)))),
      _var1);
}
void _V50_V0vanity_V0list_V0alist__cons(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0alist__cons" };
 VRecordCall2(runtime, &dbg);
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0alist__cons, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
  // ((bruijn ##.k.929 0 0) (##inline ##vcore.cons (##inline ##vcore.cons (bruijn ##.key.304 0 1) (bruijn ##.datum.305 0 2)) (bruijn ##.alist.306 0 3)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VInlineCons2(runtime,
        VInlineCons2(runtime,
        _var1,
        _var2),
        _var3));
}
static void _V10_Drecur_D310_V0k72(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Drecur_D310_V0k72" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Drecur_D310_V0k72, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (##inline ##vcore.eq? (bruijn ##.tail.313 2 0) (bruijn ##.new-tail.314 0 0)) ((bruijn ##.k.932 5 0) (bruijn ##.lis.311 5 1)) ((bruijn ##.k.932 5 0) (##inline ##vcore.cons (bruijn ##.x.312 3 0) (bruijn ##.new-tail.314 0 0))))
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[0],
        _var0))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VGetArg(statics, 5-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VInlineCons2(runtime,
        statics->up->up->vars[0],
        _var0));
}
}
static void _V10_Drecur_D310_V0k71(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Drecur_D310_V0k71" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Drecur_D310_V0k71, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.recur.310 5 0) (close _V10_Drecur_D310_V0k72) (bruijn ##.x.935 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Drecur_D310_V0k72, self)))),
      _var0);
}
static void _V10_Drecur_D310_V0k70(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Drecur_D310_V0k70" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Drecur_D310_V0k70, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.delete!.106 7 38) (close _V10_Drecur_D310_V0k71) (bruijn ##.x.312 1 0) (bruijn ##.tail.313 0 0) (bruijn ##.elt=.309 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 38)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Drecur_D310_V0k71, self)))),
      statics->vars[0],
      _var0,
      VGetArg(statics, 5-1, 0));
}
static void _V10_Drecur_D310_V0k69(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Drecur_D310_V0k69" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Drecur_D310_V0k69, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Drecur_D310_V0k70) (##inline ##vcore.cdr (bruijn ##.lis.311 2 1)))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Drecur_D310_V0k70, self)), 1,
      VInlineCdr2(runtime,
        statics->up->vars[1]));
}
static void _V10_Drecur_D310_V0k68(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Drecur_D310_V0k68" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Drecur_D310_V0k68, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.933 0 0) ((bruijn ##.k.932 1 0) (bruijn ##.lis.311 1 1)) ((close _V10_Drecur_D310_V0k69) (##inline ##vcore.car (bruijn ##.lis.311 1 1))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      statics->vars[1]);
} else {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Drecur_D310_V0k69, self)), 1,
      VInlineCar2(runtime,
        statics->vars[1]));
}
}
static void _V10_Drecur_D310_V0lambda39(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V10_Drecur_D310_V0lambda39" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Drecur_D310_V0lambda39, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.null-list?.168 4 100) (close _V10_Drecur_D310_V0k68) (bruijn ##.lis.311 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[100]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Drecur_D310_V0k68, self)))),
      _var1);
}
static void _V50_V0vanity_V0list_V0delete__duplicates_B_V0k67(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (letrec 1 ((close _V10_Drecur_D310_V0lambda39)) ((bruijn ##.recur.310 0 0) (bruijn ##.k.931 2 0) (bruijn ##.lis.307 2 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Drecur_D310_V0lambda39, self))));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, self->vars[0]), 2,
      statics->up->vars[0],
      statics->up->vars[1]);
    }
}
void _V50_V0vanity_V0list_V0delete__duplicates_B_V0k66(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0delete__duplicates_B_V0k66" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0delete__duplicates_B_V0k66, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.check-arg.148 2 80) (close _V50_V0vanity_V0list_V0delete__duplicates_B_V0k67) (##intrinsic ##vcore.procedure?) (bruijn ##.elt=.309 0 0) (bruijn ##.delete-duplicates!.91 2 23))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[80]), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0delete__duplicates_B_V0k67, self)))),
      _V40_V10vcore_Dprocedure_Q,
      _var0,
      statics->up->vars[23]);
}
void _V50_V0vanity_V0list_V0delete__duplicates_B(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, ...) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0delete__duplicates_B" };
 VRecordCall2(runtime, &dbg);
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
  // ((bruijn ##.get-optional.181 1 113) (close _V50_V0vanity_V0list_V0delete__duplicates_B_V0k66) (bruijn ##.maybe-=.308 0 2) (bruijn ##.equal?.3 2 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[113]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0delete__duplicates_B_V0k66, self)))),
      _varargs,
      statics->up->vars[1]);
}
static void _V10_Drecur_D318_V0k79(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Drecur_D318_V0k79" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Drecur_D318_V0k79, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (##inline ##vcore.eq? (bruijn ##.tail.321 2 0) (bruijn ##.new-tail.322 0 0)) ((bruijn ##.k.937 5 0) (bruijn ##.lis.319 5 1)) ((bruijn ##.k.937 5 0) (##inline ##vcore.cons (bruijn ##.x.320 3 0) (bruijn ##.new-tail.322 0 0))))
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[0],
        _var0))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VGetArg(statics, 5-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VInlineCons2(runtime,
        statics->up->up->vars[0],
        _var0));
}
}
static void _V10_Drecur_D318_V0k78(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Drecur_D318_V0k78" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Drecur_D318_V0k78, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.recur.318 5 0) (close _V10_Drecur_D318_V0k79) (bruijn ##.x.940 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Drecur_D318_V0k79, self)))),
      _var0);
}
static void _V10_Drecur_D318_V0k77(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Drecur_D318_V0k77" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Drecur_D318_V0k77, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.delete.107 7 39) (close _V10_Drecur_D318_V0k78) (bruijn ##.x.320 1 0) (bruijn ##.tail.321 0 0) (bruijn ##.elt=.317 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 39)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Drecur_D318_V0k78, self)))),
      statics->vars[0],
      _var0,
      VGetArg(statics, 5-1, 0));
}
static void _V10_Drecur_D318_V0k76(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Drecur_D318_V0k76" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Drecur_D318_V0k76, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Drecur_D318_V0k77) (##inline ##vcore.cdr (bruijn ##.lis.319 2 1)))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Drecur_D318_V0k77, self)), 1,
      VInlineCdr2(runtime,
        statics->up->vars[1]));
}
static void _V10_Drecur_D318_V0k75(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Drecur_D318_V0k75" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Drecur_D318_V0k75, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.938 0 0) ((bruijn ##.k.937 1 0) (bruijn ##.lis.319 1 1)) ((close _V10_Drecur_D318_V0k76) (##inline ##vcore.car (bruijn ##.lis.319 1 1))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      statics->vars[1]);
} else {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Drecur_D318_V0k76, self)), 1,
      VInlineCar2(runtime,
        statics->vars[1]));
}
}
static void _V10_Drecur_D318_V0lambda40(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V10_Drecur_D318_V0lambda40" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Drecur_D318_V0lambda40, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.null-list?.168 4 100) (close _V10_Drecur_D318_V0k75) (bruijn ##.lis.319 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[100]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Drecur_D318_V0k75, self)))),
      _var1);
}
static void _V50_V0vanity_V0list_V0delete__duplicates_V0k74(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (letrec 1 ((close _V10_Drecur_D318_V0lambda40)) ((bruijn ##.recur.318 0 0) (bruijn ##.k.936 2 0) (bruijn ##.lis.315 2 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Drecur_D318_V0lambda40, self))));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, self->vars[0]), 2,
      statics->up->vars[0],
      statics->up->vars[1]);
    }
}
void _V50_V0vanity_V0list_V0delete__duplicates_V0k73(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0delete__duplicates_V0k73" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0delete__duplicates_V0k73, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.check-arg.148 2 80) (close _V50_V0vanity_V0list_V0delete__duplicates_V0k74) (##intrinsic ##vcore.procedure?) (bruijn ##.elt=.317 0 0) (bruijn ##.delete-duplicates.92 2 24))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[80]), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0delete__duplicates_V0k74, self)))),
      _V40_V10vcore_Dprocedure_Q,
      _var0,
      statics->up->vars[24]);
}
void _V50_V0vanity_V0list_V0delete__duplicates(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, ...) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0delete__duplicates" };
 VRecordCall2(runtime, &dbg);
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
  // ((bruijn ##.get-optional.181 1 113) (close _V50_V0vanity_V0list_V0delete__duplicates_V0k73) (bruijn ##.maybe-=.316 0 2) (bruijn ##.equal?.3 2 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[113]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0delete__duplicates_V0k73, self)))),
      _varargs,
      statics->up->vars[1]);
}
static void _V10_Dloop_D325_V0k80(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D325_V0k80" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D325_V0k80, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.944 0 0) ((bruijn ##.k.942 1 0) (bruijn ##.i.326 1 1)) (basic-block 1 1 (##.reg.1893) ((##vcore.+ (bruijn ##.i.326 2 1) 1)) ((bruijn ##.loop.325 3 0) (bruijn ##.k.942 2 0) (bruijn ##.reg.1893 0 0) (##inline ##vcore.cdr (bruijn ##.lst.327 2 2)))))
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
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 3,
      statics->up->vars[0],
      self->vars[0],
      VInlineCdr2(runtime,
        statics->up->vars[2]));
    }
}
}
static void _V10_Dloop_D325_V0lambda41(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V10_Dloop_D325_V0lambda41" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D325_V0lambda41, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (if (##inline ##vcore.null? (bruijn ##.p.323 2 1)) ((bruijn ##.k.942 0 0) #f) ((bruijn ##.p.323 2 1) (close _V10_Dloop_D325_V0k80) (##inline ##vcore.car (bruijn ##.lst.327 0 2))))
if(VDecodeBool(
VInlineNullP2(runtime,
        statics->up->vars[1]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[1]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D325_V0k80, self)))),
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
  // (letrec 1 ((close _V10_Dloop_D325_V0lambda41)) ((bruijn ##.loop.325 0 0) (bruijn ##.k.941 1 0) 0 (bruijn ##.lst.324 1 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D325_V0lambda41, self))));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, self->vars[0]), 3,
      statics->vars[0],
      VEncodeInt(0l),
      statics->vars[2]);
    }
}
void _V50_V0vanity_V0list_V0every_V0lambda42(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0every_V0lambda42" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0every_V0lambda42, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%cars+cdrs.179 2 111) (bruijn ##.k.950 0 0) (##inline ##vcore.cons (bruijn ##.lis1.329 1 2) (bruijn ##.lists.330 1 3)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[111]), 2,
      _var0,
      VInlineCons2(runtime,
        statics->vars[2],
        statics->vars[3]));
}
static void _V10_Dlp_D333_V0lambda45(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlp_D333_V0lambda45" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlp_D333_V0lambda45, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%cars+cdrs.179 6 111) (bruijn ##.k.955 0 0) (bruijn ##.tails.335 1 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 111)), 2,
      _var0,
      statics->vars[2]);
}
static void _V10_Dlp_D333_V0k83(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlp_D333_V0k83" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlp_D333_V0k83, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.958 0 0) ((bruijn ##.lp.333 3 0) (bruijn ##.k.956 1 0) (bruijn ##.next-heads.336 1 1) (bruijn ##.next-tails.337 1 2)) ((bruijn ##.k.956 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 3,
      statics->vars[0],
      statics->vars[1],
      statics->vars[2]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dlp_D333_V0lambda46(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V10_Dlp_D333_V0lambda46" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlp_D333_V0lambda46, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (if (##inline ##vcore.pair? (bruijn ##.next-heads.336 0 1)) (##vcore.apply (close _V10_Dlp_D333_V0k83) (bruijn ##.pred.328 5 1) (bruijn ##.heads.334 1 1)) (##vcore.apply (bruijn ##.k.956 0 0) (bruijn ##.pred.328 5 1) (bruijn ##.heads.334 1 1)))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var1))) {
    VCallFuncWithGC(runtime, (VFunc)VApply2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dlp_D333_V0k83, self)))),
      VGetArg(statics, 5-1, 1),
      statics->vars[1]);
} else {
    VCallFuncWithGC(runtime, (VFunc)VApply2, 3,
      _var0,
      VGetArg(statics, 5-1, 1),
      statics->vars[1]);
}
}
static void _V10_Dlp_D333_V0lambda44(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V10_Dlp_D333_V0lambda44" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlp_D333_V0lambda44, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (##vcore.call-with-values (bruijn ##.k.954 0 0) (close _V10_Dlp_D333_V0lambda45) (close _V10_Dlp_D333_V0lambda46))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dlp_D333_V0lambda45, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dlp_D333_V0lambda46, self)))));
}
void _V50_V0vanity_V0list_V0every_V0k82(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0every_V0k82" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0every_V0k82, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.953 0 0) ((bruijn ##.k.952 1 0) (bruijn ##.p.953 0 0)) (letrec 1 ((close _V10_Dlp_D333_V0lambda44)) ((bruijn ##.lp.333 0 0) (bruijn ##.k.952 2 0) (bruijn ##.heads.331 2 1) (bruijn ##.tails.332 2 2))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      _var0);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dlp_D333_V0lambda44, self))));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, self->vars[0]), 3,
      statics->up->vars[0],
      statics->up->vars[1],
      statics->up->vars[2]);
    }
}
}
void _V50_V0vanity_V0list_V0every_V0lambda43(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0every_V0lambda43" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0every_V0lambda43, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((close _V50_V0vanity_V0list_V0every_V0k82) (##inline ##vcore.not (##inline ##vcore.pair? (bruijn ##.heads.331 0 1))))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0every_V0k82, self)), 1,
      VInlineNot2(runtime,
        VInlinePairP2(runtime,
        _var1)));
}
static void _V10_Dlp_D338_V0k86(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlp_D338_V0k86" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlp_D338_V0k86, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.963 0 0) ((bruijn ##.lp.338 3 0) (bruijn ##.k.961 2 0) (##inline ##vcore.car (bruijn ##.tail.340 2 2)) (##inline ##vcore.cdr (bruijn ##.tail.340 2 2))) ((bruijn ##.k.961 2 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 3,
      statics->up->vars[0],
      VInlineCar2(runtime,
        statics->up->vars[2]),
      VInlineCdr2(runtime,
        statics->up->vars[2]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dlp_D338_V0k85(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlp_D338_V0k85" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlp_D338_V0k85, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.962 0 0) ((bruijn ##.pred.328 4 1) (bruijn ##.k.961 1 0) (bruijn ##.head.339 1 1)) ((bruijn ##.pred.328 4 1) (close _V10_Dlp_D338_V0k86) (bruijn ##.head.339 1 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[1]), 2,
      statics->vars[0],
      statics->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[1]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dlp_D338_V0k86, self)))),
      statics->vars[1]);
}
}
static void _V10_Dlp_D338_V0lambda47(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V10_Dlp_D338_V0lambda47" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlp_D338_V0lambda47, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((bruijn ##.null-list?.168 4 100) (close _V10_Dlp_D338_V0k85) (bruijn ##.tail.340 0 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[100]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dlp_D338_V0k85, self)))),
      _var2);
}
void _V50_V0vanity_V0list_V0every_V0k84(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0every_V0k84" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0every_V0k84, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.960 0 0) ((bruijn ##.k.948 1 0) (bruijn ##.p.960 0 0)) (letrec 1 ((close _V10_Dlp_D338_V0lambda47)) ((bruijn ##.lp.338 0 0) (bruijn ##.k.948 2 0) (##inline ##vcore.car (bruijn ##.lis1.329 2 2)) (##inline ##vcore.cdr (bruijn ##.lis1.329 2 2)))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      _var0);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dlp_D338_V0lambda47, self))));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, self->vars[0]), 3,
      statics->up->vars[0],
      VInlineCar2(runtime,
        statics->up->vars[2]),
      VInlineCdr2(runtime,
        statics->up->vars[2]));
    }
}
}
static void _V50_V0vanity_V0list_V0every_V0k81(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (if (##inline ##vcore.pair? (bruijn ##.lists.330 0 3)) (##vcore.call-with-values (bruijn ##.k.948 0 0) (close _V50_V0vanity_V0list_V0every_V0lambda42) (close _V50_V0vanity_V0list_V0every_V0lambda43)) ((bruijn ##.null-list?.168 1 100) (close _V50_V0vanity_V0list_V0every_V0k84) (bruijn ##.lis1.329 0 2)))
if(VDecodeBool(
VInlinePairP2(runtime,
        self->vars[3]))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      self->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0every_V0lambda42, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0every_V0lambda43, self)))));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[100]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0every_V0k84, self)))),
      self->vars[2]);
}
}
void _V50_V0vanity_V0list_V0every(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, ...) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0every" };
 VRecordCall2(runtime, &dbg);
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
  // ((bruijn ##.check-arg.148 1 80) (close _V50_V0vanity_V0list_V0every_V0k81) (##intrinsic ##vcore.procedure?) (bruijn ##.pred.328 0 1) (bruijn ##.every.94 1 26))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[80]), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0every_V0k81, self)))),
      _V40_V10vcore_Dprocedure_Q,
      _var1,
      statics->vars[26]);
}
void _V50_V0vanity_V0list_V0any_V0lambda48(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0any_V0lambda48" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0any_V0lambda48, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%cars+cdrs.179 2 111) (bruijn ##.k.970 0 0) (##inline ##vcore.cons (bruijn ##.lis1.342 1 2) (bruijn ##.lists.343 1 3)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[111]), 2,
      _var0,
      VInlineCons2(runtime,
        statics->vars[2],
        statics->vars[3]));
}
static void _V10_Dlp_D346_V0lambda51(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlp_D346_V0lambda51" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlp_D346_V0lambda51, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%cars+cdrs.179 5 111) (bruijn ##.k.975 0 0) (bruijn ##.tails.348 1 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 111)), 2,
      _var0,
      statics->vars[2]);
}
static void _V10_Dlp_D346_V0k88(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlp_D346_V0k88" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlp_D346_V0k88, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.978 0 0) ((bruijn ##.k.976 1 0) (bruijn ##.p.978 0 0)) ((bruijn ##.lp.346 3 0) (bruijn ##.k.976 1 0) (bruijn ##.next-heads.349 1 1) (bruijn ##.next-tails.350 1 2)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      _var0);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 3,
      statics->vars[0],
      statics->vars[1],
      statics->vars[2]);
}
}
static void _V10_Dlp_D346_V0lambda52(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V10_Dlp_D346_V0lambda52" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlp_D346_V0lambda52, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (if (##inline ##vcore.pair? (bruijn ##.next-heads.349 0 1)) (##vcore.apply (close _V10_Dlp_D346_V0k88) (bruijn ##.pred.341 4 1) (bruijn ##.heads.347 1 1)) (##vcore.apply (bruijn ##.k.976 0 0) (bruijn ##.pred.341 4 1) (bruijn ##.heads.347 1 1)))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var1))) {
    VCallFuncWithGC(runtime, (VFunc)VApply2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dlp_D346_V0k88, self)))),
      statics->up->up->up->vars[1],
      statics->vars[1]);
} else {
    VCallFuncWithGC(runtime, (VFunc)VApply2, 3,
      _var0,
      statics->up->up->up->vars[1],
      statics->vars[1]);
}
}
static void _V10_Dlp_D346_V0lambda50(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V10_Dlp_D346_V0lambda50" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlp_D346_V0lambda50, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (##vcore.call-with-values (bruijn ##.k.974 0 0) (close _V10_Dlp_D346_V0lambda51) (close _V10_Dlp_D346_V0lambda52))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dlp_D346_V0lambda51, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dlp_D346_V0lambda52, self)))));
}
void _V50_V0vanity_V0list_V0any_V0lambda49(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0any_V0lambda49" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0any_V0lambda49, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (if (##inline ##vcore.pair? (bruijn ##.heads.344 0 1)) (letrec 1 ((close _V10_Dlp_D346_V0lambda50)) ((bruijn ##.lp.346 0 0) (bruijn ##.k.972 1 0) (bruijn ##.heads.344 1 1) (bruijn ##.tails.345 1 2))) ((bruijn ##.k.972 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var1))) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dlp_D346_V0lambda50, self))));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, self->vars[0]), 3,
      statics->vars[0],
      statics->vars[1],
      statics->vars[2]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dlp_D351_V0k91(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlp_D351_V0k91" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlp_D351_V0k91, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.982 0 0) ((bruijn ##.k.980 2 0) (bruijn ##.p.982 0 0)) ((bruijn ##.lp.351 3 0) (bruijn ##.k.980 2 0) (##inline ##vcore.car (bruijn ##.tail.353 2 2)) (##inline ##vcore.cdr (bruijn ##.tail.353 2 2))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      _var0);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 3,
      statics->up->vars[0],
      VInlineCar2(runtime,
        statics->up->vars[2]),
      VInlineCdr2(runtime,
        statics->up->vars[2]));
}
}
static void _V10_Dlp_D351_V0k90(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlp_D351_V0k90" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlp_D351_V0k90, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.981 0 0) ((bruijn ##.pred.341 4 1) (bruijn ##.k.980 1 0) (bruijn ##.head.352 1 1)) ((bruijn ##.pred.341 4 1) (close _V10_Dlp_D351_V0k91) (bruijn ##.head.352 1 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[1]), 2,
      statics->vars[0],
      statics->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[1]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dlp_D351_V0k91, self)))),
      statics->vars[1]);
}
}
static void _V10_Dlp_D351_V0lambda53(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V10_Dlp_D351_V0lambda53" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlp_D351_V0lambda53, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((bruijn ##.null-list?.168 4 100) (close _V10_Dlp_D351_V0k90) (bruijn ##.tail.353 0 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[100]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dlp_D351_V0k90, self)))),
      _var2);
}
void _V50_V0vanity_V0list_V0any_V0k89(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0any_V0k89" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0any_V0k89, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.not (bruijn ##.x.987 0 0)) (letrec 1 ((close _V10_Dlp_D351_V0lambda53)) ((bruijn ##.lp.351 0 0) (bruijn ##.k.968 2 0) (##inline ##vcore.car (bruijn ##.lis1.342 2 2)) (##inline ##vcore.cdr (bruijn ##.lis1.342 2 2)))) ((bruijn ##.k.968 1 0) #f))
if(VDecodeBool(
VInlineNot2(runtime,
        _var0))) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dlp_D351_V0lambda53, self))));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, self->vars[0]), 3,
      statics->up->vars[0],
      VInlineCar2(runtime,
        statics->up->vars[2]),
      VInlineCdr2(runtime,
        statics->up->vars[2]));
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V50_V0vanity_V0list_V0any_V0k87(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (if (##inline ##vcore.pair? (bruijn ##.lists.343 0 3)) (##vcore.call-with-values (bruijn ##.k.968 0 0) (close _V50_V0vanity_V0list_V0any_V0lambda48) (close _V50_V0vanity_V0list_V0any_V0lambda49)) ((bruijn ##.null-list?.168 1 100) (close _V50_V0vanity_V0list_V0any_V0k89) (bruijn ##.lis1.342 0 2)))
if(VDecodeBool(
VInlinePairP2(runtime,
        self->vars[3]))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      self->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0any_V0lambda48, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0any_V0lambda49, self)))));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[100]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0any_V0k89, self)))),
      self->vars[2]);
}
}
void _V50_V0vanity_V0list_V0any(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, ...) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0any" };
 VRecordCall2(runtime, &dbg);
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
  // ((bruijn ##.check-arg.148 1 80) (close _V50_V0vanity_V0list_V0any_V0k87) (##intrinsic ##vcore.procedure?) (bruijn ##.pred.341 0 1) (bruijn ##.any.95 1 27))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[80]), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0any_V0k87, self)))),
      _V40_V10vcore_Dprocedure_Q,
      _var1,
      statics->vars[27]);
}
void _V50_V0vanity_V0list_V0every_Q_V0k92(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0every_Q_V0k92" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0every_Q_V0k92, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.990 0 0) ((bruijn ##.every?.96 2 28) (bruijn ##.k.988 1 0) (bruijn ##.p.354 1 1) (##inline ##vcore.cdr (bruijn ##.lst.355 1 2))) ((bruijn ##.k.988 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[28]), 3,
      statics->vars[0],
      statics->vars[1],
      VInlineCdr2(runtime,
        statics->vars[2]));
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
  // (if (##inline ##vcore.null? (bruijn ##.lst.355 0 2)) ((bruijn ##.k.988 0 0) #t) ((bruijn ##.p.354 0 1) (close _V50_V0vanity_V0list_V0every_Q_V0k92) (##inline ##vcore.car (bruijn ##.lst.355 0 2))))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var2))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(true));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var1), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0every_Q_V0k92, self)))),
      VInlineCar2(runtime,
        _var2));
}
}
void _V50_V0vanity_V0list_V0any_Q_V0k93(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0any_Q_V0k93" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0any_Q_V0k93, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.995 0 0) ((bruijn ##.k.993 1 0) #t) ((bruijn ##.any?.97 2 29) (bruijn ##.k.993 1 0) (bruijn ##.p.356 1 1) (##inline ##vcore.cdr (bruijn ##.lst.357 1 2))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(true));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[29]), 3,
      statics->vars[0],
      statics->vars[1],
      VInlineCdr2(runtime,
        statics->vars[2]));
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
  // (if (##inline ##vcore.null? (bruijn ##.lst.357 0 2)) ((bruijn ##.k.993 0 0) #f) ((bruijn ##.p.356 0 1) (close _V50_V0vanity_V0list_V0any_Q_V0k93) (##inline ##vcore.car (bruijn ##.lst.357 0 2))))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var2))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var1), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0any_Q_V0k93, self)))),
      VInlineCar2(runtime,
        _var2));
}
}
void _V50_V0vanity_V0list_V0break_B_V0k94(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0break_B_V0k94" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0break_B_V0k94, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.999 1 0) (##inline ##vcore.not (bruijn ##.x.1000 0 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VInlineNot2(runtime,
        _var0));
}
void _V50_V0vanity_V0list_V0break_B_V0lambda54(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0break_B_V0lambda54" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0break_B_V0lambda54, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.pred.358 1 1) (close _V50_V0vanity_V0list_V0break_B_V0k94) (bruijn ##.x.360 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[1]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0break_B_V0k94, self)))),
      _var1);
}
void _V50_V0vanity_V0list_V0break_B(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0break_B" };
 VRecordCall2(runtime, &dbg);
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
  // ((bruijn ##.span!.100 1 32) (bruijn ##.k.998 0 0) (close _V50_V0vanity_V0list_V0break_B_V0lambda54) (bruijn ##.lis.359 0 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[32]), 3,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0break_B_V0lambda54, self)))),
      _var2);
}
void _V50_V0vanity_V0list_V0break_V0k95(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0break_V0k95" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0break_V0k95, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1002 1 0) (##inline ##vcore.not (bruijn ##.x.1003 0 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VInlineNot2(runtime,
        _var0));
}
void _V50_V0vanity_V0list_V0break_V0lambda55(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0break_V0lambda55" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0break_V0lambda55, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.pred.361 1 1) (close _V50_V0vanity_V0list_V0break_V0k95) (bruijn ##.x.363 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[1]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0break_V0k95, self)))),
      _var1);
}
void _V50_V0vanity_V0list_V0break(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0break" };
 VRecordCall2(runtime, &dbg);
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
  // ((bruijn ##.span.101 1 33) (bruijn ##.k.1001 0 0) (close _V50_V0vanity_V0list_V0break_V0lambda55) (bruijn ##.lis.362 0 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[33]), 3,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0break_V0lambda55, self)))),
      _var2);
}
void _V50_V0vanity_V0list_V0span_B_V0k99(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0span_B_V0k99" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0span_B_V0k99, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1012 1 0) (##inline ##vcore.not (bruijn ##.x.1013 0 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VInlineNot2(runtime,
        _var0));
}
void _V50_V0vanity_V0list_V0span_B_V0k98(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0span_B_V0k98" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0span_B_V0k98, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1011 1 0) ((bruijn ##.k.1012 0 0) (bruijn ##.p.1011 1 0)) ((bruijn ##.pred.364 2 1) (close _V50_V0vanity_V0list_V0span_B_V0k99) (##inline ##vcore.car (bruijn ##.lis.365 2 2))))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->vars[0]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[1]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0span_B_V0k99, self)))),
      VInlineCar2(runtime,
        statics->up->vars[2]));
}
}
static void _V10_Dlp_D367_V0k103(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.k.1006 2 0) (bruijn ##.rest.369 2 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      statics->up->vars[2]);
}
static void _V10_Dlp_D367_V0k102(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlp_D367_V0k102" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlp_D367_V0k102, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1008 0 0) ((bruijn ##.lp.367 3 0) (bruijn ##.k.1006 2 0) (bruijn ##.rest.369 2 2) (##inline ##vcore.cdr (bruijn ##.rest.369 2 2))) (##vcore.set-cdr! (close _V10_Dlp_D367_V0k103) (bruijn ##.prev.368 2 1) '()))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 3,
      statics->up->vars[0],
      statics->up->vars[2],
      VInlineCdr2(runtime,
        statics->up->vars[2]));
} else {
    VCallFuncWithGC(runtime, (VFunc)VSetCdr2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dlp_D367_V0k103, self)))),
      statics->up->vars[1],
      VNULL);
}
}
static void _V10_Dlp_D367_V0k101(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlp_D367_V0k101" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlp_D367_V0k101, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1007 0 0) ((bruijn ##.k.1006 1 0) (bruijn ##.rest.369 1 2)) ((bruijn ##.pred.364 5 1) (close _V10_Dlp_D367_V0k102) (##inline ##vcore.car (bruijn ##.rest.369 1 2))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      statics->vars[2]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 1)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dlp_D367_V0k102, self)))),
      VInlineCar2(runtime,
        statics->vars[2]));
}
}
static void _V10_Dlp_D367_V0lambda56(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V10_Dlp_D367_V0lambda56" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlp_D367_V0lambda56, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((bruijn ##.null-list?.168 5 100) (close _V10_Dlp_D367_V0k101) (bruijn ##.rest.369 0 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 100)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dlp_D367_V0k101, self)))),
      _var2);
}
void _V50_V0vanity_V0list_V0span_B_V0k104(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0span_B_V0k104" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0span_B_V0k104, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.values.4 6 2) (bruijn ##.k.1004 4 0) (bruijn ##.lis.365 4 2) (bruijn ##.suffix.366 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 2)), 3,
      statics->up->up->up->vars[0],
      statics->up->up->up->vars[2],
      _var0);
}
void _V50_V0vanity_V0list_V0span_B_V0k100(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0span_B_V0k100" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0span_B_V0k100, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1005 0 0) ((bruijn ##.values.4 4 2) (bruijn ##.k.1004 2 0) '() (bruijn ##.lis.365 2 2)) (letrec 1 ((close _V10_Dlp_D367_V0lambda56)) ((bruijn ##.lp.367 0 0) (close _V50_V0vanity_V0list_V0span_B_V0k104) (bruijn ##.lis.365 3 2) (##inline ##vcore.cdr (bruijn ##.lis.365 3 2)))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[2]), 3,
      statics->up->vars[0],
      VNULL,
      statics->up->vars[2]);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dlp_D367_V0lambda56, self))));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, self->vars[0]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0span_B_V0k104, self)))),
      statics->up->up->vars[2],
      VInlineCdr2(runtime,
        statics->up->up->vars[2]));
    }
}
}
void _V50_V0vanity_V0list_V0span_B_V0k97(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0span_B_V0k97" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0span_B_V0k97, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0list_V0span_B_V0k98) (close _V50_V0vanity_V0list_V0span_B_V0k100))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0span_B_V0k98, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0span_B_V0k100, self)))));
}
static void _V50_V0vanity_V0list_V0span_B_V0k96(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.null-list?.168 1 100) (close _V50_V0vanity_V0list_V0span_B_V0k97) (bruijn ##.lis.365 0 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[100]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0span_B_V0k97, self)))),
      self->vars[2]);
}
void _V50_V0vanity_V0list_V0span_B(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0span_B" };
 VRecordCall2(runtime, &dbg);
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
  // ((bruijn ##.check-arg.148 1 80) (close _V50_V0vanity_V0list_V0span_B_V0k96) (##intrinsic ##vcore.procedure?) (bruijn ##.pred.364 0 1) (bruijn ##.span!.100 1 32))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[80]), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0span_B_V0k96, self)))),
      _V40_V10vcore_Dprocedure_Q,
      _var1,
      statics->vars[32]);
}
static void _V10_Drecur_D373_V0lambda58(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Drecur_D373_V0lambda58" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Drecur_D373_V0lambda58, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.recur.373 5 0) (bruijn ##.k.1019 0 0) (##inline ##vcore.cdr (bruijn ##.lis.374 4 1)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 2,
      _var0,
      VInlineCdr2(runtime,
        statics->up->up->up->vars[1]));
}
static void _V10_Drecur_D373_V0lambda59(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V10_Drecur_D373_V0lambda59" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Drecur_D373_V0lambda59, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  // ((bruijn ##.values.4 8 2) (bruijn ##.k.1021 0 0) (##inline ##vcore.cons (bruijn ##.x.375 2 0) (bruijn ##.prefix.376 0 1)) (bruijn ##.suffix.377 0 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 2)), 3,
      _var0,
      VInlineCons2(runtime,
        statics->up->vars[0],
        _var1),
      _var2);
}
static void _V10_Drecur_D373_V0k108(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Drecur_D373_V0k108" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Drecur_D373_V0k108, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1018 0 0) (##vcore.call-with-values (bruijn ##.k.1016 3 0) (close _V10_Drecur_D373_V0lambda58) (close _V10_Drecur_D373_V0lambda59)) ((bruijn ##.values.4 7 2) (bruijn ##.k.1016 3 0) '() (bruijn ##.lis.374 3 1)))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->up->up->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Drecur_D373_V0lambda58, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Drecur_D373_V0lambda59, self)))));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 2)), 3,
      statics->up->up->vars[0],
      VNULL,
      statics->up->up->vars[1]);
}
}
static void _V10_Drecur_D373_V0k107(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Drecur_D373_V0k107" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Drecur_D373_V0k107, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.pred.371 4 1) (close _V10_Drecur_D373_V0k108) (bruijn ##.x.375 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[1]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Drecur_D373_V0k108, self)))),
      _var0);
}
static void _V10_Drecur_D373_V0k106(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Drecur_D373_V0k106" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Drecur_D373_V0k106, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1017 0 0) ((bruijn ##.values.4 5 2) (bruijn ##.k.1016 1 0) '() '()) ((close _V10_Drecur_D373_V0k107) (##inline ##vcore.car (bruijn ##.lis.374 1 1))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 2)), 3,
      statics->vars[0],
      VNULL,
      VNULL);
} else {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Drecur_D373_V0k107, self)), 1,
      VInlineCar2(runtime,
        statics->vars[1]));
}
}
static void _V10_Drecur_D373_V0lambda57(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V10_Drecur_D373_V0lambda57" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Drecur_D373_V0lambda57, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.null-list?.168 3 100) (close _V10_Drecur_D373_V0k106) (bruijn ##.lis.374 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[100]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Drecur_D373_V0k106, self)))),
      _var1);
}
static void _V50_V0vanity_V0list_V0span_V0k105(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (letrec 1 ((close _V10_Drecur_D373_V0lambda57)) ((bruijn ##.recur.373 0 0) (bruijn ##.k.1015 1 0) (bruijn ##.lis.372 1 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Drecur_D373_V0lambda57, self))));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, self->vars[0]), 2,
      statics->vars[0],
      statics->vars[2]);
    }
}
void _V50_V0vanity_V0list_V0span(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0span" };
 VRecordCall2(runtime, &dbg);
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
  // ((bruijn ##.check-arg.148 1 80) (close _V50_V0vanity_V0list_V0span_V0k105) (##intrinsic ##vcore.procedure?) (bruijn ##.pred.371 0 1) (bruijn ##.span.101 1 33))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[80]), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0span_V0k105, self)))),
      _V40_V10vcore_Dprocedure_Q,
      _var1,
      statics->vars[33]);
}
void _V50_V0vanity_V0list_V0take__while_B_V0k112(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0take__while_B_V0k112" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0take__while_B_V0k112, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1031 1 0) (##inline ##vcore.not (bruijn ##.x.1032 0 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VInlineNot2(runtime,
        _var0));
}
void _V50_V0vanity_V0list_V0take__while_B_V0k111(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0take__while_B_V0k111" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0take__while_B_V0k111, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1030 1 0) ((bruijn ##.k.1031 0 0) (bruijn ##.p.1030 1 0)) ((bruijn ##.pred.378 2 1) (close _V50_V0vanity_V0list_V0take__while_B_V0k112) (##inline ##vcore.car (bruijn ##.lis.379 2 2))))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->vars[0]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[1]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0take__while_B_V0k112, self)))),
      VInlineCar2(runtime,
        statics->up->vars[2]));
}
}
static void _V10_Dlp_D380_V0k114(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlp_D380_V0k114" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlp_D380_V0k114, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.1027 0 0) ((bruijn ##.lp.380 2 0) (bruijn ##.k.1025 1 0) (bruijn ##.rest.382 1 2) (##inline ##vcore.cdr (bruijn ##.rest.382 1 2))) (##vcore.set-cdr! (bruijn ##.k.1025 1 0) (bruijn ##.prev.381 1 1) '()))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 3,
      statics->vars[0],
      statics->vars[2],
      VInlineCdr2(runtime,
        statics->vars[2]));
} else {
    VCallFuncWithGC(runtime, (VFunc)VSetCdr2, 3,
      statics->vars[0],
      statics->vars[1],
      VNULL);
}
}
static void _V10_Dlp_D380_V0lambda60(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V10_Dlp_D380_V0lambda60" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlp_D380_V0lambda60, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (if (##inline ##vcore.pair? (bruijn ##.rest.382 0 2)) ((bruijn ##.pred.378 4 1) (close _V10_Dlp_D380_V0k114) (##inline ##vcore.car (bruijn ##.rest.382 0 2))) ((bruijn ##.k.1025 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var2))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[1]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dlp_D380_V0k114, self)))),
      VInlineCar2(runtime,
        _var2));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V50_V0vanity_V0list_V0take__while_B_V0k115(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.k.1023 3 0) (bruijn ##.lis.379 3 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      statics->up->up->vars[2]);
}
void _V50_V0vanity_V0list_V0take__while_B_V0k113(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0take__while_B_V0k113" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0take__while_B_V0k113, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1024 0 0) ((bruijn ##.k.1023 2 0) '()) (letrec 1 ((close _V10_Dlp_D380_V0lambda60)) ((bruijn ##.lp.380 0 0) (close _V50_V0vanity_V0list_V0take__while_B_V0k115) (bruijn ##.lis.379 3 2) (##inline ##vcore.cdr (bruijn ##.lis.379 3 2)))))
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
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dlp_D380_V0lambda60, self))));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, self->vars[0]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0take__while_B_V0k115, self)))),
      statics->up->up->vars[2],
      VInlineCdr2(runtime,
        statics->up->up->vars[2]));
    }
}
}
void _V50_V0vanity_V0list_V0take__while_B_V0k110(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0take__while_B_V0k110" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0take__while_B_V0k110, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0list_V0take__while_B_V0k111) (close _V50_V0vanity_V0list_V0take__while_B_V0k113))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0take__while_B_V0k111, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0take__while_B_V0k113, self)))));
}
static void _V50_V0vanity_V0list_V0take__while_B_V0k109(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.null-list?.168 1 100) (close _V50_V0vanity_V0list_V0take__while_B_V0k110) (bruijn ##.lis.379 0 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[100]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0take__while_B_V0k110, self)))),
      self->vars[2]);
}
void _V50_V0vanity_V0list_V0take__while_B(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0take__while_B" };
 VRecordCall2(runtime, &dbg);
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
  // ((bruijn ##.check-arg.148 1 80) (close _V50_V0vanity_V0list_V0take__while_B_V0k109) (##intrinsic ##vcore.procedure?) (bruijn ##.pred.378 0 1) (bruijn ##.take-while!.102 1 34))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[80]), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0take__while_B_V0k109, self)))),
      _V40_V10vcore_Dprocedure_Q,
      _var1,
      statics->vars[34]);
}
void _V50_V0vanity_V0list_V0split__while_V0k118(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0split__while_V0k118" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0split__while_V0k118, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1042 1 0) (##inline ##vcore.not (bruijn ##.x.1043 0 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VInlineNot2(runtime,
        _var0));
}
void _V50_V0vanity_V0list_V0split__while_V0k117(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0split__while_V0k117" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0split__while_V0k117, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1041 1 0) ((bruijn ##.k.1042 0 0) (bruijn ##.p.1041 1 0)) ((bruijn ##.pred.384 2 1) (close _V50_V0vanity_V0list_V0split__while_V0k118) (##inline ##vcore.car (bruijn ##.lst.385 2 2))))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->vars[0]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[1]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0split__while_V0k118, self)))),
      VInlineCar2(runtime,
        statics->up->vars[2]));
}
}
void _V50_V0vanity_V0list_V0split__while_V0lambda61(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0split__while_V0lambda61" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0split__while_V0lambda61, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.split-while.103 4 35) (bruijn ##.k.1036 0 0) (bruijn ##.pred.384 3 1) (##inline ##vcore.cdr (bruijn ##.lst.385 3 2)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[35]), 3,
      _var0,
      statics->up->up->vars[1],
      VInlineCdr2(runtime,
        statics->up->up->vars[2]));
}
void _V50_V0vanity_V0list_V0split__while_V0lambda62(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0split__while_V0lambda62" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0split__while_V0lambda62, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  // ((bruijn ##.values.4 5 2) (bruijn ##.k.1038 0 0) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.lst.385 3 2)) (bruijn ##.t.386 0 1)) (bruijn ##.d.387 0 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 2)), 3,
      _var0,
      VInlineCons2(runtime,
        VInlineCar2(runtime,
        statics->up->up->vars[2]),
        _var1),
      _var2);
}
void _V50_V0vanity_V0list_V0split__while_V0k119(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0split__while_V0k119" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0split__while_V0k119, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1035 0 0) ((bruijn ##.values.4 4 2) (bruijn ##.k.1034 2 0) '() (bruijn ##.lst.385 2 2)) (##vcore.call-with-values (bruijn ##.k.1034 2 0) (close _V50_V0vanity_V0list_V0split__while_V0lambda61) (close _V50_V0vanity_V0list_V0split__while_V0lambda62)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[2]), 3,
      statics->up->vars[0],
      VNULL,
      statics->up->vars[2]);
} else {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->up->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0split__while_V0lambda61, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0split__while_V0lambda62, self)))));
}
}
void _V50_V0vanity_V0list_V0split__while_V0k116(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0split__while_V0k116" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0split__while_V0k116, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0list_V0split__while_V0k117) (close _V50_V0vanity_V0list_V0split__while_V0k119))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0split__while_V0k117, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0split__while_V0k119, self)))));
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
  // ((close _V50_V0vanity_V0list_V0split__while_V0k116) (##inline ##vcore.null? (bruijn ##.lst.385 0 2)))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0split__while_V0k116, self)), 1,
      VInlineNullP2(runtime,
        _var2));
}
void _V50_V0vanity_V0list_V0drop__while_V0k122(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0drop__while_V0k122" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0drop__while_V0k122, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1049 1 0) (##inline ##vcore.not (bruijn ##.x.1050 0 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VInlineNot2(runtime,
        _var0));
}
void _V50_V0vanity_V0list_V0drop__while_V0k121(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0drop__while_V0k121" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0drop__while_V0k121, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1048 1 0) ((bruijn ##.k.1049 0 0) (bruijn ##.p.1048 1 0)) ((bruijn ##.pred.388 2 1) (close _V50_V0vanity_V0list_V0drop__while_V0k122) (##inline ##vcore.car (bruijn ##.lst.389 2 2))))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->vars[0]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[1]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0drop__while_V0k122, self)))),
      VInlineCar2(runtime,
        statics->up->vars[2]));
}
}
void _V50_V0vanity_V0list_V0drop__while_V0k123(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0drop__while_V0k123" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0drop__while_V0k123, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.1046 0 0) ((bruijn ##.k.1045 2 0) (bruijn ##.lst.389 2 2)) ((bruijn ##.drop-while.104 3 36) (bruijn ##.k.1045 2 0) (bruijn ##.pred.388 2 1) (##inline ##vcore.cdr (bruijn ##.lst.389 2 2))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      statics->up->vars[2]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[36]), 3,
      statics->up->vars[0],
      statics->up->vars[1],
      VInlineCdr2(runtime,
        statics->up->vars[2]));
}
}
void _V50_V0vanity_V0list_V0drop__while_V0k120(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0drop__while_V0k120" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0drop__while_V0k120, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0list_V0drop__while_V0k121) (close _V50_V0vanity_V0list_V0drop__while_V0k123))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0drop__while_V0k121, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0drop__while_V0k123, self)))));
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
  // ((close _V50_V0vanity_V0list_V0drop__while_V0k120) (##inline ##vcore.null? (bruijn ##.lst.389 0 2)))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0drop__while_V0k120, self)), 1,
      VInlineNullP2(runtime,
        _var2));
}
void _V50_V0vanity_V0list_V0take__while_V0k126(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0take__while_V0k126" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0take__while_V0k126, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1058 1 0) (##inline ##vcore.not (bruijn ##.x.1059 0 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VInlineNot2(runtime,
        _var0));
}
void _V50_V0vanity_V0list_V0take__while_V0k125(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0take__while_V0k125" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0take__while_V0k125, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1057 1 0) ((bruijn ##.k.1058 0 0) (bruijn ##.p.1057 1 0)) ((bruijn ##.pred.390 2 1) (close _V50_V0vanity_V0list_V0take__while_V0k126) (##inline ##vcore.car (bruijn ##.lst.391 2 2))))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->vars[0]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[1]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0take__while_V0k126, self)))),
      VInlineCar2(runtime,
        statics->up->vars[2]));
}
}
void _V50_V0vanity_V0list_V0take__while_V0k128(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0take__while_V0k128" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0take__while_V0k128, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1052 3 0) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.lst.391 3 2)) (bruijn ##.x.1055 0 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VInlineCons2(runtime,
        VInlineCar2(runtime,
        statics->up->up->vars[2]),
        _var0));
}
void _V50_V0vanity_V0list_V0take__while_V0k127(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0take__while_V0k127" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0take__while_V0k127, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1053 0 0) ((bruijn ##.k.1052 2 0) '()) ((bruijn ##.take-while.105 3 37) (close _V50_V0vanity_V0list_V0take__while_V0k128) (bruijn ##.pred.390 2 1) (##inline ##vcore.cdr (bruijn ##.lst.391 2 2))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VNULL);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[37]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0take__while_V0k128, self)))),
      statics->up->vars[1],
      VInlineCdr2(runtime,
        statics->up->vars[2]));
}
}
void _V50_V0vanity_V0list_V0take__while_V0k124(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0take__while_V0k124" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0take__while_V0k124, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0list_V0take__while_V0k125) (close _V50_V0vanity_V0list_V0take__while_V0k127))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0take__while_V0k125, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0take__while_V0k127, self)))));
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
  // ((close _V50_V0vanity_V0list_V0take__while_V0k124) (##inline ##vcore.null? (bruijn ##.lst.391 0 2)))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0take__while_V0k124, self)), 1,
      VInlineNullP2(runtime,
        _var2));
}
void _V50_V0vanity_V0list_V0delete_B_V0k130(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0delete_B_V0k130" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0delete_B_V0k130, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1062 1 0) (##inline ##vcore.not (bruijn ##.x.1063 0 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VInlineNot2(runtime,
        _var0));
}
void _V50_V0vanity_V0list_V0delete_B_V0lambda63(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0delete_B_V0lambda63" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0delete_B_V0lambda63, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.=.395 1 0) (close _V50_V0vanity_V0list_V0delete_B_V0k130) (bruijn ##.x.392 2 1) (bruijn ##.y.396 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0delete_B_V0k130, self)))),
      statics->up->vars[1],
      _var1);
}
void _V50_V0vanity_V0list_V0delete_B_V0k129(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0delete_B_V0k129" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0delete_B_V0k129, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.filter!.115 2 47) (bruijn ##.k.1061 1 0) (close _V50_V0vanity_V0list_V0delete_B_V0lambda63) (bruijn ##.lis.393 1 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[47]), 3,
      statics->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0delete_B_V0lambda63, self)))),
      statics->vars[2]);
}
void _V50_V0vanity_V0list_V0delete_B(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, ...) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0delete_B" };
 VRecordCall2(runtime, &dbg);
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
  // ((bruijn ##.get-optional.181 1 113) (close _V50_V0vanity_V0list_V0delete_B_V0k129) (bruijn ##.maybe-=.394 0 3) (bruijn ##.equal?.3 2 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[113]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0delete_B_V0k129, self)))),
      _varargs,
      statics->up->vars[1]);
}
void _V50_V0vanity_V0list_V0delete_V0k132(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0delete_V0k132" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0delete_V0k132, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1065 1 0) (##inline ##vcore.not (bruijn ##.x.1066 0 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VInlineNot2(runtime,
        _var0));
}
void _V50_V0vanity_V0list_V0delete_V0lambda64(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0delete_V0lambda64" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0delete_V0lambda64, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.=.400 1 0) (close _V50_V0vanity_V0list_V0delete_V0k132) (bruijn ##.x.397 2 1) (bruijn ##.y.401 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0delete_V0k132, self)))),
      statics->up->vars[1],
      _var1);
}
void _V50_V0vanity_V0list_V0delete_V0k131(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0delete_V0k131" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0delete_V0k131, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.filter.116 2 48) (bruijn ##.k.1064 1 0) (close _V50_V0vanity_V0list_V0delete_V0lambda64) (bruijn ##.lis.398 1 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[48]), 3,
      statics->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0delete_V0lambda64, self)))),
      statics->vars[2]);
}
void _V50_V0vanity_V0list_V0delete(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, ...) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0delete" };
 VRecordCall2(runtime, &dbg);
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
  // ((bruijn ##.get-optional.181 1 113) (close _V50_V0vanity_V0list_V0delete_V0k131) (bruijn ##.maybe-=.399 0 3) (bruijn ##.equal?.3 2 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[113]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0delete_V0k131, self)))),
      _varargs,
      statics->up->vars[1]);
}
static void _V10_Dlp_D404_V0k135(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlp_D404_V0k135" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlp_D404_V0k135, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.1070 0 0) ((bruijn ##.k.1068 2 0) (bruijn ##.list.405 2 1)) ((bruijn ##.lp.404 3 0) (bruijn ##.k.1068 2 0) (##inline ##vcore.cdr (bruijn ##.list.405 2 1))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      statics->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 2,
      statics->up->vars[0],
      VInlineCdr2(runtime,
        statics->up->vars[1]));
}
}
static void _V10_Dlp_D404_V0k134(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlp_D404_V0k134" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlp_D404_V0k134, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.not (bruijn ##.x.1073 0 0)) ((bruijn ##.pred.402 3 1) (close _V10_Dlp_D404_V0k135) (##inline ##vcore.car (bruijn ##.list.405 1 1))) ((bruijn ##.k.1068 1 0) #f))
if(VDecodeBool(
VInlineNot2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[1]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dlp_D404_V0k135, self)))),
      VInlineCar2(runtime,
        statics->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dlp_D404_V0lambda65(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V10_Dlp_D404_V0lambda65" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlp_D404_V0lambda65, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.null-list?.168 3 100) (close _V10_Dlp_D404_V0k134) (bruijn ##.list.405 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[100]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dlp_D404_V0k134, self)))),
      _var1);
}
static void _V50_V0vanity_V0list_V0find__tail_V0k133(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (letrec 1 ((close _V10_Dlp_D404_V0lambda65)) ((bruijn ##.lp.404 0 0) (bruijn ##.k.1067 1 0) (bruijn ##.list.403 1 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dlp_D404_V0lambda65, self))));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, self->vars[0]), 2,
      statics->vars[0],
      statics->vars[2]);
    }
}
void _V50_V0vanity_V0list_V0find__tail(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0find__tail" };
 VRecordCall2(runtime, &dbg);
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
  // ((bruijn ##.check-arg.148 1 80) (close _V50_V0vanity_V0list_V0find__tail_V0k133) (##intrinsic ##vcore.procedure?) (bruijn ##.pred.402 0 1) (bruijn ##.find-tail.108 1 40))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[80]), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0find__tail_V0k133, self)))),
      _V40_V10vcore_Dprocedure_Q,
      _var1,
      statics->vars[40]);
}
void _V50_V0vanity_V0list_V0find_V0k136(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0find_V0k136" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0find_V0k136, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.x.2.408 0 0) ((bruijn ##.k.1074 1 0) (##inline ##vcore.car (bruijn ##.x.2.408 0 0))) ((bruijn ##.k.1074 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0list_V0find(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0find" };
 VRecordCall2(runtime, &dbg);
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
  // ((bruijn ##.find-tail.108 1 40) (close _V50_V0vanity_V0list_V0find_V0k136) (bruijn ##.pred.406 0 1) (bruijn ##.list.407 0 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[40]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0find_V0k136, self)))),
      _var1,
      _var2);
}
static void _V10_Drecur_D412_V0lambda67(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Drecur_D412_V0lambda67" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Drecur_D412_V0lambda67, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%cars+cdrs.179 4 111) (bruijn ##.k.1078 0 0) (bruijn ##.lists.413 1 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[111]), 2,
      _var0,
      statics->vars[1]);
}
static void _V10_Drecur_D412_V0k139(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Drecur_D412_V0k139" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Drecur_D412_V0k139, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1079 2 0) (##inline ##vcore.cons (bruijn ##.x.0.416 1 0) (bruijn ##.x.1081 0 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VInlineCons2(runtime,
        statics->vars[0],
        _var0));
}
static void _V10_Drecur_D412_V0k138(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Drecur_D412_V0k138" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Drecur_D412_V0k138, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.x.0.416 0 0) ((bruijn ##.recur.412 3 0) (close _V10_Drecur_D412_V0k139) (bruijn ##.cdrs.415 1 2)) ((bruijn ##.recur.412 3 0) (bruijn ##.k.1079 1 0) (bruijn ##.cdrs.415 1 2)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Drecur_D412_V0k139, self)))),
      statics->vars[2]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 2,
      statics->vars[0],
      statics->vars[2]);
}
}
static void _V10_Drecur_D412_V0lambda68(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V10_Drecur_D412_V0lambda68" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Drecur_D412_V0lambda68, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (if (##inline ##vcore.pair? (bruijn ##.cars.414 0 1)) (##vcore.apply (close _V10_Drecur_D412_V0k138) (bruijn ##.f.409 3 1) (bruijn ##.cars.414 0 1)) ((bruijn ##.k.1079 0 0) '()))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var1))) {
    VCallFuncWithGC(runtime, (VFunc)VApply2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Drecur_D412_V0k138, self)))),
      statics->up->up->vars[1],
      _var1);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VNULL);
}
}
static void _V10_Drecur_D412_V0lambda66(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V10_Drecur_D412_V0lambda66" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Drecur_D412_V0lambda66, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (##vcore.call-with-values (bruijn ##.k.1077 0 0) (close _V10_Drecur_D412_V0lambda67) (close _V10_Drecur_D412_V0lambda68))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Drecur_D412_V0lambda67, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Drecur_D412_V0lambda68, self)))));
}
static void _V10_Drecur_D418_V0k142(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Drecur_D418_V0k142" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Drecur_D418_V0k142, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.x.1.421 0 0) ((bruijn ##.k.1083 3 0) (##inline ##vcore.cons (bruijn ##.x.1.421 0 0) (bruijn ##.tail.420 1 0))) ((bruijn ##.k.1083 3 0) (bruijn ##.tail.420 1 0)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VInlineCons2(runtime,
        _var0,
        statics->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      statics->vars[0]);
}
}
static void _V10_Drecur_D418_V0k141(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Drecur_D418_V0k141" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Drecur_D418_V0k141, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.f.409 4 1) (close _V10_Drecur_D418_V0k142) (##inline ##vcore.car (bruijn ##.lis.419 2 1)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[1]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Drecur_D418_V0k142, self)))),
      VInlineCar2(runtime,
        statics->up->vars[1]));
}
static void _V10_Drecur_D418_V0k140(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Drecur_D418_V0k140" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Drecur_D418_V0k140, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1084 0 0) ((bruijn ##.k.1083 1 0) (bruijn ##.lis.419 1 1)) ((bruijn ##.recur.418 2 0) (close _V10_Drecur_D418_V0k141) (##inline ##vcore.cdr (bruijn ##.lis.419 1 1))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      statics->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Drecur_D418_V0k141, self)))),
      VInlineCdr2(runtime,
        statics->vars[1]));
}
}
static void _V10_Drecur_D418_V0lambda69(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V10_Drecur_D418_V0lambda69" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Drecur_D418_V0lambda69, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.null-list?.168 3 100) (close _V10_Drecur_D418_V0k140) (bruijn ##.lis.419 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[100]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Drecur_D418_V0k140, self)))),
      _var1);
}
static void _V50_V0vanity_V0list_V0filter__map_V0k137(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (if (##inline ##vcore.pair? (bruijn ##.lists.411 0 3)) (letrec 1 ((close _V10_Drecur_D412_V0lambda66)) ((bruijn ##.recur.412 0 0) (bruijn ##.k.1075 1 0) (##inline ##vcore.cons (bruijn ##.lis1.410 1 2) (bruijn ##.lists.411 1 3)))) (letrec 1 ((close _V10_Drecur_D418_V0lambda69)) ((bruijn ##.recur.418 0 0) (bruijn ##.k.1075 1 0) (bruijn ##.lis1.410 1 2))))
if(VDecodeBool(
VInlinePairP2(runtime,
        self->vars[3]))) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Drecur_D412_V0lambda66, self))));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, self->vars[0]), 2,
      statics->vars[0],
      VInlineCons2(runtime,
        statics->vars[2],
        statics->vars[3]));
    }
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Drecur_D418_V0lambda69, self))));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, self->vars[0]), 2,
      statics->vars[0],
      statics->vars[2]);
    }
}
}
void _V50_V0vanity_V0list_V0filter__map(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, ...) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0filter__map" };
 VRecordCall2(runtime, &dbg);
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
  // ((bruijn ##.check-arg.148 1 80) (close _V50_V0vanity_V0list_V0filter__map_V0k137) (##intrinsic ##vcore.procedure?) (bruijn ##.f.409 0 1) (bruijn ##.filter-map.110 1 42))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[80]), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0filter__map_V0k137, self)))),
      _V40_V10vcore_Dprocedure_Q,
      _var1,
      statics->vars[42]);
}
void _V50_V0vanity_V0list_V0remove_B_V0k143(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0remove_B_V0k143" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0remove_B_V0k143, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1088 1 0) (##inline ##vcore.not (bruijn ##.x.1089 0 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VInlineNot2(runtime,
        _var0));
}
void _V50_V0vanity_V0list_V0remove_B_V0lambda70(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0remove_B_V0lambda70" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0remove_B_V0lambda70, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.pred.423 1 1) (close _V50_V0vanity_V0list_V0remove_B_V0k143) (bruijn ##.x.425 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[1]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0remove_B_V0k143, self)))),
      _var1);
}
void _V50_V0vanity_V0list_V0remove_B(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0remove_B" };
 VRecordCall2(runtime, &dbg);
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
  // ((bruijn ##.filter!.115 1 47) (bruijn ##.k.1087 0 0) (close _V50_V0vanity_V0list_V0remove_B_V0lambda70) (bruijn ##.l.424 0 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[47]), 3,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0remove_B_V0lambda70, self)))),
      _var2);
}
void _V50_V0vanity_V0list_V0remove_V0k144(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0remove_V0k144" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0remove_V0k144, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1091 1 0) (##inline ##vcore.not (bruijn ##.x.1092 0 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VInlineNot2(runtime,
        _var0));
}
void _V50_V0vanity_V0list_V0remove_V0lambda71(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0remove_V0lambda71" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0remove_V0lambda71, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.pred.426 1 1) (close _V50_V0vanity_V0list_V0remove_V0k144) (bruijn ##.x.428 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[1]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0remove_V0k144, self)))),
      _var1);
}
void _V50_V0vanity_V0list_V0remove(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0remove" };
 VRecordCall2(runtime, &dbg);
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
  // ((bruijn ##.filter.116 1 48) (bruijn ##.k.1090 0 0) (close _V50_V0vanity_V0list_V0remove_V0lambda71) (bruijn ##.l.427 0 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[48]), 3,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0remove_V0lambda71, self)))),
      _var2);
}
static void _V10_Dlp_D436_V0k148(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.scan-out.432 4 1) (bruijn ##.k.1096 1 0) (bruijn ##.in-prev.437 1 1) (bruijn ##.lis.438 1 2) (##inline ##vcore.cdr (bruijn ##.lis.438 1 2)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[1]), 4,
      statics->vars[0],
      statics->vars[1],
      statics->vars[2],
      VInlineCdr2(runtime,
        statics->vars[2]));
}
static void _V10_Dlp_D436_V0k147(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlp_D436_V0k147" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlp_D436_V0k147, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1098 0 0) ((bruijn ##.lp.436 2 0) (bruijn ##.k.1096 1 0) (bruijn ##.lis.438 1 2) (##inline ##vcore.cdr (bruijn ##.lis.438 1 2))) (##vcore.set-cdr! (close _V10_Dlp_D436_V0k148) (bruijn ##.out-prev.434 3 2) (bruijn ##.lis.438 1 2)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 3,
      statics->vars[0],
      statics->vars[2],
      VInlineCdr2(runtime,
        statics->vars[2]));
} else {
    VCallFuncWithGC(runtime, (VFunc)VSetCdr2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dlp_D436_V0k148, self)))),
      statics->up->up->vars[2],
      statics->vars[2]);
}
}
static void _V10_Dlp_D436_V0lambda73(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V10_Dlp_D436_V0lambda73" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlp_D436_V0lambda73, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (if (##inline ##vcore.pair? (bruijn ##.lis.438 0 2)) ((bruijn ##.pred.429 5 1) (close _V10_Dlp_D436_V0k147) (##inline ##vcore.car (bruijn ##.lis.438 0 2))) (##vcore.set-cdr! (bruijn ##.k.1096 0 0) (bruijn ##.out-prev.434 2 2) (bruijn ##.lis.438 0 2)))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var2))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 1)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dlp_D436_V0k147, self)))),
      VInlineCar2(runtime,
        _var2));
} else {
    VCallFuncWithGC(runtime, (VFunc)VSetCdr2, 3,
      _var0,
      statics->up->vars[2],
      _var2);
}
}
static void _V10_Dscan__in_D431_V0lambda72(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V10_Dscan__in_D431_V0lambda72" };
 VRecordCall2(runtime, &dbg);
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V10_Dscan__in_D431_V0lambda72, got ~D~N"
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
  // (letrec 1 ((close _V10_Dlp_D436_V0lambda73)) ((bruijn ##.lp.436 0 0) (bruijn ##.k.1095 1 0) (bruijn ##.in-prev.433 1 1) (bruijn ##.lis.435 1 3)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dlp_D436_V0lambda73, self))));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, self->vars[0]), 3,
      statics->vars[0],
      statics->vars[1],
      statics->vars[3]);
    }
}
static void _V10_Dlp_D442_V0k150(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.scan-in.431 4 0) (bruijn ##.k.1103 1 0) (bruijn ##.lis.444 1 2) (bruijn ##.out-prev.443 1 1) (##inline ##vcore.cdr (bruijn ##.lis.444 1 2)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 4,
      statics->vars[0],
      statics->vars[2],
      statics->vars[1],
      VInlineCdr2(runtime,
        statics->vars[2]));
}
static void _V10_Dlp_D442_V0k149(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlp_D442_V0k149" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlp_D442_V0k149, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1105 0 0) (##vcore.set-cdr! (close _V10_Dlp_D442_V0k150) (bruijn ##.in-prev.439 3 1) (bruijn ##.lis.444 1 2)) ((bruijn ##.lp.442 2 0) (bruijn ##.k.1103 1 0) (bruijn ##.lis.444 1 2) (##inline ##vcore.cdr (bruijn ##.lis.444 1 2))))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VSetCdr2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dlp_D442_V0k150, self)))),
      statics->up->up->vars[1],
      statics->vars[2]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 3,
      statics->vars[0],
      statics->vars[2],
      VInlineCdr2(runtime,
        statics->vars[2]));
}
}
static void _V10_Dlp_D442_V0lambda75(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V10_Dlp_D442_V0lambda75" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlp_D442_V0lambda75, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (if (##inline ##vcore.pair? (bruijn ##.lis.444 0 2)) ((bruijn ##.pred.429 5 1) (close _V10_Dlp_D442_V0k149) (##inline ##vcore.car (bruijn ##.lis.444 0 2))) (##vcore.set-cdr! (bruijn ##.k.1103 0 0) (bruijn ##.in-prev.439 2 1) (bruijn ##.lis.444 0 2)))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var2))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 1)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dlp_D442_V0k149, self)))),
      VInlineCar2(runtime,
        _var2));
} else {
    VCallFuncWithGC(runtime, (VFunc)VSetCdr2, 3,
      _var0,
      statics->up->vars[1],
      _var2);
}
}
static void _V10_Dscan__out_D432_V0lambda74(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V10_Dscan__out_D432_V0lambda74" };
 VRecordCall2(runtime, &dbg);
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V10_Dscan__out_D432_V0lambda74, got ~D~N"
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
  // (letrec 1 ((close _V10_Dlp_D442_V0lambda75)) ((bruijn ##.lp.442 0 0) (bruijn ##.k.1102 1 0) (bruijn ##.out-prev.440 1 2) (bruijn ##.lis.441 1 3)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dlp_D442_V0lambda75, self))));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, self->vars[0]), 3,
      statics->vars[0],
      statics->vars[2],
      statics->vars[3]);
    }
}
static void _V10_Dlp_D445_V0k153(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.values.4 8 2) (bruijn ##.k.1110 1 0) (bruijn ##.lis.430 6 2) (bruijn ##.l.447 1 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 2)), 3,
      statics->vars[0],
      VGetArg(statics, 6-1, 2),
      statics->vars[2]);
}
static void _V10_Dlp_D445_V0k152(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlp_D445_V0k152" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlp_D445_V0k152, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1112 0 0) ((bruijn ##.lp.445 2 0) (bruijn ##.k.1110 1 0) (bruijn ##.l.447 1 2) (##inline ##vcore.cdr (bruijn ##.l.447 1 2))) ((bruijn ##.scan-out.432 4 1) (close _V10_Dlp_D445_V0k153) (bruijn ##.prev-l.446 1 1) (bruijn ##.l.447 1 2) (##inline ##vcore.cdr (bruijn ##.l.447 1 2))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 3,
      statics->vars[0],
      statics->vars[2],
      VInlineCdr2(runtime,
        statics->vars[2]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[1]), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dlp_D445_V0k153, self)))),
      statics->vars[1],
      statics->vars[2],
      VInlineCdr2(runtime,
        statics->vars[2]));
}
}
static void _V10_Dlp_D445_V0lambda76(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V10_Dlp_D445_V0lambda76" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlp_D445_V0lambda76, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (if (##inline ##vcore.not (##inline ##vcore.pair? (bruijn ##.l.447 0 2))) ((bruijn ##.values.4 7 2) (bruijn ##.k.1110 0 0) (bruijn ##.lis.430 5 2) (bruijn ##.l.447 0 2)) ((bruijn ##.pred.429 5 1) (close _V10_Dlp_D445_V0k152) (##inline ##vcore.car (bruijn ##.l.447 0 2))))
if(VDecodeBool(
VInlineNot2(runtime,
        VInlinePairP2(runtime,
        _var2)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 2)), 3,
      _var0,
      VGetArg(statics, 5-1, 2),
      _var2);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 1)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dlp_D445_V0k152, self)))),
      VInlineCar2(runtime,
        _var2));
}
}
static void _V10_Dlp_D448_V0k155(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.values.4 8 2) (bruijn ##.k.1118 1 0) (bruijn ##.l.450 1 2) (bruijn ##.lis.430 6 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 2)), 3,
      statics->vars[0],
      statics->vars[2],
      VGetArg(statics, 6-1, 2));
}
static void _V10_Dlp_D448_V0k154(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlp_D448_V0k154" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlp_D448_V0k154, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1120 0 0) ((bruijn ##.scan-in.431 4 0) (close _V10_Dlp_D448_V0k155) (bruijn ##.l.450 1 2) (bruijn ##.prev-l.449 1 1) (##inline ##vcore.cdr (bruijn ##.l.450 1 2))) ((bruijn ##.lp.448 2 0) (bruijn ##.k.1118 1 0) (bruijn ##.l.450 1 2) (##inline ##vcore.cdr (bruijn ##.l.450 1 2))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dlp_D448_V0k155, self)))),
      statics->vars[2],
      statics->vars[1],
      VInlineCdr2(runtime,
        statics->vars[2]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 3,
      statics->vars[0],
      statics->vars[2],
      VInlineCdr2(runtime,
        statics->vars[2]));
}
}
static void _V10_Dlp_D448_V0lambda77(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V10_Dlp_D448_V0lambda77" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlp_D448_V0lambda77, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (if (##inline ##vcore.not (##inline ##vcore.pair? (bruijn ##.l.450 0 2))) ((bruijn ##.values.4 7 2) (bruijn ##.k.1118 0 0) (bruijn ##.l.450 0 2) (bruijn ##.lis.430 5 2)) ((bruijn ##.pred.429 5 1) (close _V10_Dlp_D448_V0k154) (##inline ##vcore.car (bruijn ##.l.450 0 2))))
if(VDecodeBool(
VInlineNot2(runtime,
        VInlinePairP2(runtime,
        _var2)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 2)), 3,
      _var0,
      _var2,
      VGetArg(statics, 5-1, 2));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 1)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dlp_D448_V0k154, self)))),
      VInlineCar2(runtime,
        _var2));
}
}
void _V50_V0vanity_V0list_V0partition_B_V0k151(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0partition_B_V0k151" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0partition_B_V0k151, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1109 0 0) (letrec 1 ((close _V10_Dlp_D445_V0lambda76)) ((bruijn ##.lp.445 0 0) (bruijn ##.k.1093 4 0) (bruijn ##.lis.430 4 2) (##inline ##vcore.cdr (bruijn ##.lis.430 4 2)))) (letrec 1 ((close _V10_Dlp_D448_V0lambda77)) ((bruijn ##.lp.448 0 0) (bruijn ##.k.1093 4 0) (bruijn ##.lis.430 4 2) (##inline ##vcore.cdr (bruijn ##.lis.430 4 2)))))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dlp_D445_V0lambda76, self))));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, self->vars[0]), 3,
      statics->up->up->up->vars[0],
      statics->up->up->up->vars[2],
      VInlineCdr2(runtime,
        statics->up->up->up->vars[2]));
    }
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dlp_D448_V0lambda77, self))));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, self->vars[0]), 3,
      statics->up->up->up->vars[0],
      statics->up->up->up->vars[2],
      VInlineCdr2(runtime,
        statics->up->up->up->vars[2]));
    }
}
}
void _V50_V0vanity_V0list_V0partition_B_V0k146(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0partition_B_V0k146" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0partition_B_V0k146, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1094 0 0) ((bruijn ##.values.4 3 2) (bruijn ##.k.1093 1 0) (bruijn ##.lis.430 1 2) (bruijn ##.lis.430 1 2)) (letrec 2 ((close _V10_Dscan__in_D431_V0lambda72) (close _V10_Dscan__out_D432_V0lambda74)) ((bruijn ##.pred.429 2 1) (close _V50_V0vanity_V0list_V0partition_B_V0k151) (##inline ##vcore.car (bruijn ##.lis.430 2 2)))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[2]), 3,
      statics->vars[0],
      statics->vars[2],
      statics->vars[2]);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dscan__in_D431_V0lambda72, self))));
    self->vars[1] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dscan__out_D432_V0lambda74, self))));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[1]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0partition_B_V0k151, self)))),
      VInlineCar2(runtime,
        statics->up->vars[2]));
    }
}
}
static void _V50_V0vanity_V0list_V0partition_B_V0k145(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.null-list?.168 1 100) (close _V50_V0vanity_V0list_V0partition_B_V0k146) (bruijn ##.lis.430 0 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[100]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0partition_B_V0k146, self)))),
      self->vars[2]);
}
void _V50_V0vanity_V0list_V0partition_B(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0partition_B" };
 VRecordCall2(runtime, &dbg);
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
  // ((bruijn ##.check-arg.148 1 80) (close _V50_V0vanity_V0list_V0partition_B_V0k145) (##intrinsic ##vcore.procedure?) (bruijn ##.pred.429 0 1) (bruijn ##.partition!.113 1 45))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[80]), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0partition_B_V0k145, self)))),
      _V40_V10vcore_Dprocedure_Q,
      _var1,
      statics->vars[45]);
}
void _V50_V0vanity_V0list_V0partition_V0lambda78(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0partition_V0lambda78" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0partition_V0lambda78, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.partition.114 2 46) (bruijn ##.k.1129 0 0) (bruijn ##.pred.451 1 1) (##inline ##vcore.cdr (bruijn ##.lst.452 1 2)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[46]), 3,
      _var0,
      statics->vars[1],
      VInlineCdr2(runtime,
        statics->vars[2]));
}
void _V50_V0vanity_V0list_V0partition_V0k156(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0partition_V0k156" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0partition_V0k156, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.1132 0 0) ((bruijn ##.values.4 4 2) (bruijn ##.k.1131 1 0) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.lst.452 2 2)) (bruijn ##.l.453 1 1)) (bruijn ##.r.454 1 2)) ((bruijn ##.values.4 4 2) (bruijn ##.k.1131 1 0) (bruijn ##.l.453 1 1) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.lst.452 2 2)) (bruijn ##.r.454 1 2))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[2]), 3,
      statics->vars[0],
      VInlineCons2(runtime,
        VInlineCar2(runtime,
        statics->up->vars[2]),
        statics->vars[1]),
      statics->vars[2]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[2]), 3,
      statics->vars[0],
      statics->vars[1],
      VInlineCons2(runtime,
        VInlineCar2(runtime,
        statics->up->vars[2]),
        statics->vars[2]));
}
}
void _V50_V0vanity_V0list_V0partition_V0lambda79(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0partition_V0lambda79" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0partition_V0lambda79, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((bruijn ##.pred.451 1 1) (close _V50_V0vanity_V0list_V0partition_V0k156) (##inline ##vcore.car (bruijn ##.lst.452 1 2)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[1]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0partition_V0k156, self)))),
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
  // (if (##inline ##vcore.null? (bruijn ##.lst.452 0 2)) ((bruijn ##.values.4 2 2) (bruijn ##.k.1127 0 0) '() '()) (##vcore.call-with-values (bruijn ##.k.1127 0 0) (close _V50_V0vanity_V0list_V0partition_V0lambda78) (close _V50_V0vanity_V0list_V0partition_V0lambda79)))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var2))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[2]), 3,
      _var0,
      VNULL,
      VNULL);
} else {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0partition_V0lambda78, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0partition_V0lambda79, self)))));
}
}
static void _V10_Dscan__in_D459_V0k160(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dscan__in_D459_V0k160" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dscan__in_D459_V0k160, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.1145 0 0) ((bruijn ##.scan-in.459 2 0) (bruijn ##.k.1143 1 0) (bruijn ##.lis.462 1 2) (##inline ##vcore.cdr (bruijn ##.lis.462 1 2))) ((bruijn ##.scan-out.460 2 1) (bruijn ##.k.1143 1 0) (bruijn ##.prev.461 1 1) (##inline ##vcore.cdr (bruijn ##.lis.462 1 2))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 3,
      statics->vars[0],
      statics->vars[2],
      VInlineCdr2(runtime,
        statics->vars[2]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[1]), 3,
      statics->vars[0],
      statics->vars[1],
      VInlineCdr2(runtime,
        statics->vars[2]));
}
}
static void _V10_Dscan__in_D459_V0lambda81(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V10_Dscan__in_D459_V0lambda81" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dscan__in_D459_V0lambda81, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (if (##inline ##vcore.pair? (bruijn ##.lis.462 0 2)) ((bruijn ##.pred.455 6 1) (close _V10_Dscan__in_D459_V0k160) (##inline ##vcore.car (bruijn ##.lis.462 0 2))) ((bruijn ##.k.1143 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var2))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 1)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dscan__in_D459_V0k160, self)))),
      VInlineCar2(runtime,
        _var2));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dlp_D465_V0k162(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.scan-in.459 4 0) (bruijn ##.k.1150 1 0) (bruijn ##.lis.466 1 1) (##inline ##vcore.cdr (bruijn ##.lis.466 1 1)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 3,
      statics->vars[0],
      statics->vars[1],
      VInlineCdr2(runtime,
        statics->vars[1]));
}
static void _V10_Dlp_D465_V0k161(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlp_D465_V0k161" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlp_D465_V0k161, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1152 0 0) (##vcore.set-cdr! (close _V10_Dlp_D465_V0k162) (bruijn ##.prev.463 3 1) (bruijn ##.lis.466 1 1)) ((bruijn ##.lp.465 2 0) (bruijn ##.k.1150 1 0) (##inline ##vcore.cdr (bruijn ##.lis.466 1 1))))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VSetCdr2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dlp_D465_V0k162, self)))),
      statics->up->up->vars[1],
      statics->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 2,
      statics->vars[0],
      VInlineCdr2(runtime,
        statics->vars[1]));
}
}
static void _V10_Dlp_D465_V0lambda83(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V10_Dlp_D465_V0lambda83" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlp_D465_V0lambda83, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (if (##inline ##vcore.pair? (bruijn ##.lis.466 0 1)) ((bruijn ##.pred.455 8 1) (close _V10_Dlp_D465_V0k161) (##inline ##vcore.car (bruijn ##.lis.466 0 1))) (##vcore.set-cdr! (bruijn ##.k.1150 0 0) (bruijn ##.prev.463 2 1) (bruijn ##.lis.466 0 1)))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var1))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 1)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dlp_D465_V0k161, self)))),
      VInlineCar2(runtime,
        _var1));
} else {
    VCallFuncWithGC(runtime, (VFunc)VSetCdr2, 3,
      _var0,
      statics->up->vars[1],
      _var1);
}
}
static void _V10_Dscan__out_D460_V0lambda82(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V10_Dscan__out_D460_V0lambda82" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dscan__out_D460_V0lambda82, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (letrec 1 ((close _V10_Dlp_D465_V0lambda83)) ((bruijn ##.lp.465 0 0) (bruijn ##.k.1149 1 0) (bruijn ##.lis.464 1 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dlp_D465_V0lambda83, self))));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, self->vars[0]), 2,
      statics->vars[0],
      statics->vars[2]);
    }
}
static void _V10_Dlp_D457_V0k163(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.k.1139 3 0) (bruijn ##.ans.458 3 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      statics->up->up->vars[1]);
}
static void _V10_Dlp_D457_V0k159(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlp_D457_V0k159" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlp_D457_V0k159, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.not (bruijn ##.x.1157 0 0)) ((bruijn ##.lp.457 3 0) (bruijn ##.k.1139 2 0) (##inline ##vcore.cdr (bruijn ##.ans.458 2 1))) (letrec 2 ((close _V10_Dscan__in_D459_V0lambda81) (close _V10_Dscan__out_D460_V0lambda82)) ((bruijn ##.scan-in.459 0 0) (close _V10_Dlp_D457_V0k163) (bruijn ##.ans.458 3 1) (##inline ##vcore.cdr (bruijn ##.ans.458 3 1)))))
if(VDecodeBool(
VInlineNot2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 2,
      statics->up->vars[0],
      VInlineCdr2(runtime,
        statics->up->vars[1]));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dscan__in_D459_V0lambda81, self))));
    self->vars[1] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dscan__out_D460_V0lambda82, self))));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, self->vars[0]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dlp_D457_V0k163, self)))),
      statics->up->up->vars[1],
      VInlineCdr2(runtime,
        statics->up->up->vars[1]));
    }
}
}
static void _V10_Dlp_D457_V0k158(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlp_D457_V0k158" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlp_D457_V0k158, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1140 0 0) ((bruijn ##.k.1139 1 0) (bruijn ##.ans.458 1 1)) ((bruijn ##.pred.455 3 1) (close _V10_Dlp_D457_V0k159) (##inline ##vcore.car (bruijn ##.ans.458 1 1))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      statics->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[1]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dlp_D457_V0k159, self)))),
      VInlineCar2(runtime,
        statics->vars[1]));
}
}
static void _V10_Dlp_D457_V0lambda80(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V10_Dlp_D457_V0lambda80" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlp_D457_V0lambda80, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.null-list?.168 3 100) (close _V10_Dlp_D457_V0k158) (bruijn ##.ans.458 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[100]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dlp_D457_V0k158, self)))),
      _var1);
}
static void _V50_V0vanity_V0list_V0filter_B_V0k157(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (letrec 1 ((close _V10_Dlp_D457_V0lambda80)) ((bruijn ##.lp.457 0 0) (bruijn ##.k.1138 1 0) (bruijn ##.lis.456 1 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dlp_D457_V0lambda80, self))));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, self->vars[0]), 2,
      statics->vars[0],
      statics->vars[2]);
    }
}
void _V50_V0vanity_V0list_V0filter_B(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0filter_B" };
 VRecordCall2(runtime, &dbg);
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
  // ((bruijn ##.check-arg.148 1 80) (close _V50_V0vanity_V0list_V0filter_B_V0k157) (##intrinsic ##vcore.procedure?) (bruijn ##.pred.455 0 1) (bruijn ##.filter!.115 1 47))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[80]), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0filter_B_V0k157, self)))),
      _V40_V10vcore_Dprocedure_Q,
      _var1,
      statics->vars[47]);
}
void _V50_V0vanity_V0list_V0filter_V0k165(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0filter_V0k165" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0filter_V0k165, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1159 2 0) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.lst.468 2 2)) (bruijn ##.x.1163 0 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VInlineCons2(runtime,
        VInlineCar2(runtime,
        statics->up->vars[2]),
        _var0));
}
void _V50_V0vanity_V0list_V0filter_V0k164(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0filter_V0k164" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0filter_V0k164, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1161 0 0) ((bruijn ##.filter.116 2 48) (close _V50_V0vanity_V0list_V0filter_V0k165) (bruijn ##.pred.467 1 1) (##inline ##vcore.cdr (bruijn ##.lst.468 1 2))) ((bruijn ##.filter.116 2 48) (bruijn ##.k.1159 1 0) (bruijn ##.pred.467 1 1) (##inline ##vcore.cdr (bruijn ##.lst.468 1 2))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[48]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0filter_V0k165, self)))),
      statics->vars[1],
      VInlineCdr2(runtime,
        statics->vars[2]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[48]), 3,
      statics->vars[0],
      statics->vars[1],
      VInlineCdr2(runtime,
        statics->vars[2]));
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
  // (if (##inline ##vcore.null? (bruijn ##.lst.468 0 2)) ((bruijn ##.k.1159 0 0) (bruijn ##.lst.468 0 2)) ((bruijn ##.pred.467 0 1) (close _V50_V0vanity_V0list_V0filter_V0k164) (##inline ##vcore.car (bruijn ##.lst.468 0 2))))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var2))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _var2);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var1), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0filter_V0k164, self)))),
      VInlineCar2(runtime,
        _var2));
}
}
static void _V10_Dloop_D471_V0k167(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D471_V0k167" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D471_V0k167, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.append!.142 5 74) (bruijn ##.k.1168 2 0) (bruijn ##.x.1170 1 0) (bruijn ##.x.1171 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 74)), 3,
      statics->up->vars[0],
      statics->vars[0],
      _var0);
}
static void _V10_Dloop_D471_V0k166(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D471_V0k166" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D471_V0k166, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.loop.471 2 0) (close _V10_Dloop_D471_V0k167) (##inline ##vcore.cdr (bruijn ##.xs.472 1 1)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D471_V0k167, self)))),
      VInlineCdr2(runtime,
        statics->vars[1]));
}
static void _V10_Dloop_D471_V0lambda84(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V10_Dloop_D471_V0lambda84" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D471_V0lambda84, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (if (##inline ##vcore.null? (bruijn ##.xs.472 0 1)) ((bruijn ##.k.1168 0 0) '()) ((bruijn ##.f.469 2 1) (close _V10_Dloop_D471_V0k166) (##inline ##vcore.car (bruijn ##.xs.472 0 1))))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var1))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VNULL);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[1]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D471_V0k166, self)))),
      VInlineCar2(runtime,
        _var1));
}
}
static void _V10_Dloop_D476_V0k169(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D476_V0k169" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D476_V0k169, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.1183 1 0) ((bruijn ##.k.1184 0 0) (bruijn ##.p.1183 1 0)) ((bruijn ##.k.1184 0 0) (##inline ##vcore.null? (bruijn ##.ys.478 2 2))))
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
static void _V10_Dloop_D476_V0k172(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D476_V0k172" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D476_V0k172, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.append!.142 7 74) (bruijn ##.k.1175 4 0) (bruijn ##.x.1177 1 0) (bruijn ##.x.1178 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 74)), 3,
      statics->up->up->up->vars[0],
      statics->vars[0],
      _var0);
}
static void _V10_Dloop_D476_V0k171(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D476_V0k171" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D476_V0k171, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.loop.476 4 0) (close _V10_Dloop_D476_V0k172) (##inline ##vcore.cdr (bruijn ##.xs.477 3 1)) (##inline ##vcore.cdr (bruijn ##.ys.478 3 2)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D476_V0k172, self)))),
      VInlineCdr2(runtime,
        statics->up->up->vars[1]),
      VInlineCdr2(runtime,
        statics->up->up->vars[2]));
}
static void _V10_Dloop_D476_V0k170(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D476_V0k170" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D476_V0k170, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1176 0 0) ((bruijn ##.k.1175 2 0) '()) ((bruijn ##.f.473 4 1) (close _V10_Dloop_D476_V0k171) (##inline ##vcore.car (bruijn ##.xs.477 2 1)) (##inline ##vcore.car (bruijn ##.ys.478 2 2))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VNULL);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[1]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D476_V0k171, self)))),
      VInlineCar2(runtime,
        statics->up->vars[1]),
      VInlineCar2(runtime,
        statics->up->vars[2]));
}
}
static void _V10_Dloop_D476_V0k168(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D476_V0k168" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D476_V0k168, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dloop_D476_V0k169) (close _V10_Dloop_D476_V0k170))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D476_V0k169, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D476_V0k170, self)))));
}
static void _V10_Dloop_D476_V0lambda85(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V10_Dloop_D476_V0lambda85" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D476_V0lambda85, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((close _V10_Dloop_D476_V0k168) (##inline ##vcore.null? (bruijn ##.xs.477 0 1)))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D476_V0k168, self)), 1,
      VInlineNullP2(runtime,
        _var1));
}
static void _V10_Dloop_D483_V0k175(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D483_V0k175" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D483_V0k175, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.1198 0 0) ((bruijn ##.k.1197 1 0) (bruijn ##.p.1198 0 0)) ((bruijn ##.k.1197 1 0) (##inline ##vcore.null? (bruijn ##.zs.486 3 3))))
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
static void _V10_Dloop_D483_V0k174(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D483_V0k174" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D483_V0k174, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1196 1 0) ((bruijn ##.k.1197 0 0) (bruijn ##.p.1196 1 0)) ((close _V10_Dloop_D483_V0k175) (##inline ##vcore.null? (bruijn ##.ys.485 2 2))))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->vars[0]);
} else {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D483_V0k175, self)), 1,
      VInlineNullP2(runtime,
        statics->up->vars[2]));
}
}
static void _V10_Dloop_D483_V0k178(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D483_V0k178" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D483_V0k178, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.append!.142 7 74) (bruijn ##.k.1186 4 0) (bruijn ##.x.1188 1 0) (bruijn ##.x.1189 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 74)), 3,
      statics->up->up->up->vars[0],
      statics->vars[0],
      _var0);
}
static void _V10_Dloop_D483_V0k177(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D483_V0k177" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D483_V0k177, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.loop.483 4 0) (close _V10_Dloop_D483_V0k178) (##inline ##vcore.cdr (bruijn ##.xs.484 3 1)) (##inline ##vcore.cdr (bruijn ##.ys.485 3 2)) (##inline ##vcore.cdr (bruijn ##.zs.486 3 3)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D483_V0k178, self)))),
      VInlineCdr2(runtime,
        statics->up->up->vars[1]),
      VInlineCdr2(runtime,
        statics->up->up->vars[2]),
      VInlineCdr2(runtime,
        statics->up->up->vars[3]));
}
static void _V10_Dloop_D483_V0k176(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D483_V0k176" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D483_V0k176, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1187 0 0) ((bruijn ##.k.1186 2 0) '()) ((bruijn ##.f.479 4 1) (close _V10_Dloop_D483_V0k177) (##inline ##vcore.car (bruijn ##.xs.484 2 1)) (##inline ##vcore.car (bruijn ##.ys.485 2 2)) (##inline ##vcore.car (bruijn ##.zs.486 2 3))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VNULL);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[1]), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D483_V0k177, self)))),
      VInlineCar2(runtime,
        statics->up->vars[1]),
      VInlineCar2(runtime,
        statics->up->vars[2]),
      VInlineCar2(runtime,
        statics->up->vars[3]));
}
}
static void _V10_Dloop_D483_V0k173(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D483_V0k173" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D483_V0k173, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dloop_D483_V0k174) (close _V10_Dloop_D483_V0k176))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D483_V0k174, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D483_V0k176, self)))));
}
static void _V10_Dloop_D483_V0lambda86(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V10_Dloop_D483_V0lambda86" };
 VRecordCall2(runtime, &dbg);
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D483_V0lambda86, got ~D~N"
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
  // ((close _V10_Dloop_D483_V0k173) (##inline ##vcore.null? (bruijn ##.xs.484 0 1)))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D483_V0k173, self)), 1,
      VInlineNullP2(runtime,
        _var1));
}
static void _V10_Dloop_D489_V0k183(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D489_V0k183" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D489_V0k183, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.append!.142 8 74) (bruijn ##.k.1200 5 0) (bruijn ##.x.1202 2 0) (bruijn ##.x.1203 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 74)), 3,
      VGetArg(statics, 5-1, 0),
      statics->up->vars[0],
      _var0);
}
static void _V10_Dloop_D489_V0k182(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D489_V0k182" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D489_V0k182, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.loop.489 5 0) (close _V10_Dloop_D489_V0k183) (bruijn ##.x.1204 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D489_V0k183, self)))),
      _var0);
}
static void _V10_Dloop_D489_V0k181(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D489_V0k181" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D489_V0k181, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.map.34 7 32) (close _V10_Dloop_D489_V0k182) (##intrinsic ##vcore.cdr) (bruijn ##.lsts.490 3 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 32)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D489_V0k182, self)))),
      _V40_V10vcore_Dcdr,
      statics->up->up->vars[1]);
}
static void _V10_Dloop_D489_V0k180(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D489_V0k180" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D489_V0k180, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.apply (close _V10_Dloop_D489_V0k181) (bruijn ##.f.487 4 1) (bruijn ##.x.1205 0 0))
    VCallFuncWithGC(runtime, (VFunc)VApply2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D489_V0k181, self)))),
      statics->up->up->up->vars[1],
      _var0);
}
static void _V10_Dloop_D489_V0k179(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D489_V0k179" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D489_V0k179, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1201 0 0) ((bruijn ##.k.1200 1 0) '()) ((bruijn ##.map.34 5 32) (close _V10_Dloop_D489_V0k180) (##intrinsic ##vcore.car) (bruijn ##.lsts.490 1 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VNULL);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 32)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D489_V0k180, self)))),
      _V40_V10vcore_Dcar,
      statics->vars[1]);
}
}
static void _V10_Dloop_D489_V0lambda87(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V10_Dloop_D489_V0lambda87" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D489_V0lambda87, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.any?.97 3 29) (close _V10_Dloop_D489_V0k179) (##intrinsic ##vcore.null?) (bruijn ##.lsts.490 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[29]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D489_V0k179, self)))),
      _V40_V10vcore_Dnull_Q,
      _var1);
}
__attribute__((used)) static void _V20CaseError__V50_V0vanity_V0list_V0append__map_B(VRuntime * runtime, VEnv * statics, int argc, ...) {
 // ("_V50_V0vanity_V0list_V0append__map_B" #t (3 (letrec 1 ((close _V10_Dloop_D471_V0lambda84)) ((bruijn ##.loop.471 0 0) (bruijn ##.k.1167 1 0) (bruijn ##.xs.470 1 2)))) (4 (letrec 1 ((close _V10_Dloop_D476_V0lambda85)) ((bruijn ##.loop.476 0 0) (bruijn ##.k.1174 1 0) (bruijn ##.xs.474 1 2) (bruijn ##.ys.475 1 3)))) (5 (letrec 1 ((close _V10_Dloop_D483_V0lambda86)) ((bruijn ##.loop.483 0 0) (bruijn ##.k.1185 1 0) (bruijn ##.xs.480 1 2) (bruijn ##.ys.481 1 3) (bruijn ##.zs.482 1 4)))) (2 + (letrec 1 ((close _V10_Dloop_D489_V0lambda87)) ((bruijn ##.loop.489 0 0) (bruijn ##.k.1199 1 0) (bruijn ##.lsts.488 1 2)))))
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
  // (letrec 1 ((close _V10_Dloop_D471_V0lambda84)) ((bruijn ##.loop.471 0 0) (bruijn ##.k.1167 1 0) (bruijn ##.xs.470 1 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D471_V0lambda84, self))));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, self->vars[0]), 2,
      statics->vars[0],
      statics->vars[2]);
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
  // (letrec 1 ((close _V10_Dloop_D476_V0lambda85)) ((bruijn ##.loop.476 0 0) (bruijn ##.k.1174 1 0) (bruijn ##.xs.474 1 2) (bruijn ##.ys.475 1 3)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D476_V0lambda85, self))));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, self->vars[0]), 3,
      statics->vars[0],
      statics->vars[2],
      statics->vars[3]);
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
  // (letrec 1 ((close _V10_Dloop_D483_V0lambda86)) ((bruijn ##.loop.483 0 0) (bruijn ##.k.1185 1 0) (bruijn ##.xs.480 1 2) (bruijn ##.ys.481 1 3) (bruijn ##.zs.482 1 4)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D483_V0lambda86, self))));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, self->vars[0]), 4,
      statics->vars[0],
      statics->vars[2],
      statics->vars[3],
      statics->vars[4]);
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
  // (letrec 1 ((close _V10_Dloop_D489_V0lambda87)) ((bruijn ##.loop.489 0 0) (bruijn ##.k.1199 1 0) (bruijn ##.lsts.488 1 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D489_V0lambda87, self))));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, self->vars[0]), 2,
      statics->vars[0],
      statics->vars[2]);
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
static void _V10_Dloop_D493_V0k185(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D493_V0k185" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D493_V0k185, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.append.25 6 23) (bruijn ##.k.1207 2 0) (bruijn ##.x.1209 1 0) (bruijn ##.x.1210 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 23)), 3,
      statics->up->vars[0],
      statics->vars[0],
      _var0);
}
static void _V10_Dloop_D493_V0k184(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D493_V0k184" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D493_V0k184, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.loop.493 2 0) (close _V10_Dloop_D493_V0k185) (##inline ##vcore.cdr (bruijn ##.xs.494 1 1)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D493_V0k185, self)))),
      VInlineCdr2(runtime,
        statics->vars[1]));
}
static void _V10_Dloop_D493_V0lambda88(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V10_Dloop_D493_V0lambda88" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D493_V0lambda88, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (if (##inline ##vcore.null? (bruijn ##.xs.494 0 1)) ((bruijn ##.k.1207 0 0) '()) ((bruijn ##.f.491 2 1) (close _V10_Dloop_D493_V0k184) (##inline ##vcore.car (bruijn ##.xs.494 0 1))))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var1))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VNULL);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[1]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D493_V0k184, self)))),
      VInlineCar2(runtime,
        _var1));
}
}
static void _V10_Dloop_D498_V0k187(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D498_V0k187" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D498_V0k187, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.1222 1 0) ((bruijn ##.k.1223 0 0) (bruijn ##.p.1222 1 0)) ((bruijn ##.k.1223 0 0) (##inline ##vcore.null? (bruijn ##.ys.500 2 2))))
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
static void _V10_Dloop_D498_V0k190(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D498_V0k190" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D498_V0k190, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.append.25 8 23) (bruijn ##.k.1214 4 0) (bruijn ##.x.1216 1 0) (bruijn ##.x.1217 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 23)), 3,
      statics->up->up->up->vars[0],
      statics->vars[0],
      _var0);
}
static void _V10_Dloop_D498_V0k189(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D498_V0k189" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D498_V0k189, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.loop.498 4 0) (close _V10_Dloop_D498_V0k190) (##inline ##vcore.cdr (bruijn ##.xs.499 3 1)) (##inline ##vcore.cdr (bruijn ##.ys.500 3 2)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D498_V0k190, self)))),
      VInlineCdr2(runtime,
        statics->up->up->vars[1]),
      VInlineCdr2(runtime,
        statics->up->up->vars[2]));
}
static void _V10_Dloop_D498_V0k188(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D498_V0k188" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D498_V0k188, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1215 0 0) ((bruijn ##.k.1214 2 0) '()) ((bruijn ##.f.495 4 1) (close _V10_Dloop_D498_V0k189) (##inline ##vcore.car (bruijn ##.xs.499 2 1)) (##inline ##vcore.car (bruijn ##.ys.500 2 2))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VNULL);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[1]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D498_V0k189, self)))),
      VInlineCar2(runtime,
        statics->up->vars[1]),
      VInlineCar2(runtime,
        statics->up->vars[2]));
}
}
static void _V10_Dloop_D498_V0k186(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D498_V0k186" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D498_V0k186, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dloop_D498_V0k187) (close _V10_Dloop_D498_V0k188))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D498_V0k187, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D498_V0k188, self)))));
}
static void _V10_Dloop_D498_V0lambda89(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V10_Dloop_D498_V0lambda89" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D498_V0lambda89, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((close _V10_Dloop_D498_V0k186) (##inline ##vcore.null? (bruijn ##.xs.499 0 1)))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D498_V0k186, self)), 1,
      VInlineNullP2(runtime,
        _var1));
}
static void _V10_Dloop_D505_V0k193(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D505_V0k193" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D505_V0k193, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.1237 0 0) ((bruijn ##.k.1236 1 0) (bruijn ##.p.1237 0 0)) ((bruijn ##.k.1236 1 0) (##inline ##vcore.null? (bruijn ##.zs.508 3 3))))
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
static void _V10_Dloop_D505_V0k192(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D505_V0k192" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D505_V0k192, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1235 1 0) ((bruijn ##.k.1236 0 0) (bruijn ##.p.1235 1 0)) ((close _V10_Dloop_D505_V0k193) (##inline ##vcore.null? (bruijn ##.ys.507 2 2))))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->vars[0]);
} else {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D505_V0k193, self)), 1,
      VInlineNullP2(runtime,
        statics->up->vars[2]));
}
}
static void _V10_Dloop_D505_V0k196(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D505_V0k196" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D505_V0k196, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.append.25 8 23) (bruijn ##.k.1225 4 0) (bruijn ##.x.1227 1 0) (bruijn ##.x.1228 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 23)), 3,
      statics->up->up->up->vars[0],
      statics->vars[0],
      _var0);
}
static void _V10_Dloop_D505_V0k195(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D505_V0k195" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D505_V0k195, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.loop.505 4 0) (close _V10_Dloop_D505_V0k196) (##inline ##vcore.cdr (bruijn ##.xs.506 3 1)) (##inline ##vcore.cdr (bruijn ##.ys.507 3 2)) (##inline ##vcore.cdr (bruijn ##.zs.508 3 3)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D505_V0k196, self)))),
      VInlineCdr2(runtime,
        statics->up->up->vars[1]),
      VInlineCdr2(runtime,
        statics->up->up->vars[2]),
      VInlineCdr2(runtime,
        statics->up->up->vars[3]));
}
static void _V10_Dloop_D505_V0k194(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D505_V0k194" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D505_V0k194, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1226 0 0) ((bruijn ##.k.1225 2 0) '()) ((bruijn ##.f.501 4 1) (close _V10_Dloop_D505_V0k195) (##inline ##vcore.car (bruijn ##.xs.506 2 1)) (##inline ##vcore.car (bruijn ##.ys.507 2 2)) (##inline ##vcore.car (bruijn ##.zs.508 2 3))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VNULL);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[1]), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D505_V0k195, self)))),
      VInlineCar2(runtime,
        statics->up->vars[1]),
      VInlineCar2(runtime,
        statics->up->vars[2]),
      VInlineCar2(runtime,
        statics->up->vars[3]));
}
}
static void _V10_Dloop_D505_V0k191(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D505_V0k191" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D505_V0k191, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dloop_D505_V0k192) (close _V10_Dloop_D505_V0k194))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D505_V0k192, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D505_V0k194, self)))));
}
static void _V10_Dloop_D505_V0lambda90(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V10_Dloop_D505_V0lambda90" };
 VRecordCall2(runtime, &dbg);
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D505_V0lambda90, got ~D~N"
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
  // ((close _V10_Dloop_D505_V0k191) (##inline ##vcore.null? (bruijn ##.xs.506 0 1)))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D505_V0k191, self)), 1,
      VInlineNullP2(runtime,
        _var1));
}
static void _V10_Dloop_D511_V0k201(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D511_V0k201" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D511_V0k201, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.append.25 9 23) (bruijn ##.k.1239 5 0) (bruijn ##.x.1241 2 0) (bruijn ##.x.1242 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 23)), 3,
      VGetArg(statics, 5-1, 0),
      statics->up->vars[0],
      _var0);
}
static void _V10_Dloop_D511_V0k200(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D511_V0k200" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D511_V0k200, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.loop.511 5 0) (close _V10_Dloop_D511_V0k201) (bruijn ##.x.1243 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D511_V0k201, self)))),
      _var0);
}
static void _V10_Dloop_D511_V0k199(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D511_V0k199" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D511_V0k199, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.map.34 7 32) (close _V10_Dloop_D511_V0k200) (##intrinsic ##vcore.cdr) (bruijn ##.lsts.512 3 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 32)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D511_V0k200, self)))),
      _V40_V10vcore_Dcdr,
      statics->up->up->vars[1]);
}
static void _V10_Dloop_D511_V0k198(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D511_V0k198" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D511_V0k198, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.apply (close _V10_Dloop_D511_V0k199) (bruijn ##.f.509 4 1) (bruijn ##.x.1244 0 0))
    VCallFuncWithGC(runtime, (VFunc)VApply2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D511_V0k199, self)))),
      statics->up->up->up->vars[1],
      _var0);
}
static void _V10_Dloop_D511_V0k197(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D511_V0k197" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D511_V0k197, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1240 0 0) ((bruijn ##.k.1239 1 0) '()) ((bruijn ##.map.34 5 32) (close _V10_Dloop_D511_V0k198) (##intrinsic ##vcore.car) (bruijn ##.lsts.512 1 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VNULL);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 32)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D511_V0k198, self)))),
      _V40_V10vcore_Dcar,
      statics->vars[1]);
}
}
static void _V10_Dloop_D511_V0lambda91(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V10_Dloop_D511_V0lambda91" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D511_V0lambda91, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.any?.97 3 29) (close _V10_Dloop_D511_V0k197) (##intrinsic ##vcore.null?) (bruijn ##.lsts.512 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[29]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D511_V0k197, self)))),
      _V40_V10vcore_Dnull_Q,
      _var1);
}
__attribute__((used)) static void _V20CaseError__V50_V0vanity_V0list_V0append__map(VRuntime * runtime, VEnv * statics, int argc, ...) {
 // ("_V50_V0vanity_V0list_V0append__map" #t (3 (letrec 1 ((close _V10_Dloop_D493_V0lambda88)) ((bruijn ##.loop.493 0 0) (bruijn ##.k.1206 1 0) (bruijn ##.xs.492 1 2)))) (4 (letrec 1 ((close _V10_Dloop_D498_V0lambda89)) ((bruijn ##.loop.498 0 0) (bruijn ##.k.1213 1 0) (bruijn ##.xs.496 1 2) (bruijn ##.ys.497 1 3)))) (5 (letrec 1 ((close _V10_Dloop_D505_V0lambda90)) ((bruijn ##.loop.505 0 0) (bruijn ##.k.1224 1 0) (bruijn ##.xs.502 1 2) (bruijn ##.ys.503 1 3) (bruijn ##.zs.504 1 4)))) (2 + (letrec 1 ((close _V10_Dloop_D511_V0lambda91)) ((bruijn ##.loop.511 0 0) (bruijn ##.k.1238 1 0) (bruijn ##.lsts.510 1 2)))))
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
  // (letrec 1 ((close _V10_Dloop_D493_V0lambda88)) ((bruijn ##.loop.493 0 0) (bruijn ##.k.1206 1 0) (bruijn ##.xs.492 1 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D493_V0lambda88, self))));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, self->vars[0]), 2,
      statics->vars[0],
      statics->vars[2]);
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
  // (letrec 1 ((close _V10_Dloop_D498_V0lambda89)) ((bruijn ##.loop.498 0 0) (bruijn ##.k.1213 1 0) (bruijn ##.xs.496 1 2) (bruijn ##.ys.497 1 3)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D498_V0lambda89, self))));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, self->vars[0]), 3,
      statics->vars[0],
      statics->vars[2],
      statics->vars[3]);
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
  // (letrec 1 ((close _V10_Dloop_D505_V0lambda90)) ((bruijn ##.loop.505 0 0) (bruijn ##.k.1224 1 0) (bruijn ##.xs.502 1 2) (bruijn ##.ys.503 1 3) (bruijn ##.zs.504 1 4)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D505_V0lambda90, self))));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, self->vars[0]), 4,
      statics->vars[0],
      statics->vars[2],
      statics->vars[3],
      statics->vars[4]);
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
  // (letrec 1 ((close _V10_Dloop_D511_V0lambda91)) ((bruijn ##.loop.511 0 0) (bruijn ##.k.1238 1 0) (bruijn ##.lsts.510 1 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D511_V0lambda91, self))));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, self->vars[0]), 2,
      statics->vars[0],
      statics->vars[2]);
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
static void _V10_Drecur_D516_V0k204(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Drecur_D516_V0k204" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Drecur_D516_V0k204, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.f.513 4 1) (bruijn ##.k.1247 1 0) (bruijn ##.head.517 1 1) (bruijn ##.x.1249 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[1]), 3,
      statics->vars[0],
      statics->vars[1],
      _var0);
}
static void _V10_Drecur_D516_V0lambda92(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V10_Drecur_D516_V0lambda92" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Drecur_D516_V0lambda92, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (if (##inline ##vcore.pair? (bruijn ##.lis.518 0 2)) ((bruijn ##.recur.516 1 0) (close _V10_Drecur_D516_V0k204) (##inline ##vcore.car (bruijn ##.lis.518 0 2)) (##inline ##vcore.cdr (bruijn ##.lis.518 0 2))) ((bruijn ##.k.1247 0 0) (bruijn ##.head.517 0 1)))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var2))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Drecur_D516_V0k204, self)))),
      VInlineCar2(runtime,
        _var2),
      VInlineCdr2(runtime,
        _var2));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _var1);
}
}
void _V50_V0vanity_V0list_V0reduce__right_V0k203(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0reduce__right_V0k203" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0reduce__right_V0k203, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1246 0 0) ((bruijn ##.k.1245 1 0) (bruijn ##.ridentity.514 1 2)) (letrec 1 ((close _V10_Drecur_D516_V0lambda92)) ((bruijn ##.recur.516 0 0) (bruijn ##.k.1245 2 0) (##inline ##vcore.car (bruijn ##.lis.515 2 3)) (##inline ##vcore.cdr (bruijn ##.lis.515 2 3)))))
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
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Drecur_D516_V0lambda92, self))));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, self->vars[0]), 3,
      statics->up->vars[0],
      VInlineCar2(runtime,
        statics->up->vars[3]),
      VInlineCdr2(runtime,
        statics->up->vars[3]));
    }
}
}
static void _V50_V0vanity_V0list_V0reduce__right_V0k202(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.null-list?.168 1 100) (close _V50_V0vanity_V0list_V0reduce__right_V0k203) (bruijn ##.lis.515 0 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[100]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0reduce__right_V0k203, self)))),
      self->vars[3]);
}
void _V50_V0vanity_V0list_V0reduce__right(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0reduce__right" };
 VRecordCall2(runtime, &dbg);
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
  // ((bruijn ##.check-arg.148 1 80) (close _V50_V0vanity_V0list_V0reduce__right_V0k202) (##intrinsic ##vcore.procedure?) (bruijn ##.f.513 0 1) (bruijn ##.reduce-right.119 1 51))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[80]), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0reduce__right_V0k202, self)))),
      _V40_V10vcore_Dprocedure_Q,
      _var1,
      statics->vars[51]);
}
void _V50_V0vanity_V0list_V0reduce_V0k206(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0reduce_V0k206" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0reduce_V0k206, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.1255 0 0) ((bruijn ##.k.1254 1 0) (bruijn ##.ridentity.520 1 2)) ((bruijn ##.fold.126 2 58) (bruijn ##.k.1254 1 0) (bruijn ##.f.519 1 1) (##inline ##vcore.car (bruijn ##.lis.521 1 3)) (##inline ##vcore.cdr (bruijn ##.lis.521 1 3))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      statics->vars[2]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[58]), 4,
      statics->vars[0],
      statics->vars[1],
      VInlineCar2(runtime,
        statics->vars[3]),
      VInlineCdr2(runtime,
        statics->vars[3]));
}
}
static void _V50_V0vanity_V0list_V0reduce_V0k205(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.null-list?.168 1 100) (close _V50_V0vanity_V0list_V0reduce_V0k206) (bruijn ##.lis.521 0 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[100]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0reduce_V0k206, self)))),
      self->vars[3]);
}
void _V50_V0vanity_V0list_V0reduce(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0reduce" };
 VRecordCall2(runtime, &dbg);
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
  // ((bruijn ##.check-arg.148 1 80) (close _V50_V0vanity_V0list_V0reduce_V0k205) (##intrinsic ##vcore.procedure?) (bruijn ##.f.519 0 1) (bruijn ##.reduce.120 1 52))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[80]), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0reduce_V0k205, self)))),
      _V40_V10vcore_Dprocedure_Q,
      _var1,
      statics->vars[52]);
}
static void _V10_Dlp_D526_V0k211(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlp_D526_V0k211" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlp_D526_V0k211, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.lp.526 5 0) (bruijn ##.k.1260 4 0) (bruijn ##.tails.529 3 0) (bruijn ##.x.1262 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 3,
      statics->up->up->up->vars[0],
      statics->up->up->vars[0],
      _var0);
}
static void _V10_Dlp_D526_V0k210(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlp_D526_V0k210" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlp_D526_V0k210, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.apply (close _V10_Dlp_D526_V0k211) (bruijn ##.f.522 5 1) (bruijn ##.x.1263 0 0))
    VCallFuncWithGC(runtime, (VFunc)VApply2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dlp_D526_V0k211, self)))),
      VGetArg(statics, 5-1, 1),
      _var0);
}
static void _V10_Dlp_D526_V0k209(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlp_D526_V0k209" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlp_D526_V0k209, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.append!.142 5 74) (close _V10_Dlp_D526_V0k210) (bruijn ##.lists.527 2 1) (bruijn ##.x.1264 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 74)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dlp_D526_V0k210, self)))),
      statics->up->vars[1],
      _var0);
}
static void _V10_Dlp_D526_V0k208(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlp_D526_V0k208" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlp_D526_V0k208, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.null? (bruijn ##.tails.529 0 0)) ((bruijn ##.k.1260 1 0) (bruijn ##.ans.528 1 2)) ((bruijn ##.list.8 5 6) (close _V10_Dlp_D526_V0k209) (bruijn ##.ans.528 1 2)))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      statics->vars[2]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 6)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dlp_D526_V0k209, self)))),
      statics->vars[2]);
}
}
static void _V10_Dlp_D526_V0lambda93(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V10_Dlp_D526_V0lambda93" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlp_D526_V0lambda93, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((bruijn ##.%cdrs.180 3 112) (close _V10_Dlp_D526_V0k208) (bruijn ##.lists.527 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[112]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dlp_D526_V0k208, self)))),
      _var1);
}
static void _V10_Dlp_D530_V0k213(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlp_D530_V0k213" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlp_D530_V0k213, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.lp.530 3 0) (bruijn ##.k.1266 2 0) (##inline ##vcore.cdr (bruijn ##.lis.531 2 1)) (bruijn ##.x.1268 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 3,
      statics->up->vars[0],
      VInlineCdr2(runtime,
        statics->up->vars[1]),
      _var0);
}
static void _V10_Dlp_D530_V0k212(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlp_D530_V0k212" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlp_D530_V0k212, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1267 0 0) ((bruijn ##.k.1266 1 0) (bruijn ##.ans.532 1 2)) ((bruijn ##.f.522 3 1) (close _V10_Dlp_D530_V0k213) (bruijn ##.lis.531 1 1) (bruijn ##.ans.532 1 2)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      statics->vars[2]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[1]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dlp_D530_V0k213, self)))),
      statics->vars[1],
      statics->vars[2]);
}
}
static void _V10_Dlp_D530_V0lambda94(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V10_Dlp_D530_V0lambda94" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlp_D530_V0lambda94, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((bruijn ##.null-list?.168 3 100) (close _V10_Dlp_D530_V0k212) (bruijn ##.lis.531 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[100]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dlp_D530_V0k212, self)))),
      _var1);
}
static void _V50_V0vanity_V0list_V0pair__fold_V0k207(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (if (##inline ##vcore.pair? (bruijn ##.lists.525 0 4)) (letrec 1 ((close _V10_Dlp_D526_V0lambda93)) ((bruijn ##.lp.526 0 0) (bruijn ##.k.1258 1 0) (##inline ##vcore.cons (bruijn ##.lis1.524 1 3) (bruijn ##.lists.525 1 4)) (bruijn ##.zero.523 1 2))) (letrec 1 ((close _V10_Dlp_D530_V0lambda94)) ((bruijn ##.lp.530 0 0) (bruijn ##.k.1258 1 0) (bruijn ##.lis1.524 1 3) (bruijn ##.zero.523 1 2))))
if(VDecodeBool(
VInlinePairP2(runtime,
        self->vars[4]))) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dlp_D526_V0lambda93, self))));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, self->vars[0]), 3,
      statics->vars[0],
      VInlineCons2(runtime,
        statics->vars[3],
        statics->vars[4]),
      statics->vars[2]);
    }
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dlp_D530_V0lambda94, self))));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, self->vars[0]), 3,
      statics->vars[0],
      statics->vars[3],
      statics->vars[2]);
    }
}
}
void _V50_V0vanity_V0list_V0pair__fold(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, ...) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0pair__fold" };
 VRecordCall2(runtime, &dbg);
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
  // ((bruijn ##.check-arg.148 1 80) (close _V50_V0vanity_V0list_V0pair__fold_V0k207) (##intrinsic ##vcore.procedure?) (bruijn ##.f.522 0 1) (bruijn ##.pair-fold.121 1 53))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[80]), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0pair__fold_V0k207, self)))),
      _V40_V10vcore_Dprocedure_Q,
      _var1,
      statics->vars[53]);
}
static void _V10_Drecur_D538_V0k218(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Drecur_D538_V0k218" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Drecur_D538_V0k218, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.apply (bruijn ##.k.1271 4 0) (bruijn ##.f.534 6 1) (bruijn ##.x.1273 0 0))
    VCallFuncWithGC(runtime, (VFunc)VApply2, 3,
      statics->up->up->up->vars[0],
      VGetArg(statics, 6-1, 1),
      _var0);
}
static void _V10_Drecur_D538_V0k217(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Drecur_D538_V0k217" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Drecur_D538_V0k217, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.append!.142 6 74) (close _V10_Drecur_D538_V0k218) (bruijn ##.lists.539 3 1) (bruijn ##.x.1274 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 74)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Drecur_D538_V0k218, self)))),
      statics->up->up->vars[1],
      _var0);
}
static void _V10_Drecur_D538_V0k216(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Drecur_D538_V0k216" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Drecur_D538_V0k216, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.list.8 6 6) (close _V10_Drecur_D538_V0k217) (bruijn ##.x.1275 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 6)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Drecur_D538_V0k217, self)))),
      _var0);
}
static void _V10_Drecur_D538_V0k215(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Drecur_D538_V0k215" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Drecur_D538_V0k215, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.null? (bruijn ##.cdrs.540 0 0)) ((bruijn ##.k.1271 1 0) (bruijn ##.zero.535 3 2)) ((bruijn ##.recur.538 2 0) (close _V10_Drecur_D538_V0k216) (bruijn ##.cdrs.540 0 0)))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      statics->up->up->vars[2]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Drecur_D538_V0k216, self)))),
      _var0);
}
}
static void _V10_Drecur_D538_V0lambda95(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V10_Drecur_D538_V0lambda95" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Drecur_D538_V0lambda95, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.%cdrs.180 3 112) (close _V10_Drecur_D538_V0k215) (bruijn ##.lists.539 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[112]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Drecur_D538_V0k215, self)))),
      _var1);
}
static void _V10_Drecur_D541_V0k220(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Drecur_D541_V0k220" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Drecur_D541_V0k220, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.f.534 4 1) (bruijn ##.k.1277 2 0) (bruijn ##.lis.542 2 1) (bruijn ##.x.1279 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[1]), 3,
      statics->up->vars[0],
      statics->up->vars[1],
      _var0);
}
static void _V10_Drecur_D541_V0k219(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Drecur_D541_V0k219" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Drecur_D541_V0k219, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1278 0 0) ((bruijn ##.k.1277 1 0) (bruijn ##.zero.535 3 2)) ((bruijn ##.recur.541 2 0) (close _V10_Drecur_D541_V0k220) (##inline ##vcore.cdr (bruijn ##.lis.542 1 1))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      statics->up->up->vars[2]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Drecur_D541_V0k220, self)))),
      VInlineCdr2(runtime,
        statics->vars[1]));
}
}
static void _V10_Drecur_D541_V0lambda96(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V10_Drecur_D541_V0lambda96" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Drecur_D541_V0lambda96, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.null-list?.168 3 100) (close _V10_Drecur_D541_V0k219) (bruijn ##.lis.542 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[100]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Drecur_D541_V0k219, self)))),
      _var1);
}
static void _V50_V0vanity_V0list_V0pair__fold__right_V0k214(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (if (##inline ##vcore.pair? (bruijn ##.lists.537 0 4)) (letrec 1 ((close _V10_Drecur_D538_V0lambda95)) ((bruijn ##.recur.538 0 0) (bruijn ##.k.1269 1 0) (##inline ##vcore.cons (bruijn ##.lis1.536 1 3) (bruijn ##.lists.537 1 4)))) (letrec 1 ((close _V10_Drecur_D541_V0lambda96)) ((bruijn ##.recur.541 0 0) (bruijn ##.k.1269 1 0) (bruijn ##.lis1.536 1 3))))
if(VDecodeBool(
VInlinePairP2(runtime,
        self->vars[4]))) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Drecur_D538_V0lambda95, self))));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, self->vars[0]), 2,
      statics->vars[0],
      VInlineCons2(runtime,
        statics->vars[3],
        statics->vars[4]));
    }
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Drecur_D541_V0lambda96, self))));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, self->vars[0]), 2,
      statics->vars[0],
      statics->vars[3]);
    }
}
}
void _V50_V0vanity_V0list_V0pair__fold__right(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, ...) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0pair__fold__right" };
 VRecordCall2(runtime, &dbg);
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
  // ((bruijn ##.check-arg.148 1 80) (close _V50_V0vanity_V0list_V0pair__fold__right_V0k214) (##intrinsic ##vcore.procedure?) (bruijn ##.f.534 0 1) (bruijn ##.pair-fold-right.122 1 54))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[80]), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0pair__fold__right_V0k214, self)))),
      _V40_V10vcore_Dprocedure_Q,
      _var1,
      statics->vars[54]);
}
static void _V10_Drecur_D549_V0k227(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Drecur_D549_V0k227" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Drecur_D549_V0k227, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1284 4 0) (##inline ##vcore.cons (bruijn ##.x.1286 2 0) (bruijn ##.x.1287 0 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VInlineCons2(runtime,
        statics->up->vars[0],
        _var0));
}
static void _V10_Drecur_D549_V0k226(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Drecur_D549_V0k226" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Drecur_D549_V0k226, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.recur.549 4 0) (close _V10_Drecur_D549_V0k227) (bruijn ##.x.1288 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Drecur_D549_V0k227, self)))),
      _var0);
}
static void _V10_Drecur_D549_V0k225(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Drecur_D549_V0k225" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Drecur_D549_V0k225, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.g.545 4 3) (close _V10_Drecur_D549_V0k226) (bruijn ##.seed.550 2 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[3]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Drecur_D549_V0k226, self)))),
      statics->up->vars[1]);
}
static void _V10_Drecur_D549_V0k224(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Drecur_D549_V0k224" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Drecur_D549_V0k224, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1285 0 0) ((##inline ##vcore.car (bruijn ##.maybe-tail-gen.547 3 5)) (bruijn ##.k.1284 1 0) (bruijn ##.seed.550 1 1)) ((bruijn ##.f.544 3 2) (close _V10_Drecur_D549_V0k225) (bruijn ##.seed.550 1 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VInlineCar2(runtime,
        statics->up->up->vars[5])), 2,
      statics->vars[0],
      statics->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[2]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Drecur_D549_V0k225, self)))),
      statics->vars[1]);
}
}
static void _V10_Drecur_D549_V0lambda97(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V10_Drecur_D549_V0lambda97" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Drecur_D549_V0lambda97, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.p.543 2 1) (close _V10_Drecur_D549_V0k224) (bruijn ##.seed.550 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[1]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Drecur_D549_V0k224, self)))),
      _var1);
}
static void _V10_Drecur_D551_V0k231(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Drecur_D551_V0k231" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Drecur_D551_V0k231, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1290 4 0) (##inline ##vcore.cons (bruijn ##.x.1292 2 0) (bruijn ##.x.1293 0 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VInlineCons2(runtime,
        statics->up->vars[0],
        _var0));
}
static void _V10_Drecur_D551_V0k230(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Drecur_D551_V0k230" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Drecur_D551_V0k230, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.recur.551 4 0) (close _V10_Drecur_D551_V0k231) (bruijn ##.x.1294 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Drecur_D551_V0k231, self)))),
      _var0);
}
static void _V10_Drecur_D551_V0k229(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Drecur_D551_V0k229" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Drecur_D551_V0k229, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.g.545 4 3) (close _V10_Drecur_D551_V0k230) (bruijn ##.seed.552 2 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[3]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Drecur_D551_V0k230, self)))),
      statics->up->vars[1]);
}
static void _V10_Drecur_D551_V0k228(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Drecur_D551_V0k228" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Drecur_D551_V0k228, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1291 0 0) ((bruijn ##.k.1290 1 0) '()) ((bruijn ##.f.544 3 2) (close _V10_Drecur_D551_V0k229) (bruijn ##.seed.552 1 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VNULL);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[2]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Drecur_D551_V0k229, self)))),
      statics->vars[1]);
}
}
static void _V10_Drecur_D551_V0lambda98(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V10_Drecur_D551_V0lambda98" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Drecur_D551_V0lambda98, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.p.543 2 1) (close _V10_Drecur_D551_V0k228) (bruijn ##.seed.552 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[1]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Drecur_D551_V0k228, self)))),
      _var1);
}
static void _V50_V0vanity_V0list_V0unfold_V0k223(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (if (##inline ##vcore.pair? (bruijn ##.maybe-tail-gen.547 0 5)) (if (##inline ##vcore.pair? (##inline ##vcore.cdr (bruijn ##.maybe-tail-gen.547 0 5))) (##vcore.apply (bruijn ##.k.1281 0 0) (bruijn ##.error.5 2 3) (##string ##.string.1914) (bruijn ##.unfold.123 1 55) (bruijn ##.p.543 0 1) (bruijn ##.f.544 0 2) (bruijn ##.g.545 0 3) (bruijn ##.seed.546 0 4) (bruijn ##.maybe-tail-gen.547 0 5)) (letrec 1 ((close _V10_Drecur_D549_V0lambda97)) ((bruijn ##.recur.549 0 0) (bruijn ##.k.1281 1 0) (bruijn ##.seed.546 1 4)))) (letrec 1 ((close _V10_Drecur_D551_V0lambda98)) ((bruijn ##.recur.551 0 0) (bruijn ##.k.1281 1 0) (bruijn ##.seed.546 1 4))))
if(VDecodeBool(
VInlinePairP2(runtime,
        self->vars[5]))) {
if(VDecodeBool(
VInlinePairP2(runtime,
        VInlineCdr2(runtime,
        self->vars[5])))) {
    VCallFuncWithGC(runtime, (VFunc)VApply2, 9,
      self->vars[0],
      statics->up->vars[3],
      VEncodePointer(&_V10_Dstring_D1914.sym, VPOINTER_OTHER),
      statics->vars[55],
      self->vars[1],
      self->vars[2],
      self->vars[3],
      self->vars[4],
      self->vars[5]);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Drecur_D549_V0lambda97, self))));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, self->vars[0]), 2,
      statics->vars[0],
      statics->vars[4]);
    }
}
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Drecur_D551_V0lambda98, self))));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, self->vars[0]), 2,
      statics->vars[0],
      statics->vars[4]);
    }
}
}
static void _V50_V0vanity_V0list_V0unfold_V0k222(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.check-arg.148 1 80) (close _V50_V0vanity_V0list_V0unfold_V0k223) (##intrinsic ##vcore.procedure?) (bruijn ##.g.545 0 3) (bruijn ##.unfold.123 1 55))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[80]), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0unfold_V0k223, self)))),
      _V40_V10vcore_Dprocedure_Q,
      self->vars[3],
      statics->vars[55]);
}
static void _V50_V0vanity_V0list_V0unfold_V0k221(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.check-arg.148 1 80) (close _V50_V0vanity_V0list_V0unfold_V0k222) (##intrinsic ##vcore.procedure?) (bruijn ##.f.544 0 2) (bruijn ##.unfold.123 1 55))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[80]), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0unfold_V0k222, self)))),
      _V40_V10vcore_Dprocedure_Q,
      self->vars[2],
      statics->vars[55]);
}
void _V50_V0vanity_V0list_V0unfold(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4, ...) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0unfold" };
 VRecordCall2(runtime, &dbg);
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
  // ((bruijn ##.check-arg.148 1 80) (close _V50_V0vanity_V0list_V0unfold_V0k221) (##intrinsic ##vcore.procedure?) (bruijn ##.p.543 0 1) (bruijn ##.unfold.123 1 55))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[80]), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0unfold_V0k221, self)))),
      _V40_V10vcore_Dprocedure_Q,
      _var1,
      statics->vars[55]);
}
static void _V10_Dlp_D558_V0k237(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlp_D558_V0k237" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlp_D558_V0k237, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.lp.558 4 0) (bruijn ##.k.1296 3 0) (bruijn ##.x.1298 1 0) (##inline ##vcore.cons (bruijn ##.x.1300 0 0) (bruijn ##.ans.560 3 2)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 3,
      statics->up->up->vars[0],
      statics->vars[0],
      VInlineCons2(runtime,
        _var0,
        statics->up->up->vars[2]));
}
static void _V10_Dlp_D558_V0k236(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlp_D558_V0k236" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlp_D558_V0k236, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.f.554 4 2) (close _V10_Dlp_D558_V0k237) (bruijn ##.seed.559 2 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[2]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dlp_D558_V0k237, self)))),
      statics->up->vars[1]);
}
static void _V10_Dlp_D558_V0k235(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlp_D558_V0k235" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlp_D558_V0k235, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1297 0 0) ((bruijn ##.k.1296 1 0) (bruijn ##.ans.560 1 2)) ((bruijn ##.g.555 3 3) (close _V10_Dlp_D558_V0k236) (bruijn ##.seed.559 1 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      statics->vars[2]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[3]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dlp_D558_V0k236, self)))),
      statics->vars[1]);
}
}
static void _V10_Dlp_D558_V0lambda99(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V10_Dlp_D558_V0lambda99" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlp_D558_V0lambda99, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((bruijn ##.p.553 2 1) (close _V10_Dlp_D558_V0k235) (bruijn ##.seed.559 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[1]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dlp_D558_V0k235, self)))),
      _var1);
}
void _V50_V0vanity_V0list_V0unfold__right_V0k238(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0unfold__right_V0k238" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0unfold__right_V0k238, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.lp.558 1 0) (bruijn ##.k.1295 2 0) (bruijn ##.seed.556 2 4) (bruijn ##.x.1301 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 3,
      statics->up->vars[0],
      statics->up->vars[4],
      _var0);
}
static void _V50_V0vanity_V0list_V0unfold__right_V0k234(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (letrec 1 ((close _V10_Dlp_D558_V0lambda99)) ((bruijn ##.get-optional.181 2 113) (close _V50_V0vanity_V0list_V0unfold__right_V0k238) (bruijn ##.maybe-tail.557 1 5) '()))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dlp_D558_V0lambda99, self))));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[113]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0unfold__right_V0k238, self)))),
      statics->vars[5],
      VNULL);
    }
}
static void _V50_V0vanity_V0list_V0unfold__right_V0k233(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.check-arg.148 1 80) (close _V50_V0vanity_V0list_V0unfold__right_V0k234) (##intrinsic ##vcore.procedure?) (bruijn ##.g.555 0 3) (bruijn ##.unfold-right.124 1 56))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[80]), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0unfold__right_V0k234, self)))),
      _V40_V10vcore_Dprocedure_Q,
      self->vars[3],
      statics->vars[56]);
}
static void _V50_V0vanity_V0list_V0unfold__right_V0k232(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.check-arg.148 1 80) (close _V50_V0vanity_V0list_V0unfold__right_V0k233) (##intrinsic ##vcore.procedure?) (bruijn ##.f.554 0 2) (bruijn ##.unfold-right.124 1 56))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[80]), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0unfold__right_V0k233, self)))),
      _V40_V10vcore_Dprocedure_Q,
      self->vars[2],
      statics->vars[56]);
}
void _V50_V0vanity_V0list_V0unfold__right(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4, ...) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0unfold__right" };
 VRecordCall2(runtime, &dbg);
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
  // ((bruijn ##.check-arg.148 1 80) (close _V50_V0vanity_V0list_V0unfold__right_V0k232) (##intrinsic ##vcore.procedure?) (bruijn ##.p.553 0 1) (bruijn ##.unfold-right.124 1 56))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[80]), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0unfold__right_V0k232, self)))),
      _V40_V10vcore_Dprocedure_Q,
      _var1,
      statics->vars[56]);
}
void _V50_V0vanity_V0list_V0fold__right_V0k239(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0fold__right_V0k239" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0fold__right_V0k239, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kons.561 1 1) (bruijn ##.k.1302 1 0) (##inline ##vcore.car (bruijn ##.ks.563 1 3)) (bruijn ##.x.1305 0 0))
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
  // (if (##inline ##vcore.null? (bruijn ##.ks.563 0 3)) ((bruijn ##.k.1302 0 0) (bruijn ##.knil.562 0 2)) ((bruijn ##.fold-right.125 1 57) (close _V50_V0vanity_V0list_V0fold__right_V0k239) (bruijn ##.kons.561 0 1) (bruijn ##.knil.562 0 2) (##inline ##vcore.cdr (bruijn ##.ks.563 0 3))))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var3))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _var2);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[57]), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0fold__right_V0k239, self)))),
      _var1,
      _var2,
      VInlineCdr2(runtime,
        _var3));
}
}
void _V50_V0vanity_V0list_V0fold_V0k240(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0fold_V0k240" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0fold_V0k240, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.fold.126 2 58) (bruijn ##.k.1307 1 0) (bruijn ##.kons.564 1 1) (bruijn ##.x.1309 0 0) (##inline ##vcore.cdr (bruijn ##.ks.566 1 3)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[58]), 4,
      statics->vars[0],
      statics->vars[1],
      _var0,
      VInlineCdr2(runtime,
        statics->vars[3]));
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
  // (if (##inline ##vcore.null? (bruijn ##.ks.566 0 3)) ((bruijn ##.k.1307 0 0) (bruijn ##.knil.565 0 2)) ((bruijn ##.kons.564 0 1) (close _V50_V0vanity_V0list_V0fold_V0k240) (##inline ##vcore.car (bruijn ##.ks.566 0 3)) (bruijn ##.knil.565 0 2)))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var3))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _var2);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var1), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0fold_V0k240, self)))),
      VInlineCar2(runtime,
        _var3),
      _var2);
}
}
static void _V10_Dlp_D570_V0k243(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.lp.570 2 0) (bruijn ##.k.1314 1 0) (bruijn ##.tails.572 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 2,
      statics->vars[0],
      self->vars[0]);
}
static void _V10_Dlp_D570_V0k242(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlp_D570_V0k242" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlp_D570_V0k242, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.tails.572 0 0)) (##vcore.apply (close _V10_Dlp_D570_V0k243) (bruijn ##.proc.567 3 1) (bruijn ##.lists.571 1 1)) ((bruijn ##.k.1314 1 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallFuncWithGC(runtime, (VFunc)VApply2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dlp_D570_V0k243, self)))),
      statics->up->up->vars[1],
      statics->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dlp_D570_V0lambda100(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V10_Dlp_D570_V0lambda100" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlp_D570_V0lambda100, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.%cdrs.180 3 112) (close _V10_Dlp_D570_V0k242) (bruijn ##.lists.571 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[112]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dlp_D570_V0k242, self)))),
      _var1);
}
static void _V10_Dlp_D573_V0k245(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.lp.573 2 0) (bruijn ##.k.1317 1 0) (##inline ##vcore.cdr (bruijn ##.lis.574 1 1)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 2,
      statics->vars[0],
      VInlineCdr2(runtime,
        statics->vars[1]));
}
static void _V10_Dlp_D573_V0k244(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlp_D573_V0k244" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlp_D573_V0k244, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.not (bruijn ##.x.1319 0 0)) ((bruijn ##.proc.567 3 1) (close _V10_Dlp_D573_V0k245) (bruijn ##.lis.574 1 1)) ((bruijn ##.k.1317 1 0) #f))
if(VDecodeBool(
VInlineNot2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[1]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dlp_D573_V0k245, self)))),
      statics->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dlp_D573_V0lambda101(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V10_Dlp_D573_V0lambda101" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlp_D573_V0lambda101, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.null-list?.168 3 100) (close _V10_Dlp_D573_V0k244) (bruijn ##.lis.574 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[100]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dlp_D573_V0k244, self)))),
      _var1);
}
static void _V50_V0vanity_V0list_V0pair__for__each_V0k241(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (if (##inline ##vcore.pair? (bruijn ##.lists.569 0 3)) (letrec 1 ((close _V10_Dlp_D570_V0lambda100)) ((bruijn ##.lp.570 0 0) (bruijn ##.k.1312 1 0) (##inline ##vcore.cons (bruijn ##.lis1.568 1 2) (bruijn ##.lists.569 1 3)))) (letrec 1 ((close _V10_Dlp_D573_V0lambda101)) ((bruijn ##.lp.573 0 0) (bruijn ##.k.1312 1 0) (bruijn ##.lis1.568 1 2))))
if(VDecodeBool(
VInlinePairP2(runtime,
        self->vars[3]))) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dlp_D570_V0lambda100, self))));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, self->vars[0]), 2,
      statics->vars[0],
      VInlineCons2(runtime,
        statics->vars[2],
        statics->vars[3]));
    }
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dlp_D573_V0lambda101, self))));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, self->vars[0]), 2,
      statics->vars[0],
      statics->vars[2]);
    }
}
}
void _V50_V0vanity_V0list_V0pair__for__each(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, ...) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0pair__for__each" };
 VRecordCall2(runtime, &dbg);
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
  // ((bruijn ##.check-arg.148 1 80) (close _V50_V0vanity_V0list_V0pair__for__each_V0k241) (##intrinsic ##vcore.procedure?) (bruijn ##.proc.567 0 1) (bruijn ##.pair-for-each.127 1 59))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[80]), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0pair__for__each_V0k241, self)))),
      _V40_V10vcore_Dprocedure_Q,
      _var1,
      statics->vars[59]);
}
static void _V10_Dlp_D579_V0lambda103(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlp_D579_V0lambda103" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlp_D579_V0lambda103, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%cars+cdrs/no-test.178 6 110) (bruijn ##.k.1325 0 0) (bruijn ##.lists.581 2 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 110)), 2,
      _var0,
      statics->up->vars[2]);
}
static void _V10_Dlp_D579_V0k250(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.lp.579 4 0) (bruijn ##.k.1326 1 0) (##inline ##vcore.cdr (bruijn ##.lis1.580 3 1)) (bruijn ##.tails.583 1 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 3,
      statics->vars[0],
      VInlineCdr2(runtime,
        statics->up->up->vars[1]),
      statics->vars[2]);
}
static void _V10_Dlp_D579_V0k249(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlp_D579_V0k249" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlp_D579_V0k249, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.set-car! (close _V10_Dlp_D579_V0k250) (bruijn ##.lis1.580 3 1) (bruijn ##.x.1328 0 0))
    VCallFuncWithGC(runtime, (VFunc)VSetCar2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dlp_D579_V0k250, self)))),
      statics->up->up->vars[1],
      _var0);
}
static void _V10_Dlp_D579_V0lambda104(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V10_Dlp_D579_V0lambda104" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlp_D579_V0lambda104, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (##vcore.apply (close _V10_Dlp_D579_V0k249) (bruijn ##.f.576 5 1) (##inline ##vcore.car (bruijn ##.lis1.580 2 1)) (bruijn ##.heads.582 0 1))
    VCallFuncWithGC(runtime, (VFunc)VApply2, 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dlp_D579_V0k249, self)))),
      VGetArg(statics, 5-1, 1),
      VInlineCar2(runtime,
        statics->up->vars[1]),
      _var1);
}
static void _V10_Dlp_D579_V0k248(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlp_D579_V0k248" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlp_D579_V0k248, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.not (bruijn ##.x.1330 0 0)) (##vcore.call-with-values (bruijn ##.k.1323 1 0) (close _V10_Dlp_D579_V0lambda103) (close _V10_Dlp_D579_V0lambda104)) ((bruijn ##.k.1323 1 0) #f))
if(VDecodeBool(
VInlineNot2(runtime,
        _var0))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dlp_D579_V0lambda103, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dlp_D579_V0lambda104, self)))));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dlp_D579_V0lambda102(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V10_Dlp_D579_V0lambda102" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlp_D579_V0lambda102, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((bruijn ##.null-list?.168 4 100) (close _V10_Dlp_D579_V0k248) (bruijn ##.lis1.580 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[100]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dlp_D579_V0k248, self)))),
      _var1);
}
void _V50_V0vanity_V0list_V0map_B_V0k251(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0map_B_V0k251" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0map_B_V0k251, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.set-car! (bruijn ##.k.1331 1 0) (bruijn ##.pair.584 1 1) (bruijn ##.x.1332 0 0))
    VCallFuncWithGC(runtime, (VFunc)VSetCar2, 3,
      statics->vars[0],
      statics->vars[1],
      _var0);
}
void _V50_V0vanity_V0list_V0map_B_V0lambda105(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0map_B_V0lambda105" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0map_B_V0lambda105, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.f.576 2 1) (close _V50_V0vanity_V0list_V0map_B_V0k251) (##inline ##vcore.car (bruijn ##.pair.584 0 1)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[1]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0map_B_V0k251, self)))),
      VInlineCar2(runtime,
        _var1));
}
void _V50_V0vanity_V0list_V0map_B_V0k247(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0map_B_V0k247" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0map_B_V0k247, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.lists.578 1 3)) (letrec 1 ((close _V10_Dlp_D579_V0lambda102)) ((bruijn ##.lp.579 0 0) (bruijn ##.k.1322 1 0) (bruijn ##.lis1.577 2 2) (bruijn ##.lists.578 2 3))) ((bruijn ##.pair-for-each.127 2 59) (bruijn ##.k.1322 0 0) (close _V50_V0vanity_V0list_V0map_B_V0lambda105) (bruijn ##.lis1.577 1 2)))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->vars[3]))) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dlp_D579_V0lambda102, self))));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, self->vars[0]), 3,
      statics->vars[0],
      statics->up->vars[2],
      statics->up->vars[3]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[59]), 3,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0map_B_V0lambda105, self)))),
      statics->vars[2]);
}
}
static void _V50_V0vanity_V0list_V0map_B_V0k252(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.k.1320 0 0) (bruijn ##.lis1.577 0 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, self->vars[0]), 1,
      self->vars[2]);
}
static void _V50_V0vanity_V0list_V0map_B_V0k246(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((close _V50_V0vanity_V0list_V0map_B_V0k247) (close _V50_V0vanity_V0list_V0map_B_V0k252))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0map_B_V0k247, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0map_B_V0k252, self)))));
}
void _V50_V0vanity_V0list_V0map_B(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, ...) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0map_B" };
 VRecordCall2(runtime, &dbg);
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
  // ((bruijn ##.check-arg.148 1 80) (close _V50_V0vanity_V0list_V0map_B_V0k246) (##intrinsic ##vcore.procedure?) (bruijn ##.f.576 0 1) (bruijn ##.map!.129 1 61))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[80]), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0map_B_V0k246, self)))),
      _V40_V10vcore_Dprocedure_Q,
      _var1,
      statics->vars[61]);
}
static void _V10_Dloop_D587_V0k254(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D587_V0k254" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D587_V0k254, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.1340 1 0) ((bruijn ##.k.1341 0 0) 1) ((bruijn ##.k.1341 0 0) 0))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeInt(1l));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeInt(0l));
}
}
static void _V10_Dloop_D587_V0k255(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D587_V0k255" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D587_V0k255, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.1894) ((##vcore.+ (bruijn ##.n.588 3 1) (bruijn ##.x.1339 1 0))) ((bruijn ##.loop.587 4 0) (bruijn ##.k.1335 3 0) (bruijn ##.reg.1894 0 0) (bruijn ##.pred.589 3 2) (##inline ##vcore.cdr (bruijn ##.lst.590 3 3))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      statics->up->up->vars[1],
      statics->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 4,
      statics->up->up->vars[0],
      self->vars[0],
      statics->up->up->vars[2],
      VInlineCdr2(runtime,
        statics->up->up->vars[3]));
    }
}
static void _V10_Dloop_D587_V0k253(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D587_V0k253" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D587_V0k253, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dloop_D587_V0k254) (close _V10_Dloop_D587_V0k255))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D587_V0k254, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D587_V0k255, self)))));
}
static void _V10_Dloop_D587_V0lambda106(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V10_Dloop_D587_V0lambda106" };
 VRecordCall2(runtime, &dbg);
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D587_V0lambda106, got ~D~N"
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
  // (if (##inline ##vcore.null? (bruijn ##.lst.590 0 3)) ((bruijn ##.k.1335 0 0) (bruijn ##.n.588 0 1)) ((bruijn ##.pred.589 0 2) (close _V10_Dloop_D587_V0k253) (##inline ##vcore.car (bruijn ##.lst.590 0 3))))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var3))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _var1);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var2), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D587_V0k253, self)))),
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
  // (letrec 1 ((close _V10_Dloop_D587_V0lambda106)) ((bruijn ##.loop.587 0 0) (bruijn ##.k.1334 1 0) 0 (bruijn ##.pred.585 1 1) (bruijn ##.lst.586 1 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D587_V0lambda106, self))));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, self->vars[0]), 4,
      statics->vars[0],
      VEncodeInt(0l),
      statics->vars[1],
      statics->vars[2]);
    }
}
void _V50_V0vanity_V0list_V0unzip5_V0k260(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0unzip5_V0k260" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0unzip5_V0k260, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.values.4 7 2) (bruijn ##.k.1343 5 0) (bruijn ##.x.1344 4 0) (bruijn ##.x.1345 3 0) (bruijn ##.x.1346 2 0) (bruijn ##.x.1347 1 0) (bruijn ##.x.1348 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 2)), 6,
      VGetArg(statics, 5-1, 0),
      statics->up->up->up->vars[0],
      statics->up->up->vars[0],
      statics->up->vars[0],
      statics->vars[0],
      _var0);
}
void _V50_V0vanity_V0list_V0unzip5_V0lambda107(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0unzip5_V0lambda107" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0unzip5_V0lambda107, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.cadddr.19 7 17) (bruijn ##.k.1349 0 0) (##inline ##vcore.cdr (bruijn ##.e.592 0 1)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 17)), 2,
      _var0,
      VInlineCdr2(runtime,
        _var1));
}
void _V50_V0vanity_V0list_V0unzip5_V0k259(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0unzip5_V0k259" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0unzip5_V0k259, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.map.34 6 32) (close _V50_V0vanity_V0list_V0unzip5_V0k260) (close _V50_V0vanity_V0list_V0unzip5_V0lambda107) (bruijn ##.lst.591 4 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 32)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0unzip5_V0k260, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0unzip5_V0lambda107, self)))),
      statics->up->up->up->vars[1]);
}
void _V50_V0vanity_V0list_V0unzip5_V0k258(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0unzip5_V0k258" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0unzip5_V0k258, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.map.34 5 32) (close _V50_V0vanity_V0list_V0unzip5_V0k259) (bruijn ##.cadddr.19 5 17) (bruijn ##.lst.591 3 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 32)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0unzip5_V0k259, self)))),
      VGetArg(statics, 5-1, 17),
      statics->up->up->vars[1]);
}
void _V50_V0vanity_V0list_V0unzip5_V0k257(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0unzip5_V0k257" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0unzip5_V0k257, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.map.34 4 32) (close _V50_V0vanity_V0list_V0unzip5_V0k258) (bruijn ##.caddr.13 4 11) (bruijn ##.lst.591 2 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[32]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0unzip5_V0k258, self)))),
      statics->up->up->up->vars[11],
      statics->up->vars[1]);
}
void _V50_V0vanity_V0list_V0unzip5_V0k256(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0unzip5_V0k256" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0unzip5_V0k256, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.map.34 3 32) (close _V50_V0vanity_V0list_V0unzip5_V0k257) (bruijn ##.cadr.10 3 8) (bruijn ##.lst.591 1 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[32]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0unzip5_V0k257, self)))),
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
  // ((bruijn ##.map.34 2 32) (close _V50_V0vanity_V0list_V0unzip5_V0k256) (##intrinsic ##vcore.car) (bruijn ##.lst.591 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[32]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0unzip5_V0k256, self)))),
      _V40_V10vcore_Dcar,
      _var1);
}
void _V50_V0vanity_V0list_V0unzip4_V0k264(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0unzip4_V0k264" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0unzip4_V0k264, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.values.4 6 2) (bruijn ##.k.1351 4 0) (bruijn ##.x.1352 3 0) (bruijn ##.x.1353 2 0) (bruijn ##.x.1354 1 0) (bruijn ##.x.1355 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 2)), 5,
      statics->up->up->up->vars[0],
      statics->up->up->vars[0],
      statics->up->vars[0],
      statics->vars[0],
      _var0);
}
void _V50_V0vanity_V0list_V0unzip4_V0k263(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0unzip4_V0k263" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0unzip4_V0k263, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.map.34 5 32) (close _V50_V0vanity_V0list_V0unzip4_V0k264) (bruijn ##.cadddr.19 5 17) (bruijn ##.lst.593 3 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 32)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0unzip4_V0k264, self)))),
      VGetArg(statics, 5-1, 17),
      statics->up->up->vars[1]);
}
void _V50_V0vanity_V0list_V0unzip4_V0k262(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0unzip4_V0k262" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0unzip4_V0k262, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.map.34 4 32) (close _V50_V0vanity_V0list_V0unzip4_V0k263) (bruijn ##.caddr.13 4 11) (bruijn ##.lst.593 2 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[32]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0unzip4_V0k263, self)))),
      statics->up->up->up->vars[11],
      statics->up->vars[1]);
}
void _V50_V0vanity_V0list_V0unzip4_V0k261(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0unzip4_V0k261" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0unzip4_V0k261, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.map.34 3 32) (close _V50_V0vanity_V0list_V0unzip4_V0k262) (bruijn ##.cadr.10 3 8) (bruijn ##.lst.593 1 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[32]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0unzip4_V0k262, self)))),
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
  // ((bruijn ##.map.34 2 32) (close _V50_V0vanity_V0list_V0unzip4_V0k261) (##intrinsic ##vcore.car) (bruijn ##.lst.593 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[32]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0unzip4_V0k261, self)))),
      _V40_V10vcore_Dcar,
      _var1);
}
void _V50_V0vanity_V0list_V0unzip3_V0k267(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0unzip3_V0k267" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0unzip3_V0k267, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.values.4 5 2) (bruijn ##.k.1356 3 0) (bruijn ##.x.1357 2 0) (bruijn ##.x.1358 1 0) (bruijn ##.x.1359 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 2)), 4,
      statics->up->up->vars[0],
      statics->up->vars[0],
      statics->vars[0],
      _var0);
}
void _V50_V0vanity_V0list_V0unzip3_V0k266(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0unzip3_V0k266" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0unzip3_V0k266, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.map.34 4 32) (close _V50_V0vanity_V0list_V0unzip3_V0k267) (bruijn ##.caddr.13 4 11) (bruijn ##.lst.594 2 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[32]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0unzip3_V0k267, self)))),
      statics->up->up->up->vars[11],
      statics->up->vars[1]);
}
void _V50_V0vanity_V0list_V0unzip3_V0k265(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0unzip3_V0k265" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0unzip3_V0k265, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.map.34 3 32) (close _V50_V0vanity_V0list_V0unzip3_V0k266) (bruijn ##.cadr.10 3 8) (bruijn ##.lst.594 1 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[32]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0unzip3_V0k266, self)))),
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
  // ((bruijn ##.map.34 2 32) (close _V50_V0vanity_V0list_V0unzip3_V0k265) (##intrinsic ##vcore.car) (bruijn ##.lst.594 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[32]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0unzip3_V0k265, self)))),
      _V40_V10vcore_Dcar,
      _var1);
}
void _V50_V0vanity_V0list_V0unzip2_V0k269(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0unzip2_V0k269" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0unzip2_V0k269, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.values.4 4 2) (bruijn ##.k.1360 2 0) (bruijn ##.x.1361 1 0) (bruijn ##.x.1362 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[2]), 3,
      statics->up->vars[0],
      statics->vars[0],
      _var0);
}
void _V50_V0vanity_V0list_V0unzip2_V0k268(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0unzip2_V0k268" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0unzip2_V0k268, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.map.34 3 32) (close _V50_V0vanity_V0list_V0unzip2_V0k269) (bruijn ##.cadr.10 3 8) (bruijn ##.lst.595 1 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[32]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0unzip2_V0k269, self)))),
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
  // ((bruijn ##.map.34 2 32) (close _V50_V0vanity_V0list_V0unzip2_V0k268) (##intrinsic ##vcore.car) (bruijn ##.lst.595 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[32]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0unzip2_V0k268, self)))),
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
  // ((bruijn ##.map.34 2 32) (bruijn ##.k.1363 0 0) (##intrinsic ##vcore.car) (bruijn ##.lst.596 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[32]), 3,
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
  // (##vcore.apply (bruijn ##.k.1364 0 0) (bruijn ##.map.34 2 32) (bruijn ##.list.8 2 6) (bruijn ##.lsts.597 0 1))
    VCallFuncWithGC(runtime, (VFunc)VApply2, 4,
      _var0,
      statics->up->vars[32],
      statics->up->vars[6],
      _varargs);
}
void _V50_V0vanity_V0list_V0concatenate_B_V0k270(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0concatenate_B_V0k270" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0concatenate_B_V0k270, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.append!.142 2 74) (bruijn ##.k.1365 1 0) (##inline ##vcore.car (bruijn ##.lst-of-lsts.598 1 1)) (bruijn ##.x.1368 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[74]), 3,
      statics->vars[0],
      VInlineCar2(runtime,
        statics->vars[1]),
      _var0);
}
void _V50_V0vanity_V0list_V0concatenate_B(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0concatenate_B" };
 VRecordCall2(runtime, &dbg);
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
  // (if (##inline ##vcore.null? (bruijn ##.lst-of-lsts.598 0 1)) ((bruijn ##.k.1365 0 0) '()) ((bruijn ##.concatenate!.137 1 69) (close _V50_V0vanity_V0list_V0concatenate_B_V0k270) (##inline ##vcore.cdr (bruijn ##.lst-of-lsts.598 0 1))))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var1))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VNULL);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[69]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0concatenate_B_V0k270, self)))),
      VInlineCdr2(runtime,
        _var1));
}
}
void _V50_V0vanity_V0list_V0concatenate_V0k271(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0concatenate_V0k271" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0concatenate_V0k271, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.append.25 3 23) (bruijn ##.k.1370 1 0) (##inline ##vcore.car (bruijn ##.lst-of-lsts.599 1 1)) (bruijn ##.x.1373 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[23]), 3,
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
  // (if (##inline ##vcore.null? (bruijn ##.lst-of-lsts.599 0 1)) ((bruijn ##.k.1370 0 0) '()) ((bruijn ##.concatenate.138 1 70) (close _V50_V0vanity_V0list_V0concatenate_V0k271) (##inline ##vcore.cdr (bruijn ##.lst-of-lsts.599 0 1))))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var1))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VNULL);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[70]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0concatenate_V0k271, self)))),
      VInlineCdr2(runtime,
        _var1));
}
}
static void _V10_Dlp_D602_V0k273(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.lp.602 2 0) (bruijn ##.k.1376 1 0) (##inline ##vcore.cdr (bruijn ##.rev-head.603 1 1)) (bruijn ##.rev-head.603 1 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 3,
      statics->vars[0],
      VInlineCdr2(runtime,
        statics->vars[1]),
      statics->vars[1]);
}
static void _V10_Dlp_D602_V0k272(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlp_D602_V0k272" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlp_D602_V0k272, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1377 0 0) ((bruijn ##.k.1376 1 0) (bruijn ##.tail.604 1 2)) (##vcore.set-cdr! (close _V10_Dlp_D602_V0k273) (bruijn ##.rev-head.603 1 1) (bruijn ##.tail.604 1 2)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      statics->vars[2]);
} else {
    VCallFuncWithGC(runtime, (VFunc)VSetCdr2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dlp_D602_V0k273, self)))),
      statics->vars[1],
      statics->vars[2]);
}
}
static void _V10_Dlp_D602_V0lambda108(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V10_Dlp_D602_V0lambda108" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlp_D602_V0lambda108, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((bruijn ##.null-list?.168 3 100) (close _V10_Dlp_D602_V0k272) (bruijn ##.rev-head.603 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[100]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dlp_D602_V0k272, self)))),
      _var1);
}
void _V50_V0vanity_V0list_V0append__reverse_B(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0append__reverse_B" };
 VRecordCall2(runtime, &dbg);
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
  // (letrec 1 ((close _V10_Dlp_D602_V0lambda108)) ((bruijn ##.lp.602 0 0) (bruijn ##.k.1375 1 0) (bruijn ##.rev-head.600 1 1) (bruijn ##.tail.601 1 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dlp_D602_V0lambda108, self))));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, self->vars[0]), 3,
      statics->vars[0],
      statics->vars[1],
      statics->vars[2]);
    }
}
static void _V10_Dlp_D608_V0k274(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlp_D608_V0k274" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlp_D608_V0k274, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.1380 0 0) ((bruijn ##.k.1379 1 0) (bruijn ##.tail.610 1 2)) ((bruijn ##.lp.608 2 0) (bruijn ##.k.1379 1 0) (##inline ##vcore.cdr (bruijn ##.rev-head.609 1 1)) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.rev-head.609 1 1)) (bruijn ##.tail.610 1 2))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      statics->vars[2]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 3,
      statics->vars[0],
      VInlineCdr2(runtime,
        statics->vars[1]),
      VInlineCons2(runtime,
        VInlineCar2(runtime,
        statics->vars[1]),
        statics->vars[2]));
}
}
static void _V10_Dlp_D608_V0lambda109(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V10_Dlp_D608_V0lambda109" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlp_D608_V0lambda109, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((bruijn ##.null-list?.168 3 100) (close _V10_Dlp_D608_V0k274) (bruijn ##.rev-head.609 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[100]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dlp_D608_V0k274, self)))),
      _var1);
}
void _V50_V0vanity_V0list_V0append__reverse(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0append__reverse" };
 VRecordCall2(runtime, &dbg);
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
  // (letrec 1 ((close _V10_Dlp_D608_V0lambda109)) ((bruijn ##.lp.608 0 0) (bruijn ##.k.1378 1 0) (bruijn ##.rev-head.606 1 1) (bruijn ##.tail.607 1 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dlp_D608_V0lambda109, self))));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, self->vars[0]), 3,
      statics->vars[0],
      statics->vars[1],
      statics->vars[2]);
    }
}
static void _V10_Dlp_D612_V0k276(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.lp.612 2 0) (bruijn ##.k.1385 1 0) (##inline ##vcore.cdr (bruijn ##.lis.613 1 1)) (bruijn ##.lis.613 1 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 3,
      statics->vars[0],
      VInlineCdr2(runtime,
        statics->vars[1]),
      statics->vars[1]);
}
static void _V10_Dlp_D612_V0k275(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlp_D612_V0k275" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlp_D612_V0k275, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1386 0 0) ((bruijn ##.k.1385 1 0) (bruijn ##.ans.614 1 2)) (##vcore.set-cdr! (close _V10_Dlp_D612_V0k276) (bruijn ##.lis.613 1 1) (bruijn ##.ans.614 1 2)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      statics->vars[2]);
} else {
    VCallFuncWithGC(runtime, (VFunc)VSetCdr2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dlp_D612_V0k276, self)))),
      statics->vars[1],
      statics->vars[2]);
}
}
static void _V10_Dlp_D612_V0lambda110(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V10_Dlp_D612_V0lambda110" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlp_D612_V0lambda110, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((bruijn ##.null-list?.168 3 100) (close _V10_Dlp_D612_V0k275) (bruijn ##.lis.613 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[100]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dlp_D612_V0k275, self)))),
      _var1);
}
void _V50_V0vanity_V0list_V0reverse_B(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0reverse_B" };
 VRecordCall2(runtime, &dbg);
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
  // (letrec 1 ((close _V10_Dlp_D612_V0lambda110)) ((bruijn ##.lp.612 0 0) (bruijn ##.k.1384 1 0) (bruijn ##.lis.611 1 1) '()))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dlp_D612_V0lambda110, self))));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, self->vars[0]), 3,
      statics->vars[0],
      statics->vars[1],
      VNULL);
    }
}
static void _V10_Dloop_D619_V0lambda111(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V10_Dloop_D619_V0lambda111" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D619_V0lambda111, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.x.620 0 1))) (##vcore.set-cdr! (bruijn ##.k.1391 0 0) (bruijn ##.x.620 0 1) (bruijn ##.y.618 2 2)) ((bruijn ##.loop.619 1 0) (bruijn ##.k.1391 0 0) (##inline ##vcore.cdr (bruijn ##.x.620 0 1))))
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var1)))) {
    VCallFuncWithGC(runtime, (VFunc)VSetCdr2, 3,
      _var0,
      _var1,
      statics->up->vars[2]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 2,
      _var0,
      VInlineCdr2(runtime,
        _var1));
}
}
static void _V10_Dappend_B_D142_V0k277(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.k.1389 1 0) (bruijn ##.x.617 1 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      statics->vars[1]);
}
static void _V10_Dappend_B_D142_V0k278(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dappend_B_D142_V0k278" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dappend_B_D142_V0k278, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.append!.142 2 74) (bruijn ##.k.1395 1 0) (bruijn ##.x.621 1 1) (bruijn ##.x.1396 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[74]), 3,
      statics->vars[0],
      statics->vars[1],
      _var0);
}
static void _V10_Dappend_B_D142_V0k280(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dappend_B_D142_V0k280" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dappend_B_D142_V0k280, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.append!.142 3 74) (bruijn ##.k.1397 2 0) (bruijn ##.x.624 2 1) (bruijn ##.x.1398 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[74]), 3,
      statics->up->vars[0],
      statics->up->vars[1],
      _var0);
}
static void _V10_Dappend_B_D142_V0k279(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dappend_B_D142_V0k279" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dappend_B_D142_V0k279, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.append!.142 2 74) (close _V10_Dappend_B_D142_V0k280) (bruijn ##.y.625 1 2) (bruijn ##.x.1399 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[74]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dappend_B_D142_V0k280, self)))),
      statics->vars[2],
      _var0);
}
__attribute__((used)) static void _V20CaseError__V50_V0vanity_V0list_V0append_B(VRuntime * runtime, VEnv * statics, int argc, ...) {
 // ("_V50_V0vanity_V0list_V0append_B" #t (1 ((bruijn ##.k.1387 0 0) '())) (2 ((bruijn ##.k.1388 0 0) (bruijn ##.x.616 0 1))) (3 (if (##inline ##vcore.null? (bruijn ##.x.617 0 1)) ((bruijn ##.k.1389 0 0) (bruijn ##.y.618 0 2)) (letrec 1 ((close _V10_Dloop_D619_V0lambda111)) ((bruijn ##.loop.619 0 0) (close _V10_Dappend_B_D142_V0k277) (bruijn ##.x.617 1 1))))) (4 ((bruijn ##.append!.142 1 74) (close _V10_Dappend_B_D142_V0k278) (bruijn ##.y.622 0 2) (bruijn ##.z.623 0 3))) (5 ((bruijn ##.append!.142 1 74) (close _V10_Dappend_B_D142_V0k279) (bruijn ##.z.626 0 3) (bruijn ##.w.627 0 4))) (1 + ((bruijn ##.fold-right.125 1 57) (bruijn ##.k.1400 0 0) (bruijn ##.append!.142 1 74) '() (bruijn ##.lsts.628 0 1))))
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
  // ((bruijn ##.k.1387 0 0) '())
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VNULL);
}
__attribute__((used)) static void _V20Case1__V50_V0vanity_V0list_V0append_B(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V20Case1__V50_V0vanity_V0list_V0append_B" };
 VRecordCall2(runtime, &dbg);
  // ((bruijn ##.k.1388 0 0) (bruijn ##.x.616 0 1))
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
  // (if (##inline ##vcore.null? (bruijn ##.x.617 0 1)) ((bruijn ##.k.1389 0 0) (bruijn ##.y.618 0 2)) (letrec 1 ((close _V10_Dloop_D619_V0lambda111)) ((bruijn ##.loop.619 0 0) (close _V10_Dappend_B_D142_V0k277) (bruijn ##.x.617 1 1))))
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
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D619_V0lambda111, self))));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, self->vars[0]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dappend_B_D142_V0k277, self)))),
      statics->vars[1]);
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
  // ((bruijn ##.append!.142 1 74) (close _V10_Dappend_B_D142_V0k278) (bruijn ##.y.622 0 2) (bruijn ##.z.623 0 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[74]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dappend_B_D142_V0k278, self)))),
      _var2,
      _var3);
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
  // ((bruijn ##.append!.142 1 74) (close _V10_Dappend_B_D142_V0k279) (bruijn ##.z.626 0 3) (bruijn ##.w.627 0 4))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[74]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dappend_B_D142_V0k279, self)))),
      _var3,
      _var4);
}
__attribute__((used)) static void _V20Case5__V50_V0vanity_V0list_V0append_B(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, ...) {
 static VDebugInfo dbg = { "_V20Case5__V50_V0vanity_V0list_V0append_B" };
 VRecordCall2(runtime, &dbg);
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 1, argc, _var0);
  // ((bruijn ##.fold-right.125 1 57) (bruijn ##.k.1400 0 0) (bruijn ##.append!.142 1 74) '() (bruijn ##.lsts.628 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[57]), 4,
      _var0,
      statics->vars[74],
      VNULL,
      _varargs);
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
static void _V10_Dlp_D630_V0k283(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlp_D630_V0k283" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlp_D630_V0k283, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.1896) ((##vcore.+ (bruijn ##.reg.1895 3 0) 1)) (if (##inline ##vcore.not (##inline ##vcore.eq? (bruijn ##.x.1407 2 0) (bruijn ##.x.1408 1 0))) ((bruijn ##.lp.630 6 0) (bruijn ##.k.1402 5 0) (bruijn ##.x.1407 2 0) (bruijn ##.x.1408 1 0) (bruijn ##.reg.1896 0 0)) ((bruijn ##.k.1402 5 0) #f)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      statics->up->up->vars[0],
      VEncodeInt(1l));
if(VDecodeBool(
VInlineNot2(runtime,
        VInlineEq2(runtime,
        statics->up->vars[0],
        statics->vars[0])))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 4,
      VGetArg(statics, 5-1, 0),
      statics->up->vars[0],
      statics->vars[0],
      self->vars[0]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VEncodeBool(false));
}
    }
}
static void _V10_Dlp_D630_V0k282(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlp_D630_V0k282" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlp_D630_V0k282, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dlp_D630_V0k283) (##inline ##vcore.cdr (bruijn ##.lag.632 3 2)))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dlp_D630_V0k283, self)), 1,
      VInlineCdr2(runtime,
        statics->up->up->vars[2]));
}
static void _V10_Dlp_D630_V0k281(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlp_D630_V0k281" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlp_D630_V0k281, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.1895) ((##vcore.+ (bruijn ##.len.633 2 3) 1)) (if (##inline ##vcore.pair? (bruijn ##.x.1404 1 0)) ((close _V10_Dlp_D630_V0k282) (##inline ##vcore.cdr (bruijn ##.x.1404 1 0))) ((bruijn ##.k.1402 2 0) (bruijn ##.reg.1895 0 0))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      statics->up->vars[3],
      VEncodeInt(1l));
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->vars[0]))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dlp_D630_V0k282, self)), 1,
      VInlineCdr2(runtime,
        statics->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      self->vars[0]);
}
    }
}
static void _V10_Dlp_D630_V0lambda112(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V10_Dlp_D630_V0lambda112" };
 VRecordCall2(runtime, &dbg);
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlp_D630_V0lambda112, got ~D~N"
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
  // (if (##inline ##vcore.pair? (bruijn ##.x.631 0 1)) ((close _V10_Dlp_D630_V0k281) (##inline ##vcore.cdr (bruijn ##.x.631 0 1))) ((bruijn ##.k.1402 0 0) (bruijn ##.len.633 0 3)))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var1))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dlp_D630_V0k281, self)), 1,
      VInlineCdr2(runtime,
        _var1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _var3);
}
}
void _V50_V0vanity_V0list_V0length_P(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0length_P" };
 VRecordCall2(runtime, &dbg);
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
  // (letrec 1 ((close _V10_Dlp_D630_V0lambda112)) ((bruijn ##.lp.630 0 0) (bruijn ##.k.1401 1 0) (bruijn ##.x.629 1 1) (bruijn ##.x.629 1 1) 0))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dlp_D630_V0lambda112, self))));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, self->vars[0]), 4,
      statics->vars[0],
      statics->vars[1],
      statics->vars[1],
      VEncodeInt(0l));
    }
}
static void _V10_Dlp_D640_V0k285(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlp_D640_V0k285" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlp_D640_V0k285, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (##inline ##vcore.pair? (bruijn ##.tail.642 0 0)) ((bruijn ##.lp.640 2 0) (bruijn ##.k.1413 1 0) (bruijn ##.tail.642 0 0)) ((bruijn ##.k.1413 1 0) (bruijn ##.lis.641 1 1)))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 2,
      statics->vars[0],
      _var0);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      statics->vars[1]);
}
}
static void _V10_Dlp_D640_V0lambda113(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V10_Dlp_D640_V0lambda113" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlp_D640_V0lambda113, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((close _V10_Dlp_D640_V0k285) (##inline ##vcore.cdr (bruijn ##.lis.641 0 1)))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dlp_D640_V0k285, self)), 1,
      VInlineCdr2(runtime,
        _var1));
}
static void _V50_V0vanity_V0list_V0last__pair_V0k284(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (letrec 1 ((close _V10_Dlp_D640_V0lambda113)) ((bruijn ##.lp.640 0 0) (bruijn ##.k.1412 1 0) (bruijn ##.lis.639 1 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dlp_D640_V0lambda113, self))));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, self->vars[0]), 2,
      statics->vars[0],
      statics->vars[1]);
    }
}
void _V50_V0vanity_V0list_V0last__pair(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0last__pair" };
 VRecordCall2(runtime, &dbg);
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
  // ((bruijn ##.check-arg.148 1 80) (close _V50_V0vanity_V0list_V0last__pair_V0k284) (##intrinsic ##vcore.pair?) (bruijn ##.lis.639 0 1) (bruijn ##.last-pair.144 1 76))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[80]), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0last__pair_V0k284, self)))),
      _V40_V10vcore_Dpair_Q,
      _var1,
      statics->vars[76]);
}
void _V50_V0vanity_V0list_V0last_V0k286(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0last_V0k286" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0last_V0k286, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1415 1 0) (##inline ##vcore.car (bruijn ##.x.1416 0 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VInlineCar2(runtime,
        _var0));
}
void _V50_V0vanity_V0list_V0last(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0last" };
 VRecordCall2(runtime, &dbg);
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
  // ((bruijn ##.last-pair.144 1 76) (close _V50_V0vanity_V0list_V0last_V0k286) (bruijn ##.lis.643 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[76]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0last_V0k286, self)))),
      _var1);
}
static void _V10_Dlp_D647_V0k289(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.k.1419 0 0) (bruijn ##.lis.644 3 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, self->vars[0]), 1,
      statics->up->up->vars[1]);
}
static void _V10_Dlp_D647_V0lambda114(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V10_Dlp_D647_V0lambda114" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlp_D647_V0lambda114, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (if (##inline ##vcore.pair? (bruijn ##.lead.649 0 2)) ((bruijn ##.lp.647 1 0) (bruijn ##.k.1419 0 0) (##inline ##vcore.cdr (bruijn ##.lag.648 0 1)) (##inline ##vcore.cdr (bruijn ##.lead.649 0 2))) (##vcore.set-cdr! (close _V10_Dlp_D647_V0k289) (bruijn ##.lag.648 0 1) '()))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var2))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 3,
      _var0,
      VInlineCdr2(runtime,
        _var1),
      VInlineCdr2(runtime,
        _var2));
} else {
    VCallFuncWithGC(runtime, (VFunc)VSetCdr2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dlp_D647_V0k289, self)))),
      _var1,
      VNULL);
}
}
void _V50_V0vanity_V0list_V0drop__right_B_V0k288(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0drop__right_B_V0k288" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0drop__right_B_V0k288, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.lead.646 0 0)) (letrec 1 ((close _V10_Dlp_D647_V0lambda114)) ((bruijn ##.lp.647 0 0) (bruijn ##.k.1417 2 0) (bruijn ##.lis.644 2 1) (##inline ##vcore.cdr (bruijn ##.lead.646 1 0)))) ((bruijn ##.k.1417 1 0) '()))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dlp_D647_V0lambda114, self))));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, self->vars[0]), 3,
      statics->up->vars[0],
      statics->up->vars[1],
      VInlineCdr2(runtime,
        statics->vars[0]));
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VNULL);
}
}
static void _V50_V0vanity_V0list_V0drop__right_B_V0k287(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.drop.153 1 85) (close _V50_V0vanity_V0list_V0drop__right_B_V0k288) (bruijn ##.lis.644 0 1) (bruijn ##.k.645 0 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[85]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0drop__right_B_V0k288, self)))),
      self->vars[1],
      self->vars[2]);
}
void _V50_V0vanity_V0list_V0drop__right_B(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0drop__right_B" };
 VRecordCall2(runtime, &dbg);
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
  // ((bruijn ##.check-arg.148 1 80) (close _V50_V0vanity_V0list_V0drop__right_B_V0k287) (##intrinsic ##vcore.int?) (bruijn ##.k.645 0 2) (bruijn ##.drop-right!.146 1 78))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[80]), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0drop__right_B_V0k287, self)))),
      _V40_V10vcore_Dint_Q,
      _var2,
      statics->vars[78]);
}
static void _V50_V0vanity_V0list_V0take_B_V0k293(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.k.1424 3 0) (bruijn ##.lis.650 3 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      statics->up->up->vars[1]);
}
void _V50_V0vanity_V0list_V0take_B_V0k292(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0take_B_V0k292" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0take_B_V0k292, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.set-cdr! (close _V50_V0vanity_V0list_V0take_B_V0k293) (bruijn ##.x.1426 0 0) '())
    VCallFuncWithGC(runtime, (VFunc)VSetCdr2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0take_B_V0k293, self)))),
      _var0,
      VNULL);
}
void _V50_V0vanity_V0list_V0take_B_V0k291(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0take_B_V0k291" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0take_B_V0k291, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1425 0 0) ((bruijn ##.k.1424 1 0) '()) (basic-block 1 1 (##.reg.1897) ((##vcore.- (bruijn ##.k.651 2 2) 1)) ((bruijn ##.drop.153 3 85) (close _V50_V0vanity_V0list_V0take_B_V0k292) (bruijn ##.lis.650 2 1) (bruijn ##.reg.1897 0 0))))
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
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[85]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0take_B_V0k292, self)))),
      statics->up->vars[1],
      self->vars[0]);
    }
}
}
static void _V50_V0vanity_V0list_V0take_B_V0k290(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.zero?.6 2 4) (close _V50_V0vanity_V0list_V0take_B_V0k291) (bruijn ##.k.651 0 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[4]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0take_B_V0k291, self)))),
      self->vars[2]);
}
void _V50_V0vanity_V0list_V0take_B(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0take_B" };
 VRecordCall2(runtime, &dbg);
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
  // ((bruijn ##.check-arg.148 1 80) (close _V50_V0vanity_V0list_V0take_B_V0k290) (##intrinsic ##vcore.int?) (bruijn ##.k.651 0 2) (bruijn ##.take!.147 1 79))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[80]), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0take_B_V0k290, self)))),
      _V40_V10vcore_Dint_Q,
      _var2,
      statics->vars[79]);
}
static void _V10_Dlp_D655_V0k295(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlp_D655_V0k295" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlp_D655_V0k295, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.lp.655 3 0) (bruijn ##.k.1429 2 0) (bruijn ##.x.1431 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 2,
      statics->up->vars[0],
      _var0);
}
static void _V10_Dlp_D655_V0k294(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlp_D655_V0k294" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlp_D655_V0k294, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1430 0 0) ((bruijn ##.k.1429 1 0) (bruijn ##.val.656 1 1)) ((bruijn ##.error.5 5 3) (close _V10_Dlp_D655_V0k295) (##string ##.string.1915) (bruijn ##.val.656 1 1) (bruijn ##.pred.652 3 1) (bruijn ##.caller.654 3 3)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      statics->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 3)), 5,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dlp_D655_V0k295, self)))),
      VEncodePointer(&_V10_Dstring_D1915.sym, VPOINTER_OTHER),
      statics->vars[1],
      statics->up->up->vars[1],
      statics->up->up->vars[3]);
}
}
static void _V10_Dlp_D655_V0lambda115(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V10_Dlp_D655_V0lambda115" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlp_D655_V0lambda115, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.pred.652 2 1) (close _V10_Dlp_D655_V0k294) (bruijn ##.val.656 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[1]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dlp_D655_V0k294, self)))),
      _var1);
}
void _V50_V0vanity_V0list_V0check__arg(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0check__arg" };
 VRecordCall2(runtime, &dbg);
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
  // (letrec 1 ((close _V10_Dlp_D655_V0lambda115)) ((bruijn ##.lp.655 0 0) (bruijn ##.k.1428 1 0) (bruijn ##.val.653 1 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dlp_D655_V0lambda115, self))));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, self->vars[0]), 2,
      statics->vars[0],
      statics->vars[2]);
    }
}
static void _V50_V0vanity_V0list_V0split__at_B_V0k299(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.values.4 5 2) (bruijn ##.k.1432 3 0) (bruijn ##.x.657 3 1) (##inline ##vcore.cdr (bruijn ##.prev.659 0 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 2)), 3,
      statics->up->up->vars[0],
      statics->up->up->vars[1],
      VInlineCdr2(runtime,
        self->vars[0]));
}
void _V50_V0vanity_V0list_V0split__at_B_V0k298(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0split__at_B_V0k298" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0split__at_B_V0k298, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.set-cdr! (close _V50_V0vanity_V0list_V0split__at_B_V0k299) (bruijn ##.prev.659 0 0) '())
    VCallFuncWithGC(runtime, (VFunc)VSetCdr2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0split__at_B_V0k299, self)))),
      _var0,
      VNULL);
}
void _V50_V0vanity_V0list_V0split__at_B_V0k297(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0split__at_B_V0k297" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0split__at_B_V0k297, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1433 0 0) ((bruijn ##.values.4 3 2) (bruijn ##.k.1432 1 0) '() (bruijn ##.x.657 1 1)) (basic-block 1 1 (##.reg.1898) ((##vcore.- (bruijn ##.k.658 2 2) 1)) ((bruijn ##.drop.153 3 85) (close _V50_V0vanity_V0list_V0split__at_B_V0k298) (bruijn ##.x.657 2 1) (bruijn ##.reg.1898 0 0))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[2]), 3,
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
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[85]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0split__at_B_V0k298, self)))),
      statics->up->vars[1],
      self->vars[0]);
    }
}
}
static void _V50_V0vanity_V0list_V0split__at_B_V0k296(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.zero?.6 2 4) (close _V50_V0vanity_V0list_V0split__at_B_V0k297) (bruijn ##.k.658 0 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[4]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0split__at_B_V0k297, self)))),
      self->vars[2]);
}
void _V50_V0vanity_V0list_V0split__at_B(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0split__at_B" };
 VRecordCall2(runtime, &dbg);
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
  // ((bruijn ##.check-arg.148 1 80) (close _V50_V0vanity_V0list_V0split__at_B_V0k296) (##intrinsic ##vcore.int?) (bruijn ##.k.658 0 2) (bruijn ##.split-at!.149 1 81))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[80]), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0split__at_B_V0k296, self)))),
      _V40_V10vcore_Dint_Q,
      _var2,
      statics->vars[81]);
}
void _V50_V0vanity_V0list_V0split__at_V0lambda116(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0split__at_V0lambda116" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0split__at_V0lambda116, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.1899) ((##vcore.- (bruijn ##.i.662 2 2) 1)) ((bruijn ##.split-at.150 3 82) (bruijn ##.k.1437 1 0) (##inline ##vcore.cdr (bruijn ##.lst.661 2 1)) (bruijn ##.reg.1899 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VSub2(runtime, NULL,
      statics->up->vars[2],
      VEncodeInt(1l));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[82]), 3,
      statics->vars[0],
      VInlineCdr2(runtime,
        statics->up->vars[1]),
      self->vars[0]);
    }
}
void _V50_V0vanity_V0list_V0split__at_V0lambda117(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0split__at_V0lambda117" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0split__at_V0lambda117, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  // ((bruijn ##.values.4 3 2) (bruijn ##.k.1440 0 0) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.lst.661 1 1)) (bruijn ##.t.663 0 1)) (bruijn ##.d.664 0 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[2]), 3,
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
  // (if (##inline ##vcore.eq? (bruijn ##.i.662 0 2) 0) ((bruijn ##.values.4 2 2) (bruijn ##.k.1435 0 0) '() (bruijn ##.lst.661 0 1)) (##vcore.call-with-values (bruijn ##.k.1435 0 0) (close _V50_V0vanity_V0list_V0split__at_V0lambda116) (close _V50_V0vanity_V0list_V0split__at_V0lambda117)))
if(VDecodeBool(
VInlineEq2(runtime,
        _var2,
        VEncodeInt(0l)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[2]), 3,
      _var0,
      VNULL,
      _var1);
} else {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0split__at_V0lambda116, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0split__at_V0lambda117, self)))));
}
}
static void _V10_Dloop_D667_V0k300(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D667_V0k300" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D667_V0k300, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1444 2 0) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.lst.668 2 1)) (bruijn ##.x.1447 0 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VInlineCons2(runtime,
        VInlineCar2(runtime,
        statics->up->vars[1]),
        _var0));
}
static void _V10_Dloop_D667_V0lambda118(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V10_Dloop_D667_V0lambda118" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D667_V0lambda118, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (if (##inline ##vcore.eq? (bruijn ##.len.669 0 2) (bruijn ##.i.666 2 2)) ((bruijn ##.k.1444 0 0) '()) (basic-block 1 1 (##.reg.1900) ((##vcore.- (bruijn ##.len.669 1 2) 1)) ((bruijn ##.loop.667 2 0) (close _V10_Dloop_D667_V0k300) (##inline ##vcore.cdr (bruijn ##.lst.668 1 1)) (bruijn ##.reg.1900 0 0))))
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
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D667_V0k300, self)))),
      VInlineCdr2(runtime,
        statics->vars[1]),
      self->vars[0]);
    }
}
}
void _V50_V0vanity_V0list_V0drop__right_V0k301(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0drop__right_V0k301" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0drop__right_V0k301, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.loop.667 1 0) (bruijn ##.k.1443 2 0) (bruijn ##.lst.665 2 1) (bruijn ##.x.1450 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 3,
      statics->up->vars[0],
      statics->up->vars[1],
      _var0);
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
  // (letrec 1 ((close _V10_Dloop_D667_V0lambda118)) ((bruijn ##.my-num-pairs.174 2 106) (close _V50_V0vanity_V0list_V0drop__right_V0k301) (bruijn ##.lst.665 1 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D667_V0lambda118, self))));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[106]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0drop__right_V0k301, self)))),
      statics->vars[1]);
    }
}
static void _V10_Dloop_D672_V0lambda119(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V10_Dloop_D672_V0lambda119" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D672_V0lambda119, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (if (##inline ##vcore.eq? (bruijn ##.len.674 0 2) (bruijn ##.i.671 2 2)) ((bruijn ##.k.1452 0 0) (bruijn ##.lst.673 0 1)) (basic-block 1 1 (##.reg.1901) ((##vcore.- (bruijn ##.len.674 1 2) 1)) ((bruijn ##.loop.672 2 0) (bruijn ##.k.1452 1 0) (##inline ##vcore.cdr (bruijn ##.lst.673 1 1)) (bruijn ##.reg.1901 0 0))))
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
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 3,
      statics->vars[0],
      VInlineCdr2(runtime,
        statics->vars[1]),
      self->vars[0]);
    }
}
}
void _V50_V0vanity_V0list_V0take__right_V0k302(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0take__right_V0k302" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0take__right_V0k302, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.loop.672 1 0) (bruijn ##.k.1451 2 0) (bruijn ##.lst.670 2 1) (bruijn ##.x.1456 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 3,
      statics->up->vars[0],
      statics->up->vars[1],
      _var0);
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
  // (letrec 1 ((close _V10_Dloop_D672_V0lambda119)) ((bruijn ##.my-num-pairs.174 2 106) (close _V50_V0vanity_V0list_V0take__right_V0k302) (bruijn ##.lst.670 1 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D672_V0lambda119, self))));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[106]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0take__right_V0k302, self)))),
      statics->vars[1]);
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
  // (if (##inline ##vcore.eq? (bruijn ##.i.676 0 2) 0) ((bruijn ##.k.1457 0 0) (bruijn ##.lst.675 0 1)) (basic-block 1 1 (##.reg.1902) ((##vcore.- (bruijn ##.i.676 1 2) 1)) ((bruijn ##.drop.153 2 85) (bruijn ##.k.1457 1 0) (##inline ##vcore.cdr (bruijn ##.lst.675 1 1)) (bruijn ##.reg.1902 0 0))))
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
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[85]), 3,
      statics->vars[0],
      VInlineCdr2(runtime,
        statics->vars[1]),
      self->vars[0]);
    }
}
}
void _V50_V0vanity_V0list_V0take_V0k303(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0take_V0k303" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0take_V0k303, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1461 2 0) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.lst.677 2 1)) (bruijn ##.x.1464 0 0)))
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
  // (if (##inline ##vcore.eq? (bruijn ##.i.678 0 2) 0) ((bruijn ##.k.1461 0 0) '()) (basic-block 1 1 (##.reg.1903) ((##vcore.- (bruijn ##.i.678 1 2) 1)) ((bruijn ##.take.154 2 86) (close _V50_V0vanity_V0list_V0take_V0k303) (##inline ##vcore.cdr (bruijn ##.lst.677 1 1)) (bruijn ##.reg.1903 0 0))))
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
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[86]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0take_V0k303, self)))),
      VInlineCdr2(runtime,
        statics->vars[1]),
      self->vars[0]);
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
  // ((bruijn ##.values.4 2 2) (bruijn ##.k.1467 0 0) (##inline ##vcore.car (bruijn ##.x.679 0 1)) (##inline ##vcore.cdr (bruijn ##.x.679 0 1)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[2]), 3,
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
  // ((bruijn ##.list-ref.7 2 5) (bruijn ##.k.1470 0 0) (bruijn ##.x.680 0 1) 9)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[5]), 3,
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
  // ((bruijn ##.list-ref.7 2 5) (bruijn ##.k.1471 0 0) (bruijn ##.x.681 0 1) 8)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[5]), 3,
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
  // ((bruijn ##.list-ref.7 2 5) (bruijn ##.k.1472 0 0) (bruijn ##.x.682 0 1) 7)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[5]), 3,
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
  // ((bruijn ##.list-ref.7 2 5) (bruijn ##.k.1473 0 0) (bruijn ##.x.683 0 1) 6)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[5]), 3,
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
  // ((bruijn ##.list-ref.7 2 5) (bruijn ##.k.1474 0 0) (bruijn ##.x.684 0 1) 5)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[5]), 3,
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
  // ((bruijn ##.list-ref.7 2 5) (bruijn ##.k.1475 0 0) (bruijn ##.x.685 0 1) 4)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[5]), 3,
      _var0,
      _var1,
      VEncodeInt(4l));
}
static void _V10_Dlp2_D693_V0k309(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlp2_D693_V0k309" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlp2_D693_V0k309, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.1485 0 0) ((bruijn ##.lp1.688 8 0) (bruijn ##.k.1483 2 0) (bruijn ##.x.1480 5 0) (bruijn ##.x.1481 4 0)) ((bruijn ##.k.1483 2 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 0)), 3,
      statics->up->vars[0],
      VGetArg(statics, 5-1, 0),
      statics->up->up->up->vars[0]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dlp2_D693_V0k311(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlp2_D693_V0k311" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlp2_D693_V0k311, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.1487 0 0) ((bruijn ##.lp2.693 4 0) (bruijn ##.k.1483 3 0) (##inline ##vcore.cdr (bruijn ##.pair-a.694 3 1)) (##inline ##vcore.cdr (bruijn ##.pair-b.695 3 2))) ((bruijn ##.k.1483 3 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 3,
      statics->up->up->vars[0],
      VInlineCdr2(runtime,
        statics->up->up->vars[1]),
      VInlineCdr2(runtime,
        statics->up->up->vars[2]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dlp2_D693_V0k310(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlp2_D693_V0k310" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlp2_D693_V0k310, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.not (bruijn ##.x.1492 0 0)) ((bruijn ##.=.686 10 1) (close _V10_Dlp2_D693_V0k311) (##inline ##vcore.car (bruijn ##.pair-a.694 2 1)) (##inline ##vcore.car (bruijn ##.pair-b.695 2 2))) ((bruijn ##.k.1483 2 0) #f))
if(VDecodeBool(
VInlineNot2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 1)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dlp2_D693_V0k311, self)))),
      VInlineCar2(runtime,
        statics->up->vars[1]),
      VInlineCar2(runtime,
        statics->up->vars[2]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dlp2_D693_V0k308(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlp2_D693_V0k308" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlp2_D693_V0k308, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1484 0 0) ((bruijn ##.null-list?.168 10 100) (close _V10_Dlp2_D693_V0k309) (bruijn ##.pair-b.695 1 2)) ((bruijn ##.null-list?.168 10 100) (close _V10_Dlp2_D693_V0k310) (bruijn ##.pair-b.695 1 2)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 100)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dlp2_D693_V0k309, self)))),
      statics->vars[2]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 100)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dlp2_D693_V0k310, self)))),
      statics->vars[2]);
}
}
static void _V10_Dlp2_D693_V0lambda121(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V10_Dlp2_D693_V0lambda121" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlp2_D693_V0lambda121, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((bruijn ##.null-list?.168 9 100) (close _V10_Dlp2_D693_V0k308) (bruijn ##.pair-a.694 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 100)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dlp2_D693_V0k308, self)))),
      _var1);
}
static void _V10_Dlp1_D688_V0k307(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlp1_D688_V0k307" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlp1_D688_V0k307, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.eq? (bruijn ##.list-a.689 3 1) (bruijn ##.x.1480 1 0)) ((bruijn ##.lp1.688 4 0) (bruijn ##.k.1478 3 0) (bruijn ##.x.1480 1 0) (bruijn ##.x.1481 0 0)) (letrec 1 ((close _V10_Dlp2_D693_V0lambda121)) ((bruijn ##.lp2.693 0 0) (bruijn ##.k.1478 4 0) (bruijn ##.list-a.689 4 1) (bruijn ##.x.1480 2 0))))
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->up->vars[1],
        statics->vars[0]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 3,
      statics->up->up->vars[0],
      statics->vars[0],
      _var0);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dlp2_D693_V0lambda121, self))));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, self->vars[0]), 3,
      statics->up->up->up->vars[0],
      statics->up->up->up->vars[1],
      statics->up->vars[0]);
    }
}
}
static void _V10_Dlp1_D688_V0k306(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlp1_D688_V0k306" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlp1_D688_V0k306, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dlp1_D688_V0k307) (##inline ##vcore.cdr (bruijn ##.others.690 2 2)))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dlp1_D688_V0k307, self)), 1,
      VInlineCdr2(runtime,
        statics->up->vars[2]));
}
static void _V10_Dlp1_D688_V0k305(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlp1_D688_V0k305" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlp1_D688_V0k305, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1479 0 0) ((bruijn ##.k.1478 1 0) (bruijn ##.p.1479 0 0)) ((close _V10_Dlp1_D688_V0k306) (##inline ##vcore.car (bruijn ##.others.690 1 2))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      _var0);
} else {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dlp1_D688_V0k306, self)), 1,
      VInlineCar2(runtime,
        statics->vars[2]));
}
}
static void _V10_Dlp1_D688_V0lambda120(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V10_Dlp1_D688_V0lambda120" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlp1_D688_V0lambda120, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((close _V10_Dlp1_D688_V0k305) (##inline ##vcore.null? (bruijn ##.others.690 0 2)))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dlp1_D688_V0k305, self)), 1,
      VInlineNullP2(runtime,
        _var2));
}
void _V50_V0vanity_V0list_V0list_E_V0k304(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0list_E_V0k304" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0list_E_V0k304, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1477 0 0) ((bruijn ##.k.1476 1 0) (bruijn ##.p.1477 0 0)) (letrec 1 ((close _V10_Dlp1_D688_V0lambda120)) ((bruijn ##.lp1.688 0 0) (bruijn ##.k.1476 2 0) (##inline ##vcore.car (bruijn ##.lists.687 2 2)) (##inline ##vcore.cdr (bruijn ##.lists.687 2 2)))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      _var0);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dlp1_D688_V0lambda120, self))));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, self->vars[0]), 3,
      statics->up->vars[0],
      VInlineCar2(runtime,
        statics->up->vars[2]),
      VInlineCdr2(runtime,
        statics->up->vars[2]));
    }
}
}
void _V50_V0vanity_V0list_V0list_E(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, ...) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0list_E" };
 VRecordCall2(runtime, &dbg);
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
  // ((close _V50_V0vanity_V0list_V0list_E_V0k304) (##inline ##vcore.null? (bruijn ##.lists.687 0 2)))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0list_E_V0k304, self)), 1,
      VInlineNullP2(runtime,
        _varargs));
}
static void _V10_Dloop_D698_V0k313(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D698_V0k313" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D698_V0k313, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1496 3 0) (##inline ##vcore.cons (bruijn ##.x.1498 2 0) (bruijn ##.x.1499 0 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VInlineCons2(runtime,
        statics->up->vars[0],
        _var0));
}
static void _V10_Dloop_D698_V0k312(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D698_V0k312" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D698_V0k312, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.1904) ((##vcore.+ (bruijn ##.i.699 2 1) 1)) ((bruijn ##.loop.698 3 0) (close _V10_Dloop_D698_V0k313) (bruijn ##.reg.1904 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      statics->up->vars[1],
      VEncodeInt(1l));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D698_V0k313, self)))),
      self->vars[0]);
    }
}
static void _V10_Dloop_D698_V0lambda122(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V10_Dloop_D698_V0lambda122" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D698_V0lambda122, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (if (##inline ##vcore.eq? (bruijn ##.i.699 0 1) (bruijn ##.n.696 2 1)) ((bruijn ##.k.1496 0 0) '()) ((bruijn ##.proc.697 2 2) (close _V10_Dloop_D698_V0k312) (bruijn ##.i.699 0 1)))
if(VDecodeBool(
VInlineEq2(runtime,
        _var1,
        statics->up->vars[1]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VNULL);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[2]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D698_V0k312, self)))),
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
  // (letrec 1 ((close _V10_Dloop_D698_V0lambda122)) ((bruijn ##.loop.698 0 0) (bruijn ##.k.1495 1 0) 0))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D698_V0lambda122, self))));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, self->vars[0]), 2,
      statics->vars[0],
      VEncodeInt(0l));
    }
}
void _V50_V0vanity_V0list_V0null__list_Q(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0null__list_Q" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0null__list_Q, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // (if (##inline ##vcore.pair? (bruijn ##.l.700 0 1)) ((bruijn ##.k.1501 0 0) #f) (if (##inline ##vcore.null? (bruijn ##.l.700 0 1)) ((bruijn ##.k.1501 0 0) #t) ((bruijn ##.error.5 2 3) (bruijn ##.k.1501 0 0) (##string ##.string.1916) (bruijn ##.l.700 0 1))))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var1))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
} else {
if(VDecodeBool(
VInlineNullP2(runtime,
        _var1))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(true));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[3]), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1916.sym, VPOINTER_OTHER),
      _var1);
}
}
}
void _V50_V0vanity_V0list_V0not__pair_Q(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0not__pair_Q" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0not__pair_Q, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.k.1504 0 0) (##inline ##vcore.not (##inline ##vcore.pair? (bruijn ##.x.701 0 1))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VInlineNot2(runtime,
        VInlinePairP2(runtime,
        _var1)));
}
static void _V10_Dlp_D703_V0k317(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlp_D703_V0k317" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlp_D703_V0k317, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.1512 0 0) ((bruijn ##.k.1507 4 0) (bruijn ##.p.1512 0 0)) ((bruijn ##.lp.703 5 0) (bruijn ##.k.1507 4 0) (bruijn ##.x.1510 2 0) (bruijn ##.x.1511 1 0)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      _var0);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 3,
      statics->up->up->up->vars[0],
      statics->up->vars[0],
      statics->vars[0]);
}
}
static void _V10_Dlp_D703_V0k316(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlp_D703_V0k316" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlp_D703_V0k316, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dlp_D703_V0k317) (##inline ##vcore.eq? (bruijn ##.x.1510 1 0) (bruijn ##.x.1511 0 0)))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dlp_D703_V0k317, self)), 1,
      VInlineEq2(runtime,
        statics->vars[0],
        _var0));
}
static void _V10_Dlp_D703_V0k315(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlp_D703_V0k315" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlp_D703_V0k315, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dlp_D703_V0k316) (##inline ##vcore.cdr (bruijn ##.lag.705 2 2)))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dlp_D703_V0k316, self)), 1,
      VInlineCdr2(runtime,
        statics->up->vars[2]));
}
static void _V10_Dlp_D703_V0k314(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlp_D703_V0k314" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlp_D703_V0k314, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.x.706 0 0)) ((close _V10_Dlp_D703_V0k315) (##inline ##vcore.cdr (bruijn ##.x.706 0 0))) ((bruijn ##.k.1507 1 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dlp_D703_V0k315, self)), 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dlp_D703_V0lambda123(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V10_Dlp_D703_V0lambda123" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlp_D703_V0lambda123, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (if (##inline ##vcore.pair? (bruijn ##.x.704 0 1)) ((close _V10_Dlp_D703_V0k314) (##inline ##vcore.cdr (bruijn ##.x.704 0 1))) ((bruijn ##.k.1507 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var1))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dlp_D703_V0k314, self)), 1,
      VInlineCdr2(runtime,
        _var1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0list_V0circular__list_Q(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0circular__list_Q" };
 VRecordCall2(runtime, &dbg);
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
  // (letrec 1 ((close _V10_Dlp_D703_V0lambda123)) ((bruijn ##.lp.703 0 0) (bruijn ##.k.1506 1 0) (bruijn ##.x.702 1 1) (bruijn ##.x.702 1 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dlp_D703_V0lambda123, self))));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, self->vars[0]), 3,
      statics->vars[0],
      statics->vars[1],
      statics->vars[1]);
    }
}
static void _V10_Dlp_D710_V0k320(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlp_D710_V0k320" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlp_D710_V0k320, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (##inline ##vcore.not (##inline ##vcore.eq? (bruijn ##.x.1517 1 0) (bruijn ##.x.1518 0 0))) ((bruijn ##.lp.710 4 0) (bruijn ##.k.1514 3 0) (bruijn ##.x.1517 1 0) (bruijn ##.x.1518 0 0)) ((bruijn ##.k.1514 3 0) #f))
if(VDecodeBool(
VInlineNot2(runtime,
        VInlineEq2(runtime,
        statics->vars[0],
        _var0)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 3,
      statics->up->up->vars[0],
      statics->vars[0],
      _var0);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dlp_D710_V0k319(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlp_D710_V0k319" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlp_D710_V0k319, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dlp_D710_V0k320) (##inline ##vcore.cdr (bruijn ##.lag.712 2 2)))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dlp_D710_V0k320, self)), 1,
      VInlineCdr2(runtime,
        statics->up->vars[2]));
}
static void _V10_Dlp_D710_V0k318(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlp_D710_V0k318" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlp_D710_V0k318, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.x.713 0 0)) ((close _V10_Dlp_D710_V0k319) (##inline ##vcore.cdr (bruijn ##.x.713 0 0))) ((bruijn ##.k.1514 1 0) (##inline ##vcore.not (##inline ##vcore.null? (bruijn ##.x.713 0 0)))))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dlp_D710_V0k319, self)), 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VInlineNot2(runtime,
        VInlineNullP2(runtime,
        _var0)));
}
}
static void _V10_Dlp_D710_V0lambda124(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V10_Dlp_D710_V0lambda124" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlp_D710_V0lambda124, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (if (##inline ##vcore.pair? (bruijn ##.x.711 0 1)) ((close _V10_Dlp_D710_V0k318) (##inline ##vcore.cdr (bruijn ##.x.711 0 1))) ((bruijn ##.k.1514 0 0) (##inline ##vcore.not (##inline ##vcore.null? (bruijn ##.x.711 0 1)))))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var1))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dlp_D710_V0k318, self)), 1,
      VInlineCdr2(runtime,
        _var1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VInlineNot2(runtime,
        VInlineNullP2(runtime,
        _var1)));
}
}
void _V50_V0vanity_V0list_V0dotted__list_Q(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0dotted__list_Q" };
 VRecordCall2(runtime, &dbg);
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
  // (letrec 1 ((close _V10_Dlp_D710_V0lambda124)) ((bruijn ##.lp.710 0 0) (bruijn ##.k.1513 1 0) (bruijn ##.x.709 1 1) (bruijn ##.x.709 1 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dlp_D710_V0lambda124, self))));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, self->vars[0]), 3,
      statics->vars[0],
      statics->vars[1],
      statics->vars[1]);
    }
}
static void _V10_Dlp_D717_V0k323(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlp_D717_V0k323" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlp_D717_V0k323, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (##inline ##vcore.not (##inline ##vcore.eq? (bruijn ##.x.1527 1 0) (bruijn ##.x.1528 0 0))) ((bruijn ##.lp.717 4 0) (bruijn ##.k.1524 3 0) (bruijn ##.x.1527 1 0) (bruijn ##.x.1528 0 0)) ((bruijn ##.k.1524 3 0) #f))
if(VDecodeBool(
VInlineNot2(runtime,
        VInlineEq2(runtime,
        statics->vars[0],
        _var0)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 3,
      statics->up->up->vars[0],
      statics->vars[0],
      _var0);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dlp_D717_V0k322(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlp_D717_V0k322" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlp_D717_V0k322, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dlp_D717_V0k323) (##inline ##vcore.cdr (bruijn ##.lag.719 2 2)))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dlp_D717_V0k323, self)), 1,
      VInlineCdr2(runtime,
        statics->up->vars[2]));
}
static void _V10_Dlp_D717_V0k321(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlp_D717_V0k321" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlp_D717_V0k321, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.x.720 0 0)) ((close _V10_Dlp_D717_V0k322) (##inline ##vcore.cdr (bruijn ##.x.720 0 0))) ((bruijn ##.k.1524 1 0) (##inline ##vcore.null? (bruijn ##.x.720 0 0))))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dlp_D717_V0k322, self)), 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VInlineNullP2(runtime,
        _var0));
}
}
static void _V10_Dlp_D717_V0lambda125(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V10_Dlp_D717_V0lambda125" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlp_D717_V0lambda125, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (if (##inline ##vcore.pair? (bruijn ##.x.718 0 1)) ((close _V10_Dlp_D717_V0k321) (##inline ##vcore.cdr (bruijn ##.x.718 0 1))) ((bruijn ##.k.1524 0 0) (##inline ##vcore.null? (bruijn ##.x.718 0 1))))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var1))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dlp_D717_V0k321, self)), 1,
      VInlineCdr2(runtime,
        _var1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VInlineNullP2(runtime,
        _var1));
}
}
void _V50_V0vanity_V0list_V0proper__list_Q(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0proper__list_Q" };
 VRecordCall2(runtime, &dbg);
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
  // (letrec 1 ((close _V10_Dlp_D717_V0lambda125)) ((bruijn ##.lp.717 0 0) (bruijn ##.k.1523 1 0) (bruijn ##.x.716 1 1) (bruijn ##.x.716 1 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dlp_D717_V0lambda125, self))));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, self->vars[0]), 3,
      statics->vars[0],
      statics->vars[1],
      statics->vars[1]);
    }
}
static void _V10_Dloop_D724_V0k324(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D724_V0k324" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D724_V0k324, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1532 2 0) (##inline ##vcore.cons (bruijn ##.i.725 2 1) (bruijn ##.x.1534 0 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VInlineCons2(runtime,
        statics->up->vars[1],
        _var0));
}
static void _V10_Dloop_D724_V0lambda126(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V10_Dloop_D724_V0lambda126" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D724_V0lambda126, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (if (##inline ##vcore.eq? (bruijn ##.i.725 0 1) (bruijn ##.n.723 2 1)) ((bruijn ##.k.1532 0 0) '()) (basic-block 1 1 (##.reg.1905) ((##vcore.+ (bruijn ##.i.725 1 1) 1)) ((bruijn ##.loop.724 2 0) (close _V10_Dloop_D724_V0k324) (bruijn ##.reg.1905 0 0))))
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
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D724_V0k324, self)))),
      self->vars[0]);
    }
}
}
static void _V10_Dloop_D728_V0k325(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D728_V0k325" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D728_V0k325, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1537 2 0) (##inline ##vcore.cons (bruijn ##.reg.1906 1 0) (bruijn ##.x.1540 0 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VInlineCons2(runtime,
        statics->vars[0],
        _var0));
}
static void _V10_Dloop_D728_V0lambda127(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V10_Dloop_D728_V0lambda127" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D728_V0lambda127, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (if (##inline ##vcore.eq? (bruijn ##.i.729 0 1) (bruijn ##.n.726 2 1)) ((bruijn ##.k.1537 0 0) '()) (basic-block 2 2 (##.reg.1906 ##.reg.1907) ((##vcore.+ (bruijn ##.i.729 1 1) (bruijn ##.b.727 3 2)) (##vcore.+ (bruijn ##.i.729 1 1) 1)) ((bruijn ##.loop.728 2 0) (close _V10_Dloop_D728_V0k325) (bruijn ##.reg.1907 0 1))))
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
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D728_V0k325, self)))),
      self->vars[1]);
    }
}
}
static void _V10_Dloop_D733_V0k326(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D733_V0k326" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D733_V0k326, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1543 2 0) (##inline ##vcore.cons (bruijn ##.reg.1909 1 1) (bruijn ##.x.1546 0 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VInlineCons2(runtime,
        statics->vars[1],
        _var0));
}
static void _V10_Dloop_D733_V0lambda128(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V10_Dloop_D733_V0lambda128" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D733_V0lambda128, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (if (##inline ##vcore.eq? (bruijn ##.i.734 0 1) (bruijn ##.n.730 2 1)) ((bruijn ##.k.1543 0 0) '()) (basic-block 3 3 (##.reg.1908 ##.reg.1909 ##.reg.1910) ((##vcore.* (bruijn ##.s.732 3 3) (bruijn ##.i.734 1 1)) (##vcore.+ (bruijn ##.reg.1908 0 0) (bruijn ##.b.731 3 2)) (##vcore.+ (bruijn ##.i.734 1 1) 1)) ((bruijn ##.loop.733 2 0) (close _V10_Dloop_D733_V0k326) (bruijn ##.reg.1910 0 2))))
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
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D733_V0k326, self)))),
      self->vars[2]);
    }
}
}
__attribute__((used)) static void _V20CaseError__V50_V0vanity_V0list_V0iota(VRuntime * runtime, VEnv * statics, int argc, ...) {
 // ("_V50_V0vanity_V0list_V0iota" #t (2 (letrec 1 ((close _V10_Dloop_D724_V0lambda126)) ((bruijn ##.loop.724 0 0) (bruijn ##.k.1531 1 0) 0))) (3 (letrec 1 ((close _V10_Dloop_D728_V0lambda127)) ((bruijn ##.loop.728 0 0) (bruijn ##.k.1536 1 0) 0))) (4 (letrec 1 ((close _V10_Dloop_D733_V0lambda128)) ((bruijn ##.loop.733 0 0) (bruijn ##.k.1542 1 0) 0))))
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
  // (letrec 1 ((close _V10_Dloop_D724_V0lambda126)) ((bruijn ##.loop.724 0 0) (bruijn ##.k.1531 1 0) 0))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D724_V0lambda126, self))));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, self->vars[0]), 2,
      statics->vars[0],
      VEncodeInt(0l));
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
  // (letrec 1 ((close _V10_Dloop_D728_V0lambda127)) ((bruijn ##.loop.728 0 0) (bruijn ##.k.1536 1 0) 0))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D728_V0lambda127, self))));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, self->vars[0]), 2,
      statics->vars[0],
      VEncodeInt(0l));
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
  // (letrec 1 ((close _V10_Dloop_D733_V0lambda128)) ((bruijn ##.loop.733 0 0) (bruijn ##.k.1542 1 0) 0))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D733_V0lambda128, self))));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, self->vars[0]), 2,
      statics->vars[0],
      VEncodeInt(0l));
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
static void _V10_Dloop_D736_V0lambda129(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V10_Dloop_D736_V0lambda129" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D736_V0lambda129, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (if (##inline ##vcore.pair? (bruijn ##.lst.737 0 1)) (basic-block 1 1 (##.reg.1911) ((##vcore.+ (bruijn ##.n.738 1 2) 1)) ((bruijn ##.loop.736 2 0) (bruijn ##.k.1550 1 0) (##inline ##vcore.cdr (bruijn ##.lst.737 1 1)) (bruijn ##.reg.1911 0 0))) ((bruijn ##.k.1550 0 0) (bruijn ##.n.738 0 2)))
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
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 3,
      statics->vars[0],
      VInlineCdr2(runtime,
        statics->vars[1]),
      self->vars[0]);
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
  // (letrec 1 ((close _V10_Dloop_D736_V0lambda129)) ((bruijn ##.loop.736 0 0) (bruijn ##.k.1549 1 0) (bruijn ##.lst.735 1 1) 0))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D736_V0lambda129, self))));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, self->vars[0]), 3,
      statics->vars[0],
      statics->vars[1],
      VEncodeInt(0l));
    }
}
static void _V50_V0vanity_V0list_V0circular__list_V0k329(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.k.1554 2 0) (bruijn ##.ans.741 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      statics->vars[0]);
}
void _V50_V0vanity_V0list_V0circular__list_V0k328(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0circular__list_V0k328" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0circular__list_V0k328, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.set-cdr! (close _V50_V0vanity_V0list_V0circular__list_V0k329) (bruijn ##.x.1555 0 0) (bruijn ##.ans.741 1 0))
    VCallFuncWithGC(runtime, (VFunc)VSetCdr2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0circular__list_V0k329, self)))),
      _var0,
      statics->vars[0]);
}
void _V50_V0vanity_V0list_V0circular__list_V0k327(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0circular__list_V0k327" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0circular__list_V0k327, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.last-pair.144 2 76) (close _V50_V0vanity_V0list_V0circular__list_V0k328) (bruijn ##.ans.741 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[76]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0circular__list_V0k328, self)))),
      _var0);
}
void _V50_V0vanity_V0list_V0circular__list(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, ...) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0circular__list" };
 VRecordCall2(runtime, &dbg);
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
  // ((close _V50_V0vanity_V0list_V0circular__list_V0k327) (##inline ##vcore.cons (bruijn ##.val1.739 0 1) (bruijn ##.vals.740 0 2)))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0circular__list_V0k327, self)), 1,
      VInlineCons2(runtime,
        _var1,
        _varargs));
}
static void _V10_Drecur_D744_V0k330(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Drecur_D744_V0k330" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Drecur_D744_V0k330, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1557 1 0) (##inline ##vcore.cons (bruijn ##.x.745 1 1) (bruijn ##.x.1559 0 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VInlineCons2(runtime,
        statics->vars[1],
        _var0));
}
static void _V10_Drecur_D744_V0lambda130(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V10_Drecur_D744_V0lambda130" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Drecur_D744_V0lambda130, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (if (##inline ##vcore.pair? (bruijn ##.rest.746 0 2)) ((bruijn ##.recur.744 1 0) (close _V10_Drecur_D744_V0k330) (##inline ##vcore.car (bruijn ##.rest.746 0 2)) (##inline ##vcore.cdr (bruijn ##.rest.746 0 2))) ((bruijn ##.k.1557 0 0) (bruijn ##.x.745 0 1)))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var2))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Drecur_D744_V0k330, self)))),
      VInlineCar2(runtime,
        _var2),
      VInlineCdr2(runtime,
        _var2));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _var1);
}
}
void _V50_V0vanity_V0list_V0cons_S(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, ...) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0cons_S" };
 VRecordCall2(runtime, &dbg);
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
  // (letrec 1 ((close _V10_Drecur_D744_V0lambda130)) ((bruijn ##.recur.744 0 0) (bruijn ##.k.1556 1 0) (bruijn ##.first.742 1 1) (bruijn ##.rest.743 1 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Drecur_D744_V0lambda130, self))));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, self->vars[0]), 3,
      statics->vars[0],
      statics->vars[1],
      statics->vars[2]);
    }
}
void _V50_V0vanity_V0list_V0xcons(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0xcons" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0xcons, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  // ((bruijn ##.k.1562 0 0) (##inline ##vcore.cons (bruijn ##.a.748 0 2) (bruijn ##.d.747 0 1)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VInlineCons2(runtime,
        _var2,
        _var1));
}
static void _V10_Drecur_D751_V0lambda133(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Drecur_D751_V0lambda133" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Drecur_D751_V0lambda133, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.car+cdr.155 5 87) (bruijn ##.k.1567 0 0) (bruijn ##.lists.752 1 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 87)), 2,
      _var0,
      statics->vars[1]);
}
static void _V10_Drecur_D751_V0lambda135(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Drecur_D751_V0lambda135" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Drecur_D751_V0lambda135, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.car+cdr.155 7 87) (bruijn ##.k.1570 0 0) (bruijn ##.list.753 2 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 87)), 2,
      _var0,
      statics->up->vars[1]);
}
static void _V10_Drecur_D751_V0lambda137(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Drecur_D751_V0lambda137" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Drecur_D751_V0lambda137, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.recur.751 5 0) (bruijn ##.k.1572 0 0) (bruijn ##.other-lists.754 3 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 2,
      _var0,
      statics->up->up->vars[2]);
}
static void _V10_Drecur_D751_V0lambda138(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V10_Drecur_D751_V0lambda138" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Drecur_D751_V0lambda138, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  // ((bruijn ##.values.4 9 2) (bruijn ##.k.1573 0 0) (##inline ##vcore.cons (bruijn ##.a.755 1 1) (bruijn ##.cars.757 0 1)) (##inline ##vcore.cons (bruijn ##.d.756 1 2) (bruijn ##.cdrs.758 0 2)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 2)), 3,
      _var0,
      VInlineCons2(runtime,
        statics->vars[1],
        _var1),
      VInlineCons2(runtime,
        statics->vars[2],
        _var2));
}
static void _V10_Drecur_D751_V0lambda136(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V10_Drecur_D751_V0lambda136" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Drecur_D751_V0lambda136, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (##vcore.call-with-values (bruijn ##.k.1571 0 0) (close _V10_Drecur_D751_V0lambda137) (close _V10_Drecur_D751_V0lambda138))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Drecur_D751_V0lambda137, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Drecur_D751_V0lambda138, self)))));
}
static void _V10_Drecur_D751_V0k331(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Drecur_D751_V0k331" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Drecur_D751_V0k331, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1569 0 0) ((bruijn ##.abort.750 4 1) (bruijn ##.k.1568 1 0) '() '()) (##vcore.call-with-values (bruijn ##.k.1568 1 0) (close _V10_Drecur_D751_V0lambda135) (close _V10_Drecur_D751_V0lambda136)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[1]), 3,
      statics->vars[0],
      VNULL,
      VNULL);
} else {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Drecur_D751_V0lambda135, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Drecur_D751_V0lambda136, self)))));
}
}
static void _V10_Drecur_D751_V0lambda134(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V10_Drecur_D751_V0lambda134" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Drecur_D751_V0lambda134, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((bruijn ##.null-list?.168 5 100) (close _V10_Drecur_D751_V0k331) (bruijn ##.list.753 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 100)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Drecur_D751_V0k331, self)))),
      _var1);
}
static void _V10_Drecur_D751_V0lambda132(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V10_Drecur_D751_V0lambda132" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Drecur_D751_V0lambda132, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (if (##inline ##vcore.pair? (bruijn ##.lists.752 0 1)) (##vcore.call-with-values (bruijn ##.k.1565 0 0) (close _V10_Drecur_D751_V0lambda133) (close _V10_Drecur_D751_V0lambda134)) ((bruijn ##.values.4 5 2) (bruijn ##.k.1565 0 0) '() '()))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var1))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Drecur_D751_V0lambda133, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Drecur_D751_V0lambda134, self)))));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 2)), 3,
      _var0,
      VNULL,
      VNULL);
}
}
void _V50_V0vanity_V0list_V0_Mcars_Pcdrs_V0lambda131(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0_Mcars_Pcdrs_V0lambda131" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0_Mcars_Pcdrs_V0lambda131, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (letrec 1 ((close _V10_Drecur_D751_V0lambda132)) ((bruijn ##.recur.751 0 0) (bruijn ##.k.1564 1 0) (bruijn ##.lists.749 2 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Drecur_D751_V0lambda132, self))));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, self->vars[0]), 2,
      statics->vars[0],
      statics->up->vars[1]);
    }
}
void _V50_V0vanity_V0list_V0_Mcars_Pcdrs(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0_Mcars_Pcdrs" };
 VRecordCall2(runtime, &dbg);
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
  // (##vcore.call/cc (bruijn ##.k.1563 0 0) (close _V50_V0vanity_V0list_V0_Mcars_Pcdrs_V0lambda131))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0_Mcars_Pcdrs_V0lambda131, self)))));
}
static void _V10_Drecur_D761_V0k334(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Drecur_D761_V0k334" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Drecur_D761_V0k334, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1578 3 0) (##inline ##vcore.cons (##inline ##vcore.cdr (bruijn ##.lis.763 2 0)) (bruijn ##.x.1582 0 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VInlineCons2(runtime,
        VInlineCdr2(runtime,
        statics->up->vars[0]),
        _var0));
}
static void _V10_Drecur_D761_V0k333(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Drecur_D761_V0k333" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Drecur_D761_V0k333, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1580 0 0) ((bruijn ##.abort.760 4 1) (bruijn ##.k.1578 2 0) '()) ((bruijn ##.recur.761 3 0) (close _V10_Drecur_D761_V0k334) (##inline ##vcore.cdr (bruijn ##.lists.762 2 1))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[1]), 2,
      statics->up->vars[0],
      VNULL);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Drecur_D761_V0k334, self)))),
      VInlineCdr2(runtime,
        statics->up->vars[1]));
}
}
static void _V10_Drecur_D761_V0k332(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Drecur_D761_V0k332" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Drecur_D761_V0k332, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.null-list?.168 5 100) (close _V10_Drecur_D761_V0k333) (bruijn ##.lis.763 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 100)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Drecur_D761_V0k333, self)))),
      _var0);
}
static void _V10_Drecur_D761_V0lambda140(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V10_Drecur_D761_V0lambda140" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Drecur_D761_V0lambda140, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (if (##inline ##vcore.pair? (bruijn ##.lists.762 0 1)) ((close _V10_Drecur_D761_V0k332) (##inline ##vcore.car (bruijn ##.lists.762 0 1))) ((bruijn ##.k.1578 0 0) '()))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var1))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Drecur_D761_V0k332, self)), 1,
      VInlineCar2(runtime,
        _var1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VNULL);
}
}
void _V50_V0vanity_V0list_V0_Mcdrs_V0lambda139(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0_Mcdrs_V0lambda139" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0_Mcdrs_V0lambda139, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (letrec 1 ((close _V10_Drecur_D761_V0lambda140)) ((bruijn ##.recur.761 0 0) (bruijn ##.k.1577 1 0) (bruijn ##.lists.759 2 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Drecur_D761_V0lambda140, self))));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, self->vars[0]), 2,
      statics->vars[0],
      statics->up->vars[1]);
    }
}
void _V50_V0vanity_V0list_V0_Mcdrs(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0_Mcdrs" };
 VRecordCall2(runtime, &dbg);
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
  // (##vcore.call/cc (bruijn ##.k.1576 0 0) (close _V50_V0vanity_V0list_V0_Mcdrs_V0lambda139))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0list_V0_Mcdrs_V0lambda139, self)))));
}
void _V50_V0vanity_V0list_V0get__optional(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0list_V0get__optional" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0list_V0get__optional, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  // (if (##inline ##vcore.null? (bruijn ##.optarg.764 0 1)) ((bruijn ##.k.1584 0 0) (bruijn ##.default.765 0 2)) ((bruijn ##.k.1584 0 0) (##inline ##vcore.car (bruijn ##.optarg.764 0 1))))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var1))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _var2);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VInlineCar2(runtime,
        _var1));
}
}
static void _V0vanity_V0list_V20_V0k340(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.k.771 1 0) (##inline ##vcore.cons (##inline ##vcore.cons 'cons (##intrinsic ##vcore.cons)) (##inline ##vcore.cons (##inline ##vcore.cons 'list (bruijn ##.list.8 1 6)) (##inline ##vcore.cons (##inline ##vcore.cons 'xcons (bruijn ##.xcons.177 0 109)) (##inline ##vcore.cons (##inline ##vcore.cons 'cons* (bruijn ##.cons*.176 0 108)) (##inline ##vcore.cons (##inline ##vcore.cons 'list-tabulate (bruijn ##.list-tabulate.167 0 99)) (##inline ##vcore.cons (##inline ##vcore.cons 'list-copy (bruijn ##.list-copy.9 1 7)) (##inline ##vcore.cons (##inline ##vcore.cons 'circular-list (bruijn ##.circular-list.175 0 107)) (##inline ##vcore.cons (##inline ##vcore.cons 'iota (bruijn ##.iota.173 0 105)) (##inline ##vcore.cons (##inline ##vcore.cons 'pair? (##intrinsic ##vcore.pair?)) (##inline ##vcore.cons (##inline ##vcore.cons 'null? (##intrinsic ##vcore.null?)) (##inline ##vcore.cons (##inline ##vcore.cons 'proper-list? (bruijn ##.proper-list?.172 0 104)) (##inline ##vcore.cons (##inline ##vcore.cons 'circular-list? (bruijn ##.circular-list?.170 0 102)) (##inline ##vcore.cons (##inline ##vcore.cons 'dotted-list? (bruijn ##.dotted-list?.171 0 103)) (##inline ##vcore.cons (##inline ##vcore.cons 'not-pair? (bruijn ##.not-pair?.169 0 101)) (##inline ##vcore.cons (##inline ##vcore.cons 'null-list? (bruijn ##.null-list?.168 0 100)) (##inline ##vcore.cons (##inline ##vcore.cons 'list= (bruijn ##.list=.166 0 98)) (##inline ##vcore.cons (##inline ##vcore.cons 'car (##intrinsic ##vcore.car)) (##inline ##vcore.cons (##inline ##vcore.cons 'cdr (##intrinsic ##vcore.cdr)) (##inline ##vcore.cons (##inline ##vcore.cons 'caar (bruijn ##.caar.48 1 46)) (##inline ##vcore.cons (##inline ##vcore.cons 'cadr (bruijn ##.cadr.10 1 8)) (##inline ##vcore.cons (##inline ##vcore.cons 'cdar (bruijn ##.cdar.47 1 45)) (##inline ##vcore.cons (##inline ##vcore.cons 'cddr (bruijn ##.cddr.11 1 9)) (##inline ##vcore.cons (##inline ##vcore.cons 'caaar (bruijn ##.caaar.46 1 44)) (##inline ##vcore.cons (##inline ##vcore.cons 'caadr (bruijn ##.caadr.12 1 10)) (##inline ##vcore.cons (##inline ##vcore.cons 'cadar (bruijn ##.cadar.45 1 43)) (##inline ##vcore.cons (##inline ##vcore.cons 'caddr (bruijn ##.caddr.13 1 11)) (##inline ##vcore.cons (##inline ##vcore.cons 'cdaar (bruijn ##.cdaar.44 1 42)) (##inline ##vcore.cons (##inline ##vcore.cons 'cdadr (bruijn ##.cdadr.14 1 12)) (##inline ##vcore.cons (##inline ##vcore.cons 'cddar (bruijn ##.cddar.43 1 41)) (##inline ##vcore.cons (##inline ##vcore.cons 'cdddr (bruijn ##.cdddr.15 1 13)) (##inline ##vcore.cons (##inline ##vcore.cons 'caaaar (bruijn ##.caaaar.42 1 40)) (##inline ##vcore.cons (##inline ##vcore.cons 'caaadr (bruijn ##.caaadr.16 1 14)) (##inline ##vcore.cons (##inline ##vcore.cons 'caadar (bruijn ##.caadar.41 1 39)) (##inline ##vcore.cons (##inline ##vcore.cons 'caaddr (bruijn ##.caaddr.17 1 15)) (##inline ##vcore.cons (##inline ##vcore.cons 'cadaar (bruijn ##.cadaar.40 1 38)) (##inline ##vcore.cons (##inline ##vcore.cons 'cadadr (bruijn ##.cadadr.18 1 16)) (##inline ##vcore.cons (##inline ##vcore.cons 'caddar (bruijn ##.caddar.39 1 37)) (##inline ##vcore.cons (##inline ##vcore.cons 'cadddr (bruijn ##.cadddr.19 1 17)) (##inline ##vcore.cons (##inline ##vcore.cons 'cdaaar (bruijn ##.cdaaar.38 1 36)) (##inline ##vcore.cons (##inline ##vcore.cons 'cdaadr (bruijn ##.cdaadr.20 1 18)) (##inline ##vcore.cons (##inline ##vcore.cons 'cdadar (bruijn ##.cdadar.37 1 35)) (##inline ##vcore.cons (##inline ##vcore.cons 'cdaddr (bruijn ##.cdaddr.21 1 19)) (##inline ##vcore.cons (##inline ##vcore.cons 'cddaar (bruijn ##.cddaar.36 1 34)) (##inline ##vcore.cons (##inline ##vcore.cons 'cddadr (bruijn ##.cddadr.22 1 20)) (##inline ##vcore.cons (##inline ##vcore.cons 'cdddar (bruijn ##.cdddar.35 1 33)) (##inline ##vcore.cons (##inline ##vcore.cons 'cddddr (bruijn ##.cddddr.23 1 21)) (##inline ##vcore.cons (##inline ##vcore.cons 'first (bruijn ##.first.165 0 97)) (##inline ##vcore.cons (##inline ##vcore.cons 'second (bruijn ##.second.164 0 96)) (##inline ##vcore.cons (##inline ##vcore.cons 'third (bruijn ##.third.163 0 95)) (##inline ##vcore.cons (##inline ##vcore.cons 'fourth (bruijn ##.fourth.162 0 94)) (##inline ##vcore.cons (##inline ##vcore.cons 'fifth (bruijn ##.fifth.161 0 93)) (##inline ##vcore.cons (##inline ##vcore.cons 'sixth (bruijn ##.sixth.160 0 92)) (##inline ##vcore.cons (##inline ##vcore.cons 'seventh (bruijn ##.seventh.159 0 91)) (##inline ##vcore.cons (##inline ##vcore.cons 'eighth (bruijn ##.eighth.158 0 90)) (##inline ##vcore.cons (##inline ##vcore.cons 'ninth (bruijn ##.ninth.157 0 89)) (##inline ##vcore.cons (##inline ##vcore.cons 'tenth (bruijn ##.tenth.156 0 88)) (##inline ##vcore.cons (##inline ##vcore.cons 'car+cdr (bruijn ##.car+cdr.155 0 87)) (##inline ##vcore.cons (##inline ##vcore.cons 'take (bruijn ##.take.154 0 86)) (##inline ##vcore.cons (##inline ##vcore.cons 'drop (bruijn ##.drop.153 0 85)) (##inline ##vcore.cons (##inline ##vcore.cons 'take-right (bruijn ##.take-right.152 0 84)) (##inline ##vcore.cons (##inline ##vcore.cons 'drop-right (bruijn ##.drop-right.151 0 83)) (##inline ##vcore.cons (##inline ##vcore.cons 'take! (bruijn ##.take!.147 0 79)) (##inline ##vcore.cons (##inline ##vcore.cons 'drop-right! (bruijn ##.drop-right!.146 0 78)) (##inline ##vcore.cons (##inline ##vcore.cons 'split-at (bruijn ##.split-at.150 0 82)) (##inline ##vcore.cons (##inline ##vcore.cons 'split-at! (bruijn ##.split-at!.149 0 81)) (##inline ##vcore.cons (##inline ##vcore.cons 'last (bruijn ##.last.145 0 77)) (##inline ##vcore.cons (##inline ##vcore.cons 'last-pair (bruijn ##.last-pair.144 0 76)) (##inline ##vcore.cons (##inline ##vcore.cons 'length (bruijn ##.length.24 1 22)) (##inline ##vcore.cons (##inline ##vcore.cons 'length+ (bruijn ##.length+.143 0 75)) (##inline ##vcore.cons (##inline ##vcore.cons 'append (bruijn ##.append.25 1 23)) (##inline ##vcore.cons (##inline ##vcore.cons 'append! (bruijn ##.append!.142 0 74)) (##inline ##vcore.cons (##inline ##vcore.cons 'concatenate (bruijn ##.concatenate.138 0 70)) (##inline ##vcore.cons (##inline ##vcore.cons 'concatenate! (bruijn ##.concatenate!.137 0 69)) (##inline ##vcore.cons (##inline ##vcore.cons 'reverse (bruijn ##.reverse.26 1 24)) (##inline ##vcore.cons (##inline ##vcore.cons 'reverse! (bruijn ##.reverse!.141 0 73)) (##inline ##vcore.cons (##inline ##vcore.cons 'append-reverse (bruijn ##.append-reverse.140 0 72)) (##inline ##vcore.cons (##inline ##vcore.cons 'append-reverse! (bruijn ##.append-reverse!.139 0 71)) (##inline ##vcore.cons (##inline ##vcore.cons 'zip (bruijn ##.zip.136 0 68)) (##inline ##vcore.cons (##inline ##vcore.cons 'unzip1 (bruijn ##.unzip1.135 0 67)) (##inline ##vcore.cons (##inline ##vcore.cons 'unzip2 (bruijn ##.unzip2.134 0 66)) (##inline ##vcore.cons (##inline ##vcore.cons 'unzip3 (bruijn ##.unzip3.133 0 65)) (##inline ##vcore.cons (##inline ##vcore.cons 'unzip4 (bruijn ##.unzip4.132 0 64)) (##inline ##vcore.cons (##inline ##vcore.cons 'unzip5 (bruijn ##.unzip5.131 0 63)) (##inline ##vcore.cons (##inline ##vcore.cons 'count (bruijn ##.count.130 0 62)) (##inline ##vcore.cons (##inline ##vcore.cons 'map (bruijn ##.map.34 1 32)) (##inline ##vcore.cons (##inline ##vcore.cons 'map! (bruijn ##.map!.129 0 61)) (##inline ##vcore.cons (##inline ##vcore.cons 'map-in-order (bruijn ##.map-in-order.128 0 60)) (##inline ##vcore.cons (##inline ##vcore.cons 'for-each (bruijn ##.for-each.27 1 25)) (##inline ##vcore.cons (##inline ##vcore.cons 'pair-for-each (bruijn ##.pair-for-each.127 0 59)) (##inline ##vcore.cons (##inline ##vcore.cons 'fold (bruijn ##.fold.126 0 58)) (##inline ##vcore.cons (##inline ##vcore.cons 'fold-right (bruijn ##.fold-right.125 0 57)) (##inline ##vcore.cons (##inline ##vcore.cons 'unfold (bruijn ##.unfold.123 0 55)) (##inline ##vcore.cons (##inline ##vcore.cons 'unfold-right (bruijn ##.unfold-right.124 0 56)) (##inline ##vcore.cons (##inline ##vcore.cons 'pair-fold (bruijn ##.pair-fold.121 0 53)) (##inline ##vcore.cons (##inline ##vcore.cons 'pair-fold-right (bruijn ##.pair-fold-right.122 0 54)) (##inline ##vcore.cons (##inline ##vcore.cons 'reduce (bruijn ##.reduce.120 0 52)) (##inline ##vcore.cons (##inline ##vcore.cons 'reduce-right (bruijn ##.reduce-right.119 0 51)) (##inline ##vcore.cons (##inline ##vcore.cons 'append-map (bruijn ##.append-map.118 0 50)) (##inline ##vcore.cons (##inline ##vcore.cons 'append-map! (bruijn ##.append-map!.117 0 49)) (##inline ##vcore.cons (##inline ##vcore.cons 'filter (bruijn ##.filter.116 0 48)) (##inline ##vcore.cons (##inline ##vcore.cons 'filter! (bruijn ##.filter!.115 0 47)) (##inline ##vcore.cons (##inline ##vcore.cons 'partition (bruijn ##.partition.114 0 46)) (##inline ##vcore.cons (##inline ##vcore.cons 'partition! (bruijn ##.partition!.113 0 45)) (##inline ##vcore.cons (##inline ##vcore.cons 'remove (bruijn ##.remove.112 0 44)) (##inline ##vcore.cons (##inline ##vcore.cons 'remove! (bruijn ##.remove!.111 0 43)) (##inline ##vcore.cons (##inline ##vcore.cons 'filter-map (bruijn ##.filter-map.110 0 42)) (##inline ##vcore.cons (##inline ##vcore.cons 'member (bruijn ##.member.33 1 31)) (##inline ##vcore.cons (##inline ##vcore.cons 'memq (bruijn ##.memq.28 1 26)) (##inline ##vcore.cons (##inline ##vcore.cons 'memv (bruijn ##.memv.32 1 30)) (##inline ##vcore.cons (##inline ##vcore.cons 'find (bruijn ##.find.109 0 41)) (##inline ##vcore.cons (##inline ##vcore.cons 'find-tail (bruijn ##.find-tail.108 0 40)) (##inline ##vcore.cons (##inline ##vcore.cons 'any? (bruijn ##.any?.97 0 29)) (##inline ##vcore.cons (##inline ##vcore.cons 'every? (bruijn ##.every?.96 0 28)) (##inline ##vcore.cons (##inline ##vcore.cons 'any (bruijn ##.any.95 0 27)) (##inline ##vcore.cons (##inline ##vcore.cons 'every (bruijn ##.every.94 0 26)) (##inline ##vcore.cons (##inline ##vcore.cons 'list-index (bruijn ##.list-index.93 0 25)) (##inline ##vcore.cons (##inline ##vcore.cons 'take-while (bruijn ##.take-while.105 0 37)) (##inline ##vcore.cons (##inline ##vcore.cons 'take-while! (bruijn ##.take-while!.102 0 34)) (##inline ##vcore.cons (##inline ##vcore.cons 'drop-while (bruijn ##.drop-while.104 0 36)) (##inline ##vcore.cons (##inline ##vcore.cons 'split-while (bruijn ##.split-while.103 0 35)) (##inline ##vcore.cons (##inline ##vcore.cons 'span (bruijn ##.span.101 0 33)) (##inline ##vcore.cons (##inline ##vcore.cons 'span! (bruijn ##.span!.100 0 32)) (##inline ##vcore.cons (##inline ##vcore.cons 'break (bruijn ##.break.99 0 31)) (##inline ##vcore.cons (##inline ##vcore.cons 'break! (bruijn ##.break!.98 0 30)) (##inline ##vcore.cons (##inline ##vcore.cons 'delete-duplicates (bruijn ##.delete-duplicates.92 0 24)) (##inline ##vcore.cons (##inline ##vcore.cons 'delete-duplicates! (bruijn ##.delete-duplicates!.91 0 23)) (##inline ##vcore.cons (##inline ##vcore.cons 'assoc (bruijn ##.assoc.31 1 29)) (##inline ##vcore.cons (##inline ##vcore.cons 'assq (bruijn ##.assq.29 1 27)) (##inline ##vcore.cons (##inline ##vcore.cons 'assv (bruijn ##.assv.30 1 28)) (##inline ##vcore.cons (##inline ##vcore.cons 'alist-cons (bruijn ##.alist-cons.90 0 22)) (##inline ##vcore.cons (##inline ##vcore.cons 'alist-copy (bruijn ##.alist-copy.89 0 21)) (##inline ##vcore.cons (##inline ##vcore.cons 'alist-delete (bruijn ##.alist-delete.88 0 20)) (##inline ##vcore.cons (##inline ##vcore.cons 'alist-delete! (bruijn ##.alist-delete!.87 0 19)) (##inline ##vcore.cons (##inline ##vcore.cons 'lset<= (bruijn ##.lset<=.85 0 17)) (##inline ##vcore.cons (##inline ##vcore.cons 'lset= (bruijn ##.lset=.84 0 16)) (##inline ##vcore.cons (##inline ##vcore.cons 'lset-adjoin (bruijn ##.lset-adjoin.83 0 15)) (##inline ##vcore.cons (##inline ##vcore.cons 'lset-union (bruijn ##.lset-union.82 0 14)) (##inline ##vcore.cons (##inline ##vcore.cons 'lset-union! (bruijn ##.lset-union!.81 0 13)) (##inline ##vcore.cons (##inline ##vcore.cons 'lset-intersection (bruijn ##.lset-intersection.80 0 12)) (##inline ##vcore.cons (##inline ##vcore.cons 'lset-intersection! (bruijn ##.lset-intersection!.79 0 11)) (##inline ##vcore.cons (##inline ##vcore.cons 'lset-difference (bruijn ##.lset-difference.78 0 10)) (##inline ##vcore.cons (##inline ##vcore.cons 'lset-difference! (bruijn ##.lset-difference!.77 0 9)) (##inline ##vcore.cons (##inline ##vcore.cons 'lset-xor (bruijn ##.lset-xor.76 0 8)) (##inline ##vcore.cons (##inline ##vcore.cons 'lset-xor! (bruijn ##.lset-xor!.75 0 7)) (##inline ##vcore.cons (##inline ##vcore.cons 'lset-diff+intersection (bruijn ##.lset-diff+intersection.74 0 6)) (##inline ##vcore.cons (##inline ##vcore.cons 'lset-diff+intersection! (bruijn ##.lset-diff+intersection!.73 0 5)) (##inline ##vcore.cons (##inline ##vcore.cons 'insert (bruijn ##.insert.72 0 4)) (##inline ##vcore.cons (##inline ##vcore.cons 'delete (bruijn ##.delete.107 0 39)) (##inline ##vcore.cons (##inline ##vcore.cons 'erase (bruijn ##.erase.71 0 3)) (##inline ##vcore.cons (##inline ##vcore.cons 'assq-update (bruijn ##.assq-update.70 0 2)) (##inline ##vcore.cons (##inline ##vcore.cons 'assv-update (bruijn ##.assv-update.69 0 1)) (##inline ##vcore.cons (##inline ##vcore.cons 'assoc-update (bruijn ##.assoc-update.68 0 0)) '())))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0cons,
        _V40_V10vcore_Dcons),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0list,
        statics->vars[6]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0xcons,
        self->vars[109]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0cons_S,
        self->vars[108]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0list__tabulate,
        self->vars[99]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0list__copy,
        statics->vars[7]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0circular__list,
        self->vars[107]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0iota,
        self->vars[105]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0pair_Q,
        _V40_V10vcore_Dpair_Q),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0null_Q,
        _V40_V10vcore_Dnull_Q),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0proper__list_Q,
        self->vars[104]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0circular__list_Q,
        self->vars[102]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0dotted__list_Q,
        self->vars[103]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0not__pair_Q,
        self->vars[101]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0null__list_Q,
        self->vars[100]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0list_E,
        self->vars[98]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0car,
        _V40_V10vcore_Dcar),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0cdr,
        _V40_V10vcore_Dcdr),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0caar,
        statics->vars[46]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0cadr,
        statics->vars[8]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0cdar,
        statics->vars[45]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0cddr,
        statics->vars[9]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0caaar,
        statics->vars[44]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0caadr,
        statics->vars[10]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0cadar,
        statics->vars[43]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0caddr,
        statics->vars[11]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0cdaar,
        statics->vars[42]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0cdadr,
        statics->vars[12]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0cddar,
        statics->vars[41]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0cdddr,
        statics->vars[13]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0caaaar,
        statics->vars[40]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0caaadr,
        statics->vars[14]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0caadar,
        statics->vars[39]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0caaddr,
        statics->vars[15]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0cadaar,
        statics->vars[38]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0cadadr,
        statics->vars[16]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0caddar,
        statics->vars[37]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0cadddr,
        statics->vars[17]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0cdaaar,
        statics->vars[36]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0cdaadr,
        statics->vars[18]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0cdadar,
        statics->vars[35]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0cdaddr,
        statics->vars[19]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0cddaar,
        statics->vars[34]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0cddadr,
        statics->vars[20]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0cdddar,
        statics->vars[33]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0cddddr,
        statics->vars[21]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0first,
        self->vars[97]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0second,
        self->vars[96]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0third,
        self->vars[95]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0fourth,
        self->vars[94]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0fifth,
        self->vars[93]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0sixth,
        self->vars[92]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0seventh,
        self->vars[91]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0eighth,
        self->vars[90]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0ninth,
        self->vars[89]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0tenth,
        self->vars[88]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0car_Pcdr,
        self->vars[87]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0take,
        self->vars[86]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0drop,
        self->vars[85]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0take__right,
        self->vars[84]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0drop__right,
        self->vars[83]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0take_B,
        self->vars[79]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0drop__right_B,
        self->vars[78]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0split__at,
        self->vars[82]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0split__at_B,
        self->vars[81]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0last,
        self->vars[77]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0last__pair,
        self->vars[76]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0length,
        statics->vars[22]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0length_P,
        self->vars[75]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0append,
        statics->vars[23]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0append_B,
        self->vars[74]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0concatenate,
        self->vars[70]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0concatenate_B,
        self->vars[69]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0reverse,
        statics->vars[24]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0reverse_B,
        self->vars[73]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0append__reverse,
        self->vars[72]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0append__reverse_B,
        self->vars[71]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0zip,
        self->vars[68]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0unzip1,
        self->vars[67]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0unzip2,
        self->vars[66]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0unzip3,
        self->vars[65]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0unzip4,
        self->vars[64]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0unzip5,
        self->vars[63]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0count,
        self->vars[62]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0map,
        statics->vars[32]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0map_B,
        self->vars[61]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0map__in__order,
        self->vars[60]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0for__each,
        statics->vars[25]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0pair__for__each,
        self->vars[59]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0fold,
        self->vars[58]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0fold__right,
        self->vars[57]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0unfold,
        self->vars[55]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0unfold__right,
        self->vars[56]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0pair__fold,
        self->vars[53]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0pair__fold__right,
        self->vars[54]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0reduce,
        self->vars[52]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0reduce__right,
        self->vars[51]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0append__map,
        self->vars[50]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0append__map_B,
        self->vars[49]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0filter,
        self->vars[48]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0filter_B,
        self->vars[47]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0partition,
        self->vars[46]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0partition_B,
        self->vars[45]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0remove,
        self->vars[44]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0remove_B,
        self->vars[43]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0filter__map,
        self->vars[42]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0member,
        statics->vars[31]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0memq,
        statics->vars[26]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0memv,
        statics->vars[30]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0find,
        self->vars[41]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0find__tail,
        self->vars[40]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0any_Q,
        self->vars[29]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0every_Q,
        self->vars[28]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0any,
        self->vars[27]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0every,
        self->vars[26]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0list__index,
        self->vars[25]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0take__while,
        self->vars[37]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0take__while_B,
        self->vars[34]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0drop__while,
        self->vars[36]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0split__while,
        self->vars[35]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0span,
        self->vars[33]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0span_B,
        self->vars[32]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0break,
        self->vars[31]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0break_B,
        self->vars[30]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0delete__duplicates,
        self->vars[24]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0delete__duplicates_B,
        self->vars[23]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0assoc,
        statics->vars[29]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0assq,
        statics->vars[27]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0assv,
        statics->vars[28]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0alist__cons,
        self->vars[22]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0alist__copy,
        self->vars[21]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0alist__delete,
        self->vars[20]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0alist__delete_B,
        self->vars[19]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0lset_L_E,
        self->vars[17]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0lset_E,
        self->vars[16]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0lset__adjoin,
        self->vars[15]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0lset__union,
        self->vars[14]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0lset__union_B,
        self->vars[13]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0lset__intersection,
        self->vars[12]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0lset__intersection_B,
        self->vars[11]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0lset__difference,
        self->vars[10]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0lset__difference_B,
        self->vars[9]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0lset__xor,
        self->vars[8]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0lset__xor_B,
        self->vars[7]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0lset__diff_Pintersection,
        self->vars[6]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0lset__diff_Pintersection_B,
        self->vars[5]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0insert,
        self->vars[4]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0delete,
        self->vars[39]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0erase,
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
        VNULL)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
}
static void _V0vanity_V0list_V20_V0k339(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (set! (close _V0vanity_V0list_V20_V0k340) (bruijn ##.map-in-order.128 0 60) (bruijn ##.map.34 1 32))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0list_V20_V0k340, self)))),
      VEncodeInt(0l), VEncodeInt(60l),
      statics->vars[32]
    );
}
static void _V0vanity_V0list_V20_V0k338(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (set! (close _V0vanity_V0list_V20_V0k339) (bruijn ##.fourth.162 0 94) (bruijn ##.cadddr.19 1 17))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0list_V20_V0k339, self)))),
      VEncodeInt(0l), VEncodeInt(94l),
      statics->vars[17]
    );
}
static void _V0vanity_V0list_V20_V0k337(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (set! (close _V0vanity_V0list_V20_V0k338) (bruijn ##.third.163 0 95) (bruijn ##.caddr.13 1 11))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0list_V20_V0k338, self)))),
      VEncodeInt(0l), VEncodeInt(95l),
      statics->vars[11]
    );
}
static void _V0vanity_V0list_V20_V0k336(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (set! (close _V0vanity_V0list_V20_V0k337) (bruijn ##.second.164 0 96) (bruijn ##.cadr.10 1 8))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0list_V20_V0k337, self)))),
      VEncodeInt(0l), VEncodeInt(96l),
      statics->vars[8]
    );
}
static void _V0vanity_V0list_V20_V0k335(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (set! (close _V0vanity_V0list_V20_V0k336) (bruijn ##.first.165 0 97) (##intrinsic ##vcore.car))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0list_V20_V0k336, self)))),
      VEncodeInt(0l), VEncodeInt(97l),
      _V40_V10vcore_Dcar
    );
}
static void _V0vanity_V0list_V20_V0lambda3(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4, VWORD _var5, VWORD _var6, VWORD _var7, VWORD _var8, VWORD _var9, VWORD _var10, VWORD _var11, VWORD _var12, VWORD _var13, VWORD _var14, VWORD _var15, VWORD _var16, VWORD _var17, VWORD _var18, VWORD _var19, VWORD _var20, VWORD _var21, VWORD _var22, VWORD _var23, VWORD _var24, VWORD _var25, VWORD _var26, VWORD _var27, VWORD _var28, VWORD _var29, VWORD _var30, VWORD _var31, VWORD _var32, VWORD _var33, VWORD _var34, VWORD _var35, VWORD _var36, VWORD _var37, VWORD _var38, VWORD _var39, VWORD _var40, VWORD _var41, VWORD _var42, VWORD _var43, VWORD _var44, VWORD _var45, VWORD _var46) {
 static VDebugInfo dbg = { "_V0vanity_V0list_V20_V0lambda3" };
 VRecordCall2(runtime, &dbg);
 if(argc != 47) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0list_V20_V0lambda3, got ~D~N"
  "-- expected 47~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[47]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 47, 47, statics);
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
  // (##letrec (vanity list) 114 ((close "_V50_V0vanity_V0list_V0assoc__update" (vanity list)) (close "_V50_V0vanity_V0list_V0assv__update" (vanity list)) (close "_V50_V0vanity_V0list_V0assq__update" (vanity list)) (close "_V50_V0vanity_V0list_V0erase" (vanity list)) (close "_V50_V0vanity_V0list_V0insert" (vanity list)) (close "_V50_V0vanity_V0list_V0lset__diff_Pintersection_B" (vanity list)) (close "_V50_V0vanity_V0list_V0lset__diff_Pintersection" (vanity list)) (close "_V50_V0vanity_V0list_V0lset__xor_B" (vanity list)) (close "_V50_V0vanity_V0list_V0lset__xor" (vanity list)) (close "_V50_V0vanity_V0list_V0lset__difference_B" (vanity list)) (close "_V50_V0vanity_V0list_V0lset__difference" (vanity list)) (close "_V50_V0vanity_V0list_V0lset__intersection_B" (vanity list)) (close "_V50_V0vanity_V0list_V0lset__intersection" (vanity list)) (close "_V50_V0vanity_V0list_V0lset__union_B" (vanity list)) (close "_V50_V0vanity_V0list_V0lset__union" (vanity list)) (close "_V50_V0vanity_V0list_V0lset__adjoin" (vanity list)) (close "_V50_V0vanity_V0list_V0lset_E" (vanity list)) (close "_V50_V0vanity_V0list_V0lset_L_E" (vanity list)) (close "_V50_V0vanity_V0list_V0_Mlset2_L_E" (vanity list)) (close "_V50_V0vanity_V0list_V0alist__delete_B" (vanity list)) (close "_V50_V0vanity_V0list_V0alist__delete" (vanity list)) (close "_V50_V0vanity_V0list_V0alist__copy" (vanity list)) (close "_V50_V0vanity_V0list_V0alist__cons" (vanity list)) (close "_V50_V0vanity_V0list_V0delete__duplicates_B" (vanity list)) (close "_V50_V0vanity_V0list_V0delete__duplicates" (vanity list)) (close "_V50_V0vanity_V0list_V0list__index" (vanity list)) (close "_V50_V0vanity_V0list_V0every" (vanity list)) (close "_V50_V0vanity_V0list_V0any" (vanity list)) (close "_V50_V0vanity_V0list_V0every_Q" (vanity list)) (close "_V50_V0vanity_V0list_V0any_Q" (vanity list)) (close "_V50_V0vanity_V0list_V0break_B" (vanity list)) (close "_V50_V0vanity_V0list_V0break" (vanity list)) (close "_V50_V0vanity_V0list_V0span_B" (vanity list)) (close "_V50_V0vanity_V0list_V0span" (vanity list)) (close "_V50_V0vanity_V0list_V0take__while_B" (vanity list)) (close "_V50_V0vanity_V0list_V0split__while" (vanity list)) (close "_V50_V0vanity_V0list_V0drop__while" (vanity list)) (close "_V50_V0vanity_V0list_V0take__while" (vanity list)) (close "_V50_V0vanity_V0list_V0delete_B" (vanity list)) (close "_V50_V0vanity_V0list_V0delete" (vanity list)) (close "_V50_V0vanity_V0list_V0find__tail" (vanity list)) (close "_V50_V0vanity_V0list_V0find" (vanity list)) (close "_V50_V0vanity_V0list_V0filter__map" (vanity list)) (close "_V50_V0vanity_V0list_V0remove_B" (vanity list)) (close "_V50_V0vanity_V0list_V0remove" (vanity list)) (close "_V50_V0vanity_V0list_V0partition_B" (vanity list)) (close "_V50_V0vanity_V0list_V0partition" (vanity list)) (close "_V50_V0vanity_V0list_V0filter_B" (vanity list)) (close "_V50_V0vanity_V0list_V0filter" (vanity list)) (close "_V50_V0vanity_V0list_V0append__map_B" (vanity list)) (close "_V50_V0vanity_V0list_V0append__map" (vanity list)) (close "_V50_V0vanity_V0list_V0reduce__right" (vanity list)) (close "_V50_V0vanity_V0list_V0reduce" (vanity list)) (close "_V50_V0vanity_V0list_V0pair__fold" (vanity list)) (close "_V50_V0vanity_V0list_V0pair__fold__right" (vanity list)) (close "_V50_V0vanity_V0list_V0unfold" (vanity list)) (close "_V50_V0vanity_V0list_V0unfold__right" (vanity list)) (close "_V50_V0vanity_V0list_V0fold__right" (vanity list)) (close "_V50_V0vanity_V0list_V0fold" (vanity list)) (close "_V50_V0vanity_V0list_V0pair__for__each" (vanity list)) #f (close "_V50_V0vanity_V0list_V0map_B" (vanity list)) (close "_V50_V0vanity_V0list_V0count" (vanity list)) (close "_V50_V0vanity_V0list_V0unzip5" (vanity list)) (close "_V50_V0vanity_V0list_V0unzip4" (vanity list)) (close "_V50_V0vanity_V0list_V0unzip3" (vanity list)) (close "_V50_V0vanity_V0list_V0unzip2" (vanity list)) (close "_V50_V0vanity_V0list_V0unzip1" (vanity list)) (close "_V50_V0vanity_V0list_V0zip" (vanity list)) (close "_V50_V0vanity_V0list_V0concatenate_B" (vanity list)) (close "_V50_V0vanity_V0list_V0concatenate" (vanity list)) (close "_V50_V0vanity_V0list_V0append__reverse_B" (vanity list)) (close "_V50_V0vanity_V0list_V0append__reverse" (vanity list)) (close "_V50_V0vanity_V0list_V0reverse_B" (vanity list)) (close "_V50_V0vanity_V0list_V0append_B" (vanity list)) (close "_V50_V0vanity_V0list_V0length_P" (vanity list)) (close "_V50_V0vanity_V0list_V0last__pair" (vanity list)) (close "_V50_V0vanity_V0list_V0last" (vanity list)) (close "_V50_V0vanity_V0list_V0drop__right_B" (vanity list)) (close "_V50_V0vanity_V0list_V0take_B" (vanity list)) (close "_V50_V0vanity_V0list_V0check__arg" (vanity list)) (close "_V50_V0vanity_V0list_V0split__at_B" (vanity list)) (close "_V50_V0vanity_V0list_V0split__at" (vanity list)) (close "_V50_V0vanity_V0list_V0drop__right" (vanity list)) (close "_V50_V0vanity_V0list_V0take__right" (vanity list)) (close "_V50_V0vanity_V0list_V0drop" (vanity list)) (close "_V50_V0vanity_V0list_V0take" (vanity list)) (close "_V50_V0vanity_V0list_V0car_Pcdr" (vanity list)) (close "_V50_V0vanity_V0list_V0tenth" (vanity list)) (close "_V50_V0vanity_V0list_V0ninth" (vanity list)) (close "_V50_V0vanity_V0list_V0eighth" (vanity list)) (close "_V50_V0vanity_V0list_V0seventh" (vanity list)) (close "_V50_V0vanity_V0list_V0sixth" (vanity list)) (close "_V50_V0vanity_V0list_V0fifth" (vanity list)) #f #f #f #f (close "_V50_V0vanity_V0list_V0list_E" (vanity list)) (close "_V50_V0vanity_V0list_V0list__tabulate" (vanity list)) (close "_V50_V0vanity_V0list_V0null__list_Q" (vanity list)) (close "_V50_V0vanity_V0list_V0not__pair_Q" (vanity list)) (close "_V50_V0vanity_V0list_V0circular__list_Q" (vanity list)) (close "_V50_V0vanity_V0list_V0dotted__list_Q" (vanity list)) (close "_V50_V0vanity_V0list_V0proper__list_Q" (vanity list)) (close "_V50_V0vanity_V0list_V0iota" (vanity list)) (close "_V50_V0vanity_V0list_V0my__num__pairs" (vanity list)) (close "_V50_V0vanity_V0list_V0circular__list" (vanity list)) (close "_V50_V0vanity_V0list_V0cons_S" (vanity list)) (close "_V50_V0vanity_V0list_V0xcons" (vanity list)) #f (close "_V50_V0vanity_V0list_V0_Mcars_Pcdrs" (vanity list)) (close "_V50_V0vanity_V0list_V0_Mcdrs" (vanity list)) (close "_V50_V0vanity_V0list_V0get__optional" (vanity list))) (set! (close _V0vanity_V0list_V20_V0k335) (bruijn ##.%cars+cdrs/no-test.178 0 110) (bruijn ##.%cars+cdrs.179 0 111)))
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
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0list_V20_V0k335, self)))),
      VEncodeInt(0l), VEncodeInt(110l),
      self->vars[111]
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
  // (##vcore.call-with-values (bruijn ##.k.767 0 0) (close _V0vanity_V0list_V20_V0lambda2) (close _V0vanity_V0list_V20_V0lambda3))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0list_V20_V0lambda2, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0list_V20_V0lambda3, self)))));
}
VFunc _V0vanity_V0list_V20 = (VFunc)_V0vanity_V0list_V20_V0lambda1;
