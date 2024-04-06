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
static struct { VBlob sym; char bytes[21]; } _V10string_D1072 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "_V0vanity_V0seed_V20" };
static struct { VBlob sym; char bytes[21]; } _V10string_D1071 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "_V0vanity_V0core_V20" };
VWEAK VWORD _V0error;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0error = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "error" };
VWEAK VWORD _V0sprintf;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0sprintf = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "sprintf" };
VWEAK VWORD _V0printf;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0printf = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "printf" };
VWEAK VWORD _V0format;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0format = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "format" };
VWEAK VWORD _V0writeln;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0writeln = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "writeln" };
VWEAK VWORD _V0displayln;VWEAK struct { VBlob sym; char bytes[10]; } _VW_V0displayln = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 10 }, "displayln" };
VWEAK VWORD _V0atom_Q;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0atom_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "atom\?" };
VWEAK VWORD _V0await;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0await = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "await" };
VWEAK VWORD _V0async;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0async = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "async" };
VWEAK VWORD _V0fiber__map;VWEAK struct { VBlob sym; char bytes[10]; } _VW_V0fiber__map = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 10 }, "fiber-map" };
VWEAK VWORD _V0fiber__fork__list;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V0fiber__fork__list = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "fiber-fork-list" };
VWEAK VWORD _V0fiber__fork;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V0fiber__fork = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "fiber-fork" };
VWEAK VWORD _V0exit;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0exit = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "exit" };
VWEAK VWORD _V0make__temporary__file;VWEAK struct { VBlob sym; char bytes[20]; } _VW_V0make__temporary__file = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 20 }, "make-temporary-file" };
VWEAK VWORD _V0open__output__process;VWEAK struct { VBlob sym; char bytes[20]; } _VW_V0open__output__process = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 20 }, "open-output-process" };
VWEAK VWORD _V0open__input__process;VWEAK struct { VBlob sym; char bytes[19]; } _VW_V0open__input__process = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 19 }, "open-input-process" };
VWEAK VWORD _V0system;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0system = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "system" };
VWEAK VWORD _V0command__line;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V0command__line = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "command-line" };
VWEAK VWORD _V10vcore_Dmutator;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V10vcore_Dmutator = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "##vcore.mutator" };
VWEAK VWORD _V10vcore_Dsetter;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V10vcore_Dsetter = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "##vcore.setter" };
VWEAK VWORD _V0mutator;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0mutator = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "mutator" };
VWEAK VWORD _V0setter;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0setter = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "setter" };
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
VWEAK VWORD _V0hash__table__delete_B;VWEAK struct { VBlob sym; char bytes[19]; } _VW_V0hash__table__delete_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 19 }, "hash-table-delete!" };
VWEAK VWORD _V0hash__table__set_B;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V0hash__table__set_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "hash-table-set!" };
VWEAK VWORD _V0hash__table__ref;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V0hash__table__ref = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "hash-table-ref" };
VWEAK VWORD _V0make__hash__table;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V0make__hash__table = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "make-hash-table" };
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
VWEAK VWORD _V0make__list;VWEAK struct { VBlob sym; char bytes[10]; } _VW_V0make__list = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 10 }, "make-list" };
VWEAK VWORD _V0list__copy;VWEAK struct { VBlob sym; char bytes[10]; } _VW_V0list__copy = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 10 }, "list-copy" };
VWEAK VWORD _V0list__set_B;VWEAK struct { VBlob sym; char bytes[10]; } _VW_V0list__set_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 10 }, "list-set!" };
VWEAK VWORD _V0list__ref;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0list__ref = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "list-ref" };
VWEAK VWORD _V0list__tail;VWEAK struct { VBlob sym; char bytes[10]; } _VW_V0list__tail = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 10 }, "list-tail" };
VWEAK VWORD _V0length;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0length = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "length" };
VWEAK VWORD _V0list_Q;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0list_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "list\?" };
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
VWEAK VWORD _V0square;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0square = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "square" };
VWEAK VWORD _V0abs;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0abs = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "abs" };
VWEAK VWORD _V0min;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0min = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "min" };
VWEAK VWORD _V0max;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0max = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "max" };
VWEAK VWORD _V0remainder;VWEAK struct { VBlob sym; char bytes[10]; } _VW_V0remainder = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 10 }, "remainder" };
VWEAK VWORD _V0quotient;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0quotient = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "quotient" };
VWEAK VWORD _V0_W;VWEAK struct { VBlob sym; char bytes[2]; } _VW_V0_W = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 2 }, "/" };
VWEAK VWORD _V0_S;VWEAK struct { VBlob sym; char bytes[2]; } _VW_V0_S = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 2 }, "*" };
VWEAK VWORD _V0__;VWEAK struct { VBlob sym; char bytes[2]; } _VW_V0__ = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 2 }, "-" };
VWEAK VWORD _V0_P;VWEAK struct { VBlob sym; char bytes[2]; } _VW_V0_P = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 2 }, "+" };
VWEAK VWORD _V0zero_Q;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0zero_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "zero\?" };
VWEAK VWORD _V0negative_Q;VWEAK struct { VBlob sym; char bytes[10]; } _VW_V0negative_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 10 }, "negative\?" };
VWEAK VWORD _V0positive_Q;VWEAK struct { VBlob sym; char bytes[10]; } _VW_V0positive_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 10 }, "positive\?" };
VWEAK VWORD _V0rational_Q;VWEAK struct { VBlob sym; char bytes[10]; } _VW_V0rational_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 10 }, "rational\?" };
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
VWEAK VWORD _V0exact__integer_Q;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V0exact__integer_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "exact-integer\?" };
VWEAK VWORD _V0exact_Q;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0exact_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "exact\?" };
VWEAK VWORD _V0string_Q;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0string_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "string\?" };
VWEAK VWORD _V0symbol_Q;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0symbol_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "symbol\?" };
VWEAK VWORD _V0procedure_Q;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V0procedure_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "procedure\?" };
VWEAK VWORD _V0vector_Q;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0vector_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "vector\?" };
VWEAK VWORD _V0pair_Q;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0pair_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "pair\?" };
VWEAK VWORD _V0boolean_Q;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0boolean_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "boolean\?" };
VWEAK VWORD _V0eof__object_Q;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0eof__object_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "eof-object\?" };
VWEAK VWORD _V0null_Q;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0null_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "null\?" };
VWEAK VWORD _V40_V10vcore_Dawait;VWEAK VClosure _VW_V40_V10vcore_Dawait = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VAwait, NULL };
VWEAK VWORD _V40_V10vcore_Dasync;VWEAK VClosure _VW_V40_V10vcore_Dasync = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VAsync, NULL };
VWEAK VWORD _V40_V10vcore_Dfiber__fork__list;VWEAK VClosure _VW_V40_V10vcore_Dfiber__fork__list = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VFiberForkList, NULL };
static struct { VBlob sym; char bytes[8]; } _V10string_D1070 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 8 }, "error: " };
static struct { VBlob sym; char bytes[2]; } _V10string_D1069 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 2 }, ":" };
static struct { VBlob sym; char bytes[23]; } _V10string_D1068 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 23 }, "printf: unknown format" };
static struct { VBlob sym; char bytes[42]; } _V10string_D1067 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 42 }, "printf: not enough args for format string" };
static struct { VBlob sym; char bytes[41]; } _V10string_D1066 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 41 }, "printf: format string has trailing tilde" };
VWEAK VWORD _V40_V10vcore_Dexit;VWEAK VClosure _VW_V40_V10vcore_Dexit = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VExit2, NULL };
VWEAK VWORD _V40_V10vcore_Dmake__temporary__file;VWEAK VClosure _VW_V40_V10vcore_Dmake__temporary__file = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VMakeTemporaryFile2, NULL };
VWEAK VWORD _V40_V10vcore_Dopen__output__process;VWEAK VClosure _VW_V40_V10vcore_Dopen__output__process = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VOpenOutputProcess2, NULL };
VWEAK VWORD _V40_V10vcore_Dopen__input__process;VWEAK VClosure _VW_V40_V10vcore_Dopen__input__process = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VOpenInputProcess2, NULL };
VWEAK VWORD _V40_V10vcore_Dsystem;VWEAK VClosure _VW_V40_V10vcore_Dsystem = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VSystem2, NULL };
VWEAK VWORD _V40_V10vcore_Dcommand__line;VWEAK VClosure _VW_V40_V10vcore_Dcommand__line = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VCommandLine2, NULL };
VWEAK VWORD _V40_V10vcore_Dapply;VWEAK VClosure _VW_V40_V10vcore_Dapply = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VApply2, NULL };
VWEAK VWORD _V40_V10vcore_Dcall__with__values;VWEAK VClosure _VW_V40_V10vcore_Dcall__with__values = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VCallValues2, NULL };
VWEAK VWORD _V40_V10vcore_Dcall_Wcc;VWEAK VClosure _VW_V40_V10vcore_Dcall_Wcc = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VCallCC2, NULL };
static struct { VBlob sym; char bytes[3]; } _V10string_D1065 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 3 }, "#(" };
static struct { VBlob sym; char bytes[3]; } _V10string_D1064 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 3 }, ",@" };
VWEAK VWORD _V0unquote__splicing;VWEAK struct { VBlob sym; char bytes[17]; } _VW_V0unquote__splicing = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 17 }, "unquote-splicing" };
static struct { VBlob sym; char bytes[2]; } _V10string_D1063 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 2 }, "," };
VWEAK VWORD _V0unquote;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0unquote = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "unquote" };
static struct { VBlob sym; char bytes[2]; } _V10string_D1062 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 2 }, "`" };
VWEAK VWORD _V0quasiquote;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V0quasiquote = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "quasiquote" };
static struct { VBlob sym; char bytes[2]; } _V10string_D1061 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 2 }, "'" };
VWEAK VWORD _V0quote;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0quote = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "quote" };
static struct { VBlob sym; char bytes[2]; } _V10string_D1060 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 2 }, "(" };
static struct { VBlob sym; char bytes[2]; } _V10string_D1059 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 2 }, ")" };
static struct { VBlob sym; char bytes[4]; } _V10string_D1058 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 4 }, " . " };
VWEAK VWORD _V0ok;VWEAK struct { VBlob sym; char bytes[3]; } _VW_V0ok = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 3 }, "ok" };
static struct { VBlob sym; char bytes[2]; } _V10string_D1057 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 2 }, " " };
VWEAK VWORD _V40_V10vcore_Dget__output__string;VWEAK VClosure _VW_V40_V10vcore_Dget__output__string = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VGetOutputString2, NULL };
static struct { VBlob sym; char bytes[27]; } _V10string_D1056 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 27 }, "open-output-string: failed" };
static struct { VBlob sym; char bytes[25]; } _V10string_D1055 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 25 }, "open-output-file: failed" };
static struct { VBlob sym; char bytes[24]; } _V10string_D1054 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 24 }, "open-input-file: failed" };
VWEAK VWORD _V40_V10vcore_Dopen__output__string;VWEAK VClosure _VW_V40_V10vcore_Dopen__output__string = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VOpenOutputString2, NULL };
VWEAK VWORD _V40_V10vcore_Dclose__stream;VWEAK VClosure _VW_V40_V10vcore_Dclose__stream = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VCloseStream2, NULL };
VWEAK VWORD _V40_V10vcore_Dchar__integer;VWEAK VClosure _VW_V40_V10vcore_Dchar__integer = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VCharInt2, NULL };
VWEAK VWORD _V40_V10vcore_Dhash__table__delete_B;VWEAK VClosure _VW_V40_V10vcore_Dhash__table__delete_B = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VHashTableDelete, NULL };
VWEAK VWORD _V40_V10vcore_Dhash__table__set_B;VWEAK VClosure _VW_V40_V10vcore_Dhash__table__set_B = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VHashTableSet, NULL };
static struct { VBlob sym; char bytes[26]; } _V10string_D1053 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 26 }, "No such key in hash table" };
VWEAK VWORD _V40_V10vcore_Dhash__table__hash__function;VWEAK VClosure _VW_V40_V10vcore_Dhash__table__hash__function = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VHashTableHashFunc, NULL };
VWEAK VWORD _V40_V10vcore_Dhash__table__equivalence__function;VWEAK VClosure _VW_V40_V10vcore_Dhash__table__equivalence__function = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VHashTableEqvFunc, NULL };
VWEAK VWORD _V40_V10vcore_Dvector__length;VWEAK VClosure _VW_V40_V10vcore_Dvector__length = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VVectorLength2, NULL };
VWEAK VWORD _V40_V10vcore_Dvector__set_B;VWEAK VClosure _VW_V40_V10vcore_Dvector__set_B = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VVectorSet2, NULL };
VWEAK VWORD _V40_V10vcore_Dvector__ref;VWEAK VClosure _VW_V40_V10vcore_Dvector__ref = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VVectorRef2, NULL };
VWEAK VWORD _V40_V10vcore_Dlist___Gvector;VWEAK VClosure _VW_V40_V10vcore_Dlist___Gvector = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VListVector2, NULL };
static struct { VBlob sym; char bytes[1]; } _V10string_D1052 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 1 }, "" };
VWEAK VWORD _V40_V10vcore_Dsymbol___Gstring;VWEAK VClosure _VW_V40_V10vcore_Dsymbol___Gstring = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VSymbolString2, NULL };
VWEAK VWORD _V40_V10vcore_Dstring___Gnumber;VWEAK VClosure _VW_V40_V10vcore_Dstring___Gnumber = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VStringNumber2, NULL };
VWEAK VWORD _V40_V10vcore_Dstring___Gsymbol;VWEAK VClosure _VW_V40_V10vcore_Dstring___Gsymbol = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VStringSymbol2, NULL };
VWEAK VWORD _V40_V10vcore_Dstring__length;VWEAK VClosure _VW_V40_V10vcore_Dstring__length = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VStringLength2, NULL };
VWEAK VWORD _V40_V10vcore_Dstring__set_B;VWEAK VClosure _VW_V40_V10vcore_Dstring__set_B = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VStringSet2, NULL };
VWEAK VWORD _V40_V10vcore_Dstring__ref;VWEAK VClosure _VW_V40_V10vcore_Dstring__ref = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VStringRef2, NULL };
VWEAK VWORD _V40_V10vcore_Dstring__copy_B;VWEAK VClosure _VW_V40_V10vcore_Dstring__copy_B = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VStringCopy2, NULL };
VWEAK VWORD _V40_V10vcore_Dsubstring;VWEAK VClosure _VW_V40_V10vcore_Dsubstring = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VSubstring2, NULL };
VWEAK VWORD _V40_V10vcore_Dmake__string;VWEAK VClosure _VW_V40_V10vcore_Dmake__string = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VMakeString2, NULL };
VWEAK VWORD _V40_V10vcore_Dset__cdr_B;VWEAK VClosure _VW_V40_V10vcore_Dset__cdr_B = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VSetCdr2, NULL };
VWEAK VWORD _V40_V10vcore_Dset__car_B;VWEAK VClosure _VW_V40_V10vcore_Dset__car_B = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VSetCar2, NULL };
VWEAK VWORD _V40_V10vcore_Dcdr;VWEAK VClosure _VW_V40_V10vcore_Dcdr = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VCdr2, NULL };
VWEAK VWORD _V40_V10vcore_Dcar;VWEAK VClosure _VW_V40_V10vcore_Dcar = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VCar2, NULL };
VWEAK VWORD _V40_V10vcore_Dcons;VWEAK VClosure _VW_V40_V10vcore_Dcons = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VCons2, NULL };
VWEAK VWORD _V40_V10vcore_Dremainder;VWEAK VClosure _VW_V40_V10vcore_Dremainder = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VRem2, NULL };
VWEAK VWORD _V40_V10vcore_Dquotient;VWEAK VClosure _VW_V40_V10vcore_Dquotient = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VQuot2, NULL };
VWEAK VWORD _V40_V10vcore_D_W;VWEAK VClosure _VW_V40_V10vcore_D_W = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VDiv2, NULL };
VWEAK VWORD _V40_V10vcore_D_S;VWEAK VClosure _VW_V40_V10vcore_D_S = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VMul2, NULL };
VWEAK VWORD _V40_V10vcore_D__;VWEAK VClosure _VW_V40_V10vcore_D__ = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VSub2, NULL };
VWEAK VWORD _V40_V10vcore_D_P;VWEAK VClosure _VW_V40_V10vcore_D_P = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VAdd2, NULL };
VWEAK VWORD _V40_V10vcore_Dnot;VWEAK VClosure _VW_V40_V10vcore_Dnot = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VNot2, NULL };
VWEAK VWORD _V40_V10vcore_Deqv_Q;VWEAK VClosure _VW_V40_V10vcore_Deqv_Q = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VEqv, NULL };
VWEAK VWORD _V40_V10vcore_Dsymbol_E_Q;VWEAK VClosure _VW_V40_V10vcore_Dsymbol_E_Q = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VSymbolEqv2, NULL };
VWEAK VWORD _V40_V10vcore_Deq_Q;VWEAK VClosure _VW_V40_V10vcore_Deq_Q = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VEq2, NULL };
VWEAK VWORD _V40_V10vcore_Ddouble_Q;VWEAK VClosure _VW_V40_V10vcore_Ddouble_Q = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VDoubleP2, NULL };
VWEAK VWORD _V40_V10vcore_Dint_Q;VWEAK VClosure _VW_V40_V10vcore_Dint_Q = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VIntP2, NULL };
VWEAK VWORD _V40_V10vcore_Dchar_Q;VWEAK VClosure _VW_V40_V10vcore_Dchar_Q = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VCharP2, NULL };
VWEAK VWORD _V40_V10vcore_Dstring_Q;VWEAK VClosure _VW_V40_V10vcore_Dstring_Q = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VStringP2, NULL };
VWEAK VWORD _V40_V10vcore_Dsymbol_Q;VWEAK VClosure _VW_V40_V10vcore_Dsymbol_Q = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VSymbolP2, NULL };
VWEAK VWORD _V40_V10vcore_Dprocedure_Q;VWEAK VClosure _VW_V40_V10vcore_Dprocedure_Q = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VProcedureP2, NULL };
VWEAK VWORD _V40_V10vcore_Dvector_Q;VWEAK VClosure _VW_V40_V10vcore_Dvector_Q = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VVectorP2, NULL };
VWEAK VWORD _V40_V10vcore_Dpair_Q;VWEAK VClosure _VW_V40_V10vcore_Dpair_Q = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VPairP2, NULL };
VWEAK VWORD _V40_V10vcore_Deof__object_Q;VWEAK VClosure _VW_V40_V10vcore_Deof__object_Q = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VEofP2, NULL };
VWEAK VWORD _V40_V10vcore_Dnull_Q;VWEAK VClosure _VW_V40_V10vcore_Dnull_Q = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VNullP2, NULL };
static __attribute__((constructor)) void VDllMain1() {
  _V0error = VEncodePointer(VLookupConstant("_V0error", &_VW_V0error), VPOINTER_OTHER);
  _V0sprintf = VEncodePointer(VLookupConstant("_V0sprintf", &_VW_V0sprintf), VPOINTER_OTHER);
  _V0printf = VEncodePointer(VLookupConstant("_V0printf", &_VW_V0printf), VPOINTER_OTHER);
  _V0format = VEncodePointer(VLookupConstant("_V0format", &_VW_V0format), VPOINTER_OTHER);
  _V0writeln = VEncodePointer(VLookupConstant("_V0writeln", &_VW_V0writeln), VPOINTER_OTHER);
  _V0displayln = VEncodePointer(VLookupConstant("_V0displayln", &_VW_V0displayln), VPOINTER_OTHER);
  _V0atom_Q = VEncodePointer(VLookupConstant("_V0atom_Q", &_VW_V0atom_Q), VPOINTER_OTHER);
  _V0await = VEncodePointer(VLookupConstant("_V0await", &_VW_V0await), VPOINTER_OTHER);
  _V0async = VEncodePointer(VLookupConstant("_V0async", &_VW_V0async), VPOINTER_OTHER);
  _V0fiber__map = VEncodePointer(VLookupConstant("_V0fiber__map", &_VW_V0fiber__map), VPOINTER_OTHER);
  _V0fiber__fork__list = VEncodePointer(VLookupConstant("_V0fiber__fork__list", &_VW_V0fiber__fork__list), VPOINTER_OTHER);
  _V0fiber__fork = VEncodePointer(VLookupConstant("_V0fiber__fork", &_VW_V0fiber__fork), VPOINTER_OTHER);
  _V0exit = VEncodePointer(VLookupConstant("_V0exit", &_VW_V0exit), VPOINTER_OTHER);
  _V0make__temporary__file = VEncodePointer(VLookupConstant("_V0make__temporary__file", &_VW_V0make__temporary__file), VPOINTER_OTHER);
  _V0open__output__process = VEncodePointer(VLookupConstant("_V0open__output__process", &_VW_V0open__output__process), VPOINTER_OTHER);
  _V0open__input__process = VEncodePointer(VLookupConstant("_V0open__input__process", &_VW_V0open__input__process), VPOINTER_OTHER);
  _V0system = VEncodePointer(VLookupConstant("_V0system", &_VW_V0system), VPOINTER_OTHER);
  _V0command__line = VEncodePointer(VLookupConstant("_V0command__line", &_VW_V0command__line), VPOINTER_OTHER);
  _V10vcore_Dmutator = VEncodePointer(VLookupConstant("_V10vcore_Dmutator", &_VW_V10vcore_Dmutator), VPOINTER_OTHER);
  _V10vcore_Dsetter = VEncodePointer(VLookupConstant("_V10vcore_Dsetter", &_VW_V10vcore_Dsetter), VPOINTER_OTHER);
  _V0mutator = VEncodePointer(VLookupConstant("_V0mutator", &_VW_V0mutator), VPOINTER_OTHER);
  _V0setter = VEncodePointer(VLookupConstant("_V0setter", &_VW_V0setter), VPOINTER_OTHER);
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
  _V0hash__table__delete_B = VEncodePointer(VLookupConstant("_V0hash__table__delete_B", &_VW_V0hash__table__delete_B), VPOINTER_OTHER);
  _V0hash__table__set_B = VEncodePointer(VLookupConstant("_V0hash__table__set_B", &_VW_V0hash__table__set_B), VPOINTER_OTHER);
  _V0hash__table__ref = VEncodePointer(VLookupConstant("_V0hash__table__ref", &_VW_V0hash__table__ref), VPOINTER_OTHER);
  _V0make__hash__table = VEncodePointer(VLookupConstant("_V0make__hash__table", &_VW_V0make__hash__table), VPOINTER_OTHER);
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
  _V0make__list = VEncodePointer(VLookupConstant("_V0make__list", &_VW_V0make__list), VPOINTER_OTHER);
  _V0list__copy = VEncodePointer(VLookupConstant("_V0list__copy", &_VW_V0list__copy), VPOINTER_OTHER);
  _V0list__set_B = VEncodePointer(VLookupConstant("_V0list__set_B", &_VW_V0list__set_B), VPOINTER_OTHER);
  _V0list__ref = VEncodePointer(VLookupConstant("_V0list__ref", &_VW_V0list__ref), VPOINTER_OTHER);
  _V0list__tail = VEncodePointer(VLookupConstant("_V0list__tail", &_VW_V0list__tail), VPOINTER_OTHER);
  _V0length = VEncodePointer(VLookupConstant("_V0length", &_VW_V0length), VPOINTER_OTHER);
  _V0list_Q = VEncodePointer(VLookupConstant("_V0list_Q", &_VW_V0list_Q), VPOINTER_OTHER);
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
  _V0square = VEncodePointer(VLookupConstant("_V0square", &_VW_V0square), VPOINTER_OTHER);
  _V0abs = VEncodePointer(VLookupConstant("_V0abs", &_VW_V0abs), VPOINTER_OTHER);
  _V0min = VEncodePointer(VLookupConstant("_V0min", &_VW_V0min), VPOINTER_OTHER);
  _V0max = VEncodePointer(VLookupConstant("_V0max", &_VW_V0max), VPOINTER_OTHER);
  _V0remainder = VEncodePointer(VLookupConstant("_V0remainder", &_VW_V0remainder), VPOINTER_OTHER);
  _V0quotient = VEncodePointer(VLookupConstant("_V0quotient", &_VW_V0quotient), VPOINTER_OTHER);
  _V0_W = VEncodePointer(VLookupConstant("_V0_W", &_VW_V0_W), VPOINTER_OTHER);
  _V0_S = VEncodePointer(VLookupConstant("_V0_S", &_VW_V0_S), VPOINTER_OTHER);
  _V0__ = VEncodePointer(VLookupConstant("_V0__", &_VW_V0__), VPOINTER_OTHER);
  _V0_P = VEncodePointer(VLookupConstant("_V0_P", &_VW_V0_P), VPOINTER_OTHER);
  _V0zero_Q = VEncodePointer(VLookupConstant("_V0zero_Q", &_VW_V0zero_Q), VPOINTER_OTHER);
  _V0negative_Q = VEncodePointer(VLookupConstant("_V0negative_Q", &_VW_V0negative_Q), VPOINTER_OTHER);
  _V0positive_Q = VEncodePointer(VLookupConstant("_V0positive_Q", &_VW_V0positive_Q), VPOINTER_OTHER);
  _V0rational_Q = VEncodePointer(VLookupConstant("_V0rational_Q", &_VW_V0rational_Q), VPOINTER_OTHER);
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
  _V0exact__integer_Q = VEncodePointer(VLookupConstant("_V0exact__integer_Q", &_VW_V0exact__integer_Q), VPOINTER_OTHER);
  _V0exact_Q = VEncodePointer(VLookupConstant("_V0exact_Q", &_VW_V0exact_Q), VPOINTER_OTHER);
  _V0string_Q = VEncodePointer(VLookupConstant("_V0string_Q", &_VW_V0string_Q), VPOINTER_OTHER);
  _V0symbol_Q = VEncodePointer(VLookupConstant("_V0symbol_Q", &_VW_V0symbol_Q), VPOINTER_OTHER);
  _V0procedure_Q = VEncodePointer(VLookupConstant("_V0procedure_Q", &_VW_V0procedure_Q), VPOINTER_OTHER);
  _V0vector_Q = VEncodePointer(VLookupConstant("_V0vector_Q", &_VW_V0vector_Q), VPOINTER_OTHER);
  _V0pair_Q = VEncodePointer(VLookupConstant("_V0pair_Q", &_VW_V0pair_Q), VPOINTER_OTHER);
  _V0boolean_Q = VEncodePointer(VLookupConstant("_V0boolean_Q", &_VW_V0boolean_Q), VPOINTER_OTHER);
  _V0eof__object_Q = VEncodePointer(VLookupConstant("_V0eof__object_Q", &_VW_V0eof__object_Q), VPOINTER_OTHER);
  _V0null_Q = VEncodePointer(VLookupConstant("_V0null_Q", &_VW_V0null_Q), VPOINTER_OTHER);
  _V40_V10vcore_Dawait = VEncodePointer(VLookupConstant("_V40_V10vcore_Dawait", &_VW_V40_V10vcore_Dawait), VPOINTER_CLOSURE);
  _V40_V10vcore_Dasync = VEncodePointer(VLookupConstant("_V40_V10vcore_Dasync", &_VW_V40_V10vcore_Dasync), VPOINTER_CLOSURE);
  _V40_V10vcore_Dfiber__fork__list = VEncodePointer(VLookupConstant("_V40_V10vcore_Dfiber__fork__list", &_VW_V40_V10vcore_Dfiber__fork__list), VPOINTER_CLOSURE);
  _V40_V10vcore_Dexit = VEncodePointer(VLookupConstant("_V40_V10vcore_Dexit", &_VW_V40_V10vcore_Dexit), VPOINTER_CLOSURE);
  _V40_V10vcore_Dmake__temporary__file = VEncodePointer(VLookupConstant("_V40_V10vcore_Dmake__temporary__file", &_VW_V40_V10vcore_Dmake__temporary__file), VPOINTER_CLOSURE);
  _V40_V10vcore_Dopen__output__process = VEncodePointer(VLookupConstant("_V40_V10vcore_Dopen__output__process", &_VW_V40_V10vcore_Dopen__output__process), VPOINTER_CLOSURE);
  _V40_V10vcore_Dopen__input__process = VEncodePointer(VLookupConstant("_V40_V10vcore_Dopen__input__process", &_VW_V40_V10vcore_Dopen__input__process), VPOINTER_CLOSURE);
  _V40_V10vcore_Dsystem = VEncodePointer(VLookupConstant("_V40_V10vcore_Dsystem", &_VW_V40_V10vcore_Dsystem), VPOINTER_CLOSURE);
  _V40_V10vcore_Dcommand__line = VEncodePointer(VLookupConstant("_V40_V10vcore_Dcommand__line", &_VW_V40_V10vcore_Dcommand__line), VPOINTER_CLOSURE);
  _V40_V10vcore_Dapply = VEncodePointer(VLookupConstant("_V40_V10vcore_Dapply", &_VW_V40_V10vcore_Dapply), VPOINTER_CLOSURE);
  _V40_V10vcore_Dcall__with__values = VEncodePointer(VLookupConstant("_V40_V10vcore_Dcall__with__values", &_VW_V40_V10vcore_Dcall__with__values), VPOINTER_CLOSURE);
  _V40_V10vcore_Dcall_Wcc = VEncodePointer(VLookupConstant("_V40_V10vcore_Dcall_Wcc", &_VW_V40_V10vcore_Dcall_Wcc), VPOINTER_CLOSURE);
  _V0unquote__splicing = VEncodePointer(VLookupConstant("_V0unquote__splicing", &_VW_V0unquote__splicing), VPOINTER_OTHER);
  _V0unquote = VEncodePointer(VLookupConstant("_V0unquote", &_VW_V0unquote), VPOINTER_OTHER);
  _V0quasiquote = VEncodePointer(VLookupConstant("_V0quasiquote", &_VW_V0quasiquote), VPOINTER_OTHER);
  _V0quote = VEncodePointer(VLookupConstant("_V0quote", &_VW_V0quote), VPOINTER_OTHER);
  _V0ok = VEncodePointer(VLookupConstant("_V0ok", &_VW_V0ok), VPOINTER_OTHER);
  _V40_V10vcore_Dget__output__string = VEncodePointer(VLookupConstant("_V40_V10vcore_Dget__output__string", &_VW_V40_V10vcore_Dget__output__string), VPOINTER_CLOSURE);
  _V40_V10vcore_Dopen__output__string = VEncodePointer(VLookupConstant("_V40_V10vcore_Dopen__output__string", &_VW_V40_V10vcore_Dopen__output__string), VPOINTER_CLOSURE);
  _V40_V10vcore_Dclose__stream = VEncodePointer(VLookupConstant("_V40_V10vcore_Dclose__stream", &_VW_V40_V10vcore_Dclose__stream), VPOINTER_CLOSURE);
  _V40_V10vcore_Dchar__integer = VEncodePointer(VLookupConstant("_V40_V10vcore_Dchar__integer", &_VW_V40_V10vcore_Dchar__integer), VPOINTER_CLOSURE);
  _V40_V10vcore_Dhash__table__delete_B = VEncodePointer(VLookupConstant("_V40_V10vcore_Dhash__table__delete_B", &_VW_V40_V10vcore_Dhash__table__delete_B), VPOINTER_CLOSURE);
  _V40_V10vcore_Dhash__table__set_B = VEncodePointer(VLookupConstant("_V40_V10vcore_Dhash__table__set_B", &_VW_V40_V10vcore_Dhash__table__set_B), VPOINTER_CLOSURE);
  _V40_V10vcore_Dhash__table__hash__function = VEncodePointer(VLookupConstant("_V40_V10vcore_Dhash__table__hash__function", &_VW_V40_V10vcore_Dhash__table__hash__function), VPOINTER_CLOSURE);
  _V40_V10vcore_Dhash__table__equivalence__function = VEncodePointer(VLookupConstant("_V40_V10vcore_Dhash__table__equivalence__function", &_VW_V40_V10vcore_Dhash__table__equivalence__function), VPOINTER_CLOSURE);
  _V40_V10vcore_Dvector__length = VEncodePointer(VLookupConstant("_V40_V10vcore_Dvector__length", &_VW_V40_V10vcore_Dvector__length), VPOINTER_CLOSURE);
  _V40_V10vcore_Dvector__set_B = VEncodePointer(VLookupConstant("_V40_V10vcore_Dvector__set_B", &_VW_V40_V10vcore_Dvector__set_B), VPOINTER_CLOSURE);
  _V40_V10vcore_Dvector__ref = VEncodePointer(VLookupConstant("_V40_V10vcore_Dvector__ref", &_VW_V40_V10vcore_Dvector__ref), VPOINTER_CLOSURE);
  _V40_V10vcore_Dlist___Gvector = VEncodePointer(VLookupConstant("_V40_V10vcore_Dlist___Gvector", &_VW_V40_V10vcore_Dlist___Gvector), VPOINTER_CLOSURE);
  _V40_V10vcore_Dsymbol___Gstring = VEncodePointer(VLookupConstant("_V40_V10vcore_Dsymbol___Gstring", &_VW_V40_V10vcore_Dsymbol___Gstring), VPOINTER_CLOSURE);
  _V40_V10vcore_Dstring___Gnumber = VEncodePointer(VLookupConstant("_V40_V10vcore_Dstring___Gnumber", &_VW_V40_V10vcore_Dstring___Gnumber), VPOINTER_CLOSURE);
  _V40_V10vcore_Dstring___Gsymbol = VEncodePointer(VLookupConstant("_V40_V10vcore_Dstring___Gsymbol", &_VW_V40_V10vcore_Dstring___Gsymbol), VPOINTER_CLOSURE);
  _V40_V10vcore_Dstring__length = VEncodePointer(VLookupConstant("_V40_V10vcore_Dstring__length", &_VW_V40_V10vcore_Dstring__length), VPOINTER_CLOSURE);
  _V40_V10vcore_Dstring__set_B = VEncodePointer(VLookupConstant("_V40_V10vcore_Dstring__set_B", &_VW_V40_V10vcore_Dstring__set_B), VPOINTER_CLOSURE);
  _V40_V10vcore_Dstring__ref = VEncodePointer(VLookupConstant("_V40_V10vcore_Dstring__ref", &_VW_V40_V10vcore_Dstring__ref), VPOINTER_CLOSURE);
  _V40_V10vcore_Dstring__copy_B = VEncodePointer(VLookupConstant("_V40_V10vcore_Dstring__copy_B", &_VW_V40_V10vcore_Dstring__copy_B), VPOINTER_CLOSURE);
  _V40_V10vcore_Dsubstring = VEncodePointer(VLookupConstant("_V40_V10vcore_Dsubstring", &_VW_V40_V10vcore_Dsubstring), VPOINTER_CLOSURE);
  _V40_V10vcore_Dmake__string = VEncodePointer(VLookupConstant("_V40_V10vcore_Dmake__string", &_VW_V40_V10vcore_Dmake__string), VPOINTER_CLOSURE);
  _V40_V10vcore_Dset__cdr_B = VEncodePointer(VLookupConstant("_V40_V10vcore_Dset__cdr_B", &_VW_V40_V10vcore_Dset__cdr_B), VPOINTER_CLOSURE);
  _V40_V10vcore_Dset__car_B = VEncodePointer(VLookupConstant("_V40_V10vcore_Dset__car_B", &_VW_V40_V10vcore_Dset__car_B), VPOINTER_CLOSURE);
  _V40_V10vcore_Dcdr = VEncodePointer(VLookupConstant("_V40_V10vcore_Dcdr", &_VW_V40_V10vcore_Dcdr), VPOINTER_CLOSURE);
  _V40_V10vcore_Dcar = VEncodePointer(VLookupConstant("_V40_V10vcore_Dcar", &_VW_V40_V10vcore_Dcar), VPOINTER_CLOSURE);
  _V40_V10vcore_Dcons = VEncodePointer(VLookupConstant("_V40_V10vcore_Dcons", &_VW_V40_V10vcore_Dcons), VPOINTER_CLOSURE);
  _V40_V10vcore_Dremainder = VEncodePointer(VLookupConstant("_V40_V10vcore_Dremainder", &_VW_V40_V10vcore_Dremainder), VPOINTER_CLOSURE);
  _V40_V10vcore_Dquotient = VEncodePointer(VLookupConstant("_V40_V10vcore_Dquotient", &_VW_V40_V10vcore_Dquotient), VPOINTER_CLOSURE);
  _V40_V10vcore_D_W = VEncodePointer(VLookupConstant("_V40_V10vcore_D_W", &_VW_V40_V10vcore_D_W), VPOINTER_CLOSURE);
  _V40_V10vcore_D_S = VEncodePointer(VLookupConstant("_V40_V10vcore_D_S", &_VW_V40_V10vcore_D_S), VPOINTER_CLOSURE);
  _V40_V10vcore_D__ = VEncodePointer(VLookupConstant("_V40_V10vcore_D__", &_VW_V40_V10vcore_D__), VPOINTER_CLOSURE);
  _V40_V10vcore_D_P = VEncodePointer(VLookupConstant("_V40_V10vcore_D_P", &_VW_V40_V10vcore_D_P), VPOINTER_CLOSURE);
  _V40_V10vcore_Dnot = VEncodePointer(VLookupConstant("_V40_V10vcore_Dnot", &_VW_V40_V10vcore_Dnot), VPOINTER_CLOSURE);
  _V40_V10vcore_Deqv_Q = VEncodePointer(VLookupConstant("_V40_V10vcore_Deqv_Q", &_VW_V40_V10vcore_Deqv_Q), VPOINTER_CLOSURE);
  _V40_V10vcore_Dsymbol_E_Q = VEncodePointer(VLookupConstant("_V40_V10vcore_Dsymbol_E_Q", &_VW_V40_V10vcore_Dsymbol_E_Q), VPOINTER_CLOSURE);
  _V40_V10vcore_Deq_Q = VEncodePointer(VLookupConstant("_V40_V10vcore_Deq_Q", &_VW_V40_V10vcore_Deq_Q), VPOINTER_CLOSURE);
  _V40_V10vcore_Ddouble_Q = VEncodePointer(VLookupConstant("_V40_V10vcore_Ddouble_Q", &_VW_V40_V10vcore_Ddouble_Q), VPOINTER_CLOSURE);
  _V40_V10vcore_Dint_Q = VEncodePointer(VLookupConstant("_V40_V10vcore_Dint_Q", &_VW_V40_V10vcore_Dint_Q), VPOINTER_CLOSURE);
  _V40_V10vcore_Dchar_Q = VEncodePointer(VLookupConstant("_V40_V10vcore_Dchar_Q", &_VW_V40_V10vcore_Dchar_Q), VPOINTER_CLOSURE);
  _V40_V10vcore_Dstring_Q = VEncodePointer(VLookupConstant("_V40_V10vcore_Dstring_Q", &_VW_V40_V10vcore_Dstring_Q), VPOINTER_CLOSURE);
  _V40_V10vcore_Dsymbol_Q = VEncodePointer(VLookupConstant("_V40_V10vcore_Dsymbol_Q", &_VW_V40_V10vcore_Dsymbol_Q), VPOINTER_CLOSURE);
  _V40_V10vcore_Dprocedure_Q = VEncodePointer(VLookupConstant("_V40_V10vcore_Dprocedure_Q", &_VW_V40_V10vcore_Dprocedure_Q), VPOINTER_CLOSURE);
  _V40_V10vcore_Dvector_Q = VEncodePointer(VLookupConstant("_V40_V10vcore_Dvector_Q", &_VW_V40_V10vcore_Dvector_Q), VPOINTER_CLOSURE);
  _V40_V10vcore_Dpair_Q = VEncodePointer(VLookupConstant("_V40_V10vcore_Dpair_Q", &_VW_V40_V10vcore_Dpair_Q), VPOINTER_CLOSURE);
  _V40_V10vcore_Deof__object_Q = VEncodePointer(VLookupConstant("_V40_V10vcore_Deof__object_Q", &_VW_V40_V10vcore_Deof__object_Q), VPOINTER_CLOSURE);
  _V40_V10vcore_Dnull_Q = VEncodePointer(VLookupConstant("_V40_V10vcore_Dnull_Q", &_VW_V40_V10vcore_Dnull_Q), VPOINTER_CLOSURE);
}
static void _V0vanity_V0core_V20_k5(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k5" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k5, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k5, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.7 0 0) ((bruijn ##k.6 1 0) (bruijn ##p.7 0 0)) ((bruijn ##k.6 1 0) (##inline ##vcore.eq? (bruijn x 1 1) #f)))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->vars[0], runtime,
      _var0);
} else {
    V_CALL(upenv->vars[0], runtime,
      VInlineEq(
        upenv->vars[1],
        VEncodeBool(false)));
}
 }
}
static void _V0vanity_V0core_V20_lambda3(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_lambda3" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0vanity_V0core_V20_lambda3, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_lambda3, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0vanity_V0core_V20_k5) (##inline ##vcore.eq? (bruijn x 0 1) #t))
    V_CALL_FUNC(_V0vanity_V0core_V20_k5, env, runtime,
      VInlineEq(
        _var1,
        VEncodeBool(true)));
 }
}
static void _V0vanity_V0core_V20_k6(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k6" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k6, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k6, runtime, upenv, 1, argc, _var0) {
  // (if (##intrinsic ##vcore.symbol=?) (if (bruijn x 1 1) ((bruijn ##k.11 0 0) (bruijn y 1 2)) ((bruijn ##k.11 0 0) #f)) ((bruijn ##k.11 0 0) #f))
if(VDecodeBool(
_V40_V10vcore_Dsymbol_E_Q)) {
if(VDecodeBool(
upenv->vars[1])) {
    V_CALL(_var0, runtime,
      upenv->vars[2]);
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0core_V20_k7(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k7" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k7, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k7, runtime, upenv, 1, argc, _var0) {
  // (##vcore.symbol=? (bruijn ##k.9 1 0) (bruijn y 1 2) (bruijn z 1 3))
    V_CALL_FUNC(VSymbolEqv2, NULL, runtime,
      upenv->vars[0],
      upenv->vars[2],
      upenv->vars[3]);
 }
}
static void _V0vanity_V0core_V20_k8(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k8" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k8, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k8, runtime, upenv, 1, argc, _var0) {
  // (if (##intrinsic ##vcore.symbol=?) (if (bruijn x 1 1) ((bruijn ##k.15 0 0) (bruijn y 1 2)) ((bruijn ##k.15 0 0) #f)) ((bruijn ##k.15 0 0) #f))
if(VDecodeBool(
_V40_V10vcore_Dsymbol_E_Q)) {
if(VDecodeBool(
upenv->vars[1])) {
    V_CALL(_var0, runtime,
      upenv->vars[2]);
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0core_V20_k10(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k10" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k10, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k10, runtime, upenv, 1, argc, _var0) {
  // (##vcore.symbol=? (bruijn ##k.12 2 0) (bruijn z 2 3) (bruijn w 2 4))
    V_CALL_FUNC(VSymbolEqv2, NULL, runtime,
      upenv->up->vars[0],
      upenv->up->vars[3],
      upenv->up->vars[4]);
 }
}
static void _V0vanity_V0core_V20_k9(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k9" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k9, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k9, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.symbol=? (close _V0vanity_V0core_V20_k10) (bruijn y 1 2) (bruijn z 1 3))
    V_CALL_FUNC(VSymbolEqv2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k10, env)}),
      upenv->vars[2],
      upenv->vars[3]);
 }
}
static void _V0vanity_V0core_V20_k15(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k15" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k15, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k15, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 6 0) (bruijn ##k.17 5 0) (bruijn ##x.20 0 0))
    V_CALL(VGetArg(upenv, 6-1, 0), runtime,
      VGetArg(upenv, 5-1, 0),
      _var0);
 }
}
static void _V0vanity_V0core_V20_k14(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k14" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k14, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k14, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.19 0 0) ((bruijn ##k.17 4 0) #f) ((bruijn cdr 7 46) (close _V0vanity_V0core_V20_k15) (bruijn xs 4 1)))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeBool(false));
} else {
    V_CALL(VGetArg(upenv, 7-1, 46), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k15, env)}),
      upenv->up->up->up->vars[1]);
}
 }
}
static void _V0vanity_V0core_V20_k13(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k13" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k13, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k13, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn not 6 20) (close _V0vanity_V0core_V20_k14) (bruijn ##x.21 0 0))
    V_CALL(VGetArg(upenv, 6-1, 20), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k14, env)}),
      _var0);
 }
}
static void _V0vanity_V0core_V20_k12(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k12" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k12, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k12, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.symbol=? (close _V0vanity_V0core_V20_k13) (bruijn x 4 1) (bruijn ##x.22 0 0))
    V_CALL_FUNC(VSymbolEqv2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k13, env)}),
      upenv->up->up->up->vars[1],
      _var0);
 }
}
static void _V0vanity_V0core_V20_k11(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k11" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k11, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k11, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.18 0 0) ((bruijn ##k.17 1 0) #t) ((bruijn car 4 45) (close _V0vanity_V0core_V20_k12) (bruijn xs 1 1)))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(true));
} else {
    V_CALL(upenv->up->up->up->vars[45], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k12, env)}),
      upenv->vars[1]);
}
 }
}
static void _V0vanity_V0core_V20_lambda5(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_lambda5" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0vanity_V0core_V20_lambda5, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_lambda5, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn null? 3 0) (close _V0vanity_V0core_V20_k11) (bruijn xs 0 1))
    V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k11, env)}),
      _var1);
 }
}
static void _V0vanity_V0core_V20_k16(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k16" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k16, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k16, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 1 0) (bruijn ##k.16 2 0) (bruijn ##x.23 0 0))
    V_CALL(upenv->vars[0], runtime,
      upenv->up->vars[0],
      _var0);
 }
}
__attribute__((used)) static void _V20CaseError__V0vanity_V0core_V20_lambda4(VRuntime * runtime, VEnv * upenv, int argc, ...) {
 // (_V0vanity_V0core_V20_lambda4 #t (3 (##vcore.symbol=? (bruijn ##k.8 0 0) (bruijn x 0 1) (bruijn y 0 2))) (4 ((close _V0vanity_V0core_V20_k6) (close _V0vanity_V0core_V20_k7))) (5 ((close _V0vanity_V0core_V20_k8) (close _V0vanity_V0core_V20_k9))) (3 + (letrec 1 ((close _V0vanity_V0core_V20_lambda5)) ((bruijn cons 2 44) (close _V0vanity_V0core_V20_k16) (bruijn y 1 2) (bruijn xs 1 3)))))
 VError("Not enough arguments to _V0vanity_V0core_V20_lambda4, got ~D~N"
 "-- expected 3~N"
 "-- expected 4~N"
 "-- expected 5~N"
 "-- expected 3 or more~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V0vanity_V0core_V20_lambda4(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V20Case0__V0vanity_V0core_V20_lambda4" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case0__V0vanity_V0core_V20_lambda4, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  // (##vcore.symbol=? (bruijn ##k.8 0 0) (bruijn x 0 1) (bruijn y 0 2))
    V_CALL_FUNC(VSymbolEqv2, NULL, runtime,
      _var0,
      _var1,
      _var2);
 }
}
__attribute__((used)) static void _V20Case1__V0vanity_V0core_V20_lambda4(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V20Case1__V0vanity_V0core_V20_lambda4" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case1__V0vanity_V0core_V20_lambda4, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // ((close _V0vanity_V0core_V20_k6) (close _V0vanity_V0core_V20_k7))
    V_CALL_FUNC(_V0vanity_V0core_V20_k6, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k7, env)}));
 }
}
__attribute__((used)) static void _V20Case2__V0vanity_V0core_V20_lambda4(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4) {
 static VDebugInfo dbg = { "_V20Case2__V0vanity_V0core_V20_lambda4" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case2__V0vanity_V0core_V20_lambda4, runtime, upenv, 5, argc, _var0, _var1, _var2, _var3, _var4) {
  struct { VEnv env; VWORD argv[5]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 5, 5, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  env->vars[4] = _var4;
  // ((close _V0vanity_V0core_V20_k8) (close _V0vanity_V0core_V20_k9))
    V_CALL_FUNC(_V0vanity_V0core_V20_k8, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k9, env)}));
 }
}
__attribute__((used)) static void _V20Case3__V0vanity_V0core_V20_lambda4(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, ...) {
 static VDebugInfo dbg = { "_V20Case3__V0vanity_V0core_V20_lambda4" };
 VRecordCall2(runtime, &dbg);
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 3, argc, _var2);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case3__V0vanity_V0core_V20_lambda4, runtime, upenv, 3, argc, _var0, _var1, _var2, _varargs) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _varargs;
  // (letrec 1 ((close _V0vanity_V0core_V20_lambda5)) ((bruijn cons 2 44) (close _V0vanity_V0core_V20_k16) (bruijn y 1 2) (bruijn xs 1 3)))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_lambda5, env)});
    V_CALL(upenv->up->vars[44], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k16, env)}),
      upenv->vars[2],
      upenv->vars[3]);
    }
 }
}
void _V0vanity_V0core_V20_lambda4(VRuntime * runtime, VEnv * upenv, int argc, ...);
asm(
".intel_syntax noprefix\n"
#ifdef __linux__
".type _V0vanity_V0core_V20_lambda4, @function\n"
#endif
"_V0vanity_V0core_V20_lambda4:\n"
"    cmp " ARGC_REG ", 3\n"
"    je _V20Case0__V0vanity_V0core_V20_lambda4\n"
"    cmp " ARGC_REG ", 4\n"
"    je _V20Case1__V0vanity_V0core_V20_lambda4\n"
"    cmp " ARGC_REG ", 5\n"
"    je _V20Case2__V0vanity_V0core_V20_lambda4\n"
"    cmp " ARGC_REG ", 3\n"
"    jge _V20Case3__V0vanity_V0core_V20_lambda4\n"
"    jmp _V20CaseError__V0vanity_V0core_V20_lambda4\n"
);
static void _V0vanity_V0core_V20_k18(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k18" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k18, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k18, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.26 0 0) ((bruijn boolean? 3 1) (bruijn ##k.24 2 0) (bruijn y 2 2)) ((bruijn ##k.24 2 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->up->up->vars[1], runtime,
      upenv->up->vars[0],
      upenv->up->vars[2]);
} else {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0core_V20_k17(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k17" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k17, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k17, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.25 0 0) ((bruijn boolean? 2 1) (close _V0vanity_V0core_V20_k18) (bruijn x 1 1)) ((bruijn ##k.24 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->up->vars[1], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k18, env)}),
      upenv->vars[1]);
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0core_V20_k19(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k19" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k19, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k19, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn boolean=? 2 16) (if (bruijn x 1 1) ((bruijn ##k.29 0 0) (bruijn y 1 2)) ((bruijn ##k.29 0 0) #f)) ((bruijn ##k.29 0 0) #f))
if(VDecodeBool(
upenv->up->vars[16])) {
if(VDecodeBool(
upenv->vars[1])) {
    V_CALL(_var0, runtime,
      upenv->vars[2]);
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0core_V20_k20(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k20" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k20, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k20, runtime, upenv, 1, argc, _var0) {
  // ((bruijn boolean=? 2 16) (bruijn ##k.27 1 0) (bruijn y 1 2) (bruijn z 1 3))
    V_CALL(upenv->up->vars[16], runtime,
      upenv->vars[0],
      upenv->vars[2],
      upenv->vars[3]);
 }
}
static void _V0vanity_V0core_V20_k21(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k21" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k21, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k21, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn boolean=? 2 16) (if (bruijn x 1 1) ((bruijn ##k.33 0 0) (bruijn y 1 2)) ((bruijn ##k.33 0 0) #f)) ((bruijn ##k.33 0 0) #f))
if(VDecodeBool(
upenv->up->vars[16])) {
if(VDecodeBool(
upenv->vars[1])) {
    V_CALL(_var0, runtime,
      upenv->vars[2]);
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0core_V20_k23(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k23" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k23, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k23, runtime, upenv, 1, argc, _var0) {
  // ((bruijn boolean=? 3 16) (bruijn ##k.30 2 0) (bruijn z 2 3) (bruijn w 2 4))
    V_CALL(upenv->up->up->vars[16], runtime,
      upenv->up->vars[0],
      upenv->up->vars[3],
      upenv->up->vars[4]);
 }
}
static void _V0vanity_V0core_V20_k22(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k22" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k22, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k22, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn boolean=? 2 16) (close _V0vanity_V0core_V20_k23) (bruijn y 1 2) (bruijn z 1 3))
    V_CALL(upenv->up->vars[16], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k23, env)}),
      upenv->vars[2],
      upenv->vars[3]);
 }
}
static void _V0vanity_V0core_V20_k28(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k28" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k28, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k28, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 6 0) (bruijn ##k.35 5 0) (bruijn ##x.38 0 0))
    V_CALL(VGetArg(upenv, 6-1, 0), runtime,
      VGetArg(upenv, 5-1, 0),
      _var0);
 }
}
static void _V0vanity_V0core_V20_k27(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k27" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k27, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k27, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.37 0 0) ((bruijn ##k.35 4 0) #f) ((bruijn cdr 7 46) (close _V0vanity_V0core_V20_k28) (bruijn xs 4 1)))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeBool(false));
} else {
    V_CALL(VGetArg(upenv, 7-1, 46), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k28, env)}),
      upenv->up->up->up->vars[1]);
}
 }
}
static void _V0vanity_V0core_V20_k26(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k26" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k26, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k26, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn not 6 20) (close _V0vanity_V0core_V20_k27) (bruijn ##x.39 0 0))
    V_CALL(VGetArg(upenv, 6-1, 20), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k27, env)}),
      _var0);
 }
}
static void _V0vanity_V0core_V20_k25(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k25" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k25, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k25, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn boolean=? 5 16) (close _V0vanity_V0core_V20_k26) (bruijn x 4 1) (bruijn ##x.40 0 0))
    V_CALL(VGetArg(upenv, 5-1, 16), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k26, env)}),
      upenv->up->up->up->vars[1],
      _var0);
 }
}
static void _V0vanity_V0core_V20_k24(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k24" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k24, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k24, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.36 0 0) ((bruijn ##k.35 1 0) #t) ((bruijn car 4 45) (close _V0vanity_V0core_V20_k25) (bruijn xs 1 1)))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(true));
} else {
    V_CALL(upenv->up->up->up->vars[45], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k25, env)}),
      upenv->vars[1]);
}
 }
}
static void _V0vanity_V0core_V20_lambda7(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_lambda7" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0vanity_V0core_V20_lambda7, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_lambda7, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn null? 3 0) (close _V0vanity_V0core_V20_k24) (bruijn xs 0 1))
    V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k24, env)}),
      _var1);
 }
}
static void _V0vanity_V0core_V20_k29(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k29" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k29, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k29, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 1 0) (bruijn ##k.34 2 0) (bruijn ##x.41 0 0))
    V_CALL(upenv->vars[0], runtime,
      upenv->up->vars[0],
      _var0);
 }
}
__attribute__((used)) static void _V20CaseError__V0vanity_V0core_V20_lambda6(VRuntime * runtime, VEnv * upenv, int argc, ...) {
 // (_V0vanity_V0core_V20_lambda6 #t (3 ((bruijn eq? 1 14) (close _V0vanity_V0core_V20_k17) (bruijn x 0 1) (bruijn y 0 2))) (4 ((close _V0vanity_V0core_V20_k19) (close _V0vanity_V0core_V20_k20))) (5 ((close _V0vanity_V0core_V20_k21) (close _V0vanity_V0core_V20_k22))) (3 + (letrec 1 ((close _V0vanity_V0core_V20_lambda7)) ((bruijn cons 2 44) (close _V0vanity_V0core_V20_k29) (bruijn y 1 2) (bruijn xs 1 3)))))
 VError("Not enough arguments to _V0vanity_V0core_V20_lambda6, got ~D~N"
 "-- expected 3~N"
 "-- expected 4~N"
 "-- expected 5~N"
 "-- expected 3 or more~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V0vanity_V0core_V20_lambda6(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V20Case0__V0vanity_V0core_V20_lambda6" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case0__V0vanity_V0core_V20_lambda6, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn eq? 1 14) (close _V0vanity_V0core_V20_k17) (bruijn x 0 1) (bruijn y 0 2))
    V_CALL(upenv->vars[14], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k17, env)}),
      _var1,
      _var2);
 }
}
__attribute__((used)) static void _V20Case1__V0vanity_V0core_V20_lambda6(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V20Case1__V0vanity_V0core_V20_lambda6" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case1__V0vanity_V0core_V20_lambda6, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // ((close _V0vanity_V0core_V20_k19) (close _V0vanity_V0core_V20_k20))
    V_CALL_FUNC(_V0vanity_V0core_V20_k19, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k20, env)}));
 }
}
__attribute__((used)) static void _V20Case2__V0vanity_V0core_V20_lambda6(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4) {
 static VDebugInfo dbg = { "_V20Case2__V0vanity_V0core_V20_lambda6" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case2__V0vanity_V0core_V20_lambda6, runtime, upenv, 5, argc, _var0, _var1, _var2, _var3, _var4) {
  struct { VEnv env; VWORD argv[5]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 5, 5, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  env->vars[4] = _var4;
  // ((close _V0vanity_V0core_V20_k21) (close _V0vanity_V0core_V20_k22))
    V_CALL_FUNC(_V0vanity_V0core_V20_k21, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k22, env)}));
 }
}
__attribute__((used)) static void _V20Case3__V0vanity_V0core_V20_lambda6(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, ...) {
 static VDebugInfo dbg = { "_V20Case3__V0vanity_V0core_V20_lambda6" };
 VRecordCall2(runtime, &dbg);
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 3, argc, _var2);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case3__V0vanity_V0core_V20_lambda6, runtime, upenv, 3, argc, _var0, _var1, _var2, _varargs) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _varargs;
  // (letrec 1 ((close _V0vanity_V0core_V20_lambda7)) ((bruijn cons 2 44) (close _V0vanity_V0core_V20_k29) (bruijn y 1 2) (bruijn xs 1 3)))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_lambda7, env)});
    V_CALL(upenv->up->vars[44], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k29, env)}),
      upenv->vars[2],
      upenv->vars[3]);
    }
 }
}
void _V0vanity_V0core_V20_lambda6(VRuntime * runtime, VEnv * upenv, int argc, ...);
asm(
".intel_syntax noprefix\n"
#ifdef __linux__
".type _V0vanity_V0core_V20_lambda6, @function\n"
#endif
"_V0vanity_V0core_V20_lambda6:\n"
"    cmp " ARGC_REG ", 3\n"
"    je _V20Case0__V0vanity_V0core_V20_lambda6\n"
"    cmp " ARGC_REG ", 4\n"
"    je _V20Case1__V0vanity_V0core_V20_lambda6\n"
"    cmp " ARGC_REG ", 5\n"
"    je _V20Case2__V0vanity_V0core_V20_lambda6\n"
"    cmp " ARGC_REG ", 3\n"
"    jge _V20Case3__V0vanity_V0core_V20_lambda6\n"
"    jmp _V20CaseError__V0vanity_V0core_V20_lambda6\n"
);
static void _V0vanity_V0core_V20_k38(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k38" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k38, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k38, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 6 0) (bruijn ##k.44 5 0) (bruijn ##x.47 0 0) (bruijn len 5 2))
    V_CALL(VGetArg(upenv, 6-1, 0), runtime,
      VGetArg(upenv, 5-1, 0),
      _var0,
      VGetArg(upenv, 5-1, 2));
 }
}
static void _V0vanity_V0core_V20_k37(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k37" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k37, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k37, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.46 0 0) ((bruijn + 11 34) (close _V0vanity_V0core_V20_k38) (bruijn i 4 1) 1) ((bruijn ##k.44 4 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 11-1, 34), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k38, env)}),
      upenv->up->up->up->vars[1],
      VEncodeInt(1l));
} else {
    V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0core_V20_k36(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k36" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k36, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k36, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn equal? 10 19) (close _V0vanity_V0core_V20_k37) (bruijn ##x.48 1 0) (bruijn ##x.49 0 0))
    V_CALL(VGetArg(upenv, 10-1, 19), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k37, env)}),
      upenv->vars[0],
      _var0);
 }
}
static void _V0vanity_V0core_V20_k35(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k35" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k35, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k35, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn vector-ref 9 111) (close _V0vanity_V0core_V20_k36) (bruijn y 8 2) (bruijn i 2 1))
    V_CALL(VGetArg(upenv, 9-1, 111), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k36, env)}),
      VGetArg(upenv, 8-1, 2),
      upenv->up->vars[1]);
 }
}
static void _V0vanity_V0core_V20_k34(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k34" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k34, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k34, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.45 0 0) ((bruijn ##k.44 1 0) #t) ((bruijn vector-ref 8 111) (close _V0vanity_V0core_V20_k35) (bruijn x 7 1) (bruijn i 1 1)))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(true));
} else {
    V_CALL(VGetArg(upenv, 8-1, 111), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k35, env)}),
      VGetArg(upenv, 7-1, 1),
      upenv->vars[1]);
}
 }
}
static void _V0vanity_V0core_V20_lambda9(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_lambda9" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0vanity_V0core_V20_lambda9, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_lambda9, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn = 7 22) (close _V0vanity_V0core_V20_k34) (bruijn i 0 1) (bruijn len 0 2))
    V_CALL(VGetArg(upenv, 7-1, 22), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k34, env)}),
      _var1,
      _var2);
 }
}
static void _V0vanity_V0core_V20_k39(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k39" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k39, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k39, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 1 0) (bruijn ##k.42 6 0) 0 (bruijn ##x.50 0 0))
    V_CALL(upenv->vars[0], runtime,
      VGetArg(upenv, 6-1, 0),
      VEncodeInt(0l),
      _var0);
 }
}
static void _V0vanity_V0core_V20_k33(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k33" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k33, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k33, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.43 0 0) ((bruijn ##k.42 4 0) #f) (letrec 1 ((close _V0vanity_V0core_V20_lambda9)) ((bruijn vector-length 6 113) (close _V0vanity_V0core_V20_k39) (bruijn x 5 1))))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeBool(false));
} else {
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_lambda9, env)});
    V_CALL(VGetArg(upenv, 6-1, 113), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k39, env)}),
      VGetArg(upenv, 5-1, 1));
    }
}
 }
}
static void _V0vanity_V0core_V20_k32(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k32" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k32, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k32, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn not 4 20) (close _V0vanity_V0core_V20_k33) (bruijn ##x.51 0 0))
    V_CALL(upenv->up->up->up->vars[20], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k33, env)}),
      _var0);
 }
}
static void _V0vanity_V0core_V20_k31(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k31" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k31, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k31, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn = 3 22) (close _V0vanity_V0core_V20_k32) (bruijn ##x.52 1 0) (bruijn ##x.53 0 0))
    V_CALL(upenv->up->up->vars[22], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k32, env)}),
      upenv->vars[0],
      _var0);
 }
}
static void _V0vanity_V0core_V20_k30(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k30" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k30, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k30, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn vector-length 2 113) (close _V0vanity_V0core_V20_k31) (bruijn y 1 2))
    V_CALL(upenv->up->vars[113], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k31, env)}),
      upenv->vars[2]);
 }
}
static void _V0vanity_V0core_V20_lambda8(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_lambda8" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0vanity_V0core_V20_lambda8, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_lambda8, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn vector-length 1 113) (close _V0vanity_V0core_V20_k30) (bruijn x 0 1))
    V_CALL(upenv->vars[113], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k30, env)}),
      _var1);
 }
}
static void _V0vanity_V0core_V20_k43(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k43" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k43, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k43, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.70 0 0) (##vcore.blob=? (bruijn ##k.69 1 0) (bruijn x 4 1) (bruijn y 4 2)) ((bruijn ##k.69 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(VBlobEqv2, NULL, runtime,
      upenv->vars[0],
      upenv->up->up->up->vars[1],
      upenv->up->up->up->vars[2]);
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0core_V20_k42(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k42" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k42, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k42, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.68 1 0) (##vcore.blob? (close _V0vanity_V0core_V20_k43) (bruijn y 3 2)) ((bruijn ##k.69 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL_FUNC(VBlobP2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k43, env)}),
      upenv->up->up->vars[2]);
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0core_V20_k46(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k46" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k46, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k46, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.63 0 0) ((bruijn equal? 6 19) (bruijn ##k.61 1 0) (##inline ##vcore.cdr (bruijn x 5 1)) (##inline ##vcore.cdr (bruijn y 5 2))) ((bruijn ##k.61 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 6-1, 19), runtime,
      upenv->vars[0],
      VInlineCdr(
        VGetArg(upenv, 5-1, 1)),
      VInlineCdr(
        VGetArg(upenv, 5-1, 2)));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0core_V20_k45(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k45" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k45, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k45, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn x 4 1)) (if (##inline ##vcore.pair? (bruijn y 4 2)) ((bruijn equal? 5 19) (close _V0vanity_V0core_V20_k46) (##inline ##vcore.car (bruijn x 4 1)) (##inline ##vcore.car (bruijn y 4 2))) ((bruijn ##k.61 0 0) #f)) ((bruijn ##k.61 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        upenv->up->up->up->vars[1]))) {
if(VDecodeBool(
VInlinePairP(
        upenv->up->up->up->vars[2]))) {
    V_CALL(VGetArg(upenv, 5-1, 19), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k46, env)}),
      VInlineCar(
        upenv->up->up->up->vars[1]),
      VInlineCar(
        upenv->up->up->up->vars[2]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0core_V20_k49(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k49" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k49, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k49, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.59 0 0) ((bruijn vector=? 7 18) (bruijn ##k.54 6 0) (bruijn x 6 1) (bruijn y 6 2)) ((bruijn ##k.54 6 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 7-1, 18), runtime,
      VGetArg(upenv, 6-1, 0),
      VGetArg(upenv, 6-1, 1),
      VGetArg(upenv, 6-1, 2));
} else {
    V_CALL(VGetArg(upenv, 6-1, 0), runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0core_V20_k48(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k48" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k48, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k48, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.58 0 0) (##vcore.vector? (close _V0vanity_V0core_V20_k49) (bruijn y 5 2)) ((bruijn ##k.54 5 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(VVectorP2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k49, env)}),
      VGetArg(upenv, 5-1, 2));
} else {
    V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0core_V20_k47(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k47" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k47, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k47, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.57 0 0) ((bruijn ##k.54 4 0) (bruijn ##p.57 0 0)) (##vcore.vector? (close _V0vanity_V0core_V20_k48) (bruijn x 4 1)))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->up->up->up->vars[0], runtime,
      _var0);
} else {
    V_CALL_FUNC(VVectorP2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k48, env)}),
      upenv->up->up->up->vars[1]);
}
 }
}
static void _V0vanity_V0core_V20_k44(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k44" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k44, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k44, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.56 0 0) ((bruijn ##k.54 3 0) (bruijn ##p.56 0 0)) ((close _V0vanity_V0core_V20_k45) (close _V0vanity_V0core_V20_k47)))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->up->up->vars[0], runtime,
      _var0);
} else {
    V_CALL_FUNC(_V0vanity_V0core_V20_k45, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k47, env)}));
}
 }
}
static void _V0vanity_V0core_V20_k41(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k41" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k41, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k41, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0core_V20_k42) (close _V0vanity_V0core_V20_k44))
    V_CALL_FUNC(_V0vanity_V0core_V20_k42, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k44, env)}));
 }
}
static void _V0vanity_V0core_V20_k40(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k40" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k40, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k40, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.55 0 0) ((bruijn ##k.54 1 0) (bruijn ##p.55 0 0)) (##vcore.blob? (close _V0vanity_V0core_V20_k41) (bruijn x 1 1)))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->vars[0], runtime,
      _var0);
} else {
    V_CALL_FUNC(VBlobP2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k41, env)}),
      upenv->vars[1]);
}
 }
}
static void _V0vanity_V0core_V20_lambda10(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_lambda10" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0vanity_V0core_V20_lambda10, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_lambda10, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((close _V0vanity_V0core_V20_k40) (##inline ##vcore.eq? (bruijn x 0 1) (bruijn y 0 2)))
    V_CALL_FUNC(_V0vanity_V0core_V20_k40, env, runtime,
      VInlineEq(
        _var1,
        _var2));
 }
}
static void _V0vanity_V0core_V20_k56(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k56" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k56, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k56, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 8 0) (bruijn ##k.72 7 0) (bruijn ##x.75 0 0))
    V_CALL(VGetArg(upenv, 8-1, 0), runtime,
      VGetArg(upenv, 7-1, 0),
      _var0);
 }
}
static void _V0vanity_V0core_V20_k55(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k55" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k55, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k55, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.74 0 0) ((bruijn cdr 9 46) (close _V0vanity_V0core_V20_k56) (bruijn xs 6 1)) ((bruijn ##k.72 6 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 9-1, 46), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k56, env)}),
      VGetArg(upenv, 6-1, 1));
} else {
    V_CALL(VGetArg(upenv, 6-1, 0), runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0core_V20_k54(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k54" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k54, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k54, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn eq? 8 14) (close _V0vanity_V0core_V20_k55) (bruijn ##x.76 0 0) -1)
    V_CALL(VGetArg(upenv, 8-1, 14), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k55, env)}),
      _var0,
      VEncodeInt(-1l));
 }
}
static void _V0vanity_V0core_V20_k53(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k53" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k53, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k53, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.cmp (close _V0vanity_V0core_V20_k54) (bruijn ##x.77 1 0) (bruijn ##x.78 0 0))
    V_CALL_FUNC(VCmp2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k54, env)}),
      upenv->vars[0],
      _var0);
 }
}
static void _V0vanity_V0core_V20_k52(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k52" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k52, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k52, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn cadr 6 50) (close _V0vanity_V0core_V20_k53) (bruijn xs 3 1))
    V_CALL(VGetArg(upenv, 6-1, 50), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k53, env)}),
      upenv->up->up->vars[1]);
 }
}
static void _V0vanity_V0core_V20_k51(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k51" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k51, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k51, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.73 0 0) ((bruijn ##k.72 2 0) #t) ((bruijn car 5 45) (close _V0vanity_V0core_V20_k52) (bruijn xs 2 1)))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(true));
} else {
    V_CALL(VGetArg(upenv, 5-1, 45), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k52, env)}),
      upenv->up->vars[1]);
}
 }
}
static void _V0vanity_V0core_V20_k50(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k50" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k50, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k50, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn null? 4 0) (close _V0vanity_V0core_V20_k51) (bruijn ##x.79 0 0))
    V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k51, env)}),
      _var0);
 }
}
static void _V0vanity_V0core_V20_lambda12(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_lambda12" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0vanity_V0core_V20_lambda12, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_lambda12, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn cdr 3 46) (close _V0vanity_V0core_V20_k50) (bruijn xs 0 1))
    V_CALL(upenv->up->up->vars[46], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k50, env)}),
      _var1);
 }
}
static void _V0vanity_V0core_V20_k58(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k58" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k58, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k58, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 2 0) (bruijn ##k.71 3 0) (bruijn ##x.80 0 0))
    V_CALL(upenv->up->vars[0], runtime,
      upenv->up->up->vars[0],
      _var0);
 }
}
static void _V0vanity_V0core_V20_k57(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k57" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k57, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k57, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn cons 3 44) (close _V0vanity_V0core_V20_k58) (bruijn x0 2 1) (bruijn ##x.81 0 0))
    V_CALL(upenv->up->up->vars[44], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k58, env)}),
      upenv->up->vars[1],
      _var0);
 }
}
static void _V0vanity_V0core_V20_lambda11(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, ...) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_lambda11" };
 VRecordCall2(runtime, &dbg);
 if(argc < 3) {
  VError("Not enough arguments to _V0vanity_V0core_V20_lambda11, got ~D~N"
  "-- expected 3 or more~N"
  , argc);
 }
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 3, argc, _var2);
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_lambda11, runtime, upenv, 3, argc, _var0, _var1, _var2, _varargs) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _varargs;
  // (letrec 1 ((close _V0vanity_V0core_V20_lambda12)) ((bruijn cons 2 44) (close _V0vanity_V0core_V20_k57) (bruijn x1 1 2) (bruijn xs 1 3)))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_lambda12, env)});
    V_CALL(upenv->up->vars[44], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k57, env)}),
      upenv->vars[2],
      upenv->vars[3]);
    }
 }
}
static void _V0vanity_V0core_V20_k65(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k65" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k65, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k65, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 8 0) (bruijn ##k.83 7 0) (bruijn ##x.86 0 0))
    V_CALL(VGetArg(upenv, 8-1, 0), runtime,
      VGetArg(upenv, 7-1, 0),
      _var0);
 }
}
static void _V0vanity_V0core_V20_k64(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k64" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k64, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k64, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.85 0 0) ((bruijn cdr 9 46) (close _V0vanity_V0core_V20_k65) (bruijn xs 6 1)) ((bruijn ##k.83 6 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 9-1, 46), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k65, env)}),
      VGetArg(upenv, 6-1, 1));
} else {
    V_CALL(VGetArg(upenv, 6-1, 0), runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0core_V20_k63(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k63" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k63, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k63, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn eq? 8 14) (close _V0vanity_V0core_V20_k64) (bruijn ##x.87 0 0) 0)
    V_CALL(VGetArg(upenv, 8-1, 14), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k64, env)}),
      _var0,
      VEncodeInt(0l));
 }
}
static void _V0vanity_V0core_V20_k62(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k62" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k62, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k62, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.cmp (close _V0vanity_V0core_V20_k63) (bruijn ##x.88 1 0) (bruijn ##x.89 0 0))
    V_CALL_FUNC(VCmp2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k63, env)}),
      upenv->vars[0],
      _var0);
 }
}
static void _V0vanity_V0core_V20_k61(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k61" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k61, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k61, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn cadr 6 50) (close _V0vanity_V0core_V20_k62) (bruijn xs 3 1))
    V_CALL(VGetArg(upenv, 6-1, 50), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k62, env)}),
      upenv->up->up->vars[1]);
 }
}
static void _V0vanity_V0core_V20_k60(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k60" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k60, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k60, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.84 0 0) ((bruijn ##k.83 2 0) #t) ((bruijn car 5 45) (close _V0vanity_V0core_V20_k61) (bruijn xs 2 1)))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(true));
} else {
    V_CALL(VGetArg(upenv, 5-1, 45), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k61, env)}),
      upenv->up->vars[1]);
}
 }
}
static void _V0vanity_V0core_V20_k59(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k59" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k59, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k59, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn null? 4 0) (close _V0vanity_V0core_V20_k60) (bruijn ##x.90 0 0))
    V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k60, env)}),
      _var0);
 }
}
static void _V0vanity_V0core_V20_lambda14(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_lambda14" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0vanity_V0core_V20_lambda14, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_lambda14, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn cdr 3 46) (close _V0vanity_V0core_V20_k59) (bruijn xs 0 1))
    V_CALL(upenv->up->up->vars[46], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k59, env)}),
      _var1);
 }
}
static void _V0vanity_V0core_V20_k67(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k67" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k67, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k67, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 2 0) (bruijn ##k.82 3 0) (bruijn ##x.91 0 0))
    V_CALL(upenv->up->vars[0], runtime,
      upenv->up->up->vars[0],
      _var0);
 }
}
static void _V0vanity_V0core_V20_k66(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k66" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k66, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k66, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn cons 3 44) (close _V0vanity_V0core_V20_k67) (bruijn x0 2 1) (bruijn ##x.92 0 0))
    V_CALL(upenv->up->up->vars[44], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k67, env)}),
      upenv->up->vars[1],
      _var0);
 }
}
static void _V0vanity_V0core_V20_lambda13(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, ...) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_lambda13" };
 VRecordCall2(runtime, &dbg);
 if(argc < 3) {
  VError("Not enough arguments to _V0vanity_V0core_V20_lambda13, got ~D~N"
  "-- expected 3 or more~N"
  , argc);
 }
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 3, argc, _var2);
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_lambda13, runtime, upenv, 3, argc, _var0, _var1, _var2, _varargs) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _varargs;
  // (letrec 1 ((close _V0vanity_V0core_V20_lambda14)) ((bruijn cons 2 44) (close _V0vanity_V0core_V20_k66) (bruijn x1 1 2) (bruijn xs 1 3)))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_lambda14, env)});
    V_CALL(upenv->up->vars[44], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k66, env)}),
      upenv->vars[2],
      upenv->vars[3]);
    }
 }
}
static void _V0vanity_V0core_V20_k74(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k74" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k74, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k74, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 8 0) (bruijn ##k.94 7 0) (bruijn ##x.97 0 0))
    V_CALL(VGetArg(upenv, 8-1, 0), runtime,
      VGetArg(upenv, 7-1, 0),
      _var0);
 }
}
static void _V0vanity_V0core_V20_k73(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k73" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k73, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k73, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.96 0 0) ((bruijn cdr 9 46) (close _V0vanity_V0core_V20_k74) (bruijn xs 6 1)) ((bruijn ##k.94 6 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 9-1, 46), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k74, env)}),
      VGetArg(upenv, 6-1, 1));
} else {
    V_CALL(VGetArg(upenv, 6-1, 0), runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0core_V20_k72(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k72" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k72, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k72, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn eq? 8 14) (close _V0vanity_V0core_V20_k73) (bruijn ##x.98 0 0) 1)
    V_CALL(VGetArg(upenv, 8-1, 14), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k73, env)}),
      _var0,
      VEncodeInt(1l));
 }
}
static void _V0vanity_V0core_V20_k71(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k71" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k71, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k71, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.cmp (close _V0vanity_V0core_V20_k72) (bruijn ##x.99 1 0) (bruijn ##x.100 0 0))
    V_CALL_FUNC(VCmp2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k72, env)}),
      upenv->vars[0],
      _var0);
 }
}
static void _V0vanity_V0core_V20_k70(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k70" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k70, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k70, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn cadr 6 50) (close _V0vanity_V0core_V20_k71) (bruijn xs 3 1))
    V_CALL(VGetArg(upenv, 6-1, 50), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k71, env)}),
      upenv->up->up->vars[1]);
 }
}
static void _V0vanity_V0core_V20_k69(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k69" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k69, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k69, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.95 0 0) ((bruijn ##k.94 2 0) #t) ((bruijn car 5 45) (close _V0vanity_V0core_V20_k70) (bruijn xs 2 1)))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(true));
} else {
    V_CALL(VGetArg(upenv, 5-1, 45), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k70, env)}),
      upenv->up->vars[1]);
}
 }
}
static void _V0vanity_V0core_V20_k68(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k68" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k68, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k68, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn null? 4 0) (close _V0vanity_V0core_V20_k69) (bruijn ##x.101 0 0))
    V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k69, env)}),
      _var0);
 }
}
static void _V0vanity_V0core_V20_lambda16(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_lambda16" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0vanity_V0core_V20_lambda16, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_lambda16, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn cdr 3 46) (close _V0vanity_V0core_V20_k68) (bruijn xs 0 1))
    V_CALL(upenv->up->up->vars[46], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k68, env)}),
      _var1);
 }
}
static void _V0vanity_V0core_V20_k76(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k76" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k76, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k76, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 2 0) (bruijn ##k.93 3 0) (bruijn ##x.102 0 0))
    V_CALL(upenv->up->vars[0], runtime,
      upenv->up->up->vars[0],
      _var0);
 }
}
static void _V0vanity_V0core_V20_k75(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k75" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k75, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k75, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn cons 3 44) (close _V0vanity_V0core_V20_k76) (bruijn x0 2 1) (bruijn ##x.103 0 0))
    V_CALL(upenv->up->up->vars[44], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k76, env)}),
      upenv->up->vars[1],
      _var0);
 }
}
static void _V0vanity_V0core_V20_lambda15(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, ...) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_lambda15" };
 VRecordCall2(runtime, &dbg);
 if(argc < 3) {
  VError("Not enough arguments to _V0vanity_V0core_V20_lambda15, got ~D~N"
  "-- expected 3 or more~N"
  , argc);
 }
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 3, argc, _var2);
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_lambda15, runtime, upenv, 3, argc, _var0, _var1, _var2, _varargs) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _varargs;
  // (letrec 1 ((close _V0vanity_V0core_V20_lambda16)) ((bruijn cons 2 44) (close _V0vanity_V0core_V20_k75) (bruijn x1 1 2) (bruijn xs 1 3)))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_lambda16, env)});
    V_CALL(upenv->up->vars[44], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k75, env)}),
      upenv->vars[2],
      upenv->vars[3]);
    }
 }
}
static void _V0vanity_V0core_V20_k83(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k83" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k83, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k83, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 8 0) (bruijn ##k.105 7 0) (bruijn ##x.108 0 0))
    V_CALL(VGetArg(upenv, 8-1, 0), runtime,
      VGetArg(upenv, 7-1, 0),
      _var0);
 }
}
static void _V0vanity_V0core_V20_k82(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k82" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k82, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k82, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.107 0 0) ((bruijn ##k.105 6 0) #f) ((bruijn cdr 9 46) (close _V0vanity_V0core_V20_k83) (bruijn xs 6 1)))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 6-1, 0), runtime,
      VEncodeBool(false));
} else {
    V_CALL(VGetArg(upenv, 9-1, 46), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k83, env)}),
      VGetArg(upenv, 6-1, 1));
}
 }
}
static void _V0vanity_V0core_V20_k81(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k81" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k81, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k81, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn eq? 8 14) (close _V0vanity_V0core_V20_k82) (bruijn ##x.109 0 0) 1)
    V_CALL(VGetArg(upenv, 8-1, 14), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k82, env)}),
      _var0,
      VEncodeInt(1l));
 }
}
static void _V0vanity_V0core_V20_k80(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k80" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k80, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k80, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.cmp (close _V0vanity_V0core_V20_k81) (bruijn ##x.110 1 0) (bruijn ##x.111 0 0))
    V_CALL_FUNC(VCmp2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k81, env)}),
      upenv->vars[0],
      _var0);
 }
}
static void _V0vanity_V0core_V20_k79(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k79" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k79, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k79, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn cadr 6 50) (close _V0vanity_V0core_V20_k80) (bruijn xs 3 1))
    V_CALL(VGetArg(upenv, 6-1, 50), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k80, env)}),
      upenv->up->up->vars[1]);
 }
}
static void _V0vanity_V0core_V20_k78(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k78" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k78, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k78, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.106 0 0) ((bruijn ##k.105 2 0) #t) ((bruijn car 5 45) (close _V0vanity_V0core_V20_k79) (bruijn xs 2 1)))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(true));
} else {
    V_CALL(VGetArg(upenv, 5-1, 45), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k79, env)}),
      upenv->up->vars[1]);
}
 }
}
static void _V0vanity_V0core_V20_k77(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k77" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k77, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k77, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn null? 4 0) (close _V0vanity_V0core_V20_k78) (bruijn ##x.112 0 0))
    V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k78, env)}),
      _var0);
 }
}
static void _V0vanity_V0core_V20_lambda18(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_lambda18" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0vanity_V0core_V20_lambda18, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_lambda18, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn cdr 3 46) (close _V0vanity_V0core_V20_k77) (bruijn xs 0 1))
    V_CALL(upenv->up->up->vars[46], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k77, env)}),
      _var1);
 }
}
static void _V0vanity_V0core_V20_k85(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k85" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k85, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k85, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 2 0) (bruijn ##k.104 3 0) (bruijn ##x.113 0 0))
    V_CALL(upenv->up->vars[0], runtime,
      upenv->up->up->vars[0],
      _var0);
 }
}
static void _V0vanity_V0core_V20_k84(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k84" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k84, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k84, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn cons 3 44) (close _V0vanity_V0core_V20_k85) (bruijn x0 2 1) (bruijn ##x.114 0 0))
    V_CALL(upenv->up->up->vars[44], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k85, env)}),
      upenv->up->vars[1],
      _var0);
 }
}
static void _V0vanity_V0core_V20_lambda17(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, ...) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_lambda17" };
 VRecordCall2(runtime, &dbg);
 if(argc < 3) {
  VError("Not enough arguments to _V0vanity_V0core_V20_lambda17, got ~D~N"
  "-- expected 3 or more~N"
  , argc);
 }
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 3, argc, _var2);
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_lambda17, runtime, upenv, 3, argc, _var0, _var1, _var2, _varargs) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _varargs;
  // (letrec 1 ((close _V0vanity_V0core_V20_lambda18)) ((bruijn cons 2 44) (close _V0vanity_V0core_V20_k84) (bruijn x1 1 2) (bruijn xs 1 3)))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_lambda18, env)});
    V_CALL(upenv->up->vars[44], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k84, env)}),
      upenv->vars[2],
      upenv->vars[3]);
    }
 }
}
static void _V0vanity_V0core_V20_k92(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k92" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k92, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k92, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 8 0) (bruijn ##k.116 7 0) (bruijn ##x.119 0 0))
    V_CALL(VGetArg(upenv, 8-1, 0), runtime,
      VGetArg(upenv, 7-1, 0),
      _var0);
 }
}
static void _V0vanity_V0core_V20_k91(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k91" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k91, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k91, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.118 0 0) ((bruijn ##k.116 6 0) #f) ((bruijn cdr 9 46) (close _V0vanity_V0core_V20_k92) (bruijn xs 6 1)))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 6-1, 0), runtime,
      VEncodeBool(false));
} else {
    V_CALL(VGetArg(upenv, 9-1, 46), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k92, env)}),
      VGetArg(upenv, 6-1, 1));
}
 }
}
static void _V0vanity_V0core_V20_k90(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k90" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k90, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k90, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn eq? 8 14) (close _V0vanity_V0core_V20_k91) (bruijn ##x.120 0 0) -1)
    V_CALL(VGetArg(upenv, 8-1, 14), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k91, env)}),
      _var0,
      VEncodeInt(-1l));
 }
}
static void _V0vanity_V0core_V20_k89(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k89" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k89, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k89, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.cmp (close _V0vanity_V0core_V20_k90) (bruijn ##x.121 1 0) (bruijn ##x.122 0 0))
    V_CALL_FUNC(VCmp2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k90, env)}),
      upenv->vars[0],
      _var0);
 }
}
static void _V0vanity_V0core_V20_k88(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k88" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k88, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k88, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn cadr 6 50) (close _V0vanity_V0core_V20_k89) (bruijn xs 3 1))
    V_CALL(VGetArg(upenv, 6-1, 50), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k89, env)}),
      upenv->up->up->vars[1]);
 }
}
static void _V0vanity_V0core_V20_k87(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k87" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k87, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k87, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.117 0 0) ((bruijn ##k.116 2 0) #t) ((bruijn car 5 45) (close _V0vanity_V0core_V20_k88) (bruijn xs 2 1)))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(true));
} else {
    V_CALL(VGetArg(upenv, 5-1, 45), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k88, env)}),
      upenv->up->vars[1]);
}
 }
}
static void _V0vanity_V0core_V20_k86(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k86" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k86, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k86, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn null? 4 0) (close _V0vanity_V0core_V20_k87) (bruijn ##x.123 0 0))
    V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k87, env)}),
      _var0);
 }
}
static void _V0vanity_V0core_V20_lambda20(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_lambda20" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0vanity_V0core_V20_lambda20, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_lambda20, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn cdr 3 46) (close _V0vanity_V0core_V20_k86) (bruijn xs 0 1))
    V_CALL(upenv->up->up->vars[46], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k86, env)}),
      _var1);
 }
}
static void _V0vanity_V0core_V20_k94(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k94" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k94, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k94, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 2 0) (bruijn ##k.115 3 0) (bruijn ##x.124 0 0))
    V_CALL(upenv->up->vars[0], runtime,
      upenv->up->up->vars[0],
      _var0);
 }
}
static void _V0vanity_V0core_V20_k93(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k93" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k93, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k93, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn cons 3 44) (close _V0vanity_V0core_V20_k94) (bruijn x0 2 1) (bruijn ##x.125 0 0))
    V_CALL(upenv->up->up->vars[44], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k94, env)}),
      upenv->up->vars[1],
      _var0);
 }
}
static void _V0vanity_V0core_V20_lambda19(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, ...) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_lambda19" };
 VRecordCall2(runtime, &dbg);
 if(argc < 3) {
  VError("Not enough arguments to _V0vanity_V0core_V20_lambda19, got ~D~N"
  "-- expected 3 or more~N"
  , argc);
 }
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 3, argc, _var2);
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_lambda19, runtime, upenv, 3, argc, _var0, _var1, _var2, _varargs) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _varargs;
  // (letrec 1 ((close _V0vanity_V0core_V20_lambda20)) ((bruijn cons 2 44) (close _V0vanity_V0core_V20_k93) (bruijn x1 1 2) (bruijn xs 1 3)))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_lambda20, env)});
    V_CALL(upenv->up->vars[44], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k93, env)}),
      upenv->vars[2],
      upenv->vars[3]);
    }
 }
}
static void _V0vanity_V0core_V20_lambda21(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_lambda21" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0vanity_V0core_V20_lambda21, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_lambda21, runtime, upenv, 2, argc, _var0, _var1) {
  // (##vcore.+ (bruijn ##k.126 0 0) (bruijn x 0 1) 0.000000)
    V_CALL_FUNC(VAdd2, NULL, runtime,
      _var0,
      _var1,
      VEncodeNumber(0.000000));
 }
}
static void _V0vanity_V0core_V20_k95(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k95" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k95, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k95, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.128 0 0) ((bruijn ##k.127 1 0) (bruijn ##p.128 0 0)) (##vcore.int? (bruijn ##k.127 1 0) (bruijn x 1 1)))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->vars[0], runtime,
      _var0);
} else {
    V_CALL_FUNC(VIntP2, NULL, runtime,
      upenv->vars[0],
      upenv->vars[1]);
}
 }
}
static void _V0vanity_V0core_V20_lambda22(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_lambda22" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0vanity_V0core_V20_lambda22, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_lambda22, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (##vcore.double? (close _V0vanity_V0core_V20_k95) (bruijn x 0 1))
    V_CALL_FUNC(VDoubleP2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k95, env)}),
      _var1);
 }
}
static void _V0vanity_V0core_V20_lambda23(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_lambda23" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0vanity_V0core_V20_lambda23, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_lambda23, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn > 1 23) (bruijn ##k.129 0 0) (bruijn x 0 1) 0)
    V_CALL(upenv->vars[23], runtime,
      _var0,
      _var1,
      VEncodeInt(0l));
 }
}
static void _V0vanity_V0core_V20_lambda24(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_lambda24" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0vanity_V0core_V20_lambda24, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_lambda24, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn = 1 22) (bruijn ##k.130 0 0) (bruijn x 0 1) 0)
    V_CALL(upenv->vars[22], runtime,
      _var0,
      _var1,
      VEncodeInt(0l));
 }
}
static void _V0vanity_V0core_V20_lambda25(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_lambda25" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0vanity_V0core_V20_lambda25, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_lambda25, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn < 1 21) (bruijn ##k.131 0 0) (bruijn x 0 1) 0)
    V_CALL(upenv->vars[21], runtime,
      _var0,
      _var1,
      VEncodeInt(0l));
 }
}
static void _V0vanity_V0core_V20_k96(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k96" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k96, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k96, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.133 0 0) ((bruijn - 2 35) (bruijn ##k.132 1 0) (bruijn x 1 1)) ((bruijn ##k.132 1 0) (bruijn x 1 1)))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->up->vars[35], runtime,
      upenv->vars[0],
      upenv->vars[1]);
} else {
    V_CALL(upenv->vars[0], runtime,
      upenv->vars[1]);
}
 }
}
static void _V0vanity_V0core_V20_lambda26(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_lambda26" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0vanity_V0core_V20_lambda26, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_lambda26, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn < 1 21) (close _V0vanity_V0core_V20_k96) (bruijn x 0 1) 0)
    V_CALL(upenv->vars[21], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k96, env)}),
      _var1,
      VEncodeInt(0l));
 }
}
static void _V0vanity_V0core_V20_lambda27(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_lambda27" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0vanity_V0core_V20_lambda27, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_lambda27, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn * 1 36) (bruijn ##k.134 0 0) (bruijn x 0 1) (bruijn x 0 1))
    V_CALL(upenv->vars[36], runtime,
      _var0,
      _var1,
      _var1);
 }
}
static void _V0vanity_V0core_V20_k97(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k97" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k97, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k97, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.137 0 0) ((bruijn ##k.136 1 0) (bruijn a 1 1)) ((bruijn ##k.136 1 0) (bruijn b 1 2)))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->vars[0], runtime,
      upenv->vars[1]);
} else {
    V_CALL(upenv->vars[0], runtime,
      upenv->vars[2]);
}
 }
}
static void _V0vanity_V0core_V20_k98(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k98" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k98, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k98, runtime, upenv, 1, argc, _var0) {
  // ((bruijn max 2 42) (bruijn ##k.138 1 0) (bruijn ##x.139 0 0) (bruijn c 1 3))
    V_CALL(upenv->up->vars[42], runtime,
      upenv->vars[0],
      _var0,
      upenv->vars[3]);
 }
}
static void _V0vanity_V0core_V20_k100(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k100" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k100, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k100, runtime, upenv, 1, argc, _var0) {
  // ((bruijn max 3 42) (bruijn ##k.140 2 0) (bruijn ##x.141 0 0) (bruijn d 2 4))
    V_CALL(upenv->up->up->vars[42], runtime,
      upenv->up->vars[0],
      _var0,
      upenv->up->vars[4]);
 }
}
static void _V0vanity_V0core_V20_k99(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k99" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k99, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k99, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn max 2 42) (close _V0vanity_V0core_V20_k100) (bruijn ##x.142 0 0) (bruijn c 1 3))
    V_CALL(upenv->up->vars[42], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k100, env)}),
      _var0,
      upenv->vars[3]);
 }
}
static void _V0vanity_V0core_V20_k104(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k104" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k104, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k104, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 5 0) (bruijn ##k.144 4 0) (bruijn ##x.146 1 0) (bruijn ##x.147 0 0))
    V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      upenv->up->up->up->vars[0],
      upenv->vars[0],
      _var0);
 }
}
static void _V0vanity_V0core_V20_k103(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k103" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k103, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k103, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn cdr 6 46) (close _V0vanity_V0core_V20_k104) (bruijn bs 5 2))
    V_CALL(VGetArg(upenv, 6-1, 46), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k104, env)}),
      VGetArg(upenv, 5-1, 2));
 }
}
static void _V0vanity_V0core_V20_k102(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k102" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k102, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k102, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn max 5 42) (close _V0vanity_V0core_V20_k103) (bruijn a 4 1) (bruijn ##x.148 0 0))
    V_CALL(VGetArg(upenv, 5-1, 42), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k103, env)}),
      upenv->up->up->up->vars[1],
      _var0);
 }
}
static void _V0vanity_V0core_V20_k101(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k101" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k101, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k101, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.145 0 0) ((bruijn ##k.144 1 0) (bruijn ret 1 1)) ((bruijn car 4 45) (close _V0vanity_V0core_V20_k102) (bruijn bs 3 2)))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->vars[0], runtime,
      upenv->vars[1]);
} else {
    V_CALL(upenv->up->up->up->vars[45], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k102, env)}),
      upenv->up->up->vars[2]);
}
 }
}
static void _V0vanity_V0core_V20_lambda29(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_lambda29" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0vanity_V0core_V20_lambda29, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_lambda29, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn null? 3 0) (close _V0vanity_V0core_V20_k101) (bruijn bs 2 2))
    V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k101, env)}),
      upenv->up->vars[2]);
 }
}
__attribute__((used)) static void _V20CaseError__V0vanity_V0core_V20_lambda28(VRuntime * runtime, VEnv * upenv, int argc, ...) {
 // (_V0vanity_V0core_V20_lambda28 #t (2 ((bruijn ##k.135 0 0) (bruijn a 0 1))) (3 ((bruijn > 1 23) (close _V0vanity_V0core_V20_k97) (bruijn a 0 1) (bruijn b 0 2))) (4 ((bruijn max 1 42) (close _V0vanity_V0core_V20_k98) (bruijn a 0 1) (bruijn b 0 2))) (5 ((bruijn max 1 42) (close _V0vanity_V0core_V20_k99) (bruijn a 0 1) (bruijn b 0 2))) (2 + (letrec 1 ((close _V0vanity_V0core_V20_lambda29)) ((bruijn loop 0 0) (bruijn ##k.143 1 0) (bruijn a 1 1) (bruijn bs 1 2)))))
 VError("Not enough arguments to _V0vanity_V0core_V20_lambda28, got ~D~N"
 "-- expected 2~N"
 "-- expected 3~N"
 "-- expected 4~N"
 "-- expected 5~N"
 "-- expected 2 or more~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V0vanity_V0core_V20_lambda28(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V20Case0__V0vanity_V0core_V20_lambda28" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case0__V0vanity_V0core_V20_lambda28, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##k.135 0 0) (bruijn a 0 1))
    V_CALL(_var0, runtime,
      _var1);
 }
}
__attribute__((used)) static void _V20Case1__V0vanity_V0core_V20_lambda28(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V20Case1__V0vanity_V0core_V20_lambda28" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case1__V0vanity_V0core_V20_lambda28, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn > 1 23) (close _V0vanity_V0core_V20_k97) (bruijn a 0 1) (bruijn b 0 2))
    V_CALL(upenv->vars[23], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k97, env)}),
      _var1,
      _var2);
 }
}
__attribute__((used)) static void _V20Case2__V0vanity_V0core_V20_lambda28(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V20Case2__V0vanity_V0core_V20_lambda28" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case2__V0vanity_V0core_V20_lambda28, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // ((bruijn max 1 42) (close _V0vanity_V0core_V20_k98) (bruijn a 0 1) (bruijn b 0 2))
    V_CALL(upenv->vars[42], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k98, env)}),
      _var1,
      _var2);
 }
}
__attribute__((used)) static void _V20Case3__V0vanity_V0core_V20_lambda28(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4) {
 static VDebugInfo dbg = { "_V20Case3__V0vanity_V0core_V20_lambda28" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case3__V0vanity_V0core_V20_lambda28, runtime, upenv, 5, argc, _var0, _var1, _var2, _var3, _var4) {
  struct { VEnv env; VWORD argv[5]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 5, 5, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  env->vars[4] = _var4;
  // ((bruijn max 1 42) (close _V0vanity_V0core_V20_k99) (bruijn a 0 1) (bruijn b 0 2))
    V_CALL(upenv->vars[42], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k99, env)}),
      _var1,
      _var2);
 }
}
__attribute__((used)) static void _V20Case4__V0vanity_V0core_V20_lambda28(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, ...) {
 static VDebugInfo dbg = { "_V20Case4__V0vanity_V0core_V20_lambda28" };
 VRecordCall2(runtime, &dbg);
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 2, argc, _var1);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case4__V0vanity_V0core_V20_lambda28, runtime, upenv, 2, argc, _var0, _var1, _varargs) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _varargs;
  // (letrec 1 ((close _V0vanity_V0core_V20_lambda29)) ((bruijn loop 0 0) (bruijn ##k.143 1 0) (bruijn a 1 1) (bruijn bs 1 2)))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_lambda29, env)});
    V_CALL(env->vars[0], runtime,
      upenv->vars[0],
      upenv->vars[1],
      upenv->vars[2]);
    }
 }
}
void _V0vanity_V0core_V20_lambda28(VRuntime * runtime, VEnv * upenv, int argc, ...);
asm(
".intel_syntax noprefix\n"
#ifdef __linux__
".type _V0vanity_V0core_V20_lambda28, @function\n"
#endif
"_V0vanity_V0core_V20_lambda28:\n"
"    cmp " ARGC_REG ", 2\n"
"    je _V20Case0__V0vanity_V0core_V20_lambda28\n"
"    cmp " ARGC_REG ", 3\n"
"    je _V20Case1__V0vanity_V0core_V20_lambda28\n"
"    cmp " ARGC_REG ", 4\n"
"    je _V20Case2__V0vanity_V0core_V20_lambda28\n"
"    cmp " ARGC_REG ", 5\n"
"    je _V20Case3__V0vanity_V0core_V20_lambda28\n"
"    cmp " ARGC_REG ", 2\n"
"    jge _V20Case4__V0vanity_V0core_V20_lambda28\n"
"    jmp _V20CaseError__V0vanity_V0core_V20_lambda28\n"
);
static void _V0vanity_V0core_V20_k105(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k105" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k105, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k105, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.151 0 0) ((bruijn ##k.150 1 0) (bruijn a 1 1)) ((bruijn ##k.150 1 0) (bruijn b 1 2)))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->vars[0], runtime,
      upenv->vars[1]);
} else {
    V_CALL(upenv->vars[0], runtime,
      upenv->vars[2]);
}
 }
}
static void _V0vanity_V0core_V20_k106(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k106" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k106, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k106, runtime, upenv, 1, argc, _var0) {
  // ((bruijn min 2 43) (bruijn ##k.152 1 0) (bruijn ##x.153 0 0) (bruijn c 1 3))
    V_CALL(upenv->up->vars[43], runtime,
      upenv->vars[0],
      _var0,
      upenv->vars[3]);
 }
}
static void _V0vanity_V0core_V20_k108(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k108" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k108, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k108, runtime, upenv, 1, argc, _var0) {
  // ((bruijn min 3 43) (bruijn ##k.154 2 0) (bruijn ##x.155 0 0) (bruijn d 2 4))
    V_CALL(upenv->up->up->vars[43], runtime,
      upenv->up->vars[0],
      _var0,
      upenv->up->vars[4]);
 }
}
static void _V0vanity_V0core_V20_k107(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k107" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k107, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k107, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn min 2 43) (close _V0vanity_V0core_V20_k108) (bruijn ##x.156 0 0) (bruijn c 1 3))
    V_CALL(upenv->up->vars[43], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k108, env)}),
      _var0,
      upenv->vars[3]);
 }
}
static void _V0vanity_V0core_V20_k112(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k112" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k112, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k112, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 5 0) (bruijn ##k.158 4 0) (bruijn ##x.160 1 0) (bruijn ##x.161 0 0))
    V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      upenv->up->up->up->vars[0],
      upenv->vars[0],
      _var0);
 }
}
static void _V0vanity_V0core_V20_k111(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k111" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k111, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k111, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn cdr 6 46) (close _V0vanity_V0core_V20_k112) (bruijn bs 5 2))
    V_CALL(VGetArg(upenv, 6-1, 46), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k112, env)}),
      VGetArg(upenv, 5-1, 2));
 }
}
static void _V0vanity_V0core_V20_k110(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k110" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k110, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k110, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn min 5 43) (close _V0vanity_V0core_V20_k111) (bruijn a 4 1) (bruijn ##x.162 0 0))
    V_CALL(VGetArg(upenv, 5-1, 43), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k111, env)}),
      upenv->up->up->up->vars[1],
      _var0);
 }
}
static void _V0vanity_V0core_V20_k109(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k109" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k109, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k109, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.159 0 0) ((bruijn ##k.158 1 0) (bruijn ret 1 1)) ((bruijn car 4 45) (close _V0vanity_V0core_V20_k110) (bruijn bs 3 2)))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->vars[0], runtime,
      upenv->vars[1]);
} else {
    V_CALL(upenv->up->up->up->vars[45], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k110, env)}),
      upenv->up->up->vars[2]);
}
 }
}
static void _V0vanity_V0core_V20_lambda31(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_lambda31" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0vanity_V0core_V20_lambda31, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_lambda31, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn null? 3 0) (close _V0vanity_V0core_V20_k109) (bruijn bs 2 2))
    V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k109, env)}),
      upenv->up->vars[2]);
 }
}
__attribute__((used)) static void _V20CaseError__V0vanity_V0core_V20_lambda30(VRuntime * runtime, VEnv * upenv, int argc, ...) {
 // (_V0vanity_V0core_V20_lambda30 #t (2 ((bruijn ##k.149 0 0) (bruijn a 0 1))) (3 ((bruijn < 1 21) (close _V0vanity_V0core_V20_k105) (bruijn a 0 1) (bruijn b 0 2))) (4 ((bruijn min 1 43) (close _V0vanity_V0core_V20_k106) (bruijn a 0 1) (bruijn b 0 2))) (5 ((bruijn min 1 43) (close _V0vanity_V0core_V20_k107) (bruijn a 0 1) (bruijn b 0 2))) (2 + (letrec 1 ((close _V0vanity_V0core_V20_lambda31)) ((bruijn loop 0 0) (bruijn ##k.157 1 0) (bruijn a 1 1) (bruijn bs 1 2)))))
 VError("Not enough arguments to _V0vanity_V0core_V20_lambda30, got ~D~N"
 "-- expected 2~N"
 "-- expected 3~N"
 "-- expected 4~N"
 "-- expected 5~N"
 "-- expected 2 or more~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V0vanity_V0core_V20_lambda30(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V20Case0__V0vanity_V0core_V20_lambda30" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case0__V0vanity_V0core_V20_lambda30, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##k.149 0 0) (bruijn a 0 1))
    V_CALL(_var0, runtime,
      _var1);
 }
}
__attribute__((used)) static void _V20Case1__V0vanity_V0core_V20_lambda30(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V20Case1__V0vanity_V0core_V20_lambda30" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case1__V0vanity_V0core_V20_lambda30, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn < 1 21) (close _V0vanity_V0core_V20_k105) (bruijn a 0 1) (bruijn b 0 2))
    V_CALL(upenv->vars[21], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k105, env)}),
      _var1,
      _var2);
 }
}
__attribute__((used)) static void _V20Case2__V0vanity_V0core_V20_lambda30(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V20Case2__V0vanity_V0core_V20_lambda30" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case2__V0vanity_V0core_V20_lambda30, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // ((bruijn min 1 43) (close _V0vanity_V0core_V20_k106) (bruijn a 0 1) (bruijn b 0 2))
    V_CALL(upenv->vars[43], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k106, env)}),
      _var1,
      _var2);
 }
}
__attribute__((used)) static void _V20Case3__V0vanity_V0core_V20_lambda30(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4) {
 static VDebugInfo dbg = { "_V20Case3__V0vanity_V0core_V20_lambda30" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case3__V0vanity_V0core_V20_lambda30, runtime, upenv, 5, argc, _var0, _var1, _var2, _var3, _var4) {
  struct { VEnv env; VWORD argv[5]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 5, 5, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  env->vars[4] = _var4;
  // ((bruijn min 1 43) (close _V0vanity_V0core_V20_k107) (bruijn a 0 1) (bruijn b 0 2))
    V_CALL(upenv->vars[43], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k107, env)}),
      _var1,
      _var2);
 }
}
__attribute__((used)) static void _V20Case4__V0vanity_V0core_V20_lambda30(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, ...) {
 static VDebugInfo dbg = { "_V20Case4__V0vanity_V0core_V20_lambda30" };
 VRecordCall2(runtime, &dbg);
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 2, argc, _var1);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case4__V0vanity_V0core_V20_lambda30, runtime, upenv, 2, argc, _var0, _var1, _varargs) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _varargs;
  // (letrec 1 ((close _V0vanity_V0core_V20_lambda31)) ((bruijn loop 0 0) (bruijn ##k.157 1 0) (bruijn a 1 1) (bruijn bs 1 2)))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_lambda31, env)});
    V_CALL(env->vars[0], runtime,
      upenv->vars[0],
      upenv->vars[1],
      upenv->vars[2]);
    }
 }
}
void _V0vanity_V0core_V20_lambda30(VRuntime * runtime, VEnv * upenv, int argc, ...);
asm(
".intel_syntax noprefix\n"
#ifdef __linux__
".type _V0vanity_V0core_V20_lambda30, @function\n"
#endif
"_V0vanity_V0core_V20_lambda30:\n"
"    cmp " ARGC_REG ", 2\n"
"    je _V20Case0__V0vanity_V0core_V20_lambda30\n"
"    cmp " ARGC_REG ", 3\n"
"    je _V20Case1__V0vanity_V0core_V20_lambda30\n"
"    cmp " ARGC_REG ", 4\n"
"    je _V20Case2__V0vanity_V0core_V20_lambda30\n"
"    cmp " ARGC_REG ", 5\n"
"    je _V20Case3__V0vanity_V0core_V20_lambda30\n"
"    cmp " ARGC_REG ", 2\n"
"    jge _V20Case4__V0vanity_V0core_V20_lambda30\n"
"    jmp _V20CaseError__V0vanity_V0core_V20_lambda30\n"
);
static void _V0vanity_V0core_V20_lambda32(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_lambda32" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0vanity_V0core_V20_lambda32, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_lambda32, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##k.163 0 0) (##inline ##vcore.car (##inline ##vcore.car (bruijn x 0 1))))
    V_CALL(_var0, runtime,
      VInlineCar(
        VInlineCar(
        _var1)));
 }
}
static void _V0vanity_V0core_V20_lambda33(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_lambda33" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0vanity_V0core_V20_lambda33, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_lambda33, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##k.165 0 0) (##inline ##vcore.car (##inline ##vcore.cdr (bruijn x 0 1))))
    V_CALL(_var0, runtime,
      VInlineCar(
        VInlineCdr(
        _var1)));
 }
}
static void _V0vanity_V0core_V20_lambda34(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_lambda34" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0vanity_V0core_V20_lambda34, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_lambda34, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##k.167 0 0) (##inline ##vcore.cdr (##inline ##vcore.car (bruijn x 0 1))))
    V_CALL(_var0, runtime,
      VInlineCdr(
        VInlineCar(
        _var1)));
 }
}
static void _V0vanity_V0core_V20_lambda35(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_lambda35" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0vanity_V0core_V20_lambda35, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_lambda35, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##k.169 0 0) (##inline ##vcore.cdr (##inline ##vcore.cdr (bruijn x 0 1))))
    V_CALL(_var0, runtime,
      VInlineCdr(
        VInlineCdr(
        _var1)));
 }
}
static void _V0vanity_V0core_V20_lambda36(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_lambda36" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0vanity_V0core_V20_lambda36, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_lambda36, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##k.171 0 0) (##inline ##vcore.car (##inline ##vcore.car (##inline ##vcore.car (bruijn x 0 1)))))
    V_CALL(_var0, runtime,
      VInlineCar(
        VInlineCar(
        VInlineCar(
        _var1))));
 }
}
static void _V0vanity_V0core_V20_lambda37(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_lambda37" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0vanity_V0core_V20_lambda37, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_lambda37, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##k.174 0 0) (##inline ##vcore.car (##inline ##vcore.car (##inline ##vcore.cdr (bruijn x 0 1)))))
    V_CALL(_var0, runtime,
      VInlineCar(
        VInlineCar(
        VInlineCdr(
        _var1))));
 }
}
static void _V0vanity_V0core_V20_lambda38(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_lambda38" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0vanity_V0core_V20_lambda38, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_lambda38, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##k.177 0 0) (##inline ##vcore.car (##inline ##vcore.cdr (##inline ##vcore.car (bruijn x 0 1)))))
    V_CALL(_var0, runtime,
      VInlineCar(
        VInlineCdr(
        VInlineCar(
        _var1))));
 }
}
static void _V0vanity_V0core_V20_lambda39(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_lambda39" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0vanity_V0core_V20_lambda39, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_lambda39, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##k.180 0 0) (##inline ##vcore.car (##inline ##vcore.cdr (##inline ##vcore.cdr (bruijn x 0 1)))))
    V_CALL(_var0, runtime,
      VInlineCar(
        VInlineCdr(
        VInlineCdr(
        _var1))));
 }
}
static void _V0vanity_V0core_V20_lambda40(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_lambda40" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0vanity_V0core_V20_lambda40, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_lambda40, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##k.183 0 0) (##inline ##vcore.cdr (##inline ##vcore.car (##inline ##vcore.car (bruijn x 0 1)))))
    V_CALL(_var0, runtime,
      VInlineCdr(
        VInlineCar(
        VInlineCar(
        _var1))));
 }
}
static void _V0vanity_V0core_V20_lambda41(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_lambda41" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0vanity_V0core_V20_lambda41, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_lambda41, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##k.186 0 0) (##inline ##vcore.cdr (##inline ##vcore.car (##inline ##vcore.cdr (bruijn x 0 1)))))
    V_CALL(_var0, runtime,
      VInlineCdr(
        VInlineCar(
        VInlineCdr(
        _var1))));
 }
}
static void _V0vanity_V0core_V20_lambda42(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_lambda42" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0vanity_V0core_V20_lambda42, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_lambda42, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##k.189 0 0) (##inline ##vcore.cdr (##inline ##vcore.cdr (##inline ##vcore.car (bruijn x 0 1)))))
    V_CALL(_var0, runtime,
      VInlineCdr(
        VInlineCdr(
        VInlineCar(
        _var1))));
 }
}
static void _V0vanity_V0core_V20_lambda43(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_lambda43" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0vanity_V0core_V20_lambda43, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_lambda43, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##k.192 0 0) (##inline ##vcore.cdr (##inline ##vcore.cdr (##inline ##vcore.cdr (bruijn x 0 1)))))
    V_CALL(_var0, runtime,
      VInlineCdr(
        VInlineCdr(
        VInlineCdr(
        _var1))));
 }
}
static void _V0vanity_V0core_V20_lambda44(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_lambda44" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0vanity_V0core_V20_lambda44, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_lambda44, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##k.195 0 0) (##inline ##vcore.car (##inline ##vcore.car (##inline ##vcore.car (##inline ##vcore.car (bruijn x 0 1))))))
    V_CALL(_var0, runtime,
      VInlineCar(
        VInlineCar(
        VInlineCar(
        VInlineCar(
        _var1)))));
 }
}
static void _V0vanity_V0core_V20_lambda45(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_lambda45" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0vanity_V0core_V20_lambda45, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_lambda45, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##k.199 0 0) (##inline ##vcore.car (##inline ##vcore.car (##inline ##vcore.car (##inline ##vcore.cdr (bruijn x 0 1))))))
    V_CALL(_var0, runtime,
      VInlineCar(
        VInlineCar(
        VInlineCar(
        VInlineCdr(
        _var1)))));
 }
}
static void _V0vanity_V0core_V20_lambda46(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_lambda46" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0vanity_V0core_V20_lambda46, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_lambda46, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##k.203 0 0) (##inline ##vcore.car (##inline ##vcore.car (##inline ##vcore.cdr (##inline ##vcore.car (bruijn x 0 1))))))
    V_CALL(_var0, runtime,
      VInlineCar(
        VInlineCar(
        VInlineCdr(
        VInlineCar(
        _var1)))));
 }
}
static void _V0vanity_V0core_V20_lambda47(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_lambda47" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0vanity_V0core_V20_lambda47, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_lambda47, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##k.207 0 0) (##inline ##vcore.car (##inline ##vcore.car (##inline ##vcore.cdr (##inline ##vcore.cdr (bruijn x 0 1))))))
    V_CALL(_var0, runtime,
      VInlineCar(
        VInlineCar(
        VInlineCdr(
        VInlineCdr(
        _var1)))));
 }
}
static void _V0vanity_V0core_V20_lambda48(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_lambda48" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0vanity_V0core_V20_lambda48, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_lambda48, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##k.211 0 0) (##inline ##vcore.car (##inline ##vcore.cdr (##inline ##vcore.car (##inline ##vcore.car (bruijn x 0 1))))))
    V_CALL(_var0, runtime,
      VInlineCar(
        VInlineCdr(
        VInlineCar(
        VInlineCar(
        _var1)))));
 }
}
static void _V0vanity_V0core_V20_lambda49(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_lambda49" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0vanity_V0core_V20_lambda49, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_lambda49, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##k.215 0 0) (##inline ##vcore.car (##inline ##vcore.cdr (##inline ##vcore.car (##inline ##vcore.cdr (bruijn x 0 1))))))
    V_CALL(_var0, runtime,
      VInlineCar(
        VInlineCdr(
        VInlineCar(
        VInlineCdr(
        _var1)))));
 }
}
static void _V0vanity_V0core_V20_lambda50(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_lambda50" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0vanity_V0core_V20_lambda50, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_lambda50, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##k.219 0 0) (##inline ##vcore.car (##inline ##vcore.cdr (##inline ##vcore.cdr (##inline ##vcore.car (bruijn x 0 1))))))
    V_CALL(_var0, runtime,
      VInlineCar(
        VInlineCdr(
        VInlineCdr(
        VInlineCar(
        _var1)))));
 }
}
static void _V0vanity_V0core_V20_lambda51(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_lambda51" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0vanity_V0core_V20_lambda51, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_lambda51, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##k.223 0 0) (##inline ##vcore.car (##inline ##vcore.cdr (##inline ##vcore.cdr (##inline ##vcore.cdr (bruijn x 0 1))))))
    V_CALL(_var0, runtime,
      VInlineCar(
        VInlineCdr(
        VInlineCdr(
        VInlineCdr(
        _var1)))));
 }
}
static void _V0vanity_V0core_V20_lambda52(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_lambda52" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0vanity_V0core_V20_lambda52, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_lambda52, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##k.227 0 0) (##inline ##vcore.cdr (##inline ##vcore.car (##inline ##vcore.car (##inline ##vcore.car (bruijn x 0 1))))))
    V_CALL(_var0, runtime,
      VInlineCdr(
        VInlineCar(
        VInlineCar(
        VInlineCar(
        _var1)))));
 }
}
static void _V0vanity_V0core_V20_lambda53(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_lambda53" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0vanity_V0core_V20_lambda53, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_lambda53, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##k.231 0 0) (##inline ##vcore.cdr (##inline ##vcore.car (##inline ##vcore.car (##inline ##vcore.cdr (bruijn x 0 1))))))
    V_CALL(_var0, runtime,
      VInlineCdr(
        VInlineCar(
        VInlineCar(
        VInlineCdr(
        _var1)))));
 }
}
static void _V0vanity_V0core_V20_lambda54(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_lambda54" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0vanity_V0core_V20_lambda54, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_lambda54, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##k.235 0 0) (##inline ##vcore.cdr (##inline ##vcore.car (##inline ##vcore.cdr (##inline ##vcore.car (bruijn x 0 1))))))
    V_CALL(_var0, runtime,
      VInlineCdr(
        VInlineCar(
        VInlineCdr(
        VInlineCar(
        _var1)))));
 }
}
static void _V0vanity_V0core_V20_lambda55(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_lambda55" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0vanity_V0core_V20_lambda55, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_lambda55, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##k.239 0 0) (##inline ##vcore.cdr (##inline ##vcore.car (##inline ##vcore.cdr (##inline ##vcore.cdr (bruijn x 0 1))))))
    V_CALL(_var0, runtime,
      VInlineCdr(
        VInlineCar(
        VInlineCdr(
        VInlineCdr(
        _var1)))));
 }
}
static void _V0vanity_V0core_V20_lambda56(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_lambda56" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0vanity_V0core_V20_lambda56, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_lambda56, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##k.243 0 0) (##inline ##vcore.cdr (##inline ##vcore.cdr (##inline ##vcore.car (##inline ##vcore.car (bruijn x 0 1))))))
    V_CALL(_var0, runtime,
      VInlineCdr(
        VInlineCdr(
        VInlineCar(
        VInlineCar(
        _var1)))));
 }
}
static void _V0vanity_V0core_V20_lambda57(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_lambda57" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0vanity_V0core_V20_lambda57, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_lambda57, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##k.247 0 0) (##inline ##vcore.cdr (##inline ##vcore.cdr (##inline ##vcore.car (##inline ##vcore.cdr (bruijn x 0 1))))))
    V_CALL(_var0, runtime,
      VInlineCdr(
        VInlineCdr(
        VInlineCar(
        VInlineCdr(
        _var1)))));
 }
}
static void _V0vanity_V0core_V20_lambda58(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_lambda58" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0vanity_V0core_V20_lambda58, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_lambda58, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##k.251 0 0) (##inline ##vcore.cdr (##inline ##vcore.cdr (##inline ##vcore.cdr (##inline ##vcore.car (bruijn x 0 1))))))
    V_CALL(_var0, runtime,
      VInlineCdr(
        VInlineCdr(
        VInlineCdr(
        VInlineCar(
        _var1)))));
 }
}
static void _V0vanity_V0core_V20_lambda59(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_lambda59" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0vanity_V0core_V20_lambda59, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_lambda59, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##k.255 0 0) (##inline ##vcore.cdr (##inline ##vcore.cdr (##inline ##vcore.cdr (##inline ##vcore.cdr (bruijn x 0 1))))))
    V_CALL(_var0, runtime,
      VInlineCdr(
        VInlineCdr(
        VInlineCdr(
        VInlineCdr(
        _var1)))));
 }
}
static void _V0vanity_V0core_V20_lambda60(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, ...) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_lambda60" };
 VRecordCall2(runtime, &dbg);
 if(argc < 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_lambda60, got ~D~N"
  "-- expected 1 or more~N"
  , argc);
 }
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 1, argc, _var0);
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_lambda60, runtime, upenv, 1, argc, _var0, _varargs) {
  // ((bruijn ##k.259 0 0) (bruijn args 0 1))
    V_CALL(_var0, runtime,
      _varargs);
 }
}
static void _V0vanity_V0core_V20_k115(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k115" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k115, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k115, runtime, upenv, 1, argc, _var0) {
  // ((bruijn list? 4 78) (bruijn ##k.260 3 0) (bruijn ##x.263 0 0))
    V_CALL(upenv->up->up->up->vars[78], runtime,
      upenv->up->up->vars[0],
      _var0);
 }
}
static void _V0vanity_V0core_V20_k114(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k114" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k114, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k114, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.262 0 0) ((bruijn cdr 3 46) (close _V0vanity_V0core_V20_k115) (bruijn lst 2 1)) ((bruijn ##k.260 2 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->up->up->vars[46], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k115, env)}),
      upenv->up->vars[1]);
} else {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0core_V20_k113(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k113" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k113, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k113, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.261 0 0) ((bruijn ##k.260 1 0) (bruijn ##p.261 0 0)) ((bruijn pair? 2 3) (close _V0vanity_V0core_V20_k114) (bruijn lst 1 1)))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->vars[0], runtime,
      _var0);
} else {
    V_CALL(upenv->up->vars[3], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k114, env)}),
      upenv->vars[1]);
}
 }
}
static void _V0vanity_V0core_V20_lambda61(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_lambda61" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0vanity_V0core_V20_lambda61, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_lambda61, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn null? 1 0) (close _V0vanity_V0core_V20_k113) (bruijn lst 0 1))
    V_CALL(upenv->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k113, env)}),
      _var1);
 }
}
static void _V0vanity_V0core_V20_k116(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k116" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k116, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k116, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 2 0) (bruijn ##k.265 1 0) (##inline ##vcore.cdr (bruijn lst 1 1)) (bruijn ##x.268 0 0))
    V_CALL(upenv->up->vars[0], runtime,
      upenv->vars[0],
      VInlineCdr(
        upenv->vars[1]),
      _var0);
 }
}
static void _V0vanity_V0core_V20_lambda63(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_lambda63" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0vanity_V0core_V20_lambda63, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_lambda63, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // (if (##inline ##vcore.null? (bruijn lst 0 1)) ((bruijn ##k.265 0 0) (bruijn i 0 2)) ((bruijn + 3 34) (close _V0vanity_V0core_V20_k116) (bruijn i 0 2) 1))
if(VDecodeBool(
VInlineNullP(
        _var1))) {
    V_CALL(_var0, runtime,
      _var2);
} else {
    V_CALL(upenv->up->up->vars[34], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k116, env)}),
      _var2,
      VEncodeInt(1l));
}
 }
}
static void _V0vanity_V0core_V20_lambda62(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_lambda62" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0vanity_V0core_V20_lambda62, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_lambda62, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (letrec 1 ((close _V0vanity_V0core_V20_lambda63)) ((bruijn loop 0 0) (bruijn ##k.264 1 0) (bruijn lst 1 1) 0))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_lambda63, env)});
    V_CALL(env->vars[0], runtime,
      upenv->vars[0],
      upenv->vars[1],
      VEncodeInt(0l));
    }
 }
}
static void _V0vanity_V0core_V20_k118(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k118" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k118, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k118, runtime, upenv, 1, argc, _var0) {
  // ((bruijn list-tail 3 80) (bruijn ##k.269 2 0) (##inline ##vcore.cdr (bruijn lst 2 1)) (bruijn ##x.272 0 0))
    V_CALL(upenv->up->up->vars[80], runtime,
      upenv->up->vars[0],
      VInlineCdr(
        upenv->up->vars[1]),
      _var0);
 }
}
static void _V0vanity_V0core_V20_k117(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k117" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k117, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k117, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.270 0 0) ((bruijn ##k.269 1 0) (bruijn lst 1 1)) ((bruijn - 2 35) (close _V0vanity_V0core_V20_k118) (bruijn x 1 2) 1))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->vars[0], runtime,
      upenv->vars[1]);
} else {
    V_CALL(upenv->up->vars[35], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k118, env)}),
      upenv->vars[2],
      VEncodeInt(1l));
}
 }
}
static void _V0vanity_V0core_V20_lambda64(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_lambda64" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0vanity_V0core_V20_lambda64, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_lambda64, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn eq? 1 14) (close _V0vanity_V0core_V20_k117) (bruijn x 0 2) 0)
    V_CALL(upenv->vars[14], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k117, env)}),
      _var2,
      VEncodeInt(0l));
 }
}
static void _V0vanity_V0core_V20_k120(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k120" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k120, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k120, runtime, upenv, 1, argc, _var0) {
  // ((bruijn list-ref 3 81) (bruijn ##k.273 2 0) (##inline ##vcore.cdr (bruijn lst 2 1)) (bruijn ##x.276 0 0))
    V_CALL(upenv->up->up->vars[81], runtime,
      upenv->up->vars[0],
      VInlineCdr(
        upenv->up->vars[1]),
      _var0);
 }
}
static void _V0vanity_V0core_V20_k119(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k119" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k119, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k119, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.274 0 0) ((bruijn ##k.273 1 0) (##inline ##vcore.car (bruijn lst 1 1))) ((bruijn - 2 35) (close _V0vanity_V0core_V20_k120) (bruijn x 1 2) 1))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->vars[0], runtime,
      VInlineCar(
        upenv->vars[1]));
} else {
    V_CALL(upenv->up->vars[35], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k120, env)}),
      upenv->vars[2],
      VEncodeInt(1l));
}
 }
}
static void _V0vanity_V0core_V20_lambda65(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_lambda65" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0vanity_V0core_V20_lambda65, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_lambda65, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn eq? 1 14) (close _V0vanity_V0core_V20_k119) (bruijn x 0 2) 0)
    V_CALL(upenv->vars[14], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k119, env)}),
      _var2,
      VEncodeInt(0l));
 }
}
static void _V0vanity_V0core_V20_k121(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k121" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k121, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k121, runtime, upenv, 1, argc, _var0) {
  // ((bruijn set-car! 2 47) (bruijn ##k.277 1 0) (bruijn ##x.278 0 0) (bruijn val 1 3))
    V_CALL(upenv->up->vars[47], runtime,
      upenv->vars[0],
      _var0,
      upenv->vars[3]);
 }
}
static void _V0vanity_V0core_V20_lambda66(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_lambda66" };
 VRecordCall2(runtime, &dbg);
 if(argc != 4) {
  VError("Not enough arguments to _V0vanity_V0core_V20_lambda66, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_lambda66, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // ((bruijn list-tail 1 80) (close _V0vanity_V0core_V20_k121) (bruijn lst 0 1) (bruijn i 0 2))
    V_CALL(upenv->vars[80], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k121, env)}),
      _var1,
      _var2);
 }
}
static void _V0vanity_V0core_V20_k125(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k125" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k125, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k125, runtime, upenv, 1, argc, _var0) {
  // ((bruijn cons 5 44) (bruijn ##k.279 4 0) (bruijn ##x.281 2 0) (bruijn ##x.282 0 0))
    V_CALL(VGetArg(upenv, 5-1, 44), runtime,
      upenv->up->up->up->vars[0],
      upenv->up->vars[0],
      _var0);
 }
}
static void _V0vanity_V0core_V20_k124(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k124" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k124, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k124, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn list-copy 4 83) (close _V0vanity_V0core_V20_k125) (bruijn ##x.283 0 0))
    V_CALL(upenv->up->up->up->vars[83], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k125, env)}),
      _var0);
 }
}
static void _V0vanity_V0core_V20_k123(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k123" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k123, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k123, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn cdr 3 46) (close _V0vanity_V0core_V20_k124) (bruijn lst 2 1))
    V_CALL(upenv->up->up->vars[46], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k124, env)}),
      upenv->up->vars[1]);
 }
}
static void _V0vanity_V0core_V20_k122(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k122" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k122, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k122, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.280 0 0) ((bruijn ##k.279 1 0) '()) ((bruijn car 2 45) (close _V0vanity_V0core_V20_k123) (bruijn lst 1 1)))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->vars[0], runtime,
      VNULL);
} else {
    V_CALL(upenv->up->vars[45], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k123, env)}),
      upenv->vars[1]);
}
 }
}
static void _V0vanity_V0core_V20_lambda67(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_lambda67" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0vanity_V0core_V20_lambda67, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_lambda67, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn null? 1 0) (close _V0vanity_V0core_V20_k122) (bruijn lst 0 1))
    V_CALL(upenv->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k122, env)}),
      _var1);
 }
}
static void _V0vanity_V0core_V20_k128(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k128" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k128, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k128, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 4 0) (bruijn ##k.286 3 0) (bruijn ##x.288 1 0) (bruijn ##x.289 0 0))
    V_CALL(upenv->up->up->up->vars[0], runtime,
      upenv->up->up->vars[0],
      upenv->vars[0],
      _var0);
 }
}
static void _V0vanity_V0core_V20_k127(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k127" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k127, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k127, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn cons 5 44) (close _V0vanity_V0core_V20_k128) (bruijn val 4 2) (bruijn ret 2 2))
    V_CALL(VGetArg(upenv, 5-1, 44), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k128, env)}),
      upenv->up->up->up->vars[2],
      upenv->up->vars[2]);
 }
}
static void _V0vanity_V0core_V20_k126(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k126" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k126, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k126, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.287 0 0) ((bruijn ##k.286 1 0) (bruijn ret 1 2)) ((bruijn - 4 35) (close _V0vanity_V0core_V20_k127) (bruijn k 1 1) 1))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->vars[0], runtime,
      upenv->vars[2]);
} else {
    V_CALL(upenv->up->up->up->vars[35], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k127, env)}),
      upenv->vars[1],
      VEncodeInt(1l));
}
 }
}
static void _V0vanity_V0core_V20_lambda69(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_lambda69" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0vanity_V0core_V20_lambda69, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_lambda69, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn eq? 3 14) (close _V0vanity_V0core_V20_k126) (bruijn k 0 1) 0)
    V_CALL(upenv->up->up->vars[14], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k126, env)}),
      _var1,
      VEncodeInt(0l));
 }
}
__attribute__((used)) static void _V20CaseError__V0vanity_V0core_V20_lambda68(VRuntime * runtime, VEnv * upenv, int argc, ...) {
 // (_V0vanity_V0core_V20_lambda68 #t (2 ((bruijn make-list 1 84) (bruijn ##k.284 0 0) (bruijn k 0 1) #f)) (3 (letrec 1 ((close _V0vanity_V0core_V20_lambda69)) ((bruijn loop 0 0) (bruijn ##k.285 1 0) (bruijn k 1 1) '()))))
 VError("Not enough arguments to _V0vanity_V0core_V20_lambda68, got ~D~N"
 "-- expected 2~N"
 "-- expected 3~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V0vanity_V0core_V20_lambda68(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V20Case0__V0vanity_V0core_V20_lambda68" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case0__V0vanity_V0core_V20_lambda68, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn make-list 1 84) (bruijn ##k.284 0 0) (bruijn k 0 1) #f)
    V_CALL(upenv->vars[84], runtime,
      _var0,
      _var1,
      VEncodeBool(false));
 }
}
__attribute__((used)) static void _V20Case1__V0vanity_V0core_V20_lambda68(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V20Case1__V0vanity_V0core_V20_lambda68" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case1__V0vanity_V0core_V20_lambda68, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // (letrec 1 ((close _V0vanity_V0core_V20_lambda69)) ((bruijn loop 0 0) (bruijn ##k.285 1 0) (bruijn k 1 1) '()))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_lambda69, env)});
    V_CALL(env->vars[0], runtime,
      upenv->vars[0],
      upenv->vars[1],
      VNULL);
    }
 }
}
void _V0vanity_V0core_V20_lambda68(VRuntime * runtime, VEnv * upenv, int argc, ...);
asm(
".intel_syntax noprefix\n"
#ifdef __linux__
".type _V0vanity_V0core_V20_lambda68, @function\n"
#endif
"_V0vanity_V0core_V20_lambda68:\n"
"    cmp " ARGC_REG ", 2\n"
"    je _V20Case0__V0vanity_V0core_V20_lambda68\n"
"    cmp " ARGC_REG ", 3\n"
"    je _V20Case1__V0vanity_V0core_V20_lambda68\n"
"    jmp _V20CaseError__V0vanity_V0core_V20_lambda68\n"
);
static void _V0vanity_V0core_V20_k130(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k130" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k130, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k130, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##k.291 2 0) (##inline ##vcore.cons (bruijn ##x.293 1 0) (bruijn ##x.294 0 0)))
    V_CALL(upenv->up->vars[0], runtime,
      VInlineCons(
        upenv->vars[0],
        _var0));
 }
}
static void _V0vanity_V0core_V20_k129(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k129" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k129, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k129, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn loop 2 0) (close _V0vanity_V0core_V20_k130) (##inline ##vcore.cdr (bruijn xs 1 1)))
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k130, env)}),
      VInlineCdr(
        upenv->vars[1]));
 }
}
static void _V0vanity_V0core_V20_lambda71(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_lambda71" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0vanity_V0core_V20_lambda71, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_lambda71, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##vcore.null? (bruijn xs 0 1)) ((bruijn ##k.291 0 0) '()) ((bruijn f 2 1) (close _V0vanity_V0core_V20_k129) (##inline ##vcore.car (bruijn xs 0 1))))
if(VDecodeBool(
VInlineNullP(
        _var1))) {
    V_CALL(_var0, runtime,
      VNULL);
} else {
    V_CALL(upenv->up->vars[1], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k129, env)}),
      VInlineCar(
        _var1));
}
 }
}
static void _V0vanity_V0core_V20_k132(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k132" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k132, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k132, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##k.298 2 0) (##inline ##vcore.cons (bruijn ##x.300 1 0) (bruijn ##x.301 0 0)))
    V_CALL(upenv->up->vars[0], runtime,
      VInlineCons(
        upenv->vars[0],
        _var0));
 }
}
static void _V0vanity_V0core_V20_k131(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k131" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k131, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k131, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn loop 2 0) (close _V0vanity_V0core_V20_k132) (##inline ##vcore.cdr (bruijn xs 1 1)) (##inline ##vcore.cdr (bruijn ys 1 2)))
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k132, env)}),
      VInlineCdr(
        upenv->vars[1]),
      VInlineCdr(
        upenv->vars[2]));
 }
}
static void _V0vanity_V0core_V20_lambda72(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_lambda72" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0vanity_V0core_V20_lambda72, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_lambda72, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // (if (##inline ##vcore.null? (bruijn xs 0 1)) ((bruijn ##k.298 0 0) '()) ((bruijn f 2 1) (close _V0vanity_V0core_V20_k131) (##inline ##vcore.car (bruijn xs 0 1)) (##inline ##vcore.car (bruijn ys 0 2))))
if(VDecodeBool(
VInlineNullP(
        _var1))) {
    V_CALL(_var0, runtime,
      VNULL);
} else {
    V_CALL(upenv->up->vars[1], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k131, env)}),
      VInlineCar(
        _var1),
      VInlineCar(
        _var2));
}
 }
}
static void _V0vanity_V0core_V20_k134(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k134" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k134, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k134, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##k.307 2 0) (##inline ##vcore.cons (bruijn ##x.309 1 0) (bruijn ##x.310 0 0)))
    V_CALL(upenv->up->vars[0], runtime,
      VInlineCons(
        upenv->vars[0],
        _var0));
 }
}
static void _V0vanity_V0core_V20_k133(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k133" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k133, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k133, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn loop 2 0) (close _V0vanity_V0core_V20_k134) (##inline ##vcore.cdr (bruijn xs 1 1)) (##inline ##vcore.cdr (bruijn ys 1 2)) (##inline ##vcore.cdr (bruijn zs 1 3)))
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k134, env)}),
      VInlineCdr(
        upenv->vars[1]),
      VInlineCdr(
        upenv->vars[2]),
      VInlineCdr(
        upenv->vars[3]));
 }
}
static void _V0vanity_V0core_V20_lambda73(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_lambda73" };
 VRecordCall2(runtime, &dbg);
 if(argc != 4) {
  VError("Not enough arguments to _V0vanity_V0core_V20_lambda73, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_lambda73, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // (if (##inline ##vcore.null? (bruijn xs 0 1)) ((bruijn ##k.307 0 0) '()) ((bruijn f 2 1) (close _V0vanity_V0core_V20_k133) (##inline ##vcore.car (bruijn xs 0 1)) (##inline ##vcore.car (bruijn ys 0 2)) (##inline ##vcore.car (bruijn zs 0 3))))
if(VDecodeBool(
VInlineNullP(
        _var1))) {
    V_CALL(_var0, runtime,
      VNULL);
} else {
    V_CALL(upenv->up->vars[1], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k133, env)}),
      VInlineCar(
        _var1),
      VInlineCar(
        _var2),
      VInlineCar(
        _var3));
}
 }
}
static void _V0vanity_V0core_V20_k138(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k138" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k138, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k138, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##k.318 4 0) (##inline ##vcore.cons (bruijn ##x.320 2 0) (bruijn ##x.321 0 0)))
    V_CALL(upenv->up->up->up->vars[0], runtime,
      VInlineCons(
        upenv->up->vars[0],
        _var0));
 }
}
static void _V0vanity_V0core_V20_k137(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k137" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k137, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k137, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn loop 4 0) (close _V0vanity_V0core_V20_k138) (bruijn ##x.322 0 0))
    V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k138, env)}),
      _var0);
 }
}
static void _V0vanity_V0core_V20_k136(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k136" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k136, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k136, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn map 5 85) (close _V0vanity_V0core_V20_k137) (##intrinsic ##vcore.cdr) (bruijn lsts 2 1))
    V_CALL(VGetArg(upenv, 5-1, 85), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k137, env)}),
      _V40_V10vcore_Dcdr,
      upenv->up->vars[1]);
 }
}
static void _V0vanity_V0core_V20_k135(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k135" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k135, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k135, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn apply 4 148) (close _V0vanity_V0core_V20_k136) (bruijn f 3 1) (bruijn ##x.323 0 0))
    V_CALL(upenv->up->up->up->vars[148], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k136, env)}),
      upenv->up->up->vars[1],
      _var0);
 }
}
static void _V0vanity_V0core_V20_lambda74(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_lambda74" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0vanity_V0core_V20_lambda74, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_lambda74, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##vcore.null? (##inline ##vcore.car (bruijn lsts 0 1))) ((bruijn ##k.318 0 0) '()) ((bruijn map 3 85) (close _V0vanity_V0core_V20_k135) (##intrinsic ##vcore.car) (bruijn lsts 0 1)))
if(VDecodeBool(
VInlineNullP(
        VInlineCar(
        _var1)))) {
    V_CALL(_var0, runtime,
      VNULL);
} else {
    V_CALL(upenv->up->up->vars[85], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k135, env)}),
      _V40_V10vcore_Dcar,
      _var1);
}
 }
}
__attribute__((used)) static void _V20CaseError__V0vanity_V0core_V20_lambda70(VRuntime * runtime, VEnv * upenv, int argc, ...) {
 // (_V0vanity_V0core_V20_lambda70 #t (3 (letrec 1 ((close _V0vanity_V0core_V20_lambda71)) ((bruijn loop 0 0) (bruijn ##k.290 1 0) (bruijn xs 1 2)))) (4 (letrec 1 ((close _V0vanity_V0core_V20_lambda72)) ((bruijn loop 0 0) (bruijn ##k.297 1 0) (bruijn xs 1 2) (bruijn ys 1 3)))) (5 (letrec 1 ((close _V0vanity_V0core_V20_lambda73)) ((bruijn loop 0 0) (bruijn ##k.306 1 0) (bruijn xs 1 2) (bruijn ys 1 3) (bruijn zs 1 4)))) (2 + (letrec 1 ((close _V0vanity_V0core_V20_lambda74)) ((bruijn loop 0 0) (bruijn ##k.317 1 0) (bruijn lsts 1 2)))))
 VError("Not enough arguments to _V0vanity_V0core_V20_lambda70, got ~D~N"
 "-- expected 3~N"
 "-- expected 4~N"
 "-- expected 5~N"
 "-- expected 2 or more~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V0vanity_V0core_V20_lambda70(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V20Case0__V0vanity_V0core_V20_lambda70" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case0__V0vanity_V0core_V20_lambda70, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // (letrec 1 ((close _V0vanity_V0core_V20_lambda71)) ((bruijn loop 0 0) (bruijn ##k.290 1 0) (bruijn xs 1 2)))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_lambda71, env)});
    V_CALL(env->vars[0], runtime,
      upenv->vars[0],
      upenv->vars[2]);
    }
 }
}
__attribute__((used)) static void _V20Case1__V0vanity_V0core_V20_lambda70(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V20Case1__V0vanity_V0core_V20_lambda70" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case1__V0vanity_V0core_V20_lambda70, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // (letrec 1 ((close _V0vanity_V0core_V20_lambda72)) ((bruijn loop 0 0) (bruijn ##k.297 1 0) (bruijn xs 1 2) (bruijn ys 1 3)))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_lambda72, env)});
    V_CALL(env->vars[0], runtime,
      upenv->vars[0],
      upenv->vars[2],
      upenv->vars[3]);
    }
 }
}
__attribute__((used)) static void _V20Case2__V0vanity_V0core_V20_lambda70(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4) {
 static VDebugInfo dbg = { "_V20Case2__V0vanity_V0core_V20_lambda70" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case2__V0vanity_V0core_V20_lambda70, runtime, upenv, 5, argc, _var0, _var1, _var2, _var3, _var4) {
  struct { VEnv env; VWORD argv[5]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 5, 5, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  env->vars[4] = _var4;
  // (letrec 1 ((close _V0vanity_V0core_V20_lambda73)) ((bruijn loop 0 0) (bruijn ##k.306 1 0) (bruijn xs 1 2) (bruijn ys 1 3) (bruijn zs 1 4)))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_lambda73, env)});
    V_CALL(env->vars[0], runtime,
      upenv->vars[0],
      upenv->vars[2],
      upenv->vars[3],
      upenv->vars[4]);
    }
 }
}
__attribute__((used)) static void _V20Case3__V0vanity_V0core_V20_lambda70(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, ...) {
 static VDebugInfo dbg = { "_V20Case3__V0vanity_V0core_V20_lambda70" };
 VRecordCall2(runtime, &dbg);
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 2, argc, _var1);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case3__V0vanity_V0core_V20_lambda70, runtime, upenv, 2, argc, _var0, _var1, _varargs) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _varargs;
  // (letrec 1 ((close _V0vanity_V0core_V20_lambda74)) ((bruijn loop 0 0) (bruijn ##k.317 1 0) (bruijn lsts 1 2)))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_lambda74, env)});
    V_CALL(env->vars[0], runtime,
      upenv->vars[0],
      upenv->vars[2]);
    }
 }
}
void _V0vanity_V0core_V20_lambda70(VRuntime * runtime, VEnv * upenv, int argc, ...);
asm(
".intel_syntax noprefix\n"
#ifdef __linux__
".type _V0vanity_V0core_V20_lambda70, @function\n"
#endif
"_V0vanity_V0core_V20_lambda70:\n"
"    cmp " ARGC_REG ", 3\n"
"    je _V20Case0__V0vanity_V0core_V20_lambda70\n"
"    cmp " ARGC_REG ", 4\n"
"    je _V20Case1__V0vanity_V0core_V20_lambda70\n"
"    cmp " ARGC_REG ", 5\n"
"    je _V20Case2__V0vanity_V0core_V20_lambda70\n"
"    cmp " ARGC_REG ", 2\n"
"    jge _V20Case3__V0vanity_V0core_V20_lambda70\n"
"    jmp _V20CaseError__V0vanity_V0core_V20_lambda70\n"
);
static void _V0vanity_V0core_V20_k139(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k139" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k139, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k139, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 2 0) (bruijn ##k.326 1 0) (##inline ##vcore.cdr (bruijn xs 1 1)))
    V_CALL(upenv->up->vars[0], runtime,
      upenv->vars[0],
      VInlineCdr(
        upenv->vars[1]));
 }
}
static void _V0vanity_V0core_V20_lambda76(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_lambda76" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0vanity_V0core_V20_lambda76, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_lambda76, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##vcore.not (##inline ##vcore.null? (bruijn xs 0 1))) ((bruijn f 2 1) (close _V0vanity_V0core_V20_k139) (##inline ##vcore.car (bruijn xs 0 1))) ((bruijn ##k.326 0 0) #f))
if(VDecodeBool(
VInlineNot(
        VInlineNullP(
        _var1)))) {
    V_CALL(upenv->up->vars[1], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k139, env)}),
      VInlineCar(
        _var1));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0core_V20_k140(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k140" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k140, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k140, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 2 0) (bruijn ##k.333 1 0) (##inline ##vcore.cdr (bruijn xs 1 1)) (##inline ##vcore.cdr (bruijn ys 1 2)))
    V_CALL(upenv->up->vars[0], runtime,
      upenv->vars[0],
      VInlineCdr(
        upenv->vars[1]),
      VInlineCdr(
        upenv->vars[2]));
 }
}
static void _V0vanity_V0core_V20_lambda77(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_lambda77" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0vanity_V0core_V20_lambda77, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_lambda77, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // (if (##inline ##vcore.not (##inline ##vcore.null? (bruijn xs 0 1))) ((bruijn f 2 1) (close _V0vanity_V0core_V20_k140) (##inline ##vcore.car (bruijn xs 0 1)) (##inline ##vcore.car (bruijn ys 0 2))) ((bruijn ##k.333 0 0) #f))
if(VDecodeBool(
VInlineNot(
        VInlineNullP(
        _var1)))) {
    V_CALL(upenv->up->vars[1], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k140, env)}),
      VInlineCar(
        _var1),
      VInlineCar(
        _var2));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0core_V20_k141(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k141" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k141, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k141, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 2 0) (bruijn ##k.342 1 0) (##inline ##vcore.cdr (bruijn xs 1 1)) (##inline ##vcore.cdr (bruijn ys 1 2)) (##inline ##vcore.cdr (bruijn zs 1 3)))
    V_CALL(upenv->up->vars[0], runtime,
      upenv->vars[0],
      VInlineCdr(
        upenv->vars[1]),
      VInlineCdr(
        upenv->vars[2]),
      VInlineCdr(
        upenv->vars[3]));
 }
}
static void _V0vanity_V0core_V20_lambda78(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_lambda78" };
 VRecordCall2(runtime, &dbg);
 if(argc != 4) {
  VError("Not enough arguments to _V0vanity_V0core_V20_lambda78, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_lambda78, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // (if (##inline ##vcore.not (##inline ##vcore.null? (bruijn xs 0 1))) ((bruijn f 2 1) (close _V0vanity_V0core_V20_k141) (##inline ##vcore.car (bruijn xs 0 1)) (##inline ##vcore.car (bruijn ys 0 2)) (##inline ##vcore.car (bruijn zs 0 3))) ((bruijn ##k.342 0 0) #f))
if(VDecodeBool(
VInlineNot(
        VInlineNullP(
        _var1)))) {
    V_CALL(upenv->up->vars[1], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k141, env)}),
      VInlineCar(
        _var1),
      VInlineCar(
        _var2),
      VInlineCar(
        _var3));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0core_V20_k144(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k144" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k144, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k144, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 4 0) (bruijn ##k.353 3 0) (bruijn ##x.356 0 0))
    V_CALL(upenv->up->up->up->vars[0], runtime,
      upenv->up->up->vars[0],
      _var0);
 }
}
static void _V0vanity_V0core_V20_k143(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k143" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k143, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k143, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn map 5 85) (close _V0vanity_V0core_V20_k144) (##intrinsic ##vcore.cdr) (bruijn lsts 2 1))
    V_CALL(VGetArg(upenv, 5-1, 85), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k144, env)}),
      _V40_V10vcore_Dcdr,
      upenv->up->vars[1]);
 }
}
static void _V0vanity_V0core_V20_k142(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k142" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k142, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k142, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn apply 4 148) (close _V0vanity_V0core_V20_k143) (bruijn f 3 1) (bruijn ##x.357 0 0))
    V_CALL(upenv->up->up->up->vars[148], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k143, env)}),
      upenv->up->up->vars[1],
      _var0);
 }
}
static void _V0vanity_V0core_V20_lambda79(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_lambda79" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0vanity_V0core_V20_lambda79, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_lambda79, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##vcore.not (##inline ##vcore.null? (##inline ##vcore.car (bruijn lsts 0 1)))) ((bruijn map 3 85) (close _V0vanity_V0core_V20_k142) (##intrinsic ##vcore.car) (bruijn lsts 0 1)) ((bruijn ##k.353 0 0) #f))
if(VDecodeBool(
VInlineNot(
        VInlineNullP(
        VInlineCar(
        _var1))))) {
    V_CALL(upenv->up->up->vars[85], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k142, env)}),
      _V40_V10vcore_Dcar,
      _var1);
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
__attribute__((used)) static void _V20CaseError__V0vanity_V0core_V20_lambda75(VRuntime * runtime, VEnv * upenv, int argc, ...) {
 // (_V0vanity_V0core_V20_lambda75 #t (3 (letrec 1 ((close _V0vanity_V0core_V20_lambda76)) ((bruijn loop 0 0) (bruijn ##k.325 1 0) (bruijn xs 1 2)))) (4 (letrec 1 ((close _V0vanity_V0core_V20_lambda77)) ((bruijn loop 0 0) (bruijn ##k.332 1 0) (bruijn xs 1 2) (bruijn ys 1 3)))) (5 (letrec 1 ((close _V0vanity_V0core_V20_lambda78)) ((bruijn loop 0 0) (bruijn ##k.341 1 0) (bruijn xs 1 2) (bruijn ys 1 3) (bruijn zs 1 4)))) (2 + (letrec 1 ((close _V0vanity_V0core_V20_lambda79)) ((bruijn loop 0 0) (bruijn ##k.352 1 0) (bruijn lsts 1 2)))))
 VError("Not enough arguments to _V0vanity_V0core_V20_lambda75, got ~D~N"
 "-- expected 3~N"
 "-- expected 4~N"
 "-- expected 5~N"
 "-- expected 2 or more~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V0vanity_V0core_V20_lambda75(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V20Case0__V0vanity_V0core_V20_lambda75" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case0__V0vanity_V0core_V20_lambda75, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // (letrec 1 ((close _V0vanity_V0core_V20_lambda76)) ((bruijn loop 0 0) (bruijn ##k.325 1 0) (bruijn xs 1 2)))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_lambda76, env)});
    V_CALL(env->vars[0], runtime,
      upenv->vars[0],
      upenv->vars[2]);
    }
 }
}
__attribute__((used)) static void _V20Case1__V0vanity_V0core_V20_lambda75(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V20Case1__V0vanity_V0core_V20_lambda75" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case1__V0vanity_V0core_V20_lambda75, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // (letrec 1 ((close _V0vanity_V0core_V20_lambda77)) ((bruijn loop 0 0) (bruijn ##k.332 1 0) (bruijn xs 1 2) (bruijn ys 1 3)))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_lambda77, env)});
    V_CALL(env->vars[0], runtime,
      upenv->vars[0],
      upenv->vars[2],
      upenv->vars[3]);
    }
 }
}
__attribute__((used)) static void _V20Case2__V0vanity_V0core_V20_lambda75(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4) {
 static VDebugInfo dbg = { "_V20Case2__V0vanity_V0core_V20_lambda75" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case2__V0vanity_V0core_V20_lambda75, runtime, upenv, 5, argc, _var0, _var1, _var2, _var3, _var4) {
  struct { VEnv env; VWORD argv[5]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 5, 5, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  env->vars[4] = _var4;
  // (letrec 1 ((close _V0vanity_V0core_V20_lambda78)) ((bruijn loop 0 0) (bruijn ##k.341 1 0) (bruijn xs 1 2) (bruijn ys 1 3) (bruijn zs 1 4)))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_lambda78, env)});
    V_CALL(env->vars[0], runtime,
      upenv->vars[0],
      upenv->vars[2],
      upenv->vars[3],
      upenv->vars[4]);
    }
 }
}
__attribute__((used)) static void _V20Case3__V0vanity_V0core_V20_lambda75(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, ...) {
 static VDebugInfo dbg = { "_V20Case3__V0vanity_V0core_V20_lambda75" };
 VRecordCall2(runtime, &dbg);
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 2, argc, _var1);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case3__V0vanity_V0core_V20_lambda75, runtime, upenv, 2, argc, _var0, _var1, _varargs) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _varargs;
  // (letrec 1 ((close _V0vanity_V0core_V20_lambda79)) ((bruijn loop 0 0) (bruijn ##k.352 1 0) (bruijn lsts 1 2)))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_lambda79, env)});
    V_CALL(env->vars[0], runtime,
      upenv->vars[0],
      upenv->vars[2]);
    }
 }
}
void _V0vanity_V0core_V20_lambda75(VRuntime * runtime, VEnv * upenv, int argc, ...);
asm(
".intel_syntax noprefix\n"
#ifdef __linux__
".type _V0vanity_V0core_V20_lambda75, @function\n"
#endif
"_V0vanity_V0core_V20_lambda75:\n"
"    cmp " ARGC_REG ", 3\n"
"    je _V20Case0__V0vanity_V0core_V20_lambda75\n"
"    cmp " ARGC_REG ", 4\n"
"    je _V20Case1__V0vanity_V0core_V20_lambda75\n"
"    cmp " ARGC_REG ", 5\n"
"    je _V20Case2__V0vanity_V0core_V20_lambda75\n"
"    cmp " ARGC_REG ", 2\n"
"    jge _V20Case3__V0vanity_V0core_V20_lambda75\n"
"    jmp _V20CaseError__V0vanity_V0core_V20_lambda75\n"
);
static void _V0vanity_V0core_V20_k148(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k148" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k148, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k148, runtime, upenv, 1, argc, _var0) {
  // ((bruijn kons 6 1) (bruijn ##k.361 4 0) (bruijn ##x.363 2 0) (bruijn ##x.364 0 0))
    V_CALL(VGetArg(upenv, 6-1, 1), runtime,
      upenv->up->up->up->vars[0],
      upenv->up->vars[0],
      _var0);
 }
}
static void _V0vanity_V0core_V20_k147(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k147" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k147, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k147, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn loop 4 0) (close _V0vanity_V0core_V20_k148) (bruijn ##x.365 0 0))
    V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k148, env)}),
      _var0);
 }
}
static void _V0vanity_V0core_V20_k146(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k146" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k146, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k146, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn cdr 5 46) (close _V0vanity_V0core_V20_k147) (bruijn ks 2 1))
    V_CALL(VGetArg(upenv, 5-1, 46), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k147, env)}),
      upenv->up->vars[1]);
 }
}
static void _V0vanity_V0core_V20_k145(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k145" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k145, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k145, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.362 0 0) ((bruijn ##k.361 1 0) (bruijn knil 3 2)) ((bruijn car 4 45) (close _V0vanity_V0core_V20_k146) (bruijn ks 1 1)))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->vars[0], runtime,
      upenv->up->up->vars[2]);
} else {
    V_CALL(upenv->up->up->up->vars[45], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k146, env)}),
      upenv->vars[1]);
}
 }
}
static void _V0vanity_V0core_V20_lambda81(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_lambda81" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0vanity_V0core_V20_lambda81, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_lambda81, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn null? 3 0) (close _V0vanity_V0core_V20_k145) (bruijn ks 0 1))
    V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k145, env)}),
      _var1);
 }
}
static void _V0vanity_V0core_V20_lambda80(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_lambda80" };
 VRecordCall2(runtime, &dbg);
 if(argc != 4) {
  VError("Not enough arguments to _V0vanity_V0core_V20_lambda80, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_lambda80, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // (letrec 1 ((close _V0vanity_V0core_V20_lambda81)) ((bruijn loop 0 0) (bruijn ##k.360 1 0) (bruijn ks 1 3)))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_lambda81, env)});
    V_CALL(env->vars[0], runtime,
      upenv->vars[0],
      upenv->vars[3]);
    }
 }
}
static void _V0vanity_V0core_V20_k149(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k149" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k149, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k149, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##k.369 1 0) (##inline ##vcore.cons (##inline ##vcore.car (bruijn a 1 1)) (bruijn ##x.372 0 0)))
    V_CALL(upenv->vars[0], runtime,
      VInlineCons(
        VInlineCar(
        upenv->vars[1]),
        _var0));
 }
}
static void _V0vanity_V0core_V20_lambda83(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_lambda83" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0vanity_V0core_V20_lambda83, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_lambda83, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##vcore.null? (bruijn a 0 1)) ((bruijn ##k.369 0 0) (bruijn b 2 2)) ((bruijn loop 1 0) (close _V0vanity_V0core_V20_k149) (##inline ##vcore.cdr (bruijn a 0 1))))
if(VDecodeBool(
VInlineNullP(
        _var1))) {
    V_CALL(_var0, runtime,
      upenv->up->vars[2]);
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k149, env)}),
      VInlineCdr(
        _var1));
}
 }
}
static void _V0vanity_V0core_V20_k150(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k150" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k150, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k150, runtime, upenv, 1, argc, _var0) {
  // ((bruijn append 2 88) (bruijn ##k.374 1 0) (bruijn a 1 1) (bruijn ##x.375 0 0))
    V_CALL(upenv->up->vars[88], runtime,
      upenv->vars[0],
      upenv->vars[1],
      _var0);
 }
}
static void _V0vanity_V0core_V20_k152(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k152" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k152, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k152, runtime, upenv, 1, argc, _var0) {
  // ((bruijn append 3 88) (bruijn ##k.376 2 0) (bruijn a 2 1) (bruijn ##x.377 0 0))
    V_CALL(upenv->up->up->vars[88], runtime,
      upenv->up->vars[0],
      upenv->up->vars[1],
      _var0);
 }
}
static void _V0vanity_V0core_V20_k151(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k151" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k151, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k151, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn append 2 88) (close _V0vanity_V0core_V20_k152) (bruijn b 1 2) (bruijn ##x.378 0 0))
    V_CALL(upenv->up->vars[88], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k152, env)}),
      upenv->vars[2],
      _var0);
 }
}
__attribute__((used)) static void _V20CaseError__V0vanity_V0core_V20_lambda82(VRuntime * runtime, VEnv * upenv, int argc, ...) {
 // (_V0vanity_V0core_V20_lambda82 #t (1 ((bruijn ##k.366 0 0) '())) (2 ((bruijn ##k.367 0 0) (bruijn a 0 1))) (3 (letrec 1 ((close _V0vanity_V0core_V20_lambda83)) ((bruijn loop 0 0) (bruijn ##k.368 1 0) (bruijn a 1 1)))) (4 ((bruijn append 1 88) (close _V0vanity_V0core_V20_k150) (bruijn b 0 2) (bruijn c 0 3))) (5 ((bruijn append 1 88) (close _V0vanity_V0core_V20_k151) (bruijn c 0 3) (bruijn d 0 4))) (1 + ((bruijn fold-right 1 87) (bruijn ##k.379 0 0) (bruijn append 1 88) '() (bruijn lsts 0 1))))
 VError("Not enough arguments to _V0vanity_V0core_V20_lambda82, got ~D~N"
 "-- expected 1~N"
 "-- expected 2~N"
 "-- expected 3~N"
 "-- expected 4~N"
 "-- expected 5~N"
 "-- expected 1 or more~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V0vanity_V0core_V20_lambda82(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V20Case0__V0vanity_V0core_V20_lambda82" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case0__V0vanity_V0core_V20_lambda82, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##k.366 0 0) '())
    V_CALL(_var0, runtime,
      VNULL);
 }
}
__attribute__((used)) static void _V20Case1__V0vanity_V0core_V20_lambda82(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V20Case1__V0vanity_V0core_V20_lambda82" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case1__V0vanity_V0core_V20_lambda82, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##k.367 0 0) (bruijn a 0 1))
    V_CALL(_var0, runtime,
      _var1);
 }
}
__attribute__((used)) static void _V20Case2__V0vanity_V0core_V20_lambda82(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V20Case2__V0vanity_V0core_V20_lambda82" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case2__V0vanity_V0core_V20_lambda82, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // (letrec 1 ((close _V0vanity_V0core_V20_lambda83)) ((bruijn loop 0 0) (bruijn ##k.368 1 0) (bruijn a 1 1)))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_lambda83, env)});
    V_CALL(env->vars[0], runtime,
      upenv->vars[0],
      upenv->vars[1]);
    }
 }
}
__attribute__((used)) static void _V20Case3__V0vanity_V0core_V20_lambda82(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V20Case3__V0vanity_V0core_V20_lambda82" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case3__V0vanity_V0core_V20_lambda82, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // ((bruijn append 1 88) (close _V0vanity_V0core_V20_k150) (bruijn b 0 2) (bruijn c 0 3))
    V_CALL(upenv->vars[88], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k150, env)}),
      _var2,
      _var3);
 }
}
__attribute__((used)) static void _V20Case4__V0vanity_V0core_V20_lambda82(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4) {
 static VDebugInfo dbg = { "_V20Case4__V0vanity_V0core_V20_lambda82" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case4__V0vanity_V0core_V20_lambda82, runtime, upenv, 5, argc, _var0, _var1, _var2, _var3, _var4) {
  struct { VEnv env; VWORD argv[5]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 5, 5, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  env->vars[4] = _var4;
  // ((bruijn append 1 88) (close _V0vanity_V0core_V20_k151) (bruijn c 0 3) (bruijn d 0 4))
    V_CALL(upenv->vars[88], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k151, env)}),
      _var3,
      _var4);
 }
}
__attribute__((used)) static void _V20Case5__V0vanity_V0core_V20_lambda82(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, ...) {
 static VDebugInfo dbg = { "_V20Case5__V0vanity_V0core_V20_lambda82" };
 VRecordCall2(runtime, &dbg);
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 1, argc, _var0);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case5__V0vanity_V0core_V20_lambda82, runtime, upenv, 1, argc, _var0, _varargs) {
  // ((bruijn fold-right 1 87) (bruijn ##k.379 0 0) (bruijn append 1 88) '() (bruijn lsts 0 1))
    V_CALL(upenv->vars[87], runtime,
      _var0,
      upenv->vars[88],
      VNULL,
      _varargs);
 }
}
void _V0vanity_V0core_V20_lambda82(VRuntime * runtime, VEnv * upenv, int argc, ...);
asm(
".intel_syntax noprefix\n"
#ifdef __linux__
".type _V0vanity_V0core_V20_lambda82, @function\n"
#endif
"_V0vanity_V0core_V20_lambda82:\n"
"    cmp " ARGC_REG ", 1\n"
"    je _V20Case0__V0vanity_V0core_V20_lambda82\n"
"    cmp " ARGC_REG ", 2\n"
"    je _V20Case1__V0vanity_V0core_V20_lambda82\n"
"    cmp " ARGC_REG ", 3\n"
"    je _V20Case2__V0vanity_V0core_V20_lambda82\n"
"    cmp " ARGC_REG ", 4\n"
"    je _V20Case3__V0vanity_V0core_V20_lambda82\n"
"    cmp " ARGC_REG ", 5\n"
"    je _V20Case4__V0vanity_V0core_V20_lambda82\n"
"    cmp " ARGC_REG ", 1\n"
"    jge _V20Case5__V0vanity_V0core_V20_lambda82\n"
"    jmp _V20CaseError__V0vanity_V0core_V20_lambda82\n"
);
static void _V0vanity_V0core_V20_k156(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k156" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k156, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k156, runtime, upenv, 1, argc, _var0) {
  // ((bruijn iter 5 0) (bruijn ##k.381 4 0) (bruijn ##x.383 1 0) (bruijn ##x.384 0 0))
    V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      upenv->up->up->up->vars[0],
      upenv->vars[0],
      _var0);
 }
}
static void _V0vanity_V0core_V20_k155(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k155" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k155, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k155, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn cdr 6 46) (close _V0vanity_V0core_V20_k156) (bruijn rest 3 2))
    V_CALL(VGetArg(upenv, 6-1, 46), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k156, env)}),
      upenv->up->up->vars[2]);
 }
}
static void _V0vanity_V0core_V20_k154(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k154" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k154, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k154, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn cons 5 44) (close _V0vanity_V0core_V20_k155) (bruijn ##x.385 0 0) (bruijn acc 2 1))
    V_CALL(VGetArg(upenv, 5-1, 44), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k155, env)}),
      _var0,
      upenv->up->vars[1]);
 }
}
static void _V0vanity_V0core_V20_k153(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k153" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k153, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k153, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.382 0 0) ((bruijn ##k.381 1 0) (bruijn acc 1 1)) ((bruijn car 4 45) (close _V0vanity_V0core_V20_k154) (bruijn rest 1 2)))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->vars[0], runtime,
      upenv->vars[1]);
} else {
    V_CALL(upenv->up->up->up->vars[45], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k154, env)}),
      upenv->vars[2]);
}
 }
}
static void _V0vanity_V0core_V20_lambda85(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_lambda85" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0vanity_V0core_V20_lambda85, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_lambda85, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn null? 3 0) (close _V0vanity_V0core_V20_k153) (bruijn rest 0 2))
    V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k153, env)}),
      _var2);
 }
}
static void _V0vanity_V0core_V20_lambda84(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_lambda84" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0vanity_V0core_V20_lambda84, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_lambda84, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (letrec 1 ((close _V0vanity_V0core_V20_lambda85)) ((bruijn iter 0 0) (bruijn ##k.380 1 0) '() (bruijn lst 1 1)))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_lambda85, env)});
    V_CALL(env->vars[0], runtime,
      upenv->vars[0],
      VNULL,
      upenv->vars[1]);
    }
 }
}
static void _V0vanity_V0core_V20_k160(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k160" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k160, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k160, runtime, upenv, 1, argc, _var0) {
  // ((bruijn memq 5 90) (bruijn ##k.386 4 0) (bruijn x 4 1) (bruijn ##x.389 0 0))
    V_CALL(VGetArg(upenv, 5-1, 90), runtime,
      upenv->up->up->up->vars[0],
      upenv->up->up->up->vars[1],
      _var0);
 }
}
static void _V0vanity_V0core_V20_k159(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k159" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k159, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k159, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.388 0 0) ((bruijn ##k.386 3 0) (bruijn lst 3 2)) ((bruijn cdr 4 46) (close _V0vanity_V0core_V20_k160) (bruijn lst 3 2)))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->up->up->vars[0], runtime,
      upenv->up->up->vars[2]);
} else {
    V_CALL(upenv->up->up->up->vars[46], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k160, env)}),
      upenv->up->up->vars[2]);
}
 }
}
static void _V0vanity_V0core_V20_k158(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k158" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k158, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k158, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn eq? 3 14) (close _V0vanity_V0core_V20_k159) (bruijn x 2 1) (bruijn ##x.390 0 0))
    V_CALL(upenv->up->up->vars[14], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k159, env)}),
      upenv->up->vars[1],
      _var0);
 }
}
static void _V0vanity_V0core_V20_k157(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k157" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k157, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k157, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.387 0 0) ((bruijn ##k.386 1 0) #f) ((bruijn car 2 45) (close _V0vanity_V0core_V20_k158) (bruijn lst 1 2)))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
} else {
    V_CALL(upenv->up->vars[45], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k158, env)}),
      upenv->vars[2]);
}
 }
}
static void _V0vanity_V0core_V20_lambda86(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_lambda86" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0vanity_V0core_V20_lambda86, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_lambda86, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn null? 1 0) (close _V0vanity_V0core_V20_k157) (bruijn lst 0 2))
    V_CALL(upenv->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k157, env)}),
      _var2);
 }
}
static void _V0vanity_V0core_V20_k164(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k164" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k164, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k164, runtime, upenv, 1, argc, _var0) {
  // ((bruijn memv 5 91) (bruijn ##k.391 4 0) (bruijn x 4 1) (bruijn ##x.394 0 0))
    V_CALL(VGetArg(upenv, 5-1, 91), runtime,
      upenv->up->up->up->vars[0],
      upenv->up->up->up->vars[1],
      _var0);
 }
}
static void _V0vanity_V0core_V20_k163(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k163" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k163, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k163, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.393 0 0) ((bruijn ##k.391 3 0) (bruijn lst 3 2)) ((bruijn cdr 4 46) (close _V0vanity_V0core_V20_k164) (bruijn lst 3 2)))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->up->up->vars[0], runtime,
      upenv->up->up->vars[2]);
} else {
    V_CALL(upenv->up->up->up->vars[46], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k164, env)}),
      upenv->up->up->vars[2]);
}
 }
}
static void _V0vanity_V0core_V20_k162(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k162" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k162, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k162, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn eqv? 3 17) (close _V0vanity_V0core_V20_k163) (bruijn x 2 1) (bruijn ##x.395 0 0))
    V_CALL(upenv->up->up->vars[17], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k163, env)}),
      upenv->up->vars[1],
      _var0);
 }
}
static void _V0vanity_V0core_V20_k161(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k161" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k161, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k161, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.392 0 0) ((bruijn ##k.391 1 0) #f) ((bruijn car 2 45) (close _V0vanity_V0core_V20_k162) (bruijn lst 1 2)))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
} else {
    V_CALL(upenv->up->vars[45], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k162, env)}),
      upenv->vars[2]);
}
 }
}
static void _V0vanity_V0core_V20_lambda87(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_lambda87" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0vanity_V0core_V20_lambda87, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_lambda87, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn null? 1 0) (close _V0vanity_V0core_V20_k161) (bruijn lst 0 2))
    V_CALL(upenv->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k161, env)}),
      _var2);
 }
}
static void _V0vanity_V0core_V20_k168(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k168" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k168, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k168, runtime, upenv, 1, argc, _var0) {
  // ((bruijn member 5 92) (bruijn ##k.397 4 0) (bruijn x 4 1) (bruijn ##x.400 0 0))
    V_CALL(VGetArg(upenv, 5-1, 92), runtime,
      upenv->up->up->up->vars[0],
      upenv->up->up->up->vars[1],
      _var0);
 }
}
static void _V0vanity_V0core_V20_k167(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k167" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k167, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k167, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.399 0 0) ((bruijn ##k.397 3 0) (bruijn lst 3 2)) ((bruijn cdr 4 46) (close _V0vanity_V0core_V20_k168) (bruijn lst 3 2)))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->up->up->vars[0], runtime,
      upenv->up->up->vars[2]);
} else {
    V_CALL(upenv->up->up->up->vars[46], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k168, env)}),
      upenv->up->up->vars[2]);
}
 }
}
static void _V0vanity_V0core_V20_k166(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k166" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k166, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k166, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn = 2 3) (close _V0vanity_V0core_V20_k167) (bruijn x 2 1) (bruijn ##x.401 0 0))
    V_CALL(upenv->up->vars[3], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k167, env)}),
      upenv->up->vars[1],
      _var0);
 }
}
static void _V0vanity_V0core_V20_k165(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k165" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k165, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k165, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.398 0 0) ((bruijn ##k.397 1 0) #f) ((bruijn car 2 45) (close _V0vanity_V0core_V20_k166) (bruijn lst 1 2)))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
} else {
    V_CALL(upenv->up->vars[45], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k166, env)}),
      upenv->vars[2]);
}
 }
}
__attribute__((used)) static void _V20CaseError__V0vanity_V0core_V20_lambda88(VRuntime * runtime, VEnv * upenv, int argc, ...) {
 // (_V0vanity_V0core_V20_lambda88 #t (3 ((bruijn member 1 92) (bruijn ##k.396 0 0) (bruijn x 0 1) (bruijn lst 0 2) (bruijn equal? 1 19))) (4 ((bruijn null? 1 0) (close _V0vanity_V0core_V20_k165) (bruijn lst 0 2))))
 VError("Not enough arguments to _V0vanity_V0core_V20_lambda88, got ~D~N"
 "-- expected 3~N"
 "-- expected 4~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V0vanity_V0core_V20_lambda88(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V20Case0__V0vanity_V0core_V20_lambda88" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case0__V0vanity_V0core_V20_lambda88, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  // ((bruijn member 1 92) (bruijn ##k.396 0 0) (bruijn x 0 1) (bruijn lst 0 2) (bruijn equal? 1 19))
    V_CALL(upenv->vars[92], runtime,
      _var0,
      _var1,
      _var2,
      upenv->vars[19]);
 }
}
__attribute__((used)) static void _V20Case1__V0vanity_V0core_V20_lambda88(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V20Case1__V0vanity_V0core_V20_lambda88" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case1__V0vanity_V0core_V20_lambda88, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // ((bruijn null? 1 0) (close _V0vanity_V0core_V20_k165) (bruijn lst 0 2))
    V_CALL(upenv->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k165, env)}),
      _var2);
 }
}
void _V0vanity_V0core_V20_lambda88(VRuntime * runtime, VEnv * upenv, int argc, ...);
asm(
".intel_syntax noprefix\n"
#ifdef __linux__
".type _V0vanity_V0core_V20_lambda88, @function\n"
#endif
"_V0vanity_V0core_V20_lambda88:\n"
"    cmp " ARGC_REG ", 3\n"
"    je _V20Case0__V0vanity_V0core_V20_lambda88\n"
"    cmp " ARGC_REG ", 4\n"
"    je _V20Case1__V0vanity_V0core_V20_lambda88\n"
"    jmp _V20CaseError__V0vanity_V0core_V20_lambda88\n"
);
static void _V0vanity_V0core_V20_k172(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k172" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k172, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k172, runtime, upenv, 1, argc, _var0) {
  // ((bruijn assq 5 93) (bruijn ##k.402 4 0) (bruijn x 4 1) (bruijn ##x.405 0 0))
    V_CALL(VGetArg(upenv, 5-1, 93), runtime,
      upenv->up->up->up->vars[0],
      upenv->up->up->up->vars[1],
      _var0);
 }
}
static void _V0vanity_V0core_V20_k171(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k171" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k171, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k171, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.404 0 0) ((bruijn car 4 45) (bruijn ##k.402 3 0) (bruijn alst 3 2)) ((bruijn cdr 4 46) (close _V0vanity_V0core_V20_k172) (bruijn alst 3 2)))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->up->up->up->vars[45], runtime,
      upenv->up->up->vars[0],
      upenv->up->up->vars[2]);
} else {
    V_CALL(upenv->up->up->up->vars[46], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k172, env)}),
      upenv->up->up->vars[2]);
}
 }
}
static void _V0vanity_V0core_V20_k170(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k170" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k170, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k170, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn eq? 3 14) (close _V0vanity_V0core_V20_k171) (bruijn x 2 1) (bruijn ##x.406 0 0))
    V_CALL(upenv->up->up->vars[14], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k171, env)}),
      upenv->up->vars[1],
      _var0);
 }
}
static void _V0vanity_V0core_V20_k169(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k169" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k169, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k169, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.403 0 0) ((bruijn ##k.402 1 0) #f) ((bruijn caar 2 49) (close _V0vanity_V0core_V20_k170) (bruijn alst 1 2)))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
} else {
    V_CALL(upenv->up->vars[49], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k170, env)}),
      upenv->vars[2]);
}
 }
}
static void _V0vanity_V0core_V20_lambda89(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_lambda89" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0vanity_V0core_V20_lambda89, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_lambda89, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn null? 1 0) (close _V0vanity_V0core_V20_k169) (bruijn alst 0 2))
    V_CALL(upenv->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k169, env)}),
      _var2);
 }
}
static void _V0vanity_V0core_V20_k176(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k176" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k176, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k176, runtime, upenv, 1, argc, _var0) {
  // ((bruijn assv 5 94) (bruijn ##k.407 4 0) (bruijn x 4 1) (bruijn ##x.410 0 0))
    V_CALL(VGetArg(upenv, 5-1, 94), runtime,
      upenv->up->up->up->vars[0],
      upenv->up->up->up->vars[1],
      _var0);
 }
}
static void _V0vanity_V0core_V20_k175(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k175" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k175, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k175, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.409 0 0) ((bruijn car 4 45) (bruijn ##k.407 3 0) (bruijn alst 3 2)) ((bruijn cdr 4 46) (close _V0vanity_V0core_V20_k176) (bruijn alst 3 2)))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->up->up->up->vars[45], runtime,
      upenv->up->up->vars[0],
      upenv->up->up->vars[2]);
} else {
    V_CALL(upenv->up->up->up->vars[46], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k176, env)}),
      upenv->up->up->vars[2]);
}
 }
}
static void _V0vanity_V0core_V20_k174(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k174" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k174, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k174, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn eqv? 3 17) (close _V0vanity_V0core_V20_k175) (bruijn x 2 1) (bruijn ##x.411 0 0))
    V_CALL(upenv->up->up->vars[17], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k175, env)}),
      upenv->up->vars[1],
      _var0);
 }
}
static void _V0vanity_V0core_V20_k173(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k173" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k173, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k173, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.408 0 0) ((bruijn ##k.407 1 0) #f) ((bruijn caar 2 49) (close _V0vanity_V0core_V20_k174) (bruijn alst 1 2)))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
} else {
    V_CALL(upenv->up->vars[49], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k174, env)}),
      upenv->vars[2]);
}
 }
}
static void _V0vanity_V0core_V20_lambda90(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_lambda90" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0vanity_V0core_V20_lambda90, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_lambda90, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn null? 1 0) (close _V0vanity_V0core_V20_k173) (bruijn alst 0 2))
    V_CALL(upenv->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k173, env)}),
      _var2);
 }
}
static void _V0vanity_V0core_V20_k180(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k180" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k180, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k180, runtime, upenv, 1, argc, _var0) {
  // ((bruijn assoc 5 95) (bruijn ##k.413 4 0) (bruijn x 4 1) (bruijn ##x.416 0 0))
    V_CALL(VGetArg(upenv, 5-1, 95), runtime,
      upenv->up->up->up->vars[0],
      upenv->up->up->up->vars[1],
      _var0);
 }
}
static void _V0vanity_V0core_V20_k179(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k179" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k179, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k179, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.415 0 0) ((bruijn car 4 45) (bruijn ##k.413 3 0) (bruijn alst 3 2)) ((bruijn cdr 4 46) (close _V0vanity_V0core_V20_k180) (bruijn alst 3 2)))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->up->up->up->vars[45], runtime,
      upenv->up->up->vars[0],
      upenv->up->up->vars[2]);
} else {
    V_CALL(upenv->up->up->up->vars[46], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k180, env)}),
      upenv->up->up->vars[2]);
}
 }
}
static void _V0vanity_V0core_V20_k178(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k178" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k178, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k178, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn = 2 3) (close _V0vanity_V0core_V20_k179) (bruijn x 2 1) (bruijn ##x.417 0 0))
    V_CALL(upenv->up->vars[3], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k179, env)}),
      upenv->up->vars[1],
      _var0);
 }
}
static void _V0vanity_V0core_V20_k177(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k177" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k177, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k177, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.414 0 0) ((bruijn ##k.413 1 0) #f) ((bruijn caar 2 49) (close _V0vanity_V0core_V20_k178) (bruijn alst 1 2)))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
} else {
    V_CALL(upenv->up->vars[49], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k178, env)}),
      upenv->vars[2]);
}
 }
}
__attribute__((used)) static void _V20CaseError__V0vanity_V0core_V20_lambda91(VRuntime * runtime, VEnv * upenv, int argc, ...) {
 // (_V0vanity_V0core_V20_lambda91 #t (3 ((bruijn assoc 1 95) (bruijn ##k.412 0 0) (bruijn x 0 1) (bruijn alst 0 2) (bruijn equal? 1 19))) (4 ((bruijn null? 1 0) (close _V0vanity_V0core_V20_k177) (bruijn alst 0 2))))
 VError("Not enough arguments to _V0vanity_V0core_V20_lambda91, got ~D~N"
 "-- expected 3~N"
 "-- expected 4~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V0vanity_V0core_V20_lambda91(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V20Case0__V0vanity_V0core_V20_lambda91" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case0__V0vanity_V0core_V20_lambda91, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  // ((bruijn assoc 1 95) (bruijn ##k.412 0 0) (bruijn x 0 1) (bruijn alst 0 2) (bruijn equal? 1 19))
    V_CALL(upenv->vars[95], runtime,
      _var0,
      _var1,
      _var2,
      upenv->vars[19]);
 }
}
__attribute__((used)) static void _V20Case1__V0vanity_V0core_V20_lambda91(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V20Case1__V0vanity_V0core_V20_lambda91" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case1__V0vanity_V0core_V20_lambda91, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // ((bruijn null? 1 0) (close _V0vanity_V0core_V20_k177) (bruijn alst 0 2))
    V_CALL(upenv->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k177, env)}),
      _var2);
 }
}
void _V0vanity_V0core_V20_lambda91(VRuntime * runtime, VEnv * upenv, int argc, ...);
asm(
".intel_syntax noprefix\n"
#ifdef __linux__
".type _V0vanity_V0core_V20_lambda91, @function\n"
#endif
"_V0vanity_V0core_V20_lambda91:\n"
"    cmp " ARGC_REG ", 3\n"
"    je _V20Case0__V0vanity_V0core_V20_lambda91\n"
"    cmp " ARGC_REG ", 4\n"
"    je _V20Case1__V0vanity_V0core_V20_lambda91\n"
"    jmp _V20CaseError__V0vanity_V0core_V20_lambda91\n"
);
static void _V0vanity_V0core_V20_k187(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k187" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k187, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k187, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 6 0) (bruijn ##k.419 5 0) (bruijn ##x.422 1 0) (bruijn ##x.423 0 0))
    V_CALL(VGetArg(upenv, 6-1, 0), runtime,
      VGetArg(upenv, 5-1, 0),
      upenv->vars[0],
      _var0);
 }
}
static void _V0vanity_V0core_V20_k186(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k186" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k186, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k186, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn + 9 34) (close _V0vanity_V0core_V20_k187) (bruijn i 4 2) 1)
    V_CALL(VGetArg(upenv, 9-1, 34), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k187, env)}),
      upenv->up->up->up->vars[2],
      VEncodeInt(1l));
 }
}
static void _V0vanity_V0core_V20_k185(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k185" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k185, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k185, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn cdr 8 46) (close _V0vanity_V0core_V20_k186) (bruijn lst 3 1))
    V_CALL(VGetArg(upenv, 8-1, 46), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k186, env)}),
      upenv->up->up->vars[1]);
 }
}
static void _V0vanity_V0core_V20_k184(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k184" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k184, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k184, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn string-set! 7 101) (close _V0vanity_V0core_V20_k185) (bruijn str 4 0) (bruijn i 2 2) (bruijn ##x.424 0 0))
    V_CALL(VGetArg(upenv, 7-1, 101), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k185, env)}),
      upenv->up->up->up->vars[0],
      upenv->up->vars[2],
      _var0);
 }
}
static void _V0vanity_V0core_V20_k183(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k183" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k183, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k183, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.420 0 0) ((bruijn ##k.419 1 0) (bruijn str 3 0)) ((bruijn car 6 45) (close _V0vanity_V0core_V20_k184) (bruijn lst 1 1)))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->vars[0], runtime,
      upenv->up->up->vars[0]);
} else {
    V_CALL(VGetArg(upenv, 6-1, 45), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k184, env)}),
      upenv->vars[1]);
}
 }
}
static void _V0vanity_V0core_V20_lambda93(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_lambda93" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0vanity_V0core_V20_lambda93, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_lambda93, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn null? 5 0) (close _V0vanity_V0core_V20_k183) (bruijn lst 0 1))
    V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k183, env)}),
      _var1);
 }
}
static void _V0vanity_V0core_V20_k182(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k182" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k182, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k182, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (letrec 1 ((close _V0vanity_V0core_V20_lambda93)) ((bruijn loop 0 0) (bruijn ##k.418 3 0) (bruijn lst 3 1) 0))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_lambda93, env)});
    V_CALL(env->vars[0], runtime,
      upenv->up->up->vars[0],
      upenv->up->up->vars[1],
      VEncodeInt(0l));
    }
 }
}
static void _V0vanity_V0core_V20_k181(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k181" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k181, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k181, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn make-string 2 96) (close _V0vanity_V0core_V20_k182) (bruijn ##x.425 0 0))
    V_CALL(upenv->up->vars[96], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k182, env)}),
      _var0);
 }
}
static void _V0vanity_V0core_V20_lambda92(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_lambda92" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0vanity_V0core_V20_lambda92, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_lambda92, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn length 1 79) (close _V0vanity_V0core_V20_k181) (bruijn lst 0 1))
    V_CALL(upenv->vars[79], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k181, env)}),
      _var1);
 }
}
static void _V0vanity_V0core_V20_k191(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k191" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k191, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k191, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 5 0) (bruijn ##k.427 4 0) (bruijn ##x.429 2 0) (bruijn ##x.430 0 0))
    V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      upenv->up->up->up->vars[0],
      upenv->up->vars[0],
      _var0);
 }
}
static void _V0vanity_V0core_V20_k190(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k190" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k190, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k190, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn cons 6 44) (close _V0vanity_V0core_V20_k191) (bruijn ##x.431 0 0) (bruijn acc 3 2))
    V_CALL(VGetArg(upenv, 6-1, 44), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k191, env)}),
      _var0,
      upenv->up->up->vars[2]);
 }
}
static void _V0vanity_V0core_V20_k189(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k189" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k189, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k189, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn string-ref 5 100) (close _V0vanity_V0core_V20_k190) (bruijn str 4 1) (bruijn i 2 1))
    V_CALL(VGetArg(upenv, 5-1, 100), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k190, env)}),
      upenv->up->up->up->vars[1],
      upenv->up->vars[1]);
 }
}
static void _V0vanity_V0core_V20_k188(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k188" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k188, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k188, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.428 0 0) ((bruijn ##k.427 1 0) (bruijn acc 1 2)) ((bruijn - 4 35) (close _V0vanity_V0core_V20_k189) (bruijn i 1 1) 1))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->vars[0], runtime,
      upenv->vars[2]);
} else {
    V_CALL(upenv->up->up->up->vars[35], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k189, env)}),
      upenv->vars[1],
      VEncodeInt(1l));
}
 }
}
static void _V0vanity_V0core_V20_lambda95(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_lambda95" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0vanity_V0core_V20_lambda95, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_lambda95, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn eq? 3 14) (close _V0vanity_V0core_V20_k188) (bruijn i 0 1) -1)
    V_CALL(upenv->up->up->vars[14], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k188, env)}),
      _var1,
      VEncodeInt(-1l));
 }
}
static void _V0vanity_V0core_V20_k193(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k193" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k193, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k193, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 2 0) (bruijn ##k.426 3 0) (bruijn ##x.432 0 0) '())
    V_CALL(upenv->up->vars[0], runtime,
      upenv->up->up->vars[0],
      _var0,
      VNULL);
 }
}
static void _V0vanity_V0core_V20_k192(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k192" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k192, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k192, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn - 3 35) (close _V0vanity_V0core_V20_k193) (bruijn ##x.433 0 0) 1)
    V_CALL(upenv->up->up->vars[35], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k193, env)}),
      _var0,
      VEncodeInt(1l));
 }
}
static void _V0vanity_V0core_V20_lambda94(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_lambda94" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0vanity_V0core_V20_lambda94, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_lambda94, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (letrec 1 ((close _V0vanity_V0core_V20_lambda95)) ((bruijn string-length 2 102) (close _V0vanity_V0core_V20_k192) (bruijn str 1 1)))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_lambda95, env)});
    V_CALL(upenv->up->vars[102], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k192, env)}),
      upenv->vars[1]);
    }
 }
}
static void _V0vanity_V0core_V20_k200(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k200" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k200, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k200, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##k.436 7 0) (bruijn str 3 0))
    V_CALL(VGetArg(upenv, 7-1, 0), runtime,
      upenv->up->up->vars[0]);
 }
}
static void _V0vanity_V0core_V20_k199(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k199" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k199, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k199, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn string-copy! 7 99) (close _V0vanity_V0core_V20_k200) (bruijn str 2 0) (bruijn ##x.439 0 0) (bruijn b 6 2))
    V_CALL(VGetArg(upenv, 7-1, 99), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k200, env)}),
      upenv->up->vars[0],
      _var0,
      VGetArg(upenv, 6-1, 2));
 }
}
static void _V0vanity_V0core_V20_k198(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k198" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k198, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k198, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn string-length 6 102) (close _V0vanity_V0core_V20_k199) (bruijn a 5 1))
    V_CALL(VGetArg(upenv, 6-1, 102), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k199, env)}),
      VGetArg(upenv, 5-1, 1));
 }
}
static void _V0vanity_V0core_V20_k197(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k197" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k197, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k197, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn string-copy! 5 99) (close _V0vanity_V0core_V20_k198) (bruijn str 0 0) 0 (bruijn a 4 1))
    V_CALL(VGetArg(upenv, 5-1, 99), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k198, env)}),
      _var0,
      VEncodeInt(0l),
      upenv->up->up->up->vars[1]);
 }
}
static void _V0vanity_V0core_V20_k196(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k196" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k196, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k196, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn make-string 4 96) (close _V0vanity_V0core_V20_k197) (bruijn len 0 0))
    V_CALL(upenv->up->up->up->vars[96], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k197, env)}),
      _var0);
 }
}
static void _V0vanity_V0core_V20_k195(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k195" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k195, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k195, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn + 3 34) (close _V0vanity_V0core_V20_k196) (bruijn ##x.440 1 0) (bruijn ##x.441 0 0))
    V_CALL(upenv->up->up->vars[34], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k196, env)}),
      upenv->vars[0],
      _var0);
 }
}
static void _V0vanity_V0core_V20_k194(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k194" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k194, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k194, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn string-length 2 102) (close _V0vanity_V0core_V20_k195) (bruijn b 1 2))
    V_CALL(upenv->up->vars[102], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k195, env)}),
      upenv->vars[2]);
 }
}
static void _V0vanity_V0core_V20_k212(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k212" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k212, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k212, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##k.442 12 0) (bruijn str 7 0))
    V_CALL(VGetArg(upenv, 12-1, 0), runtime,
      VGetArg(upenv, 7-1, 0));
 }
}
static void _V0vanity_V0core_V20_k211(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k211" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k211, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k211, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn string-copy! 12 99) (close _V0vanity_V0core_V20_k212) (bruijn str 6 0) (bruijn ##x.446 0 0) (bruijn c 11 3))
    V_CALL(VGetArg(upenv, 12-1, 99), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k212, env)}),
      VGetArg(upenv, 6-1, 0),
      _var0,
      VGetArg(upenv, 11-1, 3));
 }
}
static void _V0vanity_V0core_V20_k210(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k210" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k210, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k210, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn + 11 34) (close _V0vanity_V0core_V20_k211) (bruijn ##x.447 1 0) (bruijn ##x.448 0 0))
    V_CALL(VGetArg(upenv, 11-1, 34), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k211, env)}),
      upenv->vars[0],
      _var0);
 }
}
static void _V0vanity_V0core_V20_k209(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k209" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k209, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k209, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn string-length 10 102) (close _V0vanity_V0core_V20_k210) (bruijn b 9 2))
    V_CALL(VGetArg(upenv, 10-1, 102), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k210, env)}),
      VGetArg(upenv, 9-1, 2));
 }
}
static void _V0vanity_V0core_V20_k208(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k208" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k208, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k208, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn string-length 9 102) (close _V0vanity_V0core_V20_k209) (bruijn a 8 1))
    V_CALL(VGetArg(upenv, 9-1, 102), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k209, env)}),
      VGetArg(upenv, 8-1, 1));
 }
}
static void _V0vanity_V0core_V20_k207(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k207" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k207, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k207, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn string-copy! 8 99) (close _V0vanity_V0core_V20_k208) (bruijn str 2 0) (bruijn ##x.449 0 0) (bruijn b 7 2))
    V_CALL(VGetArg(upenv, 8-1, 99), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k208, env)}),
      upenv->up->vars[0],
      _var0,
      VGetArg(upenv, 7-1, 2));
 }
}
static void _V0vanity_V0core_V20_k206(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k206" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k206, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k206, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn string-length 7 102) (close _V0vanity_V0core_V20_k207) (bruijn a 6 1))
    V_CALL(VGetArg(upenv, 7-1, 102), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k207, env)}),
      VGetArg(upenv, 6-1, 1));
 }
}
static void _V0vanity_V0core_V20_k205(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k205" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k205, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k205, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn string-copy! 6 99) (close _V0vanity_V0core_V20_k206) (bruijn str 0 0) 0 (bruijn a 5 1))
    V_CALL(VGetArg(upenv, 6-1, 99), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k206, env)}),
      _var0,
      VEncodeInt(0l),
      VGetArg(upenv, 5-1, 1));
 }
}
static void _V0vanity_V0core_V20_k204(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k204" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k204, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k204, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn make-string 5 96) (close _V0vanity_V0core_V20_k205) (bruijn len 0 0))
    V_CALL(VGetArg(upenv, 5-1, 96), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k205, env)}),
      _var0);
 }
}
static void _V0vanity_V0core_V20_k203(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k203" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k203, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k203, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn + 4 34) (close _V0vanity_V0core_V20_k204) (bruijn ##x.450 2 0) (bruijn ##x.451 1 0) (bruijn ##x.452 0 0))
    V_CALL(upenv->up->up->up->vars[34], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k204, env)}),
      upenv->up->vars[0],
      upenv->vars[0],
      _var0);
 }
}
static void _V0vanity_V0core_V20_k202(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k202" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k202, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k202, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn string-length 3 102) (close _V0vanity_V0core_V20_k203) (bruijn c 2 3))
    V_CALL(upenv->up->up->vars[102], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k203, env)}),
      upenv->up->vars[3]);
 }
}
static void _V0vanity_V0core_V20_k201(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k201" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k201, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k201, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn string-length 2 102) (close _V0vanity_V0core_V20_k202) (bruijn b 1 2))
    V_CALL(upenv->up->vars[102], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k202, env)}),
      upenv->vars[2]);
 }
}
static void _V0vanity_V0core_V20_k230(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k230" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k230, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k230, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##k.453 18 0) (bruijn str 12 0))
    V_CALL(VGetArg(upenv, 18-1, 0), runtime,
      VGetArg(upenv, 12-1, 0));
 }
}
static void _V0vanity_V0core_V20_k229(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k229" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k229, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k229, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn string-copy! 18 99) (close _V0vanity_V0core_V20_k230) (bruijn str 11 0) (bruijn ##x.458 0 0) (bruijn d 17 4))
    V_CALL(VGetArg(upenv, 18-1, 99), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k230, env)}),
      VGetArg(upenv, 11-1, 0),
      _var0,
      VGetArg(upenv, 17-1, 4));
 }
}
static void _V0vanity_V0core_V20_k228(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k228" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k228, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k228, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn + 17 34) (close _V0vanity_V0core_V20_k229) (bruijn ##x.459 2 0) (bruijn ##x.460 1 0) (bruijn ##x.461 0 0))
    V_CALL(VGetArg(upenv, 17-1, 34), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k229, env)}),
      upenv->up->vars[0],
      upenv->vars[0],
      _var0);
 }
}
static void _V0vanity_V0core_V20_k227(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k227" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k227, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k227, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn string-length 16 102) (close _V0vanity_V0core_V20_k228) (bruijn c 15 3))
    V_CALL(VGetArg(upenv, 16-1, 102), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k228, env)}),
      VGetArg(upenv, 15-1, 3));
 }
}
static void _V0vanity_V0core_V20_k226(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k226" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k226, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k226, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn string-length 15 102) (close _V0vanity_V0core_V20_k227) (bruijn b 14 2))
    V_CALL(VGetArg(upenv, 15-1, 102), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k227, env)}),
      VGetArg(upenv, 14-1, 2));
 }
}
static void _V0vanity_V0core_V20_k225(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k225" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k225, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k225, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn string-length 14 102) (close _V0vanity_V0core_V20_k226) (bruijn a 13 1))
    V_CALL(VGetArg(upenv, 14-1, 102), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k226, env)}),
      VGetArg(upenv, 13-1, 1));
 }
}
static void _V0vanity_V0core_V20_k224(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k224" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k224, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k224, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn string-copy! 13 99) (close _V0vanity_V0core_V20_k225) (bruijn str 6 0) (bruijn ##x.462 0 0) (bruijn c 12 3))
    V_CALL(VGetArg(upenv, 13-1, 99), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k225, env)}),
      VGetArg(upenv, 6-1, 0),
      _var0,
      VGetArg(upenv, 12-1, 3));
 }
}
static void _V0vanity_V0core_V20_k223(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k223" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k223, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k223, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn + 12 34) (close _V0vanity_V0core_V20_k224) (bruijn ##x.463 1 0) (bruijn ##x.464 0 0))
    V_CALL(VGetArg(upenv, 12-1, 34), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k224, env)}),
      upenv->vars[0],
      _var0);
 }
}
static void _V0vanity_V0core_V20_k222(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k222" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k222, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k222, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn string-length 11 102) (close _V0vanity_V0core_V20_k223) (bruijn b 10 2))
    V_CALL(VGetArg(upenv, 11-1, 102), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k223, env)}),
      VGetArg(upenv, 10-1, 2));
 }
}
static void _V0vanity_V0core_V20_k221(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k221" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k221, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k221, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn string-length 10 102) (close _V0vanity_V0core_V20_k222) (bruijn a 9 1))
    V_CALL(VGetArg(upenv, 10-1, 102), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k222, env)}),
      VGetArg(upenv, 9-1, 1));
 }
}
static void _V0vanity_V0core_V20_k220(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k220" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k220, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k220, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn string-copy! 9 99) (close _V0vanity_V0core_V20_k221) (bruijn str 2 0) (bruijn ##x.465 0 0) (bruijn b 8 2))
    V_CALL(VGetArg(upenv, 9-1, 99), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k221, env)}),
      upenv->up->vars[0],
      _var0,
      VGetArg(upenv, 8-1, 2));
 }
}
static void _V0vanity_V0core_V20_k219(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k219" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k219, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k219, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn string-length 8 102) (close _V0vanity_V0core_V20_k220) (bruijn a 7 1))
    V_CALL(VGetArg(upenv, 8-1, 102), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k220, env)}),
      VGetArg(upenv, 7-1, 1));
 }
}
static void _V0vanity_V0core_V20_k218(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k218" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k218, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k218, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn string-copy! 7 99) (close _V0vanity_V0core_V20_k219) (bruijn str 0 0) 0 (bruijn a 6 1))
    V_CALL(VGetArg(upenv, 7-1, 99), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k219, env)}),
      _var0,
      VEncodeInt(0l),
      VGetArg(upenv, 6-1, 1));
 }
}
static void _V0vanity_V0core_V20_k217(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k217" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k217, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k217, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn make-string 6 96) (close _V0vanity_V0core_V20_k218) (bruijn len 0 0))
    V_CALL(VGetArg(upenv, 6-1, 96), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k218, env)}),
      _var0);
 }
}
static void _V0vanity_V0core_V20_k216(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k216" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k216, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k216, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn + 5 34) (close _V0vanity_V0core_V20_k217) (bruijn ##x.466 3 0) (bruijn ##x.467 2 0) (bruijn ##x.468 1 0) (bruijn ##x.469 0 0))
    V_CALL(VGetArg(upenv, 5-1, 34), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k217, env)}),
      upenv->up->up->vars[0],
      upenv->up->vars[0],
      upenv->vars[0],
      _var0);
 }
}
static void _V0vanity_V0core_V20_k215(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k215" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k215, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k215, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn string-length 4 102) (close _V0vanity_V0core_V20_k216) (bruijn d 3 4))
    V_CALL(upenv->up->up->up->vars[102], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k216, env)}),
      upenv->up->up->vars[4]);
 }
}
static void _V0vanity_V0core_V20_k214(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k214" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k214, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k214, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn string-length 3 102) (close _V0vanity_V0core_V20_k215) (bruijn c 2 3))
    V_CALL(upenv->up->up->vars[102], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k215, env)}),
      upenv->up->vars[3]);
 }
}
static void _V0vanity_V0core_V20_k213(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k213" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k213, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k213, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn string-length 2 102) (close _V0vanity_V0core_V20_k214) (bruijn b 1 2))
    V_CALL(upenv->up->vars[102], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k214, env)}),
      upenv->vars[2]);
 }
}
__attribute__((used)) static void _V20CaseError__V0vanity_V0core_V20_lambda96(VRuntime * runtime, VEnv * upenv, int argc, ...) {
 // (_V0vanity_V0core_V20_lambda96 #t (1 ((bruijn string-copy 1 98) (bruijn ##k.434 0 0) (##string ##string.1052))) (2 ((bruijn string-copy 1 98) (bruijn ##k.435 0 0) (bruijn a 0 1))) (3 ((bruijn string-length 1 102) (close _V0vanity_V0core_V20_k194) (bruijn a 0 1))) (4 ((bruijn string-length 1 102) (close _V0vanity_V0core_V20_k201) (bruijn a 0 1))) (5 ((bruijn string-length 1 102) (close _V0vanity_V0core_V20_k213) (bruijn a 0 1))) (1 + ((bruijn fold-right 1 87) (bruijn ##k.470 0 0) (bruijn string-append 1 108) (##string ##string.1052) (bruijn strs 0 1))))
 VError("Not enough arguments to _V0vanity_V0core_V20_lambda96, got ~D~N"
 "-- expected 1~N"
 "-- expected 2~N"
 "-- expected 3~N"
 "-- expected 4~N"
 "-- expected 5~N"
 "-- expected 1 or more~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V0vanity_V0core_V20_lambda96(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V20Case0__V0vanity_V0core_V20_lambda96" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case0__V0vanity_V0core_V20_lambda96, runtime, upenv, 1, argc, _var0) {
  // ((bruijn string-copy 1 98) (bruijn ##k.434 0 0) (##string ##string.1052))
    V_CALL(upenv->vars[98], runtime,
      _var0,
      VEncodePointer(&_V10string_D1052.sym, VPOINTER_OTHER));
 }
}
__attribute__((used)) static void _V20Case1__V0vanity_V0core_V20_lambda96(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V20Case1__V0vanity_V0core_V20_lambda96" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case1__V0vanity_V0core_V20_lambda96, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn string-copy 1 98) (bruijn ##k.435 0 0) (bruijn a 0 1))
    V_CALL(upenv->vars[98], runtime,
      _var0,
      _var1);
 }
}
__attribute__((used)) static void _V20Case2__V0vanity_V0core_V20_lambda96(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V20Case2__V0vanity_V0core_V20_lambda96" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case2__V0vanity_V0core_V20_lambda96, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn string-length 1 102) (close _V0vanity_V0core_V20_k194) (bruijn a 0 1))
    V_CALL(upenv->vars[102], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k194, env)}),
      _var1);
 }
}
__attribute__((used)) static void _V20Case3__V0vanity_V0core_V20_lambda96(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V20Case3__V0vanity_V0core_V20_lambda96" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case3__V0vanity_V0core_V20_lambda96, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // ((bruijn string-length 1 102) (close _V0vanity_V0core_V20_k201) (bruijn a 0 1))
    V_CALL(upenv->vars[102], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k201, env)}),
      _var1);
 }
}
__attribute__((used)) static void _V20Case4__V0vanity_V0core_V20_lambda96(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4) {
 static VDebugInfo dbg = { "_V20Case4__V0vanity_V0core_V20_lambda96" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case4__V0vanity_V0core_V20_lambda96, runtime, upenv, 5, argc, _var0, _var1, _var2, _var3, _var4) {
  struct { VEnv env; VWORD argv[5]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 5, 5, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  env->vars[4] = _var4;
  // ((bruijn string-length 1 102) (close _V0vanity_V0core_V20_k213) (bruijn a 0 1))
    V_CALL(upenv->vars[102], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k213, env)}),
      _var1);
 }
}
__attribute__((used)) static void _V20Case5__V0vanity_V0core_V20_lambda96(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, ...) {
 static VDebugInfo dbg = { "_V20Case5__V0vanity_V0core_V20_lambda96" };
 VRecordCall2(runtime, &dbg);
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 1, argc, _var0);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case5__V0vanity_V0core_V20_lambda96, runtime, upenv, 1, argc, _var0, _varargs) {
  // ((bruijn fold-right 1 87) (bruijn ##k.470 0 0) (bruijn string-append 1 108) (##string ##string.1052) (bruijn strs 0 1))
    V_CALL(upenv->vars[87], runtime,
      _var0,
      upenv->vars[108],
      VEncodePointer(&_V10string_D1052.sym, VPOINTER_OTHER),
      _varargs);
 }
}
void _V0vanity_V0core_V20_lambda96(VRuntime * runtime, VEnv * upenv, int argc, ...);
asm(
".intel_syntax noprefix\n"
#ifdef __linux__
".type _V0vanity_V0core_V20_lambda96, @function\n"
#endif
"_V0vanity_V0core_V20_lambda96:\n"
"    cmp " ARGC_REG ", 1\n"
"    je _V20Case0__V0vanity_V0core_V20_lambda96\n"
"    cmp " ARGC_REG ", 2\n"
"    je _V20Case1__V0vanity_V0core_V20_lambda96\n"
"    cmp " ARGC_REG ", 3\n"
"    je _V20Case2__V0vanity_V0core_V20_lambda96\n"
"    cmp " ARGC_REG ", 4\n"
"    je _V20Case3__V0vanity_V0core_V20_lambda96\n"
"    cmp " ARGC_REG ", 5\n"
"    je _V20Case4__V0vanity_V0core_V20_lambda96\n"
"    cmp " ARGC_REG ", 1\n"
"    jge _V20Case5__V0vanity_V0core_V20_lambda96\n"
"    jmp _V20CaseError__V0vanity_V0core_V20_lambda96\n"
);
static void _V0vanity_V0core_V20_lambda97(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, ...) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_lambda97" };
 VRecordCall2(runtime, &dbg);
 if(argc < 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_lambda97, got ~D~N"
  "-- expected 1 or more~N"
  , argc);
 }
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 1, argc, _var0);
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_lambda97, runtime, upenv, 1, argc, _var0, _varargs) {
  // ((bruijn list->vector 1 109) (bruijn ##k.471 0 0) (bruijn args 0 1))
    V_CALL(upenv->vars[109], runtime,
      _var0,
      _varargs);
 }
}
static void _V0vanity_V0core_V20_k235(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k235" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k235, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k235, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 5 0) (bruijn ##k.473 4 0) (bruijn ##x.476 0 0))
    V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      upenv->up->up->up->vars[0],
      _var0);
 }
}
static void _V0vanity_V0core_V20_k234(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k234" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k234, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k234, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn + 7 34) (close _V0vanity_V0core_V20_k235) (bruijn i 3 1) 1)
    V_CALL(VGetArg(upenv, 7-1, 34), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k235, env)}),
      upenv->up->up->vars[1],
      VEncodeInt(1l));
 }
}
static void _V0vanity_V0core_V20_k233(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k233" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k233, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k233, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn f 5 1) (close _V0vanity_V0core_V20_k234) (bruijn ##x.477 0 0))
    V_CALL(VGetArg(upenv, 5-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k234, env)}),
      _var0);
 }
}
static void _V0vanity_V0core_V20_k232(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k232" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k232, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k232, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.474 0 0) ((bruijn vector-ref 5 111) (close _V0vanity_V0core_V20_k233) (bruijn xs 4 2) (bruijn i 1 1)) ((bruijn ##k.473 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 5-1, 111), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k233, env)}),
      upenv->up->up->up->vars[2],
      upenv->vars[1]);
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0core_V20_lambda99(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_lambda99" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0vanity_V0core_V20_lambda99, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_lambda99, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn < 4 21) (close _V0vanity_V0core_V20_k232) (bruijn i 0 1) (bruijn len 2 0))
    V_CALL(upenv->up->up->up->vars[21], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k232, env)}),
      _var1,
      upenv->up->vars[0]);
 }
}
static void _V0vanity_V0core_V20_k231(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k231" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k231, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k231, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (letrec 1 ((close _V0vanity_V0core_V20_lambda99)) ((bruijn loop 0 0) (bruijn ##k.472 2 0) 0))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_lambda99, env)});
    V_CALL(env->vars[0], runtime,
      upenv->up->vars[0],
      VEncodeInt(0l));
    }
 }
}
static void _V0vanity_V0core_V20_k241(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k241" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k241, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k241, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 6 0) (bruijn ##k.479 5 0) (bruijn ##x.482 0 0))
    V_CALL(VGetArg(upenv, 6-1, 0), runtime,
      VGetArg(upenv, 5-1, 0),
      _var0);
 }
}
static void _V0vanity_V0core_V20_k240(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k240" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k240, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k240, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn + 8 34) (close _V0vanity_V0core_V20_k241) (bruijn i 4 1) 1)
    V_CALL(VGetArg(upenv, 8-1, 34), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k241, env)}),
      upenv->up->up->up->vars[1],
      VEncodeInt(1l));
 }
}
static void _V0vanity_V0core_V20_k239(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k239" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k239, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k239, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn f 6 1) (close _V0vanity_V0core_V20_k240) (bruijn ##x.483 1 0) (bruijn ##x.484 0 0))
    V_CALL(VGetArg(upenv, 6-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k240, env)}),
      upenv->vars[0],
      _var0);
 }
}
static void _V0vanity_V0core_V20_k238(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k238" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k238, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k238, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn vector-ref 6 111) (close _V0vanity_V0core_V20_k239) (bruijn ys 5 3) (bruijn i 2 1))
    V_CALL(VGetArg(upenv, 6-1, 111), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k239, env)}),
      VGetArg(upenv, 5-1, 3),
      upenv->up->vars[1]);
 }
}
static void _V0vanity_V0core_V20_k237(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k237" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k237, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k237, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.480 0 0) ((bruijn vector-ref 5 111) (close _V0vanity_V0core_V20_k238) (bruijn xs 4 2) (bruijn i 1 1)) ((bruijn ##k.479 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 5-1, 111), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k238, env)}),
      upenv->up->up->up->vars[2],
      upenv->vars[1]);
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0core_V20_lambda100(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_lambda100" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0vanity_V0core_V20_lambda100, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_lambda100, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn < 4 21) (close _V0vanity_V0core_V20_k237) (bruijn i 0 1) (bruijn len 2 0))
    V_CALL(upenv->up->up->up->vars[21], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k237, env)}),
      _var1,
      upenv->up->vars[0]);
 }
}
static void _V0vanity_V0core_V20_k236(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k236" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k236, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k236, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (letrec 1 ((close _V0vanity_V0core_V20_lambda100)) ((bruijn loop 0 0) (bruijn ##k.478 2 0) 0))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_lambda100, env)});
    V_CALL(env->vars[0], runtime,
      upenv->up->vars[0],
      VEncodeInt(0l));
    }
 }
}
static void _V0vanity_V0core_V20_k248(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k248" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k248, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k248, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 7 0) (bruijn ##k.486 6 0) (bruijn ##x.489 0 0))
    V_CALL(VGetArg(upenv, 7-1, 0), runtime,
      VGetArg(upenv, 6-1, 0),
      _var0);
 }
}
static void _V0vanity_V0core_V20_k247(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k247" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k247, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k247, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn + 9 34) (close _V0vanity_V0core_V20_k248) (bruijn i 5 1) 1)
    V_CALL(VGetArg(upenv, 9-1, 34), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k248, env)}),
      VGetArg(upenv, 5-1, 1),
      VEncodeInt(1l));
 }
}
static void _V0vanity_V0core_V20_k246(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k246" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k246, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k246, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn f 7 1) (close _V0vanity_V0core_V20_k247) (bruijn ##x.490 2 0) (bruijn ##x.491 1 0) (bruijn ##x.492 0 0))
    V_CALL(VGetArg(upenv, 7-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k247, env)}),
      upenv->up->vars[0],
      upenv->vars[0],
      _var0);
 }
}
static void _V0vanity_V0core_V20_k245(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k245" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k245, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k245, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn vector-ref 7 111) (close _V0vanity_V0core_V20_k246) (bruijn zs 6 4) (bruijn i 3 1))
    V_CALL(VGetArg(upenv, 7-1, 111), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k246, env)}),
      VGetArg(upenv, 6-1, 4),
      upenv->up->up->vars[1]);
 }
}
static void _V0vanity_V0core_V20_k244(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k244" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k244, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k244, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn vector-ref 6 111) (close _V0vanity_V0core_V20_k245) (bruijn ys 5 3) (bruijn i 2 1))
    V_CALL(VGetArg(upenv, 6-1, 111), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k245, env)}),
      VGetArg(upenv, 5-1, 3),
      upenv->up->vars[1]);
 }
}
static void _V0vanity_V0core_V20_k243(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k243" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k243, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k243, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.487 0 0) ((bruijn vector-ref 5 111) (close _V0vanity_V0core_V20_k244) (bruijn xs 4 2) (bruijn i 1 1)) ((bruijn ##k.486 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 5-1, 111), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k244, env)}),
      upenv->up->up->up->vars[2],
      upenv->vars[1]);
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0core_V20_lambda101(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_lambda101" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0vanity_V0core_V20_lambda101, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_lambda101, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn < 4 21) (close _V0vanity_V0core_V20_k243) (bruijn i 0 1) (bruijn len 2 0))
    V_CALL(upenv->up->up->up->vars[21], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k243, env)}),
      _var1,
      upenv->up->vars[0]);
 }
}
static void _V0vanity_V0core_V20_k242(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k242" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k242, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k242, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (letrec 1 ((close _V0vanity_V0core_V20_lambda101)) ((bruijn loop 0 0) (bruijn ##k.485 2 0) 0))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_lambda101, env)});
    V_CALL(env->vars[0], runtime,
      upenv->up->vars[0],
      VEncodeInt(0l));
    }
 }
}
static void _V0vanity_V0core_V20_k254(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k254" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k254, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k254, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 5 0) (bruijn ##k.494 4 0) (bruijn ##x.497 0 0))
    V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      upenv->up->up->up->vars[0],
      _var0);
 }
}
static void _V0vanity_V0core_V20_k253(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k253" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k253, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k253, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn + 8 34) (close _V0vanity_V0core_V20_k254) (bruijn i 3 1) 1)
    V_CALL(VGetArg(upenv, 8-1, 34), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k254, env)}),
      upenv->up->up->vars[1],
      VEncodeInt(1l));
 }
}
static void _V0vanity_V0core_V20_k252(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k252" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k252, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k252, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn apply 7 148) (close _V0vanity_V0core_V20_k253) (bruijn f 6 1) (bruijn ##x.498 0 0))
    V_CALL(VGetArg(upenv, 7-1, 148), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k253, env)}),
      VGetArg(upenv, 6-1, 1),
      _var0);
 }
}
static void _V0vanity_V0core_V20_lambda103(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_lambda103" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0vanity_V0core_V20_lambda103, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_lambda103, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn vector-ref 7 111) (bruijn ##k.499 0 0) (bruijn vec 0 1) (bruijn i 2 1))
    V_CALL(VGetArg(upenv, 7-1, 111), runtime,
      _var0,
      _var1,
      upenv->up->vars[1]);
 }
}
static void _V0vanity_V0core_V20_k251(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k251" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k251, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k251, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.495 0 0) ((bruijn map 6 85) (close _V0vanity_V0core_V20_k252) (close _V0vanity_V0core_V20_lambda103) (bruijn vecs 5 2)) ((bruijn ##k.494 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 6-1, 85), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k252, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_lambda103, env)}),
      VGetArg(upenv, 5-1, 2));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0core_V20_lambda102(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_lambda102" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0vanity_V0core_V20_lambda102, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_lambda102, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn < 5 21) (close _V0vanity_V0core_V20_k251) (bruijn i 0 1) (bruijn len 2 0))
    V_CALL(VGetArg(upenv, 5-1, 21), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k251, env)}),
      _var1,
      upenv->up->vars[0]);
 }
}
static void _V0vanity_V0core_V20_k250(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k250" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k250, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k250, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (letrec 1 ((close _V0vanity_V0core_V20_lambda102)) ((bruijn loop 0 0) (bruijn ##k.493 3 0) 0))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_lambda102, env)});
    V_CALL(env->vars[0], runtime,
      upenv->up->up->vars[0],
      VEncodeInt(0l));
    }
 }
}
static void _V0vanity_V0core_V20_k249(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k249" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k249, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k249, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn vector-length 2 113) (close _V0vanity_V0core_V20_k250) (bruijn ##x.500 0 0))
    V_CALL(upenv->up->vars[113], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k250, env)}),
      _var0);
 }
}
__attribute__((used)) static void _V20CaseError__V0vanity_V0core_V20_lambda98(VRuntime * runtime, VEnv * upenv, int argc, ...) {
 // (_V0vanity_V0core_V20_lambda98 #t (3 ((bruijn vector-length 1 113) (close _V0vanity_V0core_V20_k231) (bruijn xs 0 2))) (4 ((bruijn vector-length 1 113) (close _V0vanity_V0core_V20_k236) (bruijn xs 0 2))) (5 ((bruijn vector-length 1 113) (close _V0vanity_V0core_V20_k242) (bruijn xs 0 2))) (2 + ((bruijn car 1 45) (close _V0vanity_V0core_V20_k249) (bruijn vecs 0 2))))
 VError("Not enough arguments to _V0vanity_V0core_V20_lambda98, got ~D~N"
 "-- expected 3~N"
 "-- expected 4~N"
 "-- expected 5~N"
 "-- expected 2 or more~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V0vanity_V0core_V20_lambda98(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V20Case0__V0vanity_V0core_V20_lambda98" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case0__V0vanity_V0core_V20_lambda98, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn vector-length 1 113) (close _V0vanity_V0core_V20_k231) (bruijn xs 0 2))
    V_CALL(upenv->vars[113], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k231, env)}),
      _var2);
 }
}
__attribute__((used)) static void _V20Case1__V0vanity_V0core_V20_lambda98(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V20Case1__V0vanity_V0core_V20_lambda98" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case1__V0vanity_V0core_V20_lambda98, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // ((bruijn vector-length 1 113) (close _V0vanity_V0core_V20_k236) (bruijn xs 0 2))
    V_CALL(upenv->vars[113], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k236, env)}),
      _var2);
 }
}
__attribute__((used)) static void _V20Case2__V0vanity_V0core_V20_lambda98(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4) {
 static VDebugInfo dbg = { "_V20Case2__V0vanity_V0core_V20_lambda98" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case2__V0vanity_V0core_V20_lambda98, runtime, upenv, 5, argc, _var0, _var1, _var2, _var3, _var4) {
  struct { VEnv env; VWORD argv[5]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 5, 5, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  env->vars[4] = _var4;
  // ((bruijn vector-length 1 113) (close _V0vanity_V0core_V20_k242) (bruijn xs 0 2))
    V_CALL(upenv->vars[113], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k242, env)}),
      _var2);
 }
}
__attribute__((used)) static void _V20Case3__V0vanity_V0core_V20_lambda98(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, ...) {
 static VDebugInfo dbg = { "_V20Case3__V0vanity_V0core_V20_lambda98" };
 VRecordCall2(runtime, &dbg);
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 2, argc, _var1);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case3__V0vanity_V0core_V20_lambda98, runtime, upenv, 2, argc, _var0, _var1, _varargs) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _varargs;
  // ((bruijn car 1 45) (close _V0vanity_V0core_V20_k249) (bruijn vecs 0 2))
    V_CALL(upenv->vars[45], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k249, env)}),
      _varargs);
 }
}
void _V0vanity_V0core_V20_lambda98(VRuntime * runtime, VEnv * upenv, int argc, ...);
asm(
".intel_syntax noprefix\n"
#ifdef __linux__
".type _V0vanity_V0core_V20_lambda98, @function\n"
#endif
"_V0vanity_V0core_V20_lambda98:\n"
"    cmp " ARGC_REG ", 3\n"
"    je _V20Case0__V0vanity_V0core_V20_lambda98\n"
"    cmp " ARGC_REG ", 4\n"
"    je _V20Case1__V0vanity_V0core_V20_lambda98\n"
"    cmp " ARGC_REG ", 5\n"
"    je _V20Case2__V0vanity_V0core_V20_lambda98\n"
"    cmp " ARGC_REG ", 2\n"
"    jge _V20Case3__V0vanity_V0core_V20_lambda98\n"
"    jmp _V20CaseError__V0vanity_V0core_V20_lambda98\n"
);
__attribute__((used)) static void _V20CaseError__V0vanity_V0core_V20_lambda104(VRuntime * runtime, VEnv * upenv, int argc, ...) {
 // (_V0vanity_V0core_V20_lambda104 #t (1 (##vcore.make-hash-table (bruijn ##k.501 0 0) (##intrinsic ##vcore.eq?) #f 32)) (2 (##vcore.make-hash-table (bruijn ##k.502 0 0) (bruijn eq 0 1) #f 32)) (3 (##vcore.make-hash-table (bruijn ##k.503 0 0) (bruijn eq 0 1) (bruijn hash 0 2) 32)) (4 (##vcore.make-hash-table (bruijn ##k.504 0 0) (bruijn eq 0 1) (bruijn hash 0 2) (bruijn len 0 3))))
 VError("Not enough arguments to _V0vanity_V0core_V20_lambda104, got ~D~N"
 "-- expected 1~N"
 "-- expected 2~N"
 "-- expected 3~N"
 "-- expected 4~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V0vanity_V0core_V20_lambda104(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V20Case0__V0vanity_V0core_V20_lambda104" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case0__V0vanity_V0core_V20_lambda104, runtime, upenv, 1, argc, _var0) {
  // (##vcore.make-hash-table (bruijn ##k.501 0 0) (##intrinsic ##vcore.eq?) #f 32)
    V_CALL_FUNC(VMakeHashTable, NULL, runtime,
      _var0,
      _V40_V10vcore_Deq_Q,
      VEncodeBool(false),
      VEncodeInt(32l));
 }
}
__attribute__((used)) static void _V20Case1__V0vanity_V0core_V20_lambda104(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V20Case1__V0vanity_V0core_V20_lambda104" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case1__V0vanity_V0core_V20_lambda104, runtime, upenv, 2, argc, _var0, _var1) {
  // (##vcore.make-hash-table (bruijn ##k.502 0 0) (bruijn eq 0 1) #f 32)
    V_CALL_FUNC(VMakeHashTable, NULL, runtime,
      _var0,
      _var1,
      VEncodeBool(false),
      VEncodeInt(32l));
 }
}
__attribute__((used)) static void _V20Case2__V0vanity_V0core_V20_lambda104(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V20Case2__V0vanity_V0core_V20_lambda104" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case2__V0vanity_V0core_V20_lambda104, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  // (##vcore.make-hash-table (bruijn ##k.503 0 0) (bruijn eq 0 1) (bruijn hash 0 2) 32)
    V_CALL_FUNC(VMakeHashTable, NULL, runtime,
      _var0,
      _var1,
      _var2,
      VEncodeInt(32l));
 }
}
__attribute__((used)) static void _V20Case3__V0vanity_V0core_V20_lambda104(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V20Case3__V0vanity_V0core_V20_lambda104" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case3__V0vanity_V0core_V20_lambda104, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  // (##vcore.make-hash-table (bruijn ##k.504 0 0) (bruijn eq 0 1) (bruijn hash 0 2) (bruijn len 0 3))
    V_CALL_FUNC(VMakeHashTable, NULL, runtime,
      _var0,
      _var1,
      _var2,
      _var3);
 }
}
void _V0vanity_V0core_V20_lambda104(VRuntime * runtime, VEnv * upenv, int argc, ...);
asm(
".intel_syntax noprefix\n"
#ifdef __linux__
".type _V0vanity_V0core_V20_lambda104, @function\n"
#endif
"_V0vanity_V0core_V20_lambda104:\n"
"    cmp " ARGC_REG ", 1\n"
"    je _V20Case0__V0vanity_V0core_V20_lambda104\n"
"    cmp " ARGC_REG ", 2\n"
"    je _V20Case1__V0vanity_V0core_V20_lambda104\n"
"    cmp " ARGC_REG ", 3\n"
"    je _V20Case2__V0vanity_V0core_V20_lambda104\n"
"    cmp " ARGC_REG ", 4\n"
"    je _V20Case3__V0vanity_V0core_V20_lambda104\n"
"    jmp _V20CaseError__V0vanity_V0core_V20_lambda104\n"
);
static void _V0vanity_V0core_V20_lambda106(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_lambda106" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_lambda106, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_lambda106, runtime, upenv, 1, argc, _var0) {
  // ((bruijn error 2 166) (bruijn ##k.506 0 0) (##string ##string.1053) (bruijn key 1 2))
    V_CALL(upenv->up->vars[166], runtime,
      _var0,
      VEncodePointer(&_V10string_D1053.sym, VPOINTER_OTHER),
      upenv->vars[2]);
 }
}
__attribute__((used)) static void _V20CaseError__V0vanity_V0core_V20_lambda105(VRuntime * runtime, VEnv * upenv, int argc, ...) {
 // (_V0vanity_V0core_V20_lambda105 #t (3 (##vcore.hash-table-ref (bruijn ##k.505 0 0) (bruijn table 0 1) (bruijn key 0 2) (close _V0vanity_V0core_V20_lambda106))) (4 (##vcore.hash-table-ref (bruijn ##k.507 0 0) (bruijn table 0 1) (bruijn key 0 2) (bruijn thunk 0 3))))
 VError("Not enough arguments to _V0vanity_V0core_V20_lambda105, got ~D~N"
 "-- expected 3~N"
 "-- expected 4~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V0vanity_V0core_V20_lambda105(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V20Case0__V0vanity_V0core_V20_lambda105" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case0__V0vanity_V0core_V20_lambda105, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // (##vcore.hash-table-ref (bruijn ##k.505 0 0) (bruijn table 0 1) (bruijn key 0 2) (close _V0vanity_V0core_V20_lambda106))
    V_CALL_FUNC(VHashTableRef, NULL, runtime,
      _var0,
      _var1,
      _var2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_lambda106, env)}));
 }
}
__attribute__((used)) static void _V20Case1__V0vanity_V0core_V20_lambda105(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V20Case1__V0vanity_V0core_V20_lambda105" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case1__V0vanity_V0core_V20_lambda105, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  // (##vcore.hash-table-ref (bruijn ##k.507 0 0) (bruijn table 0 1) (bruijn key 0 2) (bruijn thunk 0 3))
    V_CALL_FUNC(VHashTableRef, NULL, runtime,
      _var0,
      _var1,
      _var2,
      _var3);
 }
}
void _V0vanity_V0core_V20_lambda105(VRuntime * runtime, VEnv * upenv, int argc, ...);
asm(
".intel_syntax noprefix\n"
#ifdef __linux__
".type _V0vanity_V0core_V20_lambda105, @function\n"
#endif
"_V0vanity_V0core_V20_lambda105:\n"
"    cmp " ARGC_REG ", 3\n"
"    je _V20Case0__V0vanity_V0core_V20_lambda105\n"
"    cmp " ARGC_REG ", 4\n"
"    je _V20Case1__V0vanity_V0core_V20_lambda105\n"
"    jmp _V20CaseError__V0vanity_V0core_V20_lambda105\n"
);
static void _V0vanity_V0core_V20_lambda109(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_lambda109" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0vanity_V0core_V20_lambda109, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_lambda109, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  // (if (bruijn ok 0 2) ((bruijn ##k.512 0 0) (bruijn ret 0 1)) ((bruijn error 4 166) (bruijn ##k.512 0 0) (bruijn msg 3 2)))
if(VDecodeBool(
_var2)) {
    V_CALL(_var0, runtime,
      _var1);
} else {
    V_CALL(upenv->up->up->up->vars[166], runtime,
      _var0,
      upenv->up->up->vars[2]);
}
 }
}
static void _V0vanity_V0core_V20_k255(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k255" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k255, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k255, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn call-with-values 3 147) (bruijn ##k.510 1 0) (bruijn thunk 2 1) (close _V0vanity_V0core_V20_lambda109))
    V_CALL(upenv->up->up->vars[147], runtime,
      upenv->vars[0],
      upenv->up->vars[1],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_lambda109, env)}));
 }
}
static void _V0vanity_V0core_V20_lambda108(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_lambda108" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0vanity_V0core_V20_lambda108, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_lambda108, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // (if (bruijn ok 0 2) ((bruijn ##k.510 0 0) (bruijn ret 0 1)) (##vcore.garbage-collect (close _V0vanity_V0core_V20_k255) #t))
if(VDecodeBool(
_var2)) {
    V_CALL(_var0, runtime,
      _var1);
} else {
    V_CALL_FUNC(VGarbageCollect, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k255, env)}),
      VEncodeBool(true));
}
 }
}
static void _V0vanity_V0core_V20_lambda107(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_lambda107" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0vanity_V0core_V20_lambda107, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_lambda107, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn call-with-values 1 147) (bruijn ##k.509 0 0) (bruijn thunk 0 1) (close _V0vanity_V0core_V20_lambda108))
    V_CALL(upenv->vars[147], runtime,
      _var0,
      _var1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_lambda108, env)}));
 }
}
static void _V0vanity_V0core_V20_k256(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k256" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k256, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k256, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.514 0 0) (##vcore.finalize! (bruijn ##k.513 1 0) (bruijn port 1 1)) (##vcore.close-stream (bruijn ##k.513 1 0) (bruijn port 1 1)))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(VFinalize, NULL, runtime,
      upenv->vars[0],
      upenv->vars[1]);
} else {
    V_CALL_FUNC(VCloseStream2, NULL, runtime,
      upenv->vars[0],
      upenv->vars[1]);
}
 }
}
static void _V0vanity_V0core_V20_lambda110(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_lambda110" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0vanity_V0core_V20_lambda110, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_lambda110, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (##vcore.has-finalizer? (close _V0vanity_V0core_V20_k256) (bruijn port 0 1))
    V_CALL_FUNC(VHasFinalizer, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k256, env)}),
      _var1);
 }
}
static void _V0vanity_V0core_V20_lambda112(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_lambda112" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_lambda112, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_lambda112, runtime, upenv, 1, argc, _var0) {
  // (##vcore.open-input-stream (bruijn ##k.516 0 0) (bruijn path 1 1))
    V_CALL_FUNC(VOpenInputStream2, NULL, runtime,
      _var0,
      upenv->vars[1]);
 }
}
static void _V0vanity_V0core_V20_k257(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k257" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k257, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k257, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ret 1 1) (##vcore.set-finalizer! (bruijn ##k.519 0 0) (bruijn ret 1 1) (##intrinsic ##vcore.close-stream)) ((bruijn ##k.519 0 0) #f))
if(VDecodeBool(
upenv->vars[1])) {
    V_CALL_FUNC(VSetFinalizer, NULL, runtime,
      _var0,
      upenv->vars[1],
      _V40_V10vcore_Dclose__stream);
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0core_V20_k258(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k258" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k258, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k258, runtime, upenv, 1, argc, _var0) {
  // ((bruijn values 3 149) (bruijn ##k.517 1 0) (bruijn ret 1 1) (bruijn ok 1 2))
    V_CALL(upenv->up->up->vars[149], runtime,
      upenv->vars[0],
      upenv->vars[1],
      upenv->vars[2]);
 }
}
static void _V0vanity_V0core_V20_lambda113(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_lambda113" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0vanity_V0core_V20_lambda113, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_lambda113, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((close _V0vanity_V0core_V20_k257) (close _V0vanity_V0core_V20_k258))
    V_CALL_FUNC(_V0vanity_V0core_V20_k257, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k258, env)}));
 }
}
static void _V0vanity_V0core_V20_lambda111(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_lambda111" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0vanity_V0core_V20_lambda111, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_lambda111, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn call-with-values 1 147) (bruijn ##k.515 0 0) (close _V0vanity_V0core_V20_lambda112) (close _V0vanity_V0core_V20_lambda113))
    V_CALL(upenv->vars[147], runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_lambda112, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_lambda113, env)}));
 }
}
static void _V0vanity_V0core_V20_lambda115(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_lambda115" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_lambda115, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_lambda115, runtime, upenv, 1, argc, _var0) {
  // (##vcore.open-output-stream (bruijn ##k.521 0 0) (bruijn path 1 1))
    V_CALL_FUNC(VOpenOutputStream2, NULL, runtime,
      _var0,
      upenv->vars[1]);
 }
}
static void _V0vanity_V0core_V20_k259(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k259" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k259, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k259, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ret 1 1) (##vcore.set-finalizer! (bruijn ##k.524 0 0) (bruijn ret 1 1) (##intrinsic ##vcore.close-stream)) ((bruijn ##k.524 0 0) #f))
if(VDecodeBool(
upenv->vars[1])) {
    V_CALL_FUNC(VSetFinalizer, NULL, runtime,
      _var0,
      upenv->vars[1],
      _V40_V10vcore_Dclose__stream);
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0core_V20_k260(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k260" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k260, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k260, runtime, upenv, 1, argc, _var0) {
  // ((bruijn values 3 149) (bruijn ##k.522 1 0) (bruijn ret 1 1) (bruijn ok 1 2))
    V_CALL(upenv->up->up->vars[149], runtime,
      upenv->vars[0],
      upenv->vars[1],
      upenv->vars[2]);
 }
}
static void _V0vanity_V0core_V20_lambda116(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_lambda116" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0vanity_V0core_V20_lambda116, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_lambda116, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((close _V0vanity_V0core_V20_k259) (close _V0vanity_V0core_V20_k260))
    V_CALL_FUNC(_V0vanity_V0core_V20_k259, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k260, env)}));
 }
}
static void _V0vanity_V0core_V20_lambda114(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_lambda114" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0vanity_V0core_V20_lambda114, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_lambda114, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn call-with-values 1 147) (bruijn ##k.520 0 0) (close _V0vanity_V0core_V20_lambda115) (close _V0vanity_V0core_V20_lambda116))
    V_CALL(upenv->vars[147], runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_lambda115, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_lambda116, env)}));
 }
}
static void _V0vanity_V0core_V20_k261(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k261" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k261, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k261, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ret 1 1) (##vcore.set-finalizer! (bruijn ##k.529 0 0) (bruijn ret 1 1) (##intrinsic ##vcore.close-stream)) ((bruijn ##k.529 0 0) #f))
if(VDecodeBool(
upenv->vars[1])) {
    V_CALL_FUNC(VSetFinalizer, NULL, runtime,
      _var0,
      upenv->vars[1],
      _V40_V10vcore_Dclose__stream);
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0core_V20_k262(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k262" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k262, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k262, runtime, upenv, 1, argc, _var0) {
  // ((bruijn values 3 149) (bruijn ##k.527 1 0) (bruijn ret 1 1) (bruijn ok 1 2))
    V_CALL(upenv->up->up->vars[149], runtime,
      upenv->vars[0],
      upenv->vars[1],
      upenv->vars[2]);
 }
}
static void _V0vanity_V0core_V20_lambda118(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_lambda118" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0vanity_V0core_V20_lambda118, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_lambda118, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((close _V0vanity_V0core_V20_k261) (close _V0vanity_V0core_V20_k262))
    V_CALL_FUNC(_V0vanity_V0core_V20_k261, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k262, env)}));
 }
}
static void _V0vanity_V0core_V20_lambda117(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_lambda117" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_lambda117, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_lambda117, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn call-with-values 1 147) (bruijn ##k.525 0 0) (##intrinsic ##vcore.open-output-string) (close _V0vanity_V0core_V20_lambda118))
    V_CALL(upenv->vars[147], runtime,
      _var0,
      _V40_V10vcore_Dopen__output__string,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_lambda118, env)}));
 }
}
static void _V0vanity_V0core_V20_lambda120(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_lambda120" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_lambda120, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_lambda120, runtime, upenv, 1, argc, _var0) {
  // ((bruijn open-input-file-impl 2 127) (bruijn ##k.531 0 0) (bruijn path 1 1))
    V_CALL(upenv->up->vars[127], runtime,
      _var0,
      upenv->vars[1]);
 }
}
static void _V0vanity_V0core_V20_lambda119(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_lambda119" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0vanity_V0core_V20_lambda119, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_lambda119, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn try-or-gc 1 125) (bruijn ##k.530 0 0) (close _V0vanity_V0core_V20_lambda120) (##string ##string.1054))
    V_CALL(upenv->vars[125], runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_lambda120, env)}),
      VEncodePointer(&_V10string_D1054.sym, VPOINTER_OTHER));
 }
}
static void _V0vanity_V0core_V20_lambda122(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_lambda122" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_lambda122, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_lambda122, runtime, upenv, 1, argc, _var0) {
  // ((bruijn open-output-file-impl 2 128) (bruijn ##k.533 0 0) (bruijn path 1 1))
    V_CALL(upenv->up->vars[128], runtime,
      _var0,
      upenv->vars[1]);
 }
}
static void _V0vanity_V0core_V20_lambda121(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_lambda121" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0vanity_V0core_V20_lambda121, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_lambda121, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn try-or-gc 1 125) (bruijn ##k.532 0 0) (close _V0vanity_V0core_V20_lambda122) (##string ##string.1055))
    V_CALL(upenv->vars[125], runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_lambda122, env)}),
      VEncodePointer(&_V10string_D1055.sym, VPOINTER_OTHER));
 }
}
static void _V0vanity_V0core_V20_lambda123(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_lambda123" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_lambda123, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_lambda123, runtime, upenv, 1, argc, _var0) {
  // ((bruijn try-or-gc 1 125) (bruijn ##k.534 0 0) (bruijn open-output-string-impl 1 129) (##string ##string.1056))
    V_CALL(upenv->vars[125], runtime,
      _var0,
      upenv->vars[129],
      VEncodePointer(&_V10string_D1056.sym, VPOINTER_OTHER));
 }
}
static void _V0vanity_V0core_V20_k268(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k268" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k268, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k268, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##k.535 7 0) (bruijn ret 2 0))
    V_CALL(VGetArg(upenv, 7-1, 0), runtime,
      upenv->up->vars[0]);
 }
}
static void _V0vanity_V0core_V20_k267(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k267" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k267, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k267, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn close-port 7 126) (close _V0vanity_V0core_V20_k268) (bruijn port 3 0))
    V_CALL(VGetArg(upenv, 7-1, 126), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k268, env)}),
      upenv->up->up->vars[0]);
 }
}
static void _V0vanity_V0core_V20_k266(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k266" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k266, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k266, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn current-output-port 6 122) (close _V0vanity_V0core_V20_k267) (bruijn stdout 2 1))
    V_CALL(VGetArg(upenv, 6-1, 122), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k267, env)}),
      upenv->up->vars[1]);
 }
}
static void _V0vanity_V0core_V20_k265(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k265" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k265, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k265, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn thunk 4 2) (close _V0vanity_V0core_V20_k266))
    V_CALL(upenv->up->up->up->vars[2], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k266, env)}));
 }
}
static void _V0vanity_V0core_V20_lambda125(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_lambda125" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_lambda125, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn current-output-port 4 122) (close _V0vanity_V0core_V20_k265) (bruijn port 0 0))
    V_CALL(upenv->up->up->up->vars[122], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k265, env)}),
      _var0);
 }
}
static void _V0vanity_V0core_V20_k264(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k264" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k264, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k264, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0core_V20_lambda125) (bruijn ##x.536 1 0) (bruijn ##x.537 0 0))
    V_CALL_FUNC(_V0vanity_V0core_V20_lambda125, env, runtime,
      upenv->vars[0],
      _var0);
 }
}
static void _V0vanity_V0core_V20_k263(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k263" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k263, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k263, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn current-output-port 2 122) (close _V0vanity_V0core_V20_k264))
    V_CALL(upenv->up->vars[122], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k264, env)}));
 }
}
static void _V0vanity_V0core_V20_lambda124(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_lambda124" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0vanity_V0core_V20_lambda124, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_lambda124, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn open-output-file 1 131) (close _V0vanity_V0core_V20_k263) (bruijn str 0 1))
    V_CALL(upenv->vars[131], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k263, env)}),
      _var1);
 }
}
static void _V0vanity_V0core_V20_k274(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k274" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k274, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k274, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##k.541 7 0) (bruijn ret 2 0))
    V_CALL(VGetArg(upenv, 7-1, 0), runtime,
      upenv->up->vars[0]);
 }
}
static void _V0vanity_V0core_V20_k273(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k273" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k273, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k273, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn close-port 7 126) (close _V0vanity_V0core_V20_k274) (bruijn port 3 0))
    V_CALL(VGetArg(upenv, 7-1, 126), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k274, env)}),
      upenv->up->up->vars[0]);
 }
}
static void _V0vanity_V0core_V20_k272(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k272" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k272, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k272, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn current-input-port 6 124) (close _V0vanity_V0core_V20_k273) (bruijn stdout 2 1))
    V_CALL(VGetArg(upenv, 6-1, 124), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k273, env)}),
      upenv->up->vars[1]);
 }
}
static void _V0vanity_V0core_V20_k271(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k271" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k271, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k271, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn thunk 4 2) (close _V0vanity_V0core_V20_k272))
    V_CALL(upenv->up->up->up->vars[2], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k272, env)}));
 }
}
static void _V0vanity_V0core_V20_lambda127(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_lambda127" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_lambda127, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn current-input-port 4 124) (close _V0vanity_V0core_V20_k271) (bruijn port 0 0))
    V_CALL(upenv->up->up->up->vars[124], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k271, env)}),
      _var0);
 }
}
static void _V0vanity_V0core_V20_k270(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k270" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k270, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k270, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0core_V20_lambda127) (bruijn ##x.542 1 0) (bruijn ##x.543 0 0))
    V_CALL_FUNC(_V0vanity_V0core_V20_lambda127, env, runtime,
      upenv->vars[0],
      _var0);
 }
}
static void _V0vanity_V0core_V20_k269(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k269" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k269, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k269, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn current-input-port 2 124) (close _V0vanity_V0core_V20_k270))
    V_CALL(upenv->up->vars[124], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k270, env)}));
 }
}
static void _V0vanity_V0core_V20_lambda126(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_lambda126" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0vanity_V0core_V20_lambda126, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_lambda126, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn open-input-file 1 130) (close _V0vanity_V0core_V20_k269) (bruijn str 0 1))
    V_CALL(upenv->vars[130], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k269, env)}),
      _var1);
 }
}
static void _V0vanity_V0core_V20_k275(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k275" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k275, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k275, runtime, upenv, 1, argc, _var0) {
  // (##vcore.read-char (bruijn ##k.547 1 0) (bruijn ##x.548 0 0))
    V_CALL_FUNC(VReadChar2, NULL, runtime,
      upenv->vars[0],
      _var0);
 }
}
__attribute__((used)) static void _V20CaseError__V0vanity_V0core_V20_lambda128(VRuntime * runtime, VEnv * upenv, int argc, ...) {
 // (_V0vanity_V0core_V20_lambda128 #t (1 ((bruijn current-input-port 1 124) (close _V0vanity_V0core_V20_k275))) (2 (##vcore.read-char (bruijn ##k.549 0 0) (bruijn port 0 1))))
 VError("Not enough arguments to _V0vanity_V0core_V20_lambda128, got ~D~N"
 "-- expected 1~N"
 "-- expected 2~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V0vanity_V0core_V20_lambda128(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V20Case0__V0vanity_V0core_V20_lambda128" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case0__V0vanity_V0core_V20_lambda128, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn current-input-port 1 124) (close _V0vanity_V0core_V20_k275))
    V_CALL(upenv->vars[124], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k275, env)}));
 }
}
__attribute__((used)) static void _V20Case1__V0vanity_V0core_V20_lambda128(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V20Case1__V0vanity_V0core_V20_lambda128" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case1__V0vanity_V0core_V20_lambda128, runtime, upenv, 2, argc, _var0, _var1) {
  // (##vcore.read-char (bruijn ##k.549 0 0) (bruijn port 0 1))
    V_CALL_FUNC(VReadChar2, NULL, runtime,
      _var0,
      _var1);
 }
}
void _V0vanity_V0core_V20_lambda128(VRuntime * runtime, VEnv * upenv, int argc, ...);
asm(
".intel_syntax noprefix\n"
#ifdef __linux__
".type _V0vanity_V0core_V20_lambda128, @function\n"
#endif
"_V0vanity_V0core_V20_lambda128:\n"
"    cmp " ARGC_REG ", 1\n"
"    je _V20Case0__V0vanity_V0core_V20_lambda128\n"
"    cmp " ARGC_REG ", 2\n"
"    je _V20Case1__V0vanity_V0core_V20_lambda128\n"
"    jmp _V20CaseError__V0vanity_V0core_V20_lambda128\n"
);
static void _V0vanity_V0core_V20_k276(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k276" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k276, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k276, runtime, upenv, 1, argc, _var0) {
  // (##vcore.read-line (bruijn ##k.550 1 0) (bruijn ##x.551 0 0))
    V_CALL_FUNC(VReadLine2, NULL, runtime,
      upenv->vars[0],
      _var0);
 }
}
__attribute__((used)) static void _V20CaseError__V0vanity_V0core_V20_lambda129(VRuntime * runtime, VEnv * upenv, int argc, ...) {
 // (_V0vanity_V0core_V20_lambda129 #t (1 ((bruijn current-input-port 1 124) (close _V0vanity_V0core_V20_k276))) (2 (##vcore.read-line (bruijn ##k.552 0 0) (bruijn port 0 1))))
 VError("Not enough arguments to _V0vanity_V0core_V20_lambda129, got ~D~N"
 "-- expected 1~N"
 "-- expected 2~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V0vanity_V0core_V20_lambda129(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V20Case0__V0vanity_V0core_V20_lambda129" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case0__V0vanity_V0core_V20_lambda129, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn current-input-port 1 124) (close _V0vanity_V0core_V20_k276))
    V_CALL(upenv->vars[124], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k276, env)}));
 }
}
__attribute__((used)) static void _V20Case1__V0vanity_V0core_V20_lambda129(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V20Case1__V0vanity_V0core_V20_lambda129" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case1__V0vanity_V0core_V20_lambda129, runtime, upenv, 2, argc, _var0, _var1) {
  // (##vcore.read-line (bruijn ##k.552 0 0) (bruijn port 0 1))
    V_CALL_FUNC(VReadLine2, NULL, runtime,
      _var0,
      _var1);
 }
}
void _V0vanity_V0core_V20_lambda129(VRuntime * runtime, VEnv * upenv, int argc, ...);
asm(
".intel_syntax noprefix\n"
#ifdef __linux__
".type _V0vanity_V0core_V20_lambda129, @function\n"
#endif
"_V0vanity_V0core_V20_lambda129:\n"
"    cmp " ARGC_REG ", 1\n"
"    je _V20Case0__V0vanity_V0core_V20_lambda129\n"
"    cmp " ARGC_REG ", 2\n"
"    je _V20Case1__V0vanity_V0core_V20_lambda129\n"
"    jmp _V20CaseError__V0vanity_V0core_V20_lambda129\n"
);
static void _V0vanity_V0core_V20_k277(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k277" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k277, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k277, runtime, upenv, 1, argc, _var0) {
  // (##vcore.read (bruijn ##k.553 1 0) (bruijn ##x.554 0 0))
    V_CALL_FUNC(VRead2, NULL, runtime,
      upenv->vars[0],
      _var0);
 }
}
__attribute__((used)) static void _V20CaseError__V0vanity_V0core_V20_lambda130(VRuntime * runtime, VEnv * upenv, int argc, ...) {
 // (_V0vanity_V0core_V20_lambda130 #t (1 ((bruijn current-input-port 1 124) (close _V0vanity_V0core_V20_k277))) (2 (##vcore.read (bruijn ##k.555 0 0) (bruijn port 0 1))))
 VError("Not enough arguments to _V0vanity_V0core_V20_lambda130, got ~D~N"
 "-- expected 1~N"
 "-- expected 2~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V0vanity_V0core_V20_lambda130(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V20Case0__V0vanity_V0core_V20_lambda130" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case0__V0vanity_V0core_V20_lambda130, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn current-input-port 1 124) (close _V0vanity_V0core_V20_k277))
    V_CALL(upenv->vars[124], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k277, env)}));
 }
}
__attribute__((used)) static void _V20Case1__V0vanity_V0core_V20_lambda130(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V20Case1__V0vanity_V0core_V20_lambda130" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case1__V0vanity_V0core_V20_lambda130, runtime, upenv, 2, argc, _var0, _var1) {
  // (##vcore.read (bruijn ##k.555 0 0) (bruijn port 0 1))
    V_CALL_FUNC(VRead2, NULL, runtime,
      _var0,
      _var1);
 }
}
void _V0vanity_V0core_V20_lambda130(VRuntime * runtime, VEnv * upenv, int argc, ...);
asm(
".intel_syntax noprefix\n"
#ifdef __linux__
".type _V0vanity_V0core_V20_lambda130, @function\n"
#endif
"_V0vanity_V0core_V20_lambda130:\n"
"    cmp " ARGC_REG ", 1\n"
"    je _V20Case0__V0vanity_V0core_V20_lambda130\n"
"    cmp " ARGC_REG ", 2\n"
"    je _V20Case1__V0vanity_V0core_V20_lambda130\n"
"    jmp _V20CaseError__V0vanity_V0core_V20_lambda130\n"
);
static void _V0vanity_V0core_V20_k278(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k278" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k278, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k278, runtime, upenv, 1, argc, _var0) {
  // (##vcore.newline (bruijn ##k.556 1 0) (bruijn ##x.557 0 0))
    V_CALL_FUNC(VNewline2, NULL, runtime,
      upenv->vars[0],
      _var0);
 }
}
__attribute__((used)) static void _V20CaseError__V0vanity_V0core_V20_lambda131(VRuntime * runtime, VEnv * upenv, int argc, ...) {
 // (_V0vanity_V0core_V20_lambda131 #t (1 ((bruijn current-output-port 1 122) (close _V0vanity_V0core_V20_k278))) (2 (##vcore.newline (bruijn ##k.558 0 0) (bruijn port 0 1))))
 VError("Not enough arguments to _V0vanity_V0core_V20_lambda131, got ~D~N"
 "-- expected 1~N"
 "-- expected 2~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V0vanity_V0core_V20_lambda131(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V20Case0__V0vanity_V0core_V20_lambda131" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case0__V0vanity_V0core_V20_lambda131, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn current-output-port 1 122) (close _V0vanity_V0core_V20_k278))
    V_CALL(upenv->vars[122], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k278, env)}));
 }
}
__attribute__((used)) static void _V20Case1__V0vanity_V0core_V20_lambda131(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V20Case1__V0vanity_V0core_V20_lambda131" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case1__V0vanity_V0core_V20_lambda131, runtime, upenv, 2, argc, _var0, _var1) {
  // (##vcore.newline (bruijn ##k.558 0 0) (bruijn port 0 1))
    V_CALL_FUNC(VNewline2, NULL, runtime,
      _var0,
      _var1);
 }
}
void _V0vanity_V0core_V20_lambda131(VRuntime * runtime, VEnv * upenv, int argc, ...);
asm(
".intel_syntax noprefix\n"
#ifdef __linux__
".type _V0vanity_V0core_V20_lambda131, @function\n"
#endif
"_V0vanity_V0core_V20_lambda131:\n"
"    cmp " ARGC_REG ", 1\n"
"    je _V20Case0__V0vanity_V0core_V20_lambda131\n"
"    cmp " ARGC_REG ", 2\n"
"    je _V20Case1__V0vanity_V0core_V20_lambda131\n"
"    jmp _V20CaseError__V0vanity_V0core_V20_lambda131\n"
);
static void _V0vanity_V0core_V20_k286(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k286" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k286, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k286, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 6 0) (bruijn ##k.563 5 0) (bruijn ##x.567 0 0))
    V_CALL(VGetArg(upenv, 6-1, 0), runtime,
      VGetArg(upenv, 5-1, 0),
      _var0);
 }
}
static void _V0vanity_V0core_V20_k285(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k285" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k285, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k285, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn cdr 10 46) (close _V0vanity_V0core_V20_k286) (bruijn xs 4 1))
    V_CALL(VGetArg(upenv, 10-1, 46), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k286, env)}),
      upenv->up->up->up->vars[1]);
 }
}
static void _V0vanity_V0core_V20_k284(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k284" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k284, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k284, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn printout 9 142) (close _V0vanity_V0core_V20_k285) (bruijn ##x.568 0 0) (bruijn write? 8 2) (bruijn port 8 3))
    V_CALL(VGetArg(upenv, 9-1, 142), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k285, env)}),
      _var0,
      VGetArg(upenv, 8-1, 2),
      VGetArg(upenv, 8-1, 3));
 }
}
static void _V0vanity_V0core_V20_k283(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k283" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k283, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k283, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn car 8 45) (close _V0vanity_V0core_V20_k284) (bruijn xs 2 1))
    V_CALL(VGetArg(upenv, 8-1, 45), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k284, env)}),
      upenv->up->vars[1]);
 }
}
static void _V0vanity_V0core_V20_k288(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k288" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k288, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k288, runtime, upenv, 1, argc, _var0) {
  // ((bruijn printout 9 142) (bruijn ##k.563 3 0) (bruijn xs 3 1) (bruijn write? 8 2) (bruijn port 8 3))
    V_CALL(VGetArg(upenv, 9-1, 142), runtime,
      upenv->up->up->vars[0],
      upenv->up->up->vars[1],
      VGetArg(upenv, 8-1, 2),
      VGetArg(upenv, 8-1, 3));
 }
}
static void _V0vanity_V0core_V20_k287(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k287" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k287, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k287, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.569 0 0) ((bruijn ##k.563 2 0) 'ok) (##vcore.display-word (close _V0vanity_V0core_V20_k288) (##string ##string.1058) (bruijn port 7 3)))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->up->vars[0], runtime,
      _V0ok);
} else {
    V_CALL_FUNC(VDisplay2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k288, env)}),
      VEncodePointer(&_V10string_D1058.sym, VPOINTER_OTHER),
      VGetArg(upenv, 7-1, 3));
}
 }
}
static void _V0vanity_V0core_V20_k282(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k282" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k282, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k282, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.564 0 0) (##vcore.display-word (close _V0vanity_V0core_V20_k283) (##string ##string.1057) (bruijn port 6 3)) ((bruijn null? 7 0) (close _V0vanity_V0core_V20_k287) (bruijn xs 1 1)))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(VDisplay2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k283, env)}),
      VEncodePointer(&_V10string_D1057.sym, VPOINTER_OTHER),
      VGetArg(upenv, 6-1, 3));
} else {
    V_CALL(VGetArg(upenv, 7-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k287, env)}),
      upenv->vars[1]);
}
 }
}
static void _V0vanity_V0core_V20_lambda133(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_lambda133" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0vanity_V0core_V20_lambda133, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_lambda133, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn pair? 6 3) (close _V0vanity_V0core_V20_k282) (bruijn xs 0 1))
    V_CALL(VGetArg(upenv, 6-1, 3), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k282, env)}),
      _var1);
 }
}
static void _V0vanity_V0core_V20_k290(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k290" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k290, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k290, runtime, upenv, 1, argc, _var0) {
  // (##vcore.display-word (bruijn ##k.559 6 0) (##string ##string.1059) (bruijn port 6 3))
    V_CALL_FUNC(VDisplay2, NULL, runtime,
      VGetArg(upenv, 6-1, 0),
      VEncodePointer(&_V10string_D1059.sym, VPOINTER_OTHER),
      VGetArg(upenv, 6-1, 3));
 }
}
static void _V0vanity_V0core_V20_k289(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k289" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k289, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k289, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn loop 1 0) (close _V0vanity_V0core_V20_k290) (bruijn ##x.571 0 0))
    V_CALL(upenv->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k290, env)}),
      _var0);
 }
}
static void _V0vanity_V0core_V20_k281(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k281" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k281, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k281, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (letrec 1 ((close _V0vanity_V0core_V20_lambda133)) ((bruijn cdr 5 46) (close _V0vanity_V0core_V20_k289) (bruijn x 4 1)))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_lambda133, env)});
    V_CALL(VGetArg(upenv, 5-1, 46), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k289, env)}),
      upenv->up->up->up->vars[1]);
    }
 }
}
static void _V0vanity_V0core_V20_k280(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k280" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k280, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k280, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn printout 3 142) (close _V0vanity_V0core_V20_k281) (bruijn ##x.572 0 0) (bruijn write? 2 2) (bruijn port 2 3))
    V_CALL(upenv->up->up->vars[142], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k281, env)}),
      _var0,
      upenv->up->vars[2],
      upenv->up->vars[3]);
 }
}
static void _V0vanity_V0core_V20_k279(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k279" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k279, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k279, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn car 2 45) (close _V0vanity_V0core_V20_k280) (bruijn x 1 1))
    V_CALL(upenv->up->vars[45], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k280, env)}),
      upenv->vars[1]);
 }
}
static void _V0vanity_V0core_V20_lambda132(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_lambda132" };
 VRecordCall2(runtime, &dbg);
 if(argc != 4) {
  VError("Not enough arguments to _V0vanity_V0core_V20_lambda132, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_lambda132, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // (##vcore.display-word (close _V0vanity_V0core_V20_k279) (##string ##string.1060) (bruijn port 0 3))
    V_CALL_FUNC(VDisplay2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k279, env)}),
      VEncodePointer(&_V10string_D1060.sym, VPOINTER_OTHER),
      _var3);
 }
}
static void _V0vanity_V0core_V20_k295(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k295" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k295, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k295, runtime, upenv, 1, argc, _var0) {
  // ((bruijn printout 6 142) (bruijn ##k.573 5 0) (bruijn ##x.575 0 0) (bruijn write? 5 2) (bruijn port 5 3))
    V_CALL(VGetArg(upenv, 6-1, 142), runtime,
      VGetArg(upenv, 5-1, 0),
      _var0,
      VGetArg(upenv, 5-1, 2),
      VGetArg(upenv, 5-1, 3));
 }
}
static void _V0vanity_V0core_V20_k294(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k294" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k294, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k294, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn cadr 5 50) (close _V0vanity_V0core_V20_k295) (bruijn x 4 1))
    V_CALL(VGetArg(upenv, 5-1, 50), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k295, env)}),
      upenv->up->up->up->vars[1]);
 }
}
static void _V0vanity_V0core_V20_k293(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k293" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k293, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k293, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.display-word (close _V0vanity_V0core_V20_k294) (bruijn ##x.576 0 0) (bruijn port 3 3))
    V_CALL_FUNC(VDisplay2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k294, env)}),
      _var0,
      upenv->up->up->vars[3]);
 }
}
static void _V0vanity_V0core_V20_k292(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k292" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k292, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k292, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn cdr 3 46) (close _V0vanity_V0core_V20_k293) (bruijn ##x.577 0 0))
    V_CALL(upenv->up->up->vars[46], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k293, env)}),
      _var0);
 }
}
static void _V0vanity_V0core_V20_k291(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k291" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k291, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k291, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn assv 2 94) (close _V0vanity_V0core_V20_k292) (bruijn ##x.578 0 0) (##inline ##vcore.qcons (##inline ##vcore.qcons 'quote '(##string ##string.1061)) (##inline ##vcore.qcons (##inline ##vcore.qcons 'quasiquote '(##string ##string.1062)) (##inline ##vcore.qcons (##inline ##vcore.qcons 'unquote '(##string ##string.1063)) (##inline ##vcore.qcons (##inline ##vcore.qcons 'unquote-splicing '(##string ##string.1064)) '())))))
    V_CALL(upenv->up->vars[94], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k292, env)}),
      _var0,
      VInlineCons(
        VInlineCons(
        _V0quote,
        VEncodePointer(&_V10string_D1061.sym, VPOINTER_OTHER)),
        VInlineCons(
        VInlineCons(
        _V0quasiquote,
        VEncodePointer(&_V10string_D1062.sym, VPOINTER_OTHER)),
        VInlineCons(
        VInlineCons(
        _V0unquote,
        VEncodePointer(&_V10string_D1063.sym, VPOINTER_OTHER)),
        VInlineCons(
        VInlineCons(
        _V0unquote__splicing,
        VEncodePointer(&_V10string_D1064.sym, VPOINTER_OTHER)),
        VNULL)))));
 }
}
static void _V0vanity_V0core_V20_lambda134(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_lambda134" };
 VRecordCall2(runtime, &dbg);
 if(argc != 4) {
  VError("Not enough arguments to _V0vanity_V0core_V20_lambda134, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_lambda134, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // ((bruijn car 1 45) (close _V0vanity_V0core_V20_k291) (bruijn x 0 1))
    V_CALL(upenv->vars[45], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k291, env)}),
      _var1);
 }
}
static void _V0vanity_V0core_V20_k298(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k298" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k298, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k298, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.589 0 0) ((bruijn printout-quotation 4 141) (bruijn ##k.587 3 0) (bruijn x 3 1) (bruijn write? 3 2) (bruijn port 3 3)) ((bruijn printout-list 4 140) (bruijn ##k.587 3 0) (bruijn x 3 1) (bruijn write? 3 2) (bruijn port 3 3)))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->up->up->up->vars[141], runtime,
      upenv->up->up->vars[0],
      upenv->up->up->vars[1],
      upenv->up->up->vars[2],
      upenv->up->up->vars[3]);
} else {
    V_CALL(upenv->up->up->up->vars[140], runtime,
      upenv->up->up->vars[0],
      upenv->up->up->vars[1],
      upenv->up->up->vars[2],
      upenv->up->up->vars[3]);
}
 }
}
static void _V0vanity_V0core_V20_k297(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k297" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k297, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k297, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn memq 3 90) (close _V0vanity_V0core_V20_k298) (bruijn ##x.590 0 0) (##inline ##vcore.qcons 'quote (##inline ##vcore.qcons 'quasiquote (##inline ##vcore.qcons 'unquote (##inline ##vcore.qcons 'unquote-splicing '())))))
    V_CALL(upenv->up->up->vars[90], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k298, env)}),
      _var0,
      VInlineCons(
        _V0quote,
        VInlineCons(
        _V0quasiquote,
        VInlineCons(
        _V0unquote,
        VInlineCons(
        _V0unquote__splicing,
        VNULL)))));
 }
}
static void _V0vanity_V0core_V20_k304(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k304" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k304, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k304, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.604 1 0) ((bruijn ##k.605 0 0) #f) (##vcore.display-word (bruijn ##k.605 0 0) (##string ##string.1057) (bruijn port 9 3)))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
} else {
    V_CALL_FUNC(VDisplay2, NULL, runtime,
      _var0,
      VEncodePointer(&_V10string_D1057.sym, VPOINTER_OTHER),
      VGetArg(upenv, 9-1, 3));
}
 }
}
static void _V0vanity_V0core_V20_k308(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k308" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k308, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k308, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 7 0) (bruijn ##k.598 6 0) (bruijn ##x.602 0 0))
    V_CALL(VGetArg(upenv, 7-1, 0), runtime,
      VGetArg(upenv, 6-1, 0),
      _var0);
 }
}
static void _V0vanity_V0core_V20_k307(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k307" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k307, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k307, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn + 12 34) (close _V0vanity_V0core_V20_k308) (bruijn i 5 1) 1)
    V_CALL(VGetArg(upenv, 12-1, 34), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k308, env)}),
      VGetArg(upenv, 5-1, 1),
      VEncodeInt(1l));
 }
}
static void _V0vanity_V0core_V20_k306(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k306" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k306, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k306, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn printout 11 142) (close _V0vanity_V0core_V20_k307) (bruijn ##x.603 0 0) (bruijn write? 10 2) (bruijn port 10 3))
    V_CALL(VGetArg(upenv, 11-1, 142), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k307, env)}),
      _var0,
      VGetArg(upenv, 10-1, 2),
      VGetArg(upenv, 10-1, 3));
 }
}
static void _V0vanity_V0core_V20_k305(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k305" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k305, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k305, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn vector-ref 10 111) (close _V0vanity_V0core_V20_k306) (bruijn x 9 1) (bruijn i 3 1))
    V_CALL(VGetArg(upenv, 10-1, 111), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k306, env)}),
      VGetArg(upenv, 9-1, 1),
      upenv->up->up->vars[1]);
 }
}
static void _V0vanity_V0core_V20_k303(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k303" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k303, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k303, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0core_V20_k304) (close _V0vanity_V0core_V20_k305))
    V_CALL_FUNC(_V0vanity_V0core_V20_k304, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k305, env)}));
 }
}
static void _V0vanity_V0core_V20_k302(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k302" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k302, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k302, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.599 0 0) ((bruijn ##k.598 1 0) #f) ((bruijn eq? 8 14) (close _V0vanity_V0core_V20_k303) (bruijn i 1 1) 0))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
} else {
    V_CALL(VGetArg(upenv, 8-1, 14), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k303, env)}),
      upenv->vars[1],
      VEncodeInt(0l));
}
 }
}
static void _V0vanity_V0core_V20_lambda136(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_lambda136" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0vanity_V0core_V20_lambda136, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_lambda136, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn eq? 7 14) (close _V0vanity_V0core_V20_k302) (bruijn i 0 1) (bruijn len 3 0))
    V_CALL(VGetArg(upenv, 7-1, 14), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k302, env)}),
      _var1,
      upenv->up->up->vars[0]);
 }
}
static void _V0vanity_V0core_V20_k309(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k309" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k309, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k309, runtime, upenv, 1, argc, _var0) {
  // (##vcore.display-word (bruijn ##k.587 6 0) (##string ##string.1059) (bruijn port 6 3))
    V_CALL_FUNC(VDisplay2, NULL, runtime,
      VGetArg(upenv, 6-1, 0),
      VEncodePointer(&_V10string_D1059.sym, VPOINTER_OTHER),
      VGetArg(upenv, 6-1, 3));
 }
}
static void _V0vanity_V0core_V20_k301(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k301" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k301, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k301, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (letrec 1 ((close _V0vanity_V0core_V20_lambda136)) ((bruijn loop 0 0) (close _V0vanity_V0core_V20_k309) 0))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_lambda136, env)});
    V_CALL(env->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k309, env)}),
      VEncodeInt(0l));
    }
 }
}
static void _V0vanity_V0core_V20_k300(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k300" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k300, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k300, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.display-word (close _V0vanity_V0core_V20_k301) (##string ##string.1065) (bruijn port 3 3))
    V_CALL_FUNC(VDisplay2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k301, env)}),
      VEncodePointer(&_V10string_D1065.sym, VPOINTER_OTHER),
      upenv->up->up->vars[3]);
 }
}
static void _V0vanity_V0core_V20_k299(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k299" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k299, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k299, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.595 0 0) ((bruijn vector-length 3 113) (close _V0vanity_V0core_V20_k300) (bruijn x 2 1)) (if (bruijn write? 2 2) (##vcore.write (bruijn ##k.587 2 0) (bruijn x 2 1) (bruijn port 2 3)) (##vcore.display-word (bruijn ##k.587 2 0) (bruijn x 2 1) (bruijn port 2 3))))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->up->up->vars[113], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k300, env)}),
      upenv->up->vars[1]);
} else {
if(VDecodeBool(
upenv->up->vars[2])) {
    V_CALL_FUNC(VWrite2, NULL, runtime,
      upenv->up->vars[0],
      upenv->up->vars[1],
      upenv->up->vars[3]);
} else {
    V_CALL_FUNC(VDisplay2, NULL, runtime,
      upenv->up->vars[0],
      upenv->up->vars[1],
      upenv->up->vars[3]);
}
}
 }
}
static void _V0vanity_V0core_V20_k296(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k296" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k296, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k296, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.588 0 0) ((bruijn car 2 45) (close _V0vanity_V0core_V20_k297) (bruijn x 1 1)) ((bruijn vector? 2 4) (close _V0vanity_V0core_V20_k299) (bruijn x 1 1)))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->up->vars[45], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k297, env)}),
      upenv->vars[1]);
} else {
    V_CALL(upenv->up->vars[4], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k299, env)}),
      upenv->vars[1]);
}
 }
}
static void _V0vanity_V0core_V20_lambda135(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_lambda135" };
 VRecordCall2(runtime, &dbg);
 if(argc != 4) {
  VError("Not enough arguments to _V0vanity_V0core_V20_lambda135, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_lambda135, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // ((bruijn pair? 1 3) (close _V0vanity_V0core_V20_k296) (bruijn x 0 1))
    V_CALL(upenv->vars[3], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k296, env)}),
      _var1);
 }
}
static void _V0vanity_V0core_V20_k310(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k310" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k310, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k310, runtime, upenv, 1, argc, _var0) {
  // ((bruijn printout 2 142) (bruijn ##k.606 1 0) (bruijn x 1 1) #f (bruijn ##x.607 0 0))
    V_CALL(upenv->up->vars[142], runtime,
      upenv->vars[0],
      upenv->vars[1],
      VEncodeBool(false),
      _var0);
 }
}
__attribute__((used)) static void _V20CaseError__V0vanity_V0core_V20_lambda137(VRuntime * runtime, VEnv * upenv, int argc, ...) {
 // (_V0vanity_V0core_V20_lambda137 #t (2 ((bruijn current-output-port 1 122) (close _V0vanity_V0core_V20_k310))) (3 ((bruijn printout 1 142) (bruijn ##k.608 0 0) (bruijn x 0 1) #f (bruijn port 0 2))))
 VError("Not enough arguments to _V0vanity_V0core_V20_lambda137, got ~D~N"
 "-- expected 2~N"
 "-- expected 3~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V0vanity_V0core_V20_lambda137(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V20Case0__V0vanity_V0core_V20_lambda137" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case0__V0vanity_V0core_V20_lambda137, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn current-output-port 1 122) (close _V0vanity_V0core_V20_k310))
    V_CALL(upenv->vars[122], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k310, env)}));
 }
}
__attribute__((used)) static void _V20Case1__V0vanity_V0core_V20_lambda137(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V20Case1__V0vanity_V0core_V20_lambda137" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case1__V0vanity_V0core_V20_lambda137, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  // ((bruijn printout 1 142) (bruijn ##k.608 0 0) (bruijn x 0 1) #f (bruijn port 0 2))
    V_CALL(upenv->vars[142], runtime,
      _var0,
      _var1,
      VEncodeBool(false),
      _var2);
 }
}
void _V0vanity_V0core_V20_lambda137(VRuntime * runtime, VEnv * upenv, int argc, ...);
asm(
".intel_syntax noprefix\n"
#ifdef __linux__
".type _V0vanity_V0core_V20_lambda137, @function\n"
#endif
"_V0vanity_V0core_V20_lambda137:\n"
"    cmp " ARGC_REG ", 2\n"
"    je _V20Case0__V0vanity_V0core_V20_lambda137\n"
"    cmp " ARGC_REG ", 3\n"
"    je _V20Case1__V0vanity_V0core_V20_lambda137\n"
"    jmp _V20CaseError__V0vanity_V0core_V20_lambda137\n"
);
static void _V0vanity_V0core_V20_k311(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k311" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k311, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k311, runtime, upenv, 1, argc, _var0) {
  // ((bruijn printout 2 142) (bruijn ##k.609 1 0) (bruijn x 1 1) #t (bruijn ##x.610 0 0))
    V_CALL(upenv->up->vars[142], runtime,
      upenv->vars[0],
      upenv->vars[1],
      VEncodeBool(true),
      _var0);
 }
}
__attribute__((used)) static void _V20CaseError__V0vanity_V0core_V20_lambda138(VRuntime * runtime, VEnv * upenv, int argc, ...) {
 // (_V0vanity_V0core_V20_lambda138 #t (2 ((bruijn current-output-port 1 122) (close _V0vanity_V0core_V20_k311))) (3 ((bruijn printout 1 142) (bruijn ##k.611 0 0) (bruijn x 0 1) #t (bruijn port 0 2))))
 VError("Not enough arguments to _V0vanity_V0core_V20_lambda138, got ~D~N"
 "-- expected 2~N"
 "-- expected 3~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V0vanity_V0core_V20_lambda138(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V20Case0__V0vanity_V0core_V20_lambda138" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case0__V0vanity_V0core_V20_lambda138, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn current-output-port 1 122) (close _V0vanity_V0core_V20_k311))
    V_CALL(upenv->vars[122], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k311, env)}));
 }
}
__attribute__((used)) static void _V20Case1__V0vanity_V0core_V20_lambda138(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V20Case1__V0vanity_V0core_V20_lambda138" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case1__V0vanity_V0core_V20_lambda138, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  // ((bruijn printout 1 142) (bruijn ##k.611 0 0) (bruijn x 0 1) #t (bruijn port 0 2))
    V_CALL(upenv->vars[142], runtime,
      _var0,
      _var1,
      VEncodeBool(true),
      _var2);
 }
}
void _V0vanity_V0core_V20_lambda138(VRuntime * runtime, VEnv * upenv, int argc, ...);
asm(
".intel_syntax noprefix\n"
#ifdef __linux__
".type _V0vanity_V0core_V20_lambda138, @function\n"
#endif
"_V0vanity_V0core_V20_lambda138:\n"
"    cmp " ARGC_REG ", 2\n"
"    je _V20Case0__V0vanity_V0core_V20_lambda138\n"
"    cmp " ARGC_REG ", 3\n"
"    je _V20Case1__V0vanity_V0core_V20_lambda138\n"
"    jmp _V20CaseError__V0vanity_V0core_V20_lambda138\n"
);
static void _V0vanity_V0core_V20_lambda140(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_lambda140" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0vanity_V0core_V20_lambda140, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_lambda140, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn apply 2 148) (bruijn ##k.613 0 0) (bruijn k 0 1) (bruijn args 1 1))
    V_CALL(upenv->up->vars[148], runtime,
      _var0,
      _var1,
      upenv->vars[1]);
 }
}
static void _V0vanity_V0core_V20_lambda139(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, ...) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_lambda139" };
 VRecordCall2(runtime, &dbg);
 if(argc < 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_lambda139, got ~D~N"
  "-- expected 1 or more~N"
  , argc);
 }
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 1, argc, _var0);
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_lambda139, runtime, upenv, 1, argc, _var0, _varargs) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _varargs;
  // ((bruijn call/cc 1 145) (bruijn ##k.612 0 0) (close _V0vanity_V0core_V20_lambda140))
    V_CALL(upenv->vars[145], runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_lambda140, env)}));
 }
}
static void _V0vanity_V0core_V20_k312(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k312" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k312, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k312, runtime, upenv, 1, argc, _var0) {
  // ((bruijn not 2 20) (bruijn ##k.614 1 0) (bruijn ##x.615 0 0))
    V_CALL(upenv->up->vars[20], runtime,
      upenv->vars[0],
      _var0);
 }
}
static void _V0vanity_V0core_V20_lambda141(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_lambda141" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0vanity_V0core_V20_lambda141, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_lambda141, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn pair? 1 3) (close _V0vanity_V0core_V20_k312) (bruijn x 0 1))
    V_CALL(upenv->vars[3], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k312, env)}),
      _var1);
 }
}
static void _V0vanity_V0core_V20_k313(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k313" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k313, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k313, runtime, upenv, 1, argc, _var0) {
  // ((bruijn displayln 2 159) (bruijn ##k.616 1 0) (bruijn x 1 1) (bruijn ##x.617 0 0))
    V_CALL(upenv->up->vars[159], runtime,
      upenv->vars[0],
      upenv->vars[1],
      _var0);
 }
}
static void _V0vanity_V0core_V20_k314(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k314" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k314, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k314, runtime, upenv, 1, argc, _var0) {
  // ((bruijn newline 2 139) (bruijn ##k.618 1 0) (bruijn port 1 2))
    V_CALL(upenv->up->vars[139], runtime,
      upenv->vars[0],
      upenv->vars[2]);
 }
}
__attribute__((used)) static void _V20CaseError__V0vanity_V0core_V20_lambda142(VRuntime * runtime, VEnv * upenv, int argc, ...) {
 // (_V0vanity_V0core_V20_lambda142 #t (2 ((bruijn current-output-port 1 122) (close _V0vanity_V0core_V20_k313))) (3 ((bruijn display 1 143) (close _V0vanity_V0core_V20_k314) (bruijn x 0 1) (bruijn port 0 2))))
 VError("Not enough arguments to _V0vanity_V0core_V20_lambda142, got ~D~N"
 "-- expected 2~N"
 "-- expected 3~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V0vanity_V0core_V20_lambda142(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V20Case0__V0vanity_V0core_V20_lambda142" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case0__V0vanity_V0core_V20_lambda142, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn current-output-port 1 122) (close _V0vanity_V0core_V20_k313))
    V_CALL(upenv->vars[122], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k313, env)}));
 }
}
__attribute__((used)) static void _V20Case1__V0vanity_V0core_V20_lambda142(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V20Case1__V0vanity_V0core_V20_lambda142" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case1__V0vanity_V0core_V20_lambda142, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn display 1 143) (close _V0vanity_V0core_V20_k314) (bruijn x 0 1) (bruijn port 0 2))
    V_CALL(upenv->vars[143], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k314, env)}),
      _var1,
      _var2);
 }
}
void _V0vanity_V0core_V20_lambda142(VRuntime * runtime, VEnv * upenv, int argc, ...);
asm(
".intel_syntax noprefix\n"
#ifdef __linux__
".type _V0vanity_V0core_V20_lambda142, @function\n"
#endif
"_V0vanity_V0core_V20_lambda142:\n"
"    cmp " ARGC_REG ", 2\n"
"    je _V20Case0__V0vanity_V0core_V20_lambda142\n"
"    cmp " ARGC_REG ", 3\n"
"    je _V20Case1__V0vanity_V0core_V20_lambda142\n"
"    jmp _V20CaseError__V0vanity_V0core_V20_lambda142\n"
);
static void _V0vanity_V0core_V20_k315(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k315" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k315, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k315, runtime, upenv, 1, argc, _var0) {
  // ((bruijn writeln 2 160) (bruijn ##k.620 1 0) (bruijn x 1 1) (bruijn ##x.621 0 0))
    V_CALL(upenv->up->vars[160], runtime,
      upenv->vars[0],
      upenv->vars[1],
      _var0);
 }
}
static void _V0vanity_V0core_V20_k316(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k316" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k316, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k316, runtime, upenv, 1, argc, _var0) {
  // ((bruijn newline 2 139) (bruijn ##k.622 1 0) (bruijn port 1 2))
    V_CALL(upenv->up->vars[139], runtime,
      upenv->vars[0],
      upenv->vars[2]);
 }
}
__attribute__((used)) static void _V20CaseError__V0vanity_V0core_V20_lambda143(VRuntime * runtime, VEnv * upenv, int argc, ...) {
 // (_V0vanity_V0core_V20_lambda143 #t (2 ((bruijn current-output-port 1 122) (close _V0vanity_V0core_V20_k315))) (3 ((bruijn write 1 144) (close _V0vanity_V0core_V20_k316) (bruijn x 0 1) (bruijn port 0 2))))
 VError("Not enough arguments to _V0vanity_V0core_V20_lambda143, got ~D~N"
 "-- expected 2~N"
 "-- expected 3~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V0vanity_V0core_V20_lambda143(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V20Case0__V0vanity_V0core_V20_lambda143" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case0__V0vanity_V0core_V20_lambda143, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn current-output-port 1 122) (close _V0vanity_V0core_V20_k315))
    V_CALL(upenv->vars[122], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k315, env)}));
 }
}
__attribute__((used)) static void _V20Case1__V0vanity_V0core_V20_lambda143(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V20Case1__V0vanity_V0core_V20_lambda143" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case1__V0vanity_V0core_V20_lambda143, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn write 1 144) (close _V0vanity_V0core_V20_k316) (bruijn x 0 1) (bruijn port 0 2))
    V_CALL(upenv->vars[144], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k316, env)}),
      _var1,
      _var2);
 }
}
void _V0vanity_V0core_V20_lambda143(VRuntime * runtime, VEnv * upenv, int argc, ...);
asm(
".intel_syntax noprefix\n"
#ifdef __linux__
".type _V0vanity_V0core_V20_lambda143, @function\n"
#endif
"_V0vanity_V0core_V20_lambda143:\n"
"    cmp " ARGC_REG ", 2\n"
"    je _V20Case0__V0vanity_V0core_V20_lambda143\n"
"    cmp " ARGC_REG ", 3\n"
"    je _V20Case1__V0vanity_V0core_V20_lambda143\n"
"    jmp _V20CaseError__V0vanity_V0core_V20_lambda143\n"
);
static void _V0vanity_V0core_V20_k323(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k323" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k323, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k323, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.660 1 0) ((bruijn error 10 166) (bruijn ##k.661 0 0) (##string ##string.1066) (bruijn fmt 9 2)) ((bruijn ##k.661 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(VGetArg(upenv, 10-1, 166), runtime,
      _var0,
      VEncodePointer(&_V10string_D1066.sym, VPOINTER_OTHER),
      VGetArg(upenv, 9-1, 2));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0core_V20_k329(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k329" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k329, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k329, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 12 0) (bruijn ##k.625 11 0) (bruijn ##x.631 0 0) (bruijn args 11 2))
    V_CALL(VGetArg(upenv, 12-1, 0), runtime,
      VGetArg(upenv, 11-1, 0),
      _var0,
      VGetArg(upenv, 11-1, 2));
 }
}
static void _V0vanity_V0core_V20_k328(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k328" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k328, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k328, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn + 14 34) (close _V0vanity_V0core_V20_k329) (bruijn i 10 1) 2)
    V_CALL(VGetArg(upenv, 14-1, 34), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k329, env)}),
      VGetArg(upenv, 10-1, 1),
      VEncodeInt(2l));
 }
}
static void _V0vanity_V0core_V20_k331(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k331" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k331, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k331, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.657 1 0) ((bruijn ##k.658 0 0) (bruijn ##p.657 1 0)) ((bruijn eqv? 15 17) (bruijn ##k.658 0 0) (bruijn ##x.1 3 0) '#\N))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(_var0, runtime,
      upenv->vars[0]);
} else {
    V_CALL(VGetArg(upenv, 15-1, 17), runtime,
      _var0,
      upenv->up->up->vars[0],
      VEncodeChar('N'));
}
 }
}
static void _V0vanity_V0core_V20_k334(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k334" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k334, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k334, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 14 0) (bruijn ##k.625 13 0) (bruijn ##x.634 0 0) (bruijn args 13 2))
    V_CALL(VGetArg(upenv, 14-1, 0), runtime,
      VGetArg(upenv, 13-1, 0),
      _var0,
      VGetArg(upenv, 13-1, 2));
 }
}
static void _V0vanity_V0core_V20_k333(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k333" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k333, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k333, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn + 16 34) (close _V0vanity_V0core_V20_k334) (bruijn i 12 1) 2)
    V_CALL(VGetArg(upenv, 16-1, 34), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k334, env)}),
      VGetArg(upenv, 12-1, 1),
      VEncodeInt(2l));
 }
}
static void _V0vanity_V0core_V20_k336(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k336" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k336, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k336, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.655 1 0) ((bruijn ##k.656 0 0) (bruijn ##p.655 1 0)) ((bruijn eqv? 17 17) (bruijn ##k.656 0 0) (bruijn ##x.1 5 0) '#\A))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(_var0, runtime,
      upenv->vars[0]);
} else {
    V_CALL(VGetArg(upenv, 17-1, 17), runtime,
      _var0,
      VGetArg(upenv, 5-1, 0),
      VEncodeChar('A'));
}
 }
}
static void _V0vanity_V0core_V20_k339(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k339" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k339, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k339, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.641 1 0) ((bruijn error 19 166) (bruijn ##k.642 0 0) (##string ##string.1067) (bruijn fmt 18 2)) ((bruijn ##k.642 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(VGetArg(upenv, 19-1, 166), runtime,
      _var0,
      VEncodePointer(&_V10string_D1067.sym, VPOINTER_OTHER),
      VGetArg(upenv, 18-1, 2));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0core_V20_k344(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k344" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k344, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k344, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 20 0) (bruijn ##k.625 19 0) (bruijn ##x.638 1 0) (bruijn ##x.639 0 0))
    V_CALL(VGetArg(upenv, 20-1, 0), runtime,
      VGetArg(upenv, 19-1, 0),
      upenv->vars[0],
      _var0);
 }
}
static void _V0vanity_V0core_V20_k343(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k343" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k343, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k343, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn cdr 22 46) (close _V0vanity_V0core_V20_k344) (bruijn args 18 2))
    V_CALL(VGetArg(upenv, 22-1, 46), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k344, env)}),
      VGetArg(upenv, 18-1, 2));
 }
}
static void _V0vanity_V0core_V20_k342(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k342" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k342, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k342, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn + 21 34) (close _V0vanity_V0core_V20_k343) (bruijn i 17 1) 2)
    V_CALL(VGetArg(upenv, 21-1, 34), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k343, env)}),
      VGetArg(upenv, 17-1, 1),
      VEncodeInt(2l));
 }
}
static void _V0vanity_V0core_V20_k341(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k341" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k341, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k341, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn display 20 143) (close _V0vanity_V0core_V20_k342) (bruijn ##x.640 0 0) (bruijn port 19 1))
    V_CALL(VGetArg(upenv, 20-1, 143), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k342, env)}),
      _var0,
      VGetArg(upenv, 19-1, 1));
 }
}
static void _V0vanity_V0core_V20_k340(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k340" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k340, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k340, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn car 19 45) (close _V0vanity_V0core_V20_k341) (bruijn args 15 2))
    V_CALL(VGetArg(upenv, 19-1, 45), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k341, env)}),
      VGetArg(upenv, 15-1, 2));
 }
}
static void _V0vanity_V0core_V20_k338(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k338" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k338, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k338, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0core_V20_k339) (close _V0vanity_V0core_V20_k340))
    V_CALL_FUNC(_V0vanity_V0core_V20_k339, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k340, env)}));
 }
}
static void _V0vanity_V0core_V20_k346(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k346" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k346, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k346, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.653 1 0) ((bruijn ##k.654 0 0) (bruijn ##p.653 1 0)) ((bruijn eqv? 19 17) (bruijn ##k.654 0 0) (bruijn ##x.1 7 0) '#\S))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(_var0, runtime,
      upenv->vars[0]);
} else {
    V_CALL(VGetArg(upenv, 19-1, 17), runtime,
      _var0,
      VGetArg(upenv, 7-1, 0),
      VEncodeChar('S'));
}
 }
}
static void _V0vanity_V0core_V20_k349(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k349" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k349, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k349, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.649 1 0) ((bruijn error 21 166) (bruijn ##k.650 0 0) (##string ##string.1067) (bruijn fmt 20 2)) ((bruijn ##k.650 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(VGetArg(upenv, 21-1, 166), runtime,
      _var0,
      VEncodePointer(&_V10string_D1067.sym, VPOINTER_OTHER),
      VGetArg(upenv, 20-1, 2));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0core_V20_k354(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k354" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k354, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k354, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 22 0) (bruijn ##k.625 21 0) (bruijn ##x.646 1 0) (bruijn ##x.647 0 0))
    V_CALL(VGetArg(upenv, 22-1, 0), runtime,
      VGetArg(upenv, 21-1, 0),
      upenv->vars[0],
      _var0);
 }
}
static void _V0vanity_V0core_V20_k353(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k353" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k353, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k353, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn cdr 24 46) (close _V0vanity_V0core_V20_k354) (bruijn args 20 2))
    V_CALL(VGetArg(upenv, 24-1, 46), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k354, env)}),
      VGetArg(upenv, 20-1, 2));
 }
}
static void _V0vanity_V0core_V20_k352(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k352" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k352, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k352, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn + 23 34) (close _V0vanity_V0core_V20_k353) (bruijn i 19 1) 2)
    V_CALL(VGetArg(upenv, 23-1, 34), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k353, env)}),
      VGetArg(upenv, 19-1, 1),
      VEncodeInt(2l));
 }
}
static void _V0vanity_V0core_V20_k351(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k351" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k351, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k351, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn write 22 144) (close _V0vanity_V0core_V20_k352) (bruijn ##x.648 0 0) (bruijn port 21 1))
    V_CALL(VGetArg(upenv, 22-1, 144), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k352, env)}),
      _var0,
      VGetArg(upenv, 21-1, 1));
 }
}
static void _V0vanity_V0core_V20_k350(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k350" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k350, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k350, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn car 21 45) (close _V0vanity_V0core_V20_k351) (bruijn args 17 2))
    V_CALL(VGetArg(upenv, 21-1, 45), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k351, env)}),
      VGetArg(upenv, 17-1, 2));
 }
}
static void _V0vanity_V0core_V20_k348(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k348" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k348, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k348, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0core_V20_k349) (close _V0vanity_V0core_V20_k350))
    V_CALL_FUNC(_V0vanity_V0core_V20_k349, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k350, env)}));
 }
}
static void _V0vanity_V0core_V20_k356(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k356" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k356, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k356, runtime, upenv, 1, argc, _var0) {
  // ((bruijn error 21 166) (bruijn ##k.625 17 0) (##string ##string.1068) (bruijn ##x.651 0 0))
    V_CALL(VGetArg(upenv, 21-1, 166), runtime,
      VGetArg(upenv, 17-1, 0),
      VEncodePointer(&_V10string_D1068.sym, VPOINTER_OTHER),
      _var0);
 }
}
static void _V0vanity_V0core_V20_k355(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k355" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k355, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k355, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn substring 20 97) (close _V0vanity_V0core_V20_k356) (bruijn fmt 19 2) (bruijn i 16 1) (bruijn ##x.652 0 0))
    V_CALL(VGetArg(upenv, 20-1, 97), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k356, env)}),
      VGetArg(upenv, 19-1, 2),
      VGetArg(upenv, 16-1, 1),
      _var0);
 }
}
static void _V0vanity_V0core_V20_k347(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k347" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k347, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k347, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.643 0 0) ((bruijn null? 19 0) (close _V0vanity_V0core_V20_k348) (bruijn args 15 2)) ((bruijn + 19 34) (close _V0vanity_V0core_V20_k355) (bruijn i 15 1) 2))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 19-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k348, env)}),
      VGetArg(upenv, 15-1, 2));
} else {
    V_CALL(VGetArg(upenv, 19-1, 34), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k355, env)}),
      VGetArg(upenv, 15-1, 1),
      VEncodeInt(2l));
}
 }
}
static void _V0vanity_V0core_V20_k345(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k345" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k345, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k345, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0core_V20_k346) (close _V0vanity_V0core_V20_k347))
    V_CALL_FUNC(_V0vanity_V0core_V20_k346, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k347, env)}));
 }
}
static void _V0vanity_V0core_V20_k337(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k337" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k337, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k337, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.635 0 0) ((bruijn null? 17 0) (close _V0vanity_V0core_V20_k338) (bruijn args 13 2)) ((bruijn eqv? 17 17) (close _V0vanity_V0core_V20_k345) (bruijn ##x.1 5 0) '#\s))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 17-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k338, env)}),
      VGetArg(upenv, 13-1, 2));
} else {
    V_CALL(VGetArg(upenv, 17-1, 17), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k345, env)}),
      VGetArg(upenv, 5-1, 0),
      VEncodeChar('s'));
}
 }
}
static void _V0vanity_V0core_V20_k335(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k335" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k335, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k335, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0core_V20_k336) (close _V0vanity_V0core_V20_k337))
    V_CALL_FUNC(_V0vanity_V0core_V20_k336, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k337, env)}));
 }
}
static void _V0vanity_V0core_V20_k332(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k332" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k332, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k332, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.632 0 0) (##vcore.display-word (close _V0vanity_V0core_V20_k333) #\newline (bruijn port 14 1)) ((bruijn eqv? 15 17) (close _V0vanity_V0core_V20_k335) (bruijn ##x.1 3 0) '#\a))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(VDisplay2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k333, env)}),
      VEncodeChar('\n'),
      VGetArg(upenv, 14-1, 1));
} else {
    V_CALL(VGetArg(upenv, 15-1, 17), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k335, env)}),
      upenv->up->up->vars[0],
      VEncodeChar('a'));
}
 }
}
static void _V0vanity_V0core_V20_k330(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k330" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k330, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k330, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0core_V20_k331) (close _V0vanity_V0core_V20_k332))
    V_CALL_FUNC(_V0vanity_V0core_V20_k331, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k332, env)}));
 }
}
static void _V0vanity_V0core_V20_k327(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k327" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k327, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k327, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.629 0 0) (##vcore.display-word (close _V0vanity_V0core_V20_k328) #\~ (bruijn port 12 1)) ((bruijn eqv? 13 17) (close _V0vanity_V0core_V20_k330) (bruijn ##x.1 1 0) '#\n))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(VDisplay2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k328, env)}),
      VEncodeChar('~'),
      VGetArg(upenv, 12-1, 1));
} else {
    V_CALL(VGetArg(upenv, 13-1, 17), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k330, env)}),
      upenv->vars[0],
      VEncodeChar('n'));
}
 }
}
static void _V0vanity_V0core_V20_k326(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k326" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k326, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k326, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn eqv? 12 17) (close _V0vanity_V0core_V20_k327) (bruijn ##x.1 0 0) '#\~)
    V_CALL(VGetArg(upenv, 12-1, 17), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k327, env)}),
      _var0,
      VEncodeChar('~'));
 }
}
static void _V0vanity_V0core_V20_k325(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k325" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k325, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k325, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn string-ref 11 100) (close _V0vanity_V0core_V20_k326) (bruijn fmt 10 2) (bruijn ##x.659 0 0))
    V_CALL(VGetArg(upenv, 11-1, 100), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k326, env)}),
      VGetArg(upenv, 10-1, 2),
      _var0);
 }
}
static void _V0vanity_V0core_V20_k324(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k324" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k324, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k324, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn + 10 34) (close _V0vanity_V0core_V20_k325) (bruijn i 6 1) 1)
    V_CALL(VGetArg(upenv, 10-1, 34), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k325, env)}),
      VGetArg(upenv, 6-1, 1),
      VEncodeInt(1l));
 }
}
static void _V0vanity_V0core_V20_k322(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k322" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k322, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k322, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0core_V20_k323) (close _V0vanity_V0core_V20_k324))
    V_CALL_FUNC(_V0vanity_V0core_V20_k323, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k324, env)}));
 }
}
static void _V0vanity_V0core_V20_k321(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k321" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k321, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k321, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn = 8 22) (close _V0vanity_V0core_V20_k322) (bruijn ##x.662 0 0) (bruijn len 6 0))
    V_CALL(VGetArg(upenv, 8-1, 22), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k322, env)}),
      _var0,
      VGetArg(upenv, 6-1, 0));
 }
}
static void _V0vanity_V0core_V20_k358(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k358" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k358, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k358, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 6 0) (bruijn ##k.625 5 0) (bruijn ##x.664 0 0) (bruijn args 5 2))
    V_CALL(VGetArg(upenv, 6-1, 0), runtime,
      VGetArg(upenv, 5-1, 0),
      _var0,
      VGetArg(upenv, 5-1, 2));
 }
}
static void _V0vanity_V0core_V20_k357(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k357" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k357, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k357, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn + 8 34) (close _V0vanity_V0core_V20_k358) (bruijn i 4 1) 1)
    V_CALL(VGetArg(upenv, 8-1, 34), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k358, env)}),
      upenv->up->up->up->vars[1],
      VEncodeInt(1l));
 }
}
static void _V0vanity_V0core_V20_k320(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k320" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k320, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k320, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.627 0 0) ((bruijn + 7 34) (close _V0vanity_V0core_V20_k321) (bruijn i 3 1) 1) (##vcore.display-word (close _V0vanity_V0core_V20_k357) (bruijn c 1 0) (bruijn port 6 1)))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 7-1, 34), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k321, env)}),
      upenv->up->up->vars[1],
      VEncodeInt(1l));
} else {
    V_CALL_FUNC(VDisplay2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k357, env)}),
      upenv->vars[0],
      VGetArg(upenv, 6-1, 1));
}
 }
}
static void _V0vanity_V0core_V20_k319(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k319" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k319, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k319, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn eq? 6 14) (close _V0vanity_V0core_V20_k320) (bruijn c 0 0) #\~)
    V_CALL(VGetArg(upenv, 6-1, 14), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k320, env)}),
      _var0,
      VEncodeChar('~'));
 }
}
static void _V0vanity_V0core_V20_k318(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k318" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k318, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k318, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.626 0 0) ((bruijn string-ref 5 100) (close _V0vanity_V0core_V20_k319) (bruijn fmt 4 2) (bruijn i 1 1)) ((bruijn ##k.625 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 5-1, 100), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k319, env)}),
      upenv->up->up->up->vars[2],
      upenv->vars[1]);
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0core_V20_lambda145(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_lambda145" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0vanity_V0core_V20_lambda145, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_lambda145, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn < 4 21) (close _V0vanity_V0core_V20_k318) (bruijn i 0 1) (bruijn len 2 0))
    V_CALL(upenv->up->up->up->vars[21], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k318, env)}),
      _var1,
      upenv->up->vars[0]);
 }
}
static void _V0vanity_V0core_V20_k317(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k317" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k317, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k317, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (letrec 1 ((close _V0vanity_V0core_V20_lambda145)) ((bruijn loop 0 0) (bruijn ##k.624 2 0) 0 (bruijn args 2 3)))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_lambda145, env)});
    V_CALL(env->vars[0], runtime,
      upenv->up->vars[0],
      VEncodeInt(0l),
      upenv->up->vars[3]);
    }
 }
}
static void _V0vanity_V0core_V20_lambda144(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_lambda144" };
 VRecordCall2(runtime, &dbg);
 if(argc != 4) {
  VError("Not enough arguments to _V0vanity_V0core_V20_lambda144, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_lambda144, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // ((bruijn string-length 1 102) (close _V0vanity_V0core_V20_k317) (bruijn fmt 0 2))
    V_CALL(upenv->vars[102], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k317, env)}),
      _var2);
 }
}
static void _V0vanity_V0core_V20_k362(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k362" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k362, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k362, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##k.665 4 0) (bruijn ret 1 0))
    V_CALL(upenv->up->up->up->vars[0], runtime,
      upenv->vars[0]);
 }
}
static void _V0vanity_V0core_V20_k361(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k361" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k361, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k361, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn close-port 4 126) (close _V0vanity_V0core_V20_k362) (bruijn strport 2 0))
    V_CALL(upenv->up->up->up->vars[126], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k362, env)}),
      upenv->up->vars[0]);
 }
}
static void _V0vanity_V0core_V20_k360(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k360" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k360, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k360, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn get-output-string 3 133) (close _V0vanity_V0core_V20_k361) (bruijn strport 1 0))
    V_CALL(upenv->up->up->vars[133], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k361, env)}),
      upenv->vars[0]);
 }
}
static void _V0vanity_V0core_V20_k359(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k359" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k359, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k359, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn format-printf 2 161) (close _V0vanity_V0core_V20_k360) (bruijn strport 0 0) (bruijn fmt 1 1) (bruijn args 1 2))
    V_CALL(upenv->up->vars[161], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k360, env)}),
      _var0,
      upenv->vars[1],
      upenv->vars[2]);
 }
}
static void _V0vanity_V0core_V20_lambda146(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_lambda146" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0vanity_V0core_V20_lambda146, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_lambda146, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn open-output-string 1 132) (close _V0vanity_V0core_V20_k359))
    V_CALL(upenv->vars[132], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k359, env)}));
 }
}
static void _V0vanity_V0core_V20_k363(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k363" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k363, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k363, runtime, upenv, 1, argc, _var0) {
  // ((bruijn format-printf 2 161) (bruijn ##k.668 1 0) (bruijn ##x.669 0 0) (bruijn fmt 1 1) '())
    V_CALL(upenv->up->vars[161], runtime,
      upenv->vars[0],
      _var0,
      upenv->vars[1],
      VNULL);
 }
}
static void _V0vanity_V0core_V20_k366(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k366" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k366, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k366, runtime, upenv, 1, argc, _var0) {
  // ((bruijn format-printf 4 161) (bruijn ##k.670 3 0) (bruijn ##x.672 1 0) (bruijn a 3 1) (bruijn ##x.673 0 0))
    V_CALL(upenv->up->up->up->vars[161], runtime,
      upenv->up->up->vars[0],
      upenv->vars[0],
      upenv->up->up->vars[1],
      _var0);
 }
}
static void _V0vanity_V0core_V20_k365(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k365" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k365, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k365, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn cons 3 44) (close _V0vanity_V0core_V20_k366) (bruijn b 2 2) (bruijn args 2 3))
    V_CALL(upenv->up->up->vars[44], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k366, env)}),
      upenv->up->vars[2],
      upenv->up->vars[3]);
 }
}
static void _V0vanity_V0core_V20_k364(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k364" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k364, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k364, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.671 0 0) ((bruijn current-output-port 2 122) (close _V0vanity_V0core_V20_k365)) ((bruijn format-printf 2 161) (bruijn ##k.670 1 0) (bruijn a 1 1) (bruijn b 1 2) (bruijn args 1 3)))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->up->vars[122], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k365, env)}));
} else {
    V_CALL(upenv->up->vars[161], runtime,
      upenv->vars[0],
      upenv->vars[1],
      upenv->vars[2],
      upenv->vars[3]);
}
 }
}
__attribute__((used)) static void _V20CaseError__V0vanity_V0core_V20_lambda147(VRuntime * runtime, VEnv * upenv, int argc, ...) {
 // (_V0vanity_V0core_V20_lambda147 #t (2 ((bruijn current-output-port 1 122) (close _V0vanity_V0core_V20_k363))) (3 + ((bruijn string? 1 7) (close _V0vanity_V0core_V20_k364) (bruijn a 0 1))))
 VError("Not enough arguments to _V0vanity_V0core_V20_lambda147, got ~D~N"
 "-- expected 2~N"
 "-- expected 3 or more~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V0vanity_V0core_V20_lambda147(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V20Case0__V0vanity_V0core_V20_lambda147" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case0__V0vanity_V0core_V20_lambda147, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn current-output-port 1 122) (close _V0vanity_V0core_V20_k363))
    V_CALL(upenv->vars[122], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k363, env)}));
 }
}
__attribute__((used)) static void _V20Case1__V0vanity_V0core_V20_lambda147(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, ...) {
 static VDebugInfo dbg = { "_V20Case1__V0vanity_V0core_V20_lambda147" };
 VRecordCall2(runtime, &dbg);
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 3, argc, _var2);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case1__V0vanity_V0core_V20_lambda147, runtime, upenv, 3, argc, _var0, _var1, _var2, _varargs) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _varargs;
  // ((bruijn string? 1 7) (close _V0vanity_V0core_V20_k364) (bruijn a 0 1))
    V_CALL(upenv->vars[7], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k364, env)}),
      _var1);
 }
}
void _V0vanity_V0core_V20_lambda147(VRuntime * runtime, VEnv * upenv, int argc, ...);
asm(
".intel_syntax noprefix\n"
#ifdef __linux__
".type _V0vanity_V0core_V20_lambda147, @function\n"
#endif
"_V0vanity_V0core_V20_lambda147:\n"
"    cmp " ARGC_REG ", 2\n"
"    je _V20Case0__V0vanity_V0core_V20_lambda147\n"
"    cmp " ARGC_REG ", 3\n"
"    jge _V20Case1__V0vanity_V0core_V20_lambda147\n"
"    jmp _V20CaseError__V0vanity_V0core_V20_lambda147\n"
);
static void _V0vanity_V0core_V20_k370(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k370" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k370, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k370, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##k.674 4 0) (bruijn ret 1 0))
    V_CALL(upenv->up->up->up->vars[0], runtime,
      upenv->vars[0]);
 }
}
static void _V0vanity_V0core_V20_k369(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k369" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k369, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k369, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn close-port 4 126) (close _V0vanity_V0core_V20_k370) (bruijn strport 2 0))
    V_CALL(upenv->up->up->up->vars[126], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k370, env)}),
      upenv->up->vars[0]);
 }
}
static void _V0vanity_V0core_V20_k368(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k368" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k368, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k368, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn get-output-string 3 133) (close _V0vanity_V0core_V20_k369) (bruijn strport 1 0))
    V_CALL(upenv->up->up->vars[133], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k369, env)}),
      upenv->vars[0]);
 }
}
static void _V0vanity_V0core_V20_k367(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k367" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k367, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k367, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn format-printf 2 161) (close _V0vanity_V0core_V20_k368) (bruijn strport 0 0) (bruijn fmt 1 1) (bruijn args 1 2))
    V_CALL(upenv->up->vars[161], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k368, env)}),
      _var0,
      upenv->vars[1],
      upenv->vars[2]);
 }
}
static void _V0vanity_V0core_V20_lambda148(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, ...) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_lambda148" };
 VRecordCall2(runtime, &dbg);
 if(argc < 2) {
  VError("Not enough arguments to _V0vanity_V0core_V20_lambda148, got ~D~N"
  "-- expected 2 or more~N"
  , argc);
 }
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 2, argc, _var1);
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_lambda148, runtime, upenv, 2, argc, _var0, _var1, _varargs) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _varargs;
  // ((bruijn open-output-string 1 132) (close _V0vanity_V0core_V20_k367))
    V_CALL(upenv->vars[132], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k367, env)}));
 }
}
static void _V0vanity_V0core_V20_k372(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k372" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k372, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k372, runtime, upenv, 1, argc, _var0) {
  // ((bruijn format-sprintf 3 162) (bruijn ##k.678 2 0) (bruijn a 2 1) (bruijn ##x.680 0 0))
    V_CALL(upenv->up->up->vars[162], runtime,
      upenv->up->vars[0],
      upenv->up->vars[1],
      _var0);
 }
}
static void _V0vanity_V0core_V20_k374(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k374" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k374, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k374, runtime, upenv, 1, argc, _var0) {
  // ((bruijn format-printf 4 161) (bruijn ##k.678 3 0) (bruijn ##x.682 0 0) (bruijn b 3 2) (bruijn args 3 3))
    V_CALL(upenv->up->up->up->vars[161], runtime,
      upenv->up->up->vars[0],
      _var0,
      upenv->up->up->vars[2],
      upenv->up->up->vars[3]);
 }
}
static void _V0vanity_V0core_V20_k375(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k375" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k375, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k375, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.683 0 0) ((bruijn format-sprintf 4 162) (bruijn ##k.678 3 0) (bruijn b 3 2) (bruijn args 3 3)) ((bruijn format-printf 4 161) (bruijn ##k.678 3 0) (bruijn a 3 1) (bruijn b 3 2) (bruijn args 3 3)))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->up->up->up->vars[162], runtime,
      upenv->up->up->vars[0],
      upenv->up->up->vars[2],
      upenv->up->up->vars[3]);
} else {
    V_CALL(upenv->up->up->up->vars[161], runtime,
      upenv->up->up->vars[0],
      upenv->up->up->vars[1],
      upenv->up->up->vars[2],
      upenv->up->up->vars[3]);
}
 }
}
static void _V0vanity_V0core_V20_k373(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k373" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k373, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k373, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.681 0 0) ((bruijn current-output-port 3 122) (close _V0vanity_V0core_V20_k374)) ((bruijn eq? 3 14) (close _V0vanity_V0core_V20_k375) (bruijn a 2 1) #f))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->up->up->vars[122], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k374, env)}));
} else {
    V_CALL(upenv->up->up->vars[14], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k375, env)}),
      upenv->up->vars[1],
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0core_V20_k371(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k371" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k371, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k371, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.679 0 0) ((bruijn cons 2 44) (close _V0vanity_V0core_V20_k372) (bruijn b 1 2) (bruijn args 1 3)) ((bruijn eq? 2 14) (close _V0vanity_V0core_V20_k373) (bruijn a 1 1) #t))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->up->vars[44], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k372, env)}),
      upenv->vars[2],
      upenv->vars[3]);
} else {
    V_CALL(upenv->up->vars[14], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k373, env)}),
      upenv->vars[1],
      VEncodeBool(true));
}
 }
}
__attribute__((used)) static void _V20CaseError__V0vanity_V0core_V20_lambda149(VRuntime * runtime, VEnv * upenv, int argc, ...) {
 // (_V0vanity_V0core_V20_lambda149 #t (2 ((bruijn sprintf 1 164) (bruijn ##k.677 0 0) (bruijn fmt 0 1))) (3 + ((bruijn string? 1 7) (close _V0vanity_V0core_V20_k371) (bruijn a 0 1))))
 VError("Not enough arguments to _V0vanity_V0core_V20_lambda149, got ~D~N"
 "-- expected 2~N"
 "-- expected 3 or more~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V0vanity_V0core_V20_lambda149(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V20Case0__V0vanity_V0core_V20_lambda149" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case0__V0vanity_V0core_V20_lambda149, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn sprintf 1 164) (bruijn ##k.677 0 0) (bruijn fmt 0 1))
    V_CALL(upenv->vars[164], runtime,
      _var0,
      _var1);
 }
}
__attribute__((used)) static void _V20Case1__V0vanity_V0core_V20_lambda149(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, ...) {
 static VDebugInfo dbg = { "_V20Case1__V0vanity_V0core_V20_lambda149" };
 VRecordCall2(runtime, &dbg);
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 3, argc, _var2);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case1__V0vanity_V0core_V20_lambda149, runtime, upenv, 3, argc, _var0, _var1, _var2, _varargs) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _varargs;
  // ((bruijn string? 1 7) (close _V0vanity_V0core_V20_k371) (bruijn a 0 1))
    V_CALL(upenv->vars[7], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k371, env)}),
      _var1);
 }
}
void _V0vanity_V0core_V20_lambda149(VRuntime * runtime, VEnv * upenv, int argc, ...);
asm(
".intel_syntax noprefix\n"
#ifdef __linux__
".type _V0vanity_V0core_V20_lambda149, @function\n"
#endif
"_V0vanity_V0core_V20_lambda149:\n"
"    cmp " ARGC_REG ", 2\n"
"    je _V20Case0__V0vanity_V0core_V20_lambda149\n"
"    cmp " ARGC_REG ", 3\n"
"    jge _V20Case1__V0vanity_V0core_V20_lambda149\n"
"    jmp _V20CaseError__V0vanity_V0core_V20_lambda149\n"
);
static void _V0vanity_V0core_V20_k388(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k388" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k388, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k388, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 7 0) (bruijn ##k.692 6 0) (bruijn ##x.696 0 0))
    V_CALL(VGetArg(upenv, 7-1, 0), runtime,
      VGetArg(upenv, 6-1, 0),
      _var0);
 }
}
static void _V0vanity_V0core_V20_k387(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k387" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k387, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k387, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn cdr 15 46) (close _V0vanity_V0core_V20_k388) (bruijn irritants 5 1))
    V_CALL(VGetArg(upenv, 15-1, 46), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k388, env)}),
      VGetArg(upenv, 5-1, 1));
 }
}
static void _V0vanity_V0core_V20_k386(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k386" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k386, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k386, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn write 14 144) (close _V0vanity_V0core_V20_k387) (bruijn ##x.697 0 0) (bruijn err 12 0))
    V_CALL(VGetArg(upenv, 14-1, 144), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k387, env)}),
      _var0,
      VGetArg(upenv, 12-1, 0));
 }
}
static void _V0vanity_V0core_V20_k385(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k385" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k385, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k385, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn car 13 45) (close _V0vanity_V0core_V20_k386) (bruijn irritants 3 1))
    V_CALL(VGetArg(upenv, 13-1, 45), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k386, env)}),
      upenv->up->up->vars[1]);
 }
}
static void _V0vanity_V0core_V20_k384(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k384" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k384, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k384, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.693 0 0) ((bruijn display 12 143) (close _V0vanity_V0core_V20_k385) (##string ##string.1057) (bruijn err 10 0)) ((bruijn ##k.692 2 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 12-1, 143), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k385, env)}),
      VEncodePointer(&_V10string_D1057.sym, VPOINTER_OTHER),
      VGetArg(upenv, 10-1, 0));
} else {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0core_V20_k383(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k383" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k383, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k383, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn not 11 20) (close _V0vanity_V0core_V20_k384) (bruijn ##x.698 0 0))
    V_CALL(VGetArg(upenv, 11-1, 20), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k384, env)}),
      _var0);
 }
}
static void _V0vanity_V0core_V20_lambda151(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_lambda151" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0vanity_V0core_V20_lambda151, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_lambda151, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn null? 10 0) (close _V0vanity_V0core_V20_k383) (bruijn irritants 0 1))
    V_CALL(VGetArg(upenv, 10-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k383, env)}),
      _var1);
 }
}
static void _V0vanity_V0core_V20_k382(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k382" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k382, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k382, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (letrec 1 ((close _V0vanity_V0core_V20_lambda151)) ((bruijn loop 0 0) (bruijn ##k.690 2 0) (bruijn irritants 8 2)))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_lambda151, env)});
    V_CALL(env->vars[0], runtime,
      upenv->up->vars[0],
      VGetArg(upenv, 8-1, 2));
    }
 }
}
static void _V0vanity_V0core_V20_k381(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k381" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k381, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k381, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.689 1 0) ((bruijn display 7 143) (close _V0vanity_V0core_V20_k382) (##string ##string.1069) (bruijn err 5 0)) ((bruijn ##k.690 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(VGetArg(upenv, 7-1, 143), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k382, env)}),
      VEncodePointer(&_V10string_D1069.sym, VPOINTER_OTHER),
      VGetArg(upenv, 5-1, 0));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0core_V20_k390(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k390" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k390, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k390, runtime, upenv, 1, argc, _var0) {
  // (##vcore.abort (bruijn ##k.684 7 0))
    V_CALL_FUNC(VAbort2, NULL, runtime,
      VGetArg(upenv, 7-1, 0));
 }
}
static void _V0vanity_V0core_V20_k389(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k389" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k389, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k389, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn newline 7 139) (close _V0vanity_V0core_V20_k390) (bruijn err 5 0))
    V_CALL(VGetArg(upenv, 7-1, 139), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k390, env)}),
      VGetArg(upenv, 5-1, 0));
 }
}
static void _V0vanity_V0core_V20_k380(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k380" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k380, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k380, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0core_V20_k381) (close _V0vanity_V0core_V20_k389))
    V_CALL_FUNC(_V0vanity_V0core_V20_k381, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k389, env)}));
 }
}
static void _V0vanity_V0core_V20_k379(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k379" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k379, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k379, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn not 5 20) (close _V0vanity_V0core_V20_k380) (bruijn ##x.699 0 0))
    V_CALL(VGetArg(upenv, 5-1, 20), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k380, env)}),
      _var0);
 }
}
static void _V0vanity_V0core_V20_k378(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k378" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k378, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k378, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn null? 4 0) (close _V0vanity_V0core_V20_k379) (bruijn irritants 3 2))
    V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k379, env)}),
      upenv->up->up->vars[2]);
 }
}
static void _V0vanity_V0core_V20_k377(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k377" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k377, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k377, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn display 3 143) (close _V0vanity_V0core_V20_k378) (bruijn msg 2 1) (bruijn err 1 0))
    V_CALL(upenv->up->up->vars[143], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k378, env)}),
      upenv->up->vars[1],
      upenv->vars[0]);
 }
}
static void _V0vanity_V0core_V20_k376(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k376" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k376, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k376, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn display 2 143) (close _V0vanity_V0core_V20_k377) (##string ##string.1070) (bruijn err 0 0))
    V_CALL(upenv->up->vars[143], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k377, env)}),
      VEncodePointer(&_V10string_D1070.sym, VPOINTER_OTHER),
      _var0);
 }
}
static void _V0vanity_V0core_V20_lambda150(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, ...) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_lambda150" };
 VRecordCall2(runtime, &dbg);
 if(argc < 2) {
  VError("Not enough arguments to _V0vanity_V0core_V20_lambda150, got ~D~N"
  "-- expected 2 or more~N"
  , argc);
 }
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 2, argc, _var1);
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_lambda150, runtime, upenv, 2, argc, _var0, _var1, _varargs) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _varargs;
  // ((bruijn current-error-port 1 123) (close _V0vanity_V0core_V20_k376))
    V_CALL(upenv->vars[123], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k376, env)}));
 }
}
static void _V0vanity_V0core_V20_lambda152(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, ...) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_lambda152" };
 VRecordCall2(runtime, &dbg);
 if(argc < 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_lambda152, got ~D~N"
  "-- expected 1 or more~N"
  , argc);
 }
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 1, argc, _var0);
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_lambda152, runtime, upenv, 1, argc, _var0, _varargs) {
  // (##vcore.fiber-fork-list (bruijn ##k.700 0 0) (bruijn args 0 1))
    V_CALL_FUNC(VFiberForkList, NULL, runtime,
      _var0,
      _varargs);
 }
}
static void _V0vanity_V0core_V20_k391(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k391" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k391, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k391, runtime, upenv, 1, argc, _var0) {
  // ((bruijn fiber-fork-list 2 167) (bruijn ##k.701 1 0) (bruijn ##x.702 0 0))
    V_CALL(upenv->up->vars[167], runtime,
      upenv->vars[0],
      _var0);
 }
}
static void _V0vanity_V0core_V20_lambda155(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_lambda155" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_lambda155, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_lambda155, runtime, upenv, 1, argc, _var0) {
  // ((bruijn f 2 1) (bruijn ##k.704 0 0) (bruijn e 1 1))
    V_CALL(upenv->up->vars[1], runtime,
      _var0,
      upenv->vars[1]);
 }
}
static void _V0vanity_V0core_V20_lambda154(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_lambda154" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0vanity_V0core_V20_lambda154, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_lambda154, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##k.703 0 0) (close _V0vanity_V0core_V20_lambda155))
    V_CALL(_var0, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_lambda155, env)}));
 }
}
static void _V0vanity_V0core_V20_k392(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k392" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k392, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k392, runtime, upenv, 1, argc, _var0) {
  // ((bruijn fiber-fork-list 2 167) (bruijn ##k.705 1 0) (bruijn ##x.706 0 0))
    V_CALL(upenv->up->vars[167], runtime,
      upenv->vars[0],
      _var0);
 }
}
static void _V0vanity_V0core_V20_lambda157(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_lambda157" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_lambda157, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_lambda157, runtime, upenv, 1, argc, _var0) {
  // ((bruijn f 2 1) (bruijn ##k.708 0 0) (bruijn a 1 1) (bruijn b 1 2))
    V_CALL(upenv->up->vars[1], runtime,
      _var0,
      upenv->vars[1],
      upenv->vars[2]);
 }
}
static void _V0vanity_V0core_V20_lambda156(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_lambda156" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0vanity_V0core_V20_lambda156, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_lambda156, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn ##k.707 0 0) (close _V0vanity_V0core_V20_lambda157))
    V_CALL(_var0, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_lambda157, env)}));
 }
}
static void _V0vanity_V0core_V20_k393(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k393" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k393, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k393, runtime, upenv, 1, argc, _var0) {
  // ((bruijn fiber-fork-list 2 167) (bruijn ##k.709 1 0) (bruijn ##x.710 0 0))
    V_CALL(upenv->up->vars[167], runtime,
      upenv->vars[0],
      _var0);
 }
}
static void _V0vanity_V0core_V20_lambda159(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_lambda159" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_lambda159, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_lambda159, runtime, upenv, 1, argc, _var0) {
  // ((bruijn f 2 1) (bruijn ##k.712 0 0) (bruijn a 1 1) (bruijn b 1 2) (bruijn c 1 3))
    V_CALL(upenv->up->vars[1], runtime,
      _var0,
      upenv->vars[1],
      upenv->vars[2],
      upenv->vars[3]);
 }
}
static void _V0vanity_V0core_V20_lambda158(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_lambda158" };
 VRecordCall2(runtime, &dbg);
 if(argc != 4) {
  VError("Not enough arguments to _V0vanity_V0core_V20_lambda158, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_lambda158, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // ((bruijn ##k.711 0 0) (close _V0vanity_V0core_V20_lambda159))
    V_CALL(_var0, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_lambda159, env)}));
 }
}
static void _V0vanity_V0core_V20_k394(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k394" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k394, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k394, runtime, upenv, 1, argc, _var0) {
  // ((bruijn fiber-fork-list 2 167) (bruijn ##k.713 1 0) (bruijn ##x.714 0 0))
    V_CALL(upenv->up->vars[167], runtime,
      upenv->vars[0],
      _var0);
 }
}
static void _V0vanity_V0core_V20_lambda161(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_lambda161" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_lambda161, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_lambda161, runtime, upenv, 1, argc, _var0) {
  // ((bruijn apply 3 148) (bruijn ##k.716 0 0) (bruijn f 2 1) (bruijn args 1 1))
    V_CALL(upenv->up->up->vars[148], runtime,
      _var0,
      upenv->up->vars[1],
      upenv->vars[1]);
 }
}
static void _V0vanity_V0core_V20_lambda160(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, ...) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_lambda160" };
 VRecordCall2(runtime, &dbg);
 if(argc < 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_lambda160, got ~D~N"
  "-- expected 1 or more~N"
  , argc);
 }
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 1, argc, _var0);
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_lambda160, runtime, upenv, 1, argc, _var0, _varargs) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _varargs;
  // ((bruijn ##k.715 0 0) (close _V0vanity_V0core_V20_lambda161))
    V_CALL(_var0, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_lambda161, env)}));
 }
}
__attribute__((used)) static void _V20CaseError__V0vanity_V0core_V20_lambda153(VRuntime * runtime, VEnv * upenv, int argc, ...) {
 // (_V0vanity_V0core_V20_lambda153 #t (3 ((bruijn map 1 85) (close _V0vanity_V0core_V20_k391) (close _V0vanity_V0core_V20_lambda154) (bruijn lst 0 2))) (4 ((bruijn map 1 85) (close _V0vanity_V0core_V20_k392) (close _V0vanity_V0core_V20_lambda156) (bruijn as 0 2) (bruijn bs 0 3))) (5 ((bruijn map 1 85) (close _V0vanity_V0core_V20_k393) (close _V0vanity_V0core_V20_lambda158) (bruijn as 0 2) (bruijn bs 0 3) (bruijn cs 0 4))) (3 + ((bruijn apply 1 148) (close _V0vanity_V0core_V20_k394) (bruijn map 1 85) (close _V0vanity_V0core_V20_lambda160) (bruijn as 0 2) (bruijn args 0 3))))
 VError("Not enough arguments to _V0vanity_V0core_V20_lambda153, got ~D~N"
 "-- expected 3~N"
 "-- expected 4~N"
 "-- expected 5~N"
 "-- expected 3 or more~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V0vanity_V0core_V20_lambda153(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V20Case0__V0vanity_V0core_V20_lambda153" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case0__V0vanity_V0core_V20_lambda153, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn map 1 85) (close _V0vanity_V0core_V20_k391) (close _V0vanity_V0core_V20_lambda154) (bruijn lst 0 2))
    V_CALL(upenv->vars[85], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k391, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_lambda154, env)}),
      _var2);
 }
}
__attribute__((used)) static void _V20Case1__V0vanity_V0core_V20_lambda153(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V20Case1__V0vanity_V0core_V20_lambda153" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case1__V0vanity_V0core_V20_lambda153, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // ((bruijn map 1 85) (close _V0vanity_V0core_V20_k392) (close _V0vanity_V0core_V20_lambda156) (bruijn as 0 2) (bruijn bs 0 3))
    V_CALL(upenv->vars[85], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k392, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_lambda156, env)}),
      _var2,
      _var3);
 }
}
__attribute__((used)) static void _V20Case2__V0vanity_V0core_V20_lambda153(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4) {
 static VDebugInfo dbg = { "_V20Case2__V0vanity_V0core_V20_lambda153" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case2__V0vanity_V0core_V20_lambda153, runtime, upenv, 5, argc, _var0, _var1, _var2, _var3, _var4) {
  struct { VEnv env; VWORD argv[5]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 5, 5, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  env->vars[4] = _var4;
  // ((bruijn map 1 85) (close _V0vanity_V0core_V20_k393) (close _V0vanity_V0core_V20_lambda158) (bruijn as 0 2) (bruijn bs 0 3) (bruijn cs 0 4))
    V_CALL(upenv->vars[85], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k393, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_lambda158, env)}),
      _var2,
      _var3,
      _var4);
 }
}
__attribute__((used)) static void _V20Case3__V0vanity_V0core_V20_lambda153(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, ...) {
 static VDebugInfo dbg = { "_V20Case3__V0vanity_V0core_V20_lambda153" };
 VRecordCall2(runtime, &dbg);
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 3, argc, _var2);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case3__V0vanity_V0core_V20_lambda153, runtime, upenv, 3, argc, _var0, _var1, _var2, _varargs) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _varargs;
  // ((bruijn apply 1 148) (close _V0vanity_V0core_V20_k394) (bruijn map 1 85) (close _V0vanity_V0core_V20_lambda160) (bruijn as 0 2) (bruijn args 0 3))
    V_CALL(upenv->vars[148], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k394, env)}),
      upenv->vars[85],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_lambda160, env)}),
      _var2,
      _varargs);
 }
}
void _V0vanity_V0core_V20_lambda153(VRuntime * runtime, VEnv * upenv, int argc, ...);
asm(
".intel_syntax noprefix\n"
#ifdef __linux__
".type _V0vanity_V0core_V20_lambda153, @function\n"
#endif
"_V0vanity_V0core_V20_lambda153:\n"
"    cmp " ARGC_REG ", 3\n"
"    je _V20Case0__V0vanity_V0core_V20_lambda153\n"
"    cmp " ARGC_REG ", 4\n"
"    je _V20Case1__V0vanity_V0core_V20_lambda153\n"
"    cmp " ARGC_REG ", 5\n"
"    je _V20Case2__V0vanity_V0core_V20_lambda153\n"
"    cmp " ARGC_REG ", 3\n"
"    jge _V20Case3__V0vanity_V0core_V20_lambda153\n"
"    jmp _V20CaseError__V0vanity_V0core_V20_lambda153\n"
);
static void _V0vanity_V0core_V20_k406(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k406" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k406, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k406, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##k.3 18 0) (##inline ##vcore.cons (##inline ##vcore.cons 'null? (bruijn null? 12 0)) (##inline ##vcore.cons (##inline ##vcore.cons 'eof-object? (bruijn eof-object? 12 2)) (##inline ##vcore.cons (##inline ##vcore.cons 'boolean? (bruijn boolean? 12 1)) (##inline ##vcore.cons (##inline ##vcore.cons 'pair? (bruijn pair? 12 3)) (##inline ##vcore.cons (##inline ##vcore.cons 'vector? (bruijn vector? 12 4)) (##inline ##vcore.cons (##inline ##vcore.cons 'procedure? (bruijn procedure? 12 5)) (##inline ##vcore.cons (##inline ##vcore.cons 'symbol? (bruijn symbol? 12 6)) (##inline ##vcore.cons (##inline ##vcore.cons 'string? (bruijn string? 12 7)) (##inline ##vcore.cons (##inline ##vcore.cons 'exact? (bruijn exact? 12 9)) (##inline ##vcore.cons (##inline ##vcore.cons 'exact-integer? (bruijn exact-integer? 12 10)) (##inline ##vcore.cons (##inline ##vcore.cons 'inexact? (bruijn inexact? 12 12)) (##inline ##vcore.cons (##inline ##vcore.cons 'real? (bruijn real? 12 13)) (##inline ##vcore.cons (##inline ##vcore.cons 'integer? (bruijn integer? 12 11)) (##inline ##vcore.cons (##inline ##vcore.cons 'char? (bruijn char? 12 8)) (##inline ##vcore.cons (##inline ##vcore.cons 'eq? (bruijn eq? 12 14)) (##inline ##vcore.cons (##inline ##vcore.cons 'symbol=? (bruijn symbol=? 12 15)) (##inline ##vcore.cons (##inline ##vcore.cons 'eqv? (bruijn eqv? 12 17)) (##inline ##vcore.cons (##inline ##vcore.cons 'equal? (bruijn equal? 12 19)) (##inline ##vcore.cons (##inline ##vcore.cons 'not (bruijn not 12 20)) (##inline ##vcore.cons (##inline ##vcore.cons '< (bruijn < 12 21)) (##inline ##vcore.cons (##inline ##vcore.cons '= (bruijn = 12 22)) (##inline ##vcore.cons (##inline ##vcore.cons '> (bruijn > 12 23)) (##inline ##vcore.cons (##inline ##vcore.cons '<= (bruijn <= 12 24)) (##inline ##vcore.cons (##inline ##vcore.cons '>= (bruijn >= 12 25)) (##inline ##vcore.cons (##inline ##vcore.cons 'inexact (bruijn inexact 12 26)) (##inline ##vcore.cons (##inline ##vcore.cons 'exact->inexact (bruijn exact->inexact 12 27)) (##inline ##vcore.cons (##inline ##vcore.cons 'number? (bruijn number? 12 28)) (##inline ##vcore.cons (##inline ##vcore.cons 'complex? (bruijn complex? 12 29)) (##inline ##vcore.cons (##inline ##vcore.cons 'rational? (bruijn rational? 12 30)) (##inline ##vcore.cons (##inline ##vcore.cons 'positive? (bruijn positive? 12 31)) (##inline ##vcore.cons (##inline ##vcore.cons 'negative? (bruijn negative? 12 33)) (##inline ##vcore.cons (##inline ##vcore.cons 'zero? (bruijn zero? 12 32)) (##inline ##vcore.cons (##inline ##vcore.cons '+ (bruijn + 12 34)) (##inline ##vcore.cons (##inline ##vcore.cons '- (bruijn - 12 35)) (##inline ##vcore.cons (##inline ##vcore.cons '* (bruijn * 12 36)) (##inline ##vcore.cons (##inline ##vcore.cons '/ (bruijn / 12 37)) (##inline ##vcore.cons (##inline ##vcore.cons 'quotient (bruijn quotient 12 38)) (##inline ##vcore.cons (##inline ##vcore.cons 'remainder (bruijn remainder 12 39)) (##inline ##vcore.cons (##inline ##vcore.cons 'max (bruijn max 12 42)) (##inline ##vcore.cons (##inline ##vcore.cons 'min (bruijn min 12 43)) (##inline ##vcore.cons (##inline ##vcore.cons 'abs (bruijn abs 12 40)) (##inline ##vcore.cons (##inline ##vcore.cons 'square (bruijn square 12 41)) (##inline ##vcore.cons (##inline ##vcore.cons 'cons (bruijn cons 12 44)) (##inline ##vcore.cons (##inline ##vcore.cons 'car (bruijn car 12 45)) (##inline ##vcore.cons (##inline ##vcore.cons 'cdr (bruijn cdr 12 46)) (##inline ##vcore.cons (##inline ##vcore.cons 'set-car! (bruijn set-car! 12 47)) (##inline ##vcore.cons (##inline ##vcore.cons 'set-cdr! (bruijn set-cdr! 12 48)) (##inline ##vcore.cons (##inline ##vcore.cons 'caar (bruijn caar 12 49)) (##inline ##vcore.cons (##inline ##vcore.cons 'cadr (bruijn cadr 12 50)) (##inline ##vcore.cons (##inline ##vcore.cons 'cdar (bruijn cdar 12 51)) (##inline ##vcore.cons (##inline ##vcore.cons 'cddr (bruijn cddr 12 52)) (##inline ##vcore.cons (##inline ##vcore.cons 'caaar (bruijn caaar 12 53)) (##inline ##vcore.cons (##inline ##vcore.cons 'caadr (bruijn caadr 12 54)) (##inline ##vcore.cons (##inline ##vcore.cons 'cadar (bruijn cadar 12 55)) (##inline ##vcore.cons (##inline ##vcore.cons 'caddr (bruijn caddr 12 56)) (##inline ##vcore.cons (##inline ##vcore.cons 'cdaar (bruijn cdaar 12 57)) (##inline ##vcore.cons (##inline ##vcore.cons 'cdadr (bruijn cdadr 12 58)) (##inline ##vcore.cons (##inline ##vcore.cons 'cddar (bruijn cddar 12 59)) (##inline ##vcore.cons (##inline ##vcore.cons 'cdddr (bruijn cdddr 12 60)) (##inline ##vcore.cons (##inline ##vcore.cons 'caaaar (bruijn caaaar 12 61)) (##inline ##vcore.cons (##inline ##vcore.cons 'caaadr (bruijn caaadr 12 62)) (##inline ##vcore.cons (##inline ##vcore.cons 'caadar (bruijn caadar 12 63)) (##inline ##vcore.cons (##inline ##vcore.cons 'caaddr (bruijn caaddr 12 64)) (##inline ##vcore.cons (##inline ##vcore.cons 'cadaar (bruijn cadaar 12 65)) (##inline ##vcore.cons (##inline ##vcore.cons 'cadadr (bruijn cadadr 12 66)) (##inline ##vcore.cons (##inline ##vcore.cons 'caddar (bruijn caddar 12 67)) (##inline ##vcore.cons (##inline ##vcore.cons 'cadddr (bruijn cadddr 12 68)) (##inline ##vcore.cons (##inline ##vcore.cons 'cdaaar (bruijn cdaaar 12 69)) (##inline ##vcore.cons (##inline ##vcore.cons 'cdaadr (bruijn cdaadr 12 70)) (##inline ##vcore.cons (##inline ##vcore.cons 'cdadar (bruijn cdadar 12 71)) (##inline ##vcore.cons (##inline ##vcore.cons 'cdaddr (bruijn cdaddr 12 72)) (##inline ##vcore.cons (##inline ##vcore.cons 'cddaar (bruijn cddaar 12 73)) (##inline ##vcore.cons (##inline ##vcore.cons 'cddadr (bruijn cddadr 12 74)) (##inline ##vcore.cons (##inline ##vcore.cons 'cdddar (bruijn cdddar 12 75)) (##inline ##vcore.cons (##inline ##vcore.cons 'cddddr (bruijn cddddr 12 76)) (##inline ##vcore.cons (##inline ##vcore.cons 'list (bruijn list 12 77)) (##inline ##vcore.cons (##inline ##vcore.cons 'list? (bruijn list? 12 78)) (##inline ##vcore.cons (##inline ##vcore.cons 'length (bruijn length 12 79)) (##inline ##vcore.cons (##inline ##vcore.cons 'list-tail (bruijn list-tail 12 80)) (##inline ##vcore.cons (##inline ##vcore.cons 'list-ref (bruijn list-ref 12 81)) (##inline ##vcore.cons (##inline ##vcore.cons 'list-set! (bruijn list-set! 12 82)) (##inline ##vcore.cons (##inline ##vcore.cons 'list-copy (bruijn list-copy 12 83)) (##inline ##vcore.cons (##inline ##vcore.cons 'make-list (bruijn make-list 12 84)) (##inline ##vcore.cons (##inline ##vcore.cons 'map (bruijn map 12 85)) (##inline ##vcore.cons (##inline ##vcore.cons 'for-each (bruijn for-each 12 86)) (##inline ##vcore.cons (##inline ##vcore.cons 'append (bruijn append 12 88)) (##inline ##vcore.cons (##inline ##vcore.cons 'reverse (bruijn reverse 12 89)) (##inline ##vcore.cons (##inline ##vcore.cons 'memq (bruijn memq 12 90)) (##inline ##vcore.cons (##inline ##vcore.cons 'memv (bruijn memv 12 91)) (##inline ##vcore.cons (##inline ##vcore.cons 'member (bruijn member 12 92)) (##inline ##vcore.cons (##inline ##vcore.cons 'assq (bruijn assq 12 93)) (##inline ##vcore.cons (##inline ##vcore.cons 'assv (bruijn assv 12 94)) (##inline ##vcore.cons (##inline ##vcore.cons 'assoc (bruijn assoc 12 95)) (##inline ##vcore.cons (##inline ##vcore.cons 'string->list (bruijn string->list 12 107)) (##inline ##vcore.cons (##inline ##vcore.cons 'list->string (bruijn list->string 12 106)) (##inline ##vcore.cons (##inline ##vcore.cons 'make-string (bruijn make-string 12 96)) (##inline ##vcore.cons (##inline ##vcore.cons 'substring (bruijn substring 12 97)) (##inline ##vcore.cons (##inline ##vcore.cons 'string-copy (bruijn string-copy 12 98)) (##inline ##vcore.cons (##inline ##vcore.cons 'string-copy! (bruijn string-copy! 12 99)) (##inline ##vcore.cons (##inline ##vcore.cons 'string-ref (bruijn string-ref 12 100)) (##inline ##vcore.cons (##inline ##vcore.cons 'string-set! (bruijn string-set! 12 101)) (##inline ##vcore.cons (##inline ##vcore.cons 'string-length (bruijn string-length 12 102)) (##inline ##vcore.cons (##inline ##vcore.cons 'string->symbol (bruijn string->symbol 12 103)) (##inline ##vcore.cons (##inline ##vcore.cons 'string->number (bruijn string->number 12 104)) (##inline ##vcore.cons (##inline ##vcore.cons 'string-append (bruijn string-append 12 108)) (##inline ##vcore.cons (##inline ##vcore.cons 'symbol->string (bruijn symbol->string 12 105)) (##inline ##vcore.cons (##inline ##vcore.cons 'list->vector (bruijn list->vector 12 109)) (##inline ##vcore.cons (##inline ##vcore.cons 'vector (bruijn vector 12 110)) (##inline ##vcore.cons (##inline ##vcore.cons 'vector-ref (bruijn vector-ref 12 111)) (##inline ##vcore.cons (##inline ##vcore.cons 'vector-set! (bruijn vector-set! 12 112)) (##inline ##vcore.cons (##inline ##vcore.cons 'vector-length (bruijn vector-length 12 113)) (##inline ##vcore.cons (##inline ##vcore.cons 'vector-for-each (bruijn vector-for-each 12 114)) (##inline ##vcore.cons (##inline ##vcore.cons 'make-hash-table (bruijn make-hash-table 12 115)) (##inline ##vcore.cons (##inline ##vcore.cons 'hash-table-ref (bruijn hash-table-ref 12 118)) (##inline ##vcore.cons (##inline ##vcore.cons 'hash-table-set! (bruijn hash-table-set! 12 119)) (##inline ##vcore.cons (##inline ##vcore.cons 'hash-table-delete! (bruijn hash-table-delete! 12 120)) (##inline ##vcore.cons (##inline ##vcore.cons 'char->integer (bruijn char->integer 12 121)) (##inline ##vcore.cons (##inline ##vcore.cons 'current-output-port (bruijn current-output-port 12 122)) (##inline ##vcore.cons (##inline ##vcore.cons 'current-error-port (bruijn current-error-port 12 123)) (##inline ##vcore.cons (##inline ##vcore.cons 'current-input-port (bruijn current-input-port 12 124)) (##inline ##vcore.cons (##inline ##vcore.cons 'open-input-file (bruijn open-input-file 12 130)) (##inline ##vcore.cons (##inline ##vcore.cons 'open-output-file (bruijn open-output-file 12 131)) (##inline ##vcore.cons (##inline ##vcore.cons 'close-port (bruijn close-port 12 126)) (##inline ##vcore.cons (##inline ##vcore.cons 'open-output-string (bruijn open-output-string 12 132)) (##inline ##vcore.cons (##inline ##vcore.cons 'get-output-string (bruijn get-output-string 12 133)) (##inline ##vcore.cons (##inline ##vcore.cons 'with-output-to-file (bruijn with-output-to-file 12 134)) (##inline ##vcore.cons (##inline ##vcore.cons 'with-input-from-file (bruijn with-input-from-file 12 135)) (##inline ##vcore.cons (##inline ##vcore.cons 'read-char (bruijn read-char 12 136)) (##inline ##vcore.cons (##inline ##vcore.cons 'read-line (bruijn read-line 12 137)) (##inline ##vcore.cons (##inline ##vcore.cons 'read (bruijn read 12 138)) (##inline ##vcore.cons (##inline ##vcore.cons 'newline (bruijn newline 12 139)) (##inline ##vcore.cons (##inline ##vcore.cons 'display (bruijn display 12 143)) (##inline ##vcore.cons (##inline ##vcore.cons 'write (bruijn write 12 144)) (##inline ##vcore.cons (##inline ##vcore.cons 'call/cc (bruijn call/cc 12 145)) (##inline ##vcore.cons (##inline ##vcore.cons 'call-with-current-continuation (bruijn call-with-current-continuation 12 146)) (##inline ##vcore.cons (##inline ##vcore.cons 'call-with-values (bruijn call-with-values 12 147)) (##inline ##vcore.cons (##inline ##vcore.cons 'apply (bruijn apply 12 148)) (##inline ##vcore.cons (##inline ##vcore.cons 'values (bruijn values 12 149)) (##inline ##vcore.cons (##inline ##vcore.cons 'setter (bruijn setter 12 150)) (##inline ##vcore.cons (##inline ##vcore.cons 'mutator (bruijn mutator 12 151)) (##inline ##vcore.cons (##inline ##vcore.cons '##vcore.setter (bruijn ##vcore.setter 13 1)) (##inline ##vcore.cons (##inline ##vcore.cons '##vcore.mutator (bruijn ##vcore.mutator 13 0)) (##inline ##vcore.cons (##inline ##vcore.cons 'command-line (bruijn command-line 12 152)) (##inline ##vcore.cons (##inline ##vcore.cons 'system (bruijn system 12 153)) (##inline ##vcore.cons (##inline ##vcore.cons 'open-input-process (bruijn open-input-process 12 154)) (##inline ##vcore.cons (##inline ##vcore.cons 'open-output-process (bruijn open-output-process 12 155)) (##inline ##vcore.cons (##inline ##vcore.cons 'make-temporary-file (bruijn make-temporary-file 12 156)) (##inline ##vcore.cons (##inline ##vcore.cons 'exit (bruijn exit 12 157)) (##inline ##vcore.cons (##inline ##vcore.cons 'fiber-fork (bruijn fiber-fork 12 168)) (##inline ##vcore.cons (##inline ##vcore.cons 'fiber-fork-list (bruijn fiber-fork-list 12 167)) (##inline ##vcore.cons (##inline ##vcore.cons 'fiber-map (bruijn fiber-map 12 169)) (##inline ##vcore.cons (##inline ##vcore.cons 'async (bruijn async 12 170)) (##inline ##vcore.cons (##inline ##vcore.cons 'await (bruijn await 12 171)) (##inline ##vcore.cons (##inline ##vcore.cons 'atom? (bruijn atom? 12 158)) (##inline ##vcore.cons (##inline ##vcore.cons 'displayln (bruijn displayln 12 159)) (##inline ##vcore.cons (##inline ##vcore.cons 'writeln (bruijn writeln 12 160)) (##inline ##vcore.cons (##inline ##vcore.cons 'format (bruijn format 12 165)) (##inline ##vcore.cons (##inline ##vcore.cons 'printf (bruijn printf 12 163)) (##inline ##vcore.cons (##inline ##vcore.cons 'sprintf (bruijn sprintf 12 164)) (##inline ##vcore.cons (##inline ##vcore.cons 'error (bruijn error 12 166)) '())))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))
    V_CALL(VGetArg(upenv, 18-1, 0), runtime,
      VInlineCons(
        VInlineCons(
        _V0null_Q,
        VGetArg(upenv, 12-1, 0)),
        VInlineCons(
        VInlineCons(
        _V0eof__object_Q,
        VGetArg(upenv, 12-1, 2)),
        VInlineCons(
        VInlineCons(
        _V0boolean_Q,
        VGetArg(upenv, 12-1, 1)),
        VInlineCons(
        VInlineCons(
        _V0pair_Q,
        VGetArg(upenv, 12-1, 3)),
        VInlineCons(
        VInlineCons(
        _V0vector_Q,
        VGetArg(upenv, 12-1, 4)),
        VInlineCons(
        VInlineCons(
        _V0procedure_Q,
        VGetArg(upenv, 12-1, 5)),
        VInlineCons(
        VInlineCons(
        _V0symbol_Q,
        VGetArg(upenv, 12-1, 6)),
        VInlineCons(
        VInlineCons(
        _V0string_Q,
        VGetArg(upenv, 12-1, 7)),
        VInlineCons(
        VInlineCons(
        _V0exact_Q,
        VGetArg(upenv, 12-1, 9)),
        VInlineCons(
        VInlineCons(
        _V0exact__integer_Q,
        VGetArg(upenv, 12-1, 10)),
        VInlineCons(
        VInlineCons(
        _V0inexact_Q,
        VGetArg(upenv, 12-1, 12)),
        VInlineCons(
        VInlineCons(
        _V0real_Q,
        VGetArg(upenv, 12-1, 13)),
        VInlineCons(
        VInlineCons(
        _V0integer_Q,
        VGetArg(upenv, 12-1, 11)),
        VInlineCons(
        VInlineCons(
        _V0char_Q,
        VGetArg(upenv, 12-1, 8)),
        VInlineCons(
        VInlineCons(
        _V0eq_Q,
        VGetArg(upenv, 12-1, 14)),
        VInlineCons(
        VInlineCons(
        _V0symbol_E_Q,
        VGetArg(upenv, 12-1, 15)),
        VInlineCons(
        VInlineCons(
        _V0eqv_Q,
        VGetArg(upenv, 12-1, 17)),
        VInlineCons(
        VInlineCons(
        _V0equal_Q,
        VGetArg(upenv, 12-1, 19)),
        VInlineCons(
        VInlineCons(
        _V0not,
        VGetArg(upenv, 12-1, 20)),
        VInlineCons(
        VInlineCons(
        _V0_L,
        VGetArg(upenv, 12-1, 21)),
        VInlineCons(
        VInlineCons(
        _V0_E,
        VGetArg(upenv, 12-1, 22)),
        VInlineCons(
        VInlineCons(
        _V0_G,
        VGetArg(upenv, 12-1, 23)),
        VInlineCons(
        VInlineCons(
        _V0_L_E,
        VGetArg(upenv, 12-1, 24)),
        VInlineCons(
        VInlineCons(
        _V0_G_E,
        VGetArg(upenv, 12-1, 25)),
        VInlineCons(
        VInlineCons(
        _V0inexact,
        VGetArg(upenv, 12-1, 26)),
        VInlineCons(
        VInlineCons(
        _V0exact___Ginexact,
        VGetArg(upenv, 12-1, 27)),
        VInlineCons(
        VInlineCons(
        _V0number_Q,
        VGetArg(upenv, 12-1, 28)),
        VInlineCons(
        VInlineCons(
        _V0complex_Q,
        VGetArg(upenv, 12-1, 29)),
        VInlineCons(
        VInlineCons(
        _V0rational_Q,
        VGetArg(upenv, 12-1, 30)),
        VInlineCons(
        VInlineCons(
        _V0positive_Q,
        VGetArg(upenv, 12-1, 31)),
        VInlineCons(
        VInlineCons(
        _V0negative_Q,
        VGetArg(upenv, 12-1, 33)),
        VInlineCons(
        VInlineCons(
        _V0zero_Q,
        VGetArg(upenv, 12-1, 32)),
        VInlineCons(
        VInlineCons(
        _V0_P,
        VGetArg(upenv, 12-1, 34)),
        VInlineCons(
        VInlineCons(
        _V0__,
        VGetArg(upenv, 12-1, 35)),
        VInlineCons(
        VInlineCons(
        _V0_S,
        VGetArg(upenv, 12-1, 36)),
        VInlineCons(
        VInlineCons(
        _V0_W,
        VGetArg(upenv, 12-1, 37)),
        VInlineCons(
        VInlineCons(
        _V0quotient,
        VGetArg(upenv, 12-1, 38)),
        VInlineCons(
        VInlineCons(
        _V0remainder,
        VGetArg(upenv, 12-1, 39)),
        VInlineCons(
        VInlineCons(
        _V0max,
        VGetArg(upenv, 12-1, 42)),
        VInlineCons(
        VInlineCons(
        _V0min,
        VGetArg(upenv, 12-1, 43)),
        VInlineCons(
        VInlineCons(
        _V0abs,
        VGetArg(upenv, 12-1, 40)),
        VInlineCons(
        VInlineCons(
        _V0square,
        VGetArg(upenv, 12-1, 41)),
        VInlineCons(
        VInlineCons(
        _V0cons,
        VGetArg(upenv, 12-1, 44)),
        VInlineCons(
        VInlineCons(
        _V0car,
        VGetArg(upenv, 12-1, 45)),
        VInlineCons(
        VInlineCons(
        _V0cdr,
        VGetArg(upenv, 12-1, 46)),
        VInlineCons(
        VInlineCons(
        _V0set__car_B,
        VGetArg(upenv, 12-1, 47)),
        VInlineCons(
        VInlineCons(
        _V0set__cdr_B,
        VGetArg(upenv, 12-1, 48)),
        VInlineCons(
        VInlineCons(
        _V0caar,
        VGetArg(upenv, 12-1, 49)),
        VInlineCons(
        VInlineCons(
        _V0cadr,
        VGetArg(upenv, 12-1, 50)),
        VInlineCons(
        VInlineCons(
        _V0cdar,
        VGetArg(upenv, 12-1, 51)),
        VInlineCons(
        VInlineCons(
        _V0cddr,
        VGetArg(upenv, 12-1, 52)),
        VInlineCons(
        VInlineCons(
        _V0caaar,
        VGetArg(upenv, 12-1, 53)),
        VInlineCons(
        VInlineCons(
        _V0caadr,
        VGetArg(upenv, 12-1, 54)),
        VInlineCons(
        VInlineCons(
        _V0cadar,
        VGetArg(upenv, 12-1, 55)),
        VInlineCons(
        VInlineCons(
        _V0caddr,
        VGetArg(upenv, 12-1, 56)),
        VInlineCons(
        VInlineCons(
        _V0cdaar,
        VGetArg(upenv, 12-1, 57)),
        VInlineCons(
        VInlineCons(
        _V0cdadr,
        VGetArg(upenv, 12-1, 58)),
        VInlineCons(
        VInlineCons(
        _V0cddar,
        VGetArg(upenv, 12-1, 59)),
        VInlineCons(
        VInlineCons(
        _V0cdddr,
        VGetArg(upenv, 12-1, 60)),
        VInlineCons(
        VInlineCons(
        _V0caaaar,
        VGetArg(upenv, 12-1, 61)),
        VInlineCons(
        VInlineCons(
        _V0caaadr,
        VGetArg(upenv, 12-1, 62)),
        VInlineCons(
        VInlineCons(
        _V0caadar,
        VGetArg(upenv, 12-1, 63)),
        VInlineCons(
        VInlineCons(
        _V0caaddr,
        VGetArg(upenv, 12-1, 64)),
        VInlineCons(
        VInlineCons(
        _V0cadaar,
        VGetArg(upenv, 12-1, 65)),
        VInlineCons(
        VInlineCons(
        _V0cadadr,
        VGetArg(upenv, 12-1, 66)),
        VInlineCons(
        VInlineCons(
        _V0caddar,
        VGetArg(upenv, 12-1, 67)),
        VInlineCons(
        VInlineCons(
        _V0cadddr,
        VGetArg(upenv, 12-1, 68)),
        VInlineCons(
        VInlineCons(
        _V0cdaaar,
        VGetArg(upenv, 12-1, 69)),
        VInlineCons(
        VInlineCons(
        _V0cdaadr,
        VGetArg(upenv, 12-1, 70)),
        VInlineCons(
        VInlineCons(
        _V0cdadar,
        VGetArg(upenv, 12-1, 71)),
        VInlineCons(
        VInlineCons(
        _V0cdaddr,
        VGetArg(upenv, 12-1, 72)),
        VInlineCons(
        VInlineCons(
        _V0cddaar,
        VGetArg(upenv, 12-1, 73)),
        VInlineCons(
        VInlineCons(
        _V0cddadr,
        VGetArg(upenv, 12-1, 74)),
        VInlineCons(
        VInlineCons(
        _V0cdddar,
        VGetArg(upenv, 12-1, 75)),
        VInlineCons(
        VInlineCons(
        _V0cddddr,
        VGetArg(upenv, 12-1, 76)),
        VInlineCons(
        VInlineCons(
        _V0list,
        VGetArg(upenv, 12-1, 77)),
        VInlineCons(
        VInlineCons(
        _V0list_Q,
        VGetArg(upenv, 12-1, 78)),
        VInlineCons(
        VInlineCons(
        _V0length,
        VGetArg(upenv, 12-1, 79)),
        VInlineCons(
        VInlineCons(
        _V0list__tail,
        VGetArg(upenv, 12-1, 80)),
        VInlineCons(
        VInlineCons(
        _V0list__ref,
        VGetArg(upenv, 12-1, 81)),
        VInlineCons(
        VInlineCons(
        _V0list__set_B,
        VGetArg(upenv, 12-1, 82)),
        VInlineCons(
        VInlineCons(
        _V0list__copy,
        VGetArg(upenv, 12-1, 83)),
        VInlineCons(
        VInlineCons(
        _V0make__list,
        VGetArg(upenv, 12-1, 84)),
        VInlineCons(
        VInlineCons(
        _V0map,
        VGetArg(upenv, 12-1, 85)),
        VInlineCons(
        VInlineCons(
        _V0for__each,
        VGetArg(upenv, 12-1, 86)),
        VInlineCons(
        VInlineCons(
        _V0append,
        VGetArg(upenv, 12-1, 88)),
        VInlineCons(
        VInlineCons(
        _V0reverse,
        VGetArg(upenv, 12-1, 89)),
        VInlineCons(
        VInlineCons(
        _V0memq,
        VGetArg(upenv, 12-1, 90)),
        VInlineCons(
        VInlineCons(
        _V0memv,
        VGetArg(upenv, 12-1, 91)),
        VInlineCons(
        VInlineCons(
        _V0member,
        VGetArg(upenv, 12-1, 92)),
        VInlineCons(
        VInlineCons(
        _V0assq,
        VGetArg(upenv, 12-1, 93)),
        VInlineCons(
        VInlineCons(
        _V0assv,
        VGetArg(upenv, 12-1, 94)),
        VInlineCons(
        VInlineCons(
        _V0assoc,
        VGetArg(upenv, 12-1, 95)),
        VInlineCons(
        VInlineCons(
        _V0string___Glist,
        VGetArg(upenv, 12-1, 107)),
        VInlineCons(
        VInlineCons(
        _V0list___Gstring,
        VGetArg(upenv, 12-1, 106)),
        VInlineCons(
        VInlineCons(
        _V0make__string,
        VGetArg(upenv, 12-1, 96)),
        VInlineCons(
        VInlineCons(
        _V0substring,
        VGetArg(upenv, 12-1, 97)),
        VInlineCons(
        VInlineCons(
        _V0string__copy,
        VGetArg(upenv, 12-1, 98)),
        VInlineCons(
        VInlineCons(
        _V0string__copy_B,
        VGetArg(upenv, 12-1, 99)),
        VInlineCons(
        VInlineCons(
        _V0string__ref,
        VGetArg(upenv, 12-1, 100)),
        VInlineCons(
        VInlineCons(
        _V0string__set_B,
        VGetArg(upenv, 12-1, 101)),
        VInlineCons(
        VInlineCons(
        _V0string__length,
        VGetArg(upenv, 12-1, 102)),
        VInlineCons(
        VInlineCons(
        _V0string___Gsymbol,
        VGetArg(upenv, 12-1, 103)),
        VInlineCons(
        VInlineCons(
        _V0string___Gnumber,
        VGetArg(upenv, 12-1, 104)),
        VInlineCons(
        VInlineCons(
        _V0string__append,
        VGetArg(upenv, 12-1, 108)),
        VInlineCons(
        VInlineCons(
        _V0symbol___Gstring,
        VGetArg(upenv, 12-1, 105)),
        VInlineCons(
        VInlineCons(
        _V0list___Gvector,
        VGetArg(upenv, 12-1, 109)),
        VInlineCons(
        VInlineCons(
        _V0vector,
        VGetArg(upenv, 12-1, 110)),
        VInlineCons(
        VInlineCons(
        _V0vector__ref,
        VGetArg(upenv, 12-1, 111)),
        VInlineCons(
        VInlineCons(
        _V0vector__set_B,
        VGetArg(upenv, 12-1, 112)),
        VInlineCons(
        VInlineCons(
        _V0vector__length,
        VGetArg(upenv, 12-1, 113)),
        VInlineCons(
        VInlineCons(
        _V0vector__for__each,
        VGetArg(upenv, 12-1, 114)),
        VInlineCons(
        VInlineCons(
        _V0make__hash__table,
        VGetArg(upenv, 12-1, 115)),
        VInlineCons(
        VInlineCons(
        _V0hash__table__ref,
        VGetArg(upenv, 12-1, 118)),
        VInlineCons(
        VInlineCons(
        _V0hash__table__set_B,
        VGetArg(upenv, 12-1, 119)),
        VInlineCons(
        VInlineCons(
        _V0hash__table__delete_B,
        VGetArg(upenv, 12-1, 120)),
        VInlineCons(
        VInlineCons(
        _V0char___Ginteger,
        VGetArg(upenv, 12-1, 121)),
        VInlineCons(
        VInlineCons(
        _V0current__output__port,
        VGetArg(upenv, 12-1, 122)),
        VInlineCons(
        VInlineCons(
        _V0current__error__port,
        VGetArg(upenv, 12-1, 123)),
        VInlineCons(
        VInlineCons(
        _V0current__input__port,
        VGetArg(upenv, 12-1, 124)),
        VInlineCons(
        VInlineCons(
        _V0open__input__file,
        VGetArg(upenv, 12-1, 130)),
        VInlineCons(
        VInlineCons(
        _V0open__output__file,
        VGetArg(upenv, 12-1, 131)),
        VInlineCons(
        VInlineCons(
        _V0close__port,
        VGetArg(upenv, 12-1, 126)),
        VInlineCons(
        VInlineCons(
        _V0open__output__string,
        VGetArg(upenv, 12-1, 132)),
        VInlineCons(
        VInlineCons(
        _V0get__output__string,
        VGetArg(upenv, 12-1, 133)),
        VInlineCons(
        VInlineCons(
        _V0with__output__to__file,
        VGetArg(upenv, 12-1, 134)),
        VInlineCons(
        VInlineCons(
        _V0with__input__from__file,
        VGetArg(upenv, 12-1, 135)),
        VInlineCons(
        VInlineCons(
        _V0read__char,
        VGetArg(upenv, 12-1, 136)),
        VInlineCons(
        VInlineCons(
        _V0read__line,
        VGetArg(upenv, 12-1, 137)),
        VInlineCons(
        VInlineCons(
        _V0read,
        VGetArg(upenv, 12-1, 138)),
        VInlineCons(
        VInlineCons(
        _V0newline,
        VGetArg(upenv, 12-1, 139)),
        VInlineCons(
        VInlineCons(
        _V0display,
        VGetArg(upenv, 12-1, 143)),
        VInlineCons(
        VInlineCons(
        _V0write,
        VGetArg(upenv, 12-1, 144)),
        VInlineCons(
        VInlineCons(
        _V0call_Wcc,
        VGetArg(upenv, 12-1, 145)),
        VInlineCons(
        VInlineCons(
        _V0call__with__current__continuation,
        VGetArg(upenv, 12-1, 146)),
        VInlineCons(
        VInlineCons(
        _V0call__with__values,
        VGetArg(upenv, 12-1, 147)),
        VInlineCons(
        VInlineCons(
        _V0apply,
        VGetArg(upenv, 12-1, 148)),
        VInlineCons(
        VInlineCons(
        _V0values,
        VGetArg(upenv, 12-1, 149)),
        VInlineCons(
        VInlineCons(
        _V0setter,
        VGetArg(upenv, 12-1, 150)),
        VInlineCons(
        VInlineCons(
        _V0mutator,
        VGetArg(upenv, 12-1, 151)),
        VInlineCons(
        VInlineCons(
        _V10vcore_Dsetter,
        VGetArg(upenv, 13-1, 1)),
        VInlineCons(
        VInlineCons(
        _V10vcore_Dmutator,
        VGetArg(upenv, 13-1, 0)),
        VInlineCons(
        VInlineCons(
        _V0command__line,
        VGetArg(upenv, 12-1, 152)),
        VInlineCons(
        VInlineCons(
        _V0system,
        VGetArg(upenv, 12-1, 153)),
        VInlineCons(
        VInlineCons(
        _V0open__input__process,
        VGetArg(upenv, 12-1, 154)),
        VInlineCons(
        VInlineCons(
        _V0open__output__process,
        VGetArg(upenv, 12-1, 155)),
        VInlineCons(
        VInlineCons(
        _V0make__temporary__file,
        VGetArg(upenv, 12-1, 156)),
        VInlineCons(
        VInlineCons(
        _V0exit,
        VGetArg(upenv, 12-1, 157)),
        VInlineCons(
        VInlineCons(
        _V0fiber__fork,
        VGetArg(upenv, 12-1, 168)),
        VInlineCons(
        VInlineCons(
        _V0fiber__fork__list,
        VGetArg(upenv, 12-1, 167)),
        VInlineCons(
        VInlineCons(
        _V0fiber__map,
        VGetArg(upenv, 12-1, 169)),
        VInlineCons(
        VInlineCons(
        _V0async,
        VGetArg(upenv, 12-1, 170)),
        VInlineCons(
        VInlineCons(
        _V0await,
        VGetArg(upenv, 12-1, 171)),
        VInlineCons(
        VInlineCons(
        _V0atom_Q,
        VGetArg(upenv, 12-1, 158)),
        VInlineCons(
        VInlineCons(
        _V0displayln,
        VGetArg(upenv, 12-1, 159)),
        VInlineCons(
        VInlineCons(
        _V0writeln,
        VGetArg(upenv, 12-1, 160)),
        VInlineCons(
        VInlineCons(
        _V0format,
        VGetArg(upenv, 12-1, 165)),
        VInlineCons(
        VInlineCons(
        _V0printf,
        VGetArg(upenv, 12-1, 163)),
        VInlineCons(
        VInlineCons(
        _V0sprintf,
        VGetArg(upenv, 12-1, 164)),
        VInlineCons(
        VInlineCons(
        _V0error,
        VGetArg(upenv, 12-1, 166)),
        VNULL)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
 }
}
static void _V0vanity_V0core_V20_k405(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k405" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k405, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k405, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k406) (bruijn current-input-port 11 124) (bruijn ##x.1042 0 0))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k406, env)}),
      VEncodeInt(11l), VEncodeInt(124l),
      _var0
    );
 }
}
__attribute__((used)) static void _V20CaseError__V0vanity_V0core_V20_lambda162(VRuntime * runtime, VEnv * upenv, int argc, ...) {
 // (_V0vanity_V0core_V20_lambda162 #t (1 ((bruijn ##k.1043 0 0) (bruijn in 1 0))) (2 (set! (bruijn ##k.1044 0 0) (bruijn in 1 0) (bruijn port 0 1))))
 VError("Not enough arguments to _V0vanity_V0core_V20_lambda162, got ~D~N"
 "-- expected 1~N"
 "-- expected 2~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V0vanity_V0core_V20_lambda162(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V20Case0__V0vanity_V0core_V20_lambda162" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case0__V0vanity_V0core_V20_lambda162, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##k.1043 0 0) (bruijn in 1 0))
    V_CALL(_var0, runtime,
      upenv->vars[0]);
 }
}
__attribute__((used)) static void _V20Case1__V0vanity_V0core_V20_lambda162(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V20Case1__V0vanity_V0core_V20_lambda162" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case1__V0vanity_V0core_V20_lambda162, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (set! (bruijn ##k.1044 0 0) (bruijn in 1 0) (bruijn port 0 1))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      _var0,
      VEncodeInt(1l), VEncodeInt(0l),
      _var1
    );
 }
}
void _V0vanity_V0core_V20_lambda162(VRuntime * runtime, VEnv * upenv, int argc, ...);
asm(
".intel_syntax noprefix\n"
#ifdef __linux__
".type _V0vanity_V0core_V20_lambda162, @function\n"
#endif
"_V0vanity_V0core_V20_lambda162:\n"
"    cmp " ARGC_REG ", 1\n"
"    je _V20Case0__V0vanity_V0core_V20_lambda162\n"
"    cmp " ARGC_REG ", 2\n"
"    je _V20Case1__V0vanity_V0core_V20_lambda162\n"
"    jmp _V20CaseError__V0vanity_V0core_V20_lambda162\n"
);
static void _V0vanity_V0core_V20_k404(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k404" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k404, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k404, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0core_V20_k405) (close _V0vanity_V0core_V20_lambda162))
    V_CALL_FUNC(_V0vanity_V0core_V20_k405, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_lambda162, env)}));
 }
}
static void _V0vanity_V0core_V20_k403(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k403" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k403, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k403, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.stdin->port (close _V0vanity_V0core_V20_k404))
    V_CALL_FUNC(VStdinPort, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k404, env)}));
 }
}
static void _V0vanity_V0core_V20_k402(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k402" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k402, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k402, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k403) (bruijn current-error-port 8 123) (bruijn ##x.1045 0 0))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k403, env)}),
      VEncodeInt(8l), VEncodeInt(123l),
      _var0
    );
 }
}
__attribute__((used)) static void _V20CaseError__V0vanity_V0core_V20_lambda163(VRuntime * runtime, VEnv * upenv, int argc, ...) {
 // (_V0vanity_V0core_V20_lambda163 #t (1 ((bruijn ##k.1046 0 0) (bruijn out 1 0))) (2 (set! (bruijn ##k.1047 0 0) (bruijn out 1 0) (bruijn port 0 1))))
 VError("Not enough arguments to _V0vanity_V0core_V20_lambda163, got ~D~N"
 "-- expected 1~N"
 "-- expected 2~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V0vanity_V0core_V20_lambda163(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V20Case0__V0vanity_V0core_V20_lambda163" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case0__V0vanity_V0core_V20_lambda163, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##k.1046 0 0) (bruijn out 1 0))
    V_CALL(_var0, runtime,
      upenv->vars[0]);
 }
}
__attribute__((used)) static void _V20Case1__V0vanity_V0core_V20_lambda163(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V20Case1__V0vanity_V0core_V20_lambda163" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case1__V0vanity_V0core_V20_lambda163, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (set! (bruijn ##k.1047 0 0) (bruijn out 1 0) (bruijn port 0 1))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      _var0,
      VEncodeInt(1l), VEncodeInt(0l),
      _var1
    );
 }
}
void _V0vanity_V0core_V20_lambda163(VRuntime * runtime, VEnv * upenv, int argc, ...);
asm(
".intel_syntax noprefix\n"
#ifdef __linux__
".type _V0vanity_V0core_V20_lambda163, @function\n"
#endif
"_V0vanity_V0core_V20_lambda163:\n"
"    cmp " ARGC_REG ", 1\n"
"    je _V20Case0__V0vanity_V0core_V20_lambda163\n"
"    cmp " ARGC_REG ", 2\n"
"    je _V20Case1__V0vanity_V0core_V20_lambda163\n"
"    jmp _V20CaseError__V0vanity_V0core_V20_lambda163\n"
);
static void _V0vanity_V0core_V20_k401(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k401" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k401, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k401, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0core_V20_k402) (close _V0vanity_V0core_V20_lambda163))
    V_CALL_FUNC(_V0vanity_V0core_V20_k402, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_lambda163, env)}));
 }
}
static void _V0vanity_V0core_V20_k400(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k400" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k400, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k400, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.stderr->port (close _V0vanity_V0core_V20_k401))
    V_CALL_FUNC(VStderrPort, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k401, env)}));
 }
}
static void _V0vanity_V0core_V20_k399(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k399" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k399, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k399, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k400) (bruijn current-output-port 5 122) (bruijn ##x.1048 0 0))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k400, env)}),
      VEncodeInt(5l), VEncodeInt(122l),
      _var0
    );
 }
}
__attribute__((used)) static void _V20CaseError__V0vanity_V0core_V20_lambda164(VRuntime * runtime, VEnv * upenv, int argc, ...) {
 // (_V0vanity_V0core_V20_lambda164 #t (1 ((bruijn ##k.1049 0 0) (bruijn out 1 0))) (2 (set! (bruijn ##k.1050 0 0) (bruijn out 1 0) (bruijn port 0 1))))
 VError("Not enough arguments to _V0vanity_V0core_V20_lambda164, got ~D~N"
 "-- expected 1~N"
 "-- expected 2~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V0vanity_V0core_V20_lambda164(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V20Case0__V0vanity_V0core_V20_lambda164" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case0__V0vanity_V0core_V20_lambda164, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##k.1049 0 0) (bruijn out 1 0))
    V_CALL(_var0, runtime,
      upenv->vars[0]);
 }
}
__attribute__((used)) static void _V20Case1__V0vanity_V0core_V20_lambda164(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V20Case1__V0vanity_V0core_V20_lambda164" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case1__V0vanity_V0core_V20_lambda164, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (set! (bruijn ##k.1050 0 0) (bruijn out 1 0) (bruijn port 0 1))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      _var0,
      VEncodeInt(1l), VEncodeInt(0l),
      _var1
    );
 }
}
void _V0vanity_V0core_V20_lambda164(VRuntime * runtime, VEnv * upenv, int argc, ...);
asm(
".intel_syntax noprefix\n"
#ifdef __linux__
".type _V0vanity_V0core_V20_lambda164, @function\n"
#endif
"_V0vanity_V0core_V20_lambda164:\n"
"    cmp " ARGC_REG ", 1\n"
"    je _V20Case0__V0vanity_V0core_V20_lambda164\n"
"    cmp " ARGC_REG ", 2\n"
"    je _V20Case1__V0vanity_V0core_V20_lambda164\n"
"    jmp _V20CaseError__V0vanity_V0core_V20_lambda164\n"
);
static void _V0vanity_V0core_V20_k398(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k398" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k398, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k398, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0core_V20_k399) (close _V0vanity_V0core_V20_lambda164))
    V_CALL_FUNC(_V0vanity_V0core_V20_k399, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_lambda164, env)}));
 }
}
static void _V0vanity_V0core_V20_k397(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k397" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k397, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k397, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.stdout->port (close _V0vanity_V0core_V20_k398))
    V_CALL_FUNC(VStdoutPort, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k398, env)}));
 }
}
static void _V0vanity_V0core_V20_k396(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k396" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k396, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k396, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k397) (bruijn rational? 2 30) (bruijn integer? 2 11))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k397, env)}),
      VEncodeInt(2l), VEncodeInt(30l),
      upenv->up->vars[11]
    );
 }
}
static void _V0vanity_V0core_V20_k395(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k395" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k395, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k395, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k396) (bruijn complex? 1 29) (bruijn number? 1 28))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k396, env)}),
      VEncodeInt(1l), VEncodeInt(29l),
      upenv->vars[28]
    );
 }
}
static void _V0vanity_V0core_V20_lambda2(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_lambda2" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_lambda2, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (letrec 172 ((##intrinsic ##vcore.null?) (close _V0vanity_V0core_V20_lambda3) (##intrinsic ##vcore.eof-object?) (##intrinsic ##vcore.pair?) (##intrinsic ##vcore.vector?) (##intrinsic ##vcore.procedure?) (##intrinsic ##vcore.symbol?) (##intrinsic ##vcore.string?) (##intrinsic ##vcore.char?) (##intrinsic ##vcore.int?) (##intrinsic ##vcore.int?) (##intrinsic ##vcore.int?) (##intrinsic ##vcore.double?) (##intrinsic ##vcore.double?) (##intrinsic ##vcore.eq?) (close _V0vanity_V0core_V20_lambda4) (close _V0vanity_V0core_V20_lambda6) (##intrinsic ##vcore.eqv?) (close _V0vanity_V0core_V20_lambda8) (close _V0vanity_V0core_V20_lambda10) (##intrinsic ##vcore.not) (close _V0vanity_V0core_V20_lambda11) (close _V0vanity_V0core_V20_lambda13) (close _V0vanity_V0core_V20_lambda15) (close _V0vanity_V0core_V20_lambda17) (close _V0vanity_V0core_V20_lambda19) (close _V0vanity_V0core_V20_lambda21) #f (close _V0vanity_V0core_V20_lambda22) #f #f (close _V0vanity_V0core_V20_lambda23) (close _V0vanity_V0core_V20_lambda24) (close _V0vanity_V0core_V20_lambda25) (##intrinsic ##vcore.+) (##intrinsic ##vcore.-) (##intrinsic ##vcore.*) (##intrinsic ##vcore./) (##intrinsic ##vcore.quotient) (##intrinsic ##vcore.remainder) (close _V0vanity_V0core_V20_lambda26) (close _V0vanity_V0core_V20_lambda27) (close _V0vanity_V0core_V20_lambda28) (close _V0vanity_V0core_V20_lambda30) (##intrinsic ##vcore.cons) (##intrinsic ##vcore.car) (##intrinsic ##vcore.cdr) (##intrinsic ##vcore.set-car!) (##intrinsic ##vcore.set-cdr!) (close _V0vanity_V0core_V20_lambda32) (close _V0vanity_V0core_V20_lambda33) (close _V0vanity_V0core_V20_lambda34) (close _V0vanity_V0core_V20_lambda35) (close _V0vanity_V0core_V20_lambda36) (close _V0vanity_V0core_V20_lambda37) (close _V0vanity_V0core_V20_lambda38) (close _V0vanity_V0core_V20_lambda39) (close _V0vanity_V0core_V20_lambda40) (close _V0vanity_V0core_V20_lambda41) (close _V0vanity_V0core_V20_lambda42) (close _V0vanity_V0core_V20_lambda43) (close _V0vanity_V0core_V20_lambda44) (close _V0vanity_V0core_V20_lambda45) (close _V0vanity_V0core_V20_lambda46) (close _V0vanity_V0core_V20_lambda47) (close _V0vanity_V0core_V20_lambda48) (close _V0vanity_V0core_V20_lambda49) (close _V0vanity_V0core_V20_lambda50) (close _V0vanity_V0core_V20_lambda51) (close _V0vanity_V0core_V20_lambda52) (close _V0vanity_V0core_V20_lambda53) (close _V0vanity_V0core_V20_lambda54) (close _V0vanity_V0core_V20_lambda55) (close _V0vanity_V0core_V20_lambda56) (close _V0vanity_V0core_V20_lambda57) (close _V0vanity_V0core_V20_lambda58) (close _V0vanity_V0core_V20_lambda59) (close _V0vanity_V0core_V20_lambda60) (close _V0vanity_V0core_V20_lambda61) (close _V0vanity_V0core_V20_lambda62) (close _V0vanity_V0core_V20_lambda64) (close _V0vanity_V0core_V20_lambda65) (close _V0vanity_V0core_V20_lambda66) (close _V0vanity_V0core_V20_lambda67) (close _V0vanity_V0core_V20_lambda68) (close _V0vanity_V0core_V20_lambda70) (close _V0vanity_V0core_V20_lambda75) (close _V0vanity_V0core_V20_lambda80) (close _V0vanity_V0core_V20_lambda82) (close _V0vanity_V0core_V20_lambda84) (close _V0vanity_V0core_V20_lambda86) (close _V0vanity_V0core_V20_lambda87) (close _V0vanity_V0core_V20_lambda88) (close _V0vanity_V0core_V20_lambda89) (close _V0vanity_V0core_V20_lambda90) (close _V0vanity_V0core_V20_lambda91) (##intrinsic ##vcore.make-string) (##intrinsic ##vcore.substring) (##intrinsic ##vcore.substring) (##intrinsic ##vcore.string-copy!) (##intrinsic ##vcore.string-ref) (##intrinsic ##vcore.string-set!) (##intrinsic ##vcore.string-length) (##intrinsic ##vcore.string->symbol) (##intrinsic ##vcore.string->number) (##intrinsic ##vcore.symbol->string) (close _V0vanity_V0core_V20_lambda92) (close _V0vanity_V0core_V20_lambda94) (close _V0vanity_V0core_V20_lambda96) (##intrinsic ##vcore.list->vector) (close _V0vanity_V0core_V20_lambda97) (##intrinsic ##vcore.vector-ref) (##intrinsic ##vcore.vector-set!) (##intrinsic ##vcore.vector-length) (close _V0vanity_V0core_V20_lambda98) (close _V0vanity_V0core_V20_lambda104) (##intrinsic ##vcore.hash-table-equivalence-function) (##intrinsic ##vcore.hash-table-hash-function) (close _V0vanity_V0core_V20_lambda105) (##intrinsic ##vcore.hash-table-set!) (##intrinsic ##vcore.hash-table-delete!) (##intrinsic ##vcore.char-integer) #f #f #f (close _V0vanity_V0core_V20_lambda107) (close _V0vanity_V0core_V20_lambda110) (close _V0vanity_V0core_V20_lambda111) (close _V0vanity_V0core_V20_lambda114) (close _V0vanity_V0core_V20_lambda117) (close _V0vanity_V0core_V20_lambda119) (close _V0vanity_V0core_V20_lambda121) (close _V0vanity_V0core_V20_lambda123) (##intrinsic ##vcore.get-output-string) (close _V0vanity_V0core_V20_lambda124) (close _V0vanity_V0core_V20_lambda126) (close _V0vanity_V0core_V20_lambda128) (close _V0vanity_V0core_V20_lambda129) (close _V0vanity_V0core_V20_lambda130) (close _V0vanity_V0core_V20_lambda131) (close _V0vanity_V0core_V20_lambda132) (close _V0vanity_V0core_V20_lambda134) (close _V0vanity_V0core_V20_lambda135) (close _V0vanity_V0core_V20_lambda137) (close _V0vanity_V0core_V20_lambda138) (##intrinsic ##vcore.call/cc) (##intrinsic ##vcore.call/cc) (##intrinsic ##vcore.call-with-values) (##intrinsic ##vcore.apply) (close _V0vanity_V0core_V20_lambda139) (bruijn ##vcore.setter 1 1) (bruijn ##vcore.mutator 1 0) (##intrinsic ##vcore.command-line) (##intrinsic ##vcore.system) (##intrinsic ##vcore.open-input-process) (##intrinsic ##vcore.open-output-process) (##intrinsic ##vcore.make-temporary-file) (##intrinsic ##vcore.exit) (close _V0vanity_V0core_V20_lambda141) (close _V0vanity_V0core_V20_lambda142) (close _V0vanity_V0core_V20_lambda143) (close _V0vanity_V0core_V20_lambda144) (close _V0vanity_V0core_V20_lambda146) (close _V0vanity_V0core_V20_lambda147) (close _V0vanity_V0core_V20_lambda148) (close _V0vanity_V0core_V20_lambda149) (close _V0vanity_V0core_V20_lambda150) (##intrinsic ##vcore.fiber-fork-list) (close _V0vanity_V0core_V20_lambda152) (close _V0vanity_V0core_V20_lambda153) (##intrinsic ##vcore.async) (##intrinsic ##vcore.await)) (set! (close _V0vanity_V0core_V20_k395) (bruijn exact->inexact 0 27) (bruijn inexact 0 26)))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[172]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 172, 172, upenv);
    env->vars[0] = _V40_V10vcore_Dnull_Q;
    env->vars[1] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_lambda3, env)});
    env->vars[2] = _V40_V10vcore_Deof__object_Q;
    env->vars[3] = _V40_V10vcore_Dpair_Q;
    env->vars[4] = _V40_V10vcore_Dvector_Q;
    env->vars[5] = _V40_V10vcore_Dprocedure_Q;
    env->vars[6] = _V40_V10vcore_Dsymbol_Q;
    env->vars[7] = _V40_V10vcore_Dstring_Q;
    env->vars[8] = _V40_V10vcore_Dchar_Q;
    env->vars[9] = _V40_V10vcore_Dint_Q;
    env->vars[10] = _V40_V10vcore_Dint_Q;
    env->vars[11] = _V40_V10vcore_Dint_Q;
    env->vars[12] = _V40_V10vcore_Ddouble_Q;
    env->vars[13] = _V40_V10vcore_Ddouble_Q;
    env->vars[14] = _V40_V10vcore_Deq_Q;
    env->vars[15] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_lambda4, env)});
    env->vars[16] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_lambda6, env)});
    env->vars[17] = _V40_V10vcore_Deqv_Q;
    env->vars[18] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_lambda8, env)});
    env->vars[19] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_lambda10, env)});
    env->vars[20] = _V40_V10vcore_Dnot;
    env->vars[21] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_lambda11, env)});
    env->vars[22] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_lambda13, env)});
    env->vars[23] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_lambda15, env)});
    env->vars[24] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_lambda17, env)});
    env->vars[25] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_lambda19, env)});
    env->vars[26] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_lambda21, env)});
    env->vars[27] = VEncodeBool(false);
    env->vars[28] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_lambda22, env)});
    env->vars[29] = VEncodeBool(false);
    env->vars[30] = VEncodeBool(false);
    env->vars[31] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_lambda23, env)});
    env->vars[32] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_lambda24, env)});
    env->vars[33] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_lambda25, env)});
    env->vars[34] = _V40_V10vcore_D_P;
    env->vars[35] = _V40_V10vcore_D__;
    env->vars[36] = _V40_V10vcore_D_S;
    env->vars[37] = _V40_V10vcore_D_W;
    env->vars[38] = _V40_V10vcore_Dquotient;
    env->vars[39] = _V40_V10vcore_Dremainder;
    env->vars[40] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_lambda26, env)});
    env->vars[41] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_lambda27, env)});
    env->vars[42] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_lambda28, env)});
    env->vars[43] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_lambda30, env)});
    env->vars[44] = _V40_V10vcore_Dcons;
    env->vars[45] = _V40_V10vcore_Dcar;
    env->vars[46] = _V40_V10vcore_Dcdr;
    env->vars[47] = _V40_V10vcore_Dset__car_B;
    env->vars[48] = _V40_V10vcore_Dset__cdr_B;
    env->vars[49] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_lambda32, env)});
    env->vars[50] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_lambda33, env)});
    env->vars[51] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_lambda34, env)});
    env->vars[52] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_lambda35, env)});
    env->vars[53] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_lambda36, env)});
    env->vars[54] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_lambda37, env)});
    env->vars[55] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_lambda38, env)});
    env->vars[56] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_lambda39, env)});
    env->vars[57] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_lambda40, env)});
    env->vars[58] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_lambda41, env)});
    env->vars[59] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_lambda42, env)});
    env->vars[60] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_lambda43, env)});
    env->vars[61] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_lambda44, env)});
    env->vars[62] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_lambda45, env)});
    env->vars[63] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_lambda46, env)});
    env->vars[64] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_lambda47, env)});
    env->vars[65] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_lambda48, env)});
    env->vars[66] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_lambda49, env)});
    env->vars[67] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_lambda50, env)});
    env->vars[68] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_lambda51, env)});
    env->vars[69] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_lambda52, env)});
    env->vars[70] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_lambda53, env)});
    env->vars[71] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_lambda54, env)});
    env->vars[72] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_lambda55, env)});
    env->vars[73] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_lambda56, env)});
    env->vars[74] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_lambda57, env)});
    env->vars[75] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_lambda58, env)});
    env->vars[76] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_lambda59, env)});
    env->vars[77] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_lambda60, env)});
    env->vars[78] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_lambda61, env)});
    env->vars[79] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_lambda62, env)});
    env->vars[80] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_lambda64, env)});
    env->vars[81] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_lambda65, env)});
    env->vars[82] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_lambda66, env)});
    env->vars[83] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_lambda67, env)});
    env->vars[84] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_lambda68, env)});
    env->vars[85] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_lambda70, env)});
    env->vars[86] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_lambda75, env)});
    env->vars[87] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_lambda80, env)});
    env->vars[88] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_lambda82, env)});
    env->vars[89] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_lambda84, env)});
    env->vars[90] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_lambda86, env)});
    env->vars[91] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_lambda87, env)});
    env->vars[92] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_lambda88, env)});
    env->vars[93] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_lambda89, env)});
    env->vars[94] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_lambda90, env)});
    env->vars[95] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_lambda91, env)});
    env->vars[96] = _V40_V10vcore_Dmake__string;
    env->vars[97] = _V40_V10vcore_Dsubstring;
    env->vars[98] = _V40_V10vcore_Dsubstring;
    env->vars[99] = _V40_V10vcore_Dstring__copy_B;
    env->vars[100] = _V40_V10vcore_Dstring__ref;
    env->vars[101] = _V40_V10vcore_Dstring__set_B;
    env->vars[102] = _V40_V10vcore_Dstring__length;
    env->vars[103] = _V40_V10vcore_Dstring___Gsymbol;
    env->vars[104] = _V40_V10vcore_Dstring___Gnumber;
    env->vars[105] = _V40_V10vcore_Dsymbol___Gstring;
    env->vars[106] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_lambda92, env)});
    env->vars[107] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_lambda94, env)});
    env->vars[108] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_lambda96, env)});
    env->vars[109] = _V40_V10vcore_Dlist___Gvector;
    env->vars[110] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_lambda97, env)});
    env->vars[111] = _V40_V10vcore_Dvector__ref;
    env->vars[112] = _V40_V10vcore_Dvector__set_B;
    env->vars[113] = _V40_V10vcore_Dvector__length;
    env->vars[114] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_lambda98, env)});
    env->vars[115] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_lambda104, env)});
    env->vars[116] = _V40_V10vcore_Dhash__table__equivalence__function;
    env->vars[117] = _V40_V10vcore_Dhash__table__hash__function;
    env->vars[118] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_lambda105, env)});
    env->vars[119] = _V40_V10vcore_Dhash__table__set_B;
    env->vars[120] = _V40_V10vcore_Dhash__table__delete_B;
    env->vars[121] = _V40_V10vcore_Dchar__integer;
    env->vars[122] = VEncodeBool(false);
    env->vars[123] = VEncodeBool(false);
    env->vars[124] = VEncodeBool(false);
    env->vars[125] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_lambda107, env)});
    env->vars[126] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_lambda110, env)});
    env->vars[127] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_lambda111, env)});
    env->vars[128] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_lambda114, env)});
    env->vars[129] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_lambda117, env)});
    env->vars[130] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_lambda119, env)});
    env->vars[131] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_lambda121, env)});
    env->vars[132] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_lambda123, env)});
    env->vars[133] = _V40_V10vcore_Dget__output__string;
    env->vars[134] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_lambda124, env)});
    env->vars[135] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_lambda126, env)});
    env->vars[136] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_lambda128, env)});
    env->vars[137] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_lambda129, env)});
    env->vars[138] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_lambda130, env)});
    env->vars[139] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_lambda131, env)});
    env->vars[140] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_lambda132, env)});
    env->vars[141] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_lambda134, env)});
    env->vars[142] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_lambda135, env)});
    env->vars[143] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_lambda137, env)});
    env->vars[144] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_lambda138, env)});
    env->vars[145] = _V40_V10vcore_Dcall_Wcc;
    env->vars[146] = _V40_V10vcore_Dcall_Wcc;
    env->vars[147] = _V40_V10vcore_Dcall__with__values;
    env->vars[148] = _V40_V10vcore_Dapply;
    env->vars[149] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_lambda139, env)});
    env->vars[150] = upenv->vars[1];
    env->vars[151] = upenv->vars[0];
    env->vars[152] = _V40_V10vcore_Dcommand__line;
    env->vars[153] = _V40_V10vcore_Dsystem;
    env->vars[154] = _V40_V10vcore_Dopen__input__process;
    env->vars[155] = _V40_V10vcore_Dopen__output__process;
    env->vars[156] = _V40_V10vcore_Dmake__temporary__file;
    env->vars[157] = _V40_V10vcore_Dexit;
    env->vars[158] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_lambda141, env)});
    env->vars[159] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_lambda142, env)});
    env->vars[160] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_lambda143, env)});
    env->vars[161] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_lambda144, env)});
    env->vars[162] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_lambda146, env)});
    env->vars[163] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_lambda147, env)});
    env->vars[164] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_lambda148, env)});
    env->vars[165] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_lambda149, env)});
    env->vars[166] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_lambda150, env)});
    env->vars[167] = _V40_V10vcore_Dfiber__fork__list;
    env->vars[168] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_lambda152, env)});
    env->vars[169] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_lambda153, env)});
    env->vars[170] = _V40_V10vcore_Dasync;
    env->vars[171] = _V40_V10vcore_Dawait;
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k395, env)}),
      VEncodeInt(0l), VEncodeInt(27l),
      env->vars[26]
    );
    }
 }
}
static void _V0vanity_V0core_V20_k4(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k4" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k4, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k4, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0core_V20_lambda2) (bruijn ##x.4 1 0) (bruijn ##x.5 0 0))
    V_CALL_FUNC(_V0vanity_V0core_V20_lambda2, env, runtime,
      upenv->vars[0],
      _var0);
 }
}
static void _V0vanity_V0core_V20_k3(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k3" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k3, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k3, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 1 0) (close _V0vanity_V0core_V20_k4) '##vcore.setter)
    V_CALL(upenv->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k4, env)}),
      _V10vcore_Dsetter);
 }
}
static void _V0vanity_V0core_V20_k2(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k2" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k2, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k2, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 0 0) (close _V0vanity_V0core_V20_k3) '##vcore.mutator)
    V_CALL(_var0, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k3, env)}),
      _V10vcore_Dmutator);
 }
}
static void _V0vanity_V0core_V20_k1(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k1" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k1, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.make-import (close _V0vanity_V0core_V20_k2) (##string ##string.1071) (bruijn ##x.1051 0 0))
    V_CALL_FUNC(VMakeImport2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k2, env)}),
      VEncodePointer(&_V10string_D1071.sym, VPOINTER_OTHER),
      _var0);
 }
}
static void _V0vanity_V0core_V20_lambda1(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_lambda1" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_lambda1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_lambda1, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0core_V20_k1) (##string ##string.1072))
    V_CALL_FUNC(VLoadLibrary2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k1, env)}),
      VEncodePointer(&_V10string_D1072.sym, VPOINTER_OTHER));
 }
}
VFunc _V0vanity_V0core_V20 = (VFunc)_V0vanity_V0core_V20_lambda1;
