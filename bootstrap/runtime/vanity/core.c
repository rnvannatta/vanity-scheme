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
static struct { VBlob sym; char bytes[21]; } _V10string_D1138 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "_V0vanity_V0seed_V20" };
static struct { VBlob sym; char bytes[21]; } _V10string_D1137 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "_V0vanity_V0core_V20" };
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
VWEAK VWORD _V0with__exception__handler;VWEAK struct { VBlob sym; char bytes[23]; } _VW_V0with__exception__handler = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 23 }, "with-exception-handler" };
VWEAK VWORD _V0raise__continuable;VWEAK struct { VBlob sym; char bytes[18]; } _VW_V0raise__continuable = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 18 }, "raise-continuable" };
VWEAK VWORD _V0raise;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0raise = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "raise" };
VWEAK VWORD _V0make__parameter;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V0make__parameter = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "make-parameter" };
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
VWEAK VWORD _V0record__length;VWEAK struct { VBlob sym; char bytes[14]; } _VW_V0record__length = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 14 }, "record-length" };
VWEAK VWORD _V0record__set_B;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0record__set_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "record-set!" };
VWEAK VWORD _V0record__ref;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V0record__ref = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "record-ref" };
VWEAK VWORD _V0record;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0record = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "record" };
VWEAK VWORD _V0vector__for__each;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V0vector__for__each = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "vector-for-each" };
VWEAK VWORD _V0vector__length;VWEAK struct { VBlob sym; char bytes[14]; } _VW_V0vector__length = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 14 }, "vector-length" };
VWEAK VWORD _V0vector__set_B;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0vector__set_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "vector-set!" };
VWEAK VWORD _V0vector__ref;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V0vector__ref = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "vector-ref" };
VWEAK VWORD _V0vector;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0vector = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "vector" };
VWEAK VWORD _V0vector___Glist;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V0vector___Glist = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "vector->list" };
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
VWEAK VWORD _V0record_Q;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0record_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "record\?" };
VWEAK VWORD _V0vector_Q;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0vector_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "vector\?" };
VWEAK VWORD _V0pair_Q;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0pair_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "pair\?" };
VWEAK VWORD _V0boolean_Q;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0boolean_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "boolean\?" };
VWEAK VWORD _V0eof__object_Q;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0eof__object_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "eof-object\?" };
VWEAK VWORD _V0null_Q;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0null_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "null\?" };
VWEAK VWORD _V40_V10vcore_Dawait;VWEAK VClosure _VW_V40_V10vcore_Dawait = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VAwait, NULL };
VWEAK VWORD _V40_V10vcore_Dasync;VWEAK VClosure _VW_V40_V10vcore_Dasync = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VAsync, NULL };
VWEAK VWORD _V40_V10vcore_Dfiber__fork__list;VWEAK VClosure _VW_V40_V10vcore_Dfiber__fork__list = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VFiberForkList, NULL };
static struct { VBlob sym; char bytes[8]; } _V10string_D1136 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 8 }, "error: " };
static struct { VBlob sym; char bytes[2]; } _V10string_D1135 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 2 }, ":" };
VWEAK VWORD _V40_V10vcore_Draise;VWEAK VClosure _VW_V40_V10vcore_Draise = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VRaise, NULL };
static struct { VBlob sym; char bytes[23]; } _V10string_D1134 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 23 }, "printf: unknown format" };
static struct { VBlob sym; char bytes[42]; } _V10string_D1133 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 42 }, "printf: not enough args for format string" };
static struct { VBlob sym; char bytes[41]; } _V10string_D1132 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 41 }, "printf: format string has trailing tilde" };
VWEAK VWORD _V40_V10vcore_Dexit;VWEAK VClosure _VW_V40_V10vcore_Dexit = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VExit2, NULL };
VWEAK VWORD _V40_V10vcore_Dmake__temporary__file;VWEAK VClosure _VW_V40_V10vcore_Dmake__temporary__file = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VMakeTemporaryFile2, NULL };
VWEAK VWORD _V40_V10vcore_Dopen__output__process;VWEAK VClosure _VW_V40_V10vcore_Dopen__output__process = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VOpenOutputProcess2, NULL };
VWEAK VWORD _V40_V10vcore_Dopen__input__process;VWEAK VClosure _VW_V40_V10vcore_Dopen__input__process = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VOpenInputProcess2, NULL };
VWEAK VWORD _V40_V10vcore_Dsystem;VWEAK VClosure _VW_V40_V10vcore_Dsystem = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VSystem2, NULL };
VWEAK VWORD _V40_V10vcore_Dcommand__line;VWEAK VClosure _VW_V40_V10vcore_Dcommand__line = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VCommandLine2, NULL };
VWEAK VWORD _V10vcore_Dpush__value;VWEAK struct { VBlob sym; char bytes[19]; } _VW_V10vcore_Dpush__value = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 19 }, "##vcore.push-value" };
VWEAK VWORD _V10vcore_Dpop__value;VWEAK struct { VBlob sym; char bytes[18]; } _VW_V10vcore_Dpop__value = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 18 }, "##vcore.pop-value" };
static struct { VBlob sym; char bytes[38]; } _V10string_D1131 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 38 }, "make parameter expects zero arguments" };
VWEAK VWORD _V0parameter;VWEAK struct { VBlob sym; char bytes[10]; } _VW_V0parameter = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 10 }, "parameter" };
VWEAK VWORD _V40_V10vcore_Dapply;VWEAK VClosure _VW_V40_V10vcore_Dapply = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VApply2, NULL };
VWEAK VWORD _V40_V10vcore_Dcall__with__values;VWEAK VClosure _VW_V40_V10vcore_Dcall__with__values = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VCallValues2, NULL };
VWEAK VWORD _V40_V10vcore_Dcall_Wcc;VWEAK VClosure _VW_V40_V10vcore_Dcall_Wcc = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VCallCC2, NULL };
static struct { VBlob sym; char bytes[3]; } _V10string_D1130 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 3 }, "#(" };
static struct { VBlob sym; char bytes[3]; } _V10string_D1129 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 3 }, ",@" };
VWEAK VWORD _V0unquote__splicing;VWEAK struct { VBlob sym; char bytes[17]; } _VW_V0unquote__splicing = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 17 }, "unquote-splicing" };
static struct { VBlob sym; char bytes[2]; } _V10string_D1128 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 2 }, "," };
VWEAK VWORD _V0unquote;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0unquote = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "unquote" };
static struct { VBlob sym; char bytes[2]; } _V10string_D1127 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 2 }, "`" };
VWEAK VWORD _V0quasiquote;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V0quasiquote = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "quasiquote" };
static struct { VBlob sym; char bytes[2]; } _V10string_D1126 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 2 }, "'" };
VWEAK VWORD _V0quote;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0quote = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "quote" };
static struct { VBlob sym; char bytes[2]; } _V10string_D1125 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 2 }, "(" };
static struct { VBlob sym; char bytes[2]; } _V10string_D1124 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 2 }, ")" };
static struct { VBlob sym; char bytes[4]; } _V10string_D1123 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 4 }, " . " };
VWEAK VWORD _V0ok;VWEAK struct { VBlob sym; char bytes[3]; } _VW_V0ok = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 3 }, "ok" };
static struct { VBlob sym; char bytes[2]; } _V10string_D1122 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 2 }, " " };
VWEAK VWORD _V40_V10vcore_Dget__output__string;VWEAK VClosure _VW_V40_V10vcore_Dget__output__string = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VGetOutputString2, NULL };
static struct { VBlob sym; char bytes[27]; } _V10string_D1121 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 27 }, "open-output-string: failed" };
static struct { VBlob sym; char bytes[25]; } _V10string_D1120 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 25 }, "open-output-file: failed" };
static struct { VBlob sym; char bytes[24]; } _V10string_D1119 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 24 }, "open-input-file: failed" };
VWEAK VWORD _V40_V10vcore_Dopen__output__string;VWEAK VClosure _VW_V40_V10vcore_Dopen__output__string = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VOpenOutputString2, NULL };
VWEAK VWORD _V40_V10vcore_Dclose__stream;VWEAK VClosure _VW_V40_V10vcore_Dclose__stream = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VCloseStream2, NULL };
VWEAK VWORD _V40_V10vcore_Dchar__integer;VWEAK VClosure _VW_V40_V10vcore_Dchar__integer = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VCharInt2, NULL };
VWEAK VWORD _V40_V10vcore_Dhash__table__delete_B;VWEAK VClosure _VW_V40_V10vcore_Dhash__table__delete_B = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VHashTableDelete, NULL };
VWEAK VWORD _V40_V10vcore_Dhash__table__set_B;VWEAK VClosure _VW_V40_V10vcore_Dhash__table__set_B = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VHashTableSet, NULL };
static struct { VBlob sym; char bytes[26]; } _V10string_D1118 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 26 }, "No such key in hash table" };
VWEAK VWORD _V40_V10vcore_Dhash__table__hash__function;VWEAK VClosure _VW_V40_V10vcore_Dhash__table__hash__function = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VHashTableHashFunc, NULL };
VWEAK VWORD _V40_V10vcore_Dhash__table__equivalence__function;VWEAK VClosure _VW_V40_V10vcore_Dhash__table__equivalence__function = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VHashTableEqvFunc, NULL };
VWEAK VWORD _V40_V10vcore_Drecord__length;VWEAK VClosure _VW_V40_V10vcore_Drecord__length = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VRecordLength2, NULL };
VWEAK VWORD _V40_V10vcore_Drecord__set_B;VWEAK VClosure _VW_V40_V10vcore_Drecord__set_B = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VRecordSet2, NULL };
VWEAK VWORD _V40_V10vcore_Drecord__ref;VWEAK VClosure _VW_V40_V10vcore_Drecord__ref = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VRecordRef2, NULL };
VWEAK VWORD _V40_V10vcore_Drecord;VWEAK VClosure _VW_V40_V10vcore_Drecord = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VCreateRecord2, NULL };
VWEAK VWORD _V40_V10vcore_Dvector__length;VWEAK VClosure _VW_V40_V10vcore_Dvector__length = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VVectorLength2, NULL };
VWEAK VWORD _V40_V10vcore_Dvector__set_B;VWEAK VClosure _VW_V40_V10vcore_Dvector__set_B = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VVectorSet2, NULL };
VWEAK VWORD _V40_V10vcore_Dvector__ref;VWEAK VClosure _VW_V40_V10vcore_Dvector__ref = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VVectorRef2, NULL };
VWEAK VWORD _V40_V10vcore_Dlist___Gvector;VWEAK VClosure _VW_V40_V10vcore_Dlist___Gvector = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VListVector2, NULL };
static struct { VBlob sym; char bytes[1]; } _V10string_D1117 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 1 }, "" };
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
VWEAK VWORD _V40_V10vcore_Drecord_Q;VWEAK VClosure _VW_V40_V10vcore_Drecord_Q = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VRecordP2, NULL };
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
  _V0with__exception__handler = VEncodePointer(VLookupConstant("_V0with__exception__handler", &_VW_V0with__exception__handler), VPOINTER_OTHER);
  _V0raise__continuable = VEncodePointer(VLookupConstant("_V0raise__continuable", &_VW_V0raise__continuable), VPOINTER_OTHER);
  _V0raise = VEncodePointer(VLookupConstant("_V0raise", &_VW_V0raise), VPOINTER_OTHER);
  _V0make__parameter = VEncodePointer(VLookupConstant("_V0make__parameter", &_VW_V0make__parameter), VPOINTER_OTHER);
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
  _V0record__length = VEncodePointer(VLookupConstant("_V0record__length", &_VW_V0record__length), VPOINTER_OTHER);
  _V0record__set_B = VEncodePointer(VLookupConstant("_V0record__set_B", &_VW_V0record__set_B), VPOINTER_OTHER);
  _V0record__ref = VEncodePointer(VLookupConstant("_V0record__ref", &_VW_V0record__ref), VPOINTER_OTHER);
  _V0record = VEncodePointer(VLookupConstant("_V0record", &_VW_V0record), VPOINTER_OTHER);
  _V0vector__for__each = VEncodePointer(VLookupConstant("_V0vector__for__each", &_VW_V0vector__for__each), VPOINTER_OTHER);
  _V0vector__length = VEncodePointer(VLookupConstant("_V0vector__length", &_VW_V0vector__length), VPOINTER_OTHER);
  _V0vector__set_B = VEncodePointer(VLookupConstant("_V0vector__set_B", &_VW_V0vector__set_B), VPOINTER_OTHER);
  _V0vector__ref = VEncodePointer(VLookupConstant("_V0vector__ref", &_VW_V0vector__ref), VPOINTER_OTHER);
  _V0vector = VEncodePointer(VLookupConstant("_V0vector", &_VW_V0vector), VPOINTER_OTHER);
  _V0vector___Glist = VEncodePointer(VLookupConstant("_V0vector___Glist", &_VW_V0vector___Glist), VPOINTER_OTHER);
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
  _V0record_Q = VEncodePointer(VLookupConstant("_V0record_Q", &_VW_V0record_Q), VPOINTER_OTHER);
  _V0vector_Q = VEncodePointer(VLookupConstant("_V0vector_Q", &_VW_V0vector_Q), VPOINTER_OTHER);
  _V0pair_Q = VEncodePointer(VLookupConstant("_V0pair_Q", &_VW_V0pair_Q), VPOINTER_OTHER);
  _V0boolean_Q = VEncodePointer(VLookupConstant("_V0boolean_Q", &_VW_V0boolean_Q), VPOINTER_OTHER);
  _V0eof__object_Q = VEncodePointer(VLookupConstant("_V0eof__object_Q", &_VW_V0eof__object_Q), VPOINTER_OTHER);
  _V0null_Q = VEncodePointer(VLookupConstant("_V0null_Q", &_VW_V0null_Q), VPOINTER_OTHER);
  _V40_V10vcore_Dawait = VEncodePointer(VLookupConstant("_V40_V10vcore_Dawait", &_VW_V40_V10vcore_Dawait), VPOINTER_CLOSURE);
  _V40_V10vcore_Dasync = VEncodePointer(VLookupConstant("_V40_V10vcore_Dasync", &_VW_V40_V10vcore_Dasync), VPOINTER_CLOSURE);
  _V40_V10vcore_Dfiber__fork__list = VEncodePointer(VLookupConstant("_V40_V10vcore_Dfiber__fork__list", &_VW_V40_V10vcore_Dfiber__fork__list), VPOINTER_CLOSURE);
  _V40_V10vcore_Draise = VEncodePointer(VLookupConstant("_V40_V10vcore_Draise", &_VW_V40_V10vcore_Draise), VPOINTER_CLOSURE);
  _V40_V10vcore_Dexit = VEncodePointer(VLookupConstant("_V40_V10vcore_Dexit", &_VW_V40_V10vcore_Dexit), VPOINTER_CLOSURE);
  _V40_V10vcore_Dmake__temporary__file = VEncodePointer(VLookupConstant("_V40_V10vcore_Dmake__temporary__file", &_VW_V40_V10vcore_Dmake__temporary__file), VPOINTER_CLOSURE);
  _V40_V10vcore_Dopen__output__process = VEncodePointer(VLookupConstant("_V40_V10vcore_Dopen__output__process", &_VW_V40_V10vcore_Dopen__output__process), VPOINTER_CLOSURE);
  _V40_V10vcore_Dopen__input__process = VEncodePointer(VLookupConstant("_V40_V10vcore_Dopen__input__process", &_VW_V40_V10vcore_Dopen__input__process), VPOINTER_CLOSURE);
  _V40_V10vcore_Dsystem = VEncodePointer(VLookupConstant("_V40_V10vcore_Dsystem", &_VW_V40_V10vcore_Dsystem), VPOINTER_CLOSURE);
  _V40_V10vcore_Dcommand__line = VEncodePointer(VLookupConstant("_V40_V10vcore_Dcommand__line", &_VW_V40_V10vcore_Dcommand__line), VPOINTER_CLOSURE);
  _V10vcore_Dpush__value = VEncodePointer(VLookupConstant("_V10vcore_Dpush__value", &_VW_V10vcore_Dpush__value), VPOINTER_OTHER);
  _V10vcore_Dpop__value = VEncodePointer(VLookupConstant("_V10vcore_Dpop__value", &_VW_V10vcore_Dpop__value), VPOINTER_OTHER);
  _V0parameter = VEncodePointer(VLookupConstant("_V0parameter", &_VW_V0parameter), VPOINTER_OTHER);
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
  _V40_V10vcore_Drecord__length = VEncodePointer(VLookupConstant("_V40_V10vcore_Drecord__length", &_VW_V40_V10vcore_Drecord__length), VPOINTER_CLOSURE);
  _V40_V10vcore_Drecord__set_B = VEncodePointer(VLookupConstant("_V40_V10vcore_Drecord__set_B", &_VW_V40_V10vcore_Drecord__set_B), VPOINTER_CLOSURE);
  _V40_V10vcore_Drecord__ref = VEncodePointer(VLookupConstant("_V40_V10vcore_Drecord__ref", &_VW_V40_V10vcore_Drecord__ref), VPOINTER_CLOSURE);
  _V40_V10vcore_Drecord = VEncodePointer(VLookupConstant("_V40_V10vcore_Drecord", &_VW_V40_V10vcore_Drecord), VPOINTER_CLOSURE);
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
  _V40_V10vcore_Drecord_Q = VEncodePointer(VLookupConstant("_V40_V10vcore_Drecord_Q", &_VW_V40_V10vcore_Drecord_Q), VPOINTER_CLOSURE);
  _V40_V10vcore_Dvector_Q = VEncodePointer(VLookupConstant("_V40_V10vcore_Dvector_Q", &_VW_V40_V10vcore_Dvector_Q), VPOINTER_CLOSURE);
  _V40_V10vcore_Dpair_Q = VEncodePointer(VLookupConstant("_V40_V10vcore_Dpair_Q", &_VW_V40_V10vcore_Dpair_Q), VPOINTER_CLOSURE);
  _V40_V10vcore_Deof__object_Q = VEncodePointer(VLookupConstant("_V40_V10vcore_Deof__object_Q", &_VW_V40_V10vcore_Deof__object_Q), VPOINTER_CLOSURE);
  _V40_V10vcore_Dnull_Q = VEncodePointer(VLookupConstant("_V40_V10vcore_Dnull_Q", &_VW_V40_V10vcore_Dnull_Q), VPOINTER_CLOSURE);
}
static void _V0boolean_Q_k5(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0boolean_Q_k5" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0boolean_Q_k5, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0boolean_Q_k5, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.8 0 0) ((bruijn ##k.7 1 0) (bruijn ##p.8 0 0)) ((bruijn ##k.7 1 0) (##inline ##vcore.eq? (bruijn x 1 1) #f)))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->vars[0], runtime,
      _var0);
} else {
    V_CALL(upenv->vars[0], runtime,
      VInlineEq2(runtime,
        upenv->vars[1],
        VEncodeBool(false)));
}
 }
}
static void _V0boolean_Q_lambda3(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0boolean_Q_lambda3" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0boolean_Q_lambda3, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0boolean_Q_lambda3, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0boolean_Q_k5) (##inline ##vcore.eq? (bruijn x 0 1) #t))
    V_CALL_FUNC(_V0boolean_Q_k5, env, runtime,
      VInlineEq2(runtime,
        _var1,
        VEncodeBool(true)));
 }
}
static void _V0symbol_E_Q_k6(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0symbol_E_Q_k6" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0symbol_E_Q_k6, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0symbol_E_Q_k6, runtime, upenv, 1, argc, _var0) {
  // (if (##intrinsic ##vcore.symbol=?) (if (bruijn x 1 1) ((bruijn ##k.12 0 0) (bruijn y 1 2)) ((bruijn ##k.12 0 0) #f)) ((bruijn ##k.12 0 0) #f))
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
static void _V0symbol_E_Q_k7(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0symbol_E_Q_k7" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0symbol_E_Q_k7, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0symbol_E_Q_k7, runtime, upenv, 1, argc, _var0) {
  // (##vcore.symbol=? (bruijn ##k.10 1 0) (bruijn y 1 2) (bruijn z 1 3))
    V_CALL_FUNC(VSymbolEqv2, NULL, runtime,
      upenv->vars[0],
      upenv->vars[2],
      upenv->vars[3]);
 }
}
static void _V0symbol_E_Q_k8(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0symbol_E_Q_k8" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0symbol_E_Q_k8, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0symbol_E_Q_k8, runtime, upenv, 1, argc, _var0) {
  // (if (##intrinsic ##vcore.symbol=?) (if (bruijn x 1 1) ((bruijn ##k.16 0 0) (bruijn y 1 2)) ((bruijn ##k.16 0 0) #f)) ((bruijn ##k.16 0 0) #f))
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
static void _V0symbol_E_Q_k10(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0symbol_E_Q_k10" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0symbol_E_Q_k10, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0symbol_E_Q_k10, runtime, upenv, 1, argc, _var0) {
  // (##vcore.symbol=? (bruijn ##k.13 2 0) (bruijn z 2 3) (bruijn w 2 4))
    V_CALL_FUNC(VSymbolEqv2, NULL, runtime,
      upenv->up->vars[0],
      upenv->up->vars[3],
      upenv->up->vars[4]);
 }
}
static void _V0symbol_E_Q_k9(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0symbol_E_Q_k9" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0symbol_E_Q_k9, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0symbol_E_Q_k9, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.symbol=? (close _V0symbol_E_Q_k10) (bruijn y 1 2) (bruijn z 1 3))
    V_CALL_FUNC(VSymbolEqv2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0symbol_E_Q_k10, env)}),
      upenv->vars[2],
      upenv->vars[3]);
 }
}
static void _V0loop_k15(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k15" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k15, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k15, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 6 0) (bruijn ##k.18 5 0) (bruijn ##x.21 0 0))
    V_CALL(VGetArg(upenv, 6-1, 0), runtime,
      VGetArg(upenv, 5-1, 0),
      _var0);
 }
}
static void _V0loop_k14(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k14" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k14, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k14, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.20 0 0) ((bruijn ##k.18 4 0) #f) ((bruijn cdr 7 48) (close _V0loop_k15) (bruijn xs 4 1)))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeBool(false));
} else {
    V_CALL(VGetArg(upenv, 7-1, 48), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k15, env)}),
      upenv->up->up->up->vars[1]);
}
 }
}
static void _V0loop_k13(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k13" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k13, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k13, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn not 6 22) (close _V0loop_k14) (bruijn ##x.22 0 0))
    V_CALL(VGetArg(upenv, 6-1, 22), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k14, env)}),
      _var0);
 }
}
static void _V0loop_k12(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k12" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k12, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k12, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.symbol=? (close _V0loop_k13) (bruijn x 4 1) (bruijn ##x.23 0 0))
    V_CALL_FUNC(VSymbolEqv2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k13, env)}),
      upenv->up->up->up->vars[1],
      _var0);
 }
}
static void _V0loop_k11(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k11" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k11, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k11, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.19 0 0) ((bruijn ##k.18 1 0) #t) ((bruijn car 4 47) (close _V0loop_k12) (bruijn xs 1 1)))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(true));
} else {
    V_CALL(upenv->up->up->up->vars[47], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k12, env)}),
      upenv->vars[1]);
}
 }
}
static void _V0loop_lambda5(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0loop_lambda5" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0loop_lambda5, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda5, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn null? 3 0) (close _V0loop_k11) (bruijn xs 0 1))
    V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k11, env)}),
      _var1);
 }
}
static void _V0symbol_E_Q_k16(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0symbol_E_Q_k16" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0symbol_E_Q_k16, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0symbol_E_Q_k16, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 1 0) (bruijn ##k.17 2 0) (bruijn ##x.24 0 0))
    V_CALL(upenv->vars[0], runtime,
      upenv->up->vars[0],
      _var0);
 }
}
__attribute__((used)) static void _V20CaseError__V0symbol_E_Q_lambda4(VRuntime * runtime, VEnv * upenv, int argc, ...) {
 // (_V0symbol_E_Q_lambda4 #t (3 (##vcore.symbol=? (bruijn ##k.9 0 0) (bruijn x 0 1) (bruijn y 0 2))) (4 ((close _V0symbol_E_Q_k6) (close _V0symbol_E_Q_k7))) (5 ((close _V0symbol_E_Q_k8) (close _V0symbol_E_Q_k9))) (3 + (letrec 1 ((close _V0loop_lambda5)) ((bruijn cons 2 46) (close _V0symbol_E_Q_k16) (bruijn y 1 2) (bruijn xs 1 3)))))
 VError("Not enough arguments to _V0symbol_E_Q_lambda4, got ~D~N"
 "-- expected 3~N"
 "-- expected 4~N"
 "-- expected 5~N"
 "-- expected 3 or more~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V0symbol_E_Q_lambda4(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V20Case0__V0symbol_E_Q_lambda4" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case0__V0symbol_E_Q_lambda4, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  // (##vcore.symbol=? (bruijn ##k.9 0 0) (bruijn x 0 1) (bruijn y 0 2))
    V_CALL_FUNC(VSymbolEqv2, NULL, runtime,
      _var0,
      _var1,
      _var2);
 }
}
__attribute__((used)) static void _V20Case1__V0symbol_E_Q_lambda4(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V20Case1__V0symbol_E_Q_lambda4" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case1__V0symbol_E_Q_lambda4, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // ((close _V0symbol_E_Q_k6) (close _V0symbol_E_Q_k7))
    V_CALL_FUNC(_V0symbol_E_Q_k6, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0symbol_E_Q_k7, env)}));
 }
}
__attribute__((used)) static void _V20Case2__V0symbol_E_Q_lambda4(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4) {
 static VDebugInfo dbg = { "_V20Case2__V0symbol_E_Q_lambda4" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case2__V0symbol_E_Q_lambda4, runtime, upenv, 5, argc, _var0, _var1, _var2, _var3, _var4) {
  struct { VEnv env; VWORD argv[5]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 5, 5, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  env->vars[4] = _var4;
  // ((close _V0symbol_E_Q_k8) (close _V0symbol_E_Q_k9))
    V_CALL_FUNC(_V0symbol_E_Q_k8, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0symbol_E_Q_k9, env)}));
 }
}
__attribute__((used)) static void _V20Case3__V0symbol_E_Q_lambda4(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, ...) {
 static VDebugInfo dbg = { "_V20Case3__V0symbol_E_Q_lambda4" };
 VRecordCall2(runtime, &dbg);
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 3, argc, _var2);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case3__V0symbol_E_Q_lambda4, runtime, upenv, 3, argc, _var0, _var1, _var2, _varargs) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _varargs;
  // (letrec 1 ((close _V0loop_lambda5)) ((bruijn cons 2 46) (close _V0symbol_E_Q_k16) (bruijn y 1 2) (bruijn xs 1 3)))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda5, env)});
    V_CALL(upenv->up->vars[46], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0symbol_E_Q_k16, env)}),
      upenv->vars[2],
      upenv->vars[3]);
    }
 }
}
void _V0symbol_E_Q_lambda4(VRuntime * runtime, VEnv * upenv, int argc, ...);
asm(
".intel_syntax noprefix\n"
#ifdef __linux__
".type _V0symbol_E_Q_lambda4, @function\n"
#endif
"_V0symbol_E_Q_lambda4:\n"
"    cmp " ARGC_REG ", 3\n"
"    je _V20Case0__V0symbol_E_Q_lambda4\n"
"    cmp " ARGC_REG ", 4\n"
"    je _V20Case1__V0symbol_E_Q_lambda4\n"
"    cmp " ARGC_REG ", 5\n"
"    je _V20Case2__V0symbol_E_Q_lambda4\n"
"    cmp " ARGC_REG ", 3\n"
"    jge _V20Case3__V0symbol_E_Q_lambda4\n"
"    jmp _V20CaseError__V0symbol_E_Q_lambda4\n"
);
static void _V0boolean_E_Q_k18(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0boolean_E_Q_k18" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0boolean_E_Q_k18, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0boolean_E_Q_k18, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.27 0 0) ((bruijn boolean? 3 1) (bruijn ##k.25 2 0) (bruijn y 2 2)) ((bruijn ##k.25 2 0) #f))
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
static void _V0boolean_E_Q_k17(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0boolean_E_Q_k17" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0boolean_E_Q_k17, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0boolean_E_Q_k17, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.26 0 0) ((bruijn boolean? 2 1) (close _V0boolean_E_Q_k18) (bruijn x 1 1)) ((bruijn ##k.25 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->up->vars[1], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0boolean_E_Q_k18, env)}),
      upenv->vars[1]);
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0boolean_E_Q_k19(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0boolean_E_Q_k19" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0boolean_E_Q_k19, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0boolean_E_Q_k19, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn boolean=? 2 17) (if (bruijn x 1 1) ((bruijn ##k.30 0 0) (bruijn y 1 2)) ((bruijn ##k.30 0 0) #f)) ((bruijn ##k.30 0 0) #f))
if(VDecodeBool(
upenv->up->vars[17])) {
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
static void _V0boolean_E_Q_k20(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0boolean_E_Q_k20" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0boolean_E_Q_k20, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0boolean_E_Q_k20, runtime, upenv, 1, argc, _var0) {
  // ((bruijn boolean=? 2 17) (bruijn ##k.28 1 0) (bruijn y 1 2) (bruijn z 1 3))
    V_CALL(upenv->up->vars[17], runtime,
      upenv->vars[0],
      upenv->vars[2],
      upenv->vars[3]);
 }
}
static void _V0boolean_E_Q_k21(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0boolean_E_Q_k21" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0boolean_E_Q_k21, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0boolean_E_Q_k21, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn boolean=? 2 17) (if (bruijn x 1 1) ((bruijn ##k.34 0 0) (bruijn y 1 2)) ((bruijn ##k.34 0 0) #f)) ((bruijn ##k.34 0 0) #f))
if(VDecodeBool(
upenv->up->vars[17])) {
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
static void _V0boolean_E_Q_k23(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0boolean_E_Q_k23" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0boolean_E_Q_k23, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0boolean_E_Q_k23, runtime, upenv, 1, argc, _var0) {
  // ((bruijn boolean=? 3 17) (bruijn ##k.31 2 0) (bruijn z 2 3) (bruijn w 2 4))
    V_CALL(upenv->up->up->vars[17], runtime,
      upenv->up->vars[0],
      upenv->up->vars[3],
      upenv->up->vars[4]);
 }
}
static void _V0boolean_E_Q_k22(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0boolean_E_Q_k22" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0boolean_E_Q_k22, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0boolean_E_Q_k22, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn boolean=? 2 17) (close _V0boolean_E_Q_k23) (bruijn y 1 2) (bruijn z 1 3))
    V_CALL(upenv->up->vars[17], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0boolean_E_Q_k23, env)}),
      upenv->vars[2],
      upenv->vars[3]);
 }
}
static void _V0loop_k28(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k28" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k28, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k28, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 6 0) (bruijn ##k.36 5 0) (bruijn ##x.39 0 0))
    V_CALL(VGetArg(upenv, 6-1, 0), runtime,
      VGetArg(upenv, 5-1, 0),
      _var0);
 }
}
static void _V0loop_k27(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k27" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k27, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k27, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.38 0 0) ((bruijn ##k.36 4 0) #f) ((bruijn cdr 7 48) (close _V0loop_k28) (bruijn xs 4 1)))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeBool(false));
} else {
    V_CALL(VGetArg(upenv, 7-1, 48), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k28, env)}),
      upenv->up->up->up->vars[1]);
}
 }
}
static void _V0loop_k26(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k26" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k26, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k26, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn not 6 22) (close _V0loop_k27) (bruijn ##x.40 0 0))
    V_CALL(VGetArg(upenv, 6-1, 22), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k27, env)}),
      _var0);
 }
}
static void _V0loop_k25(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k25" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k25, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k25, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn boolean=? 5 17) (close _V0loop_k26) (bruijn x 4 1) (bruijn ##x.41 0 0))
    V_CALL(VGetArg(upenv, 5-1, 17), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k26, env)}),
      upenv->up->up->up->vars[1],
      _var0);
 }
}
static void _V0loop_k24(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k24" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k24, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k24, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.37 0 0) ((bruijn ##k.36 1 0) #t) ((bruijn car 4 47) (close _V0loop_k25) (bruijn xs 1 1)))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(true));
} else {
    V_CALL(upenv->up->up->up->vars[47], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k25, env)}),
      upenv->vars[1]);
}
 }
}
static void _V0loop_lambda7(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0loop_lambda7" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0loop_lambda7, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda7, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn null? 3 0) (close _V0loop_k24) (bruijn xs 0 1))
    V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k24, env)}),
      _var1);
 }
}
static void _V0boolean_E_Q_k29(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0boolean_E_Q_k29" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0boolean_E_Q_k29, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0boolean_E_Q_k29, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 1 0) (bruijn ##k.35 2 0) (bruijn ##x.42 0 0))
    V_CALL(upenv->vars[0], runtime,
      upenv->up->vars[0],
      _var0);
 }
}
__attribute__((used)) static void _V20CaseError__V0boolean_E_Q_lambda6(VRuntime * runtime, VEnv * upenv, int argc, ...) {
 // (_V0boolean_E_Q_lambda6 #t (3 ((bruijn eq? 1 15) (close _V0boolean_E_Q_k17) (bruijn x 0 1) (bruijn y 0 2))) (4 ((close _V0boolean_E_Q_k19) (close _V0boolean_E_Q_k20))) (5 ((close _V0boolean_E_Q_k21) (close _V0boolean_E_Q_k22))) (3 + (letrec 1 ((close _V0loop_lambda7)) ((bruijn cons 2 46) (close _V0boolean_E_Q_k29) (bruijn y 1 2) (bruijn xs 1 3)))))
 VError("Not enough arguments to _V0boolean_E_Q_lambda6, got ~D~N"
 "-- expected 3~N"
 "-- expected 4~N"
 "-- expected 5~N"
 "-- expected 3 or more~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V0boolean_E_Q_lambda6(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V20Case0__V0boolean_E_Q_lambda6" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case0__V0boolean_E_Q_lambda6, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn eq? 1 15) (close _V0boolean_E_Q_k17) (bruijn x 0 1) (bruijn y 0 2))
    V_CALL(upenv->vars[15], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0boolean_E_Q_k17, env)}),
      _var1,
      _var2);
 }
}
__attribute__((used)) static void _V20Case1__V0boolean_E_Q_lambda6(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V20Case1__V0boolean_E_Q_lambda6" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case1__V0boolean_E_Q_lambda6, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // ((close _V0boolean_E_Q_k19) (close _V0boolean_E_Q_k20))
    V_CALL_FUNC(_V0boolean_E_Q_k19, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0boolean_E_Q_k20, env)}));
 }
}
__attribute__((used)) static void _V20Case2__V0boolean_E_Q_lambda6(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4) {
 static VDebugInfo dbg = { "_V20Case2__V0boolean_E_Q_lambda6" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case2__V0boolean_E_Q_lambda6, runtime, upenv, 5, argc, _var0, _var1, _var2, _var3, _var4) {
  struct { VEnv env; VWORD argv[5]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 5, 5, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  env->vars[4] = _var4;
  // ((close _V0boolean_E_Q_k21) (close _V0boolean_E_Q_k22))
    V_CALL_FUNC(_V0boolean_E_Q_k21, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0boolean_E_Q_k22, env)}));
 }
}
__attribute__((used)) static void _V20Case3__V0boolean_E_Q_lambda6(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, ...) {
 static VDebugInfo dbg = { "_V20Case3__V0boolean_E_Q_lambda6" };
 VRecordCall2(runtime, &dbg);
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 3, argc, _var2);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case3__V0boolean_E_Q_lambda6, runtime, upenv, 3, argc, _var0, _var1, _var2, _varargs) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _varargs;
  // (letrec 1 ((close _V0loop_lambda7)) ((bruijn cons 2 46) (close _V0boolean_E_Q_k29) (bruijn y 1 2) (bruijn xs 1 3)))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda7, env)});
    V_CALL(upenv->up->vars[46], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0boolean_E_Q_k29, env)}),
      upenv->vars[2],
      upenv->vars[3]);
    }
 }
}
void _V0boolean_E_Q_lambda6(VRuntime * runtime, VEnv * upenv, int argc, ...);
asm(
".intel_syntax noprefix\n"
#ifdef __linux__
".type _V0boolean_E_Q_lambda6, @function\n"
#endif
"_V0boolean_E_Q_lambda6:\n"
"    cmp " ARGC_REG ", 3\n"
"    je _V20Case0__V0boolean_E_Q_lambda6\n"
"    cmp " ARGC_REG ", 4\n"
"    je _V20Case1__V0boolean_E_Q_lambda6\n"
"    cmp " ARGC_REG ", 5\n"
"    je _V20Case2__V0boolean_E_Q_lambda6\n"
"    cmp " ARGC_REG ", 3\n"
"    jge _V20Case3__V0boolean_E_Q_lambda6\n"
"    jmp _V20CaseError__V0boolean_E_Q_lambda6\n"
);
static void _V0loop_k38(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k38" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k38, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k38, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 6 0) (bruijn ##k.45 5 0) (bruijn ##x.48 0 0) (bruijn len 5 2))
    V_CALL(VGetArg(upenv, 6-1, 0), runtime,
      VGetArg(upenv, 5-1, 0),
      _var0,
      VGetArg(upenv, 5-1, 2));
 }
}
static void _V0loop_k37(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k37" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k37, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k37, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.47 0 0) ((bruijn + 11 36) (close _V0loop_k38) (bruijn i 4 1) 1) ((bruijn ##k.45 4 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 11-1, 36), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k38, env)}),
      upenv->up->up->up->vars[1],
      VEncodeInt(1l));
} else {
    V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0loop_k36(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k36" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k36, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k36, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn equal? 10 21) (close _V0loop_k37) (bruijn ##x.49 1 0) (bruijn ##x.50 0 0))
    V_CALL(VGetArg(upenv, 10-1, 21), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k37, env)}),
      upenv->vars[0],
      _var0);
 }
}
static void _V0loop_k35(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k35" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k35, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k35, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn vector-ref 9 113) (close _V0loop_k36) (bruijn y 8 2) (bruijn i 2 1))
    V_CALL(VGetArg(upenv, 9-1, 113), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k36, env)}),
      VGetArg(upenv, 8-1, 2),
      upenv->up->vars[1]);
 }
}
static void _V0loop_k34(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k34" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k34, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k34, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.46 0 0) ((bruijn ##k.45 1 0) #t) ((bruijn vector-ref 8 113) (close _V0loop_k35) (bruijn x 7 1) (bruijn i 1 1)))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(true));
} else {
    V_CALL(VGetArg(upenv, 8-1, 113), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k35, env)}),
      VGetArg(upenv, 7-1, 1),
      upenv->vars[1]);
}
 }
}
static void _V0loop_lambda9(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0loop_lambda9" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0loop_lambda9, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda9, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn = 7 24) (close _V0loop_k34) (bruijn i 0 1) (bruijn len 0 2))
    V_CALL(VGetArg(upenv, 7-1, 24), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k34, env)}),
      _var1,
      _var2);
 }
}
static void _V0vector_E_Q_k39(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vector_E_Q_k39" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vector_E_Q_k39, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vector_E_Q_k39, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 1 0) (bruijn ##k.43 6 0) 0 (bruijn ##x.51 0 0))
    V_CALL(upenv->vars[0], runtime,
      VGetArg(upenv, 6-1, 0),
      VEncodeInt(0l),
      _var0);
 }
}
static void _V0vector_E_Q_k33(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vector_E_Q_k33" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vector_E_Q_k33, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vector_E_Q_k33, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.44 0 0) ((bruijn ##k.43 4 0) #f) (letrec 1 ((close _V0loop_lambda9)) ((bruijn vector-length 6 115) (close _V0vector_E_Q_k39) (bruijn x 5 1))))
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
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda9, env)});
    V_CALL(VGetArg(upenv, 6-1, 115), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vector_E_Q_k39, env)}),
      VGetArg(upenv, 5-1, 1));
    }
}
 }
}
static void _V0vector_E_Q_k32(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vector_E_Q_k32" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vector_E_Q_k32, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vector_E_Q_k32, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn not 4 22) (close _V0vector_E_Q_k33) (bruijn ##x.52 0 0))
    V_CALL(upenv->up->up->up->vars[22], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vector_E_Q_k33, env)}),
      _var0);
 }
}
static void _V0vector_E_Q_k31(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vector_E_Q_k31" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vector_E_Q_k31, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vector_E_Q_k31, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn = 3 24) (close _V0vector_E_Q_k32) (bruijn ##x.53 1 0) (bruijn ##x.54 0 0))
    V_CALL(upenv->up->up->vars[24], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vector_E_Q_k32, env)}),
      upenv->vars[0],
      _var0);
 }
}
static void _V0vector_E_Q_k30(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vector_E_Q_k30" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vector_E_Q_k30, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vector_E_Q_k30, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn vector-length 2 115) (close _V0vector_E_Q_k31) (bruijn y 1 2))
    V_CALL(upenv->up->vars[115], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vector_E_Q_k31, env)}),
      upenv->vars[2]);
 }
}
static void _V0vector_E_Q_lambda8(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0vector_E_Q_lambda8" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0vector_E_Q_lambda8, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vector_E_Q_lambda8, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn vector-length 1 115) (close _V0vector_E_Q_k30) (bruijn x 0 1))
    V_CALL(upenv->vars[115], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vector_E_Q_k30, env)}),
      _var1);
 }
}
static void _V0record_E_Q_k45(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0record_E_Q_k45" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0record_E_Q_k45, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0record_E_Q_k45, runtime, upenv, 1, argc, _var0) {
  // ((bruijn eqv? 7 18) (bruijn ##k.66 2 0) (bruijn ##x.67 1 0) (bruijn ##x.68 0 0))
    V_CALL(VGetArg(upenv, 7-1, 18), runtime,
      upenv->up->vars[0],
      upenv->vars[0],
      _var0);
 }
}
static void _V0record_E_Q_k44(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0record_E_Q_k44" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0record_E_Q_k44, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0record_E_Q_k44, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn record-ref 6 119) (close _V0record_E_Q_k45) (bruijn y 5 2) 0)
    V_CALL(VGetArg(upenv, 6-1, 119), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0record_E_Q_k45, env)}),
      VGetArg(upenv, 5-1, 2),
      VEncodeInt(0l));
 }
}
static void _V0record_E_Q_k43(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0record_E_Q_k43" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0record_E_Q_k43, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0record_E_Q_k43, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.65 1 0) ((bruijn record-ref 5 119) (close _V0record_E_Q_k44) (bruijn x 4 1) 0) ((bruijn ##k.66 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(VGetArg(upenv, 5-1, 119), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0record_E_Q_k44, env)}),
      upenv->up->up->up->vars[1],
      VEncodeInt(0l));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0loop_k52(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k52" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k52, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k52, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 6 0) (bruijn ##k.57 5 0) (bruijn ##x.60 0 0) (bruijn len 5 2))
    V_CALL(VGetArg(upenv, 6-1, 0), runtime,
      VGetArg(upenv, 5-1, 0),
      _var0,
      VGetArg(upenv, 5-1, 2));
 }
}
static void _V0loop_k51(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k51" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k51, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k51, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.59 0 0) ((bruijn + 12 36) (close _V0loop_k52) (bruijn i 4 1) 1) ((bruijn ##k.57 4 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 12-1, 36), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k52, env)}),
      upenv->up->up->up->vars[1],
      VEncodeInt(1l));
} else {
    V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0loop_k50(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k50" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k50, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k50, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn equal? 11 21) (close _V0loop_k51) (bruijn ##x.61 1 0) (bruijn ##x.62 0 0))
    V_CALL(VGetArg(upenv, 11-1, 21), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k51, env)}),
      upenv->vars[0],
      _var0);
 }
}
static void _V0loop_k49(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k49" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k49, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k49, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn record-ref 10 119) (close _V0loop_k50) (bruijn y 9 2) (bruijn i 2 1))
    V_CALL(VGetArg(upenv, 10-1, 119), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k50, env)}),
      VGetArg(upenv, 9-1, 2),
      upenv->up->vars[1]);
 }
}
static void _V0loop_k48(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k48" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k48, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k48, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.58 0 0) ((bruijn ##k.57 1 0) #t) ((bruijn record-ref 9 119) (close _V0loop_k49) (bruijn x 8 1) (bruijn i 1 1)))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(true));
} else {
    V_CALL(VGetArg(upenv, 9-1, 119), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k49, env)}),
      VGetArg(upenv, 8-1, 1),
      upenv->vars[1]);
}
 }
}
static void _V0loop_lambda11(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0loop_lambda11" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0loop_lambda11, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda11, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn = 8 24) (close _V0loop_k48) (bruijn i 0 1) (bruijn len 0 2))
    V_CALL(VGetArg(upenv, 8-1, 24), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k48, env)}),
      _var1,
      _var2);
 }
}
static void _V0record_E_Q_k53(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0record_E_Q_k53" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0record_E_Q_k53, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0record_E_Q_k53, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 1 0) (bruijn ##k.55 7 0) 1 (bruijn ##x.63 0 0))
    V_CALL(upenv->vars[0], runtime,
      VGetArg(upenv, 7-1, 0),
      VEncodeInt(1l),
      _var0);
 }
}
static void _V0record_E_Q_k47(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0record_E_Q_k47" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0record_E_Q_k47, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0record_E_Q_k47, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.56 0 0) ((bruijn ##k.55 5 0) #f) (letrec 1 ((close _V0loop_lambda11)) ((bruijn record-length 7 121) (close _V0record_E_Q_k53) (bruijn x 6 1))))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      VEncodeBool(false));
} else {
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda11, env)});
    V_CALL(VGetArg(upenv, 7-1, 121), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0record_E_Q_k53, env)}),
      VGetArg(upenv, 6-1, 1));
    }
}
 }
}
static void _V0record_E_Q_k46(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0record_E_Q_k46" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0record_E_Q_k46, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0record_E_Q_k46, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn not 5 22) (close _V0record_E_Q_k47) (bruijn ##x.64 0 0))
    V_CALL(VGetArg(upenv, 5-1, 22), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0record_E_Q_k47, env)}),
      _var0);
 }
}
static void _V0record_E_Q_k42(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0record_E_Q_k42" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0record_E_Q_k42, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0record_E_Q_k42, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0record_E_Q_k43) (close _V0record_E_Q_k46))
    V_CALL_FUNC(_V0record_E_Q_k43, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0record_E_Q_k46, env)}));
 }
}
static void _V0record_E_Q_k41(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0record_E_Q_k41" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0record_E_Q_k41, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0record_E_Q_k41, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn = 3 24) (close _V0record_E_Q_k42) (bruijn ##x.69 1 0) (bruijn ##x.70 0 0))
    V_CALL(upenv->up->up->vars[24], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0record_E_Q_k42, env)}),
      upenv->vars[0],
      _var0);
 }
}
static void _V0record_E_Q_k40(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0record_E_Q_k40" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0record_E_Q_k40, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0record_E_Q_k40, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn record-length 2 121) (close _V0record_E_Q_k41) (bruijn y 1 2))
    V_CALL(upenv->up->vars[121], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0record_E_Q_k41, env)}),
      upenv->vars[2]);
 }
}
static void _V0record_E_Q_lambda10(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0record_E_Q_lambda10" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0record_E_Q_lambda10, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0record_E_Q_lambda10, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn record-length 1 121) (close _V0record_E_Q_k40) (bruijn x 0 1))
    V_CALL(upenv->vars[121], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0record_E_Q_k40, env)}),
      _var1);
 }
}
static void _V0equal_Q_k57(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0equal_Q_k57" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0equal_Q_k57, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0equal_Q_k57, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.91 0 0) (##vcore.blob=? (bruijn ##k.90 1 0) (bruijn x 4 1) (bruijn y 4 2)) ((bruijn ##k.90 1 0) #f))
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
static void _V0equal_Q_k56(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0equal_Q_k56" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0equal_Q_k56, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0equal_Q_k56, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.89 1 0) (##vcore.blob? (close _V0equal_Q_k57) (bruijn y 3 2)) ((bruijn ##k.90 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL_FUNC(VBlobP2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0equal_Q_k57, env)}),
      upenv->up->up->vars[2]);
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0equal_Q_k60(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0equal_Q_k60" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0equal_Q_k60, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0equal_Q_k60, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.84 0 0) ((bruijn equal? 6 21) (bruijn ##k.82 1 0) (##inline ##vcore.cdr (bruijn x 5 1)) (##inline ##vcore.cdr (bruijn y 5 2))) ((bruijn ##k.82 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 6-1, 21), runtime,
      upenv->vars[0],
      VInlineCdr2(runtime,
        VGetArg(upenv, 5-1, 1)),
      VInlineCdr2(runtime,
        VGetArg(upenv, 5-1, 2)));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0equal_Q_k59(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0equal_Q_k59" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0equal_Q_k59, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0equal_Q_k59, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn x 4 1)) (if (##inline ##vcore.pair? (bruijn y 4 2)) ((bruijn equal? 5 21) (close _V0equal_Q_k60) (##inline ##vcore.car (bruijn x 4 1)) (##inline ##vcore.car (bruijn y 4 2))) ((bruijn ##k.82 0 0) #f)) ((bruijn ##k.82 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->up->up->up->vars[1]))) {
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->up->up->up->vars[2]))) {
    V_CALL(VGetArg(upenv, 5-1, 21), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0equal_Q_k60, env)}),
      VInlineCar2(runtime,
        upenv->up->up->up->vars[1]),
      VInlineCar2(runtime,
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
static void _V0equal_Q_k64(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0equal_Q_k64" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0equal_Q_k64, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0equal_Q_k64, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.80 0 0) ((bruijn vector=? 8 19) (bruijn ##k.79 1 0) (bruijn x 7 1) (bruijn y 7 2)) ((bruijn ##k.79 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 8-1, 19), runtime,
      upenv->vars[0],
      VGetArg(upenv, 7-1, 1),
      VGetArg(upenv, 7-1, 2));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0equal_Q_k63(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0equal_Q_k63" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0equal_Q_k63, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0equal_Q_k63, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.78 1 0) (##vcore.vector? (close _V0equal_Q_k64) (bruijn y 6 2)) ((bruijn ##k.79 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL_FUNC(VVectorP2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0equal_Q_k64, env)}),
      VGetArg(upenv, 6-1, 2));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0equal_Q_k67(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0equal_Q_k67" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0equal_Q_k67, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0equal_Q_k67, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.77 0 0) ((bruijn record=? 9 20) (bruijn ##k.71 8 0) (bruijn x 8 1) (bruijn y 8 2)) ((bruijn ##k.71 8 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 9-1, 20), runtime,
      VGetArg(upenv, 8-1, 0),
      VGetArg(upenv, 8-1, 1),
      VGetArg(upenv, 8-1, 2));
} else {
    V_CALL(VGetArg(upenv, 8-1, 0), runtime,
      VEncodeBool(false));
}
 }
}
static void _V0equal_Q_k66(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0equal_Q_k66" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0equal_Q_k66, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0equal_Q_k66, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.76 0 0) (##vcore.record? (close _V0equal_Q_k67) (bruijn y 7 2)) ((bruijn ##k.71 7 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(VRecordP2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0equal_Q_k67, env)}),
      VGetArg(upenv, 7-1, 2));
} else {
    V_CALL(VGetArg(upenv, 7-1, 0), runtime,
      VEncodeBool(false));
}
 }
}
static void _V0equal_Q_k65(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0equal_Q_k65" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0equal_Q_k65, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0equal_Q_k65, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.75 0 0) ((bruijn ##k.71 6 0) (bruijn ##p.75 0 0)) (##vcore.record? (close _V0equal_Q_k66) (bruijn x 6 1)))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 6-1, 0), runtime,
      _var0);
} else {
    V_CALL_FUNC(VRecordP2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0equal_Q_k66, env)}),
      VGetArg(upenv, 6-1, 1));
}
 }
}
static void _V0equal_Q_k62(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0equal_Q_k62" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0equal_Q_k62, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0equal_Q_k62, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0equal_Q_k63) (close _V0equal_Q_k65))
    V_CALL_FUNC(_V0equal_Q_k63, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0equal_Q_k65, env)}));
 }
}
static void _V0equal_Q_k61(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0equal_Q_k61" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0equal_Q_k61, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0equal_Q_k61, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.74 0 0) ((bruijn ##k.71 4 0) (bruijn ##p.74 0 0)) (##vcore.vector? (close _V0equal_Q_k62) (bruijn x 4 1)))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->up->up->up->vars[0], runtime,
      _var0);
} else {
    V_CALL_FUNC(VVectorP2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0equal_Q_k62, env)}),
      upenv->up->up->up->vars[1]);
}
 }
}
static void _V0equal_Q_k58(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0equal_Q_k58" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0equal_Q_k58, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0equal_Q_k58, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.73 0 0) ((bruijn ##k.71 3 0) (bruijn ##p.73 0 0)) ((close _V0equal_Q_k59) (close _V0equal_Q_k61)))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->up->up->vars[0], runtime,
      _var0);
} else {
    V_CALL_FUNC(_V0equal_Q_k59, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0equal_Q_k61, env)}));
}
 }
}
static void _V0equal_Q_k55(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0equal_Q_k55" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0equal_Q_k55, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0equal_Q_k55, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0equal_Q_k56) (close _V0equal_Q_k58))
    V_CALL_FUNC(_V0equal_Q_k56, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0equal_Q_k58, env)}));
 }
}
static void _V0equal_Q_k54(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0equal_Q_k54" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0equal_Q_k54, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0equal_Q_k54, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.72 0 0) ((bruijn ##k.71 1 0) (bruijn ##p.72 0 0)) (##vcore.blob? (close _V0equal_Q_k55) (bruijn x 1 1)))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->vars[0], runtime,
      _var0);
} else {
    V_CALL_FUNC(VBlobP2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0equal_Q_k55, env)}),
      upenv->vars[1]);
}
 }
}
static void _V0equal_Q_lambda12(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0equal_Q_lambda12" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0equal_Q_lambda12, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0equal_Q_lambda12, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((close _V0equal_Q_k54) (##inline ##vcore.eq? (bruijn x 0 1) (bruijn y 0 2)))
    V_CALL_FUNC(_V0equal_Q_k54, env, runtime,
      VInlineEq2(runtime,
        _var1,
        _var2));
 }
}
static void _V0loop_k74(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k74" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k74, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k74, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 8 0) (bruijn ##k.93 7 0) (bruijn ##x.96 0 0))
    V_CALL(VGetArg(upenv, 8-1, 0), runtime,
      VGetArg(upenv, 7-1, 0),
      _var0);
 }
}
static void _V0loop_k73(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k73" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k73, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k73, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.95 0 0) ((bruijn cdr 9 48) (close _V0loop_k74) (bruijn xs 6 1)) ((bruijn ##k.93 6 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 9-1, 48), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k74, env)}),
      VGetArg(upenv, 6-1, 1));
} else {
    V_CALL(VGetArg(upenv, 6-1, 0), runtime,
      VEncodeBool(false));
}
 }
}
static void _V0loop_k72(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k72" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k72, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k72, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn eq? 8 15) (close _V0loop_k73) (bruijn ##x.97 0 0) -1)
    V_CALL(VGetArg(upenv, 8-1, 15), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k73, env)}),
      _var0,
      VEncodeInt(-1l));
 }
}
static void _V0loop_k71(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k71" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k71, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k71, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.cmp (close _V0loop_k72) (bruijn ##x.98 1 0) (bruijn ##x.99 0 0))
    V_CALL_FUNC(VCmp2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k72, env)}),
      upenv->vars[0],
      _var0);
 }
}
static void _V0loop_k70(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k70" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k70, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k70, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn cadr 6 52) (close _V0loop_k71) (bruijn xs 3 1))
    V_CALL(VGetArg(upenv, 6-1, 52), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k71, env)}),
      upenv->up->up->vars[1]);
 }
}
static void _V0loop_k69(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k69" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k69, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k69, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.94 0 0) ((bruijn ##k.93 2 0) #t) ((bruijn car 5 47) (close _V0loop_k70) (bruijn xs 2 1)))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(true));
} else {
    V_CALL(VGetArg(upenv, 5-1, 47), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k70, env)}),
      upenv->up->vars[1]);
}
 }
}
static void _V0loop_k68(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k68" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k68, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k68, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn null? 4 0) (close _V0loop_k69) (bruijn ##x.100 0 0))
    V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k69, env)}),
      _var0);
 }
}
static void _V0loop_lambda14(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0loop_lambda14" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0loop_lambda14, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda14, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn cdr 3 48) (close _V0loop_k68) (bruijn xs 0 1))
    V_CALL(upenv->up->up->vars[48], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k68, env)}),
      _var1);
 }
}
static void _V0_L_k76(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0_L_k76" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0_L_k76, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0_L_k76, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 2 0) (bruijn ##k.92 3 0) (bruijn ##x.101 0 0))
    V_CALL(upenv->up->vars[0], runtime,
      upenv->up->up->vars[0],
      _var0);
 }
}
static void _V0_L_k75(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0_L_k75" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0_L_k75, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0_L_k75, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn cons 3 46) (close _V0_L_k76) (bruijn x0 2 1) (bruijn ##x.102 0 0))
    V_CALL(upenv->up->up->vars[46], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0_L_k76, env)}),
      upenv->up->vars[1],
      _var0);
 }
}
static void _V0_L_lambda13(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, ...) {
 static VDebugInfo dbg = { "_V0_L_lambda13" };
 VRecordCall2(runtime, &dbg);
 if(argc < 3) {
  VError("Not enough arguments to _V0_L_lambda13, got ~D~N"
  "-- expected 3 or more~N"
  , argc);
 }
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 3, argc, _var2);
 V_GC_CHECK2_VARARGS((VFunc)_V0_L_lambda13, runtime, upenv, 3, argc, _var0, _var1, _var2, _varargs) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _varargs;
  // (letrec 1 ((close _V0loop_lambda14)) ((bruijn cons 2 46) (close _V0_L_k75) (bruijn x1 1 2) (bruijn xs 1 3)))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda14, env)});
    V_CALL(upenv->up->vars[46], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0_L_k75, env)}),
      upenv->vars[2],
      upenv->vars[3]);
    }
 }
}
static void _V0loop_k83(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k83" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k83, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k83, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 8 0) (bruijn ##k.104 7 0) (bruijn ##x.107 0 0))
    V_CALL(VGetArg(upenv, 8-1, 0), runtime,
      VGetArg(upenv, 7-1, 0),
      _var0);
 }
}
static void _V0loop_k82(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k82" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k82, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k82, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.106 0 0) ((bruijn cdr 9 48) (close _V0loop_k83) (bruijn xs 6 1)) ((bruijn ##k.104 6 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 9-1, 48), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k83, env)}),
      VGetArg(upenv, 6-1, 1));
} else {
    V_CALL(VGetArg(upenv, 6-1, 0), runtime,
      VEncodeBool(false));
}
 }
}
static void _V0loop_k81(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k81" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k81, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k81, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn eq? 8 15) (close _V0loop_k82) (bruijn ##x.108 0 0) 0)
    V_CALL(VGetArg(upenv, 8-1, 15), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k82, env)}),
      _var0,
      VEncodeInt(0l));
 }
}
static void _V0loop_k80(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k80" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k80, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k80, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.cmp (close _V0loop_k81) (bruijn ##x.109 1 0) (bruijn ##x.110 0 0))
    V_CALL_FUNC(VCmp2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k81, env)}),
      upenv->vars[0],
      _var0);
 }
}
static void _V0loop_k79(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k79" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k79, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k79, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn cadr 6 52) (close _V0loop_k80) (bruijn xs 3 1))
    V_CALL(VGetArg(upenv, 6-1, 52), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k80, env)}),
      upenv->up->up->vars[1]);
 }
}
static void _V0loop_k78(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k78" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k78, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k78, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.105 0 0) ((bruijn ##k.104 2 0) #t) ((bruijn car 5 47) (close _V0loop_k79) (bruijn xs 2 1)))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(true));
} else {
    V_CALL(VGetArg(upenv, 5-1, 47), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k79, env)}),
      upenv->up->vars[1]);
}
 }
}
static void _V0loop_k77(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k77" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k77, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k77, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn null? 4 0) (close _V0loop_k78) (bruijn ##x.111 0 0))
    V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k78, env)}),
      _var0);
 }
}
static void _V0loop_lambda16(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0loop_lambda16" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0loop_lambda16, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda16, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn cdr 3 48) (close _V0loop_k77) (bruijn xs 0 1))
    V_CALL(upenv->up->up->vars[48], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k77, env)}),
      _var1);
 }
}
static void _V0_E_k85(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0_E_k85" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0_E_k85, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0_E_k85, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 2 0) (bruijn ##k.103 3 0) (bruijn ##x.112 0 0))
    V_CALL(upenv->up->vars[0], runtime,
      upenv->up->up->vars[0],
      _var0);
 }
}
static void _V0_E_k84(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0_E_k84" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0_E_k84, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0_E_k84, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn cons 3 46) (close _V0_E_k85) (bruijn x0 2 1) (bruijn ##x.113 0 0))
    V_CALL(upenv->up->up->vars[46], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0_E_k85, env)}),
      upenv->up->vars[1],
      _var0);
 }
}
static void _V0_E_lambda15(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, ...) {
 static VDebugInfo dbg = { "_V0_E_lambda15" };
 VRecordCall2(runtime, &dbg);
 if(argc < 3) {
  VError("Not enough arguments to _V0_E_lambda15, got ~D~N"
  "-- expected 3 or more~N"
  , argc);
 }
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 3, argc, _var2);
 V_GC_CHECK2_VARARGS((VFunc)_V0_E_lambda15, runtime, upenv, 3, argc, _var0, _var1, _var2, _varargs) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _varargs;
  // (letrec 1 ((close _V0loop_lambda16)) ((bruijn cons 2 46) (close _V0_E_k84) (bruijn x1 1 2) (bruijn xs 1 3)))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda16, env)});
    V_CALL(upenv->up->vars[46], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0_E_k84, env)}),
      upenv->vars[2],
      upenv->vars[3]);
    }
 }
}
static void _V0loop_k92(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k92" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k92, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k92, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 8 0) (bruijn ##k.115 7 0) (bruijn ##x.118 0 0))
    V_CALL(VGetArg(upenv, 8-1, 0), runtime,
      VGetArg(upenv, 7-1, 0),
      _var0);
 }
}
static void _V0loop_k91(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k91" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k91, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k91, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.117 0 0) ((bruijn cdr 9 48) (close _V0loop_k92) (bruijn xs 6 1)) ((bruijn ##k.115 6 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 9-1, 48), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k92, env)}),
      VGetArg(upenv, 6-1, 1));
} else {
    V_CALL(VGetArg(upenv, 6-1, 0), runtime,
      VEncodeBool(false));
}
 }
}
static void _V0loop_k90(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k90" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k90, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k90, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn eq? 8 15) (close _V0loop_k91) (bruijn ##x.119 0 0) 1)
    V_CALL(VGetArg(upenv, 8-1, 15), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k91, env)}),
      _var0,
      VEncodeInt(1l));
 }
}
static void _V0loop_k89(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k89" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k89, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k89, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.cmp (close _V0loop_k90) (bruijn ##x.120 1 0) (bruijn ##x.121 0 0))
    V_CALL_FUNC(VCmp2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k90, env)}),
      upenv->vars[0],
      _var0);
 }
}
static void _V0loop_k88(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k88" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k88, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k88, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn cadr 6 52) (close _V0loop_k89) (bruijn xs 3 1))
    V_CALL(VGetArg(upenv, 6-1, 52), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k89, env)}),
      upenv->up->up->vars[1]);
 }
}
static void _V0loop_k87(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k87" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k87, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k87, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.116 0 0) ((bruijn ##k.115 2 0) #t) ((bruijn car 5 47) (close _V0loop_k88) (bruijn xs 2 1)))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(true));
} else {
    V_CALL(VGetArg(upenv, 5-1, 47), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k88, env)}),
      upenv->up->vars[1]);
}
 }
}
static void _V0loop_k86(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k86" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k86, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k86, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn null? 4 0) (close _V0loop_k87) (bruijn ##x.122 0 0))
    V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k87, env)}),
      _var0);
 }
}
static void _V0loop_lambda18(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0loop_lambda18" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0loop_lambda18, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda18, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn cdr 3 48) (close _V0loop_k86) (bruijn xs 0 1))
    V_CALL(upenv->up->up->vars[48], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k86, env)}),
      _var1);
 }
}
static void _V0_G_k94(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0_G_k94" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0_G_k94, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0_G_k94, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 2 0) (bruijn ##k.114 3 0) (bruijn ##x.123 0 0))
    V_CALL(upenv->up->vars[0], runtime,
      upenv->up->up->vars[0],
      _var0);
 }
}
static void _V0_G_k93(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0_G_k93" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0_G_k93, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0_G_k93, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn cons 3 46) (close _V0_G_k94) (bruijn x0 2 1) (bruijn ##x.124 0 0))
    V_CALL(upenv->up->up->vars[46], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0_G_k94, env)}),
      upenv->up->vars[1],
      _var0);
 }
}
static void _V0_G_lambda17(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, ...) {
 static VDebugInfo dbg = { "_V0_G_lambda17" };
 VRecordCall2(runtime, &dbg);
 if(argc < 3) {
  VError("Not enough arguments to _V0_G_lambda17, got ~D~N"
  "-- expected 3 or more~N"
  , argc);
 }
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 3, argc, _var2);
 V_GC_CHECK2_VARARGS((VFunc)_V0_G_lambda17, runtime, upenv, 3, argc, _var0, _var1, _var2, _varargs) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _varargs;
  // (letrec 1 ((close _V0loop_lambda18)) ((bruijn cons 2 46) (close _V0_G_k93) (bruijn x1 1 2) (bruijn xs 1 3)))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda18, env)});
    V_CALL(upenv->up->vars[46], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0_G_k93, env)}),
      upenv->vars[2],
      upenv->vars[3]);
    }
 }
}
static void _V0loop_k101(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k101" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k101, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k101, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 8 0) (bruijn ##k.126 7 0) (bruijn ##x.129 0 0))
    V_CALL(VGetArg(upenv, 8-1, 0), runtime,
      VGetArg(upenv, 7-1, 0),
      _var0);
 }
}
static void _V0loop_k100(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k100" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k100, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k100, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.128 0 0) ((bruijn ##k.126 6 0) #f) ((bruijn cdr 9 48) (close _V0loop_k101) (bruijn xs 6 1)))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 6-1, 0), runtime,
      VEncodeBool(false));
} else {
    V_CALL(VGetArg(upenv, 9-1, 48), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k101, env)}),
      VGetArg(upenv, 6-1, 1));
}
 }
}
static void _V0loop_k99(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k99" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k99, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k99, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn eq? 8 15) (close _V0loop_k100) (bruijn ##x.130 0 0) 1)
    V_CALL(VGetArg(upenv, 8-1, 15), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k100, env)}),
      _var0,
      VEncodeInt(1l));
 }
}
static void _V0loop_k98(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k98" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k98, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k98, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.cmp (close _V0loop_k99) (bruijn ##x.131 1 0) (bruijn ##x.132 0 0))
    V_CALL_FUNC(VCmp2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k99, env)}),
      upenv->vars[0],
      _var0);
 }
}
static void _V0loop_k97(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k97" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k97, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k97, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn cadr 6 52) (close _V0loop_k98) (bruijn xs 3 1))
    V_CALL(VGetArg(upenv, 6-1, 52), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k98, env)}),
      upenv->up->up->vars[1]);
 }
}
static void _V0loop_k96(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k96" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k96, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k96, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.127 0 0) ((bruijn ##k.126 2 0) #t) ((bruijn car 5 47) (close _V0loop_k97) (bruijn xs 2 1)))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(true));
} else {
    V_CALL(VGetArg(upenv, 5-1, 47), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k97, env)}),
      upenv->up->vars[1]);
}
 }
}
static void _V0loop_k95(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k95" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k95, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k95, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn null? 4 0) (close _V0loop_k96) (bruijn ##x.133 0 0))
    V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k96, env)}),
      _var0);
 }
}
static void _V0loop_lambda20(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0loop_lambda20" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0loop_lambda20, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda20, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn cdr 3 48) (close _V0loop_k95) (bruijn xs 0 1))
    V_CALL(upenv->up->up->vars[48], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k95, env)}),
      _var1);
 }
}
static void _V0_L_E_k103(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0_L_E_k103" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0_L_E_k103, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0_L_E_k103, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 2 0) (bruijn ##k.125 3 0) (bruijn ##x.134 0 0))
    V_CALL(upenv->up->vars[0], runtime,
      upenv->up->up->vars[0],
      _var0);
 }
}
static void _V0_L_E_k102(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0_L_E_k102" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0_L_E_k102, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0_L_E_k102, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn cons 3 46) (close _V0_L_E_k103) (bruijn x0 2 1) (bruijn ##x.135 0 0))
    V_CALL(upenv->up->up->vars[46], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0_L_E_k103, env)}),
      upenv->up->vars[1],
      _var0);
 }
}
static void _V0_L_E_lambda19(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, ...) {
 static VDebugInfo dbg = { "_V0_L_E_lambda19" };
 VRecordCall2(runtime, &dbg);
 if(argc < 3) {
  VError("Not enough arguments to _V0_L_E_lambda19, got ~D~N"
  "-- expected 3 or more~N"
  , argc);
 }
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 3, argc, _var2);
 V_GC_CHECK2_VARARGS((VFunc)_V0_L_E_lambda19, runtime, upenv, 3, argc, _var0, _var1, _var2, _varargs) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _varargs;
  // (letrec 1 ((close _V0loop_lambda20)) ((bruijn cons 2 46) (close _V0_L_E_k102) (bruijn x1 1 2) (bruijn xs 1 3)))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda20, env)});
    V_CALL(upenv->up->vars[46], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0_L_E_k102, env)}),
      upenv->vars[2],
      upenv->vars[3]);
    }
 }
}
static void _V0loop_k110(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k110" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k110, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k110, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 8 0) (bruijn ##k.137 7 0) (bruijn ##x.140 0 0))
    V_CALL(VGetArg(upenv, 8-1, 0), runtime,
      VGetArg(upenv, 7-1, 0),
      _var0);
 }
}
static void _V0loop_k109(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k109" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k109, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k109, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.139 0 0) ((bruijn ##k.137 6 0) #f) ((bruijn cdr 9 48) (close _V0loop_k110) (bruijn xs 6 1)))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 6-1, 0), runtime,
      VEncodeBool(false));
} else {
    V_CALL(VGetArg(upenv, 9-1, 48), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k110, env)}),
      VGetArg(upenv, 6-1, 1));
}
 }
}
static void _V0loop_k108(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k108" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k108, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k108, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn eq? 8 15) (close _V0loop_k109) (bruijn ##x.141 0 0) -1)
    V_CALL(VGetArg(upenv, 8-1, 15), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k109, env)}),
      _var0,
      VEncodeInt(-1l));
 }
}
static void _V0loop_k107(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k107" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k107, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k107, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.cmp (close _V0loop_k108) (bruijn ##x.142 1 0) (bruijn ##x.143 0 0))
    V_CALL_FUNC(VCmp2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k108, env)}),
      upenv->vars[0],
      _var0);
 }
}
static void _V0loop_k106(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k106" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k106, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k106, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn cadr 6 52) (close _V0loop_k107) (bruijn xs 3 1))
    V_CALL(VGetArg(upenv, 6-1, 52), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k107, env)}),
      upenv->up->up->vars[1]);
 }
}
static void _V0loop_k105(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k105" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k105, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k105, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.138 0 0) ((bruijn ##k.137 2 0) #t) ((bruijn car 5 47) (close _V0loop_k106) (bruijn xs 2 1)))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(true));
} else {
    V_CALL(VGetArg(upenv, 5-1, 47), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k106, env)}),
      upenv->up->vars[1]);
}
 }
}
static void _V0loop_k104(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k104" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k104, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k104, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn null? 4 0) (close _V0loop_k105) (bruijn ##x.144 0 0))
    V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k105, env)}),
      _var0);
 }
}
static void _V0loop_lambda22(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0loop_lambda22" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0loop_lambda22, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda22, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn cdr 3 48) (close _V0loop_k104) (bruijn xs 0 1))
    V_CALL(upenv->up->up->vars[48], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k104, env)}),
      _var1);
 }
}
static void _V0_G_E_k112(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0_G_E_k112" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0_G_E_k112, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0_G_E_k112, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 2 0) (bruijn ##k.136 3 0) (bruijn ##x.145 0 0))
    V_CALL(upenv->up->vars[0], runtime,
      upenv->up->up->vars[0],
      _var0);
 }
}
static void _V0_G_E_k111(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0_G_E_k111" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0_G_E_k111, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0_G_E_k111, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn cons 3 46) (close _V0_G_E_k112) (bruijn x0 2 1) (bruijn ##x.146 0 0))
    V_CALL(upenv->up->up->vars[46], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0_G_E_k112, env)}),
      upenv->up->vars[1],
      _var0);
 }
}
static void _V0_G_E_lambda21(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, ...) {
 static VDebugInfo dbg = { "_V0_G_E_lambda21" };
 VRecordCall2(runtime, &dbg);
 if(argc < 3) {
  VError("Not enough arguments to _V0_G_E_lambda21, got ~D~N"
  "-- expected 3 or more~N"
  , argc);
 }
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 3, argc, _var2);
 V_GC_CHECK2_VARARGS((VFunc)_V0_G_E_lambda21, runtime, upenv, 3, argc, _var0, _var1, _var2, _varargs) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _varargs;
  // (letrec 1 ((close _V0loop_lambda22)) ((bruijn cons 2 46) (close _V0_G_E_k111) (bruijn x1 1 2) (bruijn xs 1 3)))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda22, env)});
    V_CALL(upenv->up->vars[46], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0_G_E_k111, env)}),
      upenv->vars[2],
      upenv->vars[3]);
    }
 }
}
static void _V0inexact_lambda23(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0inexact_lambda23" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0inexact_lambda23, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0inexact_lambda23, runtime, upenv, 2, argc, _var0, _var1) {
  // (##vcore.+ (bruijn ##k.147 0 0) (bruijn x 0 1) 0.000000)
    V_CALL_FUNC(VAdd2, NULL, runtime,
      _var0,
      _var1,
      VEncodeNumber(0.000000));
 }
}
static void _V0number_Q_k113(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0number_Q_k113" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0number_Q_k113, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0number_Q_k113, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.149 0 0) ((bruijn ##k.148 1 0) (bruijn ##p.149 0 0)) (##vcore.int? (bruijn ##k.148 1 0) (bruijn x 1 1)))
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
static void _V0number_Q_lambda24(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0number_Q_lambda24" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0number_Q_lambda24, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0number_Q_lambda24, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (##vcore.double? (close _V0number_Q_k113) (bruijn x 0 1))
    V_CALL_FUNC(VDoubleP2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0number_Q_k113, env)}),
      _var1);
 }
}
static void _V0positive_Q_lambda25(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0positive_Q_lambda25" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0positive_Q_lambda25, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0positive_Q_lambda25, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn > 1 25) (bruijn ##k.150 0 0) (bruijn x 0 1) 0)
    V_CALL(upenv->vars[25], runtime,
      _var0,
      _var1,
      VEncodeInt(0l));
 }
}
static void _V0zero_Q_lambda26(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0zero_Q_lambda26" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0zero_Q_lambda26, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0zero_Q_lambda26, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn = 1 24) (bruijn ##k.151 0 0) (bruijn x 0 1) 0)
    V_CALL(upenv->vars[24], runtime,
      _var0,
      _var1,
      VEncodeInt(0l));
 }
}
static void _V0negative_Q_lambda27(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0negative_Q_lambda27" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0negative_Q_lambda27, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0negative_Q_lambda27, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn < 1 23) (bruijn ##k.152 0 0) (bruijn x 0 1) 0)
    V_CALL(upenv->vars[23], runtime,
      _var0,
      _var1,
      VEncodeInt(0l));
 }
}
static void _V0abs_k114(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0abs_k114" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0abs_k114, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0abs_k114, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.154 0 0) ((bruijn - 2 37) (bruijn ##k.153 1 0) (bruijn x 1 1)) ((bruijn ##k.153 1 0) (bruijn x 1 1)))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->up->vars[37], runtime,
      upenv->vars[0],
      upenv->vars[1]);
} else {
    V_CALL(upenv->vars[0], runtime,
      upenv->vars[1]);
}
 }
}
static void _V0abs_lambda28(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0abs_lambda28" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0abs_lambda28, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0abs_lambda28, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn < 1 23) (close _V0abs_k114) (bruijn x 0 1) 0)
    V_CALL(upenv->vars[23], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0abs_k114, env)}),
      _var1,
      VEncodeInt(0l));
 }
}
static void _V0square_lambda29(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0square_lambda29" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0square_lambda29, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0square_lambda29, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn * 1 38) (bruijn ##k.155 0 0) (bruijn x 0 1) (bruijn x 0 1))
    V_CALL(upenv->vars[38], runtime,
      _var0,
      _var1,
      _var1);
 }
}
static void _V0max_k115(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0max_k115" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0max_k115, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0max_k115, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.158 0 0) ((bruijn ##k.157 1 0) (bruijn a 1 1)) ((bruijn ##k.157 1 0) (bruijn b 1 2)))
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
static void _V0max_k116(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0max_k116" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0max_k116, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0max_k116, runtime, upenv, 1, argc, _var0) {
  // ((bruijn max 2 44) (bruijn ##k.159 1 0) (bruijn ##x.160 0 0) (bruijn c 1 3))
    V_CALL(upenv->up->vars[44], runtime,
      upenv->vars[0],
      _var0,
      upenv->vars[3]);
 }
}
static void _V0max_k118(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0max_k118" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0max_k118, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0max_k118, runtime, upenv, 1, argc, _var0) {
  // ((bruijn max 3 44) (bruijn ##k.161 2 0) (bruijn ##x.162 0 0) (bruijn d 2 4))
    V_CALL(upenv->up->up->vars[44], runtime,
      upenv->up->vars[0],
      _var0,
      upenv->up->vars[4]);
 }
}
static void _V0max_k117(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0max_k117" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0max_k117, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0max_k117, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn max 2 44) (close _V0max_k118) (bruijn ##x.163 0 0) (bruijn c 1 3))
    V_CALL(upenv->up->vars[44], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0max_k118, env)}),
      _var0,
      upenv->vars[3]);
 }
}
static void _V0loop_k122(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k122" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k122, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k122, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 5 0) (bruijn ##k.165 4 0) (bruijn ##x.167 1 0) (bruijn ##x.168 0 0))
    V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      upenv->up->up->up->vars[0],
      upenv->vars[0],
      _var0);
 }
}
static void _V0loop_k121(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k121" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k121, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k121, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn cdr 6 48) (close _V0loop_k122) (bruijn bs 5 2))
    V_CALL(VGetArg(upenv, 6-1, 48), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k122, env)}),
      VGetArg(upenv, 5-1, 2));
 }
}
static void _V0loop_k120(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k120" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k120, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k120, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn max 5 44) (close _V0loop_k121) (bruijn a 4 1) (bruijn ##x.169 0 0))
    V_CALL(VGetArg(upenv, 5-1, 44), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k121, env)}),
      upenv->up->up->up->vars[1],
      _var0);
 }
}
static void _V0loop_k119(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k119" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k119, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k119, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.166 0 0) ((bruijn ##k.165 1 0) (bruijn ret 1 1)) ((bruijn car 4 47) (close _V0loop_k120) (bruijn bs 3 2)))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->vars[0], runtime,
      upenv->vars[1]);
} else {
    V_CALL(upenv->up->up->up->vars[47], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k120, env)}),
      upenv->up->up->vars[2]);
}
 }
}
static void _V0loop_lambda31(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0loop_lambda31" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0loop_lambda31, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda31, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn null? 3 0) (close _V0loop_k119) (bruijn bs 2 2))
    V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k119, env)}),
      upenv->up->vars[2]);
 }
}
__attribute__((used)) static void _V20CaseError__V0max_lambda30(VRuntime * runtime, VEnv * upenv, int argc, ...) {
 // (_V0max_lambda30 #t (2 ((bruijn ##k.156 0 0) (bruijn a 0 1))) (3 ((bruijn > 1 25) (close _V0max_k115) (bruijn a 0 1) (bruijn b 0 2))) (4 ((bruijn max 1 44) (close _V0max_k116) (bruijn a 0 1) (bruijn b 0 2))) (5 ((bruijn max 1 44) (close _V0max_k117) (bruijn a 0 1) (bruijn b 0 2))) (2 + (letrec 1 ((close _V0loop_lambda31)) ((bruijn loop 0 0) (bruijn ##k.164 1 0) (bruijn a 1 1) (bruijn bs 1 2)))))
 VError("Not enough arguments to _V0max_lambda30, got ~D~N"
 "-- expected 2~N"
 "-- expected 3~N"
 "-- expected 4~N"
 "-- expected 5~N"
 "-- expected 2 or more~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V0max_lambda30(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V20Case0__V0max_lambda30" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case0__V0max_lambda30, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##k.156 0 0) (bruijn a 0 1))
    V_CALL(_var0, runtime,
      _var1);
 }
}
__attribute__((used)) static void _V20Case1__V0max_lambda30(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V20Case1__V0max_lambda30" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case1__V0max_lambda30, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn > 1 25) (close _V0max_k115) (bruijn a 0 1) (bruijn b 0 2))
    V_CALL(upenv->vars[25], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0max_k115, env)}),
      _var1,
      _var2);
 }
}
__attribute__((used)) static void _V20Case2__V0max_lambda30(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V20Case2__V0max_lambda30" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case2__V0max_lambda30, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // ((bruijn max 1 44) (close _V0max_k116) (bruijn a 0 1) (bruijn b 0 2))
    V_CALL(upenv->vars[44], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0max_k116, env)}),
      _var1,
      _var2);
 }
}
__attribute__((used)) static void _V20Case3__V0max_lambda30(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4) {
 static VDebugInfo dbg = { "_V20Case3__V0max_lambda30" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case3__V0max_lambda30, runtime, upenv, 5, argc, _var0, _var1, _var2, _var3, _var4) {
  struct { VEnv env; VWORD argv[5]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 5, 5, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  env->vars[4] = _var4;
  // ((bruijn max 1 44) (close _V0max_k117) (bruijn a 0 1) (bruijn b 0 2))
    V_CALL(upenv->vars[44], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0max_k117, env)}),
      _var1,
      _var2);
 }
}
__attribute__((used)) static void _V20Case4__V0max_lambda30(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, ...) {
 static VDebugInfo dbg = { "_V20Case4__V0max_lambda30" };
 VRecordCall2(runtime, &dbg);
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 2, argc, _var1);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case4__V0max_lambda30, runtime, upenv, 2, argc, _var0, _var1, _varargs) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _varargs;
  // (letrec 1 ((close _V0loop_lambda31)) ((bruijn loop 0 0) (bruijn ##k.164 1 0) (bruijn a 1 1) (bruijn bs 1 2)))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda31, env)});
    V_CALL(env->vars[0], runtime,
      upenv->vars[0],
      upenv->vars[1],
      upenv->vars[2]);
    }
 }
}
void _V0max_lambda30(VRuntime * runtime, VEnv * upenv, int argc, ...);
asm(
".intel_syntax noprefix\n"
#ifdef __linux__
".type _V0max_lambda30, @function\n"
#endif
"_V0max_lambda30:\n"
"    cmp " ARGC_REG ", 2\n"
"    je _V20Case0__V0max_lambda30\n"
"    cmp " ARGC_REG ", 3\n"
"    je _V20Case1__V0max_lambda30\n"
"    cmp " ARGC_REG ", 4\n"
"    je _V20Case2__V0max_lambda30\n"
"    cmp " ARGC_REG ", 5\n"
"    je _V20Case3__V0max_lambda30\n"
"    cmp " ARGC_REG ", 2\n"
"    jge _V20Case4__V0max_lambda30\n"
"    jmp _V20CaseError__V0max_lambda30\n"
);
static void _V0min_k123(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0min_k123" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0min_k123, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0min_k123, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.172 0 0) ((bruijn ##k.171 1 0) (bruijn a 1 1)) ((bruijn ##k.171 1 0) (bruijn b 1 2)))
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
static void _V0min_k124(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0min_k124" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0min_k124, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0min_k124, runtime, upenv, 1, argc, _var0) {
  // ((bruijn min 2 45) (bruijn ##k.173 1 0) (bruijn ##x.174 0 0) (bruijn c 1 3))
    V_CALL(upenv->up->vars[45], runtime,
      upenv->vars[0],
      _var0,
      upenv->vars[3]);
 }
}
static void _V0min_k126(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0min_k126" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0min_k126, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0min_k126, runtime, upenv, 1, argc, _var0) {
  // ((bruijn min 3 45) (bruijn ##k.175 2 0) (bruijn ##x.176 0 0) (bruijn d 2 4))
    V_CALL(upenv->up->up->vars[45], runtime,
      upenv->up->vars[0],
      _var0,
      upenv->up->vars[4]);
 }
}
static void _V0min_k125(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0min_k125" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0min_k125, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0min_k125, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn min 2 45) (close _V0min_k126) (bruijn ##x.177 0 0) (bruijn c 1 3))
    V_CALL(upenv->up->vars[45], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0min_k126, env)}),
      _var0,
      upenv->vars[3]);
 }
}
static void _V0loop_k130(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k130" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k130, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k130, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 5 0) (bruijn ##k.179 4 0) (bruijn ##x.181 1 0) (bruijn ##x.182 0 0))
    V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      upenv->up->up->up->vars[0],
      upenv->vars[0],
      _var0);
 }
}
static void _V0loop_k129(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k129" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k129, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k129, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn cdr 6 48) (close _V0loop_k130) (bruijn bs 5 2))
    V_CALL(VGetArg(upenv, 6-1, 48), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k130, env)}),
      VGetArg(upenv, 5-1, 2));
 }
}
static void _V0loop_k128(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k128" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k128, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k128, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn min 5 45) (close _V0loop_k129) (bruijn a 4 1) (bruijn ##x.183 0 0))
    V_CALL(VGetArg(upenv, 5-1, 45), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k129, env)}),
      upenv->up->up->up->vars[1],
      _var0);
 }
}
static void _V0loop_k127(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k127" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k127, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k127, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.180 0 0) ((bruijn ##k.179 1 0) (bruijn ret 1 1)) ((bruijn car 4 47) (close _V0loop_k128) (bruijn bs 3 2)))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->vars[0], runtime,
      upenv->vars[1]);
} else {
    V_CALL(upenv->up->up->up->vars[47], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k128, env)}),
      upenv->up->up->vars[2]);
}
 }
}
static void _V0loop_lambda33(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0loop_lambda33" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0loop_lambda33, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda33, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn null? 3 0) (close _V0loop_k127) (bruijn bs 2 2))
    V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k127, env)}),
      upenv->up->vars[2]);
 }
}
__attribute__((used)) static void _V20CaseError__V0min_lambda32(VRuntime * runtime, VEnv * upenv, int argc, ...) {
 // (_V0min_lambda32 #t (2 ((bruijn ##k.170 0 0) (bruijn a 0 1))) (3 ((bruijn < 1 23) (close _V0min_k123) (bruijn a 0 1) (bruijn b 0 2))) (4 ((bruijn min 1 45) (close _V0min_k124) (bruijn a 0 1) (bruijn b 0 2))) (5 ((bruijn min 1 45) (close _V0min_k125) (bruijn a 0 1) (bruijn b 0 2))) (2 + (letrec 1 ((close _V0loop_lambda33)) ((bruijn loop 0 0) (bruijn ##k.178 1 0) (bruijn a 1 1) (bruijn bs 1 2)))))
 VError("Not enough arguments to _V0min_lambda32, got ~D~N"
 "-- expected 2~N"
 "-- expected 3~N"
 "-- expected 4~N"
 "-- expected 5~N"
 "-- expected 2 or more~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V0min_lambda32(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V20Case0__V0min_lambda32" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case0__V0min_lambda32, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##k.170 0 0) (bruijn a 0 1))
    V_CALL(_var0, runtime,
      _var1);
 }
}
__attribute__((used)) static void _V20Case1__V0min_lambda32(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V20Case1__V0min_lambda32" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case1__V0min_lambda32, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn < 1 23) (close _V0min_k123) (bruijn a 0 1) (bruijn b 0 2))
    V_CALL(upenv->vars[23], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0min_k123, env)}),
      _var1,
      _var2);
 }
}
__attribute__((used)) static void _V20Case2__V0min_lambda32(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V20Case2__V0min_lambda32" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case2__V0min_lambda32, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // ((bruijn min 1 45) (close _V0min_k124) (bruijn a 0 1) (bruijn b 0 2))
    V_CALL(upenv->vars[45], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0min_k124, env)}),
      _var1,
      _var2);
 }
}
__attribute__((used)) static void _V20Case3__V0min_lambda32(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4) {
 static VDebugInfo dbg = { "_V20Case3__V0min_lambda32" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case3__V0min_lambda32, runtime, upenv, 5, argc, _var0, _var1, _var2, _var3, _var4) {
  struct { VEnv env; VWORD argv[5]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 5, 5, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  env->vars[4] = _var4;
  // ((bruijn min 1 45) (close _V0min_k125) (bruijn a 0 1) (bruijn b 0 2))
    V_CALL(upenv->vars[45], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0min_k125, env)}),
      _var1,
      _var2);
 }
}
__attribute__((used)) static void _V20Case4__V0min_lambda32(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, ...) {
 static VDebugInfo dbg = { "_V20Case4__V0min_lambda32" };
 VRecordCall2(runtime, &dbg);
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 2, argc, _var1);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case4__V0min_lambda32, runtime, upenv, 2, argc, _var0, _var1, _varargs) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _varargs;
  // (letrec 1 ((close _V0loop_lambda33)) ((bruijn loop 0 0) (bruijn ##k.178 1 0) (bruijn a 1 1) (bruijn bs 1 2)))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda33, env)});
    V_CALL(env->vars[0], runtime,
      upenv->vars[0],
      upenv->vars[1],
      upenv->vars[2]);
    }
 }
}
void _V0min_lambda32(VRuntime * runtime, VEnv * upenv, int argc, ...);
asm(
".intel_syntax noprefix\n"
#ifdef __linux__
".type _V0min_lambda32, @function\n"
#endif
"_V0min_lambda32:\n"
"    cmp " ARGC_REG ", 2\n"
"    je _V20Case0__V0min_lambda32\n"
"    cmp " ARGC_REG ", 3\n"
"    je _V20Case1__V0min_lambda32\n"
"    cmp " ARGC_REG ", 4\n"
"    je _V20Case2__V0min_lambda32\n"
"    cmp " ARGC_REG ", 5\n"
"    je _V20Case3__V0min_lambda32\n"
"    cmp " ARGC_REG ", 2\n"
"    jge _V20Case4__V0min_lambda32\n"
"    jmp _V20CaseError__V0min_lambda32\n"
);
static void _V0caar_lambda34(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0caar_lambda34" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0caar_lambda34, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0caar_lambda34, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##k.184 0 0) (##inline ##vcore.car (##inline ##vcore.car (bruijn x 0 1))))
    V_CALL(_var0, runtime,
      VInlineCar2(runtime,
        VInlineCar2(runtime,
        _var1)));
 }
}
static void _V0cadr_lambda35(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0cadr_lambda35" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0cadr_lambda35, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0cadr_lambda35, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##k.186 0 0) (##inline ##vcore.car (##inline ##vcore.cdr (bruijn x 0 1))))
    V_CALL(_var0, runtime,
      VInlineCar2(runtime,
        VInlineCdr2(runtime,
        _var1)));
 }
}
static void _V0cdar_lambda36(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0cdar_lambda36" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0cdar_lambda36, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0cdar_lambda36, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##k.188 0 0) (##inline ##vcore.cdr (##inline ##vcore.car (bruijn x 0 1))))
    V_CALL(_var0, runtime,
      VInlineCdr2(runtime,
        VInlineCar2(runtime,
        _var1)));
 }
}
static void _V0cddr_lambda37(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0cddr_lambda37" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0cddr_lambda37, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0cddr_lambda37, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##k.190 0 0) (##inline ##vcore.cdr (##inline ##vcore.cdr (bruijn x 0 1))))
    V_CALL(_var0, runtime,
      VInlineCdr2(runtime,
        VInlineCdr2(runtime,
        _var1)));
 }
}
static void _V0caaar_lambda38(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0caaar_lambda38" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0caaar_lambda38, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0caaar_lambda38, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##k.192 0 0) (##inline ##vcore.car (##inline ##vcore.car (##inline ##vcore.car (bruijn x 0 1)))))
    V_CALL(_var0, runtime,
      VInlineCar2(runtime,
        VInlineCar2(runtime,
        VInlineCar2(runtime,
        _var1))));
 }
}
static void _V0caadr_lambda39(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0caadr_lambda39" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0caadr_lambda39, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0caadr_lambda39, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##k.195 0 0) (##inline ##vcore.car (##inline ##vcore.car (##inline ##vcore.cdr (bruijn x 0 1)))))
    V_CALL(_var0, runtime,
      VInlineCar2(runtime,
        VInlineCar2(runtime,
        VInlineCdr2(runtime,
        _var1))));
 }
}
static void _V0cadar_lambda40(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0cadar_lambda40" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0cadar_lambda40, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0cadar_lambda40, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##k.198 0 0) (##inline ##vcore.car (##inline ##vcore.cdr (##inline ##vcore.car (bruijn x 0 1)))))
    V_CALL(_var0, runtime,
      VInlineCar2(runtime,
        VInlineCdr2(runtime,
        VInlineCar2(runtime,
        _var1))));
 }
}
static void _V0caddr_lambda41(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0caddr_lambda41" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0caddr_lambda41, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0caddr_lambda41, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##k.201 0 0) (##inline ##vcore.car (##inline ##vcore.cdr (##inline ##vcore.cdr (bruijn x 0 1)))))
    V_CALL(_var0, runtime,
      VInlineCar2(runtime,
        VInlineCdr2(runtime,
        VInlineCdr2(runtime,
        _var1))));
 }
}
static void _V0cdaar_lambda42(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0cdaar_lambda42" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0cdaar_lambda42, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0cdaar_lambda42, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##k.204 0 0) (##inline ##vcore.cdr (##inline ##vcore.car (##inline ##vcore.car (bruijn x 0 1)))))
    V_CALL(_var0, runtime,
      VInlineCdr2(runtime,
        VInlineCar2(runtime,
        VInlineCar2(runtime,
        _var1))));
 }
}
static void _V0cdadr_lambda43(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0cdadr_lambda43" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0cdadr_lambda43, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0cdadr_lambda43, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##k.207 0 0) (##inline ##vcore.cdr (##inline ##vcore.car (##inline ##vcore.cdr (bruijn x 0 1)))))
    V_CALL(_var0, runtime,
      VInlineCdr2(runtime,
        VInlineCar2(runtime,
        VInlineCdr2(runtime,
        _var1))));
 }
}
static void _V0cddar_lambda44(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0cddar_lambda44" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0cddar_lambda44, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0cddar_lambda44, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##k.210 0 0) (##inline ##vcore.cdr (##inline ##vcore.cdr (##inline ##vcore.car (bruijn x 0 1)))))
    V_CALL(_var0, runtime,
      VInlineCdr2(runtime,
        VInlineCdr2(runtime,
        VInlineCar2(runtime,
        _var1))));
 }
}
static void _V0cdddr_lambda45(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0cdddr_lambda45" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0cdddr_lambda45, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0cdddr_lambda45, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##k.213 0 0) (##inline ##vcore.cdr (##inline ##vcore.cdr (##inline ##vcore.cdr (bruijn x 0 1)))))
    V_CALL(_var0, runtime,
      VInlineCdr2(runtime,
        VInlineCdr2(runtime,
        VInlineCdr2(runtime,
        _var1))));
 }
}
static void _V0caaaar_lambda46(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0caaaar_lambda46" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0caaaar_lambda46, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0caaaar_lambda46, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##k.216 0 0) (##inline ##vcore.car (##inline ##vcore.car (##inline ##vcore.car (##inline ##vcore.car (bruijn x 0 1))))))
    V_CALL(_var0, runtime,
      VInlineCar2(runtime,
        VInlineCar2(runtime,
        VInlineCar2(runtime,
        VInlineCar2(runtime,
        _var1)))));
 }
}
static void _V0caaadr_lambda47(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0caaadr_lambda47" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0caaadr_lambda47, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0caaadr_lambda47, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##k.220 0 0) (##inline ##vcore.car (##inline ##vcore.car (##inline ##vcore.car (##inline ##vcore.cdr (bruijn x 0 1))))))
    V_CALL(_var0, runtime,
      VInlineCar2(runtime,
        VInlineCar2(runtime,
        VInlineCar2(runtime,
        VInlineCdr2(runtime,
        _var1)))));
 }
}
static void _V0caadar_lambda48(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0caadar_lambda48" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0caadar_lambda48, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0caadar_lambda48, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##k.224 0 0) (##inline ##vcore.car (##inline ##vcore.car (##inline ##vcore.cdr (##inline ##vcore.car (bruijn x 0 1))))))
    V_CALL(_var0, runtime,
      VInlineCar2(runtime,
        VInlineCar2(runtime,
        VInlineCdr2(runtime,
        VInlineCar2(runtime,
        _var1)))));
 }
}
static void _V0caaddr_lambda49(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0caaddr_lambda49" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0caaddr_lambda49, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0caaddr_lambda49, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##k.228 0 0) (##inline ##vcore.car (##inline ##vcore.car (##inline ##vcore.cdr (##inline ##vcore.cdr (bruijn x 0 1))))))
    V_CALL(_var0, runtime,
      VInlineCar2(runtime,
        VInlineCar2(runtime,
        VInlineCdr2(runtime,
        VInlineCdr2(runtime,
        _var1)))));
 }
}
static void _V0cadaar_lambda50(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0cadaar_lambda50" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0cadaar_lambda50, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0cadaar_lambda50, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##k.232 0 0) (##inline ##vcore.car (##inline ##vcore.cdr (##inline ##vcore.car (##inline ##vcore.car (bruijn x 0 1))))))
    V_CALL(_var0, runtime,
      VInlineCar2(runtime,
        VInlineCdr2(runtime,
        VInlineCar2(runtime,
        VInlineCar2(runtime,
        _var1)))));
 }
}
static void _V0cadadr_lambda51(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0cadadr_lambda51" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0cadadr_lambda51, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0cadadr_lambda51, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##k.236 0 0) (##inline ##vcore.car (##inline ##vcore.cdr (##inline ##vcore.car (##inline ##vcore.cdr (bruijn x 0 1))))))
    V_CALL(_var0, runtime,
      VInlineCar2(runtime,
        VInlineCdr2(runtime,
        VInlineCar2(runtime,
        VInlineCdr2(runtime,
        _var1)))));
 }
}
static void _V0caddar_lambda52(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0caddar_lambda52" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0caddar_lambda52, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0caddar_lambda52, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##k.240 0 0) (##inline ##vcore.car (##inline ##vcore.cdr (##inline ##vcore.cdr (##inline ##vcore.car (bruijn x 0 1))))))
    V_CALL(_var0, runtime,
      VInlineCar2(runtime,
        VInlineCdr2(runtime,
        VInlineCdr2(runtime,
        VInlineCar2(runtime,
        _var1)))));
 }
}
static void _V0cadddr_lambda53(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0cadddr_lambda53" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0cadddr_lambda53, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0cadddr_lambda53, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##k.244 0 0) (##inline ##vcore.car (##inline ##vcore.cdr (##inline ##vcore.cdr (##inline ##vcore.cdr (bruijn x 0 1))))))
    V_CALL(_var0, runtime,
      VInlineCar2(runtime,
        VInlineCdr2(runtime,
        VInlineCdr2(runtime,
        VInlineCdr2(runtime,
        _var1)))));
 }
}
static void _V0cdaaar_lambda54(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0cdaaar_lambda54" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0cdaaar_lambda54, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0cdaaar_lambda54, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##k.248 0 0) (##inline ##vcore.cdr (##inline ##vcore.car (##inline ##vcore.car (##inline ##vcore.car (bruijn x 0 1))))))
    V_CALL(_var0, runtime,
      VInlineCdr2(runtime,
        VInlineCar2(runtime,
        VInlineCar2(runtime,
        VInlineCar2(runtime,
        _var1)))));
 }
}
static void _V0cdaadr_lambda55(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0cdaadr_lambda55" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0cdaadr_lambda55, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0cdaadr_lambda55, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##k.252 0 0) (##inline ##vcore.cdr (##inline ##vcore.car (##inline ##vcore.car (##inline ##vcore.cdr (bruijn x 0 1))))))
    V_CALL(_var0, runtime,
      VInlineCdr2(runtime,
        VInlineCar2(runtime,
        VInlineCar2(runtime,
        VInlineCdr2(runtime,
        _var1)))));
 }
}
static void _V0cdadar_lambda56(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0cdadar_lambda56" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0cdadar_lambda56, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0cdadar_lambda56, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##k.256 0 0) (##inline ##vcore.cdr (##inline ##vcore.car (##inline ##vcore.cdr (##inline ##vcore.car (bruijn x 0 1))))))
    V_CALL(_var0, runtime,
      VInlineCdr2(runtime,
        VInlineCar2(runtime,
        VInlineCdr2(runtime,
        VInlineCar2(runtime,
        _var1)))));
 }
}
static void _V0cdaddr_lambda57(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0cdaddr_lambda57" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0cdaddr_lambda57, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0cdaddr_lambda57, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##k.260 0 0) (##inline ##vcore.cdr (##inline ##vcore.car (##inline ##vcore.cdr (##inline ##vcore.cdr (bruijn x 0 1))))))
    V_CALL(_var0, runtime,
      VInlineCdr2(runtime,
        VInlineCar2(runtime,
        VInlineCdr2(runtime,
        VInlineCdr2(runtime,
        _var1)))));
 }
}
static void _V0cddaar_lambda58(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0cddaar_lambda58" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0cddaar_lambda58, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0cddaar_lambda58, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##k.264 0 0) (##inline ##vcore.cdr (##inline ##vcore.cdr (##inline ##vcore.car (##inline ##vcore.car (bruijn x 0 1))))))
    V_CALL(_var0, runtime,
      VInlineCdr2(runtime,
        VInlineCdr2(runtime,
        VInlineCar2(runtime,
        VInlineCar2(runtime,
        _var1)))));
 }
}
static void _V0cddadr_lambda59(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0cddadr_lambda59" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0cddadr_lambda59, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0cddadr_lambda59, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##k.268 0 0) (##inline ##vcore.cdr (##inline ##vcore.cdr (##inline ##vcore.car (##inline ##vcore.cdr (bruijn x 0 1))))))
    V_CALL(_var0, runtime,
      VInlineCdr2(runtime,
        VInlineCdr2(runtime,
        VInlineCar2(runtime,
        VInlineCdr2(runtime,
        _var1)))));
 }
}
static void _V0cdddar_lambda60(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0cdddar_lambda60" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0cdddar_lambda60, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0cdddar_lambda60, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##k.272 0 0) (##inline ##vcore.cdr (##inline ##vcore.cdr (##inline ##vcore.cdr (##inline ##vcore.car (bruijn x 0 1))))))
    V_CALL(_var0, runtime,
      VInlineCdr2(runtime,
        VInlineCdr2(runtime,
        VInlineCdr2(runtime,
        VInlineCar2(runtime,
        _var1)))));
 }
}
static void _V0cddddr_lambda61(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0cddddr_lambda61" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0cddddr_lambda61, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0cddddr_lambda61, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##k.276 0 0) (##inline ##vcore.cdr (##inline ##vcore.cdr (##inline ##vcore.cdr (##inline ##vcore.cdr (bruijn x 0 1))))))
    V_CALL(_var0, runtime,
      VInlineCdr2(runtime,
        VInlineCdr2(runtime,
        VInlineCdr2(runtime,
        VInlineCdr2(runtime,
        _var1)))));
 }
}
static void _V0list_lambda62(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, ...) {
 static VDebugInfo dbg = { "_V0list_lambda62" };
 VRecordCall2(runtime, &dbg);
 if(argc < 1) {
  VError("Not enough arguments to _V0list_lambda62, got ~D~N"
  "-- expected 1 or more~N"
  , argc);
 }
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 1, argc, _var0);
 V_GC_CHECK2_VARARGS((VFunc)_V0list_lambda62, runtime, upenv, 1, argc, _var0, _varargs) {
  // ((bruijn ##k.280 0 0) (bruijn args 0 1))
    V_CALL(_var0, runtime,
      _varargs);
 }
}
static void _V0list_Q_k133(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0list_Q_k133" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0list_Q_k133, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0list_Q_k133, runtime, upenv, 1, argc, _var0) {
  // ((bruijn list? 4 80) (bruijn ##k.281 3 0) (bruijn ##x.284 0 0))
    V_CALL(upenv->up->up->up->vars[80], runtime,
      upenv->up->up->vars[0],
      _var0);
 }
}
static void _V0list_Q_k132(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0list_Q_k132" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0list_Q_k132, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0list_Q_k132, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.283 0 0) ((bruijn cdr 3 48) (close _V0list_Q_k133) (bruijn lst 2 1)) ((bruijn ##k.281 2 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->up->up->vars[48], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0list_Q_k133, env)}),
      upenv->up->vars[1]);
} else {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0list_Q_k131(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0list_Q_k131" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0list_Q_k131, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0list_Q_k131, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.282 0 0) ((bruijn ##k.281 1 0) (bruijn ##p.282 0 0)) ((bruijn pair? 2 3) (close _V0list_Q_k132) (bruijn lst 1 1)))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->vars[0], runtime,
      _var0);
} else {
    V_CALL(upenv->up->vars[3], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0list_Q_k132, env)}),
      upenv->vars[1]);
}
 }
}
static void _V0list_Q_lambda63(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0list_Q_lambda63" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0list_Q_lambda63, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0list_Q_lambda63, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn null? 1 0) (close _V0list_Q_k131) (bruijn lst 0 1))
    V_CALL(upenv->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0list_Q_k131, env)}),
      _var1);
 }
}
static void _V0loop_k134(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k134" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k134, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k134, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 2 0) (bruijn ##k.286 1 0) (##inline ##vcore.cdr (bruijn lst 1 1)) (bruijn ##x.289 0 0))
    V_CALL(upenv->up->vars[0], runtime,
      upenv->vars[0],
      VInlineCdr2(runtime,
        upenv->vars[1]),
      _var0);
 }
}
static void _V0loop_lambda65(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0loop_lambda65" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0loop_lambda65, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda65, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // (if (##inline ##vcore.null? (bruijn lst 0 1)) ((bruijn ##k.286 0 0) (bruijn i 0 2)) ((bruijn + 3 36) (close _V0loop_k134) (bruijn i 0 2) 1))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var1))) {
    V_CALL(_var0, runtime,
      _var2);
} else {
    V_CALL(upenv->up->up->vars[36], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k134, env)}),
      _var2,
      VEncodeInt(1l));
}
 }
}
static void _V0length_lambda64(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0length_lambda64" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0length_lambda64, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0length_lambda64, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (letrec 1 ((close _V0loop_lambda65)) ((bruijn loop 0 0) (bruijn ##k.285 1 0) (bruijn lst 1 1) 0))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda65, env)});
    V_CALL(env->vars[0], runtime,
      upenv->vars[0],
      upenv->vars[1],
      VEncodeInt(0l));
    }
 }
}
static void _V0list__tail_k136(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0list__tail_k136" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0list__tail_k136, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0list__tail_k136, runtime, upenv, 1, argc, _var0) {
  // ((bruijn list-tail 3 82) (bruijn ##k.290 2 0) (##inline ##vcore.cdr (bruijn lst 2 1)) (bruijn ##x.293 0 0))
    V_CALL(upenv->up->up->vars[82], runtime,
      upenv->up->vars[0],
      VInlineCdr2(runtime,
        upenv->up->vars[1]),
      _var0);
 }
}
static void _V0list__tail_k135(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0list__tail_k135" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0list__tail_k135, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0list__tail_k135, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.291 0 0) ((bruijn ##k.290 1 0) (bruijn lst 1 1)) ((bruijn - 2 37) (close _V0list__tail_k136) (bruijn x 1 2) 1))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->vars[0], runtime,
      upenv->vars[1]);
} else {
    V_CALL(upenv->up->vars[37], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0list__tail_k136, env)}),
      upenv->vars[2],
      VEncodeInt(1l));
}
 }
}
static void _V0list__tail_lambda66(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0list__tail_lambda66" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0list__tail_lambda66, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0list__tail_lambda66, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn eq? 1 15) (close _V0list__tail_k135) (bruijn x 0 2) 0)
    V_CALL(upenv->vars[15], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0list__tail_k135, env)}),
      _var2,
      VEncodeInt(0l));
 }
}
static void _V0list__ref_k138(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0list__ref_k138" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0list__ref_k138, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0list__ref_k138, runtime, upenv, 1, argc, _var0) {
  // ((bruijn list-ref 3 83) (bruijn ##k.294 2 0) (##inline ##vcore.cdr (bruijn lst 2 1)) (bruijn ##x.297 0 0))
    V_CALL(upenv->up->up->vars[83], runtime,
      upenv->up->vars[0],
      VInlineCdr2(runtime,
        upenv->up->vars[1]),
      _var0);
 }
}
static void _V0list__ref_k137(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0list__ref_k137" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0list__ref_k137, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0list__ref_k137, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.295 0 0) ((bruijn ##k.294 1 0) (##inline ##vcore.car (bruijn lst 1 1))) ((bruijn - 2 37) (close _V0list__ref_k138) (bruijn x 1 2) 1))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->vars[0], runtime,
      VInlineCar2(runtime,
        upenv->vars[1]));
} else {
    V_CALL(upenv->up->vars[37], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0list__ref_k138, env)}),
      upenv->vars[2],
      VEncodeInt(1l));
}
 }
}
static void _V0list__ref_lambda67(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0list__ref_lambda67" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0list__ref_lambda67, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0list__ref_lambda67, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn eq? 1 15) (close _V0list__ref_k137) (bruijn x 0 2) 0)
    V_CALL(upenv->vars[15], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0list__ref_k137, env)}),
      _var2,
      VEncodeInt(0l));
 }
}
static void _V0list__set_B_k139(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0list__set_B_k139" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0list__set_B_k139, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0list__set_B_k139, runtime, upenv, 1, argc, _var0) {
  // ((bruijn set-car! 2 49) (bruijn ##k.298 1 0) (bruijn ##x.299 0 0) (bruijn val 1 3))
    V_CALL(upenv->up->vars[49], runtime,
      upenv->vars[0],
      _var0,
      upenv->vars[3]);
 }
}
static void _V0list__set_B_lambda68(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V0list__set_B_lambda68" };
 VRecordCall2(runtime, &dbg);
 if(argc != 4) {
  VError("Not enough arguments to _V0list__set_B_lambda68, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0list__set_B_lambda68, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // ((bruijn list-tail 1 82) (close _V0list__set_B_k139) (bruijn lst 0 1) (bruijn i 0 2))
    V_CALL(upenv->vars[82], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0list__set_B_k139, env)}),
      _var1,
      _var2);
 }
}
static void _V0list__copy_k143(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0list__copy_k143" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0list__copy_k143, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0list__copy_k143, runtime, upenv, 1, argc, _var0) {
  // ((bruijn cons 5 46) (bruijn ##k.300 4 0) (bruijn ##x.302 2 0) (bruijn ##x.303 0 0))
    V_CALL(VGetArg(upenv, 5-1, 46), runtime,
      upenv->up->up->up->vars[0],
      upenv->up->vars[0],
      _var0);
 }
}
static void _V0list__copy_k142(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0list__copy_k142" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0list__copy_k142, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0list__copy_k142, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn list-copy 4 85) (close _V0list__copy_k143) (bruijn ##x.304 0 0))
    V_CALL(upenv->up->up->up->vars[85], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0list__copy_k143, env)}),
      _var0);
 }
}
static void _V0list__copy_k141(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0list__copy_k141" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0list__copy_k141, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0list__copy_k141, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn cdr 3 48) (close _V0list__copy_k142) (bruijn lst 2 1))
    V_CALL(upenv->up->up->vars[48], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0list__copy_k142, env)}),
      upenv->up->vars[1]);
 }
}
static void _V0list__copy_k140(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0list__copy_k140" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0list__copy_k140, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0list__copy_k140, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.301 0 0) ((bruijn ##k.300 1 0) '()) ((bruijn car 2 47) (close _V0list__copy_k141) (bruijn lst 1 1)))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->vars[0], runtime,
      VNULL);
} else {
    V_CALL(upenv->up->vars[47], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0list__copy_k141, env)}),
      upenv->vars[1]);
}
 }
}
static void _V0list__copy_lambda69(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0list__copy_lambda69" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0list__copy_lambda69, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0list__copy_lambda69, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn null? 1 0) (close _V0list__copy_k140) (bruijn lst 0 1))
    V_CALL(upenv->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0list__copy_k140, env)}),
      _var1);
 }
}
static void _V0loop_k146(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k146" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k146, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k146, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 4 0) (bruijn ##k.307 3 0) (bruijn ##x.309 1 0) (bruijn ##x.310 0 0))
    V_CALL(upenv->up->up->up->vars[0], runtime,
      upenv->up->up->vars[0],
      upenv->vars[0],
      _var0);
 }
}
static void _V0loop_k145(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k145" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k145, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k145, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn cons 5 46) (close _V0loop_k146) (bruijn val 4 2) (bruijn ret 2 2))
    V_CALL(VGetArg(upenv, 5-1, 46), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k146, env)}),
      upenv->up->up->up->vars[2],
      upenv->up->vars[2]);
 }
}
static void _V0loop_k144(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k144" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k144, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k144, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.308 0 0) ((bruijn ##k.307 1 0) (bruijn ret 1 2)) ((bruijn - 4 37) (close _V0loop_k145) (bruijn k 1 1) 1))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->vars[0], runtime,
      upenv->vars[2]);
} else {
    V_CALL(upenv->up->up->up->vars[37], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k145, env)}),
      upenv->vars[1],
      VEncodeInt(1l));
}
 }
}
static void _V0loop_lambda71(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0loop_lambda71" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0loop_lambda71, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda71, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn eq? 3 15) (close _V0loop_k144) (bruijn k 0 1) 0)
    V_CALL(upenv->up->up->vars[15], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k144, env)}),
      _var1,
      VEncodeInt(0l));
 }
}
__attribute__((used)) static void _V20CaseError__V0make__list_lambda70(VRuntime * runtime, VEnv * upenv, int argc, ...) {
 // (_V0make__list_lambda70 #t (2 ((bruijn make-list 1 86) (bruijn ##k.305 0 0) (bruijn k 0 1) #f)) (3 (letrec 1 ((close _V0loop_lambda71)) ((bruijn loop 0 0) (bruijn ##k.306 1 0) (bruijn k 1 1) '()))))
 VError("Not enough arguments to _V0make__list_lambda70, got ~D~N"
 "-- expected 2~N"
 "-- expected 3~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V0make__list_lambda70(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V20Case0__V0make__list_lambda70" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case0__V0make__list_lambda70, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn make-list 1 86) (bruijn ##k.305 0 0) (bruijn k 0 1) #f)
    V_CALL(upenv->vars[86], runtime,
      _var0,
      _var1,
      VEncodeBool(false));
 }
}
__attribute__((used)) static void _V20Case1__V0make__list_lambda70(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V20Case1__V0make__list_lambda70" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case1__V0make__list_lambda70, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // (letrec 1 ((close _V0loop_lambda71)) ((bruijn loop 0 0) (bruijn ##k.306 1 0) (bruijn k 1 1) '()))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda71, env)});
    V_CALL(env->vars[0], runtime,
      upenv->vars[0],
      upenv->vars[1],
      VNULL);
    }
 }
}
void _V0make__list_lambda70(VRuntime * runtime, VEnv * upenv, int argc, ...);
asm(
".intel_syntax noprefix\n"
#ifdef __linux__
".type _V0make__list_lambda70, @function\n"
#endif
"_V0make__list_lambda70:\n"
"    cmp " ARGC_REG ", 2\n"
"    je _V20Case0__V0make__list_lambda70\n"
"    cmp " ARGC_REG ", 3\n"
"    je _V20Case1__V0make__list_lambda70\n"
"    jmp _V20CaseError__V0make__list_lambda70\n"
);
static void _V0loop_k148(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k148" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k148, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k148, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##k.312 2 0) (##inline ##vcore.cons (bruijn ##x.314 1 0) (bruijn ##x.315 0 0)))
    V_CALL(upenv->up->vars[0], runtime,
      VInlineCons2(runtime,
        upenv->vars[0],
        _var0));
 }
}
static void _V0loop_k147(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k147" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k147, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k147, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn loop 2 0) (close _V0loop_k148) (##inline ##vcore.cdr (bruijn xs 1 1)))
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k148, env)}),
      VInlineCdr2(runtime,
        upenv->vars[1]));
 }
}
static void _V0loop_lambda73(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0loop_lambda73" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0loop_lambda73, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda73, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##vcore.null? (bruijn xs 0 1)) ((bruijn ##k.312 0 0) '()) ((bruijn f 2 1) (close _V0loop_k147) (##inline ##vcore.car (bruijn xs 0 1))))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var1))) {
    V_CALL(_var0, runtime,
      VNULL);
} else {
    V_CALL(upenv->up->vars[1], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k147, env)}),
      VInlineCar2(runtime,
        _var1));
}
 }
}
static void _V0loop_k150(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k150" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k150, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k150, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##k.319 2 0) (##inline ##vcore.cons (bruijn ##x.321 1 0) (bruijn ##x.322 0 0)))
    V_CALL(upenv->up->vars[0], runtime,
      VInlineCons2(runtime,
        upenv->vars[0],
        _var0));
 }
}
static void _V0loop_k149(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k149" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k149, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k149, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn loop 2 0) (close _V0loop_k150) (##inline ##vcore.cdr (bruijn xs 1 1)) (##inline ##vcore.cdr (bruijn ys 1 2)))
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k150, env)}),
      VInlineCdr2(runtime,
        upenv->vars[1]),
      VInlineCdr2(runtime,
        upenv->vars[2]));
 }
}
static void _V0loop_lambda74(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0loop_lambda74" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0loop_lambda74, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda74, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // (if (##inline ##vcore.null? (bruijn xs 0 1)) ((bruijn ##k.319 0 0) '()) ((bruijn f 2 1) (close _V0loop_k149) (##inline ##vcore.car (bruijn xs 0 1)) (##inline ##vcore.car (bruijn ys 0 2))))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var1))) {
    V_CALL(_var0, runtime,
      VNULL);
} else {
    V_CALL(upenv->up->vars[1], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k149, env)}),
      VInlineCar2(runtime,
        _var1),
      VInlineCar2(runtime,
        _var2));
}
 }
}
static void _V0loop_k152(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k152" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k152, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k152, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##k.328 2 0) (##inline ##vcore.cons (bruijn ##x.330 1 0) (bruijn ##x.331 0 0)))
    V_CALL(upenv->up->vars[0], runtime,
      VInlineCons2(runtime,
        upenv->vars[0],
        _var0));
 }
}
static void _V0loop_k151(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k151" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k151, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k151, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn loop 2 0) (close _V0loop_k152) (##inline ##vcore.cdr (bruijn xs 1 1)) (##inline ##vcore.cdr (bruijn ys 1 2)) (##inline ##vcore.cdr (bruijn zs 1 3)))
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k152, env)}),
      VInlineCdr2(runtime,
        upenv->vars[1]),
      VInlineCdr2(runtime,
        upenv->vars[2]),
      VInlineCdr2(runtime,
        upenv->vars[3]));
 }
}
static void _V0loop_lambda75(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V0loop_lambda75" };
 VRecordCall2(runtime, &dbg);
 if(argc != 4) {
  VError("Not enough arguments to _V0loop_lambda75, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda75, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // (if (##inline ##vcore.null? (bruijn xs 0 1)) ((bruijn ##k.328 0 0) '()) ((bruijn f 2 1) (close _V0loop_k151) (##inline ##vcore.car (bruijn xs 0 1)) (##inline ##vcore.car (bruijn ys 0 2)) (##inline ##vcore.car (bruijn zs 0 3))))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var1))) {
    V_CALL(_var0, runtime,
      VNULL);
} else {
    V_CALL(upenv->up->vars[1], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k151, env)}),
      VInlineCar2(runtime,
        _var1),
      VInlineCar2(runtime,
        _var2),
      VInlineCar2(runtime,
        _var3));
}
 }
}
static void _V0loop_k156(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k156" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k156, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k156, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##k.339 4 0) (##inline ##vcore.cons (bruijn ##x.341 2 0) (bruijn ##x.342 0 0)))
    V_CALL(upenv->up->up->up->vars[0], runtime,
      VInlineCons2(runtime,
        upenv->up->vars[0],
        _var0));
 }
}
static void _V0loop_k155(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k155" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k155, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k155, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn loop 4 0) (close _V0loop_k156) (bruijn ##x.343 0 0))
    V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k156, env)}),
      _var0);
 }
}
static void _V0loop_k154(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k154" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k154, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k154, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn map 5 87) (close _V0loop_k155) (##intrinsic ##vcore.cdr) (bruijn lsts 2 1))
    V_CALL(VGetArg(upenv, 5-1, 87), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k155, env)}),
      _V40_V10vcore_Dcdr,
      upenv->up->vars[1]);
 }
}
static void _V0loop_k153(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k153" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k153, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k153, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn apply 4 155) (close _V0loop_k154) (bruijn f 3 1) (bruijn ##x.344 0 0))
    V_CALL(upenv->up->up->up->vars[155], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k154, env)}),
      upenv->up->up->vars[1],
      _var0);
 }
}
static void _V0loop_lambda76(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0loop_lambda76" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0loop_lambda76, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda76, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##vcore.null? (##inline ##vcore.car (bruijn lsts 0 1))) ((bruijn ##k.339 0 0) '()) ((bruijn map 3 87) (close _V0loop_k153) (##intrinsic ##vcore.car) (bruijn lsts 0 1)))
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCar2(runtime,
        _var1)))) {
    V_CALL(_var0, runtime,
      VNULL);
} else {
    V_CALL(upenv->up->up->vars[87], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k153, env)}),
      _V40_V10vcore_Dcar,
      _var1);
}
 }
}
__attribute__((used)) static void _V20CaseError__V0map_lambda72(VRuntime * runtime, VEnv * upenv, int argc, ...) {
 // (_V0map_lambda72 #t (3 (letrec 1 ((close _V0loop_lambda73)) ((bruijn loop 0 0) (bruijn ##k.311 1 0) (bruijn xs 1 2)))) (4 (letrec 1 ((close _V0loop_lambda74)) ((bruijn loop 0 0) (bruijn ##k.318 1 0) (bruijn xs 1 2) (bruijn ys 1 3)))) (5 (letrec 1 ((close _V0loop_lambda75)) ((bruijn loop 0 0) (bruijn ##k.327 1 0) (bruijn xs 1 2) (bruijn ys 1 3) (bruijn zs 1 4)))) (2 + (letrec 1 ((close _V0loop_lambda76)) ((bruijn loop 0 0) (bruijn ##k.338 1 0) (bruijn lsts 1 2)))))
 VError("Not enough arguments to _V0map_lambda72, got ~D~N"
 "-- expected 3~N"
 "-- expected 4~N"
 "-- expected 5~N"
 "-- expected 2 or more~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V0map_lambda72(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V20Case0__V0map_lambda72" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case0__V0map_lambda72, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // (letrec 1 ((close _V0loop_lambda73)) ((bruijn loop 0 0) (bruijn ##k.311 1 0) (bruijn xs 1 2)))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda73, env)});
    V_CALL(env->vars[0], runtime,
      upenv->vars[0],
      upenv->vars[2]);
    }
 }
}
__attribute__((used)) static void _V20Case1__V0map_lambda72(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V20Case1__V0map_lambda72" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case1__V0map_lambda72, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // (letrec 1 ((close _V0loop_lambda74)) ((bruijn loop 0 0) (bruijn ##k.318 1 0) (bruijn xs 1 2) (bruijn ys 1 3)))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda74, env)});
    V_CALL(env->vars[0], runtime,
      upenv->vars[0],
      upenv->vars[2],
      upenv->vars[3]);
    }
 }
}
__attribute__((used)) static void _V20Case2__V0map_lambda72(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4) {
 static VDebugInfo dbg = { "_V20Case2__V0map_lambda72" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case2__V0map_lambda72, runtime, upenv, 5, argc, _var0, _var1, _var2, _var3, _var4) {
  struct { VEnv env; VWORD argv[5]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 5, 5, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  env->vars[4] = _var4;
  // (letrec 1 ((close _V0loop_lambda75)) ((bruijn loop 0 0) (bruijn ##k.327 1 0) (bruijn xs 1 2) (bruijn ys 1 3) (bruijn zs 1 4)))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda75, env)});
    V_CALL(env->vars[0], runtime,
      upenv->vars[0],
      upenv->vars[2],
      upenv->vars[3],
      upenv->vars[4]);
    }
 }
}
__attribute__((used)) static void _V20Case3__V0map_lambda72(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, ...) {
 static VDebugInfo dbg = { "_V20Case3__V0map_lambda72" };
 VRecordCall2(runtime, &dbg);
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 2, argc, _var1);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case3__V0map_lambda72, runtime, upenv, 2, argc, _var0, _var1, _varargs) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _varargs;
  // (letrec 1 ((close _V0loop_lambda76)) ((bruijn loop 0 0) (bruijn ##k.338 1 0) (bruijn lsts 1 2)))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda76, env)});
    V_CALL(env->vars[0], runtime,
      upenv->vars[0],
      upenv->vars[2]);
    }
 }
}
void _V0map_lambda72(VRuntime * runtime, VEnv * upenv, int argc, ...);
asm(
".intel_syntax noprefix\n"
#ifdef __linux__
".type _V0map_lambda72, @function\n"
#endif
"_V0map_lambda72:\n"
"    cmp " ARGC_REG ", 3\n"
"    je _V20Case0__V0map_lambda72\n"
"    cmp " ARGC_REG ", 4\n"
"    je _V20Case1__V0map_lambda72\n"
"    cmp " ARGC_REG ", 5\n"
"    je _V20Case2__V0map_lambda72\n"
"    cmp " ARGC_REG ", 2\n"
"    jge _V20Case3__V0map_lambda72\n"
"    jmp _V20CaseError__V0map_lambda72\n"
);
static void _V0loop_k157(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k157" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k157, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k157, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 2 0) (bruijn ##k.347 1 0) (##inline ##vcore.cdr (bruijn xs 1 1)))
    V_CALL(upenv->up->vars[0], runtime,
      upenv->vars[0],
      VInlineCdr2(runtime,
        upenv->vars[1]));
 }
}
static void _V0loop_lambda78(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0loop_lambda78" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0loop_lambda78, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda78, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##vcore.not (##inline ##vcore.null? (bruijn xs 0 1))) ((bruijn f 2 1) (close _V0loop_k157) (##inline ##vcore.car (bruijn xs 0 1))) ((bruijn ##k.347 0 0) #f))
if(VDecodeBool(
VInlineNot2(runtime,
        VInlineNullP2(runtime,
        _var1)))) {
    V_CALL(upenv->up->vars[1], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k157, env)}),
      VInlineCar2(runtime,
        _var1));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0loop_k158(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k158" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k158, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k158, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 2 0) (bruijn ##k.354 1 0) (##inline ##vcore.cdr (bruijn xs 1 1)) (##inline ##vcore.cdr (bruijn ys 1 2)))
    V_CALL(upenv->up->vars[0], runtime,
      upenv->vars[0],
      VInlineCdr2(runtime,
        upenv->vars[1]),
      VInlineCdr2(runtime,
        upenv->vars[2]));
 }
}
static void _V0loop_lambda79(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0loop_lambda79" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0loop_lambda79, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda79, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // (if (##inline ##vcore.not (##inline ##vcore.null? (bruijn xs 0 1))) ((bruijn f 2 1) (close _V0loop_k158) (##inline ##vcore.car (bruijn xs 0 1)) (##inline ##vcore.car (bruijn ys 0 2))) ((bruijn ##k.354 0 0) #f))
if(VDecodeBool(
VInlineNot2(runtime,
        VInlineNullP2(runtime,
        _var1)))) {
    V_CALL(upenv->up->vars[1], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k158, env)}),
      VInlineCar2(runtime,
        _var1),
      VInlineCar2(runtime,
        _var2));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0loop_k159(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k159" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k159, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k159, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 2 0) (bruijn ##k.363 1 0) (##inline ##vcore.cdr (bruijn xs 1 1)) (##inline ##vcore.cdr (bruijn ys 1 2)) (##inline ##vcore.cdr (bruijn zs 1 3)))
    V_CALL(upenv->up->vars[0], runtime,
      upenv->vars[0],
      VInlineCdr2(runtime,
        upenv->vars[1]),
      VInlineCdr2(runtime,
        upenv->vars[2]),
      VInlineCdr2(runtime,
        upenv->vars[3]));
 }
}
static void _V0loop_lambda80(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V0loop_lambda80" };
 VRecordCall2(runtime, &dbg);
 if(argc != 4) {
  VError("Not enough arguments to _V0loop_lambda80, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda80, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // (if (##inline ##vcore.not (##inline ##vcore.null? (bruijn xs 0 1))) ((bruijn f 2 1) (close _V0loop_k159) (##inline ##vcore.car (bruijn xs 0 1)) (##inline ##vcore.car (bruijn ys 0 2)) (##inline ##vcore.car (bruijn zs 0 3))) ((bruijn ##k.363 0 0) #f))
if(VDecodeBool(
VInlineNot2(runtime,
        VInlineNullP2(runtime,
        _var1)))) {
    V_CALL(upenv->up->vars[1], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k159, env)}),
      VInlineCar2(runtime,
        _var1),
      VInlineCar2(runtime,
        _var2),
      VInlineCar2(runtime,
        _var3));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0loop_k162(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k162" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k162, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k162, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 4 0) (bruijn ##k.374 3 0) (bruijn ##x.377 0 0))
    V_CALL(upenv->up->up->up->vars[0], runtime,
      upenv->up->up->vars[0],
      _var0);
 }
}
static void _V0loop_k161(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k161" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k161, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k161, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn map 5 87) (close _V0loop_k162) (##intrinsic ##vcore.cdr) (bruijn lsts 2 1))
    V_CALL(VGetArg(upenv, 5-1, 87), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k162, env)}),
      _V40_V10vcore_Dcdr,
      upenv->up->vars[1]);
 }
}
static void _V0loop_k160(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k160" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k160, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k160, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn apply 4 155) (close _V0loop_k161) (bruijn f 3 1) (bruijn ##x.378 0 0))
    V_CALL(upenv->up->up->up->vars[155], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k161, env)}),
      upenv->up->up->vars[1],
      _var0);
 }
}
static void _V0loop_lambda81(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0loop_lambda81" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0loop_lambda81, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda81, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##vcore.not (##inline ##vcore.null? (##inline ##vcore.car (bruijn lsts 0 1)))) ((bruijn map 3 87) (close _V0loop_k160) (##intrinsic ##vcore.car) (bruijn lsts 0 1)) ((bruijn ##k.374 0 0) #f))
if(VDecodeBool(
VInlineNot2(runtime,
        VInlineNullP2(runtime,
        VInlineCar2(runtime,
        _var1))))) {
    V_CALL(upenv->up->up->vars[87], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k160, env)}),
      _V40_V10vcore_Dcar,
      _var1);
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
__attribute__((used)) static void _V20CaseError__V0for__each_lambda77(VRuntime * runtime, VEnv * upenv, int argc, ...) {
 // (_V0for__each_lambda77 #t (3 (letrec 1 ((close _V0loop_lambda78)) ((bruijn loop 0 0) (bruijn ##k.346 1 0) (bruijn xs 1 2)))) (4 (letrec 1 ((close _V0loop_lambda79)) ((bruijn loop 0 0) (bruijn ##k.353 1 0) (bruijn xs 1 2) (bruijn ys 1 3)))) (5 (letrec 1 ((close _V0loop_lambda80)) ((bruijn loop 0 0) (bruijn ##k.362 1 0) (bruijn xs 1 2) (bruijn ys 1 3) (bruijn zs 1 4)))) (2 + (letrec 1 ((close _V0loop_lambda81)) ((bruijn loop 0 0) (bruijn ##k.373 1 0) (bruijn lsts 1 2)))))
 VError("Not enough arguments to _V0for__each_lambda77, got ~D~N"
 "-- expected 3~N"
 "-- expected 4~N"
 "-- expected 5~N"
 "-- expected 2 or more~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V0for__each_lambda77(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V20Case0__V0for__each_lambda77" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case0__V0for__each_lambda77, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // (letrec 1 ((close _V0loop_lambda78)) ((bruijn loop 0 0) (bruijn ##k.346 1 0) (bruijn xs 1 2)))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda78, env)});
    V_CALL(env->vars[0], runtime,
      upenv->vars[0],
      upenv->vars[2]);
    }
 }
}
__attribute__((used)) static void _V20Case1__V0for__each_lambda77(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V20Case1__V0for__each_lambda77" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case1__V0for__each_lambda77, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // (letrec 1 ((close _V0loop_lambda79)) ((bruijn loop 0 0) (bruijn ##k.353 1 0) (bruijn xs 1 2) (bruijn ys 1 3)))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda79, env)});
    V_CALL(env->vars[0], runtime,
      upenv->vars[0],
      upenv->vars[2],
      upenv->vars[3]);
    }
 }
}
__attribute__((used)) static void _V20Case2__V0for__each_lambda77(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4) {
 static VDebugInfo dbg = { "_V20Case2__V0for__each_lambda77" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case2__V0for__each_lambda77, runtime, upenv, 5, argc, _var0, _var1, _var2, _var3, _var4) {
  struct { VEnv env; VWORD argv[5]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 5, 5, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  env->vars[4] = _var4;
  // (letrec 1 ((close _V0loop_lambda80)) ((bruijn loop 0 0) (bruijn ##k.362 1 0) (bruijn xs 1 2) (bruijn ys 1 3) (bruijn zs 1 4)))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda80, env)});
    V_CALL(env->vars[0], runtime,
      upenv->vars[0],
      upenv->vars[2],
      upenv->vars[3],
      upenv->vars[4]);
    }
 }
}
__attribute__((used)) static void _V20Case3__V0for__each_lambda77(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, ...) {
 static VDebugInfo dbg = { "_V20Case3__V0for__each_lambda77" };
 VRecordCall2(runtime, &dbg);
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 2, argc, _var1);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case3__V0for__each_lambda77, runtime, upenv, 2, argc, _var0, _var1, _varargs) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _varargs;
  // (letrec 1 ((close _V0loop_lambda81)) ((bruijn loop 0 0) (bruijn ##k.373 1 0) (bruijn lsts 1 2)))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda81, env)});
    V_CALL(env->vars[0], runtime,
      upenv->vars[0],
      upenv->vars[2]);
    }
 }
}
void _V0for__each_lambda77(VRuntime * runtime, VEnv * upenv, int argc, ...);
asm(
".intel_syntax noprefix\n"
#ifdef __linux__
".type _V0for__each_lambda77, @function\n"
#endif
"_V0for__each_lambda77:\n"
"    cmp " ARGC_REG ", 3\n"
"    je _V20Case0__V0for__each_lambda77\n"
"    cmp " ARGC_REG ", 4\n"
"    je _V20Case1__V0for__each_lambda77\n"
"    cmp " ARGC_REG ", 5\n"
"    je _V20Case2__V0for__each_lambda77\n"
"    cmp " ARGC_REG ", 2\n"
"    jge _V20Case3__V0for__each_lambda77\n"
"    jmp _V20CaseError__V0for__each_lambda77\n"
);
static void _V0loop_k166(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k166" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k166, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k166, runtime, upenv, 1, argc, _var0) {
  // ((bruijn kons 6 1) (bruijn ##k.382 4 0) (bruijn ##x.384 2 0) (bruijn ##x.385 0 0))
    V_CALL(VGetArg(upenv, 6-1, 1), runtime,
      upenv->up->up->up->vars[0],
      upenv->up->vars[0],
      _var0);
 }
}
static void _V0loop_k165(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k165" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k165, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k165, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn loop 4 0) (close _V0loop_k166) (bruijn ##x.386 0 0))
    V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k166, env)}),
      _var0);
 }
}
static void _V0loop_k164(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k164" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k164, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k164, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn cdr 5 48) (close _V0loop_k165) (bruijn ks 2 1))
    V_CALL(VGetArg(upenv, 5-1, 48), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k165, env)}),
      upenv->up->vars[1]);
 }
}
static void _V0loop_k163(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k163" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k163, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k163, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.383 0 0) ((bruijn ##k.382 1 0) (bruijn knil 3 2)) ((bruijn car 4 47) (close _V0loop_k164) (bruijn ks 1 1)))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->vars[0], runtime,
      upenv->up->up->vars[2]);
} else {
    V_CALL(upenv->up->up->up->vars[47], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k164, env)}),
      upenv->vars[1]);
}
 }
}
static void _V0loop_lambda83(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0loop_lambda83" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0loop_lambda83, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda83, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn null? 3 0) (close _V0loop_k163) (bruijn ks 0 1))
    V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k163, env)}),
      _var1);
 }
}
static void _V0fold__right_lambda82(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V0fold__right_lambda82" };
 VRecordCall2(runtime, &dbg);
 if(argc != 4) {
  VError("Not enough arguments to _V0fold__right_lambda82, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0fold__right_lambda82, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // (letrec 1 ((close _V0loop_lambda83)) ((bruijn loop 0 0) (bruijn ##k.381 1 0) (bruijn ks 1 3)))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda83, env)});
    V_CALL(env->vars[0], runtime,
      upenv->vars[0],
      upenv->vars[3]);
    }
 }
}
static void _V0loop_k167(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k167" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k167, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k167, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##k.390 1 0) (##inline ##vcore.cons (##inline ##vcore.car (bruijn a 1 1)) (bruijn ##x.393 0 0)))
    V_CALL(upenv->vars[0], runtime,
      VInlineCons2(runtime,
        VInlineCar2(runtime,
        upenv->vars[1]),
        _var0));
 }
}
static void _V0loop_lambda85(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0loop_lambda85" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0loop_lambda85, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda85, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##vcore.null? (bruijn a 0 1)) ((bruijn ##k.390 0 0) (bruijn b 2 2)) ((bruijn loop 1 0) (close _V0loop_k167) (##inline ##vcore.cdr (bruijn a 0 1))))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var1))) {
    V_CALL(_var0, runtime,
      upenv->up->vars[2]);
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k167, env)}),
      VInlineCdr2(runtime,
        _var1));
}
 }
}
static void _V0append_k168(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0append_k168" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0append_k168, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0append_k168, runtime, upenv, 1, argc, _var0) {
  // ((bruijn append 2 90) (bruijn ##k.395 1 0) (bruijn a 1 1) (bruijn ##x.396 0 0))
    V_CALL(upenv->up->vars[90], runtime,
      upenv->vars[0],
      upenv->vars[1],
      _var0);
 }
}
static void _V0append_k170(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0append_k170" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0append_k170, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0append_k170, runtime, upenv, 1, argc, _var0) {
  // ((bruijn append 3 90) (bruijn ##k.397 2 0) (bruijn a 2 1) (bruijn ##x.398 0 0))
    V_CALL(upenv->up->up->vars[90], runtime,
      upenv->up->vars[0],
      upenv->up->vars[1],
      _var0);
 }
}
static void _V0append_k169(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0append_k169" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0append_k169, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0append_k169, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn append 2 90) (close _V0append_k170) (bruijn b 1 2) (bruijn ##x.399 0 0))
    V_CALL(upenv->up->vars[90], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0append_k170, env)}),
      upenv->vars[2],
      _var0);
 }
}
__attribute__((used)) static void _V20CaseError__V0append_lambda84(VRuntime * runtime, VEnv * upenv, int argc, ...) {
 // (_V0append_lambda84 #t (1 ((bruijn ##k.387 0 0) '())) (2 ((bruijn ##k.388 0 0) (bruijn a 0 1))) (3 (letrec 1 ((close _V0loop_lambda85)) ((bruijn loop 0 0) (bruijn ##k.389 1 0) (bruijn a 1 1)))) (4 ((bruijn append 1 90) (close _V0append_k168) (bruijn b 0 2) (bruijn c 0 3))) (5 ((bruijn append 1 90) (close _V0append_k169) (bruijn c 0 3) (bruijn d 0 4))) (1 + ((bruijn fold-right 1 89) (bruijn ##k.400 0 0) (bruijn append 1 90) '() (bruijn lsts 0 1))))
 VError("Not enough arguments to _V0append_lambda84, got ~D~N"
 "-- expected 1~N"
 "-- expected 2~N"
 "-- expected 3~N"
 "-- expected 4~N"
 "-- expected 5~N"
 "-- expected 1 or more~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V0append_lambda84(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V20Case0__V0append_lambda84" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case0__V0append_lambda84, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##k.387 0 0) '())
    V_CALL(_var0, runtime,
      VNULL);
 }
}
__attribute__((used)) static void _V20Case1__V0append_lambda84(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V20Case1__V0append_lambda84" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case1__V0append_lambda84, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##k.388 0 0) (bruijn a 0 1))
    V_CALL(_var0, runtime,
      _var1);
 }
}
__attribute__((used)) static void _V20Case2__V0append_lambda84(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V20Case2__V0append_lambda84" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case2__V0append_lambda84, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // (letrec 1 ((close _V0loop_lambda85)) ((bruijn loop 0 0) (bruijn ##k.389 1 0) (bruijn a 1 1)))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda85, env)});
    V_CALL(env->vars[0], runtime,
      upenv->vars[0],
      upenv->vars[1]);
    }
 }
}
__attribute__((used)) static void _V20Case3__V0append_lambda84(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V20Case3__V0append_lambda84" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case3__V0append_lambda84, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // ((bruijn append 1 90) (close _V0append_k168) (bruijn b 0 2) (bruijn c 0 3))
    V_CALL(upenv->vars[90], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0append_k168, env)}),
      _var2,
      _var3);
 }
}
__attribute__((used)) static void _V20Case4__V0append_lambda84(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4) {
 static VDebugInfo dbg = { "_V20Case4__V0append_lambda84" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case4__V0append_lambda84, runtime, upenv, 5, argc, _var0, _var1, _var2, _var3, _var4) {
  struct { VEnv env; VWORD argv[5]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 5, 5, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  env->vars[4] = _var4;
  // ((bruijn append 1 90) (close _V0append_k169) (bruijn c 0 3) (bruijn d 0 4))
    V_CALL(upenv->vars[90], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0append_k169, env)}),
      _var3,
      _var4);
 }
}
__attribute__((used)) static void _V20Case5__V0append_lambda84(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, ...) {
 static VDebugInfo dbg = { "_V20Case5__V0append_lambda84" };
 VRecordCall2(runtime, &dbg);
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 1, argc, _var0);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case5__V0append_lambda84, runtime, upenv, 1, argc, _var0, _varargs) {
  // ((bruijn fold-right 1 89) (bruijn ##k.400 0 0) (bruijn append 1 90) '() (bruijn lsts 0 1))
    V_CALL(upenv->vars[89], runtime,
      _var0,
      upenv->vars[90],
      VNULL,
      _varargs);
 }
}
void _V0append_lambda84(VRuntime * runtime, VEnv * upenv, int argc, ...);
asm(
".intel_syntax noprefix\n"
#ifdef __linux__
".type _V0append_lambda84, @function\n"
#endif
"_V0append_lambda84:\n"
"    cmp " ARGC_REG ", 1\n"
"    je _V20Case0__V0append_lambda84\n"
"    cmp " ARGC_REG ", 2\n"
"    je _V20Case1__V0append_lambda84\n"
"    cmp " ARGC_REG ", 3\n"
"    je _V20Case2__V0append_lambda84\n"
"    cmp " ARGC_REG ", 4\n"
"    je _V20Case3__V0append_lambda84\n"
"    cmp " ARGC_REG ", 5\n"
"    je _V20Case4__V0append_lambda84\n"
"    cmp " ARGC_REG ", 1\n"
"    jge _V20Case5__V0append_lambda84\n"
"    jmp _V20CaseError__V0append_lambda84\n"
);
static void _V0iter_k174(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter_k174" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k174, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k174, runtime, upenv, 1, argc, _var0) {
  // ((bruijn iter 5 0) (bruijn ##k.402 4 0) (bruijn ##x.404 1 0) (bruijn ##x.405 0 0))
    V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      upenv->up->up->up->vars[0],
      upenv->vars[0],
      _var0);
 }
}
static void _V0iter_k173(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter_k173" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k173, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k173, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn cdr 6 48) (close _V0iter_k174) (bruijn rest 3 2))
    V_CALL(VGetArg(upenv, 6-1, 48), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_k174, env)}),
      upenv->up->up->vars[2]);
 }
}
static void _V0iter_k172(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter_k172" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k172, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k172, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn cons 5 46) (close _V0iter_k173) (bruijn ##x.406 0 0) (bruijn acc 2 1))
    V_CALL(VGetArg(upenv, 5-1, 46), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_k173, env)}),
      _var0,
      upenv->up->vars[1]);
 }
}
static void _V0iter_k171(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0iter_k171" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0iter_k171, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_k171, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.403 0 0) ((bruijn ##k.402 1 0) (bruijn acc 1 1)) ((bruijn car 4 47) (close _V0iter_k172) (bruijn rest 1 2)))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->vars[0], runtime,
      upenv->vars[1]);
} else {
    V_CALL(upenv->up->up->up->vars[47], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_k172, env)}),
      upenv->vars[2]);
}
 }
}
static void _V0iter_lambda87(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0iter_lambda87" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0iter_lambda87, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0iter_lambda87, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn null? 3 0) (close _V0iter_k171) (bruijn rest 0 2))
    V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_k171, env)}),
      _var2);
 }
}
static void _V0reverse_lambda86(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0reverse_lambda86" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0reverse_lambda86, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0reverse_lambda86, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (letrec 1 ((close _V0iter_lambda87)) ((bruijn iter 0 0) (bruijn ##k.401 1 0) '() (bruijn lst 1 1)))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0iter_lambda87, env)});
    V_CALL(env->vars[0], runtime,
      upenv->vars[0],
      VNULL,
      upenv->vars[1]);
    }
 }
}
static void _V0memq_k178(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0memq_k178" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0memq_k178, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0memq_k178, runtime, upenv, 1, argc, _var0) {
  // ((bruijn memq 5 92) (bruijn ##k.407 4 0) (bruijn x 4 1) (bruijn ##x.410 0 0))
    V_CALL(VGetArg(upenv, 5-1, 92), runtime,
      upenv->up->up->up->vars[0],
      upenv->up->up->up->vars[1],
      _var0);
 }
}
static void _V0memq_k177(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0memq_k177" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0memq_k177, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0memq_k177, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.409 0 0) ((bruijn ##k.407 3 0) (bruijn lst 3 2)) ((bruijn cdr 4 48) (close _V0memq_k178) (bruijn lst 3 2)))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->up->up->vars[0], runtime,
      upenv->up->up->vars[2]);
} else {
    V_CALL(upenv->up->up->up->vars[48], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0memq_k178, env)}),
      upenv->up->up->vars[2]);
}
 }
}
static void _V0memq_k176(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0memq_k176" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0memq_k176, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0memq_k176, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn eq? 3 15) (close _V0memq_k177) (bruijn x 2 1) (bruijn ##x.411 0 0))
    V_CALL(upenv->up->up->vars[15], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0memq_k177, env)}),
      upenv->up->vars[1],
      _var0);
 }
}
static void _V0memq_k175(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0memq_k175" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0memq_k175, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0memq_k175, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.408 0 0) ((bruijn ##k.407 1 0) #f) ((bruijn car 2 47) (close _V0memq_k176) (bruijn lst 1 2)))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
} else {
    V_CALL(upenv->up->vars[47], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0memq_k176, env)}),
      upenv->vars[2]);
}
 }
}
static void _V0memq_lambda88(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0memq_lambda88" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0memq_lambda88, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0memq_lambda88, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn null? 1 0) (close _V0memq_k175) (bruijn lst 0 2))
    V_CALL(upenv->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0memq_k175, env)}),
      _var2);
 }
}
static void _V0memv_k182(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0memv_k182" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0memv_k182, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0memv_k182, runtime, upenv, 1, argc, _var0) {
  // ((bruijn memv 5 93) (bruijn ##k.412 4 0) (bruijn x 4 1) (bruijn ##x.415 0 0))
    V_CALL(VGetArg(upenv, 5-1, 93), runtime,
      upenv->up->up->up->vars[0],
      upenv->up->up->up->vars[1],
      _var0);
 }
}
static void _V0memv_k181(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0memv_k181" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0memv_k181, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0memv_k181, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.414 0 0) ((bruijn ##k.412 3 0) (bruijn lst 3 2)) ((bruijn cdr 4 48) (close _V0memv_k182) (bruijn lst 3 2)))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->up->up->vars[0], runtime,
      upenv->up->up->vars[2]);
} else {
    V_CALL(upenv->up->up->up->vars[48], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0memv_k182, env)}),
      upenv->up->up->vars[2]);
}
 }
}
static void _V0memv_k180(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0memv_k180" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0memv_k180, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0memv_k180, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn eqv? 3 18) (close _V0memv_k181) (bruijn x 2 1) (bruijn ##x.416 0 0))
    V_CALL(upenv->up->up->vars[18], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0memv_k181, env)}),
      upenv->up->vars[1],
      _var0);
 }
}
static void _V0memv_k179(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0memv_k179" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0memv_k179, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0memv_k179, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.413 0 0) ((bruijn ##k.412 1 0) #f) ((bruijn car 2 47) (close _V0memv_k180) (bruijn lst 1 2)))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
} else {
    V_CALL(upenv->up->vars[47], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0memv_k180, env)}),
      upenv->vars[2]);
}
 }
}
static void _V0memv_lambda89(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0memv_lambda89" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0memv_lambda89, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0memv_lambda89, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn null? 1 0) (close _V0memv_k179) (bruijn lst 0 2))
    V_CALL(upenv->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0memv_k179, env)}),
      _var2);
 }
}
static void _V0member_k186(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0member_k186" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0member_k186, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0member_k186, runtime, upenv, 1, argc, _var0) {
  // ((bruijn member 5 94) (bruijn ##k.418 4 0) (bruijn x 4 1) (bruijn ##x.421 0 0))
    V_CALL(VGetArg(upenv, 5-1, 94), runtime,
      upenv->up->up->up->vars[0],
      upenv->up->up->up->vars[1],
      _var0);
 }
}
static void _V0member_k185(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0member_k185" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0member_k185, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0member_k185, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.420 0 0) ((bruijn ##k.418 3 0) (bruijn lst 3 2)) ((bruijn cdr 4 48) (close _V0member_k186) (bruijn lst 3 2)))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->up->up->vars[0], runtime,
      upenv->up->up->vars[2]);
} else {
    V_CALL(upenv->up->up->up->vars[48], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0member_k186, env)}),
      upenv->up->up->vars[2]);
}
 }
}
static void _V0member_k184(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0member_k184" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0member_k184, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0member_k184, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn = 2 3) (close _V0member_k185) (bruijn x 2 1) (bruijn ##x.422 0 0))
    V_CALL(upenv->up->vars[3], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0member_k185, env)}),
      upenv->up->vars[1],
      _var0);
 }
}
static void _V0member_k183(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0member_k183" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0member_k183, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0member_k183, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.419 0 0) ((bruijn ##k.418 1 0) #f) ((bruijn car 2 47) (close _V0member_k184) (bruijn lst 1 2)))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
} else {
    V_CALL(upenv->up->vars[47], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0member_k184, env)}),
      upenv->vars[2]);
}
 }
}
__attribute__((used)) static void _V20CaseError__V0member_lambda90(VRuntime * runtime, VEnv * upenv, int argc, ...) {
 // (_V0member_lambda90 #t (3 ((bruijn member 1 94) (bruijn ##k.417 0 0) (bruijn x 0 1) (bruijn lst 0 2) (bruijn equal? 1 21))) (4 ((bruijn null? 1 0) (close _V0member_k183) (bruijn lst 0 2))))
 VError("Not enough arguments to _V0member_lambda90, got ~D~N"
 "-- expected 3~N"
 "-- expected 4~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V0member_lambda90(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V20Case0__V0member_lambda90" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case0__V0member_lambda90, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  // ((bruijn member 1 94) (bruijn ##k.417 0 0) (bruijn x 0 1) (bruijn lst 0 2) (bruijn equal? 1 21))
    V_CALL(upenv->vars[94], runtime,
      _var0,
      _var1,
      _var2,
      upenv->vars[21]);
 }
}
__attribute__((used)) static void _V20Case1__V0member_lambda90(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V20Case1__V0member_lambda90" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case1__V0member_lambda90, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // ((bruijn null? 1 0) (close _V0member_k183) (bruijn lst 0 2))
    V_CALL(upenv->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0member_k183, env)}),
      _var2);
 }
}
void _V0member_lambda90(VRuntime * runtime, VEnv * upenv, int argc, ...);
asm(
".intel_syntax noprefix\n"
#ifdef __linux__
".type _V0member_lambda90, @function\n"
#endif
"_V0member_lambda90:\n"
"    cmp " ARGC_REG ", 3\n"
"    je _V20Case0__V0member_lambda90\n"
"    cmp " ARGC_REG ", 4\n"
"    je _V20Case1__V0member_lambda90\n"
"    jmp _V20CaseError__V0member_lambda90\n"
);
static void _V0assq_k190(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0assq_k190" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0assq_k190, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0assq_k190, runtime, upenv, 1, argc, _var0) {
  // ((bruijn assq 5 95) (bruijn ##k.423 4 0) (bruijn x 4 1) (bruijn ##x.426 0 0))
    V_CALL(VGetArg(upenv, 5-1, 95), runtime,
      upenv->up->up->up->vars[0],
      upenv->up->up->up->vars[1],
      _var0);
 }
}
static void _V0assq_k189(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0assq_k189" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0assq_k189, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0assq_k189, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.425 0 0) ((bruijn car 4 47) (bruijn ##k.423 3 0) (bruijn alst 3 2)) ((bruijn cdr 4 48) (close _V0assq_k190) (bruijn alst 3 2)))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->up->up->up->vars[47], runtime,
      upenv->up->up->vars[0],
      upenv->up->up->vars[2]);
} else {
    V_CALL(upenv->up->up->up->vars[48], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0assq_k190, env)}),
      upenv->up->up->vars[2]);
}
 }
}
static void _V0assq_k188(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0assq_k188" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0assq_k188, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0assq_k188, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn eq? 3 15) (close _V0assq_k189) (bruijn x 2 1) (bruijn ##x.427 0 0))
    V_CALL(upenv->up->up->vars[15], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0assq_k189, env)}),
      upenv->up->vars[1],
      _var0);
 }
}
static void _V0assq_k187(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0assq_k187" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0assq_k187, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0assq_k187, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.424 0 0) ((bruijn ##k.423 1 0) #f) ((bruijn caar 2 51) (close _V0assq_k188) (bruijn alst 1 2)))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
} else {
    V_CALL(upenv->up->vars[51], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0assq_k188, env)}),
      upenv->vars[2]);
}
 }
}
static void _V0assq_lambda91(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0assq_lambda91" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0assq_lambda91, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0assq_lambda91, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn null? 1 0) (close _V0assq_k187) (bruijn alst 0 2))
    V_CALL(upenv->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0assq_k187, env)}),
      _var2);
 }
}
static void _V0assv_k194(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0assv_k194" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0assv_k194, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0assv_k194, runtime, upenv, 1, argc, _var0) {
  // ((bruijn assv 5 96) (bruijn ##k.428 4 0) (bruijn x 4 1) (bruijn ##x.431 0 0))
    V_CALL(VGetArg(upenv, 5-1, 96), runtime,
      upenv->up->up->up->vars[0],
      upenv->up->up->up->vars[1],
      _var0);
 }
}
static void _V0assv_k193(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0assv_k193" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0assv_k193, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0assv_k193, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.430 0 0) ((bruijn car 4 47) (bruijn ##k.428 3 0) (bruijn alst 3 2)) ((bruijn cdr 4 48) (close _V0assv_k194) (bruijn alst 3 2)))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->up->up->up->vars[47], runtime,
      upenv->up->up->vars[0],
      upenv->up->up->vars[2]);
} else {
    V_CALL(upenv->up->up->up->vars[48], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0assv_k194, env)}),
      upenv->up->up->vars[2]);
}
 }
}
static void _V0assv_k192(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0assv_k192" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0assv_k192, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0assv_k192, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn eqv? 3 18) (close _V0assv_k193) (bruijn x 2 1) (bruijn ##x.432 0 0))
    V_CALL(upenv->up->up->vars[18], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0assv_k193, env)}),
      upenv->up->vars[1],
      _var0);
 }
}
static void _V0assv_k191(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0assv_k191" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0assv_k191, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0assv_k191, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.429 0 0) ((bruijn ##k.428 1 0) #f) ((bruijn caar 2 51) (close _V0assv_k192) (bruijn alst 1 2)))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
} else {
    V_CALL(upenv->up->vars[51], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0assv_k192, env)}),
      upenv->vars[2]);
}
 }
}
static void _V0assv_lambda92(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0assv_lambda92" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0assv_lambda92, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0assv_lambda92, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn null? 1 0) (close _V0assv_k191) (bruijn alst 0 2))
    V_CALL(upenv->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0assv_k191, env)}),
      _var2);
 }
}
static void _V0assoc_k198(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0assoc_k198" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0assoc_k198, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0assoc_k198, runtime, upenv, 1, argc, _var0) {
  // ((bruijn assoc 5 97) (bruijn ##k.434 4 0) (bruijn x 4 1) (bruijn ##x.437 0 0))
    V_CALL(VGetArg(upenv, 5-1, 97), runtime,
      upenv->up->up->up->vars[0],
      upenv->up->up->up->vars[1],
      _var0);
 }
}
static void _V0assoc_k197(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0assoc_k197" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0assoc_k197, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0assoc_k197, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.436 0 0) ((bruijn car 4 47) (bruijn ##k.434 3 0) (bruijn alst 3 2)) ((bruijn cdr 4 48) (close _V0assoc_k198) (bruijn alst 3 2)))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->up->up->up->vars[47], runtime,
      upenv->up->up->vars[0],
      upenv->up->up->vars[2]);
} else {
    V_CALL(upenv->up->up->up->vars[48], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0assoc_k198, env)}),
      upenv->up->up->vars[2]);
}
 }
}
static void _V0assoc_k196(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0assoc_k196" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0assoc_k196, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0assoc_k196, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn = 2 3) (close _V0assoc_k197) (bruijn x 2 1) (bruijn ##x.438 0 0))
    V_CALL(upenv->up->vars[3], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0assoc_k197, env)}),
      upenv->up->vars[1],
      _var0);
 }
}
static void _V0assoc_k195(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0assoc_k195" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0assoc_k195, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0assoc_k195, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.435 0 0) ((bruijn ##k.434 1 0) #f) ((bruijn caar 2 51) (close _V0assoc_k196) (bruijn alst 1 2)))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
} else {
    V_CALL(upenv->up->vars[51], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0assoc_k196, env)}),
      upenv->vars[2]);
}
 }
}
__attribute__((used)) static void _V20CaseError__V0assoc_lambda93(VRuntime * runtime, VEnv * upenv, int argc, ...) {
 // (_V0assoc_lambda93 #t (3 ((bruijn assoc 1 97) (bruijn ##k.433 0 0) (bruijn x 0 1) (bruijn alst 0 2) (bruijn equal? 1 21))) (4 ((bruijn null? 1 0) (close _V0assoc_k195) (bruijn alst 0 2))))
 VError("Not enough arguments to _V0assoc_lambda93, got ~D~N"
 "-- expected 3~N"
 "-- expected 4~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V0assoc_lambda93(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V20Case0__V0assoc_lambda93" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case0__V0assoc_lambda93, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  // ((bruijn assoc 1 97) (bruijn ##k.433 0 0) (bruijn x 0 1) (bruijn alst 0 2) (bruijn equal? 1 21))
    V_CALL(upenv->vars[97], runtime,
      _var0,
      _var1,
      _var2,
      upenv->vars[21]);
 }
}
__attribute__((used)) static void _V20Case1__V0assoc_lambda93(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V20Case1__V0assoc_lambda93" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case1__V0assoc_lambda93, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // ((bruijn null? 1 0) (close _V0assoc_k195) (bruijn alst 0 2))
    V_CALL(upenv->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0assoc_k195, env)}),
      _var2);
 }
}
void _V0assoc_lambda93(VRuntime * runtime, VEnv * upenv, int argc, ...);
asm(
".intel_syntax noprefix\n"
#ifdef __linux__
".type _V0assoc_lambda93, @function\n"
#endif
"_V0assoc_lambda93:\n"
"    cmp " ARGC_REG ", 3\n"
"    je _V20Case0__V0assoc_lambda93\n"
"    cmp " ARGC_REG ", 4\n"
"    je _V20Case1__V0assoc_lambda93\n"
"    jmp _V20CaseError__V0assoc_lambda93\n"
);
static void _V0loop_k205(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k205" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k205, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k205, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 6 0) (bruijn ##k.440 5 0) (bruijn ##x.443 1 0) (bruijn ##x.444 0 0))
    V_CALL(VGetArg(upenv, 6-1, 0), runtime,
      VGetArg(upenv, 5-1, 0),
      upenv->vars[0],
      _var0);
 }
}
static void _V0loop_k204(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k204" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k204, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k204, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn + 9 36) (close _V0loop_k205) (bruijn i 4 2) 1)
    V_CALL(VGetArg(upenv, 9-1, 36), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k205, env)}),
      upenv->up->up->up->vars[2],
      VEncodeInt(1l));
 }
}
static void _V0loop_k203(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k203" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k203, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k203, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn cdr 8 48) (close _V0loop_k204) (bruijn lst 3 1))
    V_CALL(VGetArg(upenv, 8-1, 48), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k204, env)}),
      upenv->up->up->vars[1]);
 }
}
static void _V0loop_k202(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k202" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k202, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k202, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn string-set! 7 103) (close _V0loop_k203) (bruijn str 4 0) (bruijn i 2 2) (bruijn ##x.445 0 0))
    V_CALL(VGetArg(upenv, 7-1, 103), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k203, env)}),
      upenv->up->up->up->vars[0],
      upenv->up->vars[2],
      _var0);
 }
}
static void _V0loop_k201(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k201" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k201, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k201, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.441 0 0) ((bruijn ##k.440 1 0) (bruijn str 3 0)) ((bruijn car 6 47) (close _V0loop_k202) (bruijn lst 1 1)))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->vars[0], runtime,
      upenv->up->up->vars[0]);
} else {
    V_CALL(VGetArg(upenv, 6-1, 47), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k202, env)}),
      upenv->vars[1]);
}
 }
}
static void _V0loop_lambda95(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0loop_lambda95" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0loop_lambda95, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda95, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn null? 5 0) (close _V0loop_k201) (bruijn lst 0 1))
    V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k201, env)}),
      _var1);
 }
}
static void _V0list___Gstring_k200(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0list___Gstring_k200" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0list___Gstring_k200, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0list___Gstring_k200, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (letrec 1 ((close _V0loop_lambda95)) ((bruijn loop 0 0) (bruijn ##k.439 3 0) (bruijn lst 3 1) 0))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda95, env)});
    V_CALL(env->vars[0], runtime,
      upenv->up->up->vars[0],
      upenv->up->up->vars[1],
      VEncodeInt(0l));
    }
 }
}
static void _V0list___Gstring_k199(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0list___Gstring_k199" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0list___Gstring_k199, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0list___Gstring_k199, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn make-string 2 98) (close _V0list___Gstring_k200) (bruijn ##x.446 0 0))
    V_CALL(upenv->up->vars[98], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0list___Gstring_k200, env)}),
      _var0);
 }
}
static void _V0list___Gstring_lambda94(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0list___Gstring_lambda94" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0list___Gstring_lambda94, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0list___Gstring_lambda94, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn length 1 81) (close _V0list___Gstring_k199) (bruijn lst 0 1))
    V_CALL(upenv->vars[81], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0list___Gstring_k199, env)}),
      _var1);
 }
}
static void _V0loop_k209(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k209" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k209, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k209, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 5 0) (bruijn ##k.448 4 0) (bruijn ##x.450 2 0) (bruijn ##x.451 0 0))
    V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      upenv->up->up->up->vars[0],
      upenv->up->vars[0],
      _var0);
 }
}
static void _V0loop_k208(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k208" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k208, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k208, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn cons 6 46) (close _V0loop_k209) (bruijn ##x.452 0 0) (bruijn acc 3 2))
    V_CALL(VGetArg(upenv, 6-1, 46), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k209, env)}),
      _var0,
      upenv->up->up->vars[2]);
 }
}
static void _V0loop_k207(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k207" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k207, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k207, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn string-ref 5 102) (close _V0loop_k208) (bruijn str 4 1) (bruijn i 2 1))
    V_CALL(VGetArg(upenv, 5-1, 102), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k208, env)}),
      upenv->up->up->up->vars[1],
      upenv->up->vars[1]);
 }
}
static void _V0loop_k206(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k206" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k206, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k206, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.449 0 0) ((bruijn ##k.448 1 0) (bruijn acc 1 2)) ((bruijn - 4 37) (close _V0loop_k207) (bruijn i 1 1) 1))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->vars[0], runtime,
      upenv->vars[2]);
} else {
    V_CALL(upenv->up->up->up->vars[37], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k207, env)}),
      upenv->vars[1],
      VEncodeInt(1l));
}
 }
}
static void _V0loop_lambda97(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0loop_lambda97" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0loop_lambda97, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda97, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn eq? 3 15) (close _V0loop_k206) (bruijn i 0 1) -1)
    V_CALL(upenv->up->up->vars[15], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k206, env)}),
      _var1,
      VEncodeInt(-1l));
 }
}
static void _V0string___Glist_k211(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0string___Glist_k211" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0string___Glist_k211, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0string___Glist_k211, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 2 0) (bruijn ##k.447 3 0) (bruijn ##x.453 0 0) '())
    V_CALL(upenv->up->vars[0], runtime,
      upenv->up->up->vars[0],
      _var0,
      VNULL);
 }
}
static void _V0string___Glist_k210(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0string___Glist_k210" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0string___Glist_k210, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0string___Glist_k210, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn - 3 37) (close _V0string___Glist_k211) (bruijn ##x.454 0 0) 1)
    V_CALL(upenv->up->up->vars[37], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0string___Glist_k211, env)}),
      _var0,
      VEncodeInt(1l));
 }
}
static void _V0string___Glist_lambda96(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0string___Glist_lambda96" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0string___Glist_lambda96, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0string___Glist_lambda96, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (letrec 1 ((close _V0loop_lambda97)) ((bruijn string-length 2 104) (close _V0string___Glist_k210) (bruijn str 1 1)))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda97, env)});
    V_CALL(upenv->up->vars[104], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0string___Glist_k210, env)}),
      upenv->vars[1]);
    }
 }
}
static void _V0string__append_k218(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0string__append_k218" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0string__append_k218, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0string__append_k218, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##k.457 7 0) (bruijn str 3 0))
    V_CALL(VGetArg(upenv, 7-1, 0), runtime,
      upenv->up->up->vars[0]);
 }
}
static void _V0string__append_k217(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0string__append_k217" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0string__append_k217, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0string__append_k217, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn string-copy! 7 101) (close _V0string__append_k218) (bruijn str 2 0) (bruijn ##x.460 0 0) (bruijn b 6 2))
    V_CALL(VGetArg(upenv, 7-1, 101), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0string__append_k218, env)}),
      upenv->up->vars[0],
      _var0,
      VGetArg(upenv, 6-1, 2));
 }
}
static void _V0string__append_k216(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0string__append_k216" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0string__append_k216, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0string__append_k216, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn string-length 6 104) (close _V0string__append_k217) (bruijn a 5 1))
    V_CALL(VGetArg(upenv, 6-1, 104), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0string__append_k217, env)}),
      VGetArg(upenv, 5-1, 1));
 }
}
static void _V0string__append_k215(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0string__append_k215" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0string__append_k215, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0string__append_k215, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn string-copy! 5 101) (close _V0string__append_k216) (bruijn str 0 0) 0 (bruijn a 4 1))
    V_CALL(VGetArg(upenv, 5-1, 101), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0string__append_k216, env)}),
      _var0,
      VEncodeInt(0l),
      upenv->up->up->up->vars[1]);
 }
}
static void _V0string__append_k214(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0string__append_k214" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0string__append_k214, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0string__append_k214, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn make-string 4 98) (close _V0string__append_k215) (bruijn len 0 0))
    V_CALL(upenv->up->up->up->vars[98], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0string__append_k215, env)}),
      _var0);
 }
}
static void _V0string__append_k213(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0string__append_k213" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0string__append_k213, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0string__append_k213, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn + 3 36) (close _V0string__append_k214) (bruijn ##x.461 1 0) (bruijn ##x.462 0 0))
    V_CALL(upenv->up->up->vars[36], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0string__append_k214, env)}),
      upenv->vars[0],
      _var0);
 }
}
static void _V0string__append_k212(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0string__append_k212" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0string__append_k212, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0string__append_k212, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn string-length 2 104) (close _V0string__append_k213) (bruijn b 1 2))
    V_CALL(upenv->up->vars[104], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0string__append_k213, env)}),
      upenv->vars[2]);
 }
}
static void _V0string__append_k230(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0string__append_k230" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0string__append_k230, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0string__append_k230, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##k.463 12 0) (bruijn str 7 0))
    V_CALL(VGetArg(upenv, 12-1, 0), runtime,
      VGetArg(upenv, 7-1, 0));
 }
}
static void _V0string__append_k229(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0string__append_k229" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0string__append_k229, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0string__append_k229, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn string-copy! 12 101) (close _V0string__append_k230) (bruijn str 6 0) (bruijn ##x.467 0 0) (bruijn c 11 3))
    V_CALL(VGetArg(upenv, 12-1, 101), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0string__append_k230, env)}),
      VGetArg(upenv, 6-1, 0),
      _var0,
      VGetArg(upenv, 11-1, 3));
 }
}
static void _V0string__append_k228(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0string__append_k228" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0string__append_k228, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0string__append_k228, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn + 11 36) (close _V0string__append_k229) (bruijn ##x.468 1 0) (bruijn ##x.469 0 0))
    V_CALL(VGetArg(upenv, 11-1, 36), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0string__append_k229, env)}),
      upenv->vars[0],
      _var0);
 }
}
static void _V0string__append_k227(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0string__append_k227" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0string__append_k227, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0string__append_k227, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn string-length 10 104) (close _V0string__append_k228) (bruijn b 9 2))
    V_CALL(VGetArg(upenv, 10-1, 104), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0string__append_k228, env)}),
      VGetArg(upenv, 9-1, 2));
 }
}
static void _V0string__append_k226(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0string__append_k226" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0string__append_k226, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0string__append_k226, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn string-length 9 104) (close _V0string__append_k227) (bruijn a 8 1))
    V_CALL(VGetArg(upenv, 9-1, 104), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0string__append_k227, env)}),
      VGetArg(upenv, 8-1, 1));
 }
}
static void _V0string__append_k225(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0string__append_k225" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0string__append_k225, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0string__append_k225, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn string-copy! 8 101) (close _V0string__append_k226) (bruijn str 2 0) (bruijn ##x.470 0 0) (bruijn b 7 2))
    V_CALL(VGetArg(upenv, 8-1, 101), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0string__append_k226, env)}),
      upenv->up->vars[0],
      _var0,
      VGetArg(upenv, 7-1, 2));
 }
}
static void _V0string__append_k224(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0string__append_k224" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0string__append_k224, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0string__append_k224, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn string-length 7 104) (close _V0string__append_k225) (bruijn a 6 1))
    V_CALL(VGetArg(upenv, 7-1, 104), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0string__append_k225, env)}),
      VGetArg(upenv, 6-1, 1));
 }
}
static void _V0string__append_k223(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0string__append_k223" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0string__append_k223, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0string__append_k223, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn string-copy! 6 101) (close _V0string__append_k224) (bruijn str 0 0) 0 (bruijn a 5 1))
    V_CALL(VGetArg(upenv, 6-1, 101), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0string__append_k224, env)}),
      _var0,
      VEncodeInt(0l),
      VGetArg(upenv, 5-1, 1));
 }
}
static void _V0string__append_k222(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0string__append_k222" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0string__append_k222, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0string__append_k222, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn make-string 5 98) (close _V0string__append_k223) (bruijn len 0 0))
    V_CALL(VGetArg(upenv, 5-1, 98), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0string__append_k223, env)}),
      _var0);
 }
}
static void _V0string__append_k221(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0string__append_k221" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0string__append_k221, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0string__append_k221, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn + 4 36) (close _V0string__append_k222) (bruijn ##x.471 2 0) (bruijn ##x.472 1 0) (bruijn ##x.473 0 0))
    V_CALL(upenv->up->up->up->vars[36], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0string__append_k222, env)}),
      upenv->up->vars[0],
      upenv->vars[0],
      _var0);
 }
}
static void _V0string__append_k220(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0string__append_k220" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0string__append_k220, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0string__append_k220, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn string-length 3 104) (close _V0string__append_k221) (bruijn c 2 3))
    V_CALL(upenv->up->up->vars[104], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0string__append_k221, env)}),
      upenv->up->vars[3]);
 }
}
static void _V0string__append_k219(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0string__append_k219" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0string__append_k219, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0string__append_k219, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn string-length 2 104) (close _V0string__append_k220) (bruijn b 1 2))
    V_CALL(upenv->up->vars[104], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0string__append_k220, env)}),
      upenv->vars[2]);
 }
}
static void _V0string__append_k248(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0string__append_k248" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0string__append_k248, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0string__append_k248, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##k.474 18 0) (bruijn str 12 0))
    V_CALL(VGetArg(upenv, 18-1, 0), runtime,
      VGetArg(upenv, 12-1, 0));
 }
}
static void _V0string__append_k247(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0string__append_k247" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0string__append_k247, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0string__append_k247, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn string-copy! 18 101) (close _V0string__append_k248) (bruijn str 11 0) (bruijn ##x.479 0 0) (bruijn d 17 4))
    V_CALL(VGetArg(upenv, 18-1, 101), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0string__append_k248, env)}),
      VGetArg(upenv, 11-1, 0),
      _var0,
      VGetArg(upenv, 17-1, 4));
 }
}
static void _V0string__append_k246(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0string__append_k246" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0string__append_k246, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0string__append_k246, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn + 17 36) (close _V0string__append_k247) (bruijn ##x.480 2 0) (bruijn ##x.481 1 0) (bruijn ##x.482 0 0))
    V_CALL(VGetArg(upenv, 17-1, 36), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0string__append_k247, env)}),
      upenv->up->vars[0],
      upenv->vars[0],
      _var0);
 }
}
static void _V0string__append_k245(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0string__append_k245" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0string__append_k245, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0string__append_k245, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn string-length 16 104) (close _V0string__append_k246) (bruijn c 15 3))
    V_CALL(VGetArg(upenv, 16-1, 104), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0string__append_k246, env)}),
      VGetArg(upenv, 15-1, 3));
 }
}
static void _V0string__append_k244(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0string__append_k244" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0string__append_k244, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0string__append_k244, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn string-length 15 104) (close _V0string__append_k245) (bruijn b 14 2))
    V_CALL(VGetArg(upenv, 15-1, 104), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0string__append_k245, env)}),
      VGetArg(upenv, 14-1, 2));
 }
}
static void _V0string__append_k243(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0string__append_k243" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0string__append_k243, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0string__append_k243, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn string-length 14 104) (close _V0string__append_k244) (bruijn a 13 1))
    V_CALL(VGetArg(upenv, 14-1, 104), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0string__append_k244, env)}),
      VGetArg(upenv, 13-1, 1));
 }
}
static void _V0string__append_k242(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0string__append_k242" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0string__append_k242, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0string__append_k242, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn string-copy! 13 101) (close _V0string__append_k243) (bruijn str 6 0) (bruijn ##x.483 0 0) (bruijn c 12 3))
    V_CALL(VGetArg(upenv, 13-1, 101), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0string__append_k243, env)}),
      VGetArg(upenv, 6-1, 0),
      _var0,
      VGetArg(upenv, 12-1, 3));
 }
}
static void _V0string__append_k241(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0string__append_k241" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0string__append_k241, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0string__append_k241, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn + 12 36) (close _V0string__append_k242) (bruijn ##x.484 1 0) (bruijn ##x.485 0 0))
    V_CALL(VGetArg(upenv, 12-1, 36), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0string__append_k242, env)}),
      upenv->vars[0],
      _var0);
 }
}
static void _V0string__append_k240(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0string__append_k240" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0string__append_k240, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0string__append_k240, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn string-length 11 104) (close _V0string__append_k241) (bruijn b 10 2))
    V_CALL(VGetArg(upenv, 11-1, 104), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0string__append_k241, env)}),
      VGetArg(upenv, 10-1, 2));
 }
}
static void _V0string__append_k239(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0string__append_k239" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0string__append_k239, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0string__append_k239, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn string-length 10 104) (close _V0string__append_k240) (bruijn a 9 1))
    V_CALL(VGetArg(upenv, 10-1, 104), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0string__append_k240, env)}),
      VGetArg(upenv, 9-1, 1));
 }
}
static void _V0string__append_k238(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0string__append_k238" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0string__append_k238, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0string__append_k238, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn string-copy! 9 101) (close _V0string__append_k239) (bruijn str 2 0) (bruijn ##x.486 0 0) (bruijn b 8 2))
    V_CALL(VGetArg(upenv, 9-1, 101), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0string__append_k239, env)}),
      upenv->up->vars[0],
      _var0,
      VGetArg(upenv, 8-1, 2));
 }
}
static void _V0string__append_k237(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0string__append_k237" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0string__append_k237, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0string__append_k237, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn string-length 8 104) (close _V0string__append_k238) (bruijn a 7 1))
    V_CALL(VGetArg(upenv, 8-1, 104), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0string__append_k238, env)}),
      VGetArg(upenv, 7-1, 1));
 }
}
static void _V0string__append_k236(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0string__append_k236" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0string__append_k236, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0string__append_k236, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn string-copy! 7 101) (close _V0string__append_k237) (bruijn str 0 0) 0 (bruijn a 6 1))
    V_CALL(VGetArg(upenv, 7-1, 101), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0string__append_k237, env)}),
      _var0,
      VEncodeInt(0l),
      VGetArg(upenv, 6-1, 1));
 }
}
static void _V0string__append_k235(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0string__append_k235" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0string__append_k235, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0string__append_k235, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn make-string 6 98) (close _V0string__append_k236) (bruijn len 0 0))
    V_CALL(VGetArg(upenv, 6-1, 98), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0string__append_k236, env)}),
      _var0);
 }
}
static void _V0string__append_k234(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0string__append_k234" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0string__append_k234, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0string__append_k234, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn + 5 36) (close _V0string__append_k235) (bruijn ##x.487 3 0) (bruijn ##x.488 2 0) (bruijn ##x.489 1 0) (bruijn ##x.490 0 0))
    V_CALL(VGetArg(upenv, 5-1, 36), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0string__append_k235, env)}),
      upenv->up->up->vars[0],
      upenv->up->vars[0],
      upenv->vars[0],
      _var0);
 }
}
static void _V0string__append_k233(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0string__append_k233" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0string__append_k233, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0string__append_k233, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn string-length 4 104) (close _V0string__append_k234) (bruijn d 3 4))
    V_CALL(upenv->up->up->up->vars[104], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0string__append_k234, env)}),
      upenv->up->up->vars[4]);
 }
}
static void _V0string__append_k232(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0string__append_k232" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0string__append_k232, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0string__append_k232, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn string-length 3 104) (close _V0string__append_k233) (bruijn c 2 3))
    V_CALL(upenv->up->up->vars[104], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0string__append_k233, env)}),
      upenv->up->vars[3]);
 }
}
static void _V0string__append_k231(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0string__append_k231" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0string__append_k231, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0string__append_k231, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn string-length 2 104) (close _V0string__append_k232) (bruijn b 1 2))
    V_CALL(upenv->up->vars[104], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0string__append_k232, env)}),
      upenv->vars[2]);
 }
}
__attribute__((used)) static void _V20CaseError__V0string__append_lambda98(VRuntime * runtime, VEnv * upenv, int argc, ...) {
 // (_V0string__append_lambda98 #t (1 ((bruijn string-copy 1 100) (bruijn ##k.455 0 0) (##string ##string.1117))) (2 ((bruijn string-copy 1 100) (bruijn ##k.456 0 0) (bruijn a 0 1))) (3 ((bruijn string-length 1 104) (close _V0string__append_k212) (bruijn a 0 1))) (4 ((bruijn string-length 1 104) (close _V0string__append_k219) (bruijn a 0 1))) (5 ((bruijn string-length 1 104) (close _V0string__append_k231) (bruijn a 0 1))) (1 + ((bruijn fold-right 1 89) (bruijn ##k.491 0 0) (bruijn string-append 1 110) (##string ##string.1117) (bruijn strs 0 1))))
 VError("Not enough arguments to _V0string__append_lambda98, got ~D~N"
 "-- expected 1~N"
 "-- expected 2~N"
 "-- expected 3~N"
 "-- expected 4~N"
 "-- expected 5~N"
 "-- expected 1 or more~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V0string__append_lambda98(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V20Case0__V0string__append_lambda98" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case0__V0string__append_lambda98, runtime, upenv, 1, argc, _var0) {
  // ((bruijn string-copy 1 100) (bruijn ##k.455 0 0) (##string ##string.1117))
    V_CALL(upenv->vars[100], runtime,
      _var0,
      VEncodePointer(&_V10string_D1117.sym, VPOINTER_OTHER));
 }
}
__attribute__((used)) static void _V20Case1__V0string__append_lambda98(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V20Case1__V0string__append_lambda98" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case1__V0string__append_lambda98, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn string-copy 1 100) (bruijn ##k.456 0 0) (bruijn a 0 1))
    V_CALL(upenv->vars[100], runtime,
      _var0,
      _var1);
 }
}
__attribute__((used)) static void _V20Case2__V0string__append_lambda98(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V20Case2__V0string__append_lambda98" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case2__V0string__append_lambda98, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn string-length 1 104) (close _V0string__append_k212) (bruijn a 0 1))
    V_CALL(upenv->vars[104], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0string__append_k212, env)}),
      _var1);
 }
}
__attribute__((used)) static void _V20Case3__V0string__append_lambda98(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V20Case3__V0string__append_lambda98" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case3__V0string__append_lambda98, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // ((bruijn string-length 1 104) (close _V0string__append_k219) (bruijn a 0 1))
    V_CALL(upenv->vars[104], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0string__append_k219, env)}),
      _var1);
 }
}
__attribute__((used)) static void _V20Case4__V0string__append_lambda98(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4) {
 static VDebugInfo dbg = { "_V20Case4__V0string__append_lambda98" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case4__V0string__append_lambda98, runtime, upenv, 5, argc, _var0, _var1, _var2, _var3, _var4) {
  struct { VEnv env; VWORD argv[5]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 5, 5, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  env->vars[4] = _var4;
  // ((bruijn string-length 1 104) (close _V0string__append_k231) (bruijn a 0 1))
    V_CALL(upenv->vars[104], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0string__append_k231, env)}),
      _var1);
 }
}
__attribute__((used)) static void _V20Case5__V0string__append_lambda98(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, ...) {
 static VDebugInfo dbg = { "_V20Case5__V0string__append_lambda98" };
 VRecordCall2(runtime, &dbg);
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 1, argc, _var0);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case5__V0string__append_lambda98, runtime, upenv, 1, argc, _var0, _varargs) {
  // ((bruijn fold-right 1 89) (bruijn ##k.491 0 0) (bruijn string-append 1 110) (##string ##string.1117) (bruijn strs 0 1))
    V_CALL(upenv->vars[89], runtime,
      _var0,
      upenv->vars[110],
      VEncodePointer(&_V10string_D1117.sym, VPOINTER_OTHER),
      _varargs);
 }
}
void _V0string__append_lambda98(VRuntime * runtime, VEnv * upenv, int argc, ...);
asm(
".intel_syntax noprefix\n"
#ifdef __linux__
".type _V0string__append_lambda98, @function\n"
#endif
"_V0string__append_lambda98:\n"
"    cmp " ARGC_REG ", 1\n"
"    je _V20Case0__V0string__append_lambda98\n"
"    cmp " ARGC_REG ", 2\n"
"    je _V20Case1__V0string__append_lambda98\n"
"    cmp " ARGC_REG ", 3\n"
"    je _V20Case2__V0string__append_lambda98\n"
"    cmp " ARGC_REG ", 4\n"
"    je _V20Case3__V0string__append_lambda98\n"
"    cmp " ARGC_REG ", 5\n"
"    je _V20Case4__V0string__append_lambda98\n"
"    cmp " ARGC_REG ", 1\n"
"    jge _V20Case5__V0string__append_lambda98\n"
"    jmp _V20CaseError__V0string__append_lambda98\n"
);
static void _V0vector_lambda99(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, ...) {
 static VDebugInfo dbg = { "_V0vector_lambda99" };
 VRecordCall2(runtime, &dbg);
 if(argc < 1) {
  VError("Not enough arguments to _V0vector_lambda99, got ~D~N"
  "-- expected 1 or more~N"
  , argc);
 }
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 1, argc, _var0);
 V_GC_CHECK2_VARARGS((VFunc)_V0vector_lambda99, runtime, upenv, 1, argc, _var0, _varargs) {
  // ((bruijn list->vector 1 111) (bruijn ##k.492 0 0) (bruijn args 0 1))
    V_CALL(upenv->vars[111], runtime,
      _var0,
      _varargs);
 }
}
static void _V0loop_k253(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k253" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k253, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k253, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 5 0) (bruijn ##k.494 4 0) (bruijn ##x.496 1 0) (bruijn ##x.497 0 0))
    V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      upenv->up->up->up->vars[0],
      upenv->vars[0],
      _var0);
 }
}
static void _V0loop_k252(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k252" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k252, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k252, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn - 7 37) (close _V0loop_k253) (bruijn i 3 2) 1)
    V_CALL(VGetArg(upenv, 7-1, 37), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k253, env)}),
      upenv->up->up->vars[2],
      VEncodeInt(1l));
 }
}
static void _V0loop_k251(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k251" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k251, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k251, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn cons 6 46) (close _V0loop_k252) (bruijn ##x.498 0 0) (bruijn acc 2 1))
    V_CALL(VGetArg(upenv, 6-1, 46), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k252, env)}),
      _var0,
      upenv->up->vars[1]);
 }
}
static void _V0loop_k250(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k250" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k250, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k250, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.495 0 0) ((bruijn ##k.494 1 0) (bruijn acc 1 1)) ((bruijn vector-ref 5 113) (close _V0loop_k251) (bruijn vec 4 1) (bruijn i 1 2)))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->vars[0], runtime,
      upenv->vars[1]);
} else {
    V_CALL(VGetArg(upenv, 5-1, 113), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k251, env)}),
      upenv->up->up->up->vars[1],
      upenv->vars[2]);
}
 }
}
static void _V0loop_lambda101(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0loop_lambda101" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0loop_lambda101, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda101, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn < 4 23) (close _V0loop_k250) (bruijn i 0 2) 0)
    V_CALL(upenv->up->up->up->vars[23], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k250, env)}),
      _var2,
      VEncodeInt(0l));
 }
}
static void _V0vector___Glist_k254(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vector___Glist_k254" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vector___Glist_k254, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vector___Glist_k254, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 1 0) (bruijn ##k.493 3 0) '() (bruijn ##x.499 0 0))
    V_CALL(upenv->vars[0], runtime,
      upenv->up->up->vars[0],
      VNULL,
      _var0);
 }
}
static void _V0vector___Glist_k249(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vector___Glist_k249" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vector___Glist_k249, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vector___Glist_k249, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (letrec 1 ((close _V0loop_lambda101)) ((bruijn - 3 37) (close _V0vector___Glist_k254) (bruijn len 1 0) 1))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda101, env)});
    V_CALL(upenv->up->up->vars[37], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vector___Glist_k254, env)}),
      upenv->vars[0],
      VEncodeInt(1l));
    }
 }
}
static void _V0vector___Glist_lambda100(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0vector___Glist_lambda100" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0vector___Glist_lambda100, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vector___Glist_lambda100, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn vector-length 1 115) (close _V0vector___Glist_k249) (bruijn vec 0 1))
    V_CALL(upenv->vars[115], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vector___Glist_k249, env)}),
      _var1);
 }
}
static void _V0loop_k259(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k259" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k259, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k259, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 5 0) (bruijn ##k.501 4 0) (bruijn ##x.504 0 0))
    V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      upenv->up->up->up->vars[0],
      _var0);
 }
}
static void _V0loop_k258(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k258" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k258, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k258, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn + 7 36) (close _V0loop_k259) (bruijn i 3 1) 1)
    V_CALL(VGetArg(upenv, 7-1, 36), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k259, env)}),
      upenv->up->up->vars[1],
      VEncodeInt(1l));
 }
}
static void _V0loop_k257(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k257" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k257, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k257, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn f 5 1) (close _V0loop_k258) (bruijn ##x.505 0 0))
    V_CALL(VGetArg(upenv, 5-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k258, env)}),
      _var0);
 }
}
static void _V0loop_k256(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k256" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k256, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k256, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.502 0 0) ((bruijn vector-ref 5 113) (close _V0loop_k257) (bruijn xs 4 2) (bruijn i 1 1)) ((bruijn ##k.501 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 5-1, 113), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k257, env)}),
      upenv->up->up->up->vars[2],
      upenv->vars[1]);
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0loop_lambda103(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0loop_lambda103" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0loop_lambda103, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda103, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn < 4 23) (close _V0loop_k256) (bruijn i 0 1) (bruijn len 2 0))
    V_CALL(upenv->up->up->up->vars[23], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k256, env)}),
      _var1,
      upenv->up->vars[0]);
 }
}
static void _V0vector__for__each_k255(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vector__for__each_k255" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vector__for__each_k255, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vector__for__each_k255, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (letrec 1 ((close _V0loop_lambda103)) ((bruijn loop 0 0) (bruijn ##k.500 2 0) 0))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda103, env)});
    V_CALL(env->vars[0], runtime,
      upenv->up->vars[0],
      VEncodeInt(0l));
    }
 }
}
static void _V0loop_k265(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k265" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k265, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k265, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 6 0) (bruijn ##k.507 5 0) (bruijn ##x.510 0 0))
    V_CALL(VGetArg(upenv, 6-1, 0), runtime,
      VGetArg(upenv, 5-1, 0),
      _var0);
 }
}
static void _V0loop_k264(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k264" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k264, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k264, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn + 8 36) (close _V0loop_k265) (bruijn i 4 1) 1)
    V_CALL(VGetArg(upenv, 8-1, 36), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k265, env)}),
      upenv->up->up->up->vars[1],
      VEncodeInt(1l));
 }
}
static void _V0loop_k263(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k263" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k263, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k263, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn f 6 1) (close _V0loop_k264) (bruijn ##x.511 1 0) (bruijn ##x.512 0 0))
    V_CALL(VGetArg(upenv, 6-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k264, env)}),
      upenv->vars[0],
      _var0);
 }
}
static void _V0loop_k262(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k262" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k262, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k262, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn vector-ref 6 113) (close _V0loop_k263) (bruijn ys 5 3) (bruijn i 2 1))
    V_CALL(VGetArg(upenv, 6-1, 113), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k263, env)}),
      VGetArg(upenv, 5-1, 3),
      upenv->up->vars[1]);
 }
}
static void _V0loop_k261(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k261" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k261, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k261, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.508 0 0) ((bruijn vector-ref 5 113) (close _V0loop_k262) (bruijn xs 4 2) (bruijn i 1 1)) ((bruijn ##k.507 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 5-1, 113), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k262, env)}),
      upenv->up->up->up->vars[2],
      upenv->vars[1]);
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0loop_lambda104(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0loop_lambda104" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0loop_lambda104, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda104, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn < 4 23) (close _V0loop_k261) (bruijn i 0 1) (bruijn len 2 0))
    V_CALL(upenv->up->up->up->vars[23], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k261, env)}),
      _var1,
      upenv->up->vars[0]);
 }
}
static void _V0vector__for__each_k260(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vector__for__each_k260" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vector__for__each_k260, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vector__for__each_k260, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (letrec 1 ((close _V0loop_lambda104)) ((bruijn loop 0 0) (bruijn ##k.506 2 0) 0))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda104, env)});
    V_CALL(env->vars[0], runtime,
      upenv->up->vars[0],
      VEncodeInt(0l));
    }
 }
}
static void _V0loop_k272(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k272" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k272, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k272, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 7 0) (bruijn ##k.514 6 0) (bruijn ##x.517 0 0))
    V_CALL(VGetArg(upenv, 7-1, 0), runtime,
      VGetArg(upenv, 6-1, 0),
      _var0);
 }
}
static void _V0loop_k271(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k271" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k271, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k271, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn + 9 36) (close _V0loop_k272) (bruijn i 5 1) 1)
    V_CALL(VGetArg(upenv, 9-1, 36), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k272, env)}),
      VGetArg(upenv, 5-1, 1),
      VEncodeInt(1l));
 }
}
static void _V0loop_k270(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k270" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k270, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k270, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn f 7 1) (close _V0loop_k271) (bruijn ##x.518 2 0) (bruijn ##x.519 1 0) (bruijn ##x.520 0 0))
    V_CALL(VGetArg(upenv, 7-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k271, env)}),
      upenv->up->vars[0],
      upenv->vars[0],
      _var0);
 }
}
static void _V0loop_k269(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k269" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k269, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k269, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn vector-ref 7 113) (close _V0loop_k270) (bruijn zs 6 4) (bruijn i 3 1))
    V_CALL(VGetArg(upenv, 7-1, 113), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k270, env)}),
      VGetArg(upenv, 6-1, 4),
      upenv->up->up->vars[1]);
 }
}
static void _V0loop_k268(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k268" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k268, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k268, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn vector-ref 6 113) (close _V0loop_k269) (bruijn ys 5 3) (bruijn i 2 1))
    V_CALL(VGetArg(upenv, 6-1, 113), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k269, env)}),
      VGetArg(upenv, 5-1, 3),
      upenv->up->vars[1]);
 }
}
static void _V0loop_k267(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k267" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k267, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k267, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.515 0 0) ((bruijn vector-ref 5 113) (close _V0loop_k268) (bruijn xs 4 2) (bruijn i 1 1)) ((bruijn ##k.514 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 5-1, 113), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k268, env)}),
      upenv->up->up->up->vars[2],
      upenv->vars[1]);
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0loop_lambda105(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0loop_lambda105" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0loop_lambda105, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda105, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn < 4 23) (close _V0loop_k267) (bruijn i 0 1) (bruijn len 2 0))
    V_CALL(upenv->up->up->up->vars[23], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k267, env)}),
      _var1,
      upenv->up->vars[0]);
 }
}
static void _V0vector__for__each_k266(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vector__for__each_k266" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vector__for__each_k266, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vector__for__each_k266, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (letrec 1 ((close _V0loop_lambda105)) ((bruijn loop 0 0) (bruijn ##k.513 2 0) 0))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda105, env)});
    V_CALL(env->vars[0], runtime,
      upenv->up->vars[0],
      VEncodeInt(0l));
    }
 }
}
static void _V0loop_k278(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k278" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k278, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k278, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 5 0) (bruijn ##k.522 4 0) (bruijn ##x.525 0 0))
    V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      upenv->up->up->up->vars[0],
      _var0);
 }
}
static void _V0loop_k277(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k277" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k277, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k277, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn + 8 36) (close _V0loop_k278) (bruijn i 3 1) 1)
    V_CALL(VGetArg(upenv, 8-1, 36), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k278, env)}),
      upenv->up->up->vars[1],
      VEncodeInt(1l));
 }
}
static void _V0loop_k276(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k276" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k276, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k276, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn apply 7 155) (close _V0loop_k277) (bruijn f 6 1) (bruijn ##x.526 0 0))
    V_CALL(VGetArg(upenv, 7-1, 155), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k277, env)}),
      VGetArg(upenv, 6-1, 1),
      _var0);
 }
}
static void _V0loop_lambda107(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0loop_lambda107" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0loop_lambda107, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda107, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn vector-ref 7 113) (bruijn ##k.527 0 0) (bruijn vec 0 1) (bruijn i 2 1))
    V_CALL(VGetArg(upenv, 7-1, 113), runtime,
      _var0,
      _var1,
      upenv->up->vars[1]);
 }
}
static void _V0loop_k275(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k275" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k275, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k275, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.523 0 0) ((bruijn map 6 87) (close _V0loop_k276) (close _V0loop_lambda107) (bruijn vecs 5 2)) ((bruijn ##k.522 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 6-1, 87), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k276, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda107, env)}),
      VGetArg(upenv, 5-1, 2));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0loop_lambda106(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0loop_lambda106" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0loop_lambda106, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda106, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn < 5 23) (close _V0loop_k275) (bruijn i 0 1) (bruijn len 2 0))
    V_CALL(VGetArg(upenv, 5-1, 23), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k275, env)}),
      _var1,
      upenv->up->vars[0]);
 }
}
static void _V0vector__for__each_k274(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vector__for__each_k274" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vector__for__each_k274, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vector__for__each_k274, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (letrec 1 ((close _V0loop_lambda106)) ((bruijn loop 0 0) (bruijn ##k.521 3 0) 0))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda106, env)});
    V_CALL(env->vars[0], runtime,
      upenv->up->up->vars[0],
      VEncodeInt(0l));
    }
 }
}
static void _V0vector__for__each_k273(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vector__for__each_k273" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vector__for__each_k273, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vector__for__each_k273, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn vector-length 2 115) (close _V0vector__for__each_k274) (bruijn ##x.528 0 0))
    V_CALL(upenv->up->vars[115], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vector__for__each_k274, env)}),
      _var0);
 }
}
__attribute__((used)) static void _V20CaseError__V0vector__for__each_lambda102(VRuntime * runtime, VEnv * upenv, int argc, ...) {
 // (_V0vector__for__each_lambda102 #t (3 ((bruijn vector-length 1 115) (close _V0vector__for__each_k255) (bruijn xs 0 2))) (4 ((bruijn vector-length 1 115) (close _V0vector__for__each_k260) (bruijn xs 0 2))) (5 ((bruijn vector-length 1 115) (close _V0vector__for__each_k266) (bruijn xs 0 2))) (2 + ((bruijn car 1 47) (close _V0vector__for__each_k273) (bruijn vecs 0 2))))
 VError("Not enough arguments to _V0vector__for__each_lambda102, got ~D~N"
 "-- expected 3~N"
 "-- expected 4~N"
 "-- expected 5~N"
 "-- expected 2 or more~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V0vector__for__each_lambda102(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V20Case0__V0vector__for__each_lambda102" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case0__V0vector__for__each_lambda102, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn vector-length 1 115) (close _V0vector__for__each_k255) (bruijn xs 0 2))
    V_CALL(upenv->vars[115], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vector__for__each_k255, env)}),
      _var2);
 }
}
__attribute__((used)) static void _V20Case1__V0vector__for__each_lambda102(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V20Case1__V0vector__for__each_lambda102" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case1__V0vector__for__each_lambda102, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // ((bruijn vector-length 1 115) (close _V0vector__for__each_k260) (bruijn xs 0 2))
    V_CALL(upenv->vars[115], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vector__for__each_k260, env)}),
      _var2);
 }
}
__attribute__((used)) static void _V20Case2__V0vector__for__each_lambda102(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4) {
 static VDebugInfo dbg = { "_V20Case2__V0vector__for__each_lambda102" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case2__V0vector__for__each_lambda102, runtime, upenv, 5, argc, _var0, _var1, _var2, _var3, _var4) {
  struct { VEnv env; VWORD argv[5]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 5, 5, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  env->vars[4] = _var4;
  // ((bruijn vector-length 1 115) (close _V0vector__for__each_k266) (bruijn xs 0 2))
    V_CALL(upenv->vars[115], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vector__for__each_k266, env)}),
      _var2);
 }
}
__attribute__((used)) static void _V20Case3__V0vector__for__each_lambda102(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, ...) {
 static VDebugInfo dbg = { "_V20Case3__V0vector__for__each_lambda102" };
 VRecordCall2(runtime, &dbg);
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 2, argc, _var1);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case3__V0vector__for__each_lambda102, runtime, upenv, 2, argc, _var0, _var1, _varargs) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _varargs;
  // ((bruijn car 1 47) (close _V0vector__for__each_k273) (bruijn vecs 0 2))
    V_CALL(upenv->vars[47], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vector__for__each_k273, env)}),
      _varargs);
 }
}
void _V0vector__for__each_lambda102(VRuntime * runtime, VEnv * upenv, int argc, ...);
asm(
".intel_syntax noprefix\n"
#ifdef __linux__
".type _V0vector__for__each_lambda102, @function\n"
#endif
"_V0vector__for__each_lambda102:\n"
"    cmp " ARGC_REG ", 3\n"
"    je _V20Case0__V0vector__for__each_lambda102\n"
"    cmp " ARGC_REG ", 4\n"
"    je _V20Case1__V0vector__for__each_lambda102\n"
"    cmp " ARGC_REG ", 5\n"
"    je _V20Case2__V0vector__for__each_lambda102\n"
"    cmp " ARGC_REG ", 2\n"
"    jge _V20Case3__V0vector__for__each_lambda102\n"
"    jmp _V20CaseError__V0vector__for__each_lambda102\n"
);
__attribute__((used)) static void _V20CaseError__V0make__hash__table_lambda108(VRuntime * runtime, VEnv * upenv, int argc, ...) {
 // (_V0make__hash__table_lambda108 #t (1 (##vcore.make-hash-table (bruijn ##k.529 0 0) (##intrinsic ##vcore.eq?) #f 32)) (2 (##vcore.make-hash-table (bruijn ##k.530 0 0) (bruijn eq 0 1) #f 32)) (3 (##vcore.make-hash-table (bruijn ##k.531 0 0) (bruijn eq 0 1) (bruijn hash 0 2) 32)) (4 (##vcore.make-hash-table (bruijn ##k.532 0 0) (bruijn eq 0 1) (bruijn hash 0 2) (bruijn len 0 3))))
 VError("Not enough arguments to _V0make__hash__table_lambda108, got ~D~N"
 "-- expected 1~N"
 "-- expected 2~N"
 "-- expected 3~N"
 "-- expected 4~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V0make__hash__table_lambda108(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V20Case0__V0make__hash__table_lambda108" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case0__V0make__hash__table_lambda108, runtime, upenv, 1, argc, _var0) {
  // (##vcore.make-hash-table (bruijn ##k.529 0 0) (##intrinsic ##vcore.eq?) #f 32)
    V_CALL_FUNC(VMakeHashTable, NULL, runtime,
      _var0,
      _V40_V10vcore_Deq_Q,
      VEncodeBool(false),
      VEncodeInt(32l));
 }
}
__attribute__((used)) static void _V20Case1__V0make__hash__table_lambda108(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V20Case1__V0make__hash__table_lambda108" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case1__V0make__hash__table_lambda108, runtime, upenv, 2, argc, _var0, _var1) {
  // (##vcore.make-hash-table (bruijn ##k.530 0 0) (bruijn eq 0 1) #f 32)
    V_CALL_FUNC(VMakeHashTable, NULL, runtime,
      _var0,
      _var1,
      VEncodeBool(false),
      VEncodeInt(32l));
 }
}
__attribute__((used)) static void _V20Case2__V0make__hash__table_lambda108(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V20Case2__V0make__hash__table_lambda108" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case2__V0make__hash__table_lambda108, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  // (##vcore.make-hash-table (bruijn ##k.531 0 0) (bruijn eq 0 1) (bruijn hash 0 2) 32)
    V_CALL_FUNC(VMakeHashTable, NULL, runtime,
      _var0,
      _var1,
      _var2,
      VEncodeInt(32l));
 }
}
__attribute__((used)) static void _V20Case3__V0make__hash__table_lambda108(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V20Case3__V0make__hash__table_lambda108" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case3__V0make__hash__table_lambda108, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  // (##vcore.make-hash-table (bruijn ##k.532 0 0) (bruijn eq 0 1) (bruijn hash 0 2) (bruijn len 0 3))
    V_CALL_FUNC(VMakeHashTable, NULL, runtime,
      _var0,
      _var1,
      _var2,
      _var3);
 }
}
void _V0make__hash__table_lambda108(VRuntime * runtime, VEnv * upenv, int argc, ...);
asm(
".intel_syntax noprefix\n"
#ifdef __linux__
".type _V0make__hash__table_lambda108, @function\n"
#endif
"_V0make__hash__table_lambda108:\n"
"    cmp " ARGC_REG ", 1\n"
"    je _V20Case0__V0make__hash__table_lambda108\n"
"    cmp " ARGC_REG ", 2\n"
"    je _V20Case1__V0make__hash__table_lambda108\n"
"    cmp " ARGC_REG ", 3\n"
"    je _V20Case2__V0make__hash__table_lambda108\n"
"    cmp " ARGC_REG ", 4\n"
"    je _V20Case3__V0make__hash__table_lambda108\n"
"    jmp _V20CaseError__V0make__hash__table_lambda108\n"
);
static void _V0hash__table__ref_lambda110(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0hash__table__ref_lambda110" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0hash__table__ref_lambda110, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0hash__table__ref_lambda110, runtime, upenv, 1, argc, _var0) {
  // ((bruijn error 2 177) (bruijn ##k.534 0 0) (##string ##string.1118) (bruijn key 1 2))
    V_CALL(upenv->up->vars[177], runtime,
      _var0,
      VEncodePointer(&_V10string_D1118.sym, VPOINTER_OTHER),
      upenv->vars[2]);
 }
}
__attribute__((used)) static void _V20CaseError__V0hash__table__ref_lambda109(VRuntime * runtime, VEnv * upenv, int argc, ...) {
 // (_V0hash__table__ref_lambda109 #t (3 (##vcore.hash-table-ref (bruijn ##k.533 0 0) (bruijn table 0 1) (bruijn key 0 2) (close _V0hash__table__ref_lambda110))) (4 (##vcore.hash-table-ref (bruijn ##k.535 0 0) (bruijn table 0 1) (bruijn key 0 2) (bruijn thunk 0 3))))
 VError("Not enough arguments to _V0hash__table__ref_lambda109, got ~D~N"
 "-- expected 3~N"
 "-- expected 4~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V0hash__table__ref_lambda109(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V20Case0__V0hash__table__ref_lambda109" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case0__V0hash__table__ref_lambda109, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // (##vcore.hash-table-ref (bruijn ##k.533 0 0) (bruijn table 0 1) (bruijn key 0 2) (close _V0hash__table__ref_lambda110))
    V_CALL_FUNC(VHashTableRef, NULL, runtime,
      _var0,
      _var1,
      _var2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0hash__table__ref_lambda110, env)}));
 }
}
__attribute__((used)) static void _V20Case1__V0hash__table__ref_lambda109(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V20Case1__V0hash__table__ref_lambda109" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case1__V0hash__table__ref_lambda109, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  // (##vcore.hash-table-ref (bruijn ##k.535 0 0) (bruijn table 0 1) (bruijn key 0 2) (bruijn thunk 0 3))
    V_CALL_FUNC(VHashTableRef, NULL, runtime,
      _var0,
      _var1,
      _var2,
      _var3);
 }
}
void _V0hash__table__ref_lambda109(VRuntime * runtime, VEnv * upenv, int argc, ...);
asm(
".intel_syntax noprefix\n"
#ifdef __linux__
".type _V0hash__table__ref_lambda109, @function\n"
#endif
"_V0hash__table__ref_lambda109:\n"
"    cmp " ARGC_REG ", 3\n"
"    je _V20Case0__V0hash__table__ref_lambda109\n"
"    cmp " ARGC_REG ", 4\n"
"    je _V20Case1__V0hash__table__ref_lambda109\n"
"    jmp _V20CaseError__V0hash__table__ref_lambda109\n"
);
static void _V0try__or__gc_lambda113(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0try__or__gc_lambda113" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0try__or__gc_lambda113, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0try__or__gc_lambda113, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  // (if (bruijn ok 0 2) ((bruijn ##k.540 0 0) (bruijn ret 0 1)) ((bruijn error 4 177) (bruijn ##k.540 0 0) (bruijn msg 3 2)))
if(VDecodeBool(
_var2)) {
    V_CALL(_var0, runtime,
      _var1);
} else {
    V_CALL(upenv->up->up->up->vars[177], runtime,
      _var0,
      upenv->up->up->vars[2]);
}
 }
}
static void _V0try__or__gc_k279(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0try__or__gc_k279" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0try__or__gc_k279, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0try__or__gc_k279, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn call-with-values 3 154) (bruijn ##k.538 1 0) (bruijn thunk 2 1) (close _V0try__or__gc_lambda113))
    V_CALL(upenv->up->up->vars[154], runtime,
      upenv->vars[0],
      upenv->up->vars[1],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0try__or__gc_lambda113, env)}));
 }
}
static void _V0try__or__gc_lambda112(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0try__or__gc_lambda112" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0try__or__gc_lambda112, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0try__or__gc_lambda112, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // (if (bruijn ok 0 2) ((bruijn ##k.538 0 0) (bruijn ret 0 1)) (##vcore.garbage-collect (close _V0try__or__gc_k279) #t))
if(VDecodeBool(
_var2)) {
    V_CALL(_var0, runtime,
      _var1);
} else {
    V_CALL_FUNC(VGarbageCollect, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0try__or__gc_k279, env)}),
      VEncodeBool(true));
}
 }
}
static void _V0try__or__gc_lambda111(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0try__or__gc_lambda111" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0try__or__gc_lambda111, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0try__or__gc_lambda111, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn call-with-values 1 154) (bruijn ##k.537 0 0) (bruijn thunk 0 1) (close _V0try__or__gc_lambda112))
    V_CALL(upenv->vars[154], runtime,
      _var0,
      _var1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0try__or__gc_lambda112, env)}));
 }
}
static void _V0close__port_k280(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0close__port_k280" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0close__port_k280, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0close__port_k280, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.542 0 0) (##vcore.finalize! (bruijn ##k.541 1 0) (bruijn port 1 1)) (##vcore.close-stream (bruijn ##k.541 1 0) (bruijn port 1 1)))
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
static void _V0close__port_lambda114(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0close__port_lambda114" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0close__port_lambda114, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0close__port_lambda114, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (##vcore.has-finalizer? (close _V0close__port_k280) (bruijn port 0 1))
    V_CALL_FUNC(VHasFinalizer, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0close__port_k280, env)}),
      _var1);
 }
}
static void _V0open__input__file__impl_lambda116(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0open__input__file__impl_lambda116" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0open__input__file__impl_lambda116, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0open__input__file__impl_lambda116, runtime, upenv, 1, argc, _var0) {
  // (##vcore.open-input-stream (bruijn ##k.544 0 0) (bruijn path 1 1))
    V_CALL_FUNC(VOpenInputStream2, NULL, runtime,
      _var0,
      upenv->vars[1]);
 }
}
static void _V0open__input__file__impl_k281(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0open__input__file__impl_k281" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0open__input__file__impl_k281, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0open__input__file__impl_k281, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ret 1 1) (##vcore.set-finalizer! (bruijn ##k.547 0 0) (bruijn ret 1 1) (##intrinsic ##vcore.close-stream)) ((bruijn ##k.547 0 0) #f))
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
static void _V0open__input__file__impl_k282(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0open__input__file__impl_k282" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0open__input__file__impl_k282, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0open__input__file__impl_k282, runtime, upenv, 1, argc, _var0) {
  // ((bruijn values 3 156) (bruijn ##k.545 1 0) (bruijn ret 1 1) (bruijn ok 1 2))
    V_CALL(upenv->up->up->vars[156], runtime,
      upenv->vars[0],
      upenv->vars[1],
      upenv->vars[2]);
 }
}
static void _V0open__input__file__impl_lambda117(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0open__input__file__impl_lambda117" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0open__input__file__impl_lambda117, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0open__input__file__impl_lambda117, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((close _V0open__input__file__impl_k281) (close _V0open__input__file__impl_k282))
    V_CALL_FUNC(_V0open__input__file__impl_k281, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0open__input__file__impl_k282, env)}));
 }
}
static void _V0open__input__file__impl_lambda115(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0open__input__file__impl_lambda115" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0open__input__file__impl_lambda115, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0open__input__file__impl_lambda115, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn call-with-values 1 154) (bruijn ##k.543 0 0) (close _V0open__input__file__impl_lambda116) (close _V0open__input__file__impl_lambda117))
    V_CALL(upenv->vars[154], runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0open__input__file__impl_lambda116, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0open__input__file__impl_lambda117, env)}));
 }
}
static void _V0open__output__file__impl_lambda119(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0open__output__file__impl_lambda119" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0open__output__file__impl_lambda119, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0open__output__file__impl_lambda119, runtime, upenv, 1, argc, _var0) {
  // (##vcore.open-output-stream (bruijn ##k.549 0 0) (bruijn path 1 1))
    V_CALL_FUNC(VOpenOutputStream2, NULL, runtime,
      _var0,
      upenv->vars[1]);
 }
}
static void _V0open__output__file__impl_k283(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0open__output__file__impl_k283" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0open__output__file__impl_k283, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0open__output__file__impl_k283, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ret 1 1) (##vcore.set-finalizer! (bruijn ##k.552 0 0) (bruijn ret 1 1) (##intrinsic ##vcore.close-stream)) ((bruijn ##k.552 0 0) #f))
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
static void _V0open__output__file__impl_k284(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0open__output__file__impl_k284" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0open__output__file__impl_k284, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0open__output__file__impl_k284, runtime, upenv, 1, argc, _var0) {
  // ((bruijn values 3 156) (bruijn ##k.550 1 0) (bruijn ret 1 1) (bruijn ok 1 2))
    V_CALL(upenv->up->up->vars[156], runtime,
      upenv->vars[0],
      upenv->vars[1],
      upenv->vars[2]);
 }
}
static void _V0open__output__file__impl_lambda120(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0open__output__file__impl_lambda120" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0open__output__file__impl_lambda120, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0open__output__file__impl_lambda120, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((close _V0open__output__file__impl_k283) (close _V0open__output__file__impl_k284))
    V_CALL_FUNC(_V0open__output__file__impl_k283, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0open__output__file__impl_k284, env)}));
 }
}
static void _V0open__output__file__impl_lambda118(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0open__output__file__impl_lambda118" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0open__output__file__impl_lambda118, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0open__output__file__impl_lambda118, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn call-with-values 1 154) (bruijn ##k.548 0 0) (close _V0open__output__file__impl_lambda119) (close _V0open__output__file__impl_lambda120))
    V_CALL(upenv->vars[154], runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0open__output__file__impl_lambda119, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0open__output__file__impl_lambda120, env)}));
 }
}
static void _V0open__output__string__impl_k285(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0open__output__string__impl_k285" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0open__output__string__impl_k285, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0open__output__string__impl_k285, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ret 1 1) (##vcore.set-finalizer! (bruijn ##k.557 0 0) (bruijn ret 1 1) (##intrinsic ##vcore.close-stream)) ((bruijn ##k.557 0 0) #f))
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
static void _V0open__output__string__impl_k286(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0open__output__string__impl_k286" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0open__output__string__impl_k286, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0open__output__string__impl_k286, runtime, upenv, 1, argc, _var0) {
  // ((bruijn values 3 156) (bruijn ##k.555 1 0) (bruijn ret 1 1) (bruijn ok 1 2))
    V_CALL(upenv->up->up->vars[156], runtime,
      upenv->vars[0],
      upenv->vars[1],
      upenv->vars[2]);
 }
}
static void _V0open__output__string__impl_lambda122(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0open__output__string__impl_lambda122" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0open__output__string__impl_lambda122, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0open__output__string__impl_lambda122, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((close _V0open__output__string__impl_k285) (close _V0open__output__string__impl_k286))
    V_CALL_FUNC(_V0open__output__string__impl_k285, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0open__output__string__impl_k286, env)}));
 }
}
static void _V0open__output__string__impl_lambda121(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0open__output__string__impl_lambda121" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0open__output__string__impl_lambda121, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0open__output__string__impl_lambda121, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn call-with-values 1 154) (bruijn ##k.553 0 0) (##intrinsic ##vcore.open-output-string) (close _V0open__output__string__impl_lambda122))
    V_CALL(upenv->vars[154], runtime,
      _var0,
      _V40_V10vcore_Dopen__output__string,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0open__output__string__impl_lambda122, env)}));
 }
}
static void _V0open__input__file_lambda124(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0open__input__file_lambda124" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0open__input__file_lambda124, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0open__input__file_lambda124, runtime, upenv, 1, argc, _var0) {
  // ((bruijn open-input-file-impl 2 134) (bruijn ##k.559 0 0) (bruijn path 1 1))
    V_CALL(upenv->up->vars[134], runtime,
      _var0,
      upenv->vars[1]);
 }
}
static void _V0open__input__file_lambda123(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0open__input__file_lambda123" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0open__input__file_lambda123, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0open__input__file_lambda123, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn try-or-gc 1 132) (bruijn ##k.558 0 0) (close _V0open__input__file_lambda124) (##string ##string.1119))
    V_CALL(upenv->vars[132], runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0open__input__file_lambda124, env)}),
      VEncodePointer(&_V10string_D1119.sym, VPOINTER_OTHER));
 }
}
static void _V0open__output__file_lambda126(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0open__output__file_lambda126" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0open__output__file_lambda126, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0open__output__file_lambda126, runtime, upenv, 1, argc, _var0) {
  // ((bruijn open-output-file-impl 2 135) (bruijn ##k.561 0 0) (bruijn path 1 1))
    V_CALL(upenv->up->vars[135], runtime,
      _var0,
      upenv->vars[1]);
 }
}
static void _V0open__output__file_lambda125(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0open__output__file_lambda125" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0open__output__file_lambda125, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0open__output__file_lambda125, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn try-or-gc 1 132) (bruijn ##k.560 0 0) (close _V0open__output__file_lambda126) (##string ##string.1120))
    V_CALL(upenv->vars[132], runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0open__output__file_lambda126, env)}),
      VEncodePointer(&_V10string_D1120.sym, VPOINTER_OTHER));
 }
}
static void _V0open__output__string_lambda127(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0open__output__string_lambda127" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0open__output__string_lambda127, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0open__output__string_lambda127, runtime, upenv, 1, argc, _var0) {
  // ((bruijn try-or-gc 1 132) (bruijn ##k.562 0 0) (bruijn open-output-string-impl 1 136) (##string ##string.1121))
    V_CALL(upenv->vars[132], runtime,
      _var0,
      upenv->vars[136],
      VEncodePointer(&_V10string_D1121.sym, VPOINTER_OTHER));
 }
}
static void _V0with__output__to__file_k292(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0with__output__to__file_k292" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0with__output__to__file_k292, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0with__output__to__file_k292, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##k.563 7 0) (bruijn ret 2 0))
    V_CALL(VGetArg(upenv, 7-1, 0), runtime,
      upenv->up->vars[0]);
 }
}
static void _V0with__output__to__file_k291(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0with__output__to__file_k291" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0with__output__to__file_k291, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0with__output__to__file_k291, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn close-port 7 133) (close _V0with__output__to__file_k292) (bruijn port 3 0))
    V_CALL(VGetArg(upenv, 7-1, 133), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0with__output__to__file_k292, env)}),
      upenv->up->up->vars[0]);
 }
}
static void _V0with__output__to__file_k290(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0with__output__to__file_k290" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0with__output__to__file_k290, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0with__output__to__file_k290, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn current-output-port 6 129) (close _V0with__output__to__file_k291) (bruijn stdout 2 1))
    V_CALL(VGetArg(upenv, 6-1, 129), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0with__output__to__file_k291, env)}),
      upenv->up->vars[1]);
 }
}
static void _V0with__output__to__file_k289(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0with__output__to__file_k289" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0with__output__to__file_k289, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0with__output__to__file_k289, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn thunk 4 2) (close _V0with__output__to__file_k290))
    V_CALL(upenv->up->up->up->vars[2], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0with__output__to__file_k290, env)}));
 }
}
static void _V0with__output__to__file_lambda129(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0with__output__to__file_lambda129" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0with__output__to__file_lambda129, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn current-output-port 4 129) (close _V0with__output__to__file_k289) (bruijn port 0 0))
    V_CALL(upenv->up->up->up->vars[129], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0with__output__to__file_k289, env)}),
      _var0);
 }
}
static void _V0with__output__to__file_k288(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0with__output__to__file_k288" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0with__output__to__file_k288, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0with__output__to__file_k288, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0with__output__to__file_lambda129) (bruijn ##x.564 1 0) (bruijn ##x.565 0 0))
    V_CALL_FUNC(_V0with__output__to__file_lambda129, env, runtime,
      upenv->vars[0],
      _var0);
 }
}
static void _V0with__output__to__file_k287(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0with__output__to__file_k287" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0with__output__to__file_k287, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0with__output__to__file_k287, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn current-output-port 2 129) (close _V0with__output__to__file_k288))
    V_CALL(upenv->up->vars[129], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0with__output__to__file_k288, env)}));
 }
}
static void _V0with__output__to__file_lambda128(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0with__output__to__file_lambda128" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0with__output__to__file_lambda128, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0with__output__to__file_lambda128, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn open-output-file 1 138) (close _V0with__output__to__file_k287) (bruijn str 0 1))
    V_CALL(upenv->vars[138], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0with__output__to__file_k287, env)}),
      _var1);
 }
}
static void _V0with__input__from__file_k298(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0with__input__from__file_k298" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0with__input__from__file_k298, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0with__input__from__file_k298, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##k.569 7 0) (bruijn ret 2 0))
    V_CALL(VGetArg(upenv, 7-1, 0), runtime,
      upenv->up->vars[0]);
 }
}
static void _V0with__input__from__file_k297(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0with__input__from__file_k297" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0with__input__from__file_k297, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0with__input__from__file_k297, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn close-port 7 133) (close _V0with__input__from__file_k298) (bruijn port 3 0))
    V_CALL(VGetArg(upenv, 7-1, 133), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0with__input__from__file_k298, env)}),
      upenv->up->up->vars[0]);
 }
}
static void _V0with__input__from__file_k296(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0with__input__from__file_k296" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0with__input__from__file_k296, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0with__input__from__file_k296, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn current-input-port 6 131) (close _V0with__input__from__file_k297) (bruijn stdout 2 1))
    V_CALL(VGetArg(upenv, 6-1, 131), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0with__input__from__file_k297, env)}),
      upenv->up->vars[1]);
 }
}
static void _V0with__input__from__file_k295(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0with__input__from__file_k295" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0with__input__from__file_k295, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0with__input__from__file_k295, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn thunk 4 2) (close _V0with__input__from__file_k296))
    V_CALL(upenv->up->up->up->vars[2], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0with__input__from__file_k296, env)}));
 }
}
static void _V0with__input__from__file_lambda131(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0with__input__from__file_lambda131" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0with__input__from__file_lambda131, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn current-input-port 4 131) (close _V0with__input__from__file_k295) (bruijn port 0 0))
    V_CALL(upenv->up->up->up->vars[131], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0with__input__from__file_k295, env)}),
      _var0);
 }
}
static void _V0with__input__from__file_k294(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0with__input__from__file_k294" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0with__input__from__file_k294, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0with__input__from__file_k294, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0with__input__from__file_lambda131) (bruijn ##x.570 1 0) (bruijn ##x.571 0 0))
    V_CALL_FUNC(_V0with__input__from__file_lambda131, env, runtime,
      upenv->vars[0],
      _var0);
 }
}
static void _V0with__input__from__file_k293(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0with__input__from__file_k293" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0with__input__from__file_k293, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0with__input__from__file_k293, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn current-input-port 2 131) (close _V0with__input__from__file_k294))
    V_CALL(upenv->up->vars[131], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0with__input__from__file_k294, env)}));
 }
}
static void _V0with__input__from__file_lambda130(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0with__input__from__file_lambda130" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0with__input__from__file_lambda130, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0with__input__from__file_lambda130, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn open-input-file 1 137) (close _V0with__input__from__file_k293) (bruijn str 0 1))
    V_CALL(upenv->vars[137], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0with__input__from__file_k293, env)}),
      _var1);
 }
}
static void _V0read__char_k299(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0read__char_k299" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0read__char_k299, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0read__char_k299, runtime, upenv, 1, argc, _var0) {
  // (##vcore.read-char (bruijn ##k.575 1 0) (bruijn ##x.576 0 0))
    V_CALL_FUNC(VReadChar2, NULL, runtime,
      upenv->vars[0],
      _var0);
 }
}
__attribute__((used)) static void _V20CaseError__V0read__char_lambda132(VRuntime * runtime, VEnv * upenv, int argc, ...) {
 // (_V0read__char_lambda132 #t (1 ((bruijn current-input-port 1 131) (close _V0read__char_k299))) (2 (##vcore.read-char (bruijn ##k.577 0 0) (bruijn port 0 1))))
 VError("Not enough arguments to _V0read__char_lambda132, got ~D~N"
 "-- expected 1~N"
 "-- expected 2~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V0read__char_lambda132(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V20Case0__V0read__char_lambda132" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case0__V0read__char_lambda132, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn current-input-port 1 131) (close _V0read__char_k299))
    V_CALL(upenv->vars[131], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0read__char_k299, env)}));
 }
}
__attribute__((used)) static void _V20Case1__V0read__char_lambda132(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V20Case1__V0read__char_lambda132" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case1__V0read__char_lambda132, runtime, upenv, 2, argc, _var0, _var1) {
  // (##vcore.read-char (bruijn ##k.577 0 0) (bruijn port 0 1))
    V_CALL_FUNC(VReadChar2, NULL, runtime,
      _var0,
      _var1);
 }
}
void _V0read__char_lambda132(VRuntime * runtime, VEnv * upenv, int argc, ...);
asm(
".intel_syntax noprefix\n"
#ifdef __linux__
".type _V0read__char_lambda132, @function\n"
#endif
"_V0read__char_lambda132:\n"
"    cmp " ARGC_REG ", 1\n"
"    je _V20Case0__V0read__char_lambda132\n"
"    cmp " ARGC_REG ", 2\n"
"    je _V20Case1__V0read__char_lambda132\n"
"    jmp _V20CaseError__V0read__char_lambda132\n"
);
static void _V0read__line_k300(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0read__line_k300" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0read__line_k300, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0read__line_k300, runtime, upenv, 1, argc, _var0) {
  // (##vcore.read-line (bruijn ##k.578 1 0) (bruijn ##x.579 0 0))
    V_CALL_FUNC(VReadLine2, NULL, runtime,
      upenv->vars[0],
      _var0);
 }
}
__attribute__((used)) static void _V20CaseError__V0read__line_lambda133(VRuntime * runtime, VEnv * upenv, int argc, ...) {
 // (_V0read__line_lambda133 #t (1 ((bruijn current-input-port 1 131) (close _V0read__line_k300))) (2 (##vcore.read-line (bruijn ##k.580 0 0) (bruijn port 0 1))))
 VError("Not enough arguments to _V0read__line_lambda133, got ~D~N"
 "-- expected 1~N"
 "-- expected 2~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V0read__line_lambda133(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V20Case0__V0read__line_lambda133" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case0__V0read__line_lambda133, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn current-input-port 1 131) (close _V0read__line_k300))
    V_CALL(upenv->vars[131], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0read__line_k300, env)}));
 }
}
__attribute__((used)) static void _V20Case1__V0read__line_lambda133(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V20Case1__V0read__line_lambda133" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case1__V0read__line_lambda133, runtime, upenv, 2, argc, _var0, _var1) {
  // (##vcore.read-line (bruijn ##k.580 0 0) (bruijn port 0 1))
    V_CALL_FUNC(VReadLine2, NULL, runtime,
      _var0,
      _var1);
 }
}
void _V0read__line_lambda133(VRuntime * runtime, VEnv * upenv, int argc, ...);
asm(
".intel_syntax noprefix\n"
#ifdef __linux__
".type _V0read__line_lambda133, @function\n"
#endif
"_V0read__line_lambda133:\n"
"    cmp " ARGC_REG ", 1\n"
"    je _V20Case0__V0read__line_lambda133\n"
"    cmp " ARGC_REG ", 2\n"
"    je _V20Case1__V0read__line_lambda133\n"
"    jmp _V20CaseError__V0read__line_lambda133\n"
);
static void _V0read_k301(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0read_k301" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0read_k301, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0read_k301, runtime, upenv, 1, argc, _var0) {
  // (##vcore.read (bruijn ##k.581 1 0) (bruijn ##x.582 0 0))
    V_CALL_FUNC(VRead2, NULL, runtime,
      upenv->vars[0],
      _var0);
 }
}
__attribute__((used)) static void _V20CaseError__V0read_lambda134(VRuntime * runtime, VEnv * upenv, int argc, ...) {
 // (_V0read_lambda134 #t (1 ((bruijn current-input-port 1 131) (close _V0read_k301))) (2 (##vcore.read (bruijn ##k.583 0 0) (bruijn port 0 1))))
 VError("Not enough arguments to _V0read_lambda134, got ~D~N"
 "-- expected 1~N"
 "-- expected 2~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V0read_lambda134(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V20Case0__V0read_lambda134" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case0__V0read_lambda134, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn current-input-port 1 131) (close _V0read_k301))
    V_CALL(upenv->vars[131], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0read_k301, env)}));
 }
}
__attribute__((used)) static void _V20Case1__V0read_lambda134(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V20Case1__V0read_lambda134" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case1__V0read_lambda134, runtime, upenv, 2, argc, _var0, _var1) {
  // (##vcore.read (bruijn ##k.583 0 0) (bruijn port 0 1))
    V_CALL_FUNC(VRead2, NULL, runtime,
      _var0,
      _var1);
 }
}
void _V0read_lambda134(VRuntime * runtime, VEnv * upenv, int argc, ...);
asm(
".intel_syntax noprefix\n"
#ifdef __linux__
".type _V0read_lambda134, @function\n"
#endif
"_V0read_lambda134:\n"
"    cmp " ARGC_REG ", 1\n"
"    je _V20Case0__V0read_lambda134\n"
"    cmp " ARGC_REG ", 2\n"
"    je _V20Case1__V0read_lambda134\n"
"    jmp _V20CaseError__V0read_lambda134\n"
);
static void _V0newline_k302(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0newline_k302" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0newline_k302, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0newline_k302, runtime, upenv, 1, argc, _var0) {
  // (##vcore.newline (bruijn ##k.584 1 0) (bruijn ##x.585 0 0))
    V_CALL_FUNC(VNewline2, NULL, runtime,
      upenv->vars[0],
      _var0);
 }
}
__attribute__((used)) static void _V20CaseError__V0newline_lambda135(VRuntime * runtime, VEnv * upenv, int argc, ...) {
 // (_V0newline_lambda135 #t (1 ((bruijn current-output-port 1 129) (close _V0newline_k302))) (2 (##vcore.newline (bruijn ##k.586 0 0) (bruijn port 0 1))))
 VError("Not enough arguments to _V0newline_lambda135, got ~D~N"
 "-- expected 1~N"
 "-- expected 2~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V0newline_lambda135(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V20Case0__V0newline_lambda135" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case0__V0newline_lambda135, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn current-output-port 1 129) (close _V0newline_k302))
    V_CALL(upenv->vars[129], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0newline_k302, env)}));
 }
}
__attribute__((used)) static void _V20Case1__V0newline_lambda135(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V20Case1__V0newline_lambda135" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case1__V0newline_lambda135, runtime, upenv, 2, argc, _var0, _var1) {
  // (##vcore.newline (bruijn ##k.586 0 0) (bruijn port 0 1))
    V_CALL_FUNC(VNewline2, NULL, runtime,
      _var0,
      _var1);
 }
}
void _V0newline_lambda135(VRuntime * runtime, VEnv * upenv, int argc, ...);
asm(
".intel_syntax noprefix\n"
#ifdef __linux__
".type _V0newline_lambda135, @function\n"
#endif
"_V0newline_lambda135:\n"
"    cmp " ARGC_REG ", 1\n"
"    je _V20Case0__V0newline_lambda135\n"
"    cmp " ARGC_REG ", 2\n"
"    je _V20Case1__V0newline_lambda135\n"
"    jmp _V20CaseError__V0newline_lambda135\n"
);
static void _V0loop_k310(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k310" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k310, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k310, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 6 0) (bruijn ##k.591 5 0) (bruijn ##x.595 0 0))
    V_CALL(VGetArg(upenv, 6-1, 0), runtime,
      VGetArg(upenv, 5-1, 0),
      _var0);
 }
}
static void _V0loop_k309(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k309" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k309, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k309, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn cdr 10 48) (close _V0loop_k310) (bruijn xs 4 1))
    V_CALL(VGetArg(upenv, 10-1, 48), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k310, env)}),
      upenv->up->up->up->vars[1]);
 }
}
static void _V0loop_k308(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k308" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k308, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k308, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn printout 9 149) (close _V0loop_k309) (bruijn ##x.596 0 0) (bruijn write? 8 2) (bruijn port 8 3))
    V_CALL(VGetArg(upenv, 9-1, 149), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k309, env)}),
      _var0,
      VGetArg(upenv, 8-1, 2),
      VGetArg(upenv, 8-1, 3));
 }
}
static void _V0loop_k307(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k307" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k307, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k307, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn car 8 47) (close _V0loop_k308) (bruijn xs 2 1))
    V_CALL(VGetArg(upenv, 8-1, 47), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k308, env)}),
      upenv->up->vars[1]);
 }
}
static void _V0loop_k312(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k312" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k312, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k312, runtime, upenv, 1, argc, _var0) {
  // ((bruijn printout 9 149) (bruijn ##k.591 3 0) (bruijn xs 3 1) (bruijn write? 8 2) (bruijn port 8 3))
    V_CALL(VGetArg(upenv, 9-1, 149), runtime,
      upenv->up->up->vars[0],
      upenv->up->up->vars[1],
      VGetArg(upenv, 8-1, 2),
      VGetArg(upenv, 8-1, 3));
 }
}
static void _V0loop_k311(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k311" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k311, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k311, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.597 0 0) ((bruijn ##k.591 2 0) 'ok) (##vcore.display-word (close _V0loop_k312) (##string ##string.1123) (bruijn port 7 3)))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->up->vars[0], runtime,
      _V0ok);
} else {
    V_CALL_FUNC(VDisplay2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k312, env)}),
      VEncodePointer(&_V10string_D1123.sym, VPOINTER_OTHER),
      VGetArg(upenv, 7-1, 3));
}
 }
}
static void _V0loop_k306(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k306" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k306, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k306, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.592 0 0) (##vcore.display-word (close _V0loop_k307) (##string ##string.1122) (bruijn port 6 3)) ((bruijn null? 7 0) (close _V0loop_k311) (bruijn xs 1 1)))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(VDisplay2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k307, env)}),
      VEncodePointer(&_V10string_D1122.sym, VPOINTER_OTHER),
      VGetArg(upenv, 6-1, 3));
} else {
    V_CALL(VGetArg(upenv, 7-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k311, env)}),
      upenv->vars[1]);
}
 }
}
static void _V0loop_lambda137(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0loop_lambda137" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0loop_lambda137, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda137, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn pair? 6 3) (close _V0loop_k306) (bruijn xs 0 1))
    V_CALL(VGetArg(upenv, 6-1, 3), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k306, env)}),
      _var1);
 }
}
static void _V0printout__list_k314(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0printout__list_k314" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0printout__list_k314, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0printout__list_k314, runtime, upenv, 1, argc, _var0) {
  // (##vcore.display-word (bruijn ##k.587 6 0) (##string ##string.1124) (bruijn port 6 3))
    V_CALL_FUNC(VDisplay2, NULL, runtime,
      VGetArg(upenv, 6-1, 0),
      VEncodePointer(&_V10string_D1124.sym, VPOINTER_OTHER),
      VGetArg(upenv, 6-1, 3));
 }
}
static void _V0printout__list_k313(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0printout__list_k313" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0printout__list_k313, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0printout__list_k313, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn loop 1 0) (close _V0printout__list_k314) (bruijn ##x.599 0 0))
    V_CALL(upenv->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0printout__list_k314, env)}),
      _var0);
 }
}
static void _V0printout__list_k305(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0printout__list_k305" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0printout__list_k305, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0printout__list_k305, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (letrec 1 ((close _V0loop_lambda137)) ((bruijn cdr 5 48) (close _V0printout__list_k313) (bruijn x 4 1)))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda137, env)});
    V_CALL(VGetArg(upenv, 5-1, 48), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0printout__list_k313, env)}),
      upenv->up->up->up->vars[1]);
    }
 }
}
static void _V0printout__list_k304(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0printout__list_k304" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0printout__list_k304, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0printout__list_k304, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn printout 3 149) (close _V0printout__list_k305) (bruijn ##x.600 0 0) (bruijn write? 2 2) (bruijn port 2 3))
    V_CALL(upenv->up->up->vars[149], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0printout__list_k305, env)}),
      _var0,
      upenv->up->vars[2],
      upenv->up->vars[3]);
 }
}
static void _V0printout__list_k303(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0printout__list_k303" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0printout__list_k303, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0printout__list_k303, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn car 2 47) (close _V0printout__list_k304) (bruijn x 1 1))
    V_CALL(upenv->up->vars[47], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0printout__list_k304, env)}),
      upenv->vars[1]);
 }
}
static void _V0printout__list_lambda136(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V0printout__list_lambda136" };
 VRecordCall2(runtime, &dbg);
 if(argc != 4) {
  VError("Not enough arguments to _V0printout__list_lambda136, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0printout__list_lambda136, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // (##vcore.display-word (close _V0printout__list_k303) (##string ##string.1125) (bruijn port 0 3))
    V_CALL_FUNC(VDisplay2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0printout__list_k303, env)}),
      VEncodePointer(&_V10string_D1125.sym, VPOINTER_OTHER),
      _var3);
 }
}
static void _V0printout__quotation_k319(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0printout__quotation_k319" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0printout__quotation_k319, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0printout__quotation_k319, runtime, upenv, 1, argc, _var0) {
  // ((bruijn printout 6 149) (bruijn ##k.601 5 0) (bruijn ##x.603 0 0) (bruijn write? 5 2) (bruijn port 5 3))
    V_CALL(VGetArg(upenv, 6-1, 149), runtime,
      VGetArg(upenv, 5-1, 0),
      _var0,
      VGetArg(upenv, 5-1, 2),
      VGetArg(upenv, 5-1, 3));
 }
}
static void _V0printout__quotation_k318(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0printout__quotation_k318" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0printout__quotation_k318, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0printout__quotation_k318, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn cadr 5 52) (close _V0printout__quotation_k319) (bruijn x 4 1))
    V_CALL(VGetArg(upenv, 5-1, 52), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0printout__quotation_k319, env)}),
      upenv->up->up->up->vars[1]);
 }
}
static void _V0printout__quotation_k317(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0printout__quotation_k317" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0printout__quotation_k317, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0printout__quotation_k317, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.display-word (close _V0printout__quotation_k318) (bruijn ##x.604 0 0) (bruijn port 3 3))
    V_CALL_FUNC(VDisplay2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0printout__quotation_k318, env)}),
      _var0,
      upenv->up->up->vars[3]);
 }
}
static void _V0printout__quotation_k316(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0printout__quotation_k316" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0printout__quotation_k316, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0printout__quotation_k316, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn cdr 3 48) (close _V0printout__quotation_k317) (bruijn ##x.605 0 0))
    V_CALL(upenv->up->up->vars[48], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0printout__quotation_k317, env)}),
      _var0);
 }
}
static void _V0printout__quotation_k315(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0printout__quotation_k315" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0printout__quotation_k315, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0printout__quotation_k315, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn assv 2 96) (close _V0printout__quotation_k316) (bruijn ##x.606 0 0) (##inline ##vcore.qcons (##inline ##vcore.qcons 'quote '(##string ##string.1126)) (##inline ##vcore.qcons (##inline ##vcore.qcons 'quasiquote '(##string ##string.1127)) (##inline ##vcore.qcons (##inline ##vcore.qcons 'unquote '(##string ##string.1128)) (##inline ##vcore.qcons (##inline ##vcore.qcons 'unquote-splicing '(##string ##string.1129)) '())))))
    V_CALL(upenv->up->vars[96], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0printout__quotation_k316, env)}),
      _var0,
      VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0quote,
        VEncodePointer(&_V10string_D1126.sym, VPOINTER_OTHER)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0quasiquote,
        VEncodePointer(&_V10string_D1127.sym, VPOINTER_OTHER)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0unquote,
        VEncodePointer(&_V10string_D1128.sym, VPOINTER_OTHER)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0unquote__splicing,
        VEncodePointer(&_V10string_D1129.sym, VPOINTER_OTHER)),
        VNULL)))));
 }
}
static void _V0printout__quotation_lambda138(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V0printout__quotation_lambda138" };
 VRecordCall2(runtime, &dbg);
 if(argc != 4) {
  VError("Not enough arguments to _V0printout__quotation_lambda138, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0printout__quotation_lambda138, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // ((bruijn car 1 47) (close _V0printout__quotation_k315) (bruijn x 0 1))
    V_CALL(upenv->vars[47], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0printout__quotation_k315, env)}),
      _var1);
 }
}
static void _V0printout_k322(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0printout_k322" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0printout_k322, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0printout_k322, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.617 0 0) ((bruijn printout-quotation 4 148) (bruijn ##k.615 3 0) (bruijn x 3 1) (bruijn write? 3 2) (bruijn port 3 3)) ((bruijn printout-list 4 147) (bruijn ##k.615 3 0) (bruijn x 3 1) (bruijn write? 3 2) (bruijn port 3 3)))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->up->up->up->vars[148], runtime,
      upenv->up->up->vars[0],
      upenv->up->up->vars[1],
      upenv->up->up->vars[2],
      upenv->up->up->vars[3]);
} else {
    V_CALL(upenv->up->up->up->vars[147], runtime,
      upenv->up->up->vars[0],
      upenv->up->up->vars[1],
      upenv->up->up->vars[2],
      upenv->up->up->vars[3]);
}
 }
}
static void _V0printout_k321(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0printout_k321" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0printout_k321, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0printout_k321, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn memq 3 92) (close _V0printout_k322) (bruijn ##x.618 0 0) (##inline ##vcore.qcons 'quote (##inline ##vcore.qcons 'quasiquote (##inline ##vcore.qcons 'unquote (##inline ##vcore.qcons 'unquote-splicing '())))))
    V_CALL(upenv->up->up->vars[92], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0printout_k322, env)}),
      _var0,
      VInlineCons2(runtime,
        _V0quote,
        VInlineCons2(runtime,
        _V0quasiquote,
        VInlineCons2(runtime,
        _V0unquote,
        VInlineCons2(runtime,
        _V0unquote__splicing,
        VNULL)))));
 }
}
static void _V0loop_k328(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k328" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k328, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k328, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.632 1 0) ((bruijn ##k.633 0 0) #f) (##vcore.display-word (bruijn ##k.633 0 0) (##string ##string.1122) (bruijn port 9 3)))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
} else {
    V_CALL_FUNC(VDisplay2, NULL, runtime,
      _var0,
      VEncodePointer(&_V10string_D1122.sym, VPOINTER_OTHER),
      VGetArg(upenv, 9-1, 3));
}
 }
}
static void _V0loop_k332(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k332" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k332, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k332, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 7 0) (bruijn ##k.626 6 0) (bruijn ##x.630 0 0))
    V_CALL(VGetArg(upenv, 7-1, 0), runtime,
      VGetArg(upenv, 6-1, 0),
      _var0);
 }
}
static void _V0loop_k331(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k331" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k331, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k331, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn + 12 36) (close _V0loop_k332) (bruijn i 5 1) 1)
    V_CALL(VGetArg(upenv, 12-1, 36), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k332, env)}),
      VGetArg(upenv, 5-1, 1),
      VEncodeInt(1l));
 }
}
static void _V0loop_k330(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k330" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k330, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k330, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn printout 11 149) (close _V0loop_k331) (bruijn ##x.631 0 0) (bruijn write? 10 2) (bruijn port 10 3))
    V_CALL(VGetArg(upenv, 11-1, 149), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k331, env)}),
      _var0,
      VGetArg(upenv, 10-1, 2),
      VGetArg(upenv, 10-1, 3));
 }
}
static void _V0loop_k329(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k329" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k329, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k329, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn vector-ref 10 113) (close _V0loop_k330) (bruijn x 9 1) (bruijn i 3 1))
    V_CALL(VGetArg(upenv, 10-1, 113), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k330, env)}),
      VGetArg(upenv, 9-1, 1),
      upenv->up->up->vars[1]);
 }
}
static void _V0loop_k327(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k327" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k327, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k327, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0loop_k328) (close _V0loop_k329))
    V_CALL_FUNC(_V0loop_k328, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k329, env)}));
 }
}
static void _V0loop_k326(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k326" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k326, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k326, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.627 0 0) ((bruijn ##k.626 1 0) #f) ((bruijn eq? 8 15) (close _V0loop_k327) (bruijn i 1 1) 0))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
} else {
    V_CALL(VGetArg(upenv, 8-1, 15), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k327, env)}),
      upenv->vars[1],
      VEncodeInt(0l));
}
 }
}
static void _V0loop_lambda140(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0loop_lambda140" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0loop_lambda140, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda140, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn eq? 7 15) (close _V0loop_k326) (bruijn i 0 1) (bruijn len 3 0))
    V_CALL(VGetArg(upenv, 7-1, 15), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k326, env)}),
      _var1,
      upenv->up->up->vars[0]);
 }
}
static void _V0printout_k333(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0printout_k333" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0printout_k333, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0printout_k333, runtime, upenv, 1, argc, _var0) {
  // (##vcore.display-word (bruijn ##k.615 6 0) (##string ##string.1124) (bruijn port 6 3))
    V_CALL_FUNC(VDisplay2, NULL, runtime,
      VGetArg(upenv, 6-1, 0),
      VEncodePointer(&_V10string_D1124.sym, VPOINTER_OTHER),
      VGetArg(upenv, 6-1, 3));
 }
}
static void _V0printout_k325(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0printout_k325" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0printout_k325, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0printout_k325, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (letrec 1 ((close _V0loop_lambda140)) ((bruijn loop 0 0) (close _V0printout_k333) 0))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda140, env)});
    V_CALL(env->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0printout_k333, env)}),
      VEncodeInt(0l));
    }
 }
}
static void _V0printout_k324(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0printout_k324" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0printout_k324, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0printout_k324, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.display-word (close _V0printout_k325) (##string ##string.1130) (bruijn port 3 3))
    V_CALL_FUNC(VDisplay2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0printout_k325, env)}),
      VEncodePointer(&_V10string_D1130.sym, VPOINTER_OTHER),
      upenv->up->up->vars[3]);
 }
}
static void _V0printout_k323(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0printout_k323" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0printout_k323, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0printout_k323, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.623 0 0) ((bruijn vector-length 3 115) (close _V0printout_k324) (bruijn x 2 1)) (if (bruijn write? 2 2) (##vcore.write (bruijn ##k.615 2 0) (bruijn x 2 1) (bruijn port 2 3)) (##vcore.display-word (bruijn ##k.615 2 0) (bruijn x 2 1) (bruijn port 2 3))))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->up->up->vars[115], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0printout_k324, env)}),
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
static void _V0printout_k320(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0printout_k320" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0printout_k320, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0printout_k320, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.616 0 0) ((bruijn car 2 47) (close _V0printout_k321) (bruijn x 1 1)) ((bruijn vector? 2 4) (close _V0printout_k323) (bruijn x 1 1)))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->up->vars[47], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0printout_k321, env)}),
      upenv->vars[1]);
} else {
    V_CALL(upenv->up->vars[4], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0printout_k323, env)}),
      upenv->vars[1]);
}
 }
}
static void _V0printout_lambda139(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V0printout_lambda139" };
 VRecordCall2(runtime, &dbg);
 if(argc != 4) {
  VError("Not enough arguments to _V0printout_lambda139, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0printout_lambda139, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // ((bruijn pair? 1 3) (close _V0printout_k320) (bruijn x 0 1))
    V_CALL(upenv->vars[3], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0printout_k320, env)}),
      _var1);
 }
}
static void _V0display_k334(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0display_k334" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0display_k334, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0display_k334, runtime, upenv, 1, argc, _var0) {
  // ((bruijn printout 2 149) (bruijn ##k.634 1 0) (bruijn x 1 1) #f (bruijn ##x.635 0 0))
    V_CALL(upenv->up->vars[149], runtime,
      upenv->vars[0],
      upenv->vars[1],
      VEncodeBool(false),
      _var0);
 }
}
__attribute__((used)) static void _V20CaseError__V0display_lambda141(VRuntime * runtime, VEnv * upenv, int argc, ...) {
 // (_V0display_lambda141 #t (2 ((bruijn current-output-port 1 129) (close _V0display_k334))) (3 ((bruijn printout 1 149) (bruijn ##k.636 0 0) (bruijn x 0 1) #f (bruijn port 0 2))))
 VError("Not enough arguments to _V0display_lambda141, got ~D~N"
 "-- expected 2~N"
 "-- expected 3~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V0display_lambda141(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V20Case0__V0display_lambda141" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case0__V0display_lambda141, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn current-output-port 1 129) (close _V0display_k334))
    V_CALL(upenv->vars[129], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0display_k334, env)}));
 }
}
__attribute__((used)) static void _V20Case1__V0display_lambda141(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V20Case1__V0display_lambda141" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case1__V0display_lambda141, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  // ((bruijn printout 1 149) (bruijn ##k.636 0 0) (bruijn x 0 1) #f (bruijn port 0 2))
    V_CALL(upenv->vars[149], runtime,
      _var0,
      _var1,
      VEncodeBool(false),
      _var2);
 }
}
void _V0display_lambda141(VRuntime * runtime, VEnv * upenv, int argc, ...);
asm(
".intel_syntax noprefix\n"
#ifdef __linux__
".type _V0display_lambda141, @function\n"
#endif
"_V0display_lambda141:\n"
"    cmp " ARGC_REG ", 2\n"
"    je _V20Case0__V0display_lambda141\n"
"    cmp " ARGC_REG ", 3\n"
"    je _V20Case1__V0display_lambda141\n"
"    jmp _V20CaseError__V0display_lambda141\n"
);
static void _V0write_k335(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0write_k335" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0write_k335, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0write_k335, runtime, upenv, 1, argc, _var0) {
  // ((bruijn printout 2 149) (bruijn ##k.637 1 0) (bruijn x 1 1) #t (bruijn ##x.638 0 0))
    V_CALL(upenv->up->vars[149], runtime,
      upenv->vars[0],
      upenv->vars[1],
      VEncodeBool(true),
      _var0);
 }
}
__attribute__((used)) static void _V20CaseError__V0write_lambda142(VRuntime * runtime, VEnv * upenv, int argc, ...) {
 // (_V0write_lambda142 #t (2 ((bruijn current-output-port 1 129) (close _V0write_k335))) (3 ((bruijn printout 1 149) (bruijn ##k.639 0 0) (bruijn x 0 1) #t (bruijn port 0 2))))
 VError("Not enough arguments to _V0write_lambda142, got ~D~N"
 "-- expected 2~N"
 "-- expected 3~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V0write_lambda142(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V20Case0__V0write_lambda142" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case0__V0write_lambda142, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn current-output-port 1 129) (close _V0write_k335))
    V_CALL(upenv->vars[129], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0write_k335, env)}));
 }
}
__attribute__((used)) static void _V20Case1__V0write_lambda142(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V20Case1__V0write_lambda142" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case1__V0write_lambda142, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  // ((bruijn printout 1 149) (bruijn ##k.639 0 0) (bruijn x 0 1) #t (bruijn port 0 2))
    V_CALL(upenv->vars[149], runtime,
      _var0,
      _var1,
      VEncodeBool(true),
      _var2);
 }
}
void _V0write_lambda142(VRuntime * runtime, VEnv * upenv, int argc, ...);
asm(
".intel_syntax noprefix\n"
#ifdef __linux__
".type _V0write_lambda142, @function\n"
#endif
"_V0write_lambda142:\n"
"    cmp " ARGC_REG ", 2\n"
"    je _V20Case0__V0write_lambda142\n"
"    cmp " ARGC_REG ", 3\n"
"    je _V20Case1__V0write_lambda142\n"
"    jmp _V20CaseError__V0write_lambda142\n"
);
static void _V0values_lambda144(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0values_lambda144" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0values_lambda144, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0values_lambda144, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn apply 2 155) (bruijn ##k.641 0 0) (bruijn k 0 1) (bruijn args 1 1))
    V_CALL(upenv->up->vars[155], runtime,
      _var0,
      _var1,
      upenv->vars[1]);
 }
}
static void _V0values_lambda143(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, ...) {
 static VDebugInfo dbg = { "_V0values_lambda143" };
 VRecordCall2(runtime, &dbg);
 if(argc < 1) {
  VError("Not enough arguments to _V0values_lambda143, got ~D~N"
  "-- expected 1 or more~N"
  , argc);
 }
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 1, argc, _var0);
 V_GC_CHECK2_VARARGS((VFunc)_V0values_lambda143, runtime, upenv, 1, argc, _var0, _varargs) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _varargs;
  // ((bruijn call/cc 1 152) (bruijn ##k.640 0 0) (close _V0values_lambda144))
    V_CALL(upenv->vars[152], runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0values_lambda144, env)}));
 }
}
static void _V0make__parameter_lambda146(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0make__parameter_lambda146" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0make__parameter_lambda146, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0make__parameter_lambda146, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##k.643 0 0) (bruijn x 0 1))
    V_CALL(_var0, runtime,
      _var1);
 }
}
static void _V0make__parameter_k339(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0make__parameter_k339" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0make__parameter_k339, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0make__parameter_k339, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn lookup 0 0) ((bruijn cdr 7 48) (bruijn ##k.648 2 0) (bruijn lookup 0 0)) ((bruijn ##k.648 2 0) (bruijn init 3 1)))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 7-1, 48), runtime,
      upenv->up->vars[0],
      _var0);
} else {
    V_CALL(upenv->up->vars[0], runtime,
      upenv->up->up->vars[1]);
}
 }
}
static void _V0make__parameter_k338(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0make__parameter_k338" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0make__parameter_k338, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0make__parameter_k338, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn assq 6 95) (close _V0make__parameter_k339) (bruijn key 2 0) (bruijn ##x.649 0 0))
    V_CALL(VGetArg(upenv, 6-1, 95), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0make__parameter_k339, env)}),
      upenv->up->vars[0],
      _var0);
 }
}
static void _V0make__parameter_k341(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0make__parameter_k341" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0make__parameter_k341, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0make__parameter_k341, runtime, upenv, 1, argc, _var0) {
  // (##vcore.push-dynamic (bruijn ##k.650 3 0) (bruijn key 4 0) (bruijn ##x.652 0 0))
    V_CALL_FUNC(VPushDynamic, NULL, runtime,
      upenv->up->up->vars[0],
      upenv->up->up->up->vars[0],
      _var0);
 }
}
static void _V0make__parameter_k342(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0make__parameter_k342" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0make__parameter_k342, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0make__parameter_k342, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.653 0 0) (##vcore.pop-dynamic (bruijn ##k.650 3 0) (bruijn x 3 2)) ((bruijn error 8 177) (bruijn ##k.650 3 0) (##string ##string.1131)))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(VPopDynamic, NULL, runtime,
      upenv->up->up->vars[0],
      upenv->up->up->vars[2]);
} else {
    V_CALL(VGetArg(upenv, 8-1, 177), runtime,
      upenv->up->up->vars[0],
      VEncodePointer(&_V10string_D1131.sym, VPOINTER_OTHER));
}
 }
}
static void _V0make__parameter_k340(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0make__parameter_k340" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0make__parameter_k340, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0make__parameter_k340, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.651 0 0) ((bruijn convert 6 2) (close _V0make__parameter_k341) (bruijn x 2 2)) ((bruijn eqv? 7 18) (close _V0make__parameter_k342) (bruijn ##x.1 1 0) '##vcore.pop-value))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 6-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0make__parameter_k341, env)}),
      upenv->up->vars[2]);
} else {
    V_CALL(VGetArg(upenv, 7-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0make__parameter_k342, env)}),
      upenv->vars[0],
      _V10vcore_Dpop__value);
}
 }
}
static void _V0make__parameter_lambda149(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0make__parameter_lambda149" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0make__parameter_lambda149, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn eqv? 6 18) (close _V0make__parameter_k340) (bruijn ##x.1 0 0) '##vcore.push-value)
    V_CALL(VGetArg(upenv, 6-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0make__parameter_k340, env)}),
      _var0,
      _V10vcore_Dpush__value);
 }
}
__attribute__((used)) static void _V20CaseError__V0make__parameter_lambda148(VRuntime * runtime, VEnv * upenv, int argc, ...) {
 // (_V0make__parameter_lambda148 #t (1 (##vcore.get-dynamics (close _V0make__parameter_k338))) (3 ((close _V0make__parameter_lambda149) (bruijn action 0 1))))
 VError("Not enough arguments to _V0make__parameter_lambda148, got ~D~N"
 "-- expected 1~N"
 "-- expected 3~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V0make__parameter_lambda148(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V20Case0__V0make__parameter_lambda148" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case0__V0make__parameter_lambda148, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.get-dynamics (close _V0make__parameter_k338))
    V_CALL_FUNC(VGetDynamics, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0make__parameter_k338, env)}));
 }
}
__attribute__((used)) static void _V20Case1__V0make__parameter_lambda148(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V20Case1__V0make__parameter_lambda148" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case1__V0make__parameter_lambda148, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((close _V0make__parameter_lambda149) (bruijn action 0 1))
    V_CALL_FUNC(_V0make__parameter_lambda149, env, runtime,
      _var1);
 }
}
void _V0make__parameter_lambda148(VRuntime * runtime, VEnv * upenv, int argc, ...);
asm(
".intel_syntax noprefix\n"
#ifdef __linux__
".type _V0make__parameter_lambda148, @function\n"
#endif
"_V0make__parameter_lambda148:\n"
"    cmp " ARGC_REG ", 1\n"
"    je _V20Case0__V0make__parameter_lambda148\n"
"    cmp " ARGC_REG ", 3\n"
"    je _V20Case1__V0make__parameter_lambda148\n"
"    jmp _V20CaseError__V0make__parameter_lambda148\n"
);
static void _V0make__parameter_lambda147(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0make__parameter_lambda147" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0make__parameter_lambda147, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##k.645 3 0) (close _V0make__parameter_lambda148))
    V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0make__parameter_lambda148, env)}));
 }
}
static void _V0make__parameter_k337(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0make__parameter_k337" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0make__parameter_k337, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0make__parameter_k337, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0make__parameter_lambda147) (bruijn ##x.646 1 0) (bruijn ##x.647 0 0))
    V_CALL_FUNC(_V0make__parameter_lambda147, env, runtime,
      upenv->vars[0],
      _var0);
 }
}
static void _V0make__parameter_k336(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0make__parameter_k336" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0make__parameter_k336, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0make__parameter_k336, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn convert 1 2) (close _V0make__parameter_k337) (bruijn init 1 1))
    V_CALL(upenv->vars[2], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0make__parameter_k337, env)}),
      upenv->vars[1]);
 }
}
__attribute__((used)) static void _V20CaseError__V0make__parameter_lambda145(VRuntime * runtime, VEnv * upenv, int argc, ...) {
 // (_V0make__parameter_lambda145 #t (2 ((bruijn make-parameter 1 159) (bruijn ##k.642 0 0) (bruijn init 0 1) (close _V0make__parameter_lambda146) 'parameter)) (3 ((bruijn make-parameter 1 159) (bruijn ##k.644 0 0) (bruijn init 0 1) (bruijn convert 0 2) 'parameter)) (4 ((bruijn cons 1 46) (close _V0make__parameter_k336) (bruijn name 0 3) '())))
 VError("Not enough arguments to _V0make__parameter_lambda145, got ~D~N"
 "-- expected 2~N"
 "-- expected 3~N"
 "-- expected 4~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V0make__parameter_lambda145(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V20Case0__V0make__parameter_lambda145" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case0__V0make__parameter_lambda145, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn make-parameter 1 159) (bruijn ##k.642 0 0) (bruijn init 0 1) (close _V0make__parameter_lambda146) 'parameter)
    V_CALL(upenv->vars[159], runtime,
      _var0,
      _var1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0make__parameter_lambda146, env)}),
      _V0parameter);
 }
}
__attribute__((used)) static void _V20Case1__V0make__parameter_lambda145(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V20Case1__V0make__parameter_lambda145" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case1__V0make__parameter_lambda145, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  // ((bruijn make-parameter 1 159) (bruijn ##k.644 0 0) (bruijn init 0 1) (bruijn convert 0 2) 'parameter)
    V_CALL(upenv->vars[159], runtime,
      _var0,
      _var1,
      _var2,
      _V0parameter);
 }
}
__attribute__((used)) static void _V20Case2__V0make__parameter_lambda145(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V20Case2__V0make__parameter_lambda145" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case2__V0make__parameter_lambda145, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // ((bruijn cons 1 46) (close _V0make__parameter_k336) (bruijn name 0 3) '())
    V_CALL(upenv->vars[46], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0make__parameter_k336, env)}),
      _var3,
      VNULL);
 }
}
void _V0make__parameter_lambda145(VRuntime * runtime, VEnv * upenv, int argc, ...);
asm(
".intel_syntax noprefix\n"
#ifdef __linux__
".type _V0make__parameter_lambda145, @function\n"
#endif
"_V0make__parameter_lambda145:\n"
"    cmp " ARGC_REG ", 2\n"
"    je _V20Case0__V0make__parameter_lambda145\n"
"    cmp " ARGC_REG ", 3\n"
"    je _V20Case1__V0make__parameter_lambda145\n"
"    cmp " ARGC_REG ", 4\n"
"    je _V20Case2__V0make__parameter_lambda145\n"
"    jmp _V20CaseError__V0make__parameter_lambda145\n"
);
static void _V0atom_Q_k343(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0atom_Q_k343" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0atom_Q_k343, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0atom_Q_k343, runtime, upenv, 1, argc, _var0) {
  // ((bruijn not 2 22) (bruijn ##k.654 1 0) (bruijn ##x.655 0 0))
    V_CALL(upenv->up->vars[22], runtime,
      upenv->vars[0],
      _var0);
 }
}
static void _V0atom_Q_lambda150(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0atom_Q_lambda150" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0atom_Q_lambda150, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0atom_Q_lambda150, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn pair? 1 3) (close _V0atom_Q_k343) (bruijn x 0 1))
    V_CALL(upenv->vars[3], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0atom_Q_k343, env)}),
      _var1);
 }
}
static void _V0displayln_k344(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0displayln_k344" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0displayln_k344, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0displayln_k344, runtime, upenv, 1, argc, _var0) {
  // ((bruijn displayln 2 167) (bruijn ##k.656 1 0) (bruijn x 1 1) (bruijn ##x.657 0 0))
    V_CALL(upenv->up->vars[167], runtime,
      upenv->vars[0],
      upenv->vars[1],
      _var0);
 }
}
static void _V0displayln_k345(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0displayln_k345" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0displayln_k345, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0displayln_k345, runtime, upenv, 1, argc, _var0) {
  // ((bruijn newline 2 146) (bruijn ##k.658 1 0) (bruijn port 1 2))
    V_CALL(upenv->up->vars[146], runtime,
      upenv->vars[0],
      upenv->vars[2]);
 }
}
__attribute__((used)) static void _V20CaseError__V0displayln_lambda151(VRuntime * runtime, VEnv * upenv, int argc, ...) {
 // (_V0displayln_lambda151 #t (2 ((bruijn current-output-port 1 129) (close _V0displayln_k344))) (3 ((bruijn display 1 150) (close _V0displayln_k345) (bruijn x 0 1) (bruijn port 0 2))))
 VError("Not enough arguments to _V0displayln_lambda151, got ~D~N"
 "-- expected 2~N"
 "-- expected 3~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V0displayln_lambda151(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V20Case0__V0displayln_lambda151" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case0__V0displayln_lambda151, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn current-output-port 1 129) (close _V0displayln_k344))
    V_CALL(upenv->vars[129], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0displayln_k344, env)}));
 }
}
__attribute__((used)) static void _V20Case1__V0displayln_lambda151(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V20Case1__V0displayln_lambda151" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case1__V0displayln_lambda151, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn display 1 150) (close _V0displayln_k345) (bruijn x 0 1) (bruijn port 0 2))
    V_CALL(upenv->vars[150], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0displayln_k345, env)}),
      _var1,
      _var2);
 }
}
void _V0displayln_lambda151(VRuntime * runtime, VEnv * upenv, int argc, ...);
asm(
".intel_syntax noprefix\n"
#ifdef __linux__
".type _V0displayln_lambda151, @function\n"
#endif
"_V0displayln_lambda151:\n"
"    cmp " ARGC_REG ", 2\n"
"    je _V20Case0__V0displayln_lambda151\n"
"    cmp " ARGC_REG ", 3\n"
"    je _V20Case1__V0displayln_lambda151\n"
"    jmp _V20CaseError__V0displayln_lambda151\n"
);
static void _V0writeln_k346(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0writeln_k346" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0writeln_k346, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0writeln_k346, runtime, upenv, 1, argc, _var0) {
  // ((bruijn writeln 2 168) (bruijn ##k.660 1 0) (bruijn x 1 1) (bruijn ##x.661 0 0))
    V_CALL(upenv->up->vars[168], runtime,
      upenv->vars[0],
      upenv->vars[1],
      _var0);
 }
}
static void _V0writeln_k347(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0writeln_k347" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0writeln_k347, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0writeln_k347, runtime, upenv, 1, argc, _var0) {
  // ((bruijn newline 2 146) (bruijn ##k.662 1 0) (bruijn port 1 2))
    V_CALL(upenv->up->vars[146], runtime,
      upenv->vars[0],
      upenv->vars[2]);
 }
}
__attribute__((used)) static void _V20CaseError__V0writeln_lambda152(VRuntime * runtime, VEnv * upenv, int argc, ...) {
 // (_V0writeln_lambda152 #t (2 ((bruijn current-output-port 1 129) (close _V0writeln_k346))) (3 ((bruijn write 1 151) (close _V0writeln_k347) (bruijn x 0 1) (bruijn port 0 2))))
 VError("Not enough arguments to _V0writeln_lambda152, got ~D~N"
 "-- expected 2~N"
 "-- expected 3~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V0writeln_lambda152(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V20Case0__V0writeln_lambda152" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case0__V0writeln_lambda152, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn current-output-port 1 129) (close _V0writeln_k346))
    V_CALL(upenv->vars[129], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0writeln_k346, env)}));
 }
}
__attribute__((used)) static void _V20Case1__V0writeln_lambda152(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V20Case1__V0writeln_lambda152" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case1__V0writeln_lambda152, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn write 1 151) (close _V0writeln_k347) (bruijn x 0 1) (bruijn port 0 2))
    V_CALL(upenv->vars[151], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0writeln_k347, env)}),
      _var1,
      _var2);
 }
}
void _V0writeln_lambda152(VRuntime * runtime, VEnv * upenv, int argc, ...);
asm(
".intel_syntax noprefix\n"
#ifdef __linux__
".type _V0writeln_lambda152, @function\n"
#endif
"_V0writeln_lambda152:\n"
"    cmp " ARGC_REG ", 2\n"
"    je _V20Case0__V0writeln_lambda152\n"
"    cmp " ARGC_REG ", 3\n"
"    je _V20Case1__V0writeln_lambda152\n"
"    jmp _V20CaseError__V0writeln_lambda152\n"
);
static void _V0loop_k354(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k354" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k354, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k354, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.700 1 0) ((bruijn error 10 177) (bruijn ##k.701 0 0) (##string ##string.1132) (bruijn fmt 9 2)) ((bruijn ##k.701 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(VGetArg(upenv, 10-1, 177), runtime,
      _var0,
      VEncodePointer(&_V10string_D1132.sym, VPOINTER_OTHER),
      VGetArg(upenv, 9-1, 2));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0loop_k360(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k360" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k360, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k360, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 12 0) (bruijn ##k.665 11 0) (bruijn ##x.671 0 0) (bruijn args 11 2))
    V_CALL(VGetArg(upenv, 12-1, 0), runtime,
      VGetArg(upenv, 11-1, 0),
      _var0,
      VGetArg(upenv, 11-1, 2));
 }
}
static void _V0loop_k359(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k359" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k359, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k359, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn + 14 36) (close _V0loop_k360) (bruijn i 10 1) 2)
    V_CALL(VGetArg(upenv, 14-1, 36), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k360, env)}),
      VGetArg(upenv, 10-1, 1),
      VEncodeInt(2l));
 }
}
static void _V0loop_k362(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k362" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k362, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k362, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.697 1 0) ((bruijn ##k.698 0 0) (bruijn ##p.697 1 0)) ((bruijn eqv? 15 18) (bruijn ##k.698 0 0) (bruijn ##x.2 3 0) '#\N))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(_var0, runtime,
      upenv->vars[0]);
} else {
    V_CALL(VGetArg(upenv, 15-1, 18), runtime,
      _var0,
      upenv->up->up->vars[0],
      VEncodeChar('N'));
}
 }
}
static void _V0loop_k365(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k365" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k365, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k365, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 14 0) (bruijn ##k.665 13 0) (bruijn ##x.674 0 0) (bruijn args 13 2))
    V_CALL(VGetArg(upenv, 14-1, 0), runtime,
      VGetArg(upenv, 13-1, 0),
      _var0,
      VGetArg(upenv, 13-1, 2));
 }
}
static void _V0loop_k364(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k364" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k364, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k364, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn + 16 36) (close _V0loop_k365) (bruijn i 12 1) 2)
    V_CALL(VGetArg(upenv, 16-1, 36), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k365, env)}),
      VGetArg(upenv, 12-1, 1),
      VEncodeInt(2l));
 }
}
static void _V0loop_k367(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k367" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k367, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k367, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.695 1 0) ((bruijn ##k.696 0 0) (bruijn ##p.695 1 0)) ((bruijn eqv? 17 18) (bruijn ##k.696 0 0) (bruijn ##x.2 5 0) '#\A))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(_var0, runtime,
      upenv->vars[0]);
} else {
    V_CALL(VGetArg(upenv, 17-1, 18), runtime,
      _var0,
      VGetArg(upenv, 5-1, 0),
      VEncodeChar('A'));
}
 }
}
static void _V0loop_k370(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k370" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k370, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k370, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.681 1 0) ((bruijn error 19 177) (bruijn ##k.682 0 0) (##string ##string.1133) (bruijn fmt 18 2)) ((bruijn ##k.682 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(VGetArg(upenv, 19-1, 177), runtime,
      _var0,
      VEncodePointer(&_V10string_D1133.sym, VPOINTER_OTHER),
      VGetArg(upenv, 18-1, 2));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0loop_k375(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k375" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k375, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k375, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 20 0) (bruijn ##k.665 19 0) (bruijn ##x.678 1 0) (bruijn ##x.679 0 0))
    V_CALL(VGetArg(upenv, 20-1, 0), runtime,
      VGetArg(upenv, 19-1, 0),
      upenv->vars[0],
      _var0);
 }
}
static void _V0loop_k374(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k374" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k374, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k374, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn cdr 22 48) (close _V0loop_k375) (bruijn args 18 2))
    V_CALL(VGetArg(upenv, 22-1, 48), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k375, env)}),
      VGetArg(upenv, 18-1, 2));
 }
}
static void _V0loop_k373(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k373" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k373, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k373, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn + 21 36) (close _V0loop_k374) (bruijn i 17 1) 2)
    V_CALL(VGetArg(upenv, 21-1, 36), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k374, env)}),
      VGetArg(upenv, 17-1, 1),
      VEncodeInt(2l));
 }
}
static void _V0loop_k372(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k372" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k372, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k372, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn display 20 150) (close _V0loop_k373) (bruijn ##x.680 0 0) (bruijn port 19 1))
    V_CALL(VGetArg(upenv, 20-1, 150), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k373, env)}),
      _var0,
      VGetArg(upenv, 19-1, 1));
 }
}
static void _V0loop_k371(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k371" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k371, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k371, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn car 19 47) (close _V0loop_k372) (bruijn args 15 2))
    V_CALL(VGetArg(upenv, 19-1, 47), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k372, env)}),
      VGetArg(upenv, 15-1, 2));
 }
}
static void _V0loop_k369(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k369" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k369, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k369, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0loop_k370) (close _V0loop_k371))
    V_CALL_FUNC(_V0loop_k370, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k371, env)}));
 }
}
static void _V0loop_k377(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k377" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k377, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k377, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.693 1 0) ((bruijn ##k.694 0 0) (bruijn ##p.693 1 0)) ((bruijn eqv? 19 18) (bruijn ##k.694 0 0) (bruijn ##x.2 7 0) '#\S))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(_var0, runtime,
      upenv->vars[0]);
} else {
    V_CALL(VGetArg(upenv, 19-1, 18), runtime,
      _var0,
      VGetArg(upenv, 7-1, 0),
      VEncodeChar('S'));
}
 }
}
static void _V0loop_k380(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k380" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k380, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k380, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.689 1 0) ((bruijn error 21 177) (bruijn ##k.690 0 0) (##string ##string.1133) (bruijn fmt 20 2)) ((bruijn ##k.690 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(VGetArg(upenv, 21-1, 177), runtime,
      _var0,
      VEncodePointer(&_V10string_D1133.sym, VPOINTER_OTHER),
      VGetArg(upenv, 20-1, 2));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0loop_k385(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k385" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k385, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k385, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 22 0) (bruijn ##k.665 21 0) (bruijn ##x.686 1 0) (bruijn ##x.687 0 0))
    V_CALL(VGetArg(upenv, 22-1, 0), runtime,
      VGetArg(upenv, 21-1, 0),
      upenv->vars[0],
      _var0);
 }
}
static void _V0loop_k384(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k384" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k384, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k384, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn cdr 24 48) (close _V0loop_k385) (bruijn args 20 2))
    V_CALL(VGetArg(upenv, 24-1, 48), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k385, env)}),
      VGetArg(upenv, 20-1, 2));
 }
}
static void _V0loop_k383(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k383" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k383, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k383, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn + 23 36) (close _V0loop_k384) (bruijn i 19 1) 2)
    V_CALL(VGetArg(upenv, 23-1, 36), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k384, env)}),
      VGetArg(upenv, 19-1, 1),
      VEncodeInt(2l));
 }
}
static void _V0loop_k382(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k382" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k382, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k382, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn write 22 151) (close _V0loop_k383) (bruijn ##x.688 0 0) (bruijn port 21 1))
    V_CALL(VGetArg(upenv, 22-1, 151), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k383, env)}),
      _var0,
      VGetArg(upenv, 21-1, 1));
 }
}
static void _V0loop_k381(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k381" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k381, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k381, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn car 21 47) (close _V0loop_k382) (bruijn args 17 2))
    V_CALL(VGetArg(upenv, 21-1, 47), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k382, env)}),
      VGetArg(upenv, 17-1, 2));
 }
}
static void _V0loop_k379(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k379" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k379, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k379, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0loop_k380) (close _V0loop_k381))
    V_CALL_FUNC(_V0loop_k380, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k381, env)}));
 }
}
static void _V0loop_k387(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k387" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k387, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k387, runtime, upenv, 1, argc, _var0) {
  // ((bruijn error 21 177) (bruijn ##k.665 17 0) (##string ##string.1134) (bruijn ##x.691 0 0))
    V_CALL(VGetArg(upenv, 21-1, 177), runtime,
      VGetArg(upenv, 17-1, 0),
      VEncodePointer(&_V10string_D1134.sym, VPOINTER_OTHER),
      _var0);
 }
}
static void _V0loop_k386(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k386" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k386, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k386, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn substring 20 99) (close _V0loop_k387) (bruijn fmt 19 2) (bruijn i 16 1) (bruijn ##x.692 0 0))
    V_CALL(VGetArg(upenv, 20-1, 99), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k387, env)}),
      VGetArg(upenv, 19-1, 2),
      VGetArg(upenv, 16-1, 1),
      _var0);
 }
}
static void _V0loop_k378(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k378" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k378, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k378, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.683 0 0) ((bruijn null? 19 0) (close _V0loop_k379) (bruijn args 15 2)) ((bruijn + 19 36) (close _V0loop_k386) (bruijn i 15 1) 2))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 19-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k379, env)}),
      VGetArg(upenv, 15-1, 2));
} else {
    V_CALL(VGetArg(upenv, 19-1, 36), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k386, env)}),
      VGetArg(upenv, 15-1, 1),
      VEncodeInt(2l));
}
 }
}
static void _V0loop_k376(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k376" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k376, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k376, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0loop_k377) (close _V0loop_k378))
    V_CALL_FUNC(_V0loop_k377, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k378, env)}));
 }
}
static void _V0loop_k368(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k368" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k368, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k368, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.675 0 0) ((bruijn null? 17 0) (close _V0loop_k369) (bruijn args 13 2)) ((bruijn eqv? 17 18) (close _V0loop_k376) (bruijn ##x.2 5 0) '#\s))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 17-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k369, env)}),
      VGetArg(upenv, 13-1, 2));
} else {
    V_CALL(VGetArg(upenv, 17-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k376, env)}),
      VGetArg(upenv, 5-1, 0),
      VEncodeChar('s'));
}
 }
}
static void _V0loop_k366(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k366" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k366, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k366, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0loop_k367) (close _V0loop_k368))
    V_CALL_FUNC(_V0loop_k367, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k368, env)}));
 }
}
static void _V0loop_k363(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k363" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k363, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k363, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.672 0 0) (##vcore.display-word (close _V0loop_k364) #\newline (bruijn port 14 1)) ((bruijn eqv? 15 18) (close _V0loop_k366) (bruijn ##x.2 3 0) '#\a))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(VDisplay2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k364, env)}),
      VEncodeChar('\n'),
      VGetArg(upenv, 14-1, 1));
} else {
    V_CALL(VGetArg(upenv, 15-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k366, env)}),
      upenv->up->up->vars[0],
      VEncodeChar('a'));
}
 }
}
static void _V0loop_k361(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k361" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k361, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k361, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0loop_k362) (close _V0loop_k363))
    V_CALL_FUNC(_V0loop_k362, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k363, env)}));
 }
}
static void _V0loop_k358(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k358" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k358, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k358, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.669 0 0) (##vcore.display-word (close _V0loop_k359) #\~ (bruijn port 12 1)) ((bruijn eqv? 13 18) (close _V0loop_k361) (bruijn ##x.2 1 0) '#\n))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(VDisplay2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k359, env)}),
      VEncodeChar('~'),
      VGetArg(upenv, 12-1, 1));
} else {
    V_CALL(VGetArg(upenv, 13-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k361, env)}),
      upenv->vars[0],
      VEncodeChar('n'));
}
 }
}
static void _V0loop_k357(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k357" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k357, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k357, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn eqv? 12 18) (close _V0loop_k358) (bruijn ##x.2 0 0) '#\~)
    V_CALL(VGetArg(upenv, 12-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k358, env)}),
      _var0,
      VEncodeChar('~'));
 }
}
static void _V0loop_k356(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k356" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k356, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k356, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn string-ref 11 102) (close _V0loop_k357) (bruijn fmt 10 2) (bruijn ##x.699 0 0))
    V_CALL(VGetArg(upenv, 11-1, 102), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k357, env)}),
      VGetArg(upenv, 10-1, 2),
      _var0);
 }
}
static void _V0loop_k355(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k355" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k355, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k355, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn + 10 36) (close _V0loop_k356) (bruijn i 6 1) 1)
    V_CALL(VGetArg(upenv, 10-1, 36), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k356, env)}),
      VGetArg(upenv, 6-1, 1),
      VEncodeInt(1l));
 }
}
static void _V0loop_k353(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k353" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k353, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k353, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0loop_k354) (close _V0loop_k355))
    V_CALL_FUNC(_V0loop_k354, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k355, env)}));
 }
}
static void _V0loop_k352(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k352" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k352, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k352, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn = 8 24) (close _V0loop_k353) (bruijn ##x.702 0 0) (bruijn len 6 0))
    V_CALL(VGetArg(upenv, 8-1, 24), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k353, env)}),
      _var0,
      VGetArg(upenv, 6-1, 0));
 }
}
static void _V0loop_k389(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k389" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k389, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k389, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 6 0) (bruijn ##k.665 5 0) (bruijn ##x.704 0 0) (bruijn args 5 2))
    V_CALL(VGetArg(upenv, 6-1, 0), runtime,
      VGetArg(upenv, 5-1, 0),
      _var0,
      VGetArg(upenv, 5-1, 2));
 }
}
static void _V0loop_k388(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k388" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k388, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k388, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn + 8 36) (close _V0loop_k389) (bruijn i 4 1) 1)
    V_CALL(VGetArg(upenv, 8-1, 36), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k389, env)}),
      upenv->up->up->up->vars[1],
      VEncodeInt(1l));
 }
}
static void _V0loop_k351(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k351" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k351, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k351, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.667 0 0) ((bruijn + 7 36) (close _V0loop_k352) (bruijn i 3 1) 1) (##vcore.display-word (close _V0loop_k388) (bruijn c 1 0) (bruijn port 6 1)))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 7-1, 36), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k352, env)}),
      upenv->up->up->vars[1],
      VEncodeInt(1l));
} else {
    V_CALL_FUNC(VDisplay2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k388, env)}),
      upenv->vars[0],
      VGetArg(upenv, 6-1, 1));
}
 }
}
static void _V0loop_k350(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k350" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k350, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k350, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn eq? 6 15) (close _V0loop_k351) (bruijn c 0 0) #\~)
    V_CALL(VGetArg(upenv, 6-1, 15), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k351, env)}),
      _var0,
      VEncodeChar('~'));
 }
}
static void _V0loop_k349(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k349" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k349, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k349, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.666 0 0) ((bruijn string-ref 5 102) (close _V0loop_k350) (bruijn fmt 4 2) (bruijn i 1 1)) ((bruijn ##k.665 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 5-1, 102), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k350, env)}),
      upenv->up->up->up->vars[2],
      upenv->vars[1]);
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0loop_lambda154(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0loop_lambda154" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0loop_lambda154, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda154, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn < 4 23) (close _V0loop_k349) (bruijn i 0 1) (bruijn len 2 0))
    V_CALL(upenv->up->up->up->vars[23], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k349, env)}),
      _var1,
      upenv->up->vars[0]);
 }
}
static void _V0format__printf_k348(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0format__printf_k348" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0format__printf_k348, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0format__printf_k348, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (letrec 1 ((close _V0loop_lambda154)) ((bruijn loop 0 0) (bruijn ##k.664 2 0) 0 (bruijn args 2 3)))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda154, env)});
    V_CALL(env->vars[0], runtime,
      upenv->up->vars[0],
      VEncodeInt(0l),
      upenv->up->vars[3]);
    }
 }
}
static void _V0format__printf_lambda153(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V0format__printf_lambda153" };
 VRecordCall2(runtime, &dbg);
 if(argc != 4) {
  VError("Not enough arguments to _V0format__printf_lambda153, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0format__printf_lambda153, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // ((bruijn string-length 1 104) (close _V0format__printf_k348) (bruijn fmt 0 2))
    V_CALL(upenv->vars[104], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0format__printf_k348, env)}),
      _var2);
 }
}
static void _V0format__sprintf_k393(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0format__sprintf_k393" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0format__sprintf_k393, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0format__sprintf_k393, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##k.705 4 0) (bruijn ret 1 0))
    V_CALL(upenv->up->up->up->vars[0], runtime,
      upenv->vars[0]);
 }
}
static void _V0format__sprintf_k392(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0format__sprintf_k392" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0format__sprintf_k392, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0format__sprintf_k392, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn close-port 4 133) (close _V0format__sprintf_k393) (bruijn strport 2 0))
    V_CALL(upenv->up->up->up->vars[133], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0format__sprintf_k393, env)}),
      upenv->up->vars[0]);
 }
}
static void _V0format__sprintf_k391(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0format__sprintf_k391" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0format__sprintf_k391, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0format__sprintf_k391, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn get-output-string 3 140) (close _V0format__sprintf_k392) (bruijn strport 1 0))
    V_CALL(upenv->up->up->vars[140], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0format__sprintf_k392, env)}),
      upenv->vars[0]);
 }
}
static void _V0format__sprintf_k390(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0format__sprintf_k390" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0format__sprintf_k390, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0format__sprintf_k390, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn format-printf 2 169) (close _V0format__sprintf_k391) (bruijn strport 0 0) (bruijn fmt 1 1) (bruijn args 1 2))
    V_CALL(upenv->up->vars[169], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0format__sprintf_k391, env)}),
      _var0,
      upenv->vars[1],
      upenv->vars[2]);
 }
}
static void _V0format__sprintf_lambda155(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0format__sprintf_lambda155" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0format__sprintf_lambda155, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0format__sprintf_lambda155, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn open-output-string 1 139) (close _V0format__sprintf_k390))
    V_CALL(upenv->vars[139], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0format__sprintf_k390, env)}));
 }
}
static void _V0printf_k394(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0printf_k394" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0printf_k394, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0printf_k394, runtime, upenv, 1, argc, _var0) {
  // ((bruijn format-printf 2 169) (bruijn ##k.708 1 0) (bruijn ##x.709 0 0) (bruijn fmt 1 1) '())
    V_CALL(upenv->up->vars[169], runtime,
      upenv->vars[0],
      _var0,
      upenv->vars[1],
      VNULL);
 }
}
static void _V0printf_k397(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0printf_k397" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0printf_k397, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0printf_k397, runtime, upenv, 1, argc, _var0) {
  // ((bruijn format-printf 4 169) (bruijn ##k.710 3 0) (bruijn ##x.712 1 0) (bruijn a 3 1) (bruijn ##x.713 0 0))
    V_CALL(upenv->up->up->up->vars[169], runtime,
      upenv->up->up->vars[0],
      upenv->vars[0],
      upenv->up->up->vars[1],
      _var0);
 }
}
static void _V0printf_k396(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0printf_k396" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0printf_k396, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0printf_k396, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn cons 3 46) (close _V0printf_k397) (bruijn b 2 2) (bruijn args 2 3))
    V_CALL(upenv->up->up->vars[46], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0printf_k397, env)}),
      upenv->up->vars[2],
      upenv->up->vars[3]);
 }
}
static void _V0printf_k395(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0printf_k395" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0printf_k395, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0printf_k395, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.711 0 0) ((bruijn current-output-port 2 129) (close _V0printf_k396)) ((bruijn format-printf 2 169) (bruijn ##k.710 1 0) (bruijn a 1 1) (bruijn b 1 2) (bruijn args 1 3)))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->up->vars[129], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0printf_k396, env)}));
} else {
    V_CALL(upenv->up->vars[169], runtime,
      upenv->vars[0],
      upenv->vars[1],
      upenv->vars[2],
      upenv->vars[3]);
}
 }
}
__attribute__((used)) static void _V20CaseError__V0printf_lambda156(VRuntime * runtime, VEnv * upenv, int argc, ...) {
 // (_V0printf_lambda156 #t (2 ((bruijn current-output-port 1 129) (close _V0printf_k394))) (3 + ((bruijn string? 1 8) (close _V0printf_k395) (bruijn a 0 1))))
 VError("Not enough arguments to _V0printf_lambda156, got ~D~N"
 "-- expected 2~N"
 "-- expected 3 or more~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V0printf_lambda156(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V20Case0__V0printf_lambda156" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case0__V0printf_lambda156, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn current-output-port 1 129) (close _V0printf_k394))
    V_CALL(upenv->vars[129], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0printf_k394, env)}));
 }
}
__attribute__((used)) static void _V20Case1__V0printf_lambda156(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, ...) {
 static VDebugInfo dbg = { "_V20Case1__V0printf_lambda156" };
 VRecordCall2(runtime, &dbg);
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 3, argc, _var2);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case1__V0printf_lambda156, runtime, upenv, 3, argc, _var0, _var1, _var2, _varargs) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _varargs;
  // ((bruijn string? 1 8) (close _V0printf_k395) (bruijn a 0 1))
    V_CALL(upenv->vars[8], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0printf_k395, env)}),
      _var1);
 }
}
void _V0printf_lambda156(VRuntime * runtime, VEnv * upenv, int argc, ...);
asm(
".intel_syntax noprefix\n"
#ifdef __linux__
".type _V0printf_lambda156, @function\n"
#endif
"_V0printf_lambda156:\n"
"    cmp " ARGC_REG ", 2\n"
"    je _V20Case0__V0printf_lambda156\n"
"    cmp " ARGC_REG ", 3\n"
"    jge _V20Case1__V0printf_lambda156\n"
"    jmp _V20CaseError__V0printf_lambda156\n"
);
static void _V0sprintf_k401(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0sprintf_k401" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0sprintf_k401, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0sprintf_k401, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##k.714 4 0) (bruijn ret 1 0))
    V_CALL(upenv->up->up->up->vars[0], runtime,
      upenv->vars[0]);
 }
}
static void _V0sprintf_k400(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0sprintf_k400" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0sprintf_k400, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0sprintf_k400, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn close-port 4 133) (close _V0sprintf_k401) (bruijn strport 2 0))
    V_CALL(upenv->up->up->up->vars[133], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0sprintf_k401, env)}),
      upenv->up->vars[0]);
 }
}
static void _V0sprintf_k399(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0sprintf_k399" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0sprintf_k399, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0sprintf_k399, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn get-output-string 3 140) (close _V0sprintf_k400) (bruijn strport 1 0))
    V_CALL(upenv->up->up->vars[140], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0sprintf_k400, env)}),
      upenv->vars[0]);
 }
}
static void _V0sprintf_k398(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0sprintf_k398" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0sprintf_k398, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0sprintf_k398, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn format-printf 2 169) (close _V0sprintf_k399) (bruijn strport 0 0) (bruijn fmt 1 1) (bruijn args 1 2))
    V_CALL(upenv->up->vars[169], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0sprintf_k399, env)}),
      _var0,
      upenv->vars[1],
      upenv->vars[2]);
 }
}
static void _V0sprintf_lambda157(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, ...) {
 static VDebugInfo dbg = { "_V0sprintf_lambda157" };
 VRecordCall2(runtime, &dbg);
 if(argc < 2) {
  VError("Not enough arguments to _V0sprintf_lambda157, got ~D~N"
  "-- expected 2 or more~N"
  , argc);
 }
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 2, argc, _var1);
 V_GC_CHECK2_VARARGS((VFunc)_V0sprintf_lambda157, runtime, upenv, 2, argc, _var0, _var1, _varargs) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _varargs;
  // ((bruijn open-output-string 1 139) (close _V0sprintf_k398))
    V_CALL(upenv->vars[139], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0sprintf_k398, env)}));
 }
}
static void _V0format_k403(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0format_k403" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0format_k403, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0format_k403, runtime, upenv, 1, argc, _var0) {
  // ((bruijn format-sprintf 3 170) (bruijn ##k.718 2 0) (bruijn a 2 1) (bruijn ##x.720 0 0))
    V_CALL(upenv->up->up->vars[170], runtime,
      upenv->up->vars[0],
      upenv->up->vars[1],
      _var0);
 }
}
static void _V0format_k405(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0format_k405" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0format_k405, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0format_k405, runtime, upenv, 1, argc, _var0) {
  // ((bruijn format-printf 4 169) (bruijn ##k.718 3 0) (bruijn ##x.722 0 0) (bruijn b 3 2) (bruijn args 3 3))
    V_CALL(upenv->up->up->up->vars[169], runtime,
      upenv->up->up->vars[0],
      _var0,
      upenv->up->up->vars[2],
      upenv->up->up->vars[3]);
 }
}
static void _V0format_k406(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0format_k406" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0format_k406, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0format_k406, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.723 0 0) ((bruijn format-sprintf 4 170) (bruijn ##k.718 3 0) (bruijn b 3 2) (bruijn args 3 3)) ((bruijn format-printf 4 169) (bruijn ##k.718 3 0) (bruijn a 3 1) (bruijn b 3 2) (bruijn args 3 3)))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->up->up->up->vars[170], runtime,
      upenv->up->up->vars[0],
      upenv->up->up->vars[2],
      upenv->up->up->vars[3]);
} else {
    V_CALL(upenv->up->up->up->vars[169], runtime,
      upenv->up->up->vars[0],
      upenv->up->up->vars[1],
      upenv->up->up->vars[2],
      upenv->up->up->vars[3]);
}
 }
}
static void _V0format_k404(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0format_k404" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0format_k404, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0format_k404, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.721 0 0) ((bruijn current-output-port 3 129) (close _V0format_k405)) ((bruijn eq? 3 15) (close _V0format_k406) (bruijn a 2 1) #f))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->up->up->vars[129], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0format_k405, env)}));
} else {
    V_CALL(upenv->up->up->vars[15], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0format_k406, env)}),
      upenv->up->vars[1],
      VEncodeBool(false));
}
 }
}
static void _V0format_k402(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0format_k402" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0format_k402, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0format_k402, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.719 0 0) ((bruijn cons 2 46) (close _V0format_k403) (bruijn b 1 2) (bruijn args 1 3)) ((bruijn eq? 2 15) (close _V0format_k404) (bruijn a 1 1) #t))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->up->vars[46], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0format_k403, env)}),
      upenv->vars[2],
      upenv->vars[3]);
} else {
    V_CALL(upenv->up->vars[15], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0format_k404, env)}),
      upenv->vars[1],
      VEncodeBool(true));
}
 }
}
__attribute__((used)) static void _V20CaseError__V0format_lambda158(VRuntime * runtime, VEnv * upenv, int argc, ...) {
 // (_V0format_lambda158 #t (2 ((bruijn sprintf 1 172) (bruijn ##k.717 0 0) (bruijn fmt 0 1))) (3 + ((bruijn string? 1 8) (close _V0format_k402) (bruijn a 0 1))))
 VError("Not enough arguments to _V0format_lambda158, got ~D~N"
 "-- expected 2~N"
 "-- expected 3 or more~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V0format_lambda158(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V20Case0__V0format_lambda158" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case0__V0format_lambda158, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn sprintf 1 172) (bruijn ##k.717 0 0) (bruijn fmt 0 1))
    V_CALL(upenv->vars[172], runtime,
      _var0,
      _var1);
 }
}
__attribute__((used)) static void _V20Case1__V0format_lambda158(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, ...) {
 static VDebugInfo dbg = { "_V20Case1__V0format_lambda158" };
 VRecordCall2(runtime, &dbg);
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 3, argc, _var2);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case1__V0format_lambda158, runtime, upenv, 3, argc, _var0, _var1, _var2, _varargs) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _varargs;
  // ((bruijn string? 1 8) (close _V0format_k402) (bruijn a 0 1))
    V_CALL(upenv->vars[8], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0format_k402, env)}),
      _var1);
 }
}
void _V0format_lambda158(VRuntime * runtime, VEnv * upenv, int argc, ...);
asm(
".intel_syntax noprefix\n"
#ifdef __linux__
".type _V0format_lambda158, @function\n"
#endif
"_V0format_lambda158:\n"
"    cmp " ARGC_REG ", 2\n"
"    je _V20Case0__V0format_lambda158\n"
"    cmp " ARGC_REG ", 3\n"
"    jge _V20Case1__V0format_lambda158\n"
"    jmp _V20CaseError__V0format_lambda158\n"
);
static void _V0raise__continuable_k409(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0raise__continuable_k409" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0raise__continuable_k409, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0raise__continuable_k409, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##k.724 3 0) (bruijn ret 1 0))
    V_CALL(upenv->up->up->vars[0], runtime,
      upenv->vars[0]);
 }
}
static void _V0raise__continuable_k408(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0raise__continuable_k408" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0raise__continuable_k408, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0raise__continuable_k408, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.push-exception-handler (close _V0raise__continuable_k409) (bruijn handler 1 0))
    V_CALL_FUNC(VPushExceptionHandler, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0raise__continuable_k409, env)}),
      upenv->vars[0]);
 }
}
static void _V0raise__continuable_k407(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0raise__continuable_k407" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0raise__continuable_k407, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0raise__continuable_k407, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn handler 0 0) (close _V0raise__continuable_k408) (bruijn x 1 1))
    V_CALL(_var0, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0raise__continuable_k408, env)}),
      upenv->vars[1]);
 }
}
static void _V0raise__continuable_lambda159(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0raise__continuable_lambda159" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0raise__continuable_lambda159, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0raise__continuable_lambda159, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (##vcore.get-exception-handler (close _V0raise__continuable_k407))
    V_CALL_FUNC(VGetExceptionHandler, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0raise__continuable_k407, env)}));
 }
}
static void _V0with__exception__handler_k412(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0with__exception__handler_k412" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0with__exception__handler_k412, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0with__exception__handler_k412, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##k.726 3 0) (bruijn ret 1 0))
    V_CALL(upenv->up->up->vars[0], runtime,
      upenv->vars[0]);
 }
}
static void _V0with__exception__handler_k411(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0with__exception__handler_k411" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0with__exception__handler_k411, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0with__exception__handler_k411, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.pop-exception-handler (close _V0with__exception__handler_k412) (bruijn handler 2 1))
    V_CALL_FUNC(VPopExceptionHandler, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0with__exception__handler_k412, env)}),
      upenv->up->vars[1]);
 }
}
static void _V0with__exception__handler_k410(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0with__exception__handler_k410" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0with__exception__handler_k410, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0with__exception__handler_k410, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn thunk 1 2) (close _V0with__exception__handler_k411))
    V_CALL(upenv->vars[2], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0with__exception__handler_k411, env)}));
 }
}
static void _V0with__exception__handler_lambda160(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0with__exception__handler_lambda160" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0with__exception__handler_lambda160, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0with__exception__handler_lambda160, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // (##vcore.push-exception-handler (close _V0with__exception__handler_k410) (bruijn handler 0 1))
    V_CALL_FUNC(VPushExceptionHandler, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0with__exception__handler_k410, env)}),
      _var1);
 }
}
static void _V0loop_k425(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k425" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k425, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k425, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 7 0) (bruijn ##k.737 6 0) (bruijn ##x.741 0 0))
    V_CALL(VGetArg(upenv, 7-1, 0), runtime,
      VGetArg(upenv, 6-1, 0),
      _var0);
 }
}
static void _V0loop_k424(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k424" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k424, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k424, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn cdr 15 48) (close _V0loop_k425) (bruijn irritants 5 1))
    V_CALL(VGetArg(upenv, 15-1, 48), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k425, env)}),
      VGetArg(upenv, 5-1, 1));
 }
}
static void _V0loop_k423(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k423" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k423, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k423, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn write 14 151) (close _V0loop_k424) (bruijn ##x.742 0 0) (bruijn err 12 0))
    V_CALL(VGetArg(upenv, 14-1, 151), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k424, env)}),
      _var0,
      VGetArg(upenv, 12-1, 0));
 }
}
static void _V0loop_k422(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k422" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k422, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k422, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn car 13 47) (close _V0loop_k423) (bruijn irritants 3 1))
    V_CALL(VGetArg(upenv, 13-1, 47), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k423, env)}),
      upenv->up->up->vars[1]);
 }
}
static void _V0loop_k421(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k421" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k421, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k421, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.738 0 0) ((bruijn display 12 150) (close _V0loop_k422) (##string ##string.1122) (bruijn err 10 0)) ((bruijn ##k.737 2 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 12-1, 150), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k422, env)}),
      VEncodePointer(&_V10string_D1122.sym, VPOINTER_OTHER),
      VGetArg(upenv, 10-1, 0));
} else {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0loop_k420(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k420" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k420, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k420, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn not 11 22) (close _V0loop_k421) (bruijn ##x.743 0 0))
    V_CALL(VGetArg(upenv, 11-1, 22), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k421, env)}),
      _var0);
 }
}
static void _V0loop_lambda162(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0loop_lambda162" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0loop_lambda162, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda162, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn null? 10 0) (close _V0loop_k420) (bruijn irritants 0 1))
    V_CALL(VGetArg(upenv, 10-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k420, env)}),
      _var1);
 }
}
static void _V0error_k419(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0error_k419" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0error_k419, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0error_k419, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (letrec 1 ((close _V0loop_lambda162)) ((bruijn loop 0 0) (bruijn ##k.735 2 0) (bruijn irritants 8 2)))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda162, env)});
    V_CALL(env->vars[0], runtime,
      upenv->up->vars[0],
      VGetArg(upenv, 8-1, 2));
    }
 }
}
static void _V0error_k418(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0error_k418" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0error_k418, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0error_k418, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.734 1 0) ((bruijn display 7 150) (close _V0error_k419) (##string ##string.1135) (bruijn err 5 0)) ((bruijn ##k.735 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(VGetArg(upenv, 7-1, 150), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0error_k419, env)}),
      VEncodePointer(&_V10string_D1135.sym, VPOINTER_OTHER),
      VGetArg(upenv, 5-1, 0));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0error_k427(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0error_k427" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0error_k427, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0error_k427, runtime, upenv, 1, argc, _var0) {
  // (##vcore.abort (bruijn ##k.729 7 0))
    V_CALL_FUNC(VAbort2, NULL, runtime,
      VGetArg(upenv, 7-1, 0));
 }
}
static void _V0error_k426(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0error_k426" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0error_k426, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0error_k426, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn newline 7 146) (close _V0error_k427) (bruijn err 5 0))
    V_CALL(VGetArg(upenv, 7-1, 146), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0error_k427, env)}),
      VGetArg(upenv, 5-1, 0));
 }
}
static void _V0error_k417(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0error_k417" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0error_k417, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0error_k417, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0error_k418) (close _V0error_k426))
    V_CALL_FUNC(_V0error_k418, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0error_k426, env)}));
 }
}
static void _V0error_k416(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0error_k416" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0error_k416, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0error_k416, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn not 5 22) (close _V0error_k417) (bruijn ##x.744 0 0))
    V_CALL(VGetArg(upenv, 5-1, 22), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0error_k417, env)}),
      _var0);
 }
}
static void _V0error_k415(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0error_k415" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0error_k415, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0error_k415, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn null? 4 0) (close _V0error_k416) (bruijn irritants 3 2))
    V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0error_k416, env)}),
      upenv->up->up->vars[2]);
 }
}
static void _V0error_k414(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0error_k414" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0error_k414, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0error_k414, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn display 3 150) (close _V0error_k415) (bruijn msg 2 1) (bruijn err 1 0))
    V_CALL(upenv->up->up->vars[150], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0error_k415, env)}),
      upenv->up->vars[1],
      upenv->vars[0]);
 }
}
static void _V0error_k413(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0error_k413" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0error_k413, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0error_k413, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn display 2 150) (close _V0error_k414) (##string ##string.1136) (bruijn err 0 0))
    V_CALL(upenv->up->vars[150], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0error_k414, env)}),
      VEncodePointer(&_V10string_D1136.sym, VPOINTER_OTHER),
      _var0);
 }
}
static void _V0error_lambda161(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, ...) {
 static VDebugInfo dbg = { "_V0error_lambda161" };
 VRecordCall2(runtime, &dbg);
 if(argc < 2) {
  VError("Not enough arguments to _V0error_lambda161, got ~D~N"
  "-- expected 2 or more~N"
  , argc);
 }
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 2, argc, _var1);
 V_GC_CHECK2_VARARGS((VFunc)_V0error_lambda161, runtime, upenv, 2, argc, _var0, _var1, _varargs) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _varargs;
  // ((bruijn current-error-port 1 130) (close _V0error_k413))
    V_CALL(upenv->vars[130], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0error_k413, env)}));
 }
}
static void _V0fiber__fork_lambda163(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, ...) {
 static VDebugInfo dbg = { "_V0fiber__fork_lambda163" };
 VRecordCall2(runtime, &dbg);
 if(argc < 1) {
  VError("Not enough arguments to _V0fiber__fork_lambda163, got ~D~N"
  "-- expected 1 or more~N"
  , argc);
 }
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 1, argc, _var0);
 V_GC_CHECK2_VARARGS((VFunc)_V0fiber__fork_lambda163, runtime, upenv, 1, argc, _var0, _varargs) {
  // (##vcore.fiber-fork-list (bruijn ##k.745 0 0) (bruijn args 0 1))
    V_CALL_FUNC(VFiberForkList, NULL, runtime,
      _var0,
      _varargs);
 }
}
static void _V0fiber__map_k428(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0fiber__map_k428" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0fiber__map_k428, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0fiber__map_k428, runtime, upenv, 1, argc, _var0) {
  // ((bruijn fiber-fork-list 2 178) (bruijn ##k.746 1 0) (bruijn ##x.747 0 0))
    V_CALL(upenv->up->vars[178], runtime,
      upenv->vars[0],
      _var0);
 }
}
static void _V0fiber__map_lambda166(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0fiber__map_lambda166" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0fiber__map_lambda166, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0fiber__map_lambda166, runtime, upenv, 1, argc, _var0) {
  // ((bruijn f 2 1) (bruijn ##k.749 0 0) (bruijn e 1 1))
    V_CALL(upenv->up->vars[1], runtime,
      _var0,
      upenv->vars[1]);
 }
}
static void _V0fiber__map_lambda165(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0fiber__map_lambda165" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0fiber__map_lambda165, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0fiber__map_lambda165, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##k.748 0 0) (close _V0fiber__map_lambda166))
    V_CALL(_var0, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0fiber__map_lambda166, env)}));
 }
}
static void _V0fiber__map_k429(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0fiber__map_k429" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0fiber__map_k429, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0fiber__map_k429, runtime, upenv, 1, argc, _var0) {
  // ((bruijn fiber-fork-list 2 178) (bruijn ##k.750 1 0) (bruijn ##x.751 0 0))
    V_CALL(upenv->up->vars[178], runtime,
      upenv->vars[0],
      _var0);
 }
}
static void _V0fiber__map_lambda168(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0fiber__map_lambda168" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0fiber__map_lambda168, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0fiber__map_lambda168, runtime, upenv, 1, argc, _var0) {
  // ((bruijn f 2 1) (bruijn ##k.753 0 0) (bruijn a 1 1) (bruijn b 1 2))
    V_CALL(upenv->up->vars[1], runtime,
      _var0,
      upenv->vars[1],
      upenv->vars[2]);
 }
}
static void _V0fiber__map_lambda167(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0fiber__map_lambda167" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0fiber__map_lambda167, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0fiber__map_lambda167, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn ##k.752 0 0) (close _V0fiber__map_lambda168))
    V_CALL(_var0, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0fiber__map_lambda168, env)}));
 }
}
static void _V0fiber__map_k430(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0fiber__map_k430" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0fiber__map_k430, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0fiber__map_k430, runtime, upenv, 1, argc, _var0) {
  // ((bruijn fiber-fork-list 2 178) (bruijn ##k.754 1 0) (bruijn ##x.755 0 0))
    V_CALL(upenv->up->vars[178], runtime,
      upenv->vars[0],
      _var0);
 }
}
static void _V0fiber__map_lambda170(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0fiber__map_lambda170" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0fiber__map_lambda170, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0fiber__map_lambda170, runtime, upenv, 1, argc, _var0) {
  // ((bruijn f 2 1) (bruijn ##k.757 0 0) (bruijn a 1 1) (bruijn b 1 2) (bruijn c 1 3))
    V_CALL(upenv->up->vars[1], runtime,
      _var0,
      upenv->vars[1],
      upenv->vars[2],
      upenv->vars[3]);
 }
}
static void _V0fiber__map_lambda169(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V0fiber__map_lambda169" };
 VRecordCall2(runtime, &dbg);
 if(argc != 4) {
  VError("Not enough arguments to _V0fiber__map_lambda169, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0fiber__map_lambda169, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // ((bruijn ##k.756 0 0) (close _V0fiber__map_lambda170))
    V_CALL(_var0, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0fiber__map_lambda170, env)}));
 }
}
static void _V0fiber__map_k431(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0fiber__map_k431" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0fiber__map_k431, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0fiber__map_k431, runtime, upenv, 1, argc, _var0) {
  // ((bruijn fiber-fork-list 2 178) (bruijn ##k.758 1 0) (bruijn ##x.759 0 0))
    V_CALL(upenv->up->vars[178], runtime,
      upenv->vars[0],
      _var0);
 }
}
static void _V0fiber__map_lambda172(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0fiber__map_lambda172" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0fiber__map_lambda172, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0fiber__map_lambda172, runtime, upenv, 1, argc, _var0) {
  // ((bruijn apply 3 155) (bruijn ##k.761 0 0) (bruijn f 2 1) (bruijn args 1 1))
    V_CALL(upenv->up->up->vars[155], runtime,
      _var0,
      upenv->up->vars[1],
      upenv->vars[1]);
 }
}
static void _V0fiber__map_lambda171(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, ...) {
 static VDebugInfo dbg = { "_V0fiber__map_lambda171" };
 VRecordCall2(runtime, &dbg);
 if(argc < 1) {
  VError("Not enough arguments to _V0fiber__map_lambda171, got ~D~N"
  "-- expected 1 or more~N"
  , argc);
 }
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 1, argc, _var0);
 V_GC_CHECK2_VARARGS((VFunc)_V0fiber__map_lambda171, runtime, upenv, 1, argc, _var0, _varargs) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _varargs;
  // ((bruijn ##k.760 0 0) (close _V0fiber__map_lambda172))
    V_CALL(_var0, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0fiber__map_lambda172, env)}));
 }
}
__attribute__((used)) static void _V20CaseError__V0fiber__map_lambda164(VRuntime * runtime, VEnv * upenv, int argc, ...) {
 // (_V0fiber__map_lambda164 #t (3 ((bruijn map 1 87) (close _V0fiber__map_k428) (close _V0fiber__map_lambda165) (bruijn lst 0 2))) (4 ((bruijn map 1 87) (close _V0fiber__map_k429) (close _V0fiber__map_lambda167) (bruijn as 0 2) (bruijn bs 0 3))) (5 ((bruijn map 1 87) (close _V0fiber__map_k430) (close _V0fiber__map_lambda169) (bruijn as 0 2) (bruijn bs 0 3) (bruijn cs 0 4))) (3 + ((bruijn apply 1 155) (close _V0fiber__map_k431) (bruijn map 1 87) (close _V0fiber__map_lambda171) (bruijn as 0 2) (bruijn args 0 3))))
 VError("Not enough arguments to _V0fiber__map_lambda164, got ~D~N"
 "-- expected 3~N"
 "-- expected 4~N"
 "-- expected 5~N"
 "-- expected 3 or more~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V0fiber__map_lambda164(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V20Case0__V0fiber__map_lambda164" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case0__V0fiber__map_lambda164, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn map 1 87) (close _V0fiber__map_k428) (close _V0fiber__map_lambda165) (bruijn lst 0 2))
    V_CALL(upenv->vars[87], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0fiber__map_k428, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0fiber__map_lambda165, env)}),
      _var2);
 }
}
__attribute__((used)) static void _V20Case1__V0fiber__map_lambda164(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V20Case1__V0fiber__map_lambda164" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case1__V0fiber__map_lambda164, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // ((bruijn map 1 87) (close _V0fiber__map_k429) (close _V0fiber__map_lambda167) (bruijn as 0 2) (bruijn bs 0 3))
    V_CALL(upenv->vars[87], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0fiber__map_k429, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0fiber__map_lambda167, env)}),
      _var2,
      _var3);
 }
}
__attribute__((used)) static void _V20Case2__V0fiber__map_lambda164(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4) {
 static VDebugInfo dbg = { "_V20Case2__V0fiber__map_lambda164" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case2__V0fiber__map_lambda164, runtime, upenv, 5, argc, _var0, _var1, _var2, _var3, _var4) {
  struct { VEnv env; VWORD argv[5]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 5, 5, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  env->vars[4] = _var4;
  // ((bruijn map 1 87) (close _V0fiber__map_k430) (close _V0fiber__map_lambda169) (bruijn as 0 2) (bruijn bs 0 3) (bruijn cs 0 4))
    V_CALL(upenv->vars[87], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0fiber__map_k430, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0fiber__map_lambda169, env)}),
      _var2,
      _var3,
      _var4);
 }
}
__attribute__((used)) static void _V20Case3__V0fiber__map_lambda164(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, ...) {
 static VDebugInfo dbg = { "_V20Case3__V0fiber__map_lambda164" };
 VRecordCall2(runtime, &dbg);
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 3, argc, _var2);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case3__V0fiber__map_lambda164, runtime, upenv, 3, argc, _var0, _var1, _var2, _varargs) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _varargs;
  // ((bruijn apply 1 155) (close _V0fiber__map_k431) (bruijn map 1 87) (close _V0fiber__map_lambda171) (bruijn as 0 2) (bruijn args 0 3))
    V_CALL(upenv->vars[155], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0fiber__map_k431, env)}),
      upenv->vars[87],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0fiber__map_lambda171, env)}),
      _var2,
      _varargs);
 }
}
void _V0fiber__map_lambda164(VRuntime * runtime, VEnv * upenv, int argc, ...);
asm(
".intel_syntax noprefix\n"
#ifdef __linux__
".type _V0fiber__map_lambda164, @function\n"
#endif
"_V0fiber__map_lambda164:\n"
"    cmp " ARGC_REG ", 3\n"
"    je _V20Case0__V0fiber__map_lambda164\n"
"    cmp " ARGC_REG ", 4\n"
"    je _V20Case1__V0fiber__map_lambda164\n"
"    cmp " ARGC_REG ", 5\n"
"    je _V20Case2__V0fiber__map_lambda164\n"
"    cmp " ARGC_REG ", 3\n"
"    jge _V20Case3__V0fiber__map_lambda164\n"
"    jmp _V20CaseError__V0fiber__map_lambda164\n"
);
static void _V0vanity_V0core_V20_k443(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k443" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k443, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k443, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##k.4 18 0) (##inline ##vcore.cons (##inline ##vcore.cons 'null? (bruijn null? 12 0)) (##inline ##vcore.cons (##inline ##vcore.cons 'eof-object? (bruijn eof-object? 12 2)) (##inline ##vcore.cons (##inline ##vcore.cons 'boolean? (bruijn boolean? 12 1)) (##inline ##vcore.cons (##inline ##vcore.cons 'pair? (bruijn pair? 12 3)) (##inline ##vcore.cons (##inline ##vcore.cons 'vector? (bruijn vector? 12 4)) (##inline ##vcore.cons (##inline ##vcore.cons 'record? (bruijn record? 12 5)) (##inline ##vcore.cons (##inline ##vcore.cons 'procedure? (bruijn procedure? 12 6)) (##inline ##vcore.cons (##inline ##vcore.cons 'symbol? (bruijn symbol? 12 7)) (##inline ##vcore.cons (##inline ##vcore.cons 'string? (bruijn string? 12 8)) (##inline ##vcore.cons (##inline ##vcore.cons 'exact? (bruijn exact? 12 10)) (##inline ##vcore.cons (##inline ##vcore.cons 'exact-integer? (bruijn exact-integer? 12 11)) (##inline ##vcore.cons (##inline ##vcore.cons 'inexact? (bruijn inexact? 12 13)) (##inline ##vcore.cons (##inline ##vcore.cons 'real? (bruijn real? 12 14)) (##inline ##vcore.cons (##inline ##vcore.cons 'integer? (bruijn integer? 12 12)) (##inline ##vcore.cons (##inline ##vcore.cons 'char? (bruijn char? 12 9)) (##inline ##vcore.cons (##inline ##vcore.cons 'eq? (bruijn eq? 12 15)) (##inline ##vcore.cons (##inline ##vcore.cons 'symbol=? (bruijn symbol=? 12 16)) (##inline ##vcore.cons (##inline ##vcore.cons 'eqv? (bruijn eqv? 12 18)) (##inline ##vcore.cons (##inline ##vcore.cons 'equal? (bruijn equal? 12 21)) (##inline ##vcore.cons (##inline ##vcore.cons 'not (bruijn not 12 22)) (##inline ##vcore.cons (##inline ##vcore.cons '< (bruijn < 12 23)) (##inline ##vcore.cons (##inline ##vcore.cons '= (bruijn = 12 24)) (##inline ##vcore.cons (##inline ##vcore.cons '> (bruijn > 12 25)) (##inline ##vcore.cons (##inline ##vcore.cons '<= (bruijn <= 12 26)) (##inline ##vcore.cons (##inline ##vcore.cons '>= (bruijn >= 12 27)) (##inline ##vcore.cons (##inline ##vcore.cons 'inexact (bruijn inexact 12 28)) (##inline ##vcore.cons (##inline ##vcore.cons 'exact->inexact (bruijn exact->inexact 12 29)) (##inline ##vcore.cons (##inline ##vcore.cons 'number? (bruijn number? 12 30)) (##inline ##vcore.cons (##inline ##vcore.cons 'complex? (bruijn complex? 12 31)) (##inline ##vcore.cons (##inline ##vcore.cons 'rational? (bruijn rational? 12 32)) (##inline ##vcore.cons (##inline ##vcore.cons 'positive? (bruijn positive? 12 33)) (##inline ##vcore.cons (##inline ##vcore.cons 'negative? (bruijn negative? 12 35)) (##inline ##vcore.cons (##inline ##vcore.cons 'zero? (bruijn zero? 12 34)) (##inline ##vcore.cons (##inline ##vcore.cons '+ (bruijn + 12 36)) (##inline ##vcore.cons (##inline ##vcore.cons '- (bruijn - 12 37)) (##inline ##vcore.cons (##inline ##vcore.cons '* (bruijn * 12 38)) (##inline ##vcore.cons (##inline ##vcore.cons '/ (bruijn / 12 39)) (##inline ##vcore.cons (##inline ##vcore.cons 'quotient (bruijn quotient 12 40)) (##inline ##vcore.cons (##inline ##vcore.cons 'remainder (bruijn remainder 12 41)) (##inline ##vcore.cons (##inline ##vcore.cons 'max (bruijn max 12 44)) (##inline ##vcore.cons (##inline ##vcore.cons 'min (bruijn min 12 45)) (##inline ##vcore.cons (##inline ##vcore.cons 'abs (bruijn abs 12 42)) (##inline ##vcore.cons (##inline ##vcore.cons 'square (bruijn square 12 43)) (##inline ##vcore.cons (##inline ##vcore.cons 'cons (bruijn cons 12 46)) (##inline ##vcore.cons (##inline ##vcore.cons 'car (bruijn car 12 47)) (##inline ##vcore.cons (##inline ##vcore.cons 'cdr (bruijn cdr 12 48)) (##inline ##vcore.cons (##inline ##vcore.cons 'set-car! (bruijn set-car! 12 49)) (##inline ##vcore.cons (##inline ##vcore.cons 'set-cdr! (bruijn set-cdr! 12 50)) (##inline ##vcore.cons (##inline ##vcore.cons 'caar (bruijn caar 12 51)) (##inline ##vcore.cons (##inline ##vcore.cons 'cadr (bruijn cadr 12 52)) (##inline ##vcore.cons (##inline ##vcore.cons 'cdar (bruijn cdar 12 53)) (##inline ##vcore.cons (##inline ##vcore.cons 'cddr (bruijn cddr 12 54)) (##inline ##vcore.cons (##inline ##vcore.cons 'caaar (bruijn caaar 12 55)) (##inline ##vcore.cons (##inline ##vcore.cons 'caadr (bruijn caadr 12 56)) (##inline ##vcore.cons (##inline ##vcore.cons 'cadar (bruijn cadar 12 57)) (##inline ##vcore.cons (##inline ##vcore.cons 'caddr (bruijn caddr 12 58)) (##inline ##vcore.cons (##inline ##vcore.cons 'cdaar (bruijn cdaar 12 59)) (##inline ##vcore.cons (##inline ##vcore.cons 'cdadr (bruijn cdadr 12 60)) (##inline ##vcore.cons (##inline ##vcore.cons 'cddar (bruijn cddar 12 61)) (##inline ##vcore.cons (##inline ##vcore.cons 'cdddr (bruijn cdddr 12 62)) (##inline ##vcore.cons (##inline ##vcore.cons 'caaaar (bruijn caaaar 12 63)) (##inline ##vcore.cons (##inline ##vcore.cons 'caaadr (bruijn caaadr 12 64)) (##inline ##vcore.cons (##inline ##vcore.cons 'caadar (bruijn caadar 12 65)) (##inline ##vcore.cons (##inline ##vcore.cons 'caaddr (bruijn caaddr 12 66)) (##inline ##vcore.cons (##inline ##vcore.cons 'cadaar (bruijn cadaar 12 67)) (##inline ##vcore.cons (##inline ##vcore.cons 'cadadr (bruijn cadadr 12 68)) (##inline ##vcore.cons (##inline ##vcore.cons 'caddar (bruijn caddar 12 69)) (##inline ##vcore.cons (##inline ##vcore.cons 'cadddr (bruijn cadddr 12 70)) (##inline ##vcore.cons (##inline ##vcore.cons 'cdaaar (bruijn cdaaar 12 71)) (##inline ##vcore.cons (##inline ##vcore.cons 'cdaadr (bruijn cdaadr 12 72)) (##inline ##vcore.cons (##inline ##vcore.cons 'cdadar (bruijn cdadar 12 73)) (##inline ##vcore.cons (##inline ##vcore.cons 'cdaddr (bruijn cdaddr 12 74)) (##inline ##vcore.cons (##inline ##vcore.cons 'cddaar (bruijn cddaar 12 75)) (##inline ##vcore.cons (##inline ##vcore.cons 'cddadr (bruijn cddadr 12 76)) (##inline ##vcore.cons (##inline ##vcore.cons 'cdddar (bruijn cdddar 12 77)) (##inline ##vcore.cons (##inline ##vcore.cons 'cddddr (bruijn cddddr 12 78)) (##inline ##vcore.cons (##inline ##vcore.cons 'list (bruijn list 12 79)) (##inline ##vcore.cons (##inline ##vcore.cons 'list? (bruijn list? 12 80)) (##inline ##vcore.cons (##inline ##vcore.cons 'length (bruijn length 12 81)) (##inline ##vcore.cons (##inline ##vcore.cons 'list-tail (bruijn list-tail 12 82)) (##inline ##vcore.cons (##inline ##vcore.cons 'list-ref (bruijn list-ref 12 83)) (##inline ##vcore.cons (##inline ##vcore.cons 'list-set! (bruijn list-set! 12 84)) (##inline ##vcore.cons (##inline ##vcore.cons 'list-copy (bruijn list-copy 12 85)) (##inline ##vcore.cons (##inline ##vcore.cons 'make-list (bruijn make-list 12 86)) (##inline ##vcore.cons (##inline ##vcore.cons 'map (bruijn map 12 87)) (##inline ##vcore.cons (##inline ##vcore.cons 'for-each (bruijn for-each 12 88)) (##inline ##vcore.cons (##inline ##vcore.cons 'append (bruijn append 12 90)) (##inline ##vcore.cons (##inline ##vcore.cons 'reverse (bruijn reverse 12 91)) (##inline ##vcore.cons (##inline ##vcore.cons 'memq (bruijn memq 12 92)) (##inline ##vcore.cons (##inline ##vcore.cons 'memv (bruijn memv 12 93)) (##inline ##vcore.cons (##inline ##vcore.cons 'member (bruijn member 12 94)) (##inline ##vcore.cons (##inline ##vcore.cons 'assq (bruijn assq 12 95)) (##inline ##vcore.cons (##inline ##vcore.cons 'assv (bruijn assv 12 96)) (##inline ##vcore.cons (##inline ##vcore.cons 'assoc (bruijn assoc 12 97)) (##inline ##vcore.cons (##inline ##vcore.cons 'string->list (bruijn string->list 12 109)) (##inline ##vcore.cons (##inline ##vcore.cons 'list->string (bruijn list->string 12 108)) (##inline ##vcore.cons (##inline ##vcore.cons 'make-string (bruijn make-string 12 98)) (##inline ##vcore.cons (##inline ##vcore.cons 'substring (bruijn substring 12 99)) (##inline ##vcore.cons (##inline ##vcore.cons 'string-copy (bruijn string-copy 12 100)) (##inline ##vcore.cons (##inline ##vcore.cons 'string-copy! (bruijn string-copy! 12 101)) (##inline ##vcore.cons (##inline ##vcore.cons 'string-ref (bruijn string-ref 12 102)) (##inline ##vcore.cons (##inline ##vcore.cons 'string-set! (bruijn string-set! 12 103)) (##inline ##vcore.cons (##inline ##vcore.cons 'string-length (bruijn string-length 12 104)) (##inline ##vcore.cons (##inline ##vcore.cons 'string->symbol (bruijn string->symbol 12 105)) (##inline ##vcore.cons (##inline ##vcore.cons 'string->number (bruijn string->number 12 106)) (##inline ##vcore.cons (##inline ##vcore.cons 'string-append (bruijn string-append 12 110)) (##inline ##vcore.cons (##inline ##vcore.cons 'symbol->string (bruijn symbol->string 12 107)) (##inline ##vcore.cons (##inline ##vcore.cons 'list->vector (bruijn list->vector 12 111)) (##inline ##vcore.cons (##inline ##vcore.cons 'vector->list (bruijn vector->list 12 116)) (##inline ##vcore.cons (##inline ##vcore.cons 'vector (bruijn vector 12 112)) (##inline ##vcore.cons (##inline ##vcore.cons 'vector-ref (bruijn vector-ref 12 113)) (##inline ##vcore.cons (##inline ##vcore.cons 'vector-set! (bruijn vector-set! 12 114)) (##inline ##vcore.cons (##inline ##vcore.cons 'vector-length (bruijn vector-length 12 115)) (##inline ##vcore.cons (##inline ##vcore.cons 'vector-for-each (bruijn vector-for-each 12 117)) (##inline ##vcore.cons (##inline ##vcore.cons 'record (bruijn record 12 118)) (##inline ##vcore.cons (##inline ##vcore.cons 'record-ref (bruijn record-ref 12 119)) (##inline ##vcore.cons (##inline ##vcore.cons 'record-set! (bruijn record-set! 12 120)) (##inline ##vcore.cons (##inline ##vcore.cons 'record-length (bruijn record-length 12 121)) (##inline ##vcore.cons (##inline ##vcore.cons 'make-hash-table (bruijn make-hash-table 12 122)) (##inline ##vcore.cons (##inline ##vcore.cons 'hash-table-ref (bruijn hash-table-ref 12 125)) (##inline ##vcore.cons (##inline ##vcore.cons 'hash-table-set! (bruijn hash-table-set! 12 126)) (##inline ##vcore.cons (##inline ##vcore.cons 'hash-table-delete! (bruijn hash-table-delete! 12 127)) (##inline ##vcore.cons (##inline ##vcore.cons 'char->integer (bruijn char->integer 12 128)) (##inline ##vcore.cons (##inline ##vcore.cons 'current-output-port (bruijn current-output-port 12 129)) (##inline ##vcore.cons (##inline ##vcore.cons 'current-error-port (bruijn current-error-port 12 130)) (##inline ##vcore.cons (##inline ##vcore.cons 'current-input-port (bruijn current-input-port 12 131)) (##inline ##vcore.cons (##inline ##vcore.cons 'open-input-file (bruijn open-input-file 12 137)) (##inline ##vcore.cons (##inline ##vcore.cons 'open-output-file (bruijn open-output-file 12 138)) (##inline ##vcore.cons (##inline ##vcore.cons 'close-port (bruijn close-port 12 133)) (##inline ##vcore.cons (##inline ##vcore.cons 'open-output-string (bruijn open-output-string 12 139)) (##inline ##vcore.cons (##inline ##vcore.cons 'get-output-string (bruijn get-output-string 12 140)) (##inline ##vcore.cons (##inline ##vcore.cons 'with-output-to-file (bruijn with-output-to-file 12 141)) (##inline ##vcore.cons (##inline ##vcore.cons 'with-input-from-file (bruijn with-input-from-file 12 142)) (##inline ##vcore.cons (##inline ##vcore.cons 'read-char (bruijn read-char 12 143)) (##inline ##vcore.cons (##inline ##vcore.cons 'read-line (bruijn read-line 12 144)) (##inline ##vcore.cons (##inline ##vcore.cons 'read (bruijn read 12 145)) (##inline ##vcore.cons (##inline ##vcore.cons 'newline (bruijn newline 12 146)) (##inline ##vcore.cons (##inline ##vcore.cons 'display (bruijn display 12 150)) (##inline ##vcore.cons (##inline ##vcore.cons 'write (bruijn write 12 151)) (##inline ##vcore.cons (##inline ##vcore.cons 'call/cc (bruijn call/cc 12 152)) (##inline ##vcore.cons (##inline ##vcore.cons 'call-with-current-continuation (bruijn call-with-current-continuation 12 153)) (##inline ##vcore.cons (##inline ##vcore.cons 'call-with-values (bruijn call-with-values 12 154)) (##inline ##vcore.cons (##inline ##vcore.cons 'apply (bruijn apply 12 155)) (##inline ##vcore.cons (##inline ##vcore.cons 'values (bruijn values 12 156)) (##inline ##vcore.cons (##inline ##vcore.cons 'setter (bruijn setter 12 157)) (##inline ##vcore.cons (##inline ##vcore.cons 'mutator (bruijn mutator 12 158)) (##inline ##vcore.cons (##inline ##vcore.cons '##vcore.setter (bruijn ##vcore.setter 13 1)) (##inline ##vcore.cons (##inline ##vcore.cons '##vcore.mutator (bruijn ##vcore.mutator 13 0)) (##inline ##vcore.cons (##inline ##vcore.cons 'make-parameter (bruijn make-parameter 12 159)) (##inline ##vcore.cons (##inline ##vcore.cons 'raise (bruijn raise 12 174)) (##inline ##vcore.cons (##inline ##vcore.cons 'raise-continuable (bruijn raise-continuable 12 175)) (##inline ##vcore.cons (##inline ##vcore.cons 'with-exception-handler (bruijn with-exception-handler 12 176)) (##inline ##vcore.cons (##inline ##vcore.cons 'command-line (bruijn command-line 12 160)) (##inline ##vcore.cons (##inline ##vcore.cons 'system (bruijn system 12 161)) (##inline ##vcore.cons (##inline ##vcore.cons 'open-input-process (bruijn open-input-process 12 162)) (##inline ##vcore.cons (##inline ##vcore.cons 'open-output-process (bruijn open-output-process 12 163)) (##inline ##vcore.cons (##inline ##vcore.cons 'make-temporary-file (bruijn make-temporary-file 12 164)) (##inline ##vcore.cons (##inline ##vcore.cons 'exit (bruijn exit 12 165)) (##inline ##vcore.cons (##inline ##vcore.cons 'fiber-fork (bruijn fiber-fork 12 179)) (##inline ##vcore.cons (##inline ##vcore.cons 'fiber-fork-list (bruijn fiber-fork-list 12 178)) (##inline ##vcore.cons (##inline ##vcore.cons 'fiber-map (bruijn fiber-map 12 180)) (##inline ##vcore.cons (##inline ##vcore.cons 'async (bruijn async 12 181)) (##inline ##vcore.cons (##inline ##vcore.cons 'await (bruijn await 12 182)) (##inline ##vcore.cons (##inline ##vcore.cons 'atom? (bruijn atom? 12 166)) (##inline ##vcore.cons (##inline ##vcore.cons 'displayln (bruijn displayln 12 167)) (##inline ##vcore.cons (##inline ##vcore.cons 'writeln (bruijn writeln 12 168)) (##inline ##vcore.cons (##inline ##vcore.cons 'format (bruijn format 12 173)) (##inline ##vcore.cons (##inline ##vcore.cons 'printf (bruijn printf 12 171)) (##inline ##vcore.cons (##inline ##vcore.cons 'sprintf (bruijn sprintf 12 172)) (##inline ##vcore.cons (##inline ##vcore.cons 'error (bruijn error 12 177)) '())))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))
    V_CALL(VGetArg(upenv, 18-1, 0), runtime,
      VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0null_Q,
        VGetArg(upenv, 12-1, 0)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0eof__object_Q,
        VGetArg(upenv, 12-1, 2)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0boolean_Q,
        VGetArg(upenv, 12-1, 1)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0pair_Q,
        VGetArg(upenv, 12-1, 3)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0vector_Q,
        VGetArg(upenv, 12-1, 4)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0record_Q,
        VGetArg(upenv, 12-1, 5)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0procedure_Q,
        VGetArg(upenv, 12-1, 6)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0symbol_Q,
        VGetArg(upenv, 12-1, 7)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0string_Q,
        VGetArg(upenv, 12-1, 8)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0exact_Q,
        VGetArg(upenv, 12-1, 10)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0exact__integer_Q,
        VGetArg(upenv, 12-1, 11)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0inexact_Q,
        VGetArg(upenv, 12-1, 13)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0real_Q,
        VGetArg(upenv, 12-1, 14)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0integer_Q,
        VGetArg(upenv, 12-1, 12)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0char_Q,
        VGetArg(upenv, 12-1, 9)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0eq_Q,
        VGetArg(upenv, 12-1, 15)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0symbol_E_Q,
        VGetArg(upenv, 12-1, 16)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0eqv_Q,
        VGetArg(upenv, 12-1, 18)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0equal_Q,
        VGetArg(upenv, 12-1, 21)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0not,
        VGetArg(upenv, 12-1, 22)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0_L,
        VGetArg(upenv, 12-1, 23)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0_E,
        VGetArg(upenv, 12-1, 24)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0_G,
        VGetArg(upenv, 12-1, 25)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0_L_E,
        VGetArg(upenv, 12-1, 26)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0_G_E,
        VGetArg(upenv, 12-1, 27)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0inexact,
        VGetArg(upenv, 12-1, 28)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0exact___Ginexact,
        VGetArg(upenv, 12-1, 29)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0number_Q,
        VGetArg(upenv, 12-1, 30)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0complex_Q,
        VGetArg(upenv, 12-1, 31)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0rational_Q,
        VGetArg(upenv, 12-1, 32)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0positive_Q,
        VGetArg(upenv, 12-1, 33)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0negative_Q,
        VGetArg(upenv, 12-1, 35)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0zero_Q,
        VGetArg(upenv, 12-1, 34)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0_P,
        VGetArg(upenv, 12-1, 36)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0__,
        VGetArg(upenv, 12-1, 37)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0_S,
        VGetArg(upenv, 12-1, 38)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0_W,
        VGetArg(upenv, 12-1, 39)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0quotient,
        VGetArg(upenv, 12-1, 40)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0remainder,
        VGetArg(upenv, 12-1, 41)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0max,
        VGetArg(upenv, 12-1, 44)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0min,
        VGetArg(upenv, 12-1, 45)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0abs,
        VGetArg(upenv, 12-1, 42)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0square,
        VGetArg(upenv, 12-1, 43)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0cons,
        VGetArg(upenv, 12-1, 46)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0car,
        VGetArg(upenv, 12-1, 47)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0cdr,
        VGetArg(upenv, 12-1, 48)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0set__car_B,
        VGetArg(upenv, 12-1, 49)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0set__cdr_B,
        VGetArg(upenv, 12-1, 50)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0caar,
        VGetArg(upenv, 12-1, 51)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0cadr,
        VGetArg(upenv, 12-1, 52)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0cdar,
        VGetArg(upenv, 12-1, 53)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0cddr,
        VGetArg(upenv, 12-1, 54)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0caaar,
        VGetArg(upenv, 12-1, 55)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0caadr,
        VGetArg(upenv, 12-1, 56)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0cadar,
        VGetArg(upenv, 12-1, 57)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0caddr,
        VGetArg(upenv, 12-1, 58)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0cdaar,
        VGetArg(upenv, 12-1, 59)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0cdadr,
        VGetArg(upenv, 12-1, 60)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0cddar,
        VGetArg(upenv, 12-1, 61)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0cdddr,
        VGetArg(upenv, 12-1, 62)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0caaaar,
        VGetArg(upenv, 12-1, 63)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0caaadr,
        VGetArg(upenv, 12-1, 64)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0caadar,
        VGetArg(upenv, 12-1, 65)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0caaddr,
        VGetArg(upenv, 12-1, 66)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0cadaar,
        VGetArg(upenv, 12-1, 67)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0cadadr,
        VGetArg(upenv, 12-1, 68)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0caddar,
        VGetArg(upenv, 12-1, 69)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0cadddr,
        VGetArg(upenv, 12-1, 70)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0cdaaar,
        VGetArg(upenv, 12-1, 71)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0cdaadr,
        VGetArg(upenv, 12-1, 72)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0cdadar,
        VGetArg(upenv, 12-1, 73)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0cdaddr,
        VGetArg(upenv, 12-1, 74)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0cddaar,
        VGetArg(upenv, 12-1, 75)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0cddadr,
        VGetArg(upenv, 12-1, 76)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0cdddar,
        VGetArg(upenv, 12-1, 77)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0cddddr,
        VGetArg(upenv, 12-1, 78)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0list,
        VGetArg(upenv, 12-1, 79)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0list_Q,
        VGetArg(upenv, 12-1, 80)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0length,
        VGetArg(upenv, 12-1, 81)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0list__tail,
        VGetArg(upenv, 12-1, 82)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0list__ref,
        VGetArg(upenv, 12-1, 83)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0list__set_B,
        VGetArg(upenv, 12-1, 84)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0list__copy,
        VGetArg(upenv, 12-1, 85)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0make__list,
        VGetArg(upenv, 12-1, 86)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0map,
        VGetArg(upenv, 12-1, 87)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0for__each,
        VGetArg(upenv, 12-1, 88)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0append,
        VGetArg(upenv, 12-1, 90)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0reverse,
        VGetArg(upenv, 12-1, 91)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0memq,
        VGetArg(upenv, 12-1, 92)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0memv,
        VGetArg(upenv, 12-1, 93)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0member,
        VGetArg(upenv, 12-1, 94)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0assq,
        VGetArg(upenv, 12-1, 95)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0assv,
        VGetArg(upenv, 12-1, 96)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0assoc,
        VGetArg(upenv, 12-1, 97)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0string___Glist,
        VGetArg(upenv, 12-1, 109)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0list___Gstring,
        VGetArg(upenv, 12-1, 108)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0make__string,
        VGetArg(upenv, 12-1, 98)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0substring,
        VGetArg(upenv, 12-1, 99)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0string__copy,
        VGetArg(upenv, 12-1, 100)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0string__copy_B,
        VGetArg(upenv, 12-1, 101)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0string__ref,
        VGetArg(upenv, 12-1, 102)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0string__set_B,
        VGetArg(upenv, 12-1, 103)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0string__length,
        VGetArg(upenv, 12-1, 104)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0string___Gsymbol,
        VGetArg(upenv, 12-1, 105)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0string___Gnumber,
        VGetArg(upenv, 12-1, 106)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0string__append,
        VGetArg(upenv, 12-1, 110)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0symbol___Gstring,
        VGetArg(upenv, 12-1, 107)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0list___Gvector,
        VGetArg(upenv, 12-1, 111)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0vector___Glist,
        VGetArg(upenv, 12-1, 116)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0vector,
        VGetArg(upenv, 12-1, 112)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0vector__ref,
        VGetArg(upenv, 12-1, 113)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0vector__set_B,
        VGetArg(upenv, 12-1, 114)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0vector__length,
        VGetArg(upenv, 12-1, 115)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0vector__for__each,
        VGetArg(upenv, 12-1, 117)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0record,
        VGetArg(upenv, 12-1, 118)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0record__ref,
        VGetArg(upenv, 12-1, 119)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0record__set_B,
        VGetArg(upenv, 12-1, 120)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0record__length,
        VGetArg(upenv, 12-1, 121)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0make__hash__table,
        VGetArg(upenv, 12-1, 122)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0hash__table__ref,
        VGetArg(upenv, 12-1, 125)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0hash__table__set_B,
        VGetArg(upenv, 12-1, 126)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0hash__table__delete_B,
        VGetArg(upenv, 12-1, 127)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0char___Ginteger,
        VGetArg(upenv, 12-1, 128)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0current__output__port,
        VGetArg(upenv, 12-1, 129)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0current__error__port,
        VGetArg(upenv, 12-1, 130)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0current__input__port,
        VGetArg(upenv, 12-1, 131)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0open__input__file,
        VGetArg(upenv, 12-1, 137)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0open__output__file,
        VGetArg(upenv, 12-1, 138)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0close__port,
        VGetArg(upenv, 12-1, 133)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0open__output__string,
        VGetArg(upenv, 12-1, 139)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0get__output__string,
        VGetArg(upenv, 12-1, 140)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0with__output__to__file,
        VGetArg(upenv, 12-1, 141)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0with__input__from__file,
        VGetArg(upenv, 12-1, 142)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0read__char,
        VGetArg(upenv, 12-1, 143)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0read__line,
        VGetArg(upenv, 12-1, 144)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0read,
        VGetArg(upenv, 12-1, 145)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0newline,
        VGetArg(upenv, 12-1, 146)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0display,
        VGetArg(upenv, 12-1, 150)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0write,
        VGetArg(upenv, 12-1, 151)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0call_Wcc,
        VGetArg(upenv, 12-1, 152)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0call__with__current__continuation,
        VGetArg(upenv, 12-1, 153)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0call__with__values,
        VGetArg(upenv, 12-1, 154)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0apply,
        VGetArg(upenv, 12-1, 155)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0values,
        VGetArg(upenv, 12-1, 156)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0setter,
        VGetArg(upenv, 12-1, 157)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0mutator,
        VGetArg(upenv, 12-1, 158)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V10vcore_Dsetter,
        VGetArg(upenv, 13-1, 1)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V10vcore_Dmutator,
        VGetArg(upenv, 13-1, 0)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0make__parameter,
        VGetArg(upenv, 12-1, 159)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0raise,
        VGetArg(upenv, 12-1, 174)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0raise__continuable,
        VGetArg(upenv, 12-1, 175)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0with__exception__handler,
        VGetArg(upenv, 12-1, 176)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0command__line,
        VGetArg(upenv, 12-1, 160)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0system,
        VGetArg(upenv, 12-1, 161)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0open__input__process,
        VGetArg(upenv, 12-1, 162)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0open__output__process,
        VGetArg(upenv, 12-1, 163)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0make__temporary__file,
        VGetArg(upenv, 12-1, 164)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0exit,
        VGetArg(upenv, 12-1, 165)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0fiber__fork,
        VGetArg(upenv, 12-1, 179)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0fiber__fork__list,
        VGetArg(upenv, 12-1, 178)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0fiber__map,
        VGetArg(upenv, 12-1, 180)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0async,
        VGetArg(upenv, 12-1, 181)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0await,
        VGetArg(upenv, 12-1, 182)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0atom_Q,
        VGetArg(upenv, 12-1, 166)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0displayln,
        VGetArg(upenv, 12-1, 167)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0writeln,
        VGetArg(upenv, 12-1, 168)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0format,
        VGetArg(upenv, 12-1, 173)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0printf,
        VGetArg(upenv, 12-1, 171)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0sprintf,
        VGetArg(upenv, 12-1, 172)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0error,
        VGetArg(upenv, 12-1, 177)),
        VNULL)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
 }
}
static void _V0vanity_V0core_V20_k442(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k442" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k442, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k442, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k443) (bruijn current-input-port 11 131) (bruijn ##x.1107 0 0))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k443, env)}),
      VEncodeInt(11l), VEncodeInt(131l),
      _var0
    );
 }
}
__attribute__((used)) static void _V20CaseError__V0vanity_V0core_V20_lambda173(VRuntime * runtime, VEnv * upenv, int argc, ...) {
 // (_V0vanity_V0core_V20_lambda173 #t (1 ((bruijn ##k.1108 0 0) (bruijn in 1 0))) (2 (set! (bruijn ##k.1109 0 0) (bruijn in 1 0) (bruijn port 0 1))))
 VError("Not enough arguments to _V0vanity_V0core_V20_lambda173, got ~D~N"
 "-- expected 1~N"
 "-- expected 2~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V0vanity_V0core_V20_lambda173(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V20Case0__V0vanity_V0core_V20_lambda173" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case0__V0vanity_V0core_V20_lambda173, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##k.1108 0 0) (bruijn in 1 0))
    V_CALL(_var0, runtime,
      upenv->vars[0]);
 }
}
__attribute__((used)) static void _V20Case1__V0vanity_V0core_V20_lambda173(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V20Case1__V0vanity_V0core_V20_lambda173" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case1__V0vanity_V0core_V20_lambda173, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (set! (bruijn ##k.1109 0 0) (bruijn in 1 0) (bruijn port 0 1))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      _var0,
      VEncodeInt(1l), VEncodeInt(0l),
      _var1
    );
 }
}
void _V0vanity_V0core_V20_lambda173(VRuntime * runtime, VEnv * upenv, int argc, ...);
asm(
".intel_syntax noprefix\n"
#ifdef __linux__
".type _V0vanity_V0core_V20_lambda173, @function\n"
#endif
"_V0vanity_V0core_V20_lambda173:\n"
"    cmp " ARGC_REG ", 1\n"
"    je _V20Case0__V0vanity_V0core_V20_lambda173\n"
"    cmp " ARGC_REG ", 2\n"
"    je _V20Case1__V0vanity_V0core_V20_lambda173\n"
"    jmp _V20CaseError__V0vanity_V0core_V20_lambda173\n"
);
static void _V0vanity_V0core_V20_k441(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k441" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k441, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k441, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0core_V20_k442) (close _V0vanity_V0core_V20_lambda173))
    V_CALL_FUNC(_V0vanity_V0core_V20_k442, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_lambda173, env)}));
 }
}
static void _V0vanity_V0core_V20_k440(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k440" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k440, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k440, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.stdin->port (close _V0vanity_V0core_V20_k441))
    V_CALL_FUNC(VStdinPort, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k441, env)}));
 }
}
static void _V0vanity_V0core_V20_k439(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k439" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k439, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k439, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k440) (bruijn current-error-port 8 130) (bruijn ##x.1110 0 0))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k440, env)}),
      VEncodeInt(8l), VEncodeInt(130l),
      _var0
    );
 }
}
__attribute__((used)) static void _V20CaseError__V0vanity_V0core_V20_lambda174(VRuntime * runtime, VEnv * upenv, int argc, ...) {
 // (_V0vanity_V0core_V20_lambda174 #t (1 ((bruijn ##k.1111 0 0) (bruijn out 1 0))) (2 (set! (bruijn ##k.1112 0 0) (bruijn out 1 0) (bruijn port 0 1))))
 VError("Not enough arguments to _V0vanity_V0core_V20_lambda174, got ~D~N"
 "-- expected 1~N"
 "-- expected 2~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V0vanity_V0core_V20_lambda174(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V20Case0__V0vanity_V0core_V20_lambda174" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case0__V0vanity_V0core_V20_lambda174, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##k.1111 0 0) (bruijn out 1 0))
    V_CALL(_var0, runtime,
      upenv->vars[0]);
 }
}
__attribute__((used)) static void _V20Case1__V0vanity_V0core_V20_lambda174(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V20Case1__V0vanity_V0core_V20_lambda174" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case1__V0vanity_V0core_V20_lambda174, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (set! (bruijn ##k.1112 0 0) (bruijn out 1 0) (bruijn port 0 1))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      _var0,
      VEncodeInt(1l), VEncodeInt(0l),
      _var1
    );
 }
}
void _V0vanity_V0core_V20_lambda174(VRuntime * runtime, VEnv * upenv, int argc, ...);
asm(
".intel_syntax noprefix\n"
#ifdef __linux__
".type _V0vanity_V0core_V20_lambda174, @function\n"
#endif
"_V0vanity_V0core_V20_lambda174:\n"
"    cmp " ARGC_REG ", 1\n"
"    je _V20Case0__V0vanity_V0core_V20_lambda174\n"
"    cmp " ARGC_REG ", 2\n"
"    je _V20Case1__V0vanity_V0core_V20_lambda174\n"
"    jmp _V20CaseError__V0vanity_V0core_V20_lambda174\n"
);
static void _V0vanity_V0core_V20_k438(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k438" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k438, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k438, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0core_V20_k439) (close _V0vanity_V0core_V20_lambda174))
    V_CALL_FUNC(_V0vanity_V0core_V20_k439, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_lambda174, env)}));
 }
}
static void _V0vanity_V0core_V20_k437(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k437" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k437, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k437, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.stderr->port (close _V0vanity_V0core_V20_k438))
    V_CALL_FUNC(VStderrPort, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k438, env)}));
 }
}
static void _V0vanity_V0core_V20_k436(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k436" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k436, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k436, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k437) (bruijn current-output-port 5 129) (bruijn ##x.1113 0 0))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k437, env)}),
      VEncodeInt(5l), VEncodeInt(129l),
      _var0
    );
 }
}
__attribute__((used)) static void _V20CaseError__V0vanity_V0core_V20_lambda175(VRuntime * runtime, VEnv * upenv, int argc, ...) {
 // (_V0vanity_V0core_V20_lambda175 #t (1 ((bruijn ##k.1114 0 0) (bruijn out 1 0))) (2 (set! (bruijn ##k.1115 0 0) (bruijn out 1 0) (bruijn port 0 1))))
 VError("Not enough arguments to _V0vanity_V0core_V20_lambda175, got ~D~N"
 "-- expected 1~N"
 "-- expected 2~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V0vanity_V0core_V20_lambda175(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V20Case0__V0vanity_V0core_V20_lambda175" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case0__V0vanity_V0core_V20_lambda175, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##k.1114 0 0) (bruijn out 1 0))
    V_CALL(_var0, runtime,
      upenv->vars[0]);
 }
}
__attribute__((used)) static void _V20Case1__V0vanity_V0core_V20_lambda175(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V20Case1__V0vanity_V0core_V20_lambda175" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case1__V0vanity_V0core_V20_lambda175, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (set! (bruijn ##k.1115 0 0) (bruijn out 1 0) (bruijn port 0 1))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      _var0,
      VEncodeInt(1l), VEncodeInt(0l),
      _var1
    );
 }
}
void _V0vanity_V0core_V20_lambda175(VRuntime * runtime, VEnv * upenv, int argc, ...);
asm(
".intel_syntax noprefix\n"
#ifdef __linux__
".type _V0vanity_V0core_V20_lambda175, @function\n"
#endif
"_V0vanity_V0core_V20_lambda175:\n"
"    cmp " ARGC_REG ", 1\n"
"    je _V20Case0__V0vanity_V0core_V20_lambda175\n"
"    cmp " ARGC_REG ", 2\n"
"    je _V20Case1__V0vanity_V0core_V20_lambda175\n"
"    jmp _V20CaseError__V0vanity_V0core_V20_lambda175\n"
);
static void _V0vanity_V0core_V20_k435(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k435" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k435, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k435, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0core_V20_k436) (close _V0vanity_V0core_V20_lambda175))
    V_CALL_FUNC(_V0vanity_V0core_V20_k436, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_lambda175, env)}));
 }
}
static void _V0vanity_V0core_V20_k434(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k434" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k434, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k434, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.stdout->port (close _V0vanity_V0core_V20_k435))
    V_CALL_FUNC(VStdoutPort, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k435, env)}));
 }
}
static void _V0vanity_V0core_V20_k433(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k433" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k433, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k433, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k434) (bruijn rational? 2 32) (bruijn integer? 2 12))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k434, env)}),
      VEncodeInt(2l), VEncodeInt(32l),
      upenv->up->vars[12]
    );
 }
}
static void _V0vanity_V0core_V20_k432(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k432" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0core_V20_k432, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k432, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k433) (bruijn complex? 1 31) (bruijn number? 1 30))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k433, env)}),
      VEncodeInt(1l), VEncodeInt(31l),
      upenv->vars[30]
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
  // (letrec 183 ((##intrinsic ##vcore.null?) (close _V0boolean_Q_lambda3) (##intrinsic ##vcore.eof-object?) (##intrinsic ##vcore.pair?) (##intrinsic ##vcore.vector?) (##intrinsic ##vcore.record?) (##intrinsic ##vcore.procedure?) (##intrinsic ##vcore.symbol?) (##intrinsic ##vcore.string?) (##intrinsic ##vcore.char?) (##intrinsic ##vcore.int?) (##intrinsic ##vcore.int?) (##intrinsic ##vcore.int?) (##intrinsic ##vcore.double?) (##intrinsic ##vcore.double?) (##intrinsic ##vcore.eq?) (close _V0symbol_E_Q_lambda4) (close _V0boolean_E_Q_lambda6) (##intrinsic ##vcore.eqv?) (close _V0vector_E_Q_lambda8) (close _V0record_E_Q_lambda10) (close _V0equal_Q_lambda12) (##intrinsic ##vcore.not) (close _V0_L_lambda13) (close _V0_E_lambda15) (close _V0_G_lambda17) (close _V0_L_E_lambda19) (close _V0_G_E_lambda21) (close _V0inexact_lambda23) #f (close _V0number_Q_lambda24) #f #f (close _V0positive_Q_lambda25) (close _V0zero_Q_lambda26) (close _V0negative_Q_lambda27) (##intrinsic ##vcore.+) (##intrinsic ##vcore.-) (##intrinsic ##vcore.*) (##intrinsic ##vcore./) (##intrinsic ##vcore.quotient) (##intrinsic ##vcore.remainder) (close _V0abs_lambda28) (close _V0square_lambda29) (close _V0max_lambda30) (close _V0min_lambda32) (##intrinsic ##vcore.cons) (##intrinsic ##vcore.car) (##intrinsic ##vcore.cdr) (##intrinsic ##vcore.set-car!) (##intrinsic ##vcore.set-cdr!) (close _V0caar_lambda34) (close _V0cadr_lambda35) (close _V0cdar_lambda36) (close _V0cddr_lambda37) (close _V0caaar_lambda38) (close _V0caadr_lambda39) (close _V0cadar_lambda40) (close _V0caddr_lambda41) (close _V0cdaar_lambda42) (close _V0cdadr_lambda43) (close _V0cddar_lambda44) (close _V0cdddr_lambda45) (close _V0caaaar_lambda46) (close _V0caaadr_lambda47) (close _V0caadar_lambda48) (close _V0caaddr_lambda49) (close _V0cadaar_lambda50) (close _V0cadadr_lambda51) (close _V0caddar_lambda52) (close _V0cadddr_lambda53) (close _V0cdaaar_lambda54) (close _V0cdaadr_lambda55) (close _V0cdadar_lambda56) (close _V0cdaddr_lambda57) (close _V0cddaar_lambda58) (close _V0cddadr_lambda59) (close _V0cdddar_lambda60) (close _V0cddddr_lambda61) (close _V0list_lambda62) (close _V0list_Q_lambda63) (close _V0length_lambda64) (close _V0list__tail_lambda66) (close _V0list__ref_lambda67) (close _V0list__set_B_lambda68) (close _V0list__copy_lambda69) (close _V0make__list_lambda70) (close _V0map_lambda72) (close _V0for__each_lambda77) (close _V0fold__right_lambda82) (close _V0append_lambda84) (close _V0reverse_lambda86) (close _V0memq_lambda88) (close _V0memv_lambda89) (close _V0member_lambda90) (close _V0assq_lambda91) (close _V0assv_lambda92) (close _V0assoc_lambda93) (##intrinsic ##vcore.make-string) (##intrinsic ##vcore.substring) (##intrinsic ##vcore.substring) (##intrinsic ##vcore.string-copy!) (##intrinsic ##vcore.string-ref) (##intrinsic ##vcore.string-set!) (##intrinsic ##vcore.string-length) (##intrinsic ##vcore.string->symbol) (##intrinsic ##vcore.string->number) (##intrinsic ##vcore.symbol->string) (close _V0list___Gstring_lambda94) (close _V0string___Glist_lambda96) (close _V0string__append_lambda98) (##intrinsic ##vcore.list->vector) (close _V0vector_lambda99) (##intrinsic ##vcore.vector-ref) (##intrinsic ##vcore.vector-set!) (##intrinsic ##vcore.vector-length) (close _V0vector___Glist_lambda100) (close _V0vector__for__each_lambda102) (##intrinsic ##vcore.record) (##intrinsic ##vcore.record-ref) (##intrinsic ##vcore.record-set!) (##intrinsic ##vcore.record-length) (close _V0make__hash__table_lambda108) (##intrinsic ##vcore.hash-table-equivalence-function) (##intrinsic ##vcore.hash-table-hash-function) (close _V0hash__table__ref_lambda109) (##intrinsic ##vcore.hash-table-set!) (##intrinsic ##vcore.hash-table-delete!) (##intrinsic ##vcore.char-integer) #f #f #f (close _V0try__or__gc_lambda111) (close _V0close__port_lambda114) (close _V0open__input__file__impl_lambda115) (close _V0open__output__file__impl_lambda118) (close _V0open__output__string__impl_lambda121) (close _V0open__input__file_lambda123) (close _V0open__output__file_lambda125) (close _V0open__output__string_lambda127) (##intrinsic ##vcore.get-output-string) (close _V0with__output__to__file_lambda128) (close _V0with__input__from__file_lambda130) (close _V0read__char_lambda132) (close _V0read__line_lambda133) (close _V0read_lambda134) (close _V0newline_lambda135) (close _V0printout__list_lambda136) (close _V0printout__quotation_lambda138) (close _V0printout_lambda139) (close _V0display_lambda141) (close _V0write_lambda142) (##intrinsic ##vcore.call/cc) (##intrinsic ##vcore.call/cc) (##intrinsic ##vcore.call-with-values) (##intrinsic ##vcore.apply) (close _V0values_lambda143) (bruijn ##vcore.setter 1 1) (bruijn ##vcore.mutator 1 0) (close _V0make__parameter_lambda145) (##intrinsic ##vcore.command-line) (##intrinsic ##vcore.system) (##intrinsic ##vcore.open-input-process) (##intrinsic ##vcore.open-output-process) (##intrinsic ##vcore.make-temporary-file) (##intrinsic ##vcore.exit) (close _V0atom_Q_lambda150) (close _V0displayln_lambda151) (close _V0writeln_lambda152) (close _V0format__printf_lambda153) (close _V0format__sprintf_lambda155) (close _V0printf_lambda156) (close _V0sprintf_lambda157) (close _V0format_lambda158) (##intrinsic ##vcore.raise) (close _V0raise__continuable_lambda159) (close _V0with__exception__handler_lambda160) (close _V0error_lambda161) (##intrinsic ##vcore.fiber-fork-list) (close _V0fiber__fork_lambda163) (close _V0fiber__map_lambda164) (##intrinsic ##vcore.async) (##intrinsic ##vcore.await)) (set! (close _V0vanity_V0core_V20_k432) (bruijn exact->inexact 0 29) (bruijn inexact 0 28)))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[183]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 183, 183, upenv);
    env->vars[0] = _V40_V10vcore_Dnull_Q;
    env->vars[1] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0boolean_Q_lambda3, env)});
    env->vars[2] = _V40_V10vcore_Deof__object_Q;
    env->vars[3] = _V40_V10vcore_Dpair_Q;
    env->vars[4] = _V40_V10vcore_Dvector_Q;
    env->vars[5] = _V40_V10vcore_Drecord_Q;
    env->vars[6] = _V40_V10vcore_Dprocedure_Q;
    env->vars[7] = _V40_V10vcore_Dsymbol_Q;
    env->vars[8] = _V40_V10vcore_Dstring_Q;
    env->vars[9] = _V40_V10vcore_Dchar_Q;
    env->vars[10] = _V40_V10vcore_Dint_Q;
    env->vars[11] = _V40_V10vcore_Dint_Q;
    env->vars[12] = _V40_V10vcore_Dint_Q;
    env->vars[13] = _V40_V10vcore_Ddouble_Q;
    env->vars[14] = _V40_V10vcore_Ddouble_Q;
    env->vars[15] = _V40_V10vcore_Deq_Q;
    env->vars[16] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0symbol_E_Q_lambda4, env)});
    env->vars[17] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0boolean_E_Q_lambda6, env)});
    env->vars[18] = _V40_V10vcore_Deqv_Q;
    env->vars[19] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vector_E_Q_lambda8, env)});
    env->vars[20] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0record_E_Q_lambda10, env)});
    env->vars[21] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0equal_Q_lambda12, env)});
    env->vars[22] = _V40_V10vcore_Dnot;
    env->vars[23] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0_L_lambda13, env)});
    env->vars[24] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0_E_lambda15, env)});
    env->vars[25] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0_G_lambda17, env)});
    env->vars[26] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0_L_E_lambda19, env)});
    env->vars[27] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0_G_E_lambda21, env)});
    env->vars[28] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0inexact_lambda23, env)});
    env->vars[29] = VEncodeBool(false);
    env->vars[30] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0number_Q_lambda24, env)});
    env->vars[31] = VEncodeBool(false);
    env->vars[32] = VEncodeBool(false);
    env->vars[33] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0positive_Q_lambda25, env)});
    env->vars[34] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0zero_Q_lambda26, env)});
    env->vars[35] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0negative_Q_lambda27, env)});
    env->vars[36] = _V40_V10vcore_D_P;
    env->vars[37] = _V40_V10vcore_D__;
    env->vars[38] = _V40_V10vcore_D_S;
    env->vars[39] = _V40_V10vcore_D_W;
    env->vars[40] = _V40_V10vcore_Dquotient;
    env->vars[41] = _V40_V10vcore_Dremainder;
    env->vars[42] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0abs_lambda28, env)});
    env->vars[43] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0square_lambda29, env)});
    env->vars[44] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0max_lambda30, env)});
    env->vars[45] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0min_lambda32, env)});
    env->vars[46] = _V40_V10vcore_Dcons;
    env->vars[47] = _V40_V10vcore_Dcar;
    env->vars[48] = _V40_V10vcore_Dcdr;
    env->vars[49] = _V40_V10vcore_Dset__car_B;
    env->vars[50] = _V40_V10vcore_Dset__cdr_B;
    env->vars[51] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0caar_lambda34, env)});
    env->vars[52] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0cadr_lambda35, env)});
    env->vars[53] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0cdar_lambda36, env)});
    env->vars[54] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0cddr_lambda37, env)});
    env->vars[55] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0caaar_lambda38, env)});
    env->vars[56] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0caadr_lambda39, env)});
    env->vars[57] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0cadar_lambda40, env)});
    env->vars[58] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0caddr_lambda41, env)});
    env->vars[59] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0cdaar_lambda42, env)});
    env->vars[60] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0cdadr_lambda43, env)});
    env->vars[61] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0cddar_lambda44, env)});
    env->vars[62] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0cdddr_lambda45, env)});
    env->vars[63] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0caaaar_lambda46, env)});
    env->vars[64] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0caaadr_lambda47, env)});
    env->vars[65] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0caadar_lambda48, env)});
    env->vars[66] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0caaddr_lambda49, env)});
    env->vars[67] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0cadaar_lambda50, env)});
    env->vars[68] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0cadadr_lambda51, env)});
    env->vars[69] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0caddar_lambda52, env)});
    env->vars[70] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0cadddr_lambda53, env)});
    env->vars[71] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0cdaaar_lambda54, env)});
    env->vars[72] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0cdaadr_lambda55, env)});
    env->vars[73] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0cdadar_lambda56, env)});
    env->vars[74] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0cdaddr_lambda57, env)});
    env->vars[75] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0cddaar_lambda58, env)});
    env->vars[76] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0cddadr_lambda59, env)});
    env->vars[77] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0cdddar_lambda60, env)});
    env->vars[78] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0cddddr_lambda61, env)});
    env->vars[79] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0list_lambda62, env)});
    env->vars[80] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0list_Q_lambda63, env)});
    env->vars[81] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0length_lambda64, env)});
    env->vars[82] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0list__tail_lambda66, env)});
    env->vars[83] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0list__ref_lambda67, env)});
    env->vars[84] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0list__set_B_lambda68, env)});
    env->vars[85] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0list__copy_lambda69, env)});
    env->vars[86] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0make__list_lambda70, env)});
    env->vars[87] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0map_lambda72, env)});
    env->vars[88] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0for__each_lambda77, env)});
    env->vars[89] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0fold__right_lambda82, env)});
    env->vars[90] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0append_lambda84, env)});
    env->vars[91] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0reverse_lambda86, env)});
    env->vars[92] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0memq_lambda88, env)});
    env->vars[93] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0memv_lambda89, env)});
    env->vars[94] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0member_lambda90, env)});
    env->vars[95] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0assq_lambda91, env)});
    env->vars[96] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0assv_lambda92, env)});
    env->vars[97] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0assoc_lambda93, env)});
    env->vars[98] = _V40_V10vcore_Dmake__string;
    env->vars[99] = _V40_V10vcore_Dsubstring;
    env->vars[100] = _V40_V10vcore_Dsubstring;
    env->vars[101] = _V40_V10vcore_Dstring__copy_B;
    env->vars[102] = _V40_V10vcore_Dstring__ref;
    env->vars[103] = _V40_V10vcore_Dstring__set_B;
    env->vars[104] = _V40_V10vcore_Dstring__length;
    env->vars[105] = _V40_V10vcore_Dstring___Gsymbol;
    env->vars[106] = _V40_V10vcore_Dstring___Gnumber;
    env->vars[107] = _V40_V10vcore_Dsymbol___Gstring;
    env->vars[108] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0list___Gstring_lambda94, env)});
    env->vars[109] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0string___Glist_lambda96, env)});
    env->vars[110] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0string__append_lambda98, env)});
    env->vars[111] = _V40_V10vcore_Dlist___Gvector;
    env->vars[112] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vector_lambda99, env)});
    env->vars[113] = _V40_V10vcore_Dvector__ref;
    env->vars[114] = _V40_V10vcore_Dvector__set_B;
    env->vars[115] = _V40_V10vcore_Dvector__length;
    env->vars[116] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vector___Glist_lambda100, env)});
    env->vars[117] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vector__for__each_lambda102, env)});
    env->vars[118] = _V40_V10vcore_Drecord;
    env->vars[119] = _V40_V10vcore_Drecord__ref;
    env->vars[120] = _V40_V10vcore_Drecord__set_B;
    env->vars[121] = _V40_V10vcore_Drecord__length;
    env->vars[122] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0make__hash__table_lambda108, env)});
    env->vars[123] = _V40_V10vcore_Dhash__table__equivalence__function;
    env->vars[124] = _V40_V10vcore_Dhash__table__hash__function;
    env->vars[125] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0hash__table__ref_lambda109, env)});
    env->vars[126] = _V40_V10vcore_Dhash__table__set_B;
    env->vars[127] = _V40_V10vcore_Dhash__table__delete_B;
    env->vars[128] = _V40_V10vcore_Dchar__integer;
    env->vars[129] = VEncodeBool(false);
    env->vars[130] = VEncodeBool(false);
    env->vars[131] = VEncodeBool(false);
    env->vars[132] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0try__or__gc_lambda111, env)});
    env->vars[133] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0close__port_lambda114, env)});
    env->vars[134] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0open__input__file__impl_lambda115, env)});
    env->vars[135] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0open__output__file__impl_lambda118, env)});
    env->vars[136] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0open__output__string__impl_lambda121, env)});
    env->vars[137] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0open__input__file_lambda123, env)});
    env->vars[138] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0open__output__file_lambda125, env)});
    env->vars[139] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0open__output__string_lambda127, env)});
    env->vars[140] = _V40_V10vcore_Dget__output__string;
    env->vars[141] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0with__output__to__file_lambda128, env)});
    env->vars[142] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0with__input__from__file_lambda130, env)});
    env->vars[143] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0read__char_lambda132, env)});
    env->vars[144] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0read__line_lambda133, env)});
    env->vars[145] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0read_lambda134, env)});
    env->vars[146] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0newline_lambda135, env)});
    env->vars[147] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0printout__list_lambda136, env)});
    env->vars[148] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0printout__quotation_lambda138, env)});
    env->vars[149] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0printout_lambda139, env)});
    env->vars[150] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0display_lambda141, env)});
    env->vars[151] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0write_lambda142, env)});
    env->vars[152] = _V40_V10vcore_Dcall_Wcc;
    env->vars[153] = _V40_V10vcore_Dcall_Wcc;
    env->vars[154] = _V40_V10vcore_Dcall__with__values;
    env->vars[155] = _V40_V10vcore_Dapply;
    env->vars[156] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0values_lambda143, env)});
    env->vars[157] = upenv->vars[1];
    env->vars[158] = upenv->vars[0];
    env->vars[159] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0make__parameter_lambda145, env)});
    env->vars[160] = _V40_V10vcore_Dcommand__line;
    env->vars[161] = _V40_V10vcore_Dsystem;
    env->vars[162] = _V40_V10vcore_Dopen__input__process;
    env->vars[163] = _V40_V10vcore_Dopen__output__process;
    env->vars[164] = _V40_V10vcore_Dmake__temporary__file;
    env->vars[165] = _V40_V10vcore_Dexit;
    env->vars[166] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0atom_Q_lambda150, env)});
    env->vars[167] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0displayln_lambda151, env)});
    env->vars[168] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0writeln_lambda152, env)});
    env->vars[169] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0format__printf_lambda153, env)});
    env->vars[170] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0format__sprintf_lambda155, env)});
    env->vars[171] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0printf_lambda156, env)});
    env->vars[172] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0sprintf_lambda157, env)});
    env->vars[173] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0format_lambda158, env)});
    env->vars[174] = _V40_V10vcore_Draise;
    env->vars[175] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0raise__continuable_lambda159, env)});
    env->vars[176] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0with__exception__handler_lambda160, env)});
    env->vars[177] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0error_lambda161, env)});
    env->vars[178] = _V40_V10vcore_Dfiber__fork__list;
    env->vars[179] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0fiber__fork_lambda163, env)});
    env->vars[180] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0fiber__map_lambda164, env)});
    env->vars[181] = _V40_V10vcore_Dasync;
    env->vars[182] = _V40_V10vcore_Dawait;
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k432, env)}),
      VEncodeInt(0l), VEncodeInt(29l),
      env->vars[28]
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
  // ((close _V0vanity_V0core_V20_lambda2) (bruijn ##x.5 1 0) (bruijn ##x.6 0 0))
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
  // (##vcore.make-import (close _V0vanity_V0core_V20_k2) (##string ##string.1137) (bruijn ##x.1116 0 0))
    V_CALL_FUNC(VMakeImport2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k2, env)}),
      VEncodePointer(&_V10string_D1137.sym, VPOINTER_OTHER),
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
  // (##vcore.load-library (close _V0vanity_V0core_V20_k1) (##string ##string.1138))
    V_CALL_FUNC(VLoadLibrary2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k1, env)}),
      VEncodePointer(&_V10string_D1138.sym, VPOINTER_OTHER));
 }
}
VFunc _V0vanity_V0core_V20 = (VFunc)_V0vanity_V0core_V20_lambda1;
