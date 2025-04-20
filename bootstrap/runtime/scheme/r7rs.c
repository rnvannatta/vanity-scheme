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
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D506 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "_V0vanity_V0core_V20" };
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D505 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "_V0scheme_V0r7rs_V20" };
VWEAK VWORD _V0error;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0error = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "error" };
VWEAK VWORD _V0exit;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0exit = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "exit" };
VWEAK VWORD _V0command__line;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V0command__line = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "command-line" };
VWEAK VWORD _V0values;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0values = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "values" };
VWEAK VWORD _V0apply;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0apply = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "apply" };
VWEAK VWORD _V0call__with__values;VWEAK struct { VBlob sym; char bytes[17]; } _VW_V0call__with__values = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 17 }, "call-with-values" };
VWEAK VWORD _V0call__with__current__continuation;VWEAK struct { VBlob sym; char bytes[31]; } _VW_V0call__with__current__continuation = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 31 }, "call-with-current-continuation" };
VWEAK VWORD _V0call_Wcc;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0call_Wcc = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "call/cc" };
VWEAK VWORD _V0write;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0write = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "write" };
VWEAK VWORD _V0display;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0display = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "display" };
VWEAK VWORD _V0newline;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0newline = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "newline" };
VWEAK VWORD _V0read;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0read = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "read" };
VWEAK VWORD _V0read__line;VWEAK struct { VBlob sym; char bytes[10]; } _VW_V0read__line = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 10 }, "read-line" };
VWEAK VWORD _V0read__char;VWEAK struct { VBlob sym; char bytes[10]; } _VW_V0read__char = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 10 }, "read-char" };
VWEAK VWORD _V0with__input__from__file;VWEAK struct { VBlob sym; char bytes[21]; } _VW_V0with__input__from__file = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 21 }, "with-input-from-file" };
VWEAK VWORD _V0with__output__to__file;VWEAK struct { VBlob sym; char bytes[20]; } _VW_V0with__output__to__file = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 20 }, "with-output-to-file" };
VWEAK VWORD _V0get__output__string;VWEAK struct { VBlob sym; char bytes[18]; } _VW_V0get__output__string = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 18 }, "get-output-string" };
VWEAK VWORD _V0open__output__string;VWEAK struct { VBlob sym; char bytes[19]; } _VW_V0open__output__string = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 19 }, "open-output-string" };
VWEAK VWORD _V0close__port;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V0close__port = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "close-port" };
VWEAK VWORD _V0open__output__file;VWEAK struct { VBlob sym; char bytes[17]; } _VW_V0open__output__file = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 17 }, "open-output-file" };
VWEAK VWORD _V0open__input__file;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V0open__input__file = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "open-input-file" };
VWEAK VWORD _V0current__input__port;VWEAK struct { VBlob sym; char bytes[19]; } _VW_V0current__input__port = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 19 }, "current-input-port" };
VWEAK VWORD _V0current__error__port;VWEAK struct { VBlob sym; char bytes[19]; } _VW_V0current__error__port = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 19 }, "current-error-port" };
VWEAK VWORD _V0current__output__port;VWEAK struct { VBlob sym; char bytes[20]; } _VW_V0current__output__port = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 20 }, "current-output-port" };
VWEAK VWORD _V0char___Ginteger;VWEAK struct { VBlob sym; char bytes[14]; } _VW_V0char___Ginteger = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 14 }, "char->integer" };
VWEAK VWORD _V0vector__for__each;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V0vector__for__each = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "vector-for-each" };
VWEAK VWORD _V0vector__length;VWEAK struct { VBlob sym; char bytes[14]; } _VW_V0vector__length = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 14 }, "vector-length" };
VWEAK VWORD _V0vector__set_B;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0vector__set_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "vector-set!" };
VWEAK VWORD _V0vector__ref;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V0vector__ref = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "vector-ref" };
VWEAK VWORD _V0vector;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0vector = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "vector" };
VWEAK VWORD _V0list___Gvector;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V0list___Gvector = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "list->vector" };
VWEAK VWORD _V0symbol___Gstring;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V0symbol___Gstring = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "symbol->string" };
VWEAK VWORD _V0string__append;VWEAK struct { VBlob sym; char bytes[14]; } _VW_V0string__append = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 14 }, "string-append" };
VWEAK VWORD _V0string___Gnumber;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V0string___Gnumber = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "string->number" };
VWEAK VWORD _V0string___Gsymbol;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V0string___Gsymbol = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "string->symbol" };
VWEAK VWORD _V0string__length;VWEAK struct { VBlob sym; char bytes[14]; } _VW_V0string__length = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 14 }, "string-length" };
VWEAK VWORD _V0string__set_B;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0string__set_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "string-set!" };
VWEAK VWORD _V0string__ref;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V0string__ref = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "string-ref" };
VWEAK VWORD _V0string__copy_B;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V0string__copy_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "string-copy!" };
VWEAK VWORD _V0string__copy;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0string__copy = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "string-copy" };
VWEAK VWORD _V0substring;VWEAK struct { VBlob sym; char bytes[10]; } _VW_V0substring = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 10 }, "substring" };
VWEAK VWORD _V0make__string;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0make__string = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "make-string" };
VWEAK VWORD _V0list___Gstring;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V0list___Gstring = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "list->string" };
VWEAK VWORD _V0string___Glist;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V0string___Glist = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "string->list" };
VWEAK VWORD _V0assoc;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0assoc = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "assoc" };
VWEAK VWORD _V0assv;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0assv = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "assv" };
VWEAK VWORD _V0assq;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0assq = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "assq" };
VWEAK VWORD _V0member;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0member = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "member" };
VWEAK VWORD _V0memv;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0memv = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "memv" };
VWEAK VWORD _V0memq;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0memq = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "memq" };
VWEAK VWORD _V0reverse;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0reverse = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "reverse" };
VWEAK VWORD _V0append;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0append = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "append" };
VWEAK VWORD _V0for__each;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0for__each = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "for-each" };
VWEAK VWORD _V0map;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0map = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "map" };
VWEAK VWORD _V0list__ref;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0list__ref = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "list-ref" };
VWEAK VWORD _V0length;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0length = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "length" };
VWEAK VWORD _V0list;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0list = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "list" };
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
VWEAK VWORD _V0set__cdr_B;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0set__cdr_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "set-cdr!" };
VWEAK VWORD _V0set__car_B;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0set__car_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "set-car!" };
VWEAK VWORD _V0cdr;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0cdr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "cdr" };
VWEAK VWORD _V0car;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0car = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "car" };
VWEAK VWORD _V0cons;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0cons = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "cons" };
VWEAK VWORD _V0min;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0min = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "min" };
VWEAK VWORD _V0max;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0max = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "max" };
VWEAK VWORD _V0remainder;VWEAK struct { VBlob sym; char bytes[10]; } _VW_V0remainder = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 10 }, "remainder" };
VWEAK VWORD _V0quotient;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0quotient = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "quotient" };
VWEAK VWORD _V0_W;VWEAK struct { VBlob sym; char bytes[2]; } _VW_V0_W = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 2 }, "/" };
VWEAK VWORD _V0_S;VWEAK struct { VBlob sym; char bytes[2]; } _VW_V0_S = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 2 }, "*" };
VWEAK VWORD _V0__;VWEAK struct { VBlob sym; char bytes[2]; } _VW_V0__ = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 2 }, "-" };
VWEAK VWORD _V0_P;VWEAK struct { VBlob sym; char bytes[2]; } _VW_V0_P = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 2 }, "+" };
VWEAK VWORD _V0complex_Q;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0complex_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "complex\?" };
VWEAK VWORD _V0number_Q;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0number_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "number\?" };
VWEAK VWORD _V0exact___Ginexact;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V0exact___Ginexact = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "exact->inexact" };
VWEAK VWORD _V0inexact;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0inexact = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "inexact" };
VWEAK VWORD _V0_G_E;VWEAK struct { VBlob sym; char bytes[3]; } _VW_V0_G_E = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 3 }, ">=" };
VWEAK VWORD _V0_L_E;VWEAK struct { VBlob sym; char bytes[3]; } _VW_V0_L_E = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 3 }, "<=" };
VWEAK VWORD _V0_G;VWEAK struct { VBlob sym; char bytes[2]; } _VW_V0_G = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 2 }, ">" };
VWEAK VWORD _V0_E;VWEAK struct { VBlob sym; char bytes[2]; } _VW_V0_E = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 2 }, "=" };
VWEAK VWORD _V0_L;VWEAK struct { VBlob sym; char bytes[2]; } _VW_V0_L = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 2 }, "<" };
VWEAK VWORD _V0not;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0not = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "not" };
VWEAK VWORD _V0equal_Q;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0equal_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "equal\?" };
VWEAK VWORD _V0eqv_Q;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0eqv_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "eqv\?" };
VWEAK VWORD _V0symbol_E_Q;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0symbol_E_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "symbol=\?" };
VWEAK VWORD _V0eq_Q;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0eq_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "eq\?" };
VWEAK VWORD _V0char_Q;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0char_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "char\?" };
VWEAK VWORD _V0integer_Q;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0integer_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "integer\?" };
VWEAK VWORD _V0real_Q;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0real_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "real\?" };
VWEAK VWORD _V0inexact_Q;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0inexact_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "inexact\?" };
VWEAK VWORD _V0exact_Q;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0exact_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "exact\?" };
VWEAK VWORD _V0string_Q;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0string_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "string\?" };
VWEAK VWORD _V0symbol_Q;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0symbol_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "symbol\?" };
VWEAK VWORD _V0procedure_Q;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V0procedure_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "procedure\?" };
VWEAK VWORD _V0vector_Q;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0vector_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "vector\?" };
VWEAK VWORD _V0pair_Q;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0pair_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "pair\?" };
VWEAK VWORD _V0boolean_Q;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0boolean_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "boolean\?" };
VWEAK VWORD _V0eof__object_Q;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0eof__object_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "eof-object\?" };
VWEAK VWORD _V0null_Q;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0null_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "null\?" };
static __attribute__((constructor)) void VDllMain1() {
  _V0error = VEncodePointer(VLookupConstant("_V0error", &_VW_V0error), VPOINTER_OTHER);
  _V0exit = VEncodePointer(VLookupConstant("_V0exit", &_VW_V0exit), VPOINTER_OTHER);
  _V0command__line = VEncodePointer(VLookupConstant("_V0command__line", &_VW_V0command__line), VPOINTER_OTHER);
  _V0values = VEncodePointer(VLookupConstant("_V0values", &_VW_V0values), VPOINTER_OTHER);
  _V0apply = VEncodePointer(VLookupConstant("_V0apply", &_VW_V0apply), VPOINTER_OTHER);
  _V0call__with__values = VEncodePointer(VLookupConstant("_V0call__with__values", &_VW_V0call__with__values), VPOINTER_OTHER);
  _V0call__with__current__continuation = VEncodePointer(VLookupConstant("_V0call__with__current__continuation", &_VW_V0call__with__current__continuation), VPOINTER_OTHER);
  _V0call_Wcc = VEncodePointer(VLookupConstant("_V0call_Wcc", &_VW_V0call_Wcc), VPOINTER_OTHER);
  _V0write = VEncodePointer(VLookupConstant("_V0write", &_VW_V0write), VPOINTER_OTHER);
  _V0display = VEncodePointer(VLookupConstant("_V0display", &_VW_V0display), VPOINTER_OTHER);
  _V0newline = VEncodePointer(VLookupConstant("_V0newline", &_VW_V0newline), VPOINTER_OTHER);
  _V0read = VEncodePointer(VLookupConstant("_V0read", &_VW_V0read), VPOINTER_OTHER);
  _V0read__line = VEncodePointer(VLookupConstant("_V0read__line", &_VW_V0read__line), VPOINTER_OTHER);
  _V0read__char = VEncodePointer(VLookupConstant("_V0read__char", &_VW_V0read__char), VPOINTER_OTHER);
  _V0with__input__from__file = VEncodePointer(VLookupConstant("_V0with__input__from__file", &_VW_V0with__input__from__file), VPOINTER_OTHER);
  _V0with__output__to__file = VEncodePointer(VLookupConstant("_V0with__output__to__file", &_VW_V0with__output__to__file), VPOINTER_OTHER);
  _V0get__output__string = VEncodePointer(VLookupConstant("_V0get__output__string", &_VW_V0get__output__string), VPOINTER_OTHER);
  _V0open__output__string = VEncodePointer(VLookupConstant("_V0open__output__string", &_VW_V0open__output__string), VPOINTER_OTHER);
  _V0close__port = VEncodePointer(VLookupConstant("_V0close__port", &_VW_V0close__port), VPOINTER_OTHER);
  _V0open__output__file = VEncodePointer(VLookupConstant("_V0open__output__file", &_VW_V0open__output__file), VPOINTER_OTHER);
  _V0open__input__file = VEncodePointer(VLookupConstant("_V0open__input__file", &_VW_V0open__input__file), VPOINTER_OTHER);
  _V0current__input__port = VEncodePointer(VLookupConstant("_V0current__input__port", &_VW_V0current__input__port), VPOINTER_OTHER);
  _V0current__error__port = VEncodePointer(VLookupConstant("_V0current__error__port", &_VW_V0current__error__port), VPOINTER_OTHER);
  _V0current__output__port = VEncodePointer(VLookupConstant("_V0current__output__port", &_VW_V0current__output__port), VPOINTER_OTHER);
  _V0char___Ginteger = VEncodePointer(VLookupConstant("_V0char___Ginteger", &_VW_V0char___Ginteger), VPOINTER_OTHER);
  _V0vector__for__each = VEncodePointer(VLookupConstant("_V0vector__for__each", &_VW_V0vector__for__each), VPOINTER_OTHER);
  _V0vector__length = VEncodePointer(VLookupConstant("_V0vector__length", &_VW_V0vector__length), VPOINTER_OTHER);
  _V0vector__set_B = VEncodePointer(VLookupConstant("_V0vector__set_B", &_VW_V0vector__set_B), VPOINTER_OTHER);
  _V0vector__ref = VEncodePointer(VLookupConstant("_V0vector__ref", &_VW_V0vector__ref), VPOINTER_OTHER);
  _V0vector = VEncodePointer(VLookupConstant("_V0vector", &_VW_V0vector), VPOINTER_OTHER);
  _V0list___Gvector = VEncodePointer(VLookupConstant("_V0list___Gvector", &_VW_V0list___Gvector), VPOINTER_OTHER);
  _V0symbol___Gstring = VEncodePointer(VLookupConstant("_V0symbol___Gstring", &_VW_V0symbol___Gstring), VPOINTER_OTHER);
  _V0string__append = VEncodePointer(VLookupConstant("_V0string__append", &_VW_V0string__append), VPOINTER_OTHER);
  _V0string___Gnumber = VEncodePointer(VLookupConstant("_V0string___Gnumber", &_VW_V0string___Gnumber), VPOINTER_OTHER);
  _V0string___Gsymbol = VEncodePointer(VLookupConstant("_V0string___Gsymbol", &_VW_V0string___Gsymbol), VPOINTER_OTHER);
  _V0string__length = VEncodePointer(VLookupConstant("_V0string__length", &_VW_V0string__length), VPOINTER_OTHER);
  _V0string__set_B = VEncodePointer(VLookupConstant("_V0string__set_B", &_VW_V0string__set_B), VPOINTER_OTHER);
  _V0string__ref = VEncodePointer(VLookupConstant("_V0string__ref", &_VW_V0string__ref), VPOINTER_OTHER);
  _V0string__copy_B = VEncodePointer(VLookupConstant("_V0string__copy_B", &_VW_V0string__copy_B), VPOINTER_OTHER);
  _V0string__copy = VEncodePointer(VLookupConstant("_V0string__copy", &_VW_V0string__copy), VPOINTER_OTHER);
  _V0substring = VEncodePointer(VLookupConstant("_V0substring", &_VW_V0substring), VPOINTER_OTHER);
  _V0make__string = VEncodePointer(VLookupConstant("_V0make__string", &_VW_V0make__string), VPOINTER_OTHER);
  _V0list___Gstring = VEncodePointer(VLookupConstant("_V0list___Gstring", &_VW_V0list___Gstring), VPOINTER_OTHER);
  _V0string___Glist = VEncodePointer(VLookupConstant("_V0string___Glist", &_VW_V0string___Glist), VPOINTER_OTHER);
  _V0assoc = VEncodePointer(VLookupConstant("_V0assoc", &_VW_V0assoc), VPOINTER_OTHER);
  _V0assv = VEncodePointer(VLookupConstant("_V0assv", &_VW_V0assv), VPOINTER_OTHER);
  _V0assq = VEncodePointer(VLookupConstant("_V0assq", &_VW_V0assq), VPOINTER_OTHER);
  _V0member = VEncodePointer(VLookupConstant("_V0member", &_VW_V0member), VPOINTER_OTHER);
  _V0memv = VEncodePointer(VLookupConstant("_V0memv", &_VW_V0memv), VPOINTER_OTHER);
  _V0memq = VEncodePointer(VLookupConstant("_V0memq", &_VW_V0memq), VPOINTER_OTHER);
  _V0reverse = VEncodePointer(VLookupConstant("_V0reverse", &_VW_V0reverse), VPOINTER_OTHER);
  _V0append = VEncodePointer(VLookupConstant("_V0append", &_VW_V0append), VPOINTER_OTHER);
  _V0for__each = VEncodePointer(VLookupConstant("_V0for__each", &_VW_V0for__each), VPOINTER_OTHER);
  _V0map = VEncodePointer(VLookupConstant("_V0map", &_VW_V0map), VPOINTER_OTHER);
  _V0list__ref = VEncodePointer(VLookupConstant("_V0list__ref", &_VW_V0list__ref), VPOINTER_OTHER);
  _V0length = VEncodePointer(VLookupConstant("_V0length", &_VW_V0length), VPOINTER_OTHER);
  _V0list = VEncodePointer(VLookupConstant("_V0list", &_VW_V0list), VPOINTER_OTHER);
  _V0cddddr = VEncodePointer(VLookupConstant("_V0cddddr", &_VW_V0cddddr), VPOINTER_OTHER);
  _V0cdddar = VEncodePointer(VLookupConstant("_V0cdddar", &_VW_V0cdddar), VPOINTER_OTHER);
  _V0cddadr = VEncodePointer(VLookupConstant("_V0cddadr", &_VW_V0cddadr), VPOINTER_OTHER);
  _V0cddaar = VEncodePointer(VLookupConstant("_V0cddaar", &_VW_V0cddaar), VPOINTER_OTHER);
  _V0cdaddr = VEncodePointer(VLookupConstant("_V0cdaddr", &_VW_V0cdaddr), VPOINTER_OTHER);
  _V0cdadar = VEncodePointer(VLookupConstant("_V0cdadar", &_VW_V0cdadar), VPOINTER_OTHER);
  _V0cdaadr = VEncodePointer(VLookupConstant("_V0cdaadr", &_VW_V0cdaadr), VPOINTER_OTHER);
  _V0cdaaar = VEncodePointer(VLookupConstant("_V0cdaaar", &_VW_V0cdaaar), VPOINTER_OTHER);
  _V0cadddr = VEncodePointer(VLookupConstant("_V0cadddr", &_VW_V0cadddr), VPOINTER_OTHER);
  _V0caddar = VEncodePointer(VLookupConstant("_V0caddar", &_VW_V0caddar), VPOINTER_OTHER);
  _V0cadadr = VEncodePointer(VLookupConstant("_V0cadadr", &_VW_V0cadadr), VPOINTER_OTHER);
  _V0cadaar = VEncodePointer(VLookupConstant("_V0cadaar", &_VW_V0cadaar), VPOINTER_OTHER);
  _V0caaddr = VEncodePointer(VLookupConstant("_V0caaddr", &_VW_V0caaddr), VPOINTER_OTHER);
  _V0caadar = VEncodePointer(VLookupConstant("_V0caadar", &_VW_V0caadar), VPOINTER_OTHER);
  _V0caaadr = VEncodePointer(VLookupConstant("_V0caaadr", &_VW_V0caaadr), VPOINTER_OTHER);
  _V0caaaar = VEncodePointer(VLookupConstant("_V0caaaar", &_VW_V0caaaar), VPOINTER_OTHER);
  _V0cdddr = VEncodePointer(VLookupConstant("_V0cdddr", &_VW_V0cdddr), VPOINTER_OTHER);
  _V0cddar = VEncodePointer(VLookupConstant("_V0cddar", &_VW_V0cddar), VPOINTER_OTHER);
  _V0cdadr = VEncodePointer(VLookupConstant("_V0cdadr", &_VW_V0cdadr), VPOINTER_OTHER);
  _V0cdaar = VEncodePointer(VLookupConstant("_V0cdaar", &_VW_V0cdaar), VPOINTER_OTHER);
  _V0caddr = VEncodePointer(VLookupConstant("_V0caddr", &_VW_V0caddr), VPOINTER_OTHER);
  _V0cadar = VEncodePointer(VLookupConstant("_V0cadar", &_VW_V0cadar), VPOINTER_OTHER);
  _V0caadr = VEncodePointer(VLookupConstant("_V0caadr", &_VW_V0caadr), VPOINTER_OTHER);
  _V0caaar = VEncodePointer(VLookupConstant("_V0caaar", &_VW_V0caaar), VPOINTER_OTHER);
  _V0cddr = VEncodePointer(VLookupConstant("_V0cddr", &_VW_V0cddr), VPOINTER_OTHER);
  _V0cdar = VEncodePointer(VLookupConstant("_V0cdar", &_VW_V0cdar), VPOINTER_OTHER);
  _V0cadr = VEncodePointer(VLookupConstant("_V0cadr", &_VW_V0cadr), VPOINTER_OTHER);
  _V0caar = VEncodePointer(VLookupConstant("_V0caar", &_VW_V0caar), VPOINTER_OTHER);
  _V0set__cdr_B = VEncodePointer(VLookupConstant("_V0set__cdr_B", &_VW_V0set__cdr_B), VPOINTER_OTHER);
  _V0set__car_B = VEncodePointer(VLookupConstant("_V0set__car_B", &_VW_V0set__car_B), VPOINTER_OTHER);
  _V0cdr = VEncodePointer(VLookupConstant("_V0cdr", &_VW_V0cdr), VPOINTER_OTHER);
  _V0car = VEncodePointer(VLookupConstant("_V0car", &_VW_V0car), VPOINTER_OTHER);
  _V0cons = VEncodePointer(VLookupConstant("_V0cons", &_VW_V0cons), VPOINTER_OTHER);
  _V0min = VEncodePointer(VLookupConstant("_V0min", &_VW_V0min), VPOINTER_OTHER);
  _V0max = VEncodePointer(VLookupConstant("_V0max", &_VW_V0max), VPOINTER_OTHER);
  _V0remainder = VEncodePointer(VLookupConstant("_V0remainder", &_VW_V0remainder), VPOINTER_OTHER);
  _V0quotient = VEncodePointer(VLookupConstant("_V0quotient", &_VW_V0quotient), VPOINTER_OTHER);
  _V0_W = VEncodePointer(VLookupConstant("_V0_W", &_VW_V0_W), VPOINTER_OTHER);
  _V0_S = VEncodePointer(VLookupConstant("_V0_S", &_VW_V0_S), VPOINTER_OTHER);
  _V0__ = VEncodePointer(VLookupConstant("_V0__", &_VW_V0__), VPOINTER_OTHER);
  _V0_P = VEncodePointer(VLookupConstant("_V0_P", &_VW_V0_P), VPOINTER_OTHER);
  _V0complex_Q = VEncodePointer(VLookupConstant("_V0complex_Q", &_VW_V0complex_Q), VPOINTER_OTHER);
  _V0number_Q = VEncodePointer(VLookupConstant("_V0number_Q", &_VW_V0number_Q), VPOINTER_OTHER);
  _V0exact___Ginexact = VEncodePointer(VLookupConstant("_V0exact___Ginexact", &_VW_V0exact___Ginexact), VPOINTER_OTHER);
  _V0inexact = VEncodePointer(VLookupConstant("_V0inexact", &_VW_V0inexact), VPOINTER_OTHER);
  _V0_G_E = VEncodePointer(VLookupConstant("_V0_G_E", &_VW_V0_G_E), VPOINTER_OTHER);
  _V0_L_E = VEncodePointer(VLookupConstant("_V0_L_E", &_VW_V0_L_E), VPOINTER_OTHER);
  _V0_G = VEncodePointer(VLookupConstant("_V0_G", &_VW_V0_G), VPOINTER_OTHER);
  _V0_E = VEncodePointer(VLookupConstant("_V0_E", &_VW_V0_E), VPOINTER_OTHER);
  _V0_L = VEncodePointer(VLookupConstant("_V0_L", &_VW_V0_L), VPOINTER_OTHER);
  _V0not = VEncodePointer(VLookupConstant("_V0not", &_VW_V0not), VPOINTER_OTHER);
  _V0equal_Q = VEncodePointer(VLookupConstant("_V0equal_Q", &_VW_V0equal_Q), VPOINTER_OTHER);
  _V0eqv_Q = VEncodePointer(VLookupConstant("_V0eqv_Q", &_VW_V0eqv_Q), VPOINTER_OTHER);
  _V0symbol_E_Q = VEncodePointer(VLookupConstant("_V0symbol_E_Q", &_VW_V0symbol_E_Q), VPOINTER_OTHER);
  _V0eq_Q = VEncodePointer(VLookupConstant("_V0eq_Q", &_VW_V0eq_Q), VPOINTER_OTHER);
  _V0char_Q = VEncodePointer(VLookupConstant("_V0char_Q", &_VW_V0char_Q), VPOINTER_OTHER);
  _V0integer_Q = VEncodePointer(VLookupConstant("_V0integer_Q", &_VW_V0integer_Q), VPOINTER_OTHER);
  _V0real_Q = VEncodePointer(VLookupConstant("_V0real_Q", &_VW_V0real_Q), VPOINTER_OTHER);
  _V0inexact_Q = VEncodePointer(VLookupConstant("_V0inexact_Q", &_VW_V0inexact_Q), VPOINTER_OTHER);
  _V0exact_Q = VEncodePointer(VLookupConstant("_V0exact_Q", &_VW_V0exact_Q), VPOINTER_OTHER);
  _V0string_Q = VEncodePointer(VLookupConstant("_V0string_Q", &_VW_V0string_Q), VPOINTER_OTHER);
  _V0symbol_Q = VEncodePointer(VLookupConstant("_V0symbol_Q", &_VW_V0symbol_Q), VPOINTER_OTHER);
  _V0procedure_Q = VEncodePointer(VLookupConstant("_V0procedure_Q", &_VW_V0procedure_Q), VPOINTER_OTHER);
  _V0vector_Q = VEncodePointer(VLookupConstant("_V0vector_Q", &_VW_V0vector_Q), VPOINTER_OTHER);
  _V0pair_Q = VEncodePointer(VLookupConstant("_V0pair_Q", &_VW_V0pair_Q), VPOINTER_OTHER);
  _V0boolean_Q = VEncodePointer(VLookupConstant("_V0boolean_Q", &_VW_V0boolean_Q), VPOINTER_OTHER);
  _V0eof__object_Q = VEncodePointer(VLookupConstant("_V0eof__object_Q", &_VW_V0eof__object_Q), VPOINTER_OTHER);
  _V0null_Q = VEncodePointer(VLookupConstant("_V0null_Q", &_VW_V0null_Q), VPOINTER_OTHER);
}
static void _V0scheme_V0r7rs_V20_k127(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0scheme_V0r7rs_V20_k127, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.127 127 0) (##inline ##vcore.cons (##inline ##vcore.cons 'null? (bruijn ##.x.252 0 0)) (##inline ##vcore.cons (##inline ##vcore.cons 'eof-object? (bruijn ##.x.128 124 0)) (##inline ##vcore.cons (##inline ##vcore.cons 'boolean? (bruijn ##.x.251 1 0)) (##inline ##vcore.cons (##inline ##vcore.cons 'pair? (bruijn ##.x.129 123 0)) (##inline ##vcore.cons (##inline ##vcore.cons 'vector? (bruijn ##.x.250 2 0)) (##inline ##vcore.cons (##inline ##vcore.cons 'procedure? (bruijn ##.x.130 122 0)) (##inline ##vcore.cons (##inline ##vcore.cons 'symbol? (bruijn ##.x.249 3 0)) (##inline ##vcore.cons (##inline ##vcore.cons 'string? (bruijn ##.x.131 121 0)) (##inline ##vcore.cons (##inline ##vcore.cons 'exact? (bruijn ##.x.248 4 0)) (##inline ##vcore.cons (##inline ##vcore.cons 'inexact? (bruijn ##.x.132 120 0)) (##inline ##vcore.cons (##inline ##vcore.cons 'real? (bruijn ##.x.247 5 0)) (##inline ##vcore.cons (##inline ##vcore.cons 'integer? (bruijn ##.x.133 119 0)) (##inline ##vcore.cons (##inline ##vcore.cons 'char? (bruijn ##.x.246 6 0)) (##inline ##vcore.cons (##inline ##vcore.cons 'eq? (bruijn ##.x.134 118 0)) (##inline ##vcore.cons (##inline ##vcore.cons 'symbol=? (bruijn ##.x.245 7 0)) (##inline ##vcore.cons (##inline ##vcore.cons 'eqv? (bruijn ##.x.135 117 0)) (##inline ##vcore.cons (##inline ##vcore.cons 'equal? (bruijn ##.x.244 8 0)) (##inline ##vcore.cons (##inline ##vcore.cons 'not (bruijn ##.x.136 116 0)) (##inline ##vcore.cons (##inline ##vcore.cons '< (bruijn ##.x.243 9 0)) (##inline ##vcore.cons (##inline ##vcore.cons '= (bruijn ##.x.137 115 0)) (##inline ##vcore.cons (##inline ##vcore.cons '> (bruijn ##.x.242 10 0)) (##inline ##vcore.cons (##inline ##vcore.cons '<= (bruijn ##.x.138 114 0)) (##inline ##vcore.cons (##inline ##vcore.cons '>= (bruijn ##.x.241 11 0)) (##inline ##vcore.cons (##inline ##vcore.cons 'inexact (bruijn ##.x.139 113 0)) (##inline ##vcore.cons (##inline ##vcore.cons 'exact->inexact (bruijn ##.x.240 12 0)) (##inline ##vcore.cons (##inline ##vcore.cons 'number? (bruijn ##.x.140 112 0)) (##inline ##vcore.cons (##inline ##vcore.cons 'complex? (bruijn ##.x.239 13 0)) (##inline ##vcore.cons (##inline ##vcore.cons '+ (bruijn ##.x.141 111 0)) (##inline ##vcore.cons (##inline ##vcore.cons '- (bruijn ##.x.238 14 0)) (##inline ##vcore.cons (##inline ##vcore.cons '* (bruijn ##.x.142 110 0)) (##inline ##vcore.cons (##inline ##vcore.cons '/ (bruijn ##.x.237 15 0)) (##inline ##vcore.cons (##inline ##vcore.cons 'quotient (bruijn ##.x.143 109 0)) (##inline ##vcore.cons (##inline ##vcore.cons 'remainder (bruijn ##.x.236 16 0)) (##inline ##vcore.cons (##inline ##vcore.cons 'max (bruijn ##.x.144 108 0)) (##inline ##vcore.cons (##inline ##vcore.cons 'min (bruijn ##.x.235 17 0)) (##inline ##vcore.cons (##inline ##vcore.cons 'cons (bruijn ##.x.145 107 0)) (##inline ##vcore.cons (##inline ##vcore.cons 'car (bruijn ##.x.234 18 0)) (##inline ##vcore.cons (##inline ##vcore.cons 'cdr (bruijn ##.x.146 106 0)) (##inline ##vcore.cons (##inline ##vcore.cons 'set-car! (bruijn ##.x.233 19 0)) (##inline ##vcore.cons (##inline ##vcore.cons 'set-cdr! (bruijn ##.x.147 105 0)) (##inline ##vcore.cons (##inline ##vcore.cons 'caar (bruijn ##.x.232 20 0)) (##inline ##vcore.cons (##inline ##vcore.cons 'cadr (bruijn ##.x.148 104 0)) (##inline ##vcore.cons (##inline ##vcore.cons 'cdar (bruijn ##.x.231 21 0)) (##inline ##vcore.cons (##inline ##vcore.cons 'cddr (bruijn ##.x.149 103 0)) (##inline ##vcore.cons (##inline ##vcore.cons 'caaar (bruijn ##.x.230 22 0)) (##inline ##vcore.cons (##inline ##vcore.cons 'caadr (bruijn ##.x.150 102 0)) (##inline ##vcore.cons (##inline ##vcore.cons 'cadar (bruijn ##.x.229 23 0)) (##inline ##vcore.cons (##inline ##vcore.cons 'caddr (bruijn ##.x.151 101 0)) (##inline ##vcore.cons (##inline ##vcore.cons 'cdaar (bruijn ##.x.228 24 0)) (##inline ##vcore.cons (##inline ##vcore.cons 'cdadr (bruijn ##.x.152 100 0)) (##inline ##vcore.cons (##inline ##vcore.cons 'cddar (bruijn ##.x.227 25 0)) (##inline ##vcore.cons (##inline ##vcore.cons 'cdddr (bruijn ##.x.153 99 0)) (##inline ##vcore.cons (##inline ##vcore.cons 'caaaar (bruijn ##.x.226 26 0)) (##inline ##vcore.cons (##inline ##vcore.cons 'caaadr (bruijn ##.x.154 98 0)) (##inline ##vcore.cons (##inline ##vcore.cons 'caadar (bruijn ##.x.225 27 0)) (##inline ##vcore.cons (##inline ##vcore.cons 'caaddr (bruijn ##.x.155 97 0)) (##inline ##vcore.cons (##inline ##vcore.cons 'cadaar (bruijn ##.x.224 28 0)) (##inline ##vcore.cons (##inline ##vcore.cons 'cadadr (bruijn ##.x.156 96 0)) (##inline ##vcore.cons (##inline ##vcore.cons 'caddar (bruijn ##.x.223 29 0)) (##inline ##vcore.cons (##inline ##vcore.cons 'cadddr (bruijn ##.x.157 95 0)) (##inline ##vcore.cons (##inline ##vcore.cons 'cdaaar (bruijn ##.x.222 30 0)) (##inline ##vcore.cons (##inline ##vcore.cons 'cdaadr (bruijn ##.x.158 94 0)) (##inline ##vcore.cons (##inline ##vcore.cons 'cdadar (bruijn ##.x.221 31 0)) (##inline ##vcore.cons (##inline ##vcore.cons 'cdaddr (bruijn ##.x.159 93 0)) (##inline ##vcore.cons (##inline ##vcore.cons 'cddaar (bruijn ##.x.220 32 0)) (##inline ##vcore.cons (##inline ##vcore.cons 'cddadr (bruijn ##.x.160 92 0)) (##inline ##vcore.cons (##inline ##vcore.cons 'cdddar (bruijn ##.x.219 33 0)) (##inline ##vcore.cons (##inline ##vcore.cons 'cddddr (bruijn ##.x.161 91 0)) (##inline ##vcore.cons (##inline ##vcore.cons 'list (bruijn ##.x.218 34 0)) (##inline ##vcore.cons (##inline ##vcore.cons 'length (bruijn ##.x.162 90 0)) (##inline ##vcore.cons (##inline ##vcore.cons 'list-ref (bruijn ##.x.217 35 0)) (##inline ##vcore.cons (##inline ##vcore.cons 'map (bruijn ##.x.163 89 0)) (##inline ##vcore.cons (##inline ##vcore.cons 'for-each (bruijn ##.x.216 36 0)) (##inline ##vcore.cons (##inline ##vcore.cons 'append (bruijn ##.x.164 88 0)) (##inline ##vcore.cons (##inline ##vcore.cons 'reverse (bruijn ##.x.215 37 0)) (##inline ##vcore.cons (##inline ##vcore.cons 'memq (bruijn ##.x.165 87 0)) (##inline ##vcore.cons (##inline ##vcore.cons 'memv (bruijn ##.x.214 38 0)) (##inline ##vcore.cons (##inline ##vcore.cons 'member (bruijn ##.x.166 86 0)) (##inline ##vcore.cons (##inline ##vcore.cons 'assq (bruijn ##.x.213 39 0)) (##inline ##vcore.cons (##inline ##vcore.cons 'assv (bruijn ##.x.167 85 0)) (##inline ##vcore.cons (##inline ##vcore.cons 'assoc (bruijn ##.x.212 40 0)) (##inline ##vcore.cons (##inline ##vcore.cons 'string->list (bruijn ##.x.206 46 0)) (##inline ##vcore.cons (##inline ##vcore.cons 'list->string (bruijn ##.x.211 41 0)) (##inline ##vcore.cons (##inline ##vcore.cons 'make-string (bruijn ##.x.168 84 0)) (##inline ##vcore.cons (##inline ##vcore.cons 'substring (bruijn ##.x.210 42 0)) (##inline ##vcore.cons (##inline ##vcore.cons 'string-copy (bruijn ##.x.169 83 0)) (##inline ##vcore.cons (##inline ##vcore.cons 'string-copy! (bruijn ##.x.209 43 0)) (##inline ##vcore.cons (##inline ##vcore.cons 'string-ref (bruijn ##.x.170 82 0)) (##inline ##vcore.cons (##inline ##vcore.cons 'string-set! (bruijn ##.x.208 44 0)) (##inline ##vcore.cons (##inline ##vcore.cons 'string-length (bruijn ##.x.171 81 0)) (##inline ##vcore.cons (##inline ##vcore.cons 'string->symbol (bruijn ##.x.207 45 0)) (##inline ##vcore.cons (##inline ##vcore.cons 'string->number (bruijn ##.x.172 80 0)) (##inline ##vcore.cons (##inline ##vcore.cons 'string->list (bruijn ##.x.206 46 0)) (##inline ##vcore.cons (##inline ##vcore.cons 'string-append (bruijn ##.x.173 79 0)) (##inline ##vcore.cons (##inline ##vcore.cons 'symbol->string (bruijn ##.x.205 47 0)) (##inline ##vcore.cons (##inline ##vcore.cons 'list->vector (bruijn ##.x.174 78 0)) (##inline ##vcore.cons (##inline ##vcore.cons 'vector (bruijn ##.x.204 48 0)) (##inline ##vcore.cons (##inline ##vcore.cons 'vector-ref (bruijn ##.x.175 77 0)) (##inline ##vcore.cons (##inline ##vcore.cons 'vector-set! (bruijn ##.x.203 49 0)) (##inline ##vcore.cons (##inline ##vcore.cons 'vector-length (bruijn ##.x.176 76 0)) (##inline ##vcore.cons (##inline ##vcore.cons 'vector-for-each (bruijn ##.x.202 50 0)) (##inline ##vcore.cons (##inline ##vcore.cons 'char->integer (bruijn ##.x.177 75 0)) (##inline ##vcore.cons (##inline ##vcore.cons 'current-output-port (bruijn ##.x.201 51 0)) (##inline ##vcore.cons (##inline ##vcore.cons 'current-error-port (bruijn ##.x.178 74 0)) (##inline ##vcore.cons (##inline ##vcore.cons 'current-input-port (bruijn ##.x.200 52 0)) (##inline ##vcore.cons (##inline ##vcore.cons 'open-input-file (bruijn ##.x.179 73 0)) (##inline ##vcore.cons (##inline ##vcore.cons 'open-output-file (bruijn ##.x.199 53 0)) (##inline ##vcore.cons (##inline ##vcore.cons 'close-port (bruijn ##.x.180 72 0)) (##inline ##vcore.cons (##inline ##vcore.cons 'open-output-string (bruijn ##.x.198 54 0)) (##inline ##vcore.cons (##inline ##vcore.cons 'get-output-string (bruijn ##.x.181 71 0)) (##inline ##vcore.cons (##inline ##vcore.cons 'with-output-to-file (bruijn ##.x.197 55 0)) (##inline ##vcore.cons (##inline ##vcore.cons 'with-input-from-file (bruijn ##.x.182 70 0)) (##inline ##vcore.cons (##inline ##vcore.cons 'read-char (bruijn ##.x.196 56 0)) (##inline ##vcore.cons (##inline ##vcore.cons 'read-line (bruijn ##.x.183 69 0)) (##inline ##vcore.cons (##inline ##vcore.cons 'read (bruijn ##.x.195 57 0)) (##inline ##vcore.cons (##inline ##vcore.cons 'newline (bruijn ##.x.184 68 0)) (##inline ##vcore.cons (##inline ##vcore.cons 'display (bruijn ##.x.194 58 0)) (##inline ##vcore.cons (##inline ##vcore.cons 'write (bruijn ##.x.185 67 0)) (##inline ##vcore.cons (##inline ##vcore.cons 'call/cc (bruijn ##.x.193 59 0)) (##inline ##vcore.cons (##inline ##vcore.cons 'call-with-current-continuation (bruijn ##.x.186 66 0)) (##inline ##vcore.cons (##inline ##vcore.cons 'call-with-values (bruijn ##.x.192 60 0)) (##inline ##vcore.cons (##inline ##vcore.cons 'apply (bruijn ##.x.187 65 0)) (##inline ##vcore.cons (##inline ##vcore.cons 'values (bruijn ##.x.191 61 0)) (##inline ##vcore.cons (##inline ##vcore.cons 'command-line (bruijn ##.x.188 64 0)) (##inline ##vcore.cons (##inline ##vcore.cons 'exit (bruijn ##.x.190 62 0)) (##inline ##vcore.cons (##inline ##vcore.cons 'error (bruijn ##.x.189 63 0)) '())))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 127-1, 0)), 1,
      VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0null_Q,
        _var0),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0eof__object_Q,
        VGetArg(statics, 124-1, 0)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0boolean_Q,
        statics->vars[0]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0pair_Q,
        VGetArg(statics, 123-1, 0)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0vector_Q,
        statics->up->vars[0]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0procedure_Q,
        VGetArg(statics, 122-1, 0)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0symbol_Q,
        statics->up->up->vars[0]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0string_Q,
        VGetArg(statics, 121-1, 0)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0exact_Q,
        statics->up->up->up->vars[0]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0inexact_Q,
        VGetArg(statics, 120-1, 0)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0real_Q,
        VGetArg(statics, 5-1, 0)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0integer_Q,
        VGetArg(statics, 119-1, 0)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0char_Q,
        VGetArg(statics, 6-1, 0)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0eq_Q,
        VGetArg(statics, 118-1, 0)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0symbol_E_Q,
        VGetArg(statics, 7-1, 0)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0eqv_Q,
        VGetArg(statics, 117-1, 0)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0equal_Q,
        VGetArg(statics, 8-1, 0)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0not,
        VGetArg(statics, 116-1, 0)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0_L,
        VGetArg(statics, 9-1, 0)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0_E,
        VGetArg(statics, 115-1, 0)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0_G,
        VGetArg(statics, 10-1, 0)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0_L_E,
        VGetArg(statics, 114-1, 0)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0_G_E,
        VGetArg(statics, 11-1, 0)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0inexact,
        VGetArg(statics, 113-1, 0)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0exact___Ginexact,
        VGetArg(statics, 12-1, 0)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0number_Q,
        VGetArg(statics, 112-1, 0)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0complex_Q,
        VGetArg(statics, 13-1, 0)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0_P,
        VGetArg(statics, 111-1, 0)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0__,
        VGetArg(statics, 14-1, 0)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0_S,
        VGetArg(statics, 110-1, 0)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0_W,
        VGetArg(statics, 15-1, 0)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0quotient,
        VGetArg(statics, 109-1, 0)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0remainder,
        VGetArg(statics, 16-1, 0)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0max,
        VGetArg(statics, 108-1, 0)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0min,
        VGetArg(statics, 17-1, 0)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0cons,
        VGetArg(statics, 107-1, 0)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0car,
        VGetArg(statics, 18-1, 0)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0cdr,
        VGetArg(statics, 106-1, 0)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0set__car_B,
        VGetArg(statics, 19-1, 0)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0set__cdr_B,
        VGetArg(statics, 105-1, 0)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0caar,
        VGetArg(statics, 20-1, 0)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0cadr,
        VGetArg(statics, 104-1, 0)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0cdar,
        VGetArg(statics, 21-1, 0)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0cddr,
        VGetArg(statics, 103-1, 0)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0caaar,
        VGetArg(statics, 22-1, 0)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0caadr,
        VGetArg(statics, 102-1, 0)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0cadar,
        VGetArg(statics, 23-1, 0)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0caddr,
        VGetArg(statics, 101-1, 0)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0cdaar,
        VGetArg(statics, 24-1, 0)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0cdadr,
        VGetArg(statics, 100-1, 0)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0cddar,
        VGetArg(statics, 25-1, 0)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0cdddr,
        VGetArg(statics, 99-1, 0)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0caaaar,
        VGetArg(statics, 26-1, 0)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0caaadr,
        VGetArg(statics, 98-1, 0)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0caadar,
        VGetArg(statics, 27-1, 0)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0caaddr,
        VGetArg(statics, 97-1, 0)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0cadaar,
        VGetArg(statics, 28-1, 0)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0cadadr,
        VGetArg(statics, 96-1, 0)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0caddar,
        VGetArg(statics, 29-1, 0)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0cadddr,
        VGetArg(statics, 95-1, 0)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0cdaaar,
        VGetArg(statics, 30-1, 0)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0cdaadr,
        VGetArg(statics, 94-1, 0)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0cdadar,
        VGetArg(statics, 31-1, 0)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0cdaddr,
        VGetArg(statics, 93-1, 0)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0cddaar,
        VGetArg(statics, 32-1, 0)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0cddadr,
        VGetArg(statics, 92-1, 0)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0cdddar,
        VGetArg(statics, 33-1, 0)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0cddddr,
        VGetArg(statics, 91-1, 0)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0list,
        VGetArg(statics, 34-1, 0)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0length,
        VGetArg(statics, 90-1, 0)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0list__ref,
        VGetArg(statics, 35-1, 0)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0map,
        VGetArg(statics, 89-1, 0)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0for__each,
        VGetArg(statics, 36-1, 0)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0append,
        VGetArg(statics, 88-1, 0)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0reverse,
        VGetArg(statics, 37-1, 0)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0memq,
        VGetArg(statics, 87-1, 0)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0memv,
        VGetArg(statics, 38-1, 0)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0member,
        VGetArg(statics, 86-1, 0)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0assq,
        VGetArg(statics, 39-1, 0)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0assv,
        VGetArg(statics, 85-1, 0)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0assoc,
        VGetArg(statics, 40-1, 0)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0string___Glist,
        VGetArg(statics, 46-1, 0)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0list___Gstring,
        VGetArg(statics, 41-1, 0)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0make__string,
        VGetArg(statics, 84-1, 0)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0substring,
        VGetArg(statics, 42-1, 0)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0string__copy,
        VGetArg(statics, 83-1, 0)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0string__copy_B,
        VGetArg(statics, 43-1, 0)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0string__ref,
        VGetArg(statics, 82-1, 0)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0string__set_B,
        VGetArg(statics, 44-1, 0)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0string__length,
        VGetArg(statics, 81-1, 0)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0string___Gsymbol,
        VGetArg(statics, 45-1, 0)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0string___Gnumber,
        VGetArg(statics, 80-1, 0)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0string___Glist,
        VGetArg(statics, 46-1, 0)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0string__append,
        VGetArg(statics, 79-1, 0)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0symbol___Gstring,
        VGetArg(statics, 47-1, 0)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0list___Gvector,
        VGetArg(statics, 78-1, 0)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0vector,
        VGetArg(statics, 48-1, 0)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0vector__ref,
        VGetArg(statics, 77-1, 0)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0vector__set_B,
        VGetArg(statics, 49-1, 0)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0vector__length,
        VGetArg(statics, 76-1, 0)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0vector__for__each,
        VGetArg(statics, 50-1, 0)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0char___Ginteger,
        VGetArg(statics, 75-1, 0)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0current__output__port,
        VGetArg(statics, 51-1, 0)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0current__error__port,
        VGetArg(statics, 74-1, 0)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0current__input__port,
        VGetArg(statics, 52-1, 0)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0open__input__file,
        VGetArg(statics, 73-1, 0)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0open__output__file,
        VGetArg(statics, 53-1, 0)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0close__port,
        VGetArg(statics, 72-1, 0)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0open__output__string,
        VGetArg(statics, 54-1, 0)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0get__output__string,
        VGetArg(statics, 71-1, 0)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0with__output__to__file,
        VGetArg(statics, 55-1, 0)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0with__input__from__file,
        VGetArg(statics, 70-1, 0)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0read__char,
        VGetArg(statics, 56-1, 0)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0read__line,
        VGetArg(statics, 69-1, 0)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0read,
        VGetArg(statics, 57-1, 0)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0newline,
        VGetArg(statics, 68-1, 0)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0display,
        VGetArg(statics, 58-1, 0)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0write,
        VGetArg(statics, 67-1, 0)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0call_Wcc,
        VGetArg(statics, 59-1, 0)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0call__with__current__continuation,
        VGetArg(statics, 66-1, 0)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0call__with__values,
        VGetArg(statics, 60-1, 0)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0apply,
        VGetArg(statics, 65-1, 0)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0values,
        VGetArg(statics, 61-1, 0)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0command__line,
        VGetArg(statics, 64-1, 0)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0exit,
        VGetArg(statics, 62-1, 0)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0error,
        VGetArg(statics, 63-1, 0)),
        VNULL)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
}
static void _V0scheme_V0r7rs_V20_k126(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0scheme_V0r7rs_V20_k126, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 124 0) (close _V0scheme_V0r7rs_V20_k127) 'null?)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 124-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k127, self)})),
      _V0null_Q);
}
static void _V0scheme_V0r7rs_V20_k125(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0scheme_V0r7rs_V20_k125, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 123 0) (close _V0scheme_V0r7rs_V20_k126) 'boolean?)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 123-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k126, self)})),
      _V0boolean_Q);
}
static void _V0scheme_V0r7rs_V20_k124(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0scheme_V0r7rs_V20_k124, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 122 0) (close _V0scheme_V0r7rs_V20_k125) 'vector?)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 122-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k125, self)})),
      _V0vector_Q);
}
static void _V0scheme_V0r7rs_V20_k123(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0scheme_V0r7rs_V20_k123, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 121 0) (close _V0scheme_V0r7rs_V20_k124) 'symbol?)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 121-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k124, self)})),
      _V0symbol_Q);
}
static void _V0scheme_V0r7rs_V20_k122(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0scheme_V0r7rs_V20_k122, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 120 0) (close _V0scheme_V0r7rs_V20_k123) 'exact?)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 120-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k123, self)})),
      _V0exact_Q);
}
static void _V0scheme_V0r7rs_V20_k121(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0scheme_V0r7rs_V20_k121, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 119 0) (close _V0scheme_V0r7rs_V20_k122) 'real?)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 119-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k122, self)})),
      _V0real_Q);
}
static void _V0scheme_V0r7rs_V20_k120(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0scheme_V0r7rs_V20_k120, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 118 0) (close _V0scheme_V0r7rs_V20_k121) 'char?)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 118-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k121, self)})),
      _V0char_Q);
}
static void _V0scheme_V0r7rs_V20_k119(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0scheme_V0r7rs_V20_k119, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 117 0) (close _V0scheme_V0r7rs_V20_k120) 'symbol=?)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 117-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k120, self)})),
      _V0symbol_E_Q);
}
static void _V0scheme_V0r7rs_V20_k118(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0scheme_V0r7rs_V20_k118, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 116 0) (close _V0scheme_V0r7rs_V20_k119) 'equal?)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 116-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k119, self)})),
      _V0equal_Q);
}
static void _V0scheme_V0r7rs_V20_k117(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0scheme_V0r7rs_V20_k117, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 115 0) (close _V0scheme_V0r7rs_V20_k118) '<)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 115-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k118, self)})),
      _V0_L);
}
static void _V0scheme_V0r7rs_V20_k116(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0scheme_V0r7rs_V20_k116, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 114 0) (close _V0scheme_V0r7rs_V20_k117) '>)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 114-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k117, self)})),
      _V0_G);
}
static void _V0scheme_V0r7rs_V20_k115(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0scheme_V0r7rs_V20_k115, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 113 0) (close _V0scheme_V0r7rs_V20_k116) '>=)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 113-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k116, self)})),
      _V0_G_E);
}
static void _V0scheme_V0r7rs_V20_k114(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0scheme_V0r7rs_V20_k114, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 112 0) (close _V0scheme_V0r7rs_V20_k115) 'exact->inexact)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 112-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k115, self)})),
      _V0exact___Ginexact);
}
static void _V0scheme_V0r7rs_V20_k113(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0scheme_V0r7rs_V20_k113, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 111 0) (close _V0scheme_V0r7rs_V20_k114) 'complex?)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 111-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k114, self)})),
      _V0complex_Q);
}
static void _V0scheme_V0r7rs_V20_k112(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0scheme_V0r7rs_V20_k112, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 110 0) (close _V0scheme_V0r7rs_V20_k113) '-)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 110-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k113, self)})),
      _V0__);
}
static void _V0scheme_V0r7rs_V20_k111(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0scheme_V0r7rs_V20_k111, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 109 0) (close _V0scheme_V0r7rs_V20_k112) '/)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 109-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k112, self)})),
      _V0_W);
}
static void _V0scheme_V0r7rs_V20_k110(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0scheme_V0r7rs_V20_k110, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 108 0) (close _V0scheme_V0r7rs_V20_k111) 'remainder)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 108-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k111, self)})),
      _V0remainder);
}
static void _V0scheme_V0r7rs_V20_k109(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0scheme_V0r7rs_V20_k109, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 107 0) (close _V0scheme_V0r7rs_V20_k110) 'min)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 107-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k110, self)})),
      _V0min);
}
static void _V0scheme_V0r7rs_V20_k108(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0scheme_V0r7rs_V20_k108, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 106 0) (close _V0scheme_V0r7rs_V20_k109) 'car)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 106-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k109, self)})),
      _V0car);
}
static void _V0scheme_V0r7rs_V20_k107(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0scheme_V0r7rs_V20_k107, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 105 0) (close _V0scheme_V0r7rs_V20_k108) 'set-car!)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 105-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k108, self)})),
      _V0set__car_B);
}
static void _V0scheme_V0r7rs_V20_k106(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0scheme_V0r7rs_V20_k106, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 104 0) (close _V0scheme_V0r7rs_V20_k107) 'caar)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 104-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k107, self)})),
      _V0caar);
}
static void _V0scheme_V0r7rs_V20_k105(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0scheme_V0r7rs_V20_k105, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 103 0) (close _V0scheme_V0r7rs_V20_k106) 'cdar)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 103-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k106, self)})),
      _V0cdar);
}
static void _V0scheme_V0r7rs_V20_k104(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0scheme_V0r7rs_V20_k104, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 102 0) (close _V0scheme_V0r7rs_V20_k105) 'caaar)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 102-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k105, self)})),
      _V0caaar);
}
static void _V0scheme_V0r7rs_V20_k103(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0scheme_V0r7rs_V20_k103, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 101 0) (close _V0scheme_V0r7rs_V20_k104) 'cadar)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 101-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k104, self)})),
      _V0cadar);
}
static void _V0scheme_V0r7rs_V20_k102(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0scheme_V0r7rs_V20_k102, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 100 0) (close _V0scheme_V0r7rs_V20_k103) 'cdaar)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 100-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k103, self)})),
      _V0cdaar);
}
static void _V0scheme_V0r7rs_V20_k101(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0scheme_V0r7rs_V20_k101, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 99 0) (close _V0scheme_V0r7rs_V20_k102) 'cddar)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 99-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k102, self)})),
      _V0cddar);
}
static void _V0scheme_V0r7rs_V20_k100(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0scheme_V0r7rs_V20_k100, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 98 0) (close _V0scheme_V0r7rs_V20_k101) 'caaaar)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 98-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k101, self)})),
      _V0caaaar);
}
static void _V0scheme_V0r7rs_V20_k99(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0scheme_V0r7rs_V20_k99, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 97 0) (close _V0scheme_V0r7rs_V20_k100) 'caadar)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 97-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k100, self)})),
      _V0caadar);
}
static void _V0scheme_V0r7rs_V20_k98(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0scheme_V0r7rs_V20_k98, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 96 0) (close _V0scheme_V0r7rs_V20_k99) 'cadaar)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 96-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k99, self)})),
      _V0cadaar);
}
static void _V0scheme_V0r7rs_V20_k97(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0scheme_V0r7rs_V20_k97, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 95 0) (close _V0scheme_V0r7rs_V20_k98) 'caddar)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 95-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k98, self)})),
      _V0caddar);
}
static void _V0scheme_V0r7rs_V20_k96(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0scheme_V0r7rs_V20_k96, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 94 0) (close _V0scheme_V0r7rs_V20_k97) 'cdaaar)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 94-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k97, self)})),
      _V0cdaaar);
}
static void _V0scheme_V0r7rs_V20_k95(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0scheme_V0r7rs_V20_k95, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 93 0) (close _V0scheme_V0r7rs_V20_k96) 'cdadar)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 93-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k96, self)})),
      _V0cdadar);
}
static void _V0scheme_V0r7rs_V20_k94(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0scheme_V0r7rs_V20_k94, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 92 0) (close _V0scheme_V0r7rs_V20_k95) 'cddaar)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 92-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k95, self)})),
      _V0cddaar);
}
static void _V0scheme_V0r7rs_V20_k93(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0scheme_V0r7rs_V20_k93, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 91 0) (close _V0scheme_V0r7rs_V20_k94) 'cdddar)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 91-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k94, self)})),
      _V0cdddar);
}
static void _V0scheme_V0r7rs_V20_k92(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0scheme_V0r7rs_V20_k92, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 90 0) (close _V0scheme_V0r7rs_V20_k93) 'list)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 90-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k93, self)})),
      _V0list);
}
static void _V0scheme_V0r7rs_V20_k91(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0scheme_V0r7rs_V20_k91, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 89 0) (close _V0scheme_V0r7rs_V20_k92) 'list-ref)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 89-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k92, self)})),
      _V0list__ref);
}
static void _V0scheme_V0r7rs_V20_k90(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0scheme_V0r7rs_V20_k90, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 88 0) (close _V0scheme_V0r7rs_V20_k91) 'for-each)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 88-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k91, self)})),
      _V0for__each);
}
static void _V0scheme_V0r7rs_V20_k89(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0scheme_V0r7rs_V20_k89, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 87 0) (close _V0scheme_V0r7rs_V20_k90) 'reverse)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 87-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k90, self)})),
      _V0reverse);
}
static void _V0scheme_V0r7rs_V20_k88(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0scheme_V0r7rs_V20_k88, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 86 0) (close _V0scheme_V0r7rs_V20_k89) 'memv)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 86-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k89, self)})),
      _V0memv);
}
static void _V0scheme_V0r7rs_V20_k87(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0scheme_V0r7rs_V20_k87, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 85 0) (close _V0scheme_V0r7rs_V20_k88) 'assq)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 85-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k88, self)})),
      _V0assq);
}
static void _V0scheme_V0r7rs_V20_k86(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0scheme_V0r7rs_V20_k86, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 84 0) (close _V0scheme_V0r7rs_V20_k87) 'assoc)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 84-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k87, self)})),
      _V0assoc);
}
static void _V0scheme_V0r7rs_V20_k85(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0scheme_V0r7rs_V20_k85, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 83 0) (close _V0scheme_V0r7rs_V20_k86) 'list->string)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 83-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k86, self)})),
      _V0list___Gstring);
}
static void _V0scheme_V0r7rs_V20_k84(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0scheme_V0r7rs_V20_k84, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 82 0) (close _V0scheme_V0r7rs_V20_k85) 'substring)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 82-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k85, self)})),
      _V0substring);
}
static void _V0scheme_V0r7rs_V20_k83(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0scheme_V0r7rs_V20_k83, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 81 0) (close _V0scheme_V0r7rs_V20_k84) 'string-copy!)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 81-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k84, self)})),
      _V0string__copy_B);
}
static void _V0scheme_V0r7rs_V20_k82(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0scheme_V0r7rs_V20_k82, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 80 0) (close _V0scheme_V0r7rs_V20_k83) 'string-set!)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 80-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k83, self)})),
      _V0string__set_B);
}
static void _V0scheme_V0r7rs_V20_k81(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0scheme_V0r7rs_V20_k81, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 79 0) (close _V0scheme_V0r7rs_V20_k82) 'string->symbol)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 79-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k82, self)})),
      _V0string___Gsymbol);
}
static void _V0scheme_V0r7rs_V20_k80(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0scheme_V0r7rs_V20_k80, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 78 0) (close _V0scheme_V0r7rs_V20_k81) 'string->list)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 78-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k81, self)})),
      _V0string___Glist);
}
static void _V0scheme_V0r7rs_V20_k79(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0scheme_V0r7rs_V20_k79, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 77 0) (close _V0scheme_V0r7rs_V20_k80) 'symbol->string)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 77-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k80, self)})),
      _V0symbol___Gstring);
}
static void _V0scheme_V0r7rs_V20_k78(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0scheme_V0r7rs_V20_k78, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 76 0) (close _V0scheme_V0r7rs_V20_k79) 'vector)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 76-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k79, self)})),
      _V0vector);
}
static void _V0scheme_V0r7rs_V20_k77(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0scheme_V0r7rs_V20_k77, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 75 0) (close _V0scheme_V0r7rs_V20_k78) 'vector-set!)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 75-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k78, self)})),
      _V0vector__set_B);
}
static void _V0scheme_V0r7rs_V20_k76(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0scheme_V0r7rs_V20_k76, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 74 0) (close _V0scheme_V0r7rs_V20_k77) 'vector-for-each)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 74-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k77, self)})),
      _V0vector__for__each);
}
static void _V0scheme_V0r7rs_V20_k75(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0scheme_V0r7rs_V20_k75, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 73 0) (close _V0scheme_V0r7rs_V20_k76) 'current-output-port)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 73-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k76, self)})),
      _V0current__output__port);
}
static void _V0scheme_V0r7rs_V20_k74(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0scheme_V0r7rs_V20_k74, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 72 0) (close _V0scheme_V0r7rs_V20_k75) 'current-input-port)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 72-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k75, self)})),
      _V0current__input__port);
}
static void _V0scheme_V0r7rs_V20_k73(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0scheme_V0r7rs_V20_k73, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 71 0) (close _V0scheme_V0r7rs_V20_k74) 'open-output-file)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 71-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k74, self)})),
      _V0open__output__file);
}
static void _V0scheme_V0r7rs_V20_k72(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0scheme_V0r7rs_V20_k72, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 70 0) (close _V0scheme_V0r7rs_V20_k73) 'open-output-string)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 70-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k73, self)})),
      _V0open__output__string);
}
static void _V0scheme_V0r7rs_V20_k71(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0scheme_V0r7rs_V20_k71, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 69 0) (close _V0scheme_V0r7rs_V20_k72) 'with-output-to-file)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 69-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k72, self)})),
      _V0with__output__to__file);
}
static void _V0scheme_V0r7rs_V20_k70(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0scheme_V0r7rs_V20_k70, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 68 0) (close _V0scheme_V0r7rs_V20_k71) 'read-char)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 68-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k71, self)})),
      _V0read__char);
}
static void _V0scheme_V0r7rs_V20_k69(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0scheme_V0r7rs_V20_k69, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 67 0) (close _V0scheme_V0r7rs_V20_k70) 'read)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 67-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k70, self)})),
      _V0read);
}
static void _V0scheme_V0r7rs_V20_k68(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0scheme_V0r7rs_V20_k68, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 66 0) (close _V0scheme_V0r7rs_V20_k69) 'display)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 66-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k69, self)})),
      _V0display);
}
static void _V0scheme_V0r7rs_V20_k67(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0scheme_V0r7rs_V20_k67, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 65 0) (close _V0scheme_V0r7rs_V20_k68) 'call/cc)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 65-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k68, self)})),
      _V0call_Wcc);
}
static void _V0scheme_V0r7rs_V20_k66(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0scheme_V0r7rs_V20_k66, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 64 0) (close _V0scheme_V0r7rs_V20_k67) 'call-with-values)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 64-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k67, self)})),
      _V0call__with__values);
}
static void _V0scheme_V0r7rs_V20_k65(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0scheme_V0r7rs_V20_k65, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 63 0) (close _V0scheme_V0r7rs_V20_k66) 'values)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 63-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k66, self)})),
      _V0values);
}
static void _V0scheme_V0r7rs_V20_k64(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0scheme_V0r7rs_V20_k64, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 62 0) (close _V0scheme_V0r7rs_V20_k65) 'exit)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 62-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k65, self)})),
      _V0exit);
}
static void _V0scheme_V0r7rs_V20_k63(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0scheme_V0r7rs_V20_k63, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 61 0) (close _V0scheme_V0r7rs_V20_k64) 'error)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 61-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k64, self)})),
      _V0error);
}
static void _V0scheme_V0r7rs_V20_k62(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0scheme_V0r7rs_V20_k62, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 60 0) (close _V0scheme_V0r7rs_V20_k63) 'command-line)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 60-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k63, self)})),
      _V0command__line);
}
static void _V0scheme_V0r7rs_V20_k61(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0scheme_V0r7rs_V20_k61, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 59 0) (close _V0scheme_V0r7rs_V20_k62) 'apply)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 59-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k62, self)})),
      _V0apply);
}
static void _V0scheme_V0r7rs_V20_k60(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0scheme_V0r7rs_V20_k60, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 58 0) (close _V0scheme_V0r7rs_V20_k61) 'call-with-current-continuation)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 58-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k61, self)})),
      _V0call__with__current__continuation);
}
static void _V0scheme_V0r7rs_V20_k59(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0scheme_V0r7rs_V20_k59, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 57 0) (close _V0scheme_V0r7rs_V20_k60) 'write)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 57-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k60, self)})),
      _V0write);
}
static void _V0scheme_V0r7rs_V20_k58(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0scheme_V0r7rs_V20_k58, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 56 0) (close _V0scheme_V0r7rs_V20_k59) 'newline)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 56-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k59, self)})),
      _V0newline);
}
static void _V0scheme_V0r7rs_V20_k57(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0scheme_V0r7rs_V20_k57, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 55 0) (close _V0scheme_V0r7rs_V20_k58) 'read-line)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 55-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k58, self)})),
      _V0read__line);
}
static void _V0scheme_V0r7rs_V20_k56(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0scheme_V0r7rs_V20_k56, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 54 0) (close _V0scheme_V0r7rs_V20_k57) 'with-input-from-file)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 54-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k57, self)})),
      _V0with__input__from__file);
}
static void _V0scheme_V0r7rs_V20_k55(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0scheme_V0r7rs_V20_k55, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 53 0) (close _V0scheme_V0r7rs_V20_k56) 'get-output-string)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 53-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k56, self)})),
      _V0get__output__string);
}
static void _V0scheme_V0r7rs_V20_k54(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0scheme_V0r7rs_V20_k54, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 52 0) (close _V0scheme_V0r7rs_V20_k55) 'close-port)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 52-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k55, self)})),
      _V0close__port);
}
static void _V0scheme_V0r7rs_V20_k53(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0scheme_V0r7rs_V20_k53, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 51 0) (close _V0scheme_V0r7rs_V20_k54) 'open-input-file)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 51-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k54, self)})),
      _V0open__input__file);
}
static void _V0scheme_V0r7rs_V20_k52(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0scheme_V0r7rs_V20_k52, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 50 0) (close _V0scheme_V0r7rs_V20_k53) 'current-error-port)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 50-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k53, self)})),
      _V0current__error__port);
}
static void _V0scheme_V0r7rs_V20_k51(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0scheme_V0r7rs_V20_k51, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 49 0) (close _V0scheme_V0r7rs_V20_k52) 'char->integer)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 49-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k52, self)})),
      _V0char___Ginteger);
}
static void _V0scheme_V0r7rs_V20_k50(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0scheme_V0r7rs_V20_k50, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 48 0) (close _V0scheme_V0r7rs_V20_k51) 'vector-length)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 48-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k51, self)})),
      _V0vector__length);
}
static void _V0scheme_V0r7rs_V20_k49(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0scheme_V0r7rs_V20_k49, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 47 0) (close _V0scheme_V0r7rs_V20_k50) 'vector-ref)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 47-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k50, self)})),
      _V0vector__ref);
}
static void _V0scheme_V0r7rs_V20_k48(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0scheme_V0r7rs_V20_k48, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 46 0) (close _V0scheme_V0r7rs_V20_k49) 'list->vector)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 46-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k49, self)})),
      _V0list___Gvector);
}
static void _V0scheme_V0r7rs_V20_k47(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0scheme_V0r7rs_V20_k47, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 45 0) (close _V0scheme_V0r7rs_V20_k48) 'string-append)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 45-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k48, self)})),
      _V0string__append);
}
static void _V0scheme_V0r7rs_V20_k46(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0scheme_V0r7rs_V20_k46, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 44 0) (close _V0scheme_V0r7rs_V20_k47) 'string->number)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 44-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k47, self)})),
      _V0string___Gnumber);
}
static void _V0scheme_V0r7rs_V20_k45(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0scheme_V0r7rs_V20_k45, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 43 0) (close _V0scheme_V0r7rs_V20_k46) 'string-length)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 43-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k46, self)})),
      _V0string__length);
}
static void _V0scheme_V0r7rs_V20_k44(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0scheme_V0r7rs_V20_k44, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 42 0) (close _V0scheme_V0r7rs_V20_k45) 'string-ref)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 42-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k45, self)})),
      _V0string__ref);
}
static void _V0scheme_V0r7rs_V20_k43(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0scheme_V0r7rs_V20_k43, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 41 0) (close _V0scheme_V0r7rs_V20_k44) 'string-copy)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 41-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k44, self)})),
      _V0string__copy);
}
static void _V0scheme_V0r7rs_V20_k42(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0scheme_V0r7rs_V20_k42, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 40 0) (close _V0scheme_V0r7rs_V20_k43) 'make-string)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 40-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k43, self)})),
      _V0make__string);
}
static void _V0scheme_V0r7rs_V20_k41(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0scheme_V0r7rs_V20_k41, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 39 0) (close _V0scheme_V0r7rs_V20_k42) 'assv)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 39-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k42, self)})),
      _V0assv);
}
static void _V0scheme_V0r7rs_V20_k40(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0scheme_V0r7rs_V20_k40, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 38 0) (close _V0scheme_V0r7rs_V20_k41) 'member)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 38-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k41, self)})),
      _V0member);
}
static void _V0scheme_V0r7rs_V20_k39(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0scheme_V0r7rs_V20_k39, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 37 0) (close _V0scheme_V0r7rs_V20_k40) 'memq)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 37-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k40, self)})),
      _V0memq);
}
static void _V0scheme_V0r7rs_V20_k38(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0scheme_V0r7rs_V20_k38, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 36 0) (close _V0scheme_V0r7rs_V20_k39) 'append)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 36-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k39, self)})),
      _V0append);
}
static void _V0scheme_V0r7rs_V20_k37(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0scheme_V0r7rs_V20_k37, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 35 0) (close _V0scheme_V0r7rs_V20_k38) 'map)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 35-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k38, self)})),
      _V0map);
}
static void _V0scheme_V0r7rs_V20_k36(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0scheme_V0r7rs_V20_k36, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 34 0) (close _V0scheme_V0r7rs_V20_k37) 'length)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 34-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k37, self)})),
      _V0length);
}
static void _V0scheme_V0r7rs_V20_k35(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0scheme_V0r7rs_V20_k35, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 33 0) (close _V0scheme_V0r7rs_V20_k36) 'cddddr)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 33-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k36, self)})),
      _V0cddddr);
}
static void _V0scheme_V0r7rs_V20_k34(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0scheme_V0r7rs_V20_k34, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 32 0) (close _V0scheme_V0r7rs_V20_k35) 'cddadr)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 32-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k35, self)})),
      _V0cddadr);
}
static void _V0scheme_V0r7rs_V20_k33(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0scheme_V0r7rs_V20_k33, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 31 0) (close _V0scheme_V0r7rs_V20_k34) 'cdaddr)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 31-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k34, self)})),
      _V0cdaddr);
}
static void _V0scheme_V0r7rs_V20_k32(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0scheme_V0r7rs_V20_k32, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 30 0) (close _V0scheme_V0r7rs_V20_k33) 'cdaadr)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 30-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k33, self)})),
      _V0cdaadr);
}
static void _V0scheme_V0r7rs_V20_k31(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0scheme_V0r7rs_V20_k31, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 29 0) (close _V0scheme_V0r7rs_V20_k32) 'cadddr)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 29-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k32, self)})),
      _V0cadddr);
}
static void _V0scheme_V0r7rs_V20_k30(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0scheme_V0r7rs_V20_k30, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 28 0) (close _V0scheme_V0r7rs_V20_k31) 'cadadr)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 28-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k31, self)})),
      _V0cadadr);
}
static void _V0scheme_V0r7rs_V20_k29(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0scheme_V0r7rs_V20_k29, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 27 0) (close _V0scheme_V0r7rs_V20_k30) 'caaddr)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 27-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k30, self)})),
      _V0caaddr);
}
static void _V0scheme_V0r7rs_V20_k28(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0scheme_V0r7rs_V20_k28, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 26 0) (close _V0scheme_V0r7rs_V20_k29) 'caaadr)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 26-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k29, self)})),
      _V0caaadr);
}
static void _V0scheme_V0r7rs_V20_k27(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0scheme_V0r7rs_V20_k27, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 25 0) (close _V0scheme_V0r7rs_V20_k28) 'cdddr)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 25-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k28, self)})),
      _V0cdddr);
}
static void _V0scheme_V0r7rs_V20_k26(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0scheme_V0r7rs_V20_k26, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 24 0) (close _V0scheme_V0r7rs_V20_k27) 'cdadr)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 24-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k27, self)})),
      _V0cdadr);
}
static void _V0scheme_V0r7rs_V20_k25(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0scheme_V0r7rs_V20_k25, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 23 0) (close _V0scheme_V0r7rs_V20_k26) 'caddr)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 23-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k26, self)})),
      _V0caddr);
}
static void _V0scheme_V0r7rs_V20_k24(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0scheme_V0r7rs_V20_k24, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 22 0) (close _V0scheme_V0r7rs_V20_k25) 'caadr)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 22-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k25, self)})),
      _V0caadr);
}
static void _V0scheme_V0r7rs_V20_k23(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0scheme_V0r7rs_V20_k23, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 21 0) (close _V0scheme_V0r7rs_V20_k24) 'cddr)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 21-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k24, self)})),
      _V0cddr);
}
static void _V0scheme_V0r7rs_V20_k22(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0scheme_V0r7rs_V20_k22, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 20 0) (close _V0scheme_V0r7rs_V20_k23) 'cadr)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 20-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k23, self)})),
      _V0cadr);
}
static void _V0scheme_V0r7rs_V20_k21(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0scheme_V0r7rs_V20_k21, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 19 0) (close _V0scheme_V0r7rs_V20_k22) 'set-cdr!)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 19-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k22, self)})),
      _V0set__cdr_B);
}
static void _V0scheme_V0r7rs_V20_k20(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0scheme_V0r7rs_V20_k20, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 18 0) (close _V0scheme_V0r7rs_V20_k21) 'cdr)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 18-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k21, self)})),
      _V0cdr);
}
static void _V0scheme_V0r7rs_V20_k19(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0scheme_V0r7rs_V20_k19, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 17 0) (close _V0scheme_V0r7rs_V20_k20) 'cons)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 17-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k20, self)})),
      _V0cons);
}
static void _V0scheme_V0r7rs_V20_k18(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0scheme_V0r7rs_V20_k18, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 16 0) (close _V0scheme_V0r7rs_V20_k19) 'max)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k19, self)})),
      _V0max);
}
static void _V0scheme_V0r7rs_V20_k17(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0scheme_V0r7rs_V20_k17, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 15 0) (close _V0scheme_V0r7rs_V20_k18) 'quotient)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k18, self)})),
      _V0quotient);
}
static void _V0scheme_V0r7rs_V20_k16(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0scheme_V0r7rs_V20_k16, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 14 0) (close _V0scheme_V0r7rs_V20_k17) '*)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k17, self)})),
      _V0_S);
}
static void _V0scheme_V0r7rs_V20_k15(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0scheme_V0r7rs_V20_k15, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 13 0) (close _V0scheme_V0r7rs_V20_k16) '+)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k16, self)})),
      _V0_P);
}
static void _V0scheme_V0r7rs_V20_k14(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0scheme_V0r7rs_V20_k14, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 12 0) (close _V0scheme_V0r7rs_V20_k15) 'number?)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k15, self)})),
      _V0number_Q);
}
static void _V0scheme_V0r7rs_V20_k13(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0scheme_V0r7rs_V20_k13, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 11 0) (close _V0scheme_V0r7rs_V20_k14) 'inexact)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k14, self)})),
      _V0inexact);
}
static void _V0scheme_V0r7rs_V20_k12(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0scheme_V0r7rs_V20_k12, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 10 0) (close _V0scheme_V0r7rs_V20_k13) '<=)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k13, self)})),
      _V0_L_E);
}
static void _V0scheme_V0r7rs_V20_k11(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0scheme_V0r7rs_V20_k11, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 9 0) (close _V0scheme_V0r7rs_V20_k12) '=)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k12, self)})),
      _V0_E);
}
static void _V0scheme_V0r7rs_V20_k10(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0scheme_V0r7rs_V20_k10, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 8 0) (close _V0scheme_V0r7rs_V20_k11) 'not)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k11, self)})),
      _V0not);
}
static void _V0scheme_V0r7rs_V20_k9(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0scheme_V0r7rs_V20_k9, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 7 0) (close _V0scheme_V0r7rs_V20_k10) 'eqv?)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k10, self)})),
      _V0eqv_Q);
}
static void _V0scheme_V0r7rs_V20_k8(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0scheme_V0r7rs_V20_k8, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 6 0) (close _V0scheme_V0r7rs_V20_k9) 'eq?)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k9, self)})),
      _V0eq_Q);
}
static void _V0scheme_V0r7rs_V20_k7(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0scheme_V0r7rs_V20_k7, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 5 0) (close _V0scheme_V0r7rs_V20_k8) 'integer?)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k8, self)})),
      _V0integer_Q);
}
static void _V0scheme_V0r7rs_V20_k6(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0scheme_V0r7rs_V20_k6, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 4 0) (close _V0scheme_V0r7rs_V20_k7) 'inexact?)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k7, self)})),
      _V0inexact_Q);
}
static void _V0scheme_V0r7rs_V20_k5(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0scheme_V0r7rs_V20_k5, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 3 0) (close _V0scheme_V0r7rs_V20_k6) 'string?)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k6, self)})),
      _V0string_Q);
}
static void _V0scheme_V0r7rs_V20_k4(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0scheme_V0r7rs_V20_k4, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 2 0) (close _V0scheme_V0r7rs_V20_k5) 'procedure?)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k5, self)})),
      _V0procedure_Q);
}
static void _V0scheme_V0r7rs_V20_k3(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0scheme_V0r7rs_V20_k3, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 1 0) (close _V0scheme_V0r7rs_V20_k4) 'pair?)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k4, self)})),
      _V0pair_Q);
}
static void _V0scheme_V0r7rs_V20_k2(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0scheme_V0r7rs_V20_k2, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 0 0) (close _V0scheme_V0r7rs_V20_k3) 'eof-object?)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k3, self)})),
      _V0eof__object_Q);
}
static void _V0scheme_V0r7rs_V20_k1(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0scheme_V0r7rs_V20_k1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.make-import (close _V0scheme_V0r7rs_V20_k2) (##string ##.string.505) (bruijn ##.x.504 0 0))
    VCallFuncWithGC(runtime, (VFunc)VMakeImport2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k2, self)})),
      VEncodePointer(&_V10_Dstring_D505.sym, VPOINTER_OTHER),
      _var0);
}
static void _V0scheme_V0r7rs_V20_lambda1(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0scheme_V0r7rs_V20_lambda1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close _V0scheme_V0r7rs_V20_k1) (##string ##.string.506))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k1, self)})),
      VEncodePointer(&_V10_Dstring_D506.sym, VPOINTER_OTHER));
}
VFunc _V0scheme_V0r7rs_V20 = (VFunc)_V0scheme_V0r7rs_V20_lambda1;
