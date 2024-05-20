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
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D1798 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "_V0vanity_V0seed_V20" };
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D1797 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "_V0vanity_V0core_V20" };
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
VWEAK VWORD _V0pow;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0pow = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "pow" };
VWEAK VWORD _V0expt;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0expt = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "expt" };
VWEAK VWORD _V0log;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0log = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "log" };
VWEAK VWORD _V0exp;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0exp = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "exp" };
VWEAK VWORD _V0atan;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0atan = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "atan" };
VWEAK VWORD _V0acos;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0acos = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "acos" };
VWEAK VWORD _V0asin;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0asin = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "asin" };
VWEAK VWORD _V0tan;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0tan = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "tan" };
VWEAK VWORD _V0cos;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0cos = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "cos" };
VWEAK VWORD _V0sin;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0sin = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "sin" };
VWEAK VWORD _V0round;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0round = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "round" };
VWEAK VWORD _V0floor;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0floor = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "floor" };
VWEAK VWORD _V0ceiling;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0ceiling = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "ceiling" };
VWEAK VWORD _V0sqrt;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0sqrt = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "sqrt" };
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
VWEAK VWORD _V0error;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0error = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "error" };
VWEAK VWORD _V40_V10vcore_Draise;VWEAK VClosure _VW_V40_V10vcore_Draise = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VRaise, NULL };
static struct { VBlob sym; char bytes[23]; } _V10_Dstring_D1796 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 23 }, "printf: unknown format" };
static struct { VBlob sym; char bytes[42]; } _V10_Dstring_D1795 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 42 }, "printf: not enough args for format string" };
static struct { VBlob sym; char bytes[41]; } _V10_Dstring_D1794 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 41 }, "printf: format string has trailing tilde" };
VWEAK VWORD _V40_V10vcore_Dexit;VWEAK VClosure _VW_V40_V10vcore_Dexit = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VExit2, NULL };
VWEAK VWORD _V40_V10vcore_Dmake__temporary__file;VWEAK VClosure _VW_V40_V10vcore_Dmake__temporary__file = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VMakeTemporaryFile2, NULL };
VWEAK VWORD _V40_V10vcore_Dopen__output__process;VWEAK VClosure _VW_V40_V10vcore_Dopen__output__process = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VOpenOutputProcess2, NULL };
VWEAK VWORD _V40_V10vcore_Dopen__input__process;VWEAK VClosure _VW_V40_V10vcore_Dopen__input__process = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VOpenInputProcess2, NULL };
VWEAK VWORD _V40_V10vcore_Dsystem;VWEAK VClosure _VW_V40_V10vcore_Dsystem = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VSystem2, NULL };
VWEAK VWORD _V40_V10vcore_Dcommand__line;VWEAK VClosure _VW_V40_V10vcore_Dcommand__line = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VCommandLine2, NULL };
static struct { VBlob sym; char bytes[40]; } _V10_Dstring_D1793 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 40 }, "parameter object expects zero arguments" };
VWEAK VWORD _V0parameter;VWEAK struct { VBlob sym; char bytes[10]; } _VW_V0parameter = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 10 }, "parameter" };
VWEAK VWORD _V40_V10vcore_Dapply;VWEAK VClosure _VW_V40_V10vcore_Dapply = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VApply2, NULL };
VWEAK VWORD _V40_V10vcore_Dcall__with__values;VWEAK VClosure _VW_V40_V10vcore_Dcall__with__values = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VCallValues2, NULL };
VWEAK VWORD _V40_V10vcore_Dcall_Wcc;VWEAK VClosure _VW_V40_V10vcore_Dcall_Wcc = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VCallCC2, NULL };
static struct { VBlob sym; char bytes[3]; } _V10_Dstring_D1792 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 3 }, "#(" };
static struct { VBlob sym; char bytes[3]; } _V10_Dstring_D1791 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 3 }, ",@" };
VWEAK VWORD _V0unquote__splicing;VWEAK struct { VBlob sym; char bytes[17]; } _VW_V0unquote__splicing = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 17 }, "unquote-splicing" };
static struct { VBlob sym; char bytes[2]; } _V10_Dstring_D1790 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 2 }, "," };
VWEAK VWORD _V0unquote;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0unquote = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "unquote" };
static struct { VBlob sym; char bytes[2]; } _V10_Dstring_D1789 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 2 }, "`" };
VWEAK VWORD _V0quasiquote;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V0quasiquote = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "quasiquote" };
static struct { VBlob sym; char bytes[2]; } _V10_Dstring_D1788 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 2 }, "'" };
VWEAK VWORD _V0quote;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0quote = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "quote" };
static struct { VBlob sym; char bytes[2]; } _V10_Dstring_D1787 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 2 }, "(" };
static struct { VBlob sym; char bytes[2]; } _V10_Dstring_D1786 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 2 }, ")" };
static struct { VBlob sym; char bytes[4]; } _V10_Dstring_D1785 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 4 }, " . " };
VWEAK VWORD _V0ok;VWEAK struct { VBlob sym; char bytes[3]; } _VW_V0ok = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 3 }, "ok" };
static struct { VBlob sym; char bytes[2]; } _V10_Dstring_D1784 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 2 }, " " };
VWEAK VWORD _V10vcore_Dpush__value;VWEAK struct { VBlob sym; char bytes[19]; } _VW_V10vcore_Dpush__value = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 19 }, "##vcore.push-value" };
VWEAK VWORD _V10vcore_Dpop__value;VWEAK struct { VBlob sym; char bytes[18]; } _VW_V10vcore_Dpop__value = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 18 }, "##vcore.pop-value" };
VWEAK VWORD _V40_V10vcore_Dget__output__string;VWEAK VClosure _VW_V40_V10vcore_Dget__output__string = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VGetOutputString2, NULL };
static struct { VBlob sym; char bytes[27]; } _V10_Dstring_D1783 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 27 }, "open-output-string: failed" };
static struct { VBlob sym; char bytes[25]; } _V10_Dstring_D1782 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 25 }, "open-output-file: failed" };
static struct { VBlob sym; char bytes[24]; } _V10_Dstring_D1781 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 24 }, "open-input-file: failed" };
VWEAK VWORD _V40_V10vcore_Dclose__stream;VWEAK VClosure _VW_V40_V10vcore_Dclose__stream = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VCloseStream2, NULL };
VWEAK VWORD _V40_V10vcore_Dchar__integer;VWEAK VClosure _VW_V40_V10vcore_Dchar__integer = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VCharInt2, NULL };
VWEAK VWORD _V40_V10vcore_Dhash__table__delete_B;VWEAK VClosure _VW_V40_V10vcore_Dhash__table__delete_B = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VHashTableDelete, NULL };
static struct { VBlob sym; char bytes[26]; } _V10_Dstring_D1780 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 26 }, "No such key in hash table" };
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
static struct { VBlob sym; char bytes[1]; } _V10_Dstring_D1779 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 1 }, "" };
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
  _V0pow = VEncodePointer(VLookupConstant("_V0pow", &_VW_V0pow), VPOINTER_OTHER);
  _V0expt = VEncodePointer(VLookupConstant("_V0expt", &_VW_V0expt), VPOINTER_OTHER);
  _V0log = VEncodePointer(VLookupConstant("_V0log", &_VW_V0log), VPOINTER_OTHER);
  _V0exp = VEncodePointer(VLookupConstant("_V0exp", &_VW_V0exp), VPOINTER_OTHER);
  _V0atan = VEncodePointer(VLookupConstant("_V0atan", &_VW_V0atan), VPOINTER_OTHER);
  _V0acos = VEncodePointer(VLookupConstant("_V0acos", &_VW_V0acos), VPOINTER_OTHER);
  _V0asin = VEncodePointer(VLookupConstant("_V0asin", &_VW_V0asin), VPOINTER_OTHER);
  _V0tan = VEncodePointer(VLookupConstant("_V0tan", &_VW_V0tan), VPOINTER_OTHER);
  _V0cos = VEncodePointer(VLookupConstant("_V0cos", &_VW_V0cos), VPOINTER_OTHER);
  _V0sin = VEncodePointer(VLookupConstant("_V0sin", &_VW_V0sin), VPOINTER_OTHER);
  _V0round = VEncodePointer(VLookupConstant("_V0round", &_VW_V0round), VPOINTER_OTHER);
  _V0floor = VEncodePointer(VLookupConstant("_V0floor", &_VW_V0floor), VPOINTER_OTHER);
  _V0ceiling = VEncodePointer(VLookupConstant("_V0ceiling", &_VW_V0ceiling), VPOINTER_OTHER);
  _V0sqrt = VEncodePointer(VLookupConstant("_V0sqrt", &_VW_V0sqrt), VPOINTER_OTHER);
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
  _V0error = VEncodePointer(VLookupConstant("_V0error", &_VW_V0error), VPOINTER_OTHER);
  _V40_V10vcore_Draise = VEncodePointer(VLookupConstant("_V40_V10vcore_Draise", &_VW_V40_V10vcore_Draise), VPOINTER_CLOSURE);
  _V40_V10vcore_Dexit = VEncodePointer(VLookupConstant("_V40_V10vcore_Dexit", &_VW_V40_V10vcore_Dexit), VPOINTER_CLOSURE);
  _V40_V10vcore_Dmake__temporary__file = VEncodePointer(VLookupConstant("_V40_V10vcore_Dmake__temporary__file", &_VW_V40_V10vcore_Dmake__temporary__file), VPOINTER_CLOSURE);
  _V40_V10vcore_Dopen__output__process = VEncodePointer(VLookupConstant("_V40_V10vcore_Dopen__output__process", &_VW_V40_V10vcore_Dopen__output__process), VPOINTER_CLOSURE);
  _V40_V10vcore_Dopen__input__process = VEncodePointer(VLookupConstant("_V40_V10vcore_Dopen__input__process", &_VW_V40_V10vcore_Dopen__input__process), VPOINTER_CLOSURE);
  _V40_V10vcore_Dsystem = VEncodePointer(VLookupConstant("_V40_V10vcore_Dsystem", &_VW_V40_V10vcore_Dsystem), VPOINTER_CLOSURE);
  _V40_V10vcore_Dcommand__line = VEncodePointer(VLookupConstant("_V40_V10vcore_Dcommand__line", &_VW_V40_V10vcore_Dcommand__line), VPOINTER_CLOSURE);
  _V0parameter = VEncodePointer(VLookupConstant("_V0parameter", &_VW_V0parameter), VPOINTER_OTHER);
  _V40_V10vcore_Dapply = VEncodePointer(VLookupConstant("_V40_V10vcore_Dapply", &_VW_V40_V10vcore_Dapply), VPOINTER_CLOSURE);
  _V40_V10vcore_Dcall__with__values = VEncodePointer(VLookupConstant("_V40_V10vcore_Dcall__with__values", &_VW_V40_V10vcore_Dcall__with__values), VPOINTER_CLOSURE);
  _V40_V10vcore_Dcall_Wcc = VEncodePointer(VLookupConstant("_V40_V10vcore_Dcall_Wcc", &_VW_V40_V10vcore_Dcall_Wcc), VPOINTER_CLOSURE);
  _V0unquote__splicing = VEncodePointer(VLookupConstant("_V0unquote__splicing", &_VW_V0unquote__splicing), VPOINTER_OTHER);
  _V0unquote = VEncodePointer(VLookupConstant("_V0unquote", &_VW_V0unquote), VPOINTER_OTHER);
  _V0quasiquote = VEncodePointer(VLookupConstant("_V0quasiquote", &_VW_V0quasiquote), VPOINTER_OTHER);
  _V0quote = VEncodePointer(VLookupConstant("_V0quote", &_VW_V0quote), VPOINTER_OTHER);
  _V0ok = VEncodePointer(VLookupConstant("_V0ok", &_VW_V0ok), VPOINTER_OTHER);
  _V10vcore_Dpush__value = VEncodePointer(VLookupConstant("_V10vcore_Dpush__value", &_VW_V10vcore_Dpush__value), VPOINTER_OTHER);
  _V10vcore_Dpop__value = VEncodePointer(VLookupConstant("_V10vcore_Dpop__value", &_VW_V10vcore_Dpop__value), VPOINTER_OTHER);
  _V40_V10vcore_Dget__output__string = VEncodePointer(VLookupConstant("_V40_V10vcore_Dget__output__string", &_VW_V40_V10vcore_Dget__output__string), VPOINTER_CLOSURE);
  _V40_V10vcore_Dclose__stream = VEncodePointer(VLookupConstant("_V40_V10vcore_Dclose__stream", &_VW_V40_V10vcore_Dclose__stream), VPOINTER_CLOSURE);
  _V40_V10vcore_Dchar__integer = VEncodePointer(VLookupConstant("_V40_V10vcore_Dchar__integer", &_VW_V40_V10vcore_Dchar__integer), VPOINTER_CLOSURE);
  _V40_V10vcore_Dhash__table__delete_B = VEncodePointer(VLookupConstant("_V40_V10vcore_Dhash__table__delete_B", &_VW_V40_V10vcore_Dhash__table__delete_B), VPOINTER_CLOSURE);
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
double pow(double, double);;
void _V30pow_shim(V_CORE_ARGS, VWORD _k, VWORD _arg0, VWORD _arg1) {
  V_ARG_CHECK3(runtime, "_V30pow_shim", 3, argc);
  V_GC_CHECK2_VARARGS((VFunc)_V30pow_shim, runtime, statics, 3, 3, _k, _arg0, _arg1) {
    VWORD _ret = VEncodeDouble(pow(VCheckedDecodeNumber2(runtime, _arg0, "pow"), VCheckedDecodeNumber2(runtime, _arg1, "pow")));
  V_CALL(_k, runtime, _ret);
  }
}
double log(double);;
void _V30log_shim(V_CORE_ARGS, VWORD _k, VWORD _arg0) {
  V_ARG_CHECK3(runtime, "_V30log_shim", 2, argc);
  V_GC_CHECK2_VARARGS((VFunc)_V30log_shim, runtime, statics, 2, 2, _k, _arg0) {
    VWORD _ret = VEncodeDouble(log(VCheckedDecodeNumber2(runtime, _arg0, "log")));
  V_CALL(_k, runtime, _ret);
  }
}
double exp(double);;
void _V30exp_shim(V_CORE_ARGS, VWORD _k, VWORD _arg0) {
  V_ARG_CHECK3(runtime, "_V30exp_shim", 2, argc);
  V_GC_CHECK2_VARARGS((VFunc)_V30exp_shim, runtime, statics, 2, 2, _k, _arg0) {
    VWORD _ret = VEncodeDouble(exp(VCheckedDecodeNumber2(runtime, _arg0, "exp")));
  V_CALL(_k, runtime, _ret);
  }
}
double atan2(double, double);;
void _V30atan2_shim(V_CORE_ARGS, VWORD _k, VWORD _arg0, VWORD _arg1) {
  V_ARG_CHECK3(runtime, "_V30atan2_shim", 3, argc);
  V_GC_CHECK2_VARARGS((VFunc)_V30atan2_shim, runtime, statics, 3, 3, _k, _arg0, _arg1) {
    VWORD _ret = VEncodeDouble(atan2(VCheckedDecodeNumber2(runtime, _arg0, "atan2"), VCheckedDecodeNumber2(runtime, _arg1, "atan2")));
  V_CALL(_k, runtime, _ret);
  }
}
double atan(double);;
void _V30atan_shim(V_CORE_ARGS, VWORD _k, VWORD _arg0) {
  V_ARG_CHECK3(runtime, "_V30atan_shim", 2, argc);
  V_GC_CHECK2_VARARGS((VFunc)_V30atan_shim, runtime, statics, 2, 2, _k, _arg0) {
    VWORD _ret = VEncodeDouble(atan(VCheckedDecodeNumber2(runtime, _arg0, "atan")));
  V_CALL(_k, runtime, _ret);
  }
}
double acos(double);;
void _V30acos_shim(V_CORE_ARGS, VWORD _k, VWORD _arg0) {
  V_ARG_CHECK3(runtime, "_V30acos_shim", 2, argc);
  V_GC_CHECK2_VARARGS((VFunc)_V30acos_shim, runtime, statics, 2, 2, _k, _arg0) {
    VWORD _ret = VEncodeDouble(acos(VCheckedDecodeNumber2(runtime, _arg0, "acos")));
  V_CALL(_k, runtime, _ret);
  }
}
double asin(double);;
void _V30asin_shim(V_CORE_ARGS, VWORD _k, VWORD _arg0) {
  V_ARG_CHECK3(runtime, "_V30asin_shim", 2, argc);
  V_GC_CHECK2_VARARGS((VFunc)_V30asin_shim, runtime, statics, 2, 2, _k, _arg0) {
    VWORD _ret = VEncodeDouble(asin(VCheckedDecodeNumber2(runtime, _arg0, "asin")));
  V_CALL(_k, runtime, _ret);
  }
}
double tan(double);;
void _V30tan_shim(V_CORE_ARGS, VWORD _k, VWORD _arg0) {
  V_ARG_CHECK3(runtime, "_V30tan_shim", 2, argc);
  V_GC_CHECK2_VARARGS((VFunc)_V30tan_shim, runtime, statics, 2, 2, _k, _arg0) {
    VWORD _ret = VEncodeDouble(tan(VCheckedDecodeNumber2(runtime, _arg0, "tan")));
  V_CALL(_k, runtime, _ret);
  }
}
double cos(double);;
void _V30cos_shim(V_CORE_ARGS, VWORD _k, VWORD _arg0) {
  V_ARG_CHECK3(runtime, "_V30cos_shim", 2, argc);
  V_GC_CHECK2_VARARGS((VFunc)_V30cos_shim, runtime, statics, 2, 2, _k, _arg0) {
    VWORD _ret = VEncodeDouble(cos(VCheckedDecodeNumber2(runtime, _arg0, "cos")));
  V_CALL(_k, runtime, _ret);
  }
}
double sin(double);;
void _V30sin_shim(V_CORE_ARGS, VWORD _k, VWORD _arg0) {
  V_ARG_CHECK3(runtime, "_V30sin_shim", 2, argc);
  V_GC_CHECK2_VARARGS((VFunc)_V30sin_shim, runtime, statics, 2, 2, _k, _arg0) {
    VWORD _ret = VEncodeDouble(sin(VCheckedDecodeNumber2(runtime, _arg0, "sin")));
  V_CALL(_k, runtime, _ret);
  }
}
double sqrt(double);;
void _V30sqrt_shim(V_CORE_ARGS, VWORD _k, VWORD _arg0) {
  V_ARG_CHECK3(runtime, "_V30sqrt_shim", 2, argc);
  V_GC_CHECK2_VARARGS((VFunc)_V30sqrt_shim, runtime, statics, 2, 2, _k, _arg0) {
    VWORD _ret = VEncodeDouble(sqrt(VCheckedDecodeNumber2(runtime, _arg0, "sqrt")));
  V_CALL(_k, runtime, _ret);
  }
}
double round(double);;
void _V30round_shim(V_CORE_ARGS, VWORD _k, VWORD _arg0) {
  V_ARG_CHECK3(runtime, "_V30round_shim", 2, argc);
  V_GC_CHECK2_VARARGS((VFunc)_V30round_shim, runtime, statics, 2, 2, _k, _arg0) {
    VWORD _ret = VEncodeDouble(round(VCheckedDecodeNumber2(runtime, _arg0, "round")));
  V_CALL(_k, runtime, _ret);
  }
}
double floor(double);;
void _V30floor_shim(V_CORE_ARGS, VWORD _k, VWORD _arg0) {
  V_ARG_CHECK3(runtime, "_V30floor_shim", 2, argc);
  V_GC_CHECK2_VARARGS((VFunc)_V30floor_shim, runtime, statics, 2, 2, _k, _arg0) {
    VWORD _ret = VEncodeDouble(floor(VCheckedDecodeNumber2(runtime, _arg0, "floor")));
  V_CALL(_k, runtime, _ret);
  }
}
double ceil(double);;
void _V30ceil_shim(V_CORE_ARGS, VWORD _k, VWORD _arg0) {
  V_ARG_CHECK3(runtime, "_V30ceil_shim", 2, argc);
  V_GC_CHECK2_VARARGS((VFunc)_V30ceil_shim, runtime, statics, 2, 2, _k, _arg0) {
    VWORD _ret = VEncodeDouble(ceil(VCheckedDecodeNumber2(runtime, _arg0, "ceil")));
  V_CALL(_k, runtime, _ret);
  }
}
static void _V10_Dboolean_Q_D12_k5(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dboolean_Q_D12_k5" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dboolean_Q_D12_k5, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dboolean_Q_D12_k5, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##.p.657 0 0) ((bruijn ##.k.656 1 0) (bruijn ##.p.657 0 0)) ((bruijn ##.k.656 1 0) (##inline ##vcore.eq? (bruijn ##.x.211 1 1) #f)))
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
static void _V10_Dboolean_Q_D12_lambda3(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V10_Dboolean_Q_D12_lambda3" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dboolean_Q_D12_lambda3, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dboolean_Q_D12_lambda3, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V10_Dboolean_Q_D12_k5) (##inline ##vcore.eq? (bruijn ##.x.211 0 1) #t))
    V_CALL_FUNC(_V10_Dboolean_Q_D12_k5, env, runtime,
      VInlineEq2(runtime,
        _var1,
        VEncodeBool(true)));
 }
}
static void _V10_Dsymbol_E_Q_D27_k6(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dsymbol_E_Q_D27_k6" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dsymbol_E_Q_D27_k6, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dsymbol_E_Q_D27_k6, runtime, upenv, 1, argc, _var0) {
  // (if (##intrinsic ##vcore.symbol=?) (if (bruijn ##.x.214 1 1) ((bruijn ##.k.661 0 0) (bruijn ##.y.215 1 2)) ((bruijn ##.k.661 0 0) #f)) ((bruijn ##.k.661 0 0) #f))
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
static void _V10_Dsymbol_E_Q_D27_k7(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dsymbol_E_Q_D27_k7" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dsymbol_E_Q_D27_k7, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dsymbol_E_Q_D27_k7, runtime, upenv, 1, argc, _var0) {
  // (##vcore.symbol=? (bruijn ##.k.659 1 0) (bruijn ##.y.215 1 2) (bruijn ##.z.216 1 3))
    V_CALL_FUNC(VSymbolEqv2, NULL, runtime,
      upenv->vars[0],
      upenv->vars[2],
      upenv->vars[3]);
 }
}
static void _V10_Dsymbol_E_Q_D27_k8(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dsymbol_E_Q_D27_k8" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dsymbol_E_Q_D27_k8, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dsymbol_E_Q_D27_k8, runtime, upenv, 1, argc, _var0) {
  // (if (##intrinsic ##vcore.symbol=?) (if (bruijn ##.x.217 1 1) ((bruijn ##.k.665 0 0) (bruijn ##.y.218 1 2)) ((bruijn ##.k.665 0 0) #f)) ((bruijn ##.k.665 0 0) #f))
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
static void _V10_Dsymbol_E_Q_D27_k10(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dsymbol_E_Q_D27_k10" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dsymbol_E_Q_D27_k10, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dsymbol_E_Q_D27_k10, runtime, upenv, 1, argc, _var0) {
  // (##vcore.symbol=? (bruijn ##.k.662 2 0) (bruijn ##.z.219 2 3) (bruijn ##.w.220 2 4))
    V_CALL_FUNC(VSymbolEqv2, NULL, runtime,
      upenv->up->vars[0],
      upenv->up->vars[3],
      upenv->up->vars[4]);
 }
}
static void _V10_Dsymbol_E_Q_D27_k9(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dsymbol_E_Q_D27_k9" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dsymbol_E_Q_D27_k9, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dsymbol_E_Q_D27_k9, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.symbol=? (close _V10_Dsymbol_E_Q_D27_k10) (bruijn ##.y.218 1 2) (bruijn ##.z.219 1 3))
    V_CALL_FUNC(VSymbolEqv2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dsymbol_E_Q_D27_k10, env)}),
      upenv->vars[2],
      upenv->vars[3]);
 }
}
static void _V10_Dloop_D224_k15(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D224_k15" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D224_k15, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D224_k15, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.loop.224 6 0) (bruijn ##.k.667 5 0) (bruijn ##.x.670 0 0))
    V_CALL(VGetArg(upenv, 6-1, 0), runtime,
      VGetArg(upenv, 5-1, 0),
      _var0);
 }
}
static void _V10_Dloop_D224_k14(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D224_k14" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D224_k14, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D224_k14, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.669 0 0) ((bruijn ##.k.667 4 0) #f) ((bruijn ##.cdr.76 7 65) (close _V10_Dloop_D224_k15) (bruijn ##.xs.225 4 1)))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeBool(false));
} else {
    V_CALL(VGetArg(upenv, 7-1, 65), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D224_k15, env)}),
      upenv->up->up->up->vars[1]);
}
 }
}
static void _V10_Dloop_D224_k13(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D224_k13" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D224_k13, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D224_k13, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.not.33 6 22) (close _V10_Dloop_D224_k14) (bruijn ##.x.671 0 0))
    V_CALL(VGetArg(upenv, 6-1, 22), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D224_k14, env)}),
      _var0);
 }
}
static void _V10_Dloop_D224_k12(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D224_k12" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D224_k12, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D224_k12, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.symbol=? (close _V10_Dloop_D224_k13) (bruijn ##.x.221 4 1) (bruijn ##.x.672 0 0))
    V_CALL_FUNC(VSymbolEqv2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D224_k13, env)}),
      upenv->up->up->up->vars[1],
      _var0);
 }
}
static void _V10_Dloop_D224_k11(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D224_k11" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D224_k11, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D224_k11, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.668 0 0) ((bruijn ##.k.667 1 0) #t) ((bruijn ##.car.75 4 64) (close _V10_Dloop_D224_k12) (bruijn ##.xs.225 1 1)))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(true));
} else {
    V_CALL(upenv->up->up->up->vars[64], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D224_k12, env)}),
      upenv->vars[1]);
}
 }
}
static void _V10_Dloop_D224_lambda5(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V10_Dloop_D224_lambda5" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D224_lambda5, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D224_lambda5, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##.null?.11 3 0) (close _V10_Dloop_D224_k11) (bruijn ##.xs.225 0 1))
    V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D224_k11, env)}),
      _var1);
 }
}
static void _V10_Dsymbol_E_Q_D27_k16(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dsymbol_E_Q_D27_k16" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dsymbol_E_Q_D27_k16, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dsymbol_E_Q_D27_k16, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.loop.224 1 0) (bruijn ##.k.666 2 0) (bruijn ##.x.673 0 0))
    V_CALL(upenv->vars[0], runtime,
      upenv->up->vars[0],
      _var0);
 }
}
__attribute__((used)) static void _V20CaseError__V10_Dsymbol_E_Q_D27_lambda4(VRuntime * runtime, VEnv * upenv, int argc, ...) {
 // (_V10_Dsymbol_E_Q_D27_lambda4 #t (3 (##vcore.symbol=? (bruijn ##.k.658 0 0) (bruijn ##.x.212 0 1) (bruijn ##.y.213 0 2))) (4 ((close _V10_Dsymbol_E_Q_D27_k6) (close _V10_Dsymbol_E_Q_D27_k7))) (5 ((close _V10_Dsymbol_E_Q_D27_k8) (close _V10_Dsymbol_E_Q_D27_k9))) (3 + (letrec 1 ((close _V10_Dloop_D224_lambda5)) ((bruijn ##.cons.74 2 63) (close _V10_Dsymbol_E_Q_D27_k16) (bruijn ##.y.222 1 2) (bruijn ##.xs.223 1 3)))))
 VErrorC(runtime, "Not enough arguments to _V10_Dsymbol_E_Q_D27_lambda4, got ~D~N"
 "-- expected 3~N"
 "-- expected 4~N"
 "-- expected 5~N"
 "-- expected 3 or more~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V10_Dsymbol_E_Q_D27_lambda4(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V20Case0__V10_Dsymbol_E_Q_D27_lambda4" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case0__V10_Dsymbol_E_Q_D27_lambda4, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  // (##vcore.symbol=? (bruijn ##.k.658 0 0) (bruijn ##.x.212 0 1) (bruijn ##.y.213 0 2))
    V_CALL_FUNC(VSymbolEqv2, NULL, runtime,
      _var0,
      _var1,
      _var2);
 }
}
__attribute__((used)) static void _V20Case1__V10_Dsymbol_E_Q_D27_lambda4(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V20Case1__V10_Dsymbol_E_Q_D27_lambda4" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case1__V10_Dsymbol_E_Q_D27_lambda4, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // ((close _V10_Dsymbol_E_Q_D27_k6) (close _V10_Dsymbol_E_Q_D27_k7))
    V_CALL_FUNC(_V10_Dsymbol_E_Q_D27_k6, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dsymbol_E_Q_D27_k7, env)}));
 }
}
__attribute__((used)) static void _V20Case2__V10_Dsymbol_E_Q_D27_lambda4(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4) {
 static VDebugInfo dbg = { "_V20Case2__V10_Dsymbol_E_Q_D27_lambda4" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case2__V10_Dsymbol_E_Q_D27_lambda4, runtime, upenv, 5, argc, _var0, _var1, _var2, _var3, _var4) {
  struct { VEnv env; VWORD argv[5]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 5, 5, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  env->vars[4] = _var4;
  // ((close _V10_Dsymbol_E_Q_D27_k8) (close _V10_Dsymbol_E_Q_D27_k9))
    V_CALL_FUNC(_V10_Dsymbol_E_Q_D27_k8, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dsymbol_E_Q_D27_k9, env)}));
 }
}
__attribute__((used)) static void _V20Case3__V10_Dsymbol_E_Q_D27_lambda4(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, ...) {
 static VDebugInfo dbg = { "_V20Case3__V10_Dsymbol_E_Q_D27_lambda4" };
 VRecordCall2(runtime, &dbg);
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 3, argc, _var2);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case3__V10_Dsymbol_E_Q_D27_lambda4, runtime, upenv, 3, argc, _var0, _var1, _var2, _varargs) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _varargs;
  // (letrec 1 ((close _V10_Dloop_D224_lambda5)) ((bruijn ##.cons.74 2 63) (close _V10_Dsymbol_E_Q_D27_k16) (bruijn ##.y.222 1 2) (bruijn ##.xs.223 1 3)))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D224_lambda5, env)});
    V_CALL(upenv->up->vars[63], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dsymbol_E_Q_D27_k16, env)}),
      upenv->vars[2],
      upenv->vars[3]);
    }
 }
}
void _V10_Dsymbol_E_Q_D27_lambda4(VRuntime * runtime, VEnv * upenv, int argc, ...);
asm(
".intel_syntax noprefix\n"
#ifdef __linux__
".type _V10_Dsymbol_E_Q_D27_lambda4, @function\n"
#endif
"_V10_Dsymbol_E_Q_D27_lambda4:\n"
"    cmp " ARGC_REG ", 3\n"
"    je _V20Case0__V10_Dsymbol_E_Q_D27_lambda4\n"
"    cmp " ARGC_REG ", 4\n"
"    je _V20Case1__V10_Dsymbol_E_Q_D27_lambda4\n"
"    cmp " ARGC_REG ", 5\n"
"    je _V20Case2__V10_Dsymbol_E_Q_D27_lambda4\n"
"    cmp " ARGC_REG ", 3\n"
"    jge _V20Case3__V10_Dsymbol_E_Q_D27_lambda4\n"
"    jmp _V20CaseError__V10_Dsymbol_E_Q_D27_lambda4\n"
);
static void _V10_Dboolean_E_Q_D28_k18(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dboolean_E_Q_D28_k18" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dboolean_E_Q_D28_k18, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dboolean_E_Q_D28_k18, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##.p.676 0 0) ((bruijn ##.boolean?.12 3 1) (bruijn ##.k.674 2 0) (bruijn ##.y.227 2 2)) ((bruijn ##.k.674 2 0) #f))
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
static void _V10_Dboolean_E_Q_D28_k17(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dboolean_E_Q_D28_k17" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dboolean_E_Q_D28_k17, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dboolean_E_Q_D28_k17, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.675 0 0) ((bruijn ##.boolean?.12 2 1) (close _V10_Dboolean_E_Q_D28_k18) (bruijn ##.x.226 1 1)) ((bruijn ##.k.674 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->up->vars[1], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dboolean_E_Q_D28_k18, env)}),
      upenv->vars[1]);
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dboolean_E_Q_D28_k19(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dboolean_E_Q_D28_k19" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dboolean_E_Q_D28_k19, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dboolean_E_Q_D28_k19, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##.boolean=?.28 2 17) (if (bruijn ##.x.228 1 1) ((bruijn ##.k.679 0 0) (bruijn ##.y.229 1 2)) ((bruijn ##.k.679 0 0) #f)) ((bruijn ##.k.679 0 0) #f))
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
static void _V10_Dboolean_E_Q_D28_k20(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dboolean_E_Q_D28_k20" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dboolean_E_Q_D28_k20, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dboolean_E_Q_D28_k20, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.boolean=?.28 2 17) (bruijn ##.k.677 1 0) (bruijn ##.y.229 1 2) (bruijn ##.z.230 1 3))
    V_CALL(upenv->up->vars[17], runtime,
      upenv->vars[0],
      upenv->vars[2],
      upenv->vars[3]);
 }
}
static void _V10_Dboolean_E_Q_D28_k21(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dboolean_E_Q_D28_k21" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dboolean_E_Q_D28_k21, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dboolean_E_Q_D28_k21, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##.boolean=?.28 2 17) (if (bruijn ##.x.231 1 1) ((bruijn ##.k.683 0 0) (bruijn ##.y.232 1 2)) ((bruijn ##.k.683 0 0) #f)) ((bruijn ##.k.683 0 0) #f))
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
static void _V10_Dboolean_E_Q_D28_k23(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dboolean_E_Q_D28_k23" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dboolean_E_Q_D28_k23, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dboolean_E_Q_D28_k23, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.boolean=?.28 3 17) (bruijn ##.k.680 2 0) (bruijn ##.z.233 2 3) (bruijn ##.w.234 2 4))
    V_CALL(upenv->up->up->vars[17], runtime,
      upenv->up->vars[0],
      upenv->up->vars[3],
      upenv->up->vars[4]);
 }
}
static void _V10_Dboolean_E_Q_D28_k22(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dboolean_E_Q_D28_k22" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dboolean_E_Q_D28_k22, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dboolean_E_Q_D28_k22, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.boolean=?.28 2 17) (close _V10_Dboolean_E_Q_D28_k23) (bruijn ##.y.232 1 2) (bruijn ##.z.233 1 3))
    V_CALL(upenv->up->vars[17], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dboolean_E_Q_D28_k23, env)}),
      upenv->vars[2],
      upenv->vars[3]);
 }
}
static void _V10_Dloop_D238_k28(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D238_k28" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D238_k28, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D238_k28, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.loop.238 6 0) (bruijn ##.k.685 5 0) (bruijn ##.x.688 0 0))
    V_CALL(VGetArg(upenv, 6-1, 0), runtime,
      VGetArg(upenv, 5-1, 0),
      _var0);
 }
}
static void _V10_Dloop_D238_k27(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D238_k27" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D238_k27, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D238_k27, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.687 0 0) ((bruijn ##.k.685 4 0) #f) ((bruijn ##.cdr.76 7 65) (close _V10_Dloop_D238_k28) (bruijn ##.xs.239 4 1)))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeBool(false));
} else {
    V_CALL(VGetArg(upenv, 7-1, 65), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D238_k28, env)}),
      upenv->up->up->up->vars[1]);
}
 }
}
static void _V10_Dloop_D238_k26(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D238_k26" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D238_k26, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D238_k26, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.not.33 6 22) (close _V10_Dloop_D238_k27) (bruijn ##.x.689 0 0))
    V_CALL(VGetArg(upenv, 6-1, 22), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D238_k27, env)}),
      _var0);
 }
}
static void _V10_Dloop_D238_k25(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D238_k25" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D238_k25, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D238_k25, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.boolean=?.28 5 17) (close _V10_Dloop_D238_k26) (bruijn ##.x.235 4 1) (bruijn ##.x.690 0 0))
    V_CALL(VGetArg(upenv, 5-1, 17), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D238_k26, env)}),
      upenv->up->up->up->vars[1],
      _var0);
 }
}
static void _V10_Dloop_D238_k24(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D238_k24" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D238_k24, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D238_k24, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.686 0 0) ((bruijn ##.k.685 1 0) #t) ((bruijn ##.car.75 4 64) (close _V10_Dloop_D238_k25) (bruijn ##.xs.239 1 1)))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(true));
} else {
    V_CALL(upenv->up->up->up->vars[64], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D238_k25, env)}),
      upenv->vars[1]);
}
 }
}
static void _V10_Dloop_D238_lambda7(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V10_Dloop_D238_lambda7" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D238_lambda7, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D238_lambda7, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##.null?.11 3 0) (close _V10_Dloop_D238_k24) (bruijn ##.xs.239 0 1))
    V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D238_k24, env)}),
      _var1);
 }
}
static void _V10_Dboolean_E_Q_D28_k29(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dboolean_E_Q_D28_k29" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dboolean_E_Q_D28_k29, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dboolean_E_Q_D28_k29, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.loop.238 1 0) (bruijn ##.k.684 2 0) (bruijn ##.x.691 0 0))
    V_CALL(upenv->vars[0], runtime,
      upenv->up->vars[0],
      _var0);
 }
}
__attribute__((used)) static void _V20CaseError__V10_Dboolean_E_Q_D28_lambda6(VRuntime * runtime, VEnv * upenv, int argc, ...) {
 // (_V10_Dboolean_E_Q_D28_lambda6 #t (3 ((bruijn ##.eq?.26 1 15) (close _V10_Dboolean_E_Q_D28_k17) (bruijn ##.x.226 0 1) (bruijn ##.y.227 0 2))) (4 ((close _V10_Dboolean_E_Q_D28_k19) (close _V10_Dboolean_E_Q_D28_k20))) (5 ((close _V10_Dboolean_E_Q_D28_k21) (close _V10_Dboolean_E_Q_D28_k22))) (3 + (letrec 1 ((close _V10_Dloop_D238_lambda7)) ((bruijn ##.cons.74 2 63) (close _V10_Dboolean_E_Q_D28_k29) (bruijn ##.y.236 1 2) (bruijn ##.xs.237 1 3)))))
 VErrorC(runtime, "Not enough arguments to _V10_Dboolean_E_Q_D28_lambda6, got ~D~N"
 "-- expected 3~N"
 "-- expected 4~N"
 "-- expected 5~N"
 "-- expected 3 or more~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V10_Dboolean_E_Q_D28_lambda6(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V20Case0__V10_Dboolean_E_Q_D28_lambda6" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case0__V10_Dboolean_E_Q_D28_lambda6, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn ##.eq?.26 1 15) (close _V10_Dboolean_E_Q_D28_k17) (bruijn ##.x.226 0 1) (bruijn ##.y.227 0 2))
    V_CALL(upenv->vars[15], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dboolean_E_Q_D28_k17, env)}),
      _var1,
      _var2);
 }
}
__attribute__((used)) static void _V20Case1__V10_Dboolean_E_Q_D28_lambda6(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V20Case1__V10_Dboolean_E_Q_D28_lambda6" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case1__V10_Dboolean_E_Q_D28_lambda6, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // ((close _V10_Dboolean_E_Q_D28_k19) (close _V10_Dboolean_E_Q_D28_k20))
    V_CALL_FUNC(_V10_Dboolean_E_Q_D28_k19, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dboolean_E_Q_D28_k20, env)}));
 }
}
__attribute__((used)) static void _V20Case2__V10_Dboolean_E_Q_D28_lambda6(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4) {
 static VDebugInfo dbg = { "_V20Case2__V10_Dboolean_E_Q_D28_lambda6" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case2__V10_Dboolean_E_Q_D28_lambda6, runtime, upenv, 5, argc, _var0, _var1, _var2, _var3, _var4) {
  struct { VEnv env; VWORD argv[5]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 5, 5, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  env->vars[4] = _var4;
  // ((close _V10_Dboolean_E_Q_D28_k21) (close _V10_Dboolean_E_Q_D28_k22))
    V_CALL_FUNC(_V10_Dboolean_E_Q_D28_k21, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dboolean_E_Q_D28_k22, env)}));
 }
}
__attribute__((used)) static void _V20Case3__V10_Dboolean_E_Q_D28_lambda6(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, ...) {
 static VDebugInfo dbg = { "_V20Case3__V10_Dboolean_E_Q_D28_lambda6" };
 VRecordCall2(runtime, &dbg);
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 3, argc, _var2);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case3__V10_Dboolean_E_Q_D28_lambda6, runtime, upenv, 3, argc, _var0, _var1, _var2, _varargs) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _varargs;
  // (letrec 1 ((close _V10_Dloop_D238_lambda7)) ((bruijn ##.cons.74 2 63) (close _V10_Dboolean_E_Q_D28_k29) (bruijn ##.y.236 1 2) (bruijn ##.xs.237 1 3)))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D238_lambda7, env)});
    V_CALL(upenv->up->vars[63], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dboolean_E_Q_D28_k29, env)}),
      upenv->vars[2],
      upenv->vars[3]);
    }
 }
}
void _V10_Dboolean_E_Q_D28_lambda6(VRuntime * runtime, VEnv * upenv, int argc, ...);
asm(
".intel_syntax noprefix\n"
#ifdef __linux__
".type _V10_Dboolean_E_Q_D28_lambda6, @function\n"
#endif
"_V10_Dboolean_E_Q_D28_lambda6:\n"
"    cmp " ARGC_REG ", 3\n"
"    je _V20Case0__V10_Dboolean_E_Q_D28_lambda6\n"
"    cmp " ARGC_REG ", 4\n"
"    je _V20Case1__V10_Dboolean_E_Q_D28_lambda6\n"
"    cmp " ARGC_REG ", 5\n"
"    je _V20Case2__V10_Dboolean_E_Q_D28_lambda6\n"
"    cmp " ARGC_REG ", 3\n"
"    jge _V20Case3__V10_Dboolean_E_Q_D28_lambda6\n"
"    jmp _V20CaseError__V10_Dboolean_E_Q_D28_lambda6\n"
);
static void _V10_Dloop_D242_k38(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D242_k38" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D242_k38, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D242_k38, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.loop.242 6 0) (bruijn ##.k.694 5 0) (bruijn ##.x.697 0 0) (bruijn ##.len.244 5 2))
    V_CALL(VGetArg(upenv, 6-1, 0), runtime,
      VGetArg(upenv, 5-1, 0),
      _var0,
      VGetArg(upenv, 5-1, 2));
 }
}
static void _V10_Dloop_D242_k37(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D242_k37" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D242_k37, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D242_k37, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.696 0 0) ((bruijn ##.+.47 11 36) (close _V10_Dloop_D242_k38) (bruijn ##.i.243 4 1) 1) ((bruijn ##.k.694 4 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 11-1, 36), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D242_k38, env)}),
      upenv->up->up->up->vars[1],
      VEncodeInt(1l));
} else {
    V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dloop_D242_k36(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D242_k36" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D242_k36, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D242_k36, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.equal?.32 10 21) (close _V10_Dloop_D242_k37) (bruijn ##.x.698 1 0) (bruijn ##.x.699 0 0))
    V_CALL(VGetArg(upenv, 10-1, 21), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D242_k37, env)}),
      upenv->vars[0],
      _var0);
 }
}
static void _V10_Dloop_D242_k35(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D242_k35" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D242_k35, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D242_k35, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.vector-ref.141 9 130) (close _V10_Dloop_D242_k36) (bruijn ##.y.241 8 2) (bruijn ##.i.243 2 1))
    V_CALL(VGetArg(upenv, 9-1, 130), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D242_k36, env)}),
      VGetArg(upenv, 8-1, 2),
      upenv->up->vars[1]);
 }
}
static void _V10_Dloop_D242_k34(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D242_k34" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D242_k34, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D242_k34, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.695 0 0) ((bruijn ##.k.694 1 0) #t) ((bruijn ##.vector-ref.141 8 130) (close _V10_Dloop_D242_k35) (bruijn ##.x.240 7 1) (bruijn ##.i.243 1 1)))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(true));
} else {
    V_CALL(VGetArg(upenv, 8-1, 130), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D242_k35, env)}),
      VGetArg(upenv, 7-1, 1),
      upenv->vars[1]);
}
 }
}
static void _V10_Dloop_D242_lambda9(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V10_Dloop_D242_lambda9" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D242_lambda9, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D242_lambda9, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn ##.=.35 7 24) (close _V10_Dloop_D242_k34) (bruijn ##.i.243 0 1) (bruijn ##.len.244 0 2))
    V_CALL(VGetArg(upenv, 7-1, 24), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D242_k34, env)}),
      _var1,
      _var2);
 }
}
static void _V10_Dvector_E_Q_D30_k39(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dvector_E_Q_D30_k39" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dvector_E_Q_D30_k39, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dvector_E_Q_D30_k39, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.loop.242 1 0) (bruijn ##.k.692 6 0) 0 (bruijn ##.x.700 0 0))
    V_CALL(upenv->vars[0], runtime,
      VGetArg(upenv, 6-1, 0),
      VEncodeInt(0l),
      _var0);
 }
}
static void _V10_Dvector_E_Q_D30_k33(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dvector_E_Q_D30_k33" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dvector_E_Q_D30_k33, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dvector_E_Q_D30_k33, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.693 0 0) ((bruijn ##.k.692 4 0) #f) (letrec 1 ((close _V10_Dloop_D242_lambda9)) ((bruijn ##.vector-length.143 6 132) (close _V10_Dvector_E_Q_D30_k39) (bruijn ##.x.240 5 1))))
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
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D242_lambda9, env)});
    V_CALL(VGetArg(upenv, 6-1, 132), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dvector_E_Q_D30_k39, env)}),
      VGetArg(upenv, 5-1, 1));
    }
}
 }
}
static void _V10_Dvector_E_Q_D30_k32(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dvector_E_Q_D30_k32" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dvector_E_Q_D30_k32, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dvector_E_Q_D30_k32, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.not.33 4 22) (close _V10_Dvector_E_Q_D30_k33) (bruijn ##.x.701 0 0))
    V_CALL(upenv->up->up->up->vars[22], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dvector_E_Q_D30_k33, env)}),
      _var0);
 }
}
static void _V10_Dvector_E_Q_D30_k31(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dvector_E_Q_D30_k31" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dvector_E_Q_D30_k31, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dvector_E_Q_D30_k31, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.=.35 3 24) (close _V10_Dvector_E_Q_D30_k32) (bruijn ##.x.702 1 0) (bruijn ##.x.703 0 0))
    V_CALL(upenv->up->up->vars[24], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dvector_E_Q_D30_k32, env)}),
      upenv->vars[0],
      _var0);
 }
}
static void _V10_Dvector_E_Q_D30_k30(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dvector_E_Q_D30_k30" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dvector_E_Q_D30_k30, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dvector_E_Q_D30_k30, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.vector-length.143 2 132) (close _V10_Dvector_E_Q_D30_k31) (bruijn ##.y.241 1 2))
    V_CALL(upenv->up->vars[132], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dvector_E_Q_D30_k31, env)}),
      upenv->vars[2]);
 }
}
static void _V10_Dvector_E_Q_D30_lambda8(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V10_Dvector_E_Q_D30_lambda8" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dvector_E_Q_D30_lambda8, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dvector_E_Q_D30_lambda8, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn ##.vector-length.143 1 132) (close _V10_Dvector_E_Q_D30_k30) (bruijn ##.x.240 0 1))
    V_CALL(upenv->vars[132], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dvector_E_Q_D30_k30, env)}),
      _var1);
 }
}
static void _V10_Drecord_E_Q_D31_k45(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Drecord_E_Q_D31_k45" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Drecord_E_Q_D31_k45, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Drecord_E_Q_D31_k45, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.eqv?.29 7 18) (bruijn ##.k.715 2 0) (bruijn ##.x.716 1 0) (bruijn ##.x.717 0 0))
    V_CALL(VGetArg(upenv, 7-1, 18), runtime,
      upenv->up->vars[0],
      upenv->vars[0],
      _var0);
 }
}
static void _V10_Drecord_E_Q_D31_k44(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Drecord_E_Q_D31_k44" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Drecord_E_Q_D31_k44, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Drecord_E_Q_D31_k44, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.record-ref.147 6 136) (close _V10_Drecord_E_Q_D31_k45) (bruijn ##.y.246 5 2) 0)
    V_CALL(VGetArg(upenv, 6-1, 136), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Drecord_E_Q_D31_k45, env)}),
      VGetArg(upenv, 5-1, 2),
      VEncodeInt(0l));
 }
}
static void _V10_Drecord_E_Q_D31_k43(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Drecord_E_Q_D31_k43" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Drecord_E_Q_D31_k43, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Drecord_E_Q_D31_k43, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.714 1 0) ((bruijn ##.record-ref.147 5 136) (close _V10_Drecord_E_Q_D31_k44) (bruijn ##.x.245 4 1) 0) ((bruijn ##.k.715 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(VGetArg(upenv, 5-1, 136), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Drecord_E_Q_D31_k44, env)}),
      upenv->up->up->up->vars[1],
      VEncodeInt(0l));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dloop_D247_k52(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D247_k52" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D247_k52, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D247_k52, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.loop.247 6 0) (bruijn ##.k.706 5 0) (bruijn ##.x.709 0 0) (bruijn ##.len.249 5 2))
    V_CALL(VGetArg(upenv, 6-1, 0), runtime,
      VGetArg(upenv, 5-1, 0),
      _var0,
      VGetArg(upenv, 5-1, 2));
 }
}
static void _V10_Dloop_D247_k51(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D247_k51" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D247_k51, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D247_k51, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.708 0 0) ((bruijn ##.+.47 12 36) (close _V10_Dloop_D247_k52) (bruijn ##.i.248 4 1) 1) ((bruijn ##.k.706 4 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 12-1, 36), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D247_k52, env)}),
      upenv->up->up->up->vars[1],
      VEncodeInt(1l));
} else {
    V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dloop_D247_k50(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D247_k50" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D247_k50, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D247_k50, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.equal?.32 11 21) (close _V10_Dloop_D247_k51) (bruijn ##.x.710 1 0) (bruijn ##.x.711 0 0))
    V_CALL(VGetArg(upenv, 11-1, 21), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D247_k51, env)}),
      upenv->vars[0],
      _var0);
 }
}
static void _V10_Dloop_D247_k49(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D247_k49" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D247_k49, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D247_k49, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.record-ref.147 10 136) (close _V10_Dloop_D247_k50) (bruijn ##.y.246 9 2) (bruijn ##.i.248 2 1))
    V_CALL(VGetArg(upenv, 10-1, 136), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D247_k50, env)}),
      VGetArg(upenv, 9-1, 2),
      upenv->up->vars[1]);
 }
}
static void _V10_Dloop_D247_k48(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D247_k48" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D247_k48, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D247_k48, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.707 0 0) ((bruijn ##.k.706 1 0) #t) ((bruijn ##.record-ref.147 9 136) (close _V10_Dloop_D247_k49) (bruijn ##.x.245 8 1) (bruijn ##.i.248 1 1)))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(true));
} else {
    V_CALL(VGetArg(upenv, 9-1, 136), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D247_k49, env)}),
      VGetArg(upenv, 8-1, 1),
      upenv->vars[1]);
}
 }
}
static void _V10_Dloop_D247_lambda11(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V10_Dloop_D247_lambda11" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D247_lambda11, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D247_lambda11, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn ##.=.35 8 24) (close _V10_Dloop_D247_k48) (bruijn ##.i.248 0 1) (bruijn ##.len.249 0 2))
    V_CALL(VGetArg(upenv, 8-1, 24), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D247_k48, env)}),
      _var1,
      _var2);
 }
}
static void _V10_Drecord_E_Q_D31_k53(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Drecord_E_Q_D31_k53" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Drecord_E_Q_D31_k53, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Drecord_E_Q_D31_k53, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.loop.247 1 0) (bruijn ##.k.704 7 0) 1 (bruijn ##.x.712 0 0))
    V_CALL(upenv->vars[0], runtime,
      VGetArg(upenv, 7-1, 0),
      VEncodeInt(1l),
      _var0);
 }
}
static void _V10_Drecord_E_Q_D31_k47(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Drecord_E_Q_D31_k47" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Drecord_E_Q_D31_k47, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Drecord_E_Q_D31_k47, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.705 0 0) ((bruijn ##.k.704 5 0) #f) (letrec 1 ((close _V10_Dloop_D247_lambda11)) ((bruijn ##.record-length.149 7 138) (close _V10_Drecord_E_Q_D31_k53) (bruijn ##.x.245 6 1))))
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
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D247_lambda11, env)});
    V_CALL(VGetArg(upenv, 7-1, 138), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Drecord_E_Q_D31_k53, env)}),
      VGetArg(upenv, 6-1, 1));
    }
}
 }
}
static void _V10_Drecord_E_Q_D31_k46(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Drecord_E_Q_D31_k46" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Drecord_E_Q_D31_k46, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Drecord_E_Q_D31_k46, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.not.33 5 22) (close _V10_Drecord_E_Q_D31_k47) (bruijn ##.x.713 0 0))
    V_CALL(VGetArg(upenv, 5-1, 22), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Drecord_E_Q_D31_k47, env)}),
      _var0);
 }
}
static void _V10_Drecord_E_Q_D31_k42(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Drecord_E_Q_D31_k42" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Drecord_E_Q_D31_k42, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Drecord_E_Q_D31_k42, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Drecord_E_Q_D31_k43) (close _V10_Drecord_E_Q_D31_k46))
    V_CALL_FUNC(_V10_Drecord_E_Q_D31_k43, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Drecord_E_Q_D31_k46, env)}));
 }
}
static void _V10_Drecord_E_Q_D31_k41(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Drecord_E_Q_D31_k41" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Drecord_E_Q_D31_k41, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Drecord_E_Q_D31_k41, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.=.35 3 24) (close _V10_Drecord_E_Q_D31_k42) (bruijn ##.x.718 1 0) (bruijn ##.x.719 0 0))
    V_CALL(upenv->up->up->vars[24], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Drecord_E_Q_D31_k42, env)}),
      upenv->vars[0],
      _var0);
 }
}
static void _V10_Drecord_E_Q_D31_k40(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Drecord_E_Q_D31_k40" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Drecord_E_Q_D31_k40, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Drecord_E_Q_D31_k40, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.record-length.149 2 138) (close _V10_Drecord_E_Q_D31_k41) (bruijn ##.y.246 1 2))
    V_CALL(upenv->up->vars[138], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Drecord_E_Q_D31_k41, env)}),
      upenv->vars[2]);
 }
}
static void _V10_Drecord_E_Q_D31_lambda10(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V10_Drecord_E_Q_D31_lambda10" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Drecord_E_Q_D31_lambda10, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Drecord_E_Q_D31_lambda10, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn ##.record-length.149 1 138) (close _V10_Drecord_E_Q_D31_k40) (bruijn ##.x.245 0 1))
    V_CALL(upenv->vars[138], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Drecord_E_Q_D31_k40, env)}),
      _var1);
 }
}
static void _V10_Dequal_Q_D32_k57(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dequal_Q_D32_k57" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dequal_Q_D32_k57, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dequal_Q_D32_k57, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##.p.740 0 0) (##vcore.blob=? (bruijn ##.k.739 1 0) (bruijn ##.x.250 4 1) (bruijn ##.y.251 4 2)) ((bruijn ##.k.739 1 0) #f))
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
static void _V10_Dequal_Q_D32_k56(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dequal_Q_D32_k56" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dequal_Q_D32_k56, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dequal_Q_D32_k56, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.738 1 0) (##vcore.blob? (close _V10_Dequal_Q_D32_k57) (bruijn ##.y.251 3 2)) ((bruijn ##.k.739 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL_FUNC(VBlobP2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dequal_Q_D32_k57, env)}),
      upenv->up->up->vars[2]);
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dequal_Q_D32_k60(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dequal_Q_D32_k60" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dequal_Q_D32_k60, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dequal_Q_D32_k60, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##.p.733 0 0) ((bruijn ##.equal?.32 6 21) (bruijn ##.k.731 1 0) (##inline ##vcore.cdr (bruijn ##.x.250 5 1)) (##inline ##vcore.cdr (bruijn ##.y.251 5 2))) ((bruijn ##.k.731 1 0) #f))
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
static void _V10_Dequal_Q_D32_k59(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dequal_Q_D32_k59" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dequal_Q_D32_k59, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dequal_Q_D32_k59, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.x.250 4 1)) (if (##inline ##vcore.pair? (bruijn ##.y.251 4 2)) ((bruijn ##.equal?.32 5 21) (close _V10_Dequal_Q_D32_k60) (##inline ##vcore.car (bruijn ##.x.250 4 1)) (##inline ##vcore.car (bruijn ##.y.251 4 2))) ((bruijn ##.k.731 0 0) #f)) ((bruijn ##.k.731 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->up->up->up->vars[1]))) {
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->up->up->up->vars[2]))) {
    V_CALL(VGetArg(upenv, 5-1, 21), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dequal_Q_D32_k60, env)}),
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
static void _V10_Dequal_Q_D32_k64(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dequal_Q_D32_k64" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dequal_Q_D32_k64, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dequal_Q_D32_k64, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##.p.729 0 0) ((bruijn ##.vector=?.30 8 19) (bruijn ##.k.728 1 0) (bruijn ##.x.250 7 1) (bruijn ##.y.251 7 2)) ((bruijn ##.k.728 1 0) #f))
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
static void _V10_Dequal_Q_D32_k63(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dequal_Q_D32_k63" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dequal_Q_D32_k63, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dequal_Q_D32_k63, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.727 1 0) (##vcore.vector? (close _V10_Dequal_Q_D32_k64) (bruijn ##.y.251 6 2)) ((bruijn ##.k.728 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL_FUNC(VVectorP2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dequal_Q_D32_k64, env)}),
      VGetArg(upenv, 6-1, 2));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dequal_Q_D32_k67(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dequal_Q_D32_k67" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dequal_Q_D32_k67, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dequal_Q_D32_k67, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##.p.726 0 0) ((bruijn ##.record=?.31 9 20) (bruijn ##.k.720 8 0) (bruijn ##.x.250 8 1) (bruijn ##.y.251 8 2)) ((bruijn ##.k.720 8 0) #f))
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
static void _V10_Dequal_Q_D32_k66(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dequal_Q_D32_k66" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dequal_Q_D32_k66, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dequal_Q_D32_k66, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.725 0 0) (##vcore.record? (close _V10_Dequal_Q_D32_k67) (bruijn ##.y.251 7 2)) ((bruijn ##.k.720 7 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(VRecordP2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dequal_Q_D32_k67, env)}),
      VGetArg(upenv, 7-1, 2));
} else {
    V_CALL(VGetArg(upenv, 7-1, 0), runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dequal_Q_D32_k65(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dequal_Q_D32_k65" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dequal_Q_D32_k65, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dequal_Q_D32_k65, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.724 0 0) ((bruijn ##.k.720 6 0) (bruijn ##.p.724 0 0)) (##vcore.record? (close _V10_Dequal_Q_D32_k66) (bruijn ##.x.250 6 1)))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 6-1, 0), runtime,
      _var0);
} else {
    V_CALL_FUNC(VRecordP2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dequal_Q_D32_k66, env)}),
      VGetArg(upenv, 6-1, 1));
}
 }
}
static void _V10_Dequal_Q_D32_k62(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dequal_Q_D32_k62" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dequal_Q_D32_k62, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dequal_Q_D32_k62, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dequal_Q_D32_k63) (close _V10_Dequal_Q_D32_k65))
    V_CALL_FUNC(_V10_Dequal_Q_D32_k63, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dequal_Q_D32_k65, env)}));
 }
}
static void _V10_Dequal_Q_D32_k61(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dequal_Q_D32_k61" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dequal_Q_D32_k61, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dequal_Q_D32_k61, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.723 0 0) ((bruijn ##.k.720 4 0) (bruijn ##.p.723 0 0)) (##vcore.vector? (close _V10_Dequal_Q_D32_k62) (bruijn ##.x.250 4 1)))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->up->up->up->vars[0], runtime,
      _var0);
} else {
    V_CALL_FUNC(VVectorP2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dequal_Q_D32_k62, env)}),
      upenv->up->up->up->vars[1]);
}
 }
}
static void _V10_Dequal_Q_D32_k58(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dequal_Q_D32_k58" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dequal_Q_D32_k58, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dequal_Q_D32_k58, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.722 0 0) ((bruijn ##.k.720 3 0) (bruijn ##.p.722 0 0)) ((close _V10_Dequal_Q_D32_k59) (close _V10_Dequal_Q_D32_k61)))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->up->up->vars[0], runtime,
      _var0);
} else {
    V_CALL_FUNC(_V10_Dequal_Q_D32_k59, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dequal_Q_D32_k61, env)}));
}
 }
}
static void _V10_Dequal_Q_D32_k55(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dequal_Q_D32_k55" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dequal_Q_D32_k55, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dequal_Q_D32_k55, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dequal_Q_D32_k56) (close _V10_Dequal_Q_D32_k58))
    V_CALL_FUNC(_V10_Dequal_Q_D32_k56, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dequal_Q_D32_k58, env)}));
 }
}
static void _V10_Dequal_Q_D32_k54(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dequal_Q_D32_k54" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dequal_Q_D32_k54, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dequal_Q_D32_k54, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.721 0 0) ((bruijn ##.k.720 1 0) (bruijn ##.p.721 0 0)) (##vcore.blob? (close _V10_Dequal_Q_D32_k55) (bruijn ##.x.250 1 1)))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->vars[0], runtime,
      _var0);
} else {
    V_CALL_FUNC(VBlobP2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dequal_Q_D32_k55, env)}),
      upenv->vars[1]);
}
 }
}
static void _V10_Dequal_Q_D32_lambda12(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V10_Dequal_Q_D32_lambda12" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dequal_Q_D32_lambda12, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dequal_Q_D32_lambda12, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((close _V10_Dequal_Q_D32_k54) (##inline ##vcore.eq? (bruijn ##.x.250 0 1) (bruijn ##.y.251 0 2)))
    V_CALL_FUNC(_V10_Dequal_Q_D32_k54, env, runtime,
      VInlineEq2(runtime,
        _var1,
        _var2));
 }
}
static void _V10_Dloop_D255_k74(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D255_k74" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D255_k74, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D255_k74, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.loop.255 8 0) (bruijn ##.k.742 7 0) (bruijn ##.x.745 0 0))
    V_CALL(VGetArg(upenv, 8-1, 0), runtime,
      VGetArg(upenv, 7-1, 0),
      _var0);
 }
}
static void _V10_Dloop_D255_k73(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D255_k73" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D255_k73, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D255_k73, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.744 0 0) ((bruijn ##.cdr.76 9 65) (close _V10_Dloop_D255_k74) (bruijn ##.xs.256 6 1)) ((bruijn ##.k.742 6 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 9-1, 65), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D255_k74, env)}),
      VGetArg(upenv, 6-1, 1));
} else {
    V_CALL(VGetArg(upenv, 6-1, 0), runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dloop_D255_k72(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D255_k72" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D255_k72, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D255_k72, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.eq?.26 8 15) (close _V10_Dloop_D255_k73) (bruijn ##.x.746 0 0) -1)
    V_CALL(VGetArg(upenv, 8-1, 15), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D255_k73, env)}),
      _var0,
      VEncodeInt(-1l));
 }
}
static void _V10_Dloop_D255_k71(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D255_k71" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D255_k71, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D255_k71, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.cmp (close _V10_Dloop_D255_k72) (bruijn ##.x.747 1 0) (bruijn ##.x.748 0 0))
    V_CALL_FUNC(VCmp2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D255_k72, env)}),
      upenv->vars[0],
      _var0);
 }
}
static void _V10_Dloop_D255_k70(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D255_k70" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D255_k70, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D255_k70, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cadr.80 6 69) (close _V10_Dloop_D255_k71) (bruijn ##.xs.256 3 1))
    V_CALL(VGetArg(upenv, 6-1, 69), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D255_k71, env)}),
      upenv->up->up->vars[1]);
 }
}
static void _V10_Dloop_D255_k69(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D255_k69" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D255_k69, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D255_k69, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.743 0 0) ((bruijn ##.k.742 2 0) #t) ((bruijn ##.car.75 5 64) (close _V10_Dloop_D255_k70) (bruijn ##.xs.256 2 1)))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(true));
} else {
    V_CALL(VGetArg(upenv, 5-1, 64), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D255_k70, env)}),
      upenv->up->vars[1]);
}
 }
}
static void _V10_Dloop_D255_k68(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D255_k68" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D255_k68, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D255_k68, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.null?.11 4 0) (close _V10_Dloop_D255_k69) (bruijn ##.x.749 0 0))
    V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D255_k69, env)}),
      _var0);
 }
}
static void _V10_Dloop_D255_lambda14(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V10_Dloop_D255_lambda14" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D255_lambda14, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D255_lambda14, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##.cdr.76 3 65) (close _V10_Dloop_D255_k68) (bruijn ##.xs.256 0 1))
    V_CALL(upenv->up->up->vars[65], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D255_k68, env)}),
      _var1);
 }
}
static void _V10_D_L_D34_k76(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_D_L_D34_k76" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_D_L_D34_k76, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_D_L_D34_k76, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.loop.255 2 0) (bruijn ##.k.741 3 0) (bruijn ##.x.750 0 0))
    V_CALL(upenv->up->vars[0], runtime,
      upenv->up->up->vars[0],
      _var0);
 }
}
static void _V10_D_L_D34_k75(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_D_L_D34_k75" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_D_L_D34_k75, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_D_L_D34_k75, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cons.74 3 63) (close _V10_D_L_D34_k76) (bruijn ##.x0.252 2 1) (bruijn ##.x.751 0 0))
    V_CALL(upenv->up->up->vars[63], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_D_L_D34_k76, env)}),
      upenv->up->vars[1],
      _var0);
 }
}
static void _V10_D_L_D34_lambda13(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, ...) {
 static VDebugInfo dbg = { "_V10_D_L_D34_lambda13" };
 VRecordCall2(runtime, &dbg);
 if(argc < 3) {
  VErrorC(runtime, "Not enough arguments to _V10_D_L_D34_lambda13, got ~D~N"
  "-- expected 3 or more~N"
  , argc);
 }
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 3, argc, _var2);
 V_GC_CHECK2_VARARGS((VFunc)_V10_D_L_D34_lambda13, runtime, upenv, 3, argc, _var0, _var1, _var2, _varargs) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _varargs;
  // (letrec 1 ((close _V10_Dloop_D255_lambda14)) ((bruijn ##.cons.74 2 63) (close _V10_D_L_D34_k75) (bruijn ##.x1.253 1 2) (bruijn ##.xs.254 1 3)))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D255_lambda14, env)});
    V_CALL(upenv->up->vars[63], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_D_L_D34_k75, env)}),
      upenv->vars[2],
      upenv->vars[3]);
    }
 }
}
static void _V10_Dloop_D260_k83(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D260_k83" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D260_k83, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D260_k83, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.loop.260 8 0) (bruijn ##.k.753 7 0) (bruijn ##.x.756 0 0))
    V_CALL(VGetArg(upenv, 8-1, 0), runtime,
      VGetArg(upenv, 7-1, 0),
      _var0);
 }
}
static void _V10_Dloop_D260_k82(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D260_k82" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D260_k82, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D260_k82, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.755 0 0) ((bruijn ##.cdr.76 9 65) (close _V10_Dloop_D260_k83) (bruijn ##.xs.261 6 1)) ((bruijn ##.k.753 6 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 9-1, 65), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D260_k83, env)}),
      VGetArg(upenv, 6-1, 1));
} else {
    V_CALL(VGetArg(upenv, 6-1, 0), runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dloop_D260_k81(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D260_k81" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D260_k81, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D260_k81, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.eq?.26 8 15) (close _V10_Dloop_D260_k82) (bruijn ##.x.757 0 0) 0)
    V_CALL(VGetArg(upenv, 8-1, 15), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D260_k82, env)}),
      _var0,
      VEncodeInt(0l));
 }
}
static void _V10_Dloop_D260_k80(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D260_k80" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D260_k80, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D260_k80, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.cmp (close _V10_Dloop_D260_k81) (bruijn ##.x.758 1 0) (bruijn ##.x.759 0 0))
    V_CALL_FUNC(VCmp2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D260_k81, env)}),
      upenv->vars[0],
      _var0);
 }
}
static void _V10_Dloop_D260_k79(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D260_k79" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D260_k79, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D260_k79, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cadr.80 6 69) (close _V10_Dloop_D260_k80) (bruijn ##.xs.261 3 1))
    V_CALL(VGetArg(upenv, 6-1, 69), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D260_k80, env)}),
      upenv->up->up->vars[1]);
 }
}
static void _V10_Dloop_D260_k78(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D260_k78" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D260_k78, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D260_k78, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.754 0 0) ((bruijn ##.k.753 2 0) #t) ((bruijn ##.car.75 5 64) (close _V10_Dloop_D260_k79) (bruijn ##.xs.261 2 1)))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(true));
} else {
    V_CALL(VGetArg(upenv, 5-1, 64), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D260_k79, env)}),
      upenv->up->vars[1]);
}
 }
}
static void _V10_Dloop_D260_k77(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D260_k77" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D260_k77, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D260_k77, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.null?.11 4 0) (close _V10_Dloop_D260_k78) (bruijn ##.x.760 0 0))
    V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D260_k78, env)}),
      _var0);
 }
}
static void _V10_Dloop_D260_lambda16(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V10_Dloop_D260_lambda16" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D260_lambda16, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D260_lambda16, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##.cdr.76 3 65) (close _V10_Dloop_D260_k77) (bruijn ##.xs.261 0 1))
    V_CALL(upenv->up->up->vars[65], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D260_k77, env)}),
      _var1);
 }
}
static void _V10_D_E_D35_k85(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_D_E_D35_k85" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_D_E_D35_k85, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_D_E_D35_k85, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.loop.260 2 0) (bruijn ##.k.752 3 0) (bruijn ##.x.761 0 0))
    V_CALL(upenv->up->vars[0], runtime,
      upenv->up->up->vars[0],
      _var0);
 }
}
static void _V10_D_E_D35_k84(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_D_E_D35_k84" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_D_E_D35_k84, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_D_E_D35_k84, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cons.74 3 63) (close _V10_D_E_D35_k85) (bruijn ##.x0.257 2 1) (bruijn ##.x.762 0 0))
    V_CALL(upenv->up->up->vars[63], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_D_E_D35_k85, env)}),
      upenv->up->vars[1],
      _var0);
 }
}
static void _V10_D_E_D35_lambda15(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, ...) {
 static VDebugInfo dbg = { "_V10_D_E_D35_lambda15" };
 VRecordCall2(runtime, &dbg);
 if(argc < 3) {
  VErrorC(runtime, "Not enough arguments to _V10_D_E_D35_lambda15, got ~D~N"
  "-- expected 3 or more~N"
  , argc);
 }
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 3, argc, _var2);
 V_GC_CHECK2_VARARGS((VFunc)_V10_D_E_D35_lambda15, runtime, upenv, 3, argc, _var0, _var1, _var2, _varargs) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _varargs;
  // (letrec 1 ((close _V10_Dloop_D260_lambda16)) ((bruijn ##.cons.74 2 63) (close _V10_D_E_D35_k84) (bruijn ##.x1.258 1 2) (bruijn ##.xs.259 1 3)))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D260_lambda16, env)});
    V_CALL(upenv->up->vars[63], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_D_E_D35_k84, env)}),
      upenv->vars[2],
      upenv->vars[3]);
    }
 }
}
static void _V10_Dloop_D265_k92(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D265_k92" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D265_k92, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D265_k92, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.loop.265 8 0) (bruijn ##.k.764 7 0) (bruijn ##.x.767 0 0))
    V_CALL(VGetArg(upenv, 8-1, 0), runtime,
      VGetArg(upenv, 7-1, 0),
      _var0);
 }
}
static void _V10_Dloop_D265_k91(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D265_k91" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D265_k91, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D265_k91, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.766 0 0) ((bruijn ##.cdr.76 9 65) (close _V10_Dloop_D265_k92) (bruijn ##.xs.266 6 1)) ((bruijn ##.k.764 6 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 9-1, 65), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D265_k92, env)}),
      VGetArg(upenv, 6-1, 1));
} else {
    V_CALL(VGetArg(upenv, 6-1, 0), runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dloop_D265_k90(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D265_k90" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D265_k90, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D265_k90, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.eq?.26 8 15) (close _V10_Dloop_D265_k91) (bruijn ##.x.768 0 0) 1)
    V_CALL(VGetArg(upenv, 8-1, 15), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D265_k91, env)}),
      _var0,
      VEncodeInt(1l));
 }
}
static void _V10_Dloop_D265_k89(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D265_k89" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D265_k89, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D265_k89, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.cmp (close _V10_Dloop_D265_k90) (bruijn ##.x.769 1 0) (bruijn ##.x.770 0 0))
    V_CALL_FUNC(VCmp2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D265_k90, env)}),
      upenv->vars[0],
      _var0);
 }
}
static void _V10_Dloop_D265_k88(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D265_k88" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D265_k88, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D265_k88, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cadr.80 6 69) (close _V10_Dloop_D265_k89) (bruijn ##.xs.266 3 1))
    V_CALL(VGetArg(upenv, 6-1, 69), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D265_k89, env)}),
      upenv->up->up->vars[1]);
 }
}
static void _V10_Dloop_D265_k87(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D265_k87" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D265_k87, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D265_k87, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.765 0 0) ((bruijn ##.k.764 2 0) #t) ((bruijn ##.car.75 5 64) (close _V10_Dloop_D265_k88) (bruijn ##.xs.266 2 1)))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(true));
} else {
    V_CALL(VGetArg(upenv, 5-1, 64), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D265_k88, env)}),
      upenv->up->vars[1]);
}
 }
}
static void _V10_Dloop_D265_k86(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D265_k86" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D265_k86, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D265_k86, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.null?.11 4 0) (close _V10_Dloop_D265_k87) (bruijn ##.x.771 0 0))
    V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D265_k87, env)}),
      _var0);
 }
}
static void _V10_Dloop_D265_lambda18(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V10_Dloop_D265_lambda18" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D265_lambda18, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D265_lambda18, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##.cdr.76 3 65) (close _V10_Dloop_D265_k86) (bruijn ##.xs.266 0 1))
    V_CALL(upenv->up->up->vars[65], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D265_k86, env)}),
      _var1);
 }
}
static void _V10_D_G_D36_k94(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_D_G_D36_k94" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_D_G_D36_k94, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_D_G_D36_k94, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.loop.265 2 0) (bruijn ##.k.763 3 0) (bruijn ##.x.772 0 0))
    V_CALL(upenv->up->vars[0], runtime,
      upenv->up->up->vars[0],
      _var0);
 }
}
static void _V10_D_G_D36_k93(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_D_G_D36_k93" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_D_G_D36_k93, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_D_G_D36_k93, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cons.74 3 63) (close _V10_D_G_D36_k94) (bruijn ##.x0.262 2 1) (bruijn ##.x.773 0 0))
    V_CALL(upenv->up->up->vars[63], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_D_G_D36_k94, env)}),
      upenv->up->vars[1],
      _var0);
 }
}
static void _V10_D_G_D36_lambda17(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, ...) {
 static VDebugInfo dbg = { "_V10_D_G_D36_lambda17" };
 VRecordCall2(runtime, &dbg);
 if(argc < 3) {
  VErrorC(runtime, "Not enough arguments to _V10_D_G_D36_lambda17, got ~D~N"
  "-- expected 3 or more~N"
  , argc);
 }
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 3, argc, _var2);
 V_GC_CHECK2_VARARGS((VFunc)_V10_D_G_D36_lambda17, runtime, upenv, 3, argc, _var0, _var1, _var2, _varargs) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _varargs;
  // (letrec 1 ((close _V10_Dloop_D265_lambda18)) ((bruijn ##.cons.74 2 63) (close _V10_D_G_D36_k93) (bruijn ##.x1.263 1 2) (bruijn ##.xs.264 1 3)))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D265_lambda18, env)});
    V_CALL(upenv->up->vars[63], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_D_G_D36_k93, env)}),
      upenv->vars[2],
      upenv->vars[3]);
    }
 }
}
static void _V10_Dloop_D270_k101(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D270_k101" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D270_k101, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D270_k101, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.loop.270 8 0) (bruijn ##.k.775 7 0) (bruijn ##.x.778 0 0))
    V_CALL(VGetArg(upenv, 8-1, 0), runtime,
      VGetArg(upenv, 7-1, 0),
      _var0);
 }
}
static void _V10_Dloop_D270_k100(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D270_k100" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D270_k100, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D270_k100, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.777 0 0) ((bruijn ##.k.775 6 0) #f) ((bruijn ##.cdr.76 9 65) (close _V10_Dloop_D270_k101) (bruijn ##.xs.271 6 1)))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 6-1, 0), runtime,
      VEncodeBool(false));
} else {
    V_CALL(VGetArg(upenv, 9-1, 65), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D270_k101, env)}),
      VGetArg(upenv, 6-1, 1));
}
 }
}
static void _V10_Dloop_D270_k99(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D270_k99" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D270_k99, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D270_k99, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.eq?.26 8 15) (close _V10_Dloop_D270_k100) (bruijn ##.x.779 0 0) 1)
    V_CALL(VGetArg(upenv, 8-1, 15), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D270_k100, env)}),
      _var0,
      VEncodeInt(1l));
 }
}
static void _V10_Dloop_D270_k98(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D270_k98" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D270_k98, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D270_k98, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.cmp (close _V10_Dloop_D270_k99) (bruijn ##.x.780 1 0) (bruijn ##.x.781 0 0))
    V_CALL_FUNC(VCmp2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D270_k99, env)}),
      upenv->vars[0],
      _var0);
 }
}
static void _V10_Dloop_D270_k97(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D270_k97" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D270_k97, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D270_k97, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cadr.80 6 69) (close _V10_Dloop_D270_k98) (bruijn ##.xs.271 3 1))
    V_CALL(VGetArg(upenv, 6-1, 69), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D270_k98, env)}),
      upenv->up->up->vars[1]);
 }
}
static void _V10_Dloop_D270_k96(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D270_k96" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D270_k96, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D270_k96, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.776 0 0) ((bruijn ##.k.775 2 0) #t) ((bruijn ##.car.75 5 64) (close _V10_Dloop_D270_k97) (bruijn ##.xs.271 2 1)))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(true));
} else {
    V_CALL(VGetArg(upenv, 5-1, 64), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D270_k97, env)}),
      upenv->up->vars[1]);
}
 }
}
static void _V10_Dloop_D270_k95(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D270_k95" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D270_k95, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D270_k95, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.null?.11 4 0) (close _V10_Dloop_D270_k96) (bruijn ##.x.782 0 0))
    V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D270_k96, env)}),
      _var0);
 }
}
static void _V10_Dloop_D270_lambda20(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V10_Dloop_D270_lambda20" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D270_lambda20, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D270_lambda20, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##.cdr.76 3 65) (close _V10_Dloop_D270_k95) (bruijn ##.xs.271 0 1))
    V_CALL(upenv->up->up->vars[65], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D270_k95, env)}),
      _var1);
 }
}
static void _V10_D_L_E_D37_k103(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_D_L_E_D37_k103" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_D_L_E_D37_k103, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_D_L_E_D37_k103, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.loop.270 2 0) (bruijn ##.k.774 3 0) (bruijn ##.x.783 0 0))
    V_CALL(upenv->up->vars[0], runtime,
      upenv->up->up->vars[0],
      _var0);
 }
}
static void _V10_D_L_E_D37_k102(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_D_L_E_D37_k102" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_D_L_E_D37_k102, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_D_L_E_D37_k102, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cons.74 3 63) (close _V10_D_L_E_D37_k103) (bruijn ##.x0.267 2 1) (bruijn ##.x.784 0 0))
    V_CALL(upenv->up->up->vars[63], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_D_L_E_D37_k103, env)}),
      upenv->up->vars[1],
      _var0);
 }
}
static void _V10_D_L_E_D37_lambda19(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, ...) {
 static VDebugInfo dbg = { "_V10_D_L_E_D37_lambda19" };
 VRecordCall2(runtime, &dbg);
 if(argc < 3) {
  VErrorC(runtime, "Not enough arguments to _V10_D_L_E_D37_lambda19, got ~D~N"
  "-- expected 3 or more~N"
  , argc);
 }
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 3, argc, _var2);
 V_GC_CHECK2_VARARGS((VFunc)_V10_D_L_E_D37_lambda19, runtime, upenv, 3, argc, _var0, _var1, _var2, _varargs) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _varargs;
  // (letrec 1 ((close _V10_Dloop_D270_lambda20)) ((bruijn ##.cons.74 2 63) (close _V10_D_L_E_D37_k102) (bruijn ##.x1.268 1 2) (bruijn ##.xs.269 1 3)))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D270_lambda20, env)});
    V_CALL(upenv->up->vars[63], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_D_L_E_D37_k102, env)}),
      upenv->vars[2],
      upenv->vars[3]);
    }
 }
}
static void _V10_Dloop_D275_k110(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D275_k110" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D275_k110, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D275_k110, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.loop.275 8 0) (bruijn ##.k.786 7 0) (bruijn ##.x.789 0 0))
    V_CALL(VGetArg(upenv, 8-1, 0), runtime,
      VGetArg(upenv, 7-1, 0),
      _var0);
 }
}
static void _V10_Dloop_D275_k109(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D275_k109" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D275_k109, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D275_k109, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.788 0 0) ((bruijn ##.k.786 6 0) #f) ((bruijn ##.cdr.76 9 65) (close _V10_Dloop_D275_k110) (bruijn ##.xs.276 6 1)))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 6-1, 0), runtime,
      VEncodeBool(false));
} else {
    V_CALL(VGetArg(upenv, 9-1, 65), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D275_k110, env)}),
      VGetArg(upenv, 6-1, 1));
}
 }
}
static void _V10_Dloop_D275_k108(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D275_k108" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D275_k108, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D275_k108, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.eq?.26 8 15) (close _V10_Dloop_D275_k109) (bruijn ##.x.790 0 0) -1)
    V_CALL(VGetArg(upenv, 8-1, 15), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D275_k109, env)}),
      _var0,
      VEncodeInt(-1l));
 }
}
static void _V10_Dloop_D275_k107(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D275_k107" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D275_k107, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D275_k107, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.cmp (close _V10_Dloop_D275_k108) (bruijn ##.x.791 1 0) (bruijn ##.x.792 0 0))
    V_CALL_FUNC(VCmp2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D275_k108, env)}),
      upenv->vars[0],
      _var0);
 }
}
static void _V10_Dloop_D275_k106(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D275_k106" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D275_k106, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D275_k106, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cadr.80 6 69) (close _V10_Dloop_D275_k107) (bruijn ##.xs.276 3 1))
    V_CALL(VGetArg(upenv, 6-1, 69), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D275_k107, env)}),
      upenv->up->up->vars[1]);
 }
}
static void _V10_Dloop_D275_k105(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D275_k105" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D275_k105, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D275_k105, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.787 0 0) ((bruijn ##.k.786 2 0) #t) ((bruijn ##.car.75 5 64) (close _V10_Dloop_D275_k106) (bruijn ##.xs.276 2 1)))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(true));
} else {
    V_CALL(VGetArg(upenv, 5-1, 64), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D275_k106, env)}),
      upenv->up->vars[1]);
}
 }
}
static void _V10_Dloop_D275_k104(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D275_k104" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D275_k104, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D275_k104, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.null?.11 4 0) (close _V10_Dloop_D275_k105) (bruijn ##.x.793 0 0))
    V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D275_k105, env)}),
      _var0);
 }
}
static void _V10_Dloop_D275_lambda22(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V10_Dloop_D275_lambda22" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D275_lambda22, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D275_lambda22, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##.cdr.76 3 65) (close _V10_Dloop_D275_k104) (bruijn ##.xs.276 0 1))
    V_CALL(upenv->up->up->vars[65], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D275_k104, env)}),
      _var1);
 }
}
static void _V10_D_G_E_D38_k112(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_D_G_E_D38_k112" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_D_G_E_D38_k112, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_D_G_E_D38_k112, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.loop.275 2 0) (bruijn ##.k.785 3 0) (bruijn ##.x.794 0 0))
    V_CALL(upenv->up->vars[0], runtime,
      upenv->up->up->vars[0],
      _var0);
 }
}
static void _V10_D_G_E_D38_k111(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_D_G_E_D38_k111" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_D_G_E_D38_k111, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_D_G_E_D38_k111, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cons.74 3 63) (close _V10_D_G_E_D38_k112) (bruijn ##.x0.272 2 1) (bruijn ##.x.795 0 0))
    V_CALL(upenv->up->up->vars[63], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_D_G_E_D38_k112, env)}),
      upenv->up->vars[1],
      _var0);
 }
}
static void _V10_D_G_E_D38_lambda21(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, ...) {
 static VDebugInfo dbg = { "_V10_D_G_E_D38_lambda21" };
 VRecordCall2(runtime, &dbg);
 if(argc < 3) {
  VErrorC(runtime, "Not enough arguments to _V10_D_G_E_D38_lambda21, got ~D~N"
  "-- expected 3 or more~N"
  , argc);
 }
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 3, argc, _var2);
 V_GC_CHECK2_VARARGS((VFunc)_V10_D_G_E_D38_lambda21, runtime, upenv, 3, argc, _var0, _var1, _var2, _varargs) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _varargs;
  // (letrec 1 ((close _V10_Dloop_D275_lambda22)) ((bruijn ##.cons.74 2 63) (close _V10_D_G_E_D38_k111) (bruijn ##.x1.273 1 2) (bruijn ##.xs.274 1 3)))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D275_lambda22, env)});
    V_CALL(upenv->up->vars[63], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_D_G_E_D38_k111, env)}),
      upenv->vars[2],
      upenv->vars[3]);
    }
 }
}
static void _V10_Dinexact_D39_lambda23(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V10_Dinexact_D39_lambda23" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dinexact_D39_lambda23, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dinexact_D39_lambda23, runtime, upenv, 2, argc, _var0, _var1) {
  // (##vcore.+ (bruijn ##.k.796 0 0) (bruijn ##.x.277 0 1) 0.000000)
    V_CALL_FUNC(VAdd2, NULL, runtime,
      _var0,
      _var1,
      VEncodeNumber(0.000000));
 }
}
static void _V10_Dnumber_Q_D41_k113(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dnumber_Q_D41_k113" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dnumber_Q_D41_k113, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dnumber_Q_D41_k113, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##.p.798 0 0) ((bruijn ##.k.797 1 0) (bruijn ##.p.798 0 0)) (##vcore.int? (bruijn ##.k.797 1 0) (bruijn ##.x.278 1 1)))
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
static void _V10_Dnumber_Q_D41_lambda24(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V10_Dnumber_Q_D41_lambda24" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dnumber_Q_D41_lambda24, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dnumber_Q_D41_lambda24, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (##vcore.double? (close _V10_Dnumber_Q_D41_k113) (bruijn ##.x.278 0 1))
    V_CALL_FUNC(VDoubleP2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dnumber_Q_D41_k113, env)}),
      _var1);
 }
}
static void _V10_Dpositive_Q_D44_lambda25(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V10_Dpositive_Q_D44_lambda25" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpositive_Q_D44_lambda25, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpositive_Q_D44_lambda25, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##.>.36 1 25) (bruijn ##.k.799 0 0) (bruijn ##.x.279 0 1) 0)
    V_CALL(upenv->vars[25], runtime,
      _var0,
      _var1,
      VEncodeInt(0l));
 }
}
static void _V10_Dzero_Q_D45_lambda26(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V10_Dzero_Q_D45_lambda26" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dzero_Q_D45_lambda26, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dzero_Q_D45_lambda26, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##.=.35 1 24) (bruijn ##.k.800 0 0) (bruijn ##.x.280 0 1) 0)
    V_CALL(upenv->vars[24], runtime,
      _var0,
      _var1,
      VEncodeInt(0l));
 }
}
static void _V10_Dnegative_Q_D46_lambda27(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V10_Dnegative_Q_D46_lambda27" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dnegative_Q_D46_lambda27, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dnegative_Q_D46_lambda27, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##.<.34 1 23) (bruijn ##.k.801 0 0) (bruijn ##.x.281 0 1) 0)
    V_CALL(upenv->vars[23], runtime,
      _var0,
      _var1,
      VEncodeInt(0l));
 }
}
static void _V10_Dabs_D53_k114(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dabs_D53_k114" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dabs_D53_k114, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dabs_D53_k114, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##.p.803 0 0) ((bruijn ##.-.48 2 37) (bruijn ##.k.802 1 0) (bruijn ##.x.282 1 1)) ((bruijn ##.k.802 1 0) (bruijn ##.x.282 1 1)))
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
static void _V10_Dabs_D53_lambda28(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V10_Dabs_D53_lambda28" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dabs_D53_lambda28, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dabs_D53_lambda28, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##.<.34 1 23) (close _V10_Dabs_D53_k114) (bruijn ##.x.282 0 1) 0)
    V_CALL(upenv->vars[23], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dabs_D53_k114, env)}),
      _var1,
      VEncodeInt(0l));
 }
}
static void _V10_Dsquare_D57_lambda29(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V10_Dsquare_D57_lambda29" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dsquare_D57_lambda29, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dsquare_D57_lambda29, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##.*.49 1 38) (bruijn ##.k.804 0 0) (bruijn ##.x.283 0 1) (bruijn ##.x.283 0 1))
    V_CALL(upenv->vars[38], runtime,
      _var0,
      _var1,
      _var1);
 }
}
__attribute__((used)) static void _V20CaseError__V10_Datan_D66_lambda30(VRuntime * runtime, VEnv * upenv, int argc, ...) {
 // (_V10_Datan_D66_lambda30 #t (2 ((bruijn ##.atan-impl.64 1 53) (bruijn ##.k.805 0 0) (bruijn ##.x.284 0 1))) (3 ((bruijn ##.atan2-impl.65 1 54) (bruijn ##.k.806 0 0) (bruijn ##.y.285 0 1) (bruijn ##.x.286 0 2))))
 VErrorC(runtime, "Not enough arguments to _V10_Datan_D66_lambda30, got ~D~N"
 "-- expected 2~N"
 "-- expected 3~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V10_Datan_D66_lambda30(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V20Case0__V10_Datan_D66_lambda30" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case0__V10_Datan_D66_lambda30, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##.atan-impl.64 1 53) (bruijn ##.k.805 0 0) (bruijn ##.x.284 0 1))
    V_CALL(upenv->vars[53], runtime,
      _var0,
      _var1);
 }
}
__attribute__((used)) static void _V20Case1__V10_Datan_D66_lambda30(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V20Case1__V10_Datan_D66_lambda30" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case1__V10_Datan_D66_lambda30, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  // ((bruijn ##.atan2-impl.65 1 54) (bruijn ##.k.806 0 0) (bruijn ##.y.285 0 1) (bruijn ##.x.286 0 2))
    V_CALL(upenv->vars[54], runtime,
      _var0,
      _var1,
      _var2);
 }
}
void _V10_Datan_D66_lambda30(VRuntime * runtime, VEnv * upenv, int argc, ...);
asm(
".intel_syntax noprefix\n"
#ifdef __linux__
".type _V10_Datan_D66_lambda30, @function\n"
#endif
"_V10_Datan_D66_lambda30:\n"
"    cmp " ARGC_REG ", 2\n"
"    je _V20Case0__V10_Datan_D66_lambda30\n"
"    cmp " ARGC_REG ", 3\n"
"    je _V20Case1__V10_Datan_D66_lambda30\n"
"    jmp _V20CaseError__V10_Datan_D66_lambda30\n"
);
static void _V10_Dlog_D69_k116(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlog_D69_k116" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlog_D69_k116, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlog_D69_k116, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##./.50 3 39) (bruijn ##.k.808 2 0) (bruijn ##.x.809 1 0) (bruijn ##.x.810 0 0))
    V_CALL(upenv->up->up->vars[39], runtime,
      upenv->up->vars[0],
      upenv->vars[0],
      _var0);
 }
}
static void _V10_Dlog_D69_k115(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlog_D69_k115" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlog_D69_k115, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlog_D69_k115, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.log-impl.68 2 57) (close _V10_Dlog_D69_k116) (bruijn ##.base.289 1 2))
    V_CALL(upenv->up->vars[57], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlog_D69_k116, env)}),
      upenv->vars[2]);
 }
}
__attribute__((used)) static void _V20CaseError__V10_Dlog_D69_lambda31(VRuntime * runtime, VEnv * upenv, int argc, ...) {
 // (_V10_Dlog_D69_lambda31 #t (2 ((bruijn ##.log-impl.68 1 57) (bruijn ##.k.807 0 0) (bruijn ##.x.287 0 1))) (3 ((bruijn ##.log-impl.68 1 57) (close _V10_Dlog_D69_k115) (bruijn ##.x.288 0 1))))
 VErrorC(runtime, "Not enough arguments to _V10_Dlog_D69_lambda31, got ~D~N"
 "-- expected 2~N"
 "-- expected 3~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V10_Dlog_D69_lambda31(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V20Case0__V10_Dlog_D69_lambda31" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case0__V10_Dlog_D69_lambda31, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##.log-impl.68 1 57) (bruijn ##.k.807 0 0) (bruijn ##.x.287 0 1))
    V_CALL(upenv->vars[57], runtime,
      _var0,
      _var1);
 }
}
__attribute__((used)) static void _V20Case1__V10_Dlog_D69_lambda31(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V20Case1__V10_Dlog_D69_lambda31" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case1__V10_Dlog_D69_lambda31, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn ##.log-impl.68 1 57) (close _V10_Dlog_D69_k115) (bruijn ##.x.288 0 1))
    V_CALL(upenv->vars[57], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlog_D69_k115, env)}),
      _var1);
 }
}
void _V10_Dlog_D69_lambda31(VRuntime * runtime, VEnv * upenv, int argc, ...);
asm(
".intel_syntax noprefix\n"
#ifdef __linux__
".type _V10_Dlog_D69_lambda31, @function\n"
#endif
"_V10_Dlog_D69_lambda31:\n"
"    cmp " ARGC_REG ", 2\n"
"    je _V20Case0__V10_Dlog_D69_lambda31\n"
"    cmp " ARGC_REG ", 3\n"
"    je _V20Case1__V10_Dlog_D69_lambda31\n"
"    jmp _V20CaseError__V10_Dlog_D69_lambda31\n"
);
static void _V10_Dmax_D72_k117(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dmax_D72_k117" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmax_D72_k117, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dmax_D72_k117, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##.p.813 0 0) ((bruijn ##.k.812 1 0) (bruijn ##.a.291 1 1)) ((bruijn ##.k.812 1 0) (bruijn ##.b.292 1 2)))
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
static void _V10_Dmax_D72_k118(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dmax_D72_k118" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmax_D72_k118, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dmax_D72_k118, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.max.72 2 61) (bruijn ##.k.814 1 0) (bruijn ##.x.815 0 0) (bruijn ##.c.295 1 3))
    V_CALL(upenv->up->vars[61], runtime,
      upenv->vars[0],
      _var0,
      upenv->vars[3]);
 }
}
static void _V10_Dmax_D72_k120(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dmax_D72_k120" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmax_D72_k120, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dmax_D72_k120, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.max.72 3 61) (bruijn ##.k.816 2 0) (bruijn ##.x.817 0 0) (bruijn ##.d.299 2 4))
    V_CALL(upenv->up->up->vars[61], runtime,
      upenv->up->vars[0],
      _var0,
      upenv->up->vars[4]);
 }
}
static void _V10_Dmax_D72_k119(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dmax_D72_k119" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmax_D72_k119, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dmax_D72_k119, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.max.72 2 61) (close _V10_Dmax_D72_k120) (bruijn ##.x.818 0 0) (bruijn ##.c.298 1 3))
    V_CALL(upenv->up->vars[61], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmax_D72_k120, env)}),
      _var0,
      upenv->vars[3]);
 }
}
static void _V10_Dloop_D302_k124(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D302_k124" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D302_k124, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D302_k124, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.loop.302 5 0) (bruijn ##.k.820 4 0) (bruijn ##.x.822 1 0) (bruijn ##.x.823 0 0))
    V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      upenv->up->up->up->vars[0],
      upenv->vars[0],
      _var0);
 }
}
static void _V10_Dloop_D302_k123(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D302_k123" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D302_k123, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D302_k123, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cdr.76 6 65) (close _V10_Dloop_D302_k124) (bruijn ##.bs.301 5 2))
    V_CALL(VGetArg(upenv, 6-1, 65), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D302_k124, env)}),
      VGetArg(upenv, 5-1, 2));
 }
}
static void _V10_Dloop_D302_k122(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D302_k122" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D302_k122, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D302_k122, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.max.72 5 61) (close _V10_Dloop_D302_k123) (bruijn ##.a.300 4 1) (bruijn ##.x.824 0 0))
    V_CALL(VGetArg(upenv, 5-1, 61), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D302_k123, env)}),
      upenv->up->up->up->vars[1],
      _var0);
 }
}
static void _V10_Dloop_D302_k121(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D302_k121" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D302_k121, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D302_k121, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.821 0 0) ((bruijn ##.k.820 1 0) (bruijn ##.ret.303 1 1)) ((bruijn ##.car.75 4 64) (close _V10_Dloop_D302_k122) (bruijn ##.bs.301 3 2)))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->vars[0], runtime,
      upenv->vars[1]);
} else {
    V_CALL(upenv->up->up->up->vars[64], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D302_k122, env)}),
      upenv->up->up->vars[2]);
}
 }
}
static void _V10_Dloop_D302_lambda33(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V10_Dloop_D302_lambda33" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D302_lambda33, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D302_lambda33, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn ##.null?.11 3 0) (close _V10_Dloop_D302_k121) (bruijn ##.bs.301 2 2))
    V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D302_k121, env)}),
      upenv->up->vars[2]);
 }
}
__attribute__((used)) static void _V20CaseError__V10_Dmax_D72_lambda32(VRuntime * runtime, VEnv * upenv, int argc, ...) {
 // (_V10_Dmax_D72_lambda32 #t (2 ((bruijn ##.k.811 0 0) (bruijn ##.a.290 0 1))) (3 ((bruijn ##.>.36 1 25) (close _V10_Dmax_D72_k117) (bruijn ##.a.291 0 1) (bruijn ##.b.292 0 2))) (4 ((bruijn ##.max.72 1 61) (close _V10_Dmax_D72_k118) (bruijn ##.a.293 0 1) (bruijn ##.b.294 0 2))) (5 ((bruijn ##.max.72 1 61) (close _V10_Dmax_D72_k119) (bruijn ##.a.296 0 1) (bruijn ##.b.297 0 2))) (2 + (letrec 1 ((close _V10_Dloop_D302_lambda33)) ((bruijn ##.loop.302 0 0) (bruijn ##.k.819 1 0) (bruijn ##.a.300 1 1) (bruijn ##.bs.301 1 2)))))
 VErrorC(runtime, "Not enough arguments to _V10_Dmax_D72_lambda32, got ~D~N"
 "-- expected 2~N"
 "-- expected 3~N"
 "-- expected 4~N"
 "-- expected 5~N"
 "-- expected 2 or more~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V10_Dmax_D72_lambda32(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V20Case0__V10_Dmax_D72_lambda32" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case0__V10_Dmax_D72_lambda32, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##.k.811 0 0) (bruijn ##.a.290 0 1))
    V_CALL(_var0, runtime,
      _var1);
 }
}
__attribute__((used)) static void _V20Case1__V10_Dmax_D72_lambda32(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V20Case1__V10_Dmax_D72_lambda32" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case1__V10_Dmax_D72_lambda32, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn ##.>.36 1 25) (close _V10_Dmax_D72_k117) (bruijn ##.a.291 0 1) (bruijn ##.b.292 0 2))
    V_CALL(upenv->vars[25], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmax_D72_k117, env)}),
      _var1,
      _var2);
 }
}
__attribute__((used)) static void _V20Case2__V10_Dmax_D72_lambda32(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V20Case2__V10_Dmax_D72_lambda32" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case2__V10_Dmax_D72_lambda32, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // ((bruijn ##.max.72 1 61) (close _V10_Dmax_D72_k118) (bruijn ##.a.293 0 1) (bruijn ##.b.294 0 2))
    V_CALL(upenv->vars[61], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmax_D72_k118, env)}),
      _var1,
      _var2);
 }
}
__attribute__((used)) static void _V20Case3__V10_Dmax_D72_lambda32(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4) {
 static VDebugInfo dbg = { "_V20Case3__V10_Dmax_D72_lambda32" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case3__V10_Dmax_D72_lambda32, runtime, upenv, 5, argc, _var0, _var1, _var2, _var3, _var4) {
  struct { VEnv env; VWORD argv[5]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 5, 5, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  env->vars[4] = _var4;
  // ((bruijn ##.max.72 1 61) (close _V10_Dmax_D72_k119) (bruijn ##.a.296 0 1) (bruijn ##.b.297 0 2))
    V_CALL(upenv->vars[61], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmax_D72_k119, env)}),
      _var1,
      _var2);
 }
}
__attribute__((used)) static void _V20Case4__V10_Dmax_D72_lambda32(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, ...) {
 static VDebugInfo dbg = { "_V20Case4__V10_Dmax_D72_lambda32" };
 VRecordCall2(runtime, &dbg);
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 2, argc, _var1);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case4__V10_Dmax_D72_lambda32, runtime, upenv, 2, argc, _var0, _var1, _varargs) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _varargs;
  // (letrec 1 ((close _V10_Dloop_D302_lambda33)) ((bruijn ##.loop.302 0 0) (bruijn ##.k.819 1 0) (bruijn ##.a.300 1 1) (bruijn ##.bs.301 1 2)))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D302_lambda33, env)});
    V_CALL(env->vars[0], runtime,
      upenv->vars[0],
      upenv->vars[1],
      upenv->vars[2]);
    }
 }
}
void _V10_Dmax_D72_lambda32(VRuntime * runtime, VEnv * upenv, int argc, ...);
asm(
".intel_syntax noprefix\n"
#ifdef __linux__
".type _V10_Dmax_D72_lambda32, @function\n"
#endif
"_V10_Dmax_D72_lambda32:\n"
"    cmp " ARGC_REG ", 2\n"
"    je _V20Case0__V10_Dmax_D72_lambda32\n"
"    cmp " ARGC_REG ", 3\n"
"    je _V20Case1__V10_Dmax_D72_lambda32\n"
"    cmp " ARGC_REG ", 4\n"
"    je _V20Case2__V10_Dmax_D72_lambda32\n"
"    cmp " ARGC_REG ", 5\n"
"    je _V20Case3__V10_Dmax_D72_lambda32\n"
"    cmp " ARGC_REG ", 2\n"
"    jge _V20Case4__V10_Dmax_D72_lambda32\n"
"    jmp _V20CaseError__V10_Dmax_D72_lambda32\n"
);
static void _V10_Dmin_D73_k125(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dmin_D73_k125" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmin_D73_k125, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dmin_D73_k125, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##.p.827 0 0) ((bruijn ##.k.826 1 0) (bruijn ##.a.306 1 1)) ((bruijn ##.k.826 1 0) (bruijn ##.b.307 1 2)))
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
static void _V10_Dmin_D73_k126(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dmin_D73_k126" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmin_D73_k126, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dmin_D73_k126, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.min.73 2 62) (bruijn ##.k.828 1 0) (bruijn ##.x.829 0 0) (bruijn ##.c.310 1 3))
    V_CALL(upenv->up->vars[62], runtime,
      upenv->vars[0],
      _var0,
      upenv->vars[3]);
 }
}
static void _V10_Dmin_D73_k128(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dmin_D73_k128" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmin_D73_k128, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dmin_D73_k128, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.min.73 3 62) (bruijn ##.k.830 2 0) (bruijn ##.x.831 0 0) (bruijn ##.d.314 2 4))
    V_CALL(upenv->up->up->vars[62], runtime,
      upenv->up->vars[0],
      _var0,
      upenv->up->vars[4]);
 }
}
static void _V10_Dmin_D73_k127(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dmin_D73_k127" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmin_D73_k127, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dmin_D73_k127, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.min.73 2 62) (close _V10_Dmin_D73_k128) (bruijn ##.x.832 0 0) (bruijn ##.c.313 1 3))
    V_CALL(upenv->up->vars[62], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmin_D73_k128, env)}),
      _var0,
      upenv->vars[3]);
 }
}
static void _V10_Dloop_D317_k132(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D317_k132" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D317_k132, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D317_k132, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.loop.317 5 0) (bruijn ##.k.834 4 0) (bruijn ##.x.836 1 0) (bruijn ##.x.837 0 0))
    V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      upenv->up->up->up->vars[0],
      upenv->vars[0],
      _var0);
 }
}
static void _V10_Dloop_D317_k131(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D317_k131" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D317_k131, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D317_k131, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cdr.76 6 65) (close _V10_Dloop_D317_k132) (bruijn ##.bs.316 5 2))
    V_CALL(VGetArg(upenv, 6-1, 65), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D317_k132, env)}),
      VGetArg(upenv, 5-1, 2));
 }
}
static void _V10_Dloop_D317_k130(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D317_k130" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D317_k130, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D317_k130, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.min.73 5 62) (close _V10_Dloop_D317_k131) (bruijn ##.a.315 4 1) (bruijn ##.x.838 0 0))
    V_CALL(VGetArg(upenv, 5-1, 62), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D317_k131, env)}),
      upenv->up->up->up->vars[1],
      _var0);
 }
}
static void _V10_Dloop_D317_k129(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D317_k129" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D317_k129, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D317_k129, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.835 0 0) ((bruijn ##.k.834 1 0) (bruijn ##.ret.318 1 1)) ((bruijn ##.car.75 4 64) (close _V10_Dloop_D317_k130) (bruijn ##.bs.316 3 2)))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->vars[0], runtime,
      upenv->vars[1]);
} else {
    V_CALL(upenv->up->up->up->vars[64], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D317_k130, env)}),
      upenv->up->up->vars[2]);
}
 }
}
static void _V10_Dloop_D317_lambda35(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V10_Dloop_D317_lambda35" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D317_lambda35, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D317_lambda35, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn ##.null?.11 3 0) (close _V10_Dloop_D317_k129) (bruijn ##.bs.316 2 2))
    V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D317_k129, env)}),
      upenv->up->vars[2]);
 }
}
__attribute__((used)) static void _V20CaseError__V10_Dmin_D73_lambda34(VRuntime * runtime, VEnv * upenv, int argc, ...) {
 // (_V10_Dmin_D73_lambda34 #t (2 ((bruijn ##.k.825 0 0) (bruijn ##.a.305 0 1))) (3 ((bruijn ##.<.34 1 23) (close _V10_Dmin_D73_k125) (bruijn ##.a.306 0 1) (bruijn ##.b.307 0 2))) (4 ((bruijn ##.min.73 1 62) (close _V10_Dmin_D73_k126) (bruijn ##.a.308 0 1) (bruijn ##.b.309 0 2))) (5 ((bruijn ##.min.73 1 62) (close _V10_Dmin_D73_k127) (bruijn ##.a.311 0 1) (bruijn ##.b.312 0 2))) (2 + (letrec 1 ((close _V10_Dloop_D317_lambda35)) ((bruijn ##.loop.317 0 0) (bruijn ##.k.833 1 0) (bruijn ##.a.315 1 1) (bruijn ##.bs.316 1 2)))))
 VErrorC(runtime, "Not enough arguments to _V10_Dmin_D73_lambda34, got ~D~N"
 "-- expected 2~N"
 "-- expected 3~N"
 "-- expected 4~N"
 "-- expected 5~N"
 "-- expected 2 or more~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V10_Dmin_D73_lambda34(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V20Case0__V10_Dmin_D73_lambda34" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case0__V10_Dmin_D73_lambda34, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##.k.825 0 0) (bruijn ##.a.305 0 1))
    V_CALL(_var0, runtime,
      _var1);
 }
}
__attribute__((used)) static void _V20Case1__V10_Dmin_D73_lambda34(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V20Case1__V10_Dmin_D73_lambda34" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case1__V10_Dmin_D73_lambda34, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn ##.<.34 1 23) (close _V10_Dmin_D73_k125) (bruijn ##.a.306 0 1) (bruijn ##.b.307 0 2))
    V_CALL(upenv->vars[23], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmin_D73_k125, env)}),
      _var1,
      _var2);
 }
}
__attribute__((used)) static void _V20Case2__V10_Dmin_D73_lambda34(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V20Case2__V10_Dmin_D73_lambda34" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case2__V10_Dmin_D73_lambda34, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // ((bruijn ##.min.73 1 62) (close _V10_Dmin_D73_k126) (bruijn ##.a.308 0 1) (bruijn ##.b.309 0 2))
    V_CALL(upenv->vars[62], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmin_D73_k126, env)}),
      _var1,
      _var2);
 }
}
__attribute__((used)) static void _V20Case3__V10_Dmin_D73_lambda34(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4) {
 static VDebugInfo dbg = { "_V20Case3__V10_Dmin_D73_lambda34" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case3__V10_Dmin_D73_lambda34, runtime, upenv, 5, argc, _var0, _var1, _var2, _var3, _var4) {
  struct { VEnv env; VWORD argv[5]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 5, 5, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  env->vars[4] = _var4;
  // ((bruijn ##.min.73 1 62) (close _V10_Dmin_D73_k127) (bruijn ##.a.311 0 1) (bruijn ##.b.312 0 2))
    V_CALL(upenv->vars[62], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmin_D73_k127, env)}),
      _var1,
      _var2);
 }
}
__attribute__((used)) static void _V20Case4__V10_Dmin_D73_lambda34(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, ...) {
 static VDebugInfo dbg = { "_V20Case4__V10_Dmin_D73_lambda34" };
 VRecordCall2(runtime, &dbg);
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 2, argc, _var1);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case4__V10_Dmin_D73_lambda34, runtime, upenv, 2, argc, _var0, _var1, _varargs) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _varargs;
  // (letrec 1 ((close _V10_Dloop_D317_lambda35)) ((bruijn ##.loop.317 0 0) (bruijn ##.k.833 1 0) (bruijn ##.a.315 1 1) (bruijn ##.bs.316 1 2)))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D317_lambda35, env)});
    V_CALL(env->vars[0], runtime,
      upenv->vars[0],
      upenv->vars[1],
      upenv->vars[2]);
    }
 }
}
void _V10_Dmin_D73_lambda34(VRuntime * runtime, VEnv * upenv, int argc, ...);
asm(
".intel_syntax noprefix\n"
#ifdef __linux__
".type _V10_Dmin_D73_lambda34, @function\n"
#endif
"_V10_Dmin_D73_lambda34:\n"
"    cmp " ARGC_REG ", 2\n"
"    je _V20Case0__V10_Dmin_D73_lambda34\n"
"    cmp " ARGC_REG ", 3\n"
"    je _V20Case1__V10_Dmin_D73_lambda34\n"
"    cmp " ARGC_REG ", 4\n"
"    je _V20Case2__V10_Dmin_D73_lambda34\n"
"    cmp " ARGC_REG ", 5\n"
"    je _V20Case3__V10_Dmin_D73_lambda34\n"
"    cmp " ARGC_REG ", 2\n"
"    jge _V20Case4__V10_Dmin_D73_lambda34\n"
"    jmp _V20CaseError__V10_Dmin_D73_lambda34\n"
);
static void _V10_Dcaar_D79_lambda36(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V10_Dcaar_D79_lambda36" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcaar_D79_lambda36, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dcaar_D79_lambda36, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##.k.839 0 0) (##inline ##vcore.car (##inline ##vcore.car (bruijn ##.x.320 0 1))))
    V_CALL(_var0, runtime,
      VInlineCar2(runtime,
        VInlineCar2(runtime,
        _var1)));
 }
}
static void _V10_Dcadr_D80_lambda37(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V10_Dcadr_D80_lambda37" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcadr_D80_lambda37, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dcadr_D80_lambda37, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##.k.841 0 0) (##inline ##vcore.car (##inline ##vcore.cdr (bruijn ##.x.321 0 1))))
    V_CALL(_var0, runtime,
      VInlineCar2(runtime,
        VInlineCdr2(runtime,
        _var1)));
 }
}
static void _V10_Dcdar_D81_lambda38(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V10_Dcdar_D81_lambda38" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcdar_D81_lambda38, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dcdar_D81_lambda38, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##.k.843 0 0) (##inline ##vcore.cdr (##inline ##vcore.car (bruijn ##.x.322 0 1))))
    V_CALL(_var0, runtime,
      VInlineCdr2(runtime,
        VInlineCar2(runtime,
        _var1)));
 }
}
static void _V10_Dcddr_D82_lambda39(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V10_Dcddr_D82_lambda39" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcddr_D82_lambda39, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dcddr_D82_lambda39, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##.k.845 0 0) (##inline ##vcore.cdr (##inline ##vcore.cdr (bruijn ##.x.323 0 1))))
    V_CALL(_var0, runtime,
      VInlineCdr2(runtime,
        VInlineCdr2(runtime,
        _var1)));
 }
}
static void _V10_Dcaaar_D83_lambda40(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V10_Dcaaar_D83_lambda40" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcaaar_D83_lambda40, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dcaaar_D83_lambda40, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##.k.847 0 0) (##inline ##vcore.car (##inline ##vcore.car (##inline ##vcore.car (bruijn ##.x.324 0 1)))))
    V_CALL(_var0, runtime,
      VInlineCar2(runtime,
        VInlineCar2(runtime,
        VInlineCar2(runtime,
        _var1))));
 }
}
static void _V10_Dcaadr_D84_lambda41(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V10_Dcaadr_D84_lambda41" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcaadr_D84_lambda41, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dcaadr_D84_lambda41, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##.k.850 0 0) (##inline ##vcore.car (##inline ##vcore.car (##inline ##vcore.cdr (bruijn ##.x.325 0 1)))))
    V_CALL(_var0, runtime,
      VInlineCar2(runtime,
        VInlineCar2(runtime,
        VInlineCdr2(runtime,
        _var1))));
 }
}
static void _V10_Dcadar_D85_lambda42(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V10_Dcadar_D85_lambda42" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcadar_D85_lambda42, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dcadar_D85_lambda42, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##.k.853 0 0) (##inline ##vcore.car (##inline ##vcore.cdr (##inline ##vcore.car (bruijn ##.x.326 0 1)))))
    V_CALL(_var0, runtime,
      VInlineCar2(runtime,
        VInlineCdr2(runtime,
        VInlineCar2(runtime,
        _var1))));
 }
}
static void _V10_Dcaddr_D86_lambda43(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V10_Dcaddr_D86_lambda43" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcaddr_D86_lambda43, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dcaddr_D86_lambda43, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##.k.856 0 0) (##inline ##vcore.car (##inline ##vcore.cdr (##inline ##vcore.cdr (bruijn ##.x.327 0 1)))))
    V_CALL(_var0, runtime,
      VInlineCar2(runtime,
        VInlineCdr2(runtime,
        VInlineCdr2(runtime,
        _var1))));
 }
}
static void _V10_Dcdaar_D87_lambda44(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V10_Dcdaar_D87_lambda44" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcdaar_D87_lambda44, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dcdaar_D87_lambda44, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##.k.859 0 0) (##inline ##vcore.cdr (##inline ##vcore.car (##inline ##vcore.car (bruijn ##.x.328 0 1)))))
    V_CALL(_var0, runtime,
      VInlineCdr2(runtime,
        VInlineCar2(runtime,
        VInlineCar2(runtime,
        _var1))));
 }
}
static void _V10_Dcdadr_D88_lambda45(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V10_Dcdadr_D88_lambda45" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcdadr_D88_lambda45, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dcdadr_D88_lambda45, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##.k.862 0 0) (##inline ##vcore.cdr (##inline ##vcore.car (##inline ##vcore.cdr (bruijn ##.x.329 0 1)))))
    V_CALL(_var0, runtime,
      VInlineCdr2(runtime,
        VInlineCar2(runtime,
        VInlineCdr2(runtime,
        _var1))));
 }
}
static void _V10_Dcddar_D89_lambda46(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V10_Dcddar_D89_lambda46" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcddar_D89_lambda46, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dcddar_D89_lambda46, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##.k.865 0 0) (##inline ##vcore.cdr (##inline ##vcore.cdr (##inline ##vcore.car (bruijn ##.x.330 0 1)))))
    V_CALL(_var0, runtime,
      VInlineCdr2(runtime,
        VInlineCdr2(runtime,
        VInlineCar2(runtime,
        _var1))));
 }
}
static void _V10_Dcdddr_D90_lambda47(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V10_Dcdddr_D90_lambda47" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcdddr_D90_lambda47, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dcdddr_D90_lambda47, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##.k.868 0 0) (##inline ##vcore.cdr (##inline ##vcore.cdr (##inline ##vcore.cdr (bruijn ##.x.331 0 1)))))
    V_CALL(_var0, runtime,
      VInlineCdr2(runtime,
        VInlineCdr2(runtime,
        VInlineCdr2(runtime,
        _var1))));
 }
}
static void _V10_Dcaaaar_D91_lambda48(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V10_Dcaaaar_D91_lambda48" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcaaaar_D91_lambda48, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dcaaaar_D91_lambda48, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##.k.871 0 0) (##inline ##vcore.car (##inline ##vcore.car (##inline ##vcore.car (##inline ##vcore.car (bruijn ##.x.332 0 1))))))
    V_CALL(_var0, runtime,
      VInlineCar2(runtime,
        VInlineCar2(runtime,
        VInlineCar2(runtime,
        VInlineCar2(runtime,
        _var1)))));
 }
}
static void _V10_Dcaaadr_D92_lambda49(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V10_Dcaaadr_D92_lambda49" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcaaadr_D92_lambda49, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dcaaadr_D92_lambda49, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##.k.875 0 0) (##inline ##vcore.car (##inline ##vcore.car (##inline ##vcore.car (##inline ##vcore.cdr (bruijn ##.x.333 0 1))))))
    V_CALL(_var0, runtime,
      VInlineCar2(runtime,
        VInlineCar2(runtime,
        VInlineCar2(runtime,
        VInlineCdr2(runtime,
        _var1)))));
 }
}
static void _V10_Dcaadar_D93_lambda50(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V10_Dcaadar_D93_lambda50" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcaadar_D93_lambda50, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dcaadar_D93_lambda50, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##.k.879 0 0) (##inline ##vcore.car (##inline ##vcore.car (##inline ##vcore.cdr (##inline ##vcore.car (bruijn ##.x.334 0 1))))))
    V_CALL(_var0, runtime,
      VInlineCar2(runtime,
        VInlineCar2(runtime,
        VInlineCdr2(runtime,
        VInlineCar2(runtime,
        _var1)))));
 }
}
static void _V10_Dcaaddr_D94_lambda51(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V10_Dcaaddr_D94_lambda51" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcaaddr_D94_lambda51, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dcaaddr_D94_lambda51, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##.k.883 0 0) (##inline ##vcore.car (##inline ##vcore.car (##inline ##vcore.cdr (##inline ##vcore.cdr (bruijn ##.x.335 0 1))))))
    V_CALL(_var0, runtime,
      VInlineCar2(runtime,
        VInlineCar2(runtime,
        VInlineCdr2(runtime,
        VInlineCdr2(runtime,
        _var1)))));
 }
}
static void _V10_Dcadaar_D95_lambda52(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V10_Dcadaar_D95_lambda52" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcadaar_D95_lambda52, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dcadaar_D95_lambda52, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##.k.887 0 0) (##inline ##vcore.car (##inline ##vcore.cdr (##inline ##vcore.car (##inline ##vcore.car (bruijn ##.x.336 0 1))))))
    V_CALL(_var0, runtime,
      VInlineCar2(runtime,
        VInlineCdr2(runtime,
        VInlineCar2(runtime,
        VInlineCar2(runtime,
        _var1)))));
 }
}
static void _V10_Dcadadr_D96_lambda53(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V10_Dcadadr_D96_lambda53" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcadadr_D96_lambda53, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dcadadr_D96_lambda53, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##.k.891 0 0) (##inline ##vcore.car (##inline ##vcore.cdr (##inline ##vcore.car (##inline ##vcore.cdr (bruijn ##.x.337 0 1))))))
    V_CALL(_var0, runtime,
      VInlineCar2(runtime,
        VInlineCdr2(runtime,
        VInlineCar2(runtime,
        VInlineCdr2(runtime,
        _var1)))));
 }
}
static void _V10_Dcaddar_D97_lambda54(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V10_Dcaddar_D97_lambda54" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcaddar_D97_lambda54, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dcaddar_D97_lambda54, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##.k.895 0 0) (##inline ##vcore.car (##inline ##vcore.cdr (##inline ##vcore.cdr (##inline ##vcore.car (bruijn ##.x.338 0 1))))))
    V_CALL(_var0, runtime,
      VInlineCar2(runtime,
        VInlineCdr2(runtime,
        VInlineCdr2(runtime,
        VInlineCar2(runtime,
        _var1)))));
 }
}
static void _V10_Dcadddr_D98_lambda55(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V10_Dcadddr_D98_lambda55" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcadddr_D98_lambda55, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dcadddr_D98_lambda55, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##.k.899 0 0) (##inline ##vcore.car (##inline ##vcore.cdr (##inline ##vcore.cdr (##inline ##vcore.cdr (bruijn ##.x.339 0 1))))))
    V_CALL(_var0, runtime,
      VInlineCar2(runtime,
        VInlineCdr2(runtime,
        VInlineCdr2(runtime,
        VInlineCdr2(runtime,
        _var1)))));
 }
}
static void _V10_Dcdaaar_D99_lambda56(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V10_Dcdaaar_D99_lambda56" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcdaaar_D99_lambda56, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dcdaaar_D99_lambda56, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##.k.903 0 0) (##inline ##vcore.cdr (##inline ##vcore.car (##inline ##vcore.car (##inline ##vcore.car (bruijn ##.x.340 0 1))))))
    V_CALL(_var0, runtime,
      VInlineCdr2(runtime,
        VInlineCar2(runtime,
        VInlineCar2(runtime,
        VInlineCar2(runtime,
        _var1)))));
 }
}
static void _V10_Dcdaadr_D100_lambda57(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V10_Dcdaadr_D100_lambda57" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcdaadr_D100_lambda57, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dcdaadr_D100_lambda57, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##.k.907 0 0) (##inline ##vcore.cdr (##inline ##vcore.car (##inline ##vcore.car (##inline ##vcore.cdr (bruijn ##.x.341 0 1))))))
    V_CALL(_var0, runtime,
      VInlineCdr2(runtime,
        VInlineCar2(runtime,
        VInlineCar2(runtime,
        VInlineCdr2(runtime,
        _var1)))));
 }
}
static void _V10_Dcdadar_D101_lambda58(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V10_Dcdadar_D101_lambda58" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcdadar_D101_lambda58, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dcdadar_D101_lambda58, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##.k.911 0 0) (##inline ##vcore.cdr (##inline ##vcore.car (##inline ##vcore.cdr (##inline ##vcore.car (bruijn ##.x.342 0 1))))))
    V_CALL(_var0, runtime,
      VInlineCdr2(runtime,
        VInlineCar2(runtime,
        VInlineCdr2(runtime,
        VInlineCar2(runtime,
        _var1)))));
 }
}
static void _V10_Dcdaddr_D102_lambda59(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V10_Dcdaddr_D102_lambda59" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcdaddr_D102_lambda59, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dcdaddr_D102_lambda59, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##.k.915 0 0) (##inline ##vcore.cdr (##inline ##vcore.car (##inline ##vcore.cdr (##inline ##vcore.cdr (bruijn ##.x.343 0 1))))))
    V_CALL(_var0, runtime,
      VInlineCdr2(runtime,
        VInlineCar2(runtime,
        VInlineCdr2(runtime,
        VInlineCdr2(runtime,
        _var1)))));
 }
}
static void _V10_Dcddaar_D103_lambda60(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V10_Dcddaar_D103_lambda60" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcddaar_D103_lambda60, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dcddaar_D103_lambda60, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##.k.919 0 0) (##inline ##vcore.cdr (##inline ##vcore.cdr (##inline ##vcore.car (##inline ##vcore.car (bruijn ##.x.344 0 1))))))
    V_CALL(_var0, runtime,
      VInlineCdr2(runtime,
        VInlineCdr2(runtime,
        VInlineCar2(runtime,
        VInlineCar2(runtime,
        _var1)))));
 }
}
static void _V10_Dcddadr_D104_lambda61(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V10_Dcddadr_D104_lambda61" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcddadr_D104_lambda61, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dcddadr_D104_lambda61, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##.k.923 0 0) (##inline ##vcore.cdr (##inline ##vcore.cdr (##inline ##vcore.car (##inline ##vcore.cdr (bruijn ##.x.345 0 1))))))
    V_CALL(_var0, runtime,
      VInlineCdr2(runtime,
        VInlineCdr2(runtime,
        VInlineCar2(runtime,
        VInlineCdr2(runtime,
        _var1)))));
 }
}
static void _V10_Dcdddar_D105_lambda62(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V10_Dcdddar_D105_lambda62" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcdddar_D105_lambda62, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dcdddar_D105_lambda62, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##.k.927 0 0) (##inline ##vcore.cdr (##inline ##vcore.cdr (##inline ##vcore.cdr (##inline ##vcore.car (bruijn ##.x.346 0 1))))))
    V_CALL(_var0, runtime,
      VInlineCdr2(runtime,
        VInlineCdr2(runtime,
        VInlineCdr2(runtime,
        VInlineCar2(runtime,
        _var1)))));
 }
}
static void _V10_Dcddddr_D106_lambda63(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V10_Dcddddr_D106_lambda63" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcddddr_D106_lambda63, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dcddddr_D106_lambda63, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##.k.931 0 0) (##inline ##vcore.cdr (##inline ##vcore.cdr (##inline ##vcore.cdr (##inline ##vcore.cdr (bruijn ##.x.347 0 1))))))
    V_CALL(_var0, runtime,
      VInlineCdr2(runtime,
        VInlineCdr2(runtime,
        VInlineCdr2(runtime,
        VInlineCdr2(runtime,
        _var1)))));
 }
}
static void _V10_Dlist_D107_lambda64(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, ...) {
 static VDebugInfo dbg = { "_V10_Dlist_D107_lambda64" };
 VRecordCall2(runtime, &dbg);
 if(argc < 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlist_D107_lambda64, got ~D~N"
  "-- expected 1 or more~N"
  , argc);
 }
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 1, argc, _var0);
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlist_D107_lambda64, runtime, upenv, 1, argc, _var0, _varargs) {
  // ((bruijn ##.k.935 0 0) (bruijn ##.args.348 0 1))
    V_CALL(_var0, runtime,
      _varargs);
 }
}
static void _V10_Dlist_Q_D108_k135(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlist_Q_D108_k135" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlist_Q_D108_k135, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlist_Q_D108_k135, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.list?.108 4 97) (bruijn ##.k.936 3 0) (bruijn ##.x.939 0 0))
    V_CALL(upenv->up->up->up->vars[97], runtime,
      upenv->up->up->vars[0],
      _var0);
 }
}
static void _V10_Dlist_Q_D108_k134(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlist_Q_D108_k134" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlist_Q_D108_k134, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlist_Q_D108_k134, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.938 0 0) ((bruijn ##.cdr.76 3 65) (close _V10_Dlist_Q_D108_k135) (bruijn ##.lst.349 2 1)) ((bruijn ##.k.936 2 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->up->up->vars[65], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlist_Q_D108_k135, env)}),
      upenv->up->vars[1]);
} else {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dlist_Q_D108_k133(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlist_Q_D108_k133" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlist_Q_D108_k133, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlist_Q_D108_k133, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.937 0 0) ((bruijn ##.k.936 1 0) (bruijn ##.p.937 0 0)) ((bruijn ##.pair?.14 2 3) (close _V10_Dlist_Q_D108_k134) (bruijn ##.lst.349 1 1)))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->vars[0], runtime,
      _var0);
} else {
    V_CALL(upenv->up->vars[3], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlist_Q_D108_k134, env)}),
      upenv->vars[1]);
}
 }
}
static void _V10_Dlist_Q_D108_lambda65(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V10_Dlist_Q_D108_lambda65" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlist_Q_D108_lambda65, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlist_Q_D108_lambda65, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##.null?.11 1 0) (close _V10_Dlist_Q_D108_k133) (bruijn ##.lst.349 0 1))
    V_CALL(upenv->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlist_Q_D108_k133, env)}),
      _var1);
 }
}
static void _V10_Dloop_D351_k136(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D351_k136" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D351_k136, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D351_k136, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.loop.351 2 0) (bruijn ##.k.941 1 0) (##inline ##vcore.cdr (bruijn ##.lst.352 1 1)) (bruijn ##.x.944 0 0))
    V_CALL(upenv->up->vars[0], runtime,
      upenv->vars[0],
      VInlineCdr2(runtime,
        upenv->vars[1]),
      _var0);
 }
}
static void _V10_Dloop_D351_lambda67(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V10_Dloop_D351_lambda67" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D351_lambda67, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D351_lambda67, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // (if (##inline ##vcore.null? (bruijn ##.lst.352 0 1)) ((bruijn ##.k.941 0 0) (bruijn ##.i.353 0 2)) ((bruijn ##.+.47 3 36) (close _V10_Dloop_D351_k136) (bruijn ##.i.353 0 2) 1))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var1))) {
    V_CALL(_var0, runtime,
      _var2);
} else {
    V_CALL(upenv->up->up->vars[36], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D351_k136, env)}),
      _var2,
      VEncodeInt(1l));
}
 }
}
static void _V10_Dlength_D109_lambda66(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V10_Dlength_D109_lambda66" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlength_D109_lambda66, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlength_D109_lambda66, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (letrec 1 ((close _V10_Dloop_D351_lambda67)) ((bruijn ##.loop.351 0 0) (bruijn ##.k.940 1 0) (bruijn ##.lst.350 1 1) 0))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D351_lambda67, env)});
    V_CALL(env->vars[0], runtime,
      upenv->vars[0],
      upenv->vars[1],
      VEncodeInt(0l));
    }
 }
}
static void _V10_Dlist__tail_D110_k138(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlist__tail_D110_k138" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlist__tail_D110_k138, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlist__tail_D110_k138, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.list-tail.110 3 99) (bruijn ##.k.945 2 0) (##inline ##vcore.cdr (bruijn ##.lst.354 2 1)) (bruijn ##.x.948 0 0))
    V_CALL(upenv->up->up->vars[99], runtime,
      upenv->up->vars[0],
      VInlineCdr2(runtime,
        upenv->up->vars[1]),
      _var0);
 }
}
static void _V10_Dlist__tail_D110_k137(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlist__tail_D110_k137" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlist__tail_D110_k137, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlist__tail_D110_k137, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.946 0 0) ((bruijn ##.k.945 1 0) (bruijn ##.lst.354 1 1)) ((bruijn ##.-.48 2 37) (close _V10_Dlist__tail_D110_k138) (bruijn ##.x.355 1 2) 1))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->vars[0], runtime,
      upenv->vars[1]);
} else {
    V_CALL(upenv->up->vars[37], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlist__tail_D110_k138, env)}),
      upenv->vars[2],
      VEncodeInt(1l));
}
 }
}
static void _V10_Dlist__tail_D110_lambda68(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V10_Dlist__tail_D110_lambda68" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlist__tail_D110_lambda68, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlist__tail_D110_lambda68, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn ##.eq?.26 1 15) (close _V10_Dlist__tail_D110_k137) (bruijn ##.x.355 0 2) 0)
    V_CALL(upenv->vars[15], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlist__tail_D110_k137, env)}),
      _var2,
      VEncodeInt(0l));
 }
}
static void _V10_Dlist__ref_D111_k140(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlist__ref_D111_k140" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlist__ref_D111_k140, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlist__ref_D111_k140, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.list-ref.111 3 100) (bruijn ##.k.949 2 0) (##inline ##vcore.cdr (bruijn ##.lst.356 2 1)) (bruijn ##.x.952 0 0))
    V_CALL(upenv->up->up->vars[100], runtime,
      upenv->up->vars[0],
      VInlineCdr2(runtime,
        upenv->up->vars[1]),
      _var0);
 }
}
static void _V10_Dlist__ref_D111_k139(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlist__ref_D111_k139" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlist__ref_D111_k139, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlist__ref_D111_k139, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.950 0 0) ((bruijn ##.k.949 1 0) (##inline ##vcore.car (bruijn ##.lst.356 1 1))) ((bruijn ##.-.48 2 37) (close _V10_Dlist__ref_D111_k140) (bruijn ##.x.357 1 2) 1))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->vars[0], runtime,
      VInlineCar2(runtime,
        upenv->vars[1]));
} else {
    V_CALL(upenv->up->vars[37], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlist__ref_D111_k140, env)}),
      upenv->vars[2],
      VEncodeInt(1l));
}
 }
}
static void _V10_Dlist__ref_D111_lambda69(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V10_Dlist__ref_D111_lambda69" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlist__ref_D111_lambda69, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlist__ref_D111_lambda69, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn ##.eq?.26 1 15) (close _V10_Dlist__ref_D111_k139) (bruijn ##.x.357 0 2) 0)
    V_CALL(upenv->vars[15], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlist__ref_D111_k139, env)}),
      _var2,
      VEncodeInt(0l));
 }
}
static void _V10_Dlist__set_B_D112_k141(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlist__set_B_D112_k141" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlist__set_B_D112_k141, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlist__set_B_D112_k141, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.set-car!.77 2 66) (bruijn ##.k.953 1 0) (bruijn ##.x.954 0 0) (bruijn ##.val.360 1 3))
    V_CALL(upenv->up->vars[66], runtime,
      upenv->vars[0],
      _var0,
      upenv->vars[3]);
 }
}
static void _V10_Dlist__set_B_D112_lambda70(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V10_Dlist__set_B_D112_lambda70" };
 VRecordCall2(runtime, &dbg);
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlist__set_B_D112_lambda70, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlist__set_B_D112_lambda70, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // ((bruijn ##.list-tail.110 1 99) (close _V10_Dlist__set_B_D112_k141) (bruijn ##.lst.358 0 1) (bruijn ##.i.359 0 2))
    V_CALL(upenv->vars[99], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlist__set_B_D112_k141, env)}),
      _var1,
      _var2);
 }
}
static void _V10_Dlist__copy_D113_k145(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlist__copy_D113_k145" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlist__copy_D113_k145, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlist__copy_D113_k145, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.cons.74 5 63) (bruijn ##.k.955 4 0) (bruijn ##.x.957 2 0) (bruijn ##.x.958 0 0))
    V_CALL(VGetArg(upenv, 5-1, 63), runtime,
      upenv->up->up->up->vars[0],
      upenv->up->vars[0],
      _var0);
 }
}
static void _V10_Dlist__copy_D113_k144(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlist__copy_D113_k144" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlist__copy_D113_k144, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlist__copy_D113_k144, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.list-copy.113 4 102) (close _V10_Dlist__copy_D113_k145) (bruijn ##.x.959 0 0))
    V_CALL(upenv->up->up->up->vars[102], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlist__copy_D113_k145, env)}),
      _var0);
 }
}
static void _V10_Dlist__copy_D113_k143(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlist__copy_D113_k143" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlist__copy_D113_k143, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlist__copy_D113_k143, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cdr.76 3 65) (close _V10_Dlist__copy_D113_k144) (bruijn ##.lst.361 2 1))
    V_CALL(upenv->up->up->vars[65], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlist__copy_D113_k144, env)}),
      upenv->up->vars[1]);
 }
}
static void _V10_Dlist__copy_D113_k142(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlist__copy_D113_k142" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlist__copy_D113_k142, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlist__copy_D113_k142, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.956 0 0) ((bruijn ##.k.955 1 0) '()) ((bruijn ##.car.75 2 64) (close _V10_Dlist__copy_D113_k143) (bruijn ##.lst.361 1 1)))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->vars[0], runtime,
      VNULL);
} else {
    V_CALL(upenv->up->vars[64], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlist__copy_D113_k143, env)}),
      upenv->vars[1]);
}
 }
}
static void _V10_Dlist__copy_D113_lambda71(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V10_Dlist__copy_D113_lambda71" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlist__copy_D113_lambda71, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlist__copy_D113_lambda71, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##.null?.11 1 0) (close _V10_Dlist__copy_D113_k142) (bruijn ##.lst.361 0 1))
    V_CALL(upenv->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlist__copy_D113_k142, env)}),
      _var1);
 }
}
static void _V10_Dloop_D365_k148(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D365_k148" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D365_k148, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D365_k148, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.loop.365 4 0) (bruijn ##.k.962 3 0) (bruijn ##.x.964 1 0) (bruijn ##.x.965 0 0))
    V_CALL(upenv->up->up->up->vars[0], runtime,
      upenv->up->up->vars[0],
      upenv->vars[0],
      _var0);
 }
}
static void _V10_Dloop_D365_k147(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D365_k147" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D365_k147, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D365_k147, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cons.74 5 63) (close _V10_Dloop_D365_k148) (bruijn ##.val.364 4 2) (bruijn ##.ret.367 2 2))
    V_CALL(VGetArg(upenv, 5-1, 63), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D365_k148, env)}),
      upenv->up->up->up->vars[2],
      upenv->up->vars[2]);
 }
}
static void _V10_Dloop_D365_k146(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D365_k146" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D365_k146, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D365_k146, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.963 0 0) ((bruijn ##.k.962 1 0) (bruijn ##.ret.367 1 2)) ((bruijn ##.-.48 4 37) (close _V10_Dloop_D365_k147) (bruijn ##.k.366 1 1) 1))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->vars[0], runtime,
      upenv->vars[2]);
} else {
    V_CALL(upenv->up->up->up->vars[37], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D365_k147, env)}),
      upenv->vars[1],
      VEncodeInt(1l));
}
 }
}
static void _V10_Dloop_D365_lambda73(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V10_Dloop_D365_lambda73" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D365_lambda73, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D365_lambda73, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn ##.eq?.26 3 15) (close _V10_Dloop_D365_k146) (bruijn ##.k.366 0 1) 0)
    V_CALL(upenv->up->up->vars[15], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D365_k146, env)}),
      _var1,
      VEncodeInt(0l));
 }
}
__attribute__((used)) static void _V20CaseError__V10_Dmake__list_D114_lambda72(VRuntime * runtime, VEnv * upenv, int argc, ...) {
 // (_V10_Dmake__list_D114_lambda72 #t (2 ((bruijn ##.make-list.114 1 103) (bruijn ##.k.960 0 0) (bruijn ##.k.362 0 1) #f)) (3 (letrec 1 ((close _V10_Dloop_D365_lambda73)) ((bruijn ##.loop.365 0 0) (bruijn ##.k.961 1 0) (bruijn ##.k.363 1 1) '()))))
 VErrorC(runtime, "Not enough arguments to _V10_Dmake__list_D114_lambda72, got ~D~N"
 "-- expected 2~N"
 "-- expected 3~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V10_Dmake__list_D114_lambda72(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V20Case0__V10_Dmake__list_D114_lambda72" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case0__V10_Dmake__list_D114_lambda72, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##.make-list.114 1 103) (bruijn ##.k.960 0 0) (bruijn ##.k.362 0 1) #f)
    V_CALL(upenv->vars[103], runtime,
      _var0,
      _var1,
      VEncodeBool(false));
 }
}
__attribute__((used)) static void _V20Case1__V10_Dmake__list_D114_lambda72(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V20Case1__V10_Dmake__list_D114_lambda72" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case1__V10_Dmake__list_D114_lambda72, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // (letrec 1 ((close _V10_Dloop_D365_lambda73)) ((bruijn ##.loop.365 0 0) (bruijn ##.k.961 1 0) (bruijn ##.k.363 1 1) '()))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D365_lambda73, env)});
    V_CALL(env->vars[0], runtime,
      upenv->vars[0],
      upenv->vars[1],
      VNULL);
    }
 }
}
void _V10_Dmake__list_D114_lambda72(VRuntime * runtime, VEnv * upenv, int argc, ...);
asm(
".intel_syntax noprefix\n"
#ifdef __linux__
".type _V10_Dmake__list_D114_lambda72, @function\n"
#endif
"_V10_Dmake__list_D114_lambda72:\n"
"    cmp " ARGC_REG ", 2\n"
"    je _V20Case0__V10_Dmake__list_D114_lambda72\n"
"    cmp " ARGC_REG ", 3\n"
"    je _V20Case1__V10_Dmake__list_D114_lambda72\n"
"    jmp _V20CaseError__V10_Dmake__list_D114_lambda72\n"
);
static void _V10_Dloop_D370_k150(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D370_k150" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D370_k150, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D370_k150, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.k.967 2 0) (##inline ##vcore.cons (bruijn ##.x.969 1 0) (bruijn ##.x.970 0 0)))
    V_CALL(upenv->up->vars[0], runtime,
      VInlineCons2(runtime,
        upenv->vars[0],
        _var0));
 }
}
static void _V10_Dloop_D370_k149(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D370_k149" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D370_k149, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D370_k149, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.loop.370 2 0) (close _V10_Dloop_D370_k150) (##inline ##vcore.cdr (bruijn ##.xs.371 1 1)))
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D370_k150, env)}),
      VInlineCdr2(runtime,
        upenv->vars[1]));
 }
}
static void _V10_Dloop_D370_lambda75(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V10_Dloop_D370_lambda75" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D370_lambda75, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D370_lambda75, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##vcore.null? (bruijn ##.xs.371 0 1)) ((bruijn ##.k.967 0 0) '()) ((bruijn ##.f.368 2 1) (close _V10_Dloop_D370_k149) (##inline ##vcore.car (bruijn ##.xs.371 0 1))))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var1))) {
    V_CALL(_var0, runtime,
      VNULL);
} else {
    V_CALL(upenv->up->vars[1], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D370_k149, env)}),
      VInlineCar2(runtime,
        _var1));
}
 }
}
static void _V10_Dloop_D375_k152(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D375_k152" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D375_k152, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D375_k152, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.k.974 2 0) (##inline ##vcore.cons (bruijn ##.x.976 1 0) (bruijn ##.x.977 0 0)))
    V_CALL(upenv->up->vars[0], runtime,
      VInlineCons2(runtime,
        upenv->vars[0],
        _var0));
 }
}
static void _V10_Dloop_D375_k151(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D375_k151" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D375_k151, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D375_k151, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.loop.375 2 0) (close _V10_Dloop_D375_k152) (##inline ##vcore.cdr (bruijn ##.xs.376 1 1)) (##inline ##vcore.cdr (bruijn ##.ys.377 1 2)))
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D375_k152, env)}),
      VInlineCdr2(runtime,
        upenv->vars[1]),
      VInlineCdr2(runtime,
        upenv->vars[2]));
 }
}
static void _V10_Dloop_D375_lambda76(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V10_Dloop_D375_lambda76" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D375_lambda76, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D375_lambda76, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // (if (##inline ##vcore.null? (bruijn ##.xs.376 0 1)) ((bruijn ##.k.974 0 0) '()) ((bruijn ##.f.372 2 1) (close _V10_Dloop_D375_k151) (##inline ##vcore.car (bruijn ##.xs.376 0 1)) (##inline ##vcore.car (bruijn ##.ys.377 0 2))))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var1))) {
    V_CALL(_var0, runtime,
      VNULL);
} else {
    V_CALL(upenv->up->vars[1], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D375_k151, env)}),
      VInlineCar2(runtime,
        _var1),
      VInlineCar2(runtime,
        _var2));
}
 }
}
static void _V10_Dloop_D382_k154(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D382_k154" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D382_k154, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D382_k154, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.k.983 2 0) (##inline ##vcore.cons (bruijn ##.x.985 1 0) (bruijn ##.x.986 0 0)))
    V_CALL(upenv->up->vars[0], runtime,
      VInlineCons2(runtime,
        upenv->vars[0],
        _var0));
 }
}
static void _V10_Dloop_D382_k153(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D382_k153" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D382_k153, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D382_k153, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.loop.382 2 0) (close _V10_Dloop_D382_k154) (##inline ##vcore.cdr (bruijn ##.xs.383 1 1)) (##inline ##vcore.cdr (bruijn ##.ys.384 1 2)) (##inline ##vcore.cdr (bruijn ##.zs.385 1 3)))
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D382_k154, env)}),
      VInlineCdr2(runtime,
        upenv->vars[1]),
      VInlineCdr2(runtime,
        upenv->vars[2]),
      VInlineCdr2(runtime,
        upenv->vars[3]));
 }
}
static void _V10_Dloop_D382_lambda77(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V10_Dloop_D382_lambda77" };
 VRecordCall2(runtime, &dbg);
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D382_lambda77, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D382_lambda77, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // (if (##inline ##vcore.null? (bruijn ##.xs.383 0 1)) ((bruijn ##.k.983 0 0) '()) ((bruijn ##.f.378 2 1) (close _V10_Dloop_D382_k153) (##inline ##vcore.car (bruijn ##.xs.383 0 1)) (##inline ##vcore.car (bruijn ##.ys.384 0 2)) (##inline ##vcore.car (bruijn ##.zs.385 0 3))))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var1))) {
    V_CALL(_var0, runtime,
      VNULL);
} else {
    V_CALL(upenv->up->vars[1], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D382_k153, env)}),
      VInlineCar2(runtime,
        _var1),
      VInlineCar2(runtime,
        _var2),
      VInlineCar2(runtime,
        _var3));
}
 }
}
static void _V10_Dloop_D388_k158(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D388_k158" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D388_k158, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D388_k158, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.k.994 4 0) (##inline ##vcore.cons (bruijn ##.x.996 2 0) (bruijn ##.x.997 0 0)))
    V_CALL(upenv->up->up->up->vars[0], runtime,
      VInlineCons2(runtime,
        upenv->up->vars[0],
        _var0));
 }
}
static void _V10_Dloop_D388_k157(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D388_k157" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D388_k157, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D388_k157, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.loop.388 4 0) (close _V10_Dloop_D388_k158) (bruijn ##.x.998 0 0))
    V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D388_k158, env)}),
      _var0);
 }
}
static void _V10_Dloop_D388_k156(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D388_k156" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D388_k156, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D388_k156, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.map.115 5 104) (close _V10_Dloop_D388_k157) (##intrinsic ##vcore.cdr) (bruijn ##.lsts.389 2 1))
    V_CALL(VGetArg(upenv, 5-1, 104), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D388_k157, env)}),
      _V40_V10vcore_Dcdr,
      upenv->up->vars[1]);
 }
}
static void _V10_Dloop_D388_k155(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D388_k155" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D388_k155, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D388_k155, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.apply.183 4 172) (close _V10_Dloop_D388_k156) (bruijn ##.f.386 3 1) (bruijn ##.x.999 0 0))
    V_CALL(upenv->up->up->up->vars[172], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D388_k156, env)}),
      upenv->up->up->vars[1],
      _var0);
 }
}
static void _V10_Dloop_D388_lambda78(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V10_Dloop_D388_lambda78" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D388_lambda78, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D388_lambda78, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##vcore.null? (##inline ##vcore.car (bruijn ##.lsts.389 0 1))) ((bruijn ##.k.994 0 0) '()) ((bruijn ##.map.115 3 104) (close _V10_Dloop_D388_k155) (##intrinsic ##vcore.car) (bruijn ##.lsts.389 0 1)))
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCar2(runtime,
        _var1)))) {
    V_CALL(_var0, runtime,
      VNULL);
} else {
    V_CALL(upenv->up->up->vars[104], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D388_k155, env)}),
      _V40_V10vcore_Dcar,
      _var1);
}
 }
}
__attribute__((used)) static void _V20CaseError__V10_Dmap_D115_lambda74(VRuntime * runtime, VEnv * upenv, int argc, ...) {
 // (_V10_Dmap_D115_lambda74 #t (3 (letrec 1 ((close _V10_Dloop_D370_lambda75)) ((bruijn ##.loop.370 0 0) (bruijn ##.k.966 1 0) (bruijn ##.xs.369 1 2)))) (4 (letrec 1 ((close _V10_Dloop_D375_lambda76)) ((bruijn ##.loop.375 0 0) (bruijn ##.k.973 1 0) (bruijn ##.xs.373 1 2) (bruijn ##.ys.374 1 3)))) (5 (letrec 1 ((close _V10_Dloop_D382_lambda77)) ((bruijn ##.loop.382 0 0) (bruijn ##.k.982 1 0) (bruijn ##.xs.379 1 2) (bruijn ##.ys.380 1 3) (bruijn ##.zs.381 1 4)))) (2 + (letrec 1 ((close _V10_Dloop_D388_lambda78)) ((bruijn ##.loop.388 0 0) (bruijn ##.k.993 1 0) (bruijn ##.lsts.387 1 2)))))
 VErrorC(runtime, "Not enough arguments to _V10_Dmap_D115_lambda74, got ~D~N"
 "-- expected 3~N"
 "-- expected 4~N"
 "-- expected 5~N"
 "-- expected 2 or more~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V10_Dmap_D115_lambda74(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V20Case0__V10_Dmap_D115_lambda74" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case0__V10_Dmap_D115_lambda74, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // (letrec 1 ((close _V10_Dloop_D370_lambda75)) ((bruijn ##.loop.370 0 0) (bruijn ##.k.966 1 0) (bruijn ##.xs.369 1 2)))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D370_lambda75, env)});
    V_CALL(env->vars[0], runtime,
      upenv->vars[0],
      upenv->vars[2]);
    }
 }
}
__attribute__((used)) static void _V20Case1__V10_Dmap_D115_lambda74(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V20Case1__V10_Dmap_D115_lambda74" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case1__V10_Dmap_D115_lambda74, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // (letrec 1 ((close _V10_Dloop_D375_lambda76)) ((bruijn ##.loop.375 0 0) (bruijn ##.k.973 1 0) (bruijn ##.xs.373 1 2) (bruijn ##.ys.374 1 3)))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D375_lambda76, env)});
    V_CALL(env->vars[0], runtime,
      upenv->vars[0],
      upenv->vars[2],
      upenv->vars[3]);
    }
 }
}
__attribute__((used)) static void _V20Case2__V10_Dmap_D115_lambda74(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4) {
 static VDebugInfo dbg = { "_V20Case2__V10_Dmap_D115_lambda74" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case2__V10_Dmap_D115_lambda74, runtime, upenv, 5, argc, _var0, _var1, _var2, _var3, _var4) {
  struct { VEnv env; VWORD argv[5]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 5, 5, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  env->vars[4] = _var4;
  // (letrec 1 ((close _V10_Dloop_D382_lambda77)) ((bruijn ##.loop.382 0 0) (bruijn ##.k.982 1 0) (bruijn ##.xs.379 1 2) (bruijn ##.ys.380 1 3) (bruijn ##.zs.381 1 4)))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D382_lambda77, env)});
    V_CALL(env->vars[0], runtime,
      upenv->vars[0],
      upenv->vars[2],
      upenv->vars[3],
      upenv->vars[4]);
    }
 }
}
__attribute__((used)) static void _V20Case3__V10_Dmap_D115_lambda74(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, ...) {
 static VDebugInfo dbg = { "_V20Case3__V10_Dmap_D115_lambda74" };
 VRecordCall2(runtime, &dbg);
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 2, argc, _var1);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case3__V10_Dmap_D115_lambda74, runtime, upenv, 2, argc, _var0, _var1, _varargs) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _varargs;
  // (letrec 1 ((close _V10_Dloop_D388_lambda78)) ((bruijn ##.loop.388 0 0) (bruijn ##.k.993 1 0) (bruijn ##.lsts.387 1 2)))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D388_lambda78, env)});
    V_CALL(env->vars[0], runtime,
      upenv->vars[0],
      upenv->vars[2]);
    }
 }
}
void _V10_Dmap_D115_lambda74(VRuntime * runtime, VEnv * upenv, int argc, ...);
asm(
".intel_syntax noprefix\n"
#ifdef __linux__
".type _V10_Dmap_D115_lambda74, @function\n"
#endif
"_V10_Dmap_D115_lambda74:\n"
"    cmp " ARGC_REG ", 3\n"
"    je _V20Case0__V10_Dmap_D115_lambda74\n"
"    cmp " ARGC_REG ", 4\n"
"    je _V20Case1__V10_Dmap_D115_lambda74\n"
"    cmp " ARGC_REG ", 5\n"
"    je _V20Case2__V10_Dmap_D115_lambda74\n"
"    cmp " ARGC_REG ", 2\n"
"    jge _V20Case3__V10_Dmap_D115_lambda74\n"
"    jmp _V20CaseError__V10_Dmap_D115_lambda74\n"
);
static void _V10_Dloop_D392_k159(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D392_k159" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D392_k159, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D392_k159, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.loop.392 2 0) (bruijn ##.k.1002 1 0) (##inline ##vcore.cdr (bruijn ##.xs.393 1 1)))
    V_CALL(upenv->up->vars[0], runtime,
      upenv->vars[0],
      VInlineCdr2(runtime,
        upenv->vars[1]));
 }
}
static void _V10_Dloop_D392_lambda80(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V10_Dloop_D392_lambda80" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D392_lambda80, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D392_lambda80, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##vcore.not (##inline ##vcore.null? (bruijn ##.xs.393 0 1))) ((bruijn ##.f.390 2 1) (close _V10_Dloop_D392_k159) (##inline ##vcore.car (bruijn ##.xs.393 0 1))) ((bruijn ##.k.1002 0 0) #f))
if(VDecodeBool(
VInlineNot2(runtime,
        VInlineNullP2(runtime,
        _var1)))) {
    V_CALL(upenv->up->vars[1], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D392_k159, env)}),
      VInlineCar2(runtime,
        _var1));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dloop_D397_k160(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D397_k160" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D397_k160, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D397_k160, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.loop.397 2 0) (bruijn ##.k.1009 1 0) (##inline ##vcore.cdr (bruijn ##.xs.398 1 1)) (##inline ##vcore.cdr (bruijn ##.ys.399 1 2)))
    V_CALL(upenv->up->vars[0], runtime,
      upenv->vars[0],
      VInlineCdr2(runtime,
        upenv->vars[1]),
      VInlineCdr2(runtime,
        upenv->vars[2]));
 }
}
static void _V10_Dloop_D397_lambda81(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V10_Dloop_D397_lambda81" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D397_lambda81, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D397_lambda81, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // (if (##inline ##vcore.not (##inline ##vcore.null? (bruijn ##.xs.398 0 1))) ((bruijn ##.f.394 2 1) (close _V10_Dloop_D397_k160) (##inline ##vcore.car (bruijn ##.xs.398 0 1)) (##inline ##vcore.car (bruijn ##.ys.399 0 2))) ((bruijn ##.k.1009 0 0) #f))
if(VDecodeBool(
VInlineNot2(runtime,
        VInlineNullP2(runtime,
        _var1)))) {
    V_CALL(upenv->up->vars[1], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D397_k160, env)}),
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
static void _V10_Dloop_D404_k161(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D404_k161" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D404_k161, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D404_k161, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.loop.404 2 0) (bruijn ##.k.1018 1 0) (##inline ##vcore.cdr (bruijn ##.xs.405 1 1)) (##inline ##vcore.cdr (bruijn ##.ys.406 1 2)) (##inline ##vcore.cdr (bruijn ##.zs.407 1 3)))
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
static void _V10_Dloop_D404_lambda82(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V10_Dloop_D404_lambda82" };
 VRecordCall2(runtime, &dbg);
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D404_lambda82, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D404_lambda82, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // (if (##inline ##vcore.not (##inline ##vcore.null? (bruijn ##.xs.405 0 1))) ((bruijn ##.f.400 2 1) (close _V10_Dloop_D404_k161) (##inline ##vcore.car (bruijn ##.xs.405 0 1)) (##inline ##vcore.car (bruijn ##.ys.406 0 2)) (##inline ##vcore.car (bruijn ##.zs.407 0 3))) ((bruijn ##.k.1018 0 0) #f))
if(VDecodeBool(
VInlineNot2(runtime,
        VInlineNullP2(runtime,
        _var1)))) {
    V_CALL(upenv->up->vars[1], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D404_k161, env)}),
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
static void _V10_Dloop_D410_k164(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D410_k164" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D410_k164, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D410_k164, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.loop.410 4 0) (bruijn ##.k.1029 3 0) (bruijn ##.x.1032 0 0))
    V_CALL(upenv->up->up->up->vars[0], runtime,
      upenv->up->up->vars[0],
      _var0);
 }
}
static void _V10_Dloop_D410_k163(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D410_k163" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D410_k163, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D410_k163, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.map.115 5 104) (close _V10_Dloop_D410_k164) (##intrinsic ##vcore.cdr) (bruijn ##.lsts.411 2 1))
    V_CALL(VGetArg(upenv, 5-1, 104), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D410_k164, env)}),
      _V40_V10vcore_Dcdr,
      upenv->up->vars[1]);
 }
}
static void _V10_Dloop_D410_k162(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D410_k162" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D410_k162, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D410_k162, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.apply.183 4 172) (close _V10_Dloop_D410_k163) (bruijn ##.f.408 3 1) (bruijn ##.x.1033 0 0))
    V_CALL(upenv->up->up->up->vars[172], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D410_k163, env)}),
      upenv->up->up->vars[1],
      _var0);
 }
}
static void _V10_Dloop_D410_lambda83(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V10_Dloop_D410_lambda83" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D410_lambda83, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D410_lambda83, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##vcore.not (##inline ##vcore.null? (##inline ##vcore.car (bruijn ##.lsts.411 0 1)))) ((bruijn ##.map.115 3 104) (close _V10_Dloop_D410_k162) (##intrinsic ##vcore.car) (bruijn ##.lsts.411 0 1)) ((bruijn ##.k.1029 0 0) #f))
if(VDecodeBool(
VInlineNot2(runtime,
        VInlineNullP2(runtime,
        VInlineCar2(runtime,
        _var1))))) {
    V_CALL(upenv->up->up->vars[104], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D410_k162, env)}),
      _V40_V10vcore_Dcar,
      _var1);
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
__attribute__((used)) static void _V20CaseError__V10_Dfor__each_D116_lambda79(VRuntime * runtime, VEnv * upenv, int argc, ...) {
 // (_V10_Dfor__each_D116_lambda79 #t (3 (letrec 1 ((close _V10_Dloop_D392_lambda80)) ((bruijn ##.loop.392 0 0) (bruijn ##.k.1001 1 0) (bruijn ##.xs.391 1 2)))) (4 (letrec 1 ((close _V10_Dloop_D397_lambda81)) ((bruijn ##.loop.397 0 0) (bruijn ##.k.1008 1 0) (bruijn ##.xs.395 1 2) (bruijn ##.ys.396 1 3)))) (5 (letrec 1 ((close _V10_Dloop_D404_lambda82)) ((bruijn ##.loop.404 0 0) (bruijn ##.k.1017 1 0) (bruijn ##.xs.401 1 2) (bruijn ##.ys.402 1 3) (bruijn ##.zs.403 1 4)))) (2 + (letrec 1 ((close _V10_Dloop_D410_lambda83)) ((bruijn ##.loop.410 0 0) (bruijn ##.k.1028 1 0) (bruijn ##.lsts.409 1 2)))))
 VErrorC(runtime, "Not enough arguments to _V10_Dfor__each_D116_lambda79, got ~D~N"
 "-- expected 3~N"
 "-- expected 4~N"
 "-- expected 5~N"
 "-- expected 2 or more~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V10_Dfor__each_D116_lambda79(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V20Case0__V10_Dfor__each_D116_lambda79" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case0__V10_Dfor__each_D116_lambda79, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // (letrec 1 ((close _V10_Dloop_D392_lambda80)) ((bruijn ##.loop.392 0 0) (bruijn ##.k.1001 1 0) (bruijn ##.xs.391 1 2)))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D392_lambda80, env)});
    V_CALL(env->vars[0], runtime,
      upenv->vars[0],
      upenv->vars[2]);
    }
 }
}
__attribute__((used)) static void _V20Case1__V10_Dfor__each_D116_lambda79(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V20Case1__V10_Dfor__each_D116_lambda79" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case1__V10_Dfor__each_D116_lambda79, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // (letrec 1 ((close _V10_Dloop_D397_lambda81)) ((bruijn ##.loop.397 0 0) (bruijn ##.k.1008 1 0) (bruijn ##.xs.395 1 2) (bruijn ##.ys.396 1 3)))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D397_lambda81, env)});
    V_CALL(env->vars[0], runtime,
      upenv->vars[0],
      upenv->vars[2],
      upenv->vars[3]);
    }
 }
}
__attribute__((used)) static void _V20Case2__V10_Dfor__each_D116_lambda79(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4) {
 static VDebugInfo dbg = { "_V20Case2__V10_Dfor__each_D116_lambda79" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case2__V10_Dfor__each_D116_lambda79, runtime, upenv, 5, argc, _var0, _var1, _var2, _var3, _var4) {
  struct { VEnv env; VWORD argv[5]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 5, 5, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  env->vars[4] = _var4;
  // (letrec 1 ((close _V10_Dloop_D404_lambda82)) ((bruijn ##.loop.404 0 0) (bruijn ##.k.1017 1 0) (bruijn ##.xs.401 1 2) (bruijn ##.ys.402 1 3) (bruijn ##.zs.403 1 4)))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D404_lambda82, env)});
    V_CALL(env->vars[0], runtime,
      upenv->vars[0],
      upenv->vars[2],
      upenv->vars[3],
      upenv->vars[4]);
    }
 }
}
__attribute__((used)) static void _V20Case3__V10_Dfor__each_D116_lambda79(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, ...) {
 static VDebugInfo dbg = { "_V20Case3__V10_Dfor__each_D116_lambda79" };
 VRecordCall2(runtime, &dbg);
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 2, argc, _var1);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case3__V10_Dfor__each_D116_lambda79, runtime, upenv, 2, argc, _var0, _var1, _varargs) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _varargs;
  // (letrec 1 ((close _V10_Dloop_D410_lambda83)) ((bruijn ##.loop.410 0 0) (bruijn ##.k.1028 1 0) (bruijn ##.lsts.409 1 2)))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D410_lambda83, env)});
    V_CALL(env->vars[0], runtime,
      upenv->vars[0],
      upenv->vars[2]);
    }
 }
}
void _V10_Dfor__each_D116_lambda79(VRuntime * runtime, VEnv * upenv, int argc, ...);
asm(
".intel_syntax noprefix\n"
#ifdef __linux__
".type _V10_Dfor__each_D116_lambda79, @function\n"
#endif
"_V10_Dfor__each_D116_lambda79:\n"
"    cmp " ARGC_REG ", 3\n"
"    je _V20Case0__V10_Dfor__each_D116_lambda79\n"
"    cmp " ARGC_REG ", 4\n"
"    je _V20Case1__V10_Dfor__each_D116_lambda79\n"
"    cmp " ARGC_REG ", 5\n"
"    je _V20Case2__V10_Dfor__each_D116_lambda79\n"
"    cmp " ARGC_REG ", 2\n"
"    jge _V20Case3__V10_Dfor__each_D116_lambda79\n"
"    jmp _V20CaseError__V10_Dfor__each_D116_lambda79\n"
);
static void _V10_Dloop_D415_k168(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D415_k168" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D415_k168, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D415_k168, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.kons.412 6 1) (bruijn ##.k.1037 4 0) (bruijn ##.x.1039 2 0) (bruijn ##.x.1040 0 0))
    V_CALL(VGetArg(upenv, 6-1, 1), runtime,
      upenv->up->up->up->vars[0],
      upenv->up->vars[0],
      _var0);
 }
}
static void _V10_Dloop_D415_k167(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D415_k167" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D415_k167, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D415_k167, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.loop.415 4 0) (close _V10_Dloop_D415_k168) (bruijn ##.x.1041 0 0))
    V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D415_k168, env)}),
      _var0);
 }
}
static void _V10_Dloop_D415_k166(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D415_k166" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D415_k166, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D415_k166, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cdr.76 5 65) (close _V10_Dloop_D415_k167) (bruijn ##.ks.416 2 1))
    V_CALL(VGetArg(upenv, 5-1, 65), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D415_k167, env)}),
      upenv->up->vars[1]);
 }
}
static void _V10_Dloop_D415_k165(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D415_k165" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D415_k165, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D415_k165, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1038 0 0) ((bruijn ##.k.1037 1 0) (bruijn ##.knil.413 3 2)) ((bruijn ##.car.75 4 64) (close _V10_Dloop_D415_k166) (bruijn ##.ks.416 1 1)))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->vars[0], runtime,
      upenv->up->up->vars[2]);
} else {
    V_CALL(upenv->up->up->up->vars[64], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D415_k166, env)}),
      upenv->vars[1]);
}
 }
}
static void _V10_Dloop_D415_lambda85(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V10_Dloop_D415_lambda85" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D415_lambda85, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D415_lambda85, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##.null?.11 3 0) (close _V10_Dloop_D415_k165) (bruijn ##.ks.416 0 1))
    V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D415_k165, env)}),
      _var1);
 }
}
static void _V10_Dfold__right_D117_lambda84(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V10_Dfold__right_D117_lambda84" };
 VRecordCall2(runtime, &dbg);
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V10_Dfold__right_D117_lambda84, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dfold__right_D117_lambda84, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // (letrec 1 ((close _V10_Dloop_D415_lambda85)) ((bruijn ##.loop.415 0 0) (bruijn ##.k.1036 1 0) (bruijn ##.ks.414 1 3)))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D415_lambda85, env)});
    V_CALL(env->vars[0], runtime,
      upenv->vars[0],
      upenv->vars[3]);
    }
 }
}
static void _V10_Dloop_D420_k169(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D420_k169" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D420_k169, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D420_k169, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.k.1045 1 0) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.a.421 1 1)) (bruijn ##.x.1048 0 0)))
    V_CALL(upenv->vars[0], runtime,
      VInlineCons2(runtime,
        VInlineCar2(runtime,
        upenv->vars[1]),
        _var0));
 }
}
static void _V10_Dloop_D420_lambda87(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V10_Dloop_D420_lambda87" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D420_lambda87, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D420_lambda87, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (if (##inline ##vcore.null? (bruijn ##.a.421 0 1)) ((bruijn ##.k.1045 0 0) (bruijn ##.b.419 2 2)) ((bruijn ##.loop.420 1 0) (close _V10_Dloop_D420_k169) (##inline ##vcore.cdr (bruijn ##.a.421 0 1))))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var1))) {
    V_CALL(_var0, runtime,
      upenv->up->vars[2]);
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D420_k169, env)}),
      VInlineCdr2(runtime,
        _var1));
}
 }
}
static void _V10_Dappend_D118_k170(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dappend_D118_k170" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dappend_D118_k170, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dappend_D118_k170, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.append.118 2 107) (bruijn ##.k.1050 1 0) (bruijn ##.a.422 1 1) (bruijn ##.x.1051 0 0))
    V_CALL(upenv->up->vars[107], runtime,
      upenv->vars[0],
      upenv->vars[1],
      _var0);
 }
}
static void _V10_Dappend_D118_k172(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dappend_D118_k172" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dappend_D118_k172, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dappend_D118_k172, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.append.118 3 107) (bruijn ##.k.1052 2 0) (bruijn ##.a.425 2 1) (bruijn ##.x.1053 0 0))
    V_CALL(upenv->up->up->vars[107], runtime,
      upenv->up->vars[0],
      upenv->up->vars[1],
      _var0);
 }
}
static void _V10_Dappend_D118_k171(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dappend_D118_k171" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dappend_D118_k171, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dappend_D118_k171, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.append.118 2 107) (close _V10_Dappend_D118_k172) (bruijn ##.b.426 1 2) (bruijn ##.x.1054 0 0))
    V_CALL(upenv->up->vars[107], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dappend_D118_k172, env)}),
      upenv->vars[2],
      _var0);
 }
}
__attribute__((used)) static void _V20CaseError__V10_Dappend_D118_lambda86(VRuntime * runtime, VEnv * upenv, int argc, ...) {
 // (_V10_Dappend_D118_lambda86 #t (1 ((bruijn ##.k.1042 0 0) '())) (2 ((bruijn ##.k.1043 0 0) (bruijn ##.a.417 0 1))) (3 (letrec 1 ((close _V10_Dloop_D420_lambda87)) ((bruijn ##.loop.420 0 0) (bruijn ##.k.1044 1 0) (bruijn ##.a.418 1 1)))) (4 ((bruijn ##.append.118 1 107) (close _V10_Dappend_D118_k170) (bruijn ##.b.423 0 2) (bruijn ##.c.424 0 3))) (5 ((bruijn ##.append.118 1 107) (close _V10_Dappend_D118_k171) (bruijn ##.c.427 0 3) (bruijn ##.d.428 0 4))) (1 + ((bruijn ##.fold-right.117 1 106) (bruijn ##.k.1055 0 0) (bruijn ##.append.118 1 107) '() (bruijn ##.lsts.429 0 1))))
 VErrorC(runtime, "Not enough arguments to _V10_Dappend_D118_lambda86, got ~D~N"
 "-- expected 1~N"
 "-- expected 2~N"
 "-- expected 3~N"
 "-- expected 4~N"
 "-- expected 5~N"
 "-- expected 1 or more~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V10_Dappend_D118_lambda86(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V20Case0__V10_Dappend_D118_lambda86" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case0__V10_Dappend_D118_lambda86, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.k.1042 0 0) '())
    V_CALL(_var0, runtime,
      VNULL);
 }
}
__attribute__((used)) static void _V20Case1__V10_Dappend_D118_lambda86(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V20Case1__V10_Dappend_D118_lambda86" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case1__V10_Dappend_D118_lambda86, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##.k.1043 0 0) (bruijn ##.a.417 0 1))
    V_CALL(_var0, runtime,
      _var1);
 }
}
__attribute__((used)) static void _V20Case2__V10_Dappend_D118_lambda86(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V20Case2__V10_Dappend_D118_lambda86" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case2__V10_Dappend_D118_lambda86, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // (letrec 1 ((close _V10_Dloop_D420_lambda87)) ((bruijn ##.loop.420 0 0) (bruijn ##.k.1044 1 0) (bruijn ##.a.418 1 1)))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D420_lambda87, env)});
    V_CALL(env->vars[0], runtime,
      upenv->vars[0],
      upenv->vars[1]);
    }
 }
}
__attribute__((used)) static void _V20Case3__V10_Dappend_D118_lambda86(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V20Case3__V10_Dappend_D118_lambda86" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case3__V10_Dappend_D118_lambda86, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // ((bruijn ##.append.118 1 107) (close _V10_Dappend_D118_k170) (bruijn ##.b.423 0 2) (bruijn ##.c.424 0 3))
    V_CALL(upenv->vars[107], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dappend_D118_k170, env)}),
      _var2,
      _var3);
 }
}
__attribute__((used)) static void _V20Case4__V10_Dappend_D118_lambda86(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4) {
 static VDebugInfo dbg = { "_V20Case4__V10_Dappend_D118_lambda86" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case4__V10_Dappend_D118_lambda86, runtime, upenv, 5, argc, _var0, _var1, _var2, _var3, _var4) {
  struct { VEnv env; VWORD argv[5]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 5, 5, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  env->vars[4] = _var4;
  // ((bruijn ##.append.118 1 107) (close _V10_Dappend_D118_k171) (bruijn ##.c.427 0 3) (bruijn ##.d.428 0 4))
    V_CALL(upenv->vars[107], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dappend_D118_k171, env)}),
      _var3,
      _var4);
 }
}
__attribute__((used)) static void _V20Case5__V10_Dappend_D118_lambda86(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, ...) {
 static VDebugInfo dbg = { "_V20Case5__V10_Dappend_D118_lambda86" };
 VRecordCall2(runtime, &dbg);
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 1, argc, _var0);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case5__V10_Dappend_D118_lambda86, runtime, upenv, 1, argc, _var0, _varargs) {
  // ((bruijn ##.fold-right.117 1 106) (bruijn ##.k.1055 0 0) (bruijn ##.append.118 1 107) '() (bruijn ##.lsts.429 0 1))
    V_CALL(upenv->vars[106], runtime,
      _var0,
      upenv->vars[107],
      VNULL,
      _varargs);
 }
}
void _V10_Dappend_D118_lambda86(VRuntime * runtime, VEnv * upenv, int argc, ...);
asm(
".intel_syntax noprefix\n"
#ifdef __linux__
".type _V10_Dappend_D118_lambda86, @function\n"
#endif
"_V10_Dappend_D118_lambda86:\n"
"    cmp " ARGC_REG ", 1\n"
"    je _V20Case0__V10_Dappend_D118_lambda86\n"
"    cmp " ARGC_REG ", 2\n"
"    je _V20Case1__V10_Dappend_D118_lambda86\n"
"    cmp " ARGC_REG ", 3\n"
"    je _V20Case2__V10_Dappend_D118_lambda86\n"
"    cmp " ARGC_REG ", 4\n"
"    je _V20Case3__V10_Dappend_D118_lambda86\n"
"    cmp " ARGC_REG ", 5\n"
"    je _V20Case4__V10_Dappend_D118_lambda86\n"
"    cmp " ARGC_REG ", 1\n"
"    jge _V20Case5__V10_Dappend_D118_lambda86\n"
"    jmp _V20CaseError__V10_Dappend_D118_lambda86\n"
);
static void _V10_Diter_D431_k176(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Diter_D431_k176" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D431_k176, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter_D431_k176, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.iter.431 5 0) (bruijn ##.k.1057 4 0) (bruijn ##.x.1059 1 0) (bruijn ##.x.1060 0 0))
    V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      upenv->up->up->up->vars[0],
      upenv->vars[0],
      _var0);
 }
}
static void _V10_Diter_D431_k175(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Diter_D431_k175" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D431_k175, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter_D431_k175, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cdr.76 6 65) (close _V10_Diter_D431_k176) (bruijn ##.rest.433 3 2))
    V_CALL(VGetArg(upenv, 6-1, 65), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D431_k176, env)}),
      upenv->up->up->vars[2]);
 }
}
static void _V10_Diter_D431_k174(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Diter_D431_k174" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D431_k174, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter_D431_k174, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cons.74 5 63) (close _V10_Diter_D431_k175) (bruijn ##.x.1061 0 0) (bruijn ##.acc.432 2 1))
    V_CALL(VGetArg(upenv, 5-1, 63), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D431_k175, env)}),
      _var0,
      upenv->up->vars[1]);
 }
}
static void _V10_Diter_D431_k173(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Diter_D431_k173" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D431_k173, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter_D431_k173, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1058 0 0) ((bruijn ##.k.1057 1 0) (bruijn ##.acc.432 1 1)) ((bruijn ##.car.75 4 64) (close _V10_Diter_D431_k174) (bruijn ##.rest.433 1 2)))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->vars[0], runtime,
      upenv->vars[1]);
} else {
    V_CALL(upenv->up->up->up->vars[64], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D431_k174, env)}),
      upenv->vars[2]);
}
 }
}
static void _V10_Diter_D431_lambda89(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V10_Diter_D431_lambda89" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D431_lambda89, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter_D431_lambda89, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn ##.null?.11 3 0) (close _V10_Diter_D431_k173) (bruijn ##.rest.433 0 2))
    V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D431_k173, env)}),
      _var2);
 }
}
static void _V10_Dreverse_D119_lambda88(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V10_Dreverse_D119_lambda88" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dreverse_D119_lambda88, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dreverse_D119_lambda88, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (letrec 1 ((close _V10_Diter_D431_lambda89)) ((bruijn ##.iter.431 0 0) (bruijn ##.k.1056 1 0) '() (bruijn ##.lst.430 1 1)))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D431_lambda89, env)});
    V_CALL(env->vars[0], runtime,
      upenv->vars[0],
      VNULL,
      upenv->vars[1]);
    }
 }
}
static void _V10_Dmemq_D120_k180(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dmemq_D120_k180" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmemq_D120_k180, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dmemq_D120_k180, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.memq.120 5 109) (bruijn ##.k.1062 4 0) (bruijn ##.x.434 4 1) (bruijn ##.x.1065 0 0))
    V_CALL(VGetArg(upenv, 5-1, 109), runtime,
      upenv->up->up->up->vars[0],
      upenv->up->up->up->vars[1],
      _var0);
 }
}
static void _V10_Dmemq_D120_k179(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dmemq_D120_k179" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmemq_D120_k179, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dmemq_D120_k179, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1064 0 0) ((bruijn ##.k.1062 3 0) (bruijn ##.lst.435 3 2)) ((bruijn ##.cdr.76 4 65) (close _V10_Dmemq_D120_k180) (bruijn ##.lst.435 3 2)))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->up->up->vars[0], runtime,
      upenv->up->up->vars[2]);
} else {
    V_CALL(upenv->up->up->up->vars[65], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmemq_D120_k180, env)}),
      upenv->up->up->vars[2]);
}
 }
}
static void _V10_Dmemq_D120_k178(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dmemq_D120_k178" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmemq_D120_k178, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dmemq_D120_k178, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.eq?.26 3 15) (close _V10_Dmemq_D120_k179) (bruijn ##.x.434 2 1) (bruijn ##.x.1066 0 0))
    V_CALL(upenv->up->up->vars[15], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmemq_D120_k179, env)}),
      upenv->up->vars[1],
      _var0);
 }
}
static void _V10_Dmemq_D120_k177(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dmemq_D120_k177" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmemq_D120_k177, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dmemq_D120_k177, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1063 0 0) ((bruijn ##.k.1062 1 0) #f) ((bruijn ##.car.75 2 64) (close _V10_Dmemq_D120_k178) (bruijn ##.lst.435 1 2)))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
} else {
    V_CALL(upenv->up->vars[64], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmemq_D120_k178, env)}),
      upenv->vars[2]);
}
 }
}
static void _V10_Dmemq_D120_lambda90(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V10_Dmemq_D120_lambda90" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmemq_D120_lambda90, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dmemq_D120_lambda90, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn ##.null?.11 1 0) (close _V10_Dmemq_D120_k177) (bruijn ##.lst.435 0 2))
    V_CALL(upenv->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmemq_D120_k177, env)}),
      _var2);
 }
}
static void _V10_Dmemv_D121_k184(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dmemv_D121_k184" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmemv_D121_k184, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dmemv_D121_k184, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.memv.121 5 110) (bruijn ##.k.1067 4 0) (bruijn ##.x.436 4 1) (bruijn ##.x.1070 0 0))
    V_CALL(VGetArg(upenv, 5-1, 110), runtime,
      upenv->up->up->up->vars[0],
      upenv->up->up->up->vars[1],
      _var0);
 }
}
static void _V10_Dmemv_D121_k183(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dmemv_D121_k183" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmemv_D121_k183, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dmemv_D121_k183, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1069 0 0) ((bruijn ##.k.1067 3 0) (bruijn ##.lst.437 3 2)) ((bruijn ##.cdr.76 4 65) (close _V10_Dmemv_D121_k184) (bruijn ##.lst.437 3 2)))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->up->up->vars[0], runtime,
      upenv->up->up->vars[2]);
} else {
    V_CALL(upenv->up->up->up->vars[65], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmemv_D121_k184, env)}),
      upenv->up->up->vars[2]);
}
 }
}
static void _V10_Dmemv_D121_k182(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dmemv_D121_k182" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmemv_D121_k182, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dmemv_D121_k182, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.eqv?.29 3 18) (close _V10_Dmemv_D121_k183) (bruijn ##.x.436 2 1) (bruijn ##.x.1071 0 0))
    V_CALL(upenv->up->up->vars[18], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmemv_D121_k183, env)}),
      upenv->up->vars[1],
      _var0);
 }
}
static void _V10_Dmemv_D121_k181(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dmemv_D121_k181" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmemv_D121_k181, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dmemv_D121_k181, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1068 0 0) ((bruijn ##.k.1067 1 0) #f) ((bruijn ##.car.75 2 64) (close _V10_Dmemv_D121_k182) (bruijn ##.lst.437 1 2)))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
} else {
    V_CALL(upenv->up->vars[64], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmemv_D121_k182, env)}),
      upenv->vars[2]);
}
 }
}
static void _V10_Dmemv_D121_lambda91(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V10_Dmemv_D121_lambda91" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmemv_D121_lambda91, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dmemv_D121_lambda91, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn ##.null?.11 1 0) (close _V10_Dmemv_D121_k181) (bruijn ##.lst.437 0 2))
    V_CALL(upenv->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmemv_D121_k181, env)}),
      _var2);
 }
}
static void _V10_Dmember_D122_k188(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dmember_D122_k188" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmember_D122_k188, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dmember_D122_k188, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.member.122 5 111) (bruijn ##.k.1073 4 0) (bruijn ##.x.440 4 1) (bruijn ##.x.1076 0 0))
    V_CALL(VGetArg(upenv, 5-1, 111), runtime,
      upenv->up->up->up->vars[0],
      upenv->up->up->up->vars[1],
      _var0);
 }
}
static void _V10_Dmember_D122_k187(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dmember_D122_k187" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmember_D122_k187, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dmember_D122_k187, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1075 0 0) ((bruijn ##.k.1073 3 0) (bruijn ##.lst.441 3 2)) ((bruijn ##.cdr.76 4 65) (close _V10_Dmember_D122_k188) (bruijn ##.lst.441 3 2)))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->up->up->vars[0], runtime,
      upenv->up->up->vars[2]);
} else {
    V_CALL(upenv->up->up->up->vars[65], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmember_D122_k188, env)}),
      upenv->up->up->vars[2]);
}
 }
}
static void _V10_Dmember_D122_k186(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dmember_D122_k186" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmember_D122_k186, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dmember_D122_k186, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.=.442 2 3) (close _V10_Dmember_D122_k187) (bruijn ##.x.440 2 1) (bruijn ##.x.1077 0 0))
    V_CALL(upenv->up->vars[3], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmember_D122_k187, env)}),
      upenv->up->vars[1],
      _var0);
 }
}
static void _V10_Dmember_D122_k185(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dmember_D122_k185" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmember_D122_k185, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dmember_D122_k185, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1074 0 0) ((bruijn ##.k.1073 1 0) #f) ((bruijn ##.car.75 2 64) (close _V10_Dmember_D122_k186) (bruijn ##.lst.441 1 2)))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
} else {
    V_CALL(upenv->up->vars[64], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmember_D122_k186, env)}),
      upenv->vars[2]);
}
 }
}
__attribute__((used)) static void _V20CaseError__V10_Dmember_D122_lambda92(VRuntime * runtime, VEnv * upenv, int argc, ...) {
 // (_V10_Dmember_D122_lambda92 #t (3 ((bruijn ##.member.122 1 111) (bruijn ##.k.1072 0 0) (bruijn ##.x.438 0 1) (bruijn ##.lst.439 0 2) (bruijn ##.equal?.32 1 21))) (4 ((bruijn ##.null?.11 1 0) (close _V10_Dmember_D122_k185) (bruijn ##.lst.441 0 2))))
 VErrorC(runtime, "Not enough arguments to _V10_Dmember_D122_lambda92, got ~D~N"
 "-- expected 3~N"
 "-- expected 4~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V10_Dmember_D122_lambda92(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V20Case0__V10_Dmember_D122_lambda92" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case0__V10_Dmember_D122_lambda92, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  // ((bruijn ##.member.122 1 111) (bruijn ##.k.1072 0 0) (bruijn ##.x.438 0 1) (bruijn ##.lst.439 0 2) (bruijn ##.equal?.32 1 21))
    V_CALL(upenv->vars[111], runtime,
      _var0,
      _var1,
      _var2,
      upenv->vars[21]);
 }
}
__attribute__((used)) static void _V20Case1__V10_Dmember_D122_lambda92(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V20Case1__V10_Dmember_D122_lambda92" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case1__V10_Dmember_D122_lambda92, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // ((bruijn ##.null?.11 1 0) (close _V10_Dmember_D122_k185) (bruijn ##.lst.441 0 2))
    V_CALL(upenv->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmember_D122_k185, env)}),
      _var2);
 }
}
void _V10_Dmember_D122_lambda92(VRuntime * runtime, VEnv * upenv, int argc, ...);
asm(
".intel_syntax noprefix\n"
#ifdef __linux__
".type _V10_Dmember_D122_lambda92, @function\n"
#endif
"_V10_Dmember_D122_lambda92:\n"
"    cmp " ARGC_REG ", 3\n"
"    je _V20Case0__V10_Dmember_D122_lambda92\n"
"    cmp " ARGC_REG ", 4\n"
"    je _V20Case1__V10_Dmember_D122_lambda92\n"
"    jmp _V20CaseError__V10_Dmember_D122_lambda92\n"
);
static void _V10_Dassq_D123_k192(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dassq_D123_k192" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dassq_D123_k192, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dassq_D123_k192, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.assq.123 5 112) (bruijn ##.k.1078 4 0) (bruijn ##.x.443 4 1) (bruijn ##.x.1081 0 0))
    V_CALL(VGetArg(upenv, 5-1, 112), runtime,
      upenv->up->up->up->vars[0],
      upenv->up->up->up->vars[1],
      _var0);
 }
}
static void _V10_Dassq_D123_k191(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dassq_D123_k191" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dassq_D123_k191, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dassq_D123_k191, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1080 0 0) ((bruijn ##.car.75 4 64) (bruijn ##.k.1078 3 0) (bruijn ##.alst.444 3 2)) ((bruijn ##.cdr.76 4 65) (close _V10_Dassq_D123_k192) (bruijn ##.alst.444 3 2)))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->up->up->up->vars[64], runtime,
      upenv->up->up->vars[0],
      upenv->up->up->vars[2]);
} else {
    V_CALL(upenv->up->up->up->vars[65], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dassq_D123_k192, env)}),
      upenv->up->up->vars[2]);
}
 }
}
static void _V10_Dassq_D123_k190(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dassq_D123_k190" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dassq_D123_k190, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dassq_D123_k190, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.eq?.26 3 15) (close _V10_Dassq_D123_k191) (bruijn ##.x.443 2 1) (bruijn ##.x.1082 0 0))
    V_CALL(upenv->up->up->vars[15], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dassq_D123_k191, env)}),
      upenv->up->vars[1],
      _var0);
 }
}
static void _V10_Dassq_D123_k189(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dassq_D123_k189" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dassq_D123_k189, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dassq_D123_k189, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1079 0 0) ((bruijn ##.k.1078 1 0) #f) ((bruijn ##.caar.79 2 68) (close _V10_Dassq_D123_k190) (bruijn ##.alst.444 1 2)))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
} else {
    V_CALL(upenv->up->vars[68], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dassq_D123_k190, env)}),
      upenv->vars[2]);
}
 }
}
static void _V10_Dassq_D123_lambda93(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V10_Dassq_D123_lambda93" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dassq_D123_lambda93, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dassq_D123_lambda93, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn ##.null?.11 1 0) (close _V10_Dassq_D123_k189) (bruijn ##.alst.444 0 2))
    V_CALL(upenv->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dassq_D123_k189, env)}),
      _var2);
 }
}
static void _V10_Dassv_D124_k196(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dassv_D124_k196" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dassv_D124_k196, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dassv_D124_k196, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.assv.124 5 113) (bruijn ##.k.1083 4 0) (bruijn ##.x.445 4 1) (bruijn ##.x.1086 0 0))
    V_CALL(VGetArg(upenv, 5-1, 113), runtime,
      upenv->up->up->up->vars[0],
      upenv->up->up->up->vars[1],
      _var0);
 }
}
static void _V10_Dassv_D124_k195(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dassv_D124_k195" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dassv_D124_k195, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dassv_D124_k195, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1085 0 0) ((bruijn ##.car.75 4 64) (bruijn ##.k.1083 3 0) (bruijn ##.alst.446 3 2)) ((bruijn ##.cdr.76 4 65) (close _V10_Dassv_D124_k196) (bruijn ##.alst.446 3 2)))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->up->up->up->vars[64], runtime,
      upenv->up->up->vars[0],
      upenv->up->up->vars[2]);
} else {
    V_CALL(upenv->up->up->up->vars[65], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dassv_D124_k196, env)}),
      upenv->up->up->vars[2]);
}
 }
}
static void _V10_Dassv_D124_k194(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dassv_D124_k194" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dassv_D124_k194, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dassv_D124_k194, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.eqv?.29 3 18) (close _V10_Dassv_D124_k195) (bruijn ##.x.445 2 1) (bruijn ##.x.1087 0 0))
    V_CALL(upenv->up->up->vars[18], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dassv_D124_k195, env)}),
      upenv->up->vars[1],
      _var0);
 }
}
static void _V10_Dassv_D124_k193(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dassv_D124_k193" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dassv_D124_k193, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dassv_D124_k193, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1084 0 0) ((bruijn ##.k.1083 1 0) #f) ((bruijn ##.caar.79 2 68) (close _V10_Dassv_D124_k194) (bruijn ##.alst.446 1 2)))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
} else {
    V_CALL(upenv->up->vars[68], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dassv_D124_k194, env)}),
      upenv->vars[2]);
}
 }
}
static void _V10_Dassv_D124_lambda94(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V10_Dassv_D124_lambda94" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dassv_D124_lambda94, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dassv_D124_lambda94, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn ##.null?.11 1 0) (close _V10_Dassv_D124_k193) (bruijn ##.alst.446 0 2))
    V_CALL(upenv->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dassv_D124_k193, env)}),
      _var2);
 }
}
static void _V10_Dassoc_D125_k200(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dassoc_D125_k200" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dassoc_D125_k200, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dassoc_D125_k200, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.assoc.125 5 114) (bruijn ##.k.1089 4 0) (bruijn ##.x.449 4 1) (bruijn ##.x.1092 0 0))
    V_CALL(VGetArg(upenv, 5-1, 114), runtime,
      upenv->up->up->up->vars[0],
      upenv->up->up->up->vars[1],
      _var0);
 }
}
static void _V10_Dassoc_D125_k199(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dassoc_D125_k199" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dassoc_D125_k199, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dassoc_D125_k199, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1091 0 0) ((bruijn ##.car.75 4 64) (bruijn ##.k.1089 3 0) (bruijn ##.alst.450 3 2)) ((bruijn ##.cdr.76 4 65) (close _V10_Dassoc_D125_k200) (bruijn ##.alst.450 3 2)))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->up->up->up->vars[64], runtime,
      upenv->up->up->vars[0],
      upenv->up->up->vars[2]);
} else {
    V_CALL(upenv->up->up->up->vars[65], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dassoc_D125_k200, env)}),
      upenv->up->up->vars[2]);
}
 }
}
static void _V10_Dassoc_D125_k198(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dassoc_D125_k198" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dassoc_D125_k198, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dassoc_D125_k198, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.=.451 2 3) (close _V10_Dassoc_D125_k199) (bruijn ##.x.449 2 1) (bruijn ##.x.1093 0 0))
    V_CALL(upenv->up->vars[3], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dassoc_D125_k199, env)}),
      upenv->up->vars[1],
      _var0);
 }
}
static void _V10_Dassoc_D125_k197(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dassoc_D125_k197" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dassoc_D125_k197, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dassoc_D125_k197, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1090 0 0) ((bruijn ##.k.1089 1 0) #f) ((bruijn ##.caar.79 2 68) (close _V10_Dassoc_D125_k198) (bruijn ##.alst.450 1 2)))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
} else {
    V_CALL(upenv->up->vars[68], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dassoc_D125_k198, env)}),
      upenv->vars[2]);
}
 }
}
__attribute__((used)) static void _V20CaseError__V10_Dassoc_D125_lambda95(VRuntime * runtime, VEnv * upenv, int argc, ...) {
 // (_V10_Dassoc_D125_lambda95 #t (3 ((bruijn ##.assoc.125 1 114) (bruijn ##.k.1088 0 0) (bruijn ##.x.447 0 1) (bruijn ##.alst.448 0 2) (bruijn ##.equal?.32 1 21))) (4 ((bruijn ##.null?.11 1 0) (close _V10_Dassoc_D125_k197) (bruijn ##.alst.450 0 2))))
 VErrorC(runtime, "Not enough arguments to _V10_Dassoc_D125_lambda95, got ~D~N"
 "-- expected 3~N"
 "-- expected 4~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V10_Dassoc_D125_lambda95(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V20Case0__V10_Dassoc_D125_lambda95" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case0__V10_Dassoc_D125_lambda95, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  // ((bruijn ##.assoc.125 1 114) (bruijn ##.k.1088 0 0) (bruijn ##.x.447 0 1) (bruijn ##.alst.448 0 2) (bruijn ##.equal?.32 1 21))
    V_CALL(upenv->vars[114], runtime,
      _var0,
      _var1,
      _var2,
      upenv->vars[21]);
 }
}
__attribute__((used)) static void _V20Case1__V10_Dassoc_D125_lambda95(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V20Case1__V10_Dassoc_D125_lambda95" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case1__V10_Dassoc_D125_lambda95, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // ((bruijn ##.null?.11 1 0) (close _V10_Dassoc_D125_k197) (bruijn ##.alst.450 0 2))
    V_CALL(upenv->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dassoc_D125_k197, env)}),
      _var2);
 }
}
void _V10_Dassoc_D125_lambda95(VRuntime * runtime, VEnv * upenv, int argc, ...);
asm(
".intel_syntax noprefix\n"
#ifdef __linux__
".type _V10_Dassoc_D125_lambda95, @function\n"
#endif
"_V10_Dassoc_D125_lambda95:\n"
"    cmp " ARGC_REG ", 3\n"
"    je _V20Case0__V10_Dassoc_D125_lambda95\n"
"    cmp " ARGC_REG ", 4\n"
"    je _V20Case1__V10_Dassoc_D125_lambda95\n"
"    jmp _V20CaseError__V10_Dassoc_D125_lambda95\n"
);
static void _V10_Dloop_D454_k207(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D454_k207" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D454_k207, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D454_k207, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.loop.454 6 0) (bruijn ##.k.1095 5 0) (bruijn ##.x.1098 1 0) (bruijn ##.x.1099 0 0))
    V_CALL(VGetArg(upenv, 6-1, 0), runtime,
      VGetArg(upenv, 5-1, 0),
      upenv->vars[0],
      _var0);
 }
}
static void _V10_Dloop_D454_k206(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D454_k206" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D454_k206, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D454_k206, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.+.47 9 36) (close _V10_Dloop_D454_k207) (bruijn ##.i.456 4 2) 1)
    V_CALL(VGetArg(upenv, 9-1, 36), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D454_k207, env)}),
      upenv->up->up->up->vars[2],
      VEncodeInt(1l));
 }
}
static void _V10_Dloop_D454_k205(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D454_k205" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D454_k205, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D454_k205, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cdr.76 8 65) (close _V10_Dloop_D454_k206) (bruijn ##.lst.455 3 1))
    V_CALL(VGetArg(upenv, 8-1, 65), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D454_k206, env)}),
      upenv->up->up->vars[1]);
 }
}
static void _V10_Dloop_D454_k204(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D454_k204" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D454_k204, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D454_k204, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.string-set!.131 7 120) (close _V10_Dloop_D454_k205) (bruijn ##.str.453 4 0) (bruijn ##.i.456 2 2) (bruijn ##.x.1100 0 0))
    V_CALL(VGetArg(upenv, 7-1, 120), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D454_k205, env)}),
      upenv->up->up->up->vars[0],
      upenv->up->vars[2],
      _var0);
 }
}
static void _V10_Dloop_D454_k203(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D454_k203" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D454_k203, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D454_k203, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1096 0 0) ((bruijn ##.k.1095 1 0) (bruijn ##.str.453 3 0)) ((bruijn ##.car.75 6 64) (close _V10_Dloop_D454_k204) (bruijn ##.lst.455 1 1)))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->vars[0], runtime,
      upenv->up->up->vars[0]);
} else {
    V_CALL(VGetArg(upenv, 6-1, 64), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D454_k204, env)}),
      upenv->vars[1]);
}
 }
}
static void _V10_Dloop_D454_lambda97(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V10_Dloop_D454_lambda97" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D454_lambda97, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D454_lambda97, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn ##.null?.11 5 0) (close _V10_Dloop_D454_k203) (bruijn ##.lst.455 0 1))
    V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D454_k203, env)}),
      _var1);
 }
}
static void _V10_Dlist___Gstring_D136_k202(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlist___Gstring_D136_k202" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlist___Gstring_D136_k202, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlist___Gstring_D136_k202, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (letrec 1 ((close _V10_Dloop_D454_lambda97)) ((bruijn ##.loop.454 0 0) (bruijn ##.k.1094 3 0) (bruijn ##.lst.452 3 1) 0))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D454_lambda97, env)});
    V_CALL(env->vars[0], runtime,
      upenv->up->up->vars[0],
      upenv->up->up->vars[1],
      VEncodeInt(0l));
    }
 }
}
static void _V10_Dlist___Gstring_D136_k201(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dlist___Gstring_D136_k201" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlist___Gstring_D136_k201, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlist___Gstring_D136_k201, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.make-string.126 2 115) (close _V10_Dlist___Gstring_D136_k202) (bruijn ##.x.1101 0 0))
    V_CALL(upenv->up->vars[115], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlist___Gstring_D136_k202, env)}),
      _var0);
 }
}
static void _V10_Dlist___Gstring_D136_lambda96(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V10_Dlist___Gstring_D136_lambda96" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlist___Gstring_D136_lambda96, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dlist___Gstring_D136_lambda96, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##.length.109 1 98) (close _V10_Dlist___Gstring_D136_k201) (bruijn ##.lst.452 0 1))
    V_CALL(upenv->vars[98], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlist___Gstring_D136_k201, env)}),
      _var1);
 }
}
static void _V10_Dloop_D458_k211(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D458_k211" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D458_k211, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D458_k211, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.loop.458 5 0) (bruijn ##.k.1103 4 0) (bruijn ##.x.1105 2 0) (bruijn ##.x.1106 0 0))
    V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      upenv->up->up->up->vars[0],
      upenv->up->vars[0],
      _var0);
 }
}
static void _V10_Dloop_D458_k210(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D458_k210" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D458_k210, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D458_k210, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cons.74 6 63) (close _V10_Dloop_D458_k211) (bruijn ##.x.1107 0 0) (bruijn ##.acc.460 3 2))
    V_CALL(VGetArg(upenv, 6-1, 63), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D458_k211, env)}),
      _var0,
      upenv->up->up->vars[2]);
 }
}
static void _V10_Dloop_D458_k209(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D458_k209" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D458_k209, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D458_k209, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.string-ref.130 5 119) (close _V10_Dloop_D458_k210) (bruijn ##.str.457 4 1) (bruijn ##.i.459 2 1))
    V_CALL(VGetArg(upenv, 5-1, 119), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D458_k210, env)}),
      upenv->up->up->up->vars[1],
      upenv->up->vars[1]);
 }
}
static void _V10_Dloop_D458_k208(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D458_k208" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D458_k208, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D458_k208, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1104 0 0) ((bruijn ##.k.1103 1 0) (bruijn ##.acc.460 1 2)) ((bruijn ##.-.48 4 37) (close _V10_Dloop_D458_k209) (bruijn ##.i.459 1 1) 1))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->vars[0], runtime,
      upenv->vars[2]);
} else {
    V_CALL(upenv->up->up->up->vars[37], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D458_k209, env)}),
      upenv->vars[1],
      VEncodeInt(1l));
}
 }
}
static void _V10_Dloop_D458_lambda99(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V10_Dloop_D458_lambda99" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D458_lambda99, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D458_lambda99, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn ##.eq?.26 3 15) (close _V10_Dloop_D458_k208) (bruijn ##.i.459 0 1) -1)
    V_CALL(upenv->up->up->vars[15], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D458_k208, env)}),
      _var1,
      VEncodeInt(-1l));
 }
}
static void _V10_Dstring___Glist_D137_k213(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dstring___Glist_D137_k213" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dstring___Glist_D137_k213, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dstring___Glist_D137_k213, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.loop.458 2 0) (bruijn ##.k.1102 3 0) (bruijn ##.x.1108 0 0) '())
    V_CALL(upenv->up->vars[0], runtime,
      upenv->up->up->vars[0],
      _var0,
      VNULL);
 }
}
static void _V10_Dstring___Glist_D137_k212(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dstring___Glist_D137_k212" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dstring___Glist_D137_k212, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dstring___Glist_D137_k212, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.-.48 3 37) (close _V10_Dstring___Glist_D137_k213) (bruijn ##.x.1109 0 0) 1)
    V_CALL(upenv->up->up->vars[37], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dstring___Glist_D137_k213, env)}),
      _var0,
      VEncodeInt(1l));
 }
}
static void _V10_Dstring___Glist_D137_lambda98(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V10_Dstring___Glist_D137_lambda98" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dstring___Glist_D137_lambda98, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dstring___Glist_D137_lambda98, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (letrec 1 ((close _V10_Dloop_D458_lambda99)) ((bruijn ##.string-length.132 2 121) (close _V10_Dstring___Glist_D137_k212) (bruijn ##.str.457 1 1)))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D458_lambda99, env)});
    V_CALL(upenv->up->vars[121], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dstring___Glist_D137_k212, env)}),
      upenv->vars[1]);
    }
 }
}
static void _V10_Dstring__append_D138_k220(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dstring__append_D138_k220" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dstring__append_D138_k220, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dstring__append_D138_k220, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.k.1112 7 0) (bruijn ##.str.465 3 0))
    V_CALL(VGetArg(upenv, 7-1, 0), runtime,
      upenv->up->up->vars[0]);
 }
}
static void _V10_Dstring__append_D138_k219(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dstring__append_D138_k219" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dstring__append_D138_k219, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dstring__append_D138_k219, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.string-copy!.129 7 118) (close _V10_Dstring__append_D138_k220) (bruijn ##.str.465 2 0) (bruijn ##.x.1115 0 0) (bruijn ##.b.463 6 2))
    V_CALL(VGetArg(upenv, 7-1, 118), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dstring__append_D138_k220, env)}),
      upenv->up->vars[0],
      _var0,
      VGetArg(upenv, 6-1, 2));
 }
}
static void _V10_Dstring__append_D138_k218(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dstring__append_D138_k218" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dstring__append_D138_k218, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dstring__append_D138_k218, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.string-length.132 6 121) (close _V10_Dstring__append_D138_k219) (bruijn ##.a.462 5 1))
    V_CALL(VGetArg(upenv, 6-1, 121), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dstring__append_D138_k219, env)}),
      VGetArg(upenv, 5-1, 1));
 }
}
static void _V10_Dstring__append_D138_k217(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dstring__append_D138_k217" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dstring__append_D138_k217, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dstring__append_D138_k217, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.string-copy!.129 5 118) (close _V10_Dstring__append_D138_k218) (bruijn ##.str.465 0 0) 0 (bruijn ##.a.462 4 1))
    V_CALL(VGetArg(upenv, 5-1, 118), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dstring__append_D138_k218, env)}),
      _var0,
      VEncodeInt(0l),
      upenv->up->up->up->vars[1]);
 }
}
static void _V10_Dstring__append_D138_k216(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dstring__append_D138_k216" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dstring__append_D138_k216, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dstring__append_D138_k216, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.make-string.126 4 115) (close _V10_Dstring__append_D138_k217) (bruijn ##.len.464 0 0))
    V_CALL(upenv->up->up->up->vars[115], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dstring__append_D138_k217, env)}),
      _var0);
 }
}
static void _V10_Dstring__append_D138_k215(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dstring__append_D138_k215" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dstring__append_D138_k215, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dstring__append_D138_k215, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.+.47 3 36) (close _V10_Dstring__append_D138_k216) (bruijn ##.x.1116 1 0) (bruijn ##.x.1117 0 0))
    V_CALL(upenv->up->up->vars[36], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dstring__append_D138_k216, env)}),
      upenv->vars[0],
      _var0);
 }
}
static void _V10_Dstring__append_D138_k214(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dstring__append_D138_k214" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dstring__append_D138_k214, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dstring__append_D138_k214, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.string-length.132 2 121) (close _V10_Dstring__append_D138_k215) (bruijn ##.b.463 1 2))
    V_CALL(upenv->up->vars[121], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dstring__append_D138_k215, env)}),
      upenv->vars[2]);
 }
}
static void _V10_Dstring__append_D138_k232(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dstring__append_D138_k232" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dstring__append_D138_k232, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dstring__append_D138_k232, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.k.1118 12 0) (bruijn ##.str.470 7 0))
    V_CALL(VGetArg(upenv, 12-1, 0), runtime,
      VGetArg(upenv, 7-1, 0));
 }
}
static void _V10_Dstring__append_D138_k231(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dstring__append_D138_k231" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dstring__append_D138_k231, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dstring__append_D138_k231, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.string-copy!.129 12 118) (close _V10_Dstring__append_D138_k232) (bruijn ##.str.470 6 0) (bruijn ##.x.1122 0 0) (bruijn ##.c.468 11 3))
    V_CALL(VGetArg(upenv, 12-1, 118), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dstring__append_D138_k232, env)}),
      VGetArg(upenv, 6-1, 0),
      _var0,
      VGetArg(upenv, 11-1, 3));
 }
}
static void _V10_Dstring__append_D138_k230(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dstring__append_D138_k230" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dstring__append_D138_k230, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dstring__append_D138_k230, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.+.47 11 36) (close _V10_Dstring__append_D138_k231) (bruijn ##.x.1123 1 0) (bruijn ##.x.1124 0 0))
    V_CALL(VGetArg(upenv, 11-1, 36), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dstring__append_D138_k231, env)}),
      upenv->vars[0],
      _var0);
 }
}
static void _V10_Dstring__append_D138_k229(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dstring__append_D138_k229" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dstring__append_D138_k229, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dstring__append_D138_k229, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.string-length.132 10 121) (close _V10_Dstring__append_D138_k230) (bruijn ##.b.467 9 2))
    V_CALL(VGetArg(upenv, 10-1, 121), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dstring__append_D138_k230, env)}),
      VGetArg(upenv, 9-1, 2));
 }
}
static void _V10_Dstring__append_D138_k228(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dstring__append_D138_k228" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dstring__append_D138_k228, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dstring__append_D138_k228, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.string-length.132 9 121) (close _V10_Dstring__append_D138_k229) (bruijn ##.a.466 8 1))
    V_CALL(VGetArg(upenv, 9-1, 121), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dstring__append_D138_k229, env)}),
      VGetArg(upenv, 8-1, 1));
 }
}
static void _V10_Dstring__append_D138_k227(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dstring__append_D138_k227" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dstring__append_D138_k227, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dstring__append_D138_k227, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.string-copy!.129 8 118) (close _V10_Dstring__append_D138_k228) (bruijn ##.str.470 2 0) (bruijn ##.x.1125 0 0) (bruijn ##.b.467 7 2))
    V_CALL(VGetArg(upenv, 8-1, 118), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dstring__append_D138_k228, env)}),
      upenv->up->vars[0],
      _var0,
      VGetArg(upenv, 7-1, 2));
 }
}
static void _V10_Dstring__append_D138_k226(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dstring__append_D138_k226" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dstring__append_D138_k226, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dstring__append_D138_k226, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.string-length.132 7 121) (close _V10_Dstring__append_D138_k227) (bruijn ##.a.466 6 1))
    V_CALL(VGetArg(upenv, 7-1, 121), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dstring__append_D138_k227, env)}),
      VGetArg(upenv, 6-1, 1));
 }
}
static void _V10_Dstring__append_D138_k225(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dstring__append_D138_k225" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dstring__append_D138_k225, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dstring__append_D138_k225, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.string-copy!.129 6 118) (close _V10_Dstring__append_D138_k226) (bruijn ##.str.470 0 0) 0 (bruijn ##.a.466 5 1))
    V_CALL(VGetArg(upenv, 6-1, 118), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dstring__append_D138_k226, env)}),
      _var0,
      VEncodeInt(0l),
      VGetArg(upenv, 5-1, 1));
 }
}
static void _V10_Dstring__append_D138_k224(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dstring__append_D138_k224" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dstring__append_D138_k224, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dstring__append_D138_k224, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.make-string.126 5 115) (close _V10_Dstring__append_D138_k225) (bruijn ##.len.469 0 0))
    V_CALL(VGetArg(upenv, 5-1, 115), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dstring__append_D138_k225, env)}),
      _var0);
 }
}
static void _V10_Dstring__append_D138_k223(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dstring__append_D138_k223" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dstring__append_D138_k223, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dstring__append_D138_k223, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.+.47 4 36) (close _V10_Dstring__append_D138_k224) (bruijn ##.x.1126 2 0) (bruijn ##.x.1127 1 0) (bruijn ##.x.1128 0 0))
    V_CALL(upenv->up->up->up->vars[36], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dstring__append_D138_k224, env)}),
      upenv->up->vars[0],
      upenv->vars[0],
      _var0);
 }
}
static void _V10_Dstring__append_D138_k222(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dstring__append_D138_k222" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dstring__append_D138_k222, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dstring__append_D138_k222, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.string-length.132 3 121) (close _V10_Dstring__append_D138_k223) (bruijn ##.c.468 2 3))
    V_CALL(upenv->up->up->vars[121], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dstring__append_D138_k223, env)}),
      upenv->up->vars[3]);
 }
}
static void _V10_Dstring__append_D138_k221(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dstring__append_D138_k221" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dstring__append_D138_k221, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dstring__append_D138_k221, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.string-length.132 2 121) (close _V10_Dstring__append_D138_k222) (bruijn ##.b.467 1 2))
    V_CALL(upenv->up->vars[121], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dstring__append_D138_k222, env)}),
      upenv->vars[2]);
 }
}
static void _V10_Dstring__append_D138_k250(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dstring__append_D138_k250" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dstring__append_D138_k250, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dstring__append_D138_k250, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.k.1129 18 0) (bruijn ##.str.476 12 0))
    V_CALL(VGetArg(upenv, 18-1, 0), runtime,
      VGetArg(upenv, 12-1, 0));
 }
}
static void _V10_Dstring__append_D138_k249(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dstring__append_D138_k249" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dstring__append_D138_k249, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dstring__append_D138_k249, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.string-copy!.129 18 118) (close _V10_Dstring__append_D138_k250) (bruijn ##.str.476 11 0) (bruijn ##.x.1134 0 0) (bruijn ##.d.474 17 4))
    V_CALL(VGetArg(upenv, 18-1, 118), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dstring__append_D138_k250, env)}),
      VGetArg(upenv, 11-1, 0),
      _var0,
      VGetArg(upenv, 17-1, 4));
 }
}
static void _V10_Dstring__append_D138_k248(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dstring__append_D138_k248" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dstring__append_D138_k248, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dstring__append_D138_k248, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.+.47 17 36) (close _V10_Dstring__append_D138_k249) (bruijn ##.x.1135 2 0) (bruijn ##.x.1136 1 0) (bruijn ##.x.1137 0 0))
    V_CALL(VGetArg(upenv, 17-1, 36), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dstring__append_D138_k249, env)}),
      upenv->up->vars[0],
      upenv->vars[0],
      _var0);
 }
}
static void _V10_Dstring__append_D138_k247(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dstring__append_D138_k247" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dstring__append_D138_k247, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dstring__append_D138_k247, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.string-length.132 16 121) (close _V10_Dstring__append_D138_k248) (bruijn ##.c.473 15 3))
    V_CALL(VGetArg(upenv, 16-1, 121), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dstring__append_D138_k248, env)}),
      VGetArg(upenv, 15-1, 3));
 }
}
static void _V10_Dstring__append_D138_k246(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dstring__append_D138_k246" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dstring__append_D138_k246, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dstring__append_D138_k246, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.string-length.132 15 121) (close _V10_Dstring__append_D138_k247) (bruijn ##.b.472 14 2))
    V_CALL(VGetArg(upenv, 15-1, 121), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dstring__append_D138_k247, env)}),
      VGetArg(upenv, 14-1, 2));
 }
}
static void _V10_Dstring__append_D138_k245(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dstring__append_D138_k245" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dstring__append_D138_k245, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dstring__append_D138_k245, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.string-length.132 14 121) (close _V10_Dstring__append_D138_k246) (bruijn ##.a.471 13 1))
    V_CALL(VGetArg(upenv, 14-1, 121), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dstring__append_D138_k246, env)}),
      VGetArg(upenv, 13-1, 1));
 }
}
static void _V10_Dstring__append_D138_k244(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dstring__append_D138_k244" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dstring__append_D138_k244, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dstring__append_D138_k244, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.string-copy!.129 13 118) (close _V10_Dstring__append_D138_k245) (bruijn ##.str.476 6 0) (bruijn ##.x.1138 0 0) (bruijn ##.c.473 12 3))
    V_CALL(VGetArg(upenv, 13-1, 118), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dstring__append_D138_k245, env)}),
      VGetArg(upenv, 6-1, 0),
      _var0,
      VGetArg(upenv, 12-1, 3));
 }
}
static void _V10_Dstring__append_D138_k243(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dstring__append_D138_k243" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dstring__append_D138_k243, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dstring__append_D138_k243, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.+.47 12 36) (close _V10_Dstring__append_D138_k244) (bruijn ##.x.1139 1 0) (bruijn ##.x.1140 0 0))
    V_CALL(VGetArg(upenv, 12-1, 36), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dstring__append_D138_k244, env)}),
      upenv->vars[0],
      _var0);
 }
}
static void _V10_Dstring__append_D138_k242(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dstring__append_D138_k242" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dstring__append_D138_k242, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dstring__append_D138_k242, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.string-length.132 11 121) (close _V10_Dstring__append_D138_k243) (bruijn ##.b.472 10 2))
    V_CALL(VGetArg(upenv, 11-1, 121), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dstring__append_D138_k243, env)}),
      VGetArg(upenv, 10-1, 2));
 }
}
static void _V10_Dstring__append_D138_k241(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dstring__append_D138_k241" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dstring__append_D138_k241, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dstring__append_D138_k241, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.string-length.132 10 121) (close _V10_Dstring__append_D138_k242) (bruijn ##.a.471 9 1))
    V_CALL(VGetArg(upenv, 10-1, 121), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dstring__append_D138_k242, env)}),
      VGetArg(upenv, 9-1, 1));
 }
}
static void _V10_Dstring__append_D138_k240(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dstring__append_D138_k240" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dstring__append_D138_k240, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dstring__append_D138_k240, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.string-copy!.129 9 118) (close _V10_Dstring__append_D138_k241) (bruijn ##.str.476 2 0) (bruijn ##.x.1141 0 0) (bruijn ##.b.472 8 2))
    V_CALL(VGetArg(upenv, 9-1, 118), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dstring__append_D138_k241, env)}),
      upenv->up->vars[0],
      _var0,
      VGetArg(upenv, 8-1, 2));
 }
}
static void _V10_Dstring__append_D138_k239(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dstring__append_D138_k239" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dstring__append_D138_k239, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dstring__append_D138_k239, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.string-length.132 8 121) (close _V10_Dstring__append_D138_k240) (bruijn ##.a.471 7 1))
    V_CALL(VGetArg(upenv, 8-1, 121), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dstring__append_D138_k240, env)}),
      VGetArg(upenv, 7-1, 1));
 }
}
static void _V10_Dstring__append_D138_k238(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dstring__append_D138_k238" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dstring__append_D138_k238, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dstring__append_D138_k238, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.string-copy!.129 7 118) (close _V10_Dstring__append_D138_k239) (bruijn ##.str.476 0 0) 0 (bruijn ##.a.471 6 1))
    V_CALL(VGetArg(upenv, 7-1, 118), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dstring__append_D138_k239, env)}),
      _var0,
      VEncodeInt(0l),
      VGetArg(upenv, 6-1, 1));
 }
}
static void _V10_Dstring__append_D138_k237(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dstring__append_D138_k237" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dstring__append_D138_k237, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dstring__append_D138_k237, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.make-string.126 6 115) (close _V10_Dstring__append_D138_k238) (bruijn ##.len.475 0 0))
    V_CALL(VGetArg(upenv, 6-1, 115), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dstring__append_D138_k238, env)}),
      _var0);
 }
}
static void _V10_Dstring__append_D138_k236(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dstring__append_D138_k236" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dstring__append_D138_k236, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dstring__append_D138_k236, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.+.47 5 36) (close _V10_Dstring__append_D138_k237) (bruijn ##.x.1142 3 0) (bruijn ##.x.1143 2 0) (bruijn ##.x.1144 1 0) (bruijn ##.x.1145 0 0))
    V_CALL(VGetArg(upenv, 5-1, 36), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dstring__append_D138_k237, env)}),
      upenv->up->up->vars[0],
      upenv->up->vars[0],
      upenv->vars[0],
      _var0);
 }
}
static void _V10_Dstring__append_D138_k235(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dstring__append_D138_k235" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dstring__append_D138_k235, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dstring__append_D138_k235, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.string-length.132 4 121) (close _V10_Dstring__append_D138_k236) (bruijn ##.d.474 3 4))
    V_CALL(upenv->up->up->up->vars[121], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dstring__append_D138_k236, env)}),
      upenv->up->up->vars[4]);
 }
}
static void _V10_Dstring__append_D138_k234(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dstring__append_D138_k234" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dstring__append_D138_k234, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dstring__append_D138_k234, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.string-length.132 3 121) (close _V10_Dstring__append_D138_k235) (bruijn ##.c.473 2 3))
    V_CALL(upenv->up->up->vars[121], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dstring__append_D138_k235, env)}),
      upenv->up->vars[3]);
 }
}
static void _V10_Dstring__append_D138_k233(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dstring__append_D138_k233" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dstring__append_D138_k233, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dstring__append_D138_k233, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.string-length.132 2 121) (close _V10_Dstring__append_D138_k234) (bruijn ##.b.472 1 2))
    V_CALL(upenv->up->vars[121], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dstring__append_D138_k234, env)}),
      upenv->vars[2]);
 }
}
__attribute__((used)) static void _V20CaseError__V10_Dstring__append_D138_lambda100(VRuntime * runtime, VEnv * upenv, int argc, ...) {
 // (_V10_Dstring__append_D138_lambda100 #t (1 ((bruijn ##.string-copy.128 1 117) (bruijn ##.k.1110 0 0) (##string ##.string.1779))) (2 ((bruijn ##.string-copy.128 1 117) (bruijn ##.k.1111 0 0) (bruijn ##.a.461 0 1))) (3 ((bruijn ##.string-length.132 1 121) (close _V10_Dstring__append_D138_k214) (bruijn ##.a.462 0 1))) (4 ((bruijn ##.string-length.132 1 121) (close _V10_Dstring__append_D138_k221) (bruijn ##.a.466 0 1))) (5 ((bruijn ##.string-length.132 1 121) (close _V10_Dstring__append_D138_k233) (bruijn ##.a.471 0 1))) (1 + ((bruijn ##.fold-right.117 1 106) (bruijn ##.k.1146 0 0) (bruijn ##.string-append.138 1 127) (##string ##.string.1779) (bruijn ##.strs.477 0 1))))
 VErrorC(runtime, "Not enough arguments to _V10_Dstring__append_D138_lambda100, got ~D~N"
 "-- expected 1~N"
 "-- expected 2~N"
 "-- expected 3~N"
 "-- expected 4~N"
 "-- expected 5~N"
 "-- expected 1 or more~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V10_Dstring__append_D138_lambda100(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V20Case0__V10_Dstring__append_D138_lambda100" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case0__V10_Dstring__append_D138_lambda100, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.string-copy.128 1 117) (bruijn ##.k.1110 0 0) (##string ##.string.1779))
    V_CALL(upenv->vars[117], runtime,
      _var0,
      VEncodePointer(&_V10_Dstring_D1779.sym, VPOINTER_OTHER));
 }
}
__attribute__((used)) static void _V20Case1__V10_Dstring__append_D138_lambda100(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V20Case1__V10_Dstring__append_D138_lambda100" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case1__V10_Dstring__append_D138_lambda100, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##.string-copy.128 1 117) (bruijn ##.k.1111 0 0) (bruijn ##.a.461 0 1))
    V_CALL(upenv->vars[117], runtime,
      _var0,
      _var1);
 }
}
__attribute__((used)) static void _V20Case2__V10_Dstring__append_D138_lambda100(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V20Case2__V10_Dstring__append_D138_lambda100" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case2__V10_Dstring__append_D138_lambda100, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn ##.string-length.132 1 121) (close _V10_Dstring__append_D138_k214) (bruijn ##.a.462 0 1))
    V_CALL(upenv->vars[121], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dstring__append_D138_k214, env)}),
      _var1);
 }
}
__attribute__((used)) static void _V20Case3__V10_Dstring__append_D138_lambda100(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V20Case3__V10_Dstring__append_D138_lambda100" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case3__V10_Dstring__append_D138_lambda100, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // ((bruijn ##.string-length.132 1 121) (close _V10_Dstring__append_D138_k221) (bruijn ##.a.466 0 1))
    V_CALL(upenv->vars[121], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dstring__append_D138_k221, env)}),
      _var1);
 }
}
__attribute__((used)) static void _V20Case4__V10_Dstring__append_D138_lambda100(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4) {
 static VDebugInfo dbg = { "_V20Case4__V10_Dstring__append_D138_lambda100" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case4__V10_Dstring__append_D138_lambda100, runtime, upenv, 5, argc, _var0, _var1, _var2, _var3, _var4) {
  struct { VEnv env; VWORD argv[5]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 5, 5, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  env->vars[4] = _var4;
  // ((bruijn ##.string-length.132 1 121) (close _V10_Dstring__append_D138_k233) (bruijn ##.a.471 0 1))
    V_CALL(upenv->vars[121], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dstring__append_D138_k233, env)}),
      _var1);
 }
}
__attribute__((used)) static void _V20Case5__V10_Dstring__append_D138_lambda100(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, ...) {
 static VDebugInfo dbg = { "_V20Case5__V10_Dstring__append_D138_lambda100" };
 VRecordCall2(runtime, &dbg);
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 1, argc, _var0);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case5__V10_Dstring__append_D138_lambda100, runtime, upenv, 1, argc, _var0, _varargs) {
  // ((bruijn ##.fold-right.117 1 106) (bruijn ##.k.1146 0 0) (bruijn ##.string-append.138 1 127) (##string ##.string.1779) (bruijn ##.strs.477 0 1))
    V_CALL(upenv->vars[106], runtime,
      _var0,
      upenv->vars[127],
      VEncodePointer(&_V10_Dstring_D1779.sym, VPOINTER_OTHER),
      _varargs);
 }
}
void _V10_Dstring__append_D138_lambda100(VRuntime * runtime, VEnv * upenv, int argc, ...);
asm(
".intel_syntax noprefix\n"
#ifdef __linux__
".type _V10_Dstring__append_D138_lambda100, @function\n"
#endif
"_V10_Dstring__append_D138_lambda100:\n"
"    cmp " ARGC_REG ", 1\n"
"    je _V20Case0__V10_Dstring__append_D138_lambda100\n"
"    cmp " ARGC_REG ", 2\n"
"    je _V20Case1__V10_Dstring__append_D138_lambda100\n"
"    cmp " ARGC_REG ", 3\n"
"    je _V20Case2__V10_Dstring__append_D138_lambda100\n"
"    cmp " ARGC_REG ", 4\n"
"    je _V20Case3__V10_Dstring__append_D138_lambda100\n"
"    cmp " ARGC_REG ", 5\n"
"    je _V20Case4__V10_Dstring__append_D138_lambda100\n"
"    cmp " ARGC_REG ", 1\n"
"    jge _V20Case5__V10_Dstring__append_D138_lambda100\n"
"    jmp _V20CaseError__V10_Dstring__append_D138_lambda100\n"
);
static void _V10_Dvector_D140_lambda101(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, ...) {
 static VDebugInfo dbg = { "_V10_Dvector_D140_lambda101" };
 VRecordCall2(runtime, &dbg);
 if(argc < 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dvector_D140_lambda101, got ~D~N"
  "-- expected 1 or more~N"
  , argc);
 }
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 1, argc, _var0);
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dvector_D140_lambda101, runtime, upenv, 1, argc, _var0, _varargs) {
  // ((bruijn ##.list->vector.139 1 128) (bruijn ##.k.1147 0 0) (bruijn ##.args.478 0 1))
    V_CALL(upenv->vars[128], runtime,
      _var0,
      _varargs);
 }
}
static void _V10_Dloop_D481_k255(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D481_k255" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D481_k255, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D481_k255, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.loop.481 5 0) (bruijn ##.k.1149 4 0) (bruijn ##.x.1151 1 0) (bruijn ##.x.1152 0 0))
    V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      upenv->up->up->up->vars[0],
      upenv->vars[0],
      _var0);
 }
}
static void _V10_Dloop_D481_k254(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D481_k254" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D481_k254, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D481_k254, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.-.48 7 37) (close _V10_Dloop_D481_k255) (bruijn ##.i.483 3 2) 1)
    V_CALL(VGetArg(upenv, 7-1, 37), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D481_k255, env)}),
      upenv->up->up->vars[2],
      VEncodeInt(1l));
 }
}
static void _V10_Dloop_D481_k253(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D481_k253" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D481_k253, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D481_k253, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cons.74 6 63) (close _V10_Dloop_D481_k254) (bruijn ##.x.1153 0 0) (bruijn ##.acc.482 2 1))
    V_CALL(VGetArg(upenv, 6-1, 63), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D481_k254, env)}),
      _var0,
      upenv->up->vars[1]);
 }
}
static void _V10_Dloop_D481_k252(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D481_k252" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D481_k252, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D481_k252, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1150 0 0) ((bruijn ##.k.1149 1 0) (bruijn ##.acc.482 1 1)) ((bruijn ##.vector-ref.141 5 130) (close _V10_Dloop_D481_k253) (bruijn ##.vec.479 4 1) (bruijn ##.i.483 1 2)))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->vars[0], runtime,
      upenv->vars[1]);
} else {
    V_CALL(VGetArg(upenv, 5-1, 130), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D481_k253, env)}),
      upenv->up->up->up->vars[1],
      upenv->vars[2]);
}
 }
}
static void _V10_Dloop_D481_lambda103(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V10_Dloop_D481_lambda103" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D481_lambda103, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D481_lambda103, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn ##.<.34 4 23) (close _V10_Dloop_D481_k252) (bruijn ##.i.483 0 2) 0)
    V_CALL(upenv->up->up->up->vars[23], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D481_k252, env)}),
      _var2,
      VEncodeInt(0l));
 }
}
static void _V10_Dvector___Glist_D144_k256(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dvector___Glist_D144_k256" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dvector___Glist_D144_k256, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dvector___Glist_D144_k256, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.loop.481 1 0) (bruijn ##.k.1148 3 0) '() (bruijn ##.x.1154 0 0))
    V_CALL(upenv->vars[0], runtime,
      upenv->up->up->vars[0],
      VNULL,
      _var0);
 }
}
static void _V10_Dvector___Glist_D144_k251(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dvector___Glist_D144_k251" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dvector___Glist_D144_k251, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dvector___Glist_D144_k251, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (letrec 1 ((close _V10_Dloop_D481_lambda103)) ((bruijn ##.-.48 3 37) (close _V10_Dvector___Glist_D144_k256) (bruijn ##.len.480 1 0) 1))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D481_lambda103, env)});
    V_CALL(upenv->up->up->vars[37], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dvector___Glist_D144_k256, env)}),
      upenv->vars[0],
      VEncodeInt(1l));
    }
 }
}
static void _V10_Dvector___Glist_D144_lambda102(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V10_Dvector___Glist_D144_lambda102" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dvector___Glist_D144_lambda102, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dvector___Glist_D144_lambda102, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##.vector-length.143 1 132) (close _V10_Dvector___Glist_D144_k251) (bruijn ##.vec.479 0 1))
    V_CALL(upenv->vars[132], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dvector___Glist_D144_k251, env)}),
      _var1);
 }
}
static void _V10_Dloop_D487_k261(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D487_k261" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D487_k261, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D487_k261, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.loop.487 5 0) (bruijn ##.k.1156 4 0) (bruijn ##.x.1159 0 0))
    V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      upenv->up->up->up->vars[0],
      _var0);
 }
}
static void _V10_Dloop_D487_k260(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D487_k260" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D487_k260, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D487_k260, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.+.47 7 36) (close _V10_Dloop_D487_k261) (bruijn ##.i.488 3 1) 1)
    V_CALL(VGetArg(upenv, 7-1, 36), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D487_k261, env)}),
      upenv->up->up->vars[1],
      VEncodeInt(1l));
 }
}
static void _V10_Dloop_D487_k259(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D487_k259" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D487_k259, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D487_k259, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.f.484 5 1) (close _V10_Dloop_D487_k260) (bruijn ##.x.1160 0 0))
    V_CALL(VGetArg(upenv, 5-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D487_k260, env)}),
      _var0);
 }
}
static void _V10_Dloop_D487_k258(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D487_k258" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D487_k258, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D487_k258, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1157 0 0) ((bruijn ##.vector-ref.141 5 130) (close _V10_Dloop_D487_k259) (bruijn ##.xs.485 4 2) (bruijn ##.i.488 1 1)) ((bruijn ##.k.1156 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 5-1, 130), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D487_k259, env)}),
      upenv->up->up->up->vars[2],
      upenv->vars[1]);
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dloop_D487_lambda105(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V10_Dloop_D487_lambda105" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D487_lambda105, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D487_lambda105, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##.<.34 4 23) (close _V10_Dloop_D487_k258) (bruijn ##.i.488 0 1) (bruijn ##.len.486 2 0))
    V_CALL(upenv->up->up->up->vars[23], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D487_k258, env)}),
      _var1,
      upenv->up->vars[0]);
 }
}
static void _V10_Dvector__for__each_D145_k257(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dvector__for__each_D145_k257" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dvector__for__each_D145_k257, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dvector__for__each_D145_k257, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (letrec 1 ((close _V10_Dloop_D487_lambda105)) ((bruijn ##.loop.487 0 0) (bruijn ##.k.1155 2 0) 0))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D487_lambda105, env)});
    V_CALL(env->vars[0], runtime,
      upenv->up->vars[0],
      VEncodeInt(0l));
    }
 }
}
static void _V10_Dloop_D493_k267(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D493_k267" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D493_k267, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D493_k267, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.loop.493 6 0) (bruijn ##.k.1162 5 0) (bruijn ##.x.1165 0 0))
    V_CALL(VGetArg(upenv, 6-1, 0), runtime,
      VGetArg(upenv, 5-1, 0),
      _var0);
 }
}
static void _V10_Dloop_D493_k266(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D493_k266" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D493_k266, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D493_k266, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.+.47 8 36) (close _V10_Dloop_D493_k267) (bruijn ##.i.494 4 1) 1)
    V_CALL(VGetArg(upenv, 8-1, 36), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D493_k267, env)}),
      upenv->up->up->up->vars[1],
      VEncodeInt(1l));
 }
}
static void _V10_Dloop_D493_k265(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D493_k265" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D493_k265, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D493_k265, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.f.489 6 1) (close _V10_Dloop_D493_k266) (bruijn ##.x.1166 1 0) (bruijn ##.x.1167 0 0))
    V_CALL(VGetArg(upenv, 6-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D493_k266, env)}),
      upenv->vars[0],
      _var0);
 }
}
static void _V10_Dloop_D493_k264(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D493_k264" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D493_k264, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D493_k264, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.vector-ref.141 6 130) (close _V10_Dloop_D493_k265) (bruijn ##.ys.491 5 3) (bruijn ##.i.494 2 1))
    V_CALL(VGetArg(upenv, 6-1, 130), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D493_k265, env)}),
      VGetArg(upenv, 5-1, 3),
      upenv->up->vars[1]);
 }
}
static void _V10_Dloop_D493_k263(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D493_k263" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D493_k263, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D493_k263, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1163 0 0) ((bruijn ##.vector-ref.141 5 130) (close _V10_Dloop_D493_k264) (bruijn ##.xs.490 4 2) (bruijn ##.i.494 1 1)) ((bruijn ##.k.1162 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 5-1, 130), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D493_k264, env)}),
      upenv->up->up->up->vars[2],
      upenv->vars[1]);
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dloop_D493_lambda106(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V10_Dloop_D493_lambda106" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D493_lambda106, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D493_lambda106, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##.<.34 4 23) (close _V10_Dloop_D493_k263) (bruijn ##.i.494 0 1) (bruijn ##.len.492 2 0))
    V_CALL(upenv->up->up->up->vars[23], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D493_k263, env)}),
      _var1,
      upenv->up->vars[0]);
 }
}
static void _V10_Dvector__for__each_D145_k262(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dvector__for__each_D145_k262" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dvector__for__each_D145_k262, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dvector__for__each_D145_k262, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (letrec 1 ((close _V10_Dloop_D493_lambda106)) ((bruijn ##.loop.493 0 0) (bruijn ##.k.1161 2 0) 0))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D493_lambda106, env)});
    V_CALL(env->vars[0], runtime,
      upenv->up->vars[0],
      VEncodeInt(0l));
    }
 }
}
static void _V10_Dloop_D500_k274(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D500_k274" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D500_k274, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D500_k274, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.loop.500 7 0) (bruijn ##.k.1169 6 0) (bruijn ##.x.1172 0 0))
    V_CALL(VGetArg(upenv, 7-1, 0), runtime,
      VGetArg(upenv, 6-1, 0),
      _var0);
 }
}
static void _V10_Dloop_D500_k273(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D500_k273" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D500_k273, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D500_k273, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.+.47 9 36) (close _V10_Dloop_D500_k274) (bruijn ##.i.501 5 1) 1)
    V_CALL(VGetArg(upenv, 9-1, 36), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D500_k274, env)}),
      VGetArg(upenv, 5-1, 1),
      VEncodeInt(1l));
 }
}
static void _V10_Dloop_D500_k272(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D500_k272" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D500_k272, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D500_k272, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.f.495 7 1) (close _V10_Dloop_D500_k273) (bruijn ##.x.1173 2 0) (bruijn ##.x.1174 1 0) (bruijn ##.x.1175 0 0))
    V_CALL(VGetArg(upenv, 7-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D500_k273, env)}),
      upenv->up->vars[0],
      upenv->vars[0],
      _var0);
 }
}
static void _V10_Dloop_D500_k271(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D500_k271" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D500_k271, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D500_k271, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.vector-ref.141 7 130) (close _V10_Dloop_D500_k272) (bruijn ##.zs.498 6 4) (bruijn ##.i.501 3 1))
    V_CALL(VGetArg(upenv, 7-1, 130), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D500_k272, env)}),
      VGetArg(upenv, 6-1, 4),
      upenv->up->up->vars[1]);
 }
}
static void _V10_Dloop_D500_k270(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D500_k270" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D500_k270, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D500_k270, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.vector-ref.141 6 130) (close _V10_Dloop_D500_k271) (bruijn ##.ys.497 5 3) (bruijn ##.i.501 2 1))
    V_CALL(VGetArg(upenv, 6-1, 130), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D500_k271, env)}),
      VGetArg(upenv, 5-1, 3),
      upenv->up->vars[1]);
 }
}
static void _V10_Dloop_D500_k269(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D500_k269" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D500_k269, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D500_k269, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1170 0 0) ((bruijn ##.vector-ref.141 5 130) (close _V10_Dloop_D500_k270) (bruijn ##.xs.496 4 2) (bruijn ##.i.501 1 1)) ((bruijn ##.k.1169 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 5-1, 130), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D500_k270, env)}),
      upenv->up->up->up->vars[2],
      upenv->vars[1]);
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dloop_D500_lambda107(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V10_Dloop_D500_lambda107" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D500_lambda107, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D500_lambda107, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##.<.34 4 23) (close _V10_Dloop_D500_k269) (bruijn ##.i.501 0 1) (bruijn ##.len.499 2 0))
    V_CALL(upenv->up->up->up->vars[23], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D500_k269, env)}),
      _var1,
      upenv->up->vars[0]);
 }
}
static void _V10_Dvector__for__each_D145_k268(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dvector__for__each_D145_k268" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dvector__for__each_D145_k268, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dvector__for__each_D145_k268, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (letrec 1 ((close _V10_Dloop_D500_lambda107)) ((bruijn ##.loop.500 0 0) (bruijn ##.k.1168 2 0) 0))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D500_lambda107, env)});
    V_CALL(env->vars[0], runtime,
      upenv->up->vars[0],
      VEncodeInt(0l));
    }
 }
}
static void _V10_Dloop_D505_k280(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D505_k280" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D505_k280, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D505_k280, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.loop.505 5 0) (bruijn ##.k.1177 4 0) (bruijn ##.x.1180 0 0))
    V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      upenv->up->up->up->vars[0],
      _var0);
 }
}
static void _V10_Dloop_D505_k279(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D505_k279" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D505_k279, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D505_k279, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.+.47 8 36) (close _V10_Dloop_D505_k280) (bruijn ##.i.506 3 1) 1)
    V_CALL(VGetArg(upenv, 8-1, 36), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D505_k280, env)}),
      upenv->up->up->vars[1],
      VEncodeInt(1l));
 }
}
static void _V10_Dloop_D505_k278(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D505_k278" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D505_k278, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D505_k278, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.apply.183 7 172) (close _V10_Dloop_D505_k279) (bruijn ##.f.502 6 1) (bruijn ##.x.1181 0 0))
    V_CALL(VGetArg(upenv, 7-1, 172), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D505_k279, env)}),
      VGetArg(upenv, 6-1, 1),
      _var0);
 }
}
static void _V10_Dloop_D505_lambda109(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V10_Dloop_D505_lambda109" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D505_lambda109, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D505_lambda109, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##.vector-ref.141 7 130) (bruijn ##.k.1182 0 0) (bruijn ##.vec.507 0 1) (bruijn ##.i.506 2 1))
    V_CALL(VGetArg(upenv, 7-1, 130), runtime,
      _var0,
      _var1,
      upenv->up->vars[1]);
 }
}
static void _V10_Dloop_D505_k277(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D505_k277" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D505_k277, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D505_k277, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1178 0 0) ((bruijn ##.map.115 6 104) (close _V10_Dloop_D505_k278) (close _V10_Dloop_D505_lambda109) (bruijn ##.vecs.503 5 2)) ((bruijn ##.k.1177 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 6-1, 104), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D505_k278, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D505_lambda109, env)}),
      VGetArg(upenv, 5-1, 2));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dloop_D505_lambda108(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V10_Dloop_D505_lambda108" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D505_lambda108, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D505_lambda108, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##.<.34 5 23) (close _V10_Dloop_D505_k277) (bruijn ##.i.506 0 1) (bruijn ##.len.504 2 0))
    V_CALL(VGetArg(upenv, 5-1, 23), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D505_k277, env)}),
      _var1,
      upenv->up->vars[0]);
 }
}
static void _V10_Dvector__for__each_D145_k276(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dvector__for__each_D145_k276" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dvector__for__each_D145_k276, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dvector__for__each_D145_k276, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (letrec 1 ((close _V10_Dloop_D505_lambda108)) ((bruijn ##.loop.505 0 0) (bruijn ##.k.1176 3 0) 0))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D505_lambda108, env)});
    V_CALL(env->vars[0], runtime,
      upenv->up->up->vars[0],
      VEncodeInt(0l));
    }
 }
}
static void _V10_Dvector__for__each_D145_k275(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dvector__for__each_D145_k275" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dvector__for__each_D145_k275, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dvector__for__each_D145_k275, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.vector-length.143 2 132) (close _V10_Dvector__for__each_D145_k276) (bruijn ##.x.1183 0 0))
    V_CALL(upenv->up->vars[132], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dvector__for__each_D145_k276, env)}),
      _var0);
 }
}
__attribute__((used)) static void _V20CaseError__V10_Dvector__for__each_D145_lambda104(VRuntime * runtime, VEnv * upenv, int argc, ...) {
 // (_V10_Dvector__for__each_D145_lambda104 #t (3 ((bruijn ##.vector-length.143 1 132) (close _V10_Dvector__for__each_D145_k257) (bruijn ##.xs.485 0 2))) (4 ((bruijn ##.vector-length.143 1 132) (close _V10_Dvector__for__each_D145_k262) (bruijn ##.xs.490 0 2))) (5 ((bruijn ##.vector-length.143 1 132) (close _V10_Dvector__for__each_D145_k268) (bruijn ##.xs.496 0 2))) (2 + ((bruijn ##.car.75 1 64) (close _V10_Dvector__for__each_D145_k275) (bruijn ##.vecs.503 0 2))))
 VErrorC(runtime, "Not enough arguments to _V10_Dvector__for__each_D145_lambda104, got ~D~N"
 "-- expected 3~N"
 "-- expected 4~N"
 "-- expected 5~N"
 "-- expected 2 or more~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V10_Dvector__for__each_D145_lambda104(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V20Case0__V10_Dvector__for__each_D145_lambda104" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case0__V10_Dvector__for__each_D145_lambda104, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn ##.vector-length.143 1 132) (close _V10_Dvector__for__each_D145_k257) (bruijn ##.xs.485 0 2))
    V_CALL(upenv->vars[132], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dvector__for__each_D145_k257, env)}),
      _var2);
 }
}
__attribute__((used)) static void _V20Case1__V10_Dvector__for__each_D145_lambda104(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V20Case1__V10_Dvector__for__each_D145_lambda104" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case1__V10_Dvector__for__each_D145_lambda104, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // ((bruijn ##.vector-length.143 1 132) (close _V10_Dvector__for__each_D145_k262) (bruijn ##.xs.490 0 2))
    V_CALL(upenv->vars[132], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dvector__for__each_D145_k262, env)}),
      _var2);
 }
}
__attribute__((used)) static void _V20Case2__V10_Dvector__for__each_D145_lambda104(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4) {
 static VDebugInfo dbg = { "_V20Case2__V10_Dvector__for__each_D145_lambda104" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case2__V10_Dvector__for__each_D145_lambda104, runtime, upenv, 5, argc, _var0, _var1, _var2, _var3, _var4) {
  struct { VEnv env; VWORD argv[5]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 5, 5, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  env->vars[4] = _var4;
  // ((bruijn ##.vector-length.143 1 132) (close _V10_Dvector__for__each_D145_k268) (bruijn ##.xs.496 0 2))
    V_CALL(upenv->vars[132], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dvector__for__each_D145_k268, env)}),
      _var2);
 }
}
__attribute__((used)) static void _V20Case3__V10_Dvector__for__each_D145_lambda104(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, ...) {
 static VDebugInfo dbg = { "_V20Case3__V10_Dvector__for__each_D145_lambda104" };
 VRecordCall2(runtime, &dbg);
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 2, argc, _var1);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case3__V10_Dvector__for__each_D145_lambda104, runtime, upenv, 2, argc, _var0, _var1, _varargs) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _varargs;
  // ((bruijn ##.car.75 1 64) (close _V10_Dvector__for__each_D145_k275) (bruijn ##.vecs.503 0 2))
    V_CALL(upenv->vars[64], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dvector__for__each_D145_k275, env)}),
      _varargs);
 }
}
void _V10_Dvector__for__each_D145_lambda104(VRuntime * runtime, VEnv * upenv, int argc, ...);
asm(
".intel_syntax noprefix\n"
#ifdef __linux__
".type _V10_Dvector__for__each_D145_lambda104, @function\n"
#endif
"_V10_Dvector__for__each_D145_lambda104:\n"
"    cmp " ARGC_REG ", 3\n"
"    je _V20Case0__V10_Dvector__for__each_D145_lambda104\n"
"    cmp " ARGC_REG ", 4\n"
"    je _V20Case1__V10_Dvector__for__each_D145_lambda104\n"
"    cmp " ARGC_REG ", 5\n"
"    je _V20Case2__V10_Dvector__for__each_D145_lambda104\n"
"    cmp " ARGC_REG ", 2\n"
"    jge _V20Case3__V10_Dvector__for__each_D145_lambda104\n"
"    jmp _V20CaseError__V10_Dvector__for__each_D145_lambda104\n"
);
__attribute__((used)) static void _V20CaseError__V10_Dmake__hash__table_D150_lambda110(VRuntime * runtime, VEnv * upenv, int argc, ...) {
 // (_V10_Dmake__hash__table_D150_lambda110 #t (1 (##vcore.make-hash-table (bruijn ##.k.1184 0 0) (##intrinsic ##vcore.eq?) #f 32)) (2 (##vcore.make-hash-table (bruijn ##.k.1185 0 0) (bruijn ##.eq.508 0 1) #f 32)) (3 (##vcore.make-hash-table (bruijn ##.k.1186 0 0) (bruijn ##.eq.509 0 1) (bruijn ##.hash.510 0 2) 32)) (4 (##vcore.make-hash-table (bruijn ##.k.1187 0 0) (bruijn ##.eq.511 0 1) (bruijn ##.hash.512 0 2) (bruijn ##.len.513 0 3))))
 VErrorC(runtime, "Not enough arguments to _V10_Dmake__hash__table_D150_lambda110, got ~D~N"
 "-- expected 1~N"
 "-- expected 2~N"
 "-- expected 3~N"
 "-- expected 4~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V10_Dmake__hash__table_D150_lambda110(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V20Case0__V10_Dmake__hash__table_D150_lambda110" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case0__V10_Dmake__hash__table_D150_lambda110, runtime, upenv, 1, argc, _var0) {
  // (##vcore.make-hash-table (bruijn ##.k.1184 0 0) (##intrinsic ##vcore.eq?) #f 32)
    V_CALL_FUNC(VMakeHashTable, NULL, runtime,
      _var0,
      _V40_V10vcore_Deq_Q,
      VEncodeBool(false),
      VEncodeInt(32l));
 }
}
__attribute__((used)) static void _V20Case1__V10_Dmake__hash__table_D150_lambda110(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V20Case1__V10_Dmake__hash__table_D150_lambda110" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case1__V10_Dmake__hash__table_D150_lambda110, runtime, upenv, 2, argc, _var0, _var1) {
  // (##vcore.make-hash-table (bruijn ##.k.1185 0 0) (bruijn ##.eq.508 0 1) #f 32)
    V_CALL_FUNC(VMakeHashTable, NULL, runtime,
      _var0,
      _var1,
      VEncodeBool(false),
      VEncodeInt(32l));
 }
}
__attribute__((used)) static void _V20Case2__V10_Dmake__hash__table_D150_lambda110(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V20Case2__V10_Dmake__hash__table_D150_lambda110" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case2__V10_Dmake__hash__table_D150_lambda110, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  // (##vcore.make-hash-table (bruijn ##.k.1186 0 0) (bruijn ##.eq.509 0 1) (bruijn ##.hash.510 0 2) 32)
    V_CALL_FUNC(VMakeHashTable, NULL, runtime,
      _var0,
      _var1,
      _var2,
      VEncodeInt(32l));
 }
}
__attribute__((used)) static void _V20Case3__V10_Dmake__hash__table_D150_lambda110(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V20Case3__V10_Dmake__hash__table_D150_lambda110" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case3__V10_Dmake__hash__table_D150_lambda110, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  // (##vcore.make-hash-table (bruijn ##.k.1187 0 0) (bruijn ##.eq.511 0 1) (bruijn ##.hash.512 0 2) (bruijn ##.len.513 0 3))
    V_CALL_FUNC(VMakeHashTable, NULL, runtime,
      _var0,
      _var1,
      _var2,
      _var3);
 }
}
void _V10_Dmake__hash__table_D150_lambda110(VRuntime * runtime, VEnv * upenv, int argc, ...);
asm(
".intel_syntax noprefix\n"
#ifdef __linux__
".type _V10_Dmake__hash__table_D150_lambda110, @function\n"
#endif
"_V10_Dmake__hash__table_D150_lambda110:\n"
"    cmp " ARGC_REG ", 1\n"
"    je _V20Case0__V10_Dmake__hash__table_D150_lambda110\n"
"    cmp " ARGC_REG ", 2\n"
"    je _V20Case1__V10_Dmake__hash__table_D150_lambda110\n"
"    cmp " ARGC_REG ", 3\n"
"    je _V20Case2__V10_Dmake__hash__table_D150_lambda110\n"
"    cmp " ARGC_REG ", 4\n"
"    je _V20Case3__V10_Dmake__hash__table_D150_lambda110\n"
"    jmp _V20CaseError__V10_Dmake__hash__table_D150_lambda110\n"
);
static void _V10_Dhash__table__ref_D153_lambda112(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dhash__table__ref_D153_lambda112" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dhash__table__ref_D153_lambda112, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dhash__table__ref_D153_lambda112, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.error.205 2 194) (bruijn ##.k.1189 0 0) (##string ##.string.1780) (bruijn ##.key.515 1 2))
    V_CALL(upenv->up->vars[194], runtime,
      _var0,
      VEncodePointer(&_V10_Dstring_D1780.sym, VPOINTER_OTHER),
      upenv->vars[2]);
 }
}
__attribute__((used)) static void _V20CaseError__V10_Dhash__table__ref_D153_lambda111(VRuntime * runtime, VEnv * upenv, int argc, ...) {
 // (_V10_Dhash__table__ref_D153_lambda111 #t (3 (##vcore.hash-table-ref (bruijn ##.k.1188 0 0) (bruijn ##.table.514 0 1) (bruijn ##.key.515 0 2) (close _V10_Dhash__table__ref_D153_lambda112))) (4 (##vcore.hash-table-ref (bruijn ##.k.1190 0 0) (bruijn ##.table.516 0 1) (bruijn ##.key.517 0 2) (bruijn ##.thunk.518 0 3))))
 VErrorC(runtime, "Not enough arguments to _V10_Dhash__table__ref_D153_lambda111, got ~D~N"
 "-- expected 3~N"
 "-- expected 4~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V10_Dhash__table__ref_D153_lambda111(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V20Case0__V10_Dhash__table__ref_D153_lambda111" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case0__V10_Dhash__table__ref_D153_lambda111, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // (##vcore.hash-table-ref (bruijn ##.k.1188 0 0) (bruijn ##.table.514 0 1) (bruijn ##.key.515 0 2) (close _V10_Dhash__table__ref_D153_lambda112))
    V_CALL_FUNC(VHashTableRef, NULL, runtime,
      _var0,
      _var1,
      _var2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dhash__table__ref_D153_lambda112, env)}));
 }
}
__attribute__((used)) static void _V20Case1__V10_Dhash__table__ref_D153_lambda111(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V20Case1__V10_Dhash__table__ref_D153_lambda111" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case1__V10_Dhash__table__ref_D153_lambda111, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  // (##vcore.hash-table-ref (bruijn ##.k.1190 0 0) (bruijn ##.table.516 0 1) (bruijn ##.key.517 0 2) (bruijn ##.thunk.518 0 3))
    V_CALL_FUNC(VHashTableRef, NULL, runtime,
      _var0,
      _var1,
      _var2,
      _var3);
 }
}
void _V10_Dhash__table__ref_D153_lambda111(VRuntime * runtime, VEnv * upenv, int argc, ...);
asm(
".intel_syntax noprefix\n"
#ifdef __linux__
".type _V10_Dhash__table__ref_D153_lambda111, @function\n"
#endif
"_V10_Dhash__table__ref_D153_lambda111:\n"
"    cmp " ARGC_REG ", 3\n"
"    je _V20Case0__V10_Dhash__table__ref_D153_lambda111\n"
"    cmp " ARGC_REG ", 4\n"
"    je _V20Case1__V10_Dhash__table__ref_D153_lambda111\n"
"    jmp _V20CaseError__V10_Dhash__table__ref_D153_lambda111\n"
);
static void _V10_Dhash__table__set_B_D154_lambda113(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V10_Dhash__table__set_B_D154_lambda113" };
 VRecordCall2(runtime, &dbg);
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V10_Dhash__table__set_B_D154_lambda113, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dhash__table__set_B_D154_lambda113, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  // (##vcore.hash-table-set! (bruijn ##.k.1191 0 0) (bruijn ##.table.519 0 1) (bruijn ##.key.520 0 2) (bruijn ##.val.521 0 3))
    V_CALL_FUNC(VHashTableSet, NULL, runtime,
      _var0,
      _var1,
      _var2,
      _var3);
 }
}
static void _V10_Dtry__or__gc_D160_lambda116(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V10_Dtry__or__gc_D160_lambda116" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dtry__or__gc_D160_lambda116, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dtry__or__gc_D160_lambda116, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  // (if (bruijn ##.ok.527 0 2) ((bruijn ##.k.1195 0 0) (bruijn ##.ret.526 0 1)) ((bruijn ##.error.205 4 194) (bruijn ##.k.1195 0 0) (bruijn ##.msg.523 3 2)))
if(VDecodeBool(
_var2)) {
    V_CALL(_var0, runtime,
      _var1);
} else {
    V_CALL(upenv->up->up->up->vars[194], runtime,
      _var0,
      upenv->up->up->vars[2]);
}
 }
}
static void _V10_Dtry__or__gc_D160_k281(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dtry__or__gc_D160_k281" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dtry__or__gc_D160_k281, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dtry__or__gc_D160_k281, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.call-with-values.182 3 171) (bruijn ##.k.1193 1 0) (bruijn ##.thunk.522 2 1) (close _V10_Dtry__or__gc_D160_lambda116))
    V_CALL(upenv->up->up->vars[171], runtime,
      upenv->vars[0],
      upenv->up->vars[1],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dtry__or__gc_D160_lambda116, env)}));
 }
}
static void _V10_Dtry__or__gc_D160_lambda115(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V10_Dtry__or__gc_D160_lambda115" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dtry__or__gc_D160_lambda115, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dtry__or__gc_D160_lambda115, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // (if (bruijn ##.ok.525 0 2) ((bruijn ##.k.1193 0 0) (bruijn ##.ret.524 0 1)) (##vcore.garbage-collect (close _V10_Dtry__or__gc_D160_k281) #t))
if(VDecodeBool(
_var2)) {
    V_CALL(_var0, runtime,
      _var1);
} else {
    V_CALL_FUNC(VGarbageCollect, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dtry__or__gc_D160_k281, env)}),
      VEncodeBool(true));
}
 }
}
static void _V10_Dtry__or__gc_D160_lambda114(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V10_Dtry__or__gc_D160_lambda114" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dtry__or__gc_D160_lambda114, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dtry__or__gc_D160_lambda114, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn ##.call-with-values.182 1 171) (bruijn ##.k.1192 0 0) (bruijn ##.thunk.522 0 1) (close _V10_Dtry__or__gc_D160_lambda115))
    V_CALL(upenv->vars[171], runtime,
      _var0,
      _var1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dtry__or__gc_D160_lambda115, env)}));
 }
}
static void _V10_Dclose__port_D161_k282(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dclose__port_D161_k282" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dclose__port_D161_k282, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dclose__port_D161_k282, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##.p.1197 0 0) (##vcore.finalize! (bruijn ##.k.1196 1 0) (bruijn ##.port.528 1 1)) (##vcore.close-stream (bruijn ##.k.1196 1 0) (bruijn ##.port.528 1 1)))
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
static void _V10_Dclose__port_D161_lambda117(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V10_Dclose__port_D161_lambda117" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dclose__port_D161_lambda117, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dclose__port_D161_lambda117, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (##vcore.has-finalizer? (close _V10_Dclose__port_D161_k282) (bruijn ##.port.528 0 1))
    V_CALL_FUNC(VHasFinalizer, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dclose__port_D161_k282, env)}),
      _var1);
 }
}
static void _V10_Dopen__input__file__impl_D162_lambda119(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dopen__input__file__impl_D162_lambda119" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dopen__input__file__impl_D162_lambda119, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dopen__input__file__impl_D162_lambda119, runtime, upenv, 1, argc, _var0) {
  // (##vcore.open-input-stream (bruijn ##.k.1199 0 0) (bruijn ##.path.529 1 1))
    V_CALL_FUNC(VOpenInputStream2, NULL, runtime,
      _var0,
      upenv->vars[1]);
 }
}
static void _V10_Dopen__input__file__impl_D162_k283(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dopen__input__file__impl_D162_k283" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dopen__input__file__impl_D162_k283, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dopen__input__file__impl_D162_k283, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##.ret.530 1 1) (##vcore.set-finalizer! (bruijn ##.k.1202 0 0) (bruijn ##.ret.530 1 1) (##intrinsic ##vcore.close-stream)) ((bruijn ##.k.1202 0 0) #f))
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
static void _V10_Dopen__input__file__impl_D162_k284(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dopen__input__file__impl_D162_k284" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dopen__input__file__impl_D162_k284, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dopen__input__file__impl_D162_k284, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.values.184 3 173) (bruijn ##.k.1200 1 0) (bruijn ##.ret.530 1 1) (bruijn ##.ok.531 1 2))
    V_CALL(upenv->up->up->vars[173], runtime,
      upenv->vars[0],
      upenv->vars[1],
      upenv->vars[2]);
 }
}
static void _V10_Dopen__input__file__impl_D162_lambda120(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V10_Dopen__input__file__impl_D162_lambda120" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dopen__input__file__impl_D162_lambda120, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dopen__input__file__impl_D162_lambda120, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((close _V10_Dopen__input__file__impl_D162_k283) (close _V10_Dopen__input__file__impl_D162_k284))
    V_CALL_FUNC(_V10_Dopen__input__file__impl_D162_k283, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dopen__input__file__impl_D162_k284, env)}));
 }
}
static void _V10_Dopen__input__file__impl_D162_lambda118(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V10_Dopen__input__file__impl_D162_lambda118" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dopen__input__file__impl_D162_lambda118, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dopen__input__file__impl_D162_lambda118, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##.call-with-values.182 1 171) (bruijn ##.k.1198 0 0) (close _V10_Dopen__input__file__impl_D162_lambda119) (close _V10_Dopen__input__file__impl_D162_lambda120))
    V_CALL(upenv->vars[171], runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dopen__input__file__impl_D162_lambda119, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dopen__input__file__impl_D162_lambda120, env)}));
 }
}
static void _V10_Dopen__output__file__impl_D163_lambda122(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dopen__output__file__impl_D163_lambda122" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dopen__output__file__impl_D163_lambda122, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dopen__output__file__impl_D163_lambda122, runtime, upenv, 1, argc, _var0) {
  // (##vcore.open-output-stream (bruijn ##.k.1204 0 0) (bruijn ##.path.532 1 1))
    V_CALL_FUNC(VOpenOutputStream2, NULL, runtime,
      _var0,
      upenv->vars[1]);
 }
}
static void _V10_Dopen__output__file__impl_D163_k285(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dopen__output__file__impl_D163_k285" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dopen__output__file__impl_D163_k285, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dopen__output__file__impl_D163_k285, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##.ret.533 1 1) (##vcore.set-finalizer! (bruijn ##.k.1207 0 0) (bruijn ##.ret.533 1 1) (##intrinsic ##vcore.close-stream)) ((bruijn ##.k.1207 0 0) #f))
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
static void _V10_Dopen__output__file__impl_D163_k286(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dopen__output__file__impl_D163_k286" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dopen__output__file__impl_D163_k286, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dopen__output__file__impl_D163_k286, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.values.184 3 173) (bruijn ##.k.1205 1 0) (bruijn ##.ret.533 1 1) (bruijn ##.ok.534 1 2))
    V_CALL(upenv->up->up->vars[173], runtime,
      upenv->vars[0],
      upenv->vars[1],
      upenv->vars[2]);
 }
}
static void _V10_Dopen__output__file__impl_D163_lambda123(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V10_Dopen__output__file__impl_D163_lambda123" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dopen__output__file__impl_D163_lambda123, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dopen__output__file__impl_D163_lambda123, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((close _V10_Dopen__output__file__impl_D163_k285) (close _V10_Dopen__output__file__impl_D163_k286))
    V_CALL_FUNC(_V10_Dopen__output__file__impl_D163_k285, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dopen__output__file__impl_D163_k286, env)}));
 }
}
static void _V10_Dopen__output__file__impl_D163_lambda121(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V10_Dopen__output__file__impl_D163_lambda121" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dopen__output__file__impl_D163_lambda121, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dopen__output__file__impl_D163_lambda121, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##.call-with-values.182 1 171) (bruijn ##.k.1203 0 0) (close _V10_Dopen__output__file__impl_D163_lambda122) (close _V10_Dopen__output__file__impl_D163_lambda123))
    V_CALL(upenv->vars[171], runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dopen__output__file__impl_D163_lambda122, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dopen__output__file__impl_D163_lambda123, env)}));
 }
}
static void _V10_Dopen__output__string__impl_D164_lambda125(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dopen__output__string__impl_D164_lambda125" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dopen__output__string__impl_D164_lambda125, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dopen__output__string__impl_D164_lambda125, runtime, upenv, 1, argc, _var0) {
  // (##vcore.open-output-string (bruijn ##.k.1209 0 0))
    V_CALL_FUNC(VOpenOutputString2, NULL, runtime,
      _var0);
 }
}
static void _V10_Dopen__output__string__impl_D164_k287(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dopen__output__string__impl_D164_k287" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dopen__output__string__impl_D164_k287, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dopen__output__string__impl_D164_k287, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##.ret.535 1 1) (##vcore.set-finalizer! (bruijn ##.k.1212 0 0) (bruijn ##.ret.535 1 1) (##intrinsic ##vcore.close-stream)) ((bruijn ##.k.1212 0 0) #f))
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
static void _V10_Dopen__output__string__impl_D164_k288(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dopen__output__string__impl_D164_k288" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dopen__output__string__impl_D164_k288, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dopen__output__string__impl_D164_k288, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.values.184 3 173) (bruijn ##.k.1210 1 0) (bruijn ##.ret.535 1 1) (bruijn ##.ok.536 1 2))
    V_CALL(upenv->up->up->vars[173], runtime,
      upenv->vars[0],
      upenv->vars[1],
      upenv->vars[2]);
 }
}
static void _V10_Dopen__output__string__impl_D164_lambda126(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V10_Dopen__output__string__impl_D164_lambda126" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dopen__output__string__impl_D164_lambda126, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dopen__output__string__impl_D164_lambda126, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((close _V10_Dopen__output__string__impl_D164_k287) (close _V10_Dopen__output__string__impl_D164_k288))
    V_CALL_FUNC(_V10_Dopen__output__string__impl_D164_k287, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dopen__output__string__impl_D164_k288, env)}));
 }
}
static void _V10_Dopen__output__string__impl_D164_lambda124(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dopen__output__string__impl_D164_lambda124" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dopen__output__string__impl_D164_lambda124, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dopen__output__string__impl_D164_lambda124, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.call-with-values.182 1 171) (bruijn ##.k.1208 0 0) (close _V10_Dopen__output__string__impl_D164_lambda125) (close _V10_Dopen__output__string__impl_D164_lambda126))
    V_CALL(upenv->vars[171], runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dopen__output__string__impl_D164_lambda125, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dopen__output__string__impl_D164_lambda126, env)}));
 }
}
static void _V10_Dopen__input__file_D165_lambda128(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dopen__input__file_D165_lambda128" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dopen__input__file_D165_lambda128, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dopen__input__file_D165_lambda128, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.open-input-file-impl.162 2 151) (bruijn ##.k.1214 0 0) (bruijn ##.path.537 1 1))
    V_CALL(upenv->up->vars[151], runtime,
      _var0,
      upenv->vars[1]);
 }
}
static void _V10_Dopen__input__file_D165_lambda127(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V10_Dopen__input__file_D165_lambda127" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dopen__input__file_D165_lambda127, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dopen__input__file_D165_lambda127, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##.try-or-gc.160 1 149) (bruijn ##.k.1213 0 0) (close _V10_Dopen__input__file_D165_lambda128) (##string ##.string.1781))
    V_CALL(upenv->vars[149], runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dopen__input__file_D165_lambda128, env)}),
      VEncodePointer(&_V10_Dstring_D1781.sym, VPOINTER_OTHER));
 }
}
static void _V10_Dopen__output__file_D166_lambda130(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dopen__output__file_D166_lambda130" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dopen__output__file_D166_lambda130, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dopen__output__file_D166_lambda130, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.open-output-file-impl.163 2 152) (bruijn ##.k.1216 0 0) (bruijn ##.path.538 1 1))
    V_CALL(upenv->up->vars[152], runtime,
      _var0,
      upenv->vars[1]);
 }
}
static void _V10_Dopen__output__file_D166_lambda129(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V10_Dopen__output__file_D166_lambda129" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dopen__output__file_D166_lambda129, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dopen__output__file_D166_lambda129, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##.try-or-gc.160 1 149) (bruijn ##.k.1215 0 0) (close _V10_Dopen__output__file_D166_lambda130) (##string ##.string.1782))
    V_CALL(upenv->vars[149], runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dopen__output__file_D166_lambda130, env)}),
      VEncodePointer(&_V10_Dstring_D1782.sym, VPOINTER_OTHER));
 }
}
static void _V10_Dopen__output__string_D167_lambda131(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dopen__output__string_D167_lambda131" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dopen__output__string_D167_lambda131, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dopen__output__string_D167_lambda131, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.try-or-gc.160 1 149) (bruijn ##.k.1217 0 0) (bruijn ##.open-output-string-impl.164 1 153) (##string ##.string.1783))
    V_CALL(upenv->vars[149], runtime,
      _var0,
      upenv->vars[153],
      VEncodePointer(&_V10_Dstring_D1783.sym, VPOINTER_OTHER));
 }
}
static void _V10_Dwith__output__to__file_D169_k293(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dwith__output__to__file_D169_k293" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dwith__output__to__file_D169_k293, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dwith__output__to__file_D169_k293, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.k.1218 6 0) (bruijn ##.ret.545 2 0))
    V_CALL(VGetArg(upenv, 6-1, 0), runtime,
      upenv->up->vars[0]);
 }
}
static void _V10_Dwith__output__to__file_D169_k292(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dwith__output__to__file_D169_k292" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dwith__output__to__file_D169_k292, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dwith__output__to__file_D169_k292, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.parameter.0.542 3 0) (close _V10_Dwith__output__to__file_D169_k293) '##vcore.pop-value (bruijn ##.keyval.1.543 2 0))
    V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dwith__output__to__file_D169_k293, env)}),
      _V10vcore_Dpop__value,
      upenv->up->vars[0]);
 }
}
static void _V10_Dwith__output__to__file_D169_k291(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dwith__output__to__file_D169_k291" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dwith__output__to__file_D169_k291, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dwith__output__to__file_D169_k291, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.close-port.161 5 150) (close _V10_Dwith__output__to__file_D169_k292) (bruijn ##.port.541 3 0))
    V_CALL(VGetArg(upenv, 5-1, 150), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dwith__output__to__file_D169_k292, env)}),
      upenv->up->up->vars[0]);
 }
}
static void _V10_Dwith__output__to__file_D169_k290(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dwith__output__to__file_D169_k290" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dwith__output__to__file_D169_k290, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dwith__output__to__file_D169_k290, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.thunk.540 3 2) (close _V10_Dwith__output__to__file_D169_k291))
    V_CALL(upenv->up->up->vars[2], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dwith__output__to__file_D169_k291, env)}));
 }
}
static void _V10_Dwith__output__to__file_D169_lambda133(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dwith__output__to__file_D169_lambda133" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dwith__output__to__file_D169_lambda133, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.parameter.0.542 0 0) (close _V10_Dwith__output__to__file_D169_k290) '##vcore.push-value (bruijn ##.port.541 1 0))
    V_CALL(_var0, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dwith__output__to__file_D169_k290, env)}),
      _V10vcore_Dpush__value,
      upenv->vars[0]);
 }
}
static void _V10_Dwith__output__to__file_D169_k289(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dwith__output__to__file_D169_k289" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dwith__output__to__file_D169_k289, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dwith__output__to__file_D169_k289, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dwith__output__to__file_D169_lambda133) (bruijn ##.current-output-port.157 2 146))
    V_CALL_FUNC(_V10_Dwith__output__to__file_D169_lambda133, env, runtime,
      upenv->up->vars[146]);
 }
}
static void _V10_Dwith__output__to__file_D169_lambda132(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V10_Dwith__output__to__file_D169_lambda132" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dwith__output__to__file_D169_lambda132, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dwith__output__to__file_D169_lambda132, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn ##.open-output-file.166 1 155) (close _V10_Dwith__output__to__file_D169_k289) (bruijn ##.str.539 0 1))
    V_CALL(upenv->vars[155], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dwith__output__to__file_D169_k289, env)}),
      _var1);
 }
}
static void _V10_Dwith__input__from__file_D170_k298(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dwith__input__from__file_D170_k298" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dwith__input__from__file_D170_k298, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dwith__input__from__file_D170_k298, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.k.1221 6 0) (bruijn ##.ret.552 2 0))
    V_CALL(VGetArg(upenv, 6-1, 0), runtime,
      upenv->up->vars[0]);
 }
}
static void _V10_Dwith__input__from__file_D170_k297(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dwith__input__from__file_D170_k297" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dwith__input__from__file_D170_k297, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dwith__input__from__file_D170_k297, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.parameter.3.549 3 0) (close _V10_Dwith__input__from__file_D170_k298) '##vcore.pop-value (bruijn ##.keyval.4.550 2 0))
    V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dwith__input__from__file_D170_k298, env)}),
      _V10vcore_Dpop__value,
      upenv->up->vars[0]);
 }
}
static void _V10_Dwith__input__from__file_D170_k296(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dwith__input__from__file_D170_k296" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dwith__input__from__file_D170_k296, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dwith__input__from__file_D170_k296, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.close-port.161 5 150) (close _V10_Dwith__input__from__file_D170_k297) (bruijn ##.port.548 3 0))
    V_CALL(VGetArg(upenv, 5-1, 150), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dwith__input__from__file_D170_k297, env)}),
      upenv->up->up->vars[0]);
 }
}
static void _V10_Dwith__input__from__file_D170_k295(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dwith__input__from__file_D170_k295" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dwith__input__from__file_D170_k295, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dwith__input__from__file_D170_k295, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.thunk.547 3 2) (close _V10_Dwith__input__from__file_D170_k296))
    V_CALL(upenv->up->up->vars[2], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dwith__input__from__file_D170_k296, env)}));
 }
}
static void _V10_Dwith__input__from__file_D170_lambda135(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dwith__input__from__file_D170_lambda135" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dwith__input__from__file_D170_lambda135, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.parameter.3.549 0 0) (close _V10_Dwith__input__from__file_D170_k295) '##vcore.push-value (bruijn ##.port.548 1 0))
    V_CALL(_var0, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dwith__input__from__file_D170_k295, env)}),
      _V10vcore_Dpush__value,
      upenv->vars[0]);
 }
}
static void _V10_Dwith__input__from__file_D170_k294(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dwith__input__from__file_D170_k294" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dwith__input__from__file_D170_k294, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dwith__input__from__file_D170_k294, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dwith__input__from__file_D170_lambda135) (bruijn ##.current-input-port.159 2 148))
    V_CALL_FUNC(_V10_Dwith__input__from__file_D170_lambda135, env, runtime,
      upenv->up->vars[148]);
 }
}
static void _V10_Dwith__input__from__file_D170_lambda134(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V10_Dwith__input__from__file_D170_lambda134" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dwith__input__from__file_D170_lambda134, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dwith__input__from__file_D170_lambda134, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn ##.open-input-file.165 1 154) (close _V10_Dwith__input__from__file_D170_k294) (bruijn ##.str.546 0 1))
    V_CALL(upenv->vars[154], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dwith__input__from__file_D170_k294, env)}),
      _var1);
 }
}
static void _V10_Dread__char_D171_k299(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dread__char_D171_k299" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dread__char_D171_k299, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dread__char_D171_k299, runtime, upenv, 1, argc, _var0) {
  // (##vcore.read-char (bruijn ##.k.1224 1 0) (bruijn ##.x.1225 0 0))
    V_CALL_FUNC(VReadChar2, NULL, runtime,
      upenv->vars[0],
      _var0);
 }
}
__attribute__((used)) static void _V20CaseError__V10_Dread__char_D171_lambda136(VRuntime * runtime, VEnv * upenv, int argc, ...) {
 // (_V10_Dread__char_D171_lambda136 #t (1 ((bruijn ##.current-input-port.159 1 148) (close _V10_Dread__char_D171_k299))) (2 (##vcore.read-char (bruijn ##.k.1226 0 0) (bruijn ##.port.553 0 1))))
 VErrorC(runtime, "Not enough arguments to _V10_Dread__char_D171_lambda136, got ~D~N"
 "-- expected 1~N"
 "-- expected 2~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V10_Dread__char_D171_lambda136(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V20Case0__V10_Dread__char_D171_lambda136" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case0__V10_Dread__char_D171_lambda136, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.current-input-port.159 1 148) (close _V10_Dread__char_D171_k299))
    V_CALL(upenv->vars[148], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dread__char_D171_k299, env)}));
 }
}
__attribute__((used)) static void _V20Case1__V10_Dread__char_D171_lambda136(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V20Case1__V10_Dread__char_D171_lambda136" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case1__V10_Dread__char_D171_lambda136, runtime, upenv, 2, argc, _var0, _var1) {
  // (##vcore.read-char (bruijn ##.k.1226 0 0) (bruijn ##.port.553 0 1))
    V_CALL_FUNC(VReadChar2, NULL, runtime,
      _var0,
      _var1);
 }
}
void _V10_Dread__char_D171_lambda136(VRuntime * runtime, VEnv * upenv, int argc, ...);
asm(
".intel_syntax noprefix\n"
#ifdef __linux__
".type _V10_Dread__char_D171_lambda136, @function\n"
#endif
"_V10_Dread__char_D171_lambda136:\n"
"    cmp " ARGC_REG ", 1\n"
"    je _V20Case0__V10_Dread__char_D171_lambda136\n"
"    cmp " ARGC_REG ", 2\n"
"    je _V20Case1__V10_Dread__char_D171_lambda136\n"
"    jmp _V20CaseError__V10_Dread__char_D171_lambda136\n"
);
static void _V10_Dread__line_D172_k300(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dread__line_D172_k300" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dread__line_D172_k300, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dread__line_D172_k300, runtime, upenv, 1, argc, _var0) {
  // (##vcore.read-line (bruijn ##.k.1227 1 0) (bruijn ##.x.1228 0 0))
    V_CALL_FUNC(VReadLine2, NULL, runtime,
      upenv->vars[0],
      _var0);
 }
}
__attribute__((used)) static void _V20CaseError__V10_Dread__line_D172_lambda137(VRuntime * runtime, VEnv * upenv, int argc, ...) {
 // (_V10_Dread__line_D172_lambda137 #t (1 ((bruijn ##.current-input-port.159 1 148) (close _V10_Dread__line_D172_k300))) (2 (##vcore.read-line (bruijn ##.k.1229 0 0) (bruijn ##.port.554 0 1))))
 VErrorC(runtime, "Not enough arguments to _V10_Dread__line_D172_lambda137, got ~D~N"
 "-- expected 1~N"
 "-- expected 2~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V10_Dread__line_D172_lambda137(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V20Case0__V10_Dread__line_D172_lambda137" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case0__V10_Dread__line_D172_lambda137, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.current-input-port.159 1 148) (close _V10_Dread__line_D172_k300))
    V_CALL(upenv->vars[148], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dread__line_D172_k300, env)}));
 }
}
__attribute__((used)) static void _V20Case1__V10_Dread__line_D172_lambda137(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V20Case1__V10_Dread__line_D172_lambda137" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case1__V10_Dread__line_D172_lambda137, runtime, upenv, 2, argc, _var0, _var1) {
  // (##vcore.read-line (bruijn ##.k.1229 0 0) (bruijn ##.port.554 0 1))
    V_CALL_FUNC(VReadLine2, NULL, runtime,
      _var0,
      _var1);
 }
}
void _V10_Dread__line_D172_lambda137(VRuntime * runtime, VEnv * upenv, int argc, ...);
asm(
".intel_syntax noprefix\n"
#ifdef __linux__
".type _V10_Dread__line_D172_lambda137, @function\n"
#endif
"_V10_Dread__line_D172_lambda137:\n"
"    cmp " ARGC_REG ", 1\n"
"    je _V20Case0__V10_Dread__line_D172_lambda137\n"
"    cmp " ARGC_REG ", 2\n"
"    je _V20Case1__V10_Dread__line_D172_lambda137\n"
"    jmp _V20CaseError__V10_Dread__line_D172_lambda137\n"
);
static void _V10_Dread_D173_k301(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dread_D173_k301" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dread_D173_k301, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dread_D173_k301, runtime, upenv, 1, argc, _var0) {
  // (##vcore.read (bruijn ##.k.1230 1 0) (bruijn ##.x.1231 0 0))
    V_CALL_FUNC(VRead2, NULL, runtime,
      upenv->vars[0],
      _var0);
 }
}
__attribute__((used)) static void _V20CaseError__V10_Dread_D173_lambda138(VRuntime * runtime, VEnv * upenv, int argc, ...) {
 // (_V10_Dread_D173_lambda138 #t (1 ((bruijn ##.current-input-port.159 1 148) (close _V10_Dread_D173_k301))) (2 (##vcore.read (bruijn ##.k.1232 0 0) (bruijn ##.port.555 0 1))))
 VErrorC(runtime, "Not enough arguments to _V10_Dread_D173_lambda138, got ~D~N"
 "-- expected 1~N"
 "-- expected 2~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V10_Dread_D173_lambda138(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V20Case0__V10_Dread_D173_lambda138" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case0__V10_Dread_D173_lambda138, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.current-input-port.159 1 148) (close _V10_Dread_D173_k301))
    V_CALL(upenv->vars[148], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dread_D173_k301, env)}));
 }
}
__attribute__((used)) static void _V20Case1__V10_Dread_D173_lambda138(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V20Case1__V10_Dread_D173_lambda138" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case1__V10_Dread_D173_lambda138, runtime, upenv, 2, argc, _var0, _var1) {
  // (##vcore.read (bruijn ##.k.1232 0 0) (bruijn ##.port.555 0 1))
    V_CALL_FUNC(VRead2, NULL, runtime,
      _var0,
      _var1);
 }
}
void _V10_Dread_D173_lambda138(VRuntime * runtime, VEnv * upenv, int argc, ...);
asm(
".intel_syntax noprefix\n"
#ifdef __linux__
".type _V10_Dread_D173_lambda138, @function\n"
#endif
"_V10_Dread_D173_lambda138:\n"
"    cmp " ARGC_REG ", 1\n"
"    je _V20Case0__V10_Dread_D173_lambda138\n"
"    cmp " ARGC_REG ", 2\n"
"    je _V20Case1__V10_Dread_D173_lambda138\n"
"    jmp _V20CaseError__V10_Dread_D173_lambda138\n"
);
static void _V10_Dnewline_D174_k302(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dnewline_D174_k302" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dnewline_D174_k302, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dnewline_D174_k302, runtime, upenv, 1, argc, _var0) {
  // (##vcore.newline (bruijn ##.k.1233 1 0) (bruijn ##.x.1234 0 0))
    V_CALL_FUNC(VNewline2, NULL, runtime,
      upenv->vars[0],
      _var0);
 }
}
__attribute__((used)) static void _V20CaseError__V10_Dnewline_D174_lambda139(VRuntime * runtime, VEnv * upenv, int argc, ...) {
 // (_V10_Dnewline_D174_lambda139 #t (1 ((bruijn ##.current-output-port.157 1 146) (close _V10_Dnewline_D174_k302))) (2 (##vcore.newline (bruijn ##.k.1235 0 0) (bruijn ##.port.556 0 1))))
 VErrorC(runtime, "Not enough arguments to _V10_Dnewline_D174_lambda139, got ~D~N"
 "-- expected 1~N"
 "-- expected 2~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V10_Dnewline_D174_lambda139(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V20Case0__V10_Dnewline_D174_lambda139" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case0__V10_Dnewline_D174_lambda139, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.current-output-port.157 1 146) (close _V10_Dnewline_D174_k302))
    V_CALL(upenv->vars[146], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dnewline_D174_k302, env)}));
 }
}
__attribute__((used)) static void _V20Case1__V10_Dnewline_D174_lambda139(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V20Case1__V10_Dnewline_D174_lambda139" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case1__V10_Dnewline_D174_lambda139, runtime, upenv, 2, argc, _var0, _var1) {
  // (##vcore.newline (bruijn ##.k.1235 0 0) (bruijn ##.port.556 0 1))
    V_CALL_FUNC(VNewline2, NULL, runtime,
      _var0,
      _var1);
 }
}
void _V10_Dnewline_D174_lambda139(VRuntime * runtime, VEnv * upenv, int argc, ...);
asm(
".intel_syntax noprefix\n"
#ifdef __linux__
".type _V10_Dnewline_D174_lambda139, @function\n"
#endif
"_V10_Dnewline_D174_lambda139:\n"
"    cmp " ARGC_REG ", 1\n"
"    je _V20Case0__V10_Dnewline_D174_lambda139\n"
"    cmp " ARGC_REG ", 2\n"
"    je _V20Case1__V10_Dnewline_D174_lambda139\n"
"    jmp _V20CaseError__V10_Dnewline_D174_lambda139\n"
);
static void _V10_Dloop_D560_k310(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D560_k310" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D560_k310, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D560_k310, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.loop.560 6 0) (bruijn ##.k.1240 5 0) (bruijn ##.x.1244 0 0))
    V_CALL(VGetArg(upenv, 6-1, 0), runtime,
      VGetArg(upenv, 5-1, 0),
      _var0);
 }
}
static void _V10_Dloop_D560_k309(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D560_k309" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D560_k309, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D560_k309, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cdr.76 10 65) (close _V10_Dloop_D560_k310) (bruijn ##.xs.561 4 1))
    V_CALL(VGetArg(upenv, 10-1, 65), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D560_k310, env)}),
      upenv->up->up->up->vars[1]);
 }
}
static void _V10_Dloop_D560_k308(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D560_k308" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D560_k308, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D560_k308, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.printout.177 9 166) (close _V10_Dloop_D560_k309) (bruijn ##.x.1245 0 0) (bruijn ##.write?.558 8 2) (bruijn ##.port.559 8 3))
    V_CALL(VGetArg(upenv, 9-1, 166), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D560_k309, env)}),
      _var0,
      VGetArg(upenv, 8-1, 2),
      VGetArg(upenv, 8-1, 3));
 }
}
static void _V10_Dloop_D560_k307(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D560_k307" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D560_k307, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D560_k307, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.car.75 8 64) (close _V10_Dloop_D560_k308) (bruijn ##.xs.561 2 1))
    V_CALL(VGetArg(upenv, 8-1, 64), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D560_k308, env)}),
      upenv->up->vars[1]);
 }
}
static void _V10_Dloop_D560_k312(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D560_k312" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D560_k312, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D560_k312, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.printout.177 9 166) (bruijn ##.k.1240 3 0) (bruijn ##.xs.561 3 1) (bruijn ##.write?.558 8 2) (bruijn ##.port.559 8 3))
    V_CALL(VGetArg(upenv, 9-1, 166), runtime,
      upenv->up->up->vars[0],
      upenv->up->up->vars[1],
      VGetArg(upenv, 8-1, 2),
      VGetArg(upenv, 8-1, 3));
 }
}
static void _V10_Dloop_D560_k311(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D560_k311" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D560_k311, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D560_k311, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1246 0 0) ((bruijn ##.k.1240 2 0) 'ok) (##vcore.display-word (close _V10_Dloop_D560_k312) (##string ##.string.1785) (bruijn ##.port.559 7 3)))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->up->vars[0], runtime,
      _V0ok);
} else {
    V_CALL_FUNC(VDisplay2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D560_k312, env)}),
      VEncodePointer(&_V10_Dstring_D1785.sym, VPOINTER_OTHER),
      VGetArg(upenv, 7-1, 3));
}
 }
}
static void _V10_Dloop_D560_k306(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D560_k306" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D560_k306, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D560_k306, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1241 0 0) (##vcore.display-word (close _V10_Dloop_D560_k307) (##string ##.string.1784) (bruijn ##.port.559 6 3)) ((bruijn ##.null?.11 7 0) (close _V10_Dloop_D560_k311) (bruijn ##.xs.561 1 1)))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(VDisplay2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D560_k307, env)}),
      VEncodePointer(&_V10_Dstring_D1784.sym, VPOINTER_OTHER),
      VGetArg(upenv, 6-1, 3));
} else {
    V_CALL(VGetArg(upenv, 7-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D560_k311, env)}),
      upenv->vars[1]);
}
 }
}
static void _V10_Dloop_D560_lambda141(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V10_Dloop_D560_lambda141" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D560_lambda141, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D560_lambda141, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##.pair?.14 6 3) (close _V10_Dloop_D560_k306) (bruijn ##.xs.561 0 1))
    V_CALL(VGetArg(upenv, 6-1, 3), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D560_k306, env)}),
      _var1);
 }
}
static void _V10_Dprintout__list_D175_k314(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dprintout__list_D175_k314" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprintout__list_D175_k314, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dprintout__list_D175_k314, runtime, upenv, 1, argc, _var0) {
  // (##vcore.display-word (bruijn ##.k.1236 6 0) (##string ##.string.1786) (bruijn ##.port.559 6 3))
    V_CALL_FUNC(VDisplay2, NULL, runtime,
      VGetArg(upenv, 6-1, 0),
      VEncodePointer(&_V10_Dstring_D1786.sym, VPOINTER_OTHER),
      VGetArg(upenv, 6-1, 3));
 }
}
static void _V10_Dprintout__list_D175_k313(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dprintout__list_D175_k313" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprintout__list_D175_k313, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dprintout__list_D175_k313, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.loop.560 1 0) (close _V10_Dprintout__list_D175_k314) (bruijn ##.x.1248 0 0))
    V_CALL(upenv->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprintout__list_D175_k314, env)}),
      _var0);
 }
}
static void _V10_Dprintout__list_D175_k305(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dprintout__list_D175_k305" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprintout__list_D175_k305, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dprintout__list_D175_k305, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (letrec 1 ((close _V10_Dloop_D560_lambda141)) ((bruijn ##.cdr.76 5 65) (close _V10_Dprintout__list_D175_k313) (bruijn ##.x.557 4 1)))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D560_lambda141, env)});
    V_CALL(VGetArg(upenv, 5-1, 65), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprintout__list_D175_k313, env)}),
      upenv->up->up->up->vars[1]);
    }
 }
}
static void _V10_Dprintout__list_D175_k304(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dprintout__list_D175_k304" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprintout__list_D175_k304, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dprintout__list_D175_k304, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.printout.177 3 166) (close _V10_Dprintout__list_D175_k305) (bruijn ##.x.1249 0 0) (bruijn ##.write?.558 2 2) (bruijn ##.port.559 2 3))
    V_CALL(upenv->up->up->vars[166], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprintout__list_D175_k305, env)}),
      _var0,
      upenv->up->vars[2],
      upenv->up->vars[3]);
 }
}
static void _V10_Dprintout__list_D175_k303(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dprintout__list_D175_k303" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprintout__list_D175_k303, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dprintout__list_D175_k303, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.car.75 2 64) (close _V10_Dprintout__list_D175_k304) (bruijn ##.x.557 1 1))
    V_CALL(upenv->up->vars[64], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprintout__list_D175_k304, env)}),
      upenv->vars[1]);
 }
}
static void _V10_Dprintout__list_D175_lambda140(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V10_Dprintout__list_D175_lambda140" };
 VRecordCall2(runtime, &dbg);
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprintout__list_D175_lambda140, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dprintout__list_D175_lambda140, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // (##vcore.display-word (close _V10_Dprintout__list_D175_k303) (##string ##.string.1787) (bruijn ##.port.559 0 3))
    V_CALL_FUNC(VDisplay2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprintout__list_D175_k303, env)}),
      VEncodePointer(&_V10_Dstring_D1787.sym, VPOINTER_OTHER),
      _var3);
 }
}
static void _V10_Dprintout__quotation_D176_k319(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dprintout__quotation_D176_k319" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprintout__quotation_D176_k319, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dprintout__quotation_D176_k319, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.printout.177 6 166) (bruijn ##.k.1250 5 0) (bruijn ##.x.1252 0 0) (bruijn ##.write?.563 5 2) (bruijn ##.port.564 5 3))
    V_CALL(VGetArg(upenv, 6-1, 166), runtime,
      VGetArg(upenv, 5-1, 0),
      _var0,
      VGetArg(upenv, 5-1, 2),
      VGetArg(upenv, 5-1, 3));
 }
}
static void _V10_Dprintout__quotation_D176_k318(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dprintout__quotation_D176_k318" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprintout__quotation_D176_k318, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dprintout__quotation_D176_k318, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cadr.80 5 69) (close _V10_Dprintout__quotation_D176_k319) (bruijn ##.x.562 4 1))
    V_CALL(VGetArg(upenv, 5-1, 69), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprintout__quotation_D176_k319, env)}),
      upenv->up->up->up->vars[1]);
 }
}
static void _V10_Dprintout__quotation_D176_k317(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dprintout__quotation_D176_k317" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprintout__quotation_D176_k317, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dprintout__quotation_D176_k317, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.display-word (close _V10_Dprintout__quotation_D176_k318) (bruijn ##.x.1253 0 0) (bruijn ##.port.564 3 3))
    V_CALL_FUNC(VDisplay2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprintout__quotation_D176_k318, env)}),
      _var0,
      upenv->up->up->vars[3]);
 }
}
static void _V10_Dprintout__quotation_D176_k316(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dprintout__quotation_D176_k316" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprintout__quotation_D176_k316, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dprintout__quotation_D176_k316, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cdr.76 3 65) (close _V10_Dprintout__quotation_D176_k317) (bruijn ##.x.1254 0 0))
    V_CALL(upenv->up->up->vars[65], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprintout__quotation_D176_k317, env)}),
      _var0);
 }
}
static void _V10_Dprintout__quotation_D176_k315(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dprintout__quotation_D176_k315" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprintout__quotation_D176_k315, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dprintout__quotation_D176_k315, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.assv.124 2 113) (close _V10_Dprintout__quotation_D176_k316) (bruijn ##.x.1255 0 0) (##inline ##vcore.qcons (##inline ##vcore.qcons 'quote '(##string ##.string.1788)) (##inline ##vcore.qcons (##inline ##vcore.qcons 'quasiquote '(##string ##.string.1789)) (##inline ##vcore.qcons (##inline ##vcore.qcons 'unquote '(##string ##.string.1790)) (##inline ##vcore.qcons (##inline ##vcore.qcons 'unquote-splicing '(##string ##.string.1791)) '())))))
    V_CALL(upenv->up->vars[113], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprintout__quotation_D176_k316, env)}),
      _var0,
      VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0quote,
        VEncodePointer(&_V10_Dstring_D1788.sym, VPOINTER_OTHER)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0quasiquote,
        VEncodePointer(&_V10_Dstring_D1789.sym, VPOINTER_OTHER)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0unquote,
        VEncodePointer(&_V10_Dstring_D1790.sym, VPOINTER_OTHER)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0unquote__splicing,
        VEncodePointer(&_V10_Dstring_D1791.sym, VPOINTER_OTHER)),
        VNULL)))));
 }
}
static void _V10_Dprintout__quotation_D176_lambda142(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V10_Dprintout__quotation_D176_lambda142" };
 VRecordCall2(runtime, &dbg);
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprintout__quotation_D176_lambda142, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dprintout__quotation_D176_lambda142, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // ((bruijn ##.car.75 1 64) (close _V10_Dprintout__quotation_D176_k315) (bruijn ##.x.562 0 1))
    V_CALL(upenv->vars[64], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprintout__quotation_D176_k315, env)}),
      _var1);
 }
}
static void _V10_Dprintout_D177_k322(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dprintout_D177_k322" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprintout_D177_k322, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dprintout_D177_k322, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##.p.1266 0 0) ((bruijn ##.printout-quotation.176 4 165) (bruijn ##.k.1264 3 0) (bruijn ##.x.565 3 1) (bruijn ##.write?.566 3 2) (bruijn ##.port.567 3 3)) ((bruijn ##.printout-list.175 4 164) (bruijn ##.k.1264 3 0) (bruijn ##.x.565 3 1) (bruijn ##.write?.566 3 2) (bruijn ##.port.567 3 3)))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->up->up->up->vars[165], runtime,
      upenv->up->up->vars[0],
      upenv->up->up->vars[1],
      upenv->up->up->vars[2],
      upenv->up->up->vars[3]);
} else {
    V_CALL(upenv->up->up->up->vars[164], runtime,
      upenv->up->up->vars[0],
      upenv->up->up->vars[1],
      upenv->up->up->vars[2],
      upenv->up->up->vars[3]);
}
 }
}
static void _V10_Dprintout_D177_k321(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dprintout_D177_k321" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprintout_D177_k321, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dprintout_D177_k321, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.memq.120 3 109) (close _V10_Dprintout_D177_k322) (bruijn ##.x.1267 0 0) (##inline ##vcore.qcons 'quote (##inline ##vcore.qcons 'quasiquote (##inline ##vcore.qcons 'unquote (##inline ##vcore.qcons 'unquote-splicing '())))))
    V_CALL(upenv->up->up->vars[109], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprintout_D177_k322, env)}),
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
static void _V10_Dloop_D569_k328(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D569_k328" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D569_k328, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D569_k328, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##.p.1281 1 0) ((bruijn ##.k.1282 0 0) #f) (##vcore.display-word (bruijn ##.k.1282 0 0) (##string ##.string.1784) (bruijn ##.port.567 9 3)))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
} else {
    V_CALL_FUNC(VDisplay2, NULL, runtime,
      _var0,
      VEncodePointer(&_V10_Dstring_D1784.sym, VPOINTER_OTHER),
      VGetArg(upenv, 9-1, 3));
}
 }
}
static void _V10_Dloop_D569_k332(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D569_k332" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D569_k332, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D569_k332, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.loop.569 7 0) (bruijn ##.k.1275 6 0) (bruijn ##.x.1279 0 0))
    V_CALL(VGetArg(upenv, 7-1, 0), runtime,
      VGetArg(upenv, 6-1, 0),
      _var0);
 }
}
static void _V10_Dloop_D569_k331(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D569_k331" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D569_k331, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D569_k331, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.+.47 12 36) (close _V10_Dloop_D569_k332) (bruijn ##.i.570 5 1) 1)
    V_CALL(VGetArg(upenv, 12-1, 36), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D569_k332, env)}),
      VGetArg(upenv, 5-1, 1),
      VEncodeInt(1l));
 }
}
static void _V10_Dloop_D569_k330(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D569_k330" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D569_k330, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D569_k330, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.printout.177 11 166) (close _V10_Dloop_D569_k331) (bruijn ##.x.1280 0 0) (bruijn ##.write?.566 10 2) (bruijn ##.port.567 10 3))
    V_CALL(VGetArg(upenv, 11-1, 166), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D569_k331, env)}),
      _var0,
      VGetArg(upenv, 10-1, 2),
      VGetArg(upenv, 10-1, 3));
 }
}
static void _V10_Dloop_D569_k329(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D569_k329" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D569_k329, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D569_k329, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.vector-ref.141 10 130) (close _V10_Dloop_D569_k330) (bruijn ##.x.565 9 1) (bruijn ##.i.570 3 1))
    V_CALL(VGetArg(upenv, 10-1, 130), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D569_k330, env)}),
      VGetArg(upenv, 9-1, 1),
      upenv->up->up->vars[1]);
 }
}
static void _V10_Dloop_D569_k327(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D569_k327" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D569_k327, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D569_k327, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dloop_D569_k328) (close _V10_Dloop_D569_k329))
    V_CALL_FUNC(_V10_Dloop_D569_k328, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D569_k329, env)}));
 }
}
static void _V10_Dloop_D569_k326(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D569_k326" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D569_k326, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D569_k326, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1276 0 0) ((bruijn ##.k.1275 1 0) #f) ((bruijn ##.eq?.26 8 15) (close _V10_Dloop_D569_k327) (bruijn ##.i.570 1 1) 0))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
} else {
    V_CALL(VGetArg(upenv, 8-1, 15), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D569_k327, env)}),
      upenv->vars[1],
      VEncodeInt(0l));
}
 }
}
static void _V10_Dloop_D569_lambda144(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V10_Dloop_D569_lambda144" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D569_lambda144, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D569_lambda144, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##.eq?.26 7 15) (close _V10_Dloop_D569_k326) (bruijn ##.i.570 0 1) (bruijn ##.len.568 3 0))
    V_CALL(VGetArg(upenv, 7-1, 15), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D569_k326, env)}),
      _var1,
      upenv->up->up->vars[0]);
 }
}
static void _V10_Dprintout_D177_k333(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dprintout_D177_k333" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprintout_D177_k333, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dprintout_D177_k333, runtime, upenv, 1, argc, _var0) {
  // (##vcore.display-word (bruijn ##.k.1264 6 0) (##string ##.string.1786) (bruijn ##.port.567 6 3))
    V_CALL_FUNC(VDisplay2, NULL, runtime,
      VGetArg(upenv, 6-1, 0),
      VEncodePointer(&_V10_Dstring_D1786.sym, VPOINTER_OTHER),
      VGetArg(upenv, 6-1, 3));
 }
}
static void _V10_Dprintout_D177_k325(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dprintout_D177_k325" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprintout_D177_k325, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dprintout_D177_k325, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (letrec 1 ((close _V10_Dloop_D569_lambda144)) ((bruijn ##.loop.569 0 0) (close _V10_Dprintout_D177_k333) 0))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D569_lambda144, env)});
    V_CALL(env->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprintout_D177_k333, env)}),
      VEncodeInt(0l));
    }
 }
}
static void _V10_Dprintout_D177_k324(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dprintout_D177_k324" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprintout_D177_k324, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dprintout_D177_k324, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.display-word (close _V10_Dprintout_D177_k325) (##string ##.string.1792) (bruijn ##.port.567 3 3))
    V_CALL_FUNC(VDisplay2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprintout_D177_k325, env)}),
      VEncodePointer(&_V10_Dstring_D1792.sym, VPOINTER_OTHER),
      upenv->up->up->vars[3]);
 }
}
static void _V10_Dprintout_D177_k323(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dprintout_D177_k323" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprintout_D177_k323, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dprintout_D177_k323, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1272 0 0) ((bruijn ##.vector-length.143 3 132) (close _V10_Dprintout_D177_k324) (bruijn ##.x.565 2 1)) (if (bruijn ##.write?.566 2 2) (##vcore.write (bruijn ##.k.1264 2 0) (bruijn ##.x.565 2 1) (bruijn ##.port.567 2 3)) (##vcore.display-word (bruijn ##.k.1264 2 0) (bruijn ##.x.565 2 1) (bruijn ##.port.567 2 3))))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->up->up->vars[132], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprintout_D177_k324, env)}),
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
static void _V10_Dprintout_D177_k320(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dprintout_D177_k320" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprintout_D177_k320, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dprintout_D177_k320, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1265 0 0) ((bruijn ##.car.75 2 64) (close _V10_Dprintout_D177_k321) (bruijn ##.x.565 1 1)) ((bruijn ##.vector?.15 2 4) (close _V10_Dprintout_D177_k323) (bruijn ##.x.565 1 1)))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->up->vars[64], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprintout_D177_k321, env)}),
      upenv->vars[1]);
} else {
    V_CALL(upenv->up->vars[4], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprintout_D177_k323, env)}),
      upenv->vars[1]);
}
 }
}
static void _V10_Dprintout_D177_lambda143(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V10_Dprintout_D177_lambda143" };
 VRecordCall2(runtime, &dbg);
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprintout_D177_lambda143, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dprintout_D177_lambda143, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // ((bruijn ##.pair?.14 1 3) (close _V10_Dprintout_D177_k320) (bruijn ##.x.565 0 1))
    V_CALL(upenv->vars[3], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprintout_D177_k320, env)}),
      _var1);
 }
}
static void _V10_Ddisplay_D178_k334(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Ddisplay_D178_k334" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddisplay_D178_k334, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddisplay_D178_k334, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.printout.177 2 166) (bruijn ##.k.1283 1 0) (bruijn ##.x.571 1 1) #f (bruijn ##.x.1284 0 0))
    V_CALL(upenv->up->vars[166], runtime,
      upenv->vars[0],
      upenv->vars[1],
      VEncodeBool(false),
      _var0);
 }
}
__attribute__((used)) static void _V20CaseError__V10_Ddisplay_D178_lambda145(VRuntime * runtime, VEnv * upenv, int argc, ...) {
 // (_V10_Ddisplay_D178_lambda145 #t (2 ((bruijn ##.current-output-port.157 1 146) (close _V10_Ddisplay_D178_k334))) (3 ((bruijn ##.printout.177 1 166) (bruijn ##.k.1285 0 0) (bruijn ##.x.572 0 1) #f (bruijn ##.port.573 0 2))))
 VErrorC(runtime, "Not enough arguments to _V10_Ddisplay_D178_lambda145, got ~D~N"
 "-- expected 2~N"
 "-- expected 3~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V10_Ddisplay_D178_lambda145(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V20Case0__V10_Ddisplay_D178_lambda145" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case0__V10_Ddisplay_D178_lambda145, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##.current-output-port.157 1 146) (close _V10_Ddisplay_D178_k334))
    V_CALL(upenv->vars[146], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddisplay_D178_k334, env)}));
 }
}
__attribute__((used)) static void _V20Case1__V10_Ddisplay_D178_lambda145(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V20Case1__V10_Ddisplay_D178_lambda145" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case1__V10_Ddisplay_D178_lambda145, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  // ((bruijn ##.printout.177 1 166) (bruijn ##.k.1285 0 0) (bruijn ##.x.572 0 1) #f (bruijn ##.port.573 0 2))
    V_CALL(upenv->vars[166], runtime,
      _var0,
      _var1,
      VEncodeBool(false),
      _var2);
 }
}
void _V10_Ddisplay_D178_lambda145(VRuntime * runtime, VEnv * upenv, int argc, ...);
asm(
".intel_syntax noprefix\n"
#ifdef __linux__
".type _V10_Ddisplay_D178_lambda145, @function\n"
#endif
"_V10_Ddisplay_D178_lambda145:\n"
"    cmp " ARGC_REG ", 2\n"
"    je _V20Case0__V10_Ddisplay_D178_lambda145\n"
"    cmp " ARGC_REG ", 3\n"
"    je _V20Case1__V10_Ddisplay_D178_lambda145\n"
"    jmp _V20CaseError__V10_Ddisplay_D178_lambda145\n"
);
static void _V10_Dwrite_D179_k335(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dwrite_D179_k335" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dwrite_D179_k335, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dwrite_D179_k335, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.printout.177 2 166) (bruijn ##.k.1286 1 0) (bruijn ##.x.574 1 1) #t (bruijn ##.x.1287 0 0))
    V_CALL(upenv->up->vars[166], runtime,
      upenv->vars[0],
      upenv->vars[1],
      VEncodeBool(true),
      _var0);
 }
}
__attribute__((used)) static void _V20CaseError__V10_Dwrite_D179_lambda146(VRuntime * runtime, VEnv * upenv, int argc, ...) {
 // (_V10_Dwrite_D179_lambda146 #t (2 ((bruijn ##.current-output-port.157 1 146) (close _V10_Dwrite_D179_k335))) (3 ((bruijn ##.printout.177 1 166) (bruijn ##.k.1288 0 0) (bruijn ##.x.575 0 1) #t (bruijn ##.port.576 0 2))))
 VErrorC(runtime, "Not enough arguments to _V10_Dwrite_D179_lambda146, got ~D~N"
 "-- expected 2~N"
 "-- expected 3~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V10_Dwrite_D179_lambda146(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V20Case0__V10_Dwrite_D179_lambda146" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case0__V10_Dwrite_D179_lambda146, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##.current-output-port.157 1 146) (close _V10_Dwrite_D179_k335))
    V_CALL(upenv->vars[146], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dwrite_D179_k335, env)}));
 }
}
__attribute__((used)) static void _V20Case1__V10_Dwrite_D179_lambda146(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V20Case1__V10_Dwrite_D179_lambda146" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case1__V10_Dwrite_D179_lambda146, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  // ((bruijn ##.printout.177 1 166) (bruijn ##.k.1288 0 0) (bruijn ##.x.575 0 1) #t (bruijn ##.port.576 0 2))
    V_CALL(upenv->vars[166], runtime,
      _var0,
      _var1,
      VEncodeBool(true),
      _var2);
 }
}
void _V10_Dwrite_D179_lambda146(VRuntime * runtime, VEnv * upenv, int argc, ...);
asm(
".intel_syntax noprefix\n"
#ifdef __linux__
".type _V10_Dwrite_D179_lambda146, @function\n"
#endif
"_V10_Dwrite_D179_lambda146:\n"
"    cmp " ARGC_REG ", 2\n"
"    je _V20Case0__V10_Dwrite_D179_lambda146\n"
"    cmp " ARGC_REG ", 3\n"
"    je _V20Case1__V10_Dwrite_D179_lambda146\n"
"    jmp _V20CaseError__V10_Dwrite_D179_lambda146\n"
);
static void _V10_Dvalues_D184_lambda148(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V10_Dvalues_D184_lambda148" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dvalues_D184_lambda148, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dvalues_D184_lambda148, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##.apply.183 2 172) (bruijn ##.k.1290 0 0) (bruijn ##.k.578 0 1) (bruijn ##.args.577 1 1))
    V_CALL(upenv->up->vars[172], runtime,
      _var0,
      _var1,
      upenv->vars[1]);
 }
}
static void _V10_Dvalues_D184_lambda147(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, ...) {
 static VDebugInfo dbg = { "_V10_Dvalues_D184_lambda147" };
 VRecordCall2(runtime, &dbg);
 if(argc < 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dvalues_D184_lambda147, got ~D~N"
  "-- expected 1 or more~N"
  , argc);
 }
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 1, argc, _var0);
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dvalues_D184_lambda147, runtime, upenv, 1, argc, _var0, _varargs) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _varargs;
  // ((bruijn ##.call/cc.180 1 169) (bruijn ##.k.1289 0 0) (close _V10_Dvalues_D184_lambda148))
    V_CALL(upenv->vars[169], runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dvalues_D184_lambda148, env)}));
 }
}
static void _V10_Dmake__parameter_D187_lambda150(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V10_Dmake__parameter_D187_lambda150" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmake__parameter_D187_lambda150, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dmake__parameter_D187_lambda150, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##.k.1292 0 0) (bruijn ##.x.580 0 1))
    V_CALL(_var0, runtime,
      _var1);
 }
}
static void _V10_Dmake__parameter_D187_k339(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dmake__parameter_D187_k339" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmake__parameter_D187_k339, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dmake__parameter_D187_k339, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##.lookup.588 0 0) ((bruijn ##.cdr.76 7 65) (bruijn ##.k.1297 2 0) (bruijn ##.lookup.588 0 0)) ((bruijn ##.k.1297 2 0) (bruijn ##.init.587 3 1)))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 7-1, 65), runtime,
      upenv->up->vars[0],
      _var0);
} else {
    V_CALL(upenv->up->vars[0], runtime,
      upenv->up->up->vars[1]);
}
 }
}
static void _V10_Dmake__parameter_D187_k338(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dmake__parameter_D187_k338" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmake__parameter_D187_k338, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dmake__parameter_D187_k338, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.assq.123 6 112) (close _V10_Dmake__parameter_D187_k339) (bruijn ##.key.586 2 0) (bruijn ##.x.1298 0 0))
    V_CALL(VGetArg(upenv, 6-1, 112), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmake__parameter_D187_k339, env)}),
      upenv->up->vars[0],
      _var0);
 }
}
static void _V10_Dmake__parameter_D187_k341(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dmake__parameter_D187_k341" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmake__parameter_D187_k341, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dmake__parameter_D187_k341, runtime, upenv, 1, argc, _var0) {
  // (##vcore.push-dynamic (bruijn ##.k.1299 3 0) (bruijn ##.key.586 4 0) (bruijn ##.x.1301 0 0))
    V_CALL_FUNC(VPushDynamic, NULL, runtime,
      upenv->up->up->vars[0],
      upenv->up->up->up->vars[0],
      _var0);
 }
}
static void _V10_Dmake__parameter_D187_k342(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dmake__parameter_D187_k342" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmake__parameter_D187_k342, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dmake__parameter_D187_k342, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##.p.1302 0 0) (##vcore.pop-dynamic (bruijn ##.k.1299 3 0) (bruijn ##.x.590 3 2)) ((bruijn ##.error.205 8 194) (bruijn ##.k.1299 3 0) (##string ##.string.1793)))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(VPopDynamic, NULL, runtime,
      upenv->up->up->vars[0],
      upenv->up->up->vars[2]);
} else {
    V_CALL(VGetArg(upenv, 8-1, 194), runtime,
      upenv->up->up->vars[0],
      VEncodePointer(&_V10_Dstring_D1793.sym, VPOINTER_OTHER));
}
 }
}
static void _V10_Dmake__parameter_D187_k340(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dmake__parameter_D187_k340" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmake__parameter_D187_k340, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dmake__parameter_D187_k340, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1300 0 0) ((bruijn ##.convert.584 6 2) (close _V10_Dmake__parameter_D187_k341) (bruijn ##.x.590 2 2)) ((bruijn ##.eqv?.29 7 18) (close _V10_Dmake__parameter_D187_k342) (bruijn ##.x.6.591 1 0) '##vcore.pop-value))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 6-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmake__parameter_D187_k341, env)}),
      upenv->up->vars[2]);
} else {
    V_CALL(VGetArg(upenv, 7-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmake__parameter_D187_k342, env)}),
      upenv->vars[0],
      _V10vcore_Dpop__value);
}
 }
}
static void _V10_Dmake__parameter_D187_lambda153(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dmake__parameter_D187_lambda153" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dmake__parameter_D187_lambda153, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.eqv?.29 6 18) (close _V10_Dmake__parameter_D187_k340) (bruijn ##.x.6.591 0 0) '##vcore.push-value)
    V_CALL(VGetArg(upenv, 6-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmake__parameter_D187_k340, env)}),
      _var0,
      _V10vcore_Dpush__value);
 }
}
__attribute__((used)) static void _V20CaseError__V10_Dmake__parameter_D187_lambda152(VRuntime * runtime, VEnv * upenv, int argc, ...) {
 // (_V10_Dmake__parameter_D187_lambda152 #t (1 (##vcore.get-dynamics (close _V10_Dmake__parameter_D187_k338))) (3 ((close _V10_Dmake__parameter_D187_lambda153) (bruijn ##.action.589 0 1))))
 VErrorC(runtime, "Not enough arguments to _V10_Dmake__parameter_D187_lambda152, got ~D~N"
 "-- expected 1~N"
 "-- expected 3~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V10_Dmake__parameter_D187_lambda152(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V20Case0__V10_Dmake__parameter_D187_lambda152" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case0__V10_Dmake__parameter_D187_lambda152, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.get-dynamics (close _V10_Dmake__parameter_D187_k338))
    V_CALL_FUNC(VGetDynamics, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmake__parameter_D187_k338, env)}));
 }
}
__attribute__((used)) static void _V20Case1__V10_Dmake__parameter_D187_lambda152(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V20Case1__V10_Dmake__parameter_D187_lambda152" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case1__V10_Dmake__parameter_D187_lambda152, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((close _V10_Dmake__parameter_D187_lambda153) (bruijn ##.action.589 0 1))
    V_CALL_FUNC(_V10_Dmake__parameter_D187_lambda153, env, runtime,
      _var1);
 }
}
void _V10_Dmake__parameter_D187_lambda152(VRuntime * runtime, VEnv * upenv, int argc, ...);
asm(
".intel_syntax noprefix\n"
#ifdef __linux__
".type _V10_Dmake__parameter_D187_lambda152, @function\n"
#endif
"_V10_Dmake__parameter_D187_lambda152:\n"
"    cmp " ARGC_REG ", 1\n"
"    je _V20Case0__V10_Dmake__parameter_D187_lambda152\n"
"    cmp " ARGC_REG ", 3\n"
"    je _V20Case1__V10_Dmake__parameter_D187_lambda152\n"
"    jmp _V20CaseError__V10_Dmake__parameter_D187_lambda152\n"
);
static void _V10_Dmake__parameter_D187_lambda151(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V10_Dmake__parameter_D187_lambda151" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dmake__parameter_D187_lambda151, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##.k.1294 3 0) (close _V10_Dmake__parameter_D187_lambda152))
    V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmake__parameter_D187_lambda152, env)}));
 }
}
static void _V10_Dmake__parameter_D187_k337(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dmake__parameter_D187_k337" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmake__parameter_D187_k337, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dmake__parameter_D187_k337, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dmake__parameter_D187_lambda151) (bruijn ##.x.1295 1 0) (bruijn ##.x.1296 0 0))
    V_CALL_FUNC(_V10_Dmake__parameter_D187_lambda151, env, runtime,
      upenv->vars[0],
      _var0);
 }
}
static void _V10_Dmake__parameter_D187_k336(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dmake__parameter_D187_k336" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmake__parameter_D187_k336, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dmake__parameter_D187_k336, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.convert.584 1 2) (close _V10_Dmake__parameter_D187_k337) (bruijn ##.init.583 1 1))
    V_CALL(upenv->vars[2], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmake__parameter_D187_k337, env)}),
      upenv->vars[1]);
 }
}
__attribute__((used)) static void _V20CaseError__V10_Dmake__parameter_D187_lambda149(VRuntime * runtime, VEnv * upenv, int argc, ...) {
 // (_V10_Dmake__parameter_D187_lambda149 #t (2 ((bruijn ##.make-parameter.187 1 176) (bruijn ##.k.1291 0 0) (bruijn ##.init.579 0 1) (close _V10_Dmake__parameter_D187_lambda150) 'parameter)) (3 ((bruijn ##.make-parameter.187 1 176) (bruijn ##.k.1293 0 0) (bruijn ##.init.581 0 1) (bruijn ##.convert.582 0 2) 'parameter)) (4 ((bruijn ##.cons.74 1 63) (close _V10_Dmake__parameter_D187_k336) (bruijn ##.name.585 0 3) '())))
 VErrorC(runtime, "Not enough arguments to _V10_Dmake__parameter_D187_lambda149, got ~D~N"
 "-- expected 2~N"
 "-- expected 3~N"
 "-- expected 4~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V10_Dmake__parameter_D187_lambda149(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V20Case0__V10_Dmake__parameter_D187_lambda149" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case0__V10_Dmake__parameter_D187_lambda149, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##.make-parameter.187 1 176) (bruijn ##.k.1291 0 0) (bruijn ##.init.579 0 1) (close _V10_Dmake__parameter_D187_lambda150) 'parameter)
    V_CALL(upenv->vars[176], runtime,
      _var0,
      _var1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmake__parameter_D187_lambda150, env)}),
      _V0parameter);
 }
}
__attribute__((used)) static void _V20Case1__V10_Dmake__parameter_D187_lambda149(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V20Case1__V10_Dmake__parameter_D187_lambda149" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case1__V10_Dmake__parameter_D187_lambda149, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  // ((bruijn ##.make-parameter.187 1 176) (bruijn ##.k.1293 0 0) (bruijn ##.init.581 0 1) (bruijn ##.convert.582 0 2) 'parameter)
    V_CALL(upenv->vars[176], runtime,
      _var0,
      _var1,
      _var2,
      _V0parameter);
 }
}
__attribute__((used)) static void _V20Case2__V10_Dmake__parameter_D187_lambda149(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V20Case2__V10_Dmake__parameter_D187_lambda149" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case2__V10_Dmake__parameter_D187_lambda149, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // ((bruijn ##.cons.74 1 63) (close _V10_Dmake__parameter_D187_k336) (bruijn ##.name.585 0 3) '())
    V_CALL(upenv->vars[63], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmake__parameter_D187_k336, env)}),
      _var3,
      VNULL);
 }
}
void _V10_Dmake__parameter_D187_lambda149(VRuntime * runtime, VEnv * upenv, int argc, ...);
asm(
".intel_syntax noprefix\n"
#ifdef __linux__
".type _V10_Dmake__parameter_D187_lambda149, @function\n"
#endif
"_V10_Dmake__parameter_D187_lambda149:\n"
"    cmp " ARGC_REG ", 2\n"
"    je _V20Case0__V10_Dmake__parameter_D187_lambda149\n"
"    cmp " ARGC_REG ", 3\n"
"    je _V20Case1__V10_Dmake__parameter_D187_lambda149\n"
"    cmp " ARGC_REG ", 4\n"
"    je _V20Case2__V10_Dmake__parameter_D187_lambda149\n"
"    jmp _V20CaseError__V10_Dmake__parameter_D187_lambda149\n"
);
static void _V10_Datom_Q_D194_k343(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Datom_Q_D194_k343" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Datom_Q_D194_k343, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Datom_Q_D194_k343, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.not.33 2 22) (bruijn ##.k.1303 1 0) (bruijn ##.x.1304 0 0))
    V_CALL(upenv->up->vars[22], runtime,
      upenv->vars[0],
      _var0);
 }
}
static void _V10_Datom_Q_D194_lambda154(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V10_Datom_Q_D194_lambda154" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Datom_Q_D194_lambda154, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Datom_Q_D194_lambda154, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##.pair?.14 1 3) (close _V10_Datom_Q_D194_k343) (bruijn ##.x.592 0 1))
    V_CALL(upenv->vars[3], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Datom_Q_D194_k343, env)}),
      _var1);
 }
}
static void _V10_Ddisplayln_D195_k344(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Ddisplayln_D195_k344" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddisplayln_D195_k344, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddisplayln_D195_k344, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.displayln.195 2 184) (bruijn ##.k.1305 1 0) (bruijn ##.x.593 1 1) (bruijn ##.x.1306 0 0))
    V_CALL(upenv->up->vars[184], runtime,
      upenv->vars[0],
      upenv->vars[1],
      _var0);
 }
}
static void _V10_Ddisplayln_D195_k345(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Ddisplayln_D195_k345" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddisplayln_D195_k345, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddisplayln_D195_k345, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.newline.174 2 163) (bruijn ##.k.1307 1 0) (bruijn ##.port.595 1 2))
    V_CALL(upenv->up->vars[163], runtime,
      upenv->vars[0],
      upenv->vars[2]);
 }
}
__attribute__((used)) static void _V20CaseError__V10_Ddisplayln_D195_lambda155(VRuntime * runtime, VEnv * upenv, int argc, ...) {
 // (_V10_Ddisplayln_D195_lambda155 #t (2 ((bruijn ##.current-output-port.157 1 146) (close _V10_Ddisplayln_D195_k344))) (3 ((bruijn ##.display.178 1 167) (close _V10_Ddisplayln_D195_k345) (bruijn ##.x.594 0 1) (bruijn ##.port.595 0 2))))
 VErrorC(runtime, "Not enough arguments to _V10_Ddisplayln_D195_lambda155, got ~D~N"
 "-- expected 2~N"
 "-- expected 3~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V10_Ddisplayln_D195_lambda155(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V20Case0__V10_Ddisplayln_D195_lambda155" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case0__V10_Ddisplayln_D195_lambda155, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##.current-output-port.157 1 146) (close _V10_Ddisplayln_D195_k344))
    V_CALL(upenv->vars[146], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddisplayln_D195_k344, env)}));
 }
}
__attribute__((used)) static void _V20Case1__V10_Ddisplayln_D195_lambda155(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V20Case1__V10_Ddisplayln_D195_lambda155" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case1__V10_Ddisplayln_D195_lambda155, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn ##.display.178 1 167) (close _V10_Ddisplayln_D195_k345) (bruijn ##.x.594 0 1) (bruijn ##.port.595 0 2))
    V_CALL(upenv->vars[167], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddisplayln_D195_k345, env)}),
      _var1,
      _var2);
 }
}
void _V10_Ddisplayln_D195_lambda155(VRuntime * runtime, VEnv * upenv, int argc, ...);
asm(
".intel_syntax noprefix\n"
#ifdef __linux__
".type _V10_Ddisplayln_D195_lambda155, @function\n"
#endif
"_V10_Ddisplayln_D195_lambda155:\n"
"    cmp " ARGC_REG ", 2\n"
"    je _V20Case0__V10_Ddisplayln_D195_lambda155\n"
"    cmp " ARGC_REG ", 3\n"
"    je _V20Case1__V10_Ddisplayln_D195_lambda155\n"
"    jmp _V20CaseError__V10_Ddisplayln_D195_lambda155\n"
);
static void _V10_Dwriteln_D196_k346(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dwriteln_D196_k346" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dwriteln_D196_k346, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dwriteln_D196_k346, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.writeln.196 2 185) (bruijn ##.k.1309 1 0) (bruijn ##.x.596 1 1) (bruijn ##.x.1310 0 0))
    V_CALL(upenv->up->vars[185], runtime,
      upenv->vars[0],
      upenv->vars[1],
      _var0);
 }
}
static void _V10_Dwriteln_D196_k347(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dwriteln_D196_k347" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dwriteln_D196_k347, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dwriteln_D196_k347, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.newline.174 2 163) (bruijn ##.k.1311 1 0) (bruijn ##.port.598 1 2))
    V_CALL(upenv->up->vars[163], runtime,
      upenv->vars[0],
      upenv->vars[2]);
 }
}
__attribute__((used)) static void _V20CaseError__V10_Dwriteln_D196_lambda156(VRuntime * runtime, VEnv * upenv, int argc, ...) {
 // (_V10_Dwriteln_D196_lambda156 #t (2 ((bruijn ##.current-output-port.157 1 146) (close _V10_Dwriteln_D196_k346))) (3 ((bruijn ##.write.179 1 168) (close _V10_Dwriteln_D196_k347) (bruijn ##.x.597 0 1) (bruijn ##.port.598 0 2))))
 VErrorC(runtime, "Not enough arguments to _V10_Dwriteln_D196_lambda156, got ~D~N"
 "-- expected 2~N"
 "-- expected 3~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V10_Dwriteln_D196_lambda156(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V20Case0__V10_Dwriteln_D196_lambda156" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case0__V10_Dwriteln_D196_lambda156, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##.current-output-port.157 1 146) (close _V10_Dwriteln_D196_k346))
    V_CALL(upenv->vars[146], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dwriteln_D196_k346, env)}));
 }
}
__attribute__((used)) static void _V20Case1__V10_Dwriteln_D196_lambda156(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V20Case1__V10_Dwriteln_D196_lambda156" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case1__V10_Dwriteln_D196_lambda156, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn ##.write.179 1 168) (close _V10_Dwriteln_D196_k347) (bruijn ##.x.597 0 1) (bruijn ##.port.598 0 2))
    V_CALL(upenv->vars[168], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dwriteln_D196_k347, env)}),
      _var1,
      _var2);
 }
}
void _V10_Dwriteln_D196_lambda156(VRuntime * runtime, VEnv * upenv, int argc, ...);
asm(
".intel_syntax noprefix\n"
#ifdef __linux__
".type _V10_Dwriteln_D196_lambda156, @function\n"
#endif
"_V10_Dwriteln_D196_lambda156:\n"
"    cmp " ARGC_REG ", 2\n"
"    je _V20Case0__V10_Dwriteln_D196_lambda156\n"
"    cmp " ARGC_REG ", 3\n"
"    je _V20Case1__V10_Dwriteln_D196_lambda156\n"
"    jmp _V20CaseError__V10_Dwriteln_D196_lambda156\n"
);
static void _V10_Dloop_D603_k354(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D603_k354" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D603_k354, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D603_k354, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##.p.1349 1 0) ((bruijn ##.error.205 10 194) (bruijn ##.k.1350 0 0) (##string ##.string.1794) (bruijn ##.fmt.600 9 2)) ((bruijn ##.k.1350 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(VGetArg(upenv, 10-1, 194), runtime,
      _var0,
      VEncodePointer(&_V10_Dstring_D1794.sym, VPOINTER_OTHER),
      VGetArg(upenv, 9-1, 2));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dloop_D603_k360(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D603_k360" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D603_k360, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D603_k360, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.loop.603 12 0) (bruijn ##.k.1314 11 0) (bruijn ##.x.1320 0 0) (bruijn ##.args.605 11 2))
    V_CALL(VGetArg(upenv, 12-1, 0), runtime,
      VGetArg(upenv, 11-1, 0),
      _var0,
      VGetArg(upenv, 11-1, 2));
 }
}
static void _V10_Dloop_D603_k359(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D603_k359" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D603_k359, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D603_k359, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.+.47 14 36) (close _V10_Dloop_D603_k360) (bruijn ##.i.604 10 1) 2)
    V_CALL(VGetArg(upenv, 14-1, 36), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D603_k360, env)}),
      VGetArg(upenv, 10-1, 1),
      VEncodeInt(2l));
 }
}
static void _V10_Dloop_D603_k362(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D603_k362" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D603_k362, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D603_k362, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##.p.1346 1 0) ((bruijn ##.k.1347 0 0) (bruijn ##.p.1346 1 0)) ((bruijn ##.eqv?.29 15 18) (bruijn ##.k.1347 0 0) (bruijn ##.x.7.607 3 0) '#\N))
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
static void _V10_Dloop_D603_k365(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D603_k365" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D603_k365, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D603_k365, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.loop.603 14 0) (bruijn ##.k.1314 13 0) (bruijn ##.x.1323 0 0) (bruijn ##.args.605 13 2))
    V_CALL(VGetArg(upenv, 14-1, 0), runtime,
      VGetArg(upenv, 13-1, 0),
      _var0,
      VGetArg(upenv, 13-1, 2));
 }
}
static void _V10_Dloop_D603_k364(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D603_k364" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D603_k364, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D603_k364, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.+.47 16 36) (close _V10_Dloop_D603_k365) (bruijn ##.i.604 12 1) 2)
    V_CALL(VGetArg(upenv, 16-1, 36), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D603_k365, env)}),
      VGetArg(upenv, 12-1, 1),
      VEncodeInt(2l));
 }
}
static void _V10_Dloop_D603_k367(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D603_k367" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D603_k367, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D603_k367, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##.p.1344 1 0) ((bruijn ##.k.1345 0 0) (bruijn ##.p.1344 1 0)) ((bruijn ##.eqv?.29 17 18) (bruijn ##.k.1345 0 0) (bruijn ##.x.7.607 5 0) '#\A))
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
static void _V10_Dloop_D603_k370(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D603_k370" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D603_k370, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D603_k370, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##.p.1330 1 0) ((bruijn ##.error.205 19 194) (bruijn ##.k.1331 0 0) (##string ##.string.1795) (bruijn ##.fmt.600 18 2)) ((bruijn ##.k.1331 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(VGetArg(upenv, 19-1, 194), runtime,
      _var0,
      VEncodePointer(&_V10_Dstring_D1795.sym, VPOINTER_OTHER),
      VGetArg(upenv, 18-1, 2));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dloop_D603_k375(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D603_k375" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D603_k375, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D603_k375, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.loop.603 20 0) (bruijn ##.k.1314 19 0) (bruijn ##.x.1327 1 0) (bruijn ##.x.1328 0 0))
    V_CALL(VGetArg(upenv, 20-1, 0), runtime,
      VGetArg(upenv, 19-1, 0),
      upenv->vars[0],
      _var0);
 }
}
static void _V10_Dloop_D603_k374(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D603_k374" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D603_k374, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D603_k374, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cdr.76 22 65) (close _V10_Dloop_D603_k375) (bruijn ##.args.605 18 2))
    V_CALL(VGetArg(upenv, 22-1, 65), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D603_k375, env)}),
      VGetArg(upenv, 18-1, 2));
 }
}
static void _V10_Dloop_D603_k373(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D603_k373" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D603_k373, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D603_k373, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.+.47 21 36) (close _V10_Dloop_D603_k374) (bruijn ##.i.604 17 1) 2)
    V_CALL(VGetArg(upenv, 21-1, 36), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D603_k374, env)}),
      VGetArg(upenv, 17-1, 1),
      VEncodeInt(2l));
 }
}
static void _V10_Dloop_D603_k372(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D603_k372" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D603_k372, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D603_k372, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.display.178 20 167) (close _V10_Dloop_D603_k373) (bruijn ##.x.1329 0 0) (bruijn ##.port.599 19 1))
    V_CALL(VGetArg(upenv, 20-1, 167), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D603_k373, env)}),
      _var0,
      VGetArg(upenv, 19-1, 1));
 }
}
static void _V10_Dloop_D603_k371(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D603_k371" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D603_k371, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D603_k371, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.car.75 19 64) (close _V10_Dloop_D603_k372) (bruijn ##.args.605 15 2))
    V_CALL(VGetArg(upenv, 19-1, 64), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D603_k372, env)}),
      VGetArg(upenv, 15-1, 2));
 }
}
static void _V10_Dloop_D603_k369(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D603_k369" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D603_k369, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D603_k369, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dloop_D603_k370) (close _V10_Dloop_D603_k371))
    V_CALL_FUNC(_V10_Dloop_D603_k370, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D603_k371, env)}));
 }
}
static void _V10_Dloop_D603_k377(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D603_k377" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D603_k377, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D603_k377, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##.p.1342 1 0) ((bruijn ##.k.1343 0 0) (bruijn ##.p.1342 1 0)) ((bruijn ##.eqv?.29 19 18) (bruijn ##.k.1343 0 0) (bruijn ##.x.7.607 7 0) '#\S))
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
static void _V10_Dloop_D603_k380(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D603_k380" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D603_k380, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D603_k380, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##.p.1338 1 0) ((bruijn ##.error.205 21 194) (bruijn ##.k.1339 0 0) (##string ##.string.1795) (bruijn ##.fmt.600 20 2)) ((bruijn ##.k.1339 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(VGetArg(upenv, 21-1, 194), runtime,
      _var0,
      VEncodePointer(&_V10_Dstring_D1795.sym, VPOINTER_OTHER),
      VGetArg(upenv, 20-1, 2));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dloop_D603_k385(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D603_k385" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D603_k385, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D603_k385, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.loop.603 22 0) (bruijn ##.k.1314 21 0) (bruijn ##.x.1335 1 0) (bruijn ##.x.1336 0 0))
    V_CALL(VGetArg(upenv, 22-1, 0), runtime,
      VGetArg(upenv, 21-1, 0),
      upenv->vars[0],
      _var0);
 }
}
static void _V10_Dloop_D603_k384(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D603_k384" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D603_k384, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D603_k384, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cdr.76 24 65) (close _V10_Dloop_D603_k385) (bruijn ##.args.605 20 2))
    V_CALL(VGetArg(upenv, 24-1, 65), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D603_k385, env)}),
      VGetArg(upenv, 20-1, 2));
 }
}
static void _V10_Dloop_D603_k383(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D603_k383" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D603_k383, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D603_k383, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.+.47 23 36) (close _V10_Dloop_D603_k384) (bruijn ##.i.604 19 1) 2)
    V_CALL(VGetArg(upenv, 23-1, 36), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D603_k384, env)}),
      VGetArg(upenv, 19-1, 1),
      VEncodeInt(2l));
 }
}
static void _V10_Dloop_D603_k382(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D603_k382" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D603_k382, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D603_k382, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.write.179 22 168) (close _V10_Dloop_D603_k383) (bruijn ##.x.1337 0 0) (bruijn ##.port.599 21 1))
    V_CALL(VGetArg(upenv, 22-1, 168), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D603_k383, env)}),
      _var0,
      VGetArg(upenv, 21-1, 1));
 }
}
static void _V10_Dloop_D603_k381(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D603_k381" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D603_k381, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D603_k381, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.car.75 21 64) (close _V10_Dloop_D603_k382) (bruijn ##.args.605 17 2))
    V_CALL(VGetArg(upenv, 21-1, 64), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D603_k382, env)}),
      VGetArg(upenv, 17-1, 2));
 }
}
static void _V10_Dloop_D603_k379(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D603_k379" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D603_k379, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D603_k379, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dloop_D603_k380) (close _V10_Dloop_D603_k381))
    V_CALL_FUNC(_V10_Dloop_D603_k380, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D603_k381, env)}));
 }
}
static void _V10_Dloop_D603_k387(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D603_k387" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D603_k387, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D603_k387, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.error.205 21 194) (bruijn ##.k.1314 17 0) (##string ##.string.1796) (bruijn ##.x.1340 0 0))
    V_CALL(VGetArg(upenv, 21-1, 194), runtime,
      VGetArg(upenv, 17-1, 0),
      VEncodePointer(&_V10_Dstring_D1796.sym, VPOINTER_OTHER),
      _var0);
 }
}
static void _V10_Dloop_D603_k386(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D603_k386" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D603_k386, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D603_k386, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.substring.127 20 116) (close _V10_Dloop_D603_k387) (bruijn ##.fmt.600 19 2) (bruijn ##.i.604 16 1) (bruijn ##.x.1341 0 0))
    V_CALL(VGetArg(upenv, 20-1, 116), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D603_k387, env)}),
      VGetArg(upenv, 19-1, 2),
      VGetArg(upenv, 16-1, 1),
      _var0);
 }
}
static void _V10_Dloop_D603_k378(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D603_k378" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D603_k378, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D603_k378, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1332 0 0) ((bruijn ##.null?.11 19 0) (close _V10_Dloop_D603_k379) (bruijn ##.args.605 15 2)) ((bruijn ##.+.47 19 36) (close _V10_Dloop_D603_k386) (bruijn ##.i.604 15 1) 2))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 19-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D603_k379, env)}),
      VGetArg(upenv, 15-1, 2));
} else {
    V_CALL(VGetArg(upenv, 19-1, 36), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D603_k386, env)}),
      VGetArg(upenv, 15-1, 1),
      VEncodeInt(2l));
}
 }
}
static void _V10_Dloop_D603_k376(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D603_k376" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D603_k376, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D603_k376, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dloop_D603_k377) (close _V10_Dloop_D603_k378))
    V_CALL_FUNC(_V10_Dloop_D603_k377, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D603_k378, env)}));
 }
}
static void _V10_Dloop_D603_k368(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D603_k368" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D603_k368, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D603_k368, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1324 0 0) ((bruijn ##.null?.11 17 0) (close _V10_Dloop_D603_k369) (bruijn ##.args.605 13 2)) ((bruijn ##.eqv?.29 17 18) (close _V10_Dloop_D603_k376) (bruijn ##.x.7.607 5 0) '#\s))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 17-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D603_k369, env)}),
      VGetArg(upenv, 13-1, 2));
} else {
    V_CALL(VGetArg(upenv, 17-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D603_k376, env)}),
      VGetArg(upenv, 5-1, 0),
      VEncodeChar('s'));
}
 }
}
static void _V10_Dloop_D603_k366(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D603_k366" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D603_k366, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D603_k366, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dloop_D603_k367) (close _V10_Dloop_D603_k368))
    V_CALL_FUNC(_V10_Dloop_D603_k367, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D603_k368, env)}));
 }
}
static void _V10_Dloop_D603_k363(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D603_k363" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D603_k363, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D603_k363, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1321 0 0) (##vcore.display-word (close _V10_Dloop_D603_k364) #\newline (bruijn ##.port.599 14 1)) ((bruijn ##.eqv?.29 15 18) (close _V10_Dloop_D603_k366) (bruijn ##.x.7.607 3 0) '#\a))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(VDisplay2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D603_k364, env)}),
      VEncodeChar('\n'),
      VGetArg(upenv, 14-1, 1));
} else {
    V_CALL(VGetArg(upenv, 15-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D603_k366, env)}),
      upenv->up->up->vars[0],
      VEncodeChar('a'));
}
 }
}
static void _V10_Dloop_D603_k361(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D603_k361" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D603_k361, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D603_k361, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dloop_D603_k362) (close _V10_Dloop_D603_k363))
    V_CALL_FUNC(_V10_Dloop_D603_k362, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D603_k363, env)}));
 }
}
static void _V10_Dloop_D603_k358(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D603_k358" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D603_k358, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D603_k358, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1318 0 0) (##vcore.display-word (close _V10_Dloop_D603_k359) #\~ (bruijn ##.port.599 12 1)) ((bruijn ##.eqv?.29 13 18) (close _V10_Dloop_D603_k361) (bruijn ##.x.7.607 1 0) '#\n))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(VDisplay2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D603_k359, env)}),
      VEncodeChar('~'),
      VGetArg(upenv, 12-1, 1));
} else {
    V_CALL(VGetArg(upenv, 13-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D603_k361, env)}),
      upenv->vars[0],
      VEncodeChar('n'));
}
 }
}
static void _V10_Dloop_D603_k357(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D603_k357" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D603_k357, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D603_k357, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.eqv?.29 12 18) (close _V10_Dloop_D603_k358) (bruijn ##.x.7.607 0 0) '#\~)
    V_CALL(VGetArg(upenv, 12-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D603_k358, env)}),
      _var0,
      VEncodeChar('~'));
 }
}
static void _V10_Dloop_D603_k356(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D603_k356" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D603_k356, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D603_k356, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.string-ref.130 11 119) (close _V10_Dloop_D603_k357) (bruijn ##.fmt.600 10 2) (bruijn ##.x.1348 0 0))
    V_CALL(VGetArg(upenv, 11-1, 119), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D603_k357, env)}),
      VGetArg(upenv, 10-1, 2),
      _var0);
 }
}
static void _V10_Dloop_D603_k355(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D603_k355" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D603_k355, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D603_k355, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.+.47 10 36) (close _V10_Dloop_D603_k356) (bruijn ##.i.604 6 1) 1)
    V_CALL(VGetArg(upenv, 10-1, 36), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D603_k356, env)}),
      VGetArg(upenv, 6-1, 1),
      VEncodeInt(1l));
 }
}
static void _V10_Dloop_D603_k353(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D603_k353" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D603_k353, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D603_k353, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dloop_D603_k354) (close _V10_Dloop_D603_k355))
    V_CALL_FUNC(_V10_Dloop_D603_k354, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D603_k355, env)}));
 }
}
static void _V10_Dloop_D603_k352(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D603_k352" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D603_k352, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D603_k352, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.=.35 8 24) (close _V10_Dloop_D603_k353) (bruijn ##.x.1351 0 0) (bruijn ##.len.602 6 0))
    V_CALL(VGetArg(upenv, 8-1, 24), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D603_k353, env)}),
      _var0,
      VGetArg(upenv, 6-1, 0));
 }
}
static void _V10_Dloop_D603_k389(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D603_k389" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D603_k389, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D603_k389, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.loop.603 6 0) (bruijn ##.k.1314 5 0) (bruijn ##.x.1353 0 0) (bruijn ##.args.605 5 2))
    V_CALL(VGetArg(upenv, 6-1, 0), runtime,
      VGetArg(upenv, 5-1, 0),
      _var0,
      VGetArg(upenv, 5-1, 2));
 }
}
static void _V10_Dloop_D603_k388(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D603_k388" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D603_k388, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D603_k388, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.+.47 8 36) (close _V10_Dloop_D603_k389) (bruijn ##.i.604 4 1) 1)
    V_CALL(VGetArg(upenv, 8-1, 36), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D603_k389, env)}),
      upenv->up->up->up->vars[1],
      VEncodeInt(1l));
 }
}
static void _V10_Dloop_D603_k351(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D603_k351" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D603_k351, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D603_k351, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1316 0 0) ((bruijn ##.+.47 7 36) (close _V10_Dloop_D603_k352) (bruijn ##.i.604 3 1) 1) (##vcore.display-word (close _V10_Dloop_D603_k388) (bruijn ##.c.606 1 0) (bruijn ##.port.599 6 1)))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 7-1, 36), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D603_k352, env)}),
      upenv->up->up->vars[1],
      VEncodeInt(1l));
} else {
    V_CALL_FUNC(VDisplay2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D603_k388, env)}),
      upenv->vars[0],
      VGetArg(upenv, 6-1, 1));
}
 }
}
static void _V10_Dloop_D603_k350(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D603_k350" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D603_k350, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D603_k350, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.eq?.26 6 15) (close _V10_Dloop_D603_k351) (bruijn ##.c.606 0 0) #\~)
    V_CALL(VGetArg(upenv, 6-1, 15), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D603_k351, env)}),
      _var0,
      VEncodeChar('~'));
 }
}
static void _V10_Dloop_D603_k349(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D603_k349" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D603_k349, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D603_k349, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1315 0 0) ((bruijn ##.string-ref.130 5 119) (close _V10_Dloop_D603_k350) (bruijn ##.fmt.600 4 2) (bruijn ##.i.604 1 1)) ((bruijn ##.k.1314 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 5-1, 119), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D603_k350, env)}),
      upenv->up->up->up->vars[2],
      upenv->vars[1]);
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dloop_D603_lambda158(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V10_Dloop_D603_lambda158" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D603_lambda158, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D603_lambda158, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn ##.<.34 4 23) (close _V10_Dloop_D603_k349) (bruijn ##.i.604 0 1) (bruijn ##.len.602 2 0))
    V_CALL(upenv->up->up->up->vars[23], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D603_k349, env)}),
      _var1,
      upenv->up->vars[0]);
 }
}
static void _V10_Dformat__printf_D197_k348(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dformat__printf_D197_k348" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dformat__printf_D197_k348, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dformat__printf_D197_k348, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (letrec 1 ((close _V10_Dloop_D603_lambda158)) ((bruijn ##.loop.603 0 0) (bruijn ##.k.1313 2 0) 0 (bruijn ##.args.601 2 3)))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D603_lambda158, env)});
    V_CALL(env->vars[0], runtime,
      upenv->up->vars[0],
      VEncodeInt(0l),
      upenv->up->vars[3]);
    }
 }
}
static void _V10_Dformat__printf_D197_lambda157(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V10_Dformat__printf_D197_lambda157" };
 VRecordCall2(runtime, &dbg);
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V10_Dformat__printf_D197_lambda157, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dformat__printf_D197_lambda157, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // ((bruijn ##.string-length.132 1 121) (close _V10_Dformat__printf_D197_k348) (bruijn ##.fmt.600 0 2))
    V_CALL(upenv->vars[121], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dformat__printf_D197_k348, env)}),
      _var2);
 }
}
static void _V10_Dformat__sprintf_D198_k393(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dformat__sprintf_D198_k393" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dformat__sprintf_D198_k393, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dformat__sprintf_D198_k393, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.k.1354 4 0) (bruijn ##.ret.611 1 0))
    V_CALL(upenv->up->up->up->vars[0], runtime,
      upenv->vars[0]);
 }
}
static void _V10_Dformat__sprintf_D198_k392(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dformat__sprintf_D198_k392" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dformat__sprintf_D198_k392, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dformat__sprintf_D198_k392, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.close-port.161 4 150) (close _V10_Dformat__sprintf_D198_k393) (bruijn ##.strport.610 2 0))
    V_CALL(upenv->up->up->up->vars[150], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dformat__sprintf_D198_k393, env)}),
      upenv->up->vars[0]);
 }
}
static void _V10_Dformat__sprintf_D198_k391(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dformat__sprintf_D198_k391" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dformat__sprintf_D198_k391, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dformat__sprintf_D198_k391, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.get-output-string.168 3 157) (close _V10_Dformat__sprintf_D198_k392) (bruijn ##.strport.610 1 0))
    V_CALL(upenv->up->up->vars[157], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dformat__sprintf_D198_k392, env)}),
      upenv->vars[0]);
 }
}
static void _V10_Dformat__sprintf_D198_k390(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dformat__sprintf_D198_k390" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dformat__sprintf_D198_k390, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dformat__sprintf_D198_k390, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.format-printf.197 2 186) (close _V10_Dformat__sprintf_D198_k391) (bruijn ##.strport.610 0 0) (bruijn ##.fmt.608 1 1) (bruijn ##.args.609 1 2))
    V_CALL(upenv->up->vars[186], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dformat__sprintf_D198_k391, env)}),
      _var0,
      upenv->vars[1],
      upenv->vars[2]);
 }
}
static void _V10_Dformat__sprintf_D198_lambda159(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V10_Dformat__sprintf_D198_lambda159" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dformat__sprintf_D198_lambda159, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dformat__sprintf_D198_lambda159, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn ##.open-output-string.167 1 156) (close _V10_Dformat__sprintf_D198_k390))
    V_CALL(upenv->vars[156], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dformat__sprintf_D198_k390, env)}));
 }
}
static void _V10_Dprintf_D199_k394(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dprintf_D199_k394" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprintf_D199_k394, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dprintf_D199_k394, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.format-printf.197 2 186) (bruijn ##.k.1357 1 0) (bruijn ##.x.1358 0 0) (bruijn ##.fmt.612 1 1) '())
    V_CALL(upenv->up->vars[186], runtime,
      upenv->vars[0],
      _var0,
      upenv->vars[1],
      VNULL);
 }
}
static void _V10_Dprintf_D199_k397(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dprintf_D199_k397" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprintf_D199_k397, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dprintf_D199_k397, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.format-printf.197 4 186) (bruijn ##.k.1359 3 0) (bruijn ##.x.1361 1 0) (bruijn ##.a.613 3 1) (bruijn ##.x.1362 0 0))
    V_CALL(upenv->up->up->up->vars[186], runtime,
      upenv->up->up->vars[0],
      upenv->vars[0],
      upenv->up->up->vars[1],
      _var0);
 }
}
static void _V10_Dprintf_D199_k396(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dprintf_D199_k396" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprintf_D199_k396, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dprintf_D199_k396, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cons.74 3 63) (close _V10_Dprintf_D199_k397) (bruijn ##.b.614 2 2) (bruijn ##.args.615 2 3))
    V_CALL(upenv->up->up->vars[63], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprintf_D199_k397, env)}),
      upenv->up->vars[2],
      upenv->up->vars[3]);
 }
}
static void _V10_Dprintf_D199_k395(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dprintf_D199_k395" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprintf_D199_k395, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dprintf_D199_k395, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1360 0 0) ((bruijn ##.current-output-port.157 2 146) (close _V10_Dprintf_D199_k396)) ((bruijn ##.format-printf.197 2 186) (bruijn ##.k.1359 1 0) (bruijn ##.a.613 1 1) (bruijn ##.b.614 1 2) (bruijn ##.args.615 1 3)))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->up->vars[146], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprintf_D199_k396, env)}));
} else {
    V_CALL(upenv->up->vars[186], runtime,
      upenv->vars[0],
      upenv->vars[1],
      upenv->vars[2],
      upenv->vars[3]);
}
 }
}
__attribute__((used)) static void _V20CaseError__V10_Dprintf_D199_lambda160(VRuntime * runtime, VEnv * upenv, int argc, ...) {
 // (_V10_Dprintf_D199_lambda160 #t (2 ((bruijn ##.current-output-port.157 1 146) (close _V10_Dprintf_D199_k394))) (3 + ((bruijn ##.string?.19 1 8) (close _V10_Dprintf_D199_k395) (bruijn ##.a.613 0 1))))
 VErrorC(runtime, "Not enough arguments to _V10_Dprintf_D199_lambda160, got ~D~N"
 "-- expected 2~N"
 "-- expected 3 or more~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V10_Dprintf_D199_lambda160(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V20Case0__V10_Dprintf_D199_lambda160" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case0__V10_Dprintf_D199_lambda160, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##.current-output-port.157 1 146) (close _V10_Dprintf_D199_k394))
    V_CALL(upenv->vars[146], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprintf_D199_k394, env)}));
 }
}
__attribute__((used)) static void _V20Case1__V10_Dprintf_D199_lambda160(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, ...) {
 static VDebugInfo dbg = { "_V20Case1__V10_Dprintf_D199_lambda160" };
 VRecordCall2(runtime, &dbg);
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 3, argc, _var2);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case1__V10_Dprintf_D199_lambda160, runtime, upenv, 3, argc, _var0, _var1, _var2, _varargs) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _varargs;
  // ((bruijn ##.string?.19 1 8) (close _V10_Dprintf_D199_k395) (bruijn ##.a.613 0 1))
    V_CALL(upenv->vars[8], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprintf_D199_k395, env)}),
      _var1);
 }
}
void _V10_Dprintf_D199_lambda160(VRuntime * runtime, VEnv * upenv, int argc, ...);
asm(
".intel_syntax noprefix\n"
#ifdef __linux__
".type _V10_Dprintf_D199_lambda160, @function\n"
#endif
"_V10_Dprintf_D199_lambda160:\n"
"    cmp " ARGC_REG ", 2\n"
"    je _V20Case0__V10_Dprintf_D199_lambda160\n"
"    cmp " ARGC_REG ", 3\n"
"    jge _V20Case1__V10_Dprintf_D199_lambda160\n"
"    jmp _V20CaseError__V10_Dprintf_D199_lambda160\n"
);
static void _V10_Dsprintf_D200_k401(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dsprintf_D200_k401" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dsprintf_D200_k401, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dsprintf_D200_k401, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.k.1363 4 0) (bruijn ##.ret.619 1 0))
    V_CALL(upenv->up->up->up->vars[0], runtime,
      upenv->vars[0]);
 }
}
static void _V10_Dsprintf_D200_k400(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dsprintf_D200_k400" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dsprintf_D200_k400, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dsprintf_D200_k400, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.close-port.161 4 150) (close _V10_Dsprintf_D200_k401) (bruijn ##.strport.618 2 0))
    V_CALL(upenv->up->up->up->vars[150], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dsprintf_D200_k401, env)}),
      upenv->up->vars[0]);
 }
}
static void _V10_Dsprintf_D200_k399(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dsprintf_D200_k399" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dsprintf_D200_k399, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dsprintf_D200_k399, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.get-output-string.168 3 157) (close _V10_Dsprintf_D200_k400) (bruijn ##.strport.618 1 0))
    V_CALL(upenv->up->up->vars[157], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dsprintf_D200_k400, env)}),
      upenv->vars[0]);
 }
}
static void _V10_Dsprintf_D200_k398(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dsprintf_D200_k398" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dsprintf_D200_k398, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dsprintf_D200_k398, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.format-printf.197 2 186) (close _V10_Dsprintf_D200_k399) (bruijn ##.strport.618 0 0) (bruijn ##.fmt.616 1 1) (bruijn ##.args.617 1 2))
    V_CALL(upenv->up->vars[186], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dsprintf_D200_k399, env)}),
      _var0,
      upenv->vars[1],
      upenv->vars[2]);
 }
}
static void _V10_Dsprintf_D200_lambda161(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, ...) {
 static VDebugInfo dbg = { "_V10_Dsprintf_D200_lambda161" };
 VRecordCall2(runtime, &dbg);
 if(argc < 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dsprintf_D200_lambda161, got ~D~N"
  "-- expected 2 or more~N"
  , argc);
 }
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 2, argc, _var1);
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dsprintf_D200_lambda161, runtime, upenv, 2, argc, _var0, _var1, _varargs) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _varargs;
  // ((bruijn ##.open-output-string.167 1 156) (close _V10_Dsprintf_D200_k398))
    V_CALL(upenv->vars[156], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dsprintf_D200_k398, env)}));
 }
}
static void _V10_Dformat_D201_k403(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dformat_D201_k403" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dformat_D201_k403, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dformat_D201_k403, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.format-sprintf.198 3 187) (bruijn ##.k.1367 2 0) (bruijn ##.a.621 2 1) (bruijn ##.x.1369 0 0))
    V_CALL(upenv->up->up->vars[187], runtime,
      upenv->up->vars[0],
      upenv->up->vars[1],
      _var0);
 }
}
static void _V10_Dformat_D201_k405(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dformat_D201_k405" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dformat_D201_k405, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dformat_D201_k405, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.format-printf.197 4 186) (bruijn ##.k.1367 3 0) (bruijn ##.x.1371 0 0) (bruijn ##.b.622 3 2) (bruijn ##.args.623 3 3))
    V_CALL(upenv->up->up->up->vars[186], runtime,
      upenv->up->up->vars[0],
      _var0,
      upenv->up->up->vars[2],
      upenv->up->up->vars[3]);
 }
}
static void _V10_Dformat_D201_k406(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dformat_D201_k406" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dformat_D201_k406, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dformat_D201_k406, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##.p.1372 0 0) ((bruijn ##.format-sprintf.198 4 187) (bruijn ##.k.1367 3 0) (bruijn ##.b.622 3 2) (bruijn ##.args.623 3 3)) ((bruijn ##.format-printf.197 4 186) (bruijn ##.k.1367 3 0) (bruijn ##.a.621 3 1) (bruijn ##.b.622 3 2) (bruijn ##.args.623 3 3)))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->up->up->up->vars[187], runtime,
      upenv->up->up->vars[0],
      upenv->up->up->vars[2],
      upenv->up->up->vars[3]);
} else {
    V_CALL(upenv->up->up->up->vars[186], runtime,
      upenv->up->up->vars[0],
      upenv->up->up->vars[1],
      upenv->up->up->vars[2],
      upenv->up->up->vars[3]);
}
 }
}
static void _V10_Dformat_D201_k404(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dformat_D201_k404" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dformat_D201_k404, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dformat_D201_k404, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1370 0 0) ((bruijn ##.current-output-port.157 3 146) (close _V10_Dformat_D201_k405)) ((bruijn ##.eq?.26 3 15) (close _V10_Dformat_D201_k406) (bruijn ##.a.621 2 1) #f))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->up->up->vars[146], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dformat_D201_k405, env)}));
} else {
    V_CALL(upenv->up->up->vars[15], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dformat_D201_k406, env)}),
      upenv->up->vars[1],
      VEncodeBool(false));
}
 }
}
static void _V10_Dformat_D201_k402(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dformat_D201_k402" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dformat_D201_k402, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dformat_D201_k402, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1368 0 0) ((bruijn ##.cons.74 2 63) (close _V10_Dformat_D201_k403) (bruijn ##.b.622 1 2) (bruijn ##.args.623 1 3)) ((bruijn ##.eq?.26 2 15) (close _V10_Dformat_D201_k404) (bruijn ##.a.621 1 1) #t))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->up->vars[63], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dformat_D201_k403, env)}),
      upenv->vars[2],
      upenv->vars[3]);
} else {
    V_CALL(upenv->up->vars[15], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dformat_D201_k404, env)}),
      upenv->vars[1],
      VEncodeBool(true));
}
 }
}
__attribute__((used)) static void _V20CaseError__V10_Dformat_D201_lambda162(VRuntime * runtime, VEnv * upenv, int argc, ...) {
 // (_V10_Dformat_D201_lambda162 #t (2 ((bruijn ##.sprintf.200 1 189) (bruijn ##.k.1366 0 0) (bruijn ##.fmt.620 0 1))) (3 + ((bruijn ##.string?.19 1 8) (close _V10_Dformat_D201_k402) (bruijn ##.a.621 0 1))))
 VErrorC(runtime, "Not enough arguments to _V10_Dformat_D201_lambda162, got ~D~N"
 "-- expected 2~N"
 "-- expected 3 or more~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V10_Dformat_D201_lambda162(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V20Case0__V10_Dformat_D201_lambda162" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case0__V10_Dformat_D201_lambda162, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##.sprintf.200 1 189) (bruijn ##.k.1366 0 0) (bruijn ##.fmt.620 0 1))
    V_CALL(upenv->vars[189], runtime,
      _var0,
      _var1);
 }
}
__attribute__((used)) static void _V20Case1__V10_Dformat_D201_lambda162(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, ...) {
 static VDebugInfo dbg = { "_V20Case1__V10_Dformat_D201_lambda162" };
 VRecordCall2(runtime, &dbg);
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 3, argc, _var2);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case1__V10_Dformat_D201_lambda162, runtime, upenv, 3, argc, _var0, _var1, _var2, _varargs) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _varargs;
  // ((bruijn ##.string?.19 1 8) (close _V10_Dformat_D201_k402) (bruijn ##.a.621 0 1))
    V_CALL(upenv->vars[8], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dformat_D201_k402, env)}),
      _var1);
 }
}
void _V10_Dformat_D201_lambda162(VRuntime * runtime, VEnv * upenv, int argc, ...);
asm(
".intel_syntax noprefix\n"
#ifdef __linux__
".type _V10_Dformat_D201_lambda162, @function\n"
#endif
"_V10_Dformat_D201_lambda162:\n"
"    cmp " ARGC_REG ", 2\n"
"    je _V20Case0__V10_Dformat_D201_lambda162\n"
"    cmp " ARGC_REG ", 3\n"
"    jge _V20Case1__V10_Dformat_D201_lambda162\n"
"    jmp _V20CaseError__V10_Dformat_D201_lambda162\n"
);
static void _V10_Draise__continuable_D203_k409(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Draise__continuable_D203_k409" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Draise__continuable_D203_k409, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Draise__continuable_D203_k409, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.k.1373 3 0) (bruijn ##.ret.626 1 0))
    V_CALL(upenv->up->up->vars[0], runtime,
      upenv->vars[0]);
 }
}
static void _V10_Draise__continuable_D203_k408(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Draise__continuable_D203_k408" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Draise__continuable_D203_k408, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Draise__continuable_D203_k408, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.push-exception-handler (close _V10_Draise__continuable_D203_k409) (bruijn ##.handler.625 1 0))
    V_CALL_FUNC(VPushExceptionHandler, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Draise__continuable_D203_k409, env)}),
      upenv->vars[0]);
 }
}
static void _V10_Draise__continuable_D203_k407(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Draise__continuable_D203_k407" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Draise__continuable_D203_k407, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Draise__continuable_D203_k407, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.handler.625 0 0) (close _V10_Draise__continuable_D203_k408) (bruijn ##.x.624 1 1))
    V_CALL(_var0, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Draise__continuable_D203_k408, env)}),
      upenv->vars[1]);
 }
}
static void _V10_Draise__continuable_D203_lambda163(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V10_Draise__continuable_D203_lambda163" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Draise__continuable_D203_lambda163, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Draise__continuable_D203_lambda163, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (##vcore.get-exception-handler (close _V10_Draise__continuable_D203_k407))
    V_CALL_FUNC(VGetExceptionHandler, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Draise__continuable_D203_k407, env)}));
 }
}
static void _V10_Dwith__exception__handler_D204_k411(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dwith__exception__handler_D204_k411" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dwith__exception__handler_D204_k411, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dwith__exception__handler_D204_k411, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.apply.183 4 172) (bruijn ##.k.1377 1 0) (bruijn ##.values.184 4 173) (bruijn ##.rets.629 1 1))
    V_CALL(upenv->up->up->up->vars[172], runtime,
      upenv->vars[0],
      upenv->up->up->up->vars[173],
      upenv->vars[1]);
 }
}
static void _V10_Dwith__exception__handler_D204_lambda165(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, ...) {
 static VDebugInfo dbg = { "_V10_Dwith__exception__handler_D204_lambda165" };
 VRecordCall2(runtime, &dbg);
 if(argc < 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dwith__exception__handler_D204_lambda165, got ~D~N"
  "-- expected 1 or more~N"
  , argc);
 }
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 1, argc, _var0);
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dwith__exception__handler_D204_lambda165, runtime, upenv, 1, argc, _var0, _varargs) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _varargs;
  // (##vcore.pop-exception-handler (close _V10_Dwith__exception__handler_D204_k411) (bruijn ##.handler.627 2 1))
    V_CALL_FUNC(VPopExceptionHandler, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dwith__exception__handler_D204_k411, env)}),
      upenv->up->vars[1]);
 }
}
static void _V10_Dwith__exception__handler_D204_k410(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dwith__exception__handler_D204_k410" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dwith__exception__handler_D204_k410, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dwith__exception__handler_D204_k410, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.call-with-values.182 2 171) (bruijn ##.k.1375 1 0) (bruijn ##.thunk.628 1 2) (close _V10_Dwith__exception__handler_D204_lambda165))
    V_CALL(upenv->up->vars[171], runtime,
      upenv->vars[0],
      upenv->vars[2],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dwith__exception__handler_D204_lambda165, env)}));
 }
}
static void _V10_Dwith__exception__handler_D204_lambda164(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V10_Dwith__exception__handler_D204_lambda164" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dwith__exception__handler_D204_lambda164, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dwith__exception__handler_D204_lambda164, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // (##vcore.push-exception-handler (close _V10_Dwith__exception__handler_D204_k410) (bruijn ##.handler.627 0 1))
    V_CALL_FUNC(VPushExceptionHandler, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dwith__exception__handler_D204_k410, env)}),
      _var1);
 }
}
static void _V10_Derror_D205_k412(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Derror_D205_k412" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Derror_D205_k412, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Derror_D205_k412, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.raise.202 2 191) (bruijn ##.k.1379 1 0) (bruijn ##.x.1380 0 0))
    V_CALL(upenv->up->vars[191], runtime,
      upenv->vars[0],
      _var0);
 }
}
static void _V10_Derror_D205_lambda166(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, ...) {
 static VDebugInfo dbg = { "_V10_Derror_D205_lambda166" };
 VRecordCall2(runtime, &dbg);
 if(argc < 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Derror_D205_lambda166, got ~D~N"
  "-- expected 2 or more~N"
  , argc);
 }
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 2, argc, _var1);
 V_GC_CHECK2_VARARGS((VFunc)_V10_Derror_D205_lambda166, runtime, upenv, 2, argc, _var0, _var1, _varargs) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _varargs;
  // (##vcore.record (close _V10_Derror_D205_k412) #f 'error (bruijn ##.msg.630 0 1) (bruijn ##.irritants.631 0 2))
    V_CALL_FUNC(VCreateRecord2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Derror_D205_k412, env)}),
      VEncodeBool(false),
      _V0error,
      _var1,
      _varargs);
 }
}
static void _V10_Dfiber__fork_D207_lambda167(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, ...) {
 static VDebugInfo dbg = { "_V10_Dfiber__fork_D207_lambda167" };
 VRecordCall2(runtime, &dbg);
 if(argc < 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dfiber__fork_D207_lambda167, got ~D~N"
  "-- expected 1 or more~N"
  , argc);
 }
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 1, argc, _var0);
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dfiber__fork_D207_lambda167, runtime, upenv, 1, argc, _var0, _varargs) {
  // (##vcore.fiber-fork-list (bruijn ##.k.1381 0 0) (bruijn ##.args.632 0 1))
    V_CALL_FUNC(VFiberForkList, NULL, runtime,
      _var0,
      _varargs);
 }
}
static void _V10_Dfiber__map_D208_k413(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dfiber__map_D208_k413" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dfiber__map_D208_k413, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dfiber__map_D208_k413, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.fiber-fork-list.206 2 195) (bruijn ##.k.1382 1 0) (bruijn ##.x.1383 0 0))
    V_CALL(upenv->up->vars[195], runtime,
      upenv->vars[0],
      _var0);
 }
}
static void _V10_Dfiber__map_D208_lambda170(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dfiber__map_D208_lambda170" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dfiber__map_D208_lambda170, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dfiber__map_D208_lambda170, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.f.633 2 1) (bruijn ##.k.1385 0 0) (bruijn ##.e.635 1 1))
    V_CALL(upenv->up->vars[1], runtime,
      _var0,
      upenv->vars[1]);
 }
}
static void _V10_Dfiber__map_D208_lambda169(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V10_Dfiber__map_D208_lambda169" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dfiber__map_D208_lambda169, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dfiber__map_D208_lambda169, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##.k.1384 0 0) (close _V10_Dfiber__map_D208_lambda170))
    V_CALL(_var0, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dfiber__map_D208_lambda170, env)}));
 }
}
static void _V10_Dfiber__map_D208_k414(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dfiber__map_D208_k414" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dfiber__map_D208_k414, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dfiber__map_D208_k414, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.fiber-fork-list.206 2 195) (bruijn ##.k.1386 1 0) (bruijn ##.x.1387 0 0))
    V_CALL(upenv->up->vars[195], runtime,
      upenv->vars[0],
      _var0);
 }
}
static void _V10_Dfiber__map_D208_lambda172(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dfiber__map_D208_lambda172" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dfiber__map_D208_lambda172, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dfiber__map_D208_lambda172, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.f.636 2 1) (bruijn ##.k.1389 0 0) (bruijn ##.a.639 1 1) (bruijn ##.b.640 1 2))
    V_CALL(upenv->up->vars[1], runtime,
      _var0,
      upenv->vars[1],
      upenv->vars[2]);
 }
}
static void _V10_Dfiber__map_D208_lambda171(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V10_Dfiber__map_D208_lambda171" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dfiber__map_D208_lambda171, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dfiber__map_D208_lambda171, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn ##.k.1388 0 0) (close _V10_Dfiber__map_D208_lambda172))
    V_CALL(_var0, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dfiber__map_D208_lambda172, env)}));
 }
}
static void _V10_Dfiber__map_D208_k415(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dfiber__map_D208_k415" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dfiber__map_D208_k415, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dfiber__map_D208_k415, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.fiber-fork-list.206 2 195) (bruijn ##.k.1390 1 0) (bruijn ##.x.1391 0 0))
    V_CALL(upenv->up->vars[195], runtime,
      upenv->vars[0],
      _var0);
 }
}
static void _V10_Dfiber__map_D208_lambda174(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dfiber__map_D208_lambda174" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dfiber__map_D208_lambda174, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dfiber__map_D208_lambda174, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.f.641 2 1) (bruijn ##.k.1393 0 0) (bruijn ##.a.645 1 1) (bruijn ##.b.646 1 2) (bruijn ##.c.647 1 3))
    V_CALL(upenv->up->vars[1], runtime,
      _var0,
      upenv->vars[1],
      upenv->vars[2],
      upenv->vars[3]);
 }
}
static void _V10_Dfiber__map_D208_lambda173(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V10_Dfiber__map_D208_lambda173" };
 VRecordCall2(runtime, &dbg);
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V10_Dfiber__map_D208_lambda173, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dfiber__map_D208_lambda173, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // ((bruijn ##.k.1392 0 0) (close _V10_Dfiber__map_D208_lambda174))
    V_CALL(_var0, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dfiber__map_D208_lambda174, env)}));
 }
}
static void _V10_Dfiber__map_D208_k416(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dfiber__map_D208_k416" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dfiber__map_D208_k416, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dfiber__map_D208_k416, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.fiber-fork-list.206 2 195) (bruijn ##.k.1394 1 0) (bruijn ##.x.1395 0 0))
    V_CALL(upenv->up->vars[195], runtime,
      upenv->vars[0],
      _var0);
 }
}
static void _V10_Dfiber__map_D208_lambda176(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dfiber__map_D208_lambda176" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dfiber__map_D208_lambda176, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dfiber__map_D208_lambda176, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.apply.183 3 172) (bruijn ##.k.1397 0 0) (bruijn ##.f.648 2 1) (bruijn ##.args.651 1 1))
    V_CALL(upenv->up->up->vars[172], runtime,
      _var0,
      upenv->up->vars[1],
      upenv->vars[1]);
 }
}
static void _V10_Dfiber__map_D208_lambda175(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, ...) {
 static VDebugInfo dbg = { "_V10_Dfiber__map_D208_lambda175" };
 VRecordCall2(runtime, &dbg);
 if(argc < 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dfiber__map_D208_lambda175, got ~D~N"
  "-- expected 1 or more~N"
  , argc);
 }
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 1, argc, _var0);
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dfiber__map_D208_lambda175, runtime, upenv, 1, argc, _var0, _varargs) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _varargs;
  // ((bruijn ##.k.1396 0 0) (close _V10_Dfiber__map_D208_lambda176))
    V_CALL(_var0, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dfiber__map_D208_lambda176, env)}));
 }
}
__attribute__((used)) static void _V20CaseError__V10_Dfiber__map_D208_lambda168(VRuntime * runtime, VEnv * upenv, int argc, ...) {
 // (_V10_Dfiber__map_D208_lambda168 #t (3 ((bruijn ##.map.115 1 104) (close _V10_Dfiber__map_D208_k413) (close _V10_Dfiber__map_D208_lambda169) (bruijn ##.lst.634 0 2))) (4 ((bruijn ##.map.115 1 104) (close _V10_Dfiber__map_D208_k414) (close _V10_Dfiber__map_D208_lambda171) (bruijn ##.as.637 0 2) (bruijn ##.bs.638 0 3))) (5 ((bruijn ##.map.115 1 104) (close _V10_Dfiber__map_D208_k415) (close _V10_Dfiber__map_D208_lambda173) (bruijn ##.as.642 0 2) (bruijn ##.bs.643 0 3) (bruijn ##.cs.644 0 4))) (3 + ((bruijn ##.apply.183 1 172) (close _V10_Dfiber__map_D208_k416) (bruijn ##.map.115 1 104) (close _V10_Dfiber__map_D208_lambda175) (bruijn ##.as.649 0 2) (bruijn ##.args.650 0 3))))
 VErrorC(runtime, "Not enough arguments to _V10_Dfiber__map_D208_lambda168, got ~D~N"
 "-- expected 3~N"
 "-- expected 4~N"
 "-- expected 5~N"
 "-- expected 3 or more~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V10_Dfiber__map_D208_lambda168(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V20Case0__V10_Dfiber__map_D208_lambda168" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case0__V10_Dfiber__map_D208_lambda168, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn ##.map.115 1 104) (close _V10_Dfiber__map_D208_k413) (close _V10_Dfiber__map_D208_lambda169) (bruijn ##.lst.634 0 2))
    V_CALL(upenv->vars[104], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dfiber__map_D208_k413, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dfiber__map_D208_lambda169, env)}),
      _var2);
 }
}
__attribute__((used)) static void _V20Case1__V10_Dfiber__map_D208_lambda168(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V20Case1__V10_Dfiber__map_D208_lambda168" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case1__V10_Dfiber__map_D208_lambda168, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // ((bruijn ##.map.115 1 104) (close _V10_Dfiber__map_D208_k414) (close _V10_Dfiber__map_D208_lambda171) (bruijn ##.as.637 0 2) (bruijn ##.bs.638 0 3))
    V_CALL(upenv->vars[104], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dfiber__map_D208_k414, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dfiber__map_D208_lambda171, env)}),
      _var2,
      _var3);
 }
}
__attribute__((used)) static void _V20Case2__V10_Dfiber__map_D208_lambda168(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4) {
 static VDebugInfo dbg = { "_V20Case2__V10_Dfiber__map_D208_lambda168" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case2__V10_Dfiber__map_D208_lambda168, runtime, upenv, 5, argc, _var0, _var1, _var2, _var3, _var4) {
  struct { VEnv env; VWORD argv[5]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 5, 5, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  env->vars[4] = _var4;
  // ((bruijn ##.map.115 1 104) (close _V10_Dfiber__map_D208_k415) (close _V10_Dfiber__map_D208_lambda173) (bruijn ##.as.642 0 2) (bruijn ##.bs.643 0 3) (bruijn ##.cs.644 0 4))
    V_CALL(upenv->vars[104], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dfiber__map_D208_k415, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dfiber__map_D208_lambda173, env)}),
      _var2,
      _var3,
      _var4);
 }
}
__attribute__((used)) static void _V20Case3__V10_Dfiber__map_D208_lambda168(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, ...) {
 static VDebugInfo dbg = { "_V20Case3__V10_Dfiber__map_D208_lambda168" };
 VRecordCall2(runtime, &dbg);
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 3, argc, _var2);
 V_GC_CHECK2_VARARGS((VFunc)_V20Case3__V10_Dfiber__map_D208_lambda168, runtime, upenv, 3, argc, _var0, _var1, _var2, _varargs) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _varargs;
  // ((bruijn ##.apply.183 1 172) (close _V10_Dfiber__map_D208_k416) (bruijn ##.map.115 1 104) (close _V10_Dfiber__map_D208_lambda175) (bruijn ##.as.649 0 2) (bruijn ##.args.650 0 3))
    V_CALL(upenv->vars[172], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dfiber__map_D208_k416, env)}),
      upenv->vars[104],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dfiber__map_D208_lambda175, env)}),
      _var2,
      _varargs);
 }
}
void _V10_Dfiber__map_D208_lambda168(VRuntime * runtime, VEnv * upenv, int argc, ...);
asm(
".intel_syntax noprefix\n"
#ifdef __linux__
".type _V10_Dfiber__map_D208_lambda168, @function\n"
#endif
"_V10_Dfiber__map_D208_lambda168:\n"
"    cmp " ARGC_REG ", 3\n"
"    je _V20Case0__V10_Dfiber__map_D208_lambda168\n"
"    cmp " ARGC_REG ", 4\n"
"    je _V20Case1__V10_Dfiber__map_D208_lambda168\n"
"    cmp " ARGC_REG ", 5\n"
"    je _V20Case2__V10_Dfiber__map_D208_lambda168\n"
"    cmp " ARGC_REG ", 3\n"
"    jge _V20Case3__V10_Dfiber__map_D208_lambda168\n"
"    jmp _V20CaseError__V10_Dfiber__map_D208_lambda168\n"
);
static void _V0vanity_V0core_V20_k429(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k429" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0core_V20_k429, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k429, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.k.653 19 0) (##inline ##vcore.cons (##inline ##vcore.cons 'null? (bruijn ##.null?.11 13 0)) (##inline ##vcore.cons (##inline ##vcore.cons 'eof-object? (bruijn ##.eof-object?.13 13 2)) (##inline ##vcore.cons (##inline ##vcore.cons 'boolean? (bruijn ##.boolean?.12 13 1)) (##inline ##vcore.cons (##inline ##vcore.cons 'pair? (bruijn ##.pair?.14 13 3)) (##inline ##vcore.cons (##inline ##vcore.cons 'vector? (bruijn ##.vector?.15 13 4)) (##inline ##vcore.cons (##inline ##vcore.cons 'record? (bruijn ##.record?.16 13 5)) (##inline ##vcore.cons (##inline ##vcore.cons 'procedure? (bruijn ##.procedure?.17 13 6)) (##inline ##vcore.cons (##inline ##vcore.cons 'symbol? (bruijn ##.symbol?.18 13 7)) (##inline ##vcore.cons (##inline ##vcore.cons 'string? (bruijn ##.string?.19 13 8)) (##inline ##vcore.cons (##inline ##vcore.cons 'exact? (bruijn ##.exact?.21 13 10)) (##inline ##vcore.cons (##inline ##vcore.cons 'exact-integer? (bruijn ##.exact-integer?.22 13 11)) (##inline ##vcore.cons (##inline ##vcore.cons 'inexact? (bruijn ##.inexact?.24 13 13)) (##inline ##vcore.cons (##inline ##vcore.cons 'real? (bruijn ##.real?.25 13 14)) (##inline ##vcore.cons (##inline ##vcore.cons 'integer? (bruijn ##.integer?.23 13 12)) (##inline ##vcore.cons (##inline ##vcore.cons 'char? (bruijn ##.char?.20 13 9)) (##inline ##vcore.cons (##inline ##vcore.cons 'eq? (bruijn ##.eq?.26 13 15)) (##inline ##vcore.cons (##inline ##vcore.cons 'symbol=? (bruijn ##.symbol=?.27 13 16)) (##inline ##vcore.cons (##inline ##vcore.cons 'eqv? (bruijn ##.eqv?.29 13 18)) (##inline ##vcore.cons (##inline ##vcore.cons 'equal? (bruijn ##.equal?.32 13 21)) (##inline ##vcore.cons (##inline ##vcore.cons 'not (bruijn ##.not.33 13 22)) (##inline ##vcore.cons (##inline ##vcore.cons '< (bruijn ##.<.34 13 23)) (##inline ##vcore.cons (##inline ##vcore.cons '= (bruijn ##.=.35 13 24)) (##inline ##vcore.cons (##inline ##vcore.cons '> (bruijn ##.>.36 13 25)) (##inline ##vcore.cons (##inline ##vcore.cons '<= (bruijn ##.<=.37 13 26)) (##inline ##vcore.cons (##inline ##vcore.cons '>= (bruijn ##.>=.38 13 27)) (##inline ##vcore.cons (##inline ##vcore.cons 'inexact (bruijn ##.inexact.39 13 28)) (##inline ##vcore.cons (##inline ##vcore.cons 'exact->inexact (bruijn ##.exact->inexact.40 13 29)) (##inline ##vcore.cons (##inline ##vcore.cons 'number? (bruijn ##.number?.41 13 30)) (##inline ##vcore.cons (##inline ##vcore.cons 'complex? (bruijn ##.complex?.42 13 31)) (##inline ##vcore.cons (##inline ##vcore.cons 'rational? (bruijn ##.rational?.43 13 32)) (##inline ##vcore.cons (##inline ##vcore.cons 'positive? (bruijn ##.positive?.44 13 33)) (##inline ##vcore.cons (##inline ##vcore.cons 'negative? (bruijn ##.negative?.46 13 35)) (##inline ##vcore.cons (##inline ##vcore.cons 'zero? (bruijn ##.zero?.45 13 34)) (##inline ##vcore.cons (##inline ##vcore.cons '+ (bruijn ##.+.47 13 36)) (##inline ##vcore.cons (##inline ##vcore.cons '- (bruijn ##.-.48 13 37)) (##inline ##vcore.cons (##inline ##vcore.cons '* (bruijn ##.*.49 13 38)) (##inline ##vcore.cons (##inline ##vcore.cons '/ (bruijn ##./.50 13 39)) (##inline ##vcore.cons (##inline ##vcore.cons 'quotient (bruijn ##.quotient.51 13 40)) (##inline ##vcore.cons (##inline ##vcore.cons 'remainder (bruijn ##.remainder.52 13 41)) (##inline ##vcore.cons (##inline ##vcore.cons 'max (bruijn ##.max.72 13 61)) (##inline ##vcore.cons (##inline ##vcore.cons 'min (bruijn ##.min.73 13 62)) (##inline ##vcore.cons (##inline ##vcore.cons 'abs (bruijn ##.abs.53 13 42)) (##inline ##vcore.cons (##inline ##vcore.cons 'square (bruijn ##.square.57 13 46)) (##inline ##vcore.cons (##inline ##vcore.cons 'sqrt (bruijn ##.sqrt.58 13 47)) (##inline ##vcore.cons (##inline ##vcore.cons 'ceiling (bruijn ##.ceiling.54 13 43)) (##inline ##vcore.cons (##inline ##vcore.cons 'floor (bruijn ##.floor.55 13 44)) (##inline ##vcore.cons (##inline ##vcore.cons 'round (bruijn ##.round.56 13 45)) (##inline ##vcore.cons (##inline ##vcore.cons 'sin (bruijn ##.sin.59 13 48)) (##inline ##vcore.cons (##inline ##vcore.cons 'cos (bruijn ##.cos.60 13 49)) (##inline ##vcore.cons (##inline ##vcore.cons 'tan (bruijn ##.tan.61 13 50)) (##inline ##vcore.cons (##inline ##vcore.cons 'asin (bruijn ##.asin.62 13 51)) (##inline ##vcore.cons (##inline ##vcore.cons 'acos (bruijn ##.acos.63 13 52)) (##inline ##vcore.cons (##inline ##vcore.cons 'atan (bruijn ##.atan.66 13 55)) (##inline ##vcore.cons (##inline ##vcore.cons 'exp (bruijn ##.exp.67 13 56)) (##inline ##vcore.cons (##inline ##vcore.cons 'log (bruijn ##.log.69 13 58)) (##inline ##vcore.cons (##inline ##vcore.cons 'expt (bruijn ##.expt.71 13 60)) (##inline ##vcore.cons (##inline ##vcore.cons 'pow (bruijn ##.pow.70 13 59)) (##inline ##vcore.cons (##inline ##vcore.cons 'cons (bruijn ##.cons.74 13 63)) (##inline ##vcore.cons (##inline ##vcore.cons 'car (bruijn ##.car.75 13 64)) (##inline ##vcore.cons (##inline ##vcore.cons 'cdr (bruijn ##.cdr.76 13 65)) (##inline ##vcore.cons (##inline ##vcore.cons 'set-car! (bruijn ##.set-car!.77 13 66)) (##inline ##vcore.cons (##inline ##vcore.cons 'set-cdr! (bruijn ##.set-cdr!.78 13 67)) (##inline ##vcore.cons (##inline ##vcore.cons 'caar (bruijn ##.caar.79 13 68)) (##inline ##vcore.cons (##inline ##vcore.cons 'cadr (bruijn ##.cadr.80 13 69)) (##inline ##vcore.cons (##inline ##vcore.cons 'cdar (bruijn ##.cdar.81 13 70)) (##inline ##vcore.cons (##inline ##vcore.cons 'cddr (bruijn ##.cddr.82 13 71)) (##inline ##vcore.cons (##inline ##vcore.cons 'caaar (bruijn ##.caaar.83 13 72)) (##inline ##vcore.cons (##inline ##vcore.cons 'caadr (bruijn ##.caadr.84 13 73)) (##inline ##vcore.cons (##inline ##vcore.cons 'cadar (bruijn ##.cadar.85 13 74)) (##inline ##vcore.cons (##inline ##vcore.cons 'caddr (bruijn ##.caddr.86 13 75)) (##inline ##vcore.cons (##inline ##vcore.cons 'cdaar (bruijn ##.cdaar.87 13 76)) (##inline ##vcore.cons (##inline ##vcore.cons 'cdadr (bruijn ##.cdadr.88 13 77)) (##inline ##vcore.cons (##inline ##vcore.cons 'cddar (bruijn ##.cddar.89 13 78)) (##inline ##vcore.cons (##inline ##vcore.cons 'cdddr (bruijn ##.cdddr.90 13 79)) (##inline ##vcore.cons (##inline ##vcore.cons 'caaaar (bruijn ##.caaaar.91 13 80)) (##inline ##vcore.cons (##inline ##vcore.cons 'caaadr (bruijn ##.caaadr.92 13 81)) (##inline ##vcore.cons (##inline ##vcore.cons 'caadar (bruijn ##.caadar.93 13 82)) (##inline ##vcore.cons (##inline ##vcore.cons 'caaddr (bruijn ##.caaddr.94 13 83)) (##inline ##vcore.cons (##inline ##vcore.cons 'cadaar (bruijn ##.cadaar.95 13 84)) (##inline ##vcore.cons (##inline ##vcore.cons 'cadadr (bruijn ##.cadadr.96 13 85)) (##inline ##vcore.cons (##inline ##vcore.cons 'caddar (bruijn ##.caddar.97 13 86)) (##inline ##vcore.cons (##inline ##vcore.cons 'cadddr (bruijn ##.cadddr.98 13 87)) (##inline ##vcore.cons (##inline ##vcore.cons 'cdaaar (bruijn ##.cdaaar.99 13 88)) (##inline ##vcore.cons (##inline ##vcore.cons 'cdaadr (bruijn ##.cdaadr.100 13 89)) (##inline ##vcore.cons (##inline ##vcore.cons 'cdadar (bruijn ##.cdadar.101 13 90)) (##inline ##vcore.cons (##inline ##vcore.cons 'cdaddr (bruijn ##.cdaddr.102 13 91)) (##inline ##vcore.cons (##inline ##vcore.cons 'cddaar (bruijn ##.cddaar.103 13 92)) (##inline ##vcore.cons (##inline ##vcore.cons 'cddadr (bruijn ##.cddadr.104 13 93)) (##inline ##vcore.cons (##inline ##vcore.cons 'cdddar (bruijn ##.cdddar.105 13 94)) (##inline ##vcore.cons (##inline ##vcore.cons 'cddddr (bruijn ##.cddddr.106 13 95)) (##inline ##vcore.cons (##inline ##vcore.cons 'list (bruijn ##.list.107 13 96)) (##inline ##vcore.cons (##inline ##vcore.cons 'list? (bruijn ##.list?.108 13 97)) (##inline ##vcore.cons (##inline ##vcore.cons 'length (bruijn ##.length.109 13 98)) (##inline ##vcore.cons (##inline ##vcore.cons 'list-tail (bruijn ##.list-tail.110 13 99)) (##inline ##vcore.cons (##inline ##vcore.cons 'list-ref (bruijn ##.list-ref.111 13 100)) (##inline ##vcore.cons (##inline ##vcore.cons 'list-set! (bruijn ##.list-set!.112 13 101)) (##inline ##vcore.cons (##inline ##vcore.cons 'list-copy (bruijn ##.list-copy.113 13 102)) (##inline ##vcore.cons (##inline ##vcore.cons 'make-list (bruijn ##.make-list.114 13 103)) (##inline ##vcore.cons (##inline ##vcore.cons 'map (bruijn ##.map.115 13 104)) (##inline ##vcore.cons (##inline ##vcore.cons 'for-each (bruijn ##.for-each.116 13 105)) (##inline ##vcore.cons (##inline ##vcore.cons 'append (bruijn ##.append.118 13 107)) (##inline ##vcore.cons (##inline ##vcore.cons 'reverse (bruijn ##.reverse.119 13 108)) (##inline ##vcore.cons (##inline ##vcore.cons 'memq (bruijn ##.memq.120 13 109)) (##inline ##vcore.cons (##inline ##vcore.cons 'memv (bruijn ##.memv.121 13 110)) (##inline ##vcore.cons (##inline ##vcore.cons 'member (bruijn ##.member.122 13 111)) (##inline ##vcore.cons (##inline ##vcore.cons 'assq (bruijn ##.assq.123 13 112)) (##inline ##vcore.cons (##inline ##vcore.cons 'assv (bruijn ##.assv.124 13 113)) (##inline ##vcore.cons (##inline ##vcore.cons 'assoc (bruijn ##.assoc.125 13 114)) (##inline ##vcore.cons (##inline ##vcore.cons 'string->list (bruijn ##.string->list.137 13 126)) (##inline ##vcore.cons (##inline ##vcore.cons 'list->string (bruijn ##.list->string.136 13 125)) (##inline ##vcore.cons (##inline ##vcore.cons 'make-string (bruijn ##.make-string.126 13 115)) (##inline ##vcore.cons (##inline ##vcore.cons 'substring (bruijn ##.substring.127 13 116)) (##inline ##vcore.cons (##inline ##vcore.cons 'string-copy (bruijn ##.string-copy.128 13 117)) (##inline ##vcore.cons (##inline ##vcore.cons 'string-copy! (bruijn ##.string-copy!.129 13 118)) (##inline ##vcore.cons (##inline ##vcore.cons 'string-ref (bruijn ##.string-ref.130 13 119)) (##inline ##vcore.cons (##inline ##vcore.cons 'string-set! (bruijn ##.string-set!.131 13 120)) (##inline ##vcore.cons (##inline ##vcore.cons 'string-length (bruijn ##.string-length.132 13 121)) (##inline ##vcore.cons (##inline ##vcore.cons 'string->symbol (bruijn ##.string->symbol.133 13 122)) (##inline ##vcore.cons (##inline ##vcore.cons 'string->number (bruijn ##.string->number.134 13 123)) (##inline ##vcore.cons (##inline ##vcore.cons 'string-append (bruijn ##.string-append.138 13 127)) (##inline ##vcore.cons (##inline ##vcore.cons 'symbol->string (bruijn ##.symbol->string.135 13 124)) (##inline ##vcore.cons (##inline ##vcore.cons 'list->vector (bruijn ##.list->vector.139 13 128)) (##inline ##vcore.cons (##inline ##vcore.cons 'vector->list (bruijn ##.vector->list.144 13 133)) (##inline ##vcore.cons (##inline ##vcore.cons 'vector (bruijn ##.vector.140 13 129)) (##inline ##vcore.cons (##inline ##vcore.cons 'vector-ref (bruijn ##.vector-ref.141 13 130)) (##inline ##vcore.cons (##inline ##vcore.cons 'vector-set! (bruijn ##.vector-set!.142 13 131)) (##inline ##vcore.cons (##inline ##vcore.cons 'vector-length (bruijn ##.vector-length.143 13 132)) (##inline ##vcore.cons (##inline ##vcore.cons 'vector-for-each (bruijn ##.vector-for-each.145 13 134)) (##inline ##vcore.cons (##inline ##vcore.cons 'record (bruijn ##.record.146 13 135)) (##inline ##vcore.cons (##inline ##vcore.cons 'record-ref (bruijn ##.record-ref.147 13 136)) (##inline ##vcore.cons (##inline ##vcore.cons 'record-set! (bruijn ##.record-set!.148 13 137)) (##inline ##vcore.cons (##inline ##vcore.cons 'record-length (bruijn ##.record-length.149 13 138)) (##inline ##vcore.cons (##inline ##vcore.cons 'make-hash-table (bruijn ##.make-hash-table.150 13 139)) (##inline ##vcore.cons (##inline ##vcore.cons 'hash-table-ref (bruijn ##.hash-table-ref.153 13 142)) (##inline ##vcore.cons (##inline ##vcore.cons 'hash-table-set! (bruijn ##.hash-table-set!.154 13 143)) (##inline ##vcore.cons (##inline ##vcore.cons 'hash-table-delete! (bruijn ##.hash-table-delete!.155 13 144)) (##inline ##vcore.cons (##inline ##vcore.cons 'char->integer (bruijn ##.char->integer.156 13 145)) (##inline ##vcore.cons (##inline ##vcore.cons 'current-output-port (bruijn ##.current-output-port.157 13 146)) (##inline ##vcore.cons (##inline ##vcore.cons 'current-error-port (bruijn ##.current-error-port.158 13 147)) (##inline ##vcore.cons (##inline ##vcore.cons 'current-input-port (bruijn ##.current-input-port.159 13 148)) (##inline ##vcore.cons (##inline ##vcore.cons 'open-input-file (bruijn ##.open-input-file.165 13 154)) (##inline ##vcore.cons (##inline ##vcore.cons 'open-output-file (bruijn ##.open-output-file.166 13 155)) (##inline ##vcore.cons (##inline ##vcore.cons 'close-port (bruijn ##.close-port.161 13 150)) (##inline ##vcore.cons (##inline ##vcore.cons 'open-output-string (bruijn ##.open-output-string.167 13 156)) (##inline ##vcore.cons (##inline ##vcore.cons 'get-output-string (bruijn ##.get-output-string.168 13 157)) (##inline ##vcore.cons (##inline ##vcore.cons 'with-output-to-file (bruijn ##.with-output-to-file.169 13 158)) (##inline ##vcore.cons (##inline ##vcore.cons 'with-input-from-file (bruijn ##.with-input-from-file.170 13 159)) (##inline ##vcore.cons (##inline ##vcore.cons 'read-char (bruijn ##.read-char.171 13 160)) (##inline ##vcore.cons (##inline ##vcore.cons 'read-line (bruijn ##.read-line.172 13 161)) (##inline ##vcore.cons (##inline ##vcore.cons 'read (bruijn ##.read.173 13 162)) (##inline ##vcore.cons (##inline ##vcore.cons 'newline (bruijn ##.newline.174 13 163)) (##inline ##vcore.cons (##inline ##vcore.cons 'display (bruijn ##.display.178 13 167)) (##inline ##vcore.cons (##inline ##vcore.cons 'write (bruijn ##.write.179 13 168)) (##inline ##vcore.cons (##inline ##vcore.cons 'call/cc (bruijn ##.call/cc.180 13 169)) (##inline ##vcore.cons (##inline ##vcore.cons 'call-with-current-continuation (bruijn ##.call-with-current-continuation.181 13 170)) (##inline ##vcore.cons (##inline ##vcore.cons 'call-with-values (bruijn ##.call-with-values.182 13 171)) (##inline ##vcore.cons (##inline ##vcore.cons 'apply (bruijn ##.apply.183 13 172)) (##inline ##vcore.cons (##inline ##vcore.cons 'values (bruijn ##.values.184 13 173)) (##inline ##vcore.cons (##inline ##vcore.cons 'setter (bruijn ##.setter.185 13 174)) (##inline ##vcore.cons (##inline ##vcore.cons 'mutator (bruijn ##.mutator.186 13 175)) (##inline ##vcore.cons (##inline ##vcore.cons '##vcore.setter (bruijn ##..vcore.setter.10 14 1)) (##inline ##vcore.cons (##inline ##vcore.cons '##vcore.mutator (bruijn ##..vcore.mutator.9 14 0)) (##inline ##vcore.cons (##inline ##vcore.cons 'make-parameter (bruijn ##.make-parameter.187 13 176)) (##inline ##vcore.cons (##inline ##vcore.cons 'raise (bruijn ##.raise.202 13 191)) (##inline ##vcore.cons (##inline ##vcore.cons 'raise-continuable (bruijn ##.raise-continuable.203 13 192)) (##inline ##vcore.cons (##inline ##vcore.cons 'with-exception-handler (bruijn ##.with-exception-handler.204 13 193)) (##inline ##vcore.cons (##inline ##vcore.cons 'command-line (bruijn ##.command-line.188 13 177)) (##inline ##vcore.cons (##inline ##vcore.cons 'system (bruijn ##.system.189 13 178)) (##inline ##vcore.cons (##inline ##vcore.cons 'open-input-process (bruijn ##.open-input-process.190 13 179)) (##inline ##vcore.cons (##inline ##vcore.cons 'open-output-process (bruijn ##.open-output-process.191 13 180)) (##inline ##vcore.cons (##inline ##vcore.cons 'make-temporary-file (bruijn ##.make-temporary-file.192 13 181)) (##inline ##vcore.cons (##inline ##vcore.cons 'exit (bruijn ##.exit.193 13 182)) (##inline ##vcore.cons (##inline ##vcore.cons 'fiber-fork (bruijn ##.fiber-fork.207 13 196)) (##inline ##vcore.cons (##inline ##vcore.cons 'fiber-fork-list (bruijn ##.fiber-fork-list.206 13 195)) (##inline ##vcore.cons (##inline ##vcore.cons 'fiber-map (bruijn ##.fiber-map.208 13 197)) (##inline ##vcore.cons (##inline ##vcore.cons 'async (bruijn ##.async.209 13 198)) (##inline ##vcore.cons (##inline ##vcore.cons 'await (bruijn ##.await.210 13 199)) (##inline ##vcore.cons (##inline ##vcore.cons 'atom? (bruijn ##.atom?.194 13 183)) (##inline ##vcore.cons (##inline ##vcore.cons 'displayln (bruijn ##.displayln.195 13 184)) (##inline ##vcore.cons (##inline ##vcore.cons 'writeln (bruijn ##.writeln.196 13 185)) (##inline ##vcore.cons (##inline ##vcore.cons 'format (bruijn ##.format.201 13 190)) (##inline ##vcore.cons (##inline ##vcore.cons 'printf (bruijn ##.printf.199 13 188)) (##inline ##vcore.cons (##inline ##vcore.cons 'sprintf (bruijn ##.sprintf.200 13 189)) (##inline ##vcore.cons (##inline ##vcore.cons 'error (bruijn ##.error.205 13 194)) '())))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))
    V_CALL(VGetArg(upenv, 19-1, 0), runtime,
      VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0null_Q,
        VGetArg(upenv, 13-1, 0)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0eof__object_Q,
        VGetArg(upenv, 13-1, 2)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0boolean_Q,
        VGetArg(upenv, 13-1, 1)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0pair_Q,
        VGetArg(upenv, 13-1, 3)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0vector_Q,
        VGetArg(upenv, 13-1, 4)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0record_Q,
        VGetArg(upenv, 13-1, 5)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0procedure_Q,
        VGetArg(upenv, 13-1, 6)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0symbol_Q,
        VGetArg(upenv, 13-1, 7)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0string_Q,
        VGetArg(upenv, 13-1, 8)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0exact_Q,
        VGetArg(upenv, 13-1, 10)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0exact__integer_Q,
        VGetArg(upenv, 13-1, 11)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0inexact_Q,
        VGetArg(upenv, 13-1, 13)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0real_Q,
        VGetArg(upenv, 13-1, 14)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0integer_Q,
        VGetArg(upenv, 13-1, 12)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0char_Q,
        VGetArg(upenv, 13-1, 9)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0eq_Q,
        VGetArg(upenv, 13-1, 15)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0symbol_E_Q,
        VGetArg(upenv, 13-1, 16)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0eqv_Q,
        VGetArg(upenv, 13-1, 18)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0equal_Q,
        VGetArg(upenv, 13-1, 21)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0not,
        VGetArg(upenv, 13-1, 22)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0_L,
        VGetArg(upenv, 13-1, 23)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0_E,
        VGetArg(upenv, 13-1, 24)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0_G,
        VGetArg(upenv, 13-1, 25)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0_L_E,
        VGetArg(upenv, 13-1, 26)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0_G_E,
        VGetArg(upenv, 13-1, 27)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0inexact,
        VGetArg(upenv, 13-1, 28)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0exact___Ginexact,
        VGetArg(upenv, 13-1, 29)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0number_Q,
        VGetArg(upenv, 13-1, 30)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0complex_Q,
        VGetArg(upenv, 13-1, 31)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0rational_Q,
        VGetArg(upenv, 13-1, 32)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0positive_Q,
        VGetArg(upenv, 13-1, 33)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0negative_Q,
        VGetArg(upenv, 13-1, 35)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0zero_Q,
        VGetArg(upenv, 13-1, 34)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0_P,
        VGetArg(upenv, 13-1, 36)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0__,
        VGetArg(upenv, 13-1, 37)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0_S,
        VGetArg(upenv, 13-1, 38)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0_W,
        VGetArg(upenv, 13-1, 39)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0quotient,
        VGetArg(upenv, 13-1, 40)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0remainder,
        VGetArg(upenv, 13-1, 41)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0max,
        VGetArg(upenv, 13-1, 61)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0min,
        VGetArg(upenv, 13-1, 62)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0abs,
        VGetArg(upenv, 13-1, 42)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0square,
        VGetArg(upenv, 13-1, 46)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0sqrt,
        VGetArg(upenv, 13-1, 47)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0ceiling,
        VGetArg(upenv, 13-1, 43)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0floor,
        VGetArg(upenv, 13-1, 44)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0round,
        VGetArg(upenv, 13-1, 45)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0sin,
        VGetArg(upenv, 13-1, 48)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0cos,
        VGetArg(upenv, 13-1, 49)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0tan,
        VGetArg(upenv, 13-1, 50)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0asin,
        VGetArg(upenv, 13-1, 51)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0acos,
        VGetArg(upenv, 13-1, 52)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0atan,
        VGetArg(upenv, 13-1, 55)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0exp,
        VGetArg(upenv, 13-1, 56)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0log,
        VGetArg(upenv, 13-1, 58)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0expt,
        VGetArg(upenv, 13-1, 60)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0pow,
        VGetArg(upenv, 13-1, 59)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0cons,
        VGetArg(upenv, 13-1, 63)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0car,
        VGetArg(upenv, 13-1, 64)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0cdr,
        VGetArg(upenv, 13-1, 65)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0set__car_B,
        VGetArg(upenv, 13-1, 66)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0set__cdr_B,
        VGetArg(upenv, 13-1, 67)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0caar,
        VGetArg(upenv, 13-1, 68)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0cadr,
        VGetArg(upenv, 13-1, 69)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0cdar,
        VGetArg(upenv, 13-1, 70)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0cddr,
        VGetArg(upenv, 13-1, 71)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0caaar,
        VGetArg(upenv, 13-1, 72)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0caadr,
        VGetArg(upenv, 13-1, 73)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0cadar,
        VGetArg(upenv, 13-1, 74)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0caddr,
        VGetArg(upenv, 13-1, 75)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0cdaar,
        VGetArg(upenv, 13-1, 76)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0cdadr,
        VGetArg(upenv, 13-1, 77)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0cddar,
        VGetArg(upenv, 13-1, 78)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0cdddr,
        VGetArg(upenv, 13-1, 79)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0caaaar,
        VGetArg(upenv, 13-1, 80)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0caaadr,
        VGetArg(upenv, 13-1, 81)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0caadar,
        VGetArg(upenv, 13-1, 82)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0caaddr,
        VGetArg(upenv, 13-1, 83)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0cadaar,
        VGetArg(upenv, 13-1, 84)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0cadadr,
        VGetArg(upenv, 13-1, 85)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0caddar,
        VGetArg(upenv, 13-1, 86)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0cadddr,
        VGetArg(upenv, 13-1, 87)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0cdaaar,
        VGetArg(upenv, 13-1, 88)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0cdaadr,
        VGetArg(upenv, 13-1, 89)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0cdadar,
        VGetArg(upenv, 13-1, 90)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0cdaddr,
        VGetArg(upenv, 13-1, 91)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0cddaar,
        VGetArg(upenv, 13-1, 92)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0cddadr,
        VGetArg(upenv, 13-1, 93)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0cdddar,
        VGetArg(upenv, 13-1, 94)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0cddddr,
        VGetArg(upenv, 13-1, 95)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0list,
        VGetArg(upenv, 13-1, 96)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0list_Q,
        VGetArg(upenv, 13-1, 97)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0length,
        VGetArg(upenv, 13-1, 98)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0list__tail,
        VGetArg(upenv, 13-1, 99)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0list__ref,
        VGetArg(upenv, 13-1, 100)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0list__set_B,
        VGetArg(upenv, 13-1, 101)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0list__copy,
        VGetArg(upenv, 13-1, 102)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0make__list,
        VGetArg(upenv, 13-1, 103)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0map,
        VGetArg(upenv, 13-1, 104)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0for__each,
        VGetArg(upenv, 13-1, 105)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0append,
        VGetArg(upenv, 13-1, 107)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0reverse,
        VGetArg(upenv, 13-1, 108)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0memq,
        VGetArg(upenv, 13-1, 109)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0memv,
        VGetArg(upenv, 13-1, 110)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0member,
        VGetArg(upenv, 13-1, 111)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0assq,
        VGetArg(upenv, 13-1, 112)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0assv,
        VGetArg(upenv, 13-1, 113)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0assoc,
        VGetArg(upenv, 13-1, 114)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0string___Glist,
        VGetArg(upenv, 13-1, 126)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0list___Gstring,
        VGetArg(upenv, 13-1, 125)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0make__string,
        VGetArg(upenv, 13-1, 115)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0substring,
        VGetArg(upenv, 13-1, 116)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0string__copy,
        VGetArg(upenv, 13-1, 117)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0string__copy_B,
        VGetArg(upenv, 13-1, 118)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0string__ref,
        VGetArg(upenv, 13-1, 119)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0string__set_B,
        VGetArg(upenv, 13-1, 120)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0string__length,
        VGetArg(upenv, 13-1, 121)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0string___Gsymbol,
        VGetArg(upenv, 13-1, 122)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0string___Gnumber,
        VGetArg(upenv, 13-1, 123)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0string__append,
        VGetArg(upenv, 13-1, 127)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0symbol___Gstring,
        VGetArg(upenv, 13-1, 124)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0list___Gvector,
        VGetArg(upenv, 13-1, 128)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0vector___Glist,
        VGetArg(upenv, 13-1, 133)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0vector,
        VGetArg(upenv, 13-1, 129)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0vector__ref,
        VGetArg(upenv, 13-1, 130)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0vector__set_B,
        VGetArg(upenv, 13-1, 131)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0vector__length,
        VGetArg(upenv, 13-1, 132)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0vector__for__each,
        VGetArg(upenv, 13-1, 134)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0record,
        VGetArg(upenv, 13-1, 135)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0record__ref,
        VGetArg(upenv, 13-1, 136)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0record__set_B,
        VGetArg(upenv, 13-1, 137)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0record__length,
        VGetArg(upenv, 13-1, 138)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0make__hash__table,
        VGetArg(upenv, 13-1, 139)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0hash__table__ref,
        VGetArg(upenv, 13-1, 142)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0hash__table__set_B,
        VGetArg(upenv, 13-1, 143)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0hash__table__delete_B,
        VGetArg(upenv, 13-1, 144)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0char___Ginteger,
        VGetArg(upenv, 13-1, 145)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0current__output__port,
        VGetArg(upenv, 13-1, 146)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0current__error__port,
        VGetArg(upenv, 13-1, 147)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0current__input__port,
        VGetArg(upenv, 13-1, 148)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0open__input__file,
        VGetArg(upenv, 13-1, 154)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0open__output__file,
        VGetArg(upenv, 13-1, 155)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0close__port,
        VGetArg(upenv, 13-1, 150)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0open__output__string,
        VGetArg(upenv, 13-1, 156)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0get__output__string,
        VGetArg(upenv, 13-1, 157)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0with__output__to__file,
        VGetArg(upenv, 13-1, 158)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0with__input__from__file,
        VGetArg(upenv, 13-1, 159)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0read__char,
        VGetArg(upenv, 13-1, 160)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0read__line,
        VGetArg(upenv, 13-1, 161)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0read,
        VGetArg(upenv, 13-1, 162)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0newline,
        VGetArg(upenv, 13-1, 163)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0display,
        VGetArg(upenv, 13-1, 167)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0write,
        VGetArg(upenv, 13-1, 168)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0call_Wcc,
        VGetArg(upenv, 13-1, 169)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0call__with__current__continuation,
        VGetArg(upenv, 13-1, 170)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0call__with__values,
        VGetArg(upenv, 13-1, 171)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0apply,
        VGetArg(upenv, 13-1, 172)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0values,
        VGetArg(upenv, 13-1, 173)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0setter,
        VGetArg(upenv, 13-1, 174)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0mutator,
        VGetArg(upenv, 13-1, 175)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V10vcore_Dsetter,
        VGetArg(upenv, 14-1, 1)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V10vcore_Dmutator,
        VGetArg(upenv, 14-1, 0)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0make__parameter,
        VGetArg(upenv, 13-1, 176)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0raise,
        VGetArg(upenv, 13-1, 191)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0raise__continuable,
        VGetArg(upenv, 13-1, 192)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0with__exception__handler,
        VGetArg(upenv, 13-1, 193)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0command__line,
        VGetArg(upenv, 13-1, 177)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0system,
        VGetArg(upenv, 13-1, 178)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0open__input__process,
        VGetArg(upenv, 13-1, 179)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0open__output__process,
        VGetArg(upenv, 13-1, 180)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0make__temporary__file,
        VGetArg(upenv, 13-1, 181)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0exit,
        VGetArg(upenv, 13-1, 182)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0fiber__fork,
        VGetArg(upenv, 13-1, 196)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0fiber__fork__list,
        VGetArg(upenv, 13-1, 195)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0fiber__map,
        VGetArg(upenv, 13-1, 197)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0async,
        VGetArg(upenv, 13-1, 198)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0await,
        VGetArg(upenv, 13-1, 199)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0atom_Q,
        VGetArg(upenv, 13-1, 183)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0displayln,
        VGetArg(upenv, 13-1, 184)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0writeln,
        VGetArg(upenv, 13-1, 185)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0format,
        VGetArg(upenv, 13-1, 190)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0printf,
        VGetArg(upenv, 13-1, 188)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0sprintf,
        VGetArg(upenv, 13-1, 189)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0error,
        VGetArg(upenv, 13-1, 194)),
        VNULL)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
 }
}
static void _V0vanity_V0core_V20_k428(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k428" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0core_V20_k428, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k428, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k429) (bruijn ##.current-input-port.159 12 148) (bruijn ##.x.1772 0 0))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k429, env)}),
      VEncodeInt(12l), VEncodeInt(148l),
      _var0
    );
 }
}
static void _V0vanity_V0core_V20_k427(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k427" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0core_V20_k427, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k427, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.make-parameter.187 11 176) (close _V0vanity_V0core_V20_k428) (bruijn ##.x.1773 0 0))
    V_CALL(VGetArg(upenv, 11-1, 176), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k428, env)}),
      _var0);
 }
}
static void _V0vanity_V0core_V20_k426(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k426" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0core_V20_k426, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k426, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.stdin->port (close _V0vanity_V0core_V20_k427))
    V_CALL_FUNC(VStdinPort, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k427, env)}));
 }
}
static void _V0vanity_V0core_V20_k425(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k425" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0core_V20_k425, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k425, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k426) (bruijn ##.current-error-port.158 9 147) (bruijn ##.x.1774 0 0))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k426, env)}),
      VEncodeInt(9l), VEncodeInt(147l),
      _var0
    );
 }
}
static void _V0vanity_V0core_V20_k424(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k424" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0core_V20_k424, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k424, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.make-parameter.187 8 176) (close _V0vanity_V0core_V20_k425) (bruijn ##.x.1775 0 0))
    V_CALL(VGetArg(upenv, 8-1, 176), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k425, env)}),
      _var0);
 }
}
static void _V0vanity_V0core_V20_k423(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k423" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0core_V20_k423, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k423, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.stderr->port (close _V0vanity_V0core_V20_k424))
    V_CALL_FUNC(VStderrPort, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k424, env)}));
 }
}
static void _V0vanity_V0core_V20_k422(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k422" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0core_V20_k422, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k422, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k423) (bruijn ##.current-output-port.157 6 146) (bruijn ##.x.1776 0 0))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k423, env)}),
      VEncodeInt(6l), VEncodeInt(146l),
      _var0
    );
 }
}
static void _V0vanity_V0core_V20_k421(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k421" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0core_V20_k421, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k421, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.make-parameter.187 5 176) (close _V0vanity_V0core_V20_k422) (bruijn ##.x.1777 0 0))
    V_CALL(VGetArg(upenv, 5-1, 176), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k422, env)}),
      _var0);
 }
}
static void _V0vanity_V0core_V20_k420(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k420" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0core_V20_k420, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k420, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.stdout->port (close _V0vanity_V0core_V20_k421))
    V_CALL_FUNC(VStdoutPort, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k421, env)}));
 }
}
static void _V0vanity_V0core_V20_k419(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k419" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0core_V20_k419, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k419, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k420) (bruijn ##.expt.71 3 60) (bruijn ##.pow.70 3 59))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k420, env)}),
      VEncodeInt(3l), VEncodeInt(60l),
      upenv->up->up->vars[59]
    );
 }
}
static void _V0vanity_V0core_V20_k418(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k418" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0core_V20_k418, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k418, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k419) (bruijn ##.rational?.43 2 32) (bruijn ##.integer?.23 2 12))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k419, env)}),
      VEncodeInt(2l), VEncodeInt(32l),
      upenv->up->vars[12]
    );
 }
}
static void _V0vanity_V0core_V20_k417(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k417" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0core_V20_k417, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k417, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0core_V20_k418) (bruijn ##.complex?.42 1 31) (bruijn ##.number?.41 1 30))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k418, env)}),
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
  // (letrec 200 ((##intrinsic ##vcore.null?) (close _V10_Dboolean_Q_D12_lambda3) (##intrinsic ##vcore.eof-object?) (##intrinsic ##vcore.pair?) (##intrinsic ##vcore.vector?) (##intrinsic ##vcore.record?) (##intrinsic ##vcore.procedure?) (##intrinsic ##vcore.symbol?) (##intrinsic ##vcore.string?) (##intrinsic ##vcore.char?) (##intrinsic ##vcore.int?) (##intrinsic ##vcore.int?) (##intrinsic ##vcore.int?) (##intrinsic ##vcore.double?) (##intrinsic ##vcore.double?) (##intrinsic ##vcore.eq?) (close _V10_Dsymbol_E_Q_D27_lambda4) (close _V10_Dboolean_E_Q_D28_lambda6) (##intrinsic ##vcore.eqv?) (close _V10_Dvector_E_Q_D30_lambda8) (close _V10_Drecord_E_Q_D31_lambda10) (close _V10_Dequal_Q_D32_lambda12) (##intrinsic ##vcore.not) (close _V10_D_L_D34_lambda13) (close _V10_D_E_D35_lambda15) (close _V10_D_G_D36_lambda17) (close _V10_D_L_E_D37_lambda19) (close _V10_D_G_E_D38_lambda21) (close _V10_Dinexact_D39_lambda23) #f (close _V10_Dnumber_Q_D41_lambda24) #f #f (close _V10_Dpositive_Q_D44_lambda25) (close _V10_Dzero_Q_D45_lambda26) (close _V10_Dnegative_Q_D46_lambda27) (##intrinsic ##vcore.+) (##intrinsic ##vcore.-) (##intrinsic ##vcore.*) (##intrinsic ##vcore./) (##intrinsic ##vcore.quotient) (##intrinsic ##vcore.remainder) (close _V10_Dabs_D53_lambda28) (##foreign.function "_V30ceil_shim") (##foreign.function "_V30floor_shim") (##foreign.function "_V30round_shim") (close _V10_Dsquare_D57_lambda29) (##foreign.function "_V30sqrt_shim") (##foreign.function "_V30sin_shim") (##foreign.function "_V30cos_shim") (##foreign.function "_V30tan_shim") (##foreign.function "_V30asin_shim") (##foreign.function "_V30acos_shim") (##foreign.function "_V30atan_shim") (##foreign.function "_V30atan2_shim") (close _V10_Datan_D66_lambda30) (##foreign.function "_V30exp_shim") (##foreign.function "_V30log_shim") (close _V10_Dlog_D69_lambda31) (##foreign.function "_V30pow_shim") #f (close _V10_Dmax_D72_lambda32) (close _V10_Dmin_D73_lambda34) (##intrinsic ##vcore.cons) (##intrinsic ##vcore.car) (##intrinsic ##vcore.cdr) (##intrinsic ##vcore.set-car!) (##intrinsic ##vcore.set-cdr!) (close _V10_Dcaar_D79_lambda36) (close _V10_Dcadr_D80_lambda37) (close _V10_Dcdar_D81_lambda38) (close _V10_Dcddr_D82_lambda39) (close _V10_Dcaaar_D83_lambda40) (close _V10_Dcaadr_D84_lambda41) (close _V10_Dcadar_D85_lambda42) (close _V10_Dcaddr_D86_lambda43) (close _V10_Dcdaar_D87_lambda44) (close _V10_Dcdadr_D88_lambda45) (close _V10_Dcddar_D89_lambda46) (close _V10_Dcdddr_D90_lambda47) (close _V10_Dcaaaar_D91_lambda48) (close _V10_Dcaaadr_D92_lambda49) (close _V10_Dcaadar_D93_lambda50) (close _V10_Dcaaddr_D94_lambda51) (close _V10_Dcadaar_D95_lambda52) (close _V10_Dcadadr_D96_lambda53) (close _V10_Dcaddar_D97_lambda54) (close _V10_Dcadddr_D98_lambda55) (close _V10_Dcdaaar_D99_lambda56) (close _V10_Dcdaadr_D100_lambda57) (close _V10_Dcdadar_D101_lambda58) (close _V10_Dcdaddr_D102_lambda59) (close _V10_Dcddaar_D103_lambda60) (close _V10_Dcddadr_D104_lambda61) (close _V10_Dcdddar_D105_lambda62) (close _V10_Dcddddr_D106_lambda63) (close _V10_Dlist_D107_lambda64) (close _V10_Dlist_Q_D108_lambda65) (close _V10_Dlength_D109_lambda66) (close _V10_Dlist__tail_D110_lambda68) (close _V10_Dlist__ref_D111_lambda69) (close _V10_Dlist__set_B_D112_lambda70) (close _V10_Dlist__copy_D113_lambda71) (close _V10_Dmake__list_D114_lambda72) (close _V10_Dmap_D115_lambda74) (close _V10_Dfor__each_D116_lambda79) (close _V10_Dfold__right_D117_lambda84) (close _V10_Dappend_D118_lambda86) (close _V10_Dreverse_D119_lambda88) (close _V10_Dmemq_D120_lambda90) (close _V10_Dmemv_D121_lambda91) (close _V10_Dmember_D122_lambda92) (close _V10_Dassq_D123_lambda93) (close _V10_Dassv_D124_lambda94) (close _V10_Dassoc_D125_lambda95) (##intrinsic ##vcore.make-string) (##intrinsic ##vcore.substring) (##intrinsic ##vcore.substring) (##intrinsic ##vcore.string-copy!) (##intrinsic ##vcore.string-ref) (##intrinsic ##vcore.string-set!) (##intrinsic ##vcore.string-length) (##intrinsic ##vcore.string->symbol) (##intrinsic ##vcore.string->number) (##intrinsic ##vcore.symbol->string) (close _V10_Dlist___Gstring_D136_lambda96) (close _V10_Dstring___Glist_D137_lambda98) (close _V10_Dstring__append_D138_lambda100) (##intrinsic ##vcore.list->vector) (close _V10_Dvector_D140_lambda101) (##intrinsic ##vcore.vector-ref) (##intrinsic ##vcore.vector-set!) (##intrinsic ##vcore.vector-length) (close _V10_Dvector___Glist_D144_lambda102) (close _V10_Dvector__for__each_D145_lambda104) (##intrinsic ##vcore.record) (##intrinsic ##vcore.record-ref) (##intrinsic ##vcore.record-set!) (##intrinsic ##vcore.record-length) (close _V10_Dmake__hash__table_D150_lambda110) (##intrinsic ##vcore.hash-table-equivalence-function) (##intrinsic ##vcore.hash-table-hash-function) (close _V10_Dhash__table__ref_D153_lambda111) (close _V10_Dhash__table__set_B_D154_lambda113) (##intrinsic ##vcore.hash-table-delete!) (##intrinsic ##vcore.char-integer) #f #f #f (close _V10_Dtry__or__gc_D160_lambda114) (close _V10_Dclose__port_D161_lambda117) (close _V10_Dopen__input__file__impl_D162_lambda118) (close _V10_Dopen__output__file__impl_D163_lambda121) (close _V10_Dopen__output__string__impl_D164_lambda124) (close _V10_Dopen__input__file_D165_lambda127) (close _V10_Dopen__output__file_D166_lambda129) (close _V10_Dopen__output__string_D167_lambda131) (##intrinsic ##vcore.get-output-string) (close _V10_Dwith__output__to__file_D169_lambda132) (close _V10_Dwith__input__from__file_D170_lambda134) (close _V10_Dread__char_D171_lambda136) (close _V10_Dread__line_D172_lambda137) (close _V10_Dread_D173_lambda138) (close _V10_Dnewline_D174_lambda139) (close _V10_Dprintout__list_D175_lambda140) (close _V10_Dprintout__quotation_D176_lambda142) (close _V10_Dprintout_D177_lambda143) (close _V10_Ddisplay_D178_lambda145) (close _V10_Dwrite_D179_lambda146) (##intrinsic ##vcore.call/cc) (##intrinsic ##vcore.call/cc) (##intrinsic ##vcore.call-with-values) (##intrinsic ##vcore.apply) (close _V10_Dvalues_D184_lambda147) (bruijn ##..vcore.setter.10 1 1) (bruijn ##..vcore.mutator.9 1 0) (close _V10_Dmake__parameter_D187_lambda149) (##intrinsic ##vcore.command-line) (##intrinsic ##vcore.system) (##intrinsic ##vcore.open-input-process) (##intrinsic ##vcore.open-output-process) (##intrinsic ##vcore.make-temporary-file) (##intrinsic ##vcore.exit) (close _V10_Datom_Q_D194_lambda154) (close _V10_Ddisplayln_D195_lambda155) (close _V10_Dwriteln_D196_lambda156) (close _V10_Dformat__printf_D197_lambda157) (close _V10_Dformat__sprintf_D198_lambda159) (close _V10_Dprintf_D199_lambda160) (close _V10_Dsprintf_D200_lambda161) (close _V10_Dformat_D201_lambda162) (##intrinsic ##vcore.raise) (close _V10_Draise__continuable_D203_lambda163) (close _V10_Dwith__exception__handler_D204_lambda164) (close _V10_Derror_D205_lambda166) (##intrinsic ##vcore.fiber-fork-list) (close _V10_Dfiber__fork_D207_lambda167) (close _V10_Dfiber__map_D208_lambda168) (##intrinsic ##vcore.async) (##intrinsic ##vcore.await)) (set! (close _V0vanity_V0core_V20_k417) (bruijn ##.exact->inexact.40 0 29) (bruijn ##.inexact.39 0 28)))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[200]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 200, 200, upenv);
    env->vars[0] = _V40_V10vcore_Dnull_Q;
    env->vars[1] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dboolean_Q_D12_lambda3, env)});
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
    env->vars[16] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dsymbol_E_Q_D27_lambda4, env)});
    env->vars[17] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dboolean_E_Q_D28_lambda6, env)});
    env->vars[18] = _V40_V10vcore_Deqv_Q;
    env->vars[19] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dvector_E_Q_D30_lambda8, env)});
    env->vars[20] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Drecord_E_Q_D31_lambda10, env)});
    env->vars[21] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dequal_Q_D32_lambda12, env)});
    env->vars[22] = _V40_V10vcore_Dnot;
    env->vars[23] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_D_L_D34_lambda13, env)});
    env->vars[24] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_D_E_D35_lambda15, env)});
    env->vars[25] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_D_G_D36_lambda17, env)});
    env->vars[26] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_D_L_E_D37_lambda19, env)});
    env->vars[27] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_D_G_E_D38_lambda21, env)});
    env->vars[28] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dinexact_D39_lambda23, env)});
    env->vars[29] = VEncodeBool(false);
    env->vars[30] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dnumber_Q_D41_lambda24, env)});
    env->vars[31] = VEncodeBool(false);
    env->vars[32] = VEncodeBool(false);
    env->vars[33] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpositive_Q_D44_lambda25, env)});
    env->vars[34] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dzero_Q_D45_lambda26, env)});
    env->vars[35] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dnegative_Q_D46_lambda27, env)});
    env->vars[36] = _V40_V10vcore_D_P;
    env->vars[37] = _V40_V10vcore_D__;
    env->vars[38] = _V40_V10vcore_D_S;
    env->vars[39] = _V40_V10vcore_D_W;
    env->vars[40] = _V40_V10vcore_Dquotient;
    env->vars[41] = _V40_V10vcore_Dremainder;
    env->vars[42] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dabs_D53_lambda28, env)});
    env->vars[43] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V30ceil_shim, NULL)});
    env->vars[44] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V30floor_shim, NULL)});
    env->vars[45] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V30round_shim, NULL)});
    env->vars[46] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dsquare_D57_lambda29, env)});
    env->vars[47] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V30sqrt_shim, NULL)});
    env->vars[48] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V30sin_shim, NULL)});
    env->vars[49] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V30cos_shim, NULL)});
    env->vars[50] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V30tan_shim, NULL)});
    env->vars[51] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V30asin_shim, NULL)});
    env->vars[52] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V30acos_shim, NULL)});
    env->vars[53] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V30atan_shim, NULL)});
    env->vars[54] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V30atan2_shim, NULL)});
    env->vars[55] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Datan_D66_lambda30, env)});
    env->vars[56] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V30exp_shim, NULL)});
    env->vars[57] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V30log_shim, NULL)});
    env->vars[58] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlog_D69_lambda31, env)});
    env->vars[59] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V30pow_shim, NULL)});
    env->vars[60] = VEncodeBool(false);
    env->vars[61] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmax_D72_lambda32, env)});
    env->vars[62] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmin_D73_lambda34, env)});
    env->vars[63] = _V40_V10vcore_Dcons;
    env->vars[64] = _V40_V10vcore_Dcar;
    env->vars[65] = _V40_V10vcore_Dcdr;
    env->vars[66] = _V40_V10vcore_Dset__car_B;
    env->vars[67] = _V40_V10vcore_Dset__cdr_B;
    env->vars[68] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcaar_D79_lambda36, env)});
    env->vars[69] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcadr_D80_lambda37, env)});
    env->vars[70] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcdar_D81_lambda38, env)});
    env->vars[71] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcddr_D82_lambda39, env)});
    env->vars[72] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcaaar_D83_lambda40, env)});
    env->vars[73] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcaadr_D84_lambda41, env)});
    env->vars[74] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcadar_D85_lambda42, env)});
    env->vars[75] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcaddr_D86_lambda43, env)});
    env->vars[76] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcdaar_D87_lambda44, env)});
    env->vars[77] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcdadr_D88_lambda45, env)});
    env->vars[78] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcddar_D89_lambda46, env)});
    env->vars[79] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcdddr_D90_lambda47, env)});
    env->vars[80] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcaaaar_D91_lambda48, env)});
    env->vars[81] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcaaadr_D92_lambda49, env)});
    env->vars[82] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcaadar_D93_lambda50, env)});
    env->vars[83] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcaaddr_D94_lambda51, env)});
    env->vars[84] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcadaar_D95_lambda52, env)});
    env->vars[85] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcadadr_D96_lambda53, env)});
    env->vars[86] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcaddar_D97_lambda54, env)});
    env->vars[87] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcadddr_D98_lambda55, env)});
    env->vars[88] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcdaaar_D99_lambda56, env)});
    env->vars[89] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcdaadr_D100_lambda57, env)});
    env->vars[90] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcdadar_D101_lambda58, env)});
    env->vars[91] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcdaddr_D102_lambda59, env)});
    env->vars[92] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcddaar_D103_lambda60, env)});
    env->vars[93] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcddadr_D104_lambda61, env)});
    env->vars[94] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcdddar_D105_lambda62, env)});
    env->vars[95] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcddddr_D106_lambda63, env)});
    env->vars[96] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlist_D107_lambda64, env)});
    env->vars[97] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlist_Q_D108_lambda65, env)});
    env->vars[98] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlength_D109_lambda66, env)});
    env->vars[99] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlist__tail_D110_lambda68, env)});
    env->vars[100] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlist__ref_D111_lambda69, env)});
    env->vars[101] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlist__set_B_D112_lambda70, env)});
    env->vars[102] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlist__copy_D113_lambda71, env)});
    env->vars[103] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmake__list_D114_lambda72, env)});
    env->vars[104] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmap_D115_lambda74, env)});
    env->vars[105] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dfor__each_D116_lambda79, env)});
    env->vars[106] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dfold__right_D117_lambda84, env)});
    env->vars[107] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dappend_D118_lambda86, env)});
    env->vars[108] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dreverse_D119_lambda88, env)});
    env->vars[109] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmemq_D120_lambda90, env)});
    env->vars[110] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmemv_D121_lambda91, env)});
    env->vars[111] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmember_D122_lambda92, env)});
    env->vars[112] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dassq_D123_lambda93, env)});
    env->vars[113] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dassv_D124_lambda94, env)});
    env->vars[114] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dassoc_D125_lambda95, env)});
    env->vars[115] = _V40_V10vcore_Dmake__string;
    env->vars[116] = _V40_V10vcore_Dsubstring;
    env->vars[117] = _V40_V10vcore_Dsubstring;
    env->vars[118] = _V40_V10vcore_Dstring__copy_B;
    env->vars[119] = _V40_V10vcore_Dstring__ref;
    env->vars[120] = _V40_V10vcore_Dstring__set_B;
    env->vars[121] = _V40_V10vcore_Dstring__length;
    env->vars[122] = _V40_V10vcore_Dstring___Gsymbol;
    env->vars[123] = _V40_V10vcore_Dstring___Gnumber;
    env->vars[124] = _V40_V10vcore_Dsymbol___Gstring;
    env->vars[125] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlist___Gstring_D136_lambda96, env)});
    env->vars[126] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dstring___Glist_D137_lambda98, env)});
    env->vars[127] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dstring__append_D138_lambda100, env)});
    env->vars[128] = _V40_V10vcore_Dlist___Gvector;
    env->vars[129] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dvector_D140_lambda101, env)});
    env->vars[130] = _V40_V10vcore_Dvector__ref;
    env->vars[131] = _V40_V10vcore_Dvector__set_B;
    env->vars[132] = _V40_V10vcore_Dvector__length;
    env->vars[133] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dvector___Glist_D144_lambda102, env)});
    env->vars[134] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dvector__for__each_D145_lambda104, env)});
    env->vars[135] = _V40_V10vcore_Drecord;
    env->vars[136] = _V40_V10vcore_Drecord__ref;
    env->vars[137] = _V40_V10vcore_Drecord__set_B;
    env->vars[138] = _V40_V10vcore_Drecord__length;
    env->vars[139] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmake__hash__table_D150_lambda110, env)});
    env->vars[140] = _V40_V10vcore_Dhash__table__equivalence__function;
    env->vars[141] = _V40_V10vcore_Dhash__table__hash__function;
    env->vars[142] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dhash__table__ref_D153_lambda111, env)});
    env->vars[143] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dhash__table__set_B_D154_lambda113, env)});
    env->vars[144] = _V40_V10vcore_Dhash__table__delete_B;
    env->vars[145] = _V40_V10vcore_Dchar__integer;
    env->vars[146] = VEncodeBool(false);
    env->vars[147] = VEncodeBool(false);
    env->vars[148] = VEncodeBool(false);
    env->vars[149] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dtry__or__gc_D160_lambda114, env)});
    env->vars[150] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dclose__port_D161_lambda117, env)});
    env->vars[151] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dopen__input__file__impl_D162_lambda118, env)});
    env->vars[152] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dopen__output__file__impl_D163_lambda121, env)});
    env->vars[153] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dopen__output__string__impl_D164_lambda124, env)});
    env->vars[154] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dopen__input__file_D165_lambda127, env)});
    env->vars[155] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dopen__output__file_D166_lambda129, env)});
    env->vars[156] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dopen__output__string_D167_lambda131, env)});
    env->vars[157] = _V40_V10vcore_Dget__output__string;
    env->vars[158] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dwith__output__to__file_D169_lambda132, env)});
    env->vars[159] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dwith__input__from__file_D170_lambda134, env)});
    env->vars[160] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dread__char_D171_lambda136, env)});
    env->vars[161] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dread__line_D172_lambda137, env)});
    env->vars[162] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dread_D173_lambda138, env)});
    env->vars[163] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dnewline_D174_lambda139, env)});
    env->vars[164] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprintout__list_D175_lambda140, env)});
    env->vars[165] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprintout__quotation_D176_lambda142, env)});
    env->vars[166] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprintout_D177_lambda143, env)});
    env->vars[167] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddisplay_D178_lambda145, env)});
    env->vars[168] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dwrite_D179_lambda146, env)});
    env->vars[169] = _V40_V10vcore_Dcall_Wcc;
    env->vars[170] = _V40_V10vcore_Dcall_Wcc;
    env->vars[171] = _V40_V10vcore_Dcall__with__values;
    env->vars[172] = _V40_V10vcore_Dapply;
    env->vars[173] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dvalues_D184_lambda147, env)});
    env->vars[174] = upenv->vars[1];
    env->vars[175] = upenv->vars[0];
    env->vars[176] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmake__parameter_D187_lambda149, env)});
    env->vars[177] = _V40_V10vcore_Dcommand__line;
    env->vars[178] = _V40_V10vcore_Dsystem;
    env->vars[179] = _V40_V10vcore_Dopen__input__process;
    env->vars[180] = _V40_V10vcore_Dopen__output__process;
    env->vars[181] = _V40_V10vcore_Dmake__temporary__file;
    env->vars[182] = _V40_V10vcore_Dexit;
    env->vars[183] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Datom_Q_D194_lambda154, env)});
    env->vars[184] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddisplayln_D195_lambda155, env)});
    env->vars[185] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dwriteln_D196_lambda156, env)});
    env->vars[186] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dformat__printf_D197_lambda157, env)});
    env->vars[187] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dformat__sprintf_D198_lambda159, env)});
    env->vars[188] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprintf_D199_lambda160, env)});
    env->vars[189] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dsprintf_D200_lambda161, env)});
    env->vars[190] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dformat_D201_lambda162, env)});
    env->vars[191] = _V40_V10vcore_Draise;
    env->vars[192] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Draise__continuable_D203_lambda163, env)});
    env->vars[193] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dwith__exception__handler_D204_lambda164, env)});
    env->vars[194] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Derror_D205_lambda166, env)});
    env->vars[195] = _V40_V10vcore_Dfiber__fork__list;
    env->vars[196] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dfiber__fork_D207_lambda167, env)});
    env->vars[197] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dfiber__map_D208_lambda168, env)});
    env->vars[198] = _V40_V10vcore_Dasync;
    env->vars[199] = _V40_V10vcore_Dawait;
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k417, env)}),
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
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0core_V20_k4, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k4, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0core_V20_lambda2) (bruijn ##.x.654 1 0) (bruijn ##.x.655 0 0))
    V_CALL_FUNC(_V0vanity_V0core_V20_lambda2, env, runtime,
      upenv->vars[0],
      _var0);
 }
}
static void _V0vanity_V0core_V20_k3(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k3" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0core_V20_k3, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k3, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.8 1 0) (close _V0vanity_V0core_V20_k4) '##vcore.setter)
    V_CALL(upenv->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k4, env)}),
      _V10vcore_Dsetter);
 }
}
static void _V0vanity_V0core_V20_k2(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k2" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0core_V20_k2, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k2, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.8 0 0) (close _V0vanity_V0core_V20_k3) '##vcore.mutator)
    V_CALL(_var0, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k3, env)}),
      _V10vcore_Dmutator);
 }
}
static void _V0vanity_V0core_V20_k1(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_k1" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0core_V20_k1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_k1, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.make-import (close _V0vanity_V0core_V20_k2) (##string ##.string.1797) (bruijn ##.x.1778 0 0))
    V_CALL_FUNC(VMakeImport2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k2, env)}),
      VEncodePointer(&_V10_Dstring_D1797.sym, VPOINTER_OTHER),
      _var0);
 }
}
static void _V0vanity_V0core_V20_lambda1(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0core_V20_lambda1" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0core_V20_lambda1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0core_V20_lambda1, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0core_V20_k1) (##string ##.string.1798))
    V_CALL_FUNC(VLoadLibrary2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0core_V20_k1, env)}),
      VEncodePointer(&_V10_Dstring_D1798.sym, VPOINTER_OTHER));
 }
}
VFunc _V0vanity_V0core_V20 = (VFunc)_V0vanity_V0core_V20_lambda1;
