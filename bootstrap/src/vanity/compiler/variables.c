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
static struct { VBlob sym; char bytes[21]; } _V10string_D557 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "_V0vanity_V0core_V20" };
static struct { VBlob sym; char bytes[33]; } _V10string_D556 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 33 }, "_V0vanity_V0compiler_V0utils_V20" };
static struct { VBlob sym; char bytes[37]; } _V10string_D555 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 37 }, "_V0vanity_V0compiler_V0variables_V20" };
VWEAK VWORD _V0eq_Q;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0eq_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "eq\?" };
VWEAK VWORD _V0_P;VWEAK struct { VBlob sym; char bytes[2]; } _VW_V0_P = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 2 }, "+" };
VWEAK VWORD _V0display;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0display = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "display" };
VWEAK VWORD _V0string__ref;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V0string__ref = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "string-ref" };
VWEAK VWORD _V0_E;VWEAK struct { VBlob sym; char bytes[2]; } _VW_V0_E = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 2 }, "=" };
VWEAK VWORD _V0close__port;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V0close__port = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "close-port" };
VWEAK VWORD _V0string___Gsymbol;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V0string___Gsymbol = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "string->symbol" };
VWEAK VWORD _V0get__output__string;VWEAK struct { VBlob sym; char bytes[18]; } _VW_V0get__output__string = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 18 }, "get-output-string" };
VWEAK VWORD _V0open__output__string;VWEAK struct { VBlob sym; char bytes[19]; } _VW_V0open__output__string = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 19 }, "open-output-string" };
VWEAK VWORD _V0string__length;VWEAK struct { VBlob sym; char bytes[14]; } _VW_V0string__length = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 14 }, "string-length" };
VWEAK VWORD _V0string_Q;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0string_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "string\?" };
VWEAK VWORD _V0reverse;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0reverse = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "reverse" };
VWEAK VWORD _V0symbol___Gstring;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V0symbol___Gstring = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "symbol->string" };
VWEAK VWORD _V0string__append;VWEAK struct { VBlob sym; char bytes[14]; } _VW_V0string__append = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 14 }, "string-append" };
VWEAK VWORD _V0compiler__error;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V0compiler__error = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "compiler-error" };
VWEAK VWORD _V0pair_Q;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0pair_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "pair\?" };
VWEAK VWORD _V0cdr;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0cdr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "cdr" };
VWEAK VWORD _V0car;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0car = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "car" };
VWEAK VWORD _V0eqv_Q;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0eqv_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "eqv\?" };
VWEAK VWORD _V0cons;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0cons = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "cons" };
VWEAK VWORD _V0cadr;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0cadr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "cadr" };
VWEAK VWORD _V0map;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0map = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "map" };
VWEAK VWORD _V0cddr;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0cddr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "cddr" };
VWEAK VWORD _V0caar;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0caar = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "caar" };
VWEAK VWORD _V0cdar;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0cdar = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "cdar" };
VWEAK VWORD _V0null_Q;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0null_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "null\?" };
VWEAK VWORD _V0memv;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0memv = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "memv" };
VWEAK VWORD _V0caddr;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0caddr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "caddr" };
VWEAK VWORD _V0cadddr;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0cadddr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "cadddr" };
VWEAK VWORD _V0atom_Q;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0atom_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "atom\?" };
VWEAK VWORD _V0symbol_Q;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0symbol_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "symbol\?" };
VWEAK VWORD _V0list;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0list = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "list" };
VWEAK VWORD _V0free__variables;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V0free__variables = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "free-variables" };
VWEAK VWORD _V0lookup__intrinsic2;VWEAK struct { VBlob sym; char bytes[18]; } _VW_V0lookup__intrinsic2 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 18 }, "lookup-intrinsic2" };
VWEAK VWORD _V0lookup__inline;VWEAK struct { VBlob sym; char bytes[14]; } _VW_V0lookup__inline = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 14 }, "lookup-inline" };
VWEAK VWORD _V0mangle__library;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V0mangle__library = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "mangle-library" };
VWEAK VWORD _V0mangle__symbol;VWEAK struct { VBlob sym; char bytes[14]; } _VW_V0mangle__symbol = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 14 }, "mangle-symbol" };
VWEAK VWORD _V0quote;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0quote = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "quote" };
VWEAK VWORD _V0if;VWEAK struct { VBlob sym; char bytes[3]; } _VW_V0if = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 3 }, "if" };
VWEAK VWORD _V0or;VWEAK struct { VBlob sym; char bytes[3]; } _VW_V0or = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 3 }, "or" };
VWEAK VWORD _V0and;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0and = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "and" };
VWEAK VWORD _V0lambda;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0lambda = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "lambda" };
VWEAK VWORD _V0case__lambda;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0case__lambda = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "case-lambda" };
VWEAK VWORD _V0letrec;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0letrec = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "letrec" };
VWEAK VWORD _V0set_B;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0set_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "set!" };
VWEAK VWORD _V0begin;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0begin = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "begin" };
VWEAK VWORD _V10sys_Deqv_Q;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V10sys_Deqv_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "##sys.eqv\?" };
VWEAK VWORD _V10vcore_Dmake__hash__table;VWEAK struct { VBlob sym; char bytes[24]; } _VW_V10vcore_Dmake__hash__table = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 24 }, "##vcore.make-hash-table" };
VWEAK VWORD _V10vcore_Dhash__table__equivalence__function;VWEAK struct { VBlob sym; char bytes[40]; } _VW_V10vcore_Dhash__table__equivalence__function = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 40 }, "##vcore.hash-table-equivalence-function" };
VWEAK VWORD _V10vcore_Dhash__table__hash__function;VWEAK struct { VBlob sym; char bytes[33]; } _VW_V10vcore_Dhash__table__hash__function = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 33 }, "##vcore.hash-table-hash-function" };
VWEAK VWORD _V10vcore_Dhash__table__ref;VWEAK struct { VBlob sym; char bytes[23]; } _VW_V10vcore_Dhash__table__ref = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 23 }, "##vcore.hash-table-ref" };
VWEAK VWORD _V10vcore_Dhash__table__set_B;VWEAK struct { VBlob sym; char bytes[24]; } _VW_V10vcore_Dhash__table__set_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 24 }, "##vcore.hash-table-set!" };
VWEAK VWORD _V10vcore_Dhash__table__delete_B;VWEAK struct { VBlob sym; char bytes[27]; } _VW_V10vcore_Dhash__table__delete_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 27 }, "##vcore.hash-table-delete!" };
VWEAK VWORD _V10sys_Dset__finalizer_B;VWEAK struct { VBlob sym; char bytes[21]; } _VW_V10sys_Dset__finalizer_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 21 }, "##sys.set-finalizer!" };
VWEAK VWORD _V10sys_Dhas__finalizer_Q;VWEAK struct { VBlob sym; char bytes[21]; } _VW_V10sys_Dhas__finalizer_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 21 }, "##sys.has-finalizer\?" };
VWEAK VWORD _V10sys_Dfinalize_B;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V10sys_Dfinalize_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "##sys.finalize!" };
VWEAK VWORD _V10sys_Dgarbage__collect;VWEAK struct { VBlob sym; char bytes[22]; } _VW_V10sys_Dgarbage__collect = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 22 }, "##sys.garbage-collect" };
VWEAK VWORD _V10vcore_Dmake__random;VWEAK struct { VBlob sym; char bytes[20]; } _VW_V10vcore_Dmake__random = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 20 }, "##vcore.make-random" };
VWEAK VWORD _V10vcore_Drandom__copy;VWEAK struct { VBlob sym; char bytes[20]; } _VW_V10vcore_Drandom__copy = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 20 }, "##vcore.random-copy" };
VWEAK VWORD _V10vcore_Drandom__sample_B;VWEAK struct { VBlob sym; char bytes[23]; } _VW_V10vcore_Drandom__sample_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 23 }, "##vcore.random-sample!" };
VWEAK VWORD _V10vcore_Drandom__sample__bounded_B;VWEAK struct { VBlob sym; char bytes[31]; } _VW_V10vcore_Drandom__sample__bounded_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 31 }, "##vcore.random-sample-bounded!" };
VWEAK VWORD _V10vcore_Drandom__sample__float_B;VWEAK struct { VBlob sym; char bytes[29]; } _VW_V10vcore_Drandom__sample__float_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 29 }, "##vcore.random-sample-float!" };
VWEAK VWORD _V10vcore_Drandom__advance_B;VWEAK struct { VBlob sym; char bytes[24]; } _VW_V10vcore_Drandom__advance_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 24 }, "##vcore.random-advance!" };
VWEAK VWORD _V10vcore_Dfiber__fork__list;VWEAK struct { VBlob sym; char bytes[24]; } _VW_V10vcore_Dfiber__fork__list = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 24 }, "##vcore.fiber-fork-list" };
VWEAK VWORD _V10vcore_Dasync;VWEAK struct { VBlob sym; char bytes[14]; } _VW_V10vcore_Dasync = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 14 }, "##vcore.async" };
VWEAK VWORD _V10vcore_Dawait;VWEAK struct { VBlob sym; char bytes[14]; } _VW_V10vcore_Dawait = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 14 }, "##vcore.await" };
static struct { VBlob sym; char bytes[7]; } _V10string_D554 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 7 }, "VAwait" };
static struct { VBlob sym; char bytes[7]; } _V10string_D553 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 7 }, "VAsync" };
static struct { VBlob sym; char bytes[15]; } _V10string_D552 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 15 }, "VFiberForkList" };
static struct { VBlob sym; char bytes[15]; } _V10string_D551 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 15 }, "VRandomAdvance" };
static struct { VBlob sym; char bytes[19]; } _V10string_D550 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 19 }, "VRandomSampleFloat" };
static struct { VBlob sym; char bytes[21]; } _V10string_D549 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "VRandomSampleBounded" };
static struct { VBlob sym; char bytes[14]; } _V10string_D548 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 14 }, "VRandomSample" };
static struct { VBlob sym; char bytes[12]; } _V10string_D547 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 12 }, "VRandomCopy" };
static struct { VBlob sym; char bytes[12]; } _V10string_D546 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 12 }, "VMakeRandom" };
static struct { VBlob sym; char bytes[14]; } _V10string_D545 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 14 }, "VCommandLine2" };
static struct { VBlob sym; char bytes[20]; } _V10string_D544 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 20 }, "VMakeTemporaryFile2" };
static struct { VBlob sym; char bytes[20]; } _V10string_D543 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 20 }, "VOpenOutputProcess2" };
static struct { VBlob sym; char bytes[19]; } _V10string_D542 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 19 }, "VOpenInputProcess2" };
static struct { VBlob sym; char bytes[9]; } _V10string_D541 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 9 }, "VSystem2" };
static struct { VBlob sym; char bytes[16]; } _V10string_D540 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 16 }, "VGarbageCollect" };
static struct { VBlob sym; char bytes[10]; } _V10string_D539 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 10 }, "VFinalize" };
static struct { VBlob sym; char bytes[14]; } _V10string_D538 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 14 }, "VHasFinalizer" };
static struct { VBlob sym; char bytes[14]; } _V10string_D537 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 14 }, "VSetFinalizer" };
static struct { VBlob sym; char bytes[10]; } _V10string_D536 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 10 }, "VNewline2" };
static struct { VBlob sym; char bytes[8]; } _V10string_D535 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 8 }, "VWrite2" };
static struct { VBlob sym; char bytes[10]; } _V10string_D534 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 10 }, "VDisplay2" };
static struct { VBlob sym; char bytes[7]; } _V10string_D533 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 7 }, "VRead2" };
static struct { VBlob sym; char bytes[11]; } _V10string_D532 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 11 }, "VReadLine2" };
static struct { VBlob sym; char bytes[11]; } _V10string_D531 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 11 }, "VReadChar2" };
static struct { VBlob sym; char bytes[7]; } _V10string_D530 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 7 }, "VEofP2" };
static struct { VBlob sym; char bytes[18]; } _V10string_D529 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 18 }, "VGetOutputString2" };
static struct { VBlob sym; char bytes[19]; } _V10string_D528 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 19 }, "VOpenOutputString2" };
static struct { VBlob sym; char bytes[14]; } _V10string_D527 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 14 }, "VCloseStream2" };
static struct { VBlob sym; char bytes[19]; } _V10string_D526 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 19 }, "VOpenOutputStream2" };
static struct { VBlob sym; char bytes[18]; } _V10string_D525 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 18 }, "VOpenInputStream2" };
static struct { VBlob sym; char bytes[12]; } _V10string_D524 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 12 }, "VDupStderr2" };
static struct { VBlob sym; char bytes[12]; } _V10string_D523 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 12 }, "VDupStdout2" };
static struct { VBlob sym; char bytes[11]; } _V10string_D522 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 11 }, "VDupStdin2" };
static struct { VBlob sym; char bytes[10]; } _V10string_D521 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 10 }, "VCharInt2" };
static struct { VBlob sym; char bytes[15]; } _V10string_D520 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 15 }, "VSymbolString2" };
static struct { VBlob sym; char bytes[15]; } _V10string_D519 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 15 }, "VStringNumber2" };
static struct { VBlob sym; char bytes[15]; } _V10string_D518 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 15 }, "VStringSymbol2" };
static struct { VBlob sym; char bytes[15]; } _V10string_D517 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 15 }, "VStringLength2" };
static struct { VBlob sym; char bytes[12]; } _V10string_D516 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 12 }, "VStringSet2" };
static struct { VBlob sym; char bytes[12]; } _V10string_D515 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 12 }, "VStringRef2" };
static struct { VBlob sym; char bytes[13]; } _V10string_D514 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 13 }, "VStringCopy2" };
static struct { VBlob sym; char bytes[12]; } _V10string_D513 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 12 }, "VSubstring2" };
static struct { VBlob sym; char bytes[13]; } _V10string_D512 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 13 }, "VMakeString2" };
static struct { VBlob sym; char bytes[17]; } _V10string_D511 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 17 }, "VHashTableDelete" };
static struct { VBlob sym; char bytes[14]; } _V10string_D510 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 14 }, "VHashTableSet" };
static struct { VBlob sym; char bytes[14]; } _V10string_D509 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 14 }, "VHashTableRef" };
static struct { VBlob sym; char bytes[19]; } _V10string_D508 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 19 }, "VHashTableHashFunc" };
static struct { VBlob sym; char bytes[18]; } _V10string_D507 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 18 }, "VHashTableEqvFunc" };
static struct { VBlob sym; char bytes[15]; } _V10string_D506 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 15 }, "VMakeHashTable" };
static struct { VBlob sym; char bytes[15]; } _V10string_D505 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 15 }, "VVectorLength2" };
static struct { VBlob sym; char bytes[12]; } _V10string_D504 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 12 }, "VVectorSet2" };
static struct { VBlob sym; char bytes[12]; } _V10string_D503 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 12 }, "VVectorRef2" };
static struct { VBlob sym; char bytes[13]; } _V10string_D502 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 13 }, "VListVector2" };
static struct { VBlob sym; char bytes[9]; } _V10string_D501 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 9 }, "VSetCdr2" };
static struct { VBlob sym; char bytes[9]; } _V10string_D500 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 9 }, "VSetCar2" };
static struct { VBlob sym; char bytes[6]; } _V10string_D499 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 6 }, "VCdr2" };
static struct { VBlob sym; char bytes[6]; } _V10string_D498 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 6 }, "VCar2" };
static struct { VBlob sym; char bytes[7]; } _V10string_D497 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 7 }, "VCons2" };
static struct { VBlob sym; char bytes[14]; } _V10string_D496 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 14 }, "VLoadLibrary2" };
static struct { VBlob sym; char bytes[13]; } _V10string_D495 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 13 }, "VMakeImport2" };
static struct { VBlob sym; char bytes[16]; } _V10string_D494 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 16 }, "VLookupLibrary2" };
static struct { VBlob sym; char bytes[14]; } _V10string_D493 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 14 }, "VMultiDefine2" };
static struct { VBlob sym; char bytes[18]; } _V10string_D492 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 18 }, "VDefineGlobalVar2" };
static struct { VBlob sym; char bytes[11]; } _V10string_D491 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 11 }, "VFunction2" };
static struct { VBlob sym; char bytes[9]; } _V10string_D490 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 9 }, "VImport2" };
static struct { VBlob sym; char bytes[7]; } _V10string_D489 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 7 }, "VExit2" };
static struct { VBlob sym; char bytes[8]; } _V10string_D488 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 8 }, "VAbort2" };
static struct { VBlob sym; char bytes[8]; } _V10string_D487 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 8 }, "VApply2" };
static struct { VBlob sym; char bytes[13]; } _V10string_D486 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 13 }, "VCallValues2" };
static struct { VBlob sym; char bytes[9]; } _V10string_D485 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 9 }, "VCallCC2" };
static struct { VBlob sym; char bytes[7]; } _V10string_D484 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 7 }, "VNext2" };
static struct { VBlob sym; char bytes[6]; } _V10string_D483 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 6 }, "VNot2" };
static struct { VBlob sym; char bytes[5]; } _V10string_D482 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 5 }, "VEqv" };
static struct { VBlob sym; char bytes[10]; } _V10string_D481 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 10 }, "VBlobEqv2" };
static struct { VBlob sym; char bytes[12]; } _V10string_D480 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 12 }, "VSymbolEqv2" };
static struct { VBlob sym; char bytes[5]; } _V10string_D479 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 5 }, "VEq2" };
static struct { VBlob sym; char bytes[8]; } _V10string_D478 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 8 }, "VCharP2" };
static struct { VBlob sym; char bytes[10]; } _V10string_D477 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 10 }, "VDoubleP2" };
static struct { VBlob sym; char bytes[7]; } _V10string_D476 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 7 }, "VIntP2" };
static struct { VBlob sym; char bytes[10]; } _V10string_D475 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 10 }, "VStringP2" };
static struct { VBlob sym; char bytes[10]; } _V10string_D474 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 10 }, "VSymbolP2" };
static struct { VBlob sym; char bytes[8]; } _V10string_D473 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 8 }, "VBlobP2" };
static struct { VBlob sym; char bytes[13]; } _V10string_D472 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 13 }, "VProcedureP2" };
static struct { VBlob sym; char bytes[10]; } _V10string_D471 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 10 }, "VVectorP2" };
static struct { VBlob sym; char bytes[8]; } _V10string_D470 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 8 }, "VPairP2" };
static struct { VBlob sym; char bytes[8]; } _V10string_D469 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 8 }, "VNullP2" };
static struct { VBlob sym; char bytes[6]; } _V10string_D468 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 6 }, "VRem2" };
static struct { VBlob sym; char bytes[7]; } _V10string_D467 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 7 }, "VQuot2" };
static struct { VBlob sym; char bytes[6]; } _V10string_D466 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 6 }, "VCmp2" };
static struct { VBlob sym; char bytes[6]; } _V10string_D465 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 6 }, "VDiv2" };
static struct { VBlob sym; char bytes[6]; } _V10string_D464 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 6 }, "VMul2" };
static struct { VBlob sym; char bytes[6]; } _V10string_D463 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 6 }, "VSub2" };
static struct { VBlob sym; char bytes[6]; } _V10string_D462 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 6 }, "VAdd2" };
VWEAK VWORD _V10sys_D_P;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V10sys_D_P = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "##sys.+" };
VWEAK VWORD _V10sys_D__;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V10sys_D__ = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "##sys.-" };
VWEAK VWORD _V10sys_D_S;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V10sys_D_S = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "##sys.*" };
VWEAK VWORD _V10sys_D_W;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V10sys_D_W = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "##sys./" };
VWEAK VWORD _V10sys_Dcmp;VWEAK struct { VBlob sym; char bytes[10]; } _VW_V10sys_Dcmp = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 10 }, "##sys.cmp" };
VWEAK VWORD _V10sys_Dquotient;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V10sys_Dquotient = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "##sys.quotient" };
VWEAK VWORD _V10sys_Dremainder;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V10sys_Dremainder = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "##sys.remainder" };
VWEAK VWORD _V10sys_Dvector_Q;VWEAK struct { VBlob sym; char bytes[14]; } _VW_V10sys_Dvector_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 14 }, "##sys.vector\?" };
VWEAK VWORD _V10sys_Dprocedure_Q;VWEAK struct { VBlob sym; char bytes[17]; } _VW_V10sys_Dprocedure_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 17 }, "##sys.procedure\?" };
VWEAK VWORD _V10sys_Dblob_Q;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V10sys_Dblob_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "##sys.blob\?" };
VWEAK VWORD _V10sys_Dsymbol_Q;VWEAK struct { VBlob sym; char bytes[14]; } _VW_V10sys_Dsymbol_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 14 }, "##sys.symbol\?" };
VWEAK VWORD _V10sys_Dstring_Q;VWEAK struct { VBlob sym; char bytes[14]; } _VW_V10sys_Dstring_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 14 }, "##sys.string\?" };
VWEAK VWORD _V10sys_Dint_Q;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V10sys_Dint_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "##sys.int\?" };
VWEAK VWORD _V10sys_Ddouble_Q;VWEAK struct { VBlob sym; char bytes[14]; } _VW_V10sys_Ddouble_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 14 }, "##sys.double\?" };
VWEAK VWORD _V10sys_Dchar_Q;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V10sys_Dchar_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "##sys.char\?" };
VWEAK VWORD _V10sys_Dsymbol_E_Q;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V10sys_Dsymbol_E_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "##sys.symbol=\?" };
VWEAK VWORD _V10sys_Dblob_E_Q;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V10sys_Dblob_E_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "##sys.blob=\?" };
VWEAK VWORD _V10sys_Dnext;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V10sys_Dnext = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "##sys.next" };
VWEAK VWORD _V10sys_Dcall_Wcc;VWEAK struct { VBlob sym; char bytes[14]; } _VW_V10sys_Dcall_Wcc = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 14 }, "##sys.call/cc" };
VWEAK VWORD _V10sys_Dcall__with__values;VWEAK struct { VBlob sym; char bytes[23]; } _VW_V10sys_Dcall__with__values = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 23 }, "##sys.call-with-values" };
VWEAK VWORD _V10sys_Dapply;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V10sys_Dapply = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "##sys.apply" };
VWEAK VWORD _V10sys_Dabort;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V10sys_Dabort = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "##sys.abort" };
VWEAK VWORD _V10sys_Dexit;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V10sys_Dexit = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "##sys.exit" };
VWEAK VWORD _V10sys_Dimport;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V10sys_Dimport = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "##sys.import" };
VWEAK VWORD _V10vcore_Dfunction;VWEAK struct { VBlob sym; char bytes[17]; } _VW_V10vcore_Dfunction = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 17 }, "##vcore.function" };
VWEAK VWORD _V10vcore_Ddefine;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V10vcore_Ddefine = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "##vcore.define" };
VWEAK VWORD _V10vcore_Dmultidefine;VWEAK struct { VBlob sym; char bytes[20]; } _VW_V10vcore_Dmultidefine = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 20 }, "##vcore.multidefine" };
VWEAK VWORD _V10vcore_Dlookup__library;VWEAK struct { VBlob sym; char bytes[23]; } _VW_V10vcore_Dlookup__library = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 23 }, "##vcore.lookup-library" };
VWEAK VWORD _V10vcore_Dmake__import;VWEAK struct { VBlob sym; char bytes[20]; } _VW_V10vcore_Dmake__import = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 20 }, "##vcore.make-import" };
VWEAK VWORD _V10vcore_Dload__library;VWEAK struct { VBlob sym; char bytes[21]; } _VW_V10vcore_Dload__library = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 21 }, "##vcore.load-library" };
VWEAK VWORD _V10sys_Dset__car_B;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V10sys_Dset__car_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "##sys.set-car!" };
VWEAK VWORD _V10sys_Dset__cdr_B;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V10sys_Dset__cdr_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "##sys.set-cdr!" };
VWEAK VWORD _V10sys_Dlist___Gvector;VWEAK struct { VBlob sym; char bytes[19]; } _VW_V10sys_Dlist___Gvector = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 19 }, "##sys.list->vector" };
VWEAK VWORD _V10sys_Dvector__ref;VWEAK struct { VBlob sym; char bytes[17]; } _VW_V10sys_Dvector__ref = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 17 }, "##sys.vector-ref" };
VWEAK VWORD _V10sys_Dvector__set_B;VWEAK struct { VBlob sym; char bytes[18]; } _VW_V10sys_Dvector__set_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 18 }, "##sys.vector-set!" };
VWEAK VWORD _V10sys_Dvector__length;VWEAK struct { VBlob sym; char bytes[20]; } _VW_V10sys_Dvector__length = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 20 }, "##sys.vector-length" };
VWEAK VWORD _V10sys_Dmake__string;VWEAK struct { VBlob sym; char bytes[18]; } _VW_V10sys_Dmake__string = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 18 }, "##sys.make-string" };
VWEAK VWORD _V10sys_Dsubstring;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V10sys_Dsubstring = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "##sys.substring" };
VWEAK VWORD _V10sys_Dstring__copy_B;VWEAK struct { VBlob sym; char bytes[19]; } _VW_V10sys_Dstring__copy_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 19 }, "##sys.string-copy!" };
VWEAK VWORD _V10sys_Dstring__ref;VWEAK struct { VBlob sym; char bytes[17]; } _VW_V10sys_Dstring__ref = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 17 }, "##sys.string-ref" };
VWEAK VWORD _V10sys_Dstring__set_B;VWEAK struct { VBlob sym; char bytes[18]; } _VW_V10sys_Dstring__set_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 18 }, "##sys.string-set!" };
VWEAK VWORD _V10sys_Dstring__length;VWEAK struct { VBlob sym; char bytes[20]; } _VW_V10sys_Dstring__length = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 20 }, "##sys.string-length" };
VWEAK VWORD _V10sys_Dstring___Gsymbol;VWEAK struct { VBlob sym; char bytes[21]; } _VW_V10sys_Dstring___Gsymbol = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 21 }, "##sys.string->symbol" };
VWEAK VWORD _V10sys_Dstring___Gnumber;VWEAK struct { VBlob sym; char bytes[21]; } _VW_V10sys_Dstring___Gnumber = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 21 }, "##sys.string->number" };
VWEAK VWORD _V10sys_Dsymbol___Gstring;VWEAK struct { VBlob sym; char bytes[21]; } _VW_V10sys_Dsymbol___Gstring = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 21 }, "##sys.symbol->string" };
VWEAK VWORD _V10sys_Dchar__integer;VWEAK struct { VBlob sym; char bytes[19]; } _VW_V10sys_Dchar__integer = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 19 }, "##sys.char-integer" };
VWEAK VWORD _V10sys_Dstdin___Gport;VWEAK struct { VBlob sym; char bytes[18]; } _VW_V10sys_Dstdin___Gport = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 18 }, "##sys.stdin->port" };
VWEAK VWORD _V10sys_Dstdout___Gport;VWEAK struct { VBlob sym; char bytes[19]; } _VW_V10sys_Dstdout___Gport = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 19 }, "##sys.stdout->port" };
VWEAK VWORD _V10sys_Dstderr___Gport;VWEAK struct { VBlob sym; char bytes[19]; } _VW_V10sys_Dstderr___Gport = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 19 }, "##sys.stderr->port" };
VWEAK VWORD _V10sys_Ddup__stdin;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V10sys_Ddup__stdin = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "##sys.dup-stdin" };
VWEAK VWORD _V10sys_Ddup__stdout;VWEAK struct { VBlob sym; char bytes[17]; } _VW_V10sys_Ddup__stdout = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 17 }, "##sys.dup-stdout" };
VWEAK VWORD _V10sys_Ddup__stderr;VWEAK struct { VBlob sym; char bytes[17]; } _VW_V10sys_Ddup__stderr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 17 }, "##sys.dup-stderr" };
VWEAK VWORD _V10sys_Dopen__input__stream;VWEAK struct { VBlob sym; char bytes[24]; } _VW_V10sys_Dopen__input__stream = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 24 }, "##sys.open-input-stream" };
VWEAK VWORD _V10sys_Dopen__output__stream;VWEAK struct { VBlob sym; char bytes[25]; } _VW_V10sys_Dopen__output__stream = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 25 }, "##sys.open-output-stream" };
VWEAK VWORD _V10sys_Dclose__stream;VWEAK struct { VBlob sym; char bytes[19]; } _VW_V10sys_Dclose__stream = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 19 }, "##sys.close-stream" };
VWEAK VWORD _V10sys_Dopen__output__string;VWEAK struct { VBlob sym; char bytes[25]; } _VW_V10sys_Dopen__output__string = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 25 }, "##sys.open-output-string" };
VWEAK VWORD _V10sys_Dget__output__string;VWEAK struct { VBlob sym; char bytes[24]; } _VW_V10sys_Dget__output__string = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 24 }, "##sys.get-output-string" };
VWEAK VWORD _V10sys_Deof__object_Q;VWEAK struct { VBlob sym; char bytes[18]; } _VW_V10sys_Deof__object_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 18 }, "##sys.eof-object\?" };
VWEAK VWORD _V10sys_Dread__char;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V10sys_Dread__char = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "##sys.read-char" };
VWEAK VWORD _V10sys_Dread__line;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V10sys_Dread__line = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "##sys.read-line" };
VWEAK VWORD _V10sys_Dread;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V10sys_Dread = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "##sys.read" };
VWEAK VWORD _V10sys_Ddisplay__word;VWEAK struct { VBlob sym; char bytes[19]; } _VW_V10sys_Ddisplay__word = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 19 }, "##sys.display-word" };
VWEAK VWORD _V10sys_Dwrite;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V10sys_Dwrite = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "##sys.write" };
VWEAK VWORD _V10sys_Dnewline;VWEAK struct { VBlob sym; char bytes[14]; } _VW_V10sys_Dnewline = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 14 }, "##sys.newline" };
VWEAK VWORD _V10sys_Dsystem;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V10sys_Dsystem = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "##sys.system" };
VWEAK VWORD _V10sys_Dopen__input__process;VWEAK struct { VBlob sym; char bytes[25]; } _VW_V10sys_Dopen__input__process = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 25 }, "##sys.open-input-process" };
VWEAK VWORD _V10sys_Dopen__output__process;VWEAK struct { VBlob sym; char bytes[26]; } _VW_V10sys_Dopen__output__process = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 26 }, "##sys.open-output-process" };
VWEAK VWORD _V10sys_Dmake__temporary__file;VWEAK struct { VBlob sym; char bytes[26]; } _VW_V10sys_Dmake__temporary__file = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 26 }, "##sys.make-temporary-file" };
VWEAK VWORD _V10sys_Dcommand__line;VWEAK struct { VBlob sym; char bytes[19]; } _VW_V10sys_Dcommand__line = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 19 }, "##sys.command-line" };
static struct { VBlob sym; char bytes[13]; } _V10string_D461 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 13 }, "VCommandLine" };
static struct { VBlob sym; char bytes[19]; } _V10string_D460 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 19 }, "VMakeTemporaryFile" };
static struct { VBlob sym; char bytes[19]; } _V10string_D459 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 19 }, "VOpenOutputProcess" };
static struct { VBlob sym; char bytes[18]; } _V10string_D458 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 18 }, "VOpenInputProcess" };
static struct { VBlob sym; char bytes[8]; } _V10string_D457 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 8 }, "VSystem" };
static struct { VBlob sym; char bytes[9]; } _V10string_D456 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 9 }, "VNewline" };
static struct { VBlob sym; char bytes[7]; } _V10string_D455 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 7 }, "VWrite" };
static struct { VBlob sym; char bytes[9]; } _V10string_D454 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 9 }, "VDisplay" };
static struct { VBlob sym; char bytes[6]; } _V10string_D453 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 6 }, "VRead" };
static struct { VBlob sym; char bytes[10]; } _V10string_D452 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 10 }, "VReadLine" };
static struct { VBlob sym; char bytes[10]; } _V10string_D451 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 10 }, "VReadChar" };
static struct { VBlob sym; char bytes[6]; } _V10string_D450 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 6 }, "VEofP" };
static struct { VBlob sym; char bytes[17]; } _V10string_D449 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 17 }, "VGetOutputString" };
static struct { VBlob sym; char bytes[18]; } _V10string_D448 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 18 }, "VOpenOutputString" };
static struct { VBlob sym; char bytes[13]; } _V10string_D447 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 13 }, "VCloseStream" };
static struct { VBlob sym; char bytes[18]; } _V10string_D446 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 18 }, "VOpenOutputStream" };
static struct { VBlob sym; char bytes[17]; } _V10string_D445 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 17 }, "VOpenInputStream" };
static struct { VBlob sym; char bytes[11]; } _V10string_D444 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 11 }, "VDupStderr" };
static struct { VBlob sym; char bytes[11]; } _V10string_D443 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 11 }, "VDupStdout" };
static struct { VBlob sym; char bytes[10]; } _V10string_D442 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 10 }, "VDupStdin" };
static struct { VBlob sym; char bytes[12]; } _V10string_D441 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 12 }, "VStderrPort" };
static struct { VBlob sym; char bytes[12]; } _V10string_D440 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 12 }, "VStdoutPort" };
static struct { VBlob sym; char bytes[11]; } _V10string_D439 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 11 }, "VStdinPort" };
static struct { VBlob sym; char bytes[9]; } _V10string_D438 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 9 }, "VCharInt" };
static struct { VBlob sym; char bytes[14]; } _V10string_D437 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 14 }, "VSymbolString" };
static struct { VBlob sym; char bytes[14]; } _V10string_D436 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 14 }, "VStringNumber" };
static struct { VBlob sym; char bytes[14]; } _V10string_D435 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 14 }, "VStringSymbol" };
static struct { VBlob sym; char bytes[14]; } _V10string_D434 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 14 }, "VStringLength" };
static struct { VBlob sym; char bytes[11]; } _V10string_D433 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 11 }, "VStringSet" };
static struct { VBlob sym; char bytes[11]; } _V10string_D432 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 11 }, "VStringRef" };
static struct { VBlob sym; char bytes[12]; } _V10string_D431 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 12 }, "VStringCopy" };
static struct { VBlob sym; char bytes[11]; } _V10string_D430 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 11 }, "VSubstring" };
static struct { VBlob sym; char bytes[12]; } _V10string_D429 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 12 }, "VMakeString" };
static struct { VBlob sym; char bytes[14]; } _V10string_D428 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 14 }, "VVectorLength" };
static struct { VBlob sym; char bytes[11]; } _V10string_D427 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 11 }, "VVectorSet" };
static struct { VBlob sym; char bytes[11]; } _V10string_D426 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 11 }, "VVectorRef" };
static struct { VBlob sym; char bytes[12]; } _V10string_D425 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 12 }, "VListVector" };
static struct { VBlob sym; char bytes[8]; } _V10string_D424 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 8 }, "VSetCdr" };
static struct { VBlob sym; char bytes[8]; } _V10string_D423 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 8 }, "VSetCar" };
static struct { VBlob sym; char bytes[5]; } _V10string_D422 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 5 }, "VCdr" };
static struct { VBlob sym; char bytes[5]; } _V10string_D421 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 5 }, "VCar" };
static struct { VBlob sym; char bytes[6]; } _V10string_D420 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 6 }, "VCons" };
static struct { VBlob sym; char bytes[13]; } _V10string_D419 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 13 }, "VLoadLibrary" };
static struct { VBlob sym; char bytes[12]; } _V10string_D418 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 12 }, "VMakeImport" };
static struct { VBlob sym; char bytes[15]; } _V10string_D417 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 15 }, "VLookupLibrary" };
static struct { VBlob sym; char bytes[13]; } _V10string_D416 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 13 }, "VMultiDefine" };
static struct { VBlob sym; char bytes[17]; } _V10string_D415 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 17 }, "VDefineGlobalVar" };
static struct { VBlob sym; char bytes[10]; } _V10string_D414 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 10 }, "VFunction" };
static struct { VBlob sym; char bytes[8]; } _V10string_D413 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 8 }, "VImport" };
static struct { VBlob sym; char bytes[6]; } _V10string_D412 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 6 }, "VExit" };
static struct { VBlob sym; char bytes[7]; } _V10string_D411 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 7 }, "VAbort" };
static struct { VBlob sym; char bytes[7]; } _V10string_D410 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 7 }, "VApply" };
static struct { VBlob sym; char bytes[12]; } _V10string_D409 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 12 }, "VCallValues" };
static struct { VBlob sym; char bytes[8]; } _V10string_D408 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 8 }, "VCallCC" };
static struct { VBlob sym; char bytes[6]; } _V10string_D407 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 6 }, "VNext" };
static struct { VBlob sym; char bytes[5]; } _V10string_D406 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 5 }, "VNot" };
static struct { VBlob sym; char bytes[9]; } _V10string_D405 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 9 }, "VBlobEqv" };
static struct { VBlob sym; char bytes[11]; } _V10string_D404 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 11 }, "VSymbolEqv" };
static struct { VBlob sym; char bytes[4]; } _V10string_D403 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 4 }, "VEq" };
static struct { VBlob sym; char bytes[7]; } _V10string_D402 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 7 }, "VCharP" };
static struct { VBlob sym; char bytes[9]; } _V10string_D401 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 9 }, "VDoubleP" };
static struct { VBlob sym; char bytes[6]; } _V10string_D400 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 6 }, "VIntP" };
static struct { VBlob sym; char bytes[9]; } _V10string_D399 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 9 }, "VStringP" };
static struct { VBlob sym; char bytes[9]; } _V10string_D398 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 9 }, "VSymbolP" };
static struct { VBlob sym; char bytes[7]; } _V10string_D397 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 7 }, "VBlobP" };
static struct { VBlob sym; char bytes[12]; } _V10string_D396 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 12 }, "VProcedureP" };
static struct { VBlob sym; char bytes[9]; } _V10string_D395 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 9 }, "VVectorP" };
static struct { VBlob sym; char bytes[7]; } _V10string_D394 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 7 }, "VPairP" };
static struct { VBlob sym; char bytes[7]; } _V10string_D393 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 7 }, "VNullP" };
static struct { VBlob sym; char bytes[5]; } _V10string_D392 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 5 }, "VRem" };
static struct { VBlob sym; char bytes[6]; } _V10string_D391 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 6 }, "VQuot" };
static struct { VBlob sym; char bytes[5]; } _V10string_D390 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 5 }, "VCmp" };
static struct { VBlob sym; char bytes[5]; } _V10string_D389 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 5 }, "VDiv" };
static struct { VBlob sym; char bytes[5]; } _V10string_D388 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 5 }, "VMul" };
static struct { VBlob sym; char bytes[5]; } _V10string_D387 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 5 }, "VSub" };
static struct { VBlob sym; char bytes[5]; } _V10string_D386 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 5 }, "VAdd" };
VWEAK VWORD _V10sys_Dnull_Q;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V10sys_Dnull_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "##sys.null\?" };
VWEAK VWORD _V10sys_Dpair_Q;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V10sys_Dpair_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "##sys.pair\?" };
VWEAK VWORD _V10sys_Dnot;VWEAK struct { VBlob sym; char bytes[10]; } _VW_V10sys_Dnot = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 10 }, "##sys.not" };
VWEAK VWORD _V10sys_Deq_Q;VWEAK struct { VBlob sym; char bytes[10]; } _VW_V10sys_Deq_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 10 }, "##sys.eq\?" };
VWEAK VWORD _V10sys_Dcons;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V10sys_Dcons = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "##sys.cons" };
VWEAK VWORD _V10sys_Dcar;VWEAK struct { VBlob sym; char bytes[10]; } _VW_V10sys_Dcar = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 10 }, "##sys.car" };
VWEAK VWORD _V10sys_Dcdr;VWEAK struct { VBlob sym; char bytes[10]; } _VW_V10sys_Dcdr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 10 }, "##sys.cdr" };
static struct { VBlob sym; char bytes[11]; } _V10string_D385 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 11 }, "VInlineCdr" };
static struct { VBlob sym; char bytes[11]; } _V10string_D384 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 11 }, "VInlineCar" };
static struct { VBlob sym; char bytes[12]; } _V10string_D383 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 12 }, "VInlineCons" };
VWEAK VWORD _V10sys_Dqcons;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V10sys_Dqcons = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "##sys.qcons" };
static struct { VBlob sym; char bytes[10]; } _V10string_D382 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 10 }, "VInlineEq" };
static struct { VBlob sym; char bytes[11]; } _V10string_D381 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 11 }, "VInlineNot" };
static struct { VBlob sym; char bytes[13]; } _V10string_D380 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 13 }, "VInlinePairP" };
static struct { VBlob sym; char bytes[13]; } _V10string_D379 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 13 }, "VInlineNullP" };
static struct { VBlob sym; char bytes[81]; } _V10string_D378 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 81 }, "library name must be a string which is a valid c identifier or a list of symbols" };
static struct { VBlob sym; char bytes[5]; } _V10string_D377 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 5 }, "_V20" };
static struct { VBlob sym; char bytes[28]; } _V10string_D376 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 28 }, "non-symbol in library path:" };
static struct { VBlob sym; char bytes[3]; } _V10string_D375 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 3 }, "_A" };
static struct { VBlob sym; char bytes[3]; } _V10string_D374 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 3 }, "_D" };
static struct { VBlob sym; char bytes[3]; } _V10string_D373 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 3 }, "__" };
static struct { VBlob sym; char bytes[3]; } _V10string_D372 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 3 }, "_P" };
static struct { VBlob sym; char bytes[3]; } _V10string_D371 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 3 }, "_T" };
static struct { VBlob sym; char bytes[3]; } _V10string_D370 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 3 }, "_U" };
static struct { VBlob sym; char bytes[3]; } _V10string_D369 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 3 }, "_C" };
static struct { VBlob sym; char bytes[3]; } _V10string_D368 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 3 }, "_Q" };
static struct { VBlob sym; char bytes[3]; } _V10string_D367 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 3 }, "_G" };
static struct { VBlob sym; char bytes[3]; } _V10string_D366 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 3 }, "_E" };
static struct { VBlob sym; char bytes[3]; } _V10string_D365 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 3 }, "_L" };
static struct { VBlob sym; char bytes[3]; } _V10string_D364 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 3 }, "_J" };
static struct { VBlob sym; char bytes[3]; } _V10string_D363 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 3 }, "_W" };
static struct { VBlob sym; char bytes[3]; } _V10string_D362 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 3 }, "_S" };
static struct { VBlob sym; char bytes[3]; } _V10string_D361 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 3 }, "_R" };
static struct { VBlob sym; char bytes[3]; } _V10string_D360 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 3 }, "_M" };
static struct { VBlob sym; char bytes[3]; } _V10string_D359 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 3 }, "_Z" };
static struct { VBlob sym; char bytes[3]; } _V10string_D358 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 3 }, "_B" };
static struct { VBlob sym; char bytes[1]; } _V10string_D357 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 1 }, "" };
static struct { VBlob sym; char bytes[4]; } _V10string_D356 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 4 }, "_V0" };
static struct { VBlob sym; char bytes[5]; } _V10string_D355 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 5 }, "_V10" };
static __attribute__((constructor)) void VDllMain1() {
  _V0eq_Q = VEncodePointer(VLookupConstant("_V0eq_Q", &_VW_V0eq_Q), VPOINTER_OTHER);
  _V0_P = VEncodePointer(VLookupConstant("_V0_P", &_VW_V0_P), VPOINTER_OTHER);
  _V0display = VEncodePointer(VLookupConstant("_V0display", &_VW_V0display), VPOINTER_OTHER);
  _V0string__ref = VEncodePointer(VLookupConstant("_V0string__ref", &_VW_V0string__ref), VPOINTER_OTHER);
  _V0_E = VEncodePointer(VLookupConstant("_V0_E", &_VW_V0_E), VPOINTER_OTHER);
  _V0close__port = VEncodePointer(VLookupConstant("_V0close__port", &_VW_V0close__port), VPOINTER_OTHER);
  _V0string___Gsymbol = VEncodePointer(VLookupConstant("_V0string___Gsymbol", &_VW_V0string___Gsymbol), VPOINTER_OTHER);
  _V0get__output__string = VEncodePointer(VLookupConstant("_V0get__output__string", &_VW_V0get__output__string), VPOINTER_OTHER);
  _V0open__output__string = VEncodePointer(VLookupConstant("_V0open__output__string", &_VW_V0open__output__string), VPOINTER_OTHER);
  _V0string__length = VEncodePointer(VLookupConstant("_V0string__length", &_VW_V0string__length), VPOINTER_OTHER);
  _V0string_Q = VEncodePointer(VLookupConstant("_V0string_Q", &_VW_V0string_Q), VPOINTER_OTHER);
  _V0reverse = VEncodePointer(VLookupConstant("_V0reverse", &_VW_V0reverse), VPOINTER_OTHER);
  _V0symbol___Gstring = VEncodePointer(VLookupConstant("_V0symbol___Gstring", &_VW_V0symbol___Gstring), VPOINTER_OTHER);
  _V0string__append = VEncodePointer(VLookupConstant("_V0string__append", &_VW_V0string__append), VPOINTER_OTHER);
  _V0compiler__error = VEncodePointer(VLookupConstant("_V0compiler__error", &_VW_V0compiler__error), VPOINTER_OTHER);
  _V0pair_Q = VEncodePointer(VLookupConstant("_V0pair_Q", &_VW_V0pair_Q), VPOINTER_OTHER);
  _V0cdr = VEncodePointer(VLookupConstant("_V0cdr", &_VW_V0cdr), VPOINTER_OTHER);
  _V0car = VEncodePointer(VLookupConstant("_V0car", &_VW_V0car), VPOINTER_OTHER);
  _V0eqv_Q = VEncodePointer(VLookupConstant("_V0eqv_Q", &_VW_V0eqv_Q), VPOINTER_OTHER);
  _V0cons = VEncodePointer(VLookupConstant("_V0cons", &_VW_V0cons), VPOINTER_OTHER);
  _V0cadr = VEncodePointer(VLookupConstant("_V0cadr", &_VW_V0cadr), VPOINTER_OTHER);
  _V0map = VEncodePointer(VLookupConstant("_V0map", &_VW_V0map), VPOINTER_OTHER);
  _V0cddr = VEncodePointer(VLookupConstant("_V0cddr", &_VW_V0cddr), VPOINTER_OTHER);
  _V0caar = VEncodePointer(VLookupConstant("_V0caar", &_VW_V0caar), VPOINTER_OTHER);
  _V0cdar = VEncodePointer(VLookupConstant("_V0cdar", &_VW_V0cdar), VPOINTER_OTHER);
  _V0null_Q = VEncodePointer(VLookupConstant("_V0null_Q", &_VW_V0null_Q), VPOINTER_OTHER);
  _V0memv = VEncodePointer(VLookupConstant("_V0memv", &_VW_V0memv), VPOINTER_OTHER);
  _V0caddr = VEncodePointer(VLookupConstant("_V0caddr", &_VW_V0caddr), VPOINTER_OTHER);
  _V0cadddr = VEncodePointer(VLookupConstant("_V0cadddr", &_VW_V0cadddr), VPOINTER_OTHER);
  _V0atom_Q = VEncodePointer(VLookupConstant("_V0atom_Q", &_VW_V0atom_Q), VPOINTER_OTHER);
  _V0symbol_Q = VEncodePointer(VLookupConstant("_V0symbol_Q", &_VW_V0symbol_Q), VPOINTER_OTHER);
  _V0list = VEncodePointer(VLookupConstant("_V0list", &_VW_V0list), VPOINTER_OTHER);
  _V0free__variables = VEncodePointer(VLookupConstant("_V0free__variables", &_VW_V0free__variables), VPOINTER_OTHER);
  _V0lookup__intrinsic2 = VEncodePointer(VLookupConstant("_V0lookup__intrinsic2", &_VW_V0lookup__intrinsic2), VPOINTER_OTHER);
  _V0lookup__inline = VEncodePointer(VLookupConstant("_V0lookup__inline", &_VW_V0lookup__inline), VPOINTER_OTHER);
  _V0mangle__library = VEncodePointer(VLookupConstant("_V0mangle__library", &_VW_V0mangle__library), VPOINTER_OTHER);
  _V0mangle__symbol = VEncodePointer(VLookupConstant("_V0mangle__symbol", &_VW_V0mangle__symbol), VPOINTER_OTHER);
  _V0quote = VEncodePointer(VLookupConstant("_V0quote", &_VW_V0quote), VPOINTER_OTHER);
  _V0if = VEncodePointer(VLookupConstant("_V0if", &_VW_V0if), VPOINTER_OTHER);
  _V0or = VEncodePointer(VLookupConstant("_V0or", &_VW_V0or), VPOINTER_OTHER);
  _V0and = VEncodePointer(VLookupConstant("_V0and", &_VW_V0and), VPOINTER_OTHER);
  _V0lambda = VEncodePointer(VLookupConstant("_V0lambda", &_VW_V0lambda), VPOINTER_OTHER);
  _V0case__lambda = VEncodePointer(VLookupConstant("_V0case__lambda", &_VW_V0case__lambda), VPOINTER_OTHER);
  _V0letrec = VEncodePointer(VLookupConstant("_V0letrec", &_VW_V0letrec), VPOINTER_OTHER);
  _V0set_B = VEncodePointer(VLookupConstant("_V0set_B", &_VW_V0set_B), VPOINTER_OTHER);
  _V0begin = VEncodePointer(VLookupConstant("_V0begin", &_VW_V0begin), VPOINTER_OTHER);
  _V10sys_Deqv_Q = VEncodePointer(VLookupConstant("_V10sys_Deqv_Q", &_VW_V10sys_Deqv_Q), VPOINTER_OTHER);
  _V10vcore_Dmake__hash__table = VEncodePointer(VLookupConstant("_V10vcore_Dmake__hash__table", &_VW_V10vcore_Dmake__hash__table), VPOINTER_OTHER);
  _V10vcore_Dhash__table__equivalence__function = VEncodePointer(VLookupConstant("_V10vcore_Dhash__table__equivalence__function", &_VW_V10vcore_Dhash__table__equivalence__function), VPOINTER_OTHER);
  _V10vcore_Dhash__table__hash__function = VEncodePointer(VLookupConstant("_V10vcore_Dhash__table__hash__function", &_VW_V10vcore_Dhash__table__hash__function), VPOINTER_OTHER);
  _V10vcore_Dhash__table__ref = VEncodePointer(VLookupConstant("_V10vcore_Dhash__table__ref", &_VW_V10vcore_Dhash__table__ref), VPOINTER_OTHER);
  _V10vcore_Dhash__table__set_B = VEncodePointer(VLookupConstant("_V10vcore_Dhash__table__set_B", &_VW_V10vcore_Dhash__table__set_B), VPOINTER_OTHER);
  _V10vcore_Dhash__table__delete_B = VEncodePointer(VLookupConstant("_V10vcore_Dhash__table__delete_B", &_VW_V10vcore_Dhash__table__delete_B), VPOINTER_OTHER);
  _V10sys_Dset__finalizer_B = VEncodePointer(VLookupConstant("_V10sys_Dset__finalizer_B", &_VW_V10sys_Dset__finalizer_B), VPOINTER_OTHER);
  _V10sys_Dhas__finalizer_Q = VEncodePointer(VLookupConstant("_V10sys_Dhas__finalizer_Q", &_VW_V10sys_Dhas__finalizer_Q), VPOINTER_OTHER);
  _V10sys_Dfinalize_B = VEncodePointer(VLookupConstant("_V10sys_Dfinalize_B", &_VW_V10sys_Dfinalize_B), VPOINTER_OTHER);
  _V10sys_Dgarbage__collect = VEncodePointer(VLookupConstant("_V10sys_Dgarbage__collect", &_VW_V10sys_Dgarbage__collect), VPOINTER_OTHER);
  _V10vcore_Dmake__random = VEncodePointer(VLookupConstant("_V10vcore_Dmake__random", &_VW_V10vcore_Dmake__random), VPOINTER_OTHER);
  _V10vcore_Drandom__copy = VEncodePointer(VLookupConstant("_V10vcore_Drandom__copy", &_VW_V10vcore_Drandom__copy), VPOINTER_OTHER);
  _V10vcore_Drandom__sample_B = VEncodePointer(VLookupConstant("_V10vcore_Drandom__sample_B", &_VW_V10vcore_Drandom__sample_B), VPOINTER_OTHER);
  _V10vcore_Drandom__sample__bounded_B = VEncodePointer(VLookupConstant("_V10vcore_Drandom__sample__bounded_B", &_VW_V10vcore_Drandom__sample__bounded_B), VPOINTER_OTHER);
  _V10vcore_Drandom__sample__float_B = VEncodePointer(VLookupConstant("_V10vcore_Drandom__sample__float_B", &_VW_V10vcore_Drandom__sample__float_B), VPOINTER_OTHER);
  _V10vcore_Drandom__advance_B = VEncodePointer(VLookupConstant("_V10vcore_Drandom__advance_B", &_VW_V10vcore_Drandom__advance_B), VPOINTER_OTHER);
  _V10vcore_Dfiber__fork__list = VEncodePointer(VLookupConstant("_V10vcore_Dfiber__fork__list", &_VW_V10vcore_Dfiber__fork__list), VPOINTER_OTHER);
  _V10vcore_Dasync = VEncodePointer(VLookupConstant("_V10vcore_Dasync", &_VW_V10vcore_Dasync), VPOINTER_OTHER);
  _V10vcore_Dawait = VEncodePointer(VLookupConstant("_V10vcore_Dawait", &_VW_V10vcore_Dawait), VPOINTER_OTHER);
  _V10sys_D_P = VEncodePointer(VLookupConstant("_V10sys_D_P", &_VW_V10sys_D_P), VPOINTER_OTHER);
  _V10sys_D__ = VEncodePointer(VLookupConstant("_V10sys_D__", &_VW_V10sys_D__), VPOINTER_OTHER);
  _V10sys_D_S = VEncodePointer(VLookupConstant("_V10sys_D_S", &_VW_V10sys_D_S), VPOINTER_OTHER);
  _V10sys_D_W = VEncodePointer(VLookupConstant("_V10sys_D_W", &_VW_V10sys_D_W), VPOINTER_OTHER);
  _V10sys_Dcmp = VEncodePointer(VLookupConstant("_V10sys_Dcmp", &_VW_V10sys_Dcmp), VPOINTER_OTHER);
  _V10sys_Dquotient = VEncodePointer(VLookupConstant("_V10sys_Dquotient", &_VW_V10sys_Dquotient), VPOINTER_OTHER);
  _V10sys_Dremainder = VEncodePointer(VLookupConstant("_V10sys_Dremainder", &_VW_V10sys_Dremainder), VPOINTER_OTHER);
  _V10sys_Dvector_Q = VEncodePointer(VLookupConstant("_V10sys_Dvector_Q", &_VW_V10sys_Dvector_Q), VPOINTER_OTHER);
  _V10sys_Dprocedure_Q = VEncodePointer(VLookupConstant("_V10sys_Dprocedure_Q", &_VW_V10sys_Dprocedure_Q), VPOINTER_OTHER);
  _V10sys_Dblob_Q = VEncodePointer(VLookupConstant("_V10sys_Dblob_Q", &_VW_V10sys_Dblob_Q), VPOINTER_OTHER);
  _V10sys_Dsymbol_Q = VEncodePointer(VLookupConstant("_V10sys_Dsymbol_Q", &_VW_V10sys_Dsymbol_Q), VPOINTER_OTHER);
  _V10sys_Dstring_Q = VEncodePointer(VLookupConstant("_V10sys_Dstring_Q", &_VW_V10sys_Dstring_Q), VPOINTER_OTHER);
  _V10sys_Dint_Q = VEncodePointer(VLookupConstant("_V10sys_Dint_Q", &_VW_V10sys_Dint_Q), VPOINTER_OTHER);
  _V10sys_Ddouble_Q = VEncodePointer(VLookupConstant("_V10sys_Ddouble_Q", &_VW_V10sys_Ddouble_Q), VPOINTER_OTHER);
  _V10sys_Dchar_Q = VEncodePointer(VLookupConstant("_V10sys_Dchar_Q", &_VW_V10sys_Dchar_Q), VPOINTER_OTHER);
  _V10sys_Dsymbol_E_Q = VEncodePointer(VLookupConstant("_V10sys_Dsymbol_E_Q", &_VW_V10sys_Dsymbol_E_Q), VPOINTER_OTHER);
  _V10sys_Dblob_E_Q = VEncodePointer(VLookupConstant("_V10sys_Dblob_E_Q", &_VW_V10sys_Dblob_E_Q), VPOINTER_OTHER);
  _V10sys_Dnext = VEncodePointer(VLookupConstant("_V10sys_Dnext", &_VW_V10sys_Dnext), VPOINTER_OTHER);
  _V10sys_Dcall_Wcc = VEncodePointer(VLookupConstant("_V10sys_Dcall_Wcc", &_VW_V10sys_Dcall_Wcc), VPOINTER_OTHER);
  _V10sys_Dcall__with__values = VEncodePointer(VLookupConstant("_V10sys_Dcall__with__values", &_VW_V10sys_Dcall__with__values), VPOINTER_OTHER);
  _V10sys_Dapply = VEncodePointer(VLookupConstant("_V10sys_Dapply", &_VW_V10sys_Dapply), VPOINTER_OTHER);
  _V10sys_Dabort = VEncodePointer(VLookupConstant("_V10sys_Dabort", &_VW_V10sys_Dabort), VPOINTER_OTHER);
  _V10sys_Dexit = VEncodePointer(VLookupConstant("_V10sys_Dexit", &_VW_V10sys_Dexit), VPOINTER_OTHER);
  _V10sys_Dimport = VEncodePointer(VLookupConstant("_V10sys_Dimport", &_VW_V10sys_Dimport), VPOINTER_OTHER);
  _V10vcore_Dfunction = VEncodePointer(VLookupConstant("_V10vcore_Dfunction", &_VW_V10vcore_Dfunction), VPOINTER_OTHER);
  _V10vcore_Ddefine = VEncodePointer(VLookupConstant("_V10vcore_Ddefine", &_VW_V10vcore_Ddefine), VPOINTER_OTHER);
  _V10vcore_Dmultidefine = VEncodePointer(VLookupConstant("_V10vcore_Dmultidefine", &_VW_V10vcore_Dmultidefine), VPOINTER_OTHER);
  _V10vcore_Dlookup__library = VEncodePointer(VLookupConstant("_V10vcore_Dlookup__library", &_VW_V10vcore_Dlookup__library), VPOINTER_OTHER);
  _V10vcore_Dmake__import = VEncodePointer(VLookupConstant("_V10vcore_Dmake__import", &_VW_V10vcore_Dmake__import), VPOINTER_OTHER);
  _V10vcore_Dload__library = VEncodePointer(VLookupConstant("_V10vcore_Dload__library", &_VW_V10vcore_Dload__library), VPOINTER_OTHER);
  _V10sys_Dset__car_B = VEncodePointer(VLookupConstant("_V10sys_Dset__car_B", &_VW_V10sys_Dset__car_B), VPOINTER_OTHER);
  _V10sys_Dset__cdr_B = VEncodePointer(VLookupConstant("_V10sys_Dset__cdr_B", &_VW_V10sys_Dset__cdr_B), VPOINTER_OTHER);
  _V10sys_Dlist___Gvector = VEncodePointer(VLookupConstant("_V10sys_Dlist___Gvector", &_VW_V10sys_Dlist___Gvector), VPOINTER_OTHER);
  _V10sys_Dvector__ref = VEncodePointer(VLookupConstant("_V10sys_Dvector__ref", &_VW_V10sys_Dvector__ref), VPOINTER_OTHER);
  _V10sys_Dvector__set_B = VEncodePointer(VLookupConstant("_V10sys_Dvector__set_B", &_VW_V10sys_Dvector__set_B), VPOINTER_OTHER);
  _V10sys_Dvector__length = VEncodePointer(VLookupConstant("_V10sys_Dvector__length", &_VW_V10sys_Dvector__length), VPOINTER_OTHER);
  _V10sys_Dmake__string = VEncodePointer(VLookupConstant("_V10sys_Dmake__string", &_VW_V10sys_Dmake__string), VPOINTER_OTHER);
  _V10sys_Dsubstring = VEncodePointer(VLookupConstant("_V10sys_Dsubstring", &_VW_V10sys_Dsubstring), VPOINTER_OTHER);
  _V10sys_Dstring__copy_B = VEncodePointer(VLookupConstant("_V10sys_Dstring__copy_B", &_VW_V10sys_Dstring__copy_B), VPOINTER_OTHER);
  _V10sys_Dstring__ref = VEncodePointer(VLookupConstant("_V10sys_Dstring__ref", &_VW_V10sys_Dstring__ref), VPOINTER_OTHER);
  _V10sys_Dstring__set_B = VEncodePointer(VLookupConstant("_V10sys_Dstring__set_B", &_VW_V10sys_Dstring__set_B), VPOINTER_OTHER);
  _V10sys_Dstring__length = VEncodePointer(VLookupConstant("_V10sys_Dstring__length", &_VW_V10sys_Dstring__length), VPOINTER_OTHER);
  _V10sys_Dstring___Gsymbol = VEncodePointer(VLookupConstant("_V10sys_Dstring___Gsymbol", &_VW_V10sys_Dstring___Gsymbol), VPOINTER_OTHER);
  _V10sys_Dstring___Gnumber = VEncodePointer(VLookupConstant("_V10sys_Dstring___Gnumber", &_VW_V10sys_Dstring___Gnumber), VPOINTER_OTHER);
  _V10sys_Dsymbol___Gstring = VEncodePointer(VLookupConstant("_V10sys_Dsymbol___Gstring", &_VW_V10sys_Dsymbol___Gstring), VPOINTER_OTHER);
  _V10sys_Dchar__integer = VEncodePointer(VLookupConstant("_V10sys_Dchar__integer", &_VW_V10sys_Dchar__integer), VPOINTER_OTHER);
  _V10sys_Dstdin___Gport = VEncodePointer(VLookupConstant("_V10sys_Dstdin___Gport", &_VW_V10sys_Dstdin___Gport), VPOINTER_OTHER);
  _V10sys_Dstdout___Gport = VEncodePointer(VLookupConstant("_V10sys_Dstdout___Gport", &_VW_V10sys_Dstdout___Gport), VPOINTER_OTHER);
  _V10sys_Dstderr___Gport = VEncodePointer(VLookupConstant("_V10sys_Dstderr___Gport", &_VW_V10sys_Dstderr___Gport), VPOINTER_OTHER);
  _V10sys_Ddup__stdin = VEncodePointer(VLookupConstant("_V10sys_Ddup__stdin", &_VW_V10sys_Ddup__stdin), VPOINTER_OTHER);
  _V10sys_Ddup__stdout = VEncodePointer(VLookupConstant("_V10sys_Ddup__stdout", &_VW_V10sys_Ddup__stdout), VPOINTER_OTHER);
  _V10sys_Ddup__stderr = VEncodePointer(VLookupConstant("_V10sys_Ddup__stderr", &_VW_V10sys_Ddup__stderr), VPOINTER_OTHER);
  _V10sys_Dopen__input__stream = VEncodePointer(VLookupConstant("_V10sys_Dopen__input__stream", &_VW_V10sys_Dopen__input__stream), VPOINTER_OTHER);
  _V10sys_Dopen__output__stream = VEncodePointer(VLookupConstant("_V10sys_Dopen__output__stream", &_VW_V10sys_Dopen__output__stream), VPOINTER_OTHER);
  _V10sys_Dclose__stream = VEncodePointer(VLookupConstant("_V10sys_Dclose__stream", &_VW_V10sys_Dclose__stream), VPOINTER_OTHER);
  _V10sys_Dopen__output__string = VEncodePointer(VLookupConstant("_V10sys_Dopen__output__string", &_VW_V10sys_Dopen__output__string), VPOINTER_OTHER);
  _V10sys_Dget__output__string = VEncodePointer(VLookupConstant("_V10sys_Dget__output__string", &_VW_V10sys_Dget__output__string), VPOINTER_OTHER);
  _V10sys_Deof__object_Q = VEncodePointer(VLookupConstant("_V10sys_Deof__object_Q", &_VW_V10sys_Deof__object_Q), VPOINTER_OTHER);
  _V10sys_Dread__char = VEncodePointer(VLookupConstant("_V10sys_Dread__char", &_VW_V10sys_Dread__char), VPOINTER_OTHER);
  _V10sys_Dread__line = VEncodePointer(VLookupConstant("_V10sys_Dread__line", &_VW_V10sys_Dread__line), VPOINTER_OTHER);
  _V10sys_Dread = VEncodePointer(VLookupConstant("_V10sys_Dread", &_VW_V10sys_Dread), VPOINTER_OTHER);
  _V10sys_Ddisplay__word = VEncodePointer(VLookupConstant("_V10sys_Ddisplay__word", &_VW_V10sys_Ddisplay__word), VPOINTER_OTHER);
  _V10sys_Dwrite = VEncodePointer(VLookupConstant("_V10sys_Dwrite", &_VW_V10sys_Dwrite), VPOINTER_OTHER);
  _V10sys_Dnewline = VEncodePointer(VLookupConstant("_V10sys_Dnewline", &_VW_V10sys_Dnewline), VPOINTER_OTHER);
  _V10sys_Dsystem = VEncodePointer(VLookupConstant("_V10sys_Dsystem", &_VW_V10sys_Dsystem), VPOINTER_OTHER);
  _V10sys_Dopen__input__process = VEncodePointer(VLookupConstant("_V10sys_Dopen__input__process", &_VW_V10sys_Dopen__input__process), VPOINTER_OTHER);
  _V10sys_Dopen__output__process = VEncodePointer(VLookupConstant("_V10sys_Dopen__output__process", &_VW_V10sys_Dopen__output__process), VPOINTER_OTHER);
  _V10sys_Dmake__temporary__file = VEncodePointer(VLookupConstant("_V10sys_Dmake__temporary__file", &_VW_V10sys_Dmake__temporary__file), VPOINTER_OTHER);
  _V10sys_Dcommand__line = VEncodePointer(VLookupConstant("_V10sys_Dcommand__line", &_VW_V10sys_Dcommand__line), VPOINTER_OTHER);
  _V10sys_Dnull_Q = VEncodePointer(VLookupConstant("_V10sys_Dnull_Q", &_VW_V10sys_Dnull_Q), VPOINTER_OTHER);
  _V10sys_Dpair_Q = VEncodePointer(VLookupConstant("_V10sys_Dpair_Q", &_VW_V10sys_Dpair_Q), VPOINTER_OTHER);
  _V10sys_Dnot = VEncodePointer(VLookupConstant("_V10sys_Dnot", &_VW_V10sys_Dnot), VPOINTER_OTHER);
  _V10sys_Deq_Q = VEncodePointer(VLookupConstant("_V10sys_Deq_Q", &_VW_V10sys_Deq_Q), VPOINTER_OTHER);
  _V10sys_Dcons = VEncodePointer(VLookupConstant("_V10sys_Dcons", &_VW_V10sys_Dcons), VPOINTER_OTHER);
  _V10sys_Dcar = VEncodePointer(VLookupConstant("_V10sys_Dcar", &_VW_V10sys_Dcar), VPOINTER_OTHER);
  _V10sys_Dcdr = VEncodePointer(VLookupConstant("_V10sys_Dcdr", &_VW_V10sys_Dcdr), VPOINTER_OTHER);
  _V10sys_Dqcons = VEncodePointer(VLookupConstant("_V10sys_Dqcons", &_VW_V10sys_Dqcons), VPOINTER_OTHER);
}
static void _V0vanity_V0compiler_V0variables_V20_k41(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k41" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k41, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k41, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.66 1 0) ((bruijn display 8 2) (bruijn ##k.67 0 0) (##string ##string.355) (bruijn port 3 0)) ((bruijn display 8 2) (bruijn ##k.67 0 0) (##string ##string.356) (bruijn port 3 0)))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(VGetArg(upenv, 8-1, 2), runtime,
      _var0,
      VEncodePointer(&_V10string_D355.sym, VPOINTER_OTHER),
      upenv->up->up->vars[0]);
} else {
V_CALL(VGetArg(upenv, 8-1, 2), runtime,
      _var0,
      VEncodePointer(&_V10string_D356.sym, VPOINTER_OTHER),
      upenv->up->up->vars[0]);
}
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k45(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k45" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k45, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k45, runtime, upenv, 1, argc, _var0) {
  // ((bruijn string->symbol 13 6) (bruijn ##k.40 3 0) (bruijn ret 1 0))
V_CALL(VGetArg(upenv, 13-1, 6), runtime,
      upenv->up->up->vars[0],
      upenv->vars[0]);
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k44(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k44" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k44, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k44, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn close-port 12 5) (close _V0vanity_V0compiler_V0variables_V20_k45) (bruijn port 7 0))
V_CALL(VGetArg(upenv, 12-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k45, env)}),
      VGetArg(upenv, 7-1, 0));
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k66(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k66" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k66, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k66, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.65 0 0) ((bruijn ##k.47 18 0) (##string ##string.375)) ((bruijn string-ref 32 3) (bruijn ##k.47 18 0) (bruijn str 29 0) (bruijn i 22 1)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 18-1, 0), runtime,
      VEncodePointer(&_V10string_D375.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 32-1, 3), runtime,
      VGetArg(upenv, 18-1, 0),
      VGetArg(upenv, 29-1, 0),
      VGetArg(upenv, 22-1, 1));
}
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k65(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k65" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k65, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k65, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.64 0 0) ((bruijn ##k.47 17 0) (##string ##string.374)) ((bruijn eqv? 31 18) (close _V0vanity_V0compiler_V0variables_V20_k66) (bruijn ##x.1 19 0) '#\@))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 17-1, 0), runtime,
      VEncodePointer(&_V10string_D374.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 31-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k66, env)}),
      VGetArg(upenv, 19-1, 0),
      VEncodeChar('@'));
}
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k64(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k64" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k64, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k64, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.63 0 0) ((bruijn ##k.47 16 0) (##string ##string.373)) ((bruijn eqv? 30 18) (close _V0vanity_V0compiler_V0variables_V20_k65) (bruijn ##x.1 18 0) '#\.))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 16-1, 0), runtime,
      VEncodePointer(&_V10string_D373.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 30-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k65, env)}),
      VGetArg(upenv, 18-1, 0),
      VEncodeChar('.'));
}
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k63(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k63" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k63, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k63, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.62 0 0) ((bruijn ##k.47 15 0) (##string ##string.372)) ((bruijn eqv? 29 18) (close _V0vanity_V0compiler_V0variables_V20_k64) (bruijn ##x.1 17 0) '#\-))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 15-1, 0), runtime,
      VEncodePointer(&_V10string_D372.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 29-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k64, env)}),
      VGetArg(upenv, 17-1, 0),
      VEncodeChar('-'));
}
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k62(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k62" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k62, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k62, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.61 0 0) ((bruijn ##k.47 14 0) (##string ##string.371)) ((bruijn eqv? 28 18) (close _V0vanity_V0compiler_V0variables_V20_k63) (bruijn ##x.1 16 0) '#\+))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 14-1, 0), runtime,
      VEncodePointer(&_V10string_D371.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 28-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k63, env)}),
      VGetArg(upenv, 16-1, 0),
      VEncodeChar('+'));
}
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k61(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k61" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k61, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k61, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.60 0 0) ((bruijn ##k.47 13 0) (##string ##string.370)) ((bruijn eqv? 27 18) (close _V0vanity_V0compiler_V0variables_V20_k62) (bruijn ##x.1 15 0) '#\~))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 13-1, 0), runtime,
      VEncodePointer(&_V10string_D370.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 27-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k62, env)}),
      VGetArg(upenv, 15-1, 0),
      VEncodeChar('~'));
}
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k60(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k60" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k60, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k60, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.59 0 0) ((bruijn ##k.47 12 0) (##string ##string.369)) ((bruijn eqv? 26 18) (close _V0vanity_V0compiler_V0variables_V20_k61) (bruijn ##x.1 14 0) '#\_))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 12-1, 0), runtime,
      VEncodePointer(&_V10string_D369.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 26-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k61, env)}),
      VGetArg(upenv, 14-1, 0),
      VEncodeChar('_'));
}
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k59(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k59" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k59, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k59, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.58 0 0) ((bruijn ##k.47 11 0) (##string ##string.368)) ((bruijn eqv? 25 18) (close _V0vanity_V0compiler_V0variables_V20_k60) (bruijn ##x.1 13 0) '#\^))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 11-1, 0), runtime,
      VEncodePointer(&_V10string_D368.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 25-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k60, env)}),
      VGetArg(upenv, 13-1, 0),
      VEncodeChar('^'));
}
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k58(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k58" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k58, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k58, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.57 0 0) ((bruijn ##k.47 10 0) (##string ##string.367)) ((bruijn eqv? 24 18) (close _V0vanity_V0compiler_V0variables_V20_k59) (bruijn ##x.1 12 0) '#\?))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 10-1, 0), runtime,
      VEncodePointer(&_V10string_D367.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 24-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k59, env)}),
      VGetArg(upenv, 12-1, 0),
      VEncodeChar('?'));
}
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k57(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k57" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k57, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k57, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.56 0 0) ((bruijn ##k.47 9 0) (##string ##string.366)) ((bruijn eqv? 23 18) (close _V0vanity_V0compiler_V0variables_V20_k58) (bruijn ##x.1 11 0) '#\>))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 9-1, 0), runtime,
      VEncodePointer(&_V10string_D366.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 23-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k58, env)}),
      VGetArg(upenv, 11-1, 0),
      VEncodeChar('>'));
}
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k56(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k56" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k56, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k56, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.55 0 0) ((bruijn ##k.47 8 0) (##string ##string.365)) ((bruijn eqv? 22 18) (close _V0vanity_V0compiler_V0variables_V20_k57) (bruijn ##x.1 10 0) '#\=))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 8-1, 0), runtime,
      VEncodePointer(&_V10string_D365.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 22-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k57, env)}),
      VGetArg(upenv, 10-1, 0),
      VEncodeChar('='));
}
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k55(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k55" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k55, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k55, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.54 0 0) ((bruijn ##k.47 7 0) (##string ##string.364)) ((bruijn eqv? 21 18) (close _V0vanity_V0compiler_V0variables_V20_k56) (bruijn ##x.1 9 0) '#\<))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 7-1, 0), runtime,
      VEncodePointer(&_V10string_D364.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 21-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k56, env)}),
      VGetArg(upenv, 9-1, 0),
      VEncodeChar('<'));
}
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k54(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k54" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k54, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k54, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.53 0 0) ((bruijn ##k.47 6 0) (##string ##string.363)) ((bruijn eqv? 20 18) (close _V0vanity_V0compiler_V0variables_V20_k55) (bruijn ##x.1 8 0) '#\:))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 6-1, 0), runtime,
      VEncodePointer(&_V10string_D363.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 20-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k55, env)}),
      VGetArg(upenv, 8-1, 0),
      VEncodeChar(':'));
}
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k53(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k53" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k53, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k53, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.52 0 0) ((bruijn ##k.47 5 0) (##string ##string.362)) ((bruijn eqv? 19 18) (close _V0vanity_V0compiler_V0variables_V20_k54) (bruijn ##x.1 7 0) '#\/))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      VEncodePointer(&_V10string_D362.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 19-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k54, env)}),
      VGetArg(upenv, 7-1, 0),
      VEncodeChar('/'));
}
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k52(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k52" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k52, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k52, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.51 0 0) ((bruijn ##k.47 4 0) (##string ##string.361)) ((bruijn eqv? 18 18) (close _V0vanity_V0compiler_V0variables_V20_k53) (bruijn ##x.1 6 0) '#\*))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodePointer(&_V10string_D361.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 18-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k53, env)}),
      VGetArg(upenv, 6-1, 0),
      VEncodeChar('*'));
}
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k51(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k51" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k51, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k51, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.50 0 0) ((bruijn ##k.47 3 0) (##string ##string.360)) ((bruijn eqv? 17 18) (close _V0vanity_V0compiler_V0variables_V20_k52) (bruijn ##x.1 5 0) '#\&))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->up->up->vars[0], runtime,
      VEncodePointer(&_V10string_D360.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 17-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k52, env)}),
      VGetArg(upenv, 5-1, 0),
      VEncodeChar('&'));
}
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k50(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k50" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k50, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k50, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.49 0 0) ((bruijn ##k.47 2 0) (##string ##string.359)) ((bruijn eqv? 16 18) (close _V0vanity_V0compiler_V0variables_V20_k51) (bruijn ##x.1 4 0) '#\%))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->up->vars[0], runtime,
      VEncodePointer(&_V10string_D359.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 16-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k51, env)}),
      upenv->up->up->up->vars[0],
      VEncodeChar('%'));
}
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k49(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k49" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k49, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k49, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.48 0 0) ((bruijn ##k.47 1 0) (##string ##string.358)) ((bruijn eqv? 15 18) (close _V0vanity_V0compiler_V0variables_V20_k50) (bruijn ##x.1 3 0) '#\$))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->vars[0], runtime,
      VEncodePointer(&_V10string_D358.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 15-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k50, env)}),
      upenv->up->up->vars[0],
      VEncodeChar('$'));
}
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k48(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k48" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k48, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k48, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.46 1 0) ((bruijn ##k.47 0 0) (##string ##string.357)) ((bruijn eqv? 14 18) (close _V0vanity_V0compiler_V0variables_V20_k49) (bruijn ##x.1 2 0) '#\!))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(_var0, runtime,
      VEncodePointer(&_V10string_D357.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 14-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k49, env)}),
      upenv->up->vars[0],
      VEncodeChar('!'));
}
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k69(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k69" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k69, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k69, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 7 0) (bruijn ##k.40 6 0) (bruijn ##x.44 0 0))
V_CALL(VGetArg(upenv, 7-1, 0), runtime,
      VGetArg(upenv, 6-1, 0),
      _var0);
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k68(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k68" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k68, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k68, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn + 15 1) (close _V0vanity_V0compiler_V0variables_V20_k69) (bruijn i 5 1) 1)
V_CALL(VGetArg(upenv, 15-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k69, env)}),
      VGetArg(upenv, 5-1, 1),
      VEncodeInt(1l));
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k67(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k67" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k67, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k67, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn display 14 2) (close _V0vanity_V0compiler_V0variables_V20_k68) (bruijn ##x.45 0 0) (bruijn port 9 0))
V_CALL(VGetArg(upenv, 14-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k68, env)}),
      _var0,
      VGetArg(upenv, 9-1, 0));
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k47(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k47" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k47, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k47, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0variables_V20_k48) (close _V0vanity_V0compiler_V0variables_V20_k67))
V_CALL_FUNC(_V0vanity_V0compiler_V0variables_V20_k48, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k67, env)}));
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k46(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k46" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k46, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k46, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn eqv? 12 18) (close _V0vanity_V0compiler_V0variables_V20_k47) (bruijn ##x.1 0 0) '#\#)
V_CALL(VGetArg(upenv, 12-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k47, env)}),
      _var0,
      VEncodeChar('#'));
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k43(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k43" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k43, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k43, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.41 0 0) ((bruijn get-output-string 11 7) (close _V0vanity_V0compiler_V0variables_V20_k44) (bruijn port 6 0)) ((bruijn string-ref 11 3) (close _V0vanity_V0compiler_V0variables_V20_k46) (bruijn str 8 0) (bruijn i 1 1)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 11-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k44, env)}),
      VGetArg(upenv, 6-1, 0));
} else {
V_CALL(VGetArg(upenv, 11-1, 3), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k46, env)}),
      VGetArg(upenv, 8-1, 0),
      upenv->vars[1]);
}
 }
}
static void _V0vanity_V0compiler_V0variables_V20_lambda4(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_lambda4" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_lambda4, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_lambda4, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn = 10 4) (close _V0vanity_V0compiler_V0variables_V20_k43) (bruijn i 0 1) (bruijn strlen 6 0))
V_CALL(VGetArg(upenv, 10-1, 4), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k43, env)}),
      _var1,
      VGetArg(upenv, 6-1, 0));
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k42(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k42" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k42, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k42, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (letrec 1 ((close _V0vanity_V0compiler_V0variables_V20_lambda4)) ((bruijn loop 0 0) (bruijn ##k.38 7 0) 0))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_lambda4, env)});
V_CALL(env->vars[0], runtime,
      VGetArg(upenv, 7-1, 0),
      VEncodeInt(0l));
    }
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k40(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k40" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k40, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k40, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0variables_V20_k41) (close _V0vanity_V0compiler_V0variables_V20_k42))
V_CALL_FUNC(_V0vanity_V0compiler_V0variables_V20_k41, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k42, env)}));
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k39(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k39" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k39, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k39, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn eq? 6 0) (close _V0vanity_V0compiler_V0variables_V20_k40) (bruijn ##x.68 0 0) #\#)
V_CALL(VGetArg(upenv, 6-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k40, env)}),
      _var0,
      VEncodeChar('#'));
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k38(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k38" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k38, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k38, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn string-ref 5 3) (close _V0vanity_V0compiler_V0variables_V20_k39) (bruijn str 2 0) 0)
V_CALL(VGetArg(upenv, 5-1, 3), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k39, env)}),
      upenv->up->vars[0],
      VEncodeInt(0l));
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k37(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k37" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k37, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k37, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn open-output-string 4 8) (close _V0vanity_V0compiler_V0variables_V20_k38))
V_CALL(upenv->up->up->up->vars[8], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k38, env)}));
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k36(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k36" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k36, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k36, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn string-length 3 9) (close _V0vanity_V0compiler_V0variables_V20_k37) (bruijn str 0 0))
V_CALL(upenv->up->up->vars[9], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k37, env)}),
      _var0);
 }
}
static void _V0vanity_V0compiler_V0variables_V20_lambda3(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_lambda3" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_lambda3, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_lambda3, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn symbol->string 2 12) (close _V0vanity_V0compiler_V0variables_V20_k36) (bruijn sym 0 1))
V_CALL(upenv->up->vars[12], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k36, env)}),
      _var1);
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k76(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k76" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k76, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k76, runtime, upenv, 1, argc, _var0) {
  // ((bruijn symbol->string 11 12) (bruijn ##k.78 1 0) (bruijn ##x.79 0 0))
V_CALL(VGetArg(upenv, 11-1, 12), runtime,
      upenv->vars[0],
      _var0);
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k75(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k75" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k75, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k75, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.77 1 0) ((bruijn mangle-symbol 9 0) (close _V0vanity_V0compiler_V0variables_V20_k76) (bruijn e 2 0)) ((bruijn compiler-error 10 14) (bruijn ##k.78 0 0) (##string ##string.376) (bruijn e 2 0)))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(VGetArg(upenv, 9-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k76, env)}),
      upenv->up->vars[0]);
} else {
V_CALL(VGetArg(upenv, 10-1, 14), runtime,
      _var0,
      VEncodePointer(&_V10string_D376.sym, VPOINTER_OTHER),
      upenv->up->vars[0]);
}
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k79(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k79" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k79, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k79, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 7 0) (bruijn ##k.72 6 0) (bruijn ##x.74 1 0) (bruijn ##x.75 0 0))
V_CALL(VGetArg(upenv, 7-1, 0), runtime,
      VGetArg(upenv, 6-1, 0),
      upenv->vars[0],
      _var0);
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k78(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k78" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k78, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k78, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn cdr 11 16) (close _V0vanity_V0compiler_V0variables_V20_k79) (bruijn ks 5 2))
V_CALL(VGetArg(upenv, 11-1, 16), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k79, env)}),
      VGetArg(upenv, 5-1, 2));
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k77(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k77" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k77, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k77, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn string-append 10 13) (close _V0vanity_V0compiler_V0variables_V20_k78) (bruijn ##x.76 0 0) (bruijn knil 4 1))
V_CALL(VGetArg(upenv, 10-1, 13), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k78, env)}),
      _var0,
      upenv->up->up->up->vars[1]);
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k74(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k74" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k74, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k74, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0variables_V20_k75) (close _V0vanity_V0compiler_V0variables_V20_k77))
V_CALL_FUNC(_V0vanity_V0compiler_V0variables_V20_k75, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k77, env)}));
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k73(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k73" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k73, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k73, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn symbol? 8 30) (close _V0vanity_V0compiler_V0variables_V20_k74) (bruijn e 0 0))
V_CALL(VGetArg(upenv, 8-1, 30), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k74, env)}),
      _var0);
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k72(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k72" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k72, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k72, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.73 0 0) ((bruijn ##k.72 1 0) (bruijn knil 1 1)) ((bruijn car 7 17) (close _V0vanity_V0compiler_V0variables_V20_k73) (bruijn ks 1 2)))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->vars[0], runtime,
      upenv->vars[1]);
} else {
V_CALL(VGetArg(upenv, 7-1, 17), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k73, env)}),
      upenv->vars[2]);
}
 }
}
static void _V0vanity_V0compiler_V0variables_V20_lambda6(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_lambda6" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_lambda6, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_lambda6, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn null? 6 25) (close _V0vanity_V0compiler_V0variables_V20_k72) (bruijn ks 0 2))
V_CALL(VGetArg(upenv, 6-1, 25), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k72, env)}),
      _var2);
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k80(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k80" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k80, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k80, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 1 0) (bruijn ##k.69 4 0) (##string ##string.377) (bruijn ##x.80 0 0))
V_CALL(upenv->vars[0], runtime,
      upenv->up->up->up->vars[0],
      VEncodePointer(&_V10string_D377.sym, VPOINTER_OTHER),
      _var0);
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k71(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k71" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k71, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k71, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.71 0 0) (letrec 1 ((close _V0vanity_V0compiler_V0variables_V20_lambda6)) ((bruijn reverse 5 11) (close _V0vanity_V0compiler_V0variables_V20_k80) (bruijn lib 3 1))) ((bruijn compiler-error 4 14) (bruijn ##k.69 2 0) (##string ##string.378) (bruijn lib 2 1)))
if(VDecodeBool(
_var0)) {
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_lambda6, env)});
V_CALL(VGetArg(upenv, 5-1, 11), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k80, env)}),
      upenv->up->up->vars[1]);
    }
} else {
V_CALL(upenv->up->up->up->vars[14], runtime,
      upenv->up->vars[0],
      VEncodePointer(&_V10string_D378.sym, VPOINTER_OTHER),
      upenv->up->vars[1]);
}
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k70(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k70" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k70, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k70, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.70 0 0) ((bruijn ##k.69 1 0) (bruijn lib 1 1)) ((bruijn pair? 3 15) (close _V0vanity_V0compiler_V0variables_V20_k71) (bruijn lib 1 1)))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->vars[0], runtime,
      upenv->vars[1]);
} else {
V_CALL(upenv->up->up->vars[15], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k71, env)}),
      upenv->vars[1]);
}
 }
}
static void _V0vanity_V0compiler_V0variables_V20_lambda5(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_lambda5" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_lambda5, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_lambda5, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn string? 2 10) (close _V0vanity_V0compiler_V0variables_V20_k70) (bruijn lib 0 1))
V_CALL(upenv->up->vars[10], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k70, env)}),
      _var1);
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k86(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k86" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k86, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k86, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.89 1 0) ((bruijn ##k.90 0 0) (bruijn ##p.89 1 0)) ((bruijn eqv? 9 18) (bruijn ##k.90 0 0) (bruijn ##x.2 6 0) '##sys.qcons))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(_var0, runtime,
      upenv->vars[0]);
} else {
V_CALL(VGetArg(upenv, 9-1, 18), runtime,
      _var0,
      VGetArg(upenv, 6-1, 0),
      _V10sys_Dqcons);
}
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k89(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k89" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k89, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k89, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.88 0 0) ((bruijn ##k.81 9 0) (##string ##string.385)) ((bruijn ##k.81 9 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 9-1, 0), runtime,
      VEncodePointer(&_V10string_D385.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 9-1, 0), runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k88(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k88" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k88, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k88, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.87 0 0) ((bruijn ##k.81 8 0) (##string ##string.384)) ((bruijn eqv? 10 18) (close _V0vanity_V0compiler_V0variables_V20_k89) (bruijn ##x.2 7 0) '##sys.cdr))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 8-1, 0), runtime,
      VEncodePointer(&_V10string_D384.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 10-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k89, env)}),
      VGetArg(upenv, 7-1, 0),
      _V10sys_Dcdr);
}
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k87(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k87" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k87, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k87, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.86 0 0) ((bruijn ##k.81 7 0) (##string ##string.383)) ((bruijn eqv? 9 18) (close _V0vanity_V0compiler_V0variables_V20_k88) (bruijn ##x.2 6 0) '##sys.car))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 7-1, 0), runtime,
      VEncodePointer(&_V10string_D383.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 9-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k88, env)}),
      VGetArg(upenv, 6-1, 0),
      _V10sys_Dcar);
}
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k85(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k85" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k85, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k85, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0variables_V20_k86) (close _V0vanity_V0compiler_V0variables_V20_k87))
V_CALL_FUNC(_V0vanity_V0compiler_V0variables_V20_k86, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k87, env)}));
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k84(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k84" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k84, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k84, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.85 0 0) ((bruijn ##k.81 5 0) (##string ##string.382)) ((bruijn eqv? 7 18) (close _V0vanity_V0compiler_V0variables_V20_k85) (bruijn ##x.2 4 0) '##sys.cons))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      VEncodePointer(&_V10string_D382.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 7-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k85, env)}),
      upenv->up->up->up->vars[0],
      _V10sys_Dcons);
}
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k83(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k83" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k83, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k83, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.84 0 0) ((bruijn ##k.81 4 0) (##string ##string.381)) ((bruijn eqv? 6 18) (close _V0vanity_V0compiler_V0variables_V20_k84) (bruijn ##x.2 3 0) '##sys.eq?))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodePointer(&_V10string_D381.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 6-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k84, env)}),
      upenv->up->up->vars[0],
      _V10sys_Deq_Q);
}
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k82(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k82" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k82, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k82, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.83 0 0) ((bruijn ##k.81 3 0) (##string ##string.380)) ((bruijn eqv? 5 18) (close _V0vanity_V0compiler_V0variables_V20_k83) (bruijn ##x.2 2 0) '##sys.not))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->up->up->vars[0], runtime,
      VEncodePointer(&_V10string_D380.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 5-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k83, env)}),
      upenv->up->vars[0],
      _V10sys_Dnot);
}
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k81(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k81" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k81, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k81, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.82 0 0) ((bruijn ##k.81 2 0) (##string ##string.379)) ((bruijn eqv? 4 18) (close _V0vanity_V0compiler_V0variables_V20_k82) (bruijn ##x.2 1 0) '##sys.pair?))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->up->vars[0], runtime,
      VEncodePointer(&_V10string_D379.sym, VPOINTER_OTHER));
} else {
V_CALL(upenv->up->up->up->vars[18], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k82, env)}),
      upenv->vars[0],
      _V10sys_Dpair_Q);
}
 }
}
static void _V0vanity_V0compiler_V0variables_V20_lambda8(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_lambda8" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_lambda8, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn eqv? 3 18) (close _V0vanity_V0compiler_V0variables_V20_k81) (bruijn ##x.2 0 0) '##sys.null?)
V_CALL(upenv->up->up->vars[18], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k81, env)}),
      _var0,
      _V10sys_Dnull_Q);
 }
}
static void _V0vanity_V0compiler_V0variables_V20_lambda7(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_lambda7" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_lambda7, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_lambda7, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0vanity_V0compiler_V0variables_V20_lambda8) (bruijn sym 0 1))
V_CALL_FUNC(_V0vanity_V0compiler_V0variables_V20_lambda8, env, runtime,
      _var1);
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k125(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k125" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k125, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k125, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.168 1 0) ((bruijn ##k.169 0 0) (bruijn ##p.168 1 0)) ((bruijn eqv? 39 18) (bruijn ##k.169 0 0) (bruijn ##x.3 36 0) '##sys.qcons))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(_var0, runtime,
      upenv->vars[0]);
} else {
V_CALL(VGetArg(upenv, 39-1, 18), runtime,
      _var0,
      VGetArg(upenv, 36-1, 0),
      _V10sys_Dqcons);
}
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k167(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k167" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k167, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k167, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.167 0 0) ((bruijn ##k.91 78 0) (##string ##string.461)) ((bruijn ##k.91 78 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 78-1, 0), runtime,
      VEncodePointer(&_V10string_D461.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 78-1, 0), runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k166(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k166" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k166, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k166, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.166 0 0) ((bruijn ##k.91 77 0) (##string ##string.460)) ((bruijn eqv? 79 18) (close _V0vanity_V0compiler_V0variables_V20_k167) (bruijn ##x.3 76 0) '##sys.command-line))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 77-1, 0), runtime,
      VEncodePointer(&_V10string_D460.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 79-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k167, env)}),
      VGetArg(upenv, 76-1, 0),
      _V10sys_Dcommand__line);
}
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k165(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k165" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k165, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k165, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.165 0 0) ((bruijn ##k.91 76 0) (##string ##string.459)) ((bruijn eqv? 78 18) (close _V0vanity_V0compiler_V0variables_V20_k166) (bruijn ##x.3 75 0) '##sys.make-temporary-file))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 76-1, 0), runtime,
      VEncodePointer(&_V10string_D459.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 78-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k166, env)}),
      VGetArg(upenv, 75-1, 0),
      _V10sys_Dmake__temporary__file);
}
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k164(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k164" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k164, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k164, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.164 0 0) ((bruijn ##k.91 75 0) (##string ##string.458)) ((bruijn eqv? 77 18) (close _V0vanity_V0compiler_V0variables_V20_k165) (bruijn ##x.3 74 0) '##sys.open-output-process))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 75-1, 0), runtime,
      VEncodePointer(&_V10string_D458.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 77-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k165, env)}),
      VGetArg(upenv, 74-1, 0),
      _V10sys_Dopen__output__process);
}
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k163(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k163" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k163, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k163, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.163 0 0) ((bruijn ##k.91 74 0) (##string ##string.457)) ((bruijn eqv? 76 18) (close _V0vanity_V0compiler_V0variables_V20_k164) (bruijn ##x.3 73 0) '##sys.open-input-process))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 74-1, 0), runtime,
      VEncodePointer(&_V10string_D457.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 76-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k164, env)}),
      VGetArg(upenv, 73-1, 0),
      _V10sys_Dopen__input__process);
}
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k162(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k162" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k162, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k162, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.162 0 0) ((bruijn ##k.91 73 0) (##string ##string.456)) ((bruijn eqv? 75 18) (close _V0vanity_V0compiler_V0variables_V20_k163) (bruijn ##x.3 72 0) '##sys.system))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 73-1, 0), runtime,
      VEncodePointer(&_V10string_D456.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 75-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k163, env)}),
      VGetArg(upenv, 72-1, 0),
      _V10sys_Dsystem);
}
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k161(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k161" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k161, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k161, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.161 0 0) ((bruijn ##k.91 72 0) (##string ##string.455)) ((bruijn eqv? 74 18) (close _V0vanity_V0compiler_V0variables_V20_k162) (bruijn ##x.3 71 0) '##sys.newline))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 72-1, 0), runtime,
      VEncodePointer(&_V10string_D455.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 74-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k162, env)}),
      VGetArg(upenv, 71-1, 0),
      _V10sys_Dnewline);
}
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k160(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k160" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k160, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k160, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.160 0 0) ((bruijn ##k.91 71 0) (##string ##string.454)) ((bruijn eqv? 73 18) (close _V0vanity_V0compiler_V0variables_V20_k161) (bruijn ##x.3 70 0) '##sys.write))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 71-1, 0), runtime,
      VEncodePointer(&_V10string_D454.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 73-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k161, env)}),
      VGetArg(upenv, 70-1, 0),
      _V10sys_Dwrite);
}
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k159(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k159" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k159, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k159, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.159 0 0) ((bruijn ##k.91 70 0) (##string ##string.453)) ((bruijn eqv? 72 18) (close _V0vanity_V0compiler_V0variables_V20_k160) (bruijn ##x.3 69 0) '##sys.display-word))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 70-1, 0), runtime,
      VEncodePointer(&_V10string_D453.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 72-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k160, env)}),
      VGetArg(upenv, 69-1, 0),
      _V10sys_Ddisplay__word);
}
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k158(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k158" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k158, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k158, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.158 0 0) ((bruijn ##k.91 69 0) (##string ##string.452)) ((bruijn eqv? 71 18) (close _V0vanity_V0compiler_V0variables_V20_k159) (bruijn ##x.3 68 0) '##sys.read))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 69-1, 0), runtime,
      VEncodePointer(&_V10string_D452.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 71-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k159, env)}),
      VGetArg(upenv, 68-1, 0),
      _V10sys_Dread);
}
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k157(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k157" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k157, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k157, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.157 0 0) ((bruijn ##k.91 68 0) (##string ##string.451)) ((bruijn eqv? 70 18) (close _V0vanity_V0compiler_V0variables_V20_k158) (bruijn ##x.3 67 0) '##sys.read-line))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 68-1, 0), runtime,
      VEncodePointer(&_V10string_D451.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 70-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k158, env)}),
      VGetArg(upenv, 67-1, 0),
      _V10sys_Dread__line);
}
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k156(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k156" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k156, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k156, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.156 0 0) ((bruijn ##k.91 67 0) (##string ##string.450)) ((bruijn eqv? 69 18) (close _V0vanity_V0compiler_V0variables_V20_k157) (bruijn ##x.3 66 0) '##sys.read-char))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 67-1, 0), runtime,
      VEncodePointer(&_V10string_D450.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 69-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k157, env)}),
      VGetArg(upenv, 66-1, 0),
      _V10sys_Dread__char);
}
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k155(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k155" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k155, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k155, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.155 0 0) ((bruijn ##k.91 66 0) (##string ##string.449)) ((bruijn eqv? 68 18) (close _V0vanity_V0compiler_V0variables_V20_k156) (bruijn ##x.3 65 0) '##sys.eof-object?))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 66-1, 0), runtime,
      VEncodePointer(&_V10string_D449.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 68-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k156, env)}),
      VGetArg(upenv, 65-1, 0),
      _V10sys_Deof__object_Q);
}
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k154(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k154" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k154, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k154, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.154 0 0) ((bruijn ##k.91 65 0) (##string ##string.448)) ((bruijn eqv? 67 18) (close _V0vanity_V0compiler_V0variables_V20_k155) (bruijn ##x.3 64 0) '##sys.get-output-string))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 65-1, 0), runtime,
      VEncodePointer(&_V10string_D448.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 67-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k155, env)}),
      VGetArg(upenv, 64-1, 0),
      _V10sys_Dget__output__string);
}
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k153(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k153" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k153, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k153, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.153 0 0) ((bruijn ##k.91 64 0) (##string ##string.447)) ((bruijn eqv? 66 18) (close _V0vanity_V0compiler_V0variables_V20_k154) (bruijn ##x.3 63 0) '##sys.open-output-string))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 64-1, 0), runtime,
      VEncodePointer(&_V10string_D447.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 66-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k154, env)}),
      VGetArg(upenv, 63-1, 0),
      _V10sys_Dopen__output__string);
}
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k152(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k152" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k152, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k152, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.152 0 0) ((bruijn ##k.91 63 0) (##string ##string.446)) ((bruijn eqv? 65 18) (close _V0vanity_V0compiler_V0variables_V20_k153) (bruijn ##x.3 62 0) '##sys.close-stream))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 63-1, 0), runtime,
      VEncodePointer(&_V10string_D446.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 65-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k153, env)}),
      VGetArg(upenv, 62-1, 0),
      _V10sys_Dclose__stream);
}
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k151(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k151" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k151, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k151, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.151 0 0) ((bruijn ##k.91 62 0) (##string ##string.445)) ((bruijn eqv? 64 18) (close _V0vanity_V0compiler_V0variables_V20_k152) (bruijn ##x.3 61 0) '##sys.open-output-stream))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 62-1, 0), runtime,
      VEncodePointer(&_V10string_D445.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 64-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k152, env)}),
      VGetArg(upenv, 61-1, 0),
      _V10sys_Dopen__output__stream);
}
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k150(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k150" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k150, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k150, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.150 0 0) ((bruijn ##k.91 61 0) (##string ##string.444)) ((bruijn eqv? 63 18) (close _V0vanity_V0compiler_V0variables_V20_k151) (bruijn ##x.3 60 0) '##sys.open-input-stream))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 61-1, 0), runtime,
      VEncodePointer(&_V10string_D444.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 63-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k151, env)}),
      VGetArg(upenv, 60-1, 0),
      _V10sys_Dopen__input__stream);
}
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k149(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k149" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k149, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k149, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.149 0 0) ((bruijn ##k.91 60 0) (##string ##string.443)) ((bruijn eqv? 62 18) (close _V0vanity_V0compiler_V0variables_V20_k150) (bruijn ##x.3 59 0) '##sys.dup-stderr))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 60-1, 0), runtime,
      VEncodePointer(&_V10string_D443.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 62-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k150, env)}),
      VGetArg(upenv, 59-1, 0),
      _V10sys_Ddup__stderr);
}
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k148(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k148" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k148, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k148, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.148 0 0) ((bruijn ##k.91 59 0) (##string ##string.442)) ((bruijn eqv? 61 18) (close _V0vanity_V0compiler_V0variables_V20_k149) (bruijn ##x.3 58 0) '##sys.dup-stdout))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 59-1, 0), runtime,
      VEncodePointer(&_V10string_D442.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 61-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k149, env)}),
      VGetArg(upenv, 58-1, 0),
      _V10sys_Ddup__stdout);
}
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k147(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k147" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k147, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k147, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.147 0 0) ((bruijn ##k.91 58 0) (##string ##string.441)) ((bruijn eqv? 60 18) (close _V0vanity_V0compiler_V0variables_V20_k148) (bruijn ##x.3 57 0) '##sys.dup-stdin))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 58-1, 0), runtime,
      VEncodePointer(&_V10string_D441.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 60-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k148, env)}),
      VGetArg(upenv, 57-1, 0),
      _V10sys_Ddup__stdin);
}
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k146(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k146" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k146, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k146, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.146 0 0) ((bruijn ##k.91 57 0) (##string ##string.440)) ((bruijn eqv? 59 18) (close _V0vanity_V0compiler_V0variables_V20_k147) (bruijn ##x.3 56 0) '##sys.stderr->port))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 57-1, 0), runtime,
      VEncodePointer(&_V10string_D440.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 59-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k147, env)}),
      VGetArg(upenv, 56-1, 0),
      _V10sys_Dstderr___Gport);
}
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k145(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k145" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k145, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k145, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.145 0 0) ((bruijn ##k.91 56 0) (##string ##string.439)) ((bruijn eqv? 58 18) (close _V0vanity_V0compiler_V0variables_V20_k146) (bruijn ##x.3 55 0) '##sys.stdout->port))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 56-1, 0), runtime,
      VEncodePointer(&_V10string_D439.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 58-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k146, env)}),
      VGetArg(upenv, 55-1, 0),
      _V10sys_Dstdout___Gport);
}
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k144(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k144" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k144, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k144, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.144 0 0) ((bruijn ##k.91 55 0) (##string ##string.438)) ((bruijn eqv? 57 18) (close _V0vanity_V0compiler_V0variables_V20_k145) (bruijn ##x.3 54 0) '##sys.stdin->port))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 55-1, 0), runtime,
      VEncodePointer(&_V10string_D438.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 57-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k145, env)}),
      VGetArg(upenv, 54-1, 0),
      _V10sys_Dstdin___Gport);
}
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k143(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k143" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k143, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k143, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.143 0 0) ((bruijn ##k.91 54 0) (##string ##string.437)) ((bruijn eqv? 56 18) (close _V0vanity_V0compiler_V0variables_V20_k144) (bruijn ##x.3 53 0) '##sys.char-integer))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 54-1, 0), runtime,
      VEncodePointer(&_V10string_D437.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 56-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k144, env)}),
      VGetArg(upenv, 53-1, 0),
      _V10sys_Dchar__integer);
}
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k142(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k142" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k142, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k142, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.142 0 0) ((bruijn ##k.91 53 0) (##string ##string.436)) ((bruijn eqv? 55 18) (close _V0vanity_V0compiler_V0variables_V20_k143) (bruijn ##x.3 52 0) '##sys.symbol->string))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 53-1, 0), runtime,
      VEncodePointer(&_V10string_D436.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 55-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k143, env)}),
      VGetArg(upenv, 52-1, 0),
      _V10sys_Dsymbol___Gstring);
}
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k141(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k141" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k141, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k141, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.141 0 0) ((bruijn ##k.91 52 0) (##string ##string.435)) ((bruijn eqv? 54 18) (close _V0vanity_V0compiler_V0variables_V20_k142) (bruijn ##x.3 51 0) '##sys.string->number))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 52-1, 0), runtime,
      VEncodePointer(&_V10string_D435.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 54-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k142, env)}),
      VGetArg(upenv, 51-1, 0),
      _V10sys_Dstring___Gnumber);
}
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k140(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k140" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k140, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k140, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.140 0 0) ((bruijn ##k.91 51 0) (##string ##string.434)) ((bruijn eqv? 53 18) (close _V0vanity_V0compiler_V0variables_V20_k141) (bruijn ##x.3 50 0) '##sys.string->symbol))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 51-1, 0), runtime,
      VEncodePointer(&_V10string_D434.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 53-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k141, env)}),
      VGetArg(upenv, 50-1, 0),
      _V10sys_Dstring___Gsymbol);
}
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k139(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k139" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k139, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k139, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.139 0 0) ((bruijn ##k.91 50 0) (##string ##string.433)) ((bruijn eqv? 52 18) (close _V0vanity_V0compiler_V0variables_V20_k140) (bruijn ##x.3 49 0) '##sys.string-length))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 50-1, 0), runtime,
      VEncodePointer(&_V10string_D433.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 52-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k140, env)}),
      VGetArg(upenv, 49-1, 0),
      _V10sys_Dstring__length);
}
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k138(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k138" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k138, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k138, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.138 0 0) ((bruijn ##k.91 49 0) (##string ##string.432)) ((bruijn eqv? 51 18) (close _V0vanity_V0compiler_V0variables_V20_k139) (bruijn ##x.3 48 0) '##sys.string-set!))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 49-1, 0), runtime,
      VEncodePointer(&_V10string_D432.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 51-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k139, env)}),
      VGetArg(upenv, 48-1, 0),
      _V10sys_Dstring__set_B);
}
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k137(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k137" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k137, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k137, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.137 0 0) ((bruijn ##k.91 48 0) (##string ##string.431)) ((bruijn eqv? 50 18) (close _V0vanity_V0compiler_V0variables_V20_k138) (bruijn ##x.3 47 0) '##sys.string-ref))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 48-1, 0), runtime,
      VEncodePointer(&_V10string_D431.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 50-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k138, env)}),
      VGetArg(upenv, 47-1, 0),
      _V10sys_Dstring__ref);
}
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k136(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k136" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k136, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k136, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.136 0 0) ((bruijn ##k.91 47 0) (##string ##string.430)) ((bruijn eqv? 49 18) (close _V0vanity_V0compiler_V0variables_V20_k137) (bruijn ##x.3 46 0) '##sys.string-copy!))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 47-1, 0), runtime,
      VEncodePointer(&_V10string_D430.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 49-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k137, env)}),
      VGetArg(upenv, 46-1, 0),
      _V10sys_Dstring__copy_B);
}
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k135(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k135" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k135, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k135, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.135 0 0) ((bruijn ##k.91 46 0) (##string ##string.429)) ((bruijn eqv? 48 18) (close _V0vanity_V0compiler_V0variables_V20_k136) (bruijn ##x.3 45 0) '##sys.substring))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 46-1, 0), runtime,
      VEncodePointer(&_V10string_D429.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 48-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k136, env)}),
      VGetArg(upenv, 45-1, 0),
      _V10sys_Dsubstring);
}
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k134(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k134" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k134, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k134, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.134 0 0) ((bruijn ##k.91 45 0) (##string ##string.428)) ((bruijn eqv? 47 18) (close _V0vanity_V0compiler_V0variables_V20_k135) (bruijn ##x.3 44 0) '##sys.make-string))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 45-1, 0), runtime,
      VEncodePointer(&_V10string_D428.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 47-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k135, env)}),
      VGetArg(upenv, 44-1, 0),
      _V10sys_Dmake__string);
}
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k133(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k133" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k133, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k133, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.133 0 0) ((bruijn ##k.91 44 0) (##string ##string.427)) ((bruijn eqv? 46 18) (close _V0vanity_V0compiler_V0variables_V20_k134) (bruijn ##x.3 43 0) '##sys.vector-length))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 44-1, 0), runtime,
      VEncodePointer(&_V10string_D427.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 46-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k134, env)}),
      VGetArg(upenv, 43-1, 0),
      _V10sys_Dvector__length);
}
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k132(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k132" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k132, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k132, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.132 0 0) ((bruijn ##k.91 43 0) (##string ##string.426)) ((bruijn eqv? 45 18) (close _V0vanity_V0compiler_V0variables_V20_k133) (bruijn ##x.3 42 0) '##sys.vector-set!))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 43-1, 0), runtime,
      VEncodePointer(&_V10string_D426.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 45-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k133, env)}),
      VGetArg(upenv, 42-1, 0),
      _V10sys_Dvector__set_B);
}
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k131(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k131" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k131, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k131, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.131 0 0) ((bruijn ##k.91 42 0) (##string ##string.425)) ((bruijn eqv? 44 18) (close _V0vanity_V0compiler_V0variables_V20_k132) (bruijn ##x.3 41 0) '##sys.vector-ref))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 42-1, 0), runtime,
      VEncodePointer(&_V10string_D425.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 44-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k132, env)}),
      VGetArg(upenv, 41-1, 0),
      _V10sys_Dvector__ref);
}
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k130(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k130" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k130, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k130, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.130 0 0) ((bruijn ##k.91 41 0) (##string ##string.424)) ((bruijn eqv? 43 18) (close _V0vanity_V0compiler_V0variables_V20_k131) (bruijn ##x.3 40 0) '##sys.list->vector))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 41-1, 0), runtime,
      VEncodePointer(&_V10string_D424.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 43-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k131, env)}),
      VGetArg(upenv, 40-1, 0),
      _V10sys_Dlist___Gvector);
}
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k129(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k129" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k129, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k129, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.129 0 0) ((bruijn ##k.91 40 0) (##string ##string.423)) ((bruijn eqv? 42 18) (close _V0vanity_V0compiler_V0variables_V20_k130) (bruijn ##x.3 39 0) '##sys.set-cdr!))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 40-1, 0), runtime,
      VEncodePointer(&_V10string_D423.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 42-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k130, env)}),
      VGetArg(upenv, 39-1, 0),
      _V10sys_Dset__cdr_B);
}
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k128(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k128" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k128, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k128, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.128 0 0) ((bruijn ##k.91 39 0) (##string ##string.422)) ((bruijn eqv? 41 18) (close _V0vanity_V0compiler_V0variables_V20_k129) (bruijn ##x.3 38 0) '##sys.set-car!))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 39-1, 0), runtime,
      VEncodePointer(&_V10string_D422.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 41-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k129, env)}),
      VGetArg(upenv, 38-1, 0),
      _V10sys_Dset__car_B);
}
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k127(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k127" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k127, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k127, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.127 0 0) ((bruijn ##k.91 38 0) (##string ##string.421)) ((bruijn eqv? 40 18) (close _V0vanity_V0compiler_V0variables_V20_k128) (bruijn ##x.3 37 0) '##sys.cdr))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 38-1, 0), runtime,
      VEncodePointer(&_V10string_D421.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 40-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k128, env)}),
      VGetArg(upenv, 37-1, 0),
      _V10sys_Dcdr);
}
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k126(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k126" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k126, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k126, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.126 0 0) ((bruijn ##k.91 37 0) (##string ##string.420)) ((bruijn eqv? 39 18) (close _V0vanity_V0compiler_V0variables_V20_k127) (bruijn ##x.3 36 0) '##sys.car))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 37-1, 0), runtime,
      VEncodePointer(&_V10string_D420.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 39-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k127, env)}),
      VGetArg(upenv, 36-1, 0),
      _V10sys_Dcar);
}
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k124(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k124" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k124, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k124, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0variables_V20_k125) (close _V0vanity_V0compiler_V0variables_V20_k126))
V_CALL_FUNC(_V0vanity_V0compiler_V0variables_V20_k125, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k126, env)}));
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k123(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k123" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k123, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k123, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.125 0 0) ((bruijn ##k.91 35 0) (##string ##string.419)) ((bruijn eqv? 37 18) (close _V0vanity_V0compiler_V0variables_V20_k124) (bruijn ##x.3 34 0) '##sys.cons))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 35-1, 0), runtime,
      VEncodePointer(&_V10string_D419.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 37-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k124, env)}),
      VGetArg(upenv, 34-1, 0),
      _V10sys_Dcons);
}
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k122(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k122" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k122, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k122, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.124 0 0) ((bruijn ##k.91 34 0) (##string ##string.418)) ((bruijn eqv? 36 18) (close _V0vanity_V0compiler_V0variables_V20_k123) (bruijn ##x.3 33 0) '##vcore.load-library))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 34-1, 0), runtime,
      VEncodePointer(&_V10string_D418.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 36-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k123, env)}),
      VGetArg(upenv, 33-1, 0),
      _V10vcore_Dload__library);
}
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k121(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k121" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k121, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k121, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.123 0 0) ((bruijn ##k.91 33 0) (##string ##string.417)) ((bruijn eqv? 35 18) (close _V0vanity_V0compiler_V0variables_V20_k122) (bruijn ##x.3 32 0) '##vcore.make-import))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 33-1, 0), runtime,
      VEncodePointer(&_V10string_D417.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 35-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k122, env)}),
      VGetArg(upenv, 32-1, 0),
      _V10vcore_Dmake__import);
}
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k120(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k120" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k120, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k120, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.122 0 0) ((bruijn ##k.91 32 0) (##string ##string.416)) ((bruijn eqv? 34 18) (close _V0vanity_V0compiler_V0variables_V20_k121) (bruijn ##x.3 31 0) '##vcore.lookup-library))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 32-1, 0), runtime,
      VEncodePointer(&_V10string_D416.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 34-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k121, env)}),
      VGetArg(upenv, 31-1, 0),
      _V10vcore_Dlookup__library);
}
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k119(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k119" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k119, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k119, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.121 0 0) ((bruijn ##k.91 31 0) (##string ##string.415)) ((bruijn eqv? 33 18) (close _V0vanity_V0compiler_V0variables_V20_k120) (bruijn ##x.3 30 0) '##vcore.multidefine))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 31-1, 0), runtime,
      VEncodePointer(&_V10string_D415.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 33-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k120, env)}),
      VGetArg(upenv, 30-1, 0),
      _V10vcore_Dmultidefine);
}
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k118(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k118" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k118, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k118, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.120 0 0) ((bruijn ##k.91 30 0) (##string ##string.414)) ((bruijn eqv? 32 18) (close _V0vanity_V0compiler_V0variables_V20_k119) (bruijn ##x.3 29 0) '##vcore.define))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 30-1, 0), runtime,
      VEncodePointer(&_V10string_D414.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 32-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k119, env)}),
      VGetArg(upenv, 29-1, 0),
      _V10vcore_Ddefine);
}
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k117(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k117" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k117, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k117, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.119 0 0) ((bruijn ##k.91 29 0) (##string ##string.413)) ((bruijn eqv? 31 18) (close _V0vanity_V0compiler_V0variables_V20_k118) (bruijn ##x.3 28 0) '##vcore.function))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 29-1, 0), runtime,
      VEncodePointer(&_V10string_D413.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 31-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k118, env)}),
      VGetArg(upenv, 28-1, 0),
      _V10vcore_Dfunction);
}
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k116(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k116" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k116, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k116, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.118 0 0) ((bruijn ##k.91 28 0) (##string ##string.412)) ((bruijn eqv? 30 18) (close _V0vanity_V0compiler_V0variables_V20_k117) (bruijn ##x.3 27 0) '##sys.import))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 28-1, 0), runtime,
      VEncodePointer(&_V10string_D412.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 30-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k117, env)}),
      VGetArg(upenv, 27-1, 0),
      _V10sys_Dimport);
}
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k115(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k115" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k115, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k115, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.117 0 0) ((bruijn ##k.91 27 0) (##string ##string.411)) ((bruijn eqv? 29 18) (close _V0vanity_V0compiler_V0variables_V20_k116) (bruijn ##x.3 26 0) '##sys.exit))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 27-1, 0), runtime,
      VEncodePointer(&_V10string_D411.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 29-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k116, env)}),
      VGetArg(upenv, 26-1, 0),
      _V10sys_Dexit);
}
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k114(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k114" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k114, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k114, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.116 0 0) ((bruijn ##k.91 26 0) (##string ##string.410)) ((bruijn eqv? 28 18) (close _V0vanity_V0compiler_V0variables_V20_k115) (bruijn ##x.3 25 0) '##sys.abort))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 26-1, 0), runtime,
      VEncodePointer(&_V10string_D410.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 28-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k115, env)}),
      VGetArg(upenv, 25-1, 0),
      _V10sys_Dabort);
}
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k113(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k113" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k113, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k113, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.115 0 0) ((bruijn ##k.91 25 0) (##string ##string.409)) ((bruijn eqv? 27 18) (close _V0vanity_V0compiler_V0variables_V20_k114) (bruijn ##x.3 24 0) '##sys.apply))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 25-1, 0), runtime,
      VEncodePointer(&_V10string_D409.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 27-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k114, env)}),
      VGetArg(upenv, 24-1, 0),
      _V10sys_Dapply);
}
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k112(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k112" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k112, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k112, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.114 0 0) ((bruijn ##k.91 24 0) (##string ##string.408)) ((bruijn eqv? 26 18) (close _V0vanity_V0compiler_V0variables_V20_k113) (bruijn ##x.3 23 0) '##sys.call-with-values))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 24-1, 0), runtime,
      VEncodePointer(&_V10string_D408.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 26-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k113, env)}),
      VGetArg(upenv, 23-1, 0),
      _V10sys_Dcall__with__values);
}
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k111(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k111" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k111, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k111, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.113 0 0) ((bruijn ##k.91 23 0) (##string ##string.407)) ((bruijn eqv? 25 18) (close _V0vanity_V0compiler_V0variables_V20_k112) (bruijn ##x.3 22 0) '##sys.call/cc))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 23-1, 0), runtime,
      VEncodePointer(&_V10string_D407.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 25-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k112, env)}),
      VGetArg(upenv, 22-1, 0),
      _V10sys_Dcall_Wcc);
}
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k110(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k110" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k110, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k110, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.112 0 0) ((bruijn ##k.91 22 0) (##string ##string.406)) ((bruijn eqv? 24 18) (close _V0vanity_V0compiler_V0variables_V20_k111) (bruijn ##x.3 21 0) '##sys.next))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 22-1, 0), runtime,
      VEncodePointer(&_V10string_D406.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 24-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k111, env)}),
      VGetArg(upenv, 21-1, 0),
      _V10sys_Dnext);
}
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k109(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k109" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k109, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k109, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.111 0 0) ((bruijn ##k.91 21 0) (##string ##string.405)) ((bruijn eqv? 23 18) (close _V0vanity_V0compiler_V0variables_V20_k110) (bruijn ##x.3 20 0) '##sys.not))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 21-1, 0), runtime,
      VEncodePointer(&_V10string_D405.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 23-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k110, env)}),
      VGetArg(upenv, 20-1, 0),
      _V10sys_Dnot);
}
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k108(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k108" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k108, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k108, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.110 0 0) ((bruijn ##k.91 20 0) (##string ##string.404)) ((bruijn eqv? 22 18) (close _V0vanity_V0compiler_V0variables_V20_k109) (bruijn ##x.3 19 0) '##sys.blob=?))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 20-1, 0), runtime,
      VEncodePointer(&_V10string_D404.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 22-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k109, env)}),
      VGetArg(upenv, 19-1, 0),
      _V10sys_Dblob_E_Q);
}
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k107(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k107" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k107, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k107, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.109 0 0) ((bruijn ##k.91 19 0) (##string ##string.403)) ((bruijn eqv? 21 18) (close _V0vanity_V0compiler_V0variables_V20_k108) (bruijn ##x.3 18 0) '##sys.symbol=?))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 19-1, 0), runtime,
      VEncodePointer(&_V10string_D403.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 21-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k108, env)}),
      VGetArg(upenv, 18-1, 0),
      _V10sys_Dsymbol_E_Q);
}
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k106(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k106" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k106, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k106, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.108 0 0) ((bruijn ##k.91 18 0) (##string ##string.402)) ((bruijn eqv? 20 18) (close _V0vanity_V0compiler_V0variables_V20_k107) (bruijn ##x.3 17 0) '##sys.eq?))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 18-1, 0), runtime,
      VEncodePointer(&_V10string_D402.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 20-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k107, env)}),
      VGetArg(upenv, 17-1, 0),
      _V10sys_Deq_Q);
}
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k105(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k105" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k105, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k105, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.107 0 0) ((bruijn ##k.91 17 0) (##string ##string.401)) ((bruijn eqv? 19 18) (close _V0vanity_V0compiler_V0variables_V20_k106) (bruijn ##x.3 16 0) '##sys.char?))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 17-1, 0), runtime,
      VEncodePointer(&_V10string_D401.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 19-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k106, env)}),
      VGetArg(upenv, 16-1, 0),
      _V10sys_Dchar_Q);
}
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k104(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k104" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k104, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k104, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.106 0 0) ((bruijn ##k.91 16 0) (##string ##string.400)) ((bruijn eqv? 18 18) (close _V0vanity_V0compiler_V0variables_V20_k105) (bruijn ##x.3 15 0) '##sys.double?))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 16-1, 0), runtime,
      VEncodePointer(&_V10string_D400.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 18-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k105, env)}),
      VGetArg(upenv, 15-1, 0),
      _V10sys_Ddouble_Q);
}
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k103(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k103" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k103, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k103, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.105 0 0) ((bruijn ##k.91 15 0) (##string ##string.399)) ((bruijn eqv? 17 18) (close _V0vanity_V0compiler_V0variables_V20_k104) (bruijn ##x.3 14 0) '##sys.int?))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 15-1, 0), runtime,
      VEncodePointer(&_V10string_D399.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 17-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k104, env)}),
      VGetArg(upenv, 14-1, 0),
      _V10sys_Dint_Q);
}
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k102(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k102" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k102, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k102, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.104 0 0) ((bruijn ##k.91 14 0) (##string ##string.398)) ((bruijn eqv? 16 18) (close _V0vanity_V0compiler_V0variables_V20_k103) (bruijn ##x.3 13 0) '##sys.string?))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 14-1, 0), runtime,
      VEncodePointer(&_V10string_D398.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 16-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k103, env)}),
      VGetArg(upenv, 13-1, 0),
      _V10sys_Dstring_Q);
}
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k101(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k101" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k101, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k101, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.103 0 0) ((bruijn ##k.91 13 0) (##string ##string.397)) ((bruijn eqv? 15 18) (close _V0vanity_V0compiler_V0variables_V20_k102) (bruijn ##x.3 12 0) '##sys.symbol?))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 13-1, 0), runtime,
      VEncodePointer(&_V10string_D397.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 15-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k102, env)}),
      VGetArg(upenv, 12-1, 0),
      _V10sys_Dsymbol_Q);
}
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k100(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k100" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k100, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k100, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.102 0 0) ((bruijn ##k.91 12 0) (##string ##string.396)) ((bruijn eqv? 14 18) (close _V0vanity_V0compiler_V0variables_V20_k101) (bruijn ##x.3 11 0) '##sys.blob?))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 12-1, 0), runtime,
      VEncodePointer(&_V10string_D396.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 14-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k101, env)}),
      VGetArg(upenv, 11-1, 0),
      _V10sys_Dblob_Q);
}
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k99(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k99" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k99, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k99, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.101 0 0) ((bruijn ##k.91 11 0) (##string ##string.395)) ((bruijn eqv? 13 18) (close _V0vanity_V0compiler_V0variables_V20_k100) (bruijn ##x.3 10 0) '##sys.procedure?))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 11-1, 0), runtime,
      VEncodePointer(&_V10string_D395.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 13-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k100, env)}),
      VGetArg(upenv, 10-1, 0),
      _V10sys_Dprocedure_Q);
}
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k98(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k98" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k98, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k98, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.100 0 0) ((bruijn ##k.91 10 0) (##string ##string.394)) ((bruijn eqv? 12 18) (close _V0vanity_V0compiler_V0variables_V20_k99) (bruijn ##x.3 9 0) '##sys.vector?))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 10-1, 0), runtime,
      VEncodePointer(&_V10string_D394.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 12-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k99, env)}),
      VGetArg(upenv, 9-1, 0),
      _V10sys_Dvector_Q);
}
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k97(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k97" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k97, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k97, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.99 0 0) ((bruijn ##k.91 9 0) (##string ##string.393)) ((bruijn eqv? 11 18) (close _V0vanity_V0compiler_V0variables_V20_k98) (bruijn ##x.3 8 0) '##sys.pair?))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 9-1, 0), runtime,
      VEncodePointer(&_V10string_D393.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 11-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k98, env)}),
      VGetArg(upenv, 8-1, 0),
      _V10sys_Dpair_Q);
}
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k96(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k96" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k96, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k96, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.98 0 0) ((bruijn ##k.91 8 0) (##string ##string.392)) ((bruijn eqv? 10 18) (close _V0vanity_V0compiler_V0variables_V20_k97) (bruijn ##x.3 7 0) '##sys.null?))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 8-1, 0), runtime,
      VEncodePointer(&_V10string_D392.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 10-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k97, env)}),
      VGetArg(upenv, 7-1, 0),
      _V10sys_Dnull_Q);
}
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k95(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k95" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k95, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k95, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.97 0 0) ((bruijn ##k.91 7 0) (##string ##string.391)) ((bruijn eqv? 9 18) (close _V0vanity_V0compiler_V0variables_V20_k96) (bruijn ##x.3 6 0) '##sys.remainder))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 7-1, 0), runtime,
      VEncodePointer(&_V10string_D391.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 9-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k96, env)}),
      VGetArg(upenv, 6-1, 0),
      _V10sys_Dremainder);
}
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k94(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k94" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k94, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k94, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.96 0 0) ((bruijn ##k.91 6 0) (##string ##string.390)) ((bruijn eqv? 8 18) (close _V0vanity_V0compiler_V0variables_V20_k95) (bruijn ##x.3 5 0) '##sys.quotient))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 6-1, 0), runtime,
      VEncodePointer(&_V10string_D390.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 8-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k95, env)}),
      VGetArg(upenv, 5-1, 0),
      _V10sys_Dquotient);
}
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k93(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k93" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k93, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k93, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.95 0 0) ((bruijn ##k.91 5 0) (##string ##string.389)) ((bruijn eqv? 7 18) (close _V0vanity_V0compiler_V0variables_V20_k94) (bruijn ##x.3 4 0) '##sys.cmp))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      VEncodePointer(&_V10string_D389.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 7-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k94, env)}),
      upenv->up->up->up->vars[0],
      _V10sys_Dcmp);
}
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k92(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k92" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k92, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k92, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.94 0 0) ((bruijn ##k.91 4 0) (##string ##string.388)) ((bruijn eqv? 6 18) (close _V0vanity_V0compiler_V0variables_V20_k93) (bruijn ##x.3 3 0) '##sys./))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodePointer(&_V10string_D388.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 6-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k93, env)}),
      upenv->up->up->vars[0],
      _V10sys_D_W);
}
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k91(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k91" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k91, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k91, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.93 0 0) ((bruijn ##k.91 3 0) (##string ##string.387)) ((bruijn eqv? 5 18) (close _V0vanity_V0compiler_V0variables_V20_k92) (bruijn ##x.3 2 0) '##sys.*))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->up->up->vars[0], runtime,
      VEncodePointer(&_V10string_D387.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 5-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k92, env)}),
      upenv->up->vars[0],
      _V10sys_D_S);
}
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k90(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k90" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k90, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k90, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.92 0 0) ((bruijn ##k.91 2 0) (##string ##string.386)) ((bruijn eqv? 4 18) (close _V0vanity_V0compiler_V0variables_V20_k91) (bruijn ##x.3 1 0) '##sys.-))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->up->vars[0], runtime,
      VEncodePointer(&_V10string_D386.sym, VPOINTER_OTHER));
} else {
V_CALL(upenv->up->up->up->vars[18], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k91, env)}),
      upenv->vars[0],
      _V10sys_D__);
}
 }
}
static void _V0vanity_V0compiler_V0variables_V20_lambda10(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_lambda10" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_lambda10, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn eqv? 3 18) (close _V0vanity_V0compiler_V0variables_V20_k90) (bruijn ##x.3 0 0) '##sys.+)
V_CALL(upenv->up->up->vars[18], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k90, env)}),
      _var0,
      _V10sys_D_P);
 }
}
static void _V0vanity_V0compiler_V0variables_V20_lambda9(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_lambda9" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_lambda9, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_lambda9, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0vanity_V0compiler_V0variables_V20_lambda10) (bruijn sym 0 1))
V_CALL_FUNC(_V0vanity_V0compiler_V0variables_V20_lambda10, env, runtime,
      _var1);
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k204(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k204" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k204, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k204, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.267 1 0) ((bruijn ##k.268 0 0) (bruijn ##p.267 1 0)) ((bruijn eqv? 40 18) (bruijn ##k.268 0 0) (bruijn ##x.4 37 0) '##sys.qcons))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(_var0, runtime,
      upenv->vars[0]);
} else {
V_CALL(VGetArg(upenv, 40-1, 18), runtime,
      _var0,
      VGetArg(upenv, 37-1, 0),
      _V10sys_Dqcons);
}
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k265(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k265" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k265, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k265, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.266 0 0) ((bruijn ##k.170 98 0) (##string ##string.554)) ((bruijn ##k.170 98 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 98-1, 0), runtime,
      VEncodePointer(&_V10string_D554.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 98-1, 0), runtime,
      VEncodeBool(false));
}
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k264(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k264" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k264, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k264, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.265 0 0) ((bruijn ##k.170 97 0) (##string ##string.553)) ((bruijn eqv? 99 18) (close _V0vanity_V0compiler_V0variables_V20_k265) (bruijn ##x.4 96 0) '##vcore.await))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 97-1, 0), runtime,
      VEncodePointer(&_V10string_D553.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 99-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k265, env)}),
      VGetArg(upenv, 96-1, 0),
      _V10vcore_Dawait);
}
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k263(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k263" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k263, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k263, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.264 0 0) ((bruijn ##k.170 96 0) (##string ##string.552)) ((bruijn eqv? 98 18) (close _V0vanity_V0compiler_V0variables_V20_k264) (bruijn ##x.4 95 0) '##vcore.async))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 96-1, 0), runtime,
      VEncodePointer(&_V10string_D552.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 98-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k264, env)}),
      VGetArg(upenv, 95-1, 0),
      _V10vcore_Dasync);
}
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k262(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k262" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k262, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k262, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.263 0 0) ((bruijn ##k.170 95 0) (##string ##string.551)) ((bruijn eqv? 97 18) (close _V0vanity_V0compiler_V0variables_V20_k263) (bruijn ##x.4 94 0) '##vcore.fiber-fork-list))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 95-1, 0), runtime,
      VEncodePointer(&_V10string_D551.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 97-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k263, env)}),
      VGetArg(upenv, 94-1, 0),
      _V10vcore_Dfiber__fork__list);
}
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k261(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k261" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k261, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k261, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.262 0 0) ((bruijn ##k.170 94 0) (##string ##string.550)) ((bruijn eqv? 96 18) (close _V0vanity_V0compiler_V0variables_V20_k262) (bruijn ##x.4 93 0) '##vcore.random-advance!))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 94-1, 0), runtime,
      VEncodePointer(&_V10string_D550.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 96-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k262, env)}),
      VGetArg(upenv, 93-1, 0),
      _V10vcore_Drandom__advance_B);
}
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k260(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k260" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k260, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k260, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.261 0 0) ((bruijn ##k.170 93 0) (##string ##string.549)) ((bruijn eqv? 95 18) (close _V0vanity_V0compiler_V0variables_V20_k261) (bruijn ##x.4 92 0) '##vcore.random-sample-float!))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 93-1, 0), runtime,
      VEncodePointer(&_V10string_D549.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 95-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k261, env)}),
      VGetArg(upenv, 92-1, 0),
      _V10vcore_Drandom__sample__float_B);
}
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k259(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k259" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k259, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k259, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.260 0 0) ((bruijn ##k.170 92 0) (##string ##string.548)) ((bruijn eqv? 94 18) (close _V0vanity_V0compiler_V0variables_V20_k260) (bruijn ##x.4 91 0) '##vcore.random-sample-bounded!))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 92-1, 0), runtime,
      VEncodePointer(&_V10string_D548.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 94-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k260, env)}),
      VGetArg(upenv, 91-1, 0),
      _V10vcore_Drandom__sample__bounded_B);
}
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k258(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k258" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k258, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k258, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.259 0 0) ((bruijn ##k.170 91 0) (##string ##string.547)) ((bruijn eqv? 93 18) (close _V0vanity_V0compiler_V0variables_V20_k259) (bruijn ##x.4 90 0) '##vcore.random-sample!))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 91-1, 0), runtime,
      VEncodePointer(&_V10string_D547.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 93-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k259, env)}),
      VGetArg(upenv, 90-1, 0),
      _V10vcore_Drandom__sample_B);
}
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k257(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k257" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k257, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k257, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.258 0 0) ((bruijn ##k.170 90 0) (##string ##string.546)) ((bruijn eqv? 92 18) (close _V0vanity_V0compiler_V0variables_V20_k258) (bruijn ##x.4 89 0) '##vcore.random-copy))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 90-1, 0), runtime,
      VEncodePointer(&_V10string_D546.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 92-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k258, env)}),
      VGetArg(upenv, 89-1, 0),
      _V10vcore_Drandom__copy);
}
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k256(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k256" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k256, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k256, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.257 0 0) ((bruijn ##k.170 89 0) (##string ##string.545)) ((bruijn eqv? 91 18) (close _V0vanity_V0compiler_V0variables_V20_k257) (bruijn ##x.4 88 0) '##vcore.make-random))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 89-1, 0), runtime,
      VEncodePointer(&_V10string_D545.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 91-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k257, env)}),
      VGetArg(upenv, 88-1, 0),
      _V10vcore_Dmake__random);
}
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k255(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k255" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k255, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k255, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.256 0 0) ((bruijn ##k.170 88 0) (##string ##string.544)) ((bruijn eqv? 90 18) (close _V0vanity_V0compiler_V0variables_V20_k256) (bruijn ##x.4 87 0) '##sys.command-line))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 88-1, 0), runtime,
      VEncodePointer(&_V10string_D544.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 90-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k256, env)}),
      VGetArg(upenv, 87-1, 0),
      _V10sys_Dcommand__line);
}
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k254(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k254" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k254, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k254, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.255 0 0) ((bruijn ##k.170 87 0) (##string ##string.543)) ((bruijn eqv? 89 18) (close _V0vanity_V0compiler_V0variables_V20_k255) (bruijn ##x.4 86 0) '##sys.make-temporary-file))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 87-1, 0), runtime,
      VEncodePointer(&_V10string_D543.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 89-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k255, env)}),
      VGetArg(upenv, 86-1, 0),
      _V10sys_Dmake__temporary__file);
}
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k253(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k253" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k253, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k253, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.254 0 0) ((bruijn ##k.170 86 0) (##string ##string.542)) ((bruijn eqv? 88 18) (close _V0vanity_V0compiler_V0variables_V20_k254) (bruijn ##x.4 85 0) '##sys.open-output-process))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 86-1, 0), runtime,
      VEncodePointer(&_V10string_D542.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 88-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k254, env)}),
      VGetArg(upenv, 85-1, 0),
      _V10sys_Dopen__output__process);
}
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k252(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k252" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k252, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k252, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.253 0 0) ((bruijn ##k.170 85 0) (##string ##string.541)) ((bruijn eqv? 87 18) (close _V0vanity_V0compiler_V0variables_V20_k253) (bruijn ##x.4 84 0) '##sys.open-input-process))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 85-1, 0), runtime,
      VEncodePointer(&_V10string_D541.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 87-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k253, env)}),
      VGetArg(upenv, 84-1, 0),
      _V10sys_Dopen__input__process);
}
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k251(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k251" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k251, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k251, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.252 0 0) ((bruijn ##k.170 84 0) (##string ##string.540)) ((bruijn eqv? 86 18) (close _V0vanity_V0compiler_V0variables_V20_k252) (bruijn ##x.4 83 0) '##sys.system))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 84-1, 0), runtime,
      VEncodePointer(&_V10string_D540.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 86-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k252, env)}),
      VGetArg(upenv, 83-1, 0),
      _V10sys_Dsystem);
}
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k250(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k250" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k250, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k250, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.251 0 0) ((bruijn ##k.170 83 0) (##string ##string.539)) ((bruijn eqv? 85 18) (close _V0vanity_V0compiler_V0variables_V20_k251) (bruijn ##x.4 82 0) '##sys.garbage-collect))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 83-1, 0), runtime,
      VEncodePointer(&_V10string_D539.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 85-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k251, env)}),
      VGetArg(upenv, 82-1, 0),
      _V10sys_Dgarbage__collect);
}
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k249(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k249" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k249, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k249, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.250 0 0) ((bruijn ##k.170 82 0) (##string ##string.538)) ((bruijn eqv? 84 18) (close _V0vanity_V0compiler_V0variables_V20_k250) (bruijn ##x.4 81 0) '##sys.finalize!))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 82-1, 0), runtime,
      VEncodePointer(&_V10string_D538.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 84-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k250, env)}),
      VGetArg(upenv, 81-1, 0),
      _V10sys_Dfinalize_B);
}
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k248(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k248" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k248, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k248, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.249 0 0) ((bruijn ##k.170 81 0) (##string ##string.537)) ((bruijn eqv? 83 18) (close _V0vanity_V0compiler_V0variables_V20_k249) (bruijn ##x.4 80 0) '##sys.has-finalizer?))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 81-1, 0), runtime,
      VEncodePointer(&_V10string_D537.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 83-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k249, env)}),
      VGetArg(upenv, 80-1, 0),
      _V10sys_Dhas__finalizer_Q);
}
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k247(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k247" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k247, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k247, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.248 0 0) ((bruijn ##k.170 80 0) (##string ##string.536)) ((bruijn eqv? 82 18) (close _V0vanity_V0compiler_V0variables_V20_k248) (bruijn ##x.4 79 0) '##sys.set-finalizer!))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 80-1, 0), runtime,
      VEncodePointer(&_V10string_D536.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 82-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k248, env)}),
      VGetArg(upenv, 79-1, 0),
      _V10sys_Dset__finalizer_B);
}
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k246(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k246" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k246, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k246, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.247 0 0) ((bruijn ##k.170 79 0) (##string ##string.535)) ((bruijn eqv? 81 18) (close _V0vanity_V0compiler_V0variables_V20_k247) (bruijn ##x.4 78 0) '##sys.newline))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 79-1, 0), runtime,
      VEncodePointer(&_V10string_D535.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 81-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k247, env)}),
      VGetArg(upenv, 78-1, 0),
      _V10sys_Dnewline);
}
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k245(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k245" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k245, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k245, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.246 0 0) ((bruijn ##k.170 78 0) (##string ##string.534)) ((bruijn eqv? 80 18) (close _V0vanity_V0compiler_V0variables_V20_k246) (bruijn ##x.4 77 0) '##sys.write))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 78-1, 0), runtime,
      VEncodePointer(&_V10string_D534.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 80-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k246, env)}),
      VGetArg(upenv, 77-1, 0),
      _V10sys_Dwrite);
}
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k244(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k244" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k244, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k244, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.245 0 0) ((bruijn ##k.170 77 0) (##string ##string.533)) ((bruijn eqv? 79 18) (close _V0vanity_V0compiler_V0variables_V20_k245) (bruijn ##x.4 76 0) '##sys.display-word))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 77-1, 0), runtime,
      VEncodePointer(&_V10string_D533.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 79-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k245, env)}),
      VGetArg(upenv, 76-1, 0),
      _V10sys_Ddisplay__word);
}
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k243(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k243" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k243, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k243, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.244 0 0) ((bruijn ##k.170 76 0) (##string ##string.532)) ((bruijn eqv? 78 18) (close _V0vanity_V0compiler_V0variables_V20_k244) (bruijn ##x.4 75 0) '##sys.read))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 76-1, 0), runtime,
      VEncodePointer(&_V10string_D532.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 78-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k244, env)}),
      VGetArg(upenv, 75-1, 0),
      _V10sys_Dread);
}
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k242(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k242" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k242, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k242, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.243 0 0) ((bruijn ##k.170 75 0) (##string ##string.531)) ((bruijn eqv? 77 18) (close _V0vanity_V0compiler_V0variables_V20_k243) (bruijn ##x.4 74 0) '##sys.read-line))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 75-1, 0), runtime,
      VEncodePointer(&_V10string_D531.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 77-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k243, env)}),
      VGetArg(upenv, 74-1, 0),
      _V10sys_Dread__line);
}
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k241(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k241" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k241, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k241, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.242 0 0) ((bruijn ##k.170 74 0) (##string ##string.530)) ((bruijn eqv? 76 18) (close _V0vanity_V0compiler_V0variables_V20_k242) (bruijn ##x.4 73 0) '##sys.read-char))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 74-1, 0), runtime,
      VEncodePointer(&_V10string_D530.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 76-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k242, env)}),
      VGetArg(upenv, 73-1, 0),
      _V10sys_Dread__char);
}
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k240(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k240" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k240, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k240, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.241 0 0) ((bruijn ##k.170 73 0) (##string ##string.529)) ((bruijn eqv? 75 18) (close _V0vanity_V0compiler_V0variables_V20_k241) (bruijn ##x.4 72 0) '##sys.eof-object?))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 73-1, 0), runtime,
      VEncodePointer(&_V10string_D529.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 75-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k241, env)}),
      VGetArg(upenv, 72-1, 0),
      _V10sys_Deof__object_Q);
}
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k239(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k239" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k239, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k239, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.240 0 0) ((bruijn ##k.170 72 0) (##string ##string.528)) ((bruijn eqv? 74 18) (close _V0vanity_V0compiler_V0variables_V20_k240) (bruijn ##x.4 71 0) '##sys.get-output-string))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 72-1, 0), runtime,
      VEncodePointer(&_V10string_D528.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 74-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k240, env)}),
      VGetArg(upenv, 71-1, 0),
      _V10sys_Dget__output__string);
}
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k238(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k238" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k238, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k238, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.239 0 0) ((bruijn ##k.170 71 0) (##string ##string.527)) ((bruijn eqv? 73 18) (close _V0vanity_V0compiler_V0variables_V20_k239) (bruijn ##x.4 70 0) '##sys.open-output-string))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 71-1, 0), runtime,
      VEncodePointer(&_V10string_D527.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 73-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k239, env)}),
      VGetArg(upenv, 70-1, 0),
      _V10sys_Dopen__output__string);
}
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k237(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k237" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k237, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k237, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.238 0 0) ((bruijn ##k.170 70 0) (##string ##string.526)) ((bruijn eqv? 72 18) (close _V0vanity_V0compiler_V0variables_V20_k238) (bruijn ##x.4 69 0) '##sys.close-stream))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 70-1, 0), runtime,
      VEncodePointer(&_V10string_D526.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 72-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k238, env)}),
      VGetArg(upenv, 69-1, 0),
      _V10sys_Dclose__stream);
}
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k236(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k236" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k236, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k236, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.237 0 0) ((bruijn ##k.170 69 0) (##string ##string.525)) ((bruijn eqv? 71 18) (close _V0vanity_V0compiler_V0variables_V20_k237) (bruijn ##x.4 68 0) '##sys.open-output-stream))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 69-1, 0), runtime,
      VEncodePointer(&_V10string_D525.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 71-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k237, env)}),
      VGetArg(upenv, 68-1, 0),
      _V10sys_Dopen__output__stream);
}
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k235(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k235" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k235, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k235, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.236 0 0) ((bruijn ##k.170 68 0) (##string ##string.524)) ((bruijn eqv? 70 18) (close _V0vanity_V0compiler_V0variables_V20_k236) (bruijn ##x.4 67 0) '##sys.open-input-stream))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 68-1, 0), runtime,
      VEncodePointer(&_V10string_D524.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 70-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k236, env)}),
      VGetArg(upenv, 67-1, 0),
      _V10sys_Dopen__input__stream);
}
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k234(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k234" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k234, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k234, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.235 0 0) ((bruijn ##k.170 67 0) (##string ##string.523)) ((bruijn eqv? 69 18) (close _V0vanity_V0compiler_V0variables_V20_k235) (bruijn ##x.4 66 0) '##sys.dup-stderr))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 67-1, 0), runtime,
      VEncodePointer(&_V10string_D523.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 69-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k235, env)}),
      VGetArg(upenv, 66-1, 0),
      _V10sys_Ddup__stderr);
}
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k233(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k233" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k233, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k233, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.234 0 0) ((bruijn ##k.170 66 0) (##string ##string.522)) ((bruijn eqv? 68 18) (close _V0vanity_V0compiler_V0variables_V20_k234) (bruijn ##x.4 65 0) '##sys.dup-stdout))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 66-1, 0), runtime,
      VEncodePointer(&_V10string_D522.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 68-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k234, env)}),
      VGetArg(upenv, 65-1, 0),
      _V10sys_Ddup__stdout);
}
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k232(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k232" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k232, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k232, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.233 0 0) ((bruijn ##k.170 65 0) (##string ##string.441)) ((bruijn eqv? 67 18) (close _V0vanity_V0compiler_V0variables_V20_k233) (bruijn ##x.4 64 0) '##sys.dup-stdin))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 65-1, 0), runtime,
      VEncodePointer(&_V10string_D441.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 67-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k233, env)}),
      VGetArg(upenv, 64-1, 0),
      _V10sys_Ddup__stdin);
}
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k231(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k231" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k231, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k231, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.232 0 0) ((bruijn ##k.170 64 0) (##string ##string.440)) ((bruijn eqv? 66 18) (close _V0vanity_V0compiler_V0variables_V20_k232) (bruijn ##x.4 63 0) '##sys.stderr->port))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 64-1, 0), runtime,
      VEncodePointer(&_V10string_D440.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 66-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k232, env)}),
      VGetArg(upenv, 63-1, 0),
      _V10sys_Dstderr___Gport);
}
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k230(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k230" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k230, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k230, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.231 0 0) ((bruijn ##k.170 63 0) (##string ##string.439)) ((bruijn eqv? 65 18) (close _V0vanity_V0compiler_V0variables_V20_k231) (bruijn ##x.4 62 0) '##sys.stdout->port))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 63-1, 0), runtime,
      VEncodePointer(&_V10string_D439.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 65-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k231, env)}),
      VGetArg(upenv, 62-1, 0),
      _V10sys_Dstdout___Gport);
}
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k229(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k229" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k229, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k229, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.230 0 0) ((bruijn ##k.170 62 0) (##string ##string.521)) ((bruijn eqv? 64 18) (close _V0vanity_V0compiler_V0variables_V20_k230) (bruijn ##x.4 61 0) '##sys.stdin->port))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 62-1, 0), runtime,
      VEncodePointer(&_V10string_D521.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 64-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k230, env)}),
      VGetArg(upenv, 61-1, 0),
      _V10sys_Dstdin___Gport);
}
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k228(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k228" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k228, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k228, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.229 0 0) ((bruijn ##k.170 61 0) (##string ##string.520)) ((bruijn eqv? 63 18) (close _V0vanity_V0compiler_V0variables_V20_k229) (bruijn ##x.4 60 0) '##sys.char-integer))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 61-1, 0), runtime,
      VEncodePointer(&_V10string_D520.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 63-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k229, env)}),
      VGetArg(upenv, 60-1, 0),
      _V10sys_Dchar__integer);
}
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k227(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k227" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k227, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k227, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.228 0 0) ((bruijn ##k.170 60 0) (##string ##string.519)) ((bruijn eqv? 62 18) (close _V0vanity_V0compiler_V0variables_V20_k228) (bruijn ##x.4 59 0) '##sys.symbol->string))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 60-1, 0), runtime,
      VEncodePointer(&_V10string_D519.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 62-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k228, env)}),
      VGetArg(upenv, 59-1, 0),
      _V10sys_Dsymbol___Gstring);
}
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k226(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k226" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k226, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k226, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.227 0 0) ((bruijn ##k.170 59 0) (##string ##string.518)) ((bruijn eqv? 61 18) (close _V0vanity_V0compiler_V0variables_V20_k227) (bruijn ##x.4 58 0) '##sys.string->number))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 59-1, 0), runtime,
      VEncodePointer(&_V10string_D518.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 61-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k227, env)}),
      VGetArg(upenv, 58-1, 0),
      _V10sys_Dstring___Gnumber);
}
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k225(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k225" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k225, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k225, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.226 0 0) ((bruijn ##k.170 58 0) (##string ##string.517)) ((bruijn eqv? 60 18) (close _V0vanity_V0compiler_V0variables_V20_k226) (bruijn ##x.4 57 0) '##sys.string->symbol))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 58-1, 0), runtime,
      VEncodePointer(&_V10string_D517.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 60-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k226, env)}),
      VGetArg(upenv, 57-1, 0),
      _V10sys_Dstring___Gsymbol);
}
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k224(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k224" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k224, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k224, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.225 0 0) ((bruijn ##k.170 57 0) (##string ##string.516)) ((bruijn eqv? 59 18) (close _V0vanity_V0compiler_V0variables_V20_k225) (bruijn ##x.4 56 0) '##sys.string-length))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 57-1, 0), runtime,
      VEncodePointer(&_V10string_D516.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 59-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k225, env)}),
      VGetArg(upenv, 56-1, 0),
      _V10sys_Dstring__length);
}
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k223(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k223" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k223, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k223, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.224 0 0) ((bruijn ##k.170 56 0) (##string ##string.515)) ((bruijn eqv? 58 18) (close _V0vanity_V0compiler_V0variables_V20_k224) (bruijn ##x.4 55 0) '##sys.string-set!))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 56-1, 0), runtime,
      VEncodePointer(&_V10string_D515.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 58-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k224, env)}),
      VGetArg(upenv, 55-1, 0),
      _V10sys_Dstring__set_B);
}
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k222(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k222" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k222, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k222, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.223 0 0) ((bruijn ##k.170 55 0) (##string ##string.514)) ((bruijn eqv? 57 18) (close _V0vanity_V0compiler_V0variables_V20_k223) (bruijn ##x.4 54 0) '##sys.string-ref))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 55-1, 0), runtime,
      VEncodePointer(&_V10string_D514.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 57-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k223, env)}),
      VGetArg(upenv, 54-1, 0),
      _V10sys_Dstring__ref);
}
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k221(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k221" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k221, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k221, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.222 0 0) ((bruijn ##k.170 54 0) (##string ##string.513)) ((bruijn eqv? 56 18) (close _V0vanity_V0compiler_V0variables_V20_k222) (bruijn ##x.4 53 0) '##sys.string-copy!))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 54-1, 0), runtime,
      VEncodePointer(&_V10string_D513.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 56-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k222, env)}),
      VGetArg(upenv, 53-1, 0),
      _V10sys_Dstring__copy_B);
}
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k220(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k220" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k220, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k220, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.221 0 0) ((bruijn ##k.170 53 0) (##string ##string.512)) ((bruijn eqv? 55 18) (close _V0vanity_V0compiler_V0variables_V20_k221) (bruijn ##x.4 52 0) '##sys.substring))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 53-1, 0), runtime,
      VEncodePointer(&_V10string_D512.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 55-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k221, env)}),
      VGetArg(upenv, 52-1, 0),
      _V10sys_Dsubstring);
}
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k219(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k219" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k219, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k219, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.220 0 0) ((bruijn ##k.170 52 0) (##string ##string.511)) ((bruijn eqv? 54 18) (close _V0vanity_V0compiler_V0variables_V20_k220) (bruijn ##x.4 51 0) '##sys.make-string))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 52-1, 0), runtime,
      VEncodePointer(&_V10string_D511.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 54-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k220, env)}),
      VGetArg(upenv, 51-1, 0),
      _V10sys_Dmake__string);
}
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k218(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k218" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k218, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k218, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.219 0 0) ((bruijn ##k.170 51 0) (##string ##string.510)) ((bruijn eqv? 53 18) (close _V0vanity_V0compiler_V0variables_V20_k219) (bruijn ##x.4 50 0) '##vcore.hash-table-delete!))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 51-1, 0), runtime,
      VEncodePointer(&_V10string_D510.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 53-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k219, env)}),
      VGetArg(upenv, 50-1, 0),
      _V10vcore_Dhash__table__delete_B);
}
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k217(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k217" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k217, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k217, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.218 0 0) ((bruijn ##k.170 50 0) (##string ##string.509)) ((bruijn eqv? 52 18) (close _V0vanity_V0compiler_V0variables_V20_k218) (bruijn ##x.4 49 0) '##vcore.hash-table-set!))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 50-1, 0), runtime,
      VEncodePointer(&_V10string_D509.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 52-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k218, env)}),
      VGetArg(upenv, 49-1, 0),
      _V10vcore_Dhash__table__set_B);
}
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k216(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k216" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k216, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k216, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.217 0 0) ((bruijn ##k.170 49 0) (##string ##string.508)) ((bruijn eqv? 51 18) (close _V0vanity_V0compiler_V0variables_V20_k217) (bruijn ##x.4 48 0) '##vcore.hash-table-ref))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 49-1, 0), runtime,
      VEncodePointer(&_V10string_D508.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 51-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k217, env)}),
      VGetArg(upenv, 48-1, 0),
      _V10vcore_Dhash__table__ref);
}
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k215(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k215" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k215, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k215, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.216 0 0) ((bruijn ##k.170 48 0) (##string ##string.507)) ((bruijn eqv? 50 18) (close _V0vanity_V0compiler_V0variables_V20_k216) (bruijn ##x.4 47 0) '##vcore.hash-table-hash-function))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 48-1, 0), runtime,
      VEncodePointer(&_V10string_D507.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 50-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k216, env)}),
      VGetArg(upenv, 47-1, 0),
      _V10vcore_Dhash__table__hash__function);
}
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k214(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k214" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k214, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k214, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.215 0 0) ((bruijn ##k.170 47 0) (##string ##string.506)) ((bruijn eqv? 49 18) (close _V0vanity_V0compiler_V0variables_V20_k215) (bruijn ##x.4 46 0) '##vcore.hash-table-equivalence-function))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 47-1, 0), runtime,
      VEncodePointer(&_V10string_D506.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 49-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k215, env)}),
      VGetArg(upenv, 46-1, 0),
      _V10vcore_Dhash__table__equivalence__function);
}
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k213(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k213" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k213, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k213, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.214 0 0) ((bruijn ##k.170 46 0) (##string ##string.505)) ((bruijn eqv? 48 18) (close _V0vanity_V0compiler_V0variables_V20_k214) (bruijn ##x.4 45 0) '##vcore.make-hash-table))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 46-1, 0), runtime,
      VEncodePointer(&_V10string_D505.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 48-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k214, env)}),
      VGetArg(upenv, 45-1, 0),
      _V10vcore_Dmake__hash__table);
}
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k212(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k212" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k212, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k212, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.213 0 0) ((bruijn ##k.170 45 0) (##string ##string.504)) ((bruijn eqv? 47 18) (close _V0vanity_V0compiler_V0variables_V20_k213) (bruijn ##x.4 44 0) '##sys.vector-length))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 45-1, 0), runtime,
      VEncodePointer(&_V10string_D504.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 47-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k213, env)}),
      VGetArg(upenv, 44-1, 0),
      _V10sys_Dvector__length);
}
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k211(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k211" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k211, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k211, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.212 0 0) ((bruijn ##k.170 44 0) (##string ##string.503)) ((bruijn eqv? 46 18) (close _V0vanity_V0compiler_V0variables_V20_k212) (bruijn ##x.4 43 0) '##sys.vector-set!))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 44-1, 0), runtime,
      VEncodePointer(&_V10string_D503.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 46-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k212, env)}),
      VGetArg(upenv, 43-1, 0),
      _V10sys_Dvector__set_B);
}
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k210(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k210" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k210, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k210, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.211 0 0) ((bruijn ##k.170 43 0) (##string ##string.502)) ((bruijn eqv? 45 18) (close _V0vanity_V0compiler_V0variables_V20_k211) (bruijn ##x.4 42 0) '##sys.vector-ref))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 43-1, 0), runtime,
      VEncodePointer(&_V10string_D502.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 45-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k211, env)}),
      VGetArg(upenv, 42-1, 0),
      _V10sys_Dvector__ref);
}
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k209(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k209" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k209, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k209, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.210 0 0) ((bruijn ##k.170 42 0) (##string ##string.501)) ((bruijn eqv? 44 18) (close _V0vanity_V0compiler_V0variables_V20_k210) (bruijn ##x.4 41 0) '##sys.list->vector))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 42-1, 0), runtime,
      VEncodePointer(&_V10string_D501.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 44-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k210, env)}),
      VGetArg(upenv, 41-1, 0),
      _V10sys_Dlist___Gvector);
}
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k208(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k208" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k208, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k208, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.209 0 0) ((bruijn ##k.170 41 0) (##string ##string.500)) ((bruijn eqv? 43 18) (close _V0vanity_V0compiler_V0variables_V20_k209) (bruijn ##x.4 40 0) '##sys.set-cdr!))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 41-1, 0), runtime,
      VEncodePointer(&_V10string_D500.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 43-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k209, env)}),
      VGetArg(upenv, 40-1, 0),
      _V10sys_Dset__cdr_B);
}
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k207(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k207" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k207, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k207, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.208 0 0) ((bruijn ##k.170 40 0) (##string ##string.499)) ((bruijn eqv? 42 18) (close _V0vanity_V0compiler_V0variables_V20_k208) (bruijn ##x.4 39 0) '##sys.set-car!))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 40-1, 0), runtime,
      VEncodePointer(&_V10string_D499.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 42-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k208, env)}),
      VGetArg(upenv, 39-1, 0),
      _V10sys_Dset__car_B);
}
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k206(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k206" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k206, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k206, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.207 0 0) ((bruijn ##k.170 39 0) (##string ##string.498)) ((bruijn eqv? 41 18) (close _V0vanity_V0compiler_V0variables_V20_k207) (bruijn ##x.4 38 0) '##sys.cdr))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 39-1, 0), runtime,
      VEncodePointer(&_V10string_D498.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 41-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k207, env)}),
      VGetArg(upenv, 38-1, 0),
      _V10sys_Dcdr);
}
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k205(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k205" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k205, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k205, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.206 0 0) ((bruijn ##k.170 38 0) (##string ##string.497)) ((bruijn eqv? 40 18) (close _V0vanity_V0compiler_V0variables_V20_k206) (bruijn ##x.4 37 0) '##sys.car))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 38-1, 0), runtime,
      VEncodePointer(&_V10string_D497.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 40-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k206, env)}),
      VGetArg(upenv, 37-1, 0),
      _V10sys_Dcar);
}
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k203(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k203" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k203, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k203, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0variables_V20_k204) (close _V0vanity_V0compiler_V0variables_V20_k205))
V_CALL_FUNC(_V0vanity_V0compiler_V0variables_V20_k204, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k205, env)}));
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k202(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k202" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k202, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k202, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.205 0 0) ((bruijn ##k.170 36 0) (##string ##string.496)) ((bruijn eqv? 38 18) (close _V0vanity_V0compiler_V0variables_V20_k203) (bruijn ##x.4 35 0) '##sys.cons))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 36-1, 0), runtime,
      VEncodePointer(&_V10string_D496.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 38-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k203, env)}),
      VGetArg(upenv, 35-1, 0),
      _V10sys_Dcons);
}
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k201(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k201" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k201, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k201, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.204 0 0) ((bruijn ##k.170 35 0) (##string ##string.495)) ((bruijn eqv? 37 18) (close _V0vanity_V0compiler_V0variables_V20_k202) (bruijn ##x.4 34 0) '##vcore.load-library))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 35-1, 0), runtime,
      VEncodePointer(&_V10string_D495.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 37-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k202, env)}),
      VGetArg(upenv, 34-1, 0),
      _V10vcore_Dload__library);
}
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k200(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k200" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k200, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k200, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.203 0 0) ((bruijn ##k.170 34 0) (##string ##string.494)) ((bruijn eqv? 36 18) (close _V0vanity_V0compiler_V0variables_V20_k201) (bruijn ##x.4 33 0) '##vcore.make-import))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 34-1, 0), runtime,
      VEncodePointer(&_V10string_D494.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 36-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k201, env)}),
      VGetArg(upenv, 33-1, 0),
      _V10vcore_Dmake__import);
}
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k199(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k199" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k199, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k199, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.202 0 0) ((bruijn ##k.170 33 0) (##string ##string.493)) ((bruijn eqv? 35 18) (close _V0vanity_V0compiler_V0variables_V20_k200) (bruijn ##x.4 32 0) '##vcore.lookup-library))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 33-1, 0), runtime,
      VEncodePointer(&_V10string_D493.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 35-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k200, env)}),
      VGetArg(upenv, 32-1, 0),
      _V10vcore_Dlookup__library);
}
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k198(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k198" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k198, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k198, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.201 0 0) ((bruijn ##k.170 32 0) (##string ##string.492)) ((bruijn eqv? 34 18) (close _V0vanity_V0compiler_V0variables_V20_k199) (bruijn ##x.4 31 0) '##vcore.multidefine))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 32-1, 0), runtime,
      VEncodePointer(&_V10string_D492.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 34-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k199, env)}),
      VGetArg(upenv, 31-1, 0),
      _V10vcore_Dmultidefine);
}
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k197(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k197" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k197, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k197, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.200 0 0) ((bruijn ##k.170 31 0) (##string ##string.491)) ((bruijn eqv? 33 18) (close _V0vanity_V0compiler_V0variables_V20_k198) (bruijn ##x.4 30 0) '##vcore.define))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 31-1, 0), runtime,
      VEncodePointer(&_V10string_D491.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 33-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k198, env)}),
      VGetArg(upenv, 30-1, 0),
      _V10vcore_Ddefine);
}
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k196(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k196" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k196, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k196, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.199 0 0) ((bruijn ##k.170 30 0) (##string ##string.490)) ((bruijn eqv? 32 18) (close _V0vanity_V0compiler_V0variables_V20_k197) (bruijn ##x.4 29 0) '##vcore.function))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 30-1, 0), runtime,
      VEncodePointer(&_V10string_D490.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 32-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k197, env)}),
      VGetArg(upenv, 29-1, 0),
      _V10vcore_Dfunction);
}
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k195(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k195" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k195, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k195, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.198 0 0) ((bruijn ##k.170 29 0) (##string ##string.489)) ((bruijn eqv? 31 18) (close _V0vanity_V0compiler_V0variables_V20_k196) (bruijn ##x.4 28 0) '##sys.import))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 29-1, 0), runtime,
      VEncodePointer(&_V10string_D489.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 31-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k196, env)}),
      VGetArg(upenv, 28-1, 0),
      _V10sys_Dimport);
}
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k194(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k194" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k194, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k194, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.197 0 0) ((bruijn ##k.170 28 0) (##string ##string.488)) ((bruijn eqv? 30 18) (close _V0vanity_V0compiler_V0variables_V20_k195) (bruijn ##x.4 27 0) '##sys.exit))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 28-1, 0), runtime,
      VEncodePointer(&_V10string_D488.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 30-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k195, env)}),
      VGetArg(upenv, 27-1, 0),
      _V10sys_Dexit);
}
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k193(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k193" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k193, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k193, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.196 0 0) ((bruijn ##k.170 27 0) (##string ##string.487)) ((bruijn eqv? 29 18) (close _V0vanity_V0compiler_V0variables_V20_k194) (bruijn ##x.4 26 0) '##sys.abort))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 27-1, 0), runtime,
      VEncodePointer(&_V10string_D487.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 29-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k194, env)}),
      VGetArg(upenv, 26-1, 0),
      _V10sys_Dabort);
}
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k192(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k192" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k192, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k192, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.195 0 0) ((bruijn ##k.170 26 0) (##string ##string.486)) ((bruijn eqv? 28 18) (close _V0vanity_V0compiler_V0variables_V20_k193) (bruijn ##x.4 25 0) '##sys.apply))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 26-1, 0), runtime,
      VEncodePointer(&_V10string_D486.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 28-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k193, env)}),
      VGetArg(upenv, 25-1, 0),
      _V10sys_Dapply);
}
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k191(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k191" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k191, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k191, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.194 0 0) ((bruijn ##k.170 25 0) (##string ##string.485)) ((bruijn eqv? 27 18) (close _V0vanity_V0compiler_V0variables_V20_k192) (bruijn ##x.4 24 0) '##sys.call-with-values))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 25-1, 0), runtime,
      VEncodePointer(&_V10string_D485.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 27-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k192, env)}),
      VGetArg(upenv, 24-1, 0),
      _V10sys_Dcall__with__values);
}
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k190(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k190" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k190, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k190, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.193 0 0) ((bruijn ##k.170 24 0) (##string ##string.484)) ((bruijn eqv? 26 18) (close _V0vanity_V0compiler_V0variables_V20_k191) (bruijn ##x.4 23 0) '##sys.call/cc))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 24-1, 0), runtime,
      VEncodePointer(&_V10string_D484.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 26-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k191, env)}),
      VGetArg(upenv, 23-1, 0),
      _V10sys_Dcall_Wcc);
}
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k189(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k189" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k189, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k189, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.192 0 0) ((bruijn ##k.170 23 0) (##string ##string.483)) ((bruijn eqv? 25 18) (close _V0vanity_V0compiler_V0variables_V20_k190) (bruijn ##x.4 22 0) '##sys.next))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 23-1, 0), runtime,
      VEncodePointer(&_V10string_D483.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 25-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k190, env)}),
      VGetArg(upenv, 22-1, 0),
      _V10sys_Dnext);
}
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k188(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k188" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k188, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k188, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.191 0 0) ((bruijn ##k.170 22 0) (##string ##string.482)) ((bruijn eqv? 24 18) (close _V0vanity_V0compiler_V0variables_V20_k189) (bruijn ##x.4 21 0) '##sys.not))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 22-1, 0), runtime,
      VEncodePointer(&_V10string_D482.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 24-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k189, env)}),
      VGetArg(upenv, 21-1, 0),
      _V10sys_Dnot);
}
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k187(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k187" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k187, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k187, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.190 0 0) ((bruijn ##k.170 21 0) (##string ##string.481)) ((bruijn eqv? 23 18) (close _V0vanity_V0compiler_V0variables_V20_k188) (bruijn ##x.4 20 0) '##sys.eqv?))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 21-1, 0), runtime,
      VEncodePointer(&_V10string_D481.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 23-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k188, env)}),
      VGetArg(upenv, 20-1, 0),
      _V10sys_Deqv_Q);
}
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k186(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k186" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k186, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k186, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.189 0 0) ((bruijn ##k.170 20 0) (##string ##string.480)) ((bruijn eqv? 22 18) (close _V0vanity_V0compiler_V0variables_V20_k187) (bruijn ##x.4 19 0) '##sys.blob=?))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 20-1, 0), runtime,
      VEncodePointer(&_V10string_D480.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 22-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k187, env)}),
      VGetArg(upenv, 19-1, 0),
      _V10sys_Dblob_E_Q);
}
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k185(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k185" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k185, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k185, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.188 0 0) ((bruijn ##k.170 19 0) (##string ##string.479)) ((bruijn eqv? 21 18) (close _V0vanity_V0compiler_V0variables_V20_k186) (bruijn ##x.4 18 0) '##sys.symbol=?))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 19-1, 0), runtime,
      VEncodePointer(&_V10string_D479.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 21-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k186, env)}),
      VGetArg(upenv, 18-1, 0),
      _V10sys_Dsymbol_E_Q);
}
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k184(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k184" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k184, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k184, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.187 0 0) ((bruijn ##k.170 18 0) (##string ##string.478)) ((bruijn eqv? 20 18) (close _V0vanity_V0compiler_V0variables_V20_k185) (bruijn ##x.4 17 0) '##sys.eq?))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 18-1, 0), runtime,
      VEncodePointer(&_V10string_D478.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 20-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k185, env)}),
      VGetArg(upenv, 17-1, 0),
      _V10sys_Deq_Q);
}
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k183(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k183" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k183, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k183, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.186 0 0) ((bruijn ##k.170 17 0) (##string ##string.477)) ((bruijn eqv? 19 18) (close _V0vanity_V0compiler_V0variables_V20_k184) (bruijn ##x.4 16 0) '##sys.char?))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 17-1, 0), runtime,
      VEncodePointer(&_V10string_D477.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 19-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k184, env)}),
      VGetArg(upenv, 16-1, 0),
      _V10sys_Dchar_Q);
}
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k182(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k182" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k182, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k182, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.185 0 0) ((bruijn ##k.170 16 0) (##string ##string.476)) ((bruijn eqv? 18 18) (close _V0vanity_V0compiler_V0variables_V20_k183) (bruijn ##x.4 15 0) '##sys.double?))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 16-1, 0), runtime,
      VEncodePointer(&_V10string_D476.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 18-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k183, env)}),
      VGetArg(upenv, 15-1, 0),
      _V10sys_Ddouble_Q);
}
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k181(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k181" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k181, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k181, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.184 0 0) ((bruijn ##k.170 15 0) (##string ##string.475)) ((bruijn eqv? 17 18) (close _V0vanity_V0compiler_V0variables_V20_k182) (bruijn ##x.4 14 0) '##sys.int?))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 15-1, 0), runtime,
      VEncodePointer(&_V10string_D475.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 17-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k182, env)}),
      VGetArg(upenv, 14-1, 0),
      _V10sys_Dint_Q);
}
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k180(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k180" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k180, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k180, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.183 0 0) ((bruijn ##k.170 14 0) (##string ##string.474)) ((bruijn eqv? 16 18) (close _V0vanity_V0compiler_V0variables_V20_k181) (bruijn ##x.4 13 0) '##sys.string?))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 14-1, 0), runtime,
      VEncodePointer(&_V10string_D474.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 16-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k181, env)}),
      VGetArg(upenv, 13-1, 0),
      _V10sys_Dstring_Q);
}
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k179(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k179" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k179, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k179, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.182 0 0) ((bruijn ##k.170 13 0) (##string ##string.473)) ((bruijn eqv? 15 18) (close _V0vanity_V0compiler_V0variables_V20_k180) (bruijn ##x.4 12 0) '##sys.symbol?))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 13-1, 0), runtime,
      VEncodePointer(&_V10string_D473.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 15-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k180, env)}),
      VGetArg(upenv, 12-1, 0),
      _V10sys_Dsymbol_Q);
}
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k178(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k178" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k178, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k178, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.181 0 0) ((bruijn ##k.170 12 0) (##string ##string.472)) ((bruijn eqv? 14 18) (close _V0vanity_V0compiler_V0variables_V20_k179) (bruijn ##x.4 11 0) '##sys.blob?))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 12-1, 0), runtime,
      VEncodePointer(&_V10string_D472.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 14-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k179, env)}),
      VGetArg(upenv, 11-1, 0),
      _V10sys_Dblob_Q);
}
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k177(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k177" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k177, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k177, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.180 0 0) ((bruijn ##k.170 11 0) (##string ##string.471)) ((bruijn eqv? 13 18) (close _V0vanity_V0compiler_V0variables_V20_k178) (bruijn ##x.4 10 0) '##sys.procedure?))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 11-1, 0), runtime,
      VEncodePointer(&_V10string_D471.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 13-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k178, env)}),
      VGetArg(upenv, 10-1, 0),
      _V10sys_Dprocedure_Q);
}
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k176(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k176" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k176, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k176, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.179 0 0) ((bruijn ##k.170 10 0) (##string ##string.470)) ((bruijn eqv? 12 18) (close _V0vanity_V0compiler_V0variables_V20_k177) (bruijn ##x.4 9 0) '##sys.vector?))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 10-1, 0), runtime,
      VEncodePointer(&_V10string_D470.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 12-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k177, env)}),
      VGetArg(upenv, 9-1, 0),
      _V10sys_Dvector_Q);
}
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k175(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k175" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k175, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k175, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.178 0 0) ((bruijn ##k.170 9 0) (##string ##string.469)) ((bruijn eqv? 11 18) (close _V0vanity_V0compiler_V0variables_V20_k176) (bruijn ##x.4 8 0) '##sys.pair?))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 9-1, 0), runtime,
      VEncodePointer(&_V10string_D469.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 11-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k176, env)}),
      VGetArg(upenv, 8-1, 0),
      _V10sys_Dpair_Q);
}
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k174(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k174" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k174, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k174, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.177 0 0) ((bruijn ##k.170 8 0) (##string ##string.468)) ((bruijn eqv? 10 18) (close _V0vanity_V0compiler_V0variables_V20_k175) (bruijn ##x.4 7 0) '##sys.null?))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 8-1, 0), runtime,
      VEncodePointer(&_V10string_D468.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 10-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k175, env)}),
      VGetArg(upenv, 7-1, 0),
      _V10sys_Dnull_Q);
}
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k173(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k173" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k173, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k173, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.176 0 0) ((bruijn ##k.170 7 0) (##string ##string.467)) ((bruijn eqv? 9 18) (close _V0vanity_V0compiler_V0variables_V20_k174) (bruijn ##x.4 6 0) '##sys.remainder))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 7-1, 0), runtime,
      VEncodePointer(&_V10string_D467.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 9-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k174, env)}),
      VGetArg(upenv, 6-1, 0),
      _V10sys_Dremainder);
}
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k172(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k172" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k172, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k172, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.175 0 0) ((bruijn ##k.170 6 0) (##string ##string.466)) ((bruijn eqv? 8 18) (close _V0vanity_V0compiler_V0variables_V20_k173) (bruijn ##x.4 5 0) '##sys.quotient))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 6-1, 0), runtime,
      VEncodePointer(&_V10string_D466.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 8-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k173, env)}),
      VGetArg(upenv, 5-1, 0),
      _V10sys_Dquotient);
}
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k171(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k171" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k171, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k171, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.174 0 0) ((bruijn ##k.170 5 0) (##string ##string.465)) ((bruijn eqv? 7 18) (close _V0vanity_V0compiler_V0variables_V20_k172) (bruijn ##x.4 4 0) '##sys.cmp))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      VEncodePointer(&_V10string_D465.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 7-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k172, env)}),
      upenv->up->up->up->vars[0],
      _V10sys_Dcmp);
}
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k170(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k170" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k170, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k170, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.173 0 0) ((bruijn ##k.170 4 0) (##string ##string.464)) ((bruijn eqv? 6 18) (close _V0vanity_V0compiler_V0variables_V20_k171) (bruijn ##x.4 3 0) '##sys./))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodePointer(&_V10string_D464.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 6-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k171, env)}),
      upenv->up->up->vars[0],
      _V10sys_D_W);
}
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k169(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k169" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k169, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k169, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.172 0 0) ((bruijn ##k.170 3 0) (##string ##string.463)) ((bruijn eqv? 5 18) (close _V0vanity_V0compiler_V0variables_V20_k170) (bruijn ##x.4 2 0) '##sys.*))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->up->up->vars[0], runtime,
      VEncodePointer(&_V10string_D463.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 5-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k170, env)}),
      upenv->up->vars[0],
      _V10sys_D_S);
}
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k168(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k168" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k168, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k168, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.171 0 0) ((bruijn ##k.170 2 0) (##string ##string.462)) ((bruijn eqv? 4 18) (close _V0vanity_V0compiler_V0variables_V20_k169) (bruijn ##x.4 1 0) '##sys.-))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->up->vars[0], runtime,
      VEncodePointer(&_V10string_D462.sym, VPOINTER_OTHER));
} else {
V_CALL(upenv->up->up->up->vars[18], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k169, env)}),
      upenv->vars[0],
      _V10sys_D__);
}
 }
}
static void _V0vanity_V0compiler_V0variables_V20_lambda12(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_lambda12" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_lambda12, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn eqv? 3 18) (close _V0vanity_V0compiler_V0variables_V20_k168) (bruijn ##x.4 0 0) '##sys.+)
V_CALL(upenv->up->up->vars[18], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k168, env)}),
      _var0,
      _V10sys_D_P);
 }
}
static void _V0vanity_V0compiler_V0variables_V20_lambda11(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_lambda11" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_lambda11, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_lambda11, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0vanity_V0compiler_V0variables_V20_lambda12) (bruijn sym 0 1))
V_CALL_FUNC(_V0vanity_V0compiler_V0variables_V20_lambda12, env, runtime,
      _var1);
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k269(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k269" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k269, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k269, runtime, upenv, 1, argc, _var0) {
  // ((bruijn merge 5 0) (bruijn ##k.270 4 0) (bruijn ##x.273 0 0) (bruijn b 4 2))
V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      upenv->up->up->up->vars[0],
      _var0,
      upenv->up->up->up->vars[2]);
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k272(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k272" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k272, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k272, runtime, upenv, 1, argc, _var0) {
  // ((bruijn merge 7 0) (bruijn ##k.270 6 0) (bruijn ##x.274 2 0) (bruijn ##x.275 0 0))
V_CALL(VGetArg(upenv, 7-1, 0), runtime,
      VGetArg(upenv, 6-1, 0),
      upenv->up->vars[0],
      _var0);
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k271(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k271" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k271, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k271, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn cons 9 19) (close _V0vanity_V0compiler_V0variables_V20_k272) (bruijn ##x.276 0 0) (bruijn b 5 2))
V_CALL(VGetArg(upenv, 9-1, 19), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k272, env)}),
      _var0,
      VGetArg(upenv, 5-1, 2));
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k270(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k270" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k270, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k270, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn car 8 17) (close _V0vanity_V0compiler_V0variables_V20_k271) (bruijn a 4 1))
V_CALL(VGetArg(upenv, 8-1, 17), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k271, env)}),
      upenv->up->up->up->vars[1]);
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k268(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k268" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k268, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k268, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.272 0 0) ((bruijn cdr 7 16) (close _V0vanity_V0compiler_V0variables_V20_k269) (bruijn a 3 1)) ((bruijn cdr 7 16) (close _V0vanity_V0compiler_V0variables_V20_k270) (bruijn a 3 1)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 7-1, 16), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k269, env)}),
      upenv->up->up->vars[1]);
} else {
V_CALL(VGetArg(upenv, 7-1, 16), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k270, env)}),
      upenv->up->up->vars[1]);
}
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k267(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k267" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k267, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k267, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn memv 6 26) (close _V0vanity_V0compiler_V0variables_V20_k268) (bruijn ##x.277 0 0) (bruijn b 2 2))
V_CALL(VGetArg(upenv, 6-1, 26), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k268, env)}),
      _var0,
      upenv->up->vars[2]);
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k266(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k266" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k266, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k266, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.271 0 0) ((bruijn ##k.270 1 0) (bruijn b 1 2)) ((bruijn car 5 17) (close _V0vanity_V0compiler_V0variables_V20_k267) (bruijn a 1 1)))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->vars[0], runtime,
      upenv->vars[2]);
} else {
V_CALL(VGetArg(upenv, 5-1, 17), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k267, env)}),
      upenv->vars[1]);
}
 }
}
static void _V0vanity_V0compiler_V0variables_V20_lambda14(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_lambda14" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_lambda14, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_lambda14, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn null? 4 25) (close _V0vanity_V0compiler_V0variables_V20_k266) (bruijn a 0 1))
V_CALL(upenv->up->up->up->vars[25], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k266, env)}),
      _var1);
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k276(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k276" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k276, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k276, runtime, upenv, 1, argc, _var0) {
  // ((bruijn cons 8 19) (bruijn ##k.278 4 0) (bruijn ##x.280 2 0) (bruijn ##x.281 0 0))
V_CALL(VGetArg(upenv, 8-1, 19), runtime,
      upenv->up->up->up->vars[0],
      upenv->up->vars[0],
      _var0);
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k275(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k275" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k275, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k275, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn append-improper 4 1) (close _V0vanity_V0compiler_V0variables_V20_k276) (bruijn ##x.282 0 0) (bruijn b 3 2))
V_CALL(upenv->up->up->up->vars[1], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k276, env)}),
      _var0,
      upenv->up->up->vars[2]);
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k274(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k274" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k274, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k274, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn cdr 6 16) (close _V0vanity_V0compiler_V0variables_V20_k275) (bruijn a 2 1))
V_CALL(VGetArg(upenv, 6-1, 16), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k275, env)}),
      upenv->up->vars[1]);
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k277(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k277" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k277, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k277, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.283 0 0) ((bruijn ##k.278 2 0) (bruijn b 2 2)) ((bruijn cons 6 19) (bruijn ##k.278 2 0) (bruijn a 2 1) (bruijn b 2 2)))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->up->vars[0], runtime,
      upenv->up->vars[2]);
} else {
V_CALL(VGetArg(upenv, 6-1, 19), runtime,
      upenv->up->vars[0],
      upenv->up->vars[1],
      upenv->up->vars[2]);
}
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k273(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k273" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k273, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k273, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.279 0 0) ((bruijn car 5 17) (close _V0vanity_V0compiler_V0variables_V20_k274) (bruijn a 1 1)) ((bruijn null? 5 25) (close _V0vanity_V0compiler_V0variables_V20_k277) (bruijn a 1 1)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 5-1, 17), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k274, env)}),
      upenv->vars[1]);
} else {
V_CALL(VGetArg(upenv, 5-1, 25), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k277, env)}),
      upenv->vars[1]);
}
 }
}
static void _V0vanity_V0compiler_V0variables_V20_lambda15(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_lambda15" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_lambda15, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_lambda15, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn pair? 4 15) (close _V0vanity_V0compiler_V0variables_V20_k273) (bruijn a 0 1))
V_CALL(upenv->up->up->up->vars[15], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k273, env)}),
      _var1);
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k281(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k281" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k281, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k281, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.289 0 0) ((bruijn ##k.288 1 0) (bruijn ##p.289 0 0)) ((bruijn lookup-intrinsic2 8 4) (bruijn ##k.288 1 0) (bruijn expr 4 2)))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->vars[0], runtime,
      _var0);
} else {
V_CALL(VGetArg(upenv, 8-1, 4), runtime,
      upenv->vars[0],
      upenv->up->up->up->vars[2]);
}
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k280(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k280" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k280, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k280, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.287 1 0) ((bruijn ##k.288 0 0) (bruijn ##p.287 1 0)) ((bruijn lookup-intrinsic 7 3) (close _V0vanity_V0compiler_V0variables_V20_k281) (bruijn expr 3 2)))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(_var0, runtime,
      upenv->vars[0]);
} else {
V_CALL(VGetArg(upenv, 7-1, 3), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k281, env)}),
      upenv->up->up->vars[2]);
}
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k282(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k282" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k282, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k282, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.286 0 0) ((bruijn ##k.284 3 0) '()) ((bruijn list 8 31) (bruijn ##k.284 3 0) (bruijn expr 3 2)))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->up->up->vars[0], runtime,
      VNULL);
} else {
V_CALL(VGetArg(upenv, 8-1, 31), runtime,
      upenv->up->up->vars[0],
      upenv->up->up->vars[2]);
}
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k279(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k279" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k279, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k279, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0variables_V20_k280) (close _V0vanity_V0compiler_V0variables_V20_k282))
V_CALL_FUNC(_V0vanity_V0compiler_V0variables_V20_k280, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k282, env)}));
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k294(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k294" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k294, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k294, runtime, upenv, 1, argc, _var0) {
  // ((bruijn merge 15 0) (bruijn ##k.284 13 0) (bruijn ##x.293 2 0) (bruijn ##x.294 0 0))
V_CALL(VGetArg(upenv, 15-1, 0), runtime,
      VGetArg(upenv, 13-1, 0),
      upenv->up->vars[0],
      _var0);
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k293(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k293" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k293, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k293, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn loop 13 0) (close _V0vanity_V0compiler_V0variables_V20_k294) (bruijn bound 12 1) (bruijn ##x.295 0 0))
V_CALL(VGetArg(upenv, 13-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k294, env)}),
      VGetArg(upenv, 12-1, 1),
      _var0);
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k292(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k292" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k292, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k292, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn cadddr 16 28) (close _V0vanity_V0compiler_V0variables_V20_k293) (bruijn expr 11 2))
V_CALL(VGetArg(upenv, 16-1, 28), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k293, env)}),
      VGetArg(upenv, 11-1, 2));
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k291(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k291" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k291, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k291, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn merge 12 0) (close _V0vanity_V0compiler_V0variables_V20_k292) (bruijn ##x.296 2 0) (bruijn ##x.297 0 0))
V_CALL(VGetArg(upenv, 12-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k292, env)}),
      upenv->up->vars[0],
      _var0);
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k290(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k290" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k290, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k290, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn loop 10 0) (close _V0vanity_V0compiler_V0variables_V20_k291) (bruijn bound 9 1) (bruijn ##x.298 0 0))
V_CALL(VGetArg(upenv, 10-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k291, env)}),
      VGetArg(upenv, 9-1, 1),
      _var0);
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k289(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k289" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k289, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k289, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn caddr 13 27) (close _V0vanity_V0compiler_V0variables_V20_k290) (bruijn expr 8 2))
V_CALL(VGetArg(upenv, 13-1, 27), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k290, env)}),
      VGetArg(upenv, 8-1, 2));
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k288(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k288" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k288, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k288, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn loop 8 0) (close _V0vanity_V0compiler_V0variables_V20_k289) (bruijn bound 7 1) (bruijn ##x.299 0 0))
V_CALL(VGetArg(upenv, 8-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k289, env)}),
      VGetArg(upenv, 7-1, 1),
      _var0);
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k300(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k300" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k300, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k300, runtime, upenv, 1, argc, _var0) {
  // ((bruijn merge 14 0) (bruijn ##k.284 12 0) (bruijn ##x.301 2 0) (bruijn ##x.302 0 0))
V_CALL(VGetArg(upenv, 14-1, 0), runtime,
      VGetArg(upenv, 12-1, 0),
      upenv->up->vars[0],
      _var0);
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k299(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k299" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k299, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k299, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn loop 12 0) (close _V0vanity_V0compiler_V0variables_V20_k300) (bruijn bound 11 1) (bruijn ##x.303 0 0))
V_CALL(VGetArg(upenv, 12-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k300, env)}),
      VGetArg(upenv, 11-1, 1),
      _var0);
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k298(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k298" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k298, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k298, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn caddr 15 27) (close _V0vanity_V0compiler_V0variables_V20_k299) (bruijn expr 10 2))
V_CALL(VGetArg(upenv, 15-1, 27), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k299, env)}),
      VGetArg(upenv, 10-1, 2));
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k297(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k297" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k297, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k297, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn loop 10 0) (close _V0vanity_V0compiler_V0variables_V20_k298) (bruijn bound 9 1) (bruijn ##x.304 0 0))
V_CALL(VGetArg(upenv, 10-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k298, env)}),
      VGetArg(upenv, 9-1, 1),
      _var0);
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k305(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k305" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k305, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k305, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 14 0) (bruijn ##k.284 13 0) (bruijn ##x.306 1 0) (bruijn ##x.307 0 0))
V_CALL(VGetArg(upenv, 14-1, 0), runtime,
      VGetArg(upenv, 13-1, 0),
      upenv->vars[0],
      _var0);
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k304(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k304" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k304, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k304, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn cddr 17 22) (close _V0vanity_V0compiler_V0variables_V20_k305) (bruijn expr 12 2))
V_CALL(VGetArg(upenv, 17-1, 22), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k305, env)}),
      VGetArg(upenv, 12-1, 2));
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k303(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k303" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k303, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k303, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn append-improper 13 1) (close _V0vanity_V0compiler_V0variables_V20_k304) (bruijn ##x.308 0 0) (bruijn bound 11 1))
V_CALL(VGetArg(upenv, 13-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k304, env)}),
      _var0,
      VGetArg(upenv, 11-1, 1));
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k314(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k314" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k314, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k314, runtime, upenv, 1, argc, _var0) {
  // ((bruijn merge 23 0) (bruijn ##k.310 7 0) (bruijn ##x.312 2 0) (bruijn ##x.313 0 0))
V_CALL(VGetArg(upenv, 23-1, 0), runtime,
      VGetArg(upenv, 7-1, 0),
      upenv->up->vars[0],
      _var0);
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k313(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k313" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k313, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k313, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn loop2 7 0) (close _V0vanity_V0compiler_V0variables_V20_k314) (bruijn ##x.314 0 0))
V_CALL(VGetArg(upenv, 7-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k314, env)}),
      _var0);
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k312(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k312" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k312, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k312, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn cdr 24 16) (close _V0vanity_V0compiler_V0variables_V20_k313) (bruijn cases 5 1))
V_CALL(VGetArg(upenv, 24-1, 16), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k313, env)}),
      VGetArg(upenv, 5-1, 1));
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k311(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k311" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k311, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k311, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn loop 19 0) (close _V0vanity_V0compiler_V0variables_V20_k312) (bruijn ##x.315 1 0) (bruijn ##x.316 0 0))
V_CALL(VGetArg(upenv, 19-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k312, env)}),
      upenv->vars[0],
      _var0);
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k310(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k310" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k310, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k310, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn cdar 22 24) (close _V0vanity_V0compiler_V0variables_V20_k311) (bruijn cases 3 1))
V_CALL(VGetArg(upenv, 22-1, 24), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k311, env)}),
      upenv->up->up->vars[1]);
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k309(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k309" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k309, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k309, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn append-improper 18 1) (close _V0vanity_V0compiler_V0variables_V20_k310) (bruijn ##x.317 0 0) (bruijn bound 16 1))
V_CALL(VGetArg(upenv, 18-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k310, env)}),
      _var0,
      VGetArg(upenv, 16-1, 1));
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k308(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k308" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k308, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k308, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.311 0 0) ((bruijn ##k.310 1 0) '()) ((bruijn caar 20 23) (close _V0vanity_V0compiler_V0variables_V20_k309) (bruijn cases 1 1)))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->vars[0], runtime,
      VNULL);
} else {
V_CALL(VGetArg(upenv, 20-1, 23), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k309, env)}),
      upenv->vars[1]);
}
 }
}
static void _V0vanity_V0compiler_V0variables_V20_lambda17(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_lambda17" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_lambda17, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_lambda17, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn null? 19 25) (close _V0vanity_V0compiler_V0variables_V20_k308) (bruijn cases 0 1))
V_CALL(VGetArg(upenv, 19-1, 25), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k308, env)}),
      _var1);
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k315(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k315" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k315, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k315, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop2 1 0) (bruijn ##k.284 14 0) (bruijn ##x.318 0 0))
V_CALL(upenv->vars[0], runtime,
      VGetArg(upenv, 14-1, 0),
      _var0);
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k325(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k325" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k325, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k325, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 23 0) (bruijn ##k.284 22 0) (bruijn ##x.320 5 0) (bruijn ##x.321 0 0))
V_CALL(VGetArg(upenv, 23-1, 0), runtime,
      VGetArg(upenv, 22-1, 0),
      VGetArg(upenv, 5-1, 0),
      _var0);
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k324(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k324" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k324, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k324, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn cons 26 19) (close _V0vanity_V0compiler_V0variables_V20_k325) 'begin (bruijn ##x.322 0 0))
V_CALL(VGetArg(upenv, 26-1, 19), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k325, env)}),
      _V0begin,
      _var0);
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k323(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k323" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k323, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k323, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn cons 25 19) (close _V0vanity_V0compiler_V0variables_V20_k324) (bruijn ##x.323 1 0) (bruijn ##x.324 0 0))
V_CALL(VGetArg(upenv, 25-1, 19), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k324, env)}),
      upenv->vars[0],
      _var0);
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k322(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k322" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k322, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k322, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn cddr 24 22) (close _V0vanity_V0compiler_V0variables_V20_k323) (bruijn expr 19 2))
V_CALL(VGetArg(upenv, 24-1, 22), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k323, env)}),
      VGetArg(upenv, 19-1, 2));
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k321(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k321" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k321, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k321, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn map 23 21) (close _V0vanity_V0compiler_V0variables_V20_k322) (bruijn cadr 23 20) (bruijn ##x.325 0 0))
V_CALL(VGetArg(upenv, 23-1, 21), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k322, env)}),
      VGetArg(upenv, 23-1, 20),
      _var0);
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k320(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k320" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k320, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k320, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn cadr 22 20) (close _V0vanity_V0compiler_V0variables_V20_k321) (bruijn expr 17 2))
V_CALL(VGetArg(upenv, 22-1, 20), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k321, env)}),
      VGetArg(upenv, 17-1, 2));
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k319(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k319" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k319, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k319, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn append-improper 18 1) (close _V0vanity_V0compiler_V0variables_V20_k320) (bruijn ##x.326 0 0) (bruijn bound 16 1))
V_CALL(VGetArg(upenv, 18-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k320, env)}),
      _var0,
      VGetArg(upenv, 16-1, 1));
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k318(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k318" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k318, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k318, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn map 20 21) (close _V0vanity_V0compiler_V0variables_V20_k319) (bruijn car 20 17) (bruijn ##x.327 0 0))
V_CALL(VGetArg(upenv, 20-1, 21), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k319, env)}),
      VGetArg(upenv, 20-1, 17),
      _var0);
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k328(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k328" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k328, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k328, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 18 0) (bruijn ##k.284 17 0) (bruijn bound 17 1) (bruijn ##x.329 0 0))
V_CALL(VGetArg(upenv, 18-1, 0), runtime,
      VGetArg(upenv, 17-1, 0),
      VGetArg(upenv, 17-1, 1),
      _var0);
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k332(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k332" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k332, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k332, runtime, upenv, 1, argc, _var0) {
  // ((bruijn merge 22 0) (bruijn ##k.284 20 0) (bruijn ##x.330 2 0) (bruijn ##x.331 0 0))
V_CALL(VGetArg(upenv, 22-1, 0), runtime,
      VGetArg(upenv, 20-1, 0),
      upenv->up->vars[0],
      _var0);
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k331(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k331" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k331, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k331, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn loop 20 0) (close _V0vanity_V0compiler_V0variables_V20_k332) (bruijn bound 19 1) (bruijn ##x.332 0 0))
V_CALL(VGetArg(upenv, 20-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k332, env)}),
      VGetArg(upenv, 19-1, 1),
      _var0);
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k330(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k330" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k330, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k330, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn cdr 23 16) (close _V0vanity_V0compiler_V0variables_V20_k331) (bruijn expr 18 2))
V_CALL(VGetArg(upenv, 23-1, 16), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k331, env)}),
      VGetArg(upenv, 18-1, 2));
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k329(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k329" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k329, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k329, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn loop 18 0) (close _V0vanity_V0compiler_V0variables_V20_k330) (bruijn bound 17 1) (bruijn ##x.333 0 0))
V_CALL(VGetArg(upenv, 18-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k330, env)}),
      VGetArg(upenv, 17-1, 1),
      _var0);
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k327(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k327" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k327, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k327, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.328 0 0) ((bruijn cdr 21 16) (close _V0vanity_V0compiler_V0variables_V20_k328) (bruijn expr 16 2)) ((bruijn car 21 17) (close _V0vanity_V0compiler_V0variables_V20_k329) (bruijn expr 16 2)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 21-1, 16), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k328, env)}),
      VGetArg(upenv, 16-1, 2));
} else {
V_CALL(VGetArg(upenv, 21-1, 17), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k329, env)}),
      VGetArg(upenv, 16-1, 2));
}
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k326(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k326" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k326, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k326, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn eqv? 20 18) (close _V0vanity_V0compiler_V0variables_V20_k327) (bruijn ##x.334 0 0) 'set!)
V_CALL(VGetArg(upenv, 20-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k327, env)}),
      _var0,
      _V0set_B);
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k317(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k317" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k317, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k317, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.319 0 0) ((bruijn cadr 19 20) (close _V0vanity_V0compiler_V0variables_V20_k318) (bruijn expr 14 2)) ((bruijn car 19 17) (close _V0vanity_V0compiler_V0variables_V20_k326) (bruijn expr 14 2)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 19-1, 20), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k318, env)}),
      VGetArg(upenv, 14-1, 2));
} else {
V_CALL(VGetArg(upenv, 19-1, 17), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k326, env)}),
      VGetArg(upenv, 14-1, 2));
}
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k316(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k316" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k316, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k316, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn eqv? 18 18) (close _V0vanity_V0compiler_V0variables_V20_k317) (bruijn ##x.335 0 0) 'letrec)
V_CALL(VGetArg(upenv, 18-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k317, env)}),
      _var0,
      _V0letrec);
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k307(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k307" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k307, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k307, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.309 0 0) (letrec 1 ((close _V0vanity_V0compiler_V0variables_V20_lambda17)) ((bruijn cdr 18 16) (close _V0vanity_V0compiler_V0variables_V20_k315) (bruijn expr 13 2))) ((bruijn car 17 17) (close _V0vanity_V0compiler_V0variables_V20_k316) (bruijn expr 12 2)))
if(VDecodeBool(
_var0)) {
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_lambda17, env)});
V_CALL(VGetArg(upenv, 18-1, 16), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k315, env)}),
      VGetArg(upenv, 13-1, 2));
    }
} else {
V_CALL(VGetArg(upenv, 17-1, 17), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k316, env)}),
      VGetArg(upenv, 12-1, 2));
}
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k306(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k306" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k306, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k306, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn eqv? 16 18) (close _V0vanity_V0compiler_V0variables_V20_k307) (bruijn ##x.336 0 0) 'case-lambda)
V_CALL(VGetArg(upenv, 16-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k307, env)}),
      _var0,
      _V0case__lambda);
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k302(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k302" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k302, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k302, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.305 0 0) ((bruijn cadr 15 20) (close _V0vanity_V0compiler_V0variables_V20_k303) (bruijn expr 10 2)) ((bruijn car 15 17) (close _V0vanity_V0compiler_V0variables_V20_k306) (bruijn expr 10 2)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 15-1, 20), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k303, env)}),
      VGetArg(upenv, 10-1, 2));
} else {
V_CALL(VGetArg(upenv, 15-1, 17), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k306, env)}),
      VGetArg(upenv, 10-1, 2));
}
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k301(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k301" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k301, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k301, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn eqv? 14 18) (close _V0vanity_V0compiler_V0variables_V20_k302) (bruijn ##x.337 0 0) 'lambda)
V_CALL(VGetArg(upenv, 14-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k302, env)}),
      _var0,
      _V0lambda);
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k296(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k296" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k296, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k296, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.300 0 0) ((bruijn cadr 13 20) (close _V0vanity_V0compiler_V0variables_V20_k297) (bruijn expr 8 2)) ((bruijn car 13 17) (close _V0vanity_V0compiler_V0variables_V20_k301) (bruijn expr 8 2)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 13-1, 20), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k297, env)}),
      VGetArg(upenv, 8-1, 2));
} else {
V_CALL(VGetArg(upenv, 13-1, 17), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k301, env)}),
      VGetArg(upenv, 8-1, 2));
}
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k295(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k295" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k295, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k295, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn memv 12 26) (close _V0vanity_V0compiler_V0variables_V20_k296) (bruijn ##x.338 0 0) (##inline ##sys.qcons 'begin (##inline ##sys.qcons 'and (##inline ##sys.qcons 'or '()))))
V_CALL(VGetArg(upenv, 12-1, 26), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k296, env)}),
      _var0,
      VInlineCons(
        _V0begin,
        VInlineCons(
        _V0and,
        VInlineCons(
        _V0or,
        VNULL))));
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k287(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k287" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k287, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k287, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.292 0 0) ((bruijn cadr 11 20) (close _V0vanity_V0compiler_V0variables_V20_k288) (bruijn expr 6 2)) ((bruijn car 11 17) (close _V0vanity_V0compiler_V0variables_V20_k295) (bruijn expr 6 2)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 11-1, 20), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k288, env)}),
      VGetArg(upenv, 6-1, 2));
} else {
V_CALL(VGetArg(upenv, 11-1, 17), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k295, env)}),
      VGetArg(upenv, 6-1, 2));
}
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k286(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k286" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k286, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k286, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn eqv? 10 18) (close _V0vanity_V0compiler_V0variables_V20_k287) (bruijn ##x.342 0 0) 'if)
V_CALL(VGetArg(upenv, 10-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k287, env)}),
      _var0,
      _V0if);
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k285(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k285" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k285, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k285, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.291 0 0) ((bruijn ##k.284 4 0) '()) ((bruijn car 9 17) (close _V0vanity_V0compiler_V0variables_V20_k286) (bruijn expr 4 2)))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->up->up->up->vars[0], runtime,
      VNULL);
} else {
V_CALL(VGetArg(upenv, 9-1, 17), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k286, env)}),
      upenv->up->up->up->vars[2]);
}
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k284(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k284" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k284, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k284, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn eqv? 8 18) (close _V0vanity_V0compiler_V0variables_V20_k285) (bruijn ##x.343 0 0) 'quote)
V_CALL(VGetArg(upenv, 8-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k285, env)}),
      _var0,
      _V0quote);
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k283(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k283" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k283, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k283, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.290 0 0) ((bruijn ##k.284 2 0) '()) ((bruijn car 7 17) (close _V0vanity_V0compiler_V0variables_V20_k284) (bruijn expr 2 2)))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->up->vars[0], runtime,
      VNULL);
} else {
V_CALL(VGetArg(upenv, 7-1, 17), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k284, env)}),
      upenv->up->vars[2]);
}
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k278(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k278" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k278, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k278, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.285 0 0) ((bruijn memv 6 26) (close _V0vanity_V0compiler_V0variables_V20_k279) (bruijn expr 1 2) (bruijn bound 1 1)) ((bruijn atom? 6 29) (close _V0vanity_V0compiler_V0variables_V20_k283) (bruijn expr 1 2)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 6-1, 26), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k279, env)}),
      upenv->vars[2],
      upenv->vars[1]);
} else {
V_CALL(VGetArg(upenv, 6-1, 29), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k283, env)}),
      upenv->vars[2]);
}
 }
}
static void _V0vanity_V0compiler_V0variables_V20_lambda16(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_lambda16" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_lambda16, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_lambda16, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn symbol? 5 30) (close _V0vanity_V0compiler_V0variables_V20_k278) (bruijn expr 0 2))
V_CALL(VGetArg(upenv, 5-1, 30), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k278, env)}),
      _var2);
 }
}
static void _V0vanity_V0compiler_V0variables_V20_lambda13(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_lambda13" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_lambda13, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_lambda13, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (letrec 2 ((close _V0vanity_V0compiler_V0variables_V20_lambda14) (close _V0vanity_V0compiler_V0variables_V20_lambda15)) (letrec 1 ((close _V0vanity_V0compiler_V0variables_V20_lambda16)) ((bruijn loop 0 0) (bruijn ##k.269 2 0) '() (bruijn expr 2 1))))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[2]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 2, 2, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_lambda14, env)});
    env->vars[1] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_lambda15, env)});
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_lambda16, env)});
V_CALL(env->vars[0], runtime,
      upenv->up->vars[0],
      VNULL,
      upenv->up->vars[1]);
    }
    }
 }
}
static void _V0vanity_V0compiler_V0variables_V20_lambda2(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4, VWORD _var5, VWORD _var6, VWORD _var7, VWORD _var8, VWORD _var9, VWORD _var10, VWORD _var11, VWORD _var12, VWORD _var13, VWORD _var14, VWORD _var15, VWORD _var16, VWORD _var17, VWORD _var18, VWORD _var19, VWORD _var20, VWORD _var21, VWORD _var22, VWORD _var23, VWORD _var24, VWORD _var25, VWORD _var26, VWORD _var27, VWORD _var28, VWORD _var29, VWORD _var30, VWORD _var31) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_lambda2" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_lambda2, runtime, upenv, 32, argc, _var0, _var1, _var2, _var3, _var4, _var5, _var6, _var7, _var8, _var9, _var10, _var11, _var12, _var13, _var14, _var15, _var16, _var17, _var18, _var19, _var20, _var21, _var22, _var23, _var24, _var25, _var26, _var27, _var28, _var29, _var30, _var31) {
  struct { VEnv env; VWORD argv[32]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 32, 32, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  env->vars[4] = _var4;
  env->vars[5] = _var5;
  env->vars[6] = _var6;
  env->vars[7] = _var7;
  env->vars[8] = _var8;
  env->vars[9] = _var9;
  env->vars[10] = _var10;
  env->vars[11] = _var11;
  env->vars[12] = _var12;
  env->vars[13] = _var13;
  env->vars[14] = _var14;
  env->vars[15] = _var15;
  env->vars[16] = _var16;
  env->vars[17] = _var17;
  env->vars[18] = _var18;
  env->vars[19] = _var19;
  env->vars[20] = _var20;
  env->vars[21] = _var21;
  env->vars[22] = _var22;
  env->vars[23] = _var23;
  env->vars[24] = _var24;
  env->vars[25] = _var25;
  env->vars[26] = _var26;
  env->vars[27] = _var27;
  env->vars[28] = _var28;
  env->vars[29] = _var29;
  env->vars[30] = _var30;
  env->vars[31] = _var31;
  // (letrec 6 ((close _V0vanity_V0compiler_V0variables_V20_lambda3) (close _V0vanity_V0compiler_V0variables_V20_lambda5) (close _V0vanity_V0compiler_V0variables_V20_lambda7) (close _V0vanity_V0compiler_V0variables_V20_lambda9) (close _V0vanity_V0compiler_V0variables_V20_lambda11) (close _V0vanity_V0compiler_V0variables_V20_lambda13)) ((bruijn ##k.5 37 0) (##inline ##sys.cons (##inline ##sys.cons 'mangle-symbol (bruijn mangle-symbol 0 0)) (##inline ##sys.cons (##inline ##sys.cons 'mangle-library (bruijn mangle-library 0 1)) (##inline ##sys.cons (##inline ##sys.cons 'lookup-inline (bruijn lookup-inline 0 2)) (##inline ##sys.cons (##inline ##sys.cons 'lookup-intrinsic2 (bruijn lookup-intrinsic2 0 4)) (##inline ##sys.cons (##inline ##sys.cons 'free-variables (bruijn free-variables 0 5)) '())))))))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[6]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 6, 6, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_lambda3, env)});
    env->vars[1] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_lambda5, env)});
    env->vars[2] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_lambda7, env)});
    env->vars[3] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_lambda9, env)});
    env->vars[4] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_lambda11, env)});
    env->vars[5] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_lambda13, env)});
