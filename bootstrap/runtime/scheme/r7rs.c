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
static void _V0scheme_V0r7rs_V20_lambda2(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4, VWORD _var5, VWORD _var6, VWORD _var7, VWORD _var8, VWORD _var9, VWORD _var10, VWORD _var11, VWORD _var12, VWORD _var13, VWORD _var14, VWORD _var15, VWORD _var16, VWORD _var17, VWORD _var18, VWORD _var19, VWORD _var20, VWORD _var21, VWORD _var22, VWORD _var23, VWORD _var24, VWORD _var25, VWORD _var26, VWORD _var27, VWORD _var28, VWORD _var29, VWORD _var30, VWORD _var31, VWORD _var32, VWORD _var33, VWORD _var34, VWORD _var35, VWORD _var36, VWORD _var37, VWORD _var38, VWORD _var39, VWORD _var40, VWORD _var41, VWORD _var42, VWORD _var43, VWORD _var44, VWORD _var45, VWORD _var46, VWORD _var47, VWORD _var48, VWORD _var49, VWORD _var50, VWORD _var51, VWORD _var52, VWORD _var53, VWORD _var54, VWORD _var55, VWORD _var56, VWORD _var57, VWORD _var58, VWORD _var59, VWORD _var60, VWORD _var61, VWORD _var62, VWORD _var63, VWORD _var64, VWORD _var65, VWORD _var66, VWORD _var67, VWORD _var68, VWORD _var69, VWORD _var70, VWORD _var71, VWORD _var72, VWORD _var73, VWORD _var74, VWORD _var75, VWORD _var76, VWORD _var77, VWORD _var78, VWORD _var79, VWORD _var80, VWORD _var81, VWORD _var82, VWORD _var83, VWORD _var84, VWORD _var85, VWORD _var86, VWORD _var87, VWORD _var88, VWORD _var89, VWORD _var90, VWORD _var91, VWORD _var92, VWORD _var93, VWORD _var94, VWORD _var95, VWORD _var96, VWORD _var97, VWORD _var98, VWORD _var99, VWORD _var100, VWORD _var101, VWORD _var102, VWORD _var103, VWORD _var104, VWORD _var105, VWORD _var106, VWORD _var107, VWORD _var108, VWORD _var109, VWORD _var110, VWORD _var111, VWORD _var112, VWORD _var113, VWORD _var114, VWORD _var115, VWORD _var116, VWORD _var117, VWORD _var118, VWORD _var119, VWORD _var120, VWORD _var121, VWORD _var122, VWORD _var123, VWORD _var124) {
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_lambda2, runtime, upenv, 125, argc, _var0, _var1, _var2, _var3, _var4, _var5, _var6, _var7, _var8, _var9, _var10, _var11, _var12, _var13, _var14, _var15, _var16, _var17, _var18, _var19, _var20, _var21, _var22, _var23, _var24, _var25, _var26, _var27, _var28, _var29, _var30, _var31, _var32, _var33, _var34, _var35, _var36, _var37, _var38, _var39, _var40, _var41, _var42, _var43, _var44, _var45, _var46, _var47, _var48, _var49, _var50, _var51, _var52, _var53, _var54, _var55, _var56, _var57, _var58, _var59, _var60, _var61, _var62, _var63, _var64, _var65, _var66, _var67, _var68, _var69, _var70, _var71, _var72, _var73, _var74, _var75, _var76, _var77, _var78, _var79, _var80, _var81, _var82, _var83, _var84, _var85, _var86, _var87, _var88, _var89, _var90, _var91, _var92, _var93, _var94, _var95, _var96, _var97, _var98, _var99, _var100, _var101, _var102, _var103, _var104, _var105, _var106, _var107, _var108, _var109, _var110, _var111, _var112, _var113, _var114, _var115, _var116, _var117, _var118, _var119, _var120, _var121, _var122, _var123, _var124) {
  // ((bruijn ##.k.127 128 0) (##inline ##vcore.cons (##inline ##vcore.cons 'null? (bruijn ##.null?.125 0 124)) (##inline ##vcore.cons (##inline ##vcore.cons 'eof-object? (bruijn ##.eof-object?.1 0 0)) (##inline ##vcore.cons (##inline ##vcore.cons 'boolean? (bruijn ##.boolean?.124 0 123)) (##inline ##vcore.cons (##inline ##vcore.cons 'pair? (bruijn ##.pair?.2 0 1)) (##inline ##vcore.cons (##inline ##vcore.cons 'vector? (bruijn ##.vector?.123 0 122)) (##inline ##vcore.cons (##inline ##vcore.cons 'procedure? (bruijn ##.procedure?.3 0 2)) (##inline ##vcore.cons (##inline ##vcore.cons 'symbol? (bruijn ##.symbol?.122 0 121)) (##inline ##vcore.cons (##inline ##vcore.cons 'string? (bruijn ##.string?.4 0 3)) (##inline ##vcore.cons (##inline ##vcore.cons 'exact? (bruijn ##.exact?.121 0 120)) (##inline ##vcore.cons (##inline ##vcore.cons 'inexact? (bruijn ##.inexact?.5 0 4)) (##inline ##vcore.cons (##inline ##vcore.cons 'real? (bruijn ##.real?.120 0 119)) (##inline ##vcore.cons (##inline ##vcore.cons 'integer? (bruijn ##.integer?.6 0 5)) (##inline ##vcore.cons (##inline ##vcore.cons 'char? (bruijn ##.char?.119 0 118)) (##inline ##vcore.cons (##inline ##vcore.cons 'eq? (bruijn ##.eq?.7 0 6)) (##inline ##vcore.cons (##inline ##vcore.cons 'symbol=? (bruijn ##.symbol=?.118 0 117)) (##inline ##vcore.cons (##inline ##vcore.cons 'eqv? (bruijn ##.eqv?.8 0 7)) (##inline ##vcore.cons (##inline ##vcore.cons 'equal? (bruijn ##.equal?.117 0 116)) (##inline ##vcore.cons (##inline ##vcore.cons 'not (bruijn ##.not.9 0 8)) (##inline ##vcore.cons (##inline ##vcore.cons '< (bruijn ##.<.116 0 115)) (##inline ##vcore.cons (##inline ##vcore.cons '= (bruijn ##.=.10 0 9)) (##inline ##vcore.cons (##inline ##vcore.cons '> (bruijn ##.>.115 0 114)) (##inline ##vcore.cons (##inline ##vcore.cons '<= (bruijn ##.<=.11 0 10)) (##inline ##vcore.cons (##inline ##vcore.cons '>= (bruijn ##.>=.114 0 113)) (##inline ##vcore.cons (##inline ##vcore.cons 'inexact (bruijn ##.inexact.12 0 11)) (##inline ##vcore.cons (##inline ##vcore.cons 'exact->inexact (bruijn ##.exact->inexact.113 0 112)) (##inline ##vcore.cons (##inline ##vcore.cons 'number? (bruijn ##.number?.13 0 12)) (##inline ##vcore.cons (##inline ##vcore.cons 'complex? (bruijn ##.complex?.112 0 111)) (##inline ##vcore.cons (##inline ##vcore.cons '+ (bruijn ##.+.14 0 13)) (##inline ##vcore.cons (##inline ##vcore.cons '- (bruijn ##.-.111 0 110)) (##inline ##vcore.cons (##inline ##vcore.cons '* (bruijn ##.*.15 0 14)) (##inline ##vcore.cons (##inline ##vcore.cons '/ (bruijn ##./.110 0 109)) (##inline ##vcore.cons (##inline ##vcore.cons 'quotient (bruijn ##.quotient.16 0 15)) (##inline ##vcore.cons (##inline ##vcore.cons 'remainder (bruijn ##.remainder.109 0 108)) (##inline ##vcore.cons (##inline ##vcore.cons 'max (bruijn ##.max.17 0 16)) (##inline ##vcore.cons (##inline ##vcore.cons 'min (bruijn ##.min.108 0 107)) (##inline ##vcore.cons (##inline ##vcore.cons 'cons (bruijn ##.cons.18 0 17)) (##inline ##vcore.cons (##inline ##vcore.cons 'car (bruijn ##.car.107 0 106)) (##inline ##vcore.cons (##inline ##vcore.cons 'cdr (bruijn ##.cdr.19 0 18)) (##inline ##vcore.cons (##inline ##vcore.cons 'set-car! (bruijn ##.set-car!.106 0 105)) (##inline ##vcore.cons (##inline ##vcore.cons 'set-cdr! (bruijn ##.set-cdr!.20 0 19)) (##inline ##vcore.cons (##inline ##vcore.cons 'caar (bruijn ##.caar.105 0 104)) (##inline ##vcore.cons (##inline ##vcore.cons 'cadr (bruijn ##.cadr.21 0 20)) (##inline ##vcore.cons (##inline ##vcore.cons 'cdar (bruijn ##.cdar.104 0 103)) (##inline ##vcore.cons (##inline ##vcore.cons 'cddr (bruijn ##.cddr.22 0 21)) (##inline ##vcore.cons (##inline ##vcore.cons 'caaar (bruijn ##.caaar.103 0 102)) (##inline ##vcore.cons (##inline ##vcore.cons 'caadr (bruijn ##.caadr.23 0 22)) (##inline ##vcore.cons (##inline ##vcore.cons 'cadar (bruijn ##.cadar.102 0 101)) (##inline ##vcore.cons (##inline ##vcore.cons 'caddr (bruijn ##.caddr.24 0 23)) (##inline ##vcore.cons (##inline ##vcore.cons 'cdaar (bruijn ##.cdaar.101 0 100)) (##inline ##vcore.cons (##inline ##vcore.cons 'cdadr (bruijn ##.cdadr.25 0 24)) (##inline ##vcore.cons (##inline ##vcore.cons 'cddar (bruijn ##.cddar.100 0 99)) (##inline ##vcore.cons (##inline ##vcore.cons 'cdddr (bruijn ##.cdddr.26 0 25)) (##inline ##vcore.cons (##inline ##vcore.cons 'caaaar (bruijn ##.caaaar.99 0 98)) (##inline ##vcore.cons (##inline ##vcore.cons 'caaadr (bruijn ##.caaadr.27 0 26)) (##inline ##vcore.cons (##inline ##vcore.cons 'caadar (bruijn ##.caadar.98 0 97)) (##inline ##vcore.cons (##inline ##vcore.cons 'caaddr (bruijn ##.caaddr.28 0 27)) (##inline ##vcore.cons (##inline ##vcore.cons 'cadaar (bruijn ##.cadaar.97 0 96)) (##inline ##vcore.cons (##inline ##vcore.cons 'cadadr (bruijn ##.cadadr.29 0 28)) (##inline ##vcore.cons (##inline ##vcore.cons 'caddar (bruijn ##.caddar.96 0 95)) (##inline ##vcore.cons (##inline ##vcore.cons 'cadddr (bruijn ##.cadddr.30 0 29)) (##inline ##vcore.cons (##inline ##vcore.cons 'cdaaar (bruijn ##.cdaaar.95 0 94)) (##inline ##vcore.cons (##inline ##vcore.cons 'cdaadr (bruijn ##.cdaadr.31 0 30)) (##inline ##vcore.cons (##inline ##vcore.cons 'cdadar (bruijn ##.cdadar.94 0 93)) (##inline ##vcore.cons (##inline ##vcore.cons 'cdaddr (bruijn ##.cdaddr.32 0 31)) (##inline ##vcore.cons (##inline ##vcore.cons 'cddaar (bruijn ##.cddaar.93 0 92)) (##inline ##vcore.cons (##inline ##vcore.cons 'cddadr (bruijn ##.cddadr.33 0 32)) (##inline ##vcore.cons (##inline ##vcore.cons 'cdddar (bruijn ##.cdddar.92 0 91)) (##inline ##vcore.cons (##inline ##vcore.cons 'cddddr (bruijn ##.cddddr.34 0 33)) (##inline ##vcore.cons (##inline ##vcore.cons 'list (bruijn ##.list.91 0 90)) (##inline ##vcore.cons (##inline ##vcore.cons 'length (bruijn ##.length.35 0 34)) (##inline ##vcore.cons (##inline ##vcore.cons 'list-ref (bruijn ##.list-ref.90 0 89)) (##inline ##vcore.cons (##inline ##vcore.cons 'map (bruijn ##.map.36 0 35)) (##inline ##vcore.cons (##inline ##vcore.cons 'for-each (bruijn ##.for-each.89 0 88)) (##inline ##vcore.cons (##inline ##vcore.cons 'append (bruijn ##.append.37 0 36)) (##inline ##vcore.cons (##inline ##vcore.cons 'reverse (bruijn ##.reverse.88 0 87)) (##inline ##vcore.cons (##inline ##vcore.cons 'memq (bruijn ##.memq.38 0 37)) (##inline ##vcore.cons (##inline ##vcore.cons 'memv (bruijn ##.memv.87 0 86)) (##inline ##vcore.cons (##inline ##vcore.cons 'member (bruijn ##.member.39 0 38)) (##inline ##vcore.cons (##inline ##vcore.cons 'assq (bruijn ##.assq.86 0 85)) (##inline ##vcore.cons (##inline ##vcore.cons 'assv (bruijn ##.assv.40 0 39)) (##inline ##vcore.cons (##inline ##vcore.cons 'assoc (bruijn ##.assoc.85 0 84)) (##inline ##vcore.cons (##inline ##vcore.cons 'string->list (bruijn ##.string->list.79 0 78)) (##inline ##vcore.cons (##inline ##vcore.cons 'list->string (bruijn ##.list->string.84 0 83)) (##inline ##vcore.cons (##inline ##vcore.cons 'make-string (bruijn ##.make-string.41 0 40)) (##inline ##vcore.cons (##inline ##vcore.cons 'substring (bruijn ##.substring.83 0 82)) (##inline ##vcore.cons (##inline ##vcore.cons 'string-copy (bruijn ##.string-copy.42 0 41)) (##inline ##vcore.cons (##inline ##vcore.cons 'string-copy! (bruijn ##.string-copy!.82 0 81)) (##inline ##vcore.cons (##inline ##vcore.cons 'string-ref (bruijn ##.string-ref.43 0 42)) (##inline ##vcore.cons (##inline ##vcore.cons 'string-set! (bruijn ##.string-set!.81 0 80)) (##inline ##vcore.cons (##inline ##vcore.cons 'string-length (bruijn ##.string-length.44 0 43)) (##inline ##vcore.cons (##inline ##vcore.cons 'string->symbol (bruijn ##.string->symbol.80 0 79)) (##inline ##vcore.cons (##inline ##vcore.cons 'string->number (bruijn ##.string->number.45 0 44)) (##inline ##vcore.cons (##inline ##vcore.cons 'string->list (bruijn ##.string->list.79 0 78)) (##inline ##vcore.cons (##inline ##vcore.cons 'string-append (bruijn ##.string-append.46 0 45)) (##inline ##vcore.cons (##inline ##vcore.cons 'symbol->string (bruijn ##.symbol->string.78 0 77)) (##inline ##vcore.cons (##inline ##vcore.cons 'list->vector (bruijn ##.list->vector.47 0 46)) (##inline ##vcore.cons (##inline ##vcore.cons 'vector (bruijn ##.vector.77 0 76)) (##inline ##vcore.cons (##inline ##vcore.cons 'vector-ref (bruijn ##.vector-ref.48 0 47)) (##inline ##vcore.cons (##inline ##vcore.cons 'vector-set! (bruijn ##.vector-set!.76 0 75)) (##inline ##vcore.cons (##inline ##vcore.cons 'vector-length (bruijn ##.vector-length.49 0 48)) (##inline ##vcore.cons (##inline ##vcore.cons 'vector-for-each (bruijn ##.vector-for-each.75 0 74)) (##inline ##vcore.cons (##inline ##vcore.cons 'char->integer (bruijn ##.char->integer.50 0 49)) (##inline ##vcore.cons (##inline ##vcore.cons 'current-output-port (bruijn ##.current-output-port.74 0 73)) (##inline ##vcore.cons (##inline ##vcore.cons 'current-error-port (bruijn ##.current-error-port.51 0 50)) (##inline ##vcore.cons (##inline ##vcore.cons 'current-input-port (bruijn ##.current-input-port.73 0 72)) (##inline ##vcore.cons (##inline ##vcore.cons 'open-input-file (bruijn ##.open-input-file.52 0 51)) (##inline ##vcore.cons (##inline ##vcore.cons 'open-output-file (bruijn ##.open-output-file.72 0 71)) (##inline ##vcore.cons (##inline ##vcore.cons 'close-port (bruijn ##.close-port.53 0 52)) (##inline ##vcore.cons (##inline ##vcore.cons 'open-output-string (bruijn ##.open-output-string.71 0 70)) (##inline ##vcore.cons (##inline ##vcore.cons 'get-output-string (bruijn ##.get-output-string.54 0 53)) (##inline ##vcore.cons (##inline ##vcore.cons 'with-output-to-file (bruijn ##.with-output-to-file.70 0 69)) (##inline ##vcore.cons (##inline ##vcore.cons 'with-input-from-file (bruijn ##.with-input-from-file.55 0 54)) (##inline ##vcore.cons (##inline ##vcore.cons 'read-char (bruijn ##.read-char.69 0 68)) (##inline ##vcore.cons (##inline ##vcore.cons 'read-line (bruijn ##.read-line.56 0 55)) (##inline ##vcore.cons (##inline ##vcore.cons 'read (bruijn ##.read.68 0 67)) (##inline ##vcore.cons (##inline ##vcore.cons 'newline (bruijn ##.newline.57 0 56)) (##inline ##vcore.cons (##inline ##vcore.cons 'display (bruijn ##.display.67 0 66)) (##inline ##vcore.cons (##inline ##vcore.cons 'write (bruijn ##.write.58 0 57)) (##inline ##vcore.cons (##inline ##vcore.cons 'call/cc (bruijn ##.call/cc.66 0 65)) (##inline ##vcore.cons (##inline ##vcore.cons 'call-with-current-continuation (bruijn ##.call-with-current-continuation.59 0 58)) (##inline ##vcore.cons (##inline ##vcore.cons 'call-with-values (bruijn ##.call-with-values.65 0 64)) (##inline ##vcore.cons (##inline ##vcore.cons 'apply (bruijn ##.apply.60 0 59)) (##inline ##vcore.cons (##inline ##vcore.cons 'values (bruijn ##.values.64 0 63)) (##inline ##vcore.cons (##inline ##vcore.cons 'command-line (bruijn ##.command-line.61 0 60)) (##inline ##vcore.cons (##inline ##vcore.cons 'exit (bruijn ##.exit.63 0 62)) (##inline ##vcore.cons (##inline ##vcore.cons 'error (bruijn ##.error.62 0 61)) '())))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))
    V_CALL(VGetArg(upenv, 128-1, 0), runtime,
      VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0null_Q,
        _var124),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0eof__object_Q,
        _var0),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0boolean_Q,
        _var123),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0pair_Q,
        _var1),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0vector_Q,
        _var122),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0procedure_Q,
        _var2),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0symbol_Q,
        _var121),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0string_Q,
        _var3),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0exact_Q,
        _var120),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0inexact_Q,
        _var4),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0real_Q,
        _var119),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0integer_Q,
        _var5),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0char_Q,
        _var118),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0eq_Q,
        _var6),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0symbol_E_Q,
        _var117),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0eqv_Q,
        _var7),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0equal_Q,
        _var116),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0not,
        _var8),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0_L,
        _var115),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0_E,
        _var9),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0_G,
        _var114),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0_L_E,
        _var10),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0_G_E,
        _var113),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0inexact,
        _var11),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0exact___Ginexact,
        _var112),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0number_Q,
        _var12),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0complex_Q,
        _var111),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0_P,
        _var13),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0__,
        _var110),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0_S,
        _var14),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0_W,
        _var109),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0quotient,
        _var15),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0remainder,
        _var108),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0max,
        _var16),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0min,
        _var107),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0cons,
        _var17),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0car,
        _var106),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0cdr,
        _var18),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0set__car_B,
        _var105),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0set__cdr_B,
        _var19),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0caar,
        _var104),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0cadr,
        _var20),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0cdar,
        _var103),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0cddr,
        _var21),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0caaar,
        _var102),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0caadr,
        _var22),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0cadar,
        _var101),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0caddr,
        _var23),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0cdaar,
        _var100),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0cdadr,
        _var24),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0cddar,
        _var99),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0cdddr,
        _var25),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0caaaar,
        _var98),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0caaadr,
        _var26),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0caadar,
        _var97),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0caaddr,
        _var27),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0cadaar,
        _var96),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0cadadr,
        _var28),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0caddar,
        _var95),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0cadddr,
        _var29),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0cdaaar,
        _var94),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0cdaadr,
        _var30),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0cdadar,
        _var93),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0cdaddr,
        _var31),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0cddaar,
        _var92),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0cddadr,
        _var32),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0cdddar,
        _var91),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0cddddr,
        _var33),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0list,
        _var90),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0length,
        _var34),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0list__ref,
        _var89),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0map,
        _var35),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0for__each,
        _var88),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0append,
        _var36),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0reverse,
        _var87),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0memq,
        _var37),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0memv,
        _var86),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0member,
        _var38),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0assq,
        _var85),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0assv,
        _var39),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0assoc,
        _var84),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0string___Glist,
        _var78),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0list___Gstring,
        _var83),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0make__string,
        _var40),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0substring,
        _var82),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0string__copy,
        _var41),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0string__copy_B,
        _var81),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0string__ref,
        _var42),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0string__set_B,
        _var80),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0string__length,
        _var43),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0string___Gsymbol,
        _var79),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0string___Gnumber,
        _var44),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0string___Glist,
        _var78),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0string__append,
        _var45),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0symbol___Gstring,
        _var77),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0list___Gvector,
        _var46),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0vector,
        _var76),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0vector__ref,
        _var47),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0vector__set_B,
        _var75),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0vector__length,
        _var48),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0vector__for__each,
        _var74),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0char___Ginteger,
        _var49),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0current__output__port,
        _var73),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0current__error__port,
        _var50),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0current__input__port,
        _var72),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0open__input__file,
        _var51),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0open__output__file,
        _var71),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0close__port,
        _var52),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0open__output__string,
        _var70),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0get__output__string,
        _var53),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0with__output__to__file,
        _var69),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0with__input__from__file,
        _var54),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0read__char,
        _var68),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0read__line,
        _var55),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0read,
        _var67),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0newline,
        _var56),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0display,
        _var66),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0write,
        _var57),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0call_Wcc,
        _var65),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0call__with__current__continuation,
        _var58),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0call__with__values,
        _var64),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0apply,
        _var59),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0values,
        _var63),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0command__line,
        _var60),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0exit,
        _var62),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0error,
        _var61),
        VNULL)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
 }
}
static void _V0scheme_V0r7rs_V20_k127(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0scheme_V0r7rs_V20_k127, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k127, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0scheme_V0r7rs_V20_lambda2) (bruijn ##.x.128 124 0) (bruijn ##.x.129 123 0) (bruijn ##.x.130 122 0) (bruijn ##.x.131 121 0) (bruijn ##.x.132 120 0) (bruijn ##.x.133 119 0) (bruijn ##.x.134 118 0) (bruijn ##.x.135 117 0) (bruijn ##.x.136 116 0) (bruijn ##.x.137 115 0) (bruijn ##.x.138 114 0) (bruijn ##.x.139 113 0) (bruijn ##.x.140 112 0) (bruijn ##.x.141 111 0) (bruijn ##.x.142 110 0) (bruijn ##.x.143 109 0) (bruijn ##.x.144 108 0) (bruijn ##.x.145 107 0) (bruijn ##.x.146 106 0) (bruijn ##.x.147 105 0) (bruijn ##.x.148 104 0) (bruijn ##.x.149 103 0) (bruijn ##.x.150 102 0) (bruijn ##.x.151 101 0) (bruijn ##.x.152 100 0) (bruijn ##.x.153 99 0) (bruijn ##.x.154 98 0) (bruijn ##.x.155 97 0) (bruijn ##.x.156 96 0) (bruijn ##.x.157 95 0) (bruijn ##.x.158 94 0) (bruijn ##.x.159 93 0) (bruijn ##.x.160 92 0) (bruijn ##.x.161 91 0) (bruijn ##.x.162 90 0) (bruijn ##.x.163 89 0) (bruijn ##.x.164 88 0) (bruijn ##.x.165 87 0) (bruijn ##.x.166 86 0) (bruijn ##.x.167 85 0) (bruijn ##.x.168 84 0) (bruijn ##.x.169 83 0) (bruijn ##.x.170 82 0) (bruijn ##.x.171 81 0) (bruijn ##.x.172 80 0) (bruijn ##.x.173 79 0) (bruijn ##.x.174 78 0) (bruijn ##.x.175 77 0) (bruijn ##.x.176 76 0) (bruijn ##.x.177 75 0) (bruijn ##.x.178 74 0) (bruijn ##.x.179 73 0) (bruijn ##.x.180 72 0) (bruijn ##.x.181 71 0) (bruijn ##.x.182 70 0) (bruijn ##.x.183 69 0) (bruijn ##.x.184 68 0) (bruijn ##.x.185 67 0) (bruijn ##.x.186 66 0) (bruijn ##.x.187 65 0) (bruijn ##.x.188 64 0) (bruijn ##.x.189 63 0) (bruijn ##.x.190 62 0) (bruijn ##.x.191 61 0) (bruijn ##.x.192 60 0) (bruijn ##.x.193 59 0) (bruijn ##.x.194 58 0) (bruijn ##.x.195 57 0) (bruijn ##.x.196 56 0) (bruijn ##.x.197 55 0) (bruijn ##.x.198 54 0) (bruijn ##.x.199 53 0) (bruijn ##.x.200 52 0) (bruijn ##.x.201 51 0) (bruijn ##.x.202 50 0) (bruijn ##.x.203 49 0) (bruijn ##.x.204 48 0) (bruijn ##.x.205 47 0) (bruijn ##.x.206 46 0) (bruijn ##.x.207 45 0) (bruijn ##.x.208 44 0) (bruijn ##.x.209 43 0) (bruijn ##.x.210 42 0) (bruijn ##.x.211 41 0) (bruijn ##.x.212 40 0) (bruijn ##.x.213 39 0) (bruijn ##.x.214 38 0) (bruijn ##.x.215 37 0) (bruijn ##.x.216 36 0) (bruijn ##.x.217 35 0) (bruijn ##.x.218 34 0) (bruijn ##.x.219 33 0) (bruijn ##.x.220 32 0) (bruijn ##.x.221 31 0) (bruijn ##.x.222 30 0) (bruijn ##.x.223 29 0) (bruijn ##.x.224 28 0) (bruijn ##.x.225 27 0) (bruijn ##.x.226 26 0) (bruijn ##.x.227 25 0) (bruijn ##.x.228 24 0) (bruijn ##.x.229 23 0) (bruijn ##.x.230 22 0) (bruijn ##.x.231 21 0) (bruijn ##.x.232 20 0) (bruijn ##.x.233 19 0) (bruijn ##.x.234 18 0) (bruijn ##.x.235 17 0) (bruijn ##.x.236 16 0) (bruijn ##.x.237 15 0) (bruijn ##.x.238 14 0) (bruijn ##.x.239 13 0) (bruijn ##.x.240 12 0) (bruijn ##.x.241 11 0) (bruijn ##.x.242 10 0) (bruijn ##.x.243 9 0) (bruijn ##.x.244 8 0) (bruijn ##.x.245 7 0) (bruijn ##.x.246 6 0) (bruijn ##.x.247 5 0) (bruijn ##.x.248 4 0) (bruijn ##.x.249 3 0) (bruijn ##.x.250 2 0) (bruijn ##.x.251 1 0) (bruijn ##.x.252 0 0))
    V_CALL_FUNC(_V0scheme_V0r7rs_V20_lambda2, env, runtime,
      VGetArg(upenv, 124-1, 0),
      VGetArg(upenv, 123-1, 0),
      VGetArg(upenv, 122-1, 0),
      VGetArg(upenv, 121-1, 0),
      VGetArg(upenv, 120-1, 0),
      VGetArg(upenv, 119-1, 0),
      VGetArg(upenv, 118-1, 0),
      VGetArg(upenv, 117-1, 0),
      VGetArg(upenv, 116-1, 0),
      VGetArg(upenv, 115-1, 0),
      VGetArg(upenv, 114-1, 0),
      VGetArg(upenv, 113-1, 0),
      VGetArg(upenv, 112-1, 0),
      VGetArg(upenv, 111-1, 0),
      VGetArg(upenv, 110-1, 0),
      VGetArg(upenv, 109-1, 0),
      VGetArg(upenv, 108-1, 0),
      VGetArg(upenv, 107-1, 0),
      VGetArg(upenv, 106-1, 0),
      VGetArg(upenv, 105-1, 0),
      VGetArg(upenv, 104-1, 0),
      VGetArg(upenv, 103-1, 0),
      VGetArg(upenv, 102-1, 0),
      VGetArg(upenv, 101-1, 0),
      VGetArg(upenv, 100-1, 0),
      VGetArg(upenv, 99-1, 0),
      VGetArg(upenv, 98-1, 0),
      VGetArg(upenv, 97-1, 0),
      VGetArg(upenv, 96-1, 0),
      VGetArg(upenv, 95-1, 0),
      VGetArg(upenv, 94-1, 0),
      VGetArg(upenv, 93-1, 0),
      VGetArg(upenv, 92-1, 0),
      VGetArg(upenv, 91-1, 0),
      VGetArg(upenv, 90-1, 0),
      VGetArg(upenv, 89-1, 0),
      VGetArg(upenv, 88-1, 0),
      VGetArg(upenv, 87-1, 0),
      VGetArg(upenv, 86-1, 0),
      VGetArg(upenv, 85-1, 0),
      VGetArg(upenv, 84-1, 0),
      VGetArg(upenv, 83-1, 0),
      VGetArg(upenv, 82-1, 0),
      VGetArg(upenv, 81-1, 0),
      VGetArg(upenv, 80-1, 0),
      VGetArg(upenv, 79-1, 0),
      VGetArg(upenv, 78-1, 0),
      VGetArg(upenv, 77-1, 0),
      VGetArg(upenv, 76-1, 0),
      VGetArg(upenv, 75-1, 0),
      VGetArg(upenv, 74-1, 0),
      VGetArg(upenv, 73-1, 0),
      VGetArg(upenv, 72-1, 0),
      VGetArg(upenv, 71-1, 0),
      VGetArg(upenv, 70-1, 0),
      VGetArg(upenv, 69-1, 0),
      VGetArg(upenv, 68-1, 0),
      VGetArg(upenv, 67-1, 0),
      VGetArg(upenv, 66-1, 0),
      VGetArg(upenv, 65-1, 0),
      VGetArg(upenv, 64-1, 0),
      VGetArg(upenv, 63-1, 0),
      VGetArg(upenv, 62-1, 0),
      VGetArg(upenv, 61-1, 0),
      VGetArg(upenv, 60-1, 0),
      VGetArg(upenv, 59-1, 0),
      VGetArg(upenv, 58-1, 0),
      VGetArg(upenv, 57-1, 0),
      VGetArg(upenv, 56-1, 0),
      VGetArg(upenv, 55-1, 0),
      VGetArg(upenv, 54-1, 0),
      VGetArg(upenv, 53-1, 0),
      VGetArg(upenv, 52-1, 0),
      VGetArg(upenv, 51-1, 0),
      VGetArg(upenv, 50-1, 0),
      VGetArg(upenv, 49-1, 0),
      VGetArg(upenv, 48-1, 0),
      VGetArg(upenv, 47-1, 0),
      VGetArg(upenv, 46-1, 0),
      VGetArg(upenv, 45-1, 0),
      VGetArg(upenv, 44-1, 0),
      VGetArg(upenv, 43-1, 0),
      VGetArg(upenv, 42-1, 0),
      VGetArg(upenv, 41-1, 0),
      VGetArg(upenv, 40-1, 0),
      VGetArg(upenv, 39-1, 0),
      VGetArg(upenv, 38-1, 0),
      VGetArg(upenv, 37-1, 0),
      VGetArg(upenv, 36-1, 0),
      VGetArg(upenv, 35-1, 0),
      VGetArg(upenv, 34-1, 0),
      VGetArg(upenv, 33-1, 0),
      VGetArg(upenv, 32-1, 0),
      VGetArg(upenv, 31-1, 0),
      VGetArg(upenv, 30-1, 0),
      VGetArg(upenv, 29-1, 0),
      VGetArg(upenv, 28-1, 0),
      VGetArg(upenv, 27-1, 0),
      VGetArg(upenv, 26-1, 0),
      VGetArg(upenv, 25-1, 0),
      VGetArg(upenv, 24-1, 0),
      VGetArg(upenv, 23-1, 0),
      VGetArg(upenv, 22-1, 0),
      VGetArg(upenv, 21-1, 0),
      VGetArg(upenv, 20-1, 0),
      VGetArg(upenv, 19-1, 0),
      VGetArg(upenv, 18-1, 0),
      VGetArg(upenv, 17-1, 0),
      VGetArg(upenv, 16-1, 0),
      VGetArg(upenv, 15-1, 0),
      VGetArg(upenv, 14-1, 0),
      VGetArg(upenv, 13-1, 0),
      VGetArg(upenv, 12-1, 0),
      VGetArg(upenv, 11-1, 0),
      VGetArg(upenv, 10-1, 0),
      VGetArg(upenv, 9-1, 0),
      VGetArg(upenv, 8-1, 0),
      VGetArg(upenv, 7-1, 0),
      VGetArg(upenv, 6-1, 0),
      VGetArg(upenv, 5-1, 0),
      upenv->up->up->up->vars[0],
      upenv->up->up->vars[0],
      upenv->up->vars[0],
      upenv->vars[0],
      _var0);
 }
}
static void _V0scheme_V0r7rs_V20_k126(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0scheme_V0r7rs_V20_k126, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k126, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 124 0) (close _V0scheme_V0r7rs_V20_k127) 'null?)
    V_CALL(VGetArg(upenv, 124-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k127, env)}),
      _V0null_Q);
 }
}
static void _V0scheme_V0r7rs_V20_k125(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0scheme_V0r7rs_V20_k125, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k125, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 123 0) (close _V0scheme_V0r7rs_V20_k126) 'boolean?)
    V_CALL(VGetArg(upenv, 123-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k126, env)}),
      _V0boolean_Q);
 }
}
static void _V0scheme_V0r7rs_V20_k124(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0scheme_V0r7rs_V20_k124, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k124, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 122 0) (close _V0scheme_V0r7rs_V20_k125) 'vector?)
    V_CALL(VGetArg(upenv, 122-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k125, env)}),
      _V0vector_Q);
 }
}
static void _V0scheme_V0r7rs_V20_k123(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0scheme_V0r7rs_V20_k123, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k123, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 121 0) (close _V0scheme_V0r7rs_V20_k124) 'symbol?)
    V_CALL(VGetArg(upenv, 121-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k124, env)}),
      _V0symbol_Q);
 }
}
static void _V0scheme_V0r7rs_V20_k122(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0scheme_V0r7rs_V20_k122, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k122, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 120 0) (close _V0scheme_V0r7rs_V20_k123) 'exact?)
    V_CALL(VGetArg(upenv, 120-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k123, env)}),
      _V0exact_Q);
 }
}
static void _V0scheme_V0r7rs_V20_k121(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0scheme_V0r7rs_V20_k121, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k121, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 119 0) (close _V0scheme_V0r7rs_V20_k122) 'real?)
    V_CALL(VGetArg(upenv, 119-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k122, env)}),
      _V0real_Q);
 }
}
static void _V0scheme_V0r7rs_V20_k120(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0scheme_V0r7rs_V20_k120, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k120, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 118 0) (close _V0scheme_V0r7rs_V20_k121) 'char?)
    V_CALL(VGetArg(upenv, 118-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k121, env)}),
      _V0char_Q);
 }
}
static void _V0scheme_V0r7rs_V20_k119(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0scheme_V0r7rs_V20_k119, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k119, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 117 0) (close _V0scheme_V0r7rs_V20_k120) 'symbol=?)
    V_CALL(VGetArg(upenv, 117-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k120, env)}),
      _V0symbol_E_Q);
 }
}
static void _V0scheme_V0r7rs_V20_k118(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0scheme_V0r7rs_V20_k118, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k118, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 116 0) (close _V0scheme_V0r7rs_V20_k119) 'equal?)
    V_CALL(VGetArg(upenv, 116-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k119, env)}),
      _V0equal_Q);
 }
}
static void _V0scheme_V0r7rs_V20_k117(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0scheme_V0r7rs_V20_k117, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k117, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 115 0) (close _V0scheme_V0r7rs_V20_k118) '<)
    V_CALL(VGetArg(upenv, 115-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k118, env)}),
      _V0_L);
 }
}
static void _V0scheme_V0r7rs_V20_k116(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0scheme_V0r7rs_V20_k116, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k116, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 114 0) (close _V0scheme_V0r7rs_V20_k117) '>)
    V_CALL(VGetArg(upenv, 114-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k117, env)}),
      _V0_G);
 }
}
static void _V0scheme_V0r7rs_V20_k115(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0scheme_V0r7rs_V20_k115, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k115, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 113 0) (close _V0scheme_V0r7rs_V20_k116) '>=)
    V_CALL(VGetArg(upenv, 113-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k116, env)}),
      _V0_G_E);
 }
}
static void _V0scheme_V0r7rs_V20_k114(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0scheme_V0r7rs_V20_k114, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k114, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 112 0) (close _V0scheme_V0r7rs_V20_k115) 'exact->inexact)
    V_CALL(VGetArg(upenv, 112-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k115, env)}),
      _V0exact___Ginexact);
 }
}
static void _V0scheme_V0r7rs_V20_k113(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0scheme_V0r7rs_V20_k113, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k113, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 111 0) (close _V0scheme_V0r7rs_V20_k114) 'complex?)
    V_CALL(VGetArg(upenv, 111-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k114, env)}),
      _V0complex_Q);
 }
}
static void _V0scheme_V0r7rs_V20_k112(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0scheme_V0r7rs_V20_k112, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k112, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 110 0) (close _V0scheme_V0r7rs_V20_k113) '-)
    V_CALL(VGetArg(upenv, 110-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k113, env)}),
      _V0__);
 }
}
static void _V0scheme_V0r7rs_V20_k111(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0scheme_V0r7rs_V20_k111, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k111, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 109 0) (close _V0scheme_V0r7rs_V20_k112) '/)
    V_CALL(VGetArg(upenv, 109-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k112, env)}),
      _V0_W);
 }
}
static void _V0scheme_V0r7rs_V20_k110(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0scheme_V0r7rs_V20_k110, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k110, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 108 0) (close _V0scheme_V0r7rs_V20_k111) 'remainder)
    V_CALL(VGetArg(upenv, 108-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k111, env)}),
      _V0remainder);
 }
}
static void _V0scheme_V0r7rs_V20_k109(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0scheme_V0r7rs_V20_k109, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k109, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 107 0) (close _V0scheme_V0r7rs_V20_k110) 'min)
    V_CALL(VGetArg(upenv, 107-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k110, env)}),
      _V0min);
 }
}
static void _V0scheme_V0r7rs_V20_k108(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0scheme_V0r7rs_V20_k108, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k108, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 106 0) (close _V0scheme_V0r7rs_V20_k109) 'car)
    V_CALL(VGetArg(upenv, 106-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k109, env)}),
      _V0car);
 }
}
static void _V0scheme_V0r7rs_V20_k107(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0scheme_V0r7rs_V20_k107, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k107, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 105 0) (close _V0scheme_V0r7rs_V20_k108) 'set-car!)
    V_CALL(VGetArg(upenv, 105-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k108, env)}),
      _V0set__car_B);
 }
}
static void _V0scheme_V0r7rs_V20_k106(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0scheme_V0r7rs_V20_k106, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k106, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 104 0) (close _V0scheme_V0r7rs_V20_k107) 'caar)
    V_CALL(VGetArg(upenv, 104-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k107, env)}),
      _V0caar);
 }
}
static void _V0scheme_V0r7rs_V20_k105(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0scheme_V0r7rs_V20_k105, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k105, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 103 0) (close _V0scheme_V0r7rs_V20_k106) 'cdar)
    V_CALL(VGetArg(upenv, 103-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k106, env)}),
      _V0cdar);
 }
}
static void _V0scheme_V0r7rs_V20_k104(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0scheme_V0r7rs_V20_k104, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k104, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 102 0) (close _V0scheme_V0r7rs_V20_k105) 'caaar)
    V_CALL(VGetArg(upenv, 102-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k105, env)}),
      _V0caaar);
 }
}
static void _V0scheme_V0r7rs_V20_k103(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0scheme_V0r7rs_V20_k103, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k103, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 101 0) (close _V0scheme_V0r7rs_V20_k104) 'cadar)
    V_CALL(VGetArg(upenv, 101-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k104, env)}),
      _V0cadar);
 }
}
static void _V0scheme_V0r7rs_V20_k102(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0scheme_V0r7rs_V20_k102, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k102, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 100 0) (close _V0scheme_V0r7rs_V20_k103) 'cdaar)
    V_CALL(VGetArg(upenv, 100-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k103, env)}),
      _V0cdaar);
 }
}
static void _V0scheme_V0r7rs_V20_k101(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0scheme_V0r7rs_V20_k101, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k101, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 99 0) (close _V0scheme_V0r7rs_V20_k102) 'cddar)
    V_CALL(VGetArg(upenv, 99-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k102, env)}),
      _V0cddar);
 }
}
static void _V0scheme_V0r7rs_V20_k100(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0scheme_V0r7rs_V20_k100, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k100, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 98 0) (close _V0scheme_V0r7rs_V20_k101) 'caaaar)
    V_CALL(VGetArg(upenv, 98-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k101, env)}),
      _V0caaaar);
 }
}
static void _V0scheme_V0r7rs_V20_k99(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0scheme_V0r7rs_V20_k99, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k99, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 97 0) (close _V0scheme_V0r7rs_V20_k100) 'caadar)
    V_CALL(VGetArg(upenv, 97-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k100, env)}),
      _V0caadar);
 }
}
static void _V0scheme_V0r7rs_V20_k98(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0scheme_V0r7rs_V20_k98, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k98, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 96 0) (close _V0scheme_V0r7rs_V20_k99) 'cadaar)
    V_CALL(VGetArg(upenv, 96-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k99, env)}),
      _V0cadaar);
 }
}
static void _V0scheme_V0r7rs_V20_k97(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0scheme_V0r7rs_V20_k97, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k97, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 95 0) (close _V0scheme_V0r7rs_V20_k98) 'caddar)
    V_CALL(VGetArg(upenv, 95-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k98, env)}),
      _V0caddar);
 }
}
static void _V0scheme_V0r7rs_V20_k96(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0scheme_V0r7rs_V20_k96, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k96, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 94 0) (close _V0scheme_V0r7rs_V20_k97) 'cdaaar)
    V_CALL(VGetArg(upenv, 94-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k97, env)}),
      _V0cdaaar);
 }
}
static void _V0scheme_V0r7rs_V20_k95(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0scheme_V0r7rs_V20_k95, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k95, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 93 0) (close _V0scheme_V0r7rs_V20_k96) 'cdadar)
    V_CALL(VGetArg(upenv, 93-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k96, env)}),
      _V0cdadar);
 }
}
static void _V0scheme_V0r7rs_V20_k94(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0scheme_V0r7rs_V20_k94, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k94, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 92 0) (close _V0scheme_V0r7rs_V20_k95) 'cddaar)
    V_CALL(VGetArg(upenv, 92-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k95, env)}),
      _V0cddaar);
 }
}
static void _V0scheme_V0r7rs_V20_k93(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0scheme_V0r7rs_V20_k93, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k93, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 91 0) (close _V0scheme_V0r7rs_V20_k94) 'cdddar)
    V_CALL(VGetArg(upenv, 91-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k94, env)}),
      _V0cdddar);
 }
}
static void _V0scheme_V0r7rs_V20_k92(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0scheme_V0r7rs_V20_k92, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k92, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 90 0) (close _V0scheme_V0r7rs_V20_k93) 'list)
    V_CALL(VGetArg(upenv, 90-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k93, env)}),
      _V0list);
 }
}
static void _V0scheme_V0r7rs_V20_k91(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0scheme_V0r7rs_V20_k91, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k91, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 89 0) (close _V0scheme_V0r7rs_V20_k92) 'list-ref)
    V_CALL(VGetArg(upenv, 89-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k92, env)}),
      _V0list__ref);
 }
}
static void _V0scheme_V0r7rs_V20_k90(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0scheme_V0r7rs_V20_k90, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k90, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 88 0) (close _V0scheme_V0r7rs_V20_k91) 'for-each)
    V_CALL(VGetArg(upenv, 88-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k91, env)}),
      _V0for__each);
 }
}
static void _V0scheme_V0r7rs_V20_k89(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0scheme_V0r7rs_V20_k89, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k89, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 87 0) (close _V0scheme_V0r7rs_V20_k90) 'reverse)
    V_CALL(VGetArg(upenv, 87-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k90, env)}),
      _V0reverse);
 }
}
static void _V0scheme_V0r7rs_V20_k88(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0scheme_V0r7rs_V20_k88, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k88, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 86 0) (close _V0scheme_V0r7rs_V20_k89) 'memv)
    V_CALL(VGetArg(upenv, 86-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k89, env)}),
      _V0memv);
 }
}
static void _V0scheme_V0r7rs_V20_k87(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0scheme_V0r7rs_V20_k87, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k87, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 85 0) (close _V0scheme_V0r7rs_V20_k88) 'assq)
    V_CALL(VGetArg(upenv, 85-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k88, env)}),
      _V0assq);
 }
}
static void _V0scheme_V0r7rs_V20_k86(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0scheme_V0r7rs_V20_k86, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k86, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 84 0) (close _V0scheme_V0r7rs_V20_k87) 'assoc)
    V_CALL(VGetArg(upenv, 84-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k87, env)}),
      _V0assoc);
 }
}
static void _V0scheme_V0r7rs_V20_k85(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0scheme_V0r7rs_V20_k85, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k85, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 83 0) (close _V0scheme_V0r7rs_V20_k86) 'list->string)
    V_CALL(VGetArg(upenv, 83-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k86, env)}),
      _V0list___Gstring);
 }
}
static void _V0scheme_V0r7rs_V20_k84(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0scheme_V0r7rs_V20_k84, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k84, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 82 0) (close _V0scheme_V0r7rs_V20_k85) 'substring)
    V_CALL(VGetArg(upenv, 82-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k85, env)}),
      _V0substring);
 }
}
static void _V0scheme_V0r7rs_V20_k83(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0scheme_V0r7rs_V20_k83, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k83, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 81 0) (close _V0scheme_V0r7rs_V20_k84) 'string-copy!)
    V_CALL(VGetArg(upenv, 81-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k84, env)}),
      _V0string__copy_B);
 }
}
static void _V0scheme_V0r7rs_V20_k82(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0scheme_V0r7rs_V20_k82, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k82, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 80 0) (close _V0scheme_V0r7rs_V20_k83) 'string-set!)
    V_CALL(VGetArg(upenv, 80-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k83, env)}),
      _V0string__set_B);
 }
}
static void _V0scheme_V0r7rs_V20_k81(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0scheme_V0r7rs_V20_k81, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k81, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 79 0) (close _V0scheme_V0r7rs_V20_k82) 'string->symbol)
    V_CALL(VGetArg(upenv, 79-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k82, env)}),
      _V0string___Gsymbol);
 }
}
static void _V0scheme_V0r7rs_V20_k80(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0scheme_V0r7rs_V20_k80, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k80, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 78 0) (close _V0scheme_V0r7rs_V20_k81) 'string->list)
    V_CALL(VGetArg(upenv, 78-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k81, env)}),
      _V0string___Glist);
 }
}
static void _V0scheme_V0r7rs_V20_k79(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0scheme_V0r7rs_V20_k79, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k79, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 77 0) (close _V0scheme_V0r7rs_V20_k80) 'symbol->string)
    V_CALL(VGetArg(upenv, 77-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k80, env)}),
      _V0symbol___Gstring);
 }
}
static void _V0scheme_V0r7rs_V20_k78(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0scheme_V0r7rs_V20_k78, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k78, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 76 0) (close _V0scheme_V0r7rs_V20_k79) 'vector)
    V_CALL(VGetArg(upenv, 76-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k79, env)}),
      _V0vector);
 }
}
static void _V0scheme_V0r7rs_V20_k77(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0scheme_V0r7rs_V20_k77, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k77, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 75 0) (close _V0scheme_V0r7rs_V20_k78) 'vector-set!)
    V_CALL(VGetArg(upenv, 75-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k78, env)}),
      _V0vector__set_B);
 }
}
static void _V0scheme_V0r7rs_V20_k76(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0scheme_V0r7rs_V20_k76, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k76, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 74 0) (close _V0scheme_V0r7rs_V20_k77) 'vector-for-each)
    V_CALL(VGetArg(upenv, 74-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k77, env)}),
      _V0vector__for__each);
 }
}
static void _V0scheme_V0r7rs_V20_k75(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0scheme_V0r7rs_V20_k75, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k75, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 73 0) (close _V0scheme_V0r7rs_V20_k76) 'current-output-port)
    V_CALL(VGetArg(upenv, 73-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k76, env)}),
      _V0current__output__port);
 }
}
static void _V0scheme_V0r7rs_V20_k74(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0scheme_V0r7rs_V20_k74, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k74, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 72 0) (close _V0scheme_V0r7rs_V20_k75) 'current-input-port)
    V_CALL(VGetArg(upenv, 72-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k75, env)}),
      _V0current__input__port);
 }
}
static void _V0scheme_V0r7rs_V20_k73(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0scheme_V0r7rs_V20_k73, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k73, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 71 0) (close _V0scheme_V0r7rs_V20_k74) 'open-output-file)
    V_CALL(VGetArg(upenv, 71-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k74, env)}),
      _V0open__output__file);
 }
}
static void _V0scheme_V0r7rs_V20_k72(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0scheme_V0r7rs_V20_k72, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k72, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 70 0) (close _V0scheme_V0r7rs_V20_k73) 'open-output-string)
    V_CALL(VGetArg(upenv, 70-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k73, env)}),
      _V0open__output__string);
 }
}
static void _V0scheme_V0r7rs_V20_k71(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0scheme_V0r7rs_V20_k71, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k71, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 69 0) (close _V0scheme_V0r7rs_V20_k72) 'with-output-to-file)
    V_CALL(VGetArg(upenv, 69-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k72, env)}),
      _V0with__output__to__file);
 }
}
static void _V0scheme_V0r7rs_V20_k70(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0scheme_V0r7rs_V20_k70, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k70, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 68 0) (close _V0scheme_V0r7rs_V20_k71) 'read-char)
    V_CALL(VGetArg(upenv, 68-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k71, env)}),
      _V0read__char);
 }
}
static void _V0scheme_V0r7rs_V20_k69(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0scheme_V0r7rs_V20_k69, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k69, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 67 0) (close _V0scheme_V0r7rs_V20_k70) 'read)
    V_CALL(VGetArg(upenv, 67-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k70, env)}),
      _V0read);
 }
}
static void _V0scheme_V0r7rs_V20_k68(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0scheme_V0r7rs_V20_k68, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k68, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 66 0) (close _V0scheme_V0r7rs_V20_k69) 'display)
    V_CALL(VGetArg(upenv, 66-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k69, env)}),
      _V0display);
 }
}
static void _V0scheme_V0r7rs_V20_k67(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0scheme_V0r7rs_V20_k67, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k67, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 65 0) (close _V0scheme_V0r7rs_V20_k68) 'call/cc)
    V_CALL(VGetArg(upenv, 65-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k68, env)}),
      _V0call_Wcc);
 }
}
static void _V0scheme_V0r7rs_V20_k66(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0scheme_V0r7rs_V20_k66, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k66, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 64 0) (close _V0scheme_V0r7rs_V20_k67) 'call-with-values)
    V_CALL(VGetArg(upenv, 64-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k67, env)}),
      _V0call__with__values);
 }
}
static void _V0scheme_V0r7rs_V20_k65(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0scheme_V0r7rs_V20_k65, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k65, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 63 0) (close _V0scheme_V0r7rs_V20_k66) 'values)
    V_CALL(VGetArg(upenv, 63-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k66, env)}),
      _V0values);
 }
}
static void _V0scheme_V0r7rs_V20_k64(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0scheme_V0r7rs_V20_k64, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k64, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 62 0) (close _V0scheme_V0r7rs_V20_k65) 'exit)
    V_CALL(VGetArg(upenv, 62-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k65, env)}),
      _V0exit);
 }
}
static void _V0scheme_V0r7rs_V20_k63(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0scheme_V0r7rs_V20_k63, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k63, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 61 0) (close _V0scheme_V0r7rs_V20_k64) 'error)
    V_CALL(VGetArg(upenv, 61-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k64, env)}),
      _V0error);
 }
}
static void _V0scheme_V0r7rs_V20_k62(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0scheme_V0r7rs_V20_k62, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k62, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 60 0) (close _V0scheme_V0r7rs_V20_k63) 'command-line)
    V_CALL(VGetArg(upenv, 60-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k63, env)}),
      _V0command__line);
 }
}
static void _V0scheme_V0r7rs_V20_k61(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0scheme_V0r7rs_V20_k61, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k61, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 59 0) (close _V0scheme_V0r7rs_V20_k62) 'apply)
    V_CALL(VGetArg(upenv, 59-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k62, env)}),
      _V0apply);
 }
}
static void _V0scheme_V0r7rs_V20_k60(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0scheme_V0r7rs_V20_k60, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k60, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 58 0) (close _V0scheme_V0r7rs_V20_k61) 'call-with-current-continuation)
    V_CALL(VGetArg(upenv, 58-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k61, env)}),
      _V0call__with__current__continuation);
 }
}
static void _V0scheme_V0r7rs_V20_k59(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0scheme_V0r7rs_V20_k59, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k59, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 57 0) (close _V0scheme_V0r7rs_V20_k60) 'write)
    V_CALL(VGetArg(upenv, 57-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k60, env)}),
      _V0write);
 }
}
static void _V0scheme_V0r7rs_V20_k58(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0scheme_V0r7rs_V20_k58, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k58, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 56 0) (close _V0scheme_V0r7rs_V20_k59) 'newline)
    V_CALL(VGetArg(upenv, 56-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k59, env)}),
      _V0newline);
 }
}
static void _V0scheme_V0r7rs_V20_k57(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0scheme_V0r7rs_V20_k57, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k57, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 55 0) (close _V0scheme_V0r7rs_V20_k58) 'read-line)
    V_CALL(VGetArg(upenv, 55-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k58, env)}),
      _V0read__line);
 }
}
static void _V0scheme_V0r7rs_V20_k56(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0scheme_V0r7rs_V20_k56, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k56, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 54 0) (close _V0scheme_V0r7rs_V20_k57) 'with-input-from-file)
    V_CALL(VGetArg(upenv, 54-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k57, env)}),
      _V0with__input__from__file);
 }
}
static void _V0scheme_V0r7rs_V20_k55(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0scheme_V0r7rs_V20_k55, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k55, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 53 0) (close _V0scheme_V0r7rs_V20_k56) 'get-output-string)
    V_CALL(VGetArg(upenv, 53-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k56, env)}),
      _V0get__output__string);
 }
}
static void _V0scheme_V0r7rs_V20_k54(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0scheme_V0r7rs_V20_k54, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k54, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 52 0) (close _V0scheme_V0r7rs_V20_k55) 'close-port)
    V_CALL(VGetArg(upenv, 52-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k55, env)}),
      _V0close__port);
 }
}
static void _V0scheme_V0r7rs_V20_k53(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0scheme_V0r7rs_V20_k53, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k53, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 51 0) (close _V0scheme_V0r7rs_V20_k54) 'open-input-file)
    V_CALL(VGetArg(upenv, 51-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k54, env)}),
      _V0open__input__file);
 }
}
static void _V0scheme_V0r7rs_V20_k52(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0scheme_V0r7rs_V20_k52, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k52, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 50 0) (close _V0scheme_V0r7rs_V20_k53) 'current-error-port)
    V_CALL(VGetArg(upenv, 50-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k53, env)}),
      _V0current__error__port);
 }
}
static void _V0scheme_V0r7rs_V20_k51(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0scheme_V0r7rs_V20_k51, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k51, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 49 0) (close _V0scheme_V0r7rs_V20_k52) 'char->integer)
    V_CALL(VGetArg(upenv, 49-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k52, env)}),
      _V0char___Ginteger);
 }
}
static void _V0scheme_V0r7rs_V20_k50(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0scheme_V0r7rs_V20_k50, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k50, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 48 0) (close _V0scheme_V0r7rs_V20_k51) 'vector-length)
    V_CALL(VGetArg(upenv, 48-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k51, env)}),
      _V0vector__length);
 }
}
static void _V0scheme_V0r7rs_V20_k49(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0scheme_V0r7rs_V20_k49, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k49, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 47 0) (close _V0scheme_V0r7rs_V20_k50) 'vector-ref)
    V_CALL(VGetArg(upenv, 47-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k50, env)}),
      _V0vector__ref);
 }
}
static void _V0scheme_V0r7rs_V20_k48(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0scheme_V0r7rs_V20_k48, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k48, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 46 0) (close _V0scheme_V0r7rs_V20_k49) 'list->vector)
    V_CALL(VGetArg(upenv, 46-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k49, env)}),
      _V0list___Gvector);
 }
}
static void _V0scheme_V0r7rs_V20_k47(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0scheme_V0r7rs_V20_k47, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k47, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 45 0) (close _V0scheme_V0r7rs_V20_k48) 'string-append)
    V_CALL(VGetArg(upenv, 45-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k48, env)}),
      _V0string__append);
 }
}
static void _V0scheme_V0r7rs_V20_k46(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0scheme_V0r7rs_V20_k46, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k46, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 44 0) (close _V0scheme_V0r7rs_V20_k47) 'string->number)
    V_CALL(VGetArg(upenv, 44-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k47, env)}),
      _V0string___Gnumber);
 }
}
static void _V0scheme_V0r7rs_V20_k45(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0scheme_V0r7rs_V20_k45, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k45, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 43 0) (close _V0scheme_V0r7rs_V20_k46) 'string-length)
    V_CALL(VGetArg(upenv, 43-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k46, env)}),
      _V0string__length);
 }
}
static void _V0scheme_V0r7rs_V20_k44(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0scheme_V0r7rs_V20_k44, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k44, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 42 0) (close _V0scheme_V0r7rs_V20_k45) 'string-ref)
    V_CALL(VGetArg(upenv, 42-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k45, env)}),
      _V0string__ref);
 }
}
static void _V0scheme_V0r7rs_V20_k43(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0scheme_V0r7rs_V20_k43, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k43, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 41 0) (close _V0scheme_V0r7rs_V20_k44) 'string-copy)
    V_CALL(VGetArg(upenv, 41-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k44, env)}),
      _V0string__copy);
 }
}
static void _V0scheme_V0r7rs_V20_k42(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0scheme_V0r7rs_V20_k42, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k42, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 40 0) (close _V0scheme_V0r7rs_V20_k43) 'make-string)
    V_CALL(VGetArg(upenv, 40-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k43, env)}),
      _V0make__string);
 }
}
static void _V0scheme_V0r7rs_V20_k41(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0scheme_V0r7rs_V20_k41, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k41, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 39 0) (close _V0scheme_V0r7rs_V20_k42) 'assv)
    V_CALL(VGetArg(upenv, 39-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k42, env)}),
      _V0assv);
 }
}
static void _V0scheme_V0r7rs_V20_k40(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0scheme_V0r7rs_V20_k40, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k40, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 38 0) (close _V0scheme_V0r7rs_V20_k41) 'member)
    V_CALL(VGetArg(upenv, 38-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k41, env)}),
      _V0member);
 }
}
static void _V0scheme_V0r7rs_V20_k39(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0scheme_V0r7rs_V20_k39, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k39, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 37 0) (close _V0scheme_V0r7rs_V20_k40) 'memq)
    V_CALL(VGetArg(upenv, 37-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k40, env)}),
      _V0memq);
 }
}
static void _V0scheme_V0r7rs_V20_k38(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0scheme_V0r7rs_V20_k38, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k38, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 36 0) (close _V0scheme_V0r7rs_V20_k39) 'append)
    V_CALL(VGetArg(upenv, 36-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k39, env)}),
      _V0append);
 }
}
static void _V0scheme_V0r7rs_V20_k37(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0scheme_V0r7rs_V20_k37, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k37, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 35 0) (close _V0scheme_V0r7rs_V20_k38) 'map)
    V_CALL(VGetArg(upenv, 35-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k38, env)}),
      _V0map);
 }
}
static void _V0scheme_V0r7rs_V20_k36(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0scheme_V0r7rs_V20_k36, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k36, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 34 0) (close _V0scheme_V0r7rs_V20_k37) 'length)
    V_CALL(VGetArg(upenv, 34-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k37, env)}),
      _V0length);
 }
}
static void _V0scheme_V0r7rs_V20_k35(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0scheme_V0r7rs_V20_k35, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k35, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 33 0) (close _V0scheme_V0r7rs_V20_k36) 'cddddr)
    V_CALL(VGetArg(upenv, 33-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k36, env)}),
      _V0cddddr);
 }
}
static void _V0scheme_V0r7rs_V20_k34(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0scheme_V0r7rs_V20_k34, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k34, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 32 0) (close _V0scheme_V0r7rs_V20_k35) 'cddadr)
    V_CALL(VGetArg(upenv, 32-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k35, env)}),
      _V0cddadr);
 }
}
static void _V0scheme_V0r7rs_V20_k33(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0scheme_V0r7rs_V20_k33, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k33, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 31 0) (close _V0scheme_V0r7rs_V20_k34) 'cdaddr)
    V_CALL(VGetArg(upenv, 31-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k34, env)}),
      _V0cdaddr);
 }
}
static void _V0scheme_V0r7rs_V20_k32(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0scheme_V0r7rs_V20_k32, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k32, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 30 0) (close _V0scheme_V0r7rs_V20_k33) 'cdaadr)
    V_CALL(VGetArg(upenv, 30-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k33, env)}),
      _V0cdaadr);
 }
}
static void _V0scheme_V0r7rs_V20_k31(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0scheme_V0r7rs_V20_k31, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k31, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 29 0) (close _V0scheme_V0r7rs_V20_k32) 'cadddr)
    V_CALL(VGetArg(upenv, 29-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k32, env)}),
      _V0cadddr);
 }
}
static void _V0scheme_V0r7rs_V20_k30(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0scheme_V0r7rs_V20_k30, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k30, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 28 0) (close _V0scheme_V0r7rs_V20_k31) 'cadadr)
    V_CALL(VGetArg(upenv, 28-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k31, env)}),
      _V0cadadr);
 }
}
static void _V0scheme_V0r7rs_V20_k29(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0scheme_V0r7rs_V20_k29, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k29, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 27 0) (close _V0scheme_V0r7rs_V20_k30) 'caaddr)
    V_CALL(VGetArg(upenv, 27-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k30, env)}),
      _V0caaddr);
 }
}
static void _V0scheme_V0r7rs_V20_k28(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0scheme_V0r7rs_V20_k28, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k28, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 26 0) (close _V0scheme_V0r7rs_V20_k29) 'caaadr)
    V_CALL(VGetArg(upenv, 26-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k29, env)}),
      _V0caaadr);
 }
}
static void _V0scheme_V0r7rs_V20_k27(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0scheme_V0r7rs_V20_k27, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k27, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 25 0) (close _V0scheme_V0r7rs_V20_k28) 'cdddr)
    V_CALL(VGetArg(upenv, 25-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k28, env)}),
      _V0cdddr);
 }
}
static void _V0scheme_V0r7rs_V20_k26(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0scheme_V0r7rs_V20_k26, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k26, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 24 0) (close _V0scheme_V0r7rs_V20_k27) 'cdadr)
    V_CALL(VGetArg(upenv, 24-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k27, env)}),
      _V0cdadr);
 }
}
static void _V0scheme_V0r7rs_V20_k25(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0scheme_V0r7rs_V20_k25, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k25, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 23 0) (close _V0scheme_V0r7rs_V20_k26) 'caddr)
    V_CALL(VGetArg(upenv, 23-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k26, env)}),
      _V0caddr);
 }
}
static void _V0scheme_V0r7rs_V20_k24(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0scheme_V0r7rs_V20_k24, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k24, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 22 0) (close _V0scheme_V0r7rs_V20_k25) 'caadr)
    V_CALL(VGetArg(upenv, 22-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k25, env)}),
      _V0caadr);
 }
}
static void _V0scheme_V0r7rs_V20_k23(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0scheme_V0r7rs_V20_k23, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k23, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 21 0) (close _V0scheme_V0r7rs_V20_k24) 'cddr)
    V_CALL(VGetArg(upenv, 21-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k24, env)}),
      _V0cddr);
 }
}
static void _V0scheme_V0r7rs_V20_k22(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0scheme_V0r7rs_V20_k22, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k22, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 20 0) (close _V0scheme_V0r7rs_V20_k23) 'cadr)
    V_CALL(VGetArg(upenv, 20-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k23, env)}),
      _V0cadr);
 }
}
static void _V0scheme_V0r7rs_V20_k21(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0scheme_V0r7rs_V20_k21, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k21, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 19 0) (close _V0scheme_V0r7rs_V20_k22) 'set-cdr!)
    V_CALL(VGetArg(upenv, 19-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k22, env)}),
      _V0set__cdr_B);
 }
}
static void _V0scheme_V0r7rs_V20_k20(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0scheme_V0r7rs_V20_k20, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k20, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 18 0) (close _V0scheme_V0r7rs_V20_k21) 'cdr)
    V_CALL(VGetArg(upenv, 18-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k21, env)}),
      _V0cdr);
 }
}
static void _V0scheme_V0r7rs_V20_k19(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0scheme_V0r7rs_V20_k19, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k19, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 17 0) (close _V0scheme_V0r7rs_V20_k20) 'cons)
    V_CALL(VGetArg(upenv, 17-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k20, env)}),
      _V0cons);
 }
}
static void _V0scheme_V0r7rs_V20_k18(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0scheme_V0r7rs_V20_k18, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k18, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 16 0) (close _V0scheme_V0r7rs_V20_k19) 'max)
    V_CALL(VGetArg(upenv, 16-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k19, env)}),
      _V0max);
 }
}
static void _V0scheme_V0r7rs_V20_k17(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0scheme_V0r7rs_V20_k17, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k17, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 15 0) (close _V0scheme_V0r7rs_V20_k18) 'quotient)
    V_CALL(VGetArg(upenv, 15-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k18, env)}),
      _V0quotient);
 }
}
static void _V0scheme_V0r7rs_V20_k16(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0scheme_V0r7rs_V20_k16, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k16, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 14 0) (close _V0scheme_V0r7rs_V20_k17) '*)
    V_CALL(VGetArg(upenv, 14-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k17, env)}),
      _V0_S);
 }
}
static void _V0scheme_V0r7rs_V20_k15(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0scheme_V0r7rs_V20_k15, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k15, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 13 0) (close _V0scheme_V0r7rs_V20_k16) '+)
    V_CALL(VGetArg(upenv, 13-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k16, env)}),
      _V0_P);
 }
}
static void _V0scheme_V0r7rs_V20_k14(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0scheme_V0r7rs_V20_k14, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k14, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 12 0) (close _V0scheme_V0r7rs_V20_k15) 'number?)
    V_CALL(VGetArg(upenv, 12-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k15, env)}),
      _V0number_Q);
 }
}
static void _V0scheme_V0r7rs_V20_k13(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0scheme_V0r7rs_V20_k13, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k13, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 11 0) (close _V0scheme_V0r7rs_V20_k14) 'inexact)
    V_CALL(VGetArg(upenv, 11-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k14, env)}),
      _V0inexact);
 }
}
static void _V0scheme_V0r7rs_V20_k12(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0scheme_V0r7rs_V20_k12, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k12, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 10 0) (close _V0scheme_V0r7rs_V20_k13) '<=)
    V_CALL(VGetArg(upenv, 10-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k13, env)}),
      _V0_L_E);
 }
}
static void _V0scheme_V0r7rs_V20_k11(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0scheme_V0r7rs_V20_k11, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k11, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 9 0) (close _V0scheme_V0r7rs_V20_k12) '=)
    V_CALL(VGetArg(upenv, 9-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k12, env)}),
      _V0_E);
 }
}
static void _V0scheme_V0r7rs_V20_k10(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0scheme_V0r7rs_V20_k10, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k10, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 8 0) (close _V0scheme_V0r7rs_V20_k11) 'not)
    V_CALL(VGetArg(upenv, 8-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k11, env)}),
      _V0not);
 }
}
static void _V0scheme_V0r7rs_V20_k9(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0scheme_V0r7rs_V20_k9, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k9, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 7 0) (close _V0scheme_V0r7rs_V20_k10) 'eqv?)
    V_CALL(VGetArg(upenv, 7-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k10, env)}),
      _V0eqv_Q);
 }
}
static void _V0scheme_V0r7rs_V20_k8(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0scheme_V0r7rs_V20_k8, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k8, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 6 0) (close _V0scheme_V0r7rs_V20_k9) 'eq?)
    V_CALL(VGetArg(upenv, 6-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k9, env)}),
      _V0eq_Q);
 }
}
static void _V0scheme_V0r7rs_V20_k7(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0scheme_V0r7rs_V20_k7, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k7, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 5 0) (close _V0scheme_V0r7rs_V20_k8) 'integer?)
    V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k8, env)}),
      _V0integer_Q);
 }
}
static void _V0scheme_V0r7rs_V20_k6(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0scheme_V0r7rs_V20_k6, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k6, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 4 0) (close _V0scheme_V0r7rs_V20_k7) 'inexact?)
    V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k7, env)}),
      _V0inexact_Q);
 }
}
static void _V0scheme_V0r7rs_V20_k5(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0scheme_V0r7rs_V20_k5, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k5, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 3 0) (close _V0scheme_V0r7rs_V20_k6) 'string?)
    V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k6, env)}),
      _V0string_Q);
 }
}
static void _V0scheme_V0r7rs_V20_k4(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0scheme_V0r7rs_V20_k4, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k4, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 2 0) (close _V0scheme_V0r7rs_V20_k5) 'procedure?)
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k5, env)}),
      _V0procedure_Q);
 }
}
static void _V0scheme_V0r7rs_V20_k3(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0scheme_V0r7rs_V20_k3, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k3, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 1 0) (close _V0scheme_V0r7rs_V20_k4) 'pair?)
    V_CALL(upenv->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k4, env)}),
      _V0pair_Q);
 }
}
static void _V0scheme_V0r7rs_V20_k2(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0scheme_V0r7rs_V20_k2, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k2, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 0 0) (close _V0scheme_V0r7rs_V20_k3) 'eof-object?)
    V_CALL(_var0, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k3, env)}),
      _V0eof__object_Q);
 }
}
static void _V0scheme_V0r7rs_V20_k1(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0scheme_V0r7rs_V20_k1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_k1, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.make-import (close _V0scheme_V0r7rs_V20_k2) (##string ##.string.505) (bruijn ##.x.504 0 0))
    V_CALL_FUNC(VMakeImport2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k2, env)}),
      VEncodePointer(&_V10_Dstring_D505.sym, VPOINTER_OTHER),
      _var0);
 }
}
static void _V0scheme_V0r7rs_V20_lambda1(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0scheme_V0r7rs_V20_lambda1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0scheme_V0r7rs_V20_lambda1, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.load-library (close _V0scheme_V0r7rs_V20_k1) (##string ##.string.506))
    V_CALL_FUNC(VLoadLibrary2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0scheme_V0r7rs_V20_k1, env)}),
      VEncodePointer(&_V10_Dstring_D506.sym, VPOINTER_OTHER));
 }
}
VFunc _V0scheme_V0r7rs_V20 = (VFunc)_V0scheme_V0r7rs_V20_lambda1;
