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
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D1502 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "_V0vanity_V0core_V20" };
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D1501 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "_V0vanity_V0list_V20" };
static struct { VBlob sym; char bytes[33]; } _V10_Dstring_D1500 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 33 }, "_V0vanity_V0compiler_V0utils_V20" };
static struct { VBlob sym; char bytes[33]; } _V10_Dstring_D1499 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 33 }, "_V0vanity_V0compiler_V0match_V20" };
static struct { VBlob sym; char bytes[37]; } _V10_Dstring_D1498 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 37 }, "_V0vanity_V0compiler_V0variables_V20" };
static struct { VBlob sym; char bytes[31]; } _V10_Dstring_D1497 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 31 }, "_V0vanity_V0compiler_V0ffi_V20" };
static struct { VBlob sym; char bytes[27]; } _V10_Dstring_D1496 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 27 }, "_V0vanity_V0intrinsics_V20" };
static struct { VBlob sym; char bytes[37]; } _V10_Dstring_D1495 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 37 }, "_V0vanity_V0compiler_V0transpile_V20" };
VWEAK VWORD _V0sprintf;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0sprintf = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "sprintf" };
VWEAK VWORD _V0printf;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0printf = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "printf" };
VWEAK VWORD _V0length;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0length = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "length" };
VWEAK VWORD _V0iota;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0iota = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "iota" };
VWEAK VWORD _V0equal_Q;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0equal_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "equal\?" };
VWEAK VWORD _V0call_Wcc;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0call_Wcc = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "call/cc" };
VWEAK VWORD _V0car;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0car = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "car" };
VWEAK VWORD _V0cddr;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0cddr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "cddr" };
VWEAK VWORD _V0map;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0map = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "map" };
VWEAK VWORD _V0error;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0error = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "error" };
VWEAK VWORD _V0append;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0append = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "append" };
VWEAK VWORD _V0_E;VWEAK struct { VBlob sym; char bytes[2]; } _VW_V0_E = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 2 }, "=" };
VWEAK VWORD _V0list__ref;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0list__ref = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "list-ref" };
VWEAK VWORD _V0__;VWEAK struct { VBlob sym; char bytes[2]; } _VW_V0__ = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 2 }, "-" };
VWEAK VWORD _V0symbol_Q;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0symbol_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "symbol\?" };
VWEAK VWORD _V0pair_Q;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0pair_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "pair\?" };
VWEAK VWORD _V0eqv_Q;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0eqv_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "eqv\?" };
VWEAK VWORD _V0cadr;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0cadr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "cadr" };
VWEAK VWORD _V0lookup__intrinsic__name;VWEAK struct { VBlob sym; char bytes[22]; } _VW_V0lookup__intrinsic__name = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 22 }, "lookup-intrinsic-name" };
VWEAK VWORD _V0call__with__values;VWEAK struct { VBlob sym; char bytes[17]; } _VW_V0call__with__values = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 17 }, "call-with-values" };
VWEAK VWORD _V0display;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0display = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "display" };
VWEAK VWORD _V0cdr;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0cdr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "cdr" };
VWEAK VWORD _V0lookup__inline__name;VWEAK struct { VBlob sym; char bytes[19]; } _VW_V0lookup__inline__name = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 19 }, "lookup-inline-name" };
VWEAK VWORD _V0mangle__symbol;VWEAK struct { VBlob sym; char bytes[14]; } _VW_V0mangle__symbol = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 14 }, "mangle-symbol" };
VWEAK VWORD _V0cadar;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0cadar = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "cadar" };
VWEAK VWORD _V0caar;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0caar = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "caar" };
VWEAK VWORD _V0string_Q;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0string_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "string\?" };
VWEAK VWORD _V0string__length;VWEAK struct { VBlob sym; char bytes[14]; } _VW_V0string__length = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 14 }, "string-length" };
VWEAK VWORD _V0symbol___Gstring;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V0symbol___Gstring = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "symbol->string" };
VWEAK VWORD _V0eq_Q;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0eq_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "eq\?" };
VWEAK VWORD _V0char_Q;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0char_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "char\?" };
VWEAK VWORD _V0number_Q;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0number_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "number\?" };
VWEAK VWORD _V0integer_Q;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0integer_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "integer\?" };
VWEAK VWORD _V0open__output__string;VWEAK struct { VBlob sym; char bytes[19]; } _VW_V0open__output__string = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 19 }, "open-output-string" };
VWEAK VWORD _V0get__output__string;VWEAK struct { VBlob sym; char bytes[18]; } _VW_V0get__output__string = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 18 }, "get-output-string" };
VWEAK VWORD _V0close__port;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V0close__port = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "close-port" };
VWEAK VWORD _V0_L;VWEAK struct { VBlob sym; char bytes[2]; } _VW_V0_L = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 2 }, "<" };
VWEAK VWORD _V0string__ref;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V0string__ref = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "string-ref" };
VWEAK VWORD _V0displayln;VWEAK struct { VBlob sym; char bytes[10]; } _VW_V0displayln = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 10 }, "displayln" };
VWEAK VWORD _V0print__foreign__function;VWEAK struct { VBlob sym; char bytes[23]; } _VW_V0print__foreign__function = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 23 }, "print-foreign-function" };
VWEAK VWORD _V0for__each;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0for__each = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "for-each" };
VWEAK VWORD _V0compiler__error;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V0compiler__error = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "compiler-error" };
VWEAK VWORD _V0null_Q;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0null_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "null\?" };
VWEAK VWORD _V0not;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0not = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "not" };
VWEAK VWORD _V0reverse;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0reverse = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "reverse" };
static struct { VBlob sym; char bytes[11]; } _V10_Dstring_D1494 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 11 }, "VDllMain~A" };
VWEAK VWORD _V0printout2;VWEAK struct { VBlob sym; char bytes[10]; } _VW_V0printout2 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 10 }, "printout2" };
static struct { VBlob sym; char bytes[30]; } _V10_Dstring_D1493 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 30 }, "#include \"vscheme/vruntime.h\"" };
static struct { VBlob sym; char bytes[30]; } _V10_Dstring_D1492 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 30 }, "#include \"vscheme/vlibrary.h\"" };
static struct { VBlob sym; char bytes[30]; } _V10_Dstring_D1491 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 30 }, "#include \"vscheme/vinlines.h\"" };
static struct { VBlob sym; char bytes[20]; } _V10_Dstring_D1490 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 20 }, "#include <stdarg.h>" };
static struct { VBlob sym; char bytes[51]; } _V10_Dstring_D1489 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 51 }, "shared library has toplevel expressions or defines" };
static struct { VBlob sym; char bytes[31]; } _V10_Dstring_D1488 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 31 }, "VThunk VanityToplevels[] = {~N" };
static struct { VBlob sym; char bytes[16]; } _V10_Dstring_D1487 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 16 }, "  toplevel~A~N," };
static struct { VBlob sym; char bytes[5]; } _V10_Dstring_D1486 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 5 }, "};~N" };
static struct { VBlob sym; char bytes[78]; } _V10_Dstring_D1485 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 78 }, "int VanityToplevelCount = sizeof VanityToplevels / sizeof *VanityToplevels;~N" };
static struct { VBlob sym; char bytes[37]; } _V10_Dstring_D1484 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 37 }, "int main(int argc, char ** argv) {~N" };
static struct { VBlob sym; char bytes[22]; } _V10_Dstring_D1483 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 22 }, "  VRuntime * runtime;" };
static struct { VBlob sym; char bytes[39]; } _V10_Dstring_D1482 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 39 }, "  VInitRuntime2(&runtime, argc, argv);" };
static struct { VBlob sym; char bytes[84]; } _V10_Dstring_D1481 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 84 }, "  return VDecodeExitCode(VStart2(runtime, VanityToplevelCount, VanityToplevels));~N" };
static struct { VBlob sym; char bytes[28]; } _V10_Dstring_D1480 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 28 }, "print-declare: unknown form" };
static struct { VBlob sym; char bytes[24]; } _V10_Dstring_D1479 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 24 }, "VFunc ~A = (VFunc)~A;~N" };
static struct { VBlob sym; char bytes[36]; } _V10_Dstring_D1478 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 36 }, "print-foreign-declare: unknown form" };
VWEAK VWORD _V10vcore_Ddeclare;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V10vcore_Ddeclare = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "##vcore.declare" };
VWEAK VWORD _V10foreign_Ddeclare;VWEAK struct { VBlob sym; char bytes[18]; } _VW_V10foreign_Ddeclare = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 18 }, "##foreign.declare" };
static struct { VBlob sym; char bytes[43]; } _V10_Dstring_D1477 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 43 }, "void toplevel~A(V_CORE_ARGS, VWORD _k) {~N" };
static struct { VBlob sym; char bytes[23]; } _V10_Dstring_D1476 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 23 }, "    VEnv * env = NULL;" };
static struct { VBlob sym; char bytes[3]; } _V10_Dstring_D1475 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 3 }, "_k" };
VWEAK VWORD _V0k;VWEAK struct { VBlob sym; char bytes[2]; } _VW_V0k = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 2 }, "k" };
static struct { VBlob sym; char bytes[14]; } _V10_Dstring_D1474 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 14 }, "_V20Case~A_~A" };
static struct { VBlob sym; char bytes[104]; } _V10_Dstring_D1473 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 104 }, "__attribute__((used)) static void _V20CaseError_~A(VRuntime * runtime, VEnv * upenv, int argc, ...) {~N" };
static struct { VBlob sym; char bytes[9]; } _V10_Dstring_D1472 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 9 }, " // ~S~N" };
static struct { VBlob sym; char bytes[61]; } _V10_Dstring_D1471 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 61 }, " VErrorC(runtime, \"Not enough arguments to ~A, got ~~D~~N\"~N" };
static struct { VBlob sym; char bytes[23]; } _V10_Dstring_D1470 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 23 }, " \"-- expected ~A~~N\"~N" };
static struct { VBlob sym; char bytes[31]; } _V10_Dstring_D1469 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 31 }, " \"-- expected ~A or more~~N\"~N" };
static struct { VBlob sym; char bytes[12]; } _V10_Dstring_D1468 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 12 }, " , argc);~N" };
static struct { VBlob sym; char bytes[60]; } _V10_Dstring_D1467 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 60 }, "void ~A(VRuntime * runtime, VEnv * upenv, int argc, ...);~N" };
static struct { VBlob sym; char bytes[7]; } _V10_Dstring_D1466 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 7 }, "asm(~N" };
static struct { VBlob sym; char bytes[29]; } _V10_Dstring_D1465 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 29 }, "\".intel_syntax noprefix\\n\"~N" };
static struct { VBlob sym; char bytes[19]; } _V10_Dstring_D1464 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 19 }, "#ifdef __linux__~N" };
static struct { VBlob sym; char bytes[26]; } _V10_Dstring_D1463 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 26 }, "\".type ~A, @function\\n\"~N" };
static struct { VBlob sym; char bytes[9]; } _V10_Dstring_D1462 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 9 }, "#endif~N" };
static struct { VBlob sym; char bytes[10]; } _V10_Dstring_D1461 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 10 }, "\"~A:\\n\"~N" };
static struct { VBlob sym; char bytes[26]; } _V10_Dstring_D1460 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 26 }, "match statement exhausted" };
static struct { VBlob sym; char bytes[16]; } _V10_Dstring_D1459 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 16 }, "\"    je ~A\\n\"~N" };
VWEAK VWORD _V0_P;VWEAK struct { VBlob sym; char bytes[2]; } _VW_V0_P = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 2 }, "+" };
static struct { VBlob sym; char bytes[31]; } _V10_Dstring_D1458 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 31 }, "\"    cmp \" ARGC_REG \", ~A\\n\"~N" };
static struct { VBlob sym; char bytes[17]; } _V10_Dstring_D1457 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 17 }, "\"    jge ~A\\n\"~N" };
static struct { VBlob sym; char bytes[31]; } _V10_Dstring_D1456 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 31 }, "\"    jmp _V20CaseError_~A\\n\"~N" };
static struct { VBlob sym; char bytes[58]; } _V10_Dstring_D1455 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 58 }, "static void ~A(VRuntime * runtime, VEnv * upenv, int argc" };
static struct { VBlob sym; char bytes[11]; } _V10_Dstring_D1454 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 11 }, ", VWORD ~A" };
static struct { VBlob sym; char bytes[6]; } _V10_Dstring_D1453 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 6 }, ") {~N" };
static struct { VBlob sym; char bytes[10]; } _V10_Dstring_D1452 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 10 }, "  // ~S~N" };
static struct { VBlob sym; char bytes[9]; } _V10_Dstring_D1451 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 9 }, "_varargs" };
static struct { VBlob sym; char bytes[52]; } _V10_Dstring_D1450 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 52 }, "  struct { VEnv env; VWORD argv[~A]; } container;~N" };
static struct { VBlob sym; char bytes[33]; } _V10_Dstring_D1449 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 33 }, "  VEnv * env = &container.env;~N" };
static struct { VBlob sym; char bytes[34]; } _V10_Dstring_D1448 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 34 }, "  VInitEnv(env, ~A, ~A, upenv);~N" };
static struct { VBlob sym; char bytes[24]; } _V10_Dstring_D1447 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 24 }, "  env->vars[~A] = ~A;~N" };
static struct { VBlob sym; char bytes[30]; } _V10_Dstring_D1446 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 30 }, "  env->vars[~A] = _varargs;~N" };
static struct { VBlob sym; char bytes[27]; } _V10_Dstring_D1445 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 27 }, " VWORD _varargs = VNULL;~N" };
static struct { VBlob sym; char bytes[55]; } _V10_Dstring_D1444 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 55 }, " V_GATHER_VARARGS_VARIADIC(&_varargs, ~A, argc, ~A);~N" };
static struct { VBlob sym; char bytes[5]; } _V10_Dstring_D1443 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 5 }, "argc" };
static struct { VBlob sym; char bytes[20]; } _V10_Dstring_D1442 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 20 }, " if(argc != ~A) {~N" };
static struct { VBlob sym; char bytes[24]; } _V10_Dstring_D1441 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 24 }, "  \"-- expected ~A~~N\"~N" };
static struct { VBlob sym; char bytes[19]; } _V10_Dstring_D1440 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 19 }, " if(argc < ~A) {~N" };
static struct { VBlob sym; char bytes[62]; } _V10_Dstring_D1439 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 62 }, "  VErrorC(runtime, \"Not enough arguments to ~A, got ~~D~~N\"~N" };
static struct { VBlob sym; char bytes[32]; } _V10_Dstring_D1438 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 32 }, "  \"-- expected ~A or more~~N\"~N" };
static struct { VBlob sym; char bytes[13]; } _V10_Dstring_D1437 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 13 }, "  , argc);~N" };
static struct { VBlob sym; char bytes[5]; } _V10_Dstring_D1436 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 5 }, " }~N" };
static struct { VBlob sym; char bytes[37]; } _V10_Dstring_D1435 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 37 }, " static VDebugInfo dbg = { \"~A\" };~N" };
static struct { VBlob sym; char bytes[32]; } _V10_Dstring_D1434 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 32 }, " VRecordCall2(runtime, &dbg);~N" };
static struct { VBlob sym; char bytes[6]; } _V10_Dstring_D1433 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 6 }, ", ..." };
static struct { VBlob sym; char bytes[23]; } _V10_Dstring_D1432 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 23 }, "__attribute__((used)) " };
static struct { VBlob sym; char bytes[7]; } _V10_Dstring_D1431 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 7 }, "_var~A" };
static struct { VBlob sym; char bytes[33]; } _V10_Dstring_D1430 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 33 }, "print-expr: malformed expression" };
VWEAK VWORD _V10foreign_Dfunction;VWEAK struct { VBlob sym; char bytes[19]; } _VW_V10foreign_Dfunction = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 19 }, "##foreign.function" };
static struct { VBlob sym; char bytes[61]; } _V10_Dstring_D1429 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 61 }, "VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)~A, NULL)})" };
static struct { VBlob sym; char bytes[16]; } _V10_Dstring_D1428 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 16 }, "if(VDecodeBool(" };
static struct { VBlob sym; char bytes[5]; } _V10_Dstring_D1427 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 5 }, ")) {" };
static struct { VBlob sym; char bytes[9]; } _V10_Dstring_D1426 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 9 }, "} else {" };
static struct { VBlob sym; char bytes[2]; } _V10_Dstring_D1425 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 2 }, "}" };
static struct { VBlob sym; char bytes[25]; } _V10_Dstring_D1424 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 25 }, "VGetArg(upenv, ~A-1, ~A)" };
static struct { VBlob sym; char bytes[28]; } _V10_Dstring_D1423 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 28 }, "upenv->up->up->up->vars[~A]" };
static struct { VBlob sym; char bytes[24]; } _V10_Dstring_D1422 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 24 }, "upenv->up->up->vars[~A]" };
static struct { VBlob sym; char bytes[20]; } _V10_Dstring_D1421 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 20 }, "upenv->up->vars[~A]" };
static struct { VBlob sym; char bytes[16]; } _V10_Dstring_D1420 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 16 }, "upenv->vars[~A]" };
static struct { VBlob sym; char bytes[60]; } _V10_Dstring_D1419 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 60 }, "VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)~A, env)})" };
static struct { VBlob sym; char bytes[6]; } _V10_Dstring_D1418 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 6 }, "VNULL" };
static struct { VBlob sym; char bytes[22]; } _V10_Dstring_D1417 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 22 }, "~A(runtime,~N        " };
static struct { VBlob sym; char bytes[2]; } _V10_Dstring_D1416 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 2 }, ")" };
static struct { VBlob sym; char bytes[12]; } _V10_Dstring_D1415 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 12 }, ",~N        " };
static struct { VBlob sym; char bytes[15]; } _V10_Dstring_D1414 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 15 }, "unknown inline" };
static struct { VBlob sym; char bytes[24]; } _V10_Dstring_D1413 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 24 }, "print-set: unknown form" };
static struct { VBlob sym; char bytes[38]; } _V10_Dstring_D1412 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 38 }, "set!'s first argument is not a symbol" };
static struct { VBlob sym; char bytes[63]; } _V10_Dstring_D1411 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 63 }, "    VCallFuncWithGC(runtime, (VFunc)VSetGlobalVar2, 3,~N      " };
static struct { VBlob sym; char bytes[104]; } _V10_Dstring_D1410 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 104 }, "    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)VSetEnvVar2, .env = env }, }, 4,~N      " };
static struct { VBlob sym; char bytes[51]; } _V10_Dstring_D1409 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 51 }, ",~N      VEncodeInt(~Al), VEncodeInt(~Al),~N      " };
static struct { VBlob sym; char bytes[66]; } _V10_Dstring_D1408 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 66 }, "    VCallFuncWithGC(runtime, (VFunc)VDefineGlobalVar2, 3,~N      " };
static struct { VBlob sym; char bytes[11]; } _V10_Dstring_D1407 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 11 }, "~N    );~N" };
static struct { VBlob sym; char bytes[25]; } _V10_Dstring_D1406 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 25 }, "    // OH NO A LETREC!~N" };
static struct { VBlob sym; char bytes[6]; } _V10_Dstring_D1405 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 6 }, "    {" };
static struct { VBlob sym; char bytes[24]; } _V10_Dstring_D1404 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 24 }, "    VEnv * upenv = env;" };
static struct { VBlob sym; char bytes[54]; } _V10_Dstring_D1403 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 54 }, "    struct { VEnv env; VWORD argv[~A]; } container;~N" };
static struct { VBlob sym; char bytes[35]; } _V10_Dstring_D1402 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 35 }, "    VEnv * env = &container.env;~N" };
static struct { VBlob sym; char bytes[36]; } _V10_Dstring_D1401 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 36 }, "    VInitEnv(env, ~A, ~A, upenv);~N" };
static struct { VBlob sym; char bytes[14]; } _V10_Dstring_D1400 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 14 }, "env->vars[~A]" };
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D1399 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "    env->vars[~A] = " };
static struct { VBlob sym; char bytes[2]; } _V10_Dstring_D1398 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 2 }, ";" };
static struct { VBlob sym; char bytes[6]; } _V10_Dstring_D1397 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 6 }, "    }" };
static struct { VBlob sym; char bytes[63]; } _V10_Dstring_D1396 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 63 }, "    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, " };
static struct { VBlob sym; char bytes[6]; } _V10_Dstring_D1395 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 6 }, "), ~A" };
static struct { VBlob sym; char bytes[87]; } _V10_Dstring_D1394 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 87 }, "    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)~A, .env = env }, }, ~A" };
static struct { VBlob sym; char bytes[43]; } _V10_Dstring_D1393 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 43 }, "    VCallFuncWithGC(runtime, (VFunc)~A, ~A" };
static struct { VBlob sym; char bytes[10]; } _V10_Dstring_D1392 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 10 }, ",~N      " };
static struct { VBlob sym; char bytes[5]; } _V10_Dstring_D1391 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 5 }, ");~N" };
static struct { VBlob sym; char bytes[22]; } _V10_Dstring_D1390 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 22 }, "closes\?: unknown form" };
VWEAK VWORD _V0letrec;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0letrec = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "letrec" };
VWEAK VWORD _V10inline;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V10inline = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "##inline" };
VWEAK VWORD _V0define;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0define = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "define" };
VWEAK VWORD _V0set_B;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0set_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "set!" };
VWEAK VWORD _V0if;VWEAK struct { VBlob sym; char bytes[3]; } _VW_V0if = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 3 }, "if" };
VWEAK VWORD _V10string;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V10string = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "##string" };
VWEAK VWORD _V0bruijn;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0bruijn = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "bruijn" };
VWEAK VWORD _V0quote;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0quote = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "quote" };
VWEAK VWORD _V0close;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0close = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "close" };
static struct { VBlob sym; char bytes[50]; } _V10_Dstring_D1389 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 50 }, "static __attribute__((constructor)) void ~A() {~N" };
static struct { VBlob sym; char bytes[4]; } _V10_Dstring_D1388 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 4 }, "}~N" };
static struct { VBlob sym; char bytes[86]; } _V10_Dstring_D1387 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 86 }, "  _V40~A = VEncodePointer(VLookupConstant(\"_V40~A\", &_VW_V40~A), VPOINTER_CLOSURE);~N" };
static struct { VBlob sym; char bytes[72]; } _V10_Dstring_D1386 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 72 }, "  ~A = VEncodePointer(VLookupConstant(\"~A\", &_VW~A), VPOINTER_OTHER);~N" };
static struct { VBlob sym; char bytes[52]; } _V10_Dstring_D1385 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 52 }, "print-literal-table: unknown entry in literal table" };
static struct { VBlob sym; char bytes[20]; } _V10_Dstring_D1384 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 20 }, "VWEAK VWORD _V40~A;" };
static struct { VBlob sym; char bytes[102]; } _V10_Dstring_D1383 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 102 }, "VWEAK VClosure _VW_V40~A = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)~A, NULL };~N" };
VWEAK VWORD _V10intrinsic;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V10intrinsic = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "##intrinsic" };
static struct { VBlob sym; char bytes[139]; } _V10_Dstring_D1382 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 139 }, "static struct { VBlob sym; char bytes[~A]; } ~A = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, ~A }, \"~A\" };~N" };
static struct { VBlob sym; char bytes[16]; } _V10_Dstring_D1381 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 16 }, "VWEAK VWORD ~A;" };
static struct { VBlob sym; char bytes[123]; } _V10_Dstring_D1380 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 123 }, "VWEAK struct { VBlob sym; char bytes[~A]; } _VW~A = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, ~A }, \"~A\" };~N" };
static struct { VBlob sym; char bytes[36]; } _V10_Dstring_D1379 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 36 }, "print-literal: unknown literal type" };
static struct { VBlob sym; char bytes[19]; } _V10_Dstring_D1378 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 19 }, "VEncodeBool(false)" };
static struct { VBlob sym; char bytes[18]; } _V10_Dstring_D1377 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 18 }, "VEncodeBool(true)" };
static struct { VBlob sym; char bytes[18]; } _V10_Dstring_D1376 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 18 }, "VEncodeChar('~A')" };
static struct { VBlob sym; char bytes[9]; } _V10_Dstring_D1375 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 9 }, "VNULLPTR" };
static struct { VBlob sym; char bytes[6]; } _V10_Dstring_D1374 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 6 }, "VVOID" };
static struct { VBlob sym; char bytes[18]; } _V10_Dstring_D1373 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 18 }, "VEncodeNumber(~A)" };
static struct { VBlob sym; char bytes[16]; } _V10_Dstring_D1372 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 16 }, "VEncodeInt(~Al)" };
static struct { VBlob sym; char bytes[7]; } _V10_Dstring_D1371 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 7 }, "_V40~A" };
static struct { VBlob sym; char bytes[40]; } _V10_Dstring_D1370 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 40 }, "VEncodePointer(&~A.sym, VPOINTER_OTHER)" };
static struct { VBlob sym; char bytes[3]; } _V10_Dstring_D1369 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 3 }, "\\'" };
static struct { VBlob sym; char bytes[3]; } _V10_Dstring_D1368 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 3 }, "\\\\" };
static struct { VBlob sym; char bytes[3]; } _V10_Dstring_D1367 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 3 }, "\\\?" };
static struct { VBlob sym; char bytes[3]; } _V10_Dstring_D1366 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 3 }, "\\r" };
static struct { VBlob sym; char bytes[3]; } _V10_Dstring_D1365 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 3 }, "\\n" };
static struct { VBlob sym; char bytes[3]; } _V10_Dstring_D1364 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 3 }, "\\t" };
static struct { VBlob sym; char bytes[3]; } _V10_Dstring_D1363 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 3 }, "\\b" };
static struct { VBlob sym; char bytes[3]; } _V10_Dstring_D1362 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 3 }, "\\a" };
static struct { VBlob sym; char bytes[37]; } _V10_Dstring_D1361 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 37 }, "VLookupGlobalVarFast2(runtime, \"~A\")" };
static struct { VBlob sym; char bytes[60]; } _V10_Dstring_D1360 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 60 }, "VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)~A,NULL)})" };
static __attribute__((constructor)) void VDllMain1() {
  _V0sprintf = VEncodePointer(VLookupConstant("_V0sprintf", &_VW_V0sprintf), VPOINTER_OTHER);
  _V0printf = VEncodePointer(VLookupConstant("_V0printf", &_VW_V0printf), VPOINTER_OTHER);
  _V0length = VEncodePointer(VLookupConstant("_V0length", &_VW_V0length), VPOINTER_OTHER);
  _V0iota = VEncodePointer(VLookupConstant("_V0iota", &_VW_V0iota), VPOINTER_OTHER);
  _V0equal_Q = VEncodePointer(VLookupConstant("_V0equal_Q", &_VW_V0equal_Q), VPOINTER_OTHER);
  _V0call_Wcc = VEncodePointer(VLookupConstant("_V0call_Wcc", &_VW_V0call_Wcc), VPOINTER_OTHER);
  _V0car = VEncodePointer(VLookupConstant("_V0car", &_VW_V0car), VPOINTER_OTHER);
  _V0cddr = VEncodePointer(VLookupConstant("_V0cddr", &_VW_V0cddr), VPOINTER_OTHER);
  _V0map = VEncodePointer(VLookupConstant("_V0map", &_VW_V0map), VPOINTER_OTHER);
  _V0error = VEncodePointer(VLookupConstant("_V0error", &_VW_V0error), VPOINTER_OTHER);
  _V0append = VEncodePointer(VLookupConstant("_V0append", &_VW_V0append), VPOINTER_OTHER);
  _V0_E = VEncodePointer(VLookupConstant("_V0_E", &_VW_V0_E), VPOINTER_OTHER);
  _V0list__ref = VEncodePointer(VLookupConstant("_V0list__ref", &_VW_V0list__ref), VPOINTER_OTHER);
  _V0__ = VEncodePointer(VLookupConstant("_V0__", &_VW_V0__), VPOINTER_OTHER);
  _V0symbol_Q = VEncodePointer(VLookupConstant("_V0symbol_Q", &_VW_V0symbol_Q), VPOINTER_OTHER);
  _V0pair_Q = VEncodePointer(VLookupConstant("_V0pair_Q", &_VW_V0pair_Q), VPOINTER_OTHER);
  _V0eqv_Q = VEncodePointer(VLookupConstant("_V0eqv_Q", &_VW_V0eqv_Q), VPOINTER_OTHER);
  _V0cadr = VEncodePointer(VLookupConstant("_V0cadr", &_VW_V0cadr), VPOINTER_OTHER);
  _V0lookup__intrinsic__name = VEncodePointer(VLookupConstant("_V0lookup__intrinsic__name", &_VW_V0lookup__intrinsic__name), VPOINTER_OTHER);
  _V0call__with__values = VEncodePointer(VLookupConstant("_V0call__with__values", &_VW_V0call__with__values), VPOINTER_OTHER);
  _V0display = VEncodePointer(VLookupConstant("_V0display", &_VW_V0display), VPOINTER_OTHER);
  _V0cdr = VEncodePointer(VLookupConstant("_V0cdr", &_VW_V0cdr), VPOINTER_OTHER);
  _V0lookup__inline__name = VEncodePointer(VLookupConstant("_V0lookup__inline__name", &_VW_V0lookup__inline__name), VPOINTER_OTHER);
  _V0mangle__symbol = VEncodePointer(VLookupConstant("_V0mangle__symbol", &_VW_V0mangle__symbol), VPOINTER_OTHER);
  _V0cadar = VEncodePointer(VLookupConstant("_V0cadar", &_VW_V0cadar), VPOINTER_OTHER);
  _V0caar = VEncodePointer(VLookupConstant("_V0caar", &_VW_V0caar), VPOINTER_OTHER);
  _V0string_Q = VEncodePointer(VLookupConstant("_V0string_Q", &_VW_V0string_Q), VPOINTER_OTHER);
  _V0string__length = VEncodePointer(VLookupConstant("_V0string__length", &_VW_V0string__length), VPOINTER_OTHER);
  _V0symbol___Gstring = VEncodePointer(VLookupConstant("_V0symbol___Gstring", &_VW_V0symbol___Gstring), VPOINTER_OTHER);
  _V0eq_Q = VEncodePointer(VLookupConstant("_V0eq_Q", &_VW_V0eq_Q), VPOINTER_OTHER);
  _V0char_Q = VEncodePointer(VLookupConstant("_V0char_Q", &_VW_V0char_Q), VPOINTER_OTHER);
  _V0number_Q = VEncodePointer(VLookupConstant("_V0number_Q", &_VW_V0number_Q), VPOINTER_OTHER);
  _V0integer_Q = VEncodePointer(VLookupConstant("_V0integer_Q", &_VW_V0integer_Q), VPOINTER_OTHER);
  _V0open__output__string = VEncodePointer(VLookupConstant("_V0open__output__string", &_VW_V0open__output__string), VPOINTER_OTHER);
  _V0get__output__string = VEncodePointer(VLookupConstant("_V0get__output__string", &_VW_V0get__output__string), VPOINTER_OTHER);
  _V0close__port = VEncodePointer(VLookupConstant("_V0close__port", &_VW_V0close__port), VPOINTER_OTHER);
  _V0_L = VEncodePointer(VLookupConstant("_V0_L", &_VW_V0_L), VPOINTER_OTHER);
  _V0string__ref = VEncodePointer(VLookupConstant("_V0string__ref", &_VW_V0string__ref), VPOINTER_OTHER);
  _V0displayln = VEncodePointer(VLookupConstant("_V0displayln", &_VW_V0displayln), VPOINTER_OTHER);
  _V0print__foreign__function = VEncodePointer(VLookupConstant("_V0print__foreign__function", &_VW_V0print__foreign__function), VPOINTER_OTHER);
  _V0for__each = VEncodePointer(VLookupConstant("_V0for__each", &_VW_V0for__each), VPOINTER_OTHER);
  _V0compiler__error = VEncodePointer(VLookupConstant("_V0compiler__error", &_VW_V0compiler__error), VPOINTER_OTHER);
  _V0null_Q = VEncodePointer(VLookupConstant("_V0null_Q", &_VW_V0null_Q), VPOINTER_OTHER);
  _V0not = VEncodePointer(VLookupConstant("_V0not", &_VW_V0not), VPOINTER_OTHER);
  _V0reverse = VEncodePointer(VLookupConstant("_V0reverse", &_VW_V0reverse), VPOINTER_OTHER);
  _V0printout2 = VEncodePointer(VLookupConstant("_V0printout2", &_VW_V0printout2), VPOINTER_OTHER);
  _V10vcore_Ddeclare = VEncodePointer(VLookupConstant("_V10vcore_Ddeclare", &_VW_V10vcore_Ddeclare), VPOINTER_OTHER);
  _V10foreign_Ddeclare = VEncodePointer(VLookupConstant("_V10foreign_Ddeclare", &_VW_V10foreign_Ddeclare), VPOINTER_OTHER);
  _V0k = VEncodePointer(VLookupConstant("_V0k", &_VW_V0k), VPOINTER_OTHER);
  _V0_P = VEncodePointer(VLookupConstant("_V0_P", &_VW_V0_P), VPOINTER_OTHER);
  _V10foreign_Dfunction = VEncodePointer(VLookupConstant("_V10foreign_Dfunction", &_VW_V10foreign_Dfunction), VPOINTER_OTHER);
  _V0letrec = VEncodePointer(VLookupConstant("_V0letrec", &_VW_V0letrec), VPOINTER_OTHER);
  _V10inline = VEncodePointer(VLookupConstant("_V10inline", &_VW_V10inline), VPOINTER_OTHER);
  _V0define = VEncodePointer(VLookupConstant("_V0define", &_VW_V0define), VPOINTER_OTHER);
  _V0set_B = VEncodePointer(VLookupConstant("_V0set_B", &_VW_V0set_B), VPOINTER_OTHER);
  _V0if = VEncodePointer(VLookupConstant("_V0if", &_VW_V0if), VPOINTER_OTHER);
  _V10string = VEncodePointer(VLookupConstant("_V10string", &_VW_V10string), VPOINTER_OTHER);
  _V0bruijn = VEncodePointer(VLookupConstant("_V0bruijn", &_VW_V0bruijn), VPOINTER_OTHER);
  _V0quote = VEncodePointer(VLookupConstant("_V0quote", &_VW_V0quote), VPOINTER_OTHER);
  _V0close = VEncodePointer(VLookupConstant("_V0close", &_VW_V0close), VPOINTER_OTHER);
  _V10intrinsic = VEncodePointer(VLookupConstant("_V10intrinsic", &_VW_V10intrinsic), VPOINTER_OTHER);
}
static void _V10_Dprint__global_D208_k55(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__global_D208_k55, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.builtin.227 0 0) ((bruijn ##.printf.155 5 2) (bruijn ##.k.602 1 0) (##string ##.string.1360) (bruijn ##.builtin.227 0 0)) ((bruijn ##.printf.155 5 2) (bruijn ##.k.602 1 0) (##string ##.string.1361) (bruijn ##.sym.226 1 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 5-1, 2)), 3,
      upenv->vars[0],
      VEncodePointer(&_V10_Dstring_D1360.sym, VPOINTER_OTHER),
      _var0);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 5-1, 2)), 3,
      upenv->vars[0],
      VEncodePointer(&_V10_Dstring_D1361.sym, VPOINTER_OTHER),
      upenv->vars[1]);
}
}
static void _V10_Dprint__global_D208_lambda4(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__global_D208_lambda4, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##.lookup-intrinsic-name.172 4 19) (close _V10_Dprint__global_D208_k55) (bruijn ##.sym.226 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->up->vars[19]), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__global_D208_k55, env)}),
      _var1);
}
static void _V10_Dloop_D229_k68(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D229_k68, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.621 1 0) ((bruijn ##.k.622 0 0) (bruijn ##.p.621 1 0)) ((bruijn ##.eqv?.170 19 17) (bruijn ##.k.622 0 0) (bruijn ##.x.0.231 9 0) '#\\))
if(VDecodeBool(
upenv->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      upenv->vars[0]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 19-1, 17)), 3,
      _var0,
      VGetArg(upenv, 9-1, 0),
      VEncodeChar('\\'));
}
}
static void _V10_Dloop_D229_k71(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D229_k71, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.display.174 21 21) (bruijn ##.k.611 9 0) (bruijn ##.x.619 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 21-1, 21)), 2,
      VGetArg(upenv, 9-1, 0),
      _var0);
}
static void _V10_Dloop_D229_k70(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D229_k70, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.string-ref.191 20 38) (close _V10_Dloop_D229_k71) (bruijn ##.s.228 16 1) (bruijn ##.i.230 13 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 20-1, 38)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D229_k71, env)}),
      VGetArg(upenv, 16-1, 1),
      VGetArg(upenv, 13-1, 1));
}
static void _V10_Dloop_D229_k72(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D229_k72, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.display.174 20 21) (bruijn ##.k.611 8 0) (bruijn ##.x.620 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 20-1, 21)), 2,
      VGetArg(upenv, 8-1, 0),
      _var0);
}
static void _V10_Dloop_D229_k69(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D229_k69, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.617 0 0) ((bruijn ##.display.174 19 21) (close _V10_Dloop_D229_k70) #\\) ((bruijn ##.string-ref.191 19 38) (close _V10_Dloop_D229_k72) (bruijn ##.s.228 15 1) (bruijn ##.i.230 12 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 19-1, 21)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D229_k70, env)}),
      VEncodeChar('\\'));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 19-1, 38)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D229_k72, env)}),
      VGetArg(upenv, 15-1, 1),
      VGetArg(upenv, 12-1, 1));
}
}
static void _V10_Dloop_D229_k67(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D229_k67, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dloop_D229_k68) (close _V10_Dloop_D229_k69))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dloop_D229_k68, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D229_k69, env)}));
}
static void _V10_Dloop_D229_k66(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D229_k66, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.616 0 0) ((bruijn ##.display.174 17 21) (bruijn ##.k.611 5 0) (##string ##.string.1367)) ((bruijn ##.eqv?.170 17 17) (close _V10_Dloop_D229_k67) (bruijn ##.x.0.231 7 0) '#\"))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 17-1, 21)), 2,
      VGetArg(upenv, 5-1, 0),
      VEncodePointer(&_V10_Dstring_D1367.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 17-1, 17)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D229_k67, env)}),
      VGetArg(upenv, 7-1, 0),
      VEncodeChar('"'));
}
}
static void _V10_Dloop_D229_k65(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D229_k65, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.615 0 0) ((bruijn ##.display.174 16 21) (bruijn ##.k.611 4 0) (##string ##.string.1366)) ((bruijn ##.eqv?.170 16 17) (close _V10_Dloop_D229_k66) (bruijn ##.x.0.231 6 0) '#\?))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 16-1, 21)), 2,
      upenv->up->up->up->vars[0],
      VEncodePointer(&_V10_Dstring_D1366.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 16-1, 17)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D229_k66, env)}),
      VGetArg(upenv, 6-1, 0),
      VEncodeChar('?'));
}
}
static void _V10_Dloop_D229_k64(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D229_k64, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.614 0 0) ((bruijn ##.display.174 15 21) (bruijn ##.k.611 3 0) (##string ##.string.1365)) ((bruijn ##.eqv?.170 15 17) (close _V10_Dloop_D229_k65) (bruijn ##.x.0.231 5 0) '#\return))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 15-1, 21)), 2,
      upenv->up->up->vars[0],
      VEncodePointer(&_V10_Dstring_D1365.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 15-1, 17)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D229_k65, env)}),
      VGetArg(upenv, 5-1, 0),
      VEncodeChar('\r'));
}
}
static void _V10_Dloop_D229_k63(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D229_k63, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.613 0 0) ((bruijn ##.display.174 14 21) (bruijn ##.k.611 2 0) (##string ##.string.1364)) ((bruijn ##.eqv?.170 14 17) (close _V10_Dloop_D229_k64) (bruijn ##.x.0.231 4 0) '#\newline))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 14-1, 21)), 2,
      upenv->up->vars[0],
      VEncodePointer(&_V10_Dstring_D1364.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 14-1, 17)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D229_k64, env)}),
      upenv->up->up->up->vars[0],
      VEncodeChar('\n'));
}
}
static void _V10_Dloop_D229_k62(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D229_k62, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.612 0 0) ((bruijn ##.display.174 13 21) (bruijn ##.k.611 1 0) (##string ##.string.1363)) ((bruijn ##.eqv?.170 13 17) (close _V10_Dloop_D229_k63) (bruijn ##.x.0.231 3 0) '#\tab))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 13-1, 21)), 2,
      upenv->vars[0],
      VEncodePointer(&_V10_Dstring_D1363.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 13-1, 17)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D229_k63, env)}),
      upenv->up->up->vars[0],
      VEncodeChar('\t'));
}
}
static void _V10_Dloop_D229_k61(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D229_k61, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.610 1 0) ((bruijn ##.display.174 12 21) (bruijn ##.k.611 0 0) (##string ##.string.1362)) ((bruijn ##.eqv?.170 12 17) (close _V10_Dloop_D229_k62) (bruijn ##.x.0.231 2 0) '#\backspace))
if(VDecodeBool(
upenv->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 12-1, 21)), 2,
      _var0,
      VEncodePointer(&_V10_Dstring_D1362.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 12-1, 17)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D229_k62, env)}),
      upenv->up->vars[0],
      VEncodeChar('\t'));
}
}
static void _V10_Dloop_D229_k74(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D229_k74, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.loop.229 7 0) (bruijn ##.k.606 6 0) (bruijn ##.x.609 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 7-1, 0)), 2,
      VGetArg(upenv, 6-1, 0),
      _var0);
}
static void _V10_Dloop_D229_k73(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D229_k73, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.+.153 12 0) (close _V10_Dloop_D229_k74) (bruijn ##.i.230 5 1) 1)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 12-1, 0)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D229_k74, env)}),
      VGetArg(upenv, 5-1, 1),
      VEncodeInt(1l));
}
static void _V10_Dloop_D229_k60(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D229_k60, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dloop_D229_k61) (close _V10_Dloop_D229_k73))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dloop_D229_k61, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D229_k73, env)}));
}
static void _V10_Dloop_D229_k59(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D229_k59, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.eqv?.170 10 17) (close _V10_Dloop_D229_k60) (bruijn ##.x.0.231 0 0) '#\alarm)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 10-1, 17)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D229_k60, env)}),
      _var0,
      VEncodeChar('\a'));
}
static void _V10_Dloop_D229_k58(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D229_k58, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.607 0 0) ((bruijn ##.string-ref.191 9 38) (close _V10_Dloop_D229_k59) (bruijn ##.s.228 5 1) (bruijn ##.i.230 2 1)) ((bruijn ##.k.606 2 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 9-1, 38)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D229_k59, env)}),
      VGetArg(upenv, 5-1, 1),
      upenv->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dloop_D229_k57(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D229_k57, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.<.190 8 37) (close _V10_Dloop_D229_k58) (bruijn ##.i.230 1 1) (bruijn ##.x.623 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 8-1, 37)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D229_k58, env)}),
      upenv->vars[1],
      _var0);
}
static void _V10_Dloop_D229_lambda6(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D229_lambda6, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##.string-length.181 7 28) (close _V10_Dloop_D229_k57) (bruijn ##.s.228 3 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 7-1, 28)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D229_k57, env)}),
      upenv->up->up->vars[1]);
}
static void _V10_Dprint__string_D209_k75(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__string_D209_k75, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.display.174 7 21) (bruijn ##.k.603 3 0) #\")
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 7-1, 21)), 2,
      upenv->up->up->vars[0],
      VEncodeChar('"'));
}
static void _V10_Dprint__string_D209_k56(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__string_D209_k56, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (letrec 1 ((close _V10_Dloop_D229_lambda6)) ((bruijn ##.loop.229 0 0) (close _V10_Dprint__string_D209_k75) 0))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D229_lambda6, env)});
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, env->vars[0]), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__string_D209_k75, env)}),
      VEncodeInt(0l));
    }
}
static void _V10_Dprint__string_D209_lambda5(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__string_D209_lambda5, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##.display.174 4 21) (close _V10_Dprint__string_D209_k56) #\")
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->up->vars[21]), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__string_D209_k56, env)}),
      VEncodeChar('"'));
}
static void _V10_Dloop_D235_k88(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D235_k88, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.644 1 0) ((bruijn ##.k.645 0 0) (bruijn ##.p.644 1 0)) ((bruijn ##.eqv?.170 20 17) (bruijn ##.k.645 0 0) (bruijn ##.x.1.237 9 0) '#\\))
if(VDecodeBool(
upenv->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      upenv->vars[0]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 20-1, 17)), 3,
      _var0,
      VGetArg(upenv, 9-1, 0),
      VEncodeChar('\\'));
}
}
static void _V10_Dloop_D235_k91(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D235_k91, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.display.174 22 21) (bruijn ##.k.634 9 0) (bruijn ##.x.642 0 0) (bruijn ##.port.234 15 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 22-1, 21)), 3,
      VGetArg(upenv, 9-1, 0),
      _var0,
      VGetArg(upenv, 15-1, 1));
}
static void _V10_Dloop_D235_k90(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D235_k90, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.string-ref.191 21 38) (close _V10_Dloop_D235_k91) (bruijn ##.s.232 17 1) (bruijn ##.i.236 12 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 21-1, 38)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D235_k91, env)}),
      VGetArg(upenv, 17-1, 1),
      VGetArg(upenv, 12-1, 1));
}
static void _V10_Dloop_D235_k92(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D235_k92, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.display.174 21 21) (bruijn ##.k.634 8 0) (bruijn ##.x.643 0 0) (bruijn ##.port.234 14 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 21-1, 21)), 3,
      VGetArg(upenv, 8-1, 0),
      _var0,
      VGetArg(upenv, 14-1, 1));
}
static void _V10_Dloop_D235_k89(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D235_k89, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.640 0 0) ((bruijn ##.display.174 20 21) (close _V10_Dloop_D235_k90) #\\ (bruijn ##.port.234 13 1)) ((bruijn ##.string-ref.191 20 38) (close _V10_Dloop_D235_k92) (bruijn ##.s.232 16 1) (bruijn ##.i.236 11 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 20-1, 21)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D235_k90, env)}),
      VEncodeChar('\\'),
      VGetArg(upenv, 13-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 20-1, 38)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D235_k92, env)}),
      VGetArg(upenv, 16-1, 1),
      VGetArg(upenv, 11-1, 1));
}
}
static void _V10_Dloop_D235_k87(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D235_k87, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dloop_D235_k88) (close _V10_Dloop_D235_k89))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dloop_D235_k88, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D235_k89, env)}));
}
static void _V10_Dloop_D235_k86(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D235_k86, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.639 0 0) ((bruijn ##.display.174 18 21) (bruijn ##.k.634 5 0) (##string ##.string.1367) (bruijn ##.port.234 11 1)) ((bruijn ##.eqv?.170 18 17) (close _V10_Dloop_D235_k87) (bruijn ##.x.1.237 7 0) '#\"))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 18-1, 21)), 3,
      VGetArg(upenv, 5-1, 0),
      VEncodePointer(&_V10_Dstring_D1367.sym, VPOINTER_OTHER),
      VGetArg(upenv, 11-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 18-1, 17)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D235_k87, env)}),
      VGetArg(upenv, 7-1, 0),
      VEncodeChar('"'));
}
}
static void _V10_Dloop_D235_k85(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D235_k85, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.638 0 0) ((bruijn ##.display.174 17 21) (bruijn ##.k.634 4 0) (##string ##.string.1366) (bruijn ##.port.234 10 1)) ((bruijn ##.eqv?.170 17 17) (close _V10_Dloop_D235_k86) (bruijn ##.x.1.237 6 0) '#\?))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 17-1, 21)), 3,
      upenv->up->up->up->vars[0],
      VEncodePointer(&_V10_Dstring_D1366.sym, VPOINTER_OTHER),
      VGetArg(upenv, 10-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 17-1, 17)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D235_k86, env)}),
      VGetArg(upenv, 6-1, 0),
      VEncodeChar('?'));
}
}
static void _V10_Dloop_D235_k84(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D235_k84, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.637 0 0) ((bruijn ##.display.174 16 21) (bruijn ##.k.634 3 0) (##string ##.string.1365) (bruijn ##.port.234 9 1)) ((bruijn ##.eqv?.170 16 17) (close _V10_Dloop_D235_k85) (bruijn ##.x.1.237 5 0) '#\return))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 16-1, 21)), 3,
      upenv->up->up->vars[0],
      VEncodePointer(&_V10_Dstring_D1365.sym, VPOINTER_OTHER),
      VGetArg(upenv, 9-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 16-1, 17)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D235_k85, env)}),
      VGetArg(upenv, 5-1, 0),
      VEncodeChar('\r'));
}
}
static void _V10_Dloop_D235_k83(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D235_k83, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.636 0 0) ((bruijn ##.display.174 15 21) (bruijn ##.k.634 2 0) (##string ##.string.1364) (bruijn ##.port.234 8 1)) ((bruijn ##.eqv?.170 15 17) (close _V10_Dloop_D235_k84) (bruijn ##.x.1.237 4 0) '#\newline))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 15-1, 21)), 3,
      upenv->up->vars[0],
      VEncodePointer(&_V10_Dstring_D1364.sym, VPOINTER_OTHER),
      VGetArg(upenv, 8-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 15-1, 17)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D235_k84, env)}),
      upenv->up->up->up->vars[0],
      VEncodeChar('\n'));
}
}
static void _V10_Dloop_D235_k82(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D235_k82, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.635 0 0) ((bruijn ##.display.174 14 21) (bruijn ##.k.634 1 0) (##string ##.string.1363) (bruijn ##.port.234 7 1)) ((bruijn ##.eqv?.170 14 17) (close _V10_Dloop_D235_k83) (bruijn ##.x.1.237 3 0) '#\tab))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 14-1, 21)), 3,
      upenv->vars[0],
      VEncodePointer(&_V10_Dstring_D1363.sym, VPOINTER_OTHER),
      VGetArg(upenv, 7-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 14-1, 17)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D235_k83, env)}),
      upenv->up->up->vars[0],
      VEncodeChar('\t'));
}
}
static void _V10_Dloop_D235_k81(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D235_k81, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.633 1 0) ((bruijn ##.display.174 13 21) (bruijn ##.k.634 0 0) (##string ##.string.1362) (bruijn ##.port.234 6 1)) ((bruijn ##.eqv?.170 13 17) (close _V10_Dloop_D235_k82) (bruijn ##.x.1.237 2 0) '#\backspace))
if(VDecodeBool(
upenv->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 13-1, 21)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1362.sym, VPOINTER_OTHER),
      VGetArg(upenv, 6-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 13-1, 17)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D235_k82, env)}),
      upenv->up->vars[0],
      VEncodeChar('\t'));
}
}
static void _V10_Dloop_D235_k94(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D235_k94, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.loop.235 6 0) (bruijn ##.k.629 5 0) (bruijn ##.x.632 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 6-1, 0)), 2,
      VGetArg(upenv, 5-1, 0),
      _var0);
}
static void _V10_Dloop_D235_k93(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D235_k93, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.+.153 13 0) (close _V10_Dloop_D235_k94) (bruijn ##.i.236 4 1) 1)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 13-1, 0)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D235_k94, env)}),
      upenv->up->up->up->vars[1],
      VEncodeInt(1l));
}
static void _V10_Dloop_D235_k80(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D235_k80, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dloop_D235_k81) (close _V10_Dloop_D235_k93))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dloop_D235_k81, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D235_k93, env)}));
}
static void _V10_Dloop_D235_k79(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D235_k79, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.eqv?.170 11 17) (close _V10_Dloop_D235_k80) (bruijn ##.x.1.237 0 0) '#\alarm)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 11-1, 17)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D235_k80, env)}),
      _var0,
      VEncodeChar('\a'));
}
static void _V10_Dloop_D235_k78(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D235_k78, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.630 0 0) ((bruijn ##.string-ref.191 10 38) (close _V10_Dloop_D235_k79) (bruijn ##.s.232 6 1) (bruijn ##.i.236 1 1)) ((bruijn ##.k.629 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 10-1, 38)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D235_k79, env)}),
      VGetArg(upenv, 6-1, 1),
      upenv->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dloop_D235_lambda9(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D235_lambda9, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##.<.190 9 37) (close _V10_Dloop_D235_k78) (bruijn ##.i.236 0 1) (bruijn ##.len.233 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 9-1, 37)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D235_k78, env)}),
      _var1,
      upenv->up->vars[0]);
}
static void _V10_Descape__string_D210_k97(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Descape__string_D210_k97, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.624 7 0) (bruijn ##.ret.238 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 7-1, 0)), 1,
      upenv->vars[0]);
}
static void _V10_Descape__string_D210_k96(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Descape__string_D210_k96, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.close-port.189 10 36) (close _V10_Descape__string_D210_k97) (bruijn ##.port.234 3 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 10-1, 36)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Descape__string_D210_k97, env)}),
      upenv->up->up->vars[1]);
}
static void _V10_Descape__string_D210_k95(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Descape__string_D210_k95, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.get-output-string.188 9 35) (close _V10_Descape__string_D210_k96) (bruijn ##.port.234 2 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 9-1, 35)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Descape__string_D210_k96, env)}),
      upenv->up->vars[1]);
}
static void _V10_Descape__string_D210_lambda8(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (letrec 1 ((close _V10_Dloop_D235_lambda9)) ((bruijn ##.loop.235 0 0) (close _V10_Descape__string_D210_k95) 0))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D235_lambda9, env)});
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, env->vars[0]), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Descape__string_D210_k95, env)}),
      VEncodeInt(0l));
    }
}
static void _V10_Descape__string_D210_k77(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Descape__string_D210_k77, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Descape__string_D210_lambda8) (bruijn ##.x.625 1 0) (bruijn ##.x.626 0 0))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Descape__string_D210_lambda8, .env = env }, }, 2,
      upenv->vars[0],
      _var0);
}
static void _V10_Descape__string_D210_k76(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Descape__string_D210_k76, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.open-output-string.187 5 34) (close _V10_Descape__string_D210_k77))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 5-1, 34)), 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Descape__string_D210_k77, env)}));
}
static void _V10_Descape__string_D210_lambda7(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Descape__string_D210_lambda7, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##.string-length.181 4 28) (close _V10_Descape__string_D210_k76) (bruijn ##.s.232 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->up->vars[28]), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Descape__string_D210_k76, env)}),
      _var1);
}
static void _V10_Descape__char_D211_k104(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Descape__char_D211_k104, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.653 0 0) ((bruijn ##.k.646 8 0) (##string ##.string.1369)) ((bruijn ##.k.646 8 0) (bruijn ##.c.239 8 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 8-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D1369.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 8-1, 0)), 1,
      VGetArg(upenv, 8-1, 1));
}
}
static void _V10_Descape__char_D211_k103(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Descape__char_D211_k103, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.652 0 0) ((bruijn ##.k.646 7 0) (##string ##.string.1368)) ((bruijn ##.eqv?.170 11 17) (close _V10_Descape__char_D211_k104) (bruijn ##.x.2.240 6 0) '#\'))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 7-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D1368.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 11-1, 17)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Descape__char_D211_k104, env)}),
      VGetArg(upenv, 6-1, 0),
      VEncodeChar('\''));
}
}
static void _V10_Descape__char_D211_k102(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Descape__char_D211_k102, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.651 0 0) ((bruijn ##.k.646 6 0) (##string ##.string.1366)) ((bruijn ##.eqv?.170 10 17) (close _V10_Descape__char_D211_k103) (bruijn ##.x.2.240 5 0) '#\\))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 6-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D1366.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 10-1, 17)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Descape__char_D211_k103, env)}),
      VGetArg(upenv, 5-1, 0),
      VEncodeChar('\\'));
}
}
static void _V10_Descape__char_D211_k101(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Descape__char_D211_k101, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.650 0 0) ((bruijn ##.k.646 5 0) (##string ##.string.1365)) ((bruijn ##.eqv?.170 9 17) (close _V10_Descape__char_D211_k102) (bruijn ##.x.2.240 4 0) '#\return))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 5-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D1365.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 9-1, 17)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Descape__char_D211_k102, env)}),
      upenv->up->up->up->vars[0],
      VEncodeChar('\r'));
}
}
static void _V10_Descape__char_D211_k100(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Descape__char_D211_k100, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.649 0 0) ((bruijn ##.k.646 4 0) (##string ##.string.1364)) ((bruijn ##.eqv?.170 8 17) (close _V10_Descape__char_D211_k101) (bruijn ##.x.2.240 3 0) '#\newline))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->up->vars[0]), 1,
      VEncodePointer(&_V10_Dstring_D1364.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 8-1, 17)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Descape__char_D211_k101, env)}),
      upenv->up->up->vars[0],
      VEncodeChar('\n'));
}
}
static void _V10_Descape__char_D211_k99(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Descape__char_D211_k99, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.648 0 0) ((bruijn ##.k.646 3 0) (##string ##.string.1364)) ((bruijn ##.eqv?.170 7 17) (close _V10_Descape__char_D211_k100) (bruijn ##.x.2.240 2 0) '#\tab))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->vars[0]), 1,
      VEncodePointer(&_V10_Dstring_D1364.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 7-1, 17)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Descape__char_D211_k100, env)}),
      upenv->up->vars[0],
      VEncodeChar('\t'));
}
}
static void _V10_Descape__char_D211_k98(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Descape__char_D211_k98, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.647 0 0) ((bruijn ##.k.646 2 0) (##string ##.string.1362)) ((bruijn ##.eqv?.170 6 17) (close _V10_Descape__char_D211_k99) (bruijn ##.x.2.240 1 0) '#\backspace))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->vars[0]), 1,
      VEncodePointer(&_V10_Dstring_D1362.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 6-1, 17)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Descape__char_D211_k99, env)}),
      upenv->vars[0],
      VEncodeChar('\t'));
}
}
static void _V10_Descape__char_D211_lambda11(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.eqv?.170 5 17) (close _V10_Descape__char_D211_k98) (bruijn ##.x.2.240 0 0) '#\alarm)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 5-1, 17)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Descape__char_D211_k98, env)}),
      _var0,
      VEncodeChar('\a'));
}
static void _V10_Descape__char_D211_lambda10(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Descape__char_D211_lambda10, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V10_Descape__char_D211_lambda11) (bruijn ##.c.239 0 1))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Descape__char_D211_lambda11, .env = env }, }, 1,
      _var1);
}
static void _V10_Dprint__literal__string_D212_k105(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__literal__string_D212_k105, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.printf.155 5 2) (bruijn ##.k.654 1 0) (##string ##.string.1370) (bruijn ##.x.655 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 5-1, 2)), 3,
      upenv->vars[0],
      VEncodePointer(&_V10_Dstring_D1370.sym, VPOINTER_OTHER),
      _var0);
}
static void _V10_Dprint__literal__string_D212_lambda12(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__literal__string_D212_lambda12, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##.mangle-symbol.177 4 24) (close _V10_Dprint__literal__string_D212_k105) (bruijn ##.x.241 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->up->vars[24]), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__literal__string_D212_k105, env)}),
      _var1);
}
static void _V10_Dprint__intrinsic_D213_k106(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__intrinsic_D213_k106, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.printf.155 5 2) (bruijn ##.k.656 1 0) (##string ##.string.1371) (bruijn ##.x.657 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 5-1, 2)), 3,
      upenv->vars[0],
      VEncodePointer(&_V10_Dstring_D1371.sym, VPOINTER_OTHER),
      _var0);
}
static void _V10_Dprint__intrinsic_D213_lambda13(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__intrinsic_D213_lambda13, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##.mangle-symbol.177 4 24) (close _V10_Dprint__intrinsic_D213_k106) (bruijn ##.x.242 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->up->vars[24]), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__intrinsic_D213_k106, env)}),
      _var1);
}
static void _V10_Dprint__literal_D214_k112(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__literal_D214_k112, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.printf.155 10 2) (bruijn ##.k.658 6 0) (##string ##.string.1376) (bruijn ##.x.664 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 10-1, 2)), 3,
      VGetArg(upenv, 6-1, 0),
      VEncodePointer(&_V10_Dstring_D1376.sym, VPOINTER_OTHER),
      _var0);
}
static void _V10_Dprint__literal_D214_k116(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__literal_D214_k116, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.display.174 13 21) (bruijn ##.k.658 9 0) (bruijn ##.x.668 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 13-1, 21)), 2,
      VGetArg(upenv, 9-1, 0),
      _var0);
}
static void _V10_Dprint__literal_D214_k115(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__literal_D214_k115, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.667 0 0) ((bruijn ##.mangle-symbol.177 12 24) (close _V10_Dprint__literal_D214_k116) (bruijn ##.x.243 8 1)) ((bruijn ##.compiler-error.195 12 42) (bruijn ##.k.658 8 0) (##string ##.string.1379) (bruijn ##.x.243 8 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 12-1, 24)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__literal_D214_k116, env)}),
      VGetArg(upenv, 8-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 12-1, 42)), 3,
      VGetArg(upenv, 8-1, 0),
      VEncodePointer(&_V10_Dstring_D1379.sym, VPOINTER_OTHER),
      VGetArg(upenv, 8-1, 1));
}
}
static void _V10_Dprint__literal_D214_k114(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__literal_D214_k114, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.666 0 0) ((bruijn ##.printf.155 11 2) (bruijn ##.k.658 7 0) (##string ##.string.1378)) ((bruijn ##.symbol?.168 11 15) (close _V10_Dprint__literal_D214_k115) (bruijn ##.x.243 7 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 11-1, 2)), 2,
      VGetArg(upenv, 7-1, 0),
      VEncodePointer(&_V10_Dstring_D1378.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 11-1, 15)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__literal_D214_k115, env)}),
      VGetArg(upenv, 7-1, 1));
}
}
static void _V10_Dprint__literal_D214_k113(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__literal_D214_k113, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.665 0 0) ((bruijn ##.printf.155 10 2) (bruijn ##.k.658 6 0) (##string ##.string.1377)) ((bruijn ##.eq?.183 10 30) (close _V10_Dprint__literal_D214_k114) (bruijn ##.x.243 6 1) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 10-1, 2)), 2,
      VGetArg(upenv, 6-1, 0),
      VEncodePointer(&_V10_Dstring_D1377.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 10-1, 30)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__literal_D214_k114, env)}),
      VGetArg(upenv, 6-1, 1),
      VEncodeBool(false));
}
}
static void _V10_Dprint__literal_D214_k111(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__literal_D214_k111, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.663 0 0) ((bruijn ##.escape-char.211 6 3) (close _V10_Dprint__literal_D214_k112) (bruijn ##.x.243 5 1)) ((bruijn ##.eq?.183 9 30) (close _V10_Dprint__literal_D214_k113) (bruijn ##.x.243 5 1) #t))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 6-1, 3)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__literal_D214_k112, env)}),
      VGetArg(upenv, 5-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 9-1, 30)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__literal_D214_k113, env)}),
      VGetArg(upenv, 5-1, 1),
      VEncodeBool(true));
}
}
static void _V10_Dprint__literal_D214_k110(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__literal_D214_k110, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.662 0 0) ((bruijn ##.printf.155 8 2) (bruijn ##.k.658 4 0) (##string ##.string.1375)) ((bruijn ##.char?.184 8 31) (close _V10_Dprint__literal_D214_k111) (bruijn ##.x.243 4 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 8-1, 2)), 2,
      upenv->up->up->up->vars[0],
      VEncodePointer(&_V10_Dstring_D1375.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 8-1, 31)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__literal_D214_k111, env)}),
      upenv->up->up->up->vars[1]);
}
}
static void _V10_Dprint__literal_D214_k109(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__literal_D214_k109, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.661 0 0) ((bruijn ##.printf.155 7 2) (bruijn ##.k.658 3 0) (##string ##.string.1374)) (##vcore.nullptr? (close _V10_Dprint__literal_D214_k110) (bruijn ##.x.243 3 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 7-1, 2)), 2,
      upenv->up->up->vars[0],
      VEncodePointer(&_V10_Dstring_D1374.sym, VPOINTER_OTHER));
} else {
    VCallFuncWithGC(runtime, (VFunc)VNullptrP2, 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__literal_D214_k110, env)}),
      upenv->up->up->vars[1]);
}
}
static void _V10_Dprint__literal_D214_k108(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__literal_D214_k108, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.660 0 0) ((bruijn ##.printf.155 6 2) (bruijn ##.k.658 2 0) (##string ##.string.1373) (bruijn ##.x.243 2 1)) (##vcore.void? (close _V10_Dprint__literal_D214_k109) (bruijn ##.x.243 2 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 6-1, 2)), 3,
      upenv->up->vars[0],
      VEncodePointer(&_V10_Dstring_D1373.sym, VPOINTER_OTHER),
      upenv->up->vars[1]);
} else {
    VCallFuncWithGC(runtime, (VFunc)VVoidP2, 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__literal_D214_k109, env)}),
      upenv->up->vars[1]);
}
}
static void _V10_Dprint__literal_D214_k107(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__literal_D214_k107, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.659 0 0) ((bruijn ##.printf.155 5 2) (bruijn ##.k.658 1 0) (##string ##.string.1372) (bruijn ##.x.243 1 1)) ((bruijn ##.number?.185 5 32) (close _V10_Dprint__literal_D214_k108) (bruijn ##.x.243 1 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 5-1, 2)), 3,
      upenv->vars[0],
      VEncodePointer(&_V10_Dstring_D1372.sym, VPOINTER_OTHER),
      upenv->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 5-1, 32)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__literal_D214_k108, env)}),
      upenv->vars[1]);
}
}
static void _V10_Dprint__literal_D214_lambda14(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__literal_D214_lambda14, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##.integer?.186 4 33) (close _V10_Dprint__literal_D214_k107) (bruijn ##.x.243 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->up->vars[33]), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__literal_D214_k107, env)}),
      _var1);
}
static void _V10_Dprint__literal__declaration_D215_k128(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__literal__declaration_D215_k128, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.printf.155 16 2) (bruijn ##.k.669 12 0) (##string ##.string.1380) (bruijn ##.len.247 1 0) (bruijn ##.mangled.245 8 0) (bruijn ##.len.247 1 0) (bruijn ##.escaped.246 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 16-1, 2)), 6,
      VGetArg(upenv, 12-1, 0),
      VEncodePointer(&_V10_Dstring_D1380.sym, VPOINTER_OTHER),
      upenv->vars[0],
      VGetArg(upenv, 8-1, 0),
      upenv->vars[0],
      VGetArg(upenv, 5-1, 0));
}
static void _V10_Dprint__literal__declaration_D215_k127(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__literal__declaration_D215_k127, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.printf.155 15 2) (close _V10_Dprint__literal__declaration_D215_k128) (##string ##.string.1381) (bruijn ##.mangled.245 7 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 15-1, 2)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__literal__declaration_D215_k128, env)}),
      VEncodePointer(&_V10_Dstring_D1381.sym, VPOINTER_OTHER),
      VGetArg(upenv, 7-1, 0));
}
static void _V10_Dprint__literal__declaration_D215_k126(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__literal__declaration_D215_k126, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.+.153 14 0) (close _V10_Dprint__literal__declaration_D215_k127) (bruijn ##.x.672 0 0) 1)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 14-1, 0)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__literal__declaration_D215_k127, env)}),
      _var0,
      VEncodeInt(1l));
}
static void _V10_Dprint__literal__declaration_D215_k125(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__literal__declaration_D215_k125, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.string-length.181 13 28) (close _V10_Dprint__literal__declaration_D215_k126) (bruijn ##.x.673 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 13-1, 28)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__literal__declaration_D215_k126, env)}),
      _var0);
}
static void _V10_Dprint__literal__declaration_D215_k124(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__literal__declaration_D215_k124, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.symbol->string.182 12 29) (close _V10_Dprint__literal__declaration_D215_k125) (bruijn ##.x.674 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 12-1, 29)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__literal__declaration_D215_k125, env)}),
      _var0);
}
static void _V10_Dprint__literal__declaration_D215_k123(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__literal__declaration_D215_k123, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.car.160 11 7) (close _V10_Dprint__literal__declaration_D215_k124) (bruijn ##.lit.244 7 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 11-1, 7)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__literal__declaration_D215_k124, env)}),
      VGetArg(upenv, 7-1, 1));
}
static void _V10_Dprint__literal__declaration_D215_k122(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__literal__declaration_D215_k122, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.escape-string.210 7 2) (close _V10_Dprint__literal__declaration_D215_k123) (bruijn ##.x.675 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 7-1, 2)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__literal__declaration_D215_k123, env)}),
      _var0);
}
static void _V10_Dprint__literal__declaration_D215_k121(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__literal__declaration_D215_k121, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.symbol->string.182 9 29) (close _V10_Dprint__literal__declaration_D215_k122) (bruijn ##.x.676 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 9-1, 29)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__literal__declaration_D215_k122, env)}),
      _var0);
}
static void _V10_Dprint__literal__declaration_D215_k120(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__literal__declaration_D215_k120, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.car.160 8 7) (close _V10_Dprint__literal__declaration_D215_k121) (bruijn ##.lit.244 4 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 8-1, 7)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__literal__declaration_D215_k121, env)}),
      upenv->up->up->up->vars[1]);
}
static void _V10_Dprint__literal__declaration_D215_k119(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__literal__declaration_D215_k119, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.mangle-symbol.177 7 24) (close _V10_Dprint__literal__declaration_D215_k120) (bruijn ##.x.677 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 7-1, 24)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__literal__declaration_D215_k120, env)}),
      _var0);
}
static void _V10_Dprint__literal__declaration_D215_k137(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__literal__declaration_D215_k137, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.printf.155 15 2) (bruijn ##.k.669 11 0) (##string ##.string.1382) (bruijn ##.len.250 0 0) (bruijn ##.mangled.248 5 0) (bruijn ##.len.250 0 0) (bruijn ##.escaped.249 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 15-1, 2)), 6,
      VGetArg(upenv, 11-1, 0),
      VEncodePointer(&_V10_Dstring_D1382.sym, VPOINTER_OTHER),
      _var0,
      VGetArg(upenv, 5-1, 0),
      _var0,
      upenv->up->up->vars[0]);
}
static void _V10_Dprint__literal__declaration_D215_k136(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__literal__declaration_D215_k136, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.+.153 14 0) (close _V10_Dprint__literal__declaration_D215_k137) (bruijn ##.x.679 0 0) 1)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 14-1, 0)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__literal__declaration_D215_k137, env)}),
      _var0,
      VEncodeInt(1l));
}
static void _V10_Dprint__literal__declaration_D215_k135(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__literal__declaration_D215_k135, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.string-length.181 13 28) (close _V10_Dprint__literal__declaration_D215_k136) (bruijn ##.x.680 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 13-1, 28)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__literal__declaration_D215_k136, env)}),
      _var0);
}
static void _V10_Dprint__literal__declaration_D215_k134(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__literal__declaration_D215_k134, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.car.160 12 7) (close _V10_Dprint__literal__declaration_D215_k135) (bruijn ##.lit.244 8 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 12-1, 7)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__literal__declaration_D215_k135, env)}),
      VGetArg(upenv, 8-1, 1));
}
static void _V10_Dprint__literal__declaration_D215_k133(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__literal__declaration_D215_k133, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.escape-string.210 8 2) (close _V10_Dprint__literal__declaration_D215_k134) (bruijn ##.x.681 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 8-1, 2)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__literal__declaration_D215_k134, env)}),
      _var0);
}
static void _V10_Dprint__literal__declaration_D215_k132(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__literal__declaration_D215_k132, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.car.160 10 7) (close _V10_Dprint__literal__declaration_D215_k133) (bruijn ##.lit.244 6 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 10-1, 7)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__literal__declaration_D215_k133, env)}),
      VGetArg(upenv, 6-1, 1));
}
static void _V10_Dprint__literal__declaration_D215_k131(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__literal__declaration_D215_k131, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.mangle-symbol.177 9 24) (close _V10_Dprint__literal__declaration_D215_k132) (bruijn ##.x.682 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 9-1, 24)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__literal__declaration_D215_k132, env)}),
      _var0);
}
static void _V10_Dprint__literal__declaration_D215_k141(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__literal__declaration_D215_k141, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.eqv?.170 12 17) (bruijn ##.k.688 1 0) (bruijn ##.x.689 0 0) '##intrinsic)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 12-1, 17)), 3,
      upenv->vars[0],
      _var0,
      _V10intrinsic);
}
static void _V10_Dprint__literal__declaration_D215_k140(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__literal__declaration_D215_k140, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.687 1 0) ((bruijn ##.caar.179 11 26) (close _V10_Dprint__literal__declaration_D215_k141) (bruijn ##.lit.244 7 1)) ((bruijn ##.k.688 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 11-1, 26)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__literal__declaration_D215_k141, env)}),
      VGetArg(upenv, 7-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__literal__declaration_D215_k146(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__literal__declaration_D215_k146, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.printf.155 15 2) (bruijn ##.k.669 11 0) (##string ##.string.1383) (bruijn ##.mangled.251 2 0) (bruijn ##.x.685 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 15-1, 2)), 4,
      VGetArg(upenv, 11-1, 0),
      VEncodePointer(&_V10_Dstring_D1383.sym, VPOINTER_OTHER),
      upenv->up->vars[0],
      _var0);
}
static void _V10_Dprint__literal__declaration_D215_k145(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__literal__declaration_D215_k145, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cdr.175 14 22) (close _V10_Dprint__literal__declaration_D215_k146) (bruijn ##.lit.244 10 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 14-1, 22)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__literal__declaration_D215_k146, env)}),
      VGetArg(upenv, 10-1, 1));
}
static void _V10_Dprint__literal__declaration_D215_k144(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__literal__declaration_D215_k144, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.printf.155 13 2) (close _V10_Dprint__literal__declaration_D215_k145) (##string ##.string.1384) (bruijn ##.mangled.251 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 13-1, 2)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__literal__declaration_D215_k145, env)}),
      VEncodePointer(&_V10_Dstring_D1384.sym, VPOINTER_OTHER),
      _var0);
}
static void _V10_Dprint__literal__declaration_D215_k143(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__literal__declaration_D215_k143, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.mangle-symbol.177 12 24) (close _V10_Dprint__literal__declaration_D215_k144) (bruijn ##.x.686 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 12-1, 24)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__literal__declaration_D215_k144, env)}),
      _var0);
}
static void _V10_Dprint__literal__declaration_D215_k142(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__literal__declaration_D215_k142, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.683 0 0) ((bruijn ##.cadar.178 11 25) (close _V10_Dprint__literal__declaration_D215_k143) (bruijn ##.lit.244 7 1)) ((bruijn ##.compiler-error.195 11 42) (bruijn ##.k.669 7 0) (##string ##.string.1385) (bruijn ##.lit.244 7 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 11-1, 25)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__literal__declaration_D215_k143, env)}),
      VGetArg(upenv, 7-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 11-1, 42)), 3,
      VGetArg(upenv, 7-1, 0),
      VEncodePointer(&_V10_Dstring_D1385.sym, VPOINTER_OTHER),
      VGetArg(upenv, 7-1, 1));
}
}
static void _V10_Dprint__literal__declaration_D215_k139(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__literal__declaration_D215_k139, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dprint__literal__declaration_D215_k140) (close _V10_Dprint__literal__declaration_D215_k142))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__literal__declaration_D215_k140, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__literal__declaration_D215_k142, env)}));
}
static void _V10_Dprint__literal__declaration_D215_k138(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__literal__declaration_D215_k138, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.pair?.169 9 16) (close _V10_Dprint__literal__declaration_D215_k139) (bruijn ##.x.690 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 9-1, 16)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__literal__declaration_D215_k139, env)}),
      _var0);
}
static void _V10_Dprint__literal__declaration_D215_k130(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__literal__declaration_D215_k130, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.678 0 0) ((bruijn ##.cdr.175 8 22) (close _V10_Dprint__literal__declaration_D215_k131) (bruijn ##.lit.244 4 1)) ((bruijn ##.car.160 8 7) (close _V10_Dprint__literal__declaration_D215_k138) (bruijn ##.lit.244 4 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 8-1, 22)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__literal__declaration_D215_k131, env)}),
      upenv->up->up->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 8-1, 7)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__literal__declaration_D215_k138, env)}),
      upenv->up->up->up->vars[1]);
}
}
static void _V10_Dprint__literal__declaration_D215_k129(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__literal__declaration_D215_k129, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.string?.180 7 27) (close _V10_Dprint__literal__declaration_D215_k130) (bruijn ##.x.691 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 7-1, 27)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__literal__declaration_D215_k130, env)}),
      _var0);
}
static void _V10_Dprint__literal__declaration_D215_k118(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__literal__declaration_D215_k118, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.670 0 0) ((bruijn ##.car.160 6 7) (close _V10_Dprint__literal__declaration_D215_k119) (bruijn ##.lit.244 2 1)) ((bruijn ##.car.160 6 7) (close _V10_Dprint__literal__declaration_D215_k129) (bruijn ##.lit.244 2 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 6-1, 7)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__literal__declaration_D215_k119, env)}),
      upenv->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 6-1, 7)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__literal__declaration_D215_k129, env)}),
      upenv->up->vars[1]);
}
}
static void _V10_Dprint__literal__declaration_D215_k117(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__literal__declaration_D215_k117, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.symbol?.168 5 15) (close _V10_Dprint__literal__declaration_D215_k118) (bruijn ##.x.692 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 5-1, 15)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__literal__declaration_D215_k118, env)}),
      _var0);
}
static void _V10_Dprint__literal__declaration_D215_lambda15(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__literal__declaration_D215_lambda15, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##.car.160 4 7) (close _V10_Dprint__literal__declaration_D215_k117) (bruijn ##.lit.244 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->up->vars[7]), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__literal__declaration_D215_k117, env)}),
      _var1);
}
static void _V10_Dprint__init_D253_k150(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__init_D253_k150, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.printf.155 10 2) (bruijn ##.k.694 4 0) (##string ##.string.1386) (bruijn ##.mangled.255 0 0) (bruijn ##.mangled.255 0 0) (bruijn ##.mangled.255 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 10-1, 2)), 5,
      upenv->up->up->up->vars[0],
      VEncodePointer(&_V10_Dstring_D1386.sym, VPOINTER_OTHER),
      _var0,
      _var0,
      _var0);
}
static void _V10_Dprint__init_D253_k149(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__init_D253_k149, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.mangle-symbol.177 9 24) (close _V10_Dprint__init_D253_k150) (bruijn ##.x.696 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 9-1, 24)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__init_D253_k150, env)}),
      _var0);
}
static void _V10_Dprint__init_D253_k154(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__init_D253_k154, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.eqv?.170 12 17) (bruijn ##.k.700 1 0) (bruijn ##.x.701 0 0) '##intrinsic)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 12-1, 17)), 3,
      upenv->vars[0],
      _var0,
      _V10intrinsic);
}
static void _V10_Dprint__init_D253_k153(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__init_D253_k153, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.699 1 0) ((bruijn ##.caar.179 11 26) (close _V10_Dprint__init_D253_k154) (bruijn ##.lit.254 5 1)) ((bruijn ##.k.700 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 11-1, 26)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__init_D253_k154, env)}),
      VGetArg(upenv, 5-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__init_D253_k157(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__init_D253_k157, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.printf.155 13 2) (bruijn ##.k.694 7 0) (##string ##.string.1387) (bruijn ##.mangled.256 0 0) (bruijn ##.mangled.256 0 0) (bruijn ##.mangled.256 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 13-1, 2)), 5,
      VGetArg(upenv, 7-1, 0),
      VEncodePointer(&_V10_Dstring_D1387.sym, VPOINTER_OTHER),
      _var0,
      _var0,
      _var0);
}
static void _V10_Dprint__init_D253_k156(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__init_D253_k156, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.mangle-symbol.177 12 24) (close _V10_Dprint__init_D253_k157) (bruijn ##.x.698 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 12-1, 24)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__init_D253_k157, env)}),
      _var0);
}
static void _V10_Dprint__init_D253_k155(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__init_D253_k155, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.697 0 0) ((bruijn ##.cadar.178 11 25) (close _V10_Dprint__init_D253_k156) (bruijn ##.lit.254 5 1)) ((bruijn ##.k.694 5 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 11-1, 25)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__init_D253_k156, env)}),
      VGetArg(upenv, 5-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 5-1, 0)), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__init_D253_k152(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__init_D253_k152, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dprint__init_D253_k153) (close _V10_Dprint__init_D253_k155))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__init_D253_k153, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__init_D253_k155, env)}));
}
static void _V10_Dprint__init_D253_k151(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__init_D253_k151, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.pair?.169 9 16) (close _V10_Dprint__init_D253_k152) (bruijn ##.x.702 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 9-1, 16)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__init_D253_k152, env)}),
      _var0);
}
static void _V10_Dprint__init_D253_k148(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__init_D253_k148, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.695 0 0) ((bruijn ##.car.160 8 7) (close _V10_Dprint__init_D253_k149) (bruijn ##.lit.254 2 1)) ((bruijn ##.car.160 8 7) (close _V10_Dprint__init_D253_k151) (bruijn ##.lit.254 2 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 8-1, 7)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__init_D253_k149, env)}),
      upenv->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 8-1, 7)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__init_D253_k151, env)}),
      upenv->up->vars[1]);
}
}
static void _V10_Dprint__init_D253_k147(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__init_D253_k147, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.symbol?.168 7 15) (close _V10_Dprint__init_D253_k148) (bruijn ##.x.703 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 7-1, 15)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__init_D253_k148, env)}),
      _var0);
}
static void _V10_Dprint__init_D253_lambda17(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__init_D253_lambda17, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##.car.160 6 7) (close _V10_Dprint__init_D253_k147) (bruijn ##.lit.254 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 6-1, 7)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__init_D253_k147, env)}),
      _var1);
}
static void _V10_Dprint__dllmain_D216_k160(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__dllmain_D216_k160, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.printf.155 8 2) (bruijn ##.k.693 4 0) (##string ##.string.1388))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 8-1, 2)), 2,
      upenv->up->up->up->vars[0],
      VEncodePointer(&_V10_Dstring_D1388.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__dllmain_D216_k159(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__dllmain_D216_k159, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.for-each.194 7 41) (close _V10_Dprint__dllmain_D216_k160) (bruijn ##.print-init.253 2 0) (bruijn ##.literals.252 3 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 7-1, 41)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__dllmain_D216_k160, env)}),
      upenv->up->vars[0],
      upenv->up->up->vars[1]);
}
static void _V10_Dprint__dllmain_D216_k158(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__dllmain_D216_k158, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.printf.155 6 2) (close _V10_Dprint__dllmain_D216_k159) (##string ##.string.1389) (bruijn ##.x.706 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 6-1, 2)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__dllmain_D216_k159, env)}),
      VEncodePointer(&_V10_Dstring_D1389.sym, VPOINTER_OTHER),
      _var0);
}
static void _V10_Dprint__dllmain_D216_lambda16(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__dllmain_D216_lambda16, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (letrec 1 ((close _V10_Dprint__init_D253_lambda17)) ((bruijn ##.gendllmain.199 4 0) (close _V10_Dprint__dllmain_D216_k158)))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__init_D253_lambda17, env)});
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->up->vars[0]), 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__dllmain_D216_k158, env)}));
    }
}
static void _V10_Dcloses_Q_D217_k163(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D217_k163, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (##inline ##vcore.pair? (bruijn ##.expr.6.261 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.6.261 0 0))) ((bruijn ##.kk.3.258 5 1) (bruijn ##.k.791 2 0) #t) ((bruijn ##.k.791 2 0) #f)) ((bruijn ##.k.791 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 5-1, 1)), 2,
      upenv->up->vars[0],
      VEncodeBool(true));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dcloses_Q_D217_k162(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D217_k162, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.792 0 0) ((close _V10_Dcloses_Q_D217_k163) (##inline ##vcore.cdr (bruijn ##.expr.5.260 2 0))) ((bruijn ##.k.791 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dcloses_Q_D217_k163, .env = env }, }, 1,
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dcloses_Q_D217_k161(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D217_k161, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.5.260 1 0)) ((bruijn ##.equal?.158 8 5) (close _V10_Dcloses_Q_D217_k162) 'close (##inline ##vcore.car (bruijn ##.expr.5.260 1 0))) ((bruijn ##.k.791 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 8-1, 5)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcloses_Q_D217_k162, env)}),
      _V0close,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dcloses_Q_D217_k166(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D217_k166, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.788 0 0) ((bruijn ##.kk.3.258 6 1) (bruijn ##.k.787 1 0) #f) ((bruijn ##.k.787 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 6-1, 1)), 2,
      upenv->vars[0],
      VEncodeBool(false));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dcloses_Q_D217_k165(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D217_k165, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.7.263 1 0)) ((bruijn ##.equal?.158 10 5) (close _V10_Dcloses_Q_D217_k166) 'quote (##inline ##vcore.car (bruijn ##.expr.7.263 1 0))) ((bruijn ##.k.787 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 10-1, 5)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcloses_Q_D217_k166, env)}),
      _V0quote,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dcloses_Q_D217_k169(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D217_k169, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.784 0 0) ((bruijn ##.kk.3.258 8 1) (bruijn ##.k.783 1 0) #f) ((bruijn ##.k.783 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 8-1, 1)), 2,
      upenv->vars[0],
      VEncodeBool(false));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dcloses_Q_D217_k168(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D217_k168, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.8.264 1 0)) ((bruijn ##.equal?.158 12 5) (close _V10_Dcloses_Q_D217_k169) 'bruijn (##inline ##vcore.car (bruijn ##.expr.8.264 1 0))) ((bruijn ##.k.783 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 12-1, 5)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcloses_Q_D217_k169, env)}),
      _V0bruijn,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dcloses_Q_D217_k172(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D217_k172, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.780 0 0) ((bruijn ##.kk.3.258 10 1) (bruijn ##.k.779 1 0) #f) ((bruijn ##.k.779 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 10-1, 1)), 2,
      upenv->vars[0],
      VEncodeBool(false));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dcloses_Q_D217_k171(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D217_k171, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.9.265 1 0)) ((bruijn ##.equal?.158 14 5) (close _V10_Dcloses_Q_D217_k172) '##string (##inline ##vcore.car (bruijn ##.expr.9.265 1 0))) ((bruijn ##.k.779 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 14-1, 5)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcloses_Q_D217_k172, env)}),
      _V10string,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dcloses_Q_D217_k175(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D217_k175, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.776 0 0) ((bruijn ##.kk.3.258 12 1) (bruijn ##.k.775 1 0) #f) ((bruijn ##.k.775 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 12-1, 1)), 2,
      upenv->vars[0],
      VEncodeBool(false));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dcloses_Q_D217_k174(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D217_k174, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.10.266 1 0)) ((bruijn ##.equal?.158 16 5) (close _V10_Dcloses_Q_D217_k175) '##intrinsic (##inline ##vcore.car (bruijn ##.expr.10.266 1 0))) ((bruijn ##.k.775 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 16-1, 5)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcloses_Q_D217_k175, env)}),
      _V10intrinsic,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dcloses_Q_D217_k184(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D217_k184, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.771 0 0) ((bruijn ##.k.770 1 0) (bruijn ##.p.771 0 0)) ((bruijn ##.closes?.217 22 9) (bruijn ##.k.770 1 0) (##inline ##vcore.car (bruijn ##.expr.14.272 3 0))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 1,
      _var0);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 22-1, 9)), 2,
      upenv->vars[0],
      VInlineCar2(runtime,
        upenv->up->up->vars[0]));
}
}
static void _V10_Dcloses_Q_D217_k183(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D217_k183, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.769 1 0) ((bruijn ##.k.770 0 0) (bruijn ##.p.769 1 0)) ((bruijn ##.closes?.217 21 9) (close _V10_Dcloses_Q_D217_k184) (##inline ##vcore.car (bruijn ##.expr.13.270 3 0))))
if(VDecodeBool(
upenv->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      upenv->vars[0]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 21-1, 9)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcloses_Q_D217_k184, env)}),
      VInlineCar2(runtime,
        upenv->up->up->vars[0]));
}
}
static void _V10_Dcloses_Q_D217_k185(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D217_k185, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.3.258 19 1) (bruijn ##.k.762 6 0) (bruijn ##.x.768 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 19-1, 1)), 2,
      VGetArg(upenv, 6-1, 0),
      _var0);
}
static void _V10_Dcloses_Q_D217_k182(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D217_k182, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dcloses_Q_D217_k183) (close _V10_Dcloses_Q_D217_k185))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dcloses_Q_D217_k183, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcloses_Q_D217_k185, env)}));
}
static void _V10_Dcloses_Q_D217_k181(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D217_k181, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.14.272 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.14.272 0 0))) ((bruijn ##.closes?.217 19 9) (close _V10_Dcloses_Q_D217_k182) (##inline ##vcore.car (bruijn ##.expr.12.268 2 0))) ((bruijn ##.k.762 4 0) #f)) ((bruijn ##.k.762 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 19-1, 9)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcloses_Q_D217_k182, env)}),
      VInlineCar2(runtime,
        upenv->up->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dcloses_Q_D217_k180(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D217_k180, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.13.270 0 0)) ((close _V10_Dcloses_Q_D217_k181) (##inline ##vcore.cdr (bruijn ##.expr.13.270 0 0))) ((bruijn ##.k.762 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dcloses_Q_D217_k181, .env = env }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dcloses_Q_D217_k179(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D217_k179, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.12.268 0 0)) ((close _V10_Dcloses_Q_D217_k180) (##inline ##vcore.cdr (bruijn ##.expr.12.268 0 0))) ((bruijn ##.k.762 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dcloses_Q_D217_k180, .env = env }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dcloses_Q_D217_k178(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D217_k178, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.763 0 0) ((close _V10_Dcloses_Q_D217_k179) (##inline ##vcore.cdr (bruijn ##.expr.11.267 2 0))) ((bruijn ##.k.762 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dcloses_Q_D217_k179, .env = env }, }, 1,
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dcloses_Q_D217_k177(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D217_k177, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.11.267 1 0)) ((bruijn ##.equal?.158 18 5) (close _V10_Dcloses_Q_D217_k178) 'if (##inline ##vcore.car (bruijn ##.expr.11.267 1 0))) ((bruijn ##.k.762 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 18-1, 5)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcloses_Q_D217_k178, env)}),
      _V0if,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dcloses_Q_D217_k191(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D217_k191, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (##inline ##vcore.pair? (bruijn ##.expr.18.279 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.18.279 0 0))) ((bruijn ##.kk.3.258 19 1) (bruijn ##.k.753 4 0) #t) ((bruijn ##.k.753 4 0) #f)) ((bruijn ##.k.753 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 19-1, 1)), 2,
      upenv->up->up->up->vars[0],
      VEncodeBool(true));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dcloses_Q_D217_k190(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D217_k190, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.17.277 0 0)) ((close _V10_Dcloses_Q_D217_k191) (##inline ##vcore.cdr (bruijn ##.expr.17.277 0 0))) ((bruijn ##.k.753 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dcloses_Q_D217_k191, .env = env }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dcloses_Q_D217_k189(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D217_k189, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.16.275 0 0)) ((close _V10_Dcloses_Q_D217_k190) (##inline ##vcore.cdr (bruijn ##.expr.16.275 0 0))) ((bruijn ##.k.753 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dcloses_Q_D217_k190, .env = env }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dcloses_Q_D217_k188(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D217_k188, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.754 0 0) ((close _V10_Dcloses_Q_D217_k189) (##inline ##vcore.cdr (bruijn ##.expr.15.274 2 0))) ((bruijn ##.k.753 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dcloses_Q_D217_k189, .env = env }, }, 1,
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dcloses_Q_D217_k187(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D217_k187, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.15.274 1 0)) ((bruijn ##.equal?.158 20 5) (close _V10_Dcloses_Q_D217_k188) 'set! (##inline ##vcore.car (bruijn ##.expr.15.274 1 0))) ((bruijn ##.k.753 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 20-1, 5)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcloses_Q_D217_k188, env)}),
      _V0set_B,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dcloses_Q_D217_k197(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D217_k197, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (##inline ##vcore.pair? (bruijn ##.expr.22.286 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.22.286 0 0))) ((bruijn ##.kk.3.258 21 1) (bruijn ##.k.744 4 0) #t) ((bruijn ##.k.744 4 0) #f)) ((bruijn ##.k.744 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 21-1, 1)), 2,
      upenv->up->up->up->vars[0],
      VEncodeBool(true));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dcloses_Q_D217_k196(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D217_k196, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.21.284 0 0)) ((close _V10_Dcloses_Q_D217_k197) (##inline ##vcore.cdr (bruijn ##.expr.21.284 0 0))) ((bruijn ##.k.744 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dcloses_Q_D217_k197, .env = env }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dcloses_Q_D217_k195(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D217_k195, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.20.282 0 0)) ((close _V10_Dcloses_Q_D217_k196) (##inline ##vcore.cdr (bruijn ##.expr.20.282 0 0))) ((bruijn ##.k.744 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dcloses_Q_D217_k196, .env = env }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dcloses_Q_D217_k194(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D217_k194, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.745 0 0) ((close _V10_Dcloses_Q_D217_k195) (##inline ##vcore.cdr (bruijn ##.expr.19.281 2 0))) ((bruijn ##.k.744 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dcloses_Q_D217_k195, .env = env }, }, 1,
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dcloses_Q_D217_k193(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D217_k193, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.19.281 1 0)) ((bruijn ##.equal?.158 22 5) (close _V10_Dcloses_Q_D217_k194) 'define (##inline ##vcore.car (bruijn ##.expr.19.281 1 0))) ((bruijn ##.k.744 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 22-1, 5)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcloses_Q_D217_k194, env)}),
      _V0define,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dcloses_Q_D217_k202(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D217_k202, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.3.258 22 1) (bruijn ##.k.738 3 0) (bruijn ##.x.741 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 22-1, 1)), 2,
      upenv->up->up->vars[0],
      _var0);
}
static void _V10_Dcloses_Q_D217_k201(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D217_k201, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.24.289 0 0)) ((bruijn ##.closes?.217 23 9) (close _V10_Dcloses_Q_D217_k202) (##inline ##vcore.cdr (bruijn ##.expr.24.289 0 0))) ((bruijn ##.k.738 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 23-1, 9)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcloses_Q_D217_k202, env)}),
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dcloses_Q_D217_k200(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D217_k200, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.739 0 0) ((close _V10_Dcloses_Q_D217_k201) (##inline ##vcore.cdr (bruijn ##.expr.23.288 2 0))) ((bruijn ##.k.738 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dcloses_Q_D217_k201, .env = env }, }, 1,
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dcloses_Q_D217_k199(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D217_k199, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.23.288 1 0)) ((bruijn ##.equal?.158 24 5) (close _V10_Dcloses_Q_D217_k200) '##inline (##inline ##vcore.car (bruijn ##.expr.23.288 1 0))) ((bruijn ##.k.738 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 24-1, 5)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcloses_Q_D217_k200, env)}),
      _V10inline,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dcloses_Q_D217_k205(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D217_k205, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.735 0 0) ((bruijn ##.kk.3.258 22 1) (bruijn ##.k.734 1 0) #t) ((bruijn ##.k.734 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 22-1, 1)), 2,
      upenv->vars[0],
      VEncodeBool(true));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dcloses_Q_D217_k204(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D217_k204, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.25.292 1 0)) ((bruijn ##.equal?.158 26 5) (close _V10_Dcloses_Q_D217_k205) 'letrec (##inline ##vcore.car (bruijn ##.expr.25.292 1 0))) ((bruijn ##.k.734 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 26-1, 5)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcloses_Q_D217_k205, env)}),
      _V0letrec,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dcloses_Q_D217_k208(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D217_k208, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.3.258 24 1) (bruijn ##.k.729 1 0) (bruijn ##.x.731 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 24-1, 1)), 2,
      upenv->vars[0],
      _var0);
}
static void _V10_Dcloses_Q_D217_k207(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D217_k207, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.26.293 1 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.26.293 1 0))) ((bruijn ##.closes?.217 25 9) (close _V10_Dcloses_Q_D217_k208) (##inline ##vcore.car (bruijn ##.expr.26.293 1 0))) ((bruijn ##.k.729 0 0) #f)) ((bruijn ##.k.729 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        upenv->vars[0])))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 25-1, 9)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcloses_Q_D217_k208, env)}),
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dcloses_Q_D217_k212(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D217_k212, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.726 1 0) ((bruijn ##.k.727 0 0) (bruijn ##.p.726 1 0)) ((bruijn ##.closes?.217 29 9) (bruijn ##.k.727 0 0) (##inline ##vcore.cdr (bruijn ##.expr.27.295 3 0))))
if(VDecodeBool(
upenv->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      upenv->vars[0]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 29-1, 9)), 2,
      _var0,
      VInlineCdr2(runtime,
        upenv->up->up->vars[0]));
}
}
static void _V10_Dcloses_Q_D217_k213(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D217_k213, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.3.258 27 1) (bruijn ##.k.724 2 0) (bruijn ##.x.725 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 27-1, 1)), 2,
      upenv->up->vars[0],
      _var0);
}
static void _V10_Dcloses_Q_D217_k211(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D217_k211, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dcloses_Q_D217_k212) (close _V10_Dcloses_Q_D217_k213))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dcloses_Q_D217_k212, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcloses_Q_D217_k213, env)}));
}
static void _V10_Dcloses_Q_D217_k210(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D217_k210, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.27.295 1 0)) ((bruijn ##.closes?.217 27 9) (close _V10_Dcloses_Q_D217_k211) (##inline ##vcore.car (bruijn ##.expr.27.295 1 0))) ((bruijn ##.k.724 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 27-1, 9)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcloses_Q_D217_k211, env)}),
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dcloses_Q_D217_k216(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D217_k216, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.3.258 28 1) (bruijn ##.k.708 28 0) (bruijn ##.x.722 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 28-1, 1)), 2,
      VGetArg(upenv, 28-1, 0),
      _var0);
}
static void _V10_Dcloses_Q_D217_k215(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D217_k215, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.compiler-error.195 32 42) (close _V10_Dcloses_Q_D217_k216) (##string ##.string.1390) (bruijn ##.expr.257 28 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 32-1, 42)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcloses_Q_D217_k216, env)}),
      VEncodePointer(&_V10_Dstring_D1390.sym, VPOINTER_OTHER),
      VGetArg(upenv, 28-1, 1));
}
static void _V10_Dcloses_Q_D217_lambda33(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.kk.3.258 26 1) (close _V10_Dcloses_Q_D217_k215) #f)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 26-1, 1)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcloses_Q_D217_k215, env)}),
      VEncodeBool(false));
}
static void _V10_Dcloses_Q_D217_k214(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D217_k214, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dcloses_Q_D217_lambda33) (bruijn ##.input.4.259 24 0))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dcloses_Q_D217_lambda33, .env = env }, }, 1,
      VGetArg(upenv, 24-1, 0));
}
static void _V10_Dcloses_Q_D217_lambda32(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dcloses_Q_D217_k210) (close _V10_Dcloses_Q_D217_k214))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dcloses_Q_D217_k210, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcloses_Q_D217_k214, env)}));
}
static void _V10_Dcloses_Q_D217_k209(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D217_k209, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dcloses_Q_D217_lambda32) (bruijn ##.input.4.259 22 0))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dcloses_Q_D217_lambda32, .env = env }, }, 1,
      VGetArg(upenv, 22-1, 0));
}
static void _V10_Dcloses_Q_D217_lambda31(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dcloses_Q_D217_k207) (close _V10_Dcloses_Q_D217_k209))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dcloses_Q_D217_k207, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcloses_Q_D217_k209, env)}));
}
static void _V10_Dcloses_Q_D217_k206(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D217_k206, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dcloses_Q_D217_lambda31) (bruijn ##.input.4.259 20 0))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dcloses_Q_D217_lambda31, .env = env }, }, 1,
      VGetArg(upenv, 20-1, 0));
}
static void _V10_Dcloses_Q_D217_lambda30(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dcloses_Q_D217_k204) (close _V10_Dcloses_Q_D217_k206))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dcloses_Q_D217_k204, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcloses_Q_D217_k206, env)}));
}
static void _V10_Dcloses_Q_D217_k203(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D217_k203, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dcloses_Q_D217_lambda30) (bruijn ##.input.4.259 18 0))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dcloses_Q_D217_lambda30, .env = env }, }, 1,
      VGetArg(upenv, 18-1, 0));
}
static void _V10_Dcloses_Q_D217_lambda29(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dcloses_Q_D217_k199) (close _V10_Dcloses_Q_D217_k203))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dcloses_Q_D217_k199, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcloses_Q_D217_k203, env)}));
}
static void _V10_Dcloses_Q_D217_k198(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D217_k198, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dcloses_Q_D217_lambda29) (bruijn ##.input.4.259 16 0))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dcloses_Q_D217_lambda29, .env = env }, }, 1,
      VGetArg(upenv, 16-1, 0));
}
static void _V10_Dcloses_Q_D217_lambda28(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dcloses_Q_D217_k193) (close _V10_Dcloses_Q_D217_k198))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dcloses_Q_D217_k193, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcloses_Q_D217_k198, env)}));
}
static void _V10_Dcloses_Q_D217_k192(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D217_k192, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dcloses_Q_D217_lambda28) (bruijn ##.input.4.259 14 0))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dcloses_Q_D217_lambda28, .env = env }, }, 1,
      VGetArg(upenv, 14-1, 0));
}
static void _V10_Dcloses_Q_D217_lambda27(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dcloses_Q_D217_k187) (close _V10_Dcloses_Q_D217_k192))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dcloses_Q_D217_k187, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcloses_Q_D217_k192, env)}));
}
static void _V10_Dcloses_Q_D217_k186(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D217_k186, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dcloses_Q_D217_lambda27) (bruijn ##.input.4.259 12 0))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dcloses_Q_D217_lambda27, .env = env }, }, 1,
      VGetArg(upenv, 12-1, 0));
}
static void _V10_Dcloses_Q_D217_lambda26(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dcloses_Q_D217_k177) (close _V10_Dcloses_Q_D217_k186))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dcloses_Q_D217_k177, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcloses_Q_D217_k186, env)}));
}
static void _V10_Dcloses_Q_D217_k176(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D217_k176, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dcloses_Q_D217_lambda26) (bruijn ##.input.4.259 10 0))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dcloses_Q_D217_lambda26, .env = env }, }, 1,
      VGetArg(upenv, 10-1, 0));
}
static void _V10_Dcloses_Q_D217_lambda25(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dcloses_Q_D217_k174) (close _V10_Dcloses_Q_D217_k176))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dcloses_Q_D217_k174, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcloses_Q_D217_k176, env)}));
}
static void _V10_Dcloses_Q_D217_k173(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D217_k173, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dcloses_Q_D217_lambda25) (bruijn ##.input.4.259 8 0))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dcloses_Q_D217_lambda25, .env = env }, }, 1,
      VGetArg(upenv, 8-1, 0));
}
static void _V10_Dcloses_Q_D217_lambda24(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dcloses_Q_D217_k171) (close _V10_Dcloses_Q_D217_k173))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dcloses_Q_D217_k171, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcloses_Q_D217_k173, env)}));
}
static void _V10_Dcloses_Q_D217_k170(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D217_k170, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dcloses_Q_D217_lambda24) (bruijn ##.input.4.259 6 0))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dcloses_Q_D217_lambda24, .env = env }, }, 1,
      VGetArg(upenv, 6-1, 0));
}
static void _V10_Dcloses_Q_D217_lambda23(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dcloses_Q_D217_k168) (close _V10_Dcloses_Q_D217_k170))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dcloses_Q_D217_k168, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcloses_Q_D217_k170, env)}));
}
static void _V10_Dcloses_Q_D217_k167(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D217_k167, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dcloses_Q_D217_lambda23) (bruijn ##.input.4.259 4 0))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dcloses_Q_D217_lambda23, .env = env }, }, 1,
      upenv->up->up->up->vars[0]);
}
static void _V10_Dcloses_Q_D217_lambda22(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dcloses_Q_D217_k165) (close _V10_Dcloses_Q_D217_k167))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dcloses_Q_D217_k165, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcloses_Q_D217_k167, env)}));
}
static void _V10_Dcloses_Q_D217_k164(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D217_k164, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dcloses_Q_D217_lambda22) (bruijn ##.input.4.259 2 0))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dcloses_Q_D217_lambda22, .env = env }, }, 1,
      upenv->up->vars[0]);
}
static void _V10_Dcloses_Q_D217_lambda21(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dcloses_Q_D217_k161) (close _V10_Dcloses_Q_D217_k164))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dcloses_Q_D217_k161, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcloses_Q_D217_k164, env)}));
}
static void _V10_Dcloses_Q_D217_lambda20(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dcloses_Q_D217_lambda21) (bruijn ##.input.4.259 0 0))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dcloses_Q_D217_lambda21, .env = env }, }, 1,
      _var0);
}
static void _V10_Dcloses_Q_D217_lambda19(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D217_lambda19, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V10_Dcloses_Q_D217_lambda20) (bruijn ##.expr.257 1 1))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dcloses_Q_D217_lambda20, .env = env }, }, 1,
      upenv->vars[1]);
}
static void _V10_Dcloses_Q_D217_lambda18(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D217_lambda18, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##.call/cc.159 4 6) (bruijn ##.k.707 0 0) (close _V10_Dcloses_Q_D217_lambda19))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->up->vars[6]), 2,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcloses_Q_D217_lambda19, env)}));
}
static void _V10_Dprint__builtin__apply_D301_k220(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__builtin__apply_D301_k220, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.printf.155 10 2) (bruijn ##.k.798 4 0) (##string ##.string.1391))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 10-1, 2)), 2,
      upenv->up->up->up->vars[0],
      VEncodePointer(&_V10_Dstring_D1391.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__builtin__apply_D301_k221(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__builtin__apply_D301_k221, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.print-expr.218 8 10) (bruijn ##.k.801 1 0) (bruijn ##.x.310 1 1) (bruijn ##.args.300 7 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 8-1, 10)), 3,
      upenv->vars[0],
      upenv->vars[1],
      VGetArg(upenv, 7-1, 2));
}
static void _V10_Dprint__builtin__apply_D301_lambda36(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__builtin__apply_D301_lambda36, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##.printf.155 10 2) (close _V10_Dprint__builtin__apply_D301_k221) (##string ##.string.1392))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 10-1, 2)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__builtin__apply_D301_k221, env)}),
      VEncodePointer(&_V10_Dstring_D1392.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__builtin__apply_D301_k219(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__builtin__apply_D301_k219, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.for-each.194 9 41) (close _V10_Dprint__builtin__apply_D301_k220) (close _V10_Dprint__builtin__apply_D301_lambda36) (bruijn ##.xs.308 3 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 9-1, 41)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__builtin__apply_D301_k220, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__builtin__apply_D301_lambda36, env)}),
      upenv->up->up->vars[2]);
}
static void _V10_Dprint__builtin__apply_D301_k218(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__builtin__apply_D301_k218, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.printf.155 8 2) (close _V10_Dprint__builtin__apply_D301_k219) (##string ##.string.1393) (bruijn ##.x.803 1 0) (bruijn ##.x.804 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 8-1, 2)), 4,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__builtin__apply_D301_k219, env)}),
      VEncodePointer(&_V10_Dstring_D1393.sym, VPOINTER_OTHER),
      upenv->vars[0],
      _var0);
}
static void _V10_Dprint__builtin__apply_D301_k217(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__builtin__apply_D301_k217, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.length.156 7 3) (close _V10_Dprint__builtin__apply_D301_k218) (bruijn ##.xs.308 1 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 7-1, 3)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__builtin__apply_D301_k218, env)}),
      upenv->vars[2]);
}
static void _V10_Dprint__builtin__apply_D301_lambda35(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__builtin__apply_D301_lambda35, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // ((bruijn ##.lookup-intrinsic-name.172 6 19) (close _V10_Dprint__builtin__apply_D301_k217) (bruijn ##.f.307 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 6-1, 19)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__builtin__apply_D301_k217, env)}),
      _var1);
}
static void _V10_Dprint__closure__apply_D302_k223(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__closure__apply_D302_k223, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.printf.155 8 2) (bruijn ##.k.805 2 0) (##string ##.string.1391))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 8-1, 2)), 2,
      upenv->up->vars[0],
      VEncodePointer(&_V10_Dstring_D1391.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__closure__apply_D302_k224(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__closure__apply_D302_k224, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.print-expr.218 6 10) (bruijn ##.k.808 1 0) (bruijn ##.x.319 1 1) (bruijn ##.args.300 5 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 6-1, 10)), 3,
      upenv->vars[0],
      upenv->vars[1],
      VGetArg(upenv, 5-1, 2));
}
static void _V10_Dprint__closure__apply_D302_lambda38(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__closure__apply_D302_lambda38, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##.printf.155 8 2) (close _V10_Dprint__closure__apply_D302_k224) (##string ##.string.1392))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 8-1, 2)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__closure__apply_D302_k224, env)}),
      VEncodePointer(&_V10_Dstring_D1392.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__closure__apply_D302_k222(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__closure__apply_D302_k222, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.for-each.194 7 41) (close _V10_Dprint__closure__apply_D302_k223) (close _V10_Dprint__closure__apply_D302_lambda38) (bruijn ##.xs.312 1 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 7-1, 41)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__closure__apply_D302_k223, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__closure__apply_D302_lambda38, env)}),
      upenv->vars[2]);
}
static void _V10_Dprint__closure__apply_D302_k229(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__closure__apply_D302_k229, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.74.314 7 1) (bruijn ##.k.817 4 0) (bruijn ##.x.821 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 7-1, 1)), 2,
      upenv->up->up->up->vars[0],
      _var0);
}
static void _V10_Dprint__closure__apply_D302_k228(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__closure__apply_D302_k228, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.printf.155 13 2) (close _V10_Dprint__closure__apply_D302_k229) (##string ##.string.1394) (##inline ##vcore.car (bruijn ##.expr.77.317 1 0)) (bruijn ##.x.822 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 13-1, 2)), 4,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__closure__apply_D302_k229, env)}),
      VEncodePointer(&_V10_Dstring_D1394.sym, VPOINTER_OTHER),
      VInlineCar2(runtime,
        upenv->vars[0]),
      _var0);
}
static void _V10_Dprint__closure__apply_D302_k227(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__closure__apply_D302_k227, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.77.317 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.77.317 0 0))) ((bruijn ##.length.156 12 3) (close _V10_Dprint__closure__apply_D302_k228) (bruijn ##.xs.312 6 2)) ((bruijn ##.k.817 2 0) #f)) ((bruijn ##.k.817 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 12-1, 3)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__closure__apply_D302_k228, env)}),
      VGetArg(upenv, 6-1, 2));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__closure__apply_D302_k226(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__closure__apply_D302_k226, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.818 0 0) ((close _V10_Dprint__closure__apply_D302_k227) (##inline ##vcore.cdr (bruijn ##.expr.76.316 2 0))) ((bruijn ##.k.817 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__closure__apply_D302_k227, .env = env }, }, 1,
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__closure__apply_D302_k225(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__closure__apply_D302_k225, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.76.316 1 0)) ((bruijn ##.equal?.158 10 5) (close _V10_Dprint__closure__apply_D302_k226) 'close (##inline ##vcore.car (bruijn ##.expr.76.316 1 0))) ((bruijn ##.k.817 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 10-1, 5)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__closure__apply_D302_k226, env)}),
      _V0close,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__closure__apply_D302_k234(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__closure__apply_D302_k234, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.74.314 7 1) (bruijn ##.k.810 7 0) (bruijn ##.x.812 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 7-1, 1)), 2,
      VGetArg(upenv, 7-1, 0),
      _var0);
}
static void _V10_Dprint__closure__apply_D302_k233(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__closure__apply_D302_k233, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.printf.155 13 2) (close _V10_Dprint__closure__apply_D302_k234) (##string ##.string.1395) (bruijn ##.x.815 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 13-1, 2)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__closure__apply_D302_k234, env)}),
      VEncodePointer(&_V10_Dstring_D1395.sym, VPOINTER_OTHER),
      _var0);
}
static void _V10_Dprint__closure__apply_D302_k232(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__closure__apply_D302_k232, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.length.156 12 3) (close _V10_Dprint__closure__apply_D302_k233) (bruijn ##.xs.312 6 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 12-1, 3)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__closure__apply_D302_k233, env)}),
      VGetArg(upenv, 6-1, 2));
}
static void _V10_Dprint__closure__apply_D302_k231(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__closure__apply_D302_k231, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.print-expr.218 8 10) (close _V10_Dprint__closure__apply_D302_k232) (bruijn ##.f.311 5 1) (bruijn ##.args.300 7 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 8-1, 10)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__closure__apply_D302_k232, env)}),
      VGetArg(upenv, 5-1, 1),
      VGetArg(upenv, 7-1, 2));
}
static void _V10_Dprint__closure__apply_D302_k230(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__closure__apply_D302_k230, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.display.174 10 21) (close _V10_Dprint__closure__apply_D302_k231) (##string ##.string.1396))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 10-1, 21)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__closure__apply_D302_k231, env)}),
      VEncodePointer(&_V10_Dstring_D1396.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__closure__apply_D302_lambda41(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dprint__closure__apply_D302_k225) (close _V10_Dprint__closure__apply_D302_k230))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__closure__apply_D302_k225, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__closure__apply_D302_k230, env)}));
}
static void _V10_Dprint__closure__apply_D302_lambda40(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dprint__closure__apply_D302_lambda41) (bruijn ##.input.75.315 0 0))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__closure__apply_D302_lambda41, .env = env }, }, 1,
      _var0);
}
static void _V10_Dprint__closure__apply_D302_lambda39(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__closure__apply_D302_lambda39, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V10_Dprint__closure__apply_D302_lambda40) (bruijn ##.f.311 1 1))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__closure__apply_D302_lambda40, .env = env }, }, 1,
      upenv->vars[1]);
}
static void _V10_Dprint__closure__apply_D302_lambda37(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__closure__apply_D302_lambda37, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // ((bruijn ##.call/cc.159 6 6) (close _V10_Dprint__closure__apply_D302_k222) (close _V10_Dprint__closure__apply_D302_lambda39))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 6-1, 6)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__closure__apply_D302_k222, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__closure__apply_D302_lambda39, env)}));
}
static void _V10_Dprint__letrec_D303_k245(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__letrec_D303_k245, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.displayln.192 17 39) (bruijn ##.k.825 11 0) (##string ##.string.1397))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 17-1, 39)), 2,
      VGetArg(upenv, 11-1, 0),
      VEncodePointer(&_V10_Dstring_D1397.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__letrec_D303_k244(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__letrec_D303_k244, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.print-expr.218 13 10) (close _V10_Dprint__letrec_D303_k245) (bruijn ##.body.322 10 3) (bruijn ##.args.324 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 13-1, 10)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__letrec_D303_k245, env)}),
      VGetArg(upenv, 10-1, 3),
      upenv->up->vars[0]);
}
static void _V10_Dprint__letrec_D303_k247(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__letrec_D303_k247, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.displayln.192 18 39) (bruijn ##.k.834 2 0) (##string ##.string.1398))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 18-1, 39)), 2,
      upenv->up->vars[0],
      VEncodePointer(&_V10_Dstring_D1398.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__letrec_D303_k246(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__letrec_D303_k246, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.print-expr.218 14 10) (close _V10_Dprint__letrec_D303_k247) (bruijn ##.x.325 1 1) (bruijn ##.args.324 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 14-1, 10)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__letrec_D303_k247, env)}),
      upenv->vars[1],
      upenv->up->up->vars[0]);
}
static void _V10_Dprint__letrec_D303_lambda43(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__letrec_D303_lambda43, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn ##.printf.155 16 2) (close _V10_Dprint__letrec_D303_k246) (##string ##.string.1399) (bruijn ##.i.326 0 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 16-1, 2)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__letrec_D303_k246, env)}),
      VEncodePointer(&_V10_Dstring_D1399.sym, VPOINTER_OTHER),
      _var2);
}
static void _V10_Dprint__letrec_D303_k243(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__letrec_D303_k243, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.for-each.194 15 41) (close _V10_Dprint__letrec_D303_k244) (close _V10_Dprint__letrec_D303_lambda43) (bruijn ##.xs.321 9 2) (bruijn ##.x.837 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 15-1, 41)), 4,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__letrec_D303_k244, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__letrec_D303_lambda43, env)}),
      VGetArg(upenv, 9-1, 2),
      _var0);
}
static void _V10_Dprint__letrec_D303_k242(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__letrec_D303_k242, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.iota.157 14 4) (close _V10_Dprint__letrec_D303_k243) (bruijn ##.n.320 8 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 14-1, 4)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__letrec_D303_k243, env)}),
      VGetArg(upenv, 8-1, 1));
}
static void _V10_Dprint__letrec_D303_lambda44(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__letrec_D303_lambda44, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.sprintf.154 14 1) (bruijn ##.k.838 0 0) (##string ##.string.1400) (bruijn ##.i.327 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 14-1, 1)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1400.sym, VPOINTER_OTHER),
      _var1);
}
static void _V10_Dprint__letrec_D303_k241(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__letrec_D303_k241, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.map.162 13 9) (close _V10_Dprint__letrec_D303_k242) (close _V10_Dprint__letrec_D303_lambda44) (bruijn ##.x.839 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 13-1, 9)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__letrec_D303_k242, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__letrec_D303_lambda44, env)}),
      _var0);
}
static void _V10_Dprint__letrec_D303_k240(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__letrec_D303_k240, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.iota.157 12 4) (close _V10_Dprint__letrec_D303_k241) (bruijn ##.n.320 6 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 12-1, 4)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__letrec_D303_k241, env)}),
      VGetArg(upenv, 6-1, 1));
}
static void _V10_Dprint__letrec_D303_k239(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__letrec_D303_k239, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.printf.155 11 2) (close _V10_Dprint__letrec_D303_k240) (##string ##.string.1401) (bruijn ##.n.320 5 1) (bruijn ##.n.320 5 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 11-1, 2)), 4,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__letrec_D303_k240, env)}),
      VEncodePointer(&_V10_Dstring_D1401.sym, VPOINTER_OTHER),
      VGetArg(upenv, 5-1, 1),
      VGetArg(upenv, 5-1, 1));
}
static void _V10_Dprint__letrec_D303_k238(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__letrec_D303_k238, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.printf.155 10 2) (close _V10_Dprint__letrec_D303_k239) (##string ##.string.1402))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 10-1, 2)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__letrec_D303_k239, env)}),
      VEncodePointer(&_V10_Dstring_D1402.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__letrec_D303_k237(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__letrec_D303_k237, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.printf.155 9 2) (close _V10_Dprint__letrec_D303_k238) (##string ##.string.1403) (bruijn ##.n.320 3 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 9-1, 2)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__letrec_D303_k238, env)}),
      VEncodePointer(&_V10_Dstring_D1403.sym, VPOINTER_OTHER),
      upenv->up->up->vars[1]);
}
static void _V10_Dprint__letrec_D303_k236(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__letrec_D303_k236, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.displayln.192 8 39) (close _V10_Dprint__letrec_D303_k237) (##string ##.string.1404))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 8-1, 39)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__letrec_D303_k237, env)}),
      VEncodePointer(&_V10_Dstring_D1404.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__letrec_D303_k235(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__letrec_D303_k235, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.displayln.192 7 39) (close _V10_Dprint__letrec_D303_k236) (##string ##.string.1405))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 7-1, 39)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__letrec_D303_k236, env)}),
      VEncodePointer(&_V10_Dstring_D1405.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__letrec_D303_lambda42(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4) {
 if(argc != 5) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__letrec_D303_lambda42, got ~D~N"
  "-- expected 5~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[5]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 5, 5, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  env->vars[4] = _var4;
  // ((bruijn ##.printf.155 6 2) (close _V10_Dprint__letrec_D303_k235) (##string ##.string.1406))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 6-1, 2)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__letrec_D303_k235, env)}),
      VEncodePointer(&_V10_Dstring_D1406.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__define__global_D304_k253(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__define__global_D304_k253, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.printf.155 12 2) (bruijn ##.k.840 6 0) (##string ##.string.1407))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 12-1, 2)), 2,
      VGetArg(upenv, 6-1, 0),
      VEncodePointer(&_V10_Dstring_D1407.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__define__global_D304_k252(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__define__global_D304_k252, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.print-expr.218 8 10) (close _V10_Dprint__define__global_D304_k253) (bruijn ##.x.330 5 3) (bruijn ##.args.300 7 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 8-1, 10)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__define__global_D304_k253, env)}),
      VGetArg(upenv, 5-1, 3),
      VGetArg(upenv, 7-1, 2));
}
static void _V10_Dprint__define__global_D304_k251(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__define__global_D304_k251, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.printf.155 10 2) (close _V10_Dprint__define__global_D304_k252) (##string ##.string.1392))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 10-1, 2)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__define__global_D304_k252, env)}),
      VEncodePointer(&_V10_Dstring_D1392.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__define__global_D304_k250(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__define__global_D304_k250, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.print-literal.214 6 6) (close _V10_Dprint__define__global_D304_k251) (bruijn ##.y.329 3 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 6-1, 6)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__define__global_D304_k251, env)}),
      upenv->up->up->vars[2]);
}
static void _V10_Dprint__define__global_D304_k249(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__define__global_D304_k249, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.printf.155 8 2) (close _V10_Dprint__define__global_D304_k250) (##string ##.string.1392))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 8-1, 2)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__define__global_D304_k250, env)}),
      VEncodePointer(&_V10_Dstring_D1392.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__define__global_D304_k248(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__define__global_D304_k248, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.print-expr.218 4 10) (close _V10_Dprint__define__global_D304_k249) (bruijn ##.k.328 1 1) (bruijn ##.args.300 3 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->up->vars[10]), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__define__global_D304_k249, env)}),
      upenv->vars[1],
      upenv->up->up->vars[2]);
}
static void _V10_Dprint__define__global_D304_lambda45(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4) {
 if(argc != 5) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__define__global_D304_lambda45, got ~D~N"
  "-- expected 5~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[5]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 5, 5, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  env->vars[4] = _var4;
  // ((bruijn ##.printf.155 6 2) (close _V10_Dprint__define__global_D304_k248) (##string ##.string.1408))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 6-1, 2)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__define__global_D304_k248, env)}),
      VEncodePointer(&_V10_Dstring_D1408.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__set_D305_k263(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__set_D305_k263, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.78.336 12 1) (bruijn ##.k.862 9 0) (bruijn ##.x.868 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 12-1, 1)), 2,
      VGetArg(upenv, 9-1, 0),
      _var0);
}
static void _V10_Dprint__set_D305_k262(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__set_D305_k262, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.printf.155 18 2) (close _V10_Dprint__set_D305_k263) (##string ##.string.1407))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 18-1, 2)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__set_D305_k263, env)}),
      VEncodePointer(&_V10_Dstring_D1407.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__set_D305_k261(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__set_D305_k261, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.print-expr.218 14 10) (close _V10_Dprint__set_D305_k262) (bruijn ##.x.334 11 3) (bruijn ##.args.300 13 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 14-1, 10)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__set_D305_k262, env)}),
      VGetArg(upenv, 11-1, 3),
      VGetArg(upenv, 13-1, 2));
}
static void _V10_Dprint__set_D305_k260(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__set_D305_k260, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.printf.155 16 2) (close _V10_Dprint__set_D305_k261) (##string ##.string.1409) (##inline ##vcore.car (bruijn ##.expr.82.341 3 0)) (##inline ##vcore.car (bruijn ##.expr.83.343 2 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 16-1, 2)), 4,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__set_D305_k261, env)}),
      VEncodePointer(&_V10_Dstring_D1409.sym, VPOINTER_OTHER),
      VInlineCar2(runtime,
        upenv->up->up->vars[0]),
      VInlineCar2(runtime,
        upenv->up->vars[0]));
}
static void _V10_Dprint__set_D305_k259(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__set_D305_k259, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.print-expr.218 12 10) (close _V10_Dprint__set_D305_k260) (bruijn ##.k.332 9 1) (bruijn ##.args.300 11 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 12-1, 10)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__set_D305_k260, env)}),
      VGetArg(upenv, 9-1, 1),
      VGetArg(upenv, 11-1, 2));
}
static void _V10_Dprint__set_D305_k258(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__set_D305_k258, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.83.343 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.83.343 0 0))) ((bruijn ##.printf.155 14 2) (close _V10_Dprint__set_D305_k259) (##string ##.string.1410)) ((bruijn ##.k.862 4 0) #f)) ((bruijn ##.k.862 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 14-1, 2)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__set_D305_k259, env)}),
      VEncodePointer(&_V10_Dstring_D1410.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__set_D305_k257(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__set_D305_k257, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.82.341 0 0)) ((close _V10_Dprint__set_D305_k258) (##inline ##vcore.cdr (bruijn ##.expr.82.341 0 0))) ((bruijn ##.k.862 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__set_D305_k258, .env = env }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__set_D305_k256(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__set_D305_k256, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.81.339 0 0)) ((close _V10_Dprint__set_D305_k257) (##inline ##vcore.cdr (bruijn ##.expr.81.339 0 0))) ((bruijn ##.k.862 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__set_D305_k257, .env = env }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__set_D305_k255(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__set_D305_k255, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.863 0 0) ((close _V10_Dprint__set_D305_k256) (##inline ##vcore.cdr (bruijn ##.expr.80.338 2 0))) ((bruijn ##.k.862 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__set_D305_k256, .env = env }, }, 1,
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__set_D305_k254(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__set_D305_k254, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.80.338 1 0)) ((bruijn ##.equal?.158 10 5) (close _V10_Dprint__set_D305_k255) 'bruijn (##inline ##vcore.car (bruijn ##.expr.80.338 1 0))) ((bruijn ##.k.862 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 10-1, 5)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__set_D305_k255, env)}),
      _V0bruijn,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__set_D305_k272(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__set_D305_k272, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.printf.155 19 2) (bruijn ##.k.854 6 0) (##string ##.string.1407))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 19-1, 2)), 2,
      VGetArg(upenv, 6-1, 0),
      VEncodePointer(&_V10_Dstring_D1407.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__set_D305_k271(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__set_D305_k271, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.print-expr.218 15 10) (close _V10_Dprint__set_D305_k272) (bruijn ##.x.334 12 3) (bruijn ##.args.300 14 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 15-1, 10)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__set_D305_k272, env)}),
      VGetArg(upenv, 12-1, 3),
      VGetArg(upenv, 14-1, 2));
}
static void _V10_Dprint__set_D305_k270(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__set_D305_k270, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.printf.155 17 2) (close _V10_Dprint__set_D305_k271) (##string ##.string.1392))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 17-1, 2)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__set_D305_k271, env)}),
      VEncodePointer(&_V10_Dstring_D1392.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__set_D305_k269(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__set_D305_k269, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.print-literal.214 13 6) (close _V10_Dprint__set_D305_k270) (bruijn ##.sym.345 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 13-1, 6)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__set_D305_k270, env)}),
      VGetArg(upenv, 5-1, 0));
}
static void _V10_Dprint__set_D305_k268(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__set_D305_k268, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.printf.155 15 2) (close _V10_Dprint__set_D305_k269) (##string ##.string.1392))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 15-1, 2)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__set_D305_k269, env)}),
      VEncodePointer(&_V10_Dstring_D1392.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__set_D305_k267(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__set_D305_k267, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.print-expr.218 11 10) (close _V10_Dprint__set_D305_k268) (bruijn ##.k.332 8 1) (bruijn ##.args.300 10 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 11-1, 10)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__set_D305_k268, env)}),
      VGetArg(upenv, 8-1, 1),
      VGetArg(upenv, 10-1, 2));
}
static void _V10_Dprint__set_D305_k266(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__set_D305_k266, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.853 1 0) ((bruijn ##.printf.155 13 2) (close _V10_Dprint__set_D305_k267) (##string ##.string.1411)) ((bruijn ##.compiler-error.195 13 42) (bruijn ##.k.854 0 0) (##string ##.string.1412)))
if(VDecodeBool(
upenv->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 13-1, 2)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__set_D305_k267, env)}),
      VEncodePointer(&_V10_Dstring_D1411.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 13-1, 42)), 2,
      _var0,
      VEncodePointer(&_V10_Dstring_D1412.sym, VPOINTER_OTHER));
}
}
static void _V10_Dprint__set_D305_k275(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__set_D305_k275, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.78.336 8 1) (bruijn ##.k.848 8 0) (bruijn ##.x.851 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 8-1, 1)), 2,
      VGetArg(upenv, 8-1, 0),
      _var0);
}
static void _V10_Dprint__set_D305_k274(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__set_D305_k274, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.compiler-error.195 14 42) (close _V10_Dprint__set_D305_k275) (##string ##.string.1413) (bruijn ##.y.333 8 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 14-1, 42)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__set_D305_k275, env)}),
      VEncodePointer(&_V10_Dstring_D1413.sym, VPOINTER_OTHER),
      VGetArg(upenv, 8-1, 2));
}
static void _V10_Dprint__set_D305_k273(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__set_D305_k273, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.kk.78.336 6 1) (close _V10_Dprint__set_D305_k274) (bruijn ##.x.852 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 6-1, 1)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__set_D305_k274, env)}),
      _var0);
}
static void _V10_Dprint__set_D305_k265(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__set_D305_k265, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dprint__set_D305_k266) (close _V10_Dprint__set_D305_k273))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__set_D305_k266, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__set_D305_k273, env)}));
}
static void _V10_Dprint__set_D305_lambda50(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.symbol?.168 11 15) (close _V10_Dprint__set_D305_k265) (bruijn ##.sym.345 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 11-1, 15)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__set_D305_k265, env)}),
      _var0);
}
static void _V10_Dprint__set_D305_k264(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__set_D305_k264, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dprint__set_D305_lambda50) (bruijn ##.input.79.337 2 0))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__set_D305_lambda50, .env = env }, }, 1,
      upenv->up->vars[0]);
}
static void _V10_Dprint__set_D305_lambda49(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dprint__set_D305_k254) (close _V10_Dprint__set_D305_k264))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__set_D305_k254, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__set_D305_k264, env)}));
}
static void _V10_Dprint__set_D305_lambda48(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dprint__set_D305_lambda49) (bruijn ##.input.79.337 0 0))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__set_D305_lambda49, .env = env }, }, 1,
      _var0);
}
static void _V10_Dprint__set_D305_lambda47(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__set_D305_lambda47, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V10_Dprint__set_D305_lambda48) (bruijn ##.y.333 1 2))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__set_D305_lambda48, .env = env }, }, 1,
      upenv->vars[2]);
}
static void _V10_Dprint__set_D305_lambda46(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4) {
 if(argc != 5) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__set_D305_lambda46, got ~D~N"
  "-- expected 5~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[5]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 5, 5, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  env->vars[4] = _var4;
  // ((bruijn ##.call/cc.159 6 6) (bruijn ##.k.847 0 0) (close _V10_Dprint__set_D305_lambda47))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 6-1, 6)), 2,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__set_D305_lambda47, env)}));
}
static void _V10_Dprint__inline_D306_k278(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__inline_D306_k278, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.887 1 0) ((bruijn ##.compiler-error.195 9 42) (bruijn ##.k.888 0 0) (##string ##.string.1414) (bruijn ##.f.346 3 1)) ((bruijn ##.k.888 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 9-1, 42)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1414.sym, VPOINTER_OTHER),
      upenv->up->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__inline_D306_k287(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__inline_D306_k287, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.print-expr.218 15 10) (bruijn ##.k.882 1 0) (bruijn ##.x.349 1 1) (bruijn ##.args.300 14 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 15-1, 10)), 3,
      upenv->vars[0],
      upenv->vars[1],
      VGetArg(upenv, 14-1, 2));
}
static void _V10_Dprint__inline_D306_lambda52(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__inline_D306_lambda52, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##.printf.155 17 2) (close _V10_Dprint__inline_D306_k287) (##string ##.string.1415))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 17-1, 2)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__inline_D306_k287, env)}),
      VEncodePointer(&_V10_Dstring_D1415.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__inline_D306_k286(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__inline_D306_k286, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.for-each.194 16 41) (bruijn ##.k.880 3 0) (close _V10_Dprint__inline_D306_lambda52) (bruijn ##.x.884 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 16-1, 41)), 3,
      upenv->up->up->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__inline_D306_lambda52, env)}),
      _var0);
}
static void _V10_Dprint__inline_D306_k285(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__inline_D306_k285, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cdr.175 15 22) (close _V10_Dprint__inline_D306_k286) (bruijn ##.xs.347 9 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 15-1, 22)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__inline_D306_k286, env)}),
      VGetArg(upenv, 9-1, 2));
}
static void _V10_Dprint__inline_D306_k284(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__inline_D306_k284, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.print-expr.218 11 10) (close _V10_Dprint__inline_D306_k285) (bruijn ##.x.885 0 0) (bruijn ##.args.300 10 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 11-1, 10)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__inline_D306_k285, env)}),
      _var0,
      VGetArg(upenv, 10-1, 2));
}
static void _V10_Dprint__inline_D306_k283(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__inline_D306_k283, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.879 1 0) ((bruijn ##.car.160 13 7) (close _V10_Dprint__inline_D306_k284) (bruijn ##.xs.347 7 2)) ((bruijn ##.k.880 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 13-1, 7)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__inline_D306_k284, env)}),
      VGetArg(upenv, 7-1, 2));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__inline_D306_k288(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__inline_D306_k288, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.printf.155 13 2) (bruijn ##.k.875 7 0) (##string ##.string.1416))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 13-1, 2)), 2,
      VGetArg(upenv, 7-1, 0),
      VEncodePointer(&_V10_Dstring_D1416.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__inline_D306_k282(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__inline_D306_k282, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dprint__inline_D306_k283) (close _V10_Dprint__inline_D306_k288))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__inline_D306_k283, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__inline_D306_k288, env)}));
}
static void _V10_Dprint__inline_D306_k281(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__inline_D306_k281, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.not.197 11 44) (close _V10_Dprint__inline_D306_k282) (bruijn ##.x.886 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 11-1, 44)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__inline_D306_k282, env)}),
      _var0);
}
static void _V10_Dprint__inline_D306_k280(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__inline_D306_k280, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.null?.196 10 43) (close _V10_Dprint__inline_D306_k281) (bruijn ##.xs.347 4 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 10-1, 43)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__inline_D306_k281, env)}),
      upenv->up->up->up->vars[2]);
}
static void _V10_Dprint__inline_D306_k279(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__inline_D306_k279, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.printf.155 9 2) (close _V10_Dprint__inline_D306_k280) (##string ##.string.1417) (bruijn ##.inline.348 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 9-1, 2)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__inline_D306_k280, env)}),
      VEncodePointer(&_V10_Dstring_D1417.sym, VPOINTER_OTHER),
      upenv->up->vars[0]);
}
static void _V10_Dprint__inline_D306_k277(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__inline_D306_k277, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dprint__inline_D306_k278) (close _V10_Dprint__inline_D306_k279))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__inline_D306_k278, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__inline_D306_k279, env)}));
}
static void _V10_Dprint__inline_D306_k276(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__inline_D306_k276, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.not.197 7 44) (close _V10_Dprint__inline_D306_k277) (bruijn ##.inline.348 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 7-1, 44)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__inline_D306_k277, env)}),
      _var0);
}
static void _V10_Dprint__inline_D306_lambda51(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__inline_D306_lambda51, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn ##.lookup-inline-name.176 6 23) (close _V10_Dprint__inline_D306_k276) (bruijn ##.f.346 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 6-1, 23)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__inline_D306_k276, env)}),
      _var1);
}
static void _V10_Dprint__expr_D218_k292(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D218_k292, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.28.350 6 1) (bruijn ##.k.1059 3 0) (bruijn ##.x.1064 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 6-1, 1)), 2,
      upenv->up->up->vars[0],
      _var0);
}
static void _V10_Dprint__expr_D218_k291(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D218_k291, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.31.353 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.car (bruijn ##.expr.31.353 0 0))) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.31.353 0 0))) ((bruijn ##.display.174 11 21) (close _V10_Dprint__expr_D218_k292) (##string ##.string.1418)) ((bruijn ##.k.1059 2 0) #f)) ((bruijn ##.k.1059 2 0) #f)) ((bruijn ##.k.1059 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCar2(runtime,
        _var0)))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 11-1, 21)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D218_k292, env)}),
      VEncodePointer(&_V10_Dstring_D1418.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__expr_D218_k290(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D218_k290, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1060 0 0) ((close _V10_Dprint__expr_D218_k291) (##inline ##vcore.cdr (bruijn ##.expr.30.352 2 0))) ((bruijn ##.k.1059 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__expr_D218_k291, .env = env }, }, 1,
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__expr_D218_k289(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D218_k289, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.30.352 1 0)) ((bruijn ##.equal?.158 9 5) (close _V10_Dprint__expr_D218_k290) 'quote (##inline ##vcore.car (bruijn ##.expr.30.352 1 0))) ((bruijn ##.k.1059 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 9-1, 5)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D218_k290, env)}),
      _V0quote,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__expr_D218_k300(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D218_k300, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.28.350 11 1) (bruijn ##.k.1045 6 0) (bruijn ##.x.1053 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 11-1, 1)), 2,
      VGetArg(upenv, 6-1, 0),
      _var0);
}
static void _V10_Dprint__expr_D218_k299(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D218_k299, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.35.357 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.35.357 0 0))) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.33.355 3 0))) ((bruijn ##.print-literal-string.212 13 4) (close _V10_Dprint__expr_D218_k300) (##inline ##vcore.car (bruijn ##.expr.35.357 0 0))) ((bruijn ##.k.1045 5 0) #f)) ((bruijn ##.k.1045 5 0) #f)) ((bruijn ##.k.1045 5 0) #f))
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
        upenv->up->up->vars[0])))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 13-1, 4)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D218_k300, env)}),
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 5-1, 0)), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 5-1, 0)), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 5-1, 0)), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__expr_D218_k298(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D218_k298, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1049 0 0) ((close _V10_Dprint__expr_D218_k299) (##inline ##vcore.cdr (bruijn ##.expr.34.356 1 0))) ((bruijn ##.k.1045 4 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__expr_D218_k299, .env = env }, }, 1,
      VInlineCdr2(runtime,
        upenv->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__expr_D218_k297(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D218_k297, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.34.356 0 0)) ((bruijn ##.equal?.158 14 5) (close _V10_Dprint__expr_D218_k298) '##string (##inline ##vcore.car (bruijn ##.expr.34.356 0 0))) ((bruijn ##.k.1045 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 14-1, 5)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D218_k298, env)}),
      _V10string,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__expr_D218_k296(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D218_k296, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.33.355 0 0)) ((close _V10_Dprint__expr_D218_k297) (##inline ##vcore.car (bruijn ##.expr.33.355 0 0))) ((bruijn ##.k.1045 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__expr_D218_k297, .env = env }, }, 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__expr_D218_k295(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D218_k295, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1046 0 0) ((close _V10_Dprint__expr_D218_k296) (##inline ##vcore.cdr (bruijn ##.expr.32.354 2 0))) ((bruijn ##.k.1045 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__expr_D218_k296, .env = env }, }, 1,
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__expr_D218_k294(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D218_k294, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.32.354 1 0)) ((bruijn ##.equal?.158 11 5) (close _V10_Dprint__expr_D218_k295) 'quote (##inline ##vcore.car (bruijn ##.expr.32.354 1 0))) ((bruijn ##.k.1045 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 11-1, 5)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D218_k295, env)}),
      _V0quote,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__expr_D218_k305(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D218_k305, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.28.350 10 1) (bruijn ##.k.1037 3 0) (bruijn ##.x.1041 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 10-1, 1)), 2,
      upenv->up->up->vars[0],
      _var0);
}
static void _V10_Dprint__expr_D218_k304(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D218_k304, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.37.360 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.37.360 0 0))) ((bruijn ##.print-literal.214 12 6) (close _V10_Dprint__expr_D218_k305) (##inline ##vcore.car (bruijn ##.expr.37.360 0 0))) ((bruijn ##.k.1037 2 0) #f)) ((bruijn ##.k.1037 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 12-1, 6)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D218_k305, env)}),
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__expr_D218_k303(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D218_k303, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1038 0 0) ((close _V10_Dprint__expr_D218_k304) (##inline ##vcore.cdr (bruijn ##.expr.36.359 2 0))) ((bruijn ##.k.1037 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__expr_D218_k304, .env = env }, }, 1,
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__expr_D218_k302(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D218_k302, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.36.359 1 0)) ((bruijn ##.equal?.158 13 5) (close _V10_Dprint__expr_D218_k303) 'quote (##inline ##vcore.car (bruijn ##.expr.36.359 1 0))) ((bruijn ##.k.1037 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 13-1, 5)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D218_k303, env)}),
      _V0quote,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__expr_D218_k310(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D218_k310, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.28.350 12 1) (bruijn ##.k.1029 3 0) (bruijn ##.x.1033 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 12-1, 1)), 2,
      upenv->up->up->vars[0],
      _var0);
}
static void _V10_Dprint__expr_D218_k309(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D218_k309, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.39.363 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.39.363 0 0))) ((bruijn ##.printf.155 17 2) (close _V10_Dprint__expr_D218_k310) (##string ##.string.1419) (##inline ##vcore.car (bruijn ##.expr.39.363 0 0))) ((bruijn ##.k.1029 2 0) #f)) ((bruijn ##.k.1029 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 17-1, 2)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D218_k310, env)}),
      VEncodePointer(&_V10_Dstring_D1419.sym, VPOINTER_OTHER),
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__expr_D218_k308(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D218_k308, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1030 0 0) ((close _V10_Dprint__expr_D218_k309) (##inline ##vcore.cdr (bruijn ##.expr.38.362 2 0))) ((bruijn ##.k.1029 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__expr_D218_k309, .env = env }, }, 1,
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__expr_D218_k307(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D218_k307, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.38.362 1 0)) ((bruijn ##.equal?.158 15 5) (close _V10_Dprint__expr_D218_k308) 'close (##inline ##vcore.car (bruijn ##.expr.38.362 1 0))) ((bruijn ##.k.1029 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 15-1, 5)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D218_k308, env)}),
      _V0close,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__expr_D218_k321(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D218_k321, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.display.174 26 21) (bruijn ##.k.1020 1 0) (bruijn ##.x.1021 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 26-1, 21)), 2,
      upenv->vars[0],
      _var0);
}
static void _V10_Dprint__expr_D218_k325(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D218_k325, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.1025 0 0) ((bruijn ##.printf.155 29 2) (bruijn ##.k.1020 4 0) (##string ##.string.1423) (bruijn ##.right.371 6 0)) ((bruijn ##.printf.155 29 2) (bruijn ##.k.1020 4 0) (##string ##.string.1424) (bruijn ##.up.369 8 0) (bruijn ##.right.371 6 0)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 29-1, 2)), 3,
      upenv->up->up->up->vars[0],
      VEncodePointer(&_V10_Dstring_D1423.sym, VPOINTER_OTHER),
      VGetArg(upenv, 6-1, 0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 29-1, 2)), 4,
      upenv->up->up->up->vars[0],
      VEncodePointer(&_V10_Dstring_D1424.sym, VPOINTER_OTHER),
      VGetArg(upenv, 8-1, 0),
      VGetArg(upenv, 6-1, 0));
}
}
static void _V10_Dprint__expr_D218_k324(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D218_k324, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1024 0 0) ((bruijn ##.printf.155 28 2) (bruijn ##.k.1020 3 0) (##string ##.string.1422) (bruijn ##.right.371 5 0)) ((bruijn ##.=.165 28 12) (close _V10_Dprint__expr_D218_k325) (bruijn ##.up.369 7 0) 4))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 28-1, 2)), 3,
      upenv->up->up->vars[0],
      VEncodePointer(&_V10_Dstring_D1422.sym, VPOINTER_OTHER),
      VGetArg(upenv, 5-1, 0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 28-1, 12)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D218_k325, env)}),
      VGetArg(upenv, 7-1, 0),
      VEncodeInt(4l));
}
}
static void _V10_Dprint__expr_D218_k323(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D218_k323, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1023 0 0) ((bruijn ##.printf.155 27 2) (bruijn ##.k.1020 2 0) (##string ##.string.1421) (bruijn ##.right.371 4 0)) ((bruijn ##.=.165 27 12) (close _V10_Dprint__expr_D218_k324) (bruijn ##.up.369 6 0) 3))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 27-1, 2)), 3,
      upenv->up->vars[0],
      VEncodePointer(&_V10_Dstring_D1421.sym, VPOINTER_OTHER),
      upenv->up->up->up->vars[0]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 27-1, 12)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D218_k324, env)}),
      VGetArg(upenv, 6-1, 0),
      VEncodeInt(3l));
}
}
static void _V10_Dprint__expr_D218_k322(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D218_k322, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1022 0 0) ((bruijn ##.printf.155 26 2) (bruijn ##.k.1020 1 0) (##string ##.string.1420) (bruijn ##.right.371 3 0)) ((bruijn ##.=.165 26 12) (close _V10_Dprint__expr_D218_k323) (bruijn ##.up.369 5 0) 2))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 26-1, 2)), 3,
      upenv->vars[0],
      VEncodePointer(&_V10_Dstring_D1420.sym, VPOINTER_OTHER),
      upenv->up->up->vars[0]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 26-1, 12)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D218_k323, env)}),
      VGetArg(upenv, 5-1, 0),
      VEncodeInt(2l));
}
}
static void _V10_Dprint__expr_D218_k320(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D218_k320, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1019 1 0) ((bruijn ##.list-ref.166 25 13) (close _V10_Dprint__expr_D218_k321) (bruijn ##.args.300 21 2) (bruijn ##.right.371 2 0)) ((bruijn ##.=.165 25 12) (close _V10_Dprint__expr_D218_k322) (bruijn ##.up.369 4 0) 1))
if(VDecodeBool(
upenv->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 25-1, 13)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D218_k321, env)}),
      VGetArg(upenv, 21-1, 2),
      upenv->up->vars[0]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 25-1, 12)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D218_k322, env)}),
      upenv->up->up->up->vars[0],
      VEncodeInt(1l));
}
}
static void _V10_Dprint__expr_D218_k326(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D218_k326, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.28.350 19 1) (bruijn ##.k.1012 8 0) (bruijn ##.x.1018 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 19-1, 1)), 2,
      VGetArg(upenv, 8-1, 0),
      _var0);
}
static void _V10_Dprint__expr_D218_k319(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D218_k319, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dprint__expr_D218_k320) (close _V10_Dprint__expr_D218_k326))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__expr_D218_k320, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D218_k326, env)}));
}
static void _V10_Dprint__expr_D218_k318(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D218_k318, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.43.370 1 0))) ((bruijn ##.=.165 23 12) (close _V10_Dprint__expr_D218_k319) (bruijn ##.up.369 2 0) 0) ((bruijn ##.k.1012 6 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        upenv->vars[0])))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 23-1, 12)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D218_k319, env)}),
      upenv->up->vars[0],
      VEncodeInt(0l));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 6-1, 0)), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__expr_D218_k317(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D218_k317, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.43.370 0 0)) ((close _V10_Dprint__expr_D218_k318) (##inline ##vcore.car (bruijn ##.expr.43.370 0 0))) ((bruijn ##.k.1012 5 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__expr_D218_k318, .env = env }, }, 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 5-1, 0)), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__expr_D218_k316(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D218_k316, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dprint__expr_D218_k317) (##inline ##vcore.cdr (bruijn ##.expr.42.368 1 0)))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__expr_D218_k317, .env = env }, }, 1,
      VInlineCdr2(runtime,
        upenv->vars[0]));
}
static void _V10_Dprint__expr_D218_k315(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D218_k315, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.42.368 0 0)) ((close _V10_Dprint__expr_D218_k316) (##inline ##vcore.car (bruijn ##.expr.42.368 0 0))) ((bruijn ##.k.1012 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__expr_D218_k316, .env = env }, }, 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__expr_D218_k314(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D218_k314, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.41.366 0 0)) ((close _V10_Dprint__expr_D218_k315) (##inline ##vcore.cdr (bruijn ##.expr.41.366 0 0))) ((bruijn ##.k.1012 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__expr_D218_k315, .env = env }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__expr_D218_k313(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D218_k313, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1013 0 0) ((close _V10_Dprint__expr_D218_k314) (##inline ##vcore.cdr (bruijn ##.expr.40.365 2 0))) ((bruijn ##.k.1012 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__expr_D218_k314, .env = env }, }, 1,
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__expr_D218_k312(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D218_k312, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.40.365 1 0)) ((bruijn ##.equal?.158 17 5) (close _V10_Dprint__expr_D218_k313) 'bruijn (##inline ##vcore.car (bruijn ##.expr.40.365 1 0))) ((bruijn ##.k.1012 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 17-1, 5)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D218_k313, env)}),
      _V0bruijn,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__expr_D218_k339(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D218_k339, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.28.350 24 1) (bruijn ##.k.996 11 0) (bruijn ##.x.1002 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 24-1, 1)), 2,
      VGetArg(upenv, 11-1, 0),
      _var0);
}
static void _V10_Dprint__expr_D218_k338(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D218_k338, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.displayln.192 29 39) (close _V10_Dprint__expr_D218_k339) (##string ##.string.1425))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 29-1, 39)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D218_k339, env)}),
      VEncodePointer(&_V10_Dstring_D1425.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__expr_D218_k337(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D218_k337, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.print-expr.218 25 10) (close _V10_Dprint__expr_D218_k338) (##inline ##vcore.car (bruijn ##.expr.47.377 5 0)) (bruijn ##.args.300 24 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 25-1, 10)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D218_k338, env)}),
      VInlineCar2(runtime,
        VGetArg(upenv, 5-1, 0)),
      VGetArg(upenv, 24-1, 2));
}
static void _V10_Dprint__expr_D218_k336(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D218_k336, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.displayln.192 27 39) (close _V10_Dprint__expr_D218_k337) (##string ##.string.1426))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 27-1, 39)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D218_k337, env)}),
      VEncodePointer(&_V10_Dstring_D1426.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__expr_D218_k335(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D218_k335, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.print-expr.218 23 10) (close _V10_Dprint__expr_D218_k336) (##inline ##vcore.car (bruijn ##.expr.46.375 4 0)) (bruijn ##.args.300 22 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 23-1, 10)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D218_k336, env)}),
      VInlineCar2(runtime,
        upenv->up->up->up->vars[0]),
      VGetArg(upenv, 22-1, 2));
}
static void _V10_Dprint__expr_D218_k334(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D218_k334, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.displayln.192 25 39) (close _V10_Dprint__expr_D218_k335) (##string ##.string.1427))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 25-1, 39)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D218_k335, env)}),
      VEncodePointer(&_V10_Dstring_D1427.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__expr_D218_k333(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D218_k333, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.print-expr.218 21 10) (close _V10_Dprint__expr_D218_k334) (##inline ##vcore.car (bruijn ##.expr.45.373 3 0)) (bruijn ##.args.300 20 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 21-1, 10)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D218_k334, env)}),
      VInlineCar2(runtime,
        upenv->up->up->vars[0]),
      VGetArg(upenv, 20-1, 2));
}
static void _V10_Dprint__expr_D218_k332(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D218_k332, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.47.377 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.47.377 0 0))) ((bruijn ##.displayln.192 23 39) (close _V10_Dprint__expr_D218_k333) (##string ##.string.1428)) ((bruijn ##.k.996 4 0) #f)) ((bruijn ##.k.996 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 23-1, 39)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D218_k333, env)}),
      VEncodePointer(&_V10_Dstring_D1428.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__expr_D218_k331(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D218_k331, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.46.375 0 0)) ((close _V10_Dprint__expr_D218_k332) (##inline ##vcore.cdr (bruijn ##.expr.46.375 0 0))) ((bruijn ##.k.996 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__expr_D218_k332, .env = env }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__expr_D218_k330(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D218_k330, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.45.373 0 0)) ((close _V10_Dprint__expr_D218_k331) (##inline ##vcore.cdr (bruijn ##.expr.45.373 0 0))) ((bruijn ##.k.996 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__expr_D218_k331, .env = env }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__expr_D218_k329(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D218_k329, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.997 0 0) ((close _V10_Dprint__expr_D218_k330) (##inline ##vcore.cdr (bruijn ##.expr.44.372 2 0))) ((bruijn ##.k.996 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__expr_D218_k330, .env = env }, }, 1,
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__expr_D218_k328(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D218_k328, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.44.372 1 0)) ((bruijn ##.equal?.158 19 5) (close _V10_Dprint__expr_D218_k329) 'if (##inline ##vcore.car (bruijn ##.expr.44.372 1 0))) ((bruijn ##.k.996 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 19-1, 5)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D218_k329, env)}),
      _V0if,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__expr_D218_k346(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D218_k346, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.28.350 20 1) (bruijn ##.k.986 5 0) (bruijn ##.x.992 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 20-1, 1)), 2,
      VGetArg(upenv, 5-1, 0),
      _var0);
}
static void _V10_Dprint__expr_D218_k345(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D218_k345, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.51.384 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.51.384 0 0))) ((bruijn ##.print-set.305 20 4) (close _V10_Dprint__expr_D218_k346) (##inline ##vcore.car (bruijn ##.expr.49.380 2 0)) (##inline ##vcore.car (bruijn ##.expr.50.382 1 0)) (##inline ##vcore.car (bruijn ##.expr.51.384 0 0)) #f) ((bruijn ##.k.986 4 0) #f)) ((bruijn ##.k.986 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 20-1, 4)), 5,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D218_k346, env)}),
      VInlineCar2(runtime,
        upenv->up->vars[0]),
      VInlineCar2(runtime,
        upenv->vars[0]),
      VInlineCar2(runtime,
        _var0),
      VEncodeBool(false));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__expr_D218_k344(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D218_k344, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.50.382 0 0)) ((close _V10_Dprint__expr_D218_k345) (##inline ##vcore.cdr (bruijn ##.expr.50.382 0 0))) ((bruijn ##.k.986 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__expr_D218_k345, .env = env }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__expr_D218_k343(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D218_k343, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.49.380 0 0)) ((close _V10_Dprint__expr_D218_k344) (##inline ##vcore.cdr (bruijn ##.expr.49.380 0 0))) ((bruijn ##.k.986 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__expr_D218_k344, .env = env }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__expr_D218_k342(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D218_k342, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.987 0 0) ((close _V10_Dprint__expr_D218_k343) (##inline ##vcore.cdr (bruijn ##.expr.48.379 2 0))) ((bruijn ##.k.986 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__expr_D218_k343, .env = env }, }, 1,
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__expr_D218_k341(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D218_k341, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.48.379 1 0)) ((bruijn ##.equal?.158 21 5) (close _V10_Dprint__expr_D218_k342) 'set! (##inline ##vcore.car (bruijn ##.expr.48.379 1 0))) ((bruijn ##.k.986 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 21-1, 5)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D218_k342, env)}),
      _V0set_B,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__expr_D218_k353(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D218_k353, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.28.350 22 1) (bruijn ##.k.976 5 0) (bruijn ##.x.982 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 22-1, 1)), 2,
      VGetArg(upenv, 5-1, 0),
      _var0);
}
static void _V10_Dprint__expr_D218_k352(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D218_k352, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.55.391 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.55.391 0 0))) ((bruijn ##.print-define-global.304 22 3) (close _V10_Dprint__expr_D218_k353) (##inline ##vcore.car (bruijn ##.expr.53.387 2 0)) (##inline ##vcore.car (bruijn ##.expr.54.389 1 0)) (##inline ##vcore.car (bruijn ##.expr.55.391 0 0)) #f) ((bruijn ##.k.976 4 0) #f)) ((bruijn ##.k.976 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 22-1, 3)), 5,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D218_k353, env)}),
      VInlineCar2(runtime,
        upenv->up->vars[0]),
      VInlineCar2(runtime,
        upenv->vars[0]),
      VInlineCar2(runtime,
        _var0),
      VEncodeBool(false));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__expr_D218_k351(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D218_k351, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.54.389 0 0)) ((close _V10_Dprint__expr_D218_k352) (##inline ##vcore.cdr (bruijn ##.expr.54.389 0 0))) ((bruijn ##.k.976 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__expr_D218_k352, .env = env }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__expr_D218_k350(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D218_k350, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.53.387 0 0)) ((close _V10_Dprint__expr_D218_k351) (##inline ##vcore.cdr (bruijn ##.expr.53.387 0 0))) ((bruijn ##.k.976 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__expr_D218_k351, .env = env }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__expr_D218_k349(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D218_k349, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.977 0 0) ((close _V10_Dprint__expr_D218_k350) (##inline ##vcore.cdr (bruijn ##.expr.52.386 2 0))) ((bruijn ##.k.976 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__expr_D218_k350, .env = env }, }, 1,
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__expr_D218_k348(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D218_k348, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.52.386 1 0)) ((bruijn ##.equal?.158 23 5) (close _V10_Dprint__expr_D218_k349) 'define (##inline ##vcore.car (bruijn ##.expr.52.386 1 0))) ((bruijn ##.k.976 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 23-1, 5)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D218_k349, env)}),
      _V0define,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__expr_D218_k358(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D218_k358, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.28.350 22 1) (bruijn ##.k.970 3 0) (bruijn ##.x.973 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 22-1, 1)), 2,
      upenv->up->up->vars[0],
      _var0);
}
static void _V10_Dprint__expr_D218_k357(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D218_k357, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.57.394 0 0)) ((bruijn ##.print-inline.306 22 5) (close _V10_Dprint__expr_D218_k358) (##inline ##vcore.car (bruijn ##.expr.57.394 0 0)) (##inline ##vcore.cdr (bruijn ##.expr.57.394 0 0))) ((bruijn ##.k.970 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 22-1, 5)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D218_k358, env)}),
      VInlineCar2(runtime,
        _var0),
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__expr_D218_k356(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D218_k356, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.971 0 0) ((close _V10_Dprint__expr_D218_k357) (##inline ##vcore.cdr (bruijn ##.expr.56.393 2 0))) ((bruijn ##.k.970 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__expr_D218_k357, .env = env }, }, 1,
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__expr_D218_k355(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D218_k355, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.56.393 1 0)) ((bruijn ##.equal?.158 25 5) (close _V10_Dprint__expr_D218_k356) '##inline (##inline ##vcore.car (bruijn ##.expr.56.393 1 0))) ((bruijn ##.k.970 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 25-1, 5)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D218_k356, env)}),
      _V10inline,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__expr_D218_k363(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D218_k363, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.28.350 24 1) (bruijn ##.k.962 3 0) (bruijn ##.x.966 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 24-1, 1)), 2,
      upenv->up->up->vars[0],
      _var0);
}
static void _V10_Dprint__expr_D218_k362(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D218_k362, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.59.398 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.59.398 0 0))) ((bruijn ##.print-literal-string.212 26 4) (close _V10_Dprint__expr_D218_k363) (##inline ##vcore.car (bruijn ##.expr.59.398 0 0))) ((bruijn ##.k.962 2 0) #f)) ((bruijn ##.k.962 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 26-1, 4)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D218_k363, env)}),
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__expr_D218_k361(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D218_k361, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.963 0 0) ((close _V10_Dprint__expr_D218_k362) (##inline ##vcore.cdr (bruijn ##.expr.58.397 2 0))) ((bruijn ##.k.962 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__expr_D218_k362, .env = env }, }, 1,
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__expr_D218_k360(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D218_k360, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.58.397 1 0)) ((bruijn ##.equal?.158 27 5) (close _V10_Dprint__expr_D218_k361) '##string (##inline ##vcore.car (bruijn ##.expr.58.397 1 0))) ((bruijn ##.k.962 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 27-1, 5)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D218_k361, env)}),
      _V10string,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__expr_D218_k368(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D218_k368, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.28.350 26 1) (bruijn ##.k.954 3 0) (bruijn ##.x.958 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 26-1, 1)), 2,
      upenv->up->up->vars[0],
      _var0);
}
static void _V10_Dprint__expr_D218_k367(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D218_k367, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.61.401 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.61.401 0 0))) ((bruijn ##.print-intrinsic.213 28 5) (close _V10_Dprint__expr_D218_k368) (##inline ##vcore.car (bruijn ##.expr.61.401 0 0))) ((bruijn ##.k.954 2 0) #f)) ((bruijn ##.k.954 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 28-1, 5)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D218_k368, env)}),
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__expr_D218_k366(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D218_k366, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.955 0 0) ((close _V10_Dprint__expr_D218_k367) (##inline ##vcore.cdr (bruijn ##.expr.60.400 2 0))) ((bruijn ##.k.954 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__expr_D218_k367, .env = env }, }, 1,
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__expr_D218_k365(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D218_k365, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.60.400 1 0)) ((bruijn ##.equal?.158 29 5) (close _V10_Dprint__expr_D218_k366) '##intrinsic (##inline ##vcore.car (bruijn ##.expr.60.400 1 0))) ((bruijn ##.k.954 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 29-1, 5)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D218_k366, env)}),
      _V10intrinsic,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__expr_D218_k373(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D218_k373, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.28.350 28 1) (bruijn ##.k.946 3 0) (bruijn ##.x.950 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 28-1, 1)), 2,
      upenv->up->up->vars[0],
      _var0);
}
static void _V10_Dprint__expr_D218_k372(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D218_k372, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.63.404 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.63.404 0 0))) ((bruijn ##.printf.155 33 2) (close _V10_Dprint__expr_D218_k373) (##string ##.string.1429) (##inline ##vcore.car (bruijn ##.expr.63.404 0 0))) ((bruijn ##.k.946 2 0) #f)) ((bruijn ##.k.946 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 33-1, 2)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D218_k373, env)}),
      VEncodePointer(&_V10_Dstring_D1429.sym, VPOINTER_OTHER),
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__expr_D218_k371(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D218_k371, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.947 0 0) ((close _V10_Dprint__expr_D218_k372) (##inline ##vcore.cdr (bruijn ##.expr.62.403 2 0))) ((bruijn ##.k.946 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__expr_D218_k372, .env = env }, }, 1,
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__expr_D218_k370(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D218_k370, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.62.403 1 0)) ((bruijn ##.equal?.158 31 5) (close _V10_Dprint__expr_D218_k371) '##foreign.function (##inline ##vcore.car (bruijn ##.expr.62.403 1 0))) ((bruijn ##.k.946 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 31-1, 5)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D218_k371, env)}),
      _V10foreign_Dfunction,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__expr_D218_k380(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D218_k380, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.28.350 32 1) (bruijn ##.k.936 5 0) (bruijn ##.x.942 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 32-1, 1)), 2,
      VGetArg(upenv, 5-1, 0),
      _var0);
}
static void _V10_Dprint__expr_D218_k379(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D218_k379, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.67.411 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.67.411 0 0))) ((bruijn ##.print-letrec.303 32 2) (close _V10_Dprint__expr_D218_k380) (##inline ##vcore.car (bruijn ##.expr.65.407 2 0)) (##inline ##vcore.car (bruijn ##.expr.66.409 1 0)) (##inline ##vcore.car (bruijn ##.expr.67.411 0 0)) (bruijn ##.args.300 33 2)) ((bruijn ##.k.936 4 0) #f)) ((bruijn ##.k.936 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 32-1, 2)), 5,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D218_k380, env)}),
      VInlineCar2(runtime,
        upenv->up->vars[0]),
      VInlineCar2(runtime,
        upenv->vars[0]),
      VInlineCar2(runtime,
        _var0),
      VGetArg(upenv, 33-1, 2));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__expr_D218_k378(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D218_k378, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.66.409 0 0)) ((close _V10_Dprint__expr_D218_k379) (##inline ##vcore.cdr (bruijn ##.expr.66.409 0 0))) ((bruijn ##.k.936 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__expr_D218_k379, .env = env }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__expr_D218_k377(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D218_k377, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.65.407 0 0)) ((close _V10_Dprint__expr_D218_k378) (##inline ##vcore.cdr (bruijn ##.expr.65.407 0 0))) ((bruijn ##.k.936 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__expr_D218_k378, .env = env }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__expr_D218_k376(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D218_k376, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.937 0 0) ((close _V10_Dprint__expr_D218_k377) (##inline ##vcore.cdr (bruijn ##.expr.64.406 2 0))) ((bruijn ##.k.936 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__expr_D218_k377, .env = env }, }, 1,
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__expr_D218_k375(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D218_k375, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.64.406 1 0)) ((bruijn ##.equal?.158 33 5) (close _V10_Dprint__expr_D218_k376) 'letrec (##inline ##vcore.car (bruijn ##.expr.64.406 1 0))) ((bruijn ##.k.936 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 33-1, 5)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D218_k376, env)}),
      _V0letrec,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dloop_D417_k385(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D417_k385, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.71.416 4 1) (bruijn ##.k.922 1 0) (bruijn ##.expr.73.418 2 1) (bruijn ##.x.923 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->up->vars[1]), 3,
      upenv->vars[0],
      upenv->up->vars[1],
      _var0);
}
static void _V10_Dloop_D417_k384(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D417_k384, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.not (##inline ##vcore.pair? (bruijn ##.expr.73.418 1 1))) ((bruijn ##.reverse.198 41 45) (close _V10_Dloop_D417_k385) (bruijn ##.xs.70.419 1 2)) ((bruijn ##.k.922 0 0) #f))
if(VDecodeBool(
VInlineNot2(runtime,
        VInlinePairP2(runtime,
        upenv->vars[1])))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 41-1, 45)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D417_k385, env)}),
      upenv->vars[2]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dloop_D417_k388(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D417_k388, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.71.416 7 1) (bruijn ##.k.916 2 0) (bruijn ##.expr.73.418 5 1) (bruijn ##.x.918 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 7-1, 1)), 3,
      upenv->up->vars[0],
      VGetArg(upenv, 5-1, 1),
      _var0);
}
static void _V10_Dloop_D417_k387(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D417_k387, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.reverse.198 44 45) (close _V10_Dloop_D417_k388) (bruijn ##.xs.70.419 4 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 44-1, 45)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D417_k388, env)}),
      upenv->up->up->up->vars[2]);
}
static void _V10_Dloop_D417_lambda73(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D417_lambda73, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##.kk.72.420 0 1) (close _V10_Dloop_D417_k387) (##inline ##vcore.cdr (bruijn ##.expr.73.418 3 1)) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.73.418 3 1)) (bruijn ##.xs.70.419 3 2)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var1), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D417_k387, env)}),
      VInlineCdr2(runtime,
        upenv->up->up->vars[1]),
      VInlineCons2(runtime,
        VInlineCar2(runtime,
        upenv->up->up->vars[1]),
        upenv->up->up->vars[2]));
}
static void _V10_Dloop_D417_lambda72(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D417_lambda72, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.call/cc.159 42 6) (bruijn ##.k.915 0 0) (close _V10_Dloop_D417_lambda73))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 42-1, 6)), 2,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D417_lambda73, env)}));
}
static void _V10_Dloop_D417_k386(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D417_k386, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.call-with-values.173 41 20) (bruijn ##.k.913 1 0) (close _V10_Dloop_D417_lambda72) (bruijn ##.loop.417 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 41-1, 20)), 3,
      upenv->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D417_lambda72, env)}),
      upenv->up->vars[0]);
}
static void _V10_Dloop_D417_lambda71(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D417_lambda71, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((close _V10_Dloop_D417_k384) (close _V10_Dloop_D417_k386))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dloop_D417_k384, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D417_k386, env)}));
}
static void _V10_Dprint__expr_D218_lambda70(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D218_lambda70, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (letrec 1 ((close _V10_Dloop_D417_lambda71)) ((bruijn ##.loop.417 0 0) (bruijn ##.k.912 1 0) (##inline ##vcore.cdr (bruijn ##.expr.68.413 5 0)) '()))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D417_lambda71, env)});
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, env->vars[0]), 3,
      upenv->vars[0],
      VInlineCdr2(runtime,
        VGetArg(upenv, 5-1, 0)),
      VNULL);
    }
}
static void _V10_Dprint__expr_D218_lambda69(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D218_lambda69, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.call/cc.159 37 6) (bruijn ##.k.911 0 0) (close _V10_Dprint__expr_D218_lambda70))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 37-1, 6)), 2,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D218_lambda70, env)}));
}
static void _V10_Dprint__expr_D218_k393(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D218_k393, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.eqv?.170 42 17) (bruijn ##.k.933 1 0) (bruijn ##.x.934 0 0) '##intrinsic)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 42-1, 17)), 3,
      upenv->vars[0],
      _var0,
      _V10intrinsic);
}
static void _V10_Dprint__expr_D218_k392(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D218_k392, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.932 1 0) ((bruijn ##.car.160 41 7) (close _V10_Dprint__expr_D218_k393) (bruijn ##.f.414 5 0)) ((bruijn ##.k.933 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 41-1, 7)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D218_k393, env)}),
      VGetArg(upenv, 5-1, 0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__expr_D218_k395(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D218_k395, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.print-builtin-apply.301 37 0) (bruijn ##.k.929 3 0) (bruijn ##.x.931 0 0) (bruijn ##.xs.423 5 2) #f)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 37-1, 0)), 4,
      upenv->up->up->vars[0],
      _var0,
      VGetArg(upenv, 5-1, 2),
      VEncodeBool(false));
}
static void _V10_Dprint__expr_D218_k394(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D218_k394, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.930 0 0) ((bruijn ##.cadr.171 41 18) (close _V10_Dprint__expr_D218_k395) (bruijn ##.f.414 5 0)) ((bruijn ##.print-closure-apply.302 36 1) (bruijn ##.k.929 2 0) (bruijn ##.f.414 5 0) (bruijn ##.xs.423 4 2) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 41-1, 18)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D218_k395, env)}),
      VGetArg(upenv, 5-1, 0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 36-1, 1)), 4,
      upenv->up->vars[0],
      VGetArg(upenv, 5-1, 0),
      upenv->up->up->up->vars[2],
      VEncodeBool(false));
}
}
static void _V10_Dprint__expr_D218_k391(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D218_k391, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dprint__expr_D218_k392) (close _V10_Dprint__expr_D218_k394))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__expr_D218_k392, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D218_k394, env)}));
}
static void _V10_Dprint__expr_D218_k390(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D218_k390, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.928 1 0) ((bruijn ##.print-builtin-apply.301 34 0) (bruijn ##.k.929 0 0) (bruijn ##.f.414 3 0) (bruijn ##.xs.423 2 2) #f) ((bruijn ##.pair?.169 39 16) (close _V10_Dprint__expr_D218_k391) (bruijn ##.f.414 3 0)))
if(VDecodeBool(
upenv->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 34-1, 0)), 4,
      _var0,
      upenv->up->up->vars[0],
      upenv->up->vars[2],
      VEncodeBool(false));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 39-1, 16)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D218_k391, env)}),
      upenv->up->up->vars[0]);
}
}
static void _V10_Dprint__expr_D218_k396(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D218_k396, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.28.350 33 1) (bruijn ##.k.925 2 0) (bruijn ##.x.927 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 33-1, 1)), 2,
      upenv->up->vars[0],
      _var0);
}
static void _V10_Dprint__expr_D218_k389(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D218_k389, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dprint__expr_D218_k390) (close _V10_Dprint__expr_D218_k396))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__expr_D218_k390, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D218_k396, env)}));
}
static void _V10_Dprint__expr_D218_lambda74(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D218_lambda74, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // (if (##inline ##vcore.null? (bruijn ##.tail-expr.422 0 1)) ((bruijn ##.lookup-intrinsic-name.172 37 19) (close _V10_Dprint__expr_D218_k389) (bruijn ##.f.414 1 0)) ((bruijn ##.k.925 0 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var1))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 37-1, 19)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D218_k389, env)}),
      upenv->vars[0]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__expr_D218_k383(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D218_k383, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.call-with-values.173 36 20) (bruijn ##.k.910 1 0) (close _V10_Dprint__expr_D218_lambda69) (close _V10_Dprint__expr_D218_lambda74))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 36-1, 20)), 3,
      upenv->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D218_lambda69, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D218_lambda74, env)}));
}
static void _V10_Dprint__expr_D218_k382(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D218_k382, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.68.413 1 0)) ((close _V10_Dprint__expr_D218_k383) (##inline ##vcore.car (bruijn ##.expr.68.413 1 0))) ((bruijn ##.k.910 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__expr_D218_k383, .env = env }, }, 1,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__expr_D218_k399(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D218_k399, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.907 1 0) ((bruijn ##.print-global.208 35 0) (bruijn ##.k.908 0 0) (bruijn ##.x.424 2 0)) ((bruijn ##.print-literal.214 35 6) (bruijn ##.k.908 0 0) (bruijn ##.x.424 2 0)))
if(VDecodeBool(
upenv->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 35-1, 0)), 2,
      _var0,
      upenv->up->vars[0]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 35-1, 6)), 2,
      _var0,
      upenv->up->vars[0]);
}
}
static void _V10_Dprint__expr_D218_k402(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D218_k402, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.28.350 34 1) (bruijn ##.k.889 34 0) (bruijn ##.x.905 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 34-1, 1)), 2,
      VGetArg(upenv, 34-1, 0),
      _var0);
}
static void _V10_Dprint__expr_D218_k401(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D218_k401, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.compiler-error.195 39 42) (close _V10_Dprint__expr_D218_k402) (##string ##.string.1430) (bruijn ##.expr.299 35 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 39-1, 42)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D218_k402, env)}),
      VEncodePointer(&_V10_Dstring_D1430.sym, VPOINTER_OTHER),
      VGetArg(upenv, 35-1, 1));
}
static void _V10_Dprint__expr_D218_k400(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D218_k400, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.kk.28.350 32 1) (close _V10_Dprint__expr_D218_k401) (bruijn ##.x.906 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 32-1, 1)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D218_k401, env)}),
      _var0);
}
static void _V10_Dprint__expr_D218_k398(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D218_k398, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dprint__expr_D218_k399) (close _V10_Dprint__expr_D218_k400))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__expr_D218_k399, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D218_k400, env)}));
}
static void _V10_Dprint__expr_D218_lambda75(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.symbol?.168 36 15) (close _V10_Dprint__expr_D218_k398) (bruijn ##.x.424 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 36-1, 15)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D218_k398, env)}),
      _var0);
}
static void _V10_Dprint__expr_D218_k397(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D218_k397, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dprint__expr_D218_lambda75) (bruijn ##.input.29.351 28 0))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__expr_D218_lambda75, .env = env }, }, 1,
      VGetArg(upenv, 28-1, 0));
}
static void _V10_Dprint__expr_D218_lambda68(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dprint__expr_D218_k382) (close _V10_Dprint__expr_D218_k397))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__expr_D218_k382, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D218_k397, env)}));
}
static void _V10_Dprint__expr_D218_k381(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D218_k381, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dprint__expr_D218_lambda68) (bruijn ##.input.29.351 26 0))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__expr_D218_lambda68, .env = env }, }, 1,
      VGetArg(upenv, 26-1, 0));
}
static void _V10_Dprint__expr_D218_lambda67(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dprint__expr_D218_k375) (close _V10_Dprint__expr_D218_k381))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__expr_D218_k375, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D218_k381, env)}));
}
static void _V10_Dprint__expr_D218_k374(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D218_k374, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dprint__expr_D218_lambda67) (bruijn ##.input.29.351 24 0))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__expr_D218_lambda67, .env = env }, }, 1,
      VGetArg(upenv, 24-1, 0));
}
static void _V10_Dprint__expr_D218_lambda66(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dprint__expr_D218_k370) (close _V10_Dprint__expr_D218_k374))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__expr_D218_k370, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D218_k374, env)}));
}
static void _V10_Dprint__expr_D218_k369(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D218_k369, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dprint__expr_D218_lambda66) (bruijn ##.input.29.351 22 0))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__expr_D218_lambda66, .env = env }, }, 1,
      VGetArg(upenv, 22-1, 0));
}
static void _V10_Dprint__expr_D218_lambda65(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dprint__expr_D218_k365) (close _V10_Dprint__expr_D218_k369))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__expr_D218_k365, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D218_k369, env)}));
}
static void _V10_Dprint__expr_D218_k364(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D218_k364, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dprint__expr_D218_lambda65) (bruijn ##.input.29.351 20 0))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__expr_D218_lambda65, .env = env }, }, 1,
      VGetArg(upenv, 20-1, 0));
}
static void _V10_Dprint__expr_D218_lambda64(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dprint__expr_D218_k360) (close _V10_Dprint__expr_D218_k364))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__expr_D218_k360, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D218_k364, env)}));
}
static void _V10_Dprint__expr_D218_k359(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D218_k359, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dprint__expr_D218_lambda64) (bruijn ##.input.29.351 18 0))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__expr_D218_lambda64, .env = env }, }, 1,
      VGetArg(upenv, 18-1, 0));
}
static void _V10_Dprint__expr_D218_lambda63(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dprint__expr_D218_k355) (close _V10_Dprint__expr_D218_k359))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__expr_D218_k355, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D218_k359, env)}));
}
static void _V10_Dprint__expr_D218_k354(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D218_k354, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dprint__expr_D218_lambda63) (bruijn ##.input.29.351 16 0))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__expr_D218_lambda63, .env = env }, }, 1,
      VGetArg(upenv, 16-1, 0));
}
static void _V10_Dprint__expr_D218_lambda62(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dprint__expr_D218_k348) (close _V10_Dprint__expr_D218_k354))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__expr_D218_k348, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D218_k354, env)}));
}
static void _V10_Dprint__expr_D218_k347(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D218_k347, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dprint__expr_D218_lambda62) (bruijn ##.input.29.351 14 0))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__expr_D218_lambda62, .env = env }, }, 1,
      VGetArg(upenv, 14-1, 0));
}
static void _V10_Dprint__expr_D218_lambda61(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dprint__expr_D218_k341) (close _V10_Dprint__expr_D218_k347))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__expr_D218_k341, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D218_k347, env)}));
}
static void _V10_Dprint__expr_D218_k340(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D218_k340, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dprint__expr_D218_lambda61) (bruijn ##.input.29.351 12 0))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__expr_D218_lambda61, .env = env }, }, 1,
      VGetArg(upenv, 12-1, 0));
}
static void _V10_Dprint__expr_D218_lambda60(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dprint__expr_D218_k328) (close _V10_Dprint__expr_D218_k340))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__expr_D218_k328, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D218_k340, env)}));
}
static void _V10_Dprint__expr_D218_k327(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D218_k327, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dprint__expr_D218_lambda60) (bruijn ##.input.29.351 10 0))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__expr_D218_lambda60, .env = env }, }, 1,
      VGetArg(upenv, 10-1, 0));
}
static void _V10_Dprint__expr_D218_lambda59(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dprint__expr_D218_k312) (close _V10_Dprint__expr_D218_k327))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__expr_D218_k312, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D218_k327, env)}));
}
static void _V10_Dprint__expr_D218_k311(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D218_k311, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dprint__expr_D218_lambda59) (bruijn ##.input.29.351 8 0))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__expr_D218_lambda59, .env = env }, }, 1,
      VGetArg(upenv, 8-1, 0));
}
static void _V10_Dprint__expr_D218_lambda58(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dprint__expr_D218_k307) (close _V10_Dprint__expr_D218_k311))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__expr_D218_k307, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D218_k311, env)}));
}
static void _V10_Dprint__expr_D218_k306(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D218_k306, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dprint__expr_D218_lambda58) (bruijn ##.input.29.351 6 0))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__expr_D218_lambda58, .env = env }, }, 1,
      VGetArg(upenv, 6-1, 0));
}
static void _V10_Dprint__expr_D218_lambda57(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dprint__expr_D218_k302) (close _V10_Dprint__expr_D218_k306))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__expr_D218_k302, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D218_k306, env)}));
}
static void _V10_Dprint__expr_D218_k301(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D218_k301, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dprint__expr_D218_lambda57) (bruijn ##.input.29.351 4 0))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__expr_D218_lambda57, .env = env }, }, 1,
      upenv->up->up->up->vars[0]);
}
static void _V10_Dprint__expr_D218_lambda56(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dprint__expr_D218_k294) (close _V10_Dprint__expr_D218_k301))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__expr_D218_k294, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D218_k301, env)}));
}
static void _V10_Dprint__expr_D218_k293(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D218_k293, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dprint__expr_D218_lambda56) (bruijn ##.input.29.351 2 0))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__expr_D218_lambda56, .env = env }, }, 1,
      upenv->up->vars[0]);
}
static void _V10_Dprint__expr_D218_lambda55(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dprint__expr_D218_k289) (close _V10_Dprint__expr_D218_k293))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__expr_D218_k289, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D218_k293, env)}));
}
static void _V10_Dprint__expr_D218_lambda54(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dprint__expr_D218_lambda55) (bruijn ##.input.29.351 0 0))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__expr_D218_lambda55, .env = env }, }, 1,
      _var0);
}
static void _V10_Dprint__expr_D218_lambda53(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D218_lambda53, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V10_Dprint__expr_D218_lambda54) (bruijn ##.expr.299 2 1))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__expr_D218_lambda54, .env = env }, }, 1,
      upenv->up->vars[1]);
}
static void _V10_Dprint__expr_D218_lambda34(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D218_lambda34, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // (letrec 6 ((close _V10_Dprint__builtin__apply_D301_lambda35) (close _V10_Dprint__closure__apply_D302_lambda37) (close _V10_Dprint__letrec_D303_lambda42) (close _V10_Dprint__define__global_D304_lambda45) (close _V10_Dprint__set_D305_lambda46) (close _V10_Dprint__inline_D306_lambda51)) ((bruijn ##.call/cc.159 5 6) (bruijn ##.k.797 1 0) (close _V10_Dprint__expr_D218_lambda53)))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[6]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 6, 6, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__builtin__apply_D301_lambda35, env)});
    env->vars[1] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__closure__apply_D302_lambda37, env)});
    env->vars[2] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__letrec_D303_lambda42, env)});
    env->vars[3] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__define__global_D304_lambda45, env)});
    env->vars[4] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__set_D305_lambda46, env)});
    env->vars[5] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__inline_D306_lambda51, env)});
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 5-1, 6)), 2,
      upenv->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D218_lambda53, env)}));
    }
}
static void _V10_Dgen__args_D431_lambda78(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dgen__args_D431_lambda78, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.sprintf.154 8 1) (bruijn ##.k.1070 0 0) (##string ##.string.1431) (bruijn ##.e.433 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 8-1, 1)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1431.sym, VPOINTER_OTHER),
      _var1);
}
static void _V10_Dgen__args_D431_k403(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dgen__args_D431_k403, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.map.162 7 9) (bruijn ##.k.1069 1 0) (close _V10_Dgen__args_D431_lambda78) (bruijn ##.x.1071 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 7-1, 9)), 3,
      upenv->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dgen__args_D431_lambda78, env)}),
      _var0);
}
static void _V10_Dgen__args_D431_lambda77(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dgen__args_D431_lambda77, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##.iota.157 6 4) (close _V10_Dgen__args_D431_k403) (bruijn ##.num.432 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 6-1, 4)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dgen__args_D431_k403, env)}),
      _var1);
}
static void _V10_Dprint__fun__single_D219_k405(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__single_D219_k405, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.needs-used?.430 3 6) ((bruijn ##.printf.155 7 2) (bruijn ##.k.1116 0 0) (##string ##.string.1432)) ((bruijn ##.k.1116 0 0) #f))
if(VDecodeBool(
upenv->up->up->vars[6])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 7-1, 2)), 2,
      _var0,
      VEncodePointer(&_V10_Dstring_D1432.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__fun__single_D219_k409(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__single_D219_k409, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.variadic?.428 6 4) ((bruijn ##.printf.155 10 2) (bruijn ##.k.1114 0 0) (##string ##.string.1433)) ((bruijn ##.k.1114 0 0) #f))
if(VDecodeBool(
VGetArg(upenv, 6-1, 4))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 10-1, 2)), 2,
      _var0,
      VEncodePointer(&_V10_Dstring_D1433.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__fun__single_D219_k413(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__single_D219_k413, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.printf.155 13 2) (bruijn ##.k.1112 1 0) (##string ##.string.1434))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 13-1, 2)), 2,
      upenv->vars[0],
      VEncodePointer(&_V10_Dstring_D1434.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__fun__single_D219_k412(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__single_D219_k412, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.debug?.201 10 1) ((bruijn ##.printf.155 12 2) (close _V10_Dprint__fun__single_D219_k413) (##string ##.string.1435) (bruijn ##.name.425 8 1)) ((bruijn ##.k.1112 0 0) #f))
if(VDecodeBool(
VGetArg(upenv, 10-1, 1))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 12-1, 2)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__single_D219_k413, env)}),
      VEncodePointer(&_V10_Dstring_D1435.sym, VPOINTER_OTHER),
      VGetArg(upenv, 8-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__fun__single_D219_k419(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__single_D219_k419, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.printf.155 17 2) (bruijn ##.k.1103 4 0) (##string ##.string.1436))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 17-1, 2)), 2,
      upenv->up->up->up->vars[0],
      VEncodePointer(&_V10_Dstring_D1436.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__fun__single_D219_k418(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__single_D219_k418, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.printf.155 16 2) (close _V10_Dprint__fun__single_D219_k419) (##string ##.string.1437))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 16-1, 2)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__single_D219_k419, env)}),
      VEncodePointer(&_V10_Dstring_D1437.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__fun__single_D219_k417(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__single_D219_k417, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.printf.155 15 2) (close _V10_Dprint__fun__single_D219_k418) (##string ##.string.1438) (bruijn ##.num.427 11 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 15-1, 2)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__single_D219_k418, env)}),
      VEncodePointer(&_V10_Dstring_D1438.sym, VPOINTER_OTHER),
      VGetArg(upenv, 11-1, 3));
}
static void _V10_Dprint__fun__single_D219_k416(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__single_D219_k416, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.printf.155 14 2) (close _V10_Dprint__fun__single_D219_k417) (##string ##.string.1439) (bruijn ##.name.425 10 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 14-1, 2)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__single_D219_k417, env)}),
      VEncodePointer(&_V10_Dstring_D1439.sym, VPOINTER_OTHER),
      VGetArg(upenv, 10-1, 1));
}
static void _V10_Dprint__fun__single_D219_k423(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__single_D219_k423, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.printf.155 17 2) (bruijn ##.k.1103 4 0) (##string ##.string.1436))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 17-1, 2)), 2,
      upenv->up->up->up->vars[0],
      VEncodePointer(&_V10_Dstring_D1436.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__fun__single_D219_k422(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__single_D219_k422, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.printf.155 16 2) (close _V10_Dprint__fun__single_D219_k423) (##string ##.string.1437))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 16-1, 2)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__single_D219_k423, env)}),
      VEncodePointer(&_V10_Dstring_D1437.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__fun__single_D219_k421(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__single_D219_k421, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.printf.155 15 2) (close _V10_Dprint__fun__single_D219_k422) (##string ##.string.1441) (bruijn ##.num.427 11 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 15-1, 2)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__single_D219_k422, env)}),
      VEncodePointer(&_V10_Dstring_D1441.sym, VPOINTER_OTHER),
      VGetArg(upenv, 11-1, 3));
}
static void _V10_Dprint__fun__single_D219_k420(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__single_D219_k420, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.printf.155 14 2) (close _V10_Dprint__fun__single_D219_k421) (##string ##.string.1439) (bruijn ##.name.425 10 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 14-1, 2)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__single_D219_k421, env)}),
      VEncodePointer(&_V10_Dstring_D1439.sym, VPOINTER_OTHER),
      VGetArg(upenv, 10-1, 1));
}
static void _V10_Dprint__fun__single_D219_k415(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__single_D219_k415, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.check-args?.426 9 2) (if (bruijn ##.variadic?.428 9 4) ((bruijn ##.printf.155 13 2) (close _V10_Dprint__fun__single_D219_k416) (##string ##.string.1440) (bruijn ##.num.427 9 3)) ((bruijn ##.printf.155 13 2) (close _V10_Dprint__fun__single_D219_k420) (##string ##.string.1442) (bruijn ##.num.427 9 3))) ((bruijn ##.k.1103 0 0) #f))
if(VDecodeBool(
VGetArg(upenv, 9-1, 2))) {
if(VDecodeBool(
VGetArg(upenv, 9-1, 4))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 13-1, 2)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__single_D219_k416, env)}),
      VEncodePointer(&_V10_Dstring_D1440.sym, VPOINTER_OTHER),
      VGetArg(upenv, 9-1, 3));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 13-1, 2)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__single_D219_k420, env)}),
      VEncodePointer(&_V10_Dstring_D1442.sym, VPOINTER_OTHER),
      VGetArg(upenv, 9-1, 3));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__fun__single_D219_k429(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__single_D219_k429, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.list-ref.166 18 13) (bruijn ##.k.1101 1 0) (bruijn ##.args.434 12 0) (bruijn ##.x.1102 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 18-1, 13)), 3,
      upenv->vars[0],
      VGetArg(upenv, 12-1, 0),
      _var0);
}
static void _V10_Dprint__fun__single_D219_k428(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__single_D219_k428, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1100 1 0) ((bruijn ##.k.1101 0 0) (##string ##.string.1443)) ((bruijn ##.-.167 17 14) (close _V10_Dprint__fun__single_D219_k429) (bruijn ##.num.427 13 3) 1))
if(VDecodeBool(
upenv->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodePointer(&_V10_Dstring_D1443.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 17-1, 14)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__single_D219_k429, env)}),
      VGetArg(upenv, 13-1, 3),
      VEncodeInt(1l));
}
}
static void _V10_Dprint__fun__single_D219_k430(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__single_D219_k430, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.printf.155 17 2) (bruijn ##.k.1097 3 0) (##string ##.string.1444) (bruijn ##.num.427 13 3) (bruijn ##.x.1099 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 17-1, 2)), 4,
      upenv->up->up->vars[0],
      VEncodePointer(&_V10_Dstring_D1444.sym, VPOINTER_OTHER),
      VGetArg(upenv, 13-1, 3),
      _var0);
}
static void _V10_Dprint__fun__single_D219_k427(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__single_D219_k427, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dprint__fun__single_D219_k428) (close _V10_Dprint__fun__single_D219_k430))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__fun__single_D219_k428, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__single_D219_k430, env)}));
}
static void _V10_Dprint__fun__single_D219_k426(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__single_D219_k426, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.=.165 15 12) (close _V10_Dprint__fun__single_D219_k427) (bruijn ##.num.427 11 3) 0)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 15-1, 12)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__single_D219_k427, env)}),
      VGetArg(upenv, 11-1, 3),
      VEncodeInt(0l));
}
static void _V10_Dprint__fun__single_D219_k425(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__single_D219_k425, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.variadic?.428 10 4) ((bruijn ##.printf.155 14 2) (close _V10_Dprint__fun__single_D219_k426) (##string ##.string.1445)) ((bruijn ##.k.1097 0 0) #f))
if(VDecodeBool(
VGetArg(upenv, 10-1, 4))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 14-1, 2)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__single_D219_k426, env)}),
      VEncodePointer(&_V10_Dstring_D1445.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__fun__single_D219_k434(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__single_D219_k434, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.variadic?.428 13 4) ((bruijn ##.+.153 17 0) (bruijn ##.k.1096 0 0) (bruijn ##.num.427 13 3) 1) ((bruijn ##.k.1096 0 0) (bruijn ##.num.427 13 3)))
if(VDecodeBool(
VGetArg(upenv, 13-1, 4))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 17-1, 0)), 3,
      _var0,
      VGetArg(upenv, 13-1, 3),
      VEncodeInt(1l));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(upenv, 13-1, 3));
}
}
static void _V10_Dprint__fun__single_D219_k438(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__single_D219_k438, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.variadic?.428 16 4) ((bruijn ##.+.153 20 0) (bruijn ##.k.1094 0 0) (bruijn ##.num.427 16 3) 1) ((bruijn ##.k.1094 0 0) (bruijn ##.num.427 16 3)))
if(VDecodeBool(
VGetArg(upenv, 16-1, 4))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 20-1, 0)), 3,
      _var0,
      VGetArg(upenv, 16-1, 3),
      VEncodeInt(1l));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(upenv, 16-1, 3));
}
}
static void _V10_Dprint__fun__single_D219_k442(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__single_D219_k442, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.variadic?.428 19 4) ((bruijn ##.printf.155 23 2) (bruijn ##.k.1087 7 0) (##string ##.string.1446) (bruijn ##.num.427 19 3)) ((bruijn ##.k.1087 7 0) #f))
if(VDecodeBool(
VGetArg(upenv, 19-1, 4))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 23-1, 2)), 3,
      VGetArg(upenv, 7-1, 0),
      VEncodePointer(&_V10_Dstring_D1446.sym, VPOINTER_OTHER),
      VGetArg(upenv, 19-1, 3));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 7-1, 0)), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__fun__single_D219_lambda79(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__single_D219_lambda79, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  // ((bruijn ##.printf.155 23 2) (bruijn ##.k.1092 0 0) (##string ##.string.1447) (bruijn ##.i.437 0 1) (bruijn ##.arg.438 0 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 23-1, 2)), 4,
      _var0,
      VEncodePointer(&_V10_Dstring_D1447.sym, VPOINTER_OTHER),
      _var1,
      _var2);
}
static void _V10_Dprint__fun__single_D219_k441(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__single_D219_k441, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.for-each.194 22 41) (close _V10_Dprint__fun__single_D219_k442) (close _V10_Dprint__fun__single_D219_lambda79) (bruijn ##.x.1093 0 0) (bruijn ##.args.434 16 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 22-1, 41)), 4,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__single_D219_k442, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__single_D219_lambda79, env)}),
      _var0,
      VGetArg(upenv, 16-1, 0));
}
static void _V10_Dprint__fun__single_D219_k440(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__single_D219_k440, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.iota.157 21 4) (close _V10_Dprint__fun__single_D219_k441) (bruijn ##.num.427 17 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 21-1, 4)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__single_D219_k441, env)}),
      VGetArg(upenv, 17-1, 3));
}
static void _V10_Dprint__fun__single_D219_k439(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__single_D219_k439, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.printf.155 20 2) (close _V10_Dprint__fun__single_D219_k440) (##string ##.string.1448) (bruijn ##.nargs.436 0 0) (bruijn ##.nargs.436 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 20-1, 2)), 4,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__single_D219_k440, env)}),
      VEncodePointer(&_V10_Dstring_D1448.sym, VPOINTER_OTHER),
      _var0,
      _var0);
}
static void _V10_Dprint__fun__single_D219_k437(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__single_D219_k437, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dprint__fun__single_D219_k438) (close _V10_Dprint__fun__single_D219_k439))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__fun__single_D219_k438, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__single_D219_k439, env)}));
}
static void _V10_Dprint__fun__single_D219_k436(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__single_D219_k436, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.printf.155 18 2) (close _V10_Dprint__fun__single_D219_k437) (##string ##.string.1449))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 18-1, 2)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__single_D219_k437, env)}),
      VEncodePointer(&_V10_Dstring_D1449.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__fun__single_D219_k435(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__single_D219_k435, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.printf.155 17 2) (close _V10_Dprint__fun__single_D219_k436) (##string ##.string.1450) (bruijn ##.x.1095 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 17-1, 2)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__single_D219_k436, env)}),
      VEncodePointer(&_V10_Dstring_D1450.sym, VPOINTER_OTHER),
      _var0);
}
static void _V10_Dprint__fun__single_D219_k433(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__single_D219_k433, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1086 1 0) ((close _V10_Dprint__fun__single_D219_k434) (close _V10_Dprint__fun__single_D219_k435)) ((bruijn ##.k.1087 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__fun__single_D219_k434, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__single_D219_k435, env)}));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__fun__single_D219_k445(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__single_D219_k445, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.variadic?.428 14 4) ((bruijn ##.append.164 18 11) (bruijn ##.k.1084 0 0) (bruijn ##.args.434 12 0) (##inline ##vcore.qcons '(##string ##.string.1451) '())) ((bruijn ##.k.1084 0 0) (bruijn ##.args.434 12 0)))
if(VDecodeBool(
VGetArg(upenv, 14-1, 4))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 18-1, 11)), 3,
      _var0,
      VGetArg(upenv, 12-1, 0),
      VInlineCons2(runtime,
        VEncodePointer(&_V10_Dstring_D1451.sym, VPOINTER_OTHER),
        VNULL));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(upenv, 12-1, 0));
}
}
static void _V10_Dprint__fun__single_D219_k447(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__single_D219_k447, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.printf.155 19 2) (bruijn ##.k.1068 15 0) (##string ##.string.1388))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 19-1, 2)), 2,
      VGetArg(upenv, 15-1, 0),
      VEncodePointer(&_V10_Dstring_D1388.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__fun__single_D219_k446(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__single_D219_k446, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.print-expr.218 15 10) (close _V10_Dprint__fun__single_D219_k447) (bruijn ##.body.429 14 5) (bruijn ##.x.1083 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 15-1, 10)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__single_D219_k447, env)}),
      VGetArg(upenv, 14-1, 5),
      _var0);
}
static void _V10_Dprint__fun__single_D219_k444(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__single_D219_k444, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dprint__fun__single_D219_k445) (close _V10_Dprint__fun__single_D219_k446))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__fun__single_D219_k445, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__single_D219_k446, env)}));
}
static void _V10_Dprint__fun__single_D219_k443(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__single_D219_k443, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.printf.155 16 2) (close _V10_Dprint__fun__single_D219_k444) (##string ##.string.1452) (bruijn ##.body.429 12 5))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 16-1, 2)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__single_D219_k444, env)}),
      VEncodePointer(&_V10_Dstring_D1452.sym, VPOINTER_OTHER),
      VGetArg(upenv, 12-1, 5));
}
static void _V10_Dprint__fun__single_D219_k432(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__single_D219_k432, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dprint__fun__single_D219_k433) (close _V10_Dprint__fun__single_D219_k443))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__fun__single_D219_k433, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__single_D219_k443, env)}));
}
static void _V10_Dprint__fun__single_D219_k431(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__single_D219_k431, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.closes?.217 11 9) (close _V10_Dprint__fun__single_D219_k432) (bruijn ##.body.429 10 5))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 11-1, 9)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__single_D219_k432, env)}),
      VGetArg(upenv, 10-1, 5));
}
static void _V10_Dprint__fun__single_D219_k424(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__single_D219_k424, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dprint__fun__single_D219_k425) (close _V10_Dprint__fun__single_D219_k431))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__fun__single_D219_k425, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__single_D219_k431, env)}));
}
static void _V10_Dprint__fun__single_D219_k414(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__single_D219_k414, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dprint__fun__single_D219_k415) (close _V10_Dprint__fun__single_D219_k424))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__fun__single_D219_k415, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__single_D219_k424, env)}));
}
static void _V10_Dprint__fun__single_D219_k411(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__single_D219_k411, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dprint__fun__single_D219_k412) (close _V10_Dprint__fun__single_D219_k414))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__fun__single_D219_k412, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__single_D219_k414, env)}));
}
static void _V10_Dprint__fun__single_D219_k410(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__single_D219_k410, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.printf.155 10 2) (close _V10_Dprint__fun__single_D219_k411) (##string ##.string.1453))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 10-1, 2)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__single_D219_k411, env)}),
      VEncodePointer(&_V10_Dstring_D1453.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__fun__single_D219_k408(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__single_D219_k408, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dprint__fun__single_D219_k409) (close _V10_Dprint__fun__single_D219_k410))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__fun__single_D219_k409, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__single_D219_k410, env)}));
}
static void _V10_Dprint__fun__single_D219_lambda80(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__single_D219_lambda80, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.printf.155 9 2) (bruijn ##.k.1115 0 0) (##string ##.string.1454) (bruijn ##.arg.435 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 9-1, 2)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1454.sym, VPOINTER_OTHER),
      _var1);
}
static void _V10_Dprint__fun__single_D219_k407(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__single_D219_k407, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.for-each.194 8 41) (close _V10_Dprint__fun__single_D219_k408) (close _V10_Dprint__fun__single_D219_lambda80) (bruijn ##.args.434 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 8-1, 41)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__single_D219_k408, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__single_D219_lambda80, env)}),
      upenv->up->vars[0]);
}
static void _V10_Dprint__fun__single_D219_k406(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__single_D219_k406, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.printf.155 7 2) (close _V10_Dprint__fun__single_D219_k407) (##string ##.string.1455) (bruijn ##.name.425 3 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 7-1, 2)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__single_D219_k407, env)}),
      VEncodePointer(&_V10_Dstring_D1455.sym, VPOINTER_OTHER),
      upenv->up->up->vars[1]);
}
static void _V10_Dprint__fun__single_D219_k404(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__single_D219_k404, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dprint__fun__single_D219_k405) (close _V10_Dprint__fun__single_D219_k406))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__fun__single_D219_k405, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__single_D219_k406, env)}));
}
static void _V10_Dprint__fun__single_D219_lambda76(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4, VWORD _var5, VWORD _var6) {
 if(argc != 7) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__single_D219_lambda76, got ~D~N"
  "-- expected 7~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[7]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 7, 7, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  env->vars[4] = _var4;
  env->vars[5] = _var5;
  env->vars[6] = _var6;
  // (letrec 1 ((close _V10_Dgen__args_D431_lambda77)) ((bruijn ##.gen-args.431 0 0) (close _V10_Dprint__fun__single_D219_k404) (bruijn ##.num.427 1 3)))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dgen__args_D431_lambda77, env)});
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, env->vars[0]), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__single_D219_k404, env)}),
      upenv->vars[3]);
    }
}
static void _V10_Dprint__fun__case_D220_k468(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D220_k468, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.printf.155 25 2) (bruijn ##.k.1117 21 0) (##string ##.string.1391))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 25-1, 2)), 2,
      VGetArg(upenv, 21-1, 0),
      VEncodePointer(&_V10_Dstring_D1391.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__fun__case_D220_k467(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D220_k467, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.printf.155 24 2) (close _V10_Dprint__fun__case_D220_k468) (##string ##.string.1456) (bruijn ##.name.440 19 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 24-1, 2)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__case_D220_k468, env)}),
      VEncodePointer(&_V10_Dstring_D1456.sym, VPOINTER_OTHER),
      VGetArg(upenv, 19-1, 0));
}
static void _V10_Dprint__fun__case_D220_k477(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D220_k477, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.110.481 11 1) (bruijn ##.k.1151 8 0) (bruijn ##.x.1160 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 11-1, 1)), 2,
      VGetArg(upenv, 8-1, 0),
      _var0);
}
static void _V10_Dprint__fun__case_D220_k476(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D220_k476, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.printf.155 35 2) (close _V10_Dprint__fun__case_D220_k477) (##string ##.string.1457) (##inline ##vcore.car (bruijn ##.expr.112.483 8 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 35-1, 2)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__case_D220_k477, env)}),
      VEncodePointer(&_V10_Dstring_D1457.sym, VPOINTER_OTHER),
      VInlineCar2(runtime,
        VGetArg(upenv, 8-1, 0)));
}
static void _V10_Dprint__fun__case_D220_k475(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D220_k475, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.117.490 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.117.490 0 0))) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.114.486 4 0))) ((bruijn ##.printf.155 34 2) (close _V10_Dprint__fun__case_D220_k476) (##string ##.string.1458) (##inline ##vcore.car (bruijn ##.expr.115.487 3 0))) ((bruijn ##.k.1151 6 0) #f)) ((bruijn ##.k.1151 6 0) #f)) ((bruijn ##.k.1151 6 0) #f))
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
        upenv->up->up->up->vars[0])))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 34-1, 2)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__case_D220_k476, env)}),
      VEncodePointer(&_V10_Dstring_D1458.sym, VPOINTER_OTHER),
      VInlineCar2(runtime,
        upenv->up->up->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 6-1, 0)), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 6-1, 0)), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 6-1, 0)), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__fun__case_D220_k474(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D220_k474, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1156 0 0) ((close _V10_Dprint__fun__case_D220_k475) (##inline ##vcore.cdr (bruijn ##.expr.116.489 1 0))) ((bruijn ##.k.1151 5 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__fun__case_D220_k475, .env = env }, }, 1,
      VInlineCdr2(runtime,
        upenv->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 5-1, 0)), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__fun__case_D220_k473(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D220_k473, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.116.489 0 0)) ((bruijn ##.equal?.158 32 5) (close _V10_Dprint__fun__case_D220_k474) '+ (##inline ##vcore.car (bruijn ##.expr.116.489 0 0))) ((bruijn ##.k.1151 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 32-1, 5)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__case_D220_k474, env)}),
      _V0_P,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__fun__case_D220_k472(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D220_k472, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.115.487 0 0)) ((close _V10_Dprint__fun__case_D220_k473) (##inline ##vcore.cdr (bruijn ##.expr.115.487 0 0))) ((bruijn ##.k.1151 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__fun__case_D220_k473, .env = env }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__fun__case_D220_k471(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D220_k471, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.114.486 0 0)) ((close _V10_Dprint__fun__case_D220_k472) (##inline ##vcore.car (bruijn ##.expr.114.486 0 0))) ((bruijn ##.k.1151 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__fun__case_D220_k472, .env = env }, }, 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__fun__case_D220_k470(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D220_k470, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.113.485 0 0)) ((close _V10_Dprint__fun__case_D220_k471) (##inline ##vcore.cdr (bruijn ##.expr.113.485 0 0))) ((bruijn ##.k.1151 1 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__fun__case_D220_k471, .env = env }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__fun__case_D220_k469(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D220_k469, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.112.483 1 0)) ((close _V10_Dprint__fun__case_D220_k470) (##inline ##vcore.cdr (bruijn ##.expr.112.483 1 0))) ((bruijn ##.k.1151 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__fun__case_D220_k470, .env = env }, }, 1,
      VInlineCdr2(runtime,
        upenv->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__fun__case_D220_k485(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D220_k485, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.110.481 11 1) (bruijn ##.k.1139 6 0) (bruijn ##.x.1146 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 11-1, 1)), 2,
      VGetArg(upenv, 6-1, 0),
      _var0);
}
static void _V10_Dprint__fun__case_D220_k484(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D220_k484, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.printf.155 35 2) (close _V10_Dprint__fun__case_D220_k485) (##string ##.string.1459) (##inline ##vcore.car (bruijn ##.expr.118.491 6 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 35-1, 2)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__case_D220_k485, env)}),
      VEncodePointer(&_V10_Dstring_D1459.sym, VPOINTER_OTHER),
      VInlineCar2(runtime,
        VGetArg(upenv, 6-1, 0)));
}
static void _V10_Dprint__fun__case_D220_k483(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D220_k483, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.122.497 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.122.497 0 0))) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.120.494 2 0))) ((bruijn ##.printf.155 34 2) (close _V10_Dprint__fun__case_D220_k484) (##string ##.string.1458) (##inline ##vcore.car (bruijn ##.expr.121.495 1 0))) ((bruijn ##.k.1139 4 0) #f)) ((bruijn ##.k.1139 4 0) #f)) ((bruijn ##.k.1139 4 0) #f))
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
        upenv->up->vars[0])))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 34-1, 2)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__case_D220_k484, env)}),
      VEncodePointer(&_V10_Dstring_D1458.sym, VPOINTER_OTHER),
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__fun__case_D220_k482(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D220_k482, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.121.495 0 0)) ((close _V10_Dprint__fun__case_D220_k483) (##inline ##vcore.cdr (bruijn ##.expr.121.495 0 0))) ((bruijn ##.k.1139 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__fun__case_D220_k483, .env = env }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__fun__case_D220_k481(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D220_k481, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.120.494 0 0)) ((close _V10_Dprint__fun__case_D220_k482) (##inline ##vcore.car (bruijn ##.expr.120.494 0 0))) ((bruijn ##.k.1139 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__fun__case_D220_k482, .env = env }, }, 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__fun__case_D220_k480(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D220_k480, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.119.493 0 0)) ((close _V10_Dprint__fun__case_D220_k481) (##inline ##vcore.cdr (bruijn ##.expr.119.493 0 0))) ((bruijn ##.k.1139 1 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__fun__case_D220_k481, .env = env }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__fun__case_D220_k479(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D220_k479, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.118.491 1 0)) ((close _V10_Dprint__fun__case_D220_k480) (##inline ##vcore.cdr (bruijn ##.expr.118.491 1 0))) ((bruijn ##.k.1139 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__fun__case_D220_k480, .env = env }, }, 1,
      VInlineCdr2(runtime,
        upenv->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__fun__case_D220_k486(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D220_k486, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.error.163 30 10) (bruijn ##.k.1135 5 0) (##string ##.string.1460))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 30-1, 10)), 2,
      VGetArg(upenv, 5-1, 0),
      VEncodePointer(&_V10_Dstring_D1460.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__fun__case_D220_lambda86(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dprint__fun__case_D220_k479) (close _V10_Dprint__fun__case_D220_k486))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__fun__case_D220_k479, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__case_D220_k486, env)}));
}
static void _V10_Dprint__fun__case_D220_k478(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D220_k478, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dprint__fun__case_D220_lambda86) (bruijn ##.input.111.482 2 0))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__fun__case_D220_lambda86, .env = env }, }, 1,
      upenv->up->vars[0]);
}
static void _V10_Dprint__fun__case_D220_lambda85(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dprint__fun__case_D220_k469) (close _V10_Dprint__fun__case_D220_k478))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__fun__case_D220_k469, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__case_D220_k478, env)}));
}
static void _V10_Dprint__fun__case_D220_lambda84(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dprint__fun__case_D220_lambda85) (bruijn ##.input.111.482 0 0))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__fun__case_D220_lambda85, .env = env }, }, 1,
      _var0);
}
static void _V10_Dprint__fun__case_D220_lambda83(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D220_lambda83, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V10_Dprint__fun__case_D220_lambda84) (bruijn ##.e.480 1 1))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__fun__case_D220_lambda84, .env = env }, }, 1,
      upenv->vars[1]);
}
static void _V10_Dprint__fun__case_D220_lambda82(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D220_lambda82, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##.call/cc.159 24 6) (bruijn ##.k.1134 0 0) (close _V10_Dprint__fun__case_D220_lambda83))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 24-1, 6)), 2,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__case_D220_lambda83, env)}));
}
static void _V10_Dprint__fun__case_D220_k466(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D220_k466, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.for-each.194 23 41) (close _V10_Dprint__fun__case_D220_k467) (close _V10_Dprint__fun__case_D220_lambda82) (bruijn ##.cases.442 14 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 23-1, 41)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__case_D220_k467, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__case_D220_lambda82, env)}),
      VGetArg(upenv, 14-1, 0));
}
static void _V10_Dprint__fun__case_D220_k465(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D220_k465, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.printf.155 22 2) (close _V10_Dprint__fun__case_D220_k466) (##string ##.string.1461) (bruijn ##.name.440 17 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 22-1, 2)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__case_D220_k466, env)}),
      VEncodePointer(&_V10_Dstring_D1461.sym, VPOINTER_OTHER),
      VGetArg(upenv, 17-1, 0));
}
static void _V10_Dprint__fun__case_D220_k464(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D220_k464, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.printf.155 21 2) (close _V10_Dprint__fun__case_D220_k465) (##string ##.string.1462))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 21-1, 2)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__case_D220_k465, env)}),
      VEncodePointer(&_V10_Dstring_D1462.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__fun__case_D220_k463(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D220_k463, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.printf.155 20 2) (close _V10_Dprint__fun__case_D220_k464) (##string ##.string.1463) (bruijn ##.name.440 15 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 20-1, 2)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__case_D220_k464, env)}),
      VEncodePointer(&_V10_Dstring_D1463.sym, VPOINTER_OTHER),
      VGetArg(upenv, 15-1, 0));
}
static void _V10_Dprint__fun__case_D220_k462(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D220_k462, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.printf.155 19 2) (close _V10_Dprint__fun__case_D220_k463) (##string ##.string.1464))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 19-1, 2)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__case_D220_k463, env)}),
      VEncodePointer(&_V10_Dstring_D1464.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__fun__case_D220_k461(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D220_k461, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.printf.155 18 2) (close _V10_Dprint__fun__case_D220_k462) (##string ##.string.1465))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 18-1, 2)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__case_D220_k462, env)}),
      VEncodePointer(&_V10_Dstring_D1465.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__fun__case_D220_k460(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D220_k460, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.printf.155 17 2) (close _V10_Dprint__fun__case_D220_k461) (##string ##.string.1466))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 17-1, 2)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__case_D220_k461, env)}),
      VEncodePointer(&_V10_Dstring_D1466.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__fun__case_D220_k459(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D220_k459, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.printf.155 16 2) (close _V10_Dprint__fun__case_D220_k460) (##string ##.string.1467) (bruijn ##.name.440 11 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 16-1, 2)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__case_D220_k460, env)}),
      VEncodePointer(&_V10_Dstring_D1467.sym, VPOINTER_OTHER),
      VGetArg(upenv, 11-1, 0));
}
static void _V10_Dprint__fun__case_D220_k494(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D220_k494, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.97.461 10 1) (bruijn ##.k.1181 7 0) (bruijn ##.x.1190 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 10-1, 1)), 2,
      VGetArg(upenv, 7-1, 0),
      _var0);
}
static void _V10_Dprint__fun__case_D220_k493(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D220_k493, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.104.470 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.104.470 0 0))) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.101.466 4 0))) ((bruijn ##.print-fun-single.219 23 11) (close _V10_Dprint__fun__case_D220_k494) (##inline ##vcore.car (bruijn ##.expr.99.463 7 0)) #f (##inline ##vcore.car (bruijn ##.expr.102.467 3 0)) #t (##inline ##vcore.car (bruijn ##.expr.104.470 0 0)) #t) ((bruijn ##.k.1181 6 0) #f)) ((bruijn ##.k.1181 6 0) #f)) ((bruijn ##.k.1181 6 0) #f))
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
        upenv->up->up->up->vars[0])))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 23-1, 11)), 7,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__case_D220_k494, env)}),
      VInlineCar2(runtime,
        VGetArg(upenv, 7-1, 0)),
      VEncodeBool(false),
      VInlineCar2(runtime,
        upenv->up->up->vars[0]),
      VEncodeBool(true),
      VInlineCar2(runtime,
        _var0),
      VEncodeBool(true));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 6-1, 0)), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 6-1, 0)), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 6-1, 0)), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__fun__case_D220_k492(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D220_k492, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1186 0 0) ((close _V10_Dprint__fun__case_D220_k493) (##inline ##vcore.cdr (bruijn ##.expr.103.469 1 0))) ((bruijn ##.k.1181 5 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__fun__case_D220_k493, .env = env }, }, 1,
      VInlineCdr2(runtime,
        upenv->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 5-1, 0)), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__fun__case_D220_k491(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D220_k491, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.103.469 0 0)) ((bruijn ##.equal?.158 24 5) (close _V10_Dprint__fun__case_D220_k492) '+ (##inline ##vcore.car (bruijn ##.expr.103.469 0 0))) ((bruijn ##.k.1181 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 24-1, 5)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__case_D220_k492, env)}),
      _V0_P,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__fun__case_D220_k490(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D220_k490, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.102.467 0 0)) ((close _V10_Dprint__fun__case_D220_k491) (##inline ##vcore.cdr (bruijn ##.expr.102.467 0 0))) ((bruijn ##.k.1181 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__fun__case_D220_k491, .env = env }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__fun__case_D220_k489(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D220_k489, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.101.466 0 0)) ((close _V10_Dprint__fun__case_D220_k490) (##inline ##vcore.car (bruijn ##.expr.101.466 0 0))) ((bruijn ##.k.1181 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__fun__case_D220_k490, .env = env }, }, 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__fun__case_D220_k488(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D220_k488, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.100.465 0 0)) ((close _V10_Dprint__fun__case_D220_k489) (##inline ##vcore.cdr (bruijn ##.expr.100.465 0 0))) ((bruijn ##.k.1181 1 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__fun__case_D220_k489, .env = env }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__fun__case_D220_k487(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D220_k487, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.99.463 1 0)) ((close _V10_Dprint__fun__case_D220_k488) (##inline ##vcore.cdr (bruijn ##.expr.99.463 1 0))) ((bruijn ##.k.1181 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__fun__case_D220_k488, .env = env }, }, 1,
      VInlineCdr2(runtime,
        upenv->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__fun__case_D220_k501(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D220_k501, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.97.461 10 1) (bruijn ##.k.1170 5 0) (bruijn ##.x.1177 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 10-1, 1)), 2,
      VGetArg(upenv, 5-1, 0),
      _var0);
}
static void _V10_Dprint__fun__case_D220_k500(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D220_k500, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.109.478 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.109.478 0 0))) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.107.475 2 0))) ((bruijn ##.print-fun-single.219 23 11) (close _V10_Dprint__fun__case_D220_k501) (##inline ##vcore.car (bruijn ##.expr.105.472 5 0)) #f (##inline ##vcore.car (bruijn ##.expr.108.476 1 0)) #f (##inline ##vcore.car (bruijn ##.expr.109.478 0 0)) #t) ((bruijn ##.k.1170 4 0) #f)) ((bruijn ##.k.1170 4 0) #f)) ((bruijn ##.k.1170 4 0) #f))
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
        upenv->up->vars[0])))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 23-1, 11)), 7,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__case_D220_k501, env)}),
      VInlineCar2(runtime,
        VGetArg(upenv, 5-1, 0)),
      VEncodeBool(false),
      VInlineCar2(runtime,
        upenv->vars[0]),
      VEncodeBool(false),
      VInlineCar2(runtime,
        _var0),
      VEncodeBool(true));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__fun__case_D220_k499(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D220_k499, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.108.476 0 0)) ((close _V10_Dprint__fun__case_D220_k500) (##inline ##vcore.cdr (bruijn ##.expr.108.476 0 0))) ((bruijn ##.k.1170 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__fun__case_D220_k500, .env = env }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__fun__case_D220_k498(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D220_k498, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.107.475 0 0)) ((close _V10_Dprint__fun__case_D220_k499) (##inline ##vcore.car (bruijn ##.expr.107.475 0 0))) ((bruijn ##.k.1170 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__fun__case_D220_k499, .env = env }, }, 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__fun__case_D220_k497(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D220_k497, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.106.474 0 0)) ((close _V10_Dprint__fun__case_D220_k498) (##inline ##vcore.cdr (bruijn ##.expr.106.474 0 0))) ((bruijn ##.k.1170 1 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__fun__case_D220_k498, .env = env }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__fun__case_D220_k496(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D220_k496, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.105.472 1 0)) ((close _V10_Dprint__fun__case_D220_k497) (##inline ##vcore.cdr (bruijn ##.expr.105.472 1 0))) ((bruijn ##.k.1170 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__fun__case_D220_k497, .env = env }, }, 1,
      VInlineCdr2(runtime,
        upenv->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__fun__case_D220_k502(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D220_k502, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.error.163 22 10) (bruijn ##.k.1166 5 0) (##string ##.string.1460))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 22-1, 10)), 2,
      VGetArg(upenv, 5-1, 0),
      VEncodePointer(&_V10_Dstring_D1460.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__fun__case_D220_lambda91(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dprint__fun__case_D220_k496) (close _V10_Dprint__fun__case_D220_k502))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__fun__case_D220_k496, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__case_D220_k502, env)}));
}
static void _V10_Dprint__fun__case_D220_k495(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D220_k495, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dprint__fun__case_D220_lambda91) (bruijn ##.input.98.462 2 0))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__fun__case_D220_lambda91, .env = env }, }, 1,
      upenv->up->vars[0]);
}
static void _V10_Dprint__fun__case_D220_lambda90(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dprint__fun__case_D220_k487) (close _V10_Dprint__fun__case_D220_k495))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__fun__case_D220_k487, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__case_D220_k495, env)}));
}
static void _V10_Dprint__fun__case_D220_lambda89(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dprint__fun__case_D220_lambda90) (bruijn ##.input.98.462 0 0))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__fun__case_D220_lambda90, .env = env }, }, 1,
      _var0);
}
static void _V10_Dprint__fun__case_D220_lambda88(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D220_lambda88, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V10_Dprint__fun__case_D220_lambda89) (bruijn ##.e.460 1 1))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__fun__case_D220_lambda89, .env = env }, }, 1,
      upenv->vars[1]);
}
static void _V10_Dprint__fun__case_D220_lambda87(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D220_lambda87, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##.call/cc.159 16 6) (bruijn ##.k.1165 0 0) (close _V10_Dprint__fun__case_D220_lambda88))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 16-1, 6)), 2,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__case_D220_lambda88, env)}));
}
static void _V10_Dprint__fun__case_D220_k458(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D220_k458, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.for-each.194 15 41) (close _V10_Dprint__fun__case_D220_k459) (close _V10_Dprint__fun__case_D220_lambda87) (bruijn ##.cases.442 6 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 15-1, 41)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__case_D220_k459, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__case_D220_lambda87, env)}),
      VGetArg(upenv, 6-1, 0));
}
static void _V10_Dprint__fun__case_D220_k457(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D220_k457, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.printf.155 14 2) (close _V10_Dprint__fun__case_D220_k458) (##string ##.string.1388))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 14-1, 2)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__case_D220_k458, env)}),
      VEncodePointer(&_V10_Dstring_D1388.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__fun__case_D220_k456(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D220_k456, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.printf.155 13 2) (close _V10_Dprint__fun__case_D220_k457) (##string ##.string.1468))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 13-1, 2)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__case_D220_k457, env)}),
      VEncodePointer(&_V10_Dstring_D1468.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__fun__case_D220_k510(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D220_k510, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.84.444 10 1) (bruijn ##.k.1210 7 0) (bruijn ##.x.1219 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 10-1, 1)), 2,
      VGetArg(upenv, 7-1, 0),
      _var0);
}
static void _V10_Dprint__fun__case_D220_k509(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D220_k509, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.91.453 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.91.453 0 0))) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.88.449 4 0))) ((bruijn ##.printf.155 23 2) (close _V10_Dprint__fun__case_D220_k510) (##string ##.string.1469) (##inline ##vcore.car (bruijn ##.expr.89.450 3 0))) ((bruijn ##.k.1210 6 0) #f)) ((bruijn ##.k.1210 6 0) #f)) ((bruijn ##.k.1210 6 0) #f))
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
        upenv->up->up->up->vars[0])))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 23-1, 2)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__case_D220_k510, env)}),
      VEncodePointer(&_V10_Dstring_D1469.sym, VPOINTER_OTHER),
      VInlineCar2(runtime,
        upenv->up->up->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 6-1, 0)), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 6-1, 0)), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 6-1, 0)), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__fun__case_D220_k508(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D220_k508, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1215 0 0) ((close _V10_Dprint__fun__case_D220_k509) (##inline ##vcore.cdr (bruijn ##.expr.90.452 1 0))) ((bruijn ##.k.1210 5 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__fun__case_D220_k509, .env = env }, }, 1,
      VInlineCdr2(runtime,
        upenv->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 5-1, 0)), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__fun__case_D220_k507(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D220_k507, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.90.452 0 0)) ((bruijn ##.equal?.158 21 5) (close _V10_Dprint__fun__case_D220_k508) '+ (##inline ##vcore.car (bruijn ##.expr.90.452 0 0))) ((bruijn ##.k.1210 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 21-1, 5)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__case_D220_k508, env)}),
      _V0_P,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__fun__case_D220_k506(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D220_k506, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.89.450 0 0)) ((close _V10_Dprint__fun__case_D220_k507) (##inline ##vcore.cdr (bruijn ##.expr.89.450 0 0))) ((bruijn ##.k.1210 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__fun__case_D220_k507, .env = env }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__fun__case_D220_k505(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D220_k505, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.88.449 0 0)) ((close _V10_Dprint__fun__case_D220_k506) (##inline ##vcore.car (bruijn ##.expr.88.449 0 0))) ((bruijn ##.k.1210 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__fun__case_D220_k506, .env = env }, }, 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__fun__case_D220_k504(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D220_k504, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.87.448 0 0)) ((close _V10_Dprint__fun__case_D220_k505) (##inline ##vcore.cdr (bruijn ##.expr.87.448 0 0))) ((bruijn ##.k.1210 1 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__fun__case_D220_k505, .env = env }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__fun__case_D220_k503(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D220_k503, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.86.446 1 0)) ((close _V10_Dprint__fun__case_D220_k504) (##inline ##vcore.cdr (bruijn ##.expr.86.446 1 0))) ((bruijn ##.k.1210 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__fun__case_D220_k504, .env = env }, }, 1,
      VInlineCdr2(runtime,
        upenv->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__fun__case_D220_k517(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D220_k517, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.84.444 10 1) (bruijn ##.k.1199 5 0) (bruijn ##.x.1206 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 10-1, 1)), 2,
      VGetArg(upenv, 5-1, 0),
      _var0);
}
static void _V10_Dprint__fun__case_D220_k516(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D220_k516, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.96.459 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.96.459 0 0))) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.94.456 2 0))) ((bruijn ##.printf.155 23 2) (close _V10_Dprint__fun__case_D220_k517) (##string ##.string.1470) (##inline ##vcore.car (bruijn ##.expr.95.457 1 0))) ((bruijn ##.k.1199 4 0) #f)) ((bruijn ##.k.1199 4 0) #f)) ((bruijn ##.k.1199 4 0) #f))
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
        upenv->up->vars[0])))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 23-1, 2)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__case_D220_k517, env)}),
      VEncodePointer(&_V10_Dstring_D1470.sym, VPOINTER_OTHER),
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__fun__case_D220_k515(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D220_k515, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.95.457 0 0)) ((close _V10_Dprint__fun__case_D220_k516) (##inline ##vcore.cdr (bruijn ##.expr.95.457 0 0))) ((bruijn ##.k.1199 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__fun__case_D220_k516, .env = env }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__fun__case_D220_k514(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D220_k514, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.94.456 0 0)) ((close _V10_Dprint__fun__case_D220_k515) (##inline ##vcore.car (bruijn ##.expr.94.456 0 0))) ((bruijn ##.k.1199 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__fun__case_D220_k515, .env = env }, }, 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__fun__case_D220_k513(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D220_k513, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.93.455 0 0)) ((close _V10_Dprint__fun__case_D220_k514) (##inline ##vcore.cdr (bruijn ##.expr.93.455 0 0))) ((bruijn ##.k.1199 1 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__fun__case_D220_k514, .env = env }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__fun__case_D220_k512(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D220_k512, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.92.454 1 0)) ((close _V10_Dprint__fun__case_D220_k513) (##inline ##vcore.cdr (bruijn ##.expr.92.454 1 0))) ((bruijn ##.k.1199 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__fun__case_D220_k513, .env = env }, }, 1,
      VInlineCdr2(runtime,
        upenv->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__fun__case_D220_k518(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D220_k518, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.error.163 19 10) (bruijn ##.k.1195 5 0) (##string ##.string.1460))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 19-1, 10)), 2,
      VGetArg(upenv, 5-1, 0),
      VEncodePointer(&_V10_Dstring_D1460.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__fun__case_D220_lambda96(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dprint__fun__case_D220_k512) (close _V10_Dprint__fun__case_D220_k518))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__fun__case_D220_k512, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__case_D220_k518, env)}));
}
static void _V10_Dprint__fun__case_D220_k511(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D220_k511, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dprint__fun__case_D220_lambda96) (bruijn ##.input.85.445 2 0))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__fun__case_D220_lambda96, .env = env }, }, 1,
      upenv->up->vars[0]);
}
static void _V10_Dprint__fun__case_D220_lambda95(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dprint__fun__case_D220_k503) (close _V10_Dprint__fun__case_D220_k511))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__fun__case_D220_k503, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__case_D220_k511, env)}));
}
static void _V10_Dprint__fun__case_D220_lambda94(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dprint__fun__case_D220_lambda95) (bruijn ##.input.85.445 0 0))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__fun__case_D220_lambda95, .env = env }, }, 1,
      _var0);
}
static void _V10_Dprint__fun__case_D220_lambda93(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D220_lambda93, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V10_Dprint__fun__case_D220_lambda94) (bruijn ##.e.443 1 1))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__fun__case_D220_lambda94, .env = env }, }, 1,
      upenv->vars[1]);
}
static void _V10_Dprint__fun__case_D220_lambda92(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D220_lambda92, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##.call/cc.159 13 6) (bruijn ##.k.1194 0 0) (close _V10_Dprint__fun__case_D220_lambda93))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 13-1, 6)), 2,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__case_D220_lambda93, env)}));
}
static void _V10_Dprint__fun__case_D220_k455(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D220_k455, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.for-each.194 12 41) (close _V10_Dprint__fun__case_D220_k456) (close _V10_Dprint__fun__case_D220_lambda92) (bruijn ##.cases.442 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 12-1, 41)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__case_D220_k456, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__case_D220_lambda92, env)}),
      upenv->up->up->vars[0]);
}
static void _V10_Dprint__fun__case_D220_k454(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D220_k454, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.printf.155 11 2) (close _V10_Dprint__fun__case_D220_k455) (##string ##.string.1471) (bruijn ##.name.440 6 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 11-1, 2)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__case_D220_k455, env)}),
      VEncodePointer(&_V10_Dstring_D1471.sym, VPOINTER_OTHER),
      VGetArg(upenv, 6-1, 0));
}
static void _V10_Dprint__fun__case_D220_k453(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D220_k453, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.printf.155 10 2) (close _V10_Dprint__fun__case_D220_k454) (##string ##.string.1472) (bruijn ##.fun.439 6 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 10-1, 2)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__case_D220_k454, env)}),
      VEncodePointer(&_V10_Dstring_D1472.sym, VPOINTER_OTHER),
      VGetArg(upenv, 6-1, 1));
}
static void _V10_Dprint__fun__case_D220_k452(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D220_k452, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.printf.155 9 2) (close _V10_Dprint__fun__case_D220_k453) (##string ##.string.1473) (bruijn ##.name.440 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 9-1, 2)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__case_D220_k453, env)}),
      VEncodePointer(&_V10_Dstring_D1473.sym, VPOINTER_OTHER),
      upenv->up->up->up->vars[0]);
}
static void _V10_Dprint__fun__case_D220_k519(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D220_k519, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1223 1 0) (##inline ##vcore.cons (bruijn ##.x.1224 0 0) (##inline ##vcore.cons '#f (##inline ##vcore.cons (bruijn ##.e.499 1 2) '()))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 1,
      VInlineCons2(runtime,
        _var0,
        VInlineCons2(runtime,
        VEncodeBool(false),
        VInlineCons2(runtime,
        upenv->vars[2],
        VNULL))));
}
static void _V10_Dprint__fun__case_D220_lambda97(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D220_lambda97, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn ##.sprintf.154 9 1) (close _V10_Dprint__fun__case_D220_k519) (##string ##.string.1474) (bruijn ##.i.498 0 1) (bruijn ##.name.440 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 9-1, 1)), 4,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__case_D220_k519, env)}),
      VEncodePointer(&_V10_Dstring_D1474.sym, VPOINTER_OTHER),
      _var1,
      upenv->up->up->up->vars[0]);
}
static void _V10_Dprint__fun__case_D220_k451(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D220_k451, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.map.162 8 9) (close _V10_Dprint__fun__case_D220_k452) (close _V10_Dprint__fun__case_D220_lambda97) (bruijn ##.x.1227 0 0) (bruijn ##.cases.441 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 8-1, 9)), 4,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__case_D220_k452, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__case_D220_lambda97, env)}),
      _var0,
      upenv->up->vars[0]);
}
static void _V10_Dprint__fun__case_D220_k450(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D220_k450, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.iota.157 7 4) (close _V10_Dprint__fun__case_D220_k451) (bruijn ##.x.1228 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 7-1, 4)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__case_D220_k451, env)}),
      _var0);
}
static void _V10_Dprint__fun__case_D220_k449(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D220_k449, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.length.156 6 3) (close _V10_Dprint__fun__case_D220_k450) (bruijn ##.cases.441 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 6-1, 3)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__case_D220_k450, env)}),
      _var0);
}
static void _V10_Dprint__fun__case_D220_k448(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D220_k448, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cddr.161 5 8) (close _V10_Dprint__fun__case_D220_k449) (bruijn ##.fun.439 1 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 5-1, 8)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__case_D220_k449, env)}),
      upenv->vars[1]);
}
static void _V10_Dprint__fun__case_D220_lambda81(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D220_lambda81, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##.car.160 4 7) (close _V10_Dprint__fun__case_D220_k448) (bruijn ##.fun.439 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->up->vars[7]), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__case_D220_k448, env)}),
      _var1);
}
static void _V10_Dprint__fun_D221_k525(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun_D221_k525, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.123.501 8 1) (bruijn ##.k.1249 5 0) (bruijn ##.x.1256 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 8-1, 1)), 2,
      VGetArg(upenv, 5-1, 0),
      _var0);
}
static void _V10_Dprint__fun_D221_k524(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun_D221_k524, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.129.510 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.129.510 0 0))) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.127.507 2 0))) ((bruijn ##.print-fun-single.219 9 11) (close _V10_Dprint__fun_D221_k525) (##inline ##vcore.car (bruijn ##.expr.125.503 5 0)) (##inline ##vcore.car (bruijn ##.expr.126.505 3 0)) (##inline ##vcore.car (bruijn ##.expr.128.508 1 0)) #f (##inline ##vcore.car (bruijn ##.expr.129.510 0 0)) #f) ((bruijn ##.k.1249 4 0) #f)) ((bruijn ##.k.1249 4 0) #f)) ((bruijn ##.k.1249 4 0) #f))
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
        upenv->up->vars[0])))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 9-1, 11)), 7,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun_D221_k525, env)}),
      VInlineCar2(runtime,
        VGetArg(upenv, 5-1, 0)),
      VInlineCar2(runtime,
        upenv->up->up->vars[0]),
      VInlineCar2(runtime,
        upenv->vars[0]),
      VEncodeBool(false),
      VInlineCar2(runtime,
        _var0),
      VEncodeBool(false));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__fun_D221_k523(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun_D221_k523, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.128.508 0 0)) ((close _V10_Dprint__fun_D221_k524) (##inline ##vcore.cdr (bruijn ##.expr.128.508 0 0))) ((bruijn ##.k.1249 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__fun_D221_k524, .env = env }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__fun_D221_k522(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun_D221_k522, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.127.507 0 0)) ((close _V10_Dprint__fun_D221_k523) (##inline ##vcore.car (bruijn ##.expr.127.507 0 0))) ((bruijn ##.k.1249 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__fun_D221_k523, .env = env }, }, 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__fun_D221_k521(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun_D221_k521, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.126.505 0 0)) ((close _V10_Dprint__fun_D221_k522) (##inline ##vcore.cdr (bruijn ##.expr.126.505 0 0))) ((bruijn ##.k.1249 1 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__fun_D221_k522, .env = env }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__fun_D221_k520(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun_D221_k520, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.125.503 1 0)) ((close _V10_Dprint__fun_D221_k521) (##inline ##vcore.cdr (bruijn ##.expr.125.503 1 0))) ((bruijn ##.k.1249 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__fun_D221_k521, .env = env }, }, 1,
      VInlineCdr2(runtime,
        upenv->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__fun_D221_k534(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun_D221_k534, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.123.501 12 1) (bruijn ##.k.1235 7 0) (bruijn ##.x.1244 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 12-1, 1)), 2,
      VGetArg(upenv, 7-1, 0),
      _var0);
}
static void _V10_Dprint__fun_D221_k533(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun_D221_k533, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.135.520 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.135.520 0 0))) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.132.516 4 0))) ((bruijn ##.print-fun-single.219 13 11) (close _V10_Dprint__fun_D221_k534) (##inline ##vcore.car (bruijn ##.expr.130.512 7 0)) (##inline ##vcore.car (bruijn ##.expr.131.514 5 0)) (##inline ##vcore.car (bruijn ##.expr.133.517 3 0)) #t (##inline ##vcore.car (bruijn ##.expr.135.520 0 0)) #f) ((bruijn ##.k.1235 6 0) #f)) ((bruijn ##.k.1235 6 0) #f)) ((bruijn ##.k.1235 6 0) #f))
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
        upenv->up->up->up->vars[0])))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 13-1, 11)), 7,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun_D221_k534, env)}),
      VInlineCar2(runtime,
        VGetArg(upenv, 7-1, 0)),
      VInlineCar2(runtime,
        VGetArg(upenv, 5-1, 0)),
      VInlineCar2(runtime,
        upenv->up->up->vars[0]),
      VEncodeBool(true),
      VInlineCar2(runtime,
        _var0),
      VEncodeBool(false));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 6-1, 0)), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 6-1, 0)), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 6-1, 0)), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__fun_D221_k532(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun_D221_k532, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1240 0 0) ((close _V10_Dprint__fun_D221_k533) (##inline ##vcore.cdr (bruijn ##.expr.134.519 1 0))) ((bruijn ##.k.1235 5 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__fun_D221_k533, .env = env }, }, 1,
      VInlineCdr2(runtime,
        upenv->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 5-1, 0)), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__fun_D221_k531(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun_D221_k531, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.134.519 0 0)) ((bruijn ##.equal?.158 14 5) (close _V10_Dprint__fun_D221_k532) '+ (##inline ##vcore.car (bruijn ##.expr.134.519 0 0))) ((bruijn ##.k.1235 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 14-1, 5)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun_D221_k532, env)}),
      _V0_P,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__fun_D221_k530(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun_D221_k530, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.133.517 0 0)) ((close _V10_Dprint__fun_D221_k531) (##inline ##vcore.cdr (bruijn ##.expr.133.517 0 0))) ((bruijn ##.k.1235 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__fun_D221_k531, .env = env }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__fun_D221_k529(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun_D221_k529, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.132.516 0 0)) ((close _V10_Dprint__fun_D221_k530) (##inline ##vcore.car (bruijn ##.expr.132.516 0 0))) ((bruijn ##.k.1235 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__fun_D221_k530, .env = env }, }, 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__fun_D221_k528(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun_D221_k528, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.131.514 0 0)) ((close _V10_Dprint__fun_D221_k529) (##inline ##vcore.cdr (bruijn ##.expr.131.514 0 0))) ((bruijn ##.k.1235 1 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__fun_D221_k529, .env = env }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__fun_D221_k527(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun_D221_k527, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.130.512 1 0)) ((close _V10_Dprint__fun_D221_k528) (##inline ##vcore.cdr (bruijn ##.expr.130.512 1 0))) ((bruijn ##.k.1235 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__fun_D221_k528, .env = env }, }, 1,
      VInlineCdr2(runtime,
        upenv->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__fun_D221_k536(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun_D221_k536, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.123.501 6 1) (bruijn ##.k.1230 6 0) (bruijn ##.x.1233 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 6-1, 1)), 2,
      VGetArg(upenv, 6-1, 0),
      _var0);
}
static void _V10_Dprint__fun_D221_k535(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun_D221_k535, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.print-fun-case.220 7 12) (close _V10_Dprint__fun_D221_k536) (bruijn ##.fun.500 6 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 7-1, 12)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun_D221_k536, env)}),
      VGetArg(upenv, 6-1, 1));
}
static void _V10_Dprint__fun_D221_lambda102(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dprint__fun_D221_k527) (close _V10_Dprint__fun_D221_k535))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__fun_D221_k527, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun_D221_k535, env)}));
}
static void _V10_Dprint__fun_D221_k526(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun_D221_k526, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dprint__fun_D221_lambda102) (bruijn ##.input.124.502 2 0))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__fun_D221_lambda102, .env = env }, }, 1,
      upenv->up->vars[0]);
}
static void _V10_Dprint__fun_D221_lambda101(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dprint__fun_D221_k520) (close _V10_Dprint__fun_D221_k526))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__fun_D221_k520, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun_D221_k526, env)}));
}
static void _V10_Dprint__fun_D221_lambda100(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dprint__fun_D221_lambda101) (bruijn ##.input.124.502 0 0))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__fun_D221_lambda101, .env = env }, }, 1,
      _var0);
}
static void _V10_Dprint__fun_D221_lambda99(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun_D221_lambda99, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V10_Dprint__fun_D221_lambda100) (bruijn ##.fun.500 1 1))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__fun_D221_lambda100, .env = env }, }, 1,
      upenv->vars[1]);
}
static void _V10_Dprint__fun_D221_lambda98(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun_D221_lambda98, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##.call/cc.159 4 6) (bruijn ##.k.1229 0 0) (close _V10_Dprint__fun_D221_lambda99))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->up->vars[6]), 2,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun_D221_lambda99, env)}));
}
static void _V10_Dprint__toplevel_D222_k539(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__toplevel_D222_k539, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.displayln.192 7 39) (bruijn ##.k.1259 3 0) (##string ##.string.1425))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 7-1, 39)), 2,
      upenv->up->up->vars[0],
      VEncodePointer(&_V10_Dstring_D1425.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__toplevel_D222_k538(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__toplevel_D222_k538, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.print-expr.218 3 10) (close _V10_Dprint__toplevel_D222_k539) (##inline ##vcore.cons (bruijn ##.expr.523 2 2) (##inline ##vcore.cons (##inline ##vcore.cons 'bruijn (##inline ##vcore.cons 'k (##inline ##vcore.cons '0 (##inline ##vcore.cons '0 '())))) '())) (##inline ##vcore.qcons '(##string ##.string.1475) '()))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->vars[10]), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__toplevel_D222_k539, env)}),
      VInlineCons2(runtime,
        upenv->up->vars[2],
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0bruijn,
        VInlineCons2(runtime,
        _V0k,
        VInlineCons2(runtime,
        VEncodeInt(0l),
        VInlineCons2(runtime,
        VEncodeInt(0l),
        VNULL)))),
        VNULL)),
      VInlineCons2(runtime,
        VEncodePointer(&_V10_Dstring_D1475.sym, VPOINTER_OTHER),
        VNULL));
}
static void _V10_Dprint__toplevel_D222_k537(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__toplevel_D222_k537, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.displayln.192 5 39) (close _V10_Dprint__toplevel_D222_k538) (##string ##.string.1476))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 5-1, 39)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__toplevel_D222_k538, env)}),
      VEncodePointer(&_V10_Dstring_D1476.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__toplevel_D222_lambda103(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__toplevel_D222_lambda103, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn ##.printf.155 4 2) (close _V10_Dprint__toplevel_D222_k537) (##string ##.string.1477) (bruijn ##.i.522 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->up->vars[2]), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__toplevel_D222_k537, env)}),
      VEncodePointer(&_V10_Dstring_D1477.sym, VPOINTER_OTHER),
      _var1);
}
static void _V10_Dprint__foreign__declare_D223_k543(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__foreign__declare_D223_k543, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.136.525 6 1) (bruijn ##.k.1284 3 0) (bruijn ##.x.1288 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 6-1, 1)), 2,
      upenv->up->up->vars[0],
      _var0);
}
static void _V10_Dprint__foreign__declare_D223_k542(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__foreign__declare_D223_k542, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.139.528 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.139.528 0 0))) ((bruijn ##.displayln.192 10 39) (close _V10_Dprint__foreign__declare_D223_k543) (##inline ##vcore.car (bruijn ##.expr.139.528 0 0))) ((bruijn ##.k.1284 2 0) #f)) ((bruijn ##.k.1284 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 10-1, 39)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__foreign__declare_D223_k543, env)}),
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__foreign__declare_D223_k541(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__foreign__declare_D223_k541, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1285 0 0) ((close _V10_Dprint__foreign__declare_D223_k542) (##inline ##vcore.cdr (bruijn ##.expr.138.527 2 0))) ((bruijn ##.k.1284 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__foreign__declare_D223_k542, .env = env }, }, 1,
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__foreign__declare_D223_k540(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__foreign__declare_D223_k540, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.138.527 1 0)) ((bruijn ##.equal?.158 8 5) (close _V10_Dprint__foreign__declare_D223_k541) '##foreign.declare (##inline ##vcore.car (bruijn ##.expr.138.527 1 0))) ((bruijn ##.k.1284 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 8-1, 5)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__foreign__declare_D223_k541, env)}),
      _V10foreign_Ddeclare,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__foreign__declare_D223_k548(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__foreign__declare_D223_k548, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (##inline ##vcore.pair? (bruijn ##.expr.142.533 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.142.533 0 0))) ((bruijn ##.kk.136.525 8 1) (bruijn ##.k.1276 3 0) #f) ((bruijn ##.k.1276 3 0) #f)) ((bruijn ##.k.1276 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 8-1, 1)), 2,
      upenv->up->up->vars[0],
      VEncodeBool(false));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__foreign__declare_D223_k547(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__foreign__declare_D223_k547, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.141.531 0 0)) ((close _V10_Dprint__foreign__declare_D223_k548) (##inline ##vcore.cdr (bruijn ##.expr.141.531 0 0))) ((bruijn ##.k.1276 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__foreign__declare_D223_k548, .env = env }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__foreign__declare_D223_k546(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__foreign__declare_D223_k546, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1277 0 0) ((close _V10_Dprint__foreign__declare_D223_k547) (##inline ##vcore.cdr (bruijn ##.expr.140.530 2 0))) ((bruijn ##.k.1276 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__foreign__declare_D223_k547, .env = env }, }, 1,
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__foreign__declare_D223_k545(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__foreign__declare_D223_k545, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.140.530 1 0)) ((bruijn ##.equal?.158 10 5) (close _V10_Dprint__foreign__declare_D223_k546) '##vcore.declare (##inline ##vcore.car (bruijn ##.expr.140.530 1 0))) ((bruijn ##.k.1276 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 10-1, 5)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__foreign__declare_D223_k546, env)}),
      _V10vcore_Ddeclare,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__foreign__declare_D223_k550(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__foreign__declare_D223_k550, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.136.525 6 1) (bruijn ##.k.1271 6 0) (bruijn ##.x.1274 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 6-1, 1)), 2,
      VGetArg(upenv, 6-1, 0),
      _var0);
}
static void _V10_Dprint__foreign__declare_D223_k549(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__foreign__declare_D223_k549, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.compiler-error.195 10 42) (close _V10_Dprint__foreign__declare_D223_k550) (##string ##.string.1478) (bruijn ##.declare.524 6 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 10-1, 42)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__foreign__declare_D223_k550, env)}),
      VEncodePointer(&_V10_Dstring_D1478.sym, VPOINTER_OTHER),
      VGetArg(upenv, 6-1, 1));
}
static void _V10_Dprint__foreign__declare_D223_lambda108(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dprint__foreign__declare_D223_k545) (close _V10_Dprint__foreign__declare_D223_k549))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__foreign__declare_D223_k545, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__foreign__declare_D223_k549, env)}));
}
static void _V10_Dprint__foreign__declare_D223_k544(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__foreign__declare_D223_k544, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dprint__foreign__declare_D223_lambda108) (bruijn ##.input.137.526 2 0))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__foreign__declare_D223_lambda108, .env = env }, }, 1,
      upenv->up->vars[0]);
}
static void _V10_Dprint__foreign__declare_D223_lambda107(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dprint__foreign__declare_D223_k540) (close _V10_Dprint__foreign__declare_D223_k544))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__foreign__declare_D223_k540, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__foreign__declare_D223_k544, env)}));
}
static void _V10_Dprint__foreign__declare_D223_lambda106(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dprint__foreign__declare_D223_lambda107) (bruijn ##.input.137.526 0 0))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__foreign__declare_D223_lambda107, .env = env }, }, 1,
      _var0);
}
static void _V10_Dprint__foreign__declare_D223_lambda105(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__foreign__declare_D223_lambda105, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V10_Dprint__foreign__declare_D223_lambda106) (bruijn ##.declare.524 1 1))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__foreign__declare_D223_lambda106, .env = env }, }, 1,
      upenv->vars[1]);
}
static void _V10_Dprint__foreign__declare_D223_lambda104(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__foreign__declare_D223_lambda104, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##.call/cc.159 4 6) (bruijn ##.k.1270 0 0) (close _V10_Dprint__foreign__declare_D223_lambda105))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->up->vars[6]), 2,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__foreign__declare_D223_lambda105, env)}));
}
static void _V10_Dprint__declare_D224_k553(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__declare_D224_k553, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (##inline ##vcore.pair? (bruijn ##.expr.146.539 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.146.539 0 0))) ((bruijn ##.kk.143.536 5 1) (bruijn ##.k.1306 2 0) #f) ((bruijn ##.k.1306 2 0) #f)) ((bruijn ##.k.1306 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 5-1, 1)), 2,
      upenv->up->vars[0],
      VEncodeBool(false));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__declare_D224_k552(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__declare_D224_k552, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1307 0 0) ((close _V10_Dprint__declare_D224_k553) (##inline ##vcore.cdr (bruijn ##.expr.145.538 2 0))) ((bruijn ##.k.1306 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__declare_D224_k553, .env = env }, }, 1,
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__declare_D224_k551(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__declare_D224_k551, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.145.538 1 0)) ((bruijn ##.equal?.158 8 5) (close _V10_Dprint__declare_D224_k552) '##foreign.declare (##inline ##vcore.car (bruijn ##.expr.145.538 1 0))) ((bruijn ##.k.1306 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 8-1, 5)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__declare_D224_k552, env)}),
      _V10foreign_Ddeclare,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__declare_D224_k559(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__declare_D224_k559, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.143.536 9 1) (bruijn ##.k.1297 4 0) (bruijn ##.x.1302 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 9-1, 1)), 2,
      upenv->up->up->up->vars[0],
      _var0);
}
static void _V10_Dprint__declare_D224_k558(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__declare_D224_k558, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.149.544 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.149.544 0 0))) ((bruijn ##.printf.155 13 2) (close _V10_Dprint__declare_D224_k559) (##string ##.string.1479) (##inline ##vcore.car (bruijn ##.expr.148.542 1 0)) (##inline ##vcore.car (bruijn ##.expr.149.544 0 0))) ((bruijn ##.k.1297 3 0) #f)) ((bruijn ##.k.1297 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 13-1, 2)), 4,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__declare_D224_k559, env)}),
      VEncodePointer(&_V10_Dstring_D1479.sym, VPOINTER_OTHER),
      VInlineCar2(runtime,
        upenv->vars[0]),
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__declare_D224_k557(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__declare_D224_k557, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.148.542 0 0)) ((close _V10_Dprint__declare_D224_k558) (##inline ##vcore.cdr (bruijn ##.expr.148.542 0 0))) ((bruijn ##.k.1297 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__declare_D224_k558, .env = env }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__declare_D224_k556(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__declare_D224_k556, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1298 0 0) ((close _V10_Dprint__declare_D224_k557) (##inline ##vcore.cdr (bruijn ##.expr.147.541 2 0))) ((bruijn ##.k.1297 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__declare_D224_k557, .env = env }, }, 1,
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__declare_D224_k555(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__declare_D224_k555, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.147.541 1 0)) ((bruijn ##.equal?.158 10 5) (close _V10_Dprint__declare_D224_k556) '##vcore.declare (##inline ##vcore.car (bruijn ##.expr.147.541 1 0))) ((bruijn ##.k.1297 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 10-1, 5)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__declare_D224_k556, env)}),
      _V10vcore_Ddeclare,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__declare_D224_k561(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__declare_D224_k561, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.143.536 6 1) (bruijn ##.k.1292 6 0) (bruijn ##.x.1295 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 6-1, 1)), 2,
      VGetArg(upenv, 6-1, 0),
      _var0);
}
static void _V10_Dprint__declare_D224_k560(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__declare_D224_k560, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.compiler-error.195 10 42) (close _V10_Dprint__declare_D224_k561) (##string ##.string.1480) (bruijn ##.declare.535 6 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 10-1, 42)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__declare_D224_k561, env)}),
      VEncodePointer(&_V10_Dstring_D1480.sym, VPOINTER_OTHER),
      VGetArg(upenv, 6-1, 1));
}
static void _V10_Dprint__declare_D224_lambda113(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dprint__declare_D224_k555) (close _V10_Dprint__declare_D224_k560))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__declare_D224_k555, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__declare_D224_k560, env)}));
}
static void _V10_Dprint__declare_D224_k554(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__declare_D224_k554, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dprint__declare_D224_lambda113) (bruijn ##.input.144.537 2 0))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__declare_D224_lambda113, .env = env }, }, 1,
      upenv->up->vars[0]);
}
static void _V10_Dprint__declare_D224_lambda112(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dprint__declare_D224_k551) (close _V10_Dprint__declare_D224_k554))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__declare_D224_k551, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__declare_D224_k554, env)}));
}
static void _V10_Dprint__declare_D224_lambda111(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dprint__declare_D224_lambda112) (bruijn ##.input.144.537 0 0))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__declare_D224_lambda112, .env = env }, }, 1,
      _var0);
}
static void _V10_Dprint__declare_D224_lambda110(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__declare_D224_lambda110, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V10_Dprint__declare_D224_lambda111) (bruijn ##.declare.535 1 1))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__declare_D224_lambda111, .env = env }, }, 1,
      upenv->vars[1]);
}
static void _V10_Dprint__declare_D224_lambda109(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__declare_D224_lambda109, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##.call/cc.159 4 6) (bruijn ##.k.1291 0 0) (close _V10_Dprint__declare_D224_lambda110))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->up->vars[6]), 2,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__declare_D224_lambda110, env)}));
}
static void _V10_Dprint__main_D225_k574(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__main_D225_k574, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.displayln.192 17 39) (bruijn ##.k.1312 13 0) (##string ##.string.1425))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 17-1, 39)), 2,
      VGetArg(upenv, 13-1, 0),
      VEncodePointer(&_V10_Dstring_D1425.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__main_D225_k573(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__main_D225_k573, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.printf.155 16 2) (close _V10_Dprint__main_D225_k574) (##string ##.string.1481))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 16-1, 2)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__main_D225_k574, env)}),
      VEncodePointer(&_V10_Dstring_D1481.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__main_D225_k572(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__main_D225_k572, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.displayln.192 15 39) (close _V10_Dprint__main_D225_k573) (##string ##.string.1482))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 15-1, 39)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__main_D225_k573, env)}),
      VEncodePointer(&_V10_Dstring_D1482.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__main_D225_k571(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__main_D225_k571, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.displayln.192 14 39) (close _V10_Dprint__main_D225_k572) (##string ##.string.1483))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 14-1, 39)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__main_D225_k572, env)}),
      VEncodePointer(&_V10_Dstring_D1483.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__main_D225_k570(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__main_D225_k570, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.printf.155 13 2) (close _V10_Dprint__main_D225_k571) (##string ##.string.1484))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 13-1, 2)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__main_D225_k571, env)}),
      VEncodePointer(&_V10_Dstring_D1484.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__main_D225_k569(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__main_D225_k569, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.printf.155 12 2) (close _V10_Dprint__main_D225_k570) (##string ##.string.1485))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 12-1, 2)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__main_D225_k570, env)}),
      VEncodePointer(&_V10_Dstring_D1485.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__main_D225_k568(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__main_D225_k568, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.printf.155 11 2) (close _V10_Dprint__main_D225_k569) (##string ##.string.1486))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 11-1, 2)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__main_D225_k569, env)}),
      VEncodePointer(&_V10_Dstring_D1486.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__main_D225_lambda115(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__main_D225_lambda115, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.printf.155 11 2) (bruijn ##.k.1322 0 0) (##string ##.string.1487) (bruijn ##.i.549 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 11-1, 2)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1487.sym, VPOINTER_OTHER),
      _var1);
}
static void _V10_Dprint__main_D225_k567(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__main_D225_k567, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.for-each.194 10 41) (close _V10_Dprint__main_D225_k568) (close _V10_Dprint__main_D225_lambda115) (bruijn ##.x.1323 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 10-1, 41)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__main_D225_k568, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__main_D225_lambda115, env)}),
      _var0);
}
static void _V10_Dprint__main_D225_k566(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__main_D225_k566, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.iota.157 9 4) (close _V10_Dprint__main_D225_k567) (bruijn ##.x.1324 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 9-1, 4)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__main_D225_k567, env)}),
      _var0);
}
static void _V10_Dprint__main_D225_k565(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__main_D225_k565, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.length.156 8 3) (close _V10_Dprint__main_D225_k566) (bruijn ##.toplevels.546 4 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 8-1, 3)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__main_D225_k566, env)}),
      upenv->up->up->up->vars[1]);
}
static void _V10_Dprint__main_D225_k564(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__main_D225_k564, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.printf.155 7 2) (close _V10_Dprint__main_D225_k565) (##string ##.string.1488))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 7-1, 2)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__main_D225_k565, env)}),
      VEncodePointer(&_V10_Dstring_D1488.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__main_D225_lambda116(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__main_D225_lambda116, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  // ((bruijn ##.print-toplevel.222 4 14) (bruijn ##.k.1325 0 0) (bruijn ##.x.150.547 0 1) (bruijn ##.x.151.548 0 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->up->vars[14]), 3,
      _var0,
      _var1,
      _var2);
}
static void _V10_Dprint__main_D225_k563(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__main_D225_k563, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.for-each.194 6 41) (close _V10_Dprint__main_D225_k564) (close _V10_Dprint__main_D225_lambda116) (bruijn ##.x.1326 0 0) (bruijn ##.toplevels.546 2 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 6-1, 41)), 4,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__main_D225_k564, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__main_D225_lambda116, env)}),
      _var0,
      upenv->up->vars[1]);
}
static void _V10_Dprint__main_D225_k562(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__main_D225_k562, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.iota.157 5 4) (close _V10_Dprint__main_D225_k563) (bruijn ##.x.1327 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 5-1, 4)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__main_D225_k563, env)}),
      _var0);
}
static void _V10_Dprint__main_D225_lambda114(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__main_D225_lambda114, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##.length.156 4 3) (close _V10_Dprint__main_D225_k562) (bruijn ##.toplevels.546 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->up->vars[3]), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__main_D225_k562, env)}),
      _var1);
}
static void _V10_Dprintout2_D200_k588(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprintout2_D200_k588, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.shared?.202 16 2) ((bruijn ##.k.1345 0 0) (bruijn ##.print-main?.550 11 0)) ((bruijn ##.k.1345 0 0) #f))
if(VDecodeBool(
VGetArg(upenv, 16-1, 2))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(upenv, 11-1, 0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprintout2_D200_k590(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprintout2_D200_k590, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.1343 1 0) ((bruijn ##.compiler-error.195 19 42) (bruijn ##.k.1344 0 0) (##string ##.string.1489) (bruijn ##.toplevels.207 17 7)) ((bruijn ##.k.1344 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 19-1, 42)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1489.sym, VPOINTER_OTHER),
      VGetArg(upenv, 17-1, 7));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprintout2_D200_k592(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprintout2_D200_k592, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.print-main?.550 13 0) ((bruijn ##.print-main.225 17 17) (bruijn ##.k.1342 0 0) (bruijn ##.toplevels.207 18 7)) ((bruijn ##.k.1342 0 0) #f))
if(VDecodeBool(
VGetArg(upenv, 13-1, 0))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 17-1, 17)), 2,
      _var0,
      VGetArg(upenv, 18-1, 7));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprintout2_D200_k593(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprintout2_D200_k593, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.601 18 0) (bruijn ##.print-main?.550 13 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 18-1, 0)), 1,
      VGetArg(upenv, 13-1, 0));
}
static void _V10_Dprintout2_D200_k591(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprintout2_D200_k591, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dprintout2_D200_k592) (close _V10_Dprintout2_D200_k593))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprintout2_D200_k592, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprintout2_D200_k593, env)}));
}
static void _V10_Dprintout2_D200_k589(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprintout2_D200_k589, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dprintout2_D200_k590) (close _V10_Dprintout2_D200_k591))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprintout2_D200_k590, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprintout2_D200_k591, env)}));
}
static void _V10_Dprintout2_D200_k587(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprintout2_D200_k587, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dprintout2_D200_k588) (close _V10_Dprintout2_D200_k589))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprintout2_D200_k588, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprintout2_D200_k589, env)}));
}
static void _V10_Dprintout2_D200_k586(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprintout2_D200_k586, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.for-each.194 16 41) (close _V10_Dprintout2_D200_k587) (bruijn ##.print-declare.224 13 16) (bruijn ##.declares.206 14 6))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 16-1, 41)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprintout2_D200_k587, env)}),
      VGetArg(upenv, 13-1, 16),
      VGetArg(upenv, 14-1, 6));
}
static void _V10_Dprintout2_D200_k585(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprintout2_D200_k585, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.for-each.194 15 41) (close _V10_Dprintout2_D200_k586) (bruijn ##.print-fun.221 12 13) (bruijn ##.functions.551 8 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 15-1, 41)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprintout2_D200_k586, env)}),
      VGetArg(upenv, 12-1, 13),
      VGetArg(upenv, 8-1, 1));
}
static void _V10_Dprintout2_D200_k584(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprintout2_D200_k584, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.for-each.194 14 41) (close _V10_Dprintout2_D200_k585) (bruijn ##.print-foreign-function.193 14 40) (bruijn ##.foreign-functions.204 12 4))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 14-1, 41)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprintout2_D200_k585, env)}),
      VGetArg(upenv, 14-1, 40),
      VGetArg(upenv, 12-1, 4));
}
static void _V10_Dprintout2_D200_k583(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprintout2_D200_k583, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.for-each.194 13 41) (close _V10_Dprintout2_D200_k584) (bruijn ##.print-foreign-declare.223 10 15) (bruijn ##.declares.206 11 6))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 13-1, 41)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprintout2_D200_k584, env)}),
      VGetArg(upenv, 10-1, 15),
      VGetArg(upenv, 11-1, 6));
}
static void _V10_Dprintout2_D200_k582(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprintout2_D200_k582, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.print-dllmain.216 9 8) (close _V10_Dprintout2_D200_k583) (bruijn ##.literal-table.203 10 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 9-1, 8)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprintout2_D200_k583, env)}),
      VGetArg(upenv, 10-1, 3));
}
static void _V10_Dprintout2_D200_k581(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprintout2_D200_k581, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.for-each.194 11 41) (close _V10_Dprintout2_D200_k582) (bruijn ##.print-literal-declaration.215 8 7) (bruijn ##.literal-table.203 9 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 11-1, 41)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprintout2_D200_k582, env)}),
      VGetArg(upenv, 8-1, 7),
      VGetArg(upenv, 9-1, 3));
}
static void _V10_Dprintout2_D200_k580(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprintout2_D200_k580, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.displayln.192 10 39) (close _V10_Dprintout2_D200_k581) (##string ##.string.1490))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 10-1, 39)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprintout2_D200_k581, env)}),
      VEncodePointer(&_V10_Dstring_D1490.sym, VPOINTER_OTHER));
}
static void _V10_Dprintout2_D200_k579(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprintout2_D200_k579, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.displayln.192 9 39) (close _V10_Dprintout2_D200_k580) (##string ##.string.1491))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 9-1, 39)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprintout2_D200_k580, env)}),
      VEncodePointer(&_V10_Dstring_D1491.sym, VPOINTER_OTHER));
}
static void _V10_Dprintout2_D200_k578(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprintout2_D200_k578, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.displayln.192 8 39) (close _V10_Dprintout2_D200_k579) (##string ##.string.1492))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 8-1, 39)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprintout2_D200_k579, env)}),
      VEncodePointer(&_V10_Dstring_D1492.sym, VPOINTER_OTHER));
}
static void _V10_Dprintout2_D200_lambda117(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##.displayln.192 7 39) (close _V10_Dprintout2_D200_k578) (##string ##.string.1493))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 7-1, 39)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprintout2_D200_k578, env)}),
      VEncodePointer(&_V10_Dstring_D1493.sym, VPOINTER_OTHER));
}
static void _V10_Dprintout2_D200_k577(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprintout2_D200_k577, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dprintout2_D200_lambda117) (bruijn ##.x.1328 1 0) (bruijn ##.x.1329 0 0))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprintout2_D200_lambda117, .env = env }, }, 2,
      upenv->vars[0],
      _var0);
}
static void _V10_Dprintout2_D200_k576(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprintout2_D200_k576, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.reverse.198 5 45) (close _V10_Dprintout2_D200_k577) (bruijn ##.functions.205 3 5))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 5-1, 45)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprintout2_D200_k577, env)}),
      upenv->up->up->vars[5]);
}
static void _V10_Dprintout2_D200_k575(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprintout2_D200_k575, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.not.197 4 44) (close _V10_Dprintout2_D200_k576) (bruijn ##.x.1346 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->up->vars[44]), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprintout2_D200_k576, env)}),
      _var0);
}
static void _V10_Dprintout2_D200_lambda3(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4, VWORD _var5, VWORD _var6, VWORD _var7) {
 if(argc != 8) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprintout2_D200_lambda3, got ~D~N"
  "-- expected 8~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[8]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 8, 8, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  env->vars[4] = _var4;
  env->vars[5] = _var5;
  env->vars[6] = _var6;
  env->vars[7] = _var7;
  // (letrec 18 ((close _V10_Dprint__global_D208_lambda4) (close _V10_Dprint__string_D209_lambda5) (close _V10_Descape__string_D210_lambda7) (close _V10_Descape__char_D211_lambda10) (close _V10_Dprint__literal__string_D212_lambda12) (close _V10_Dprint__intrinsic_D213_lambda13) (close _V10_Dprint__literal_D214_lambda14) (close _V10_Dprint__literal__declaration_D215_lambda15) (close _V10_Dprint__dllmain_D216_lambda16) (close _V10_Dcloses_Q_D217_lambda18) (close _V10_Dprint__expr_D218_lambda34) (close _V10_Dprint__fun__single_D219_lambda76) (close _V10_Dprint__fun__case_D220_lambda81) (close _V10_Dprint__fun_D221_lambda98) (close _V10_Dprint__toplevel_D222_lambda103) (close _V10_Dprint__foreign__declare_D223_lambda104) (close _V10_Dprint__declare_D224_lambda109) (close _V10_Dprint__main_D225_lambda114)) ((bruijn ##.null?.196 3 43) (close _V10_Dprintout2_D200_k575) (bruijn ##.toplevels.207 1 7)))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[18]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 18, 18, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__global_D208_lambda4, env)});
    env->vars[1] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__string_D209_lambda5, env)});
    env->vars[2] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Descape__string_D210_lambda7, env)});
    env->vars[3] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Descape__char_D211_lambda10, env)});
    env->vars[4] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__literal__string_D212_lambda12, env)});
    env->vars[5] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__intrinsic_D213_lambda13, env)});
    env->vars[6] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__literal_D214_lambda14, env)});
    env->vars[7] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__literal__declaration_D215_lambda15, env)});
    env->vars[8] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__dllmain_D216_lambda16, env)});
    env->vars[9] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcloses_Q_D217_lambda18, env)});
    env->vars[10] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D218_lambda34, env)});
    env->vars[11] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__single_D219_lambda76, env)});
    env->vars[12] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__case_D220_lambda81, env)});
    env->vars[13] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun_D221_lambda98, env)});
    env->vars[14] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__toplevel_D222_lambda103, env)});
    env->vars[15] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__foreign__declare_D223_lambda104, env)});
    env->vars[16] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__declare_D224_lambda109, env)});
    env->vars[17] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__main_D225_lambda114, env)});
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->vars[43]), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprintout2_D200_k575, env)}),
      upenv->vars[7]);
    }
}
static void _V0vanity_V0compiler_V0transpile_V20_k595(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k595, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.554 59 0) (##inline ##vcore.cons (##inline ##vcore.cons 'printout2 (bruijn ##.printout2.200 3 1)) '()))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 59-1, 0)), 1,
      VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0printout2,
        upenv->up->up->vars[1]),
        VNULL));
}
static void _V0vanity_V0compiler_V0transpile_V20_k594(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k594, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0compiler_V0transpile_V20_k595) (bruijn ##.gendllmain.199 2 0) (bruijn ##.x.1349 0 0))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)VSetEnvVar2, .env = env }, }, 4,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k595, env)}),
      VEncodeInt(2l), VEncodeInt(0l),
      _var0
    );
}
static void _V0vanity_V0compiler_V0transpile_V20_k597(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k597, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.sprintf.154 5 1) (bruijn ##.k.1350 2 0) (##string ##.string.1494) (bruijn ##.x.552 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 5-1, 1)), 3,
      upenv->up->vars[0],
      VEncodePointer(&_V10_Dstring_D1494.sym, VPOINTER_OTHER),
      upenv->up->up->vars[0]);
}
static void _V0vanity_V0compiler_V0transpile_V20_k596(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k596, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0compiler_V0transpile_V20_k597) (bruijn ##.x.552 2 0) (bruijn ##.x.1352 0 0))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)VSetEnvVar2, .env = env }, }, 4,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k597, env)}),
      VEncodeInt(2l), VEncodeInt(0l),
      _var0
    );
}
static void _V0vanity_V0compiler_V0transpile_V20_lambda119(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_lambda119, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.+.153 3 0) (close _V0vanity_V0compiler_V0transpile_V20_k596) (bruijn ##.x.552 1 0) 1)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->vars[0]), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k596, env)}),
      upenv->vars[0],
      VEncodeInt(1l));
}
static void _V0vanity_V0compiler_V0transpile_V20_lambda118(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0transpile_V20_k594) (close _V0vanity_V0compiler_V0transpile_V20_lambda119))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V0vanity_V0compiler_V0transpile_V20_k594, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_lambda119, env)}));
}
static void _V0vanity_V0compiler_V0transpile_V20_lambda2(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4, VWORD _var5, VWORD _var6, VWORD _var7, VWORD _var8, VWORD _var9, VWORD _var10, VWORD _var11, VWORD _var12, VWORD _var13, VWORD _var14, VWORD _var15, VWORD _var16, VWORD _var17, VWORD _var18, VWORD _var19, VWORD _var20, VWORD _var21, VWORD _var22, VWORD _var23, VWORD _var24, VWORD _var25, VWORD _var26, VWORD _var27, VWORD _var28, VWORD _var29, VWORD _var30, VWORD _var31, VWORD _var32, VWORD _var33, VWORD _var34, VWORD _var35, VWORD _var36, VWORD _var37, VWORD _var38, VWORD _var39, VWORD _var40, VWORD _var41, VWORD _var42, VWORD _var43, VWORD _var44, VWORD _var45) {
  struct { VEnv env; VWORD argv[46]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 46, 46, upenv);
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
  env->vars[41] = _var41;
  env->vars[42] = _var42;
  env->vars[43] = _var43;
  env->vars[44] = _var44;
  env->vars[45] = _var45;
  // (letrec 2 (#f (close _V10_Dprintout2_D200_lambda3)) ((close _V0vanity_V0compiler_V0transpile_V20_lambda118) 0))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[2]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 2, 2, upenv);
    env->vars[0] = VEncodeBool(false);
    env->vars[1] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprintout2_D200_lambda3, env)});
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V0vanity_V0compiler_V0transpile_V20_lambda118, .env = env }, }, 1,
      VEncodeInt(0l));
    }
}
static void _V0vanity_V0compiler_V0transpile_V20_k54(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k54, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0transpile_V20_lambda2) (bruijn ##.x.555 45 0) (bruijn ##.x.556 44 0) (bruijn ##.x.557 43 0) (bruijn ##.x.558 42 0) (bruijn ##.x.559 41 0) (bruijn ##.x.560 40 0) (bruijn ##.x.561 39 0) (bruijn ##.x.562 38 0) (bruijn ##.x.563 37 0) (bruijn ##.x.564 36 0) (bruijn ##.x.565 35 0) (bruijn ##.x.566 34 0) (bruijn ##.x.567 33 0) (bruijn ##.x.568 32 0) (bruijn ##.x.569 31 0) (bruijn ##.x.570 30 0) (bruijn ##.x.571 29 0) (bruijn ##.x.572 28 0) (bruijn ##.x.573 27 0) (bruijn ##.x.574 26 0) (bruijn ##.x.575 25 0) (bruijn ##.x.576 24 0) (bruijn ##.x.577 23 0) (bruijn ##.x.578 22 0) (bruijn ##.x.579 21 0) (bruijn ##.x.580 20 0) (bruijn ##.x.581 19 0) (bruijn ##.x.582 18 0) (bruijn ##.x.583 17 0) (bruijn ##.x.584 16 0) (bruijn ##.x.585 15 0) (bruijn ##.x.586 14 0) (bruijn ##.x.587 13 0) (bruijn ##.x.588 12 0) (bruijn ##.x.589 11 0) (bruijn ##.x.590 10 0) (bruijn ##.x.591 9 0) (bruijn ##.x.592 8 0) (bruijn ##.x.593 7 0) (bruijn ##.x.594 6 0) (bruijn ##.x.595 5 0) (bruijn ##.x.596 4 0) (bruijn ##.x.597 3 0) (bruijn ##.x.598 2 0) (bruijn ##.x.599 1 0) (bruijn ##.x.600 0 0))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V0vanity_V0compiler_V0transpile_V20_lambda2, .env = env }, }, 46,
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
static void _V0vanity_V0compiler_V0transpile_V20_k53(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k53, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.152 45 0) (close _V0vanity_V0compiler_V0transpile_V20_k54) 'reverse)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 45-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k54, env)}),
      _V0reverse);
}
static void _V0vanity_V0compiler_V0transpile_V20_k52(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k52, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.152 44 0) (close _V0vanity_V0compiler_V0transpile_V20_k53) 'not)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 44-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k53, env)}),
      _V0not);
}
static void _V0vanity_V0compiler_V0transpile_V20_k51(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k51, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.152 43 0) (close _V0vanity_V0compiler_V0transpile_V20_k52) 'null?)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 43-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k52, env)}),
      _V0null_Q);
}
static void _V0vanity_V0compiler_V0transpile_V20_k50(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k50, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.152 42 0) (close _V0vanity_V0compiler_V0transpile_V20_k51) 'compiler-error)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 42-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k51, env)}),
      _V0compiler__error);
}
static void _V0vanity_V0compiler_V0transpile_V20_k49(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k49, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.152 41 0) (close _V0vanity_V0compiler_V0transpile_V20_k50) 'for-each)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 41-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k50, env)}),
      _V0for__each);
}
static void _V0vanity_V0compiler_V0transpile_V20_k48(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k48, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.152 40 0) (close _V0vanity_V0compiler_V0transpile_V20_k49) 'print-foreign-function)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 40-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k49, env)}),
      _V0print__foreign__function);
}
static void _V0vanity_V0compiler_V0transpile_V20_k47(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k47, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.152 39 0) (close _V0vanity_V0compiler_V0transpile_V20_k48) 'displayln)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 39-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k48, env)}),
      _V0displayln);
}
static void _V0vanity_V0compiler_V0transpile_V20_k46(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k46, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.152 38 0) (close _V0vanity_V0compiler_V0transpile_V20_k47) 'string-ref)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 38-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k47, env)}),
      _V0string__ref);
}
static void _V0vanity_V0compiler_V0transpile_V20_k45(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k45, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.152 37 0) (close _V0vanity_V0compiler_V0transpile_V20_k46) '<)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 37-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k46, env)}),
      _V0_L);
}
static void _V0vanity_V0compiler_V0transpile_V20_k44(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k44, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.152 36 0) (close _V0vanity_V0compiler_V0transpile_V20_k45) 'close-port)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 36-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k45, env)}),
      _V0close__port);
}
static void _V0vanity_V0compiler_V0transpile_V20_k43(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k43, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.152 35 0) (close _V0vanity_V0compiler_V0transpile_V20_k44) 'get-output-string)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 35-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k44, env)}),
      _V0get__output__string);
}
static void _V0vanity_V0compiler_V0transpile_V20_k42(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k42, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.152 34 0) (close _V0vanity_V0compiler_V0transpile_V20_k43) 'open-output-string)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 34-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k43, env)}),
      _V0open__output__string);
}
static void _V0vanity_V0compiler_V0transpile_V20_k41(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k41, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.152 33 0) (close _V0vanity_V0compiler_V0transpile_V20_k42) 'integer?)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 33-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k42, env)}),
      _V0integer_Q);
}
static void _V0vanity_V0compiler_V0transpile_V20_k40(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k40, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.152 32 0) (close _V0vanity_V0compiler_V0transpile_V20_k41) 'number?)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 32-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k41, env)}),
      _V0number_Q);
}
static void _V0vanity_V0compiler_V0transpile_V20_k39(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k39, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.152 31 0) (close _V0vanity_V0compiler_V0transpile_V20_k40) 'char?)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 31-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k40, env)}),
      _V0char_Q);
}
static void _V0vanity_V0compiler_V0transpile_V20_k38(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k38, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.152 30 0) (close _V0vanity_V0compiler_V0transpile_V20_k39) 'eq?)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 30-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k39, env)}),
      _V0eq_Q);
}
static void _V0vanity_V0compiler_V0transpile_V20_k37(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k37, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.152 29 0) (close _V0vanity_V0compiler_V0transpile_V20_k38) 'symbol->string)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 29-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k38, env)}),
      _V0symbol___Gstring);
}
static void _V0vanity_V0compiler_V0transpile_V20_k36(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k36, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.152 28 0) (close _V0vanity_V0compiler_V0transpile_V20_k37) 'string-length)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 28-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k37, env)}),
      _V0string__length);
}
static void _V0vanity_V0compiler_V0transpile_V20_k35(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k35, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.152 27 0) (close _V0vanity_V0compiler_V0transpile_V20_k36) 'string?)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 27-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k36, env)}),
      _V0string_Q);
}
static void _V0vanity_V0compiler_V0transpile_V20_k34(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k34, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.152 26 0) (close _V0vanity_V0compiler_V0transpile_V20_k35) 'caar)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 26-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k35, env)}),
      _V0caar);
}
static void _V0vanity_V0compiler_V0transpile_V20_k33(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k33, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.152 25 0) (close _V0vanity_V0compiler_V0transpile_V20_k34) 'cadar)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 25-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k34, env)}),
      _V0cadar);
}
static void _V0vanity_V0compiler_V0transpile_V20_k32(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k32, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.152 24 0) (close _V0vanity_V0compiler_V0transpile_V20_k33) 'mangle-symbol)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 24-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k33, env)}),
      _V0mangle__symbol);
}
static void _V0vanity_V0compiler_V0transpile_V20_k31(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k31, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.152 23 0) (close _V0vanity_V0compiler_V0transpile_V20_k32) 'lookup-inline-name)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 23-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k32, env)}),
      _V0lookup__inline__name);
}
static void _V0vanity_V0compiler_V0transpile_V20_k30(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k30, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.152 22 0) (close _V0vanity_V0compiler_V0transpile_V20_k31) 'cdr)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 22-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k31, env)}),
      _V0cdr);
}
static void _V0vanity_V0compiler_V0transpile_V20_k29(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k29, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.152 21 0) (close _V0vanity_V0compiler_V0transpile_V20_k30) 'display)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 21-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k30, env)}),
      _V0display);
}
static void _V0vanity_V0compiler_V0transpile_V20_k28(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k28, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.152 20 0) (close _V0vanity_V0compiler_V0transpile_V20_k29) 'call-with-values)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 20-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k29, env)}),
      _V0call__with__values);
}
static void _V0vanity_V0compiler_V0transpile_V20_k27(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k27, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.152 19 0) (close _V0vanity_V0compiler_V0transpile_V20_k28) 'lookup-intrinsic-name)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 19-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k28, env)}),
      _V0lookup__intrinsic__name);
}
static void _V0vanity_V0compiler_V0transpile_V20_k26(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k26, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.152 18 0) (close _V0vanity_V0compiler_V0transpile_V20_k27) 'cadr)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 18-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k27, env)}),
      _V0cadr);
}
static void _V0vanity_V0compiler_V0transpile_V20_k25(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k25, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.152 17 0) (close _V0vanity_V0compiler_V0transpile_V20_k26) 'eqv?)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 17-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k26, env)}),
      _V0eqv_Q);
}
static void _V0vanity_V0compiler_V0transpile_V20_k24(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k24, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.152 16 0) (close _V0vanity_V0compiler_V0transpile_V20_k25) 'pair?)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 16-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k25, env)}),
      _V0pair_Q);
}
static void _V0vanity_V0compiler_V0transpile_V20_k23(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k23, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.152 15 0) (close _V0vanity_V0compiler_V0transpile_V20_k24) 'symbol?)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 15-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k24, env)}),
      _V0symbol_Q);
}
static void _V0vanity_V0compiler_V0transpile_V20_k22(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k22, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.152 14 0) (close _V0vanity_V0compiler_V0transpile_V20_k23) '-)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 14-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k23, env)}),
      _V0__);
}
static void _V0vanity_V0compiler_V0transpile_V20_k21(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k21, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.152 13 0) (close _V0vanity_V0compiler_V0transpile_V20_k22) 'list-ref)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 13-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k22, env)}),
      _V0list__ref);
}
static void _V0vanity_V0compiler_V0transpile_V20_k20(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k20, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.152 12 0) (close _V0vanity_V0compiler_V0transpile_V20_k21) '=)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 12-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k21, env)}),
      _V0_E);
}
static void _V0vanity_V0compiler_V0transpile_V20_k19(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k19, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.152 11 0) (close _V0vanity_V0compiler_V0transpile_V20_k20) 'append)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 11-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k20, env)}),
      _V0append);
}
static void _V0vanity_V0compiler_V0transpile_V20_k18(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k18, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.152 10 0) (close _V0vanity_V0compiler_V0transpile_V20_k19) 'error)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 10-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k19, env)}),
      _V0error);
}
static void _V0vanity_V0compiler_V0transpile_V20_k17(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k17, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.152 9 0) (close _V0vanity_V0compiler_V0transpile_V20_k18) 'map)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 9-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k18, env)}),
      _V0map);
}
static void _V0vanity_V0compiler_V0transpile_V20_k16(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k16, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.152 8 0) (close _V0vanity_V0compiler_V0transpile_V20_k17) 'cddr)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 8-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k17, env)}),
      _V0cddr);
}
static void _V0vanity_V0compiler_V0transpile_V20_k15(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k15, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.152 7 0) (close _V0vanity_V0compiler_V0transpile_V20_k16) 'car)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 7-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k16, env)}),
      _V0car);
}
static void _V0vanity_V0compiler_V0transpile_V20_k14(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k14, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.152 6 0) (close _V0vanity_V0compiler_V0transpile_V20_k15) 'call/cc)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 6-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k15, env)}),
      _V0call_Wcc);
}
static void _V0vanity_V0compiler_V0transpile_V20_k13(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k13, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.152 5 0) (close _V0vanity_V0compiler_V0transpile_V20_k14) 'equal?)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 5-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k14, env)}),
      _V0equal_Q);
}
static void _V0vanity_V0compiler_V0transpile_V20_k12(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k12, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.152 4 0) (close _V0vanity_V0compiler_V0transpile_V20_k13) 'iota)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->up->vars[0]), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k13, env)}),
      _V0iota);
}
static void _V0vanity_V0compiler_V0transpile_V20_k11(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k11, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.152 3 0) (close _V0vanity_V0compiler_V0transpile_V20_k12) 'length)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->vars[0]), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k12, env)}),
      _V0length);
}
static void _V0vanity_V0compiler_V0transpile_V20_k10(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k10, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.152 2 0) (close _V0vanity_V0compiler_V0transpile_V20_k11) 'printf)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->vars[0]), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k11, env)}),
      _V0printf);
}
static void _V0vanity_V0compiler_V0transpile_V20_k9(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k9, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.152 1 0) (close _V0vanity_V0compiler_V0transpile_V20_k10) 'sprintf)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k10, env)}),
      _V0sprintf);
}
static void _V0vanity_V0compiler_V0transpile_V20_k8(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k8, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.152 0 0) (close _V0vanity_V0compiler_V0transpile_V20_k9) '+)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k9, env)}),
      _V0_P);
}
static void _V0vanity_V0compiler_V0transpile_V20_k7(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k7, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.make-import (close _V0vanity_V0compiler_V0transpile_V20_k8) (##string ##.string.1495) (bruijn ##.x.1353 6 0) (bruijn ##.x.1354 5 0) (bruijn ##.x.1355 4 0) (bruijn ##.x.1356 3 0) (bruijn ##.x.1357 2 0) (bruijn ##.x.1358 1 0) (bruijn ##.x.1359 0 0))
    VCallFuncWithGC(runtime, (VFunc)VMakeImport2, 9,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k8, env)}),
      VEncodePointer(&_V10_Dstring_D1495.sym, VPOINTER_OTHER),
      VGetArg(upenv, 6-1, 0),
      VGetArg(upenv, 5-1, 0),
      upenv->up->up->up->vars[0],
      upenv->up->up->vars[0],
      upenv->up->vars[0],
      upenv->vars[0],
      _var0);
}
static void _V0vanity_V0compiler_V0transpile_V20_k6(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k6, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0transpile_V20_k7) (##string ##.string.1496))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k7, env)}),
      VEncodePointer(&_V10_Dstring_D1496.sym, VPOINTER_OTHER));
}
static void _V0vanity_V0compiler_V0transpile_V20_k5(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k5, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0transpile_V20_k6) (##string ##.string.1497))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k6, env)}),
      VEncodePointer(&_V10_Dstring_D1497.sym, VPOINTER_OTHER));
}
static void _V0vanity_V0compiler_V0transpile_V20_k4(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k4, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0transpile_V20_k5) (##string ##.string.1498))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k5, env)}),
      VEncodePointer(&_V10_Dstring_D1498.sym, VPOINTER_OTHER));
}
static void _V0vanity_V0compiler_V0transpile_V20_k3(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k3, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0transpile_V20_k4) (##string ##.string.1499))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k4, env)}),
      VEncodePointer(&_V10_Dstring_D1499.sym, VPOINTER_OTHER));
}
static void _V0vanity_V0compiler_V0transpile_V20_k2(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k2, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0transpile_V20_k3) (##string ##.string.1500))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k3, env)}),
      VEncodePointer(&_V10_Dstring_D1500.sym, VPOINTER_OTHER));
}
static void _V0vanity_V0compiler_V0transpile_V20_k1(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0transpile_V20_k2) (##string ##.string.1501))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k2, env)}),
      VEncodePointer(&_V10_Dstring_D1501.sym, VPOINTER_OTHER));
}
static void _V0vanity_V0compiler_V0transpile_V20_lambda1(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_lambda1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0transpile_V20_k1) (##string ##.string.1502))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k1, env)}),
      VEncodePointer(&_V10_Dstring_D1502.sym, VPOINTER_OTHER));
}
VFunc _V0vanity_V0compiler_V0transpile_V20 = (VFunc)_V0vanity_V0compiler_V0transpile_V20_lambda1;