V_CALL(VGetArg(upenv, 37-1, 0), runtime,
      VInlineCons(
        VInlineCons(
        _V0mangle__symbol,
        env->vars[0]),
        VInlineCons(
        VInlineCons(
        _V0mangle__library,
        env->vars[1]),
        VInlineCons(
        VInlineCons(
        _V0lookup__inline,
        env->vars[2]),
        VInlineCons(
        VInlineCons(
        _V0lookup__intrinsic2,
        env->vars[4]),
        VInlineCons(
        VInlineCons(
        _V0free__variables,
        env->vars[5]),
        VNULL))))));
    }
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k35(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k35" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k35, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k35, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0variables_V20_lambda2) (bruijn ##x.6 31 0) (bruijn ##x.7 30 0) (bruijn ##x.8 29 0) (bruijn ##x.9 28 0) (bruijn ##x.10 27 0) (bruijn ##x.11 26 0) (bruijn ##x.12 25 0) (bruijn ##x.13 24 0) (bruijn ##x.14 23 0) (bruijn ##x.15 22 0) (bruijn ##x.16 21 0) (bruijn ##x.17 20 0) (bruijn ##x.18 19 0) (bruijn ##x.19 18 0) (bruijn ##x.20 17 0) (bruijn ##x.21 16 0) (bruijn ##x.22 15 0) (bruijn ##x.23 14 0) (bruijn ##x.24 13 0) (bruijn ##x.25 12 0) (bruijn ##x.26 11 0) (bruijn ##x.27 10 0) (bruijn ##x.28 9 0) (bruijn ##x.29 8 0) (bruijn ##x.30 7 0) (bruijn ##x.31 6 0) (bruijn ##x.32 5 0) (bruijn ##x.33 4 0) (bruijn ##x.34 3 0) (bruijn ##x.35 2 0) (bruijn ##x.36 1 0) (bruijn ##x.37 0 0))
V_CALL_FUNC(_V0vanity_V0compiler_V0variables_V20_lambda2, env, runtime,
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
static void _V0vanity_V0compiler_V0variables_V20_k34(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k34" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k34, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k34, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 31 0) (close _V0vanity_V0compiler_V0variables_V20_k35) 'list)
V_CALL(VGetArg(upenv, 31-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k35, env)}),
      _V0list);
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k33(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k33" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k33, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k33, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 30 0) (close _V0vanity_V0compiler_V0variables_V20_k34) 'symbol?)
V_CALL(VGetArg(upenv, 30-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k34, env)}),
      _V0symbol_Q);
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k32(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k32" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k32, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k32, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 29 0) (close _V0vanity_V0compiler_V0variables_V20_k33) 'atom?)
V_CALL(VGetArg(upenv, 29-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k33, env)}),
      _V0atom_Q);
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k31(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k31" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k31, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k31, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 28 0) (close _V0vanity_V0compiler_V0variables_V20_k32) 'cadddr)
V_CALL(VGetArg(upenv, 28-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k32, env)}),
      _V0cadddr);
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k30(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k30" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k30, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k30, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 27 0) (close _V0vanity_V0compiler_V0variables_V20_k31) 'caddr)
V_CALL(VGetArg(upenv, 27-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k31, env)}),
      _V0caddr);
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k29(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k29" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k29, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k29, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 26 0) (close _V0vanity_V0compiler_V0variables_V20_k30) 'memv)
V_CALL(VGetArg(upenv, 26-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k30, env)}),
      _V0memv);
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k28(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k28" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k28, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k28, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 25 0) (close _V0vanity_V0compiler_V0variables_V20_k29) 'null?)
V_CALL(VGetArg(upenv, 25-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k29, env)}),
      _V0null_Q);
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k27(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k27" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k27, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k27, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 24 0) (close _V0vanity_V0compiler_V0variables_V20_k28) 'cdar)
V_CALL(VGetArg(upenv, 24-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k28, env)}),
      _V0cdar);
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k26(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k26" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k26, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k26, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 23 0) (close _V0vanity_V0compiler_V0variables_V20_k27) 'caar)
V_CALL(VGetArg(upenv, 23-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k27, env)}),
      _V0caar);
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k25(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k25" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k25, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k25, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 22 0) (close _V0vanity_V0compiler_V0variables_V20_k26) 'cddr)
V_CALL(VGetArg(upenv, 22-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k26, env)}),
      _V0cddr);
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k24(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k24" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k24, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k24, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 21 0) (close _V0vanity_V0compiler_V0variables_V20_k25) 'map)
V_CALL(VGetArg(upenv, 21-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k25, env)}),
      _V0map);
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k23(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k23" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k23, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k23, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 20 0) (close _V0vanity_V0compiler_V0variables_V20_k24) 'cadr)
V_CALL(VGetArg(upenv, 20-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k24, env)}),
      _V0cadr);
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k22(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k22" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k22, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k22, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 19 0) (close _V0vanity_V0compiler_V0variables_V20_k23) 'cons)
V_CALL(VGetArg(upenv, 19-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k23, env)}),
      _V0cons);
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k21(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k21" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k21, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k21, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 18 0) (close _V0vanity_V0compiler_V0variables_V20_k22) 'eqv?)
V_CALL(VGetArg(upenv, 18-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k22, env)}),
      _V0eqv_Q);
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k20(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k20" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k20, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k20, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 17 0) (close _V0vanity_V0compiler_V0variables_V20_k21) 'car)
V_CALL(VGetArg(upenv, 17-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k21, env)}),
      _V0car);
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k19(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k19" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k19, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k19, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 16 0) (close _V0vanity_V0compiler_V0variables_V20_k20) 'cdr)
V_CALL(VGetArg(upenv, 16-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k20, env)}),
      _V0cdr);
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k18(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k18" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k18, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k18, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 15 0) (close _V0vanity_V0compiler_V0variables_V20_k19) 'pair?)
V_CALL(VGetArg(upenv, 15-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k19, env)}),
      _V0pair_Q);
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k17(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k17" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k17, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k17, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 14 0) (close _V0vanity_V0compiler_V0variables_V20_k18) 'compiler-error)
V_CALL(VGetArg(upenv, 14-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k18, env)}),
      _V0compiler__error);
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k16(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k16" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k16, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k16, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 13 0) (close _V0vanity_V0compiler_V0variables_V20_k17) 'string-append)
V_CALL(VGetArg(upenv, 13-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k17, env)}),
      _V0string__append);
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k15(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k15" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k15, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k15, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 12 0) (close _V0vanity_V0compiler_V0variables_V20_k16) 'symbol->string)
V_CALL(VGetArg(upenv, 12-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k16, env)}),
      _V0symbol___Gstring);
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k14(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k14" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k14, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k14, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 11 0) (close _V0vanity_V0compiler_V0variables_V20_k15) 'reverse)
V_CALL(VGetArg(upenv, 11-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k15, env)}),
      _V0reverse);
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k13(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k13" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k13, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k13, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 10 0) (close _V0vanity_V0compiler_V0variables_V20_k14) 'string?)
V_CALL(VGetArg(upenv, 10-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k14, env)}),
      _V0string_Q);
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k12(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k12" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k12, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k12, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 9 0) (close _V0vanity_V0compiler_V0variables_V20_k13) 'string-length)
V_CALL(VGetArg(upenv, 9-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k13, env)}),
      _V0string__length);
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k11(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k11" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k11, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k11, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 8 0) (close _V0vanity_V0compiler_V0variables_V20_k12) 'open-output-string)
V_CALL(VGetArg(upenv, 8-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k12, env)}),
      _V0open__output__string);
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k10(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k10" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k10, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k10, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 7 0) (close _V0vanity_V0compiler_V0variables_V20_k11) 'get-output-string)
V_CALL(VGetArg(upenv, 7-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k11, env)}),
      _V0get__output__string);
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k9(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k9" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k9, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k9, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 6 0) (close _V0vanity_V0compiler_V0variables_V20_k10) 'string->symbol)
V_CALL(VGetArg(upenv, 6-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k10, env)}),
      _V0string___Gsymbol);
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k8(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k8" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k8, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k8, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 5 0) (close _V0vanity_V0compiler_V0variables_V20_k9) 'close-port)
V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k9, env)}),
      _V0close__port);
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k7(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k7" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k7, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k7, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 4 0) (close _V0vanity_V0compiler_V0variables_V20_k8) '=)
V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k8, env)}),
      _V0_E);
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k6(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k6" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k6, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k6, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 3 0) (close _V0vanity_V0compiler_V0variables_V20_k7) 'string-ref)
V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k7, env)}),
      _V0string__ref);
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k5(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k5" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k5, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k5, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 2 0) (close _V0vanity_V0compiler_V0variables_V20_k6) 'display)
V_CALL(upenv->up->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k6, env)}),
      _V0display);
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k4(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k4" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k4, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k4, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 1 0) (close _V0vanity_V0compiler_V0variables_V20_k5) '+)
V_CALL(upenv->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k5, env)}),
      _V0_P);
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k3(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k3" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k3, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k3, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 0 0) (close _V0vanity_V0compiler_V0variables_V20_k4) 'eq?)
V_CALL(_var0, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k4, env)}),
      _V0eq_Q);
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k2(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k2" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k2, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k2, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.make-import (close _V0vanity_V0compiler_V0variables_V20_k3) (##string ##string.555) (bruijn ##x.353 1 0) (bruijn ##x.354 0 0))
    V_CALL_FUNC(VMakeImport2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k3, env)}),
      VEncodePointer(&_V10string_D555.sym, VPOINTER_OTHER),
      upenv->vars[0],
      _var0);
 }
}
static void _V0vanity_V0compiler_V0variables_V20_k1(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_k1" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_k1, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0variables_V20_k2) (##string ##string.556))
    V_CALL_FUNC(VLoadLibrary2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k2, env)}),
      VEncodePointer(&_V10string_D556.sym, VPOINTER_OTHER));
 }
}
static void _V0vanity_V0compiler_V0variables_V20_lambda1(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0variables_V20_lambda1" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0variables_V20_lambda1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0variables_V20_lambda1, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0variables_V20_k1) (##string ##string.557))
    V_CALL_FUNC(VLoadLibrary2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k1, env)}),
      VEncodePointer(&_V10string_D557.sym, VPOINTER_OTHER));
 }
}
VFunc _V0vanity_V0compiler_V0variables_V20 = (VFunc)_V0vanity_V0compiler_V0variables_V20_lambda1;
