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
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D1520 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "_V0vanity_V0core_V20" };
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D1519 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "_V0vanity_V0list_V20" };
static struct { VBlob sym; char bytes[33]; } _V10_Dstring_D1518 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 33 }, "_V0vanity_V0compiler_V0utils_V20" };
static struct { VBlob sym; char bytes[34]; } _V10_Dstring_D1517 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 34 }, "_V0vanity_V0compiler_V0config_V20" };
static struct { VBlob sym; char bytes[31]; } _V10_Dstring_D1516 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 31 }, "_V0vanity_V0compiler_V0ffi_V20" };
VWEAK VWORD _V0memv;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0memv = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "memv" };
VWEAK VWORD _V0symbol_Q;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0symbol_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "symbol\?" };
VWEAK VWORD _V0list;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0list = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "list" };
VWEAK VWORD _V0map;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0map = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "map" };
VWEAK VWORD _V0string___Gsymbol;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V0string___Gsymbol = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "string->symbol" };
VWEAK VWORD _V0caar;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0caar = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "caar" };
VWEAK VWORD _V0caddar;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0caddar = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "caddar" };
VWEAK VWORD _V0member;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0member = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "member" };
VWEAK VWORD _V0cadar;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0cadar = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "cadar" };
VWEAK VWORD _V0symbol___Gstring;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V0symbol___Gstring = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "symbol->string" };
VWEAK VWORD _V0string__copy;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0string__copy = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "string-copy" };
VWEAK VWORD _V0cdadr;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0cdadr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "cdadr" };
VWEAK VWORD _V0caddr;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0caddr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "caddr" };
VWEAK VWORD _V0cdddr;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0cdddr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "cdddr" };
VWEAK VWORD _V0null_Q;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0null_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "null\?" };
VWEAK VWORD _V0file__exists_Q;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V0file__exists_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "file-exists\?" };
VWEAK VWORD _V0install__root;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V0install__root = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "install-root" };
VWEAK VWORD _V0gcc__path;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0gcc__path = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "gcc-path" };
VWEAK VWORD _V0open__input__process;VWEAK struct { VBlob sym; char bytes[19]; } _VW_V0open__input__process = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 19 }, "open-input-process" };
VWEAK VWORD _V0cons;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0cons = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "cons" };
VWEAK VWORD _V0close__port;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V0close__port = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "close-port" };
VWEAK VWORD _V0not;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0not = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "not" };
VWEAK VWORD _V0string_Q;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0string_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "string\?" };
VWEAK VWORD _V0compiler__error;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V0compiler__error = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "compiler-error" };
VWEAK VWORD _V0sprintf;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0sprintf = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "sprintf" };
VWEAK VWORD _V0cadr;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0cadr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "cadr" };
VWEAK VWORD _V0assv;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0assv = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "assv" };
VWEAK VWORD _V0iota;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0iota = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "iota" };
VWEAK VWORD _V0length;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0length = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "length" };
VWEAK VWORD _V0printf;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0printf = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "printf" };
VWEAK VWORD _V0eqv_Q;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0eqv_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "eqv\?" };
VWEAK VWORD _V0cdr;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0cdr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "cdr" };
VWEAK VWORD _V0for__each;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0for__each = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "for-each" };
VWEAK VWORD _V0car;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0car = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "car" };
VWEAK VWORD _V0pair_Q;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0pair_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "pair\?" };
VWEAK VWORD _V0_P;VWEAK struct { VBlob sym; char bytes[2]; } _VW_V0_P = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 2 }, "+" };
VWEAK VWORD _V0call__with__values;VWEAK struct { VBlob sym; char bytes[17]; } _VW_V0call__with__values = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 17 }, "call-with-values" };
VWEAK VWORD _V0call_Wcc;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0call_Wcc = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "call/cc" };
VWEAK VWORD _V0reverse;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0reverse = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "reverse" };
VWEAK VWORD _V0equal_Q;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0equal_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "equal\?" };
VWEAK VWORD _V0error;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0error = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "error" };
VWEAK VWORD _V0get__foreign__decoder;VWEAK struct { VBlob sym; char bytes[20]; } _VW_V0get__foreign__decoder = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 20 }, "get-foreign-decoder" };
VWEAK VWORD _V0get__foreign__encoder;VWEAK struct { VBlob sym; char bytes[20]; } _VW_V0get__foreign__encoder = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 20 }, "get-foreign-encoder" };
VWEAK VWORD _V0resolve__foreign__import;VWEAK struct { VBlob sym; char bytes[23]; } _VW_V0resolve__foreign__import = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 23 }, "resolve-foreign-import" };
VWEAK VWORD _V0print__foreign__function;VWEAK struct { VBlob sym; char bytes[23]; } _VW_V0print__foreign__function = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 23 }, "print-foreign-function" };
VWEAK VWORD _V0validate__foreign__function;VWEAK struct { VBlob sym; char bytes[26]; } _VW_V0validate__foreign__function = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 26 }, "validate-foreign-function" };
VWEAK VWORD _V0mangle__foreign__function;VWEAK struct { VBlob sym; char bytes[24]; } _VW_V0mangle__foreign__function = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 24 }, "mangle-foreign-function" };
static struct { VBlob sym; char bytes[6]; } _V10_Dstring_D1515 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 6 }, "~A;~N" };
static struct { VBlob sym; char bytes[39]; } _V10_Dstring_D1514 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 39 }, "void _V30~A_shim(V_CORE_ARGS, VWORD _k" };
static struct { VBlob sym; char bytes[15]; } _V10_Dstring_D1513 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 15 }, ", VWORD _arg~A" };
static struct { VBlob sym; char bytes[43]; } _V10_Dstring_D1512 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 43 }, "  V_ARG_CHECK3(runtime, \"~A\", ~A, argc);~N" };
static struct { VBlob sym; char bytes[62]; } _V10_Dstring_D1511 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 62 }, "  V_GC_CHECK2_VARARGS((VFunc)~A, runtime, statics, ~A, ~A, _k" };
static struct { VBlob sym; char bytes[9]; } _V10_Dstring_D1510 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 9 }, ", _arg~A" };
static struct { VBlob sym; char bytes[6]; } _V10_Dstring_D1509 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 6 }, ") {~N" };
static struct { VBlob sym; char bytes[6]; } _V10_Dstring_D1508 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 6 }, "));~N" };
static struct { VBlob sym; char bytes[9]; } _V10_Dstring_D1507 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 9 }, "  }~N}~N" };
static struct { VBlob sym; char bytes[31]; } _V10_Dstring_D1506 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 31 }, "  V_CALL(_k, runtime, _ret);~N" };
static struct { VBlob sym; char bytes[32]; } _V10_Dstring_D1505 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 32 }, "  V_CALL(_k, runtime, VVOID);~N" };
static struct { VBlob sym; char bytes[3]; } _V10_Dstring_D1504 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 3 }, ", " };
static struct { VBlob sym; char bytes[24]; } _V10_Dstring_D1503 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 24 }, "    VWORD _ret = ~A(~A(" };
static struct { VBlob sym; char bytes[5]; } _V10_Dstring_D1502 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 5 }, "(~A(" };
static struct { VBlob sym; char bytes[26]; } _V10_Dstring_D1501 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 26 }, "~A(runtime, _arg~A, \"~A\")" };
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D1500 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "VCheckedDecodeVWORD2" };
static struct { VBlob sym; char bytes[22]; } _V10_Dstring_D1499 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 22 }, "VCheckedDecodeNumber2" };
static struct { VBlob sym; char bytes[19]; } _V10_Dstring_D1498 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 19 }, "VCheckedDecodeInt2" };
static struct { VBlob sym; char bytes[29]; } _V10_Dstring_D1497 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 29 }, "VCheckedDecodeUnsignedShort2" };
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D1496 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "VCheckedDecodeShort2" };
static struct { VBlob sym; char bytes[28]; } _V10_Dstring_D1495 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 28 }, "VCheckedDecodeUnsignedChar2" };
static struct { VBlob sym; char bytes[26]; } _V10_Dstring_D1494 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 26 }, "VCheckedDecodeSignedChar2" };
static struct { VBlob sym; char bytes[20]; } _V10_Dstring_D1493 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 20 }, "VCheckedDecodeChar2" };
static struct { VBlob sym; char bytes[20]; } _V10_Dstring_D1492 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 20 }, "VCheckedDecodeBool2" };
static struct { VBlob sym; char bytes[30]; } _V10_Dstring_D1491 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 30 }, "VCheckedDecodeForeignPointer2" };
static struct { VBlob sym; char bytes[23]; } _V10_Dstring_D1490 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 23 }, "VCheckedDecodeVoidPtr2" };
static struct { VBlob sym; char bytes[28]; } _V10_Dstring_D1489 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 28 }, "VCheckedDecodeConstVoidPtr2" };
VWEAK VWORD _V0const__void__pointer;VWEAK struct { VBlob sym; char bytes[19]; } _VW_V0const__void__pointer = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 19 }, "const-void-pointer" };
static struct { VBlob sym; char bytes[28]; } _V10_Dstring_D1488 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 28 }, "VCheckedDecodeConstCString2" };
VWEAK VWORD _V0const__c__string;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V0const__c__string = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "const-c-string" };
static struct { VBlob sym; char bytes[23]; } _V10_Dstring_D1487 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 23 }, "VCheckedDecodeCString2" };
VWEAK VWORD _V0c__string;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0c__string = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "c-string" };
VWEAK VWORD _V0VWORD;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0VWORD = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "VWORD" };
static struct { VBlob sym; char bytes[14]; } _V10_Dstring_D1486 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 14 }, "VEncodeDouble" };
static struct { VBlob sym; char bytes[11]; } _V10_Dstring_D1485 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 11 }, "VEncodeInt" };
static struct { VBlob sym; char bytes[12]; } _V10_Dstring_D1484 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 12 }, "VEncodeChar" };
static struct { VBlob sym; char bytes[12]; } _V10_Dstring_D1483 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 12 }, "VEncodeBool" };
static struct { VBlob sym; char bytes[22]; } _V10_Dstring_D1482 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 22 }, "VEncodeForeignPointer" };
VWEAK VWORD _V0void__pointer;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V0void__pointer = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "void-pointer" };
static struct { VBlob sym; char bytes[12]; } _V10_Dstring_D1481 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 12 }, "_V30~A_shim" };
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D1480 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "VForeignParseHeaderC" };
static struct { VBlob sym; char bytes[30]; } _V10_Dstring_D1479 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 30 }, "Invalid foreign import syntax" };
VWEAK VWORD _V10foreign_Dimport;VWEAK struct { VBlob sym; char bytes[17]; } _VW_V10foreign_Dimport = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 17 }, "##foreign.import" };
static struct { VBlob sym; char bytes[15]; } _V10_Dstring_D1478 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 15 }, "#include <~A>\n" };
VWEAK VWORD _V10foreign_Ddeclare;VWEAK struct { VBlob sym; char bytes[18]; } _VW_V10foreign_Ddeclare = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 18 }, "##foreign.declare" };
static struct { VBlob sym; char bytes[22]; } _V10_Dstring_D1477 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 22 }, "File must be a string" };
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D1476 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "include/vscheme/stdc" };
static struct { VBlob sym; char bytes[66]; } _V10_Dstring_D1475 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 66 }, "~A -E -P -undef -std=c11 -nostdinc -D__VANITY__ -w ~A -I~A/~A/~A/" };
static struct { VBlob sym; char bytes[9]; } _V10_Dstring_D1474 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 9 }, "VExePath" };
static struct { VBlob sym; char bytes[4]; } _V10_Dstring_D1473 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 4 }, "~A/" };
static struct { VBlob sym; char bytes[6]; } _V10_Dstring_D1472 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 6 }, "~A/~A" };
static struct { VBlob sym; char bytes[27]; } _V10_Dstring_D1471 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 27 }, "Unable to open header file" };
static struct { VBlob sym; char bytes[19]; } _V10_Dstring_D1470 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 19 }, "VForeignParseDeclC" };
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D1469 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "VForeignReleaseParse" };
static struct { VBlob sym; char bytes[32]; } _V10_Dstring_D1468 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 32 }, "Invalid foreign function syntax" };
static struct { VBlob sym; char bytes[38]; } _V10_Dstring_D1467 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 38 }, "Unsupported foreign function language" };
static struct { VBlob sym; char bytes[37]; } _V10_Dstring_D1466 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 37 }, "Declaration is not a single function" };
static struct { VBlob sym; char bytes[18]; } _V10_Dstring_D1465 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 18 }, "naked_declaration" };
static struct { VBlob sym; char bytes[27]; } _V10_Dstring_D1464 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 27 }, "unknown entry in ffi table" };
static struct { VBlob sym; char bytes[40]; } _V10_Dstring_D1463 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 40 }, "variable redeclared as different symbol" };
static struct { VBlob sym; char bytes[1]; } _V10_Dstring_D1462 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 1 }, "" };
static struct { VBlob sym; char bytes[2]; } _V10_Dstring_D1461 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 2 }, "C" };
VWEAK VWORD _V10foreign_Dfunction;VWEAK struct { VBlob sym; char bytes[19]; } _VW_V10foreign_Dfunction = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 19 }, "##foreign.function" };
VWEAK VWORD _V0define;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0define = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "define" };
static struct { VBlob sym; char bytes[8]; } _V10_Dstring_D1460 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 8 }, "typedef" };
static struct { VBlob sym; char bytes[12]; } _V10_Dstring_D1459 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 12 }, "declaration" };
static struct { VBlob sym; char bytes[9]; } _V10_Dstring_D1458 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 9 }, "toplevel" };
VWEAK VWORD _V0enum;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0enum = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "enum" };
static struct { VBlob sym; char bytes[26]; } _V10_Dstring_D1457 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 26 }, "Unsupported C declaration" };
static struct { VBlob sym; char bytes[43]; } _V10_Dstring_D1456 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 43 }, "Unsupported arg type in C foreign-function" };
static struct { VBlob sym; char bytes[38]; } _V10_Dstring_D1455 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 38 }, "Not a simple function declaration: ~A" };
static struct { VBlob sym; char bytes[46]; } _V10_Dstring_D1454 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 46 }, "Unsupported return type in C foreign-function" };
static struct { VBlob sym; char bytes[22]; } _V10_Dstring_D1453 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 22 }, "Unsupported C typedef" };
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D1452 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "Not a simple typedef" };
VWEAK VWORD _V0restrict;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0restrict = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "restrict" };
VWEAK VWORD _V0static;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0static = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "static" };
static struct { VBlob sym; char bytes[40]; } _V10_Dstring_D1451 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 40 }, "Can only have one type in a declaration" };
static struct { VBlob sym; char bytes[43]; } _V10_Dstring_D1450 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 43 }, "Multiple storage specifiers in declaration" };
static struct { VBlob sym; char bytes[44]; } _V10_Dstring_D1449 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 44 }, "Unexpected storage specifier in declaration" };
VWEAK VWORD _V0extern;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0extern = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "extern" };
VWEAK VWORD _V0register;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0register = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "register" };
VWEAK VWORD _V0auto;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0auto = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "auto" };
VWEAK VWORD _V0volatile;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0volatile = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "volatile" };
VWEAK VWORD _V0signed;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0signed = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "signed" };
VWEAK VWORD _V0unsigned;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0unsigned = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "unsigned" };
VWEAK VWORD _V0longs;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0longs = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "longs" };
VWEAK VWORD _V0special;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0special = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "special" };
static struct { VBlob sym; char bytes[29]; } _V10_Dstring_D1448 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 29 }, "unsupported type combination" };
static struct { VBlob sym; char bytes[5]; } _V10_Dstring_D1447 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 5 }, "enum" };
VWEAK VWORD _V0unsigned__short;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V0unsigned__short = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "unsigned-short" };
VWEAK VWORD _V0short;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0short = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "short" };
VWEAK VWORD _V0unsigned__long__long;VWEAK struct { VBlob sym; char bytes[19]; } _VW_V0unsigned__long__long = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 19 }, "unsigned-long-long" };
VWEAK VWORD _V0long__long;VWEAK struct { VBlob sym; char bytes[10]; } _VW_V0long__long = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 10 }, "long-long" };
VWEAK VWORD _V0unsigned__long;VWEAK struct { VBlob sym; char bytes[14]; } _VW_V0unsigned__long = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 14 }, "unsigned-long" };
VWEAK VWORD _V0long;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0long = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "long" };
VWEAK VWORD _V0unsigned__int;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V0unsigned__int = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "unsigned-int" };
VWEAK VWORD _V0int;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0int = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "int" };
VWEAK VWORD _V0signed__char;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0signed__char = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "signed-char" };
VWEAK VWORD _V0unsigned__char;VWEAK struct { VBlob sym; char bytes[14]; } _VW_V0unsigned__char = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 14 }, "unsigned-char" };
VWEAK VWORD _V0char;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0char = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "char" };
VWEAK VWORD _V0typedef;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0typedef = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "typedef" };
static struct { VBlob sym; char bytes[17]; } _V10_Dstring_D1446 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 17 }, "unknown typename" };
VWEAK VWORD _V0_UBool;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0_UBool = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "_Bool" };
VWEAK VWORD _V0double;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0double = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "double" };
VWEAK VWORD _V0float;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0float = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "float" };
VWEAK VWORD _V0void;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0void = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "void" };
VWEAK VWORD _V0variable;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0variable = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "variable" };
static struct { VBlob sym; char bytes[26]; } _V10_Dstring_D1445 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 26 }, "match statement exhausted" };
VWEAK VWORD _V0pointer;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0pointer = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "pointer" };
static struct { VBlob sym; char bytes[8]; } _V10_Dstring_D1444 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 8 }, "pointer" };
static struct { VBlob sym; char bytes[15]; } _V10_Dstring_D1443 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 15 }, "parameter_list" };
VWEAK VWORD _V0function;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0function = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "function" };
static struct { VBlob sym; char bytes[9]; } _V10_Dstring_D1442 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 9 }, "function" };
VWEAK VWORD _V0const;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0const = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "const" };
static __attribute__((constructor)) void VDllMain1() {
  _V0memv = VEncodePointer(VLookupConstant("_V0memv", &_VW_V0memv), VPOINTER_OTHER);
  _V0symbol_Q = VEncodePointer(VLookupConstant("_V0symbol_Q", &_VW_V0symbol_Q), VPOINTER_OTHER);
  _V0list = VEncodePointer(VLookupConstant("_V0list", &_VW_V0list), VPOINTER_OTHER);
  _V0map = VEncodePointer(VLookupConstant("_V0map", &_VW_V0map), VPOINTER_OTHER);
  _V0string___Gsymbol = VEncodePointer(VLookupConstant("_V0string___Gsymbol", &_VW_V0string___Gsymbol), VPOINTER_OTHER);
  _V0caar = VEncodePointer(VLookupConstant("_V0caar", &_VW_V0caar), VPOINTER_OTHER);
  _V0caddar = VEncodePointer(VLookupConstant("_V0caddar", &_VW_V0caddar), VPOINTER_OTHER);
  _V0member = VEncodePointer(VLookupConstant("_V0member", &_VW_V0member), VPOINTER_OTHER);
  _V0cadar = VEncodePointer(VLookupConstant("_V0cadar", &_VW_V0cadar), VPOINTER_OTHER);
  _V0symbol___Gstring = VEncodePointer(VLookupConstant("_V0symbol___Gstring", &_VW_V0symbol___Gstring), VPOINTER_OTHER);
  _V0string__copy = VEncodePointer(VLookupConstant("_V0string__copy", &_VW_V0string__copy), VPOINTER_OTHER);
  _V0cdadr = VEncodePointer(VLookupConstant("_V0cdadr", &_VW_V0cdadr), VPOINTER_OTHER);
  _V0caddr = VEncodePointer(VLookupConstant("_V0caddr", &_VW_V0caddr), VPOINTER_OTHER);
  _V0cdddr = VEncodePointer(VLookupConstant("_V0cdddr", &_VW_V0cdddr), VPOINTER_OTHER);
  _V0null_Q = VEncodePointer(VLookupConstant("_V0null_Q", &_VW_V0null_Q), VPOINTER_OTHER);
  _V0file__exists_Q = VEncodePointer(VLookupConstant("_V0file__exists_Q", &_VW_V0file__exists_Q), VPOINTER_OTHER);
  _V0install__root = VEncodePointer(VLookupConstant("_V0install__root", &_VW_V0install__root), VPOINTER_OTHER);
  _V0gcc__path = VEncodePointer(VLookupConstant("_V0gcc__path", &_VW_V0gcc__path), VPOINTER_OTHER);
  _V0open__input__process = VEncodePointer(VLookupConstant("_V0open__input__process", &_VW_V0open__input__process), VPOINTER_OTHER);
  _V0cons = VEncodePointer(VLookupConstant("_V0cons", &_VW_V0cons), VPOINTER_OTHER);
  _V0close__port = VEncodePointer(VLookupConstant("_V0close__port", &_VW_V0close__port), VPOINTER_OTHER);
  _V0not = VEncodePointer(VLookupConstant("_V0not", &_VW_V0not), VPOINTER_OTHER);
  _V0string_Q = VEncodePointer(VLookupConstant("_V0string_Q", &_VW_V0string_Q), VPOINTER_OTHER);
  _V0compiler__error = VEncodePointer(VLookupConstant("_V0compiler__error", &_VW_V0compiler__error), VPOINTER_OTHER);
  _V0sprintf = VEncodePointer(VLookupConstant("_V0sprintf", &_VW_V0sprintf), VPOINTER_OTHER);
  _V0cadr = VEncodePointer(VLookupConstant("_V0cadr", &_VW_V0cadr), VPOINTER_OTHER);
  _V0assv = VEncodePointer(VLookupConstant("_V0assv", &_VW_V0assv), VPOINTER_OTHER);
  _V0iota = VEncodePointer(VLookupConstant("_V0iota", &_VW_V0iota), VPOINTER_OTHER);
  _V0length = VEncodePointer(VLookupConstant("_V0length", &_VW_V0length), VPOINTER_OTHER);
  _V0printf = VEncodePointer(VLookupConstant("_V0printf", &_VW_V0printf), VPOINTER_OTHER);
  _V0eqv_Q = VEncodePointer(VLookupConstant("_V0eqv_Q", &_VW_V0eqv_Q), VPOINTER_OTHER);
  _V0cdr = VEncodePointer(VLookupConstant("_V0cdr", &_VW_V0cdr), VPOINTER_OTHER);
  _V0for__each = VEncodePointer(VLookupConstant("_V0for__each", &_VW_V0for__each), VPOINTER_OTHER);
  _V0car = VEncodePointer(VLookupConstant("_V0car", &_VW_V0car), VPOINTER_OTHER);
  _V0pair_Q = VEncodePointer(VLookupConstant("_V0pair_Q", &_VW_V0pair_Q), VPOINTER_OTHER);
  _V0_P = VEncodePointer(VLookupConstant("_V0_P", &_VW_V0_P), VPOINTER_OTHER);
  _V0call__with__values = VEncodePointer(VLookupConstant("_V0call__with__values", &_VW_V0call__with__values), VPOINTER_OTHER);
  _V0call_Wcc = VEncodePointer(VLookupConstant("_V0call_Wcc", &_VW_V0call_Wcc), VPOINTER_OTHER);
  _V0reverse = VEncodePointer(VLookupConstant("_V0reverse", &_VW_V0reverse), VPOINTER_OTHER);
  _V0equal_Q = VEncodePointer(VLookupConstant("_V0equal_Q", &_VW_V0equal_Q), VPOINTER_OTHER);
  _V0error = VEncodePointer(VLookupConstant("_V0error", &_VW_V0error), VPOINTER_OTHER);
  _V0get__foreign__decoder = VEncodePointer(VLookupConstant("_V0get__foreign__decoder", &_VW_V0get__foreign__decoder), VPOINTER_OTHER);
  _V0get__foreign__encoder = VEncodePointer(VLookupConstant("_V0get__foreign__encoder", &_VW_V0get__foreign__encoder), VPOINTER_OTHER);
  _V0resolve__foreign__import = VEncodePointer(VLookupConstant("_V0resolve__foreign__import", &_VW_V0resolve__foreign__import), VPOINTER_OTHER);
  _V0print__foreign__function = VEncodePointer(VLookupConstant("_V0print__foreign__function", &_VW_V0print__foreign__function), VPOINTER_OTHER);
  _V0validate__foreign__function = VEncodePointer(VLookupConstant("_V0validate__foreign__function", &_VW_V0validate__foreign__function), VPOINTER_OTHER);
  _V0mangle__foreign__function = VEncodePointer(VLookupConstant("_V0mangle__foreign__function", &_VW_V0mangle__foreign__function), VPOINTER_OTHER);
  _V0const__void__pointer = VEncodePointer(VLookupConstant("_V0const__void__pointer", &_VW_V0const__void__pointer), VPOINTER_OTHER);
  _V0const__c__string = VEncodePointer(VLookupConstant("_V0const__c__string", &_VW_V0const__c__string), VPOINTER_OTHER);
  _V0c__string = VEncodePointer(VLookupConstant("_V0c__string", &_VW_V0c__string), VPOINTER_OTHER);
  _V0VWORD = VEncodePointer(VLookupConstant("_V0VWORD", &_VW_V0VWORD), VPOINTER_OTHER);
  _V0void__pointer = VEncodePointer(VLookupConstant("_V0void__pointer", &_VW_V0void__pointer), VPOINTER_OTHER);
  _V10foreign_Dimport = VEncodePointer(VLookupConstant("_V10foreign_Dimport", &_VW_V10foreign_Dimport), VPOINTER_OTHER);
  _V10foreign_Ddeclare = VEncodePointer(VLookupConstant("_V10foreign_Ddeclare", &_VW_V10foreign_Ddeclare), VPOINTER_OTHER);
  _V10foreign_Dfunction = VEncodePointer(VLookupConstant("_V10foreign_Dfunction", &_VW_V10foreign_Dfunction), VPOINTER_OTHER);
  _V0define = VEncodePointer(VLookupConstant("_V0define", &_VW_V0define), VPOINTER_OTHER);
  _V0enum = VEncodePointer(VLookupConstant("_V0enum", &_VW_V0enum), VPOINTER_OTHER);
  _V0restrict = VEncodePointer(VLookupConstant("_V0restrict", &_VW_V0restrict), VPOINTER_OTHER);
  _V0static = VEncodePointer(VLookupConstant("_V0static", &_VW_V0static), VPOINTER_OTHER);
  _V0extern = VEncodePointer(VLookupConstant("_V0extern", &_VW_V0extern), VPOINTER_OTHER);
  _V0register = VEncodePointer(VLookupConstant("_V0register", &_VW_V0register), VPOINTER_OTHER);
  _V0auto = VEncodePointer(VLookupConstant("_V0auto", &_VW_V0auto), VPOINTER_OTHER);
  _V0volatile = VEncodePointer(VLookupConstant("_V0volatile", &_VW_V0volatile), VPOINTER_OTHER);
  _V0signed = VEncodePointer(VLookupConstant("_V0signed", &_VW_V0signed), VPOINTER_OTHER);
  _V0unsigned = VEncodePointer(VLookupConstant("_V0unsigned", &_VW_V0unsigned), VPOINTER_OTHER);
  _V0longs = VEncodePointer(VLookupConstant("_V0longs", &_VW_V0longs), VPOINTER_OTHER);
  _V0special = VEncodePointer(VLookupConstant("_V0special", &_VW_V0special), VPOINTER_OTHER);
  _V0unsigned__short = VEncodePointer(VLookupConstant("_V0unsigned__short", &_VW_V0unsigned__short), VPOINTER_OTHER);
  _V0short = VEncodePointer(VLookupConstant("_V0short", &_VW_V0short), VPOINTER_OTHER);
  _V0unsigned__long__long = VEncodePointer(VLookupConstant("_V0unsigned__long__long", &_VW_V0unsigned__long__long), VPOINTER_OTHER);
  _V0long__long = VEncodePointer(VLookupConstant("_V0long__long", &_VW_V0long__long), VPOINTER_OTHER);
  _V0unsigned__long = VEncodePointer(VLookupConstant("_V0unsigned__long", &_VW_V0unsigned__long), VPOINTER_OTHER);
  _V0long = VEncodePointer(VLookupConstant("_V0long", &_VW_V0long), VPOINTER_OTHER);
  _V0unsigned__int = VEncodePointer(VLookupConstant("_V0unsigned__int", &_VW_V0unsigned__int), VPOINTER_OTHER);
  _V0int = VEncodePointer(VLookupConstant("_V0int", &_VW_V0int), VPOINTER_OTHER);
  _V0signed__char = VEncodePointer(VLookupConstant("_V0signed__char", &_VW_V0signed__char), VPOINTER_OTHER);
  _V0unsigned__char = VEncodePointer(VLookupConstant("_V0unsigned__char", &_VW_V0unsigned__char), VPOINTER_OTHER);
  _V0char = VEncodePointer(VLookupConstant("_V0char", &_VW_V0char), VPOINTER_OTHER);
  _V0typedef = VEncodePointer(VLookupConstant("_V0typedef", &_VW_V0typedef), VPOINTER_OTHER);
  _V0_UBool = VEncodePointer(VLookupConstant("_V0_UBool", &_VW_V0_UBool), VPOINTER_OTHER);
  _V0double = VEncodePointer(VLookupConstant("_V0double", &_VW_V0double), VPOINTER_OTHER);
  _V0float = VEncodePointer(VLookupConstant("_V0float", &_VW_V0float), VPOINTER_OTHER);
  _V0void = VEncodePointer(VLookupConstant("_V0void", &_VW_V0void), VPOINTER_OTHER);
  _V0variable = VEncodePointer(VLookupConstant("_V0variable", &_VW_V0variable), VPOINTER_OTHER);
  _V0pointer = VEncodePointer(VLookupConstant("_V0pointer", &_VW_V0pointer), VPOINTER_OTHER);
  _V0function = VEncodePointer(VLookupConstant("_V0function", &_VW_V0function), VPOINTER_OTHER);
  _V0const = VEncodePointer(VLookupConstant("_V0const", &_VW_V0const), VPOINTER_OTHER);
}
static void _V10_Ddrop__const_D217_k49(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Ddrop__const_D217_k49" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddrop__const_D217_k49, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddrop__const_D217_k49, runtime, upenv, 1, argc, _var0) {
  // (if (##inline ##vcore.pair? (bruijn ##.expr.3.224 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.3.224 0 0))) ((bruijn ##.kk.0.221 5 1) (bruijn ##.k.565 2 0) (##inline ##vcore.car (bruijn ##.expr.3.224 0 0))) ((bruijn ##.k.565 2 0) #f)) ((bruijn ##.k.565 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    V_CALL(VGetArg(upenv, 5-1, 1), runtime,
      upenv->up->vars[0],
      VInlineCar2(runtime,
        _var0));
} else {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
} else {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Ddrop__const_D217_k48(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Ddrop__const_D217_k48" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddrop__const_D217_k48, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddrop__const_D217_k48, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.566 0 0) ((close _V10_Ddrop__const_D217_k49) (##inline ##vcore.cdr (bruijn ##.expr.2.223 2 0))) ((bruijn ##.k.565 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(_V10_Ddrop__const_D217_k49, env, runtime,
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Ddrop__const_D217_k47(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Ddrop__const_D217_k47" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddrop__const_D217_k47, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddrop__const_D217_k47, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.2.223 1 0)) ((bruijn ##.equal?.194 8 39) (close _V10_Ddrop__const_D217_k48) 'const (##inline ##vcore.car (bruijn ##.expr.2.223 1 0))) ((bruijn ##.k.565 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 8-1, 39), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddrop__const_D217_k48, env)}),
      _V0const,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Ddrop__const_D217_k50(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Ddrop__const_D217_k50" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddrop__const_D217_k50, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddrop__const_D217_k50, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.kk.0.221 3 1) (bruijn ##.k.562 3 0) (bruijn ##.x.220 4 1))
    V_CALL(upenv->up->up->vars[1], runtime,
      upenv->up->up->vars[0],
      upenv->up->up->up->vars[1]);
 }
}
static void _V10_Ddrop__const_D217_lambda7(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Ddrop__const_D217_lambda7" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddrop__const_D217_lambda7, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Ddrop__const_D217_k47) (close _V10_Ddrop__const_D217_k50))
    V_CALL_FUNC(_V10_Ddrop__const_D217_k47, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddrop__const_D217_k50, env)}));
 }
}
static void _V10_Ddrop__const_D217_lambda6(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Ddrop__const_D217_lambda6" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddrop__const_D217_lambda6, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Ddrop__const_D217_lambda7) (bruijn ##.input.1.222 0 0))
    V_CALL_FUNC(_V10_Ddrop__const_D217_lambda7, env, runtime,
      _var0);
 }
}
static void _V10_Ddrop__const_D217_lambda5(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V10_Ddrop__const_D217_lambda5" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddrop__const_D217_lambda5, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddrop__const_D217_lambda5, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V10_Ddrop__const_D217_lambda6) (bruijn ##.x.220 1 1))
    V_CALL_FUNC(_V10_Ddrop__const_D217_lambda6, env, runtime,
      upenv->vars[1]);
 }
}
static void _V10_Ddrop__const_D217_lambda4(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V10_Ddrop__const_D217_lambda4" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddrop__const_D217_lambda4, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddrop__const_D217_lambda4, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##.call/cc.192 4 37) (bruijn ##.k.561 0 0) (close _V10_Ddrop__const_D217_lambda5))
    V_CALL(upenv->up->up->up->vars[37], runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddrop__const_D217_lambda5, env)}));
 }
}
static void _V10_Dreduce__args_D218_k58(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dreduce__args_D218_k58" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dreduce__args_D218_k58, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dreduce__args_D218_k58, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.cons.174 12 19) (bruijn ##.k.571 8 0) (bruijn ##.x.573 2 0) (bruijn ##.x.574 0 0))
    V_CALL(VGetArg(upenv, 12-1, 19), runtime,
      VGetArg(upenv, 8-1, 0),
      upenv->up->vars[0],
      _var0);
 }
}
static void _V10_Dreduce__args_D218_k57(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dreduce__args_D218_k57" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dreduce__args_D218_k57, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dreduce__args_D218_k57, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.reduce-args.218 8 1) (close _V10_Dreduce__args_D218_k58) (bruijn ##.x.575 0 0))
    V_CALL(VGetArg(upenv, 8-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dreduce__args_D218_k58, env)}),
      _var0);
 }
}
static void _V10_Dreduce__args_D218_k56(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dreduce__args_D218_k56" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dreduce__args_D218_k56, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dreduce__args_D218_k56, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cdr.186 10 31) (close _V10_Dreduce__args_D218_k57) (bruijn ##.args.226 6 1))
    V_CALL(VGetArg(upenv, 10-1, 31), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dreduce__args_D218_k57, env)}),
      VGetArg(upenv, 6-1, 1));
 }
}
static void _V10_Dreduce__args_D218_k55(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dreduce__args_D218_k55" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dreduce__args_D218_k55, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dreduce__args_D218_k55, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cadr.180 9 25) (close _V10_Dreduce__args_D218_k56) (bruijn ##.x.576 0 0))
    V_CALL(VGetArg(upenv, 9-1, 25), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dreduce__args_D218_k56, env)}),
      _var0);
 }
}
static void _V10_Dreduce__args_D218_k54(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dreduce__args_D218_k54" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dreduce__args_D218_k54, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dreduce__args_D218_k54, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.reduce-declare.196 7 0) (close _V10_Dreduce__args_D218_k55) (bruijn ##.x.577 1 0) (bruijn ##.x.578 0 0) (bruijn ##.table.216 6 3))
    V_CALL(VGetArg(upenv, 7-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dreduce__args_D218_k55, env)}),
      upenv->vars[0],
      _var0,
      VGetArg(upenv, 6-1, 3));
 }
}
static void _V10_Dreduce__args_D218_k53(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dreduce__args_D218_k53" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dreduce__args_D218_k53, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dreduce__args_D218_k53, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cadar.163 7 8) (close _V10_Dreduce__args_D218_k54) (bruijn ##.args.226 3 1))
    V_CALL(VGetArg(upenv, 7-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dreduce__args_D218_k54, env)}),
      upenv->up->up->vars[1]);
 }
}
static void _V10_Dreduce__args_D218_k52(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dreduce__args_D218_k52" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dreduce__args_D218_k52, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dreduce__args_D218_k52, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.reduce-type.198 5 2) (close _V10_Dreduce__args_D218_k53) (bruijn ##.x.579 0 0) (bruijn ##.table.216 4 3) #f)
    V_CALL(VGetArg(upenv, 5-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dreduce__args_D218_k53, env)}),
      _var0,
      upenv->up->up->up->vars[3],
      VEncodeBool(false));
 }
}
static void _V10_Dreduce__args_D218_k51(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dreduce__args_D218_k51" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dreduce__args_D218_k51, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dreduce__args_D218_k51, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.572 0 0) ((bruijn ##.k.571 1 0) '()) ((bruijn ##.caar.160 5 5) (close _V10_Dreduce__args_D218_k52) (bruijn ##.args.226 1 1)))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->vars[0], runtime,
      VNULL);
} else {
    V_CALL(VGetArg(upenv, 5-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dreduce__args_D218_k52, env)}),
      upenv->vars[1]);
}
 }
}
static void _V10_Dreduce__args_D218_lambda8(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V10_Dreduce__args_D218_lambda8" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dreduce__args_D218_lambda8, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dreduce__args_D218_lambda8, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##.null?.169 4 14) (close _V10_Dreduce__args_D218_k51) (bruijn ##.args.226 0 1))
    V_CALL(upenv->up->up->up->vars[14], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dreduce__args_D218_k51, env)}),
      _var1);
 }
}
static void _V10_Dreduce__declare__loop_D219_k61(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dreduce__declare__loop_D219_k61" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dreduce__declare__loop_D219_k61, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dreduce__declare__loop_D219_k61, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##.p.650 1 0) (##vcore.blob=? (bruijn ##.k.651 0 0) (##string ##.string.1442) (##inline ##vcore.car (bruijn ##.expr.6.231 3 0))) ((bruijn ##.k.651 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL_FUNC(VBlobEqv2, NULL, runtime,
      _var0,
      VEncodePointer(&_V10_Dstring_D1442.sym, VPOINTER_OTHER),
      VInlineCar2(runtime,
        upenv->up->up->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dreduce__declare__loop_D219_k64(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dreduce__declare__loop_D219_k64" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dreduce__declare__loop_D219_k64, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dreduce__declare__loop_D219_k64, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.kk.4.229 7 1) (bruijn ##.k.641 4 0) (##inline ##vcore.cons 'function (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.7.232 1 0)) (##inline ##vcore.cons (bruijn ##.x.648 0 0) '()))))
    V_CALL(VGetArg(upenv, 7-1, 1), runtime,
      upenv->up->up->up->vars[0],
      VInlineCons2(runtime,
        _V0function,
        VInlineCons2(runtime,
        VInlineCar2(runtime,
        upenv->vars[0]),
        VInlineCons2(runtime,
        _var0,
        VNULL))));
 }
}
static void _V10_Dreduce__declare__loop_D219_k63(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dreduce__declare__loop_D219_k63" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dreduce__declare__loop_D219_k63, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dreduce__declare__loop_D219_k63, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.7.232 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.7.232 0 0))) ((bruijn ##.drop-const.217 8 0) (close _V10_Dreduce__declare__loop_D219_k64) (bruijn ##.ret.227 7 1)) ((bruijn ##.k.641 3 0) #f)) ((bruijn ##.k.641 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    V_CALL(VGetArg(upenv, 8-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dreduce__declare__loop_D219_k64, env)}),
      VGetArg(upenv, 7-1, 1));
} else {
    V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
} else {
    V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dreduce__declare__loop_D219_k62(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dreduce__declare__loop_D219_k62" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dreduce__declare__loop_D219_k62, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dreduce__declare__loop_D219_k62, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.642 0 0) ((close _V10_Dreduce__declare__loop_D219_k63) (##inline ##vcore.cdr (bruijn ##.expr.6.231 3 0))) ((bruijn ##.k.641 2 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(_V10_Dreduce__declare__loop_D219_k63, env, runtime,
      VInlineCdr2(runtime,
        upenv->up->up->vars[0]));
} else {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dreduce__declare__loop_D219_k60(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dreduce__declare__loop_D219_k60" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dreduce__declare__loop_D219_k60, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dreduce__declare__loop_D219_k60, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dreduce__declare__loop_D219_k61) (close _V10_Dreduce__declare__loop_D219_k62))
    V_CALL_FUNC(_V10_Dreduce__declare__loop_D219_k61, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dreduce__declare__loop_D219_k62, env)}));
 }
}
static void _V10_Dreduce__declare__loop_D219_k59(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dreduce__declare__loop_D219_k59" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dreduce__declare__loop_D219_k59, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dreduce__declare__loop_D219_k59, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.6.231 1 0)) (##vcore.string? (close _V10_Dreduce__declare__loop_D219_k60) (##inline ##vcore.car (bruijn ##.expr.6.231 1 0))) ((bruijn ##.k.641 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL_FUNC(VStringP2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dreduce__declare__loop_D219_k60, env)}),
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dreduce__declare__loop_D219_k68(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dreduce__declare__loop_D219_k68" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dreduce__declare__loop_D219_k68, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dreduce__declare__loop_D219_k68, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##.p.636 1 0) (##vcore.blob=? (bruijn ##.k.637 0 0) (##string ##.string.1442) (##inline ##vcore.car (bruijn ##.expr.8.234 3 0))) ((bruijn ##.k.637 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL_FUNC(VBlobEqv2, NULL, runtime,
      _var0,
      VEncodePointer(&_V10_Dstring_D1442.sym, VPOINTER_OTHER),
      VInlineCar2(runtime,
        upenv->up->up->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dreduce__declare__loop_D219_k74(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dreduce__declare__loop_D219_k74" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dreduce__declare__loop_D219_k74, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dreduce__declare__loop_D219_k74, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##.p.632 1 0) (##vcore.blob=? (bruijn ##.k.633 0 0) (##string ##.string.1443) (##inline ##vcore.car (bruijn ##.expr.11.238 2 0))) ((bruijn ##.k.633 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL_FUNC(VBlobEqv2, NULL, runtime,
      _var0,
      VEncodePointer(&_V10_Dstring_D1443.sym, VPOINTER_OTHER),
      VInlineCar2(runtime,
        upenv->up->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dloop_D241_k77(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D241_k77" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D241_k77, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D241_k77, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.kk.14.240 4 1) (bruijn ##.k.619 1 0) (bruijn ##.expr.16.242 2 1) (bruijn ##.x.620 0 0))
    V_CALL(upenv->up->up->up->vars[1], runtime,
      upenv->vars[0],
      upenv->up->vars[1],
      _var0);
 }
}
static void _V10_Dloop_D241_k76(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D241_k76" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D241_k76, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D241_k76, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.not (##inline ##vcore.pair? (bruijn ##.expr.16.242 1 1))) ((bruijn ##.reverse.193 22 38) (close _V10_Dloop_D241_k77) (bruijn ##.args.13.243 1 2)) ((bruijn ##.k.619 0 0) #f))
if(VDecodeBool(
VInlineNot2(runtime,
        VInlinePairP2(runtime,
        upenv->vars[1])))) {
    V_CALL(VGetArg(upenv, 22-1, 38), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D241_k77, env)}),
      upenv->vars[2]);
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dloop_D241_k80(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D241_k80" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D241_k80, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D241_k80, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.kk.14.240 7 1) (bruijn ##.k.613 2 0) (bruijn ##.expr.16.242 5 1) (bruijn ##.x.615 0 0))
    V_CALL(VGetArg(upenv, 7-1, 1), runtime,
      upenv->up->vars[0],
      VGetArg(upenv, 5-1, 1),
      _var0);
 }
}
static void _V10_Dloop_D241_k79(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D241_k79" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D241_k79, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D241_k79, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.reverse.193 25 38) (close _V10_Dloop_D241_k80) (bruijn ##.args.13.243 4 2))
    V_CALL(VGetArg(upenv, 25-1, 38), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D241_k80, env)}),
      upenv->up->up->up->vars[2]);
 }
}
static void _V10_Dloop_D241_lambda18(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V10_Dloop_D241_lambda18" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D241_lambda18, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D241_lambda18, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##.kk.15.244 0 1) (close _V10_Dloop_D241_k79) (##inline ##vcore.cdr (bruijn ##.expr.16.242 3 1)) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.16.242 3 1)) (bruijn ##.args.13.243 3 2)))
    V_CALL(_var1, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D241_k79, env)}),
      VInlineCdr2(runtime,
        upenv->up->up->vars[1]),
      VInlineCons2(runtime,
        VInlineCar2(runtime,
        upenv->up->up->vars[1]),
        upenv->up->up->vars[2]));
 }
}
static void _V10_Dloop_D241_lambda17(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D241_lambda17" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D241_lambda17, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D241_lambda17, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.call/cc.192 23 37) (bruijn ##.k.612 0 0) (close _V10_Dloop_D241_lambda18))
    V_CALL(VGetArg(upenv, 23-1, 37), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D241_lambda18, env)}));
 }
}
static void _V10_Dloop_D241_k78(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D241_k78" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D241_k78, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D241_k78, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.call-with-values.191 22 36) (bruijn ##.k.610 1 0) (close _V10_Dloop_D241_lambda17) (bruijn ##.loop.241 2 0))
    V_CALL(VGetArg(upenv, 22-1, 36), runtime,
      upenv->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D241_lambda17, env)}),
      upenv->up->vars[0]);
 }
}
static void _V10_Dloop_D241_lambda16(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V10_Dloop_D241_lambda16" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D241_lambda16, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D241_lambda16, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((close _V10_Dloop_D241_k76) (close _V10_Dloop_D241_k78))
    V_CALL_FUNC(_V10_Dloop_D241_k76, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D241_k78, env)}));
 }
}
static void _V10_Dreduce__declare__loop_D219_lambda15(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V10_Dreduce__declare__loop_D219_lambda15" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dreduce__declare__loop_D219_lambda15, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dreduce__declare__loop_D219_lambda15, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (letrec 1 ((close _V10_Dloop_D241_lambda16)) ((bruijn ##.loop.241 0 0) (bruijn ##.k.609 1 0) (##inline ##vcore.cdr (bruijn ##.expr.11.238 5 0)) '()))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D241_lambda16, env)});
    V_CALL(env->vars[0], runtime,
      upenv->vars[0],
      VInlineCdr2(runtime,
        VGetArg(upenv, 5-1, 0)),
      VNULL);
    }
 }
}
static void _V10_Dreduce__declare__loop_D219_lambda14(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dreduce__declare__loop_D219_lambda14" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dreduce__declare__loop_D219_lambda14, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dreduce__declare__loop_D219_lambda14, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.call/cc.192 18 37) (bruijn ##.k.608 0 0) (close _V10_Dreduce__declare__loop_D219_lambda15))
    V_CALL(VGetArg(upenv, 18-1, 37), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dreduce__declare__loop_D219_lambda15, env)}));
 }
}
static void _V10_Dreduce__declare__loop_D219_k83(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dreduce__declare__loop_D219_k83" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dreduce__declare__loop_D219_k83, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dreduce__declare__loop_D219_k83, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.kk.4.229 16 1) (bruijn ##.k.622 3 0) (##inline ##vcore.cons 'function (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.9.235 8 0)) (##inline ##vcore.cons (bruijn ##.x.628 2 0) (bruijn ##.x.629 0 0)))))
    V_CALL(VGetArg(upenv, 16-1, 1), runtime,
      upenv->up->up->vars[0],
      VInlineCons2(runtime,
        _V0function,
        VInlineCons2(runtime,
        VInlineCar2(runtime,
        VGetArg(upenv, 8-1, 0)),
        VInlineCons2(runtime,
        upenv->up->vars[0],
        _var0))));
 }
}
static void _V10_Dreduce__declare__loop_D219_k82(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dreduce__declare__loop_D219_k82" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dreduce__declare__loop_D219_k82, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dreduce__declare__loop_D219_k82, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.map.158 20 3) (close _V10_Dreduce__declare__loop_D219_k83) (bruijn ##.drop-const.217 17 0) (bruijn ##.x.630 0 0))
    V_CALL(VGetArg(upenv, 20-1, 3), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dreduce__declare__loop_D219_k83, env)}),
      VGetArg(upenv, 17-1, 0),
      _var0);
 }
}
static void _V10_Dreduce__declare__loop_D219_k81(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dreduce__declare__loop_D219_k81" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dreduce__declare__loop_D219_k81, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dreduce__declare__loop_D219_k81, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.reduce-args.218 16 1) (close _V10_Dreduce__declare__loop_D219_k82) (bruijn ##.args.247 1 2))
    V_CALL(VGetArg(upenv, 16-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dreduce__declare__loop_D219_k82, env)}),
      upenv->vars[2]);
 }
}
static void _V10_Dreduce__declare__loop_D219_lambda19(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V10_Dreduce__declare__loop_D219_lambda19" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dreduce__declare__loop_D219_lambda19, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dreduce__declare__loop_D219_lambda19, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // (if (##inline ##vcore.null? (bruijn ##.tail-expr.246 0 1)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.10.237 4 0))) ((bruijn ##.drop-const.217 15 0) (close _V10_Dreduce__declare__loop_D219_k81) (bruijn ##.ret.227 14 1)) ((bruijn ##.k.622 0 0) #f)) ((bruijn ##.k.622 0 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var1))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        upenv->up->up->up->vars[0])))) {
    V_CALL(VGetArg(upenv, 15-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dreduce__declare__loop_D219_k81, env)}),
      VGetArg(upenv, 14-1, 1));
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
static void _V10_Dreduce__declare__loop_D219_k75(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dreduce__declare__loop_D219_k75" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dreduce__declare__loop_D219_k75, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dreduce__declare__loop_D219_k75, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.607 0 0) ((bruijn ##.call-with-values.191 17 36) (bruijn ##.k.602 7 0) (close _V10_Dreduce__declare__loop_D219_lambda14) (close _V10_Dreduce__declare__loop_D219_lambda19)) ((bruijn ##.k.602 7 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 17-1, 36), runtime,
      VGetArg(upenv, 7-1, 0),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dreduce__declare__loop_D219_lambda14, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dreduce__declare__loop_D219_lambda19, env)}));
} else {
    V_CALL(VGetArg(upenv, 7-1, 0), runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dreduce__declare__loop_D219_k73(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dreduce__declare__loop_D219_k73" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dreduce__declare__loop_D219_k73, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dreduce__declare__loop_D219_k73, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dreduce__declare__loop_D219_k74) (close _V10_Dreduce__declare__loop_D219_k75))
    V_CALL_FUNC(_V10_Dreduce__declare__loop_D219_k74, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dreduce__declare__loop_D219_k75, env)}));
 }
}
static void _V10_Dreduce__declare__loop_D219_k72(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dreduce__declare__loop_D219_k72" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dreduce__declare__loop_D219_k72, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dreduce__declare__loop_D219_k72, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.11.238 0 0)) (##vcore.string? (close _V10_Dreduce__declare__loop_D219_k73) (##inline ##vcore.car (bruijn ##.expr.11.238 0 0))) ((bruijn ##.k.602 5 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL_FUNC(VStringP2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dreduce__declare__loop_D219_k73, env)}),
      VInlineCar2(runtime,
        _var0));
} else {
    V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dreduce__declare__loop_D219_k71(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dreduce__declare__loop_D219_k71" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dreduce__declare__loop_D219_k71, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dreduce__declare__loop_D219_k71, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.10.237 0 0)) ((close _V10_Dreduce__declare__loop_D219_k72) (##inline ##vcore.car (bruijn ##.expr.10.237 0 0))) ((bruijn ##.k.602 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL_FUNC(_V10_Dreduce__declare__loop_D219_k72, env, runtime,
      VInlineCar2(runtime,
        _var0));
} else {
    V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dreduce__declare__loop_D219_k70(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dreduce__declare__loop_D219_k70" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dreduce__declare__loop_D219_k70, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dreduce__declare__loop_D219_k70, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.9.235 0 0)) ((close _V10_Dreduce__declare__loop_D219_k71) (##inline ##vcore.cdr (bruijn ##.expr.9.235 0 0))) ((bruijn ##.k.602 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL_FUNC(_V10_Dreduce__declare__loop_D219_k71, env, runtime,
      VInlineCdr2(runtime,
        _var0));
} else {
    V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dreduce__declare__loop_D219_k69(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dreduce__declare__loop_D219_k69" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dreduce__declare__loop_D219_k69, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dreduce__declare__loop_D219_k69, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.603 0 0) ((close _V10_Dreduce__declare__loop_D219_k70) (##inline ##vcore.cdr (bruijn ##.expr.8.234 3 0))) ((bruijn ##.k.602 2 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(_V10_Dreduce__declare__loop_D219_k70, env, runtime,
      VInlineCdr2(runtime,
        upenv->up->up->vars[0]));
} else {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dreduce__declare__loop_D219_k67(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dreduce__declare__loop_D219_k67" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dreduce__declare__loop_D219_k67, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dreduce__declare__loop_D219_k67, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dreduce__declare__loop_D219_k68) (close _V10_Dreduce__declare__loop_D219_k69))
    V_CALL_FUNC(_V10_Dreduce__declare__loop_D219_k68, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dreduce__declare__loop_D219_k69, env)}));
 }
}
static void _V10_Dreduce__declare__loop_D219_k66(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dreduce__declare__loop_D219_k66" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dreduce__declare__loop_D219_k66, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dreduce__declare__loop_D219_k66, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.8.234 1 0)) (##vcore.string? (close _V10_Dreduce__declare__loop_D219_k67) (##inline ##vcore.car (bruijn ##.expr.8.234 1 0))) ((bruijn ##.k.602 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL_FUNC(VStringP2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dreduce__declare__loop_D219_k67, env)}),
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dreduce__declare__loop_D219_k87(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dreduce__declare__loop_D219_k87" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dreduce__declare__loop_D219_k87, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dreduce__declare__loop_D219_k87, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##.p.597 1 0) (##vcore.blob=? (bruijn ##.k.598 0 0) (##string ##.string.1444) (##inline ##vcore.car (bruijn ##.expr.17.248 3 0))) ((bruijn ##.k.598 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL_FUNC(VBlobEqv2, NULL, runtime,
      _var0,
      VEncodePointer(&_V10_Dstring_D1444.sym, VPOINTER_OTHER),
      VInlineCar2(runtime,
        upenv->up->up->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dreduce__declare__loop_D219_k91(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dreduce__declare__loop_D219_k91" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dreduce__declare__loop_D219_k91, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dreduce__declare__loop_D219_k91, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.kk.4.229 12 1) (bruijn ##.k.590 5 0) (bruijn ##.x.594 0 0))
    V_CALL(VGetArg(upenv, 12-1, 1), runtime,
      VGetArg(upenv, 5-1, 0),
      _var0);
 }
}
static void _V10_Dreduce__declare__loop_D219_k90(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dreduce__declare__loop_D219_k90" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dreduce__declare__loop_D219_k90, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dreduce__declare__loop_D219_k90, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.reduce-declare-loop.219 13 2) (close _V10_Dreduce__declare__loop_D219_k91) (bruijn ##.x.595 0 0) (##inline ##vcore.car (bruijn ##.expr.18.249 1 0)))
    V_CALL(VGetArg(upenv, 13-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dreduce__declare__loop_D219_k91, env)}),
      _var0,
      VInlineCar2(runtime,
        upenv->vars[0]));
 }
}
static void _V10_Dreduce__declare__loop_D219_k89(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dreduce__declare__loop_D219_k89" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dreduce__declare__loop_D219_k89, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dreduce__declare__loop_D219_k89, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.18.249 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.18.249 0 0))) ((bruijn ##.list.157 15 2) (close _V10_Dreduce__declare__loop_D219_k90) 'pointer (bruijn ##.ret.227 11 1)) ((bruijn ##.k.590 3 0) #f)) ((bruijn ##.k.590 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    V_CALL(VGetArg(upenv, 15-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dreduce__declare__loop_D219_k90, env)}),
      _V0pointer,
      VGetArg(upenv, 11-1, 1));
} else {
    V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
} else {
    V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dreduce__declare__loop_D219_k88(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dreduce__declare__loop_D219_k88" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dreduce__declare__loop_D219_k88, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dreduce__declare__loop_D219_k88, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.591 0 0) ((close _V10_Dreduce__declare__loop_D219_k89) (##inline ##vcore.cdr (bruijn ##.expr.17.248 3 0))) ((bruijn ##.k.590 2 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(_V10_Dreduce__declare__loop_D219_k89, env, runtime,
      VInlineCdr2(runtime,
        upenv->up->up->vars[0]));
} else {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dreduce__declare__loop_D219_k86(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dreduce__declare__loop_D219_k86" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dreduce__declare__loop_D219_k86, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dreduce__declare__loop_D219_k86, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dreduce__declare__loop_D219_k87) (close _V10_Dreduce__declare__loop_D219_k88))
    V_CALL_FUNC(_V10_Dreduce__declare__loop_D219_k87, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dreduce__declare__loop_D219_k88, env)}));
 }
}
static void _V10_Dreduce__declare__loop_D219_k85(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dreduce__declare__loop_D219_k85" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dreduce__declare__loop_D219_k85, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dreduce__declare__loop_D219_k85, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.17.248 1 0)) (##vcore.string? (close _V10_Dreduce__declare__loop_D219_k86) (##inline ##vcore.car (bruijn ##.expr.17.248 1 0))) ((bruijn ##.k.590 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL_FUNC(VStringP2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dreduce__declare__loop_D219_k86, env)}),
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dreduce__declare__loop_D219_k93(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dreduce__declare__loop_D219_k93" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dreduce__declare__loop_D219_k93, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dreduce__declare__loop_D219_k93, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.error.195 14 40) (bruijn ##.k.581 9 0) (##string ##.string.1445))
    V_CALL(VGetArg(upenv, 14-1, 40), runtime,
      VGetArg(upenv, 9-1, 0),
      VEncodePointer(&_V10_Dstring_D1445.sym, VPOINTER_OTHER));
 }
}
static void _V10_Dreduce__declare__loop_D219_lambda21(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dreduce__declare__loop_D219_lambda21" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dreduce__declare__loop_D219_lambda21, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.kk.4.229 8 1) (close _V10_Dreduce__declare__loop_D219_k93) (##inline ##vcore.cons 'variable (##inline ##vcore.cons (bruijn ##.ret.227 9 1) (##inline ##vcore.cons (bruijn ##.expr.251 0 0) '()))))
    V_CALL(VGetArg(upenv, 8-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dreduce__declare__loop_D219_k93, env)}),
      VInlineCons2(runtime,
        _V0variable,
        VInlineCons2(runtime,
        VGetArg(upenv, 9-1, 1),
        VInlineCons2(runtime,
        _var0,
        VNULL))));
 }
}
static void _V10_Dreduce__declare__loop_D219_k92(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dreduce__declare__loop_D219_k92" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dreduce__declare__loop_D219_k92, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dreduce__declare__loop_D219_k92, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dreduce__declare__loop_D219_lambda21) (bruijn ##.input.5.230 6 0))
    V_CALL_FUNC(_V10_Dreduce__declare__loop_D219_lambda21, env, runtime,
      VGetArg(upenv, 6-1, 0));
 }
}
static void _V10_Dreduce__declare__loop_D219_lambda20(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dreduce__declare__loop_D219_lambda20" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dreduce__declare__loop_D219_lambda20, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dreduce__declare__loop_D219_k85) (close _V10_Dreduce__declare__loop_D219_k92))
    V_CALL_FUNC(_V10_Dreduce__declare__loop_D219_k85, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dreduce__declare__loop_D219_k92, env)}));
 }
}
static void _V10_Dreduce__declare__loop_D219_k84(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dreduce__declare__loop_D219_k84" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dreduce__declare__loop_D219_k84, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dreduce__declare__loop_D219_k84, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dreduce__declare__loop_D219_lambda20) (bruijn ##.input.5.230 4 0))
    V_CALL_FUNC(_V10_Dreduce__declare__loop_D219_lambda20, env, runtime,
      upenv->up->up->up->vars[0]);
 }
}
static void _V10_Dreduce__declare__loop_D219_lambda13(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dreduce__declare__loop_D219_lambda13" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dreduce__declare__loop_D219_lambda13, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dreduce__declare__loop_D219_k66) (close _V10_Dreduce__declare__loop_D219_k84))
    V_CALL_FUNC(_V10_Dreduce__declare__loop_D219_k66, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dreduce__declare__loop_D219_k84, env)}));
 }
}
static void _V10_Dreduce__declare__loop_D219_k65(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dreduce__declare__loop_D219_k65" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dreduce__declare__loop_D219_k65, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dreduce__declare__loop_D219_k65, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dreduce__declare__loop_D219_lambda13) (bruijn ##.input.5.230 2 0))
    V_CALL_FUNC(_V10_Dreduce__declare__loop_D219_lambda13, env, runtime,
      upenv->up->vars[0]);
 }
}
static void _V10_Dreduce__declare__loop_D219_lambda12(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dreduce__declare__loop_D219_lambda12" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dreduce__declare__loop_D219_lambda12, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dreduce__declare__loop_D219_k59) (close _V10_Dreduce__declare__loop_D219_k65))
    V_CALL_FUNC(_V10_Dreduce__declare__loop_D219_k59, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dreduce__declare__loop_D219_k65, env)}));
 }
}
static void _V10_Dreduce__declare__loop_D219_lambda11(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dreduce__declare__loop_D219_lambda11" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dreduce__declare__loop_D219_lambda11, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dreduce__declare__loop_D219_lambda12) (bruijn ##.input.5.230 0 0))
    V_CALL_FUNC(_V10_Dreduce__declare__loop_D219_lambda12, env, runtime,
      _var0);
 }
}
static void _V10_Dreduce__declare__loop_D219_lambda10(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V10_Dreduce__declare__loop_D219_lambda10" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dreduce__declare__loop_D219_lambda10, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dreduce__declare__loop_D219_lambda10, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V10_Dreduce__declare__loop_D219_lambda11) (bruijn ##.decl.228 1 2))
    V_CALL_FUNC(_V10_Dreduce__declare__loop_D219_lambda11, env, runtime,
      upenv->vars[2]);
 }
}
static void _V10_Dreduce__declare__loop_D219_lambda9(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V10_Dreduce__declare__loop_D219_lambda9" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dreduce__declare__loop_D219_lambda9, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dreduce__declare__loop_D219_lambda9, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn ##.call/cc.192 4 37) (bruijn ##.k.580 0 0) (close _V10_Dreduce__declare__loop_D219_lambda10))
    V_CALL(upenv->up->up->up->vars[37], runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dreduce__declare__loop_D219_lambda10, env)}));
 }
}
static void _V10_Dreduce__declare_D196_lambda3(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V10_Dreduce__declare_D196_lambda3" };
 VRecordCall2(runtime, &dbg);
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V10_Dreduce__declare_D196_lambda3, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dreduce__declare_D196_lambda3, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // (letrec 3 ((close _V10_Ddrop__const_D217_lambda4) (close _V10_Dreduce__args_D218_lambda8) (close _V10_Dreduce__declare__loop_D219_lambda9)) ((bruijn ##.reduce-declare-loop.219 0 2) (bruijn ##.k.560 1 0) (bruijn ##.ret.214 1 1) (bruijn ##.decl.215 1 2)))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[3]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 3, 3, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddrop__const_D217_lambda4, env)});
    env->vars[1] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dreduce__args_D218_lambda8, env)});
    env->vars[2] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dreduce__declare__loop_D219_lambda9, env)});
    V_CALL(env->vars[2], runtime,
      upenv->vars[0],
      upenv->vars[1],
      upenv->vars[2]);
    }
 }
}
static void _V10_Dfind__typedef_D197_k96(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dfind__typedef_D197_k96" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dfind__typedef_D197_k96, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dfind__typedef_D197_k96, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.not.176 5 21) (bruijn ##.k.665 1 0) (bruijn ##.x.666 0 0))
    V_CALL(VGetArg(upenv, 5-1, 21), runtime,
      upenv->vars[0],
      _var0);
 }
}
static void _V10_Dfind__typedef_D197_k95(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dfind__typedef_D197_k95" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dfind__typedef_D197_k95, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dfind__typedef_D197_k95, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.664 1 0) ((bruijn ##.memv.155 4 0) (close _V10_Dfind__typedef_D197_k96) (bruijn ##.special.252 2 1) (##inline ##vcore.qcons 'void (##inline ##vcore.qcons 'float (##inline ##vcore.qcons 'double (##inline ##vcore.qcons '_Bool '()))))) ((bruijn ##.k.665 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dfind__typedef_D197_k96, env)}),
      upenv->up->vars[1],
      VInlineCons2(runtime,
        _V0void,
        VInlineCons2(runtime,
        _V0float,
        VInlineCons2(runtime,
        _V0double,
        VInlineCons2(runtime,
        _V0_UBool,
        VNULL)))));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dloop_D254_k102(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D254_k102" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D254_k102, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D254_k102, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.eqv?.185 11 30) (bruijn ##.k.661 1 0) (bruijn ##.x.662 0 0) (bruijn ##.special.252 9 1))
    V_CALL(VGetArg(upenv, 11-1, 30), runtime,
      upenv->vars[0],
      _var0,
      VGetArg(upenv, 9-1, 1));
 }
}
static void _V10_Dloop_D254_k101(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D254_k101" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D254_k101, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D254_k101, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.660 1 0) ((bruijn ##.cadar.163 10 8) (close _V10_Dloop_D254_k102) (bruijn ##.table.255 4 1)) ((bruijn ##.k.661 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(VGetArg(upenv, 10-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D254_k102, env)}),
      upenv->up->up->up->vars[1]);
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dloop_D254_k104(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D254_k104" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D254_k104, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D254_k104, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.loop.254 6 0) (bruijn ##.k.656 5 0) (bruijn ##.x.659 0 0))
    V_CALL(VGetArg(upenv, 6-1, 0), runtime,
      VGetArg(upenv, 5-1, 0),
      _var0);
 }
}
static void _V10_Dloop_D254_k103(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D254_k103" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D254_k103, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D254_k103, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.658 0 0) ((bruijn ##.caddar.161 10 6) (bruijn ##.k.656 4 0) (bruijn ##.table.255 4 1)) ((bruijn ##.cdr.186 10 31) (close _V10_Dloop_D254_k104) (bruijn ##.table.255 4 1)))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 10-1, 6), runtime,
      upenv->up->up->up->vars[0],
      upenv->up->up->up->vars[1]);
} else {
    V_CALL(VGetArg(upenv, 10-1, 31), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D254_k104, env)}),
      upenv->up->up->up->vars[1]);
}
 }
}
static void _V10_Dloop_D254_k100(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D254_k100" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D254_k100, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D254_k100, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dloop_D254_k101) (close _V10_Dloop_D254_k103))
    V_CALL_FUNC(_V10_Dloop_D254_k101, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D254_k103, env)}));
 }
}
static void _V10_Dloop_D254_k99(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D254_k99" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D254_k99, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D254_k99, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.eqv?.185 8 30) (close _V10_Dloop_D254_k100) (bruijn ##.x.663 0 0) 'typedef)
    V_CALL(VGetArg(upenv, 8-1, 30), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D254_k100, env)}),
      _var0,
      _V0typedef);
 }
}
static void _V10_Dloop_D254_k98(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D254_k98" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D254_k98, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D254_k98, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.657 0 0) ((bruijn ##.compiler-error.178 7 23) (bruijn ##.k.656 1 0) (##string ##.string.1446) (bruijn ##.special.252 5 1)) ((bruijn ##.caar.160 7 5) (close _V10_Dloop_D254_k99) (bruijn ##.table.255 1 1)))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 7-1, 23), runtime,
      upenv->vars[0],
      VEncodePointer(&_V10_Dstring_D1446.sym, VPOINTER_OTHER),
      VGetArg(upenv, 5-1, 1));
} else {
    V_CALL(VGetArg(upenv, 7-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D254_k99, env)}),
      upenv->vars[1]);
}
 }
}
static void _V10_Dloop_D254_lambda23(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V10_Dloop_D254_lambda23" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D254_lambda23, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D254_lambda23, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##.null?.169 6 14) (close _V10_Dloop_D254_k98) (bruijn ##.table.255 0 1))
    V_CALL(VGetArg(upenv, 6-1, 14), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D254_k98, env)}),
      _var1);
 }
}
static void _V10_Dfind__typedef_D197_k97(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dfind__typedef_D197_k97" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dfind__typedef_D197_k97, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dfind__typedef_D197_k97, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.655 0 0) (letrec 1 ((close _V10_Dloop_D254_lambda23)) ((bruijn ##.loop.254 0 0) (bruijn ##.k.654 3 0) (bruijn ##.table.253 3 2))) ((bruijn ##.k.654 2 0) #f))
if(VDecodeBool(
_var0)) {
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D254_lambda23, env)});
    V_CALL(env->vars[0], runtime,
      upenv->up->up->vars[0],
      upenv->up->up->vars[2]);
    }
} else {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dfind__typedef_D197_k94(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dfind__typedef_D197_k94" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dfind__typedef_D197_k94, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dfind__typedef_D197_k94, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dfind__typedef_D197_k95) (close _V10_Dfind__typedef_D197_k97))
    V_CALL_FUNC(_V10_Dfind__typedef_D197_k95, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dfind__typedef_D197_k97, env)}));
 }
}
static void _V10_Dfind__typedef_D197_lambda22(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V10_Dfind__typedef_D197_lambda22" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dfind__typedef_D197_lambda22, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dfind__typedef_D197_lambda22, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn ##.symbol?.156 2 1) (close _V10_Dfind__typedef_D197_k94) (bruijn ##.special.252 0 1))
    V_CALL(upenv->up->vars[1], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dfind__typedef_D197_k94, env)}),
      _var1);
 }
}
static void _V10_Ddecide_D259_k110(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Ddecide_D259_k110" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D259_k110, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddecide_D259_k110, runtime, upenv, 1, argc, _var0) {
  // (if (##inline ##vcore.pair? (bruijn ##.expr.26.269 0 0)) (if (##inline ##vcore.eq? #f (##inline ##vcore.car (bruijn ##.expr.26.269 0 0))) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.26.269 0 0))) ((bruijn ##.kk.20.263 8 1) (bruijn ##.k.888 5 0) 'char) ((bruijn ##.k.888 5 0) #f)) ((bruijn ##.k.888 5 0) #f)) ((bruijn ##.k.888 5 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineEq2(runtime,
        VEncodeBool(false),
        VInlineCar2(runtime,
        _var0)))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    V_CALL(VGetArg(upenv, 8-1, 1), runtime,
      VGetArg(upenv, 5-1, 0),
      _V0char);
} else {
    V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      VEncodeBool(false));
}
} else {
    V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      VEncodeBool(false));
}
} else {
    V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Ddecide_D259_k109(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Ddecide_D259_k109" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D259_k109, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddecide_D259_k109, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.25.268 0 0)) (if (##inline ##vcore.eq? #f (##inline ##vcore.car (bruijn ##.expr.25.268 0 0))) ((close _V10_Ddecide_D259_k110) (##inline ##vcore.cdr (bruijn ##.expr.25.268 0 0))) ((bruijn ##.k.888 4 0) #f)) ((bruijn ##.k.888 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineEq2(runtime,
        VEncodeBool(false),
        VInlineCar2(runtime,
        _var0)))) {
    V_CALL_FUNC(_V10_Ddecide_D259_k110, env, runtime,
      VInlineCdr2(runtime,
        _var0));
} else {
    V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeBool(false));
}
} else {
    V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Ddecide_D259_k108(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Ddecide_D259_k108" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D259_k108, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddecide_D259_k108, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.24.267 0 0)) (if (##inline ##vcore.eq? #f (##inline ##vcore.car (bruijn ##.expr.24.267 0 0))) ((close _V10_Ddecide_D259_k109) (##inline ##vcore.cdr (bruijn ##.expr.24.267 0 0))) ((bruijn ##.k.888 3 0) #f)) ((bruijn ##.k.888 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineEq2(runtime,
        VEncodeBool(false),
        VInlineCar2(runtime,
        _var0)))) {
    V_CALL_FUNC(_V10_Ddecide_D259_k109, env, runtime,
      VInlineCdr2(runtime,
        _var0));
} else {
    V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
} else {
    V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Ddecide_D259_k107(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Ddecide_D259_k107" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D259_k107, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddecide_D259_k107, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.23.266 0 0)) (if (##inline ##vcore.eq? 0 (##inline ##vcore.car (bruijn ##.expr.23.266 0 0))) ((close _V10_Ddecide_D259_k108) (##inline ##vcore.cdr (bruijn ##.expr.23.266 0 0))) ((bruijn ##.k.888 2 0) #f)) ((bruijn ##.k.888 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineEq2(runtime,
        VEncodeInt(0l),
        VInlineCar2(runtime,
        _var0)))) {
    V_CALL_FUNC(_V10_Ddecide_D259_k108, env, runtime,
      VInlineCdr2(runtime,
        _var0));
} else {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
} else {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Ddecide_D259_k106(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Ddecide_D259_k106" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D259_k106, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddecide_D259_k106, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.889 0 0) ((close _V10_Ddecide_D259_k107) (##inline ##vcore.cdr (bruijn ##.expr.22.265 2 0))) ((bruijn ##.k.888 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(_V10_Ddecide_D259_k107, env, runtime,
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Ddecide_D259_k105(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Ddecide_D259_k105" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D259_k105, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddecide_D259_k105, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.22.265 1 0)) ((bruijn ##.equal?.194 8 39) (close _V10_Ddecide_D259_k106) 'char (##inline ##vcore.car (bruijn ##.expr.22.265 1 0))) ((bruijn ##.k.888 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 8-1, 39), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddecide_D259_k106, env)}),
      _V0char,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Ddecide_D259_k117(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Ddecide_D259_k117" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D259_k117, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddecide_D259_k117, runtime, upenv, 1, argc, _var0) {
  // (if (##inline ##vcore.pair? (bruijn ##.expr.31.274 0 0)) (if (##inline ##vcore.eq? #f (##inline ##vcore.car (bruijn ##.expr.31.274 0 0))) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.31.274 0 0))) ((bruijn ##.kk.20.263 10 1) (bruijn ##.k.870 5 0) 'unsigned-char) ((bruijn ##.k.870 5 0) #f)) ((bruijn ##.k.870 5 0) #f)) ((bruijn ##.k.870 5 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineEq2(runtime,
        VEncodeBool(false),
        VInlineCar2(runtime,
        _var0)))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    V_CALL(VGetArg(upenv, 10-1, 1), runtime,
      VGetArg(upenv, 5-1, 0),
      _V0unsigned__char);
} else {
    V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      VEncodeBool(false));
}
} else {
    V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      VEncodeBool(false));
}
} else {
    V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Ddecide_D259_k116(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Ddecide_D259_k116" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D259_k116, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddecide_D259_k116, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.30.273 0 0)) (if (##inline ##vcore.eq? #t (##inline ##vcore.car (bruijn ##.expr.30.273 0 0))) ((close _V10_Ddecide_D259_k117) (##inline ##vcore.cdr (bruijn ##.expr.30.273 0 0))) ((bruijn ##.k.870 4 0) #f)) ((bruijn ##.k.870 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineEq2(runtime,
        VEncodeBool(true),
        VInlineCar2(runtime,
        _var0)))) {
    V_CALL_FUNC(_V10_Ddecide_D259_k117, env, runtime,
      VInlineCdr2(runtime,
        _var0));
} else {
    V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeBool(false));
}
} else {
    V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Ddecide_D259_k115(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Ddecide_D259_k115" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D259_k115, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddecide_D259_k115, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.29.272 0 0)) (if (##inline ##vcore.eq? #f (##inline ##vcore.car (bruijn ##.expr.29.272 0 0))) ((close _V10_Ddecide_D259_k116) (##inline ##vcore.cdr (bruijn ##.expr.29.272 0 0))) ((bruijn ##.k.870 3 0) #f)) ((bruijn ##.k.870 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineEq2(runtime,
        VEncodeBool(false),
        VInlineCar2(runtime,
        _var0)))) {
    V_CALL_FUNC(_V10_Ddecide_D259_k116, env, runtime,
      VInlineCdr2(runtime,
        _var0));
} else {
    V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
} else {
    V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Ddecide_D259_k114(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Ddecide_D259_k114" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D259_k114, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddecide_D259_k114, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.28.271 0 0)) (if (##inline ##vcore.eq? 0 (##inline ##vcore.car (bruijn ##.expr.28.271 0 0))) ((close _V10_Ddecide_D259_k115) (##inline ##vcore.cdr (bruijn ##.expr.28.271 0 0))) ((bruijn ##.k.870 2 0) #f)) ((bruijn ##.k.870 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineEq2(runtime,
        VEncodeInt(0l),
        VInlineCar2(runtime,
        _var0)))) {
    V_CALL_FUNC(_V10_Ddecide_D259_k115, env, runtime,
      VInlineCdr2(runtime,
        _var0));
} else {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
} else {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Ddecide_D259_k113(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Ddecide_D259_k113" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D259_k113, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddecide_D259_k113, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.871 0 0) ((close _V10_Ddecide_D259_k114) (##inline ##vcore.cdr (bruijn ##.expr.27.270 2 0))) ((bruijn ##.k.870 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(_V10_Ddecide_D259_k114, env, runtime,
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Ddecide_D259_k112(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Ddecide_D259_k112" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D259_k112, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddecide_D259_k112, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.27.270 1 0)) ((bruijn ##.equal?.194 10 39) (close _V10_Ddecide_D259_k113) 'char (##inline ##vcore.car (bruijn ##.expr.27.270 1 0))) ((bruijn ##.k.870 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 10-1, 39), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddecide_D259_k113, env)}),
      _V0char,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Ddecide_D259_k124(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Ddecide_D259_k124" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D259_k124, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddecide_D259_k124, runtime, upenv, 1, argc, _var0) {
  // (if (##inline ##vcore.pair? (bruijn ##.expr.36.279 0 0)) (if (##inline ##vcore.eq? #t (##inline ##vcore.car (bruijn ##.expr.36.279 0 0))) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.36.279 0 0))) ((bruijn ##.kk.20.263 12 1) (bruijn ##.k.852 5 0) 'signed-char) ((bruijn ##.k.852 5 0) #f)) ((bruijn ##.k.852 5 0) #f)) ((bruijn ##.k.852 5 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineEq2(runtime,
        VEncodeBool(true),
        VInlineCar2(runtime,
        _var0)))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    V_CALL(VGetArg(upenv, 12-1, 1), runtime,
      VGetArg(upenv, 5-1, 0),
      _V0signed__char);
} else {
    V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      VEncodeBool(false));
}
} else {
    V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      VEncodeBool(false));
}
} else {
    V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Ddecide_D259_k123(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Ddecide_D259_k123" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D259_k123, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddecide_D259_k123, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.35.278 0 0)) (if (##inline ##vcore.eq? #f (##inline ##vcore.car (bruijn ##.expr.35.278 0 0))) ((close _V10_Ddecide_D259_k124) (##inline ##vcore.cdr (bruijn ##.expr.35.278 0 0))) ((bruijn ##.k.852 4 0) #f)) ((bruijn ##.k.852 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineEq2(runtime,
        VEncodeBool(false),
        VInlineCar2(runtime,
        _var0)))) {
    V_CALL_FUNC(_V10_Ddecide_D259_k124, env, runtime,
      VInlineCdr2(runtime,
        _var0));
} else {
    V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeBool(false));
}
} else {
    V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Ddecide_D259_k122(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Ddecide_D259_k122" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D259_k122, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddecide_D259_k122, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.34.277 0 0)) (if (##inline ##vcore.eq? #f (##inline ##vcore.car (bruijn ##.expr.34.277 0 0))) ((close _V10_Ddecide_D259_k123) (##inline ##vcore.cdr (bruijn ##.expr.34.277 0 0))) ((bruijn ##.k.852 3 0) #f)) ((bruijn ##.k.852 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineEq2(runtime,
        VEncodeBool(false),
        VInlineCar2(runtime,
        _var0)))) {
    V_CALL_FUNC(_V10_Ddecide_D259_k123, env, runtime,
      VInlineCdr2(runtime,
        _var0));
} else {
    V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
} else {
    V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Ddecide_D259_k121(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Ddecide_D259_k121" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D259_k121, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddecide_D259_k121, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.33.276 0 0)) (if (##inline ##vcore.eq? 0 (##inline ##vcore.car (bruijn ##.expr.33.276 0 0))) ((close _V10_Ddecide_D259_k122) (##inline ##vcore.cdr (bruijn ##.expr.33.276 0 0))) ((bruijn ##.k.852 2 0) #f)) ((bruijn ##.k.852 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineEq2(runtime,
        VEncodeInt(0l),
        VInlineCar2(runtime,
        _var0)))) {
    V_CALL_FUNC(_V10_Ddecide_D259_k122, env, runtime,
      VInlineCdr2(runtime,
        _var0));
} else {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
} else {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Ddecide_D259_k120(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Ddecide_D259_k120" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D259_k120, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddecide_D259_k120, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.853 0 0) ((close _V10_Ddecide_D259_k121) (##inline ##vcore.cdr (bruijn ##.expr.32.275 2 0))) ((bruijn ##.k.852 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(_V10_Ddecide_D259_k121, env, runtime,
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Ddecide_D259_k119(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Ddecide_D259_k119" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D259_k119, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddecide_D259_k119, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.32.275 1 0)) ((bruijn ##.equal?.194 12 39) (close _V10_Ddecide_D259_k120) 'char (##inline ##vcore.car (bruijn ##.expr.32.275 1 0))) ((bruijn ##.k.852 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 12-1, 39), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddecide_D259_k120, env)}),
      _V0char,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Ddecide_D259_k131(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Ddecide_D259_k131" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D259_k131, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddecide_D259_k131, runtime, upenv, 1, argc, _var0) {
  // (if (##inline ##vcore.pair? (bruijn ##.expr.41.284 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.41.284 0 0))) ((bruijn ##.kk.20.263 14 1) (bruijn ##.k.836 5 0) 'int) ((bruijn ##.k.836 5 0) #f)) ((bruijn ##.k.836 5 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    V_CALL(VGetArg(upenv, 14-1, 1), runtime,
      VGetArg(upenv, 5-1, 0),
      _V0int);
} else {
    V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      VEncodeBool(false));
}
} else {
    V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Ddecide_D259_k130(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Ddecide_D259_k130" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D259_k130, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddecide_D259_k130, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.40.283 0 0)) (if (##inline ##vcore.eq? #f (##inline ##vcore.car (bruijn ##.expr.40.283 0 0))) ((close _V10_Ddecide_D259_k131) (##inline ##vcore.cdr (bruijn ##.expr.40.283 0 0))) ((bruijn ##.k.836 4 0) #f)) ((bruijn ##.k.836 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineEq2(runtime,
        VEncodeBool(false),
        VInlineCar2(runtime,
        _var0)))) {
    V_CALL_FUNC(_V10_Ddecide_D259_k131, env, runtime,
      VInlineCdr2(runtime,
        _var0));
} else {
    V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeBool(false));
}
} else {
    V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Ddecide_D259_k129(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Ddecide_D259_k129" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D259_k129, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddecide_D259_k129, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.39.282 0 0)) (if (##inline ##vcore.eq? #f (##inline ##vcore.car (bruijn ##.expr.39.282 0 0))) ((close _V10_Ddecide_D259_k130) (##inline ##vcore.cdr (bruijn ##.expr.39.282 0 0))) ((bruijn ##.k.836 3 0) #f)) ((bruijn ##.k.836 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineEq2(runtime,
        VEncodeBool(false),
        VInlineCar2(runtime,
        _var0)))) {
    V_CALL_FUNC(_V10_Ddecide_D259_k130, env, runtime,
      VInlineCdr2(runtime,
        _var0));
} else {
    V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
} else {
    V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Ddecide_D259_k128(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Ddecide_D259_k128" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D259_k128, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddecide_D259_k128, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.38.281 0 0)) (if (##inline ##vcore.eq? 0 (##inline ##vcore.car (bruijn ##.expr.38.281 0 0))) ((close _V10_Ddecide_D259_k129) (##inline ##vcore.cdr (bruijn ##.expr.38.281 0 0))) ((bruijn ##.k.836 2 0) #f)) ((bruijn ##.k.836 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineEq2(runtime,
        VEncodeInt(0l),
        VInlineCar2(runtime,
        _var0)))) {
    V_CALL_FUNC(_V10_Ddecide_D259_k129, env, runtime,
      VInlineCdr2(runtime,
        _var0));
} else {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
} else {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Ddecide_D259_k127(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Ddecide_D259_k127" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D259_k127, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddecide_D259_k127, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.837 0 0) ((close _V10_Ddecide_D259_k128) (##inline ##vcore.cdr (bruijn ##.expr.37.280 2 0))) ((bruijn ##.k.836 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(_V10_Ddecide_D259_k128, env, runtime,
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Ddecide_D259_k126(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Ddecide_D259_k126" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D259_k126, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddecide_D259_k126, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.37.280 1 0)) ((bruijn ##.equal?.194 14 39) (close _V10_Ddecide_D259_k127) 'int (##inline ##vcore.car (bruijn ##.expr.37.280 1 0))) ((bruijn ##.k.836 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 14-1, 39), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddecide_D259_k127, env)}),
      _V0int,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Ddecide_D259_k138(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Ddecide_D259_k138" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D259_k138, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddecide_D259_k138, runtime, upenv, 1, argc, _var0) {
  // (if (##inline ##vcore.pair? (bruijn ##.expr.46.289 0 0)) (if (##inline ##vcore.eq? #f (##inline ##vcore.car (bruijn ##.expr.46.289 0 0))) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.46.289 0 0))) ((bruijn ##.kk.20.263 16 1) (bruijn ##.k.818 5 0) 'unsigned-int) ((bruijn ##.k.818 5 0) #f)) ((bruijn ##.k.818 5 0) #f)) ((bruijn ##.k.818 5 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineEq2(runtime,
        VEncodeBool(false),
        VInlineCar2(runtime,
        _var0)))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    V_CALL(VGetArg(upenv, 16-1, 1), runtime,
      VGetArg(upenv, 5-1, 0),
      _V0unsigned__int);
} else {
    V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      VEncodeBool(false));
}
} else {
    V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      VEncodeBool(false));
}
} else {
    V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Ddecide_D259_k137(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Ddecide_D259_k137" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D259_k137, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddecide_D259_k137, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.45.288 0 0)) (if (##inline ##vcore.eq? #t (##inline ##vcore.car (bruijn ##.expr.45.288 0 0))) ((close _V10_Ddecide_D259_k138) (##inline ##vcore.cdr (bruijn ##.expr.45.288 0 0))) ((bruijn ##.k.818 4 0) #f)) ((bruijn ##.k.818 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineEq2(runtime,
        VEncodeBool(true),
        VInlineCar2(runtime,
        _var0)))) {
    V_CALL_FUNC(_V10_Ddecide_D259_k138, env, runtime,
      VInlineCdr2(runtime,
        _var0));
} else {
    V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeBool(false));
}
} else {
    V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Ddecide_D259_k136(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Ddecide_D259_k136" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D259_k136, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddecide_D259_k136, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.44.287 0 0)) (if (##inline ##vcore.eq? #f (##inline ##vcore.car (bruijn ##.expr.44.287 0 0))) ((close _V10_Ddecide_D259_k137) (##inline ##vcore.cdr (bruijn ##.expr.44.287 0 0))) ((bruijn ##.k.818 3 0) #f)) ((bruijn ##.k.818 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineEq2(runtime,
        VEncodeBool(false),
        VInlineCar2(runtime,
        _var0)))) {
    V_CALL_FUNC(_V10_Ddecide_D259_k137, env, runtime,
      VInlineCdr2(runtime,
        _var0));
} else {
    V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
} else {
    V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Ddecide_D259_k135(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Ddecide_D259_k135" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D259_k135, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddecide_D259_k135, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.43.286 0 0)) (if (##inline ##vcore.eq? 0 (##inline ##vcore.car (bruijn ##.expr.43.286 0 0))) ((close _V10_Ddecide_D259_k136) (##inline ##vcore.cdr (bruijn ##.expr.43.286 0 0))) ((bruijn ##.k.818 2 0) #f)) ((bruijn ##.k.818 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineEq2(runtime,
        VEncodeInt(0l),
        VInlineCar2(runtime,
        _var0)))) {
    V_CALL_FUNC(_V10_Ddecide_D259_k136, env, runtime,
      VInlineCdr2(runtime,
        _var0));
} else {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
} else {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Ddecide_D259_k134(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Ddecide_D259_k134" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D259_k134, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddecide_D259_k134, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.819 0 0) ((close _V10_Ddecide_D259_k135) (##inline ##vcore.cdr (bruijn ##.expr.42.285 2 0))) ((bruijn ##.k.818 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(_V10_Ddecide_D259_k135, env, runtime,
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Ddecide_D259_k133(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Ddecide_D259_k133" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D259_k133, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddecide_D259_k133, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.42.285 1 0)) ((bruijn ##.equal?.194 16 39) (close _V10_Ddecide_D259_k134) 'int (##inline ##vcore.car (bruijn ##.expr.42.285 1 0))) ((bruijn ##.k.818 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 16-1, 39), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddecide_D259_k134, env)}),
      _V0int,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Ddecide_D259_k145(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Ddecide_D259_k145" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D259_k145, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddecide_D259_k145, runtime, upenv, 1, argc, _var0) {
  // (if (##inline ##vcore.pair? (bruijn ##.expr.51.294 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.51.294 0 0))) ((bruijn ##.kk.20.263 18 1) (bruijn ##.k.802 5 0) 'long) ((bruijn ##.k.802 5 0) #f)) ((bruijn ##.k.802 5 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    V_CALL(VGetArg(upenv, 18-1, 1), runtime,
      VGetArg(upenv, 5-1, 0),
      _V0long);
} else {
    V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      VEncodeBool(false));
}
} else {
    V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Ddecide_D259_k144(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Ddecide_D259_k144" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D259_k144, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddecide_D259_k144, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.50.293 0 0)) (if (##inline ##vcore.eq? #f (##inline ##vcore.car (bruijn ##.expr.50.293 0 0))) ((close _V10_Ddecide_D259_k145) (##inline ##vcore.cdr (bruijn ##.expr.50.293 0 0))) ((bruijn ##.k.802 4 0) #f)) ((bruijn ##.k.802 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineEq2(runtime,
        VEncodeBool(false),
        VInlineCar2(runtime,
        _var0)))) {
    V_CALL_FUNC(_V10_Ddecide_D259_k145, env, runtime,
      VInlineCdr2(runtime,
        _var0));
} else {
    V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeBool(false));
}
} else {
    V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Ddecide_D259_k143(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Ddecide_D259_k143" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D259_k143, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddecide_D259_k143, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.49.292 0 0)) (if (##inline ##vcore.eq? #f (##inline ##vcore.car (bruijn ##.expr.49.292 0 0))) ((close _V10_Ddecide_D259_k144) (##inline ##vcore.cdr (bruijn ##.expr.49.292 0 0))) ((bruijn ##.k.802 3 0) #f)) ((bruijn ##.k.802 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineEq2(runtime,
        VEncodeBool(false),
        VInlineCar2(runtime,
        _var0)))) {
    V_CALL_FUNC(_V10_Ddecide_D259_k144, env, runtime,
      VInlineCdr2(runtime,
        _var0));
} else {
    V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
} else {
    V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Ddecide_D259_k142(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Ddecide_D259_k142" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D259_k142, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddecide_D259_k142, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.48.291 0 0)) (if (##inline ##vcore.eq? 1 (##inline ##vcore.car (bruijn ##.expr.48.291 0 0))) ((close _V10_Ddecide_D259_k143) (##inline ##vcore.cdr (bruijn ##.expr.48.291 0 0))) ((bruijn ##.k.802 2 0) #f)) ((bruijn ##.k.802 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineEq2(runtime,
        VEncodeInt(1l),
        VInlineCar2(runtime,
        _var0)))) {
    V_CALL_FUNC(_V10_Ddecide_D259_k143, env, runtime,
      VInlineCdr2(runtime,
        _var0));
} else {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
} else {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Ddecide_D259_k141(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Ddecide_D259_k141" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D259_k141, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddecide_D259_k141, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.803 0 0) ((close _V10_Ddecide_D259_k142) (##inline ##vcore.cdr (bruijn ##.expr.47.290 2 0))) ((bruijn ##.k.802 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(_V10_Ddecide_D259_k142, env, runtime,
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Ddecide_D259_k140(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Ddecide_D259_k140" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D259_k140, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddecide_D259_k140, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.47.290 1 0)) ((bruijn ##.equal?.194 18 39) (close _V10_Ddecide_D259_k141) 'int (##inline ##vcore.car (bruijn ##.expr.47.290 1 0))) ((bruijn ##.k.802 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 18-1, 39), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddecide_D259_k141, env)}),
      _V0int,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Ddecide_D259_k152(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Ddecide_D259_k152" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D259_k152, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddecide_D259_k152, runtime, upenv, 1, argc, _var0) {
  // (if (##inline ##vcore.pair? (bruijn ##.expr.56.299 0 0)) (if (##inline ##vcore.eq? #f (##inline ##vcore.car (bruijn ##.expr.56.299 0 0))) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.56.299 0 0))) ((bruijn ##.kk.20.263 20 1) (bruijn ##.k.784 5 0) 'unsigned-long) ((bruijn ##.k.784 5 0) #f)) ((bruijn ##.k.784 5 0) #f)) ((bruijn ##.k.784 5 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineEq2(runtime,
        VEncodeBool(false),
        VInlineCar2(runtime,
        _var0)))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    V_CALL(VGetArg(upenv, 20-1, 1), runtime,
      VGetArg(upenv, 5-1, 0),
      _V0unsigned__long);
} else {
    V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      VEncodeBool(false));
}
} else {
    V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      VEncodeBool(false));
}
} else {
    V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Ddecide_D259_k151(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Ddecide_D259_k151" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D259_k151, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddecide_D259_k151, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.55.298 0 0)) (if (##inline ##vcore.eq? #t (##inline ##vcore.car (bruijn ##.expr.55.298 0 0))) ((close _V10_Ddecide_D259_k152) (##inline ##vcore.cdr (bruijn ##.expr.55.298 0 0))) ((bruijn ##.k.784 4 0) #f)) ((bruijn ##.k.784 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineEq2(runtime,
        VEncodeBool(true),
        VInlineCar2(runtime,
        _var0)))) {
    V_CALL_FUNC(_V10_Ddecide_D259_k152, env, runtime,
      VInlineCdr2(runtime,
        _var0));
} else {
    V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeBool(false));
}
} else {
    V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Ddecide_D259_k150(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Ddecide_D259_k150" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D259_k150, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddecide_D259_k150, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.54.297 0 0)) (if (##inline ##vcore.eq? #f (##inline ##vcore.car (bruijn ##.expr.54.297 0 0))) ((close _V10_Ddecide_D259_k151) (##inline ##vcore.cdr (bruijn ##.expr.54.297 0 0))) ((bruijn ##.k.784 3 0) #f)) ((bruijn ##.k.784 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineEq2(runtime,
        VEncodeBool(false),
        VInlineCar2(runtime,
        _var0)))) {
    V_CALL_FUNC(_V10_Ddecide_D259_k151, env, runtime,
      VInlineCdr2(runtime,
        _var0));
} else {
    V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
} else {
    V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Ddecide_D259_k149(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Ddecide_D259_k149" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D259_k149, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddecide_D259_k149, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.53.296 0 0)) (if (##inline ##vcore.eq? 1 (##inline ##vcore.car (bruijn ##.expr.53.296 0 0))) ((close _V10_Ddecide_D259_k150) (##inline ##vcore.cdr (bruijn ##.expr.53.296 0 0))) ((bruijn ##.k.784 2 0) #f)) ((bruijn ##.k.784 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineEq2(runtime,
        VEncodeInt(1l),
        VInlineCar2(runtime,
        _var0)))) {
    V_CALL_FUNC(_V10_Ddecide_D259_k150, env, runtime,
      VInlineCdr2(runtime,
        _var0));
} else {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
} else {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Ddecide_D259_k148(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Ddecide_D259_k148" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D259_k148, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddecide_D259_k148, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.785 0 0) ((close _V10_Ddecide_D259_k149) (##inline ##vcore.cdr (bruijn ##.expr.52.295 2 0))) ((bruijn ##.k.784 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(_V10_Ddecide_D259_k149, env, runtime,
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Ddecide_D259_k147(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Ddecide_D259_k147" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D259_k147, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddecide_D259_k147, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.52.295 1 0)) ((bruijn ##.equal?.194 20 39) (close _V10_Ddecide_D259_k148) 'int (##inline ##vcore.car (bruijn ##.expr.52.295 1 0))) ((bruijn ##.k.784 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 20-1, 39), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddecide_D259_k148, env)}),
      _V0int,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Ddecide_D259_k159(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Ddecide_D259_k159" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D259_k159, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddecide_D259_k159, runtime, upenv, 1, argc, _var0) {
  // (if (##inline ##vcore.pair? (bruijn ##.expr.61.304 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.61.304 0 0))) ((bruijn ##.kk.20.263 22 1) (bruijn ##.k.768 5 0) 'long-long) ((bruijn ##.k.768 5 0) #f)) ((bruijn ##.k.768 5 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    V_CALL(VGetArg(upenv, 22-1, 1), runtime,
      VGetArg(upenv, 5-1, 0),
      _V0long__long);
} else {
    V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      VEncodeBool(false));
}
} else {
    V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Ddecide_D259_k158(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Ddecide_D259_k158" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D259_k158, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddecide_D259_k158, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.60.303 0 0)) (if (##inline ##vcore.eq? #f (##inline ##vcore.car (bruijn ##.expr.60.303 0 0))) ((close _V10_Ddecide_D259_k159) (##inline ##vcore.cdr (bruijn ##.expr.60.303 0 0))) ((bruijn ##.k.768 4 0) #f)) ((bruijn ##.k.768 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineEq2(runtime,
        VEncodeBool(false),
        VInlineCar2(runtime,
        _var0)))) {
    V_CALL_FUNC(_V10_Ddecide_D259_k159, env, runtime,
      VInlineCdr2(runtime,
        _var0));
} else {
    V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeBool(false));
}
} else {
    V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Ddecide_D259_k157(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Ddecide_D259_k157" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D259_k157, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddecide_D259_k157, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.59.302 0 0)) (if (##inline ##vcore.eq? #f (##inline ##vcore.car (bruijn ##.expr.59.302 0 0))) ((close _V10_Ddecide_D259_k158) (##inline ##vcore.cdr (bruijn ##.expr.59.302 0 0))) ((bruijn ##.k.768 3 0) #f)) ((bruijn ##.k.768 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineEq2(runtime,
        VEncodeBool(false),
        VInlineCar2(runtime,
        _var0)))) {
    V_CALL_FUNC(_V10_Ddecide_D259_k158, env, runtime,
      VInlineCdr2(runtime,
        _var0));
} else {
    V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
} else {
    V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Ddecide_D259_k156(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Ddecide_D259_k156" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D259_k156, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddecide_D259_k156, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.58.301 0 0)) (if (##inline ##vcore.eq? 2 (##inline ##vcore.car (bruijn ##.expr.58.301 0 0))) ((close _V10_Ddecide_D259_k157) (##inline ##vcore.cdr (bruijn ##.expr.58.301 0 0))) ((bruijn ##.k.768 2 0) #f)) ((bruijn ##.k.768 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineEq2(runtime,
        VEncodeInt(2l),
        VInlineCar2(runtime,
        _var0)))) {
    V_CALL_FUNC(_V10_Ddecide_D259_k157, env, runtime,
      VInlineCdr2(runtime,
        _var0));
} else {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
} else {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Ddecide_D259_k155(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Ddecide_D259_k155" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D259_k155, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddecide_D259_k155, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.769 0 0) ((close _V10_Ddecide_D259_k156) (##inline ##vcore.cdr (bruijn ##.expr.57.300 2 0))) ((bruijn ##.k.768 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(_V10_Ddecide_D259_k156, env, runtime,
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Ddecide_D259_k154(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Ddecide_D259_k154" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D259_k154, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddecide_D259_k154, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.57.300 1 0)) ((bruijn ##.equal?.194 22 39) (close _V10_Ddecide_D259_k155) 'int (##inline ##vcore.car (bruijn ##.expr.57.300 1 0))) ((bruijn ##.k.768 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 22-1, 39), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddecide_D259_k155, env)}),
      _V0int,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Ddecide_D259_k166(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Ddecide_D259_k166" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D259_k166, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddecide_D259_k166, runtime, upenv, 1, argc, _var0) {
  // (if (##inline ##vcore.pair? (bruijn ##.expr.66.309 0 0)) (if (##inline ##vcore.eq? #f (##inline ##vcore.car (bruijn ##.expr.66.309 0 0))) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.66.309 0 0))) ((bruijn ##.kk.20.263 24 1) (bruijn ##.k.750 5 0) 'unsigned-long-long) ((bruijn ##.k.750 5 0) #f)) ((bruijn ##.k.750 5 0) #f)) ((bruijn ##.k.750 5 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineEq2(runtime,
        VEncodeBool(false),
        VInlineCar2(runtime,
        _var0)))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    V_CALL(VGetArg(upenv, 24-1, 1), runtime,
      VGetArg(upenv, 5-1, 0),
      _V0unsigned__long__long);
} else {
    V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      VEncodeBool(false));
}
} else {
    V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      VEncodeBool(false));
}
} else {
    V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Ddecide_D259_k165(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Ddecide_D259_k165" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D259_k165, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddecide_D259_k165, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.65.308 0 0)) (if (##inline ##vcore.eq? #t (##inline ##vcore.car (bruijn ##.expr.65.308 0 0))) ((close _V10_Ddecide_D259_k166) (##inline ##vcore.cdr (bruijn ##.expr.65.308 0 0))) ((bruijn ##.k.750 4 0) #f)) ((bruijn ##.k.750 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineEq2(runtime,
        VEncodeBool(true),
        VInlineCar2(runtime,
        _var0)))) {
    V_CALL_FUNC(_V10_Ddecide_D259_k166, env, runtime,
      VInlineCdr2(runtime,
        _var0));
} else {
    V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeBool(false));
}
} else {
    V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Ddecide_D259_k164(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Ddecide_D259_k164" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D259_k164, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddecide_D259_k164, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.64.307 0 0)) (if (##inline ##vcore.eq? #f (##inline ##vcore.car (bruijn ##.expr.64.307 0 0))) ((close _V10_Ddecide_D259_k165) (##inline ##vcore.cdr (bruijn ##.expr.64.307 0 0))) ((bruijn ##.k.750 3 0) #f)) ((bruijn ##.k.750 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineEq2(runtime,
        VEncodeBool(false),
        VInlineCar2(runtime,
        _var0)))) {
    V_CALL_FUNC(_V10_Ddecide_D259_k165, env, runtime,
      VInlineCdr2(runtime,
        _var0));
} else {
    V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
} else {
    V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Ddecide_D259_k163(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Ddecide_D259_k163" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D259_k163, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddecide_D259_k163, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.63.306 0 0)) (if (##inline ##vcore.eq? 2 (##inline ##vcore.car (bruijn ##.expr.63.306 0 0))) ((close _V10_Ddecide_D259_k164) (##inline ##vcore.cdr (bruijn ##.expr.63.306 0 0))) ((bruijn ##.k.750 2 0) #f)) ((bruijn ##.k.750 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineEq2(runtime,
        VEncodeInt(2l),
        VInlineCar2(runtime,
        _var0)))) {
    V_CALL_FUNC(_V10_Ddecide_D259_k164, env, runtime,
      VInlineCdr2(runtime,
        _var0));
} else {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
} else {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Ddecide_D259_k162(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Ddecide_D259_k162" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D259_k162, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddecide_D259_k162, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.751 0 0) ((close _V10_Ddecide_D259_k163) (##inline ##vcore.cdr (bruijn ##.expr.62.305 2 0))) ((bruijn ##.k.750 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(_V10_Ddecide_D259_k163, env, runtime,
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Ddecide_D259_k161(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Ddecide_D259_k161" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D259_k161, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddecide_D259_k161, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.62.305 1 0)) ((bruijn ##.equal?.194 24 39) (close _V10_Ddecide_D259_k162) 'int (##inline ##vcore.car (bruijn ##.expr.62.305 1 0))) ((bruijn ##.k.750 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 24-1, 39), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddecide_D259_k162, env)}),
      _V0int,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Ddecide_D259_k173(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Ddecide_D259_k173" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D259_k173, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddecide_D259_k173, runtime, upenv, 1, argc, _var0) {
  // (if (##inline ##vcore.pair? (bruijn ##.expr.71.314 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.71.314 0 0))) ((bruijn ##.kk.20.263 26 1) (bruijn ##.k.734 5 0) 'short) ((bruijn ##.k.734 5 0) #f)) ((bruijn ##.k.734 5 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    V_CALL(VGetArg(upenv, 26-1, 1), runtime,
      VGetArg(upenv, 5-1, 0),
      _V0short);
} else {
    V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      VEncodeBool(false));
}
} else {
    V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Ddecide_D259_k172(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Ddecide_D259_k172" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D259_k172, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddecide_D259_k172, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.70.313 0 0)) (if (##inline ##vcore.eq? #f (##inline ##vcore.car (bruijn ##.expr.70.313 0 0))) ((close _V10_Ddecide_D259_k173) (##inline ##vcore.cdr (bruijn ##.expr.70.313 0 0))) ((bruijn ##.k.734 4 0) #f)) ((bruijn ##.k.734 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineEq2(runtime,
        VEncodeBool(false),
        VInlineCar2(runtime,
        _var0)))) {
    V_CALL_FUNC(_V10_Ddecide_D259_k173, env, runtime,
      VInlineCdr2(runtime,
        _var0));
} else {
    V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeBool(false));
}
} else {
    V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Ddecide_D259_k171(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Ddecide_D259_k171" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D259_k171, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddecide_D259_k171, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.69.312 0 0)) (if (##inline ##vcore.eq? #t (##inline ##vcore.car (bruijn ##.expr.69.312 0 0))) ((close _V10_Ddecide_D259_k172) (##inline ##vcore.cdr (bruijn ##.expr.69.312 0 0))) ((bruijn ##.k.734 3 0) #f)) ((bruijn ##.k.734 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineEq2(runtime,
        VEncodeBool(true),
        VInlineCar2(runtime,
        _var0)))) {
    V_CALL_FUNC(_V10_Ddecide_D259_k172, env, runtime,
      VInlineCdr2(runtime,
        _var0));
} else {
    V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
} else {
    V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Ddecide_D259_k170(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Ddecide_D259_k170" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D259_k170, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddecide_D259_k170, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.68.311 0 0)) (if (##inline ##vcore.eq? 0 (##inline ##vcore.car (bruijn ##.expr.68.311 0 0))) ((close _V10_Ddecide_D259_k171) (##inline ##vcore.cdr (bruijn ##.expr.68.311 0 0))) ((bruijn ##.k.734 2 0) #f)) ((bruijn ##.k.734 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineEq2(runtime,
        VEncodeInt(0l),
        VInlineCar2(runtime,
        _var0)))) {
    V_CALL_FUNC(_V10_Ddecide_D259_k171, env, runtime,
      VInlineCdr2(runtime,
        _var0));
} else {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
} else {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Ddecide_D259_k169(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Ddecide_D259_k169" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D259_k169, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddecide_D259_k169, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.735 0 0) ((close _V10_Ddecide_D259_k170) (##inline ##vcore.cdr (bruijn ##.expr.67.310 2 0))) ((bruijn ##.k.734 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(_V10_Ddecide_D259_k170, env, runtime,
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Ddecide_D259_k168(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Ddecide_D259_k168" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D259_k168, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddecide_D259_k168, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.67.310 1 0)) ((bruijn ##.equal?.194 26 39) (close _V10_Ddecide_D259_k169) 'int (##inline ##vcore.car (bruijn ##.expr.67.310 1 0))) ((bruijn ##.k.734 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 26-1, 39), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddecide_D259_k169, env)}),
      _V0int,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Ddecide_D259_k180(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Ddecide_D259_k180" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D259_k180, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddecide_D259_k180, runtime, upenv, 1, argc, _var0) {
  // (if (##inline ##vcore.pair? (bruijn ##.expr.76.319 0 0)) (if (##inline ##vcore.eq? #f (##inline ##vcore.car (bruijn ##.expr.76.319 0 0))) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.76.319 0 0))) ((bruijn ##.kk.20.263 28 1) (bruijn ##.k.716 5 0) 'unsigned-short) ((bruijn ##.k.716 5 0) #f)) ((bruijn ##.k.716 5 0) #f)) ((bruijn ##.k.716 5 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineEq2(runtime,
        VEncodeBool(false),
        VInlineCar2(runtime,
        _var0)))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    V_CALL(VGetArg(upenv, 28-1, 1), runtime,
      VGetArg(upenv, 5-1, 0),
      _V0unsigned__short);
} else {
    V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      VEncodeBool(false));
}
} else {
    V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      VEncodeBool(false));
}
} else {
    V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Ddecide_D259_k179(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Ddecide_D259_k179" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D259_k179, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddecide_D259_k179, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.75.318 0 0)) (if (##inline ##vcore.eq? #t (##inline ##vcore.car (bruijn ##.expr.75.318 0 0))) ((close _V10_Ddecide_D259_k180) (##inline ##vcore.cdr (bruijn ##.expr.75.318 0 0))) ((bruijn ##.k.716 4 0) #f)) ((bruijn ##.k.716 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineEq2(runtime,
        VEncodeBool(true),
        VInlineCar2(runtime,
        _var0)))) {
    V_CALL_FUNC(_V10_Ddecide_D259_k180, env, runtime,
      VInlineCdr2(runtime,
        _var0));
} else {
    V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeBool(false));
}
} else {
    V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Ddecide_D259_k178(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Ddecide_D259_k178" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D259_k178, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddecide_D259_k178, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.74.317 0 0)) (if (##inline ##vcore.eq? #t (##inline ##vcore.car (bruijn ##.expr.74.317 0 0))) ((close _V10_Ddecide_D259_k179) (##inline ##vcore.cdr (bruijn ##.expr.74.317 0 0))) ((bruijn ##.k.716 3 0) #f)) ((bruijn ##.k.716 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineEq2(runtime,
        VEncodeBool(true),
        VInlineCar2(runtime,
        _var0)))) {
    V_CALL_FUNC(_V10_Ddecide_D259_k179, env, runtime,
      VInlineCdr2(runtime,
        _var0));
} else {
    V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
} else {
    V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Ddecide_D259_k177(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Ddecide_D259_k177" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D259_k177, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddecide_D259_k177, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.73.316 0 0)) (if (##inline ##vcore.eq? 0 (##inline ##vcore.car (bruijn ##.expr.73.316 0 0))) ((close _V10_Ddecide_D259_k178) (##inline ##vcore.cdr (bruijn ##.expr.73.316 0 0))) ((bruijn ##.k.716 2 0) #f)) ((bruijn ##.k.716 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineEq2(runtime,
        VEncodeInt(0l),
        VInlineCar2(runtime,
        _var0)))) {
    V_CALL_FUNC(_V10_Ddecide_D259_k178, env, runtime,
      VInlineCdr2(runtime,
        _var0));
} else {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
} else {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Ddecide_D259_k176(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Ddecide_D259_k176" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D259_k176, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddecide_D259_k176, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.717 0 0) ((close _V10_Ddecide_D259_k177) (##inline ##vcore.cdr (bruijn ##.expr.72.315 2 0))) ((bruijn ##.k.716 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(_V10_Ddecide_D259_k177, env, runtime,
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Ddecide_D259_k175(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Ddecide_D259_k175" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D259_k175, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddecide_D259_k175, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.72.315 1 0)) ((bruijn ##.equal?.194 28 39) (close _V10_Ddecide_D259_k176) 'int (##inline ##vcore.car (bruijn ##.expr.72.315 1 0))) ((bruijn ##.k.716 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 28-1, 39), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddecide_D259_k176, env)}),
      _V0int,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Ddecide_D259_k190(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Ddecide_D259_k190" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D259_k190, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddecide_D259_k190, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.equal?.194 38 39) (bruijn ##.k.708 1 0) (bruijn ##.x.709 0 0) (##string ##.string.1447))
    V_CALL(VGetArg(upenv, 38-1, 39), runtime,
      upenv->vars[0],
      _var0,
      VEncodePointer(&_V10_Dstring_D1447.sym, VPOINTER_OTHER));
 }
}
static void _V10_Ddecide_D259_k189(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Ddecide_D259_k189" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D259_k189, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddecide_D259_k189, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.707 1 0) ((bruijn ##.car.188 37 33) (close _V10_Ddecide_D259_k190) (bruijn ##.special.321 6 0)) ((bruijn ##.k.708 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(VGetArg(upenv, 37-1, 33), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddecide_D259_k190, env)}),
      VGetArg(upenv, 6-1, 0));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Ddecide_D259_lambda40(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Ddecide_D259_lambda40" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddecide_D259_lambda40, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.k.706 2 0) (bruijn ##.x.327 0 0))
    V_CALL(upenv->up->vars[0], runtime,
      _var0);
 }
}
static void _V10_Ddecide_D259_k193(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Ddecide_D259_k193" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D259_k193, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddecide_D259_k193, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.x.82.326 0 0) ((close _V10_Ddecide_D259_lambda40) (bruijn ##.x.82.326 0 0)) ((bruijn ##.k.706 1 0) (bruijn ##.special.321 8 0)))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(_V10_Ddecide_D259_lambda40, env, runtime,
      _var0);
} else {
    V_CALL(upenv->vars[0], runtime,
      VGetArg(upenv, 8-1, 0));
}
 }
}
static void _V10_Ddecide_D259_k192(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Ddecide_D259_k192" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D259_k192, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddecide_D259_k192, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.705 1 0) ((bruijn ##.k.706 0 0) 'unsigned-int) ((bruijn ##.find-typedef.197 37 1) (close _V10_Ddecide_D259_k193) (bruijn ##.special.321 7 0) (bruijn ##.table.257 36 2)))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(_var0, runtime,
      _V0unsigned__int);
} else {
    V_CALL(VGetArg(upenv, 37-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddecide_D259_k193, env)}),
      VGetArg(upenv, 7-1, 0),
      VGetArg(upenv, 36-1, 2));
}
 }
}
static void _V10_Ddecide_D259_k194(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Ddecide_D259_k194" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D259_k194, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddecide_D259_k194, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.kk.20.263 33 1) (bruijn ##.k.694 8 0) (bruijn ##.x.704 0 0))
    V_CALL(VGetArg(upenv, 33-1, 1), runtime,
      VGetArg(upenv, 8-1, 0),
      _var0);
 }
}
static void _V10_Ddecide_D259_k191(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Ddecide_D259_k191" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D259_k191, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddecide_D259_k191, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Ddecide_D259_k192) (close _V10_Ddecide_D259_k194))
    V_CALL_FUNC(_V10_Ddecide_D259_k192, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddecide_D259_k194, env)}));
 }
}
static void _V10_Ddecide_D259_k188(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Ddecide_D259_k188" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D259_k188, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddecide_D259_k188, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Ddecide_D259_k189) (close _V10_Ddecide_D259_k191))
    V_CALL_FUNC(_V10_Ddecide_D259_k189, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddecide_D259_k191, env)}));
 }
}
static void _V10_Ddecide_D259_k187(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Ddecide_D259_k187" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D259_k187, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddecide_D259_k187, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.81.325 0 0)) (if (##inline ##vcore.eq? #f (##inline ##vcore.car (bruijn ##.expr.81.325 0 0))) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.81.325 0 0))) ((bruijn ##.pair?.189 35 34) (close _V10_Ddecide_D259_k188) (bruijn ##.special.321 4 0)) ((bruijn ##.k.694 5 0) #f)) ((bruijn ##.k.694 5 0) #f)) ((bruijn ##.k.694 5 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineEq2(runtime,
        VEncodeBool(false),
        VInlineCar2(runtime,
        _var0)))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    V_CALL(VGetArg(upenv, 35-1, 34), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddecide_D259_k188, env)}),
      upenv->up->up->up->vars[0]);
} else {
    V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      VEncodeBool(false));
}
} else {
    V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      VEncodeBool(false));
}
} else {
    V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Ddecide_D259_k186(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Ddecide_D259_k186" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D259_k186, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddecide_D259_k186, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.80.324 0 0)) (if (##inline ##vcore.eq? #f (##inline ##vcore.car (bruijn ##.expr.80.324 0 0))) ((close _V10_Ddecide_D259_k187) (##inline ##vcore.cdr (bruijn ##.expr.80.324 0 0))) ((bruijn ##.k.694 4 0) #f)) ((bruijn ##.k.694 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineEq2(runtime,
        VEncodeBool(false),
        VInlineCar2(runtime,
        _var0)))) {
    V_CALL_FUNC(_V10_Ddecide_D259_k187, env, runtime,
      VInlineCdr2(runtime,
        _var0));
} else {
    V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeBool(false));
}
} else {
    V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Ddecide_D259_k185(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Ddecide_D259_k185" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D259_k185, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddecide_D259_k185, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.79.323 0 0)) (if (##inline ##vcore.eq? #f (##inline ##vcore.car (bruijn ##.expr.79.323 0 0))) ((close _V10_Ddecide_D259_k186) (##inline ##vcore.cdr (bruijn ##.expr.79.323 0 0))) ((bruijn ##.k.694 3 0) #f)) ((bruijn ##.k.694 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineEq2(runtime,
        VEncodeBool(false),
        VInlineCar2(runtime,
        _var0)))) {
    V_CALL_FUNC(_V10_Ddecide_D259_k186, env, runtime,
      VInlineCdr2(runtime,
        _var0));
} else {
    V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
} else {
    V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Ddecide_D259_k184(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Ddecide_D259_k184" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D259_k184, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddecide_D259_k184, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.78.322 0 0)) (if (##inline ##vcore.eq? 0 (##inline ##vcore.car (bruijn ##.expr.78.322 0 0))) ((close _V10_Ddecide_D259_k185) (##inline ##vcore.cdr (bruijn ##.expr.78.322 0 0))) ((bruijn ##.k.694 2 0) #f)) ((bruijn ##.k.694 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineEq2(runtime,
        VEncodeInt(0l),
        VInlineCar2(runtime,
        _var0)))) {
    V_CALL_FUNC(_V10_Ddecide_D259_k185, env, runtime,
      VInlineCdr2(runtime,
        _var0));
} else {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
} else {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Ddecide_D259_k183(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Ddecide_D259_k183" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D259_k183, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddecide_D259_k183, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Ddecide_D259_k184) (##inline ##vcore.cdr (bruijn ##.expr.77.320 2 0)))
    V_CALL_FUNC(_V10_Ddecide_D259_k184, env, runtime,
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
 }
}
static void _V10_Ddecide_D259_k182(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Ddecide_D259_k182" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D259_k182, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddecide_D259_k182, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.77.320 1 0)) ((close _V10_Ddecide_D259_k183) (##inline ##vcore.car (bruijn ##.expr.77.320 1 0))) ((bruijn ##.k.694 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL_FUNC(_V10_Ddecide_D259_k183, env, runtime,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Ddecide_D259_k197(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Ddecide_D259_k197" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D259_k197, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddecide_D259_k197, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.kk.20.263 27 1) (bruijn ##.k.673 27 0) (bruijn ##.x.686 0 0))
    V_CALL(VGetArg(upenv, 27-1, 1), runtime,
      VGetArg(upenv, 27-1, 0),
      _var0);
 }
}
static void _V10_Ddecide_D259_k196(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Ddecide_D259_k196" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D259_k196, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddecide_D259_k196, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.compiler-error.178 31 23) (close _V10_Ddecide_D259_k197) (##string ##.string.1448) (bruijn ##.x.687 0 0))
    V_CALL(VGetArg(upenv, 31-1, 23), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddecide_D259_k197, env)}),
      VEncodePointer(&_V10_Dstring_D1448.sym, VPOINTER_OTHER),
      _var0);
 }
}
static void _V10_Ddecide_D259_k195(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Ddecide_D259_k195" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D259_k195, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddecide_D259_k195, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.map.158 30 3) (close _V10_Ddecide_D259_k196) (bruijn ##.list.157 30 2) (bruijn ##.args.262 26 1) (##inline ##vcore.qcons 'special (##inline ##vcore.qcons 'longs (##inline ##vcore.qcons 'short (##inline ##vcore.qcons 'unsigned (##inline ##vcore.qcons 'signed '()))))))
    V_CALL(VGetArg(upenv, 30-1, 3), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddecide_D259_k196, env)}),
      VGetArg(upenv, 30-1, 2),
      VGetArg(upenv, 26-1, 1),
      VInlineCons2(runtime,
        _V0special,
        VInlineCons2(runtime,
        _V0longs,
        VInlineCons2(runtime,
        _V0short,
        VInlineCons2(runtime,
        _V0unsigned,
        VInlineCons2(runtime,
        _V0signed,
        VNULL))))));
 }
}
static void _V10_Ddecide_D259_lambda39(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Ddecide_D259_lambda39" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddecide_D259_lambda39, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Ddecide_D259_k182) (close _V10_Ddecide_D259_k195))
    V_CALL_FUNC(_V10_Ddecide_D259_k182, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddecide_D259_k195, env)}));
 }
}
static void _V10_Ddecide_D259_k181(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Ddecide_D259_k181" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D259_k181, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddecide_D259_k181, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Ddecide_D259_lambda39) (bruijn ##.input.21.264 22 0))
    V_CALL_FUNC(_V10_Ddecide_D259_lambda39, env, runtime,
      VGetArg(upenv, 22-1, 0));
 }
}
static void _V10_Ddecide_D259_lambda38(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Ddecide_D259_lambda38" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddecide_D259_lambda38, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Ddecide_D259_k175) (close _V10_Ddecide_D259_k181))
    V_CALL_FUNC(_V10_Ddecide_D259_k175, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddecide_D259_k181, env)}));
 }
}
static void _V10_Ddecide_D259_k174(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Ddecide_D259_k174" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D259_k174, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddecide_D259_k174, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Ddecide_D259_lambda38) (bruijn ##.input.21.264 20 0))
    V_CALL_FUNC(_V10_Ddecide_D259_lambda38, env, runtime,
      VGetArg(upenv, 20-1, 0));
 }
}
static void _V10_Ddecide_D259_lambda37(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Ddecide_D259_lambda37" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddecide_D259_lambda37, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Ddecide_D259_k168) (close _V10_Ddecide_D259_k174))
    V_CALL_FUNC(_V10_Ddecide_D259_k168, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddecide_D259_k174, env)}));
 }
}
static void _V10_Ddecide_D259_k167(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Ddecide_D259_k167" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D259_k167, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddecide_D259_k167, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Ddecide_D259_lambda37) (bruijn ##.input.21.264 18 0))
    V_CALL_FUNC(_V10_Ddecide_D259_lambda37, env, runtime,
      VGetArg(upenv, 18-1, 0));
 }
}
static void _V10_Ddecide_D259_lambda36(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Ddecide_D259_lambda36" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddecide_D259_lambda36, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Ddecide_D259_k161) (close _V10_Ddecide_D259_k167))
    V_CALL_FUNC(_V10_Ddecide_D259_k161, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddecide_D259_k167, env)}));
 }
}
static void _V10_Ddecide_D259_k160(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Ddecide_D259_k160" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D259_k160, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddecide_D259_k160, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Ddecide_D259_lambda36) (bruijn ##.input.21.264 16 0))
    V_CALL_FUNC(_V10_Ddecide_D259_lambda36, env, runtime,
      VGetArg(upenv, 16-1, 0));
 }
}
static void _V10_Ddecide_D259_lambda35(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Ddecide_D259_lambda35" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddecide_D259_lambda35, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Ddecide_D259_k154) (close _V10_Ddecide_D259_k160))
    V_CALL_FUNC(_V10_Ddecide_D259_k154, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddecide_D259_k160, env)}));
 }
}
static void _V10_Ddecide_D259_k153(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Ddecide_D259_k153" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D259_k153, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddecide_D259_k153, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Ddecide_D259_lambda35) (bruijn ##.input.21.264 14 0))
    V_CALL_FUNC(_V10_Ddecide_D259_lambda35, env, runtime,
      VGetArg(upenv, 14-1, 0));
 }
}
static void _V10_Ddecide_D259_lambda34(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Ddecide_D259_lambda34" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddecide_D259_lambda34, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Ddecide_D259_k147) (close _V10_Ddecide_D259_k153))
    V_CALL_FUNC(_V10_Ddecide_D259_k147, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddecide_D259_k153, env)}));
 }
}
static void _V10_Ddecide_D259_k146(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Ddecide_D259_k146" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D259_k146, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddecide_D259_k146, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Ddecide_D259_lambda34) (bruijn ##.input.21.264 12 0))
    V_CALL_FUNC(_V10_Ddecide_D259_lambda34, env, runtime,
      VGetArg(upenv, 12-1, 0));
 }
}
static void _V10_Ddecide_D259_lambda33(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Ddecide_D259_lambda33" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddecide_D259_lambda33, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Ddecide_D259_k140) (close _V10_Ddecide_D259_k146))
    V_CALL_FUNC(_V10_Ddecide_D259_k140, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddecide_D259_k146, env)}));
 }
}
static void _V10_Ddecide_D259_k139(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Ddecide_D259_k139" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D259_k139, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddecide_D259_k139, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Ddecide_D259_lambda33) (bruijn ##.input.21.264 10 0))
    V_CALL_FUNC(_V10_Ddecide_D259_lambda33, env, runtime,
      VGetArg(upenv, 10-1, 0));
 }
}
static void _V10_Ddecide_D259_lambda32(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Ddecide_D259_lambda32" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddecide_D259_lambda32, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Ddecide_D259_k133) (close _V10_Ddecide_D259_k139))
    V_CALL_FUNC(_V10_Ddecide_D259_k133, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddecide_D259_k139, env)}));
 }
}
static void _V10_Ddecide_D259_k132(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Ddecide_D259_k132" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D259_k132, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddecide_D259_k132, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Ddecide_D259_lambda32) (bruijn ##.input.21.264 8 0))
    V_CALL_FUNC(_V10_Ddecide_D259_lambda32, env, runtime,
      VGetArg(upenv, 8-1, 0));
 }
}
static void _V10_Ddecide_D259_lambda31(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Ddecide_D259_lambda31" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddecide_D259_lambda31, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Ddecide_D259_k126) (close _V10_Ddecide_D259_k132))
    V_CALL_FUNC(_V10_Ddecide_D259_k126, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddecide_D259_k132, env)}));
 }
}
static void _V10_Ddecide_D259_k125(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Ddecide_D259_k125" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D259_k125, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddecide_D259_k125, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Ddecide_D259_lambda31) (bruijn ##.input.21.264 6 0))
    V_CALL_FUNC(_V10_Ddecide_D259_lambda31, env, runtime,
      VGetArg(upenv, 6-1, 0));
 }
}
static void _V10_Ddecide_D259_lambda30(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Ddecide_D259_lambda30" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddecide_D259_lambda30, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Ddecide_D259_k119) (close _V10_Ddecide_D259_k125))
    V_CALL_FUNC(_V10_Ddecide_D259_k119, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddecide_D259_k125, env)}));
 }
}
static void _V10_Ddecide_D259_k118(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Ddecide_D259_k118" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D259_k118, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddecide_D259_k118, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Ddecide_D259_lambda30) (bruijn ##.input.21.264 4 0))
    V_CALL_FUNC(_V10_Ddecide_D259_lambda30, env, runtime,
      upenv->up->up->up->vars[0]);
 }
}
static void _V10_Ddecide_D259_lambda29(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Ddecide_D259_lambda29" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddecide_D259_lambda29, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Ddecide_D259_k112) (close _V10_Ddecide_D259_k118))
    V_CALL_FUNC(_V10_Ddecide_D259_k112, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddecide_D259_k118, env)}));
 }
}
static void _V10_Ddecide_D259_k111(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Ddecide_D259_k111" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D259_k111, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddecide_D259_k111, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Ddecide_D259_lambda29) (bruijn ##.input.21.264 2 0))
    V_CALL_FUNC(_V10_Ddecide_D259_lambda29, env, runtime,
      upenv->up->vars[0]);
 }
}
static void _V10_Ddecide_D259_lambda28(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Ddecide_D259_lambda28" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddecide_D259_lambda28, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Ddecide_D259_k105) (close _V10_Ddecide_D259_k111))
    V_CALL_FUNC(_V10_Ddecide_D259_k105, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddecide_D259_k111, env)}));
 }
}
static void _V10_Ddecide_D259_lambda27(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Ddecide_D259_lambda27" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddecide_D259_lambda27, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Ddecide_D259_lambda28) (bruijn ##.input.21.264 0 0))
    V_CALL_FUNC(_V10_Ddecide_D259_lambda28, env, runtime,
      _var0);
 }
}
static void _V10_Ddecide_D259_lambda26(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V10_Ddecide_D259_lambda26" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D259_lambda26, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddecide_D259_lambda26, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V10_Ddecide_D259_lambda27) (bruijn ##.args.262 1 1))
    V_CALL_FUNC(_V10_Ddecide_D259_lambda27, env, runtime,
      upenv->vars[1]);
 }
}
static void _V10_Ddecide_D259_lambda25(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, ...) {
 static VDebugInfo dbg = { "_V10_Ddecide_D259_lambda25" };
 VRecordCall2(runtime, &dbg);
 if(argc < 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecide_D259_lambda25, got ~D~N"
  "-- expected 1 or more~N"
  , argc);
 }
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 1, argc, _var0);
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddecide_D259_lambda25, runtime, upenv, 1, argc, _var0, _varargs) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _varargs;
  // ((bruijn ##.call/cc.192 4 37) (bruijn ##.k.672 0 0) (close _V10_Ddecide_D259_lambda26))
    V_CALL(upenv->up->up->up->vars[37], runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddecide_D259_lambda26, env)}));
 }
}
static void _V10_Dappend__const_D260_lambda41(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V10_Dappend__const_D260_lambda41" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dappend__const_D260_lambda41, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dappend__const_D260_lambda41, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  // (if (bruijn ##.const?.328 0 1) ((bruijn ##.list.157 4 2) (bruijn ##.k.905 0 0) 'const (bruijn ##.type.329 0 2)) ((bruijn ##.k.905 0 0) (bruijn ##.type.329 0 2)))
if(VDecodeBool(
_var1)) {
    V_CALL(upenv->up->up->up->vars[2], runtime,
      _var0,
      _V0const,
      _var2);
} else {
    V_CALL(_var0, runtime,
      _var2);
}
 }
}
static void _V10_Dmaybe__string___Gsymbol_D261_k198(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dmaybe__string___Gsymbol_D261_k198" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmaybe__string___Gsymbol_D261_k198, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dmaybe__string___Gsymbol_D261_k198, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##.p.907 0 0) ((bruijn ##.string->symbol.159 5 4) (bruijn ##.k.906 1 0) (bruijn ##.x.330 1 1)) ((bruijn ##.k.906 1 0) (bruijn ##.x.330 1 1)))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 5-1, 4), runtime,
      upenv->vars[0],
      upenv->vars[1]);
} else {
    V_CALL(upenv->vars[0], runtime,
      upenv->vars[1]);
}
 }
}
static void _V10_Dmaybe__string___Gsymbol_D261_lambda42(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V10_Dmaybe__string___Gsymbol_D261_lambda42" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmaybe__string___Gsymbol_D261_lambda42, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dmaybe__string___Gsymbol_D261_lambda42, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##.string?.177 4 22) (close _V10_Dmaybe__string___Gsymbol_D261_k198) (bruijn ##.x.330 0 1))
    V_CALL(upenv->up->up->up->vars[22], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmaybe__string___Gsymbol_D261_k198, env)}),
      _var1);
 }
}
static void _V10_Dloop_D331_k200(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D331_k200" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D331_k200, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D331_k200, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##.special.334 2 3) ((bruijn ##.k.912 0 0) (bruijn ##.special.334 2 3)) ((bruijn ##.k.912 0 0) 'int))
if(VDecodeBool(
upenv->up->vars[3])) {
    V_CALL(_var0, runtime,
      upenv->up->vars[3]);
} else {
    V_CALL(_var0, runtime,
      _V0int);
}
 }
}
static void _V10_Dloop_D331_k202(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D331_k202" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D331_k202, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D331_k202, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.append-const.260 5 1) (bruijn ##.k.908 3 0) (bruijn ##.const.335 3 4) (bruijn ##.x.910 0 0))
    V_CALL(VGetArg(upenv, 5-1, 1), runtime,
      upenv->up->up->vars[0],
      upenv->up->up->vars[4],
      _var0);
 }
}
static void _V10_Dloop_D331_k201(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D331_k201" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D331_k201, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D331_k201, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.decide.259 4 0) (close _V10_Dloop_D331_k202) (bruijn ##.x.911 0 0) (bruijn ##.longs.336 2 5) (bruijn ##.short.337 2 6) (bruijn ##.unsigned.338 2 7) (bruijn ##.signed.339 2 8))
    V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D331_k202, env)}),
      _var0,
      upenv->up->vars[5],
      upenv->up->vars[6],
      upenv->up->vars[7],
      upenv->up->vars[8]);
 }
}
static void _V10_Dloop_D331_k205(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D331_k205" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D331_k205, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D331_k205, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.loop.331 5 0) (bruijn ##.k.908 4 0) (bruijn ##.x.914 0 0) (bruijn ##.storage.333 4 2) (bruijn ##.special.334 4 3) #t (bruijn ##.longs.336 4 5) (bruijn ##.short.337 4 6) (bruijn ##.unsigned.338 4 7) (bruijn ##.signed.339 4 8))
    V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      upenv->up->up->up->vars[0],
      _var0,
      upenv->up->up->up->vars[2],
      upenv->up->up->up->vars[3],
      VEncodeBool(true),
      upenv->up->up->up->vars[5],
      upenv->up->up->up->vars[6],
      upenv->up->up->up->vars[7],
      upenv->up->up->up->vars[8]);
 }
}
static void _V10_Dloop_D331_k207(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D331_k207" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D331_k207, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D331_k207, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##.p.943 1 0) ((bruijn ##.k.944 0 0) (bruijn ##.p.943 1 0)) ((bruijn ##.eqv?.185 10 30) (bruijn ##.k.944 0 0) (bruijn ##.x.19.340 3 0) 'volatile))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(_var0, runtime,
      upenv->vars[0]);
} else {
    V_CALL(VGetArg(upenv, 10-1, 30), runtime,
      _var0,
      upenv->up->up->vars[0],
      _V0volatile);
}
 }
}
static void _V10_Dloop_D331_k209(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D331_k209" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D331_k209, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D331_k209, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.loop.331 7 0) (bruijn ##.k.908 6 0) (bruijn ##.x.916 0 0) (bruijn ##.storage.333 6 2) (bruijn ##.special.334 6 3) (bruijn ##.const.335 6 4) (bruijn ##.longs.336 6 5) (bruijn ##.short.337 6 6) (bruijn ##.unsigned.338 6 7) (bruijn ##.signed.339 6 8))
    V_CALL(VGetArg(upenv, 7-1, 0), runtime,
      VGetArg(upenv, 6-1, 0),
      _var0,
      VGetArg(upenv, 6-1, 2),
      VGetArg(upenv, 6-1, 3),
      VGetArg(upenv, 6-1, 4),
      VGetArg(upenv, 6-1, 5),
      VGetArg(upenv, 6-1, 6),
      VGetArg(upenv, 6-1, 7),
      VGetArg(upenv, 6-1, 8));
 }
}
static void _V10_Dloop_D331_k214(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D331_k214" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D331_k214, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D331_k214, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##.p.942 0 0) ((bruijn ##.k.939 3 0) (bruijn ##.p.942 0 0)) ((bruijn ##.eqv?.185 15 30) (bruijn ##.k.939 3 0) (bruijn ##.x.19.340 8 0) 'auto))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->up->up->vars[0], runtime,
      _var0);
} else {
    V_CALL(VGetArg(upenv, 15-1, 30), runtime,
      upenv->up->up->vars[0],
      VGetArg(upenv, 8-1, 0),
      _V0auto);
}
 }
}
static void _V10_Dloop_D331_k213(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D331_k213" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D331_k213, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D331_k213, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.941 0 0) ((bruijn ##.k.939 2 0) (bruijn ##.p.941 0 0)) ((bruijn ##.eqv?.185 14 30) (close _V10_Dloop_D331_k214) (bruijn ##.x.19.340 7 0) 'register))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->up->vars[0], runtime,
      _var0);
} else {
    V_CALL(VGetArg(upenv, 14-1, 30), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D331_k214, env)}),
      VGetArg(upenv, 7-1, 0),
      _V0register);
}
 }
}
static void _V10_Dloop_D331_k212(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D331_k212" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D331_k212, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D331_k212, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.940 0 0) ((bruijn ##.k.939 1 0) (bruijn ##.p.940 0 0)) ((bruijn ##.eqv?.185 13 30) (close _V10_Dloop_D331_k213) (bruijn ##.x.19.340 6 0) 'typedef))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->vars[0], runtime,
      _var0);
} else {
    V_CALL(VGetArg(upenv, 13-1, 30), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D331_k213, env)}),
      VGetArg(upenv, 6-1, 0),
      _V0typedef);
}
 }
}
static void _V10_Dloop_D331_k211(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D331_k211" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D331_k211, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D331_k211, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.938 1 0) ((bruijn ##.k.939 0 0) (bruijn ##.p.938 1 0)) ((bruijn ##.eqv?.185 12 30) (close _V10_Dloop_D331_k212) (bruijn ##.x.19.340 5 0) 'extern))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(_var0, runtime,
      upenv->vars[0]);
} else {
    V_CALL(VGetArg(upenv, 12-1, 30), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D331_k212, env)}),
      VGetArg(upenv, 5-1, 0),
      _V0extern);
}
 }
}
static void _V10_Dloop_D331_k217(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D331_k217" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D331_k217, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D331_k217, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##.p.924 1 0) ((bruijn ##.compiler-error.178 14 23) (bruijn ##.k.925 0 0) (##string ##.string.1449)) ((bruijn ##.car.188 14 33) (bruijn ##.k.925 0 0) (bruijn ##.t.332 9 1)))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(VGetArg(upenv, 14-1, 23), runtime,
      _var0,
      VEncodePointer(&_V10_Dstring_D1449.sym, VPOINTER_OTHER));
} else {
    V_CALL(VGetArg(upenv, 14-1, 33), runtime,
      _var0,
      VGetArg(upenv, 9-1, 1));
}
 }
}
static void _V10_Dloop_D331_k220(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D331_k220" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D331_k220, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D331_k220, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.compiler-error.178 16 23) (bruijn ##.k.922 1 0) (##string ##.string.1450) (bruijn ##.storage.333 11 2) (bruijn ##.x.923 0 0))
    V_CALL(VGetArg(upenv, 16-1, 23), runtime,
      upenv->vars[0],
      VEncodePointer(&_V10_Dstring_D1450.sym, VPOINTER_OTHER),
      VGetArg(upenv, 11-1, 2),
      _var0);
 }
}
static void _V10_Dloop_D331_k219(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D331_k219" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D331_k219, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D331_k219, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.storage.333 10 2) ((bruijn ##.car.188 15 33) (close _V10_Dloop_D331_k220) (bruijn ##.t.332 10 1)) ((bruijn ##.k.922 0 0) #f))
if(VDecodeBool(
VGetArg(upenv, 10-1, 2))) {
    V_CALL(VGetArg(upenv, 15-1, 33), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D331_k220, env)}),
      VGetArg(upenv, 10-1, 1));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dloop_D331_k223(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D331_k223" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D331_k223, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D331_k223, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.loop.331 13 0) (bruijn ##.k.908 12 0) (bruijn ##.x.920 1 0) (bruijn ##.x.921 0 0) (bruijn ##.special.334 12 3) (bruijn ##.const.335 12 4) (bruijn ##.longs.336 12 5) (bruijn ##.short.337 12 6) (bruijn ##.unsigned.338 12 7) (bruijn ##.signed.339 12 8))
    V_CALL(VGetArg(upenv, 13-1, 0), runtime,
      VGetArg(upenv, 12-1, 0),
      upenv->vars[0],
      _var0,
      VGetArg(upenv, 12-1, 3),
      VGetArg(upenv, 12-1, 4),
      VGetArg(upenv, 12-1, 5),
      VGetArg(upenv, 12-1, 6),
      VGetArg(upenv, 12-1, 7),
      VGetArg(upenv, 12-1, 8));
 }
}
static void _V10_Dloop_D331_k222(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D331_k222" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D331_k222, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D331_k222, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.car.188 16 33) (close _V10_Dloop_D331_k223) (bruijn ##.t.332 11 1))
    V_CALL(VGetArg(upenv, 16-1, 33), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D331_k223, env)}),
      VGetArg(upenv, 11-1, 1));
 }
}
static void _V10_Dloop_D331_k221(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D331_k221" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D331_k221, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D331_k221, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cdr.186 15 31) (close _V10_Dloop_D331_k222) (bruijn ##.t.332 10 1))
    V_CALL(VGetArg(upenv, 15-1, 31), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D331_k222, env)}),
      VGetArg(upenv, 10-1, 1));
 }
}
static void _V10_Dloop_D331_k218(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D331_k218" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D331_k218, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D331_k218, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dloop_D331_k219) (close _V10_Dloop_D331_k221))
    V_CALL_FUNC(_V10_Dloop_D331_k219, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D331_k221, env)}));
 }
}
static void _V10_Dloop_D331_k216(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D331_k216" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D331_k216, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D331_k216, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dloop_D331_k217) (close _V10_Dloop_D331_k218))
    V_CALL_FUNC(_V10_Dloop_D331_k217, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D331_k218, env)}));
 }
}
static void _V10_Dloop_D331_k226(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D331_k226" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D331_k226, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D331_k226, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.loop.331 11 0) (bruijn ##.k.908 10 0) (bruijn ##.x.927 1 0) (bruijn ##.storage.333 10 2) (bruijn ##.special.334 10 3) (bruijn ##.const.335 10 4) (bruijn ##.x.928 0 0) (bruijn ##.short.337 10 6) (bruijn ##.unsigned.338 10 7) (bruijn ##.signed.339 10 8))
    V_CALL(VGetArg(upenv, 11-1, 0), runtime,
      VGetArg(upenv, 10-1, 0),
      upenv->vars[0],
      VGetArg(upenv, 10-1, 2),
      VGetArg(upenv, 10-1, 3),
      VGetArg(upenv, 10-1, 4),
      _var0,
      VGetArg(upenv, 10-1, 6),
      VGetArg(upenv, 10-1, 7),
      VGetArg(upenv, 10-1, 8));
 }
}
static void _V10_Dloop_D331_k225(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D331_k225" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D331_k225, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D331_k225, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.+.190 14 35) (close _V10_Dloop_D331_k226) (bruijn ##.longs.336 9 5) 1)
    V_CALL(VGetArg(upenv, 14-1, 35), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D331_k226, env)}),
      VGetArg(upenv, 9-1, 5),
      VEncodeInt(1l));
 }
}
static void _V10_Dloop_D331_k228(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D331_k228" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D331_k228, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D331_k228, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.loop.331 11 0) (bruijn ##.k.908 10 0) (bruijn ##.x.930 0 0) (bruijn ##.storage.333 10 2) (bruijn ##.special.334 10 3) (bruijn ##.const.335 10 4) (bruijn ##.longs.336 10 5) #t (bruijn ##.unsigned.338 10 7) (bruijn ##.signed.339 10 8))
    V_CALL(VGetArg(upenv, 11-1, 0), runtime,
      VGetArg(upenv, 10-1, 0),
      _var0,
      VGetArg(upenv, 10-1, 2),
      VGetArg(upenv, 10-1, 3),
      VGetArg(upenv, 10-1, 4),
      VGetArg(upenv, 10-1, 5),
      VEncodeBool(true),
      VGetArg(upenv, 10-1, 7),
      VGetArg(upenv, 10-1, 8));
 }
}
static void _V10_Dloop_D331_k230(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D331_k230" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D331_k230, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D331_k230, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.loop.331 12 0) (bruijn ##.k.908 11 0) (bruijn ##.x.932 0 0) (bruijn ##.storage.333 11 2) (bruijn ##.special.334 11 3) (bruijn ##.const.335 11 4) (bruijn ##.longs.336 11 5) (bruijn ##.short.337 11 6) #t (bruijn ##.signed.339 11 8))
    V_CALL(VGetArg(upenv, 12-1, 0), runtime,
      VGetArg(upenv, 11-1, 0),
      _var0,
      VGetArg(upenv, 11-1, 2),
      VGetArg(upenv, 11-1, 3),
      VGetArg(upenv, 11-1, 4),
      VGetArg(upenv, 11-1, 5),
      VGetArg(upenv, 11-1, 6),
      VEncodeBool(true),
      VGetArg(upenv, 11-1, 8));
 }
}
static void _V10_Dloop_D331_k232(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D331_k232" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D331_k232, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D331_k232, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.loop.331 13 0) (bruijn ##.k.908 12 0) (bruijn ##.x.934 0 0) (bruijn ##.storage.333 12 2) (bruijn ##.special.334 12 3) (bruijn ##.const.335 12 4) (bruijn ##.longs.336 12 5) (bruijn ##.short.337 12 6) (bruijn ##.unsigned.338 12 7) #t)
    V_CALL(VGetArg(upenv, 13-1, 0), runtime,
      VGetArg(upenv, 12-1, 0),
      _var0,
      VGetArg(upenv, 12-1, 2),
      VGetArg(upenv, 12-1, 3),
      VGetArg(upenv, 12-1, 4),
      VGetArg(upenv, 12-1, 5),
      VGetArg(upenv, 12-1, 6),
      VGetArg(upenv, 12-1, 7),
      VEncodeBool(true));
 }
}
static void _V10_Dloop_D331_k233(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D331_k233" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D331_k233, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D331_k233, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.compiler-error.178 17 23) (bruijn ##.k.908 12 0) (##string ##.string.1451) (bruijn ##.x.935 0 0) (bruijn ##.special.334 12 3))
    V_CALL(VGetArg(upenv, 17-1, 23), runtime,
      VGetArg(upenv, 12-1, 0),
      VEncodePointer(&_V10_Dstring_D1451.sym, VPOINTER_OTHER),
      _var0,
      VGetArg(upenv, 12-1, 3));
 }
}
static void _V10_Dloop_D331_k235(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D331_k235" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D331_k235, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D331_k235, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.loop.331 14 0) (bruijn ##.k.908 13 0) (bruijn ##.x.936 1 0) (bruijn ##.storage.333 13 2) (bruijn ##.x.937 0 0) (bruijn ##.const.335 13 4) (bruijn ##.longs.336 13 5) (bruijn ##.short.337 13 6) (bruijn ##.unsigned.338 13 7) (bruijn ##.signed.339 13 8))
    V_CALL(VGetArg(upenv, 14-1, 0), runtime,
      VGetArg(upenv, 13-1, 0),
      upenv->vars[0],
      VGetArg(upenv, 13-1, 2),
      _var0,
      VGetArg(upenv, 13-1, 4),
      VGetArg(upenv, 13-1, 5),
      VGetArg(upenv, 13-1, 6),
      VGetArg(upenv, 13-1, 7),
      VGetArg(upenv, 13-1, 8));
 }
}
static void _V10_Dloop_D331_k234(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D331_k234" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D331_k234, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D331_k234, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.car.188 17 33) (close _V10_Dloop_D331_k235) (bruijn ##.t.332 12 1))
    V_CALL(VGetArg(upenv, 17-1, 33), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D331_k235, env)}),
      VGetArg(upenv, 12-1, 1));
 }
}
static void _V10_Dloop_D331_k231(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D331_k231" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D331_k231, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D331_k231, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.933 0 0) ((bruijn ##.cdr.186 16 31) (close _V10_Dloop_D331_k232) (bruijn ##.t.332 11 1)) (if (bruijn ##.special.334 11 3) ((bruijn ##.car.188 16 33) (close _V10_Dloop_D331_k233) (bruijn ##.t.332 11 1)) ((bruijn ##.cdr.186 16 31) (close _V10_Dloop_D331_k234) (bruijn ##.t.332 11 1))))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 16-1, 31), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D331_k232, env)}),
      VGetArg(upenv, 11-1, 1));
} else {
if(VDecodeBool(
VGetArg(upenv, 11-1, 3))) {
    V_CALL(VGetArg(upenv, 16-1, 33), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D331_k233, env)}),
      VGetArg(upenv, 11-1, 1));
} else {
    V_CALL(VGetArg(upenv, 16-1, 31), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D331_k234, env)}),
      VGetArg(upenv, 11-1, 1));
}
}
 }
}
static void _V10_Dloop_D331_k229(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D331_k229" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D331_k229, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D331_k229, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.931 0 0) ((bruijn ##.cdr.186 15 31) (close _V10_Dloop_D331_k230) (bruijn ##.t.332 10 1)) ((bruijn ##.eqv?.185 15 30) (close _V10_Dloop_D331_k231) (bruijn ##.x.19.340 8 0) 'signed))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 15-1, 31), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D331_k230, env)}),
      VGetArg(upenv, 10-1, 1));
} else {
    V_CALL(VGetArg(upenv, 15-1, 30), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D331_k231, env)}),
      VGetArg(upenv, 8-1, 0),
      _V0signed);
}
 }
}
static void _V10_Dloop_D331_k227(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D331_k227" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D331_k227, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D331_k227, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.929 0 0) ((bruijn ##.cdr.186 14 31) (close _V10_Dloop_D331_k228) (bruijn ##.t.332 9 1)) ((bruijn ##.eqv?.185 14 30) (close _V10_Dloop_D331_k229) (bruijn ##.x.19.340 7 0) 'unsigned))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 14-1, 31), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D331_k228, env)}),
      VGetArg(upenv, 9-1, 1));
} else {
    V_CALL(VGetArg(upenv, 14-1, 30), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D331_k229, env)}),
      VGetArg(upenv, 7-1, 0),
      _V0unsigned);
}
 }
}
static void _V10_Dloop_D331_k224(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D331_k224" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D331_k224, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D331_k224, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.926 0 0) ((bruijn ##.cdr.186 13 31) (close _V10_Dloop_D331_k225) (bruijn ##.t.332 8 1)) ((bruijn ##.eqv?.185 13 30) (close _V10_Dloop_D331_k227) (bruijn ##.x.19.340 6 0) 'short))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 13-1, 31), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D331_k225, env)}),
      VGetArg(upenv, 8-1, 1));
} else {
    V_CALL(VGetArg(upenv, 13-1, 30), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D331_k227, env)}),
      VGetArg(upenv, 6-1, 0),
      _V0short);
}
 }
}
static void _V10_Dloop_D331_k215(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D331_k215" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D331_k215, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D331_k215, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.917 0 0) ((bruijn ##.not.176 12 21) (close _V10_Dloop_D331_k216) (bruijn ##.storage-declaration?.258 10 3)) ((bruijn ##.eqv?.185 12 30) (close _V10_Dloop_D331_k224) (bruijn ##.x.19.340 5 0) 'long))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 12-1, 21), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D331_k216, env)}),
      VGetArg(upenv, 10-1, 3));
} else {
    V_CALL(VGetArg(upenv, 12-1, 30), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D331_k224, env)}),
      VGetArg(upenv, 5-1, 0),
      _V0long);
}
 }
}
static void _V10_Dloop_D331_k210(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D331_k210" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D331_k210, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D331_k210, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dloop_D331_k211) (close _V10_Dloop_D331_k215))
    V_CALL_FUNC(_V10_Dloop_D331_k211, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D331_k215, env)}));
 }
}
static void _V10_Dloop_D331_k208(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D331_k208" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D331_k208, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D331_k208, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.915 0 0) ((bruijn ##.cdr.186 10 31) (close _V10_Dloop_D331_k209) (bruijn ##.t.332 5 1)) ((bruijn ##.eqv?.185 10 30) (close _V10_Dloop_D331_k210) (bruijn ##.x.19.340 3 0) 'static))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 10-1, 31), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D331_k209, env)}),
      VGetArg(upenv, 5-1, 1));
} else {
    V_CALL(VGetArg(upenv, 10-1, 30), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D331_k210, env)}),
      upenv->up->up->vars[0],
      _V0static);
}
 }
}
static void _V10_Dloop_D331_k206(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D331_k206" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D331_k206, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D331_k206, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dloop_D331_k207) (close _V10_Dloop_D331_k208))
    V_CALL_FUNC(_V10_Dloop_D331_k207, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D331_k208, env)}));
 }
}
static void _V10_Dloop_D331_k204(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D331_k204" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D331_k204, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D331_k204, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.913 0 0) ((bruijn ##.cdr.186 8 31) (close _V10_Dloop_D331_k205) (bruijn ##.t.332 3 1)) ((bruijn ##.eqv?.185 8 30) (close _V10_Dloop_D331_k206) (bruijn ##.x.19.340 1 0) 'restrict))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 8-1, 31), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D331_k205, env)}),
      upenv->up->up->vars[1]);
} else {
    V_CALL(VGetArg(upenv, 8-1, 30), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D331_k206, env)}),
      upenv->vars[0],
      _V0restrict);
}
 }
}
static void _V10_Dloop_D331_k203(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D331_k203" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D331_k203, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D331_k203, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.eqv?.185 7 30) (close _V10_Dloop_D331_k204) (bruijn ##.x.19.340 0 0) 'const)
    V_CALL(VGetArg(upenv, 7-1, 30), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D331_k204, env)}),
      _var0,
      _V0const);
 }
}
static void _V10_Dloop_D331_k199(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D331_k199" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D331_k199, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D331_k199, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.909 0 0) ((close _V10_Dloop_D331_k200) (close _V10_Dloop_D331_k201)) ((bruijn ##.car.188 6 33) (close _V10_Dloop_D331_k203) (bruijn ##.t.332 1 1)))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(_V10_Dloop_D331_k200, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D331_k201, env)}));
} else {
    V_CALL(VGetArg(upenv, 6-1, 33), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D331_k203, env)}),
      upenv->vars[1]);
}
 }
}
static void _V10_Dloop_D331_lambda43(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4, VWORD _var5, VWORD _var6, VWORD _var7, VWORD _var8) {
 static VDebugInfo dbg = { "_V10_Dloop_D331_lambda43" };
 VRecordCall2(runtime, &dbg);
 if(argc != 9) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D331_lambda43, got ~D~N"
  "-- expected 9~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D331_lambda43, runtime, upenv, 9, argc, _var0, _var1, _var2, _var3, _var4, _var5, _var6, _var7, _var8) {
  struct { VEnv env; VWORD argv[9]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 9, 9, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  env->vars[4] = _var4;
  env->vars[5] = _var5;
  env->vars[6] = _var6;
  env->vars[7] = _var7;
  env->vars[8] = _var8;
  // ((bruijn ##.null?.169 5 14) (close _V10_Dloop_D331_k199) (bruijn ##.t.332 0 1))
    V_CALL(VGetArg(upenv, 5-1, 14), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D331_k199, env)}),
      _var1);
 }
}
static void _V10_Dreduce__type_D198_k236(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dreduce__type_D198_k236" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dreduce__type_D198_k236, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dreduce__type_D198_k236, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.loop.331 1 0) (bruijn ##.k.671 3 0) (bruijn ##.x.945 0 0) #f #f #f 0 #f #f #f)
    V_CALL(upenv->vars[0], runtime,
      upenv->up->up->vars[0],
      _var0,
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeInt(0l),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false));
 }
}
static void _V10_Dreduce__type_D198_lambda24(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V10_Dreduce__type_D198_lambda24" };
 VRecordCall2(runtime, &dbg);
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V10_Dreduce__type_D198_lambda24, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dreduce__type_D198_lambda24, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // (letrec 3 ((close _V10_Ddecide_D259_lambda25) (close _V10_Dappend__const_D260_lambda41) (close _V10_Dmaybe__string___Gsymbol_D261_lambda42)) (letrec 1 ((close _V10_Dloop_D331_lambda43)) ((bruijn ##.map.158 4 3) (close _V10_Dreduce__type_D198_k236) (bruijn ##.maybe-string->symbol.261 1 2) (bruijn ##.t.256 2 1))))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[3]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 3, 3, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddecide_D259_lambda25, env)});
    env->vars[1] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dappend__const_D260_lambda41, env)});
    env->vars[2] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmaybe__string___Gsymbol_D261_lambda42, env)});
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D331_lambda43, env)});
    V_CALL(upenv->up->up->up->vars[3], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dreduce__type_D198_k236, env)}),
      upenv->vars[2],
      upenv->up->vars[1]);
    }
    }
 }
}
static void _V10_Dunwrap__typedef_D199_k245(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dunwrap__typedef_D199_k245" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__typedef_D199_k245, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dunwrap__typedef_D199_k245, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##.p.961 1 0) ((bruijn ##.compiler-error.178 14 23) (bruijn ##.k.962 0 0) (##string ##.string.1452) (bruijn ##.expr.344 11 0)) ((bruijn ##.k.962 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(VGetArg(upenv, 14-1, 23), runtime,
      _var0,
      VEncodePointer(&_V10_Dstring_D1452.sym, VPOINTER_OTHER),
      VGetArg(upenv, 11-1, 0));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dunwrap__typedef_D199_k247(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dunwrap__typedef_D199_k247" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__typedef_D199_k247, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dunwrap__typedef_D199_k247, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.kk.83.345 11 1) (bruijn ##.k.951 8 0) (##inline ##vcore.cons 'typedef (##inline ##vcore.cons (bruijn ##.x.959 0 0) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.86.348 6 0)) '()))))
    V_CALL(VGetArg(upenv, 11-1, 1), runtime,
      VGetArg(upenv, 8-1, 0),
      VInlineCons2(runtime,
        _V0typedef,
        VInlineCons2(runtime,
        _var0,
        VInlineCons2(runtime,
        VInlineCar2(runtime,
        VGetArg(upenv, 6-1, 0)),
        VNULL))));
 }
}
static void _V10_Dunwrap__typedef_D199_k246(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dunwrap__typedef_D199_k246" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__typedef_D199_k246, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dunwrap__typedef_D199_k246, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.string->symbol.159 14 4) (close _V10_Dunwrap__typedef_D199_k247) (bruijn ##.name.351 3 0))
    V_CALL(VGetArg(upenv, 14-1, 4), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dunwrap__typedef_D199_k247, env)}),
      upenv->up->up->vars[0]);
 }
}
static void _V10_Dunwrap__typedef_D199_k244(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dunwrap__typedef_D199_k244" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__typedef_D199_k244, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dunwrap__typedef_D199_k244, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dunwrap__typedef_D199_k245) (close _V10_Dunwrap__typedef_D199_k246))
    V_CALL_FUNC(_V10_Dunwrap__typedef_D199_k245, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dunwrap__typedef_D199_k246, env)}));
 }
}
static void _V10_Dunwrap__typedef_D199_k243(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dunwrap__typedef_D199_k243" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__typedef_D199_k243, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dunwrap__typedef_D199_k243, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.not.176 12 21) (close _V10_Dunwrap__typedef_D199_k244) (bruijn ##.x.963 0 0))
    V_CALL(VGetArg(upenv, 12-1, 21), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dunwrap__typedef_D199_k244, env)}),
      _var0);
 }
}
static void _V10_Dunwrap__typedef_D199_k242(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dunwrap__typedef_D199_k242" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__typedef_D199_k242, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dunwrap__typedef_D199_k242, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.87.350 1 0))) ((bruijn ##.string?.177 11 22) (close _V10_Dunwrap__typedef_D199_k243) (bruijn ##.name.351 0 0)) ((bruijn ##.k.951 4 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        upenv->vars[0])))) {
    V_CALL(VGetArg(upenv, 11-1, 22), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dunwrap__typedef_D199_k243, env)}),
      _var0);
} else {
    V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dunwrap__typedef_D199_k241(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dunwrap__typedef_D199_k241" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__typedef_D199_k241, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dunwrap__typedef_D199_k241, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.87.350 0 0)) ((close _V10_Dunwrap__typedef_D199_k242) (##inline ##vcore.car (bruijn ##.expr.87.350 0 0))) ((bruijn ##.k.951 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL_FUNC(_V10_Dunwrap__typedef_D199_k242, env, runtime,
      VInlineCar2(runtime,
        _var0));
} else {
    V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dunwrap__typedef_D199_k240(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dunwrap__typedef_D199_k240" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__typedef_D199_k240, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dunwrap__typedef_D199_k240, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.86.348 0 0)) ((close _V10_Dunwrap__typedef_D199_k241) (##inline ##vcore.cdr (bruijn ##.expr.86.348 0 0))) ((bruijn ##.k.951 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL_FUNC(_V10_Dunwrap__typedef_D199_k241, env, runtime,
      VInlineCdr2(runtime,
        _var0));
} else {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dunwrap__typedef_D199_k239(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dunwrap__typedef_D199_k239" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__typedef_D199_k239, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dunwrap__typedef_D199_k239, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.952 0 0) ((close _V10_Dunwrap__typedef_D199_k240) (##inline ##vcore.cdr (bruijn ##.expr.85.347 2 0))) ((bruijn ##.k.951 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(_V10_Dunwrap__typedef_D199_k240, env, runtime,
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dunwrap__typedef_D199_k238(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dunwrap__typedef_D199_k238" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__typedef_D199_k238, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dunwrap__typedef_D199_k238, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.85.347 1 0)) ((bruijn ##.equal?.194 7 39) (close _V10_Dunwrap__typedef_D199_k239) 'variable (##inline ##vcore.car (bruijn ##.expr.85.347 1 0))) ((bruijn ##.k.951 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 7-1, 39), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dunwrap__typedef_D199_k239, env)}),
      _V0variable,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dunwrap__typedef_D199_k249(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dunwrap__typedef_D199_k249" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__typedef_D199_k249, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dunwrap__typedef_D199_k249, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.kk.83.345 4 1) (bruijn ##.k.947 4 0) (bruijn ##.x.949 0 0))
    V_CALL(upenv->up->up->up->vars[1], runtime,
      upenv->up->up->up->vars[0],
      _var0);
 }
}
static void _V10_Dunwrap__typedef_D199_k248(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dunwrap__typedef_D199_k248" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__typedef_D199_k248, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dunwrap__typedef_D199_k248, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.compiler-error.178 7 23) (close _V10_Dunwrap__typedef_D199_k249) (##string ##.string.1453) (bruijn ##.expr.344 4 0))
    V_CALL(VGetArg(upenv, 7-1, 23), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dunwrap__typedef_D199_k249, env)}),
      VEncodePointer(&_V10_Dstring_D1453.sym, VPOINTER_OTHER),
      upenv->up->up->up->vars[0]);
 }
}
static void _V10_Dunwrap__typedef_D199_lambda47(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dunwrap__typedef_D199_lambda47" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dunwrap__typedef_D199_lambda47, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dunwrap__typedef_D199_k238) (close _V10_Dunwrap__typedef_D199_k248))
    V_CALL_FUNC(_V10_Dunwrap__typedef_D199_k238, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dunwrap__typedef_D199_k248, env)}));
 }
}
static void _V10_Dunwrap__typedef_D199_lambda46(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dunwrap__typedef_D199_lambda46" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dunwrap__typedef_D199_lambda46, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dunwrap__typedef_D199_lambda47) (bruijn ##.input.84.346 0 0))
    V_CALL_FUNC(_V10_Dunwrap__typedef_D199_lambda47, env, runtime,
      _var0);
 }
}
static void _V10_Dunwrap__typedef_D199_lambda45(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V10_Dunwrap__typedef_D199_lambda45" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__typedef_D199_lambda45, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dunwrap__typedef_D199_lambda45, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V10_Dunwrap__typedef_D199_lambda46) (bruijn ##.expr.344 1 0))
    V_CALL_FUNC(_V10_Dunwrap__typedef_D199_lambda46, env, runtime,
      upenv->vars[0]);
 }
}
static void _V10_Dunwrap__typedef_D199_k237(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dunwrap__typedef_D199_k237" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__typedef_D199_k237, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dunwrap__typedef_D199_k237, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.call/cc.192 3 37) (bruijn ##.k.946 1 0) (close _V10_Dunwrap__typedef_D199_lambda45))
    V_CALL(upenv->up->up->vars[37], runtime,
      upenv->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dunwrap__typedef_D199_lambda45, env)}));
 }
}
static void _V10_Dunwrap__typedef_D199_lambda44(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V10_Dunwrap__typedef_D199_lambda44" };
 VRecordCall2(runtime, &dbg);
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__typedef_D199_lambda44, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dunwrap__typedef_D199_lambda44, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // ((bruijn ##.reduce-declare.196 1 0) (close _V10_Dunwrap__typedef_D199_k237) (bruijn ##.ret.341 0 1) (bruijn ##.decl.342 0 2) (bruijn ##.table.343 0 3))
    V_CALL(upenv->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dunwrap__typedef_D199_k237, env)}),
      _var1,
      _var2,
      _var3);
 }
}
static void _V10_Dunwrap__function_D200_k260(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dunwrap__function_D200_k260" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__function_D200_k260, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dunwrap__function_D200_k260, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##.p.988 1 0) ((bruijn ##.compiler-error.178 16 23) (bruijn ##.k.989 0 0) (##string ##.string.1454) (bruijn ##.expr.355 13 0)) ((bruijn ##.k.989 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(VGetArg(upenv, 16-1, 23), runtime,
      _var0,
      VEncodePointer(&_V10_Dstring_D1454.sym, VPOINTER_OTHER),
      VGetArg(upenv, 13-1, 0));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dunwrap__function_D200_k264(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dunwrap__function_D200_k264" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__function_D200_k264, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dunwrap__function_D200_k264, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##.p.985 1 0) ((bruijn ##.compiler-error.178 19 23) (bruijn ##.k.986 0 0) (##string ##.string.1455) (bruijn ##.expr.355 16 0)) ((bruijn ##.k.986 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(VGetArg(upenv, 19-1, 23), runtime,
      _var0,
      VEncodePointer(&_V10_Dstring_D1455.sym, VPOINTER_OTHER),
      VGetArg(upenv, 16-1, 0));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dunwrap__function_D200_k267(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dunwrap__function_D200_k267" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__function_D200_k267, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dunwrap__function_D200_k267, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.kk.88.356 17 1) (bruijn ##.k.971 14 0) (##inline ##vcore.cons 'function (##inline ##vcore.cons (bruijn ##.x.980 0 0) (##inline ##vcore.cons (bruijn ##.ret.362 9 0) (bruijn ##.args.363 8 0)))))
    V_CALL(VGetArg(upenv, 17-1, 1), runtime,
      VGetArg(upenv, 14-1, 0),
      VInlineCons2(runtime,
        _V0function,
        VInlineCons2(runtime,
        _var0,
        VInlineCons2(runtime,
        VGetArg(upenv, 9-1, 0),
        VGetArg(upenv, 8-1, 0)))));
 }
}
static void _V10_Dunwrap__function_D200_k266(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dunwrap__function_D200_k266" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__function_D200_k266, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dunwrap__function_D200_k266, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.string->symbol.159 20 4) (close _V10_Dunwrap__function_D200_k267) (bruijn ##.name.360 10 0))
    V_CALL(VGetArg(upenv, 20-1, 4), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dunwrap__function_D200_k267, env)}),
      VGetArg(upenv, 10-1, 0));
 }
}
static void _V10_Dunwrap__function_D200_k269(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dunwrap__function_D200_k269" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__function_D200_k269, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dunwrap__function_D200_k269, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##.p.983 0 0) ((bruijn ##.compiler-error.178 22 23) (bruijn ##.k.982 2 0) (##string ##.string.1456) (bruijn ##.name.360 12 0) (bruijn ##.arg.364 2 1)) ((bruijn ##.k.982 2 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 22-1, 23), runtime,
      upenv->up->vars[0],
      VEncodePointer(&_V10_Dstring_D1456.sym, VPOINTER_OTHER),
      VGetArg(upenv, 12-1, 0),
      upenv->up->vars[1]);
} else {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dunwrap__function_D200_k268(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dunwrap__function_D200_k268" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__function_D200_k268, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dunwrap__function_D200_k268, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.not.176 21 21) (close _V10_Dunwrap__function_D200_k269) (bruijn ##.x.984 0 0))
    V_CALL(VGetArg(upenv, 21-1, 21), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dunwrap__function_D200_k269, env)}),
      _var0);
 }
}
static void _V10_Dunwrap__function_D200_lambda52(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V10_Dunwrap__function_D200_lambda52" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__function_D200_lambda52, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dunwrap__function_D200_lambda52, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##.get-foreign-decoder.212 19 16) (close _V10_Dunwrap__function_D200_k268) (bruijn ##.arg.364 0 1))
    V_CALL(VGetArg(upenv, 19-1, 16), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dunwrap__function_D200_k268, env)}),
      _var1);
 }
}
static void _V10_Dunwrap__function_D200_k265(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dunwrap__function_D200_k265" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__function_D200_k265, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dunwrap__function_D200_k265, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.for-each.187 19 32) (close _V10_Dunwrap__function_D200_k266) (close _V10_Dunwrap__function_D200_lambda52) (bruijn ##.args.363 6 0))
    V_CALL(VGetArg(upenv, 19-1, 32), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dunwrap__function_D200_k266, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dunwrap__function_D200_lambda52, env)}),
      VGetArg(upenv, 6-1, 0));
 }
}
static void _V10_Dunwrap__function_D200_k263(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dunwrap__function_D200_k263" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__function_D200_k263, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dunwrap__function_D200_k263, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dunwrap__function_D200_k264) (close _V10_Dunwrap__function_D200_k265))
    V_CALL_FUNC(_V10_Dunwrap__function_D200_k264, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dunwrap__function_D200_k265, env)}));
 }
}
static void _V10_Dunwrap__function_D200_k262(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dunwrap__function_D200_k262" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__function_D200_k262, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dunwrap__function_D200_k262, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.not.176 17 21) (close _V10_Dunwrap__function_D200_k263) (bruijn ##.x.987 0 0))
    V_CALL(VGetArg(upenv, 17-1, 21), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dunwrap__function_D200_k263, env)}),
      _var0);
 }
}
static void _V10_Dunwrap__function_D200_k261(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dunwrap__function_D200_k261" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__function_D200_k261, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dunwrap__function_D200_k261, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.string?.177 16 22) (close _V10_Dunwrap__function_D200_k262) (bruijn ##.name.360 6 0))
    V_CALL(VGetArg(upenv, 16-1, 22), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dunwrap__function_D200_k262, env)}),
      VGetArg(upenv, 6-1, 0));
 }
}
static void _V10_Dunwrap__function_D200_k259(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dunwrap__function_D200_k259" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__function_D200_k259, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dunwrap__function_D200_k259, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dunwrap__function_D200_k260) (close _V10_Dunwrap__function_D200_k261))
    V_CALL_FUNC(_V10_Dunwrap__function_D200_k260, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dunwrap__function_D200_k261, env)}));
 }
}
static void _V10_Dunwrap__function_D200_k258(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dunwrap__function_D200_k258" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__function_D200_k258, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dunwrap__function_D200_k258, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.not.176 14 21) (close _V10_Dunwrap__function_D200_k259) (bruijn ##.x.990 0 0))
    V_CALL(VGetArg(upenv, 14-1, 21), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dunwrap__function_D200_k259, env)}),
      _var0);
 }
}
static void _V10_Dunwrap__function_D200_k257(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dunwrap__function_D200_k257" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__function_D200_k257, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dunwrap__function_D200_k257, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.get-foreign-encoder.211 12 15) (close _V10_Dunwrap__function_D200_k258) (bruijn ##.ret.362 1 0))
    V_CALL(VGetArg(upenv, 12-1, 15), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dunwrap__function_D200_k258, env)}),
      upenv->vars[0]);
 }
}
static void _V10_Dunwrap__function_D200_k256(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dunwrap__function_D200_k256" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__function_D200_k256, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dunwrap__function_D200_k256, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dunwrap__function_D200_k257) (##inline ##vcore.cdr (bruijn ##.expr.92.361 1 0)))
    V_CALL_FUNC(_V10_Dunwrap__function_D200_k257, env, runtime,
      VInlineCdr2(runtime,
        upenv->vars[0]));
 }
}
static void _V10_Dunwrap__function_D200_k255(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dunwrap__function_D200_k255" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__function_D200_k255, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dunwrap__function_D200_k255, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.92.361 0 0)) ((close _V10_Dunwrap__function_D200_k256) (##inline ##vcore.car (bruijn ##.expr.92.361 0 0))) ((bruijn ##.k.971 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL_FUNC(_V10_Dunwrap__function_D200_k256, env, runtime,
      VInlineCar2(runtime,
        _var0));
} else {
    V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dunwrap__function_D200_k254(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dunwrap__function_D200_k254" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__function_D200_k254, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dunwrap__function_D200_k254, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dunwrap__function_D200_k255) (##inline ##vcore.cdr (bruijn ##.expr.91.359 1 0)))
    V_CALL_FUNC(_V10_Dunwrap__function_D200_k255, env, runtime,
      VInlineCdr2(runtime,
        upenv->vars[0]));
 }
}
static void _V10_Dunwrap__function_D200_k253(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dunwrap__function_D200_k253" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__function_D200_k253, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dunwrap__function_D200_k253, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.91.359 0 0)) ((close _V10_Dunwrap__function_D200_k254) (##inline ##vcore.car (bruijn ##.expr.91.359 0 0))) ((bruijn ##.k.971 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL_FUNC(_V10_Dunwrap__function_D200_k254, env, runtime,
      VInlineCar2(runtime,
        _var0));
} else {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dunwrap__function_D200_k252(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dunwrap__function_D200_k252" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__function_D200_k252, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dunwrap__function_D200_k252, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.972 0 0) ((close _V10_Dunwrap__function_D200_k253) (##inline ##vcore.cdr (bruijn ##.expr.90.358 2 0))) ((bruijn ##.k.971 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(_V10_Dunwrap__function_D200_k253, env, runtime,
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dunwrap__function_D200_k251(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dunwrap__function_D200_k251" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__function_D200_k251, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dunwrap__function_D200_k251, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.90.358 1 0)) ((bruijn ##.equal?.194 7 39) (close _V10_Dunwrap__function_D200_k252) 'function (##inline ##vcore.car (bruijn ##.expr.90.358 1 0))) ((bruijn ##.k.971 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 7-1, 39), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dunwrap__function_D200_k252, env)}),
      _V0function,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dunwrap__function_D200_k271(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dunwrap__function_D200_k271" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__function_D200_k271, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dunwrap__function_D200_k271, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.kk.88.356 4 1) (bruijn ##.k.967 4 0) (bruijn ##.x.969 0 0))
    V_CALL(upenv->up->up->up->vars[1], runtime,
      upenv->up->up->up->vars[0],
      _var0);
 }
}
static void _V10_Dunwrap__function_D200_k270(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dunwrap__function_D200_k270" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__function_D200_k270, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dunwrap__function_D200_k270, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.compiler-error.178 7 23) (close _V10_Dunwrap__function_D200_k271) (##string ##.string.1457) (bruijn ##.expr.355 4 0))
    V_CALL(VGetArg(upenv, 7-1, 23), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dunwrap__function_D200_k271, env)}),
      VEncodePointer(&_V10_Dstring_D1457.sym, VPOINTER_OTHER),
      upenv->up->up->up->vars[0]);
 }
}
static void _V10_Dunwrap__function_D200_lambda51(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dunwrap__function_D200_lambda51" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dunwrap__function_D200_lambda51, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dunwrap__function_D200_k251) (close _V10_Dunwrap__function_D200_k270))
    V_CALL_FUNC(_V10_Dunwrap__function_D200_k251, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dunwrap__function_D200_k270, env)}));
 }
}
static void _V10_Dunwrap__function_D200_lambda50(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dunwrap__function_D200_lambda50" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dunwrap__function_D200_lambda50, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dunwrap__function_D200_lambda51) (bruijn ##.input.89.357 0 0))
    V_CALL_FUNC(_V10_Dunwrap__function_D200_lambda51, env, runtime,
      _var0);
 }
}
static void _V10_Dunwrap__function_D200_lambda49(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V10_Dunwrap__function_D200_lambda49" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__function_D200_lambda49, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dunwrap__function_D200_lambda49, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V10_Dunwrap__function_D200_lambda50) (bruijn ##.expr.355 1 0))
    V_CALL_FUNC(_V10_Dunwrap__function_D200_lambda50, env, runtime,
      upenv->vars[0]);
 }
}
static void _V10_Dunwrap__function_D200_k250(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dunwrap__function_D200_k250" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__function_D200_k250, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dunwrap__function_D200_k250, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.call/cc.192 3 37) (bruijn ##.k.966 1 0) (close _V10_Dunwrap__function_D200_lambda49))
    V_CALL(upenv->up->up->vars[37], runtime,
      upenv->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dunwrap__function_D200_lambda49, env)}));
 }
}
static void _V10_Dunwrap__function_D200_lambda48(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V10_Dunwrap__function_D200_lambda48" };
 VRecordCall2(runtime, &dbg);
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__function_D200_lambda48, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dunwrap__function_D200_lambda48, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // ((bruijn ##.reduce-declare.196 1 0) (close _V10_Dunwrap__function_D200_k250) (bruijn ##.ret.352 0 1) (bruijn ##.decl.353 0 2) (bruijn ##.table.354 0 3))
    V_CALL(upenv->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dunwrap__function_D200_k250, env)}),
      _var1,
      _var2,
      _var3);
 }
}
static void _V10_Dunwrap__enums__iter_D367_k274(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dunwrap__enums__iter_D367_k274" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__enums__iter_D367_k274, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dunwrap__enums__iter_D367_k274, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##.p.1003 1 0) ((bruijn ##.cadar.163 7 8) (bruijn ##.k.1004 0 0) (bruijn ##.enums.368 3 1)) ((bruijn ##.k.1004 0 0) (bruijn ##.val.369 3 2)))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(VGetArg(upenv, 7-1, 8), runtime,
      _var0,
      upenv->up->up->vars[1]);
} else {
    V_CALL(_var0, runtime,
      upenv->up->up->vars[2]);
}
 }
}
static void _V10_Dunwrap__enums__iter_D367_k280(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dunwrap__enums__iter_D367_k280" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__enums__iter_D367_k280, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dunwrap__enums__iter_D367_k280, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.unwrap-enums-iter.367 9 0) (bruijn ##.k.993 8 0) (bruijn ##.x.995 4 0) (bruijn ##.x.996 3 0) (bruijn ##.x.997 0 0))
    V_CALL(VGetArg(upenv, 9-1, 0), runtime,
      VGetArg(upenv, 8-1, 0),
      upenv->up->up->up->vars[0],
      upenv->up->up->vars[0],
      _var0);
 }
}
static void _V10_Dunwrap__enums__iter_D367_k279(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dunwrap__enums__iter_D367_k279" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__enums__iter_D367_k279, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dunwrap__enums__iter_D367_k279, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cons.174 11 19) (close _V10_Dunwrap__enums__iter_D367_k280) (##inline ##vcore.cons 'enum (##inline ##vcore.cons (bruijn ##.x.1000 0 0) (##inline ##vcore.cons (bruijn ##.val.371 4 0) '()))) (bruijn ##.table.370 7 3))
    V_CALL(VGetArg(upenv, 11-1, 19), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dunwrap__enums__iter_D367_k280, env)}),
      VInlineCons2(runtime,
        _V0enum,
        VInlineCons2(runtime,
        _var0,
        VInlineCons2(runtime,
        upenv->up->up->up->vars[0],
        VNULL))),
      VGetArg(upenv, 7-1, 3));
 }
}
static void _V10_Dunwrap__enums__iter_D367_k278(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dunwrap__enums__iter_D367_k278" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__enums__iter_D367_k278, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dunwrap__enums__iter_D367_k278, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.string->symbol.159 10 4) (close _V10_Dunwrap__enums__iter_D367_k279) (bruijn ##.x.1002 0 0))
    V_CALL(VGetArg(upenv, 10-1, 4), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dunwrap__enums__iter_D367_k279, env)}),
      _var0);
 }
}
static void _V10_Dunwrap__enums__iter_D367_k277(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dunwrap__enums__iter_D367_k277" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__enums__iter_D367_k277, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dunwrap__enums__iter_D367_k277, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.caar.160 9 5) (close _V10_Dunwrap__enums__iter_D367_k278) (bruijn ##.enums.368 5 1))
    V_CALL(VGetArg(upenv, 9-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dunwrap__enums__iter_D367_k278, env)}),
      VGetArg(upenv, 5-1, 1));
 }
}
static void _V10_Dunwrap__enums__iter_D367_k276(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dunwrap__enums__iter_D367_k276" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__enums__iter_D367_k276, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dunwrap__enums__iter_D367_k276, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.+.190 8 35) (close _V10_Dunwrap__enums__iter_D367_k277) (bruijn ##.val.371 1 0) 1)
    V_CALL(VGetArg(upenv, 8-1, 35), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dunwrap__enums__iter_D367_k277, env)}),
      upenv->vars[0],
      VEncodeInt(1l));
 }
}
static void _V10_Dunwrap__enums__iter_D367_k275(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dunwrap__enums__iter_D367_k275" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__enums__iter_D367_k275, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dunwrap__enums__iter_D367_k275, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cdr.186 7 31) (close _V10_Dunwrap__enums__iter_D367_k276) (bruijn ##.enums.368 3 1))
    V_CALL(VGetArg(upenv, 7-1, 31), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dunwrap__enums__iter_D367_k276, env)}),
      upenv->up->up->vars[1]);
 }
}
static void _V10_Dunwrap__enums__iter_D367_k273(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dunwrap__enums__iter_D367_k273" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__enums__iter_D367_k273, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dunwrap__enums__iter_D367_k273, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dunwrap__enums__iter_D367_k274) (close _V10_Dunwrap__enums__iter_D367_k275))
    V_CALL_FUNC(_V10_Dunwrap__enums__iter_D367_k274, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dunwrap__enums__iter_D367_k275, env)}));
 }
}
static void _V10_Dunwrap__enums__iter_D367_k272(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dunwrap__enums__iter_D367_k272" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__enums__iter_D367_k272, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dunwrap__enums__iter_D367_k272, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.994 0 0) ((bruijn ##.k.993 1 0) (bruijn ##.table.370 1 3)) ((bruijn ##.cadar.163 5 8) (close _V10_Dunwrap__enums__iter_D367_k273) (bruijn ##.enums.368 1 1)))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->vars[0], runtime,
      upenv->vars[3]);
} else {
    V_CALL(VGetArg(upenv, 5-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dunwrap__enums__iter_D367_k273, env)}),
      upenv->vars[1]);
}
 }
}
static void _V10_Dunwrap__enums__iter_D367_lambda54(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V10_Dunwrap__enums__iter_D367_lambda54" };
 VRecordCall2(runtime, &dbg);
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__enums__iter_D367_lambda54, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dunwrap__enums__iter_D367_lambda54, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // ((bruijn ##.null?.169 4 14) (close _V10_Dunwrap__enums__iter_D367_k272) (bruijn ##.enums.368 0 1))
    V_CALL(upenv->up->up->up->vars[14], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dunwrap__enums__iter_D367_k272, env)}),
      _var1);
 }
}
static void _V10_Dloop_D372_k285(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D372_k285" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D372_k285, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D372_k285, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.equal?.194 10 39) (bruijn ##.k.1010 1 0) (bruijn ##.x.1011 0 0) (##string ##.string.1447))
    V_CALL(VGetArg(upenv, 10-1, 39), runtime,
      upenv->vars[0],
      _var0,
      VEncodePointer(&_V10_Dstring_D1447.sym, VPOINTER_OTHER));
 }
}
static void _V10_Dloop_D372_k284(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D372_k284" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D372_k284, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D372_k284, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1009 1 0) ((bruijn ##.caar.160 9 5) (close _V10_Dloop_D372_k285) (bruijn ##.ret.373 4 1)) ((bruijn ##.k.1010 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(VGetArg(upenv, 9-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D372_k285, env)}),
      upenv->up->up->up->vars[1]);
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dloop_D372_k287(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D372_k287" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D372_k287, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D372_k287, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##.enums.374 0 0) ((bruijn ##.unwrap-enums-iter.367 7 0) (bruijn ##.k.1005 5 0) (bruijn ##.enums.374 0 0) 0 (bruijn ##.table.366 8 2)) ((bruijn ##.k.1005 5 0) (bruijn ##.table.366 8 2)))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 7-1, 0), runtime,
      VGetArg(upenv, 5-1, 0),
      _var0,
      VEncodeInt(0l),
      VGetArg(upenv, 8-1, 2));
} else {
    V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      VGetArg(upenv, 8-1, 2));
}
 }
}
static void _V10_Dloop_D372_k288(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D372_k288" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D372_k288, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D372_k288, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.loop.372 6 0) (bruijn ##.k.1005 5 0) (bruijn ##.x.1008 0 0))
    V_CALL(VGetArg(upenv, 6-1, 0), runtime,
      VGetArg(upenv, 5-1, 0),
      _var0);
 }
}
static void _V10_Dloop_D372_k286(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D372_k286" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D372_k286, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D372_k286, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1007 0 0) ((bruijn ##.caddar.161 9 6) (close _V10_Dloop_D372_k287) (bruijn ##.ret.373 4 1)) ((bruijn ##.cdr.186 9 31) (close _V10_Dloop_D372_k288) (bruijn ##.ret.373 4 1)))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 9-1, 6), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D372_k287, env)}),
      upenv->up->up->up->vars[1]);
} else {
    V_CALL(VGetArg(upenv, 9-1, 31), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D372_k288, env)}),
      upenv->up->up->up->vars[1]);
}
 }
}
static void _V10_Dloop_D372_k283(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D372_k283" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D372_k283, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D372_k283, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dloop_D372_k284) (close _V10_Dloop_D372_k286))
    V_CALL_FUNC(_V10_Dloop_D372_k284, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D372_k286, env)}));
 }
}
static void _V10_Dloop_D372_k282(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D372_k282" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D372_k282, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D372_k282, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.pair?.189 7 34) (close _V10_Dloop_D372_k283) (bruijn ##.x.1012 0 0))
    V_CALL(VGetArg(upenv, 7-1, 34), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D372_k283, env)}),
      _var0);
 }
}
static void _V10_Dloop_D372_k281(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D372_k281" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D372_k281, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D372_k281, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1006 0 0) ((bruijn ##.k.1005 1 0) (bruijn ##.table.366 4 2)) ((bruijn ##.car.188 6 33) (close _V10_Dloop_D372_k282) (bruijn ##.ret.373 1 1)))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->vars[0], runtime,
      upenv->up->up->up->vars[2]);
} else {
    V_CALL(VGetArg(upenv, 6-1, 33), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D372_k282, env)}),
      upenv->vars[1]);
}
 }
}
static void _V10_Dloop_D372_lambda55(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V10_Dloop_D372_lambda55" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D372_lambda55, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D372_lambda55, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##.null?.169 5 14) (close _V10_Dloop_D372_k281) (bruijn ##.ret.373 0 1))
    V_CALL(VGetArg(upenv, 5-1, 14), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D372_k281, env)}),
      _var1);
 }
}
static void _V10_Dunwrap__enums_D201_lambda53(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V10_Dunwrap__enums_D201_lambda53" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__enums_D201_lambda53, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dunwrap__enums_D201_lambda53, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // (letrec 1 ((close _V10_Dunwrap__enums__iter_D367_lambda54)) (letrec 1 ((close _V10_Dloop_D372_lambda55)) ((bruijn ##.loop.372 0 0) (bruijn ##.k.992 2 0) (bruijn ##.ret.365 2 1))))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dunwrap__enums__iter_D367_lambda54, env)});
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D372_lambda55, env)});
    V_CALL(env->vars[0], runtime,
      upenv->up->vars[0],
      upenv->up->vars[1]);
    }
    }
 }
}
static void _V10_Dunwrap__declares_D202_k291(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dunwrap__declares_D202_k291" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__declares_D202_k291, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dunwrap__declares_D202_k291, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##.p.1050 1 0) (##vcore.blob=? (bruijn ##.k.1051 0 0) (##string ##.string.1458) (##inline ##vcore.car (bruijn ##.expr.95.379 3 0))) ((bruijn ##.k.1051 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL_FUNC(VBlobEqv2, NULL, runtime,
      _var0,
      VEncodePointer(&_V10_Dstring_D1458.sym, VPOINTER_OTHER),
      VInlineCar2(runtime,
        upenv->up->up->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dunwrap__declares_D202_k292(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dunwrap__declares_D202_k292" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__declares_D202_k292, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dunwrap__declares_D202_k292, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##.p.1047 0 0) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.95.379 3 0))) ((bruijn ##.kk.93.377 5 1) (bruijn ##.k.1046 2 0) (bruijn ##.table.376 6 2)) ((bruijn ##.k.1046 2 0) #f)) ((bruijn ##.k.1046 2 0) #f))
if(VDecodeBool(
_var0)) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        upenv->up->up->vars[0])))) {
    V_CALL(VGetArg(upenv, 5-1, 1), runtime,
      upenv->up->vars[0],
      VGetArg(upenv, 6-1, 2));
} else {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
} else {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dunwrap__declares_D202_k290(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dunwrap__declares_D202_k290" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__declares_D202_k290, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dunwrap__declares_D202_k290, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dunwrap__declares_D202_k291) (close _V10_Dunwrap__declares_D202_k292))
    V_CALL_FUNC(_V10_Dunwrap__declares_D202_k291, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dunwrap__declares_D202_k292, env)}));
 }
}
static void _V10_Dunwrap__declares_D202_k289(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dunwrap__declares_D202_k289" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__declares_D202_k289, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dunwrap__declares_D202_k289, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.95.379 1 0)) (##vcore.string? (close _V10_Dunwrap__declares_D202_k290) (##inline ##vcore.car (bruijn ##.expr.95.379 1 0))) ((bruijn ##.k.1046 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL_FUNC(VStringP2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dunwrap__declares_D202_k290, env)}),
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dunwrap__declares_D202_k296(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dunwrap__declares_D202_k296" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__declares_D202_k296, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dunwrap__declares_D202_k296, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##.p.1041 1 0) (##vcore.blob=? (bruijn ##.k.1042 0 0) (##string ##.string.1458) (##inline ##vcore.car (bruijn ##.expr.96.380 3 0))) ((bruijn ##.k.1042 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL_FUNC(VBlobEqv2, NULL, runtime,
      _var0,
      VEncodePointer(&_V10_Dstring_D1458.sym, VPOINTER_OTHER),
      VInlineCar2(runtime,
        upenv->up->up->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dunwrap__declares_D202_k301(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dunwrap__declares_D202_k301" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__declares_D202_k301, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dunwrap__declares_D202_k301, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##.p.1037 1 0) (##vcore.blob=? (bruijn ##.k.1038 0 0) (##string ##.string.1459) (##inline ##vcore.car (bruijn ##.expr.98.382 2 0))) ((bruijn ##.k.1038 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL_FUNC(VBlobEqv2, NULL, runtime,
      _var0,
      VEncodePointer(&_V10_Dstring_D1459.sym, VPOINTER_OTHER),
      VInlineCar2(runtime,
        upenv->up->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dloop_D390_k311(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D390_k311" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D390_k311, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D390_k311, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.unwrap-typedef.199 25 3) (bruijn ##.k.1034 1 0) (bruijn ##.ret.389 6 2) (bruijn ##.x.1035 0 0) (bruijn ##.table.392 4 2))
    V_CALL(VGetArg(upenv, 25-1, 3), runtime,
      upenv->vars[0],
      VGetArg(upenv, 6-1, 2),
      _var0,
      upenv->up->up->up->vars[2]);
 }
}
static void _V10_Dloop_D390_k312(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D390_k312" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D390_k312, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D390_k312, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.unwrap-function.200 25 4) (bruijn ##.k.1034 1 0) (bruijn ##.ret.389 6 2) (bruijn ##.x.1036 0 0) (bruijn ##.table.392 4 2))
    V_CALL(VGetArg(upenv, 25-1, 4), runtime,
      upenv->vars[0],
      VGetArg(upenv, 6-1, 2),
      _var0,
      upenv->up->up->up->vars[2]);
 }
}
static void _V10_Dloop_D390_k310(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D390_k310" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D390_k310, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D390_k310, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.typedef?.387 5 0) ((bruijn ##.car.188 25 33) (close _V10_Dloop_D390_k311) (bruijn ##.mydecls.391 3 1)) ((bruijn ##.car.188 25 33) (close _V10_Dloop_D390_k312) (bruijn ##.mydecls.391 3 1)))
if(VDecodeBool(
VGetArg(upenv, 5-1, 0))) {
    V_CALL(VGetArg(upenv, 25-1, 33), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D390_k311, env)}),
      upenv->up->up->vars[1]);
} else {
    V_CALL(VGetArg(upenv, 25-1, 33), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D390_k312, env)}),
      upenv->up->up->vars[1]);
}
 }
}
static void _V10_Dloop_D390_k314(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D390_k314" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D390_k314, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D390_k314, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.loop.390 5 0) (bruijn ##.k.1028 4 0) (bruijn ##.x.1031 2 0) (bruijn ##.x.1032 0 0))
    V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      upenv->up->up->up->vars[0],
      upenv->up->vars[0],
      _var0);
 }
}
static void _V10_Dloop_D390_k313(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D390_k313" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D390_k313, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D390_k313, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cons.174 25 19) (close _V10_Dloop_D390_k314) (bruijn ##.x.1033 0 0) (bruijn ##.table.392 3 2))
    V_CALL(VGetArg(upenv, 25-1, 19), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D390_k314, env)}),
      _var0,
      upenv->up->up->vars[2]);
 }
}
static void _V10_Dloop_D390_k309(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D390_k309" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D390_k309, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D390_k309, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dloop_D390_k310) (close _V10_Dloop_D390_k313))
    V_CALL_FUNC(_V10_Dloop_D390_k310, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D390_k313, env)}));
 }
}
static void _V10_Dloop_D390_k308(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D390_k308" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D390_k308, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D390_k308, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1029 0 0) ((bruijn ##.unwrap-declares.202 22 6) (bruijn ##.k.1028 1 0) (##inline ##vcore.cons '(##string ##.string.1458) (##inline ##vcore.cdr (bruijn ##.expr.97.381 12 0))) (bruijn ##.table.392 1 2)) ((bruijn ##.cdr.186 23 31) (close _V10_Dloop_D390_k309) (bruijn ##.mydecls.391 1 1)))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 22-1, 6), runtime,
      upenv->vars[0],
      VInlineCons2(runtime,
        VEncodePointer(&_V10_Dstring_D1458.sym, VPOINTER_OTHER),
        VInlineCdr2(runtime,
        VGetArg(upenv, 12-1, 0))),
      upenv->vars[2]);
} else {
    V_CALL(VGetArg(upenv, 23-1, 31), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D390_k309, env)}),
      upenv->vars[1]);
}
 }
}
static void _V10_Dloop_D390_lambda62(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V10_Dloop_D390_lambda62" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D390_lambda62, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D390_lambda62, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn ##.null?.169 22 14) (close _V10_Dloop_D390_k308) (bruijn ##.mydecls.391 0 1))
    V_CALL(VGetArg(upenv, 22-1, 14), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D390_k308, env)}),
      _var1);
 }
}
static void _V10_Dunwrap__declares_D202_k315(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dunwrap__declares_D202_k315" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__declares_D202_k315, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dunwrap__declares_D202_k315, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.kk.93.377 19 1) (bruijn ##.k.1018 14 0) (bruijn ##.x.1024 0 0))
    V_CALL(VGetArg(upenv, 19-1, 1), runtime,
      VGetArg(upenv, 14-1, 0),
      _var0);
 }
}
static void _V10_Dunwrap__declares_D202_lambda61(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V10_Dunwrap__declares_D202_lambda61" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dunwrap__declares_D202_lambda61, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // (letrec 1 ((close _V10_Dloop_D390_lambda62)) ((bruijn ##.loop.390 0 0) (close _V10_Dunwrap__declares_D202_k315) (##inline ##vcore.cdr (bruijn ##.expr.99.383 6 0)) (bruijn ##.table.388 1 1)))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D390_lambda62, env)});
    V_CALL(env->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dunwrap__declares_D202_k315, env)}),
      VInlineCdr2(runtime,
        VGetArg(upenv, 6-1, 0)),
      upenv->vars[1]);
    }
 }
}
static void _V10_Dunwrap__declares_D202_k307(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dunwrap__declares_D202_k307" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__declares_D202_k307, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dunwrap__declares_D202_k307, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dunwrap__declares_D202_lambda61) (bruijn ##.x.1025 2 0) (bruijn ##.x.1026 1 0) (bruijn ##.x.1027 0 0))
    V_CALL_FUNC(_V10_Dunwrap__declares_D202_lambda61, env, runtime,
      upenv->up->vars[0],
      upenv->vars[0],
      _var0);
 }
}
static void _V10_Dunwrap__declares_D202_k306(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dunwrap__declares_D202_k306" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__declares_D202_k306, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dunwrap__declares_D202_k306, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.reduce-type.198 17 2) (close _V10_Dunwrap__declares_D202_k307) (bruijn ##.ret.384 2 0) (bruijn ##.table.376 16 2) #t)
    V_CALL(VGetArg(upenv, 17-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dunwrap__declares_D202_k307, env)}),
      upenv->up->vars[0],
      VGetArg(upenv, 16-1, 2),
      VEncodeBool(true));
 }
}
static void _V10_Dunwrap__declares_D202_k305(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dunwrap__declares_D202_k305" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__declares_D202_k305, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dunwrap__declares_D202_k305, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.unwrap-enums.201 16 5) (close _V10_Dunwrap__declares_D202_k306) (bruijn ##.ret.384 1 0) (bruijn ##.table.376 15 2))
    V_CALL(VGetArg(upenv, 16-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dunwrap__declares_D202_k306, env)}),
      upenv->vars[0],
      VGetArg(upenv, 15-1, 2));
 }
}
static void _V10_Dunwrap__declares_D202_k304(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dunwrap__declares_D202_k304" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__declares_D202_k304, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dunwrap__declares_D202_k304, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.member.162 16 7) (close _V10_Dunwrap__declares_D202_k305) (##string ##.string.1460) (bruijn ##.ret.384 0 0))
    V_CALL(VGetArg(upenv, 16-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dunwrap__declares_D202_k305, env)}),
      VEncodePointer(&_V10_Dstring_D1460.sym, VPOINTER_OTHER),
      _var0);
 }
}
static void _V10_Dunwrap__declares_D202_k303(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dunwrap__declares_D202_k303" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__declares_D202_k303, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dunwrap__declares_D202_k303, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.99.383 0 0)) ((close _V10_Dunwrap__declares_D202_k304) (##inline ##vcore.car (bruijn ##.expr.99.383 0 0))) ((bruijn ##.k.1018 7 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL_FUNC(_V10_Dunwrap__declares_D202_k304, env, runtime,
      VInlineCar2(runtime,
        _var0));
} else {
    V_CALL(VGetArg(upenv, 7-1, 0), runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dunwrap__declares_D202_k302(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dunwrap__declares_D202_k302" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__declares_D202_k302, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dunwrap__declares_D202_k302, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1022 0 0) ((close _V10_Dunwrap__declares_D202_k303) (##inline ##vcore.cdr (bruijn ##.expr.98.382 2 0))) ((bruijn ##.k.1018 6 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(_V10_Dunwrap__declares_D202_k303, env, runtime,
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
} else {
    V_CALL(VGetArg(upenv, 6-1, 0), runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dunwrap__declares_D202_k300(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dunwrap__declares_D202_k300" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__declares_D202_k300, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dunwrap__declares_D202_k300, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dunwrap__declares_D202_k301) (close _V10_Dunwrap__declares_D202_k302))
    V_CALL_FUNC(_V10_Dunwrap__declares_D202_k301, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dunwrap__declares_D202_k302, env)}));
 }
}
static void _V10_Dunwrap__declares_D202_k299(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dunwrap__declares_D202_k299" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__declares_D202_k299, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dunwrap__declares_D202_k299, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.98.382 0 0)) (##vcore.string? (close _V10_Dunwrap__declares_D202_k300) (##inline ##vcore.car (bruijn ##.expr.98.382 0 0))) ((bruijn ##.k.1018 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL_FUNC(VStringP2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dunwrap__declares_D202_k300, env)}),
      VInlineCar2(runtime,
        _var0));
} else {
    V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dunwrap__declares_D202_k298(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dunwrap__declares_D202_k298" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__declares_D202_k298, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dunwrap__declares_D202_k298, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.97.381 0 0)) ((close _V10_Dunwrap__declares_D202_k299) (##inline ##vcore.car (bruijn ##.expr.97.381 0 0))) ((bruijn ##.k.1018 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL_FUNC(_V10_Dunwrap__declares_D202_k299, env, runtime,
      VInlineCar2(runtime,
        _var0));
} else {
    V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dunwrap__declares_D202_k297(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dunwrap__declares_D202_k297" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__declares_D202_k297, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dunwrap__declares_D202_k297, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1019 0 0) ((close _V10_Dunwrap__declares_D202_k298) (##inline ##vcore.cdr (bruijn ##.expr.96.380 3 0))) ((bruijn ##.k.1018 2 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(_V10_Dunwrap__declares_D202_k298, env, runtime,
      VInlineCdr2(runtime,
        upenv->up->up->vars[0]));
} else {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dunwrap__declares_D202_k295(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dunwrap__declares_D202_k295" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__declares_D202_k295, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dunwrap__declares_D202_k295, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dunwrap__declares_D202_k296) (close _V10_Dunwrap__declares_D202_k297))
    V_CALL_FUNC(_V10_Dunwrap__declares_D202_k296, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dunwrap__declares_D202_k297, env)}));
 }
}
static void _V10_Dunwrap__declares_D202_k294(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dunwrap__declares_D202_k294" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__declares_D202_k294, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dunwrap__declares_D202_k294, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.96.380 1 0)) (##vcore.string? (close _V10_Dunwrap__declares_D202_k295) (##inline ##vcore.car (bruijn ##.expr.96.380 1 0))) ((bruijn ##.k.1018 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL_FUNC(VStringP2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dunwrap__declares_D202_k295, env)}),
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dunwrap__declares_D202_k316(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dunwrap__declares_D202_k316" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__declares_D202_k316, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dunwrap__declares_D202_k316, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.error.195 8 40) (bruijn ##.k.1014 5 0) (##string ##.string.1445))
    V_CALL(VGetArg(upenv, 8-1, 40), runtime,
      VGetArg(upenv, 5-1, 0),
      VEncodePointer(&_V10_Dstring_D1445.sym, VPOINTER_OTHER));
 }
}
static void _V10_Dunwrap__declares_D202_lambda60(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dunwrap__declares_D202_lambda60" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dunwrap__declares_D202_lambda60, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dunwrap__declares_D202_k294) (close _V10_Dunwrap__declares_D202_k316))
    V_CALL_FUNC(_V10_Dunwrap__declares_D202_k294, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dunwrap__declares_D202_k316, env)}));
 }
}
static void _V10_Dunwrap__declares_D202_k293(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dunwrap__declares_D202_k293" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__declares_D202_k293, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dunwrap__declares_D202_k293, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dunwrap__declares_D202_lambda60) (bruijn ##.input.94.378 2 0))
    V_CALL_FUNC(_V10_Dunwrap__declares_D202_lambda60, env, runtime,
      upenv->up->vars[0]);
 }
}
static void _V10_Dunwrap__declares_D202_lambda59(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dunwrap__declares_D202_lambda59" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dunwrap__declares_D202_lambda59, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dunwrap__declares_D202_k289) (close _V10_Dunwrap__declares_D202_k293))
    V_CALL_FUNC(_V10_Dunwrap__declares_D202_k289, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dunwrap__declares_D202_k293, env)}));
 }
}
static void _V10_Dunwrap__declares_D202_lambda58(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dunwrap__declares_D202_lambda58" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dunwrap__declares_D202_lambda58, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dunwrap__declares_D202_lambda59) (bruijn ##.input.94.378 0 0))
    V_CALL_FUNC(_V10_Dunwrap__declares_D202_lambda59, env, runtime,
      _var0);
 }
}
static void _V10_Dunwrap__declares_D202_lambda57(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V10_Dunwrap__declares_D202_lambda57" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__declares_D202_lambda57, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dunwrap__declares_D202_lambda57, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V10_Dunwrap__declares_D202_lambda58) (bruijn ##.parse.375 1 1))
    V_CALL_FUNC(_V10_Dunwrap__declares_D202_lambda58, env, runtime,
      upenv->vars[1]);
 }
}
static void _V10_Dunwrap__declares_D202_lambda56(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V10_Dunwrap__declares_D202_lambda56" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dunwrap__declares_D202_lambda56, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dunwrap__declares_D202_lambda56, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn ##.call/cc.192 2 37) (bruijn ##.k.1013 0 0) (close _V10_Dunwrap__declares_D202_lambda57))
    V_CALL(upenv->up->vars[37], runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dunwrap__declares_D202_lambda57, env)}));
 }
}
static void _V10_Dduplicate__mismatch_D395_k321(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dduplicate__mismatch_D395_k321" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dduplicate__mismatch_D395_k321, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dduplicate__mismatch_D395_k321, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.duplicate-mismatch.395 6 0) (bruijn ##.k.1055 5 0) (bruijn ##.x.396 5 1) (bruijn ##.entry.397 5 2) (bruijn ##.x.1058 0 0) (bruijn ##.err-proc.399 5 4))
    V_CALL(VGetArg(upenv, 6-1, 0), runtime,
      VGetArg(upenv, 5-1, 0),
      VGetArg(upenv, 5-1, 1),
      VGetArg(upenv, 5-1, 2),
      _var0,
      VGetArg(upenv, 5-1, 4));
 }
}
static void _V10_Dduplicate__mismatch_D395_k325(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dduplicate__mismatch_D395_k325" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dduplicate__mismatch_D395_k325, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dduplicate__mismatch_D395_k325, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.err-proc.399 8 4) (bruijn ##.k.1055 8 0) (bruijn ##.x.1060 0 0))
    V_CALL(VGetArg(upenv, 8-1, 4), runtime,
      VGetArg(upenv, 8-1, 0),
      _var0);
 }
}
static void _V10_Dduplicate__mismatch_D395_k324(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dduplicate__mismatch_D395_k324" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dduplicate__mismatch_D395_k324, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dduplicate__mismatch_D395_k324, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1059 0 0) ((bruijn ##.car.188 11 33) (close _V10_Dduplicate__mismatch_D395_k325) (bruijn ##.table.398 7 3)) ((bruijn ##.k.1055 7 0) #t))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 11-1, 33), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dduplicate__mismatch_D395_k325, env)}),
      VGetArg(upenv, 7-1, 3));
} else {
    V_CALL(VGetArg(upenv, 7-1, 0), runtime,
      VEncodeBool(true));
}
 }
}
static void _V10_Dduplicate__mismatch_D395_k323(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dduplicate__mismatch_D395_k323" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dduplicate__mismatch_D395_k323, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dduplicate__mismatch_D395_k323, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.not.176 10 21) (close _V10_Dduplicate__mismatch_D395_k324) (bruijn ##.x.1061 0 0))
    V_CALL(VGetArg(upenv, 10-1, 21), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dduplicate__mismatch_D395_k324, env)}),
      _var0);
 }
}
static void _V10_Dduplicate__mismatch_D395_k322(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dduplicate__mismatch_D395_k322" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dduplicate__mismatch_D395_k322, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dduplicate__mismatch_D395_k322, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.equal?.194 9 39) (close _V10_Dduplicate__mismatch_D395_k323) (bruijn ##.entry.397 5 2) (bruijn ##.x.1062 0 0))
    V_CALL(VGetArg(upenv, 9-1, 39), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dduplicate__mismatch_D395_k323, env)}),
      VGetArg(upenv, 5-1, 2),
      _var0);
 }
}
static void _V10_Dduplicate__mismatch_D395_k320(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dduplicate__mismatch_D395_k320" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dduplicate__mismatch_D395_k320, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dduplicate__mismatch_D395_k320, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1057 0 0) ((bruijn ##.cdr.186 8 31) (close _V10_Dduplicate__mismatch_D395_k321) (bruijn ##.table.398 4 3)) ((bruijn ##.car.188 8 33) (close _V10_Dduplicate__mismatch_D395_k322) (bruijn ##.table.398 4 3)))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 8-1, 31), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dduplicate__mismatch_D395_k321, env)}),
      upenv->up->up->up->vars[3]);
} else {
    V_CALL(VGetArg(upenv, 8-1, 33), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dduplicate__mismatch_D395_k322, env)}),
      upenv->up->up->up->vars[3]);
}
 }
}
static void _V10_Dduplicate__mismatch_D395_k319(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dduplicate__mismatch_D395_k319" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dduplicate__mismatch_D395_k319, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dduplicate__mismatch_D395_k319, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.not.176 7 21) (close _V10_Dduplicate__mismatch_D395_k320) (bruijn ##.x.1063 0 0))
    V_CALL(VGetArg(upenv, 7-1, 21), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dduplicate__mismatch_D395_k320, env)}),
      _var0);
 }
}
static void _V10_Dduplicate__mismatch_D395_k318(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dduplicate__mismatch_D395_k318" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dduplicate__mismatch_D395_k318, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dduplicate__mismatch_D395_k318, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.eqv?.185 6 30) (close _V10_Dduplicate__mismatch_D395_k319) (bruijn ##.x.396 2 1) (bruijn ##.x.1064 0 0))
    V_CALL(VGetArg(upenv, 6-1, 30), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dduplicate__mismatch_D395_k319, env)}),
      upenv->up->vars[1],
      _var0);
 }
}
static void _V10_Dduplicate__mismatch_D395_k317(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dduplicate__mismatch_D395_k317" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dduplicate__mismatch_D395_k317, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dduplicate__mismatch_D395_k317, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1056 0 0) ((bruijn ##.k.1055 1 0) #f) ((bruijn ##.cadar.163 5 8) (close _V10_Dduplicate__mismatch_D395_k318) (bruijn ##.table.398 1 3)))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
} else {
    V_CALL(VGetArg(upenv, 5-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dduplicate__mismatch_D395_k318, env)}),
      upenv->vars[3]);
}
 }
}
static void _V10_Dduplicate__mismatch_D395_lambda64(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4) {
 static VDebugInfo dbg = { "_V10_Dduplicate__mismatch_D395_lambda64" };
 VRecordCall2(runtime, &dbg);
 if(argc != 5) {
  VErrorC(runtime, "Not enough arguments to _V10_Dduplicate__mismatch_D395_lambda64, got ~D~N"
  "-- expected 5~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dduplicate__mismatch_D395_lambda64, runtime, upenv, 5, argc, _var0, _var1, _var2, _var3, _var4) {
  struct { VEnv env; VWORD argv[5]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 5, 5, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  env->vars[4] = _var4;
  // ((bruijn ##.null?.169 4 14) (close _V10_Dduplicate__mismatch_D395_k317) (bruijn ##.table.398 0 3))
    V_CALL(upenv->up->up->up->vars[14], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dduplicate__mismatch_D395_k317, env)}),
      _var3);
 }
}
static void _V10_Dtable___Gdefines_D203_k337(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dtable___Gdefines_D203_k337" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dtable___Gdefines_D203_k337, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dtable___Gdefines_D203_k337, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.table->defines.203 16 7) (bruijn ##.k.1112 1 0) (bruijn ##.x.1113 0 0) (bruijn ##.acc.394 15 2))
    V_CALL(VGetArg(upenv, 16-1, 7), runtime,
      upenv->vars[0],
      _var0,
      VGetArg(upenv, 15-1, 2));
 }
}
static void _V10_Dtable___Gdefines_D203_k340(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dtable___Gdefines_D203_k340" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dtable___Gdefines_D203_k340, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dtable___Gdefines_D203_k340, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.table->defines.203 18 7) (bruijn ##.k.1112 3 0) (bruijn ##.x.1114 2 0) (bruijn ##.x.1115 0 0))
    V_CALL(VGetArg(upenv, 18-1, 7), runtime,
      upenv->up->up->vars[0],
      upenv->up->vars[0],
      _var0);
 }
}
static void _V10_Dtable___Gdefines_D203_k339(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dtable___Gdefines_D203_k339" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dtable___Gdefines_D203_k339, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dtable___Gdefines_D203_k339, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cons.174 18 19) (close _V10_Dtable___Gdefines_D203_k340) (##inline ##vcore.cons 'define (##inline ##vcore.cons (bruijn ##.name.404 7 0) (##inline ##vcore.cons (##inline ##vcore.cons '##foreign.function (##inline ##vcore.cons '(##string ##.string.1461) (##inline ##vcore.cons '(##string ##.string.1462) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.104.405 6 0)) (##inline ##vcore.cons (bruijn ##.x.1124 0 0) (##inline ##vcore.cdr (bruijn ##.expr.104.405 6 0))))))) '()))) (bruijn ##.acc.394 16 2))
    V_CALL(VGetArg(upenv, 18-1, 19), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dtable___Gdefines_D203_k340, env)}),
      VInlineCons2(runtime,
        _V0define,
        VInlineCons2(runtime,
        VGetArg(upenv, 7-1, 0),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V10foreign_Dfunction,
        VInlineCons2(runtime,
        VEncodePointer(&_V10_Dstring_D1461.sym, VPOINTER_OTHER),
        VInlineCons2(runtime,
        VEncodePointer(&_V10_Dstring_D1462.sym, VPOINTER_OTHER),
        VInlineCons2(runtime,
        VInlineCar2(runtime,
        VGetArg(upenv, 6-1, 0)),
        VInlineCons2(runtime,
        _var0,
        VInlineCdr2(runtime,
        VGetArg(upenv, 6-1, 0))))))),
        VNULL))),
      VGetArg(upenv, 16-1, 2));
 }
}
static void _V10_Dtable___Gdefines_D203_k338(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dtable___Gdefines_D203_k338" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dtable___Gdefines_D203_k338, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dtable___Gdefines_D203_k338, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.symbol->string.164 17 9) (close _V10_Dtable___Gdefines_D203_k339) (bruijn ##.name.404 6 0))
    V_CALL(VGetArg(upenv, 17-1, 9), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dtable___Gdefines_D203_k339, env)}),
      VGetArg(upenv, 6-1, 0));
 }
}
static void _V10_Dtable___Gdefines_D203_k336(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dtable___Gdefines_D203_k336" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dtable___Gdefines_D203_k336, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dtable___Gdefines_D203_k336, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1111 1 0) ((bruijn ##.cdr.186 16 31) (close _V10_Dtable___Gdefines_D203_k337) (bruijn ##.table.393 14 1)) ((bruijn ##.cdr.186 16 31) (close _V10_Dtable___Gdefines_D203_k338) (bruijn ##.table.393 14 1)))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(VGetArg(upenv, 16-1, 31), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dtable___Gdefines_D203_k337, env)}),
      VGetArg(upenv, 14-1, 1));
} else {
    V_CALL(VGetArg(upenv, 16-1, 31), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dtable___Gdefines_D203_k338, env)}),
      VGetArg(upenv, 14-1, 1));
}
 }
}
static void _V10_Dtable___Gdefines_D203_k341(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dtable___Gdefines_D203_k341" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dtable___Gdefines_D203_k341, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dtable___Gdefines_D203_k341, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.kk.100.400 11 1) (bruijn ##.k.1106 8 0) (bruijn ##.x.1110 0 0))
    V_CALL(VGetArg(upenv, 11-1, 1), runtime,
      VGetArg(upenv, 8-1, 0),
      _var0);
 }
}
static void _V10_Dtable___Gdefines_D203_k335(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dtable___Gdefines_D203_k335" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dtable___Gdefines_D203_k335, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dtable___Gdefines_D203_k335, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dtable___Gdefines_D203_k336) (close _V10_Dtable___Gdefines_D203_k341))
    V_CALL_FUNC(_V10_Dtable___Gdefines_D203_k336, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dtable___Gdefines_D203_k341, env)}));
 }
}
static void _V10_Dtable___Gdefines_D203_k342(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dtable___Gdefines_D203_k342" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dtable___Gdefines_D203_k342, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dtable___Gdefines_D203_k342, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.compiler-error.178 16 23) (bruijn ##.k.1127 1 0) (##string ##.string.1463) (bruijn ##.x.1128 0 0) (bruijn ##.conflict.408 1 1))
    V_CALL(VGetArg(upenv, 16-1, 23), runtime,
      upenv->vars[0],
      VEncodePointer(&_V10_Dstring_D1463.sym, VPOINTER_OTHER),
      _var0,
      upenv->vars[1]);
 }
}
static void _V10_Dtable___Gdefines_D203_lambda67(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V10_Dtable___Gdefines_D203_lambda67" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dtable___Gdefines_D203_lambda67, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dtable___Gdefines_D203_lambda67, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##.car.188 15 33) (close _V10_Dtable___Gdefines_D203_k342) (bruijn ##.table.393 13 1))
    V_CALL(VGetArg(upenv, 15-1, 33), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dtable___Gdefines_D203_k342, env)}),
      VGetArg(upenv, 13-1, 1));
 }
}
static void _V10_Dtable___Gdefines_D203_k334(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dtable___Gdefines_D203_k334" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dtable___Gdefines_D203_k334, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dtable___Gdefines_D203_k334, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.duplicate-mismatch.395 11 0) (close _V10_Dtable___Gdefines_D203_k335) (bruijn ##.name.404 3 0) (bruijn ##.x.1125 1 0) (bruijn ##.x.1126 0 0) (close _V10_Dtable___Gdefines_D203_lambda67))
    V_CALL(VGetArg(upenv, 11-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dtable___Gdefines_D203_k335, env)}),
      upenv->up->up->vars[0],
      upenv->vars[0],
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dtable___Gdefines_D203_lambda67, env)}));
 }
}
static void _V10_Dtable___Gdefines_D203_k333(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dtable___Gdefines_D203_k333" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dtable___Gdefines_D203_k333, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dtable___Gdefines_D203_k333, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cdr.186 13 31) (close _V10_Dtable___Gdefines_D203_k334) (bruijn ##.table.393 11 1))
    V_CALL(VGetArg(upenv, 13-1, 31), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dtable___Gdefines_D203_k334, env)}),
      VGetArg(upenv, 11-1, 1));
 }
}
static void _V10_Dtable___Gdefines_D203_k332(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dtable___Gdefines_D203_k332" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dtable___Gdefines_D203_k332, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dtable___Gdefines_D203_k332, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.104.405 0 0)) ((bruijn ##.car.188 12 33) (close _V10_Dtable___Gdefines_D203_k333) (bruijn ##.table.393 10 1)) ((bruijn ##.k.1106 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL(VGetArg(upenv, 12-1, 33), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dtable___Gdefines_D203_k333, env)}),
      VGetArg(upenv, 10-1, 1));
} else {
    V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dtable___Gdefines_D203_k331(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dtable___Gdefines_D203_k331" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dtable___Gdefines_D203_k331, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dtable___Gdefines_D203_k331, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dtable___Gdefines_D203_k332) (##inline ##vcore.cdr (bruijn ##.expr.103.403 1 0)))
    V_CALL_FUNC(_V10_Dtable___Gdefines_D203_k332, env, runtime,
      VInlineCdr2(runtime,
        upenv->vars[0]));
 }
}
static void _V10_Dtable___Gdefines_D203_k330(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dtable___Gdefines_D203_k330" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dtable___Gdefines_D203_k330, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dtable___Gdefines_D203_k330, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.103.403 0 0)) ((close _V10_Dtable___Gdefines_D203_k331) (##inline ##vcore.car (bruijn ##.expr.103.403 0 0))) ((bruijn ##.k.1106 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL_FUNC(_V10_Dtable___Gdefines_D203_k331, env, runtime,
      VInlineCar2(runtime,
        _var0));
} else {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dtable___Gdefines_D203_k329(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dtable___Gdefines_D203_k329" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dtable___Gdefines_D203_k329, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dtable___Gdefines_D203_k329, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1107 0 0) ((close _V10_Dtable___Gdefines_D203_k330) (##inline ##vcore.cdr (bruijn ##.expr.102.402 2 0))) ((bruijn ##.k.1106 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(_V10_Dtable___Gdefines_D203_k330, env, runtime,
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dtable___Gdefines_D203_k328(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dtable___Gdefines_D203_k328" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dtable___Gdefines_D203_k328, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dtable___Gdefines_D203_k328, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.102.402 1 0)) ((bruijn ##.equal?.194 8 39) (close _V10_Dtable___Gdefines_D203_k329) 'function (##inline ##vcore.car (bruijn ##.expr.102.402 1 0))) ((bruijn ##.k.1106 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 8-1, 39), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dtable___Gdefines_D203_k329, env)}),
      _V0function,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dtable___Gdefines_D203_k353(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dtable___Gdefines_D203_k353" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dtable___Gdefines_D203_k353, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dtable___Gdefines_D203_k353, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.kk.100.400 14 1) (bruijn ##.k.1088 9 0) (bruijn ##.x.1093 0 0))
    V_CALL(VGetArg(upenv, 14-1, 1), runtime,
      VGetArg(upenv, 9-1, 0),
      _var0);
 }
}
static void _V10_Dtable___Gdefines_D203_k352(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dtable___Gdefines_D203_k352" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dtable___Gdefines_D203_k352, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dtable___Gdefines_D203_k352, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.table->defines.203 17 7) (close _V10_Dtable___Gdefines_D203_k353) (bruijn ##.x.1095 1 0) (bruijn ##.x.1096 0 0))
    V_CALL(VGetArg(upenv, 17-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dtable___Gdefines_D203_k353, env)}),
      upenv->vars[0],
      _var0);
 }
}
static void _V10_Dtable___Gdefines_D203_k351(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dtable___Gdefines_D203_k351" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dtable___Gdefines_D203_k351, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dtable___Gdefines_D203_k351, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cons.174 17 19) (close _V10_Dtable___Gdefines_D203_k352) (##inline ##vcore.cons 'define (##inline ##vcore.cons (bruijn ##.name.411 4 0) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.107.412 3 0)) '()))) (bruijn ##.acc.394 15 2))
    V_CALL(VGetArg(upenv, 17-1, 19), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dtable___Gdefines_D203_k352, env)}),
      VInlineCons2(runtime,
        _V0define,
        VInlineCons2(runtime,
        upenv->up->up->up->vars[0],
        VInlineCons2(runtime,
        VInlineCar2(runtime,
        upenv->up->up->vars[0]),
        VNULL))),
      VGetArg(upenv, 15-1, 2));
 }
}
static void _V10_Dtable___Gdefines_D203_k350(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dtable___Gdefines_D203_k350" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dtable___Gdefines_D203_k350, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dtable___Gdefines_D203_k350, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cdr.186 16 31) (close _V10_Dtable___Gdefines_D203_k351) (bruijn ##.table.393 14 1))
    V_CALL(VGetArg(upenv, 16-1, 31), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dtable___Gdefines_D203_k351, env)}),
      VGetArg(upenv, 14-1, 1));
 }
}
static void _V10_Dtable___Gdefines_D203_k354(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dtable___Gdefines_D203_k354" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dtable___Gdefines_D203_k354, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dtable___Gdefines_D203_k354, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.compiler-error.178 17 23) (bruijn ##.k.1101 1 0) (##string ##.string.1463) (bruijn ##.x.1102 0 0) (bruijn ##.conflict.414 1 1))
    V_CALL(VGetArg(upenv, 17-1, 23), runtime,
      upenv->vars[0],
      VEncodePointer(&_V10_Dstring_D1463.sym, VPOINTER_OTHER),
      _var0,
      upenv->vars[1]);
 }
}
static void _V10_Dtable___Gdefines_D203_lambda69(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V10_Dtable___Gdefines_D203_lambda69" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dtable___Gdefines_D203_lambda69, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dtable___Gdefines_D203_lambda69, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##.car.188 16 33) (close _V10_Dtable___Gdefines_D203_k354) (bruijn ##.table.393 14 1))
    V_CALL(VGetArg(upenv, 16-1, 33), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dtable___Gdefines_D203_k354, env)}),
      VGetArg(upenv, 14-1, 1));
 }
}
static void _V10_Dtable___Gdefines_D203_k349(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dtable___Gdefines_D203_k349" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dtable___Gdefines_D203_k349, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dtable___Gdefines_D203_k349, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.duplicate-mismatch.395 12 0) (close _V10_Dtable___Gdefines_D203_k350) (bruijn ##.name.411 2 0) #f (bruijn ##.x.1100 0 0) (close _V10_Dtable___Gdefines_D203_lambda69))
    V_CALL(VGetArg(upenv, 12-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dtable___Gdefines_D203_k350, env)}),
      upenv->up->vars[0],
      VEncodeBool(false),
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dtable___Gdefines_D203_lambda69, env)}));
 }
}
static void _V10_Dtable___Gdefines_D203_k348(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dtable___Gdefines_D203_k348" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dtable___Gdefines_D203_k348, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dtable___Gdefines_D203_k348, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.107.412 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.107.412 0 0))) ((bruijn ##.cdr.186 14 31) (close _V10_Dtable___Gdefines_D203_k349) (bruijn ##.table.393 12 1)) ((bruijn ##.k.1088 4 0) #f)) ((bruijn ##.k.1088 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    V_CALL(VGetArg(upenv, 14-1, 31), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dtable___Gdefines_D203_k349, env)}),
      VGetArg(upenv, 12-1, 1));
} else {
    V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeBool(false));
}
} else {
    V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dtable___Gdefines_D203_k347(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dtable___Gdefines_D203_k347" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dtable___Gdefines_D203_k347, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dtable___Gdefines_D203_k347, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dtable___Gdefines_D203_k348) (##inline ##vcore.cdr (bruijn ##.expr.106.410 1 0)))
    V_CALL_FUNC(_V10_Dtable___Gdefines_D203_k348, env, runtime,
      VInlineCdr2(runtime,
        upenv->vars[0]));
 }
}
static void _V10_Dtable___Gdefines_D203_k346(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dtable___Gdefines_D203_k346" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dtable___Gdefines_D203_k346, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dtable___Gdefines_D203_k346, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.106.410 0 0)) ((close _V10_Dtable___Gdefines_D203_k347) (##inline ##vcore.car (bruijn ##.expr.106.410 0 0))) ((bruijn ##.k.1088 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL_FUNC(_V10_Dtable___Gdefines_D203_k347, env, runtime,
      VInlineCar2(runtime,
        _var0));
} else {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dtable___Gdefines_D203_k345(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dtable___Gdefines_D203_k345" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dtable___Gdefines_D203_k345, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dtable___Gdefines_D203_k345, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1089 0 0) ((close _V10_Dtable___Gdefines_D203_k346) (##inline ##vcore.cdr (bruijn ##.expr.105.409 2 0))) ((bruijn ##.k.1088 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(_V10_Dtable___Gdefines_D203_k346, env, runtime,
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dtable___Gdefines_D203_k344(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dtable___Gdefines_D203_k344" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dtable___Gdefines_D203_k344, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dtable___Gdefines_D203_k344, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.105.409 1 0)) ((bruijn ##.equal?.194 10 39) (close _V10_Dtable___Gdefines_D203_k345) 'enum (##inline ##vcore.car (bruijn ##.expr.105.409 1 0))) ((bruijn ##.k.1088 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 10-1, 39), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dtable___Gdefines_D203_k345, env)}),
      _V0enum,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dtable___Gdefines_D203_k364(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dtable___Gdefines_D203_k364" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dtable___Gdefines_D203_k364, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dtable___Gdefines_D203_k364, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.kk.100.400 15 1) (bruijn ##.k.1073 8 0) (bruijn ##.x.1078 0 0))
    V_CALL(VGetArg(upenv, 15-1, 1), runtime,
      VGetArg(upenv, 8-1, 0),
      _var0);
 }
}
static void _V10_Dtable___Gdefines_D203_k363(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dtable___Gdefines_D203_k363" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dtable___Gdefines_D203_k363, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dtable___Gdefines_D203_k363, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.table->defines.203 18 7) (close _V10_Dtable___Gdefines_D203_k364) (bruijn ##.x.1080 0 0) (bruijn ##.acc.394 17 2))
    V_CALL(VGetArg(upenv, 18-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dtable___Gdefines_D203_k364, env)}),
      _var0,
      VGetArg(upenv, 17-1, 2));
 }
}
static void _V10_Dtable___Gdefines_D203_k362(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dtable___Gdefines_D203_k362" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dtable___Gdefines_D203_k362, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dtable___Gdefines_D203_k362, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cdr.186 18 31) (close _V10_Dtable___Gdefines_D203_k363) (bruijn ##.table.393 16 1))
    V_CALL(VGetArg(upenv, 18-1, 31), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dtable___Gdefines_D203_k363, env)}),
      VGetArg(upenv, 16-1, 1));
 }
}
static void _V10_Dtable___Gdefines_D203_k365(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dtable___Gdefines_D203_k365" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dtable___Gdefines_D203_k365, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dtable___Gdefines_D203_k365, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.compiler-error.178 19 23) (bruijn ##.k.1083 1 0) (##string ##.string.1463) (bruijn ##.x.1084 0 0) (bruijn ##.conflict.420 1 1))
    V_CALL(VGetArg(upenv, 19-1, 23), runtime,
      upenv->vars[0],
      VEncodePointer(&_V10_Dstring_D1463.sym, VPOINTER_OTHER),
      _var0,
      upenv->vars[1]);
 }
}
static void _V10_Dtable___Gdefines_D203_lambda71(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V10_Dtable___Gdefines_D203_lambda71" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dtable___Gdefines_D203_lambda71, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dtable___Gdefines_D203_lambda71, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##.car.188 18 33) (close _V10_Dtable___Gdefines_D203_k365) (bruijn ##.table.393 16 1))
    V_CALL(VGetArg(upenv, 18-1, 33), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dtable___Gdefines_D203_k365, env)}),
      VGetArg(upenv, 16-1, 1));
 }
}
static void _V10_Dtable___Gdefines_D203_k361(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dtable___Gdefines_D203_k361" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dtable___Gdefines_D203_k361, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dtable___Gdefines_D203_k361, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.duplicate-mismatch.395 14 0) (close _V10_Dtable___Gdefines_D203_k362) (##inline ##vcore.car (bruijn ##.expr.109.416 3 0)) (bruijn ##.x.1081 1 0) (bruijn ##.x.1082 0 0) (close _V10_Dtable___Gdefines_D203_lambda71))
    V_CALL(VGetArg(upenv, 14-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dtable___Gdefines_D203_k362, env)}),
      VInlineCar2(runtime,
        upenv->up->up->vars[0]),
      upenv->vars[0],
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dtable___Gdefines_D203_lambda71, env)}));
 }
}
static void _V10_Dtable___Gdefines_D203_k360(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dtable___Gdefines_D203_k360" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dtable___Gdefines_D203_k360, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dtable___Gdefines_D203_k360, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cdr.186 16 31) (close _V10_Dtable___Gdefines_D203_k361) (bruijn ##.table.393 14 1))
    V_CALL(VGetArg(upenv, 16-1, 31), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dtable___Gdefines_D203_k361, env)}),
      VGetArg(upenv, 14-1, 1));
 }
}
static void _V10_Dtable___Gdefines_D203_k359(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dtable___Gdefines_D203_k359" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dtable___Gdefines_D203_k359, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dtable___Gdefines_D203_k359, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.110.418 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.110.418 0 0))) ((bruijn ##.car.188 15 33) (close _V10_Dtable___Gdefines_D203_k360) (bruijn ##.table.393 13 1)) ((bruijn ##.k.1073 3 0) #f)) ((bruijn ##.k.1073 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    V_CALL(VGetArg(upenv, 15-1, 33), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dtable___Gdefines_D203_k360, env)}),
      VGetArg(upenv, 13-1, 1));
} else {
    V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
} else {
    V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dtable___Gdefines_D203_k358(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dtable___Gdefines_D203_k358" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dtable___Gdefines_D203_k358, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dtable___Gdefines_D203_k358, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.109.416 0 0)) ((close _V10_Dtable___Gdefines_D203_k359) (##inline ##vcore.cdr (bruijn ##.expr.109.416 0 0))) ((bruijn ##.k.1073 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL_FUNC(_V10_Dtable___Gdefines_D203_k359, env, runtime,
      VInlineCdr2(runtime,
        _var0));
} else {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dtable___Gdefines_D203_k357(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dtable___Gdefines_D203_k357" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dtable___Gdefines_D203_k357, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dtable___Gdefines_D203_k357, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1074 0 0) ((close _V10_Dtable___Gdefines_D203_k358) (##inline ##vcore.cdr (bruijn ##.expr.108.415 2 0))) ((bruijn ##.k.1073 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(_V10_Dtable___Gdefines_D203_k358, env, runtime,
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dtable___Gdefines_D203_k356(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dtable___Gdefines_D203_k356" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dtable___Gdefines_D203_k356, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dtable___Gdefines_D203_k356, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.108.415 1 0)) ((bruijn ##.equal?.194 12 39) (close _V10_Dtable___Gdefines_D203_k357) 'typedef (##inline ##vcore.car (bruijn ##.expr.108.415 1 0))) ((bruijn ##.k.1073 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 12-1, 39), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dtable___Gdefines_D203_k357, env)}),
      _V0typedef,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dtable___Gdefines_D203_k368(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dtable___Gdefines_D203_k368" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dtable___Gdefines_D203_k368, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dtable___Gdefines_D203_k368, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.kk.100.400 9 1) (bruijn ##.k.1066 9 0) (bruijn ##.x.1070 0 0))
    V_CALL(VGetArg(upenv, 9-1, 1), runtime,
      VGetArg(upenv, 9-1, 0),
      _var0);
 }
}
static void _V10_Dtable___Gdefines_D203_k367(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dtable___Gdefines_D203_k367" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dtable___Gdefines_D203_k367, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dtable___Gdefines_D203_k367, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.compiler-error.178 13 23) (close _V10_Dtable___Gdefines_D203_k368) (##string ##.string.1464) (bruijn ##.x.1071 0 0))
    V_CALL(VGetArg(upenv, 13-1, 23), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dtable___Gdefines_D203_k368, env)}),
      VEncodePointer(&_V10_Dstring_D1464.sym, VPOINTER_OTHER),
      _var0);
 }
}
static void _V10_Dtable___Gdefines_D203_k366(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dtable___Gdefines_D203_k366" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dtable___Gdefines_D203_k366, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dtable___Gdefines_D203_k366, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.car.188 12 33) (close _V10_Dtable___Gdefines_D203_k367) (bruijn ##.table.393 10 1))
    V_CALL(VGetArg(upenv, 12-1, 33), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dtable___Gdefines_D203_k367, env)}),
      VGetArg(upenv, 10-1, 1));
 }
}
static void _V10_Dtable___Gdefines_D203_lambda70(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dtable___Gdefines_D203_lambda70" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dtable___Gdefines_D203_lambda70, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dtable___Gdefines_D203_k356) (close _V10_Dtable___Gdefines_D203_k366))
    V_CALL_FUNC(_V10_Dtable___Gdefines_D203_k356, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dtable___Gdefines_D203_k366, env)}));
 }
}
static void _V10_Dtable___Gdefines_D203_k355(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dtable___Gdefines_D203_k355" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dtable___Gdefines_D203_k355, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dtable___Gdefines_D203_k355, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dtable___Gdefines_D203_lambda70) (bruijn ##.input.101.401 4 0))
    V_CALL_FUNC(_V10_Dtable___Gdefines_D203_lambda70, env, runtime,
      upenv->up->up->up->vars[0]);
 }
}
static void _V10_Dtable___Gdefines_D203_lambda68(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dtable___Gdefines_D203_lambda68" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dtable___Gdefines_D203_lambda68, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dtable___Gdefines_D203_k344) (close _V10_Dtable___Gdefines_D203_k355))
    V_CALL_FUNC(_V10_Dtable___Gdefines_D203_k344, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dtable___Gdefines_D203_k355, env)}));
 }
}
static void _V10_Dtable___Gdefines_D203_k343(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dtable___Gdefines_D203_k343" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dtable___Gdefines_D203_k343, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dtable___Gdefines_D203_k343, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dtable___Gdefines_D203_lambda68) (bruijn ##.input.101.401 2 0))
    V_CALL_FUNC(_V10_Dtable___Gdefines_D203_lambda68, env, runtime,
      upenv->up->vars[0]);
 }
}
static void _V10_Dtable___Gdefines_D203_lambda66(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dtable___Gdefines_D203_lambda66" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dtable___Gdefines_D203_lambda66, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dtable___Gdefines_D203_k328) (close _V10_Dtable___Gdefines_D203_k343))
    V_CALL_FUNC(_V10_Dtable___Gdefines_D203_k328, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dtable___Gdefines_D203_k343, env)}));
 }
}
static void _V10_Dtable___Gdefines_D203_k327(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dtable___Gdefines_D203_k327" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dtable___Gdefines_D203_k327, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dtable___Gdefines_D203_k327, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dtable___Gdefines_D203_lambda66) (bruijn ##.input.101.401 0 0))
    V_CALL_FUNC(_V10_Dtable___Gdefines_D203_lambda66, env, runtime,
      _var0);
 }
}
static void _V10_Dtable___Gdefines_D203_lambda65(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V10_Dtable___Gdefines_D203_lambda65" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dtable___Gdefines_D203_lambda65, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dtable___Gdefines_D203_lambda65, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##.car.188 5 33) (close _V10_Dtable___Gdefines_D203_k327) (bruijn ##.table.393 3 1))
    V_CALL(VGetArg(upenv, 5-1, 33), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dtable___Gdefines_D203_k327, env)}),
      upenv->up->up->vars[1]);
 }
}
static void _V10_Dtable___Gdefines_D203_k326(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dtable___Gdefines_D203_k326" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dtable___Gdefines_D203_k326, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dtable___Gdefines_D203_k326, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1065 0 0) ((bruijn ##.k.1054 2 0) (bruijn ##.acc.394 2 2)) ((bruijn ##.call/cc.192 4 37) (bruijn ##.k.1054 2 0) (close _V10_Dtable___Gdefines_D203_lambda65)))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->up->vars[0], runtime,
      upenv->up->vars[2]);
} else {
    V_CALL(upenv->up->up->up->vars[37], runtime,
      upenv->up->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dtable___Gdefines_D203_lambda65, env)}));
}
 }
}
static void _V10_Dtable___Gdefines_D203_lambda63(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V10_Dtable___Gdefines_D203_lambda63" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dtable___Gdefines_D203_lambda63, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dtable___Gdefines_D203_lambda63, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // (letrec 1 ((close _V10_Dduplicate__mismatch_D395_lambda64)) ((bruijn ##.null?.169 3 14) (close _V10_Dtable___Gdefines_D203_k326) (bruijn ##.table.393 1 1)))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dduplicate__mismatch_D395_lambda64, env)});
    V_CALL(upenv->up->up->vars[14], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dtable___Gdefines_D203_k326, env)}),
      upenv->vars[1]);
    }
 }
}
static void _V10_Ddeep__copy_D204_k374(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Ddeep__copy_D204_k374" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddeep__copy_D204_k374, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddeep__copy_D204_k374, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.cons.174 8 19) (bruijn ##.k.1130 6 0) (bruijn ##.x.1133 2 0) (bruijn ##.x.1134 0 0))
    V_CALL(VGetArg(upenv, 8-1, 19), runtime,
      VGetArg(upenv, 6-1, 0),
      upenv->up->vars[0],
      _var0);
 }
}
static void _V10_Ddeep__copy_D204_k373(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Ddeep__copy_D204_k373" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddeep__copy_D204_k373, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddeep__copy_D204_k373, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.deep-copy.204 6 8) (close _V10_Ddeep__copy_D204_k374) (bruijn ##.x.1135 0 0))
    V_CALL(VGetArg(upenv, 6-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddeep__copy_D204_k374, env)}),
      _var0);
 }
}
static void _V10_Ddeep__copy_D204_k372(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Ddeep__copy_D204_k372" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddeep__copy_D204_k372, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddeep__copy_D204_k372, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cdr.186 6 31) (close _V10_Ddeep__copy_D204_k373) (bruijn ##.x.421 4 1))
    V_CALL(VGetArg(upenv, 6-1, 31), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddeep__copy_D204_k373, env)}),
      upenv->up->up->up->vars[1]);
 }
}
static void _V10_Ddeep__copy_D204_k371(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Ddeep__copy_D204_k371" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddeep__copy_D204_k371, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddeep__copy_D204_k371, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.deep-copy.204 4 8) (close _V10_Ddeep__copy_D204_k372) (bruijn ##.x.1136 0 0))
    V_CALL(upenv->up->up->up->vars[8], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddeep__copy_D204_k372, env)}),
      _var0);
 }
}
static void _V10_Ddeep__copy_D204_k370(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Ddeep__copy_D204_k370" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddeep__copy_D204_k370, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddeep__copy_D204_k370, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1132 0 0) ((bruijn ##.car.188 4 33) (close _V10_Ddeep__copy_D204_k371) (bruijn ##.x.421 2 1)) ((bruijn ##.k.1130 2 0) (bruijn ##.x.421 2 1)))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->up->up->up->vars[33], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddeep__copy_D204_k371, env)}),
      upenv->up->vars[1]);
} else {
    V_CALL(upenv->up->vars[0], runtime,
      upenv->up->vars[1]);
}
 }
}
static void _V10_Ddeep__copy_D204_k369(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Ddeep__copy_D204_k369" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddeep__copy_D204_k369, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddeep__copy_D204_k369, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1131 0 0) ((bruijn ##.string-copy.165 3 10) (bruijn ##.k.1130 1 0) (bruijn ##.x.421 1 1)) ((bruijn ##.pair?.189 3 34) (close _V10_Ddeep__copy_D204_k370) (bruijn ##.x.421 1 1)))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->up->up->vars[10], runtime,
      upenv->vars[0],
      upenv->vars[1]);
} else {
    V_CALL(upenv->up->up->vars[34], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddeep__copy_D204_k370, env)}),
      upenv->vars[1]);
}
 }
}
static void _V10_Ddeep__copy_D204_lambda72(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V10_Ddeep__copy_D204_lambda72" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddeep__copy_D204_lambda72, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Ddeep__copy_D204_lambda72, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##.string?.177 2 22) (close _V10_Ddeep__copy_D204_k369) (bruijn ##.x.421 0 1))
    V_CALL(upenv->up->vars[22], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddeep__copy_D204_k369, env)}),
      _var1);
 }
}
static void _V10_Dis__one__decl_D425_k379(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dis__one__decl_D425_k379" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dis__one__decl_D425_k379, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dis__one__decl_D425_k379, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##.p.1175 1 0) (##vcore.blob=? (bruijn ##.k.1176 0 0) (##string ##.string.1458) (##inline ##vcore.car (bruijn ##.expr.123.429 3 0))) ((bruijn ##.k.1176 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL_FUNC(VBlobEqv2, NULL, runtime,
      _var0,
      VEncodePointer(&_V10_Dstring_D1458.sym, VPOINTER_OTHER),
      VInlineCar2(runtime,
        upenv->up->up->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dis__one__decl_D425_k384(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dis__one__decl_D425_k384" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dis__one__decl_D425_k384, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dis__one__decl_D425_k384, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##.p.1171 1 0) (##vcore.blob=? (bruijn ##.k.1172 0 0) (##string ##.string.1459) (##inline ##vcore.car (bruijn ##.expr.125.431 2 0))) ((bruijn ##.k.1172 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL_FUNC(VBlobEqv2, NULL, runtime,
      _var0,
      VEncodePointer(&_V10_Dstring_D1459.sym, VPOINTER_OTHER),
      VInlineCar2(runtime,
        upenv->up->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dis__one__decl_D425_k388(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dis__one__decl_D425_k388" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dis__one__decl_D425_k388, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dis__one__decl_D425_k388, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.kk.121.427 12 1) (bruijn ##.k.1159 9 0) (bruijn ##.x.1168 0 0))
    V_CALL(VGetArg(upenv, 12-1, 1), runtime,
      VGetArg(upenv, 9-1, 0),
      _var0);
 }
}
static void _V10_Dis__one__decl_D425_k387(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dis__one__decl_D425_k387" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dis__one__decl_D425_k387, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dis__one__decl_D425_k387, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.127.434 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.127.434 0 0))) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.124.430 5 0))) ((bruijn ##.cdadr.166 18 11) (close _V10_Dis__one__decl_D425_k388) (bruijn ##.parse.426 12 1)) ((bruijn ##.k.1159 8 0) #f)) ((bruijn ##.k.1159 8 0) #f)) ((bruijn ##.k.1159 8 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        VGetArg(upenv, 5-1, 0))))) {
    V_CALL(VGetArg(upenv, 18-1, 11), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dis__one__decl_D425_k388, env)}),
      VGetArg(upenv, 12-1, 1));
} else {
    V_CALL(VGetArg(upenv, 8-1, 0), runtime,
      VEncodeBool(false));
}
} else {
    V_CALL(VGetArg(upenv, 8-1, 0), runtime,
      VEncodeBool(false));
}
} else {
    V_CALL(VGetArg(upenv, 8-1, 0), runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dis__one__decl_D425_k386(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dis__one__decl_D425_k386" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dis__one__decl_D425_k386, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dis__one__decl_D425_k386, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.126.432 0 0)) ((close _V10_Dis__one__decl_D425_k387) (##inline ##vcore.cdr (bruijn ##.expr.126.432 0 0))) ((bruijn ##.k.1159 7 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL_FUNC(_V10_Dis__one__decl_D425_k387, env, runtime,
      VInlineCdr2(runtime,
        _var0));
} else {
    V_CALL(VGetArg(upenv, 7-1, 0), runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dis__one__decl_D425_k385(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dis__one__decl_D425_k385" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dis__one__decl_D425_k385, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dis__one__decl_D425_k385, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1163 0 0) ((close _V10_Dis__one__decl_D425_k386) (##inline ##vcore.cdr (bruijn ##.expr.125.431 2 0))) ((bruijn ##.k.1159 6 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(_V10_Dis__one__decl_D425_k386, env, runtime,
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
} else {
    V_CALL(VGetArg(upenv, 6-1, 0), runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dis__one__decl_D425_k383(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dis__one__decl_D425_k383" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dis__one__decl_D425_k383, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dis__one__decl_D425_k383, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dis__one__decl_D425_k384) (close _V10_Dis__one__decl_D425_k385))
    V_CALL_FUNC(_V10_Dis__one__decl_D425_k384, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dis__one__decl_D425_k385, env)}));
 }
}
static void _V10_Dis__one__decl_D425_k382(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dis__one__decl_D425_k382" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dis__one__decl_D425_k382, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dis__one__decl_D425_k382, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.125.431 0 0)) (##vcore.string? (close _V10_Dis__one__decl_D425_k383) (##inline ##vcore.car (bruijn ##.expr.125.431 0 0))) ((bruijn ##.k.1159 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL_FUNC(VStringP2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dis__one__decl_D425_k383, env)}),
      VInlineCar2(runtime,
        _var0));
} else {
    V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dis__one__decl_D425_k381(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dis__one__decl_D425_k381" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dis__one__decl_D425_k381, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dis__one__decl_D425_k381, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.124.430 0 0)) ((close _V10_Dis__one__decl_D425_k382) (##inline ##vcore.car (bruijn ##.expr.124.430 0 0))) ((bruijn ##.k.1159 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL_FUNC(_V10_Dis__one__decl_D425_k382, env, runtime,
      VInlineCar2(runtime,
        _var0));
} else {
    V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dis__one__decl_D425_k380(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dis__one__decl_D425_k380" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dis__one__decl_D425_k380, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dis__one__decl_D425_k380, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1160 0 0) ((close _V10_Dis__one__decl_D425_k381) (##inline ##vcore.cdr (bruijn ##.expr.123.429 3 0))) ((bruijn ##.k.1159 2 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(_V10_Dis__one__decl_D425_k381, env, runtime,
      VInlineCdr2(runtime,
        upenv->up->up->vars[0]));
} else {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dis__one__decl_D425_k378(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dis__one__decl_D425_k378" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dis__one__decl_D425_k378, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dis__one__decl_D425_k378, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dis__one__decl_D425_k379) (close _V10_Dis__one__decl_D425_k380))
    V_CALL_FUNC(_V10_Dis__one__decl_D425_k379, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dis__one__decl_D425_k380, env)}));
 }
}
static void _V10_Dis__one__decl_D425_k377(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dis__one__decl_D425_k377" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dis__one__decl_D425_k377, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dis__one__decl_D425_k377, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.123.429 1 0)) (##vcore.string? (close _V10_Dis__one__decl_D425_k378) (##inline ##vcore.car (bruijn ##.expr.123.429 1 0))) ((bruijn ##.k.1159 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL_FUNC(VStringP2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dis__one__decl_D425_k378, env)}),
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dis__one__decl_D425_k392(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dis__one__decl_D425_k392" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dis__one__decl_D425_k392, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dis__one__decl_D425_k392, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##.p.1154 1 0) (##vcore.blob=? (bruijn ##.k.1155 0 0) (##string ##.string.1465) (##inline ##vcore.car (bruijn ##.expr.128.435 3 0))) ((bruijn ##.k.1155 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL_FUNC(VBlobEqv2, NULL, runtime,
      _var0,
      VEncodePointer(&_V10_Dstring_D1465.sym, VPOINTER_OTHER),
      VInlineCar2(runtime,
        upenv->up->up->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dis__one__decl_D425_k396(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dis__one__decl_D425_k396" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dis__one__decl_D425_k396, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dis__one__decl_D425_k396, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.kk.121.427 10 1) (bruijn ##.k.1147 5 0) (bruijn ##.x.1152 0 0))
    V_CALL(VGetArg(upenv, 10-1, 1), runtime,
      VGetArg(upenv, 5-1, 0),
      _var0);
 }
}
static void _V10_Dis__one__decl_D425_k395(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dis__one__decl_D425_k395" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dis__one__decl_D425_k395, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dis__one__decl_D425_k395, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.130.438 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.130.438 0 0))) ((bruijn ##.cdr.186 16 31) (close _V10_Dis__one__decl_D425_k396) (bruijn ##.parse.426 10 1)) ((bruijn ##.k.1147 4 0) #f)) ((bruijn ##.k.1147 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    V_CALL(VGetArg(upenv, 16-1, 31), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dis__one__decl_D425_k396, env)}),
      VGetArg(upenv, 10-1, 1));
} else {
    V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeBool(false));
}
} else {
    V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dis__one__decl_D425_k394(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dis__one__decl_D425_k394" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dis__one__decl_D425_k394, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dis__one__decl_D425_k394, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.129.436 0 0)) ((close _V10_Dis__one__decl_D425_k395) (##inline ##vcore.cdr (bruijn ##.expr.129.436 0 0))) ((bruijn ##.k.1147 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL_FUNC(_V10_Dis__one__decl_D425_k395, env, runtime,
      VInlineCdr2(runtime,
        _var0));
} else {
    V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dis__one__decl_D425_k393(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dis__one__decl_D425_k393" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dis__one__decl_D425_k393, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dis__one__decl_D425_k393, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1148 0 0) ((close _V10_Dis__one__decl_D425_k394) (##inline ##vcore.cdr (bruijn ##.expr.128.435 3 0))) ((bruijn ##.k.1147 2 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(_V10_Dis__one__decl_D425_k394, env, runtime,
      VInlineCdr2(runtime,
        upenv->up->up->vars[0]));
} else {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dis__one__decl_D425_k391(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dis__one__decl_D425_k391" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dis__one__decl_D425_k391, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dis__one__decl_D425_k391, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dis__one__decl_D425_k392) (close _V10_Dis__one__decl_D425_k393))
    V_CALL_FUNC(_V10_Dis__one__decl_D425_k392, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dis__one__decl_D425_k393, env)}));
 }
}
static void _V10_Dis__one__decl_D425_k390(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dis__one__decl_D425_k390" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dis__one__decl_D425_k390, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dis__one__decl_D425_k390, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.128.435 1 0)) (##vcore.string? (close _V10_Dis__one__decl_D425_k391) (##inline ##vcore.car (bruijn ##.expr.128.435 1 0))) ((bruijn ##.k.1147 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL_FUNC(VStringP2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dis__one__decl_D425_k391, env)}),
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dis__one__decl_D425_k398(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dis__one__decl_D425_k398" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dis__one__decl_D425_k398, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dis__one__decl_D425_k398, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.kk.121.427 6 1) (bruijn ##.k.1141 6 0) #f)
    V_CALL(VGetArg(upenv, 6-1, 1), runtime,
      VGetArg(upenv, 6-1, 0),
      VEncodeBool(false));
 }
}
static void _V10_Dis__one__decl_D425_k397(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dis__one__decl_D425_k397" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dis__one__decl_D425_k397, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dis__one__decl_D425_k397, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.compiler-error.178 12 23) (close _V10_Dis__one__decl_D425_k398) (##string ##.string.1466) (bruijn ##.parse.426 6 1))
    V_CALL(VGetArg(upenv, 12-1, 23), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dis__one__decl_D425_k398, env)}),
      VEncodePointer(&_V10_Dstring_D1466.sym, VPOINTER_OTHER),
      VGetArg(upenv, 6-1, 1));
 }
}
static void _V10_Dis__one__decl_D425_lambda78(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dis__one__decl_D425_lambda78" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dis__one__decl_D425_lambda78, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dis__one__decl_D425_k390) (close _V10_Dis__one__decl_D425_k397))
    V_CALL_FUNC(_V10_Dis__one__decl_D425_k390, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dis__one__decl_D425_k397, env)}));
 }
}
static void _V10_Dis__one__decl_D425_k389(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dis__one__decl_D425_k389" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dis__one__decl_D425_k389, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dis__one__decl_D425_k389, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dis__one__decl_D425_lambda78) (bruijn ##.input.122.428 2 0))
    V_CALL_FUNC(_V10_Dis__one__decl_D425_lambda78, env, runtime,
      upenv->up->vars[0]);
 }
}
static void _V10_Dis__one__decl_D425_lambda77(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dis__one__decl_D425_lambda77" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dis__one__decl_D425_lambda77, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dis__one__decl_D425_k377) (close _V10_Dis__one__decl_D425_k389))
    V_CALL_FUNC(_V10_Dis__one__decl_D425_k377, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dis__one__decl_D425_k389, env)}));
 }
}
static void _V10_Dis__one__decl_D425_lambda76(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dis__one__decl_D425_lambda76" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dis__one__decl_D425_lambda76, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dis__one__decl_D425_lambda77) (bruijn ##.input.122.428 0 0))
    V_CALL_FUNC(_V10_Dis__one__decl_D425_lambda77, env, runtime,
      _var0);
 }
}
static void _V10_Dis__one__decl_D425_lambda75(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V10_Dis__one__decl_D425_lambda75" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dis__one__decl_D425_lambda75, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dis__one__decl_D425_lambda75, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V10_Dis__one__decl_D425_lambda76) (bruijn ##.parse.426 1 1))
    V_CALL_FUNC(_V10_Dis__one__decl_D425_lambda76, env, runtime,
      upenv->vars[1]);
 }
}
static void _V10_Dis__one__decl_D425_lambda74(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V10_Dis__one__decl_D425_lambda74" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dis__one__decl_D425_lambda74, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dis__one__decl_D425_lambda74, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##.call/cc.192 6 37) (bruijn ##.k.1140 0 0) (close _V10_Dis__one__decl_D425_lambda75))
    V_CALL(VGetArg(upenv, 6-1, 37), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dis__one__decl_D425_lambda75, env)}));
 }
}
static void _V10_Dvalidate__foreign__function_D205_k403(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dvalidate__foreign__function_D205_k403" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dvalidate__foreign__function_D205_k403, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dvalidate__foreign__function_D205_k403, runtime, upenv, 1, argc, _var0) {
  // (if (##inline ##vcore.pair? (bruijn ##.expr.116.446 0 0)) (if (##inline ##vcore.pair? (##inline ##vcore.cdr (bruijn ##.expr.116.446 0 0))) ((bruijn ##.kk.111.439 7 1) (bruijn ##.k.1210 4 0) (bruijn ##.expr.422 11 1)) ((bruijn ##.k.1210 4 0) #f)) ((bruijn ##.k.1210 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlinePairP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    V_CALL(VGetArg(upenv, 7-1, 1), runtime,
      upenv->up->up->up->vars[0],
      VGetArg(upenv, 11-1, 1));
} else {
    V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeBool(false));
}
} else {
    V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dvalidate__foreign__function_D205_k402(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dvalidate__foreign__function_D205_k402" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dvalidate__foreign__function_D205_k402, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dvalidate__foreign__function_D205_k402, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.115.444 0 0)) ((close _V10_Dvalidate__foreign__function_D205_k403) (##inline ##vcore.cdr (bruijn ##.expr.115.444 0 0))) ((bruijn ##.k.1210 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL_FUNC(_V10_Dvalidate__foreign__function_D205_k403, env, runtime,
      VInlineCdr2(runtime,
        _var0));
} else {
    V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dvalidate__foreign__function_D205_k401(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dvalidate__foreign__function_D205_k401" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dvalidate__foreign__function_D205_k401, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dvalidate__foreign__function_D205_k401, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.114.442 0 0)) ((close _V10_Dvalidate__foreign__function_D205_k402) (##inline ##vcore.cdr (bruijn ##.expr.114.442 0 0))) ((bruijn ##.k.1210 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL_FUNC(_V10_Dvalidate__foreign__function_D205_k402, env, runtime,
      VInlineCdr2(runtime,
        _var0));
} else {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dvalidate__foreign__function_D205_k400(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dvalidate__foreign__function_D205_k400" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dvalidate__foreign__function_D205_k400, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dvalidate__foreign__function_D205_k400, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1211 0 0) ((close _V10_Dvalidate__foreign__function_D205_k401) (##inline ##vcore.cdr (bruijn ##.expr.113.441 2 0))) ((bruijn ##.k.1210 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(_V10_Dvalidate__foreign__function_D205_k401, env, runtime,
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dvalidate__foreign__function_D205_k399(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dvalidate__foreign__function_D205_k399" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dvalidate__foreign__function_D205_k399, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dvalidate__foreign__function_D205_k399, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.113.441 1 0)) ((bruijn ##.equal?.194 9 39) (close _V10_Dvalidate__foreign__function_D205_k400) '##foreign.function (##inline ##vcore.car (bruijn ##.expr.113.441 1 0))) ((bruijn ##.k.1210 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 9-1, 39), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dvalidate__foreign__function_D205_k400, env)}),
      _V10foreign_Dfunction,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dvalidate__foreign__function_D205_k413(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dvalidate__foreign__function_D205_k413" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dvalidate__foreign__function_D205_k413, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dvalidate__foreign__function_D205_k413, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##.p.1204 1 0) ((bruijn ##.compiler-error.178 19 23) (bruijn ##.k.1205 0 0) (##string ##.string.1467) (bruijn ##.lang.453 5 0)) ((bruijn ##.k.1205 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(VGetArg(upenv, 19-1, 23), runtime,
      _var0,
      VEncodePointer(&_V10_Dstring_D1467.sym, VPOINTER_OTHER),
      VGetArg(upenv, 5-1, 0));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dvalidate__foreign__function_D205_k425(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dvalidate__foreign__function_D205_k425" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dvalidate__foreign__function_D205_k425, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dvalidate__foreign__function_D205_k425, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.kk.111.439 24 1) (bruijn ##.k.1184 19 0) (##inline ##vcore.cons '##foreign.function (##inline ##vcore.cons '(##string ##.string.1461) (##inline ##vcore.cons (bruijn ##.decl.455 14 0) (##inline ##vcore.cons (bruijn ##.x.1195 2 0) (##inline ##vcore.cons (bruijn ##.x.1197 1 0) (bruijn ##.x.1198 0 0)))))))
    V_CALL(VGetArg(upenv, 24-1, 1), runtime,
      VGetArg(upenv, 19-1, 0),
      VInlineCons2(runtime,
        _V10foreign_Dfunction,
        VInlineCons2(runtime,
        VEncodePointer(&_V10_Dstring_D1461.sym, VPOINTER_OTHER),
        VInlineCons2(runtime,
        VGetArg(upenv, 14-1, 0),
        VInlineCons2(runtime,
        upenv->up->vars[0],
        VInlineCons2(runtime,
        upenv->vars[0],
        _var0))))));
 }
}
static void _V10_Dvalidate__foreign__function_D205_k424(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dvalidate__foreign__function_D205_k424" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dvalidate__foreign__function_D205_k424, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dvalidate__foreign__function_D205_k424, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cdddr.168 29 13) (close _V10_Dvalidate__foreign__function_D205_k425) (bruijn ##.ff.457 2 0))
    V_CALL(VGetArg(upenv, 29-1, 13), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dvalidate__foreign__function_D205_k425, env)}),
      upenv->up->vars[0]);
 }
}
static void _V10_Dvalidate__foreign__function_D205_k423(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dvalidate__foreign__function_D205_k423" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dvalidate__foreign__function_D205_k423, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dvalidate__foreign__function_D205_k423, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cadr.180 28 25) (close _V10_Dvalidate__foreign__function_D205_k424) (bruijn ##.ff.457 1 0))
    V_CALL(VGetArg(upenv, 28-1, 25), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dvalidate__foreign__function_D205_k424, env)}),
      upenv->vars[0]);
 }
}
static void _V10_Dvalidate__foreign__function_D205_k422(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dvalidate__foreign__function_D205_k422" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dvalidate__foreign__function_D205_k422, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dvalidate__foreign__function_D205_k422, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.caddr.167 27 12) (close _V10_Dvalidate__foreign__function_D205_k423) (bruijn ##.ff.457 0 0))
    V_CALL(VGetArg(upenv, 27-1, 12), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dvalidate__foreign__function_D205_k423, env)}),
      _var0);
 }
}
static void _V10_Dvalidate__foreign__function_D205_k421(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dvalidate__foreign__function_D205_k421" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dvalidate__foreign__function_D205_k421, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dvalidate__foreign__function_D205_k421, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.unwrap-function.200 25 4) (close _V10_Dvalidate__foreign__function_D205_k422) (bruijn ##.x.1199 1 0) (bruijn ##.x.1200 0 0) '())
    V_CALL(VGetArg(upenv, 25-1, 4), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dvalidate__foreign__function_D205_k422, env)}),
      upenv->vars[0],
      _var0,
      VNULL);
 }
}
static void _V10_Dvalidate__foreign__function_D205_k420(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dvalidate__foreign__function_D205_k420" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dvalidate__foreign__function_D205_k420, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dvalidate__foreign__function_D205_k420, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cadr.180 25 25) (close _V10_Dvalidate__foreign__function_D205_k421) (bruijn ##.parse.456 3 0))
    V_CALL(VGetArg(upenv, 25-1, 25), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dvalidate__foreign__function_D205_k421, env)}),
      upenv->up->up->vars[0]);
 }
}
static void _V10_Dvalidate__foreign__function_D205_k419(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dvalidate__foreign__function_D205_k419" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dvalidate__foreign__function_D205_k419, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dvalidate__foreign__function_D205_k419, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.reduce-type.198 23 2) (close _V10_Dvalidate__foreign__function_D205_k420) (bruijn ##.x.1201 0 0) '() #t)
    V_CALL(VGetArg(upenv, 23-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dvalidate__foreign__function_D205_k420, env)}),
      _var0,
      VNULL,
      VEncodeBool(true));
 }
}
static void _V10_Dvalidate__foreign__function_D205_k418(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dvalidate__foreign__function_D205_k418" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dvalidate__foreign__function_D205_k418, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dvalidate__foreign__function_D205_k418, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.car.188 23 33) (close _V10_Dvalidate__foreign__function_D205_k419) (bruijn ##.parse.456 1 0))
    V_CALL(VGetArg(upenv, 23-1, 33), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dvalidate__foreign__function_D205_k419, env)}),
      upenv->vars[0]);
 }
}
static void _V10_Dvalidate__foreign__function_D205_k417(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dvalidate__foreign__function_D205_k417" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dvalidate__foreign__function_D205_k417, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dvalidate__foreign__function_D205_k417, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.release-parse.424 17 1) (close _V10_Dvalidate__foreign__function_D205_k418))
    V_CALL(VGetArg(upenv, 17-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dvalidate__foreign__function_D205_k418, env)}));
 }
}
static void _V10_Dvalidate__foreign__function_D205_k416(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dvalidate__foreign__function_D205_k416" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dvalidate__foreign__function_D205_k416, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dvalidate__foreign__function_D205_k416, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.is-one-decl.425 16 2) (close _V10_Dvalidate__foreign__function_D205_k417) (bruijn ##.x.1202 0 0))
    V_CALL(VGetArg(upenv, 16-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dvalidate__foreign__function_D205_k417, env)}),
      _var0);
 }
}
static void _V10_Dvalidate__foreign__function_D205_k415(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dvalidate__foreign__function_D205_k415" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dvalidate__foreign__function_D205_k415, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dvalidate__foreign__function_D205_k415, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.deep-copy.204 19 8) (close _V10_Dvalidate__foreign__function_D205_k416) (bruijn ##.x.1203 0 0))
    V_CALL(VGetArg(upenv, 19-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dvalidate__foreign__function_D205_k416, env)}),
      _var0);
 }
}
static void _V10_Dvalidate__foreign__function_D205_k414(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dvalidate__foreign__function_D205_k414" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dvalidate__foreign__function_D205_k414, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dvalidate__foreign__function_D205_k414, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.parse-decl-c.423 14 0) (close _V10_Dvalidate__foreign__function_D205_k415) (bruijn ##.decl.455 3 0))
    V_CALL(VGetArg(upenv, 14-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dvalidate__foreign__function_D205_k415, env)}),
      upenv->up->up->vars[0]);
 }
}
static void _V10_Dvalidate__foreign__function_D205_k412(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dvalidate__foreign__function_D205_k412" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dvalidate__foreign__function_D205_k412, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dvalidate__foreign__function_D205_k412, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dvalidate__foreign__function_D205_k413) (close _V10_Dvalidate__foreign__function_D205_k414))
    V_CALL_FUNC(_V10_Dvalidate__foreign__function_D205_k413, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dvalidate__foreign__function_D205_k414, env)}));
 }
}
static void _V10_Dvalidate__foreign__function_D205_k411(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dvalidate__foreign__function_D205_k411" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dvalidate__foreign__function_D205_k411, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dvalidate__foreign__function_D205_k411, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.not.176 17 21) (close _V10_Dvalidate__foreign__function_D205_k412) (bruijn ##.x.1206 0 0))
    V_CALL(VGetArg(upenv, 17-1, 21), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dvalidate__foreign__function_D205_k412, env)}),
      _var0);
 }
}
static void _V10_Dvalidate__foreign__function_D205_k410(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dvalidate__foreign__function_D205_k410" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dvalidate__foreign__function_D205_k410, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dvalidate__foreign__function_D205_k410, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.120.454 1 0))) ((bruijn ##.equal?.194 16 39) (close _V10_Dvalidate__foreign__function_D205_k411) (bruijn ##.lang.453 2 0) (##string ##.string.1461)) ((bruijn ##.k.1184 5 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        upenv->vars[0])))) {
    V_CALL(VGetArg(upenv, 16-1, 39), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dvalidate__foreign__function_D205_k411, env)}),
      upenv->up->vars[0],
      VEncodePointer(&_V10_Dstring_D1461.sym, VPOINTER_OTHER));
} else {
    V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dvalidate__foreign__function_D205_k409(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dvalidate__foreign__function_D205_k409" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dvalidate__foreign__function_D205_k409, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dvalidate__foreign__function_D205_k409, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.120.454 0 0)) ((close _V10_Dvalidate__foreign__function_D205_k410) (##inline ##vcore.car (bruijn ##.expr.120.454 0 0))) ((bruijn ##.k.1184 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL_FUNC(_V10_Dvalidate__foreign__function_D205_k410, env, runtime,
      VInlineCar2(runtime,
        _var0));
} else {
    V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dvalidate__foreign__function_D205_k408(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dvalidate__foreign__function_D205_k408" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dvalidate__foreign__function_D205_k408, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dvalidate__foreign__function_D205_k408, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dvalidate__foreign__function_D205_k409) (##inline ##vcore.cdr (bruijn ##.expr.119.452 1 0)))
    V_CALL_FUNC(_V10_Dvalidate__foreign__function_D205_k409, env, runtime,
      VInlineCdr2(runtime,
        upenv->vars[0]));
 }
}
static void _V10_Dvalidate__foreign__function_D205_k407(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dvalidate__foreign__function_D205_k407" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dvalidate__foreign__function_D205_k407, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dvalidate__foreign__function_D205_k407, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.119.452 0 0)) ((close _V10_Dvalidate__foreign__function_D205_k408) (##inline ##vcore.car (bruijn ##.expr.119.452 0 0))) ((bruijn ##.k.1184 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL_FUNC(_V10_Dvalidate__foreign__function_D205_k408, env, runtime,
      VInlineCar2(runtime,
        _var0));
} else {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dvalidate__foreign__function_D205_k406(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dvalidate__foreign__function_D205_k406" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dvalidate__foreign__function_D205_k406, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dvalidate__foreign__function_D205_k406, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1185 0 0) ((close _V10_Dvalidate__foreign__function_D205_k407) (##inline ##vcore.cdr (bruijn ##.expr.118.451 2 0))) ((bruijn ##.k.1184 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(_V10_Dvalidate__foreign__function_D205_k407, env, runtime,
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dvalidate__foreign__function_D205_k405(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dvalidate__foreign__function_D205_k405" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dvalidate__foreign__function_D205_k405, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dvalidate__foreign__function_D205_k405, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.118.451 1 0)) ((bruijn ##.equal?.194 11 39) (close _V10_Dvalidate__foreign__function_D205_k406) '##foreign.function (##inline ##vcore.car (bruijn ##.expr.118.451 1 0))) ((bruijn ##.k.1184 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 11-1, 39), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dvalidate__foreign__function_D205_k406, env)}),
      _V10foreign_Dfunction,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dvalidate__foreign__function_D205_k427(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dvalidate__foreign__function_D205_k427" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dvalidate__foreign__function_D205_k427, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dvalidate__foreign__function_D205_k427, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.kk.111.439 6 1) (bruijn ##.k.1179 6 0) (bruijn ##.x.1182 0 0))
    V_CALL(VGetArg(upenv, 6-1, 1), runtime,
      VGetArg(upenv, 6-1, 0),
      _var0);
 }
}
static void _V10_Dvalidate__foreign__function_D205_k426(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dvalidate__foreign__function_D205_k426" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dvalidate__foreign__function_D205_k426, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dvalidate__foreign__function_D205_k426, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.compiler-error.178 11 23) (close _V10_Dvalidate__foreign__function_D205_k427) (##string ##.string.1468) (bruijn ##.expr.422 9 1))
    V_CALL(VGetArg(upenv, 11-1, 23), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dvalidate__foreign__function_D205_k427, env)}),
      VEncodePointer(&_V10_Dstring_D1468.sym, VPOINTER_OTHER),
      VGetArg(upenv, 9-1, 1));
 }
}
static void _V10_Dvalidate__foreign__function_D205_lambda82(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dvalidate__foreign__function_D205_lambda82" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dvalidate__foreign__function_D205_lambda82, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dvalidate__foreign__function_D205_k405) (close _V10_Dvalidate__foreign__function_D205_k426))
    V_CALL_FUNC(_V10_Dvalidate__foreign__function_D205_k405, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dvalidate__foreign__function_D205_k426, env)}));
 }
}
static void _V10_Dvalidate__foreign__function_D205_k404(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dvalidate__foreign__function_D205_k404" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dvalidate__foreign__function_D205_k404, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dvalidate__foreign__function_D205_k404, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dvalidate__foreign__function_D205_lambda82) (bruijn ##.input.112.440 2 0))
    V_CALL_FUNC(_V10_Dvalidate__foreign__function_D205_lambda82, env, runtime,
      upenv->up->vars[0]);
 }
}
static void _V10_Dvalidate__foreign__function_D205_lambda81(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dvalidate__foreign__function_D205_lambda81" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dvalidate__foreign__function_D205_lambda81, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dvalidate__foreign__function_D205_k399) (close _V10_Dvalidate__foreign__function_D205_k404))
    V_CALL_FUNC(_V10_Dvalidate__foreign__function_D205_k399, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dvalidate__foreign__function_D205_k404, env)}));
 }
}
static void _V10_Dvalidate__foreign__function_D205_lambda80(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dvalidate__foreign__function_D205_lambda80" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dvalidate__foreign__function_D205_lambda80, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dvalidate__foreign__function_D205_lambda81) (bruijn ##.input.112.440 0 0))
    V_CALL_FUNC(_V10_Dvalidate__foreign__function_D205_lambda81, env, runtime,
      _var0);
 }
}
static void _V10_Dvalidate__foreign__function_D205_lambda79(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V10_Dvalidate__foreign__function_D205_lambda79" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dvalidate__foreign__function_D205_lambda79, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dvalidate__foreign__function_D205_lambda79, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V10_Dvalidate__foreign__function_D205_lambda80) (bruijn ##.expr.422 4 1))
    V_CALL_FUNC(_V10_Dvalidate__foreign__function_D205_lambda80, env, runtime,
      upenv->up->up->up->vars[1]);
 }
}
static void _V10_Dvalidate__foreign__function_D205_k376(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dvalidate__foreign__function_D205_k376" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dvalidate__foreign__function_D205_k376, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dvalidate__foreign__function_D205_k376, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (letrec 3 ((bruijn ##.x.1138 2 0) (bruijn ##.x.1139 1 0) (close _V10_Dis__one__decl_D425_lambda74)) ((bruijn ##.call/cc.192 5 37) (bruijn ##.k.1137 3 0) (close _V10_Dvalidate__foreign__function_D205_lambda79)))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[3]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 3, 3, upenv);
    env->vars[0] = upenv->up->vars[0];
    env->vars[1] = upenv->vars[0];
    env->vars[2] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dis__one__decl_D425_lambda74, env)});
    V_CALL(VGetArg(upenv, 5-1, 37), runtime,
      upenv->up->up->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dvalidate__foreign__function_D205_lambda79, env)}));
    }
 }
}
static void _V10_Dvalidate__foreign__function_D205_k375(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dvalidate__foreign__function_D205_k375" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dvalidate__foreign__function_D205_k375, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dvalidate__foreign__function_D205_k375, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.function (close _V10_Dvalidate__foreign__function_D205_k376) (##string ##.string.1469))
    V_CALL_FUNC(VFunction2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dvalidate__foreign__function_D205_k376, env)}),
      VEncodePointer(&_V10_Dstring_D1469.sym, VPOINTER_OTHER));
 }
}
static void _V10_Dvalidate__foreign__function_D205_lambda73(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V10_Dvalidate__foreign__function_D205_lambda73" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dvalidate__foreign__function_D205_lambda73, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dvalidate__foreign__function_D205_lambda73, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (##vcore.function (close _V10_Dvalidate__foreign__function_D205_k375) (##string ##.string.1470))
    V_CALL_FUNC(VFunction2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dvalidate__foreign__function_D205_k375, env)}),
      VEncodePointer(&_V10_Dstring_D1470.sym, VPOINTER_OTHER));
 }
}
static void _V10_Dfind__file_D206_k432(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dfind__file_D206_k432" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dfind__file_D206_k432, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dfind__file_D206_k432, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.find-file.206 6 10) (bruijn ##.k.1217 5 0) (bruijn ##.file.458 5 1) (bruijn ##.x.1220 0 0))
    V_CALL(VGetArg(upenv, 6-1, 10), runtime,
      VGetArg(upenv, 5-1, 0),
      VGetArg(upenv, 5-1, 1),
      _var0);
 }
}
static void _V10_Dfind__file_D206_k431(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dfind__file_D206_k431" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dfind__file_D206_k431, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dfind__file_D206_k431, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1219 0 0) ((bruijn ##.k.1217 4 0) (bruijn ##.path.460 1 0)) ((bruijn ##.cdr.186 6 31) (close _V10_Dfind__file_D206_k432) (bruijn ##.paths.459 4 2)))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->up->up->up->vars[0], runtime,
      upenv->vars[0]);
} else {
    V_CALL(VGetArg(upenv, 6-1, 31), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dfind__file_D206_k432, env)}),
      upenv->up->up->up->vars[2]);
}
 }
}
static void _V10_Dfind__file_D206_k430(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dfind__file_D206_k430" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dfind__file_D206_k430, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dfind__file_D206_k430, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.file-exists?.170 5 15) (close _V10_Dfind__file_D206_k431) (bruijn ##.path.460 0 0) 4)
    V_CALL(VGetArg(upenv, 5-1, 15), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dfind__file_D206_k431, env)}),
      _var0,
      VEncodeInt(4l));
 }
}
static void _V10_Dfind__file_D206_k429(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dfind__file_D206_k429" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dfind__file_D206_k429, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dfind__file_D206_k429, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.sprintf.179 4 24) (close _V10_Dfind__file_D206_k430) (##string ##.string.1472) (bruijn ##.x.1221 0 0) (bruijn ##.file.458 2 1))
    V_CALL(upenv->up->up->up->vars[24], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dfind__file_D206_k430, env)}),
      VEncodePointer(&_V10_Dstring_D1472.sym, VPOINTER_OTHER),
      _var0,
      upenv->up->vars[1]);
 }
}
static void _V10_Dfind__file_D206_k428(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dfind__file_D206_k428" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dfind__file_D206_k428, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dfind__file_D206_k428, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1218 0 0) ((bruijn ##.compiler-error.178 3 23) (bruijn ##.k.1217 1 0) (##string ##.string.1471) (bruijn ##.file.458 1 1)) ((bruijn ##.car.188 3 33) (close _V10_Dfind__file_D206_k429) (bruijn ##.paths.459 1 2)))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->up->up->vars[23], runtime,
      upenv->vars[0],
      VEncodePointer(&_V10_Dstring_D1471.sym, VPOINTER_OTHER),
      upenv->vars[1]);
} else {
    V_CALL(upenv->up->up->vars[33], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dfind__file_D206_k429, env)}),
      upenv->vars[2]);
}
 }
}
static void _V10_Dfind__file_D206_lambda83(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V10_Dfind__file_D206_lambda83" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dfind__file_D206_lambda83, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dfind__file_D206_lambda83, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn ##.null?.169 2 14) (close _V10_Dfind__file_D206_k428) (bruijn ##.paths.459 0 2))
    V_CALL(upenv->up->vars[14], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dfind__file_D206_k428, env)}),
      _var2);
 }
}
static void _V10_Dget__install__root_D207_k434(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dget__install__root_D207_k434" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__install__root_D207_k434, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dget__install__root_D207_k434, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.sprintf.179 4 24) (bruijn ##.k.1222 2 0) (##string ##.string.1473) (bruijn ##.x.1223 0 0))
    V_CALL(upenv->up->up->up->vars[24], runtime,
      upenv->up->vars[0],
      VEncodePointer(&_V10_Dstring_D1473.sym, VPOINTER_OTHER),
      _var0);
 }
}
static void _V10_Dget__install__root_D207_k433(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dget__install__root_D207_k433" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__install__root_D207_k433, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dget__install__root_D207_k433, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.x.1224 0 0) (close _V10_Dget__install__root_D207_k434))
    V_CALL(_var0, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dget__install__root_D207_k434, env)}));
 }
}
static void _V10_Dget__install__root_D207_lambda84(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dget__install__root_D207_lambda84" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__install__root_D207_lambda84, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dget__install__root_D207_lambda84, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.install-root.171 2 16) ((bruijn ##.k.1222 0 0) (bruijn ##.install-root.171 2 16)) (##vcore.function (close _V10_Dget__install__root_D207_k433) (##string ##.string.1474)))
if(VDecodeBool(
upenv->up->vars[16])) {
    V_CALL(_var0, runtime,
      upenv->up->vars[16]);
} else {
    V_CALL_FUNC(VFunction2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dget__install__root_D207_k433, env)}),
      VEncodePointer(&_V10_Dstring_D1474.sym, VPOINTER_OTHER));
}
 }
}
static void _V10_Dmake__preprocess__command_D208_k435(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dmake__preprocess__command_D208_k435" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmake__preprocess__command_D208_k435, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dmake__preprocess__command_D208_k435, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.sprintf.179 3 24) (bruijn ##.k.1225 1 0) (##string ##.string.1475) (bruijn ##.gcc-path.172 3 17) (bruijn ##.file.461 1 1) (bruijn ##.x.1226 0 0) (##string ##.string.1476) (bruijn ##.architecture.462 1 2))
    V_CALL(upenv->up->up->vars[24], runtime,
      upenv->vars[0],
      VEncodePointer(&_V10_Dstring_D1475.sym, VPOINTER_OTHER),
      upenv->up->up->vars[17],
      upenv->vars[1],
      _var0,
      VEncodePointer(&_V10_Dstring_D1476.sym, VPOINTER_OTHER),
      upenv->vars[2]);
 }
}
static void _V10_Dmake__preprocess__command_D208_lambda85(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V10_Dmake__preprocess__command_D208_lambda85" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmake__preprocess__command_D208_lambda85, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dmake__preprocess__command_D208_lambda85, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn ##.get-install-root.207 1 11) (close _V10_Dmake__preprocess__command_D208_k435))
    V_CALL(upenv->vars[11], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmake__preprocess__command_D208_k435, env)}));
 }
}
static void _V10_Dresolve__foreign__import_D209_k445(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dresolve__foreign__import_D209_k445" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dresolve__foreign__import_D209_k445, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dresolve__foreign__import_D209_k445, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##.p.1254 1 0) ((bruijn ##.compiler-error.178 16 23) (bruijn ##.k.1255 0 0) (##string ##.string.1467) (bruijn ##.expr.463 14 1)) ((bruijn ##.k.1255 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(VGetArg(upenv, 16-1, 23), runtime,
      _var0,
      VEncodePointer(&_V10_Dstring_D1467.sym, VPOINTER_OTHER),
      VGetArg(upenv, 14-1, 1));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dresolve__foreign__import_D209_k449(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dresolve__foreign__import_D209_k449" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dresolve__foreign__import_D209_k449, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dresolve__foreign__import_D209_k449, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##.p.1251 1 0) ((bruijn ##.compiler-error.178 19 23) (bruijn ##.k.1252 0 0) (##string ##.string.1477) (bruijn ##.expr.463 17 1)) ((bruijn ##.k.1252 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(VGetArg(upenv, 19-1, 23), runtime,
      _var0,
      VEncodePointer(&_V10_Dstring_D1477.sym, VPOINTER_OTHER),
      VGetArg(upenv, 17-1, 1));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dresolve__foreign__import_D209_k461(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dresolve__foreign__import_D209_k461" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dresolve__foreign__import_D209_k461, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dresolve__foreign__import_D209_k461, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.kk.131.468 24 1) (bruijn ##.k.1234 21 0) (bruijn ##.x.1239 0 0))
    V_CALL(VGetArg(upenv, 24-1, 1), runtime,
      VGetArg(upenv, 21-1, 0),
      _var0);
 }
}
static void _V10_Dresolve__foreign__import_D209_k460(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dresolve__foreign__import_D209_k460" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dresolve__foreign__import_D209_k460, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dresolve__foreign__import_D209_k460, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cons.174 29 19) (close _V10_Dresolve__foreign__import_D209_k461) (##inline ##vcore.cons '##foreign.declare (##inline ##vcore.cons (bruijn ##.x.1248 2 0) '())) (bruijn ##.x.1245 0 0))
    V_CALL(VGetArg(upenv, 29-1, 19), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dresolve__foreign__import_D209_k461, env)}),
      VInlineCons2(runtime,
        _V10foreign_Ddeclare,
        VInlineCons2(runtime,
        upenv->up->vars[0],
        VNULL)),
      _var0);
 }
}
static void _V10_Dresolve__foreign__import_D209_k459(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dresolve__foreign__import_D209_k459" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dresolve__foreign__import_D209_k459, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dresolve__foreign__import_D209_k459, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.table->defines.203 27 7) (close _V10_Dresolve__foreign__import_D209_k460) (bruijn ##.x.1246 0 0) '())
    V_CALL(VGetArg(upenv, 27-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dresolve__foreign__import_D209_k460, env)}),
      _var0,
      VNULL);
 }
}
static void _V10_Dresolve__foreign__import_D209_k458(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dresolve__foreign__import_D209_k458" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dresolve__foreign__import_D209_k458, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dresolve__foreign__import_D209_k458, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.unwrap-declares.202 26 6) (close _V10_Dresolve__foreign__import_D209_k459) (bruijn ##.parse.477 3 0) '())
    V_CALL(VGetArg(upenv, 26-1, 6), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dresolve__foreign__import_D209_k459, env)}),
      upenv->up->up->vars[0],
      VNULL);
 }
}
static void _V10_Dresolve__foreign__import_D209_k457(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dresolve__foreign__import_D209_k457" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dresolve__foreign__import_D209_k457, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dresolve__foreign__import_D209_k457, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.sprintf.179 26 24) (close _V10_Dresolve__foreign__import_D209_k458) (##string ##.string.1478) (bruijn ##.file.474 13 0))
    V_CALL(VGetArg(upenv, 26-1, 24), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dresolve__foreign__import_D209_k458, env)}),
      VEncodePointer(&_V10_Dstring_D1478.sym, VPOINTER_OTHER),
      VGetArg(upenv, 13-1, 0));
 }
}
static void _V10_Dresolve__foreign__import_D209_k456(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dresolve__foreign__import_D209_k456" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dresolve__foreign__import_D209_k456, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dresolve__foreign__import_D209_k456, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.close-port.175 25 20) (close _V10_Dresolve__foreign__import_D209_k457) (bruijn ##.fd.476 3 0))
    V_CALL(VGetArg(upenv, 25-1, 20), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dresolve__foreign__import_D209_k457, env)}),
      upenv->up->up->vars[0]);
 }
}
static void _V10_Dresolve__foreign__import_D209_k455(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dresolve__foreign__import_D209_k455" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dresolve__foreign__import_D209_k455, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dresolve__foreign__import_D209_k455, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.release-parse.467 19 1) (close _V10_Dresolve__foreign__import_D209_k456))
    V_CALL(VGetArg(upenv, 19-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dresolve__foreign__import_D209_k456, env)}));
 }
}
static void _V10_Dresolve__foreign__import_D209_k454(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dresolve__foreign__import_D209_k454" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dresolve__foreign__import_D209_k454, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dresolve__foreign__import_D209_k454, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.deep-copy.204 22 8) (close _V10_Dresolve__foreign__import_D209_k455) (bruijn ##.x.1249 0 0))
    V_CALL(VGetArg(upenv, 22-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dresolve__foreign__import_D209_k455, env)}),
      _var0);
 }
}
static void _V10_Dresolve__foreign__import_D209_k453(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dresolve__foreign__import_D209_k453" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dresolve__foreign__import_D209_k453, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dresolve__foreign__import_D209_k453, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.parse-header-c.466 17 0) (close _V10_Dresolve__foreign__import_D209_k454) (bruijn ##.fd.476 0 0))
    V_CALL(VGetArg(upenv, 17-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dresolve__foreign__import_D209_k454, env)}),
      _var0);
 }
}
static void _V10_Dresolve__foreign__import_D209_k452(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dresolve__foreign__import_D209_k452" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dresolve__foreign__import_D209_k452, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dresolve__foreign__import_D209_k452, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.open-input-process.173 21 18) (close _V10_Dresolve__foreign__import_D209_k453) (bruijn ##.cmd.475 0 0))
    V_CALL(VGetArg(upenv, 21-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dresolve__foreign__import_D209_k453, env)}),
      _var0);
 }
}
static void _V10_Dresolve__foreign__import_D209_k451(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dresolve__foreign__import_D209_k451" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dresolve__foreign__import_D209_k451, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dresolve__foreign__import_D209_k451, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.make-preprocess-command.208 19 12) (close _V10_Dresolve__foreign__import_D209_k452) (bruijn ##.x.1250 0 0) (bruijn ##.architecture.465 18 3))
    V_CALL(VGetArg(upenv, 19-1, 12), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dresolve__foreign__import_D209_k452, env)}),
      _var0,
      VGetArg(upenv, 18-1, 3));
 }
}
static void _V10_Dresolve__foreign__import_D209_k450(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dresolve__foreign__import_D209_k450" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dresolve__foreign__import_D209_k450, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dresolve__foreign__import_D209_k450, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.find-file.206 18 10) (close _V10_Dresolve__foreign__import_D209_k451) (bruijn ##.file.474 6 0) (bruijn ##.paths.464 17 2))
    V_CALL(VGetArg(upenv, 18-1, 10), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dresolve__foreign__import_D209_k451, env)}),
      VGetArg(upenv, 6-1, 0),
      VGetArg(upenv, 17-1, 2));
 }
}
static void _V10_Dresolve__foreign__import_D209_k448(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dresolve__foreign__import_D209_k448" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dresolve__foreign__import_D209_k448, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dresolve__foreign__import_D209_k448, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dresolve__foreign__import_D209_k449) (close _V10_Dresolve__foreign__import_D209_k450))
    V_CALL_FUNC(_V10_Dresolve__foreign__import_D209_k449, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dresolve__foreign__import_D209_k450, env)}));
 }
}
static void _V10_Dresolve__foreign__import_D209_k447(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dresolve__foreign__import_D209_k447" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dresolve__foreign__import_D209_k447, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dresolve__foreign__import_D209_k447, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.not.176 17 21) (close _V10_Dresolve__foreign__import_D209_k448) (bruijn ##.x.1253 0 0))
    V_CALL(VGetArg(upenv, 17-1, 21), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dresolve__foreign__import_D209_k448, env)}),
      _var0);
 }
}
static void _V10_Dresolve__foreign__import_D209_k446(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dresolve__foreign__import_D209_k446" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dresolve__foreign__import_D209_k446, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dresolve__foreign__import_D209_k446, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.string?.177 16 22) (close _V10_Dresolve__foreign__import_D209_k447) (bruijn ##.file.474 3 0))
    V_CALL(VGetArg(upenv, 16-1, 22), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dresolve__foreign__import_D209_k447, env)}),
      upenv->up->up->vars[0]);
 }
}
static void _V10_Dresolve__foreign__import_D209_k444(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dresolve__foreign__import_D209_k444" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dresolve__foreign__import_D209_k444, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dresolve__foreign__import_D209_k444, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dresolve__foreign__import_D209_k445) (close _V10_Dresolve__foreign__import_D209_k446))
    V_CALL_FUNC(_V10_Dresolve__foreign__import_D209_k445, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dresolve__foreign__import_D209_k446, env)}));
 }
}
static void _V10_Dresolve__foreign__import_D209_k443(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dresolve__foreign__import_D209_k443" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dresolve__foreign__import_D209_k443, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dresolve__foreign__import_D209_k443, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.not.176 14 21) (close _V10_Dresolve__foreign__import_D209_k444) (bruijn ##.x.1256 0 0))
    V_CALL(VGetArg(upenv, 14-1, 21), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dresolve__foreign__import_D209_k444, env)}),
      _var0);
 }
}
static void _V10_Dresolve__foreign__import_D209_k442(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dresolve__foreign__import_D209_k442" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dresolve__foreign__import_D209_k442, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dresolve__foreign__import_D209_k442, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.135.473 1 0))) ((bruijn ##.equal?.194 13 39) (close _V10_Dresolve__foreign__import_D209_k443) (##inline ##vcore.car (bruijn ##.expr.134.471 2 0)) (##string ##.string.1461)) ((bruijn ##.k.1234 4 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        upenv->vars[0])))) {
    V_CALL(VGetArg(upenv, 13-1, 39), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dresolve__foreign__import_D209_k443, env)}),
      VInlineCar2(runtime,
        upenv->up->vars[0]),
      VEncodePointer(&_V10_Dstring_D1461.sym, VPOINTER_OTHER));
} else {
    V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dresolve__foreign__import_D209_k441(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dresolve__foreign__import_D209_k441" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dresolve__foreign__import_D209_k441, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dresolve__foreign__import_D209_k441, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.135.473 0 0)) ((close _V10_Dresolve__foreign__import_D209_k442) (##inline ##vcore.car (bruijn ##.expr.135.473 0 0))) ((bruijn ##.k.1234 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL_FUNC(_V10_Dresolve__foreign__import_D209_k442, env, runtime,
      VInlineCar2(runtime,
        _var0));
} else {
    V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dresolve__foreign__import_D209_k440(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dresolve__foreign__import_D209_k440" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dresolve__foreign__import_D209_k440, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dresolve__foreign__import_D209_k440, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.134.471 0 0)) ((close _V10_Dresolve__foreign__import_D209_k441) (##inline ##vcore.cdr (bruijn ##.expr.134.471 0 0))) ((bruijn ##.k.1234 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL_FUNC(_V10_Dresolve__foreign__import_D209_k441, env, runtime,
      VInlineCdr2(runtime,
        _var0));
} else {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dresolve__foreign__import_D209_k439(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dresolve__foreign__import_D209_k439" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dresolve__foreign__import_D209_k439, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dresolve__foreign__import_D209_k439, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1235 0 0) ((close _V10_Dresolve__foreign__import_D209_k440) (##inline ##vcore.cdr (bruijn ##.expr.133.470 2 0))) ((bruijn ##.k.1234 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(_V10_Dresolve__foreign__import_D209_k440, env, runtime,
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dresolve__foreign__import_D209_k438(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dresolve__foreign__import_D209_k438" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dresolve__foreign__import_D209_k438, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dresolve__foreign__import_D209_k438, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.133.470 1 0)) ((bruijn ##.equal?.194 9 39) (close _V10_Dresolve__foreign__import_D209_k439) '##foreign.import (##inline ##vcore.car (bruijn ##.expr.133.470 1 0))) ((bruijn ##.k.1234 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 9-1, 39), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dresolve__foreign__import_D209_k439, env)}),
      _V10foreign_Dimport,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dresolve__foreign__import_D209_k463(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dresolve__foreign__import_D209_k463" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dresolve__foreign__import_D209_k463, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dresolve__foreign__import_D209_k463, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.kk.131.468 4 1) (bruijn ##.k.1230 4 0) (bruijn ##.x.1232 0 0))
    V_CALL(upenv->up->up->up->vars[1], runtime,
      upenv->up->up->up->vars[0],
      _var0);
 }
}
static void _V10_Dresolve__foreign__import_D209_k462(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dresolve__foreign__import_D209_k462" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dresolve__foreign__import_D209_k462, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dresolve__foreign__import_D209_k462, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.compiler-error.178 9 23) (close _V10_Dresolve__foreign__import_D209_k463) (##string ##.string.1479) (bruijn ##.expr.463 7 1))
    V_CALL(VGetArg(upenv, 9-1, 23), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dresolve__foreign__import_D209_k463, env)}),
      VEncodePointer(&_V10_Dstring_D1479.sym, VPOINTER_OTHER),
      VGetArg(upenv, 7-1, 1));
 }
}
static void _V10_Dresolve__foreign__import_D209_lambda89(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dresolve__foreign__import_D209_lambda89" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dresolve__foreign__import_D209_lambda89, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dresolve__foreign__import_D209_k438) (close _V10_Dresolve__foreign__import_D209_k462))
    V_CALL_FUNC(_V10_Dresolve__foreign__import_D209_k438, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dresolve__foreign__import_D209_k462, env)}));
 }
}
static void _V10_Dresolve__foreign__import_D209_lambda88(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dresolve__foreign__import_D209_lambda88" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dresolve__foreign__import_D209_lambda88, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dresolve__foreign__import_D209_lambda89) (bruijn ##.input.132.469 0 0))
    V_CALL_FUNC(_V10_Dresolve__foreign__import_D209_lambda89, env, runtime,
      _var0);
 }
}
static void _V10_Dresolve__foreign__import_D209_lambda87(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V10_Dresolve__foreign__import_D209_lambda87" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dresolve__foreign__import_D209_lambda87, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dresolve__foreign__import_D209_lambda87, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V10_Dresolve__foreign__import_D209_lambda88) (bruijn ##.expr.463 4 1))
    V_CALL_FUNC(_V10_Dresolve__foreign__import_D209_lambda88, env, runtime,
      upenv->up->up->up->vars[1]);
 }
}
static void _V10_Dresolve__foreign__import_D209_k437(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dresolve__foreign__import_D209_k437" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dresolve__foreign__import_D209_k437, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dresolve__foreign__import_D209_k437, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (letrec 2 ((bruijn ##.x.1228 2 0) (bruijn ##.x.1229 1 0)) ((bruijn ##.call/cc.192 5 37) (bruijn ##.k.1227 3 0) (close _V10_Dresolve__foreign__import_D209_lambda87)))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[2]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 2, 2, upenv);
    env->vars[0] = upenv->up->vars[0];
    env->vars[1] = upenv->vars[0];
    V_CALL(VGetArg(upenv, 5-1, 37), runtime,
      upenv->up->up->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dresolve__foreign__import_D209_lambda87, env)}));
    }
 }
}
static void _V10_Dresolve__foreign__import_D209_k436(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dresolve__foreign__import_D209_k436" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dresolve__foreign__import_D209_k436, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dresolve__foreign__import_D209_k436, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.function (close _V10_Dresolve__foreign__import_D209_k437) (##string ##.string.1469))
    V_CALL_FUNC(VFunction2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dresolve__foreign__import_D209_k437, env)}),
      VEncodePointer(&_V10_Dstring_D1469.sym, VPOINTER_OTHER));
 }
}
static void _V10_Dresolve__foreign__import_D209_lambda86(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V10_Dresolve__foreign__import_D209_lambda86" };
 VRecordCall2(runtime, &dbg);
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V10_Dresolve__foreign__import_D209_lambda86, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dresolve__foreign__import_D209_lambda86, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // (##vcore.function (close _V10_Dresolve__foreign__import_D209_k436) (##string ##.string.1480))
    V_CALL_FUNC(VFunction2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dresolve__foreign__import_D209_k436, env)}),
      VEncodePointer(&_V10_Dstring_D1480.sym, VPOINTER_OTHER));
 }
}
static void _V10_Dmangle__foreign__function_D210_lambda90(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V10_Dmangle__foreign__function_D210_lambda90" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmangle__foreign__function_D210_lambda90, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dmangle__foreign__function_D210_lambda90, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##.sprintf.179 2 24) (bruijn ##.k.1259 0 0) (##string ##.string.1481) (bruijn ##.name.478 0 1))
    V_CALL(upenv->up->vars[24], runtime,
      _var0,
      VEncodePointer(&_V10_Dstring_D1481.sym, VPOINTER_OTHER),
      _var1);
 }
}
static void _V10_Dget__foreign__encoder_D211_k466(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dget__foreign__encoder_D211_k466" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__encoder_D211_k466, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dget__foreign__encoder_D211_k466, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.eqv?.185 5 30) (bruijn ##.k.1287 1 0) (bruijn ##.x.1288 0 0) 'pointer)
    V_CALL(VGetArg(upenv, 5-1, 30), runtime,
      upenv->vars[0],
      _var0,
      _V0pointer);
 }
}
static void _V10_Dget__foreign__encoder_D211_k465(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dget__foreign__encoder_D211_k465" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__encoder_D211_k465, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dget__foreign__encoder_D211_k465, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1286 1 0) ((bruijn ##.car.188 4 33) (close _V10_Dget__foreign__encoder_D211_k466) (bruijn ##.type.479 2 1)) ((bruijn ##.k.1287 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(upenv->up->up->up->vars[33], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dget__foreign__encoder_D211_k466, env)}),
      upenv->up->vars[1]);
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dget__foreign__encoder_D211_k467(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dget__foreign__encoder_D211_k467" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__encoder_D211_k467, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dget__foreign__encoder_D211_k467, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##.p.1261 0 0) ((bruijn ##.k.1260 2 0) (##inline ##vcore.qcons 'void-pointer '(##string ##.string.1482))) ((bruijn ##.assv.181 4 26) (bruijn ##.k.1260 2 0) (bruijn ##.type.479 2 1) (##inline ##vcore.qcons (##inline ##vcore.qcons 'void '#t) (##inline ##vcore.qcons (##inline ##vcore.qcons '_Bool '(##string ##.string.1483)) (##inline ##vcore.qcons (##inline ##vcore.qcons 'char '(##string ##.string.1484)) (##inline ##vcore.qcons (##inline ##vcore.qcons 'signed-char '(##string ##.string.1485)) (##inline ##vcore.qcons (##inline ##vcore.qcons 'unsigned-char '(##string ##.string.1485)) (##inline ##vcore.qcons (##inline ##vcore.qcons 'short '(##string ##.string.1485)) (##inline ##vcore.qcons (##inline ##vcore.qcons 'unsigned-short '(##string ##.string.1485)) (##inline ##vcore.qcons (##inline ##vcore.qcons 'int '(##string ##.string.1485)) (##inline ##vcore.qcons (##inline ##vcore.qcons 'unsigned-int '(##string ##.string.1485)) (##inline ##vcore.qcons (##inline ##vcore.qcons 'double '(##string ##.string.1486)) (##inline ##vcore.qcons (##inline ##vcore.qcons 'float '(##string ##.string.1486)) (##inline ##vcore.qcons (##inline ##vcore.qcons 'VWORD '(##string ##.string.1462)) '()))))))))))))))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->up->vars[0], runtime,
      VInlineCons2(runtime,
        _V0void__pointer,
        VEncodePointer(&_V10_Dstring_D1482.sym, VPOINTER_OTHER)));
} else {
    V_CALL(upenv->up->up->up->vars[26], runtime,
      upenv->up->vars[0],
      upenv->up->vars[1],
      VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0void,
        VEncodeBool(true)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0_UBool,
        VEncodePointer(&_V10_Dstring_D1483.sym, VPOINTER_OTHER)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0char,
        VEncodePointer(&_V10_Dstring_D1484.sym, VPOINTER_OTHER)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0signed__char,
        VEncodePointer(&_V10_Dstring_D1485.sym, VPOINTER_OTHER)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0unsigned__char,
        VEncodePointer(&_V10_Dstring_D1485.sym, VPOINTER_OTHER)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0short,
        VEncodePointer(&_V10_Dstring_D1485.sym, VPOINTER_OTHER)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0unsigned__short,
        VEncodePointer(&_V10_Dstring_D1485.sym, VPOINTER_OTHER)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0int,
        VEncodePointer(&_V10_Dstring_D1485.sym, VPOINTER_OTHER)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0unsigned__int,
        VEncodePointer(&_V10_Dstring_D1485.sym, VPOINTER_OTHER)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0double,
        VEncodePointer(&_V10_Dstring_D1486.sym, VPOINTER_OTHER)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0float,
        VEncodePointer(&_V10_Dstring_D1486.sym, VPOINTER_OTHER)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0VWORD,
        VEncodePointer(&_V10_Dstring_D1462.sym, VPOINTER_OTHER)),
        VNULL)))))))))))));
}
 }
}
static void _V10_Dget__foreign__encoder_D211_k464(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dget__foreign__encoder_D211_k464" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__encoder_D211_k464, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dget__foreign__encoder_D211_k464, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dget__foreign__encoder_D211_k465) (close _V10_Dget__foreign__encoder_D211_k467))
    V_CALL_FUNC(_V10_Dget__foreign__encoder_D211_k465, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dget__foreign__encoder_D211_k467, env)}));
 }
}
static void _V10_Dget__foreign__encoder_D211_lambda91(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V10_Dget__foreign__encoder_D211_lambda91" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__encoder_D211_lambda91, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dget__foreign__encoder_D211_lambda91, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##.pair?.189 2 34) (close _V10_Dget__foreign__encoder_D211_k464) (bruijn ##.type.479 0 1))
    V_CALL(upenv->up->vars[34], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dget__foreign__encoder_D211_k464, env)}),
      _var1);
 }
}
static void _V10_Dget__foreign__decoder_D212_k470(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dget__foreign__decoder_D212_k470" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D212_k470, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dget__foreign__decoder_D212_k470, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.eqv?.185 5 30) (bruijn ##.k.1356 1 0) (bruijn ##.x.1357 0 0) 'pointer)
    V_CALL(VGetArg(upenv, 5-1, 30), runtime,
      upenv->vars[0],
      _var0,
      _V0pointer);
 }
}
static void _V10_Dget__foreign__decoder_D212_k469(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dget__foreign__decoder_D212_k469" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D212_k469, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dget__foreign__decoder_D212_k469, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1355 1 0) ((bruijn ##.car.188 4 33) (close _V10_Dget__foreign__decoder_D212_k470) (bruijn ##.type.480 2 1)) ((bruijn ##.k.1356 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(upenv->up->up->up->vars[33], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dget__foreign__decoder_D212_k470, env)}),
      upenv->up->vars[1]);
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dget__foreign__decoder_D212_k474(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dget__foreign__decoder_D212_k474" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D212_k474, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dget__foreign__decoder_D212_k474, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##.p.1320 1 0) ((bruijn ##.kk.136.481 3 1) (bruijn ##.k.1321 0 0) (##inline ##vcore.qcons 'c-string '(##string ##.string.1487))) ((bruijn ##.k.1321 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(upenv->up->up->vars[1], runtime,
      _var0,
      VInlineCons2(runtime,
        _V0c__string,
        VEncodePointer(&_V10_Dstring_D1487.sym, VPOINTER_OTHER)));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dget__foreign__decoder_D212_k479(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dget__foreign__decoder_D212_k479" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D212_k479, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dget__foreign__decoder_D212_k479, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##.p.1314 0 0) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.139.484 1 0))) ((bruijn ##.kk.136.481 8 1) (bruijn ##.k.1311 3 0) (##inline ##vcore.qcons 'const-c-string '(##string ##.string.1488))) ((bruijn ##.k.1311 3 0) #f)) ((bruijn ##.k.1311 3 0) #f))
if(VDecodeBool(
_var0)) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        upenv->vars[0])))) {
    V_CALL(VGetArg(upenv, 8-1, 1), runtime,
      upenv->up->up->vars[0],
      VInlineCons2(runtime,
        _V0const__c__string,
        VEncodePointer(&_V10_Dstring_D1488.sym, VPOINTER_OTHER)));
} else {
    V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
} else {
    V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dget__foreign__decoder_D212_k478(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dget__foreign__decoder_D212_k478" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D212_k478, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dget__foreign__decoder_D212_k478, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.139.484 0 0)) ((bruijn ##.equal?.194 12 39) (close _V10_Dget__foreign__decoder_D212_k479) 'char (##inline ##vcore.car (bruijn ##.expr.139.484 0 0))) ((bruijn ##.k.1311 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL(VGetArg(upenv, 12-1, 39), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dget__foreign__decoder_D212_k479, env)}),
      _V0char,
      VInlineCar2(runtime,
        _var0));
} else {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dget__foreign__decoder_D212_k477(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dget__foreign__decoder_D212_k477" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D212_k477, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dget__foreign__decoder_D212_k477, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1312 0 0) ((close _V10_Dget__foreign__decoder_D212_k478) (##inline ##vcore.cdr (bruijn ##.expr.138.483 2 0))) ((bruijn ##.k.1311 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(_V10_Dget__foreign__decoder_D212_k478, env, runtime,
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dget__foreign__decoder_D212_k476(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dget__foreign__decoder_D212_k476" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D212_k476, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dget__foreign__decoder_D212_k476, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.138.483 1 0)) ((bruijn ##.equal?.194 10 39) (close _V10_Dget__foreign__decoder_D212_k477) 'const (##inline ##vcore.car (bruijn ##.expr.138.483 1 0))) ((bruijn ##.k.1311 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 10-1, 39), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dget__foreign__decoder_D212_k477, env)}),
      _V0const,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dget__foreign__decoder_D212_k484(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dget__foreign__decoder_D212_k484" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D212_k484, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dget__foreign__decoder_D212_k484, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##.p.1304 0 0) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.141.486 1 0))) ((bruijn ##.kk.136.481 10 1) (bruijn ##.k.1301 3 0) (##inline ##vcore.qcons 'const-void-pointer '(##string ##.string.1489))) ((bruijn ##.k.1301 3 0) #f)) ((bruijn ##.k.1301 3 0) #f))
if(VDecodeBool(
_var0)) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        upenv->vars[0])))) {
    V_CALL(VGetArg(upenv, 10-1, 1), runtime,
      upenv->up->up->vars[0],
      VInlineCons2(runtime,
        _V0const__void__pointer,
        VEncodePointer(&_V10_Dstring_D1489.sym, VPOINTER_OTHER)));
} else {
    V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
} else {
    V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dget__foreign__decoder_D212_k483(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dget__foreign__decoder_D212_k483" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D212_k483, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dget__foreign__decoder_D212_k483, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.141.486 0 0)) ((bruijn ##.equal?.194 14 39) (close _V10_Dget__foreign__decoder_D212_k484) 'void (##inline ##vcore.car (bruijn ##.expr.141.486 0 0))) ((bruijn ##.k.1301 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL(VGetArg(upenv, 14-1, 39), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dget__foreign__decoder_D212_k484, env)}),
      _V0void,
      VInlineCar2(runtime,
        _var0));
} else {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dget__foreign__decoder_D212_k482(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dget__foreign__decoder_D212_k482" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D212_k482, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dget__foreign__decoder_D212_k482, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1302 0 0) ((close _V10_Dget__foreign__decoder_D212_k483) (##inline ##vcore.cdr (bruijn ##.expr.140.485 2 0))) ((bruijn ##.k.1301 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(_V10_Dget__foreign__decoder_D212_k483, env, runtime,
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dget__foreign__decoder_D212_k481(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dget__foreign__decoder_D212_k481" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D212_k481, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dget__foreign__decoder_D212_k481, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.140.485 1 0)) ((bruijn ##.equal?.194 12 39) (close _V10_Dget__foreign__decoder_D212_k482) 'const (##inline ##vcore.car (bruijn ##.expr.140.485 1 0))) ((bruijn ##.k.1301 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 12-1, 39), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dget__foreign__decoder_D212_k482, env)}),
      _V0const,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dget__foreign__decoder_D212_k487(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dget__foreign__decoder_D212_k487" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D212_k487, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dget__foreign__decoder_D212_k487, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##.p.1297 1 0) ((bruijn ##.kk.136.481 9 1) (bruijn ##.k.1298 0 0) (##inline ##vcore.qcons 'void-pointer '(##string ##.string.1490))) ((bruijn ##.k.1298 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(VGetArg(upenv, 9-1, 1), runtime,
      _var0,
      VInlineCons2(runtime,
        _V0void__pointer,
        VEncodePointer(&_V10_Dstring_D1490.sym, VPOINTER_OTHER)));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dget__foreign__decoder_D212_k488(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dget__foreign__decoder_D212_k488" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D212_k488, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dget__foreign__decoder_D212_k488, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.kk.136.481 9 1) (bruijn ##.k.1291 9 0) (##inline ##vcore.qcons 'void-pointer '(##string ##.string.1491)))
    V_CALL(VGetArg(upenv, 9-1, 1), runtime,
      VGetArg(upenv, 9-1, 0),
      VInlineCons2(runtime,
        _V0void__pointer,
        VEncodePointer(&_V10_Dstring_D1491.sym, VPOINTER_OTHER)));
 }
}
static void _V10_Dget__foreign__decoder_D212_k486(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dget__foreign__decoder_D212_k486" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D212_k486, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dget__foreign__decoder_D212_k486, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dget__foreign__decoder_D212_k487) (close _V10_Dget__foreign__decoder_D212_k488))
    V_CALL_FUNC(_V10_Dget__foreign__decoder_D212_k487, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dget__foreign__decoder_D212_k488, env)}));
 }
}
static void _V10_Dget__foreign__decoder_D212_k485(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dget__foreign__decoder_D212_k485" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D212_k485, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dget__foreign__decoder_D212_k485, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.equal?.194 12 39) (close _V10_Dget__foreign__decoder_D212_k486) 'void (bruijn ##.input.137.482 6 0))
    V_CALL(VGetArg(upenv, 12-1, 39), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dget__foreign__decoder_D212_k486, env)}),
      _V0void,
      VGetArg(upenv, 6-1, 0));
 }
}
static void _V10_Dget__foreign__decoder_D212_lambda95(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dget__foreign__decoder_D212_lambda95" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dget__foreign__decoder_D212_lambda95, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dget__foreign__decoder_D212_k481) (close _V10_Dget__foreign__decoder_D212_k485))
    V_CALL_FUNC(_V10_Dget__foreign__decoder_D212_k481, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dget__foreign__decoder_D212_k485, env)}));
 }
}
static void _V10_Dget__foreign__decoder_D212_k480(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dget__foreign__decoder_D212_k480" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D212_k480, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dget__foreign__decoder_D212_k480, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dget__foreign__decoder_D212_lambda95) (bruijn ##.input.137.482 4 0))
    V_CALL_FUNC(_V10_Dget__foreign__decoder_D212_lambda95, env, runtime,
      upenv->up->up->up->vars[0]);
 }
}
static void _V10_Dget__foreign__decoder_D212_lambda94(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dget__foreign__decoder_D212_lambda94" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dget__foreign__decoder_D212_lambda94, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dget__foreign__decoder_D212_k476) (close _V10_Dget__foreign__decoder_D212_k480))
    V_CALL_FUNC(_V10_Dget__foreign__decoder_D212_k476, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dget__foreign__decoder_D212_k480, env)}));
 }
}
static void _V10_Dget__foreign__decoder_D212_k475(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dget__foreign__decoder_D212_k475" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D212_k475, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dget__foreign__decoder_D212_k475, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dget__foreign__decoder_D212_lambda94) (bruijn ##.input.137.482 2 0))
    V_CALL_FUNC(_V10_Dget__foreign__decoder_D212_lambda94, env, runtime,
      upenv->up->vars[0]);
 }
}
static void _V10_Dget__foreign__decoder_D212_k473(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dget__foreign__decoder_D212_k473" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D212_k473, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dget__foreign__decoder_D212_k473, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dget__foreign__decoder_D212_k474) (close _V10_Dget__foreign__decoder_D212_k475))
    V_CALL_FUNC(_V10_Dget__foreign__decoder_D212_k474, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dget__foreign__decoder_D212_k475, env)}));
 }
}
static void _V10_Dget__foreign__decoder_D212_k472(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dget__foreign__decoder_D212_k472" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D212_k472, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dget__foreign__decoder_D212_k472, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.equal?.194 6 39) (close _V10_Dget__foreign__decoder_D212_k473) 'char (bruijn ##.input.137.482 0 0))
    V_CALL(VGetArg(upenv, 6-1, 39), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dget__foreign__decoder_D212_k473, env)}),
      _V0char,
      _var0);
 }
}
static void _V10_Dget__foreign__decoder_D212_lambda93(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V10_Dget__foreign__decoder_D212_lambda93" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D212_lambda93, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dget__foreign__decoder_D212_lambda93, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##.cadr.180 5 25) (close _V10_Dget__foreign__decoder_D212_k472) (bruijn ##.type.480 3 1))
    V_CALL(VGetArg(upenv, 5-1, 25), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dget__foreign__decoder_D212_k472, env)}),
      upenv->up->up->vars[1]);
 }
}
static void _V10_Dget__foreign__decoder_D212_k471(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dget__foreign__decoder_D212_k471" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D212_k471, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dget__foreign__decoder_D212_k471, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1290 0 0) ((bruijn ##.call/cc.192 4 37) (bruijn ##.k.1289 2 0) (close _V10_Dget__foreign__decoder_D212_lambda93)) ((bruijn ##.assv.181 4 26) (bruijn ##.k.1289 2 0) (bruijn ##.type.480 2 1) (##inline ##vcore.qcons (##inline ##vcore.qcons '_Bool '(##string ##.string.1492)) (##inline ##vcore.qcons (##inline ##vcore.qcons 'char '(##string ##.string.1493)) (##inline ##vcore.qcons (##inline ##vcore.qcons 'signed-char '(##string ##.string.1494)) (##inline ##vcore.qcons (##inline ##vcore.qcons 'unsigned-char '(##string ##.string.1495)) (##inline ##vcore.qcons (##inline ##vcore.qcons 'short '(##string ##.string.1496)) (##inline ##vcore.qcons (##inline ##vcore.qcons 'unsigned-short '(##string ##.string.1497)) (##inline ##vcore.qcons (##inline ##vcore.qcons 'int '(##string ##.string.1498)) (##inline ##vcore.qcons (##inline ##vcore.qcons 'unsigned-int '(##string ##.string.1498)) (##inline ##vcore.qcons (##inline ##vcore.qcons 'long '(##string ##.string.1498)) (##inline ##vcore.qcons (##inline ##vcore.qcons 'unsigned-long '(##string ##.string.1498)) (##inline ##vcore.qcons (##inline ##vcore.qcons 'long-long '(##string ##.string.1498)) (##inline ##vcore.qcons (##inline ##vcore.qcons 'unsigned-long-long '(##string ##.string.1498)) (##inline ##vcore.qcons (##inline ##vcore.qcons 'double '(##string ##.string.1499)) (##inline ##vcore.qcons (##inline ##vcore.qcons 'float '(##string ##.string.1499)) (##inline ##vcore.qcons (##inline ##vcore.qcons 'VWORD '(##string ##.string.1500)) (##inline ##vcore.qcons (##inline ##vcore.qcons 'c-string '(##string ##.string.1487)) '()))))))))))))))))))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->up->up->up->vars[37], runtime,
      upenv->up->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dget__foreign__decoder_D212_lambda93, env)}));
} else {
    V_CALL(upenv->up->up->up->vars[26], runtime,
      upenv->up->vars[0],
      upenv->up->vars[1],
      VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0_UBool,
        VEncodePointer(&_V10_Dstring_D1492.sym, VPOINTER_OTHER)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0char,
        VEncodePointer(&_V10_Dstring_D1493.sym, VPOINTER_OTHER)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0signed__char,
        VEncodePointer(&_V10_Dstring_D1494.sym, VPOINTER_OTHER)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0unsigned__char,
        VEncodePointer(&_V10_Dstring_D1495.sym, VPOINTER_OTHER)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0short,
        VEncodePointer(&_V10_Dstring_D1496.sym, VPOINTER_OTHER)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0unsigned__short,
        VEncodePointer(&_V10_Dstring_D1497.sym, VPOINTER_OTHER)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0int,
        VEncodePointer(&_V10_Dstring_D1498.sym, VPOINTER_OTHER)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0unsigned__int,
        VEncodePointer(&_V10_Dstring_D1498.sym, VPOINTER_OTHER)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0long,
        VEncodePointer(&_V10_Dstring_D1498.sym, VPOINTER_OTHER)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0unsigned__long,
        VEncodePointer(&_V10_Dstring_D1498.sym, VPOINTER_OTHER)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0long__long,
        VEncodePointer(&_V10_Dstring_D1498.sym, VPOINTER_OTHER)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0unsigned__long__long,
        VEncodePointer(&_V10_Dstring_D1498.sym, VPOINTER_OTHER)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0double,
        VEncodePointer(&_V10_Dstring_D1499.sym, VPOINTER_OTHER)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0float,
        VEncodePointer(&_V10_Dstring_D1499.sym, VPOINTER_OTHER)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0VWORD,
        VEncodePointer(&_V10_Dstring_D1500.sym, VPOINTER_OTHER)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0c__string,
        VEncodePointer(&_V10_Dstring_D1487.sym, VPOINTER_OTHER)),
        VNULL)))))))))))))))));
}
 }
}
static void _V10_Dget__foreign__decoder_D212_k468(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dget__foreign__decoder_D212_k468" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D212_k468, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dget__foreign__decoder_D212_k468, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dget__foreign__decoder_D212_k469) (close _V10_Dget__foreign__decoder_D212_k471))
    V_CALL_FUNC(_V10_Dget__foreign__decoder_D212_k469, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dget__foreign__decoder_D212_k471, env)}));
 }
}
static void _V10_Dget__foreign__decoder_D212_lambda92(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V10_Dget__foreign__decoder_D212_lambda92" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dget__foreign__decoder_D212_lambda92, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dget__foreign__decoder_D212_lambda92, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##.pair?.189 2 34) (close _V10_Dget__foreign__decoder_D212_k468) (bruijn ##.type.480 0 1))
    V_CALL(upenv->up->vars[34], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dget__foreign__decoder_D212_k468, env)}),
      _var1);
 }
}
static void _V10_Dloop_D501_k498(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D501_k498" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D501_k498, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D501_k498, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.kk.151.500 4 1) (bruijn ##.k.1379 1 0) (bruijn ##.expr.153.502 2 1) (bruijn ##.x.1380 0 0))
    V_CALL(upenv->up->up->up->vars[1], runtime,
      upenv->vars[0],
      upenv->up->vars[1],
      _var0);
 }
}
static void _V10_Dloop_D501_k497(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D501_k497" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D501_k497, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D501_k497, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.not (##inline ##vcore.pair? (bruijn ##.expr.153.502 1 1))) ((bruijn ##.reverse.193 18 38) (close _V10_Dloop_D501_k498) (bruijn ##.args.150.503 1 2)) ((bruijn ##.k.1379 0 0) #f))
if(VDecodeBool(
VInlineNot2(runtime,
        VInlinePairP2(runtime,
        upenv->vars[1])))) {
    V_CALL(VGetArg(upenv, 18-1, 38), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D501_k498, env)}),
      upenv->vars[2]);
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dloop_D501_k501(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D501_k501" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D501_k501, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D501_k501, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.kk.151.500 7 1) (bruijn ##.k.1373 2 0) (bruijn ##.expr.153.502 5 1) (bruijn ##.x.1375 0 0))
    V_CALL(VGetArg(upenv, 7-1, 1), runtime,
      upenv->up->vars[0],
      VGetArg(upenv, 5-1, 1),
      _var0);
 }
}
static void _V10_Dloop_D501_k500(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D501_k500" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D501_k500, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D501_k500, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.reverse.193 21 38) (close _V10_Dloop_D501_k501) (bruijn ##.args.150.503 4 2))
    V_CALL(VGetArg(upenv, 21-1, 38), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D501_k501, env)}),
      upenv->up->up->up->vars[2]);
 }
}
static void _V10_Dloop_D501_lambda104(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V10_Dloop_D501_lambda104" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D501_lambda104, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D501_lambda104, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##.kk.152.504 0 1) (close _V10_Dloop_D501_k500) (##inline ##vcore.cdr (bruijn ##.expr.153.502 3 1)) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.153.502 3 1)) (bruijn ##.args.150.503 3 2)))
    V_CALL(_var1, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D501_k500, env)}),
      VInlineCdr2(runtime,
        upenv->up->up->vars[1]),
      VInlineCons2(runtime,
        VInlineCar2(runtime,
        upenv->up->up->vars[1]),
        upenv->up->up->vars[2]));
 }
}
static void _V10_Dloop_D501_lambda103(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D501_lambda103" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D501_lambda103, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D501_lambda103, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.call/cc.192 19 37) (bruijn ##.k.1372 0 0) (close _V10_Dloop_D501_lambda104))
    V_CALL(VGetArg(upenv, 19-1, 37), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D501_lambda104, env)}));
 }
}
static void _V10_Dloop_D501_k499(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D501_k499" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D501_k499, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D501_k499, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.call-with-values.191 18 36) (bruijn ##.k.1370 1 0) (close _V10_Dloop_D501_lambda103) (bruijn ##.loop.501 2 0))
    V_CALL(VGetArg(upenv, 18-1, 36), runtime,
      upenv->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D501_lambda103, env)}),
      upenv->up->vars[0]);
 }
}
static void _V10_Dloop_D501_lambda102(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V10_Dloop_D501_lambda102" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D501_lambda102, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D501_lambda102, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((close _V10_Dloop_D501_k497) (close _V10_Dloop_D501_k499))
    V_CALL_FUNC(_V10_Dloop_D501_k497, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D501_k499, env)}));
 }
}
static void _V10_Dprint__foreign__function_D213_lambda101(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V10_Dprint__foreign__function_D213_lambda101" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__foreign__function_D213_lambda101, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dprint__foreign__function_D213_lambda101, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (letrec 1 ((close _V10_Dloop_D501_lambda102)) ((bruijn ##.loop.501 0 0) (bruijn ##.k.1369 1 0) (##inline ##vcore.cdr (bruijn ##.expr.148.497 4 0)) '()))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D501_lambda102, env)});
    V_CALL(env->vars[0], runtime,
      upenv->vars[0],
      VInlineCdr2(runtime,
        upenv->up->up->up->vars[0]),
      VNULL);
    }
 }
}
static void _V10_Dprint__foreign__function_D213_lambda100(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dprint__foreign__function_D213_lambda100" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__foreign__function_D213_lambda100, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dprint__foreign__function_D213_lambda100, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.call/cc.192 14 37) (bruijn ##.k.1368 0 0) (close _V10_Dprint__foreign__function_D213_lambda101))
    V_CALL(VGetArg(upenv, 14-1, 37), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__foreign__function_D213_lambda101, env)}));
 }
}
static void _V10_Dprint__arg_D510_k506(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dprint__arg_D510_k506" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__arg_D510_k506, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dprint__arg_D510_k506, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.printf.184 22 29) (bruijn ##.k.1387 2 0) (##string ##.string.1501) (bruijn ##.x.1388 0 0) (bruijn ##.argname.512 2 2) (bruijn ##.name.498 9 0))
    V_CALL(VGetArg(upenv, 22-1, 29), runtime,
      upenv->up->vars[0],
      VEncodePointer(&_V10_Dstring_D1501.sym, VPOINTER_OTHER),
      _var0,
      upenv->up->vars[2],
      VGetArg(upenv, 9-1, 0));
 }
}
static void _V10_Dprint__arg_D510_k505(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dprint__arg_D510_k505" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__arg_D510_k505, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dprint__arg_D510_k505, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cdr.186 21 31) (close _V10_Dprint__arg_D510_k506) (bruijn ##.x.1389 0 0))
    V_CALL(VGetArg(upenv, 21-1, 31), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__arg_D510_k506, env)}),
      _var0);
 }
}
static void _V10_Dprint__arg_D510_lambda107(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V10_Dprint__arg_D510_lambda107" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__arg_D510_lambda107, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dprint__arg_D510_lambda107, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn ##.get-foreign-decoder.212 19 16) (close _V10_Dprint__arg_D510_k505) (bruijn ##.arg.511 0 1))
    V_CALL(VGetArg(upenv, 19-1, 16), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__arg_D510_k505, env)}),
      _var1);
 }
}
static void _V10_Dprint__foreign__function_D213_k524(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dprint__foreign__function_D213_k524" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__foreign__function_D213_k524, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dprint__foreign__function_D213_k524, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.printf.184 37 29) (bruijn ##.k.1414 2 0) (##string ##.string.1503) (bruijn ##.x.1415 0 0) (bruijn ##.name.498 24 0))
    V_CALL(VGetArg(upenv, 37-1, 29), runtime,
      upenv->up->vars[0],
      VEncodePointer(&_V10_Dstring_D1503.sym, VPOINTER_OTHER),
      _var0,
      VGetArg(upenv, 24-1, 0));
 }
}
static void _V10_Dprint__foreign__function_D213_k523(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dprint__foreign__function_D213_k523" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__foreign__function_D213_k523, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dprint__foreign__function_D213_k523, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cdr.186 36 31) (close _V10_Dprint__foreign__function_D213_k524) (bruijn ##.x.1416 0 0))
    V_CALL(VGetArg(upenv, 36-1, 31), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__foreign__function_D213_k524, env)}),
      _var0);
 }
}
static void _V10_Dprint__foreign__function_D213_k522(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dprint__foreign__function_D213_k522" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__foreign__function_D213_k522, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dprint__foreign__function_D213_k522, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1413 1 0) ((bruijn ##.printf.184 35 29) (bruijn ##.k.1414 0 0) (##string ##.string.1502) (bruijn ##.name.498 22 0)) ((bruijn ##.get-foreign-encoder.211 34 15) (close _V10_Dprint__foreign__function_D213_k523) (bruijn ##.ret.496 24 0)))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(VGetArg(upenv, 35-1, 29), runtime,
      _var0,
      VEncodePointer(&_V10_Dstring_D1502.sym, VPOINTER_OTHER),
      VGetArg(upenv, 22-1, 0));
} else {
    V_CALL(VGetArg(upenv, 34-1, 15), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__foreign__function_D213_k523, env)}),
      VGetArg(upenv, 24-1, 0));
}
 }
}
static void _V10_Dprint__foreign__function_D213_k533(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dprint__foreign__function_D213_k533" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__foreign__function_D213_k533, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dprint__foreign__function_D213_k533, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.print-arg.510 25 0) (bruijn ##.k.1407 1 0) (bruijn ##.arg.515 1 1) (bruijn ##.argname.516 1 2))
    V_CALL(VGetArg(upenv, 25-1, 0), runtime,
      upenv->vars[0],
      upenv->vars[1],
      upenv->vars[2]);
 }
}
static void _V10_Dprint__foreign__function_D213_lambda108(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V10_Dprint__foreign__function_D213_lambda108" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__foreign__function_D213_lambda108, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dprint__foreign__function_D213_lambda108, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn ##.printf.184 43 29) (close _V10_Dprint__foreign__function_D213_k533) (##string ##.string.1504))
    V_CALL(VGetArg(upenv, 43-1, 29), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__foreign__function_D213_k533, env)}),
      VEncodePointer(&_V10_Dstring_D1504.sym, VPOINTER_OTHER));
 }
}
static void _V10_Dprint__foreign__function_D213_k532(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dprint__foreign__function_D213_k532" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__foreign__function_D213_k532, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dprint__foreign__function_D213_k532, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.for-each.187 42 32) (bruijn ##.k.1405 5 0) (close _V10_Dprint__foreign__function_D213_lambda108) (bruijn ##.x.1409 1 0) (bruijn ##.x.1410 0 0))
    V_CALL(VGetArg(upenv, 42-1, 32), runtime,
      VGetArg(upenv, 5-1, 0),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__foreign__function_D213_lambda108, env)}),
      upenv->vars[0],
      _var0);
 }
}
static void _V10_Dprint__foreign__function_D213_k531(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dprint__foreign__function_D213_k531" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__foreign__function_D213_k531, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dprint__foreign__function_D213_k531, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cdr.186 41 31) (close _V10_Dprint__foreign__function_D213_k532) (bruijn ##.names.509 23 1))
    V_CALL(VGetArg(upenv, 41-1, 31), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__foreign__function_D213_k532, env)}),
      VGetArg(upenv, 23-1, 1));
 }
}
static void _V10_Dprint__foreign__function_D213_k530(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dprint__foreign__function_D213_k530" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__foreign__function_D213_k530, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dprint__foreign__function_D213_k530, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cdr.186 40 31) (close _V10_Dprint__foreign__function_D213_k531) (bruijn ##.args.507 26 2))
    V_CALL(VGetArg(upenv, 40-1, 31), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__foreign__function_D213_k531, env)}),
      VGetArg(upenv, 26-1, 2));
 }
}
static void _V10_Dprint__foreign__function_D213_k529(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dprint__foreign__function_D213_k529" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__foreign__function_D213_k529, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dprint__foreign__function_D213_k529, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.print-arg.510 20 0) (close _V10_Dprint__foreign__function_D213_k530) (bruijn ##.x.1411 1 0) (bruijn ##.x.1412 0 0))
    V_CALL(VGetArg(upenv, 20-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__foreign__function_D213_k530, env)}),
      upenv->vars[0],
      _var0);
 }
}
static void _V10_Dprint__foreign__function_D213_k528(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dprint__foreign__function_D213_k528" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__foreign__function_D213_k528, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dprint__foreign__function_D213_k528, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.car.188 38 33) (close _V10_Dprint__foreign__function_D213_k529) (bruijn ##.names.509 20 1))
    V_CALL(VGetArg(upenv, 38-1, 33), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__foreign__function_D213_k529, env)}),
      VGetArg(upenv, 20-1, 1));
 }
}
static void _V10_Dprint__foreign__function_D213_k527(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dprint__foreign__function_D213_k527" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__foreign__function_D213_k527, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dprint__foreign__function_D213_k527, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1404 1 0) ((bruijn ##.car.188 37 33) (close _V10_Dprint__foreign__function_D213_k528) (bruijn ##.args.507 23 2)) ((bruijn ##.k.1405 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(VGetArg(upenv, 37-1, 33), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__foreign__function_D213_k528, env)}),
      VGetArg(upenv, 23-1, 2));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dprint__foreign__function_D213_k537(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dprint__foreign__function_D213_k537" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__foreign__function_D213_k537, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dprint__foreign__function_D213_k537, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##.p.1402 1 0) ((bruijn ##.printf.184 40 29) (bruijn ##.k.1403 0 0) (##string ##.string.1505)) ((bruijn ##.printf.184 40 29) (bruijn ##.k.1403 0 0) (##string ##.string.1506)))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(VGetArg(upenv, 40-1, 29), runtime,
      _var0,
      VEncodePointer(&_V10_Dstring_D1505.sym, VPOINTER_OTHER));
} else {
    V_CALL(VGetArg(upenv, 40-1, 29), runtime,
      _var0,
      VEncodePointer(&_V10_Dstring_D1506.sym, VPOINTER_OTHER));
}
 }
}
static void _V10_Dprint__foreign__function_D213_k539(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dprint__foreign__function_D213_k539" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__foreign__function_D213_k539, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dprint__foreign__function_D213_k539, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.kk.142.488 38 1) (bruijn ##.k.1382 27 0) (bruijn ##.x.1384 0 0))
    V_CALL(VGetArg(upenv, 38-1, 1), runtime,
      VGetArg(upenv, 27-1, 0),
      _var0);
 }
}
static void _V10_Dprint__foreign__function_D213_k538(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dprint__foreign__function_D213_k538" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__foreign__function_D213_k538, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dprint__foreign__function_D213_k538, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.printf.184 40 29) (close _V10_Dprint__foreign__function_D213_k539) (##string ##.string.1507))
    V_CALL(VGetArg(upenv, 40-1, 29), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__foreign__function_D213_k539, env)}),
      VEncodePointer(&_V10_Dstring_D1507.sym, VPOINTER_OTHER));
 }
}
static void _V10_Dprint__foreign__function_D213_k536(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dprint__foreign__function_D213_k536" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__foreign__function_D213_k536, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dprint__foreign__function_D213_k536, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dprint__foreign__function_D213_k537) (close _V10_Dprint__foreign__function_D213_k538))
    V_CALL_FUNC(_V10_Dprint__foreign__function_D213_k537, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__foreign__function_D213_k538, env)}));
 }
}
static void _V10_Dprint__foreign__function_D213_k535(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dprint__foreign__function_D213_k535" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__foreign__function_D213_k535, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dprint__foreign__function_D213_k535, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.eqv?.185 38 30) (close _V10_Dprint__foreign__function_D213_k536) (bruijn ##.ret.496 27 0) 'void)
    V_CALL(VGetArg(upenv, 38-1, 30), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__foreign__function_D213_k536, env)}),
      VGetArg(upenv, 27-1, 0),
      _V0void);
 }
}
static void _V10_Dprint__foreign__function_D213_k534(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dprint__foreign__function_D213_k534" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__foreign__function_D213_k534, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dprint__foreign__function_D213_k534, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.printf.184 37 29) (close _V10_Dprint__foreign__function_D213_k535) (##string ##.string.1508))
    V_CALL(VGetArg(upenv, 37-1, 29), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__foreign__function_D213_k535, env)}),
      VEncodePointer(&_V10_Dstring_D1508.sym, VPOINTER_OTHER));
 }
}
static void _V10_Dprint__foreign__function_D213_k526(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dprint__foreign__function_D213_k526" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__foreign__function_D213_k526, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dprint__foreign__function_D213_k526, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dprint__foreign__function_D213_k527) (close _V10_Dprint__foreign__function_D213_k534))
    V_CALL_FUNC(_V10_Dprint__foreign__function_D213_k527, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__foreign__function_D213_k534, env)}));
 }
}
static void _V10_Dprint__foreign__function_D213_k525(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dprint__foreign__function_D213_k525" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__foreign__function_D213_k525, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dprint__foreign__function_D213_k525, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.pair?.189 35 34) (close _V10_Dprint__foreign__function_D213_k526) (bruijn ##.args.507 21 2))
    V_CALL(VGetArg(upenv, 35-1, 34), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__foreign__function_D213_k526, env)}),
      VGetArg(upenv, 21-1, 2));
 }
}
static void _V10_Dprint__foreign__function_D213_k521(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dprint__foreign__function_D213_k521" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__foreign__function_D213_k521, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dprint__foreign__function_D213_k521, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dprint__foreign__function_D213_k522) (close _V10_Dprint__foreign__function_D213_k525))
    V_CALL_FUNC(_V10_Dprint__foreign__function_D213_k522, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__foreign__function_D213_k525, env)}));
 }
}
static void _V10_Dprint__foreign__function_D213_k520(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dprint__foreign__function_D213_k520" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__foreign__function_D213_k520, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dprint__foreign__function_D213_k520, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.eqv?.185 33 30) (close _V10_Dprint__foreign__function_D213_k521) (bruijn ##.ret.496 22 0) 'void)
    V_CALL(VGetArg(upenv, 33-1, 30), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__foreign__function_D213_k521, env)}),
      VGetArg(upenv, 22-1, 0),
      _V0void);
 }
}
static void _V10_Dprint__foreign__function_D213_k519(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dprint__foreign__function_D213_k519" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__foreign__function_D213_k519, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dprint__foreign__function_D213_k519, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.printf.184 32 29) (close _V10_Dprint__foreign__function_D213_k520) (##string ##.string.1509))
    V_CALL(VGetArg(upenv, 32-1, 29), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__foreign__function_D213_k520, env)}),
      VEncodePointer(&_V10_Dstring_D1509.sym, VPOINTER_OTHER));
 }
}
static void _V10_Dprint__foreign__function_D213_lambda109(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V10_Dprint__foreign__function_D213_lambda109" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__foreign__function_D213_lambda109, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dprint__foreign__function_D213_lambda109, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##.printf.184 32 29) (bruijn ##.k.1417 0 0) (##string ##.string.1510) (bruijn ##.e.514 0 1))
    V_CALL(VGetArg(upenv, 32-1, 29), runtime,
      _var0,
      VEncodePointer(&_V10_Dstring_D1510.sym, VPOINTER_OTHER),
      _var1);
 }
}
static void _V10_Dprint__foreign__function_D213_k518(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dprint__foreign__function_D213_k518" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__foreign__function_D213_k518, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dprint__foreign__function_D213_k518, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.for-each.187 31 32) (close _V10_Dprint__foreign__function_D213_k519) (close _V10_Dprint__foreign__function_D213_lambda109) (bruijn ##.names.509 13 1))
    V_CALL(VGetArg(upenv, 31-1, 32), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__foreign__function_D213_k519, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__foreign__function_D213_lambda109, env)}),
      VGetArg(upenv, 13-1, 1));
 }
}
static void _V10_Dprint__foreign__function_D213_k517(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dprint__foreign__function_D213_k517" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__foreign__function_D213_k517, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dprint__foreign__function_D213_k517, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.printf.184 30 29) (close _V10_Dprint__foreign__function_D213_k518) (##string ##.string.1511) (bruijn ##.mangled.508 12 0) (bruijn ##.x.1418 2 0) (bruijn ##.x.1419 0 0))
    V_CALL(VGetArg(upenv, 30-1, 29), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__foreign__function_D213_k518, env)}),
      VEncodePointer(&_V10_Dstring_D1511.sym, VPOINTER_OTHER),
      VGetArg(upenv, 12-1, 0),
      upenv->up->vars[0],
      _var0);
 }
}
static void _V10_Dprint__foreign__function_D213_k516(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dprint__foreign__function_D213_k516" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__foreign__function_D213_k516, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dprint__foreign__function_D213_k516, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.+.190 29 35) (close _V10_Dprint__foreign__function_D213_k517) 1 (bruijn ##.x.1420 0 0))
    V_CALL(VGetArg(upenv, 29-1, 35), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__foreign__function_D213_k517, env)}),
      VEncodeInt(1l),
      _var0);
 }
}
static void _V10_Dprint__foreign__function_D213_k515(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dprint__foreign__function_D213_k515" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__foreign__function_D213_k515, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dprint__foreign__function_D213_k515, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.length.183 28 28) (close _V10_Dprint__foreign__function_D213_k516) (bruijn ##.args.507 14 2))
    V_CALL(VGetArg(upenv, 28-1, 28), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__foreign__function_D213_k516, env)}),
      VGetArg(upenv, 14-1, 2));
 }
}
static void _V10_Dprint__foreign__function_D213_k514(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dprint__foreign__function_D213_k514" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__foreign__function_D213_k514, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dprint__foreign__function_D213_k514, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.+.190 27 35) (close _V10_Dprint__foreign__function_D213_k515) 1 (bruijn ##.x.1421 0 0))
    V_CALL(VGetArg(upenv, 27-1, 35), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__foreign__function_D213_k515, env)}),
      VEncodeInt(1l),
      _var0);
 }
}
static void _V10_Dprint__foreign__function_D213_k513(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dprint__foreign__function_D213_k513" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__foreign__function_D213_k513, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dprint__foreign__function_D213_k513, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.length.183 26 28) (close _V10_Dprint__foreign__function_D213_k514) (bruijn ##.args.507 12 2))
    V_CALL(VGetArg(upenv, 26-1, 28), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__foreign__function_D213_k514, env)}),
      VGetArg(upenv, 12-1, 2));
 }
}
static void _V10_Dprint__foreign__function_D213_k512(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dprint__foreign__function_D213_k512" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__foreign__function_D213_k512, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dprint__foreign__function_D213_k512, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.printf.184 25 29) (close _V10_Dprint__foreign__function_D213_k513) (##string ##.string.1512) (bruijn ##.mangled.508 7 0) (bruijn ##.x.1422 0 0))
    V_CALL(VGetArg(upenv, 25-1, 29), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__foreign__function_D213_k513, env)}),
      VEncodePointer(&_V10_Dstring_D1512.sym, VPOINTER_OTHER),
      VGetArg(upenv, 7-1, 0),
      _var0);
 }
}
static void _V10_Dprint__foreign__function_D213_k511(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dprint__foreign__function_D213_k511" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__foreign__function_D213_k511, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dprint__foreign__function_D213_k511, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.+.190 24 35) (close _V10_Dprint__foreign__function_D213_k512) 1 (bruijn ##.x.1423 0 0))
    V_CALL(VGetArg(upenv, 24-1, 35), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__foreign__function_D213_k512, env)}),
      VEncodeInt(1l),
      _var0);
 }
}
static void _V10_Dprint__foreign__function_D213_k510(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dprint__foreign__function_D213_k510" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__foreign__function_D213_k510, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dprint__foreign__function_D213_k510, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.length.183 23 28) (close _V10_Dprint__foreign__function_D213_k511) (bruijn ##.args.507 9 2))
    V_CALL(VGetArg(upenv, 23-1, 28), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__foreign__function_D213_k511, env)}),
      VGetArg(upenv, 9-1, 2));
 }
}
static void _V10_Dprint__foreign__function_D213_k509(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dprint__foreign__function_D213_k509" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__foreign__function_D213_k509, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dprint__foreign__function_D213_k509, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.printf.184 22 29) (close _V10_Dprint__foreign__function_D213_k510) (##string ##.string.1509))
    V_CALL(VGetArg(upenv, 22-1, 29), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__foreign__function_D213_k510, env)}),
      VEncodePointer(&_V10_Dstring_D1509.sym, VPOINTER_OTHER));
 }
}
static void _V10_Dprint__foreign__function_D213_lambda110(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V10_Dprint__foreign__function_D213_lambda110" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__foreign__function_D213_lambda110, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dprint__foreign__function_D213_lambda110, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##.printf.184 22 29) (bruijn ##.k.1424 0 0) (##string ##.string.1513) (bruijn ##.e.513 0 1))
    V_CALL(VGetArg(upenv, 22-1, 29), runtime,
      _var0,
      VEncodePointer(&_V10_Dstring_D1513.sym, VPOINTER_OTHER),
      _var1);
 }
}
static void _V10_Dprint__foreign__function_D213_k508(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dprint__foreign__function_D213_k508" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__foreign__function_D213_k508, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dprint__foreign__function_D213_k508, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.for-each.187 21 32) (close _V10_Dprint__foreign__function_D213_k509) (close _V10_Dprint__foreign__function_D213_lambda110) (bruijn ##.names.509 3 1))
    V_CALL(VGetArg(upenv, 21-1, 32), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__foreign__function_D213_k509, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__foreign__function_D213_lambda110, env)}),
      upenv->up->up->vars[1]);
 }
}
static void _V10_Dprint__foreign__function_D213_k507(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dprint__foreign__function_D213_k507" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__foreign__function_D213_k507, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dprint__foreign__function_D213_k507, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.printf.184 20 29) (close _V10_Dprint__foreign__function_D213_k508) (##string ##.string.1514) (bruijn ##.name.498 7 0))
    V_CALL(VGetArg(upenv, 20-1, 29), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__foreign__function_D213_k508, env)}),
      VEncodePointer(&_V10_Dstring_D1514.sym, VPOINTER_OTHER),
      VGetArg(upenv, 7-1, 0));
 }
}
static void _V10_Dprint__foreign__function_D213_lambda106(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V10_Dprint__foreign__function_D213_lambda106" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dprint__foreign__function_D213_lambda106, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (letrec 1 ((close _V10_Dprint__arg_D510_lambda107)) ((bruijn ##.printf.184 19 29) (close _V10_Dprint__foreign__function_D213_k507) (##string ##.string.1515) (##inline ##vcore.car (bruijn ##.expr.146.493 10 0))))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__arg_D510_lambda107, env)});
    V_CALL(VGetArg(upenv, 19-1, 29), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__foreign__function_D213_k507, env)}),
      VEncodePointer(&_V10_Dstring_D1515.sym, VPOINTER_OTHER),
      VInlineCar2(runtime,
        VGetArg(upenv, 10-1, 0)));
    }
 }
}
static void _V10_Dprint__foreign__function_D213_k504(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dprint__foreign__function_D213_k504" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__foreign__function_D213_k504, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dprint__foreign__function_D213_k504, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dprint__foreign__function_D213_lambda106) (bruijn ##.x.1385 2 0) (bruijn ##.x.1386 0 0))
    V_CALL_FUNC(_V10_Dprint__foreign__function_D213_lambda106, env, runtime,
      upenv->up->vars[0],
      _var0);
 }
}
static void _V10_Dprint__foreign__function_D213_k503(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dprint__foreign__function_D213_k503" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__foreign__function_D213_k503, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dprint__foreign__function_D213_k503, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.iota.182 16 27) (close _V10_Dprint__foreign__function_D213_k504) (bruijn ##.x.1425 0 0))
    V_CALL(VGetArg(upenv, 16-1, 27), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__foreign__function_D213_k504, env)}),
      _var0);
 }
}
static void _V10_Dprint__foreign__function_D213_k502(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dprint__foreign__function_D213_k502" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__foreign__function_D213_k502, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dprint__foreign__function_D213_k502, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.length.183 15 28) (close _V10_Dprint__foreign__function_D213_k503) (bruijn ##.args.507 1 2))
    V_CALL(VGetArg(upenv, 15-1, 28), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__foreign__function_D213_k503, env)}),
      upenv->vars[2]);
 }
}
static void _V10_Dprint__foreign__function_D213_lambda105(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V10_Dprint__foreign__function_D213_lambda105" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__foreign__function_D213_lambda105, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dprint__foreign__function_D213_lambda105, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // (if (##inline ##vcore.null? (bruijn ##.tail-expr.506 0 1)) ((bruijn ##.mangle-foreign-function.210 13 14) (close _V10_Dprint__foreign__function_D213_k502) (bruijn ##.name.498 1 0)) ((bruijn ##.k.1382 0 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var1))) {
    V_CALL(VGetArg(upenv, 13-1, 14), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__foreign__function_D213_k502, env)}),
      upenv->vars[0]);
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dprint__foreign__function_D213_k496(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dprint__foreign__function_D213_k496" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__foreign__function_D213_k496, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dprint__foreign__function_D213_k496, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.call-with-values.191 13 36) (bruijn ##.k.1362 7 0) (close _V10_Dprint__foreign__function_D213_lambda100) (close _V10_Dprint__foreign__function_D213_lambda105))
    V_CALL(VGetArg(upenv, 13-1, 36), runtime,
      VGetArg(upenv, 7-1, 0),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__foreign__function_D213_lambda100, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__foreign__function_D213_lambda105, env)}));
 }
}
static void _V10_Dprint__foreign__function_D213_k495(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dprint__foreign__function_D213_k495" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__foreign__function_D213_k495, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dprint__foreign__function_D213_k495, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.148.497 0 0)) ((close _V10_Dprint__foreign__function_D213_k496) (##inline ##vcore.car (bruijn ##.expr.148.497 0 0))) ((bruijn ##.k.1362 6 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL_FUNC(_V10_Dprint__foreign__function_D213_k496, env, runtime,
      VInlineCar2(runtime,
        _var0));
} else {
    V_CALL(VGetArg(upenv, 6-1, 0), runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dprint__foreign__function_D213_k494(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dprint__foreign__function_D213_k494" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__foreign__function_D213_k494, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dprint__foreign__function_D213_k494, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dprint__foreign__function_D213_k495) (##inline ##vcore.cdr (bruijn ##.expr.147.495 1 0)))
    V_CALL_FUNC(_V10_Dprint__foreign__function_D213_k495, env, runtime,
      VInlineCdr2(runtime,
        upenv->vars[0]));
 }
}
static void _V10_Dprint__foreign__function_D213_k493(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dprint__foreign__function_D213_k493" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__foreign__function_D213_k493, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dprint__foreign__function_D213_k493, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.147.495 0 0)) ((close _V10_Dprint__foreign__function_D213_k494) (##inline ##vcore.car (bruijn ##.expr.147.495 0 0))) ((bruijn ##.k.1362 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL_FUNC(_V10_Dprint__foreign__function_D213_k494, env, runtime,
      VInlineCar2(runtime,
        _var0));
} else {
    V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dprint__foreign__function_D213_k492(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dprint__foreign__function_D213_k492" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__foreign__function_D213_k492, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dprint__foreign__function_D213_k492, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.146.493 0 0)) ((close _V10_Dprint__foreign__function_D213_k493) (##inline ##vcore.cdr (bruijn ##.expr.146.493 0 0))) ((bruijn ##.k.1362 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL_FUNC(_V10_Dprint__foreign__function_D213_k493, env, runtime,
      VInlineCdr2(runtime,
        _var0));
} else {
    V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dprint__foreign__function_D213_k491(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dprint__foreign__function_D213_k491" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__foreign__function_D213_k491, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dprint__foreign__function_D213_k491, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.145.491 0 0)) ((close _V10_Dprint__foreign__function_D213_k492) (##inline ##vcore.cdr (bruijn ##.expr.145.491 0 0))) ((bruijn ##.k.1362 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL_FUNC(_V10_Dprint__foreign__function_D213_k492, env, runtime,
      VInlineCdr2(runtime,
        _var0));
} else {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dprint__foreign__function_D213_k490(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dprint__foreign__function_D213_k490" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__foreign__function_D213_k490, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dprint__foreign__function_D213_k490, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1363 0 0) ((close _V10_Dprint__foreign__function_D213_k491) (##inline ##vcore.cdr (bruijn ##.expr.144.490 2 0))) ((bruijn ##.k.1362 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(_V10_Dprint__foreign__function_D213_k491, env, runtime,
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dprint__foreign__function_D213_k489(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dprint__foreign__function_D213_k489" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__foreign__function_D213_k489, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dprint__foreign__function_D213_k489, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.144.490 1 0)) ((bruijn ##.equal?.194 6 39) (close _V10_Dprint__foreign__function_D213_k490) '##foreign.function (##inline ##vcore.car (bruijn ##.expr.144.490 1 0))) ((bruijn ##.k.1362 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 6-1, 39), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__foreign__function_D213_k490, env)}),
      _V10foreign_Dfunction,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dprint__foreign__function_D213_k540(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dprint__foreign__function_D213_k540" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__foreign__function_D213_k540, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dprint__foreign__function_D213_k540, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.error.195 6 40) (bruijn ##.k.1359 3 0) (##string ##.string.1445))
    V_CALL(VGetArg(upenv, 6-1, 40), runtime,
      upenv->up->up->vars[0],
      VEncodePointer(&_V10_Dstring_D1445.sym, VPOINTER_OTHER));
 }
}
static void _V10_Dprint__foreign__function_D213_lambda99(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dprint__foreign__function_D213_lambda99" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dprint__foreign__function_D213_lambda99, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dprint__foreign__function_D213_k489) (close _V10_Dprint__foreign__function_D213_k540))
    V_CALL_FUNC(_V10_Dprint__foreign__function_D213_k489, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__foreign__function_D213_k540, env)}));
 }
}
static void _V10_Dprint__foreign__function_D213_lambda98(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dprint__foreign__function_D213_lambda98" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dprint__foreign__function_D213_lambda98, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dprint__foreign__function_D213_lambda99) (bruijn ##.input.143.489 0 0))
    V_CALL_FUNC(_V10_Dprint__foreign__function_D213_lambda99, env, runtime,
      _var0);
 }
}
static void _V10_Dprint__foreign__function_D213_lambda97(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V10_Dprint__foreign__function_D213_lambda97" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__foreign__function_D213_lambda97, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dprint__foreign__function_D213_lambda97, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V10_Dprint__foreign__function_D213_lambda98) (bruijn ##.expr.487 1 1))
    V_CALL_FUNC(_V10_Dprint__foreign__function_D213_lambda98, env, runtime,
      upenv->vars[1]);
 }
}
static void _V10_Dprint__foreign__function_D213_lambda96(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V10_Dprint__foreign__function_D213_lambda96" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__foreign__function_D213_lambda96, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dprint__foreign__function_D213_lambda96, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##.call/cc.192 2 37) (bruijn ##.k.1358 0 0) (close _V10_Dprint__foreign__function_D213_lambda97))
    V_CALL(upenv->up->vars[37], runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__foreign__function_D213_lambda97, env)}));
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_lambda2(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4, VWORD _var5, VWORD _var6, VWORD _var7, VWORD _var8, VWORD _var9, VWORD _var10, VWORD _var11, VWORD _var12, VWORD _var13, VWORD _var14, VWORD _var15, VWORD _var16, VWORD _var17, VWORD _var18, VWORD _var19, VWORD _var20, VWORD _var21, VWORD _var22, VWORD _var23, VWORD _var24, VWORD _var25, VWORD _var26, VWORD _var27, VWORD _var28, VWORD _var29, VWORD _var30, VWORD _var31, VWORD _var32, VWORD _var33, VWORD _var34, VWORD _var35, VWORD _var36, VWORD _var37, VWORD _var38, VWORD _var39, VWORD _var40) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_lambda2" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_lambda2, runtime, upenv, 41, argc, _var0, _var1, _var2, _var3, _var4, _var5, _var6, _var7, _var8, _var9, _var10, _var11, _var12, _var13, _var14, _var15, _var16, _var17, _var18, _var19, _var20, _var21, _var22, _var23, _var24, _var25, _var26, _var27, _var28, _var29, _var30, _var31, _var32, _var33, _var34, _var35, _var36, _var37, _var38, _var39, _var40) {
  struct { VEnv env; VWORD argv[41]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 41, 41, upenv);
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
  env->vars[32] = _var32;
  env->vars[33] = _var33;
  env->vars[34] = _var34;
  env->vars[35] = _var35;
  env->vars[36] = _var36;
  env->vars[37] = _var37;
  env->vars[38] = _var38;
  env->vars[39] = _var39;
  env->vars[40] = _var40;
  // (letrec 18 ((close _V10_Dreduce__declare_D196_lambda3) (close _V10_Dfind__typedef_D197_lambda22) (close _V10_Dreduce__type_D198_lambda24) (close _V10_Dunwrap__typedef_D199_lambda44) (close _V10_Dunwrap__function_D200_lambda48) (close _V10_Dunwrap__enums_D201_lambda53) (close _V10_Dunwrap__declares_D202_lambda56) (close _V10_Dtable___Gdefines_D203_lambda63) (close _V10_Ddeep__copy_D204_lambda72) (close _V10_Dvalidate__foreign__function_D205_lambda73) (close _V10_Dfind__file_D206_lambda83) (close _V10_Dget__install__root_D207_lambda84) (close _V10_Dmake__preprocess__command_D208_lambda85) (close _V10_Dresolve__foreign__import_D209_lambda86) (close _V10_Dmangle__foreign__function_D210_lambda90) (close _V10_Dget__foreign__encoder_D211_lambda91) (close _V10_Dget__foreign__decoder_D212_lambda92) (close _V10_Dprint__foreign__function_D213_lambda96)) ((bruijn ##.k.518 48 0) (##inline ##vcore.cons (##inline ##vcore.cons 'mangle-foreign-function (bruijn ##.mangle-foreign-function.210 0 14)) (##inline ##vcore.cons (##inline ##vcore.cons 'validate-foreign-function (bruijn ##.validate-foreign-function.205 0 9)) (##inline ##vcore.cons (##inline ##vcore.cons 'print-foreign-function (bruijn ##.print-foreign-function.213 0 17)) (##inline ##vcore.cons (##inline ##vcore.cons 'resolve-foreign-import (bruijn ##.resolve-foreign-import.209 0 13)) (##inline ##vcore.cons (##inline ##vcore.cons 'get-foreign-encoder (bruijn ##.get-foreign-encoder.211 0 15)) (##inline ##vcore.cons (##inline ##vcore.cons 'get-foreign-decoder (bruijn ##.get-foreign-decoder.212 0 16)) '()))))))))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[18]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 18, 18, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dreduce__declare_D196_lambda3, env)});
    env->vars[1] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dfind__typedef_D197_lambda22, env)});
    env->vars[2] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dreduce__type_D198_lambda24, env)});
    env->vars[3] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dunwrap__typedef_D199_lambda44, env)});
    env->vars[4] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dunwrap__function_D200_lambda48, env)});
    env->vars[5] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dunwrap__enums_D201_lambda53, env)});
    env->vars[6] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dunwrap__declares_D202_lambda56, env)});
    env->vars[7] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dtable___Gdefines_D203_lambda63, env)});
    env->vars[8] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddeep__copy_D204_lambda72, env)});
    env->vars[9] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dvalidate__foreign__function_D205_lambda73, env)});
    env->vars[10] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dfind__file_D206_lambda83, env)});
    env->vars[11] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dget__install__root_D207_lambda84, env)});
    env->vars[12] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmake__preprocess__command_D208_lambda85, env)});
    env->vars[13] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dresolve__foreign__import_D209_lambda86, env)});
    env->vars[14] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmangle__foreign__function_D210_lambda90, env)});
    env->vars[15] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dget__foreign__encoder_D211_lambda91, env)});
    env->vars[16] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dget__foreign__decoder_D212_lambda92, env)});
    env->vars[17] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__foreign__function_D213_lambda96, env)});
    V_CALL(VGetArg(upenv, 48-1, 0), runtime,
      VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0mangle__foreign__function,
        env->vars[14]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0validate__foreign__function,
        env->vars[9]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0print__foreign__function,
        env->vars[17]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0resolve__foreign__import,
        env->vars[13]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0get__foreign__encoder,
        env->vars[15]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0get__foreign__decoder,
        env->vars[16]),
        VNULL)))))));
    }
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k46(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k46" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k46, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k46, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0ffi_V20_lambda2) (bruijn ##.x.519 40 0) (bruijn ##.x.520 39 0) (bruijn ##.x.521 38 0) (bruijn ##.x.522 37 0) (bruijn ##.x.523 36 0) (bruijn ##.x.524 35 0) (bruijn ##.x.525 34 0) (bruijn ##.x.526 33 0) (bruijn ##.x.527 32 0) (bruijn ##.x.528 31 0) (bruijn ##.x.529 30 0) (bruijn ##.x.530 29 0) (bruijn ##.x.531 28 0) (bruijn ##.x.532 27 0) (bruijn ##.x.533 26 0) (bruijn ##.x.534 25 0) (bruijn ##.x.535 24 0) (bruijn ##.x.536 23 0) (bruijn ##.x.537 22 0) (bruijn ##.x.538 21 0) (bruijn ##.x.539 20 0) (bruijn ##.x.540 19 0) (bruijn ##.x.541 18 0) (bruijn ##.x.542 17 0) (bruijn ##.x.543 16 0) (bruijn ##.x.544 15 0) (bruijn ##.x.545 14 0) (bruijn ##.x.546 13 0) (bruijn ##.x.547 12 0) (bruijn ##.x.548 11 0) (bruijn ##.x.549 10 0) (bruijn ##.x.550 9 0) (bruijn ##.x.551 8 0) (bruijn ##.x.552 7 0) (bruijn ##.x.553 6 0) (bruijn ##.x.554 5 0) (bruijn ##.x.555 4 0) (bruijn ##.x.556 3 0) (bruijn ##.x.557 2 0) (bruijn ##.x.558 1 0) (bruijn ##.x.559 0 0))
    V_CALL_FUNC(_V0vanity_V0compiler_V0ffi_V20_lambda2, env, runtime,
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
static void _V0vanity_V0compiler_V0ffi_V20_k45(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k45" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k45, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k45, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.154 40 0) (close _V0vanity_V0compiler_V0ffi_V20_k46) 'error)
    V_CALL(VGetArg(upenv, 40-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k46, env)}),
      _V0error);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k44(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k44" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k44, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k44, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.154 39 0) (close _V0vanity_V0compiler_V0ffi_V20_k45) 'equal?)
    V_CALL(VGetArg(upenv, 39-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k45, env)}),
      _V0equal_Q);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k43(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k43" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k43, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k43, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.154 38 0) (close _V0vanity_V0compiler_V0ffi_V20_k44) 'reverse)
    V_CALL(VGetArg(upenv, 38-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k44, env)}),
      _V0reverse);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k42(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k42" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k42, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k42, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.154 37 0) (close _V0vanity_V0compiler_V0ffi_V20_k43) 'call/cc)
    V_CALL(VGetArg(upenv, 37-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k43, env)}),
      _V0call_Wcc);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k41(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k41" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k41, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k41, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.154 36 0) (close _V0vanity_V0compiler_V0ffi_V20_k42) 'call-with-values)
    V_CALL(VGetArg(upenv, 36-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k42, env)}),
      _V0call__with__values);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k40(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k40" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k40, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k40, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.154 35 0) (close _V0vanity_V0compiler_V0ffi_V20_k41) '+)
    V_CALL(VGetArg(upenv, 35-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k41, env)}),
      _V0_P);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k39(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k39" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k39, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k39, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.154 34 0) (close _V0vanity_V0compiler_V0ffi_V20_k40) 'pair?)
    V_CALL(VGetArg(upenv, 34-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k40, env)}),
      _V0pair_Q);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k38(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k38" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k38, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k38, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.154 33 0) (close _V0vanity_V0compiler_V0ffi_V20_k39) 'car)
    V_CALL(VGetArg(upenv, 33-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k39, env)}),
      _V0car);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k37(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k37" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k37, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k37, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.154 32 0) (close _V0vanity_V0compiler_V0ffi_V20_k38) 'for-each)
    V_CALL(VGetArg(upenv, 32-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k38, env)}),
      _V0for__each);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k36(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k36" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k36, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k36, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.154 31 0) (close _V0vanity_V0compiler_V0ffi_V20_k37) 'cdr)
    V_CALL(VGetArg(upenv, 31-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k37, env)}),
      _V0cdr);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k35(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k35" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k35, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k35, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.154 30 0) (close _V0vanity_V0compiler_V0ffi_V20_k36) 'eqv?)
    V_CALL(VGetArg(upenv, 30-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k36, env)}),
      _V0eqv_Q);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k34(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k34" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k34, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k34, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.154 29 0) (close _V0vanity_V0compiler_V0ffi_V20_k35) 'printf)
    V_CALL(VGetArg(upenv, 29-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k35, env)}),
      _V0printf);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k33(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k33" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k33, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k33, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.154 28 0) (close _V0vanity_V0compiler_V0ffi_V20_k34) 'length)
    V_CALL(VGetArg(upenv, 28-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k34, env)}),
      _V0length);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k32(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k32" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k32, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k32, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.154 27 0) (close _V0vanity_V0compiler_V0ffi_V20_k33) 'iota)
    V_CALL(VGetArg(upenv, 27-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k33, env)}),
      _V0iota);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k31(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k31" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k31, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k31, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.154 26 0) (close _V0vanity_V0compiler_V0ffi_V20_k32) 'assv)
    V_CALL(VGetArg(upenv, 26-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k32, env)}),
      _V0assv);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k30(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k30" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k30, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k30, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.154 25 0) (close _V0vanity_V0compiler_V0ffi_V20_k31) 'cadr)
    V_CALL(VGetArg(upenv, 25-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k31, env)}),
      _V0cadr);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k29(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k29" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k29, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k29, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.154 24 0) (close _V0vanity_V0compiler_V0ffi_V20_k30) 'sprintf)
    V_CALL(VGetArg(upenv, 24-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k30, env)}),
      _V0sprintf);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k28(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k28" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k28, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k28, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.154 23 0) (close _V0vanity_V0compiler_V0ffi_V20_k29) 'compiler-error)
    V_CALL(VGetArg(upenv, 23-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k29, env)}),
      _V0compiler__error);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k27(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k27" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k27, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k27, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.154 22 0) (close _V0vanity_V0compiler_V0ffi_V20_k28) 'string?)
    V_CALL(VGetArg(upenv, 22-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k28, env)}),
      _V0string_Q);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k26(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k26" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k26, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k26, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.154 21 0) (close _V0vanity_V0compiler_V0ffi_V20_k27) 'not)
    V_CALL(VGetArg(upenv, 21-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k27, env)}),
      _V0not);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k25(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k25" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k25, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k25, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.154 20 0) (close _V0vanity_V0compiler_V0ffi_V20_k26) 'close-port)
    V_CALL(VGetArg(upenv, 20-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k26, env)}),
      _V0close__port);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k24(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k24" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k24, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k24, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.154 19 0) (close _V0vanity_V0compiler_V0ffi_V20_k25) 'cons)
    V_CALL(VGetArg(upenv, 19-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k25, env)}),
      _V0cons);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k23(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k23" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k23, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k23, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.154 18 0) (close _V0vanity_V0compiler_V0ffi_V20_k24) 'open-input-process)
    V_CALL(VGetArg(upenv, 18-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k24, env)}),
      _V0open__input__process);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k22(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k22" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k22, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k22, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.154 17 0) (close _V0vanity_V0compiler_V0ffi_V20_k23) 'gcc-path)
    V_CALL(VGetArg(upenv, 17-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k23, env)}),
      _V0gcc__path);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k21(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k21" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k21, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k21, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.154 16 0) (close _V0vanity_V0compiler_V0ffi_V20_k22) 'install-root)
    V_CALL(VGetArg(upenv, 16-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k22, env)}),
      _V0install__root);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k20(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k20" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k20, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k20, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.154 15 0) (close _V0vanity_V0compiler_V0ffi_V20_k21) 'file-exists?)
    V_CALL(VGetArg(upenv, 15-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k21, env)}),
      _V0file__exists_Q);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k19(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k19" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k19, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k19, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.154 14 0) (close _V0vanity_V0compiler_V0ffi_V20_k20) 'null?)
    V_CALL(VGetArg(upenv, 14-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k20, env)}),
      _V0null_Q);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k18(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k18" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k18, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k18, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.154 13 0) (close _V0vanity_V0compiler_V0ffi_V20_k19) 'cdddr)
    V_CALL(VGetArg(upenv, 13-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k19, env)}),
      _V0cdddr);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k17(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k17" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k17, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k17, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.154 12 0) (close _V0vanity_V0compiler_V0ffi_V20_k18) 'caddr)
    V_CALL(VGetArg(upenv, 12-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k18, env)}),
      _V0caddr);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k16(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k16" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k16, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k16, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.154 11 0) (close _V0vanity_V0compiler_V0ffi_V20_k17) 'cdadr)
    V_CALL(VGetArg(upenv, 11-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k17, env)}),
      _V0cdadr);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k15(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k15" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k15, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k15, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.154 10 0) (close _V0vanity_V0compiler_V0ffi_V20_k16) 'string-copy)
    V_CALL(VGetArg(upenv, 10-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k16, env)}),
      _V0string__copy);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k14(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k14" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k14, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k14, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.154 9 0) (close _V0vanity_V0compiler_V0ffi_V20_k15) 'symbol->string)
    V_CALL(VGetArg(upenv, 9-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k15, env)}),
      _V0symbol___Gstring);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k13(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k13" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k13, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k13, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.154 8 0) (close _V0vanity_V0compiler_V0ffi_V20_k14) 'cadar)
    V_CALL(VGetArg(upenv, 8-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k14, env)}),
      _V0cadar);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k12(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k12" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k12, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k12, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.154 7 0) (close _V0vanity_V0compiler_V0ffi_V20_k13) 'member)
    V_CALL(VGetArg(upenv, 7-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k13, env)}),
      _V0member);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k11(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k11" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k11, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k11, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.154 6 0) (close _V0vanity_V0compiler_V0ffi_V20_k12) 'caddar)
    V_CALL(VGetArg(upenv, 6-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k12, env)}),
      _V0caddar);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k10(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k10" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k10, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k10, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.154 5 0) (close _V0vanity_V0compiler_V0ffi_V20_k11) 'caar)
    V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k11, env)}),
      _V0caar);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k9(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k9" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k9, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k9, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.154 4 0) (close _V0vanity_V0compiler_V0ffi_V20_k10) 'string->symbol)
    V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k10, env)}),
      _V0string___Gsymbol);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k8(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k8" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k8, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k8, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.154 3 0) (close _V0vanity_V0compiler_V0ffi_V20_k9) 'map)
    V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k9, env)}),
      _V0map);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k7(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k7" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k7, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k7, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.154 2 0) (close _V0vanity_V0compiler_V0ffi_V20_k8) 'list)
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k8, env)}),
      _V0list);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k6(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k6" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k6, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k6, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.154 1 0) (close _V0vanity_V0compiler_V0ffi_V20_k7) 'symbol?)
    V_CALL(upenv->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k7, env)}),
      _V0symbol_Q);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k5(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k5" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k5, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k5, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.154 0 0) (close _V0vanity_V0compiler_V0ffi_V20_k6) 'memv)
    V_CALL(_var0, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k6, env)}),
      _V0memv);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k4(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k4" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k4, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k4, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.make-import (close _V0vanity_V0compiler_V0ffi_V20_k5) (##string ##.string.1516) (bruijn ##.x.1438 3 0) (bruijn ##.x.1439 2 0) (bruijn ##.x.1440 1 0) (bruijn ##.x.1441 0 0))
    V_CALL_FUNC(VMakeImport2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k5, env)}),
      VEncodePointer(&_V10_Dstring_D1516.sym, VPOINTER_OTHER),
      upenv->up->up->vars[0],
      upenv->up->vars[0],
      upenv->vars[0],
      _var0);
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k3(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k3" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k3, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k3, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0ffi_V20_k4) (##string ##.string.1517))
    V_CALL_FUNC(VLoadLibrary2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k4, env)}),
      VEncodePointer(&_V10_Dstring_D1517.sym, VPOINTER_OTHER));
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k2(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k2" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k2, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k2, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0ffi_V20_k3) (##string ##.string.1518))
    V_CALL_FUNC(VLoadLibrary2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k3, env)}),
      VEncodePointer(&_V10_Dstring_D1518.sym, VPOINTER_OTHER));
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_k1(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_k1" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_k1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_k1, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0ffi_V20_k2) (##string ##.string.1519))
    V_CALL_FUNC(VLoadLibrary2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k2, env)}),
      VEncodePointer(&_V10_Dstring_D1519.sym, VPOINTER_OTHER));
 }
}
static void _V0vanity_V0compiler_V0ffi_V20_lambda1(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0ffi_V20_lambda1" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0ffi_V20_lambda1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0ffi_V20_lambda1, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0ffi_V20_k1) (##string ##.string.1520))
    V_CALL_FUNC(VLoadLibrary2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0ffi_V20_k1, env)}),
      VEncodePointer(&_V10_Dstring_D1520.sym, VPOINTER_OTHER));
 }
}
VFunc _V0vanity_V0compiler_V0ffi_V20 = (VFunc)_V0vanity_V0compiler_V0ffi_V20_lambda1;
