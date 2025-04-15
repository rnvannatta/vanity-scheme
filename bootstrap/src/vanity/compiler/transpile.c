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
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D1546 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "_V0vanity_V0core_V20" };
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D1545 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "_V0vanity_V0list_V20" };
static struct { VBlob sym; char bytes[33]; } _V10_Dstring_D1544 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 33 }, "_V0vanity_V0compiler_V0utils_V20" };
static struct { VBlob sym; char bytes[33]; } _V10_Dstring_D1543 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 33 }, "_V0vanity_V0compiler_V0match_V20" };
static struct { VBlob sym; char bytes[37]; } _V10_Dstring_D1542 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 37 }, "_V0vanity_V0compiler_V0variables_V20" };
static struct { VBlob sym; char bytes[31]; } _V10_Dstring_D1541 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 31 }, "_V0vanity_V0compiler_V0ffi_V20" };
static struct { VBlob sym; char bytes[27]; } _V10_Dstring_D1540 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 27 }, "_V0vanity_V0intrinsics_V20" };
static struct { VBlob sym; char bytes[37]; } _V10_Dstring_D1539 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 37 }, "_V0vanity_V0compiler_V0transpile_V20" };
VWEAK VWORD _V0sprintf;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0sprintf = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "sprintf" };
VWEAK VWORD _V0printf;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0printf = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "printf" };
VWEAK VWORD _V0length;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0length = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "length" };
VWEAK VWORD _V0iota;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0iota = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "iota" };
VWEAK VWORD _V0equal_Q;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0equal_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "equal\?" };
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
static struct { VBlob sym; char bytes[11]; } _V10_Dstring_D1538 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 11 }, "VDllMain~A" };
VWEAK VWORD _V0printout2;VWEAK struct { VBlob sym; char bytes[10]; } _VW_V0printout2 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 10 }, "printout2" };
static struct { VBlob sym; char bytes[30]; } _V10_Dstring_D1537 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 30 }, "#include \"vscheme/vruntime.h\"" };
static struct { VBlob sym; char bytes[30]; } _V10_Dstring_D1536 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 30 }, "#include \"vscheme/vlibrary.h\"" };
static struct { VBlob sym; char bytes[30]; } _V10_Dstring_D1535 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 30 }, "#include \"vscheme/vinlines.h\"" };
static struct { VBlob sym; char bytes[20]; } _V10_Dstring_D1534 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 20 }, "#include <stdarg.h>" };
static struct { VBlob sym; char bytes[51]; } _V10_Dstring_D1533 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 51 }, "shared library has toplevel expressions or defines" };
static struct { VBlob sym; char bytes[31]; } _V10_Dstring_D1532 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 31 }, "VThunk VanityToplevels[] = {~N" };
static struct { VBlob sym; char bytes[16]; } _V10_Dstring_D1531 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 16 }, "  toplevel~A~N," };
static struct { VBlob sym; char bytes[5]; } _V10_Dstring_D1530 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 5 }, "};~N" };
static struct { VBlob sym; char bytes[78]; } _V10_Dstring_D1529 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 78 }, "int VanityToplevelCount = sizeof VanityToplevels / sizeof *VanityToplevels;~N" };
static struct { VBlob sym; char bytes[37]; } _V10_Dstring_D1528 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 37 }, "int main(int argc, char ** argv) {~N" };
static struct { VBlob sym; char bytes[22]; } _V10_Dstring_D1527 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 22 }, "  VRuntime * runtime;" };
static struct { VBlob sym; char bytes[39]; } _V10_Dstring_D1526 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 39 }, "  VInitRuntime2(&runtime, argc, argv);" };
static struct { VBlob sym; char bytes[84]; } _V10_Dstring_D1525 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 84 }, "  return VDecodeExitCode(VStart2(runtime, VanityToplevelCount, VanityToplevels));~N" };
static struct { VBlob sym; char bytes[28]; } _V10_Dstring_D1524 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 28 }, "print-declare: unknown form" };
static struct { VBlob sym; char bytes[24]; } _V10_Dstring_D1523 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 24 }, "VFunc ~A = (VFunc)~A;~N" };
static struct { VBlob sym; char bytes[36]; } _V10_Dstring_D1522 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 36 }, "print-foreign-declare: unknown form" };
VWEAK VWORD _V10vcore_Ddeclare;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V10vcore_Ddeclare = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "##vcore.declare" };
VWEAK VWORD _V10foreign_Ddeclare;VWEAK struct { VBlob sym; char bytes[18]; } _VW_V10foreign_Ddeclare = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 18 }, "##foreign.declare" };
static struct { VBlob sym; char bytes[43]; } _V10_Dstring_D1521 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 43 }, "void toplevel~A(V_CORE_ARGS, VWORD _k) {~N" };
static struct { VBlob sym; char bytes[23]; } _V10_Dstring_D1520 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 23 }, "    VEnv * env = NULL;" };
static struct { VBlob sym; char bytes[3]; } _V10_Dstring_D1519 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 3 }, "_k" };
VWEAK VWORD _V0k;VWEAK struct { VBlob sym; char bytes[2]; } _VW_V0k = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 2 }, "k" };
static struct { VBlob sym; char bytes[14]; } _V10_Dstring_D1518 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 14 }, "_V20Case~A_~A" };
static struct { VBlob sym; char bytes[104]; } _V10_Dstring_D1517 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 104 }, "__attribute__((used)) static void _V20CaseError_~A(VRuntime * runtime, VEnv * upenv, int argc, ...) {~N" };
static struct { VBlob sym; char bytes[9]; } _V10_Dstring_D1516 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 9 }, " // ~S~N" };
static struct { VBlob sym; char bytes[61]; } _V10_Dstring_D1515 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 61 }, " VErrorC(runtime, \"Not enough arguments to ~A, got ~~D~~N\"~N" };
static struct { VBlob sym; char bytes[23]; } _V10_Dstring_D1514 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 23 }, " \"-- expected ~A~~N\"~N" };
static struct { VBlob sym; char bytes[31]; } _V10_Dstring_D1513 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 31 }, " \"-- expected ~A or more~~N\"~N" };
static struct { VBlob sym; char bytes[12]; } _V10_Dstring_D1512 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 12 }, " , argc);~N" };
static struct { VBlob sym; char bytes[60]; } _V10_Dstring_D1511 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 60 }, "void ~A(VRuntime * runtime, VEnv * upenv, int argc, ...);~N" };
static struct { VBlob sym; char bytes[7]; } _V10_Dstring_D1510 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 7 }, "asm(~N" };
static struct { VBlob sym; char bytes[29]; } _V10_Dstring_D1509 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 29 }, "\".intel_syntax noprefix\\n\"~N" };
static struct { VBlob sym; char bytes[19]; } _V10_Dstring_D1508 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 19 }, "#ifdef __linux__~N" };
static struct { VBlob sym; char bytes[26]; } _V10_Dstring_D1507 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 26 }, "\".type ~A, @function\\n\"~N" };
static struct { VBlob sym; char bytes[9]; } _V10_Dstring_D1506 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 9 }, "#endif~N" };
static struct { VBlob sym; char bytes[10]; } _V10_Dstring_D1505 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 10 }, "\"~A:\\n\"~N" };
static struct { VBlob sym; char bytes[26]; } _V10_Dstring_D1504 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 26 }, "match statement exhausted" };
static struct { VBlob sym; char bytes[16]; } _V10_Dstring_D1503 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 16 }, "\"    je ~A\\n\"~N" };
VWEAK VWORD _V0_P;VWEAK struct { VBlob sym; char bytes[2]; } _VW_V0_P = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 2 }, "+" };
static struct { VBlob sym; char bytes[31]; } _V10_Dstring_D1502 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 31 }, "\"    cmp \" ARGC_REG \", ~A\\n\"~N" };
static struct { VBlob sym; char bytes[17]; } _V10_Dstring_D1501 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 17 }, "\"    jge ~A\\n\"~N" };
static struct { VBlob sym; char bytes[31]; } _V10_Dstring_D1500 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 31 }, "\"    jmp _V20CaseError_~A\\n\"~N" };
static struct { VBlob sym; char bytes[58]; } _V10_Dstring_D1499 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 58 }, "static void ~A(VRuntime * runtime, VEnv * upenv, int argc" };
static struct { VBlob sym; char bytes[11]; } _V10_Dstring_D1498 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 11 }, ", VWORD ~A" };
static struct { VBlob sym; char bytes[6]; } _V10_Dstring_D1497 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 6 }, ") {~N" };
static struct { VBlob sym; char bytes[10]; } _V10_Dstring_D1496 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 10 }, "  // ~S~N" };
static struct { VBlob sym; char bytes[9]; } _V10_Dstring_D1495 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 9 }, "_varargs" };
static struct { VBlob sym; char bytes[52]; } _V10_Dstring_D1494 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 52 }, "  struct { VEnv env; VWORD argv[~A]; } container;~N" };
static struct { VBlob sym; char bytes[33]; } _V10_Dstring_D1493 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 33 }, "  VEnv * env = &container.env;~N" };
static struct { VBlob sym; char bytes[34]; } _V10_Dstring_D1492 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 34 }, "  VInitEnv(env, ~A, ~A, upenv);~N" };
static struct { VBlob sym; char bytes[24]; } _V10_Dstring_D1491 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 24 }, "  env->vars[~A] = ~A;~N" };
static struct { VBlob sym; char bytes[30]; } _V10_Dstring_D1490 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 30 }, "  env->vars[~A] = _varargs;~N" };
static struct { VBlob sym; char bytes[27]; } _V10_Dstring_D1489 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 27 }, " VWORD _varargs = VNULL;~N" };
static struct { VBlob sym; char bytes[55]; } _V10_Dstring_D1488 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 55 }, " V_GATHER_VARARGS_VARIADIC(&_varargs, ~A, argc, ~A);~N" };
static struct { VBlob sym; char bytes[5]; } _V10_Dstring_D1487 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 5 }, "argc" };
static struct { VBlob sym; char bytes[20]; } _V10_Dstring_D1486 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 20 }, " if(argc != ~A) {~N" };
static struct { VBlob sym; char bytes[24]; } _V10_Dstring_D1485 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 24 }, "  \"-- expected ~A~~N\"~N" };
static struct { VBlob sym; char bytes[19]; } _V10_Dstring_D1484 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 19 }, " if(argc < ~A) {~N" };
static struct { VBlob sym; char bytes[62]; } _V10_Dstring_D1483 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 62 }, "  VErrorC(runtime, \"Not enough arguments to ~A, got ~~D~~N\"~N" };
static struct { VBlob sym; char bytes[32]; } _V10_Dstring_D1482 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 32 }, "  \"-- expected ~A or more~~N\"~N" };
static struct { VBlob sym; char bytes[13]; } _V10_Dstring_D1481 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 13 }, "  , argc);~N" };
static struct { VBlob sym; char bytes[5]; } _V10_Dstring_D1480 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 5 }, " }~N" };
static struct { VBlob sym; char bytes[37]; } _V10_Dstring_D1479 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 37 }, " static VDebugInfo dbg = { \"~A\" };~N" };
static struct { VBlob sym; char bytes[32]; } _V10_Dstring_D1478 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 32 }, " VRecordCall2(runtime, &dbg);~N" };
static struct { VBlob sym; char bytes[6]; } _V10_Dstring_D1477 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 6 }, ", ..." };
static struct { VBlob sym; char bytes[23]; } _V10_Dstring_D1476 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 23 }, "__attribute__((used)) " };
static struct { VBlob sym; char bytes[7]; } _V10_Dstring_D1475 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 7 }, "_var~A" };
static struct { VBlob sym; char bytes[33]; } _V10_Dstring_D1474 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 33 }, "print-expr: malformed expression" };
VWEAK VWORD _V10foreign_Dfunction;VWEAK struct { VBlob sym; char bytes[19]; } _VW_V10foreign_Dfunction = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 19 }, "##foreign.function" };
static struct { VBlob sym; char bytes[61]; } _V10_Dstring_D1473 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 61 }, "VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)~A, NULL)})" };
static struct { VBlob sym; char bytes[16]; } _V10_Dstring_D1472 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 16 }, "if(VDecodeBool(" };
static struct { VBlob sym; char bytes[5]; } _V10_Dstring_D1471 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 5 }, ")) {" };
static struct { VBlob sym; char bytes[9]; } _V10_Dstring_D1470 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 9 }, "} else {" };
static struct { VBlob sym; char bytes[2]; } _V10_Dstring_D1469 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 2 }, "}" };
static struct { VBlob sym; char bytes[25]; } _V10_Dstring_D1468 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 25 }, "VGetArg(upenv, ~A-1, ~A)" };
static struct { VBlob sym; char bytes[28]; } _V10_Dstring_D1467 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 28 }, "upenv->up->up->up->vars[~A]" };
static struct { VBlob sym; char bytes[24]; } _V10_Dstring_D1466 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 24 }, "upenv->up->up->vars[~A]" };
static struct { VBlob sym; char bytes[20]; } _V10_Dstring_D1465 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 20 }, "upenv->up->vars[~A]" };
static struct { VBlob sym; char bytes[16]; } _V10_Dstring_D1464 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 16 }, "upenv->vars[~A]" };
static struct { VBlob sym; char bytes[60]; } _V10_Dstring_D1463 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 60 }, "VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)~A, env)})" };
static struct { VBlob sym; char bytes[6]; } _V10_Dstring_D1462 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 6 }, "VNULL" };
static struct { VBlob sym; char bytes[22]; } _V10_Dstring_D1461 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 22 }, "~A(runtime,~N        " };
static struct { VBlob sym; char bytes[2]; } _V10_Dstring_D1460 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 2 }, ")" };
static struct { VBlob sym; char bytes[12]; } _V10_Dstring_D1459 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 12 }, ",~N        " };
static struct { VBlob sym; char bytes[15]; } _V10_Dstring_D1458 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 15 }, "unknown inline" };
static struct { VBlob sym; char bytes[38]; } _V10_Dstring_D1457 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 38 }, "set!'s first argument is not a symbol" };
static struct { VBlob sym; char bytes[63]; } _V10_Dstring_D1456 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 63 }, "    VCallFuncWithGC(runtime, (VFunc)VSetGlobalVar2, 3,~N      " };
static struct { VBlob sym; char bytes[24]; } _V10_Dstring_D1455 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 24 }, "print-set: unknown form" };
static struct { VBlob sym; char bytes[104]; } _V10_Dstring_D1454 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 104 }, "    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)VSetEnvVar2, .env = env }, }, 4,~N      " };
static struct { VBlob sym; char bytes[51]; } _V10_Dstring_D1453 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 51 }, ",~N      VEncodeInt(~Al), VEncodeInt(~Al),~N      " };
static struct { VBlob sym; char bytes[66]; } _V10_Dstring_D1452 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 66 }, "    VCallFuncWithGC(runtime, (VFunc)VDefineGlobalVar2, 3,~N      " };
static struct { VBlob sym; char bytes[11]; } _V10_Dstring_D1451 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 11 }, "~N    );~N" };
static struct { VBlob sym; char bytes[25]; } _V10_Dstring_D1450 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 25 }, "    // OH NO A LETREC!~N" };
static struct { VBlob sym; char bytes[6]; } _V10_Dstring_D1449 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 6 }, "    {" };
static struct { VBlob sym; char bytes[24]; } _V10_Dstring_D1448 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 24 }, "    VEnv * upenv = env;" };
static struct { VBlob sym; char bytes[54]; } _V10_Dstring_D1447 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 54 }, "    struct { VEnv env; VWORD argv[~A]; } container;~N" };
static struct { VBlob sym; char bytes[35]; } _V10_Dstring_D1446 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 35 }, "    VEnv * env = &container.env;~N" };
static struct { VBlob sym; char bytes[36]; } _V10_Dstring_D1445 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 36 }, "    VInitEnv(env, ~A, ~A, upenv);~N" };
static struct { VBlob sym; char bytes[14]; } _V10_Dstring_D1444 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 14 }, "env->vars[~A]" };
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D1443 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "    env->vars[~A] = " };
static struct { VBlob sym; char bytes[2]; } _V10_Dstring_D1442 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 2 }, ";" };
static struct { VBlob sym; char bytes[6]; } _V10_Dstring_D1441 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 6 }, "    }" };
static struct { VBlob sym; char bytes[63]; } _V10_Dstring_D1440 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 63 }, "    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, " };
static struct { VBlob sym; char bytes[6]; } _V10_Dstring_D1439 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 6 }, "), ~A" };
static struct { VBlob sym; char bytes[87]; } _V10_Dstring_D1438 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 87 }, "    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)~A, .env = env }, }, ~A" };
static struct { VBlob sym; char bytes[43]; } _V10_Dstring_D1437 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 43 }, "    VCallFuncWithGC(runtime, (VFunc)~A, ~A" };
static struct { VBlob sym; char bytes[10]; } _V10_Dstring_D1436 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 10 }, ",~N      " };
static struct { VBlob sym; char bytes[5]; } _V10_Dstring_D1435 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 5 }, ");~N" };
static struct { VBlob sym; char bytes[22]; } _V10_Dstring_D1434 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 22 }, "closes\?: unknown form" };
VWEAK VWORD _V0letrec;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0letrec = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "letrec" };
VWEAK VWORD _V10inline;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V10inline = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "##inline" };
VWEAK VWORD _V0define;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0define = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "define" };
VWEAK VWORD _V0set_B;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0set_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "set!" };
VWEAK VWORD _V0if;VWEAK struct { VBlob sym; char bytes[3]; } _VW_V0if = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 3 }, "if" };
VWEAK VWORD _V10string;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V10string = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "##string" };
VWEAK VWORD _V0bruijn;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0bruijn = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "bruijn" };
VWEAK VWORD _V0quote;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0quote = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "quote" };
VWEAK VWORD _V0close;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0close = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "close" };
static struct { VBlob sym; char bytes[50]; } _V10_Dstring_D1433 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 50 }, "static __attribute__((constructor)) void ~A() {~N" };
static struct { VBlob sym; char bytes[4]; } _V10_Dstring_D1432 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 4 }, "}~N" };
static struct { VBlob sym; char bytes[86]; } _V10_Dstring_D1431 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 86 }, "  _V40~A = VEncodePointer(VLookupConstant(\"_V40~A\", &_VW_V40~A), VPOINTER_CLOSURE);~N" };
static struct { VBlob sym; char bytes[72]; } _V10_Dstring_D1430 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 72 }, "  ~A = VEncodePointer(VLookupConstant(\"~A\", &_VW~A), VPOINTER_OTHER);~N" };
static struct { VBlob sym; char bytes[52]; } _V10_Dstring_D1429 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 52 }, "print-literal-table: unknown entry in literal table" };
static struct { VBlob sym; char bytes[20]; } _V10_Dstring_D1428 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 20 }, "VWEAK VWORD _V40~A;" };
static struct { VBlob sym; char bytes[102]; } _V10_Dstring_D1427 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 102 }, "VWEAK VClosure _VW_V40~A = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)~A, NULL };~N" };
VWEAK VWORD _V10intrinsic;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V10intrinsic = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "##intrinsic" };
static struct { VBlob sym; char bytes[139]; } _V10_Dstring_D1426 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 139 }, "static struct { VBlob sym; char bytes[~A]; } ~A = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, ~A }, \"~A\" };~N" };
static struct { VBlob sym; char bytes[16]; } _V10_Dstring_D1425 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 16 }, "VWEAK VWORD ~A;" };
static struct { VBlob sym; char bytes[123]; } _V10_Dstring_D1424 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 123 }, "VWEAK struct { VBlob sym; char bytes[~A]; } _VW~A = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, ~A }, \"~A\" };~N" };
static struct { VBlob sym; char bytes[36]; } _V10_Dstring_D1423 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 36 }, "print-literal: unknown literal type" };
static struct { VBlob sym; char bytes[19]; } _V10_Dstring_D1422 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 19 }, "VEncodeBool(false)" };
static struct { VBlob sym; char bytes[18]; } _V10_Dstring_D1421 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 18 }, "VEncodeBool(true)" };
static struct { VBlob sym; char bytes[18]; } _V10_Dstring_D1420 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 18 }, "VEncodeChar('~A')" };
static struct { VBlob sym; char bytes[9]; } _V10_Dstring_D1419 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 9 }, "VNULLPTR" };
static struct { VBlob sym; char bytes[6]; } _V10_Dstring_D1418 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 6 }, "VVOID" };
static struct { VBlob sym; char bytes[18]; } _V10_Dstring_D1417 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 18 }, "VEncodeNumber(~A)" };
static struct { VBlob sym; char bytes[16]; } _V10_Dstring_D1416 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 16 }, "VEncodeInt(~Al)" };
static struct { VBlob sym; char bytes[7]; } _V10_Dstring_D1415 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 7 }, "_V40~A" };
static struct { VBlob sym; char bytes[40]; } _V10_Dstring_D1414 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 40 }, "VEncodePointer(&~A.sym, VPOINTER_OTHER)" };
static struct { VBlob sym; char bytes[3]; } _V10_Dstring_D1413 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 3 }, "\\'" };
static struct { VBlob sym; char bytes[3]; } _V10_Dstring_D1412 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 3 }, "\\\\" };
static struct { VBlob sym; char bytes[3]; } _V10_Dstring_D1411 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 3 }, "\\\?" };
static struct { VBlob sym; char bytes[3]; } _V10_Dstring_D1410 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 3 }, "\\r" };
static struct { VBlob sym; char bytes[3]; } _V10_Dstring_D1409 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 3 }, "\\n" };
static struct { VBlob sym; char bytes[3]; } _V10_Dstring_D1408 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 3 }, "\\t" };
static struct { VBlob sym; char bytes[3]; } _V10_Dstring_D1407 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 3 }, "\\b" };
static struct { VBlob sym; char bytes[3]; } _V10_Dstring_D1406 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 3 }, "\\a" };
static struct { VBlob sym; char bytes[37]; } _V10_Dstring_D1405 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 37 }, "VLookupGlobalVarFast2(runtime, \"~A\")" };
static struct { VBlob sym; char bytes[60]; } _V10_Dstring_D1404 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 60 }, "VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)~A,NULL)})" };
static __attribute__((constructor)) void VDllMain1() {
  _V0sprintf = VEncodePointer(VLookupConstant("_V0sprintf", &_VW_V0sprintf), VPOINTER_OTHER);
  _V0printf = VEncodePointer(VLookupConstant("_V0printf", &_VW_V0printf), VPOINTER_OTHER);
  _V0length = VEncodePointer(VLookupConstant("_V0length", &_VW_V0length), VPOINTER_OTHER);
  _V0iota = VEncodePointer(VLookupConstant("_V0iota", &_VW_V0iota), VPOINTER_OTHER);
  _V0equal_Q = VEncodePointer(VLookupConstant("_V0equal_Q", &_VW_V0equal_Q), VPOINTER_OTHER);
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
static void _V10_Dprint__global_D206_k53(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__global_D206_k53, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.builtin.225 0 0) ((bruijn ##.x.555 46 0) (bruijn ##.k.598 1 0) (##string ##.string.1404) (bruijn ##.builtin.225 0 0)) ((bruijn ##.x.555 46 0) (bruijn ##.k.598 1 0) (##string ##.string.1405) (bruijn ##.sym.224 1 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 46-1, 0)), 3,
      upenv->vars[0],
      VEncodePointer(&_V10_Dstring_D1404.sym, VPOINTER_OTHER),
      _var0);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 46-1, 0)), 3,
      upenv->vars[0],
      VEncodePointer(&_V10_Dstring_D1405.sym, VPOINTER_OTHER),
      upenv->vars[1]);
}
}
static void _V10_Dprint__global_D206_lambda3(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__global_D206_lambda3, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##.x.571 29 0) (close _V10_Dprint__global_D206_k53) (bruijn ##.sym.224 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 29-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__global_D206_k53, env)}),
      _var1);
}
static void _V10_Dloop_D227_k66(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D227_k66, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.617 1 0) ((bruijn ##.k.618 0 0) (bruijn ##.p.617 1 0)) ((bruijn ##.x.569 46 0) (bruijn ##.k.618 0 0) (bruijn ##.x.0.229 9 0) '#\\))
if(VDecodeBool(
upenv->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      upenv->vars[0]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 46-1, 0)), 3,
      _var0,
      VGetArg(upenv, 9-1, 0),
      VEncodeChar('\\'));
}
}
static void _V10_Dloop_D227_k69(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D227_k69, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.572 45 0) (bruijn ##.k.607 9 0) (bruijn ##.x.615 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 45-1, 0)), 2,
      VGetArg(upenv, 9-1, 0),
      _var0);
}
static void _V10_Dloop_D227_k68(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D227_k68, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.x.589 27 0) (close _V10_Dloop_D227_k69) (bruijn ##.s.226 16 1) (bruijn ##.i.228 13 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 27-1, 0)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D227_k69, env)}),
      VGetArg(upenv, 16-1, 1),
      VGetArg(upenv, 13-1, 1));
}
static void _V10_Dloop_D227_k70(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D227_k70, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.572 44 0) (bruijn ##.k.607 8 0) (bruijn ##.x.616 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 44-1, 0)), 2,
      VGetArg(upenv, 8-1, 0),
      _var0);
}
static void _V10_Dloop_D227_k67(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D227_k67, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.613 0 0) ((bruijn ##.x.572 43 0) (close _V10_Dloop_D227_k68) #\\) ((bruijn ##.x.589 26 0) (close _V10_Dloop_D227_k70) (bruijn ##.s.226 15 1) (bruijn ##.i.228 12 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 43-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D227_k68, env)}),
      VEncodeChar('\\'));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 26-1, 0)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D227_k70, env)}),
      VGetArg(upenv, 15-1, 1),
      VGetArg(upenv, 12-1, 1));
}
}
static void _V10_Dloop_D227_k65(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D227_k65, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dloop_D227_k66) (close _V10_Dloop_D227_k67))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dloop_D227_k66, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D227_k67, env)}));
}
static void _V10_Dloop_D227_k64(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D227_k64, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.612 0 0) ((bruijn ##.x.572 41 0) (bruijn ##.k.607 5 0) (##string ##.string.1411)) ((bruijn ##.x.569 44 0) (close _V10_Dloop_D227_k65) (bruijn ##.x.0.229 7 0) '#\"))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 41-1, 0)), 2,
      VGetArg(upenv, 5-1, 0),
      VEncodePointer(&_V10_Dstring_D1411.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 44-1, 0)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D227_k65, env)}),
      VGetArg(upenv, 7-1, 0),
      VEncodeChar('"'));
}
}
static void _V10_Dloop_D227_k63(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D227_k63, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.611 0 0) ((bruijn ##.x.572 40 0) (bruijn ##.k.607 4 0) (##string ##.string.1410)) ((bruijn ##.x.569 43 0) (close _V10_Dloop_D227_k64) (bruijn ##.x.0.229 6 0) '#\?))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 40-1, 0)), 2,
      upenv->up->up->up->vars[0],
      VEncodePointer(&_V10_Dstring_D1410.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 43-1, 0)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D227_k64, env)}),
      VGetArg(upenv, 6-1, 0),
      VEncodeChar('?'));
}
}
static void _V10_Dloop_D227_k62(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D227_k62, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.610 0 0) ((bruijn ##.x.572 39 0) (bruijn ##.k.607 3 0) (##string ##.string.1409)) ((bruijn ##.x.569 42 0) (close _V10_Dloop_D227_k63) (bruijn ##.x.0.229 5 0) '#\return))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 39-1, 0)), 2,
      upenv->up->up->vars[0],
      VEncodePointer(&_V10_Dstring_D1409.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 42-1, 0)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D227_k63, env)}),
      VGetArg(upenv, 5-1, 0),
      VEncodeChar('\r'));
}
}
static void _V10_Dloop_D227_k61(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D227_k61, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.609 0 0) ((bruijn ##.x.572 38 0) (bruijn ##.k.607 2 0) (##string ##.string.1408)) ((bruijn ##.x.569 41 0) (close _V10_Dloop_D227_k62) (bruijn ##.x.0.229 4 0) '#\newline))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 38-1, 0)), 2,
      upenv->up->vars[0],
      VEncodePointer(&_V10_Dstring_D1408.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 41-1, 0)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D227_k62, env)}),
      upenv->up->up->up->vars[0],
      VEncodeChar('\n'));
}
}
static void _V10_Dloop_D227_k60(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D227_k60, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.608 0 0) ((bruijn ##.x.572 37 0) (bruijn ##.k.607 1 0) (##string ##.string.1407)) ((bruijn ##.x.569 40 0) (close _V10_Dloop_D227_k61) (bruijn ##.x.0.229 3 0) '#\tab))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 37-1, 0)), 2,
      upenv->vars[0],
      VEncodePointer(&_V10_Dstring_D1407.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 40-1, 0)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D227_k61, env)}),
      upenv->up->up->vars[0],
      VEncodeChar('\t'));
}
}
static void _V10_Dloop_D227_k59(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D227_k59, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.606 1 0) ((bruijn ##.x.572 36 0) (bruijn ##.k.607 0 0) (##string ##.string.1406)) ((bruijn ##.x.569 39 0) (close _V10_Dloop_D227_k60) (bruijn ##.x.0.229 2 0) '#\backspace))
if(VDecodeBool(
upenv->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 36-1, 0)), 2,
      _var0,
      VEncodePointer(&_V10_Dstring_D1406.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 39-1, 0)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D227_k60, env)}),
      upenv->up->vars[0],
      VEncodeChar('\t'));
}
}
static void _V10_Dloop_D227_k72(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D227_k72, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.loop.227 7 0) (bruijn ##.k.602 6 0) (bruijn ##.x.605 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 7-1, 0)), 2,
      VGetArg(upenv, 6-1, 0),
      _var0);
}
static void _V10_Dloop_D227_k71(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D227_k71, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.x.553 55 0) (close _V10_Dloop_D227_k72) (bruijn ##.i.228 5 1) 1)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 55-1, 0)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D227_k72, env)}),
      VGetArg(upenv, 5-1, 1),
      VEncodeInt(1l));
}
static void _V10_Dloop_D227_k58(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D227_k58, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dloop_D227_k59) (close _V10_Dloop_D227_k71))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dloop_D227_k59, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D227_k71, env)}));
}
static void _V10_Dloop_D227_k57(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D227_k57, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.x.569 37 0) (close _V10_Dloop_D227_k58) (bruijn ##.x.0.229 0 0) '#\alarm)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 37-1, 0)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D227_k58, env)}),
      _var0,
      VEncodeChar('\a'));
}
static void _V10_Dloop_D227_k56(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D227_k56, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.603 0 0) ((bruijn ##.x.589 16 0) (close _V10_Dloop_D227_k57) (bruijn ##.s.226 5 1) (bruijn ##.i.228 2 1)) ((bruijn ##.k.602 2 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 16-1, 0)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D227_k57, env)}),
      VGetArg(upenv, 5-1, 1),
      upenv->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dloop_D227_k55(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D227_k55, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.x.588 16 0) (close _V10_Dloop_D227_k56) (bruijn ##.i.228 1 1) (bruijn ##.x.619 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 16-1, 0)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D227_k56, env)}),
      upenv->vars[1],
      _var0);
}
static void _V10_Dloop_D227_lambda5(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D227_lambda5, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##.x.579 24 0) (close _V10_Dloop_D227_k55) (bruijn ##.s.226 3 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 24-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D227_k55, env)}),
      upenv->up->up->vars[1]);
}
static void _V10_Dprint__string_D207_k73(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__string_D207_k73, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.572 31 0) (bruijn ##.k.599 3 0) #\")
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 31-1, 0)), 2,
      upenv->up->up->vars[0],
      VEncodeChar('"'));
}
static void _V10_Dprint__string_D207_k54(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__string_D207_k54, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (letrec 1 ((close _V10_Dloop_D227_lambda5)) ((bruijn ##.loop.227 0 0) (close _V10_Dprint__string_D207_k73) 0))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D227_lambda5, env)});
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, env->vars[0]), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__string_D207_k73, env)}),
      VEncodeInt(0l));
    }
}
static void _V10_Dprint__string_D207_lambda4(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__string_D207_lambda4, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##.x.572 28 0) (close _V10_Dprint__string_D207_k54) #\")
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 28-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__string_D207_k54, env)}),
      VEncodeChar('"'));
}
static void _V10_Dloop_D233_k86(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D233_k86, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.640 1 0) ((bruijn ##.k.641 0 0) (bruijn ##.p.640 1 0)) ((bruijn ##.x.569 46 0) (bruijn ##.k.641 0 0) (bruijn ##.x.1.235 9 0) '#\\))
if(VDecodeBool(
upenv->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      upenv->vars[0]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 46-1, 0)), 3,
      _var0,
      VGetArg(upenv, 9-1, 0),
      VEncodeChar('\\'));
}
}
static void _V10_Dloop_D233_k89(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D233_k89, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.572 45 0) (bruijn ##.k.630 9 0) (bruijn ##.x.638 0 0) (bruijn ##.x.622 15 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 45-1, 0)), 3,
      VGetArg(upenv, 9-1, 0),
      _var0,
      VGetArg(upenv, 15-1, 0));
}
static void _V10_Dloop_D233_k88(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D233_k88, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.x.589 27 0) (close _V10_Dloop_D233_k89) (bruijn ##.s.230 16 1) (bruijn ##.i.234 12 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 27-1, 0)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D233_k89, env)}),
      VGetArg(upenv, 16-1, 1),
      VGetArg(upenv, 12-1, 1));
}
static void _V10_Dloop_D233_k90(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D233_k90, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.572 44 0) (bruijn ##.k.630 8 0) (bruijn ##.x.639 0 0) (bruijn ##.x.622 14 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 44-1, 0)), 3,
      VGetArg(upenv, 8-1, 0),
      _var0,
      VGetArg(upenv, 14-1, 0));
}
static void _V10_Dloop_D233_k87(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D233_k87, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.636 0 0) ((bruijn ##.x.572 43 0) (close _V10_Dloop_D233_k88) #\\ (bruijn ##.x.622 13 0)) ((bruijn ##.x.589 26 0) (close _V10_Dloop_D233_k90) (bruijn ##.s.230 15 1) (bruijn ##.i.234 11 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 43-1, 0)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D233_k88, env)}),
      VEncodeChar('\\'),
      VGetArg(upenv, 13-1, 0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 26-1, 0)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D233_k90, env)}),
      VGetArg(upenv, 15-1, 1),
      VGetArg(upenv, 11-1, 1));
}
}
static void _V10_Dloop_D233_k85(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D233_k85, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dloop_D233_k86) (close _V10_Dloop_D233_k87))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dloop_D233_k86, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D233_k87, env)}));
}
static void _V10_Dloop_D233_k84(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D233_k84, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.635 0 0) ((bruijn ##.x.572 41 0) (bruijn ##.k.630 5 0) (##string ##.string.1411) (bruijn ##.x.622 11 0)) ((bruijn ##.x.569 44 0) (close _V10_Dloop_D233_k85) (bruijn ##.x.1.235 7 0) '#\"))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 41-1, 0)), 3,
      VGetArg(upenv, 5-1, 0),
      VEncodePointer(&_V10_Dstring_D1411.sym, VPOINTER_OTHER),
      VGetArg(upenv, 11-1, 0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 44-1, 0)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D233_k85, env)}),
      VGetArg(upenv, 7-1, 0),
      VEncodeChar('"'));
}
}
static void _V10_Dloop_D233_k83(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D233_k83, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.634 0 0) ((bruijn ##.x.572 40 0) (bruijn ##.k.630 4 0) (##string ##.string.1410) (bruijn ##.x.622 10 0)) ((bruijn ##.x.569 43 0) (close _V10_Dloop_D233_k84) (bruijn ##.x.1.235 6 0) '#\?))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 40-1, 0)), 3,
      upenv->up->up->up->vars[0],
      VEncodePointer(&_V10_Dstring_D1410.sym, VPOINTER_OTHER),
      VGetArg(upenv, 10-1, 0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 43-1, 0)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D233_k84, env)}),
      VGetArg(upenv, 6-1, 0),
      VEncodeChar('?'));
}
}
static void _V10_Dloop_D233_k82(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D233_k82, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.633 0 0) ((bruijn ##.x.572 39 0) (bruijn ##.k.630 3 0) (##string ##.string.1409) (bruijn ##.x.622 9 0)) ((bruijn ##.x.569 42 0) (close _V10_Dloop_D233_k83) (bruijn ##.x.1.235 5 0) '#\return))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 39-1, 0)), 3,
      upenv->up->up->vars[0],
      VEncodePointer(&_V10_Dstring_D1409.sym, VPOINTER_OTHER),
      VGetArg(upenv, 9-1, 0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 42-1, 0)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D233_k83, env)}),
      VGetArg(upenv, 5-1, 0),
      VEncodeChar('\r'));
}
}
static void _V10_Dloop_D233_k81(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D233_k81, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.632 0 0) ((bruijn ##.x.572 38 0) (bruijn ##.k.630 2 0) (##string ##.string.1408) (bruijn ##.x.622 8 0)) ((bruijn ##.x.569 41 0) (close _V10_Dloop_D233_k82) (bruijn ##.x.1.235 4 0) '#\newline))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 38-1, 0)), 3,
      upenv->up->vars[0],
      VEncodePointer(&_V10_Dstring_D1408.sym, VPOINTER_OTHER),
      VGetArg(upenv, 8-1, 0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 41-1, 0)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D233_k82, env)}),
      upenv->up->up->up->vars[0],
      VEncodeChar('\n'));
}
}
static void _V10_Dloop_D233_k80(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D233_k80, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.631 0 0) ((bruijn ##.x.572 37 0) (bruijn ##.k.630 1 0) (##string ##.string.1407) (bruijn ##.x.622 7 0)) ((bruijn ##.x.569 40 0) (close _V10_Dloop_D233_k81) (bruijn ##.x.1.235 3 0) '#\tab))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 37-1, 0)), 3,
      upenv->vars[0],
      VEncodePointer(&_V10_Dstring_D1407.sym, VPOINTER_OTHER),
      VGetArg(upenv, 7-1, 0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 40-1, 0)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D233_k81, env)}),
      upenv->up->up->vars[0],
      VEncodeChar('\t'));
}
}
static void _V10_Dloop_D233_k79(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D233_k79, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.629 1 0) ((bruijn ##.x.572 36 0) (bruijn ##.k.630 0 0) (##string ##.string.1406) (bruijn ##.x.622 6 0)) ((bruijn ##.x.569 39 0) (close _V10_Dloop_D233_k80) (bruijn ##.x.1.235 2 0) '#\backspace))
if(VDecodeBool(
upenv->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 36-1, 0)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1406.sym, VPOINTER_OTHER),
      VGetArg(upenv, 6-1, 0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 39-1, 0)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D233_k80, env)}),
      upenv->up->vars[0],
      VEncodeChar('\t'));
}
}
static void _V10_Dloop_D233_k92(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D233_k92, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.loop.233 6 0) (bruijn ##.k.625 5 0) (bruijn ##.x.628 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 6-1, 0)), 2,
      VGetArg(upenv, 5-1, 0),
      _var0);
}
static void _V10_Dloop_D233_k91(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D233_k91, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.x.553 55 0) (close _V10_Dloop_D233_k92) (bruijn ##.i.234 4 1) 1)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 55-1, 0)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D233_k92, env)}),
      upenv->up->up->up->vars[1],
      VEncodeInt(1l));
}
static void _V10_Dloop_D233_k78(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D233_k78, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dloop_D233_k79) (close _V10_Dloop_D233_k91))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dloop_D233_k79, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D233_k91, env)}));
}
static void _V10_Dloop_D233_k77(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D233_k77, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.x.569 37 0) (close _V10_Dloop_D233_k78) (bruijn ##.x.1.235 0 0) '#\alarm)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 37-1, 0)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D233_k78, env)}),
      _var0,
      VEncodeChar('\a'));
}
static void _V10_Dloop_D233_k76(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D233_k76, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.626 0 0) ((bruijn ##.x.589 16 0) (close _V10_Dloop_D233_k77) (bruijn ##.s.230 5 1) (bruijn ##.i.234 1 1)) ((bruijn ##.k.625 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 16-1, 0)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D233_k77, env)}),
      VGetArg(upenv, 5-1, 1),
      upenv->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dloop_D233_lambda7(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D233_lambda7, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##.x.588 16 0) (close _V10_Dloop_D233_k76) (bruijn ##.i.234 0 1) (bruijn ##.x.621 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 16-1, 0)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D233_k76, env)}),
      _var1,
      upenv->up->up->vars[0]);
}
static void _V10_Descape__string_D208_k95(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Descape__string_D208_k95, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.620 6 0) (bruijn ##.ret.236 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 6-1, 0)), 1,
      upenv->vars[0]);
}
static void _V10_Descape__string_D208_k94(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Descape__string_D208_k94, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.x.587 18 0) (close _V10_Descape__string_D208_k95) (bruijn ##.x.622 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 18-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Descape__string_D208_k95, env)}),
      upenv->up->up->vars[0]);
}
static void _V10_Descape__string_D208_k93(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Descape__string_D208_k93, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.x.586 18 0) (close _V10_Descape__string_D208_k94) (bruijn ##.x.622 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 18-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Descape__string_D208_k94, env)}),
      upenv->up->vars[0]);
}
static void _V10_Descape__string_D208_k75(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Descape__string_D208_k75, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (letrec 1 ((close _V10_Dloop_D233_lambda7)) ((bruijn ##.loop.233 0 0) (close _V10_Descape__string_D208_k93) 0))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D233_lambda7, env)});
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, env->vars[0]), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Descape__string_D208_k93, env)}),
      VEncodeInt(0l));
    }
}
static void _V10_Descape__string_D208_k74(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Descape__string_D208_k74, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.x.585 16 0) (close _V10_Descape__string_D208_k75))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 16-1, 0)), 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Descape__string_D208_k75, env)}));
}
static void _V10_Descape__string_D208_lambda6(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Descape__string_D208_lambda6, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##.x.579 21 0) (close _V10_Descape__string_D208_k74) (bruijn ##.s.230 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 21-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Descape__string_D208_k74, env)}),
      _var1);
}
static void _V10_Descape__char_D209_k102(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Descape__char_D209_k102, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.649 0 0) ((bruijn ##.k.642 7 0) (##string ##.string.1413)) ((bruijn ##.k.642 7 0) (bruijn ##.c.237 7 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 7-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D1413.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 7-1, 0)), 1,
      VGetArg(upenv, 7-1, 1));
}
}
static void _V10_Descape__char_D209_k101(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Descape__char_D209_k101, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.648 0 0) ((bruijn ##.k.642 6 0) (##string ##.string.1412)) ((bruijn ##.x.569 37 0) (close _V10_Descape__char_D209_k102) (bruijn ##.c.237 6 1) '#\'))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 6-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D1412.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 37-1, 0)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Descape__char_D209_k102, env)}),
      VGetArg(upenv, 6-1, 1),
      VEncodeChar('\''));
}
}
static void _V10_Descape__char_D209_k100(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Descape__char_D209_k100, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.647 0 0) ((bruijn ##.k.642 5 0) (##string ##.string.1410)) ((bruijn ##.x.569 36 0) (close _V10_Descape__char_D209_k101) (bruijn ##.c.237 5 1) '#\\))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 5-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D1410.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 36-1, 0)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Descape__char_D209_k101, env)}),
      VGetArg(upenv, 5-1, 1),
      VEncodeChar('\\'));
}
}
static void _V10_Descape__char_D209_k99(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Descape__char_D209_k99, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.646 0 0) ((bruijn ##.k.642 4 0) (##string ##.string.1409)) ((bruijn ##.x.569 35 0) (close _V10_Descape__char_D209_k100) (bruijn ##.c.237 4 1) '#\return))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->up->vars[0]), 1,
      VEncodePointer(&_V10_Dstring_D1409.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 35-1, 0)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Descape__char_D209_k100, env)}),
      upenv->up->up->up->vars[1],
      VEncodeChar('\r'));
}
}
static void _V10_Descape__char_D209_k98(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Descape__char_D209_k98, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.645 0 0) ((bruijn ##.k.642 3 0) (##string ##.string.1408)) ((bruijn ##.x.569 34 0) (close _V10_Descape__char_D209_k99) (bruijn ##.c.237 3 1) '#\newline))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->vars[0]), 1,
      VEncodePointer(&_V10_Dstring_D1408.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 34-1, 0)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Descape__char_D209_k99, env)}),
      upenv->up->up->vars[1],
      VEncodeChar('\n'));
}
}
static void _V10_Descape__char_D209_k97(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Descape__char_D209_k97, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.644 0 0) ((bruijn ##.k.642 2 0) (##string ##.string.1408)) ((bruijn ##.x.569 33 0) (close _V10_Descape__char_D209_k98) (bruijn ##.c.237 2 1) '#\tab))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->vars[0]), 1,
      VEncodePointer(&_V10_Dstring_D1408.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 33-1, 0)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Descape__char_D209_k98, env)}),
      upenv->up->vars[1],
      VEncodeChar('\t'));
}
}
static void _V10_Descape__char_D209_k96(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Descape__char_D209_k96, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.643 0 0) ((bruijn ##.k.642 1 0) (##string ##.string.1406)) ((bruijn ##.x.569 32 0) (close _V10_Descape__char_D209_k97) (bruijn ##.c.237 1 1) '#\backspace))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 1,
      VEncodePointer(&_V10_Dstring_D1406.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 32-1, 0)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Descape__char_D209_k97, env)}),
      upenv->vars[1],
      VEncodeChar('\t'));
}
}
static void _V10_Descape__char_D209_lambda8(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Descape__char_D209_lambda8, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##.x.569 31 0) (close _V10_Descape__char_D209_k96) (bruijn ##.c.237 0 1) '#\alarm)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 31-1, 0)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Descape__char_D209_k96, env)}),
      _var1,
      VEncodeChar('\a'));
}
static void _V10_Dprint__literal__string_D210_k103(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__literal__string_D210_k103, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.555 46 0) (bruijn ##.k.650 1 0) (##string ##.string.1414) (bruijn ##.x.651 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 46-1, 0)), 3,
      upenv->vars[0],
      VEncodePointer(&_V10_Dstring_D1414.sym, VPOINTER_OTHER),
      _var0);
}
static void _V10_Dprint__literal__string_D210_lambda9(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__literal__string_D210_lambda9, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##.x.575 25 0) (close _V10_Dprint__literal__string_D210_k103) (bruijn ##.x.239 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 25-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__literal__string_D210_k103, env)}),
      _var1);
}
static void _V10_Dprint__intrinsic_D211_k104(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__intrinsic_D211_k104, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.555 46 0) (bruijn ##.k.652 1 0) (##string ##.string.1415) (bruijn ##.x.653 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 46-1, 0)), 3,
      upenv->vars[0],
      VEncodePointer(&_V10_Dstring_D1415.sym, VPOINTER_OTHER),
      _var0);
}
static void _V10_Dprint__intrinsic_D211_lambda10(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__intrinsic_D211_lambda10, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##.x.575 25 0) (close _V10_Dprint__intrinsic_D211_k104) (bruijn ##.x.240 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 25-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__intrinsic_D211_k104, env)}),
      _var1);
}
static void _V10_Dprint__literal_D212_k110(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__literal_D212_k110, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.555 51 0) (bruijn ##.k.654 6 0) (##string ##.string.1420) (bruijn ##.x.660 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 51-1, 0)), 3,
      VGetArg(upenv, 6-1, 0),
      VEncodePointer(&_V10_Dstring_D1420.sym, VPOINTER_OTHER),
      _var0);
}
static void _V10_Dprint__literal_D212_k114(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__literal_D212_k114, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.572 37 0) (bruijn ##.k.654 9 0) (bruijn ##.x.664 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 37-1, 0)), 2,
      VGetArg(upenv, 9-1, 0),
      _var0);
}
static void _V10_Dprint__literal_D212_k113(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__literal_D212_k113, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.663 0 0) ((bruijn ##.x.575 33 0) (close _V10_Dprint__literal_D212_k114) (bruijn ##.x.241 8 1)) ((bruijn ##.x.593 15 0) (bruijn ##.k.654 8 0) (##string ##.string.1423) (bruijn ##.x.241 8 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 33-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__literal_D212_k114, env)}),
      VGetArg(upenv, 8-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 15-1, 0)), 3,
      VGetArg(upenv, 8-1, 0),
      VEncodePointer(&_V10_Dstring_D1423.sym, VPOINTER_OTHER),
      VGetArg(upenv, 8-1, 1));
}
}
static void _V10_Dprint__literal_D212_k112(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__literal_D212_k112, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.662 0 0) ((bruijn ##.x.555 52 0) (bruijn ##.k.654 7 0) (##string ##.string.1422)) ((bruijn ##.x.567 40 0) (close _V10_Dprint__literal_D212_k113) (bruijn ##.x.241 7 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 52-1, 0)), 2,
      VGetArg(upenv, 7-1, 0),
      VEncodePointer(&_V10_Dstring_D1422.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 40-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__literal_D212_k113, env)}),
      VGetArg(upenv, 7-1, 1));
}
}
static void _V10_Dprint__literal_D212_k111(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__literal_D212_k111, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.661 0 0) ((bruijn ##.x.555 51 0) (bruijn ##.k.654 6 0) (##string ##.string.1421)) ((bruijn ##.x.581 25 0) (close _V10_Dprint__literal_D212_k112) (bruijn ##.x.241 6 1) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 51-1, 0)), 2,
      VGetArg(upenv, 6-1, 0),
      VEncodePointer(&_V10_Dstring_D1421.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 25-1, 0)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__literal_D212_k112, env)}),
      VGetArg(upenv, 6-1, 1),
      VEncodeBool(false));
}
}
static void _V10_Dprint__literal_D212_k109(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__literal_D212_k109, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.659 0 0) ((bruijn ##.escape-char.209 6 3) (close _V10_Dprint__literal_D212_k110) (bruijn ##.x.241 5 1)) ((bruijn ##.x.581 24 0) (close _V10_Dprint__literal_D212_k111) (bruijn ##.x.241 5 1) #t))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 6-1, 3)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__literal_D212_k110, env)}),
      VGetArg(upenv, 5-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 24-1, 0)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__literal_D212_k111, env)}),
      VGetArg(upenv, 5-1, 1),
      VEncodeBool(true));
}
}
static void _V10_Dprint__literal_D212_k108(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__literal_D212_k108, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.658 0 0) ((bruijn ##.x.555 49 0) (bruijn ##.k.654 4 0) (##string ##.string.1419)) ((bruijn ##.x.582 22 0) (close _V10_Dprint__literal_D212_k109) (bruijn ##.x.241 4 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 49-1, 0)), 2,
      upenv->up->up->up->vars[0],
      VEncodePointer(&_V10_Dstring_D1419.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 22-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__literal_D212_k109, env)}),
      upenv->up->up->up->vars[1]);
}
}
static void _V10_Dprint__literal_D212_k107(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__literal_D212_k107, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.657 0 0) ((bruijn ##.x.555 48 0) (bruijn ##.k.654 3 0) (##string ##.string.1418)) (##vcore.nullptr? (close _V10_Dprint__literal_D212_k108) (bruijn ##.x.241 3 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 48-1, 0)), 2,
      upenv->up->up->vars[0],
      VEncodePointer(&_V10_Dstring_D1418.sym, VPOINTER_OTHER));
} else {
    VCallFuncWithGC(runtime, (VFunc)VNullptrP2, 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__literal_D212_k108, env)}),
      upenv->up->up->vars[1]);
}
}
static void _V10_Dprint__literal_D212_k106(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__literal_D212_k106, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.656 0 0) ((bruijn ##.x.555 47 0) (bruijn ##.k.654 2 0) (##string ##.string.1417) (bruijn ##.x.241 2 1)) (##vcore.void? (close _V10_Dprint__literal_D212_k107) (bruijn ##.x.241 2 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 47-1, 0)), 3,
      upenv->up->vars[0],
      VEncodePointer(&_V10_Dstring_D1417.sym, VPOINTER_OTHER),
      upenv->up->vars[1]);
} else {
    VCallFuncWithGC(runtime, (VFunc)VVoidP2, 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__literal_D212_k107, env)}),
      upenv->up->vars[1]);
}
}
static void _V10_Dprint__literal_D212_k105(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__literal_D212_k105, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.655 0 0) ((bruijn ##.x.555 46 0) (bruijn ##.k.654 1 0) (##string ##.string.1416) (bruijn ##.x.241 1 1)) ((bruijn ##.x.583 18 0) (close _V10_Dprint__literal_D212_k106) (bruijn ##.x.241 1 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 46-1, 0)), 3,
      upenv->vars[0],
      VEncodePointer(&_V10_Dstring_D1416.sym, VPOINTER_OTHER),
      upenv->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 18-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__literal_D212_k106, env)}),
      upenv->vars[1]);
}
}
static void _V10_Dprint__literal_D212_lambda11(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__literal_D212_lambda11, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##.x.584 16 0) (close _V10_Dprint__literal_D212_k105) (bruijn ##.x.241 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 16-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__literal_D212_k105, env)}),
      _var1);
}
static void _V10_Dprint__literal__declaration_D213_k126(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__literal__declaration_D213_k126, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.555 57 0) (bruijn ##.k.665 12 0) (##string ##.string.1424) (bruijn ##.len.245 1 0) (bruijn ##.mangled.243 8 0) (bruijn ##.len.245 1 0) (bruijn ##.escaped.244 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 57-1, 0)), 6,
      VGetArg(upenv, 12-1, 0),
      VEncodePointer(&_V10_Dstring_D1424.sym, VPOINTER_OTHER),
      upenv->vars[0],
      VGetArg(upenv, 8-1, 0),
      upenv->vars[0],
      VGetArg(upenv, 5-1, 0));
}
static void _V10_Dprint__literal__declaration_D213_k125(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__literal__declaration_D213_k125, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.x.555 56 0) (close _V10_Dprint__literal__declaration_D213_k126) (##string ##.string.1425) (bruijn ##.mangled.243 7 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 56-1, 0)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__literal__declaration_D213_k126, env)}),
      VEncodePointer(&_V10_Dstring_D1425.sym, VPOINTER_OTHER),
      VGetArg(upenv, 7-1, 0));
}
static void _V10_Dprint__literal__declaration_D213_k124(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__literal__declaration_D213_k124, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.x.553 57 0) (close _V10_Dprint__literal__declaration_D213_k125) (bruijn ##.x.668 0 0) 1)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 57-1, 0)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__literal__declaration_D213_k125, env)}),
      _var0,
      VEncodeInt(1l));
}
static void _V10_Dprint__literal__declaration_D213_k123(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__literal__declaration_D213_k123, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.x.579 30 0) (close _V10_Dprint__literal__declaration_D213_k124) (bruijn ##.x.669 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 30-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__literal__declaration_D213_k124, env)}),
      _var0);
}
static void _V10_Dprint__literal__declaration_D213_k122(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__literal__declaration_D213_k122, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.x.580 28 0) (close _V10_Dprint__literal__declaration_D213_k123) (bruijn ##.x.670 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 28-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__literal__declaration_D213_k123, env)}),
      _var0);
}
static void _V10_Dprint__literal__declaration_D213_k121(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__literal__declaration_D213_k121, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.x.559 48 0) (close _V10_Dprint__literal__declaration_D213_k122) (bruijn ##.lit.242 7 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 48-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__literal__declaration_D213_k122, env)}),
      VGetArg(upenv, 7-1, 1));
}
static void _V10_Dprint__literal__declaration_D213_k120(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__literal__declaration_D213_k120, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.escape-string.208 7 2) (close _V10_Dprint__literal__declaration_D213_k121) (bruijn ##.x.671 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 7-1, 2)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__literal__declaration_D213_k121, env)}),
      _var0);
}
static void _V10_Dprint__literal__declaration_D213_k119(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__literal__declaration_D213_k119, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.x.580 25 0) (close _V10_Dprint__literal__declaration_D213_k120) (bruijn ##.x.672 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 25-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__literal__declaration_D213_k120, env)}),
      _var0);
}
static void _V10_Dprint__literal__declaration_D213_k118(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__literal__declaration_D213_k118, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.x.559 45 0) (close _V10_Dprint__literal__declaration_D213_k119) (bruijn ##.lit.242 4 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 45-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__literal__declaration_D213_k119, env)}),
      upenv->up->up->up->vars[1]);
}
static void _V10_Dprint__literal__declaration_D213_k117(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__literal__declaration_D213_k117, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.x.575 28 0) (close _V10_Dprint__literal__declaration_D213_k118) (bruijn ##.x.673 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 28-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__literal__declaration_D213_k118, env)}),
      _var0);
}
static void _V10_Dprint__literal__declaration_D213_k135(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__literal__declaration_D213_k135, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.555 56 0) (bruijn ##.k.665 11 0) (##string ##.string.1426) (bruijn ##.len.248 0 0) (bruijn ##.mangled.246 5 0) (bruijn ##.len.248 0 0) (bruijn ##.escaped.247 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 56-1, 0)), 6,
      VGetArg(upenv, 11-1, 0),
      VEncodePointer(&_V10_Dstring_D1426.sym, VPOINTER_OTHER),
      _var0,
      VGetArg(upenv, 5-1, 0),
      _var0,
      upenv->up->up->vars[0]);
}
static void _V10_Dprint__literal__declaration_D213_k134(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__literal__declaration_D213_k134, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.x.553 57 0) (close _V10_Dprint__literal__declaration_D213_k135) (bruijn ##.x.675 0 0) 1)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 57-1, 0)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__literal__declaration_D213_k135, env)}),
      _var0,
      VEncodeInt(1l));
}
static void _V10_Dprint__literal__declaration_D213_k133(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__literal__declaration_D213_k133, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.x.579 30 0) (close _V10_Dprint__literal__declaration_D213_k134) (bruijn ##.x.676 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 30-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__literal__declaration_D213_k134, env)}),
      _var0);
}
static void _V10_Dprint__literal__declaration_D213_k132(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__literal__declaration_D213_k132, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.x.559 49 0) (close _V10_Dprint__literal__declaration_D213_k133) (bruijn ##.lit.242 8 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 49-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__literal__declaration_D213_k133, env)}),
      VGetArg(upenv, 8-1, 1));
}
static void _V10_Dprint__literal__declaration_D213_k131(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__literal__declaration_D213_k131, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.escape-string.208 8 2) (close _V10_Dprint__literal__declaration_D213_k132) (bruijn ##.x.677 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 8-1, 2)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__literal__declaration_D213_k132, env)}),
      _var0);
}
static void _V10_Dprint__literal__declaration_D213_k130(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__literal__declaration_D213_k130, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.x.559 47 0) (close _V10_Dprint__literal__declaration_D213_k131) (bruijn ##.lit.242 6 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 47-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__literal__declaration_D213_k131, env)}),
      VGetArg(upenv, 6-1, 1));
}
static void _V10_Dprint__literal__declaration_D213_k129(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__literal__declaration_D213_k129, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.x.575 30 0) (close _V10_Dprint__literal__declaration_D213_k130) (bruijn ##.x.678 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 30-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__literal__declaration_D213_k130, env)}),
      _var0);
}
static void _V10_Dprint__literal__declaration_D213_k139(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__literal__declaration_D213_k139, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.569 39 0) (bruijn ##.k.684 1 0) (bruijn ##.x.685 0 0) '##intrinsic)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 39-1, 0)), 3,
      upenv->vars[0],
      _var0,
      _V10intrinsic);
}
static void _V10_Dprint__literal__declaration_D213_k138(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__literal__declaration_D213_k138, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.683 1 0) ((bruijn ##.x.577 30 0) (close _V10_Dprint__literal__declaration_D213_k139) (bruijn ##.lit.242 7 1)) ((bruijn ##.k.684 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 30-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__literal__declaration_D213_k139, env)}),
      VGetArg(upenv, 7-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__literal__declaration_D213_k144(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__literal__declaration_D213_k144, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.555 56 0) (bruijn ##.k.665 11 0) (##string ##.string.1427) (bruijn ##.mangled.249 2 0) (bruijn ##.x.681 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 56-1, 0)), 4,
      VGetArg(upenv, 11-1, 0),
      VEncodePointer(&_V10_Dstring_D1427.sym, VPOINTER_OTHER),
      upenv->up->vars[0],
      _var0);
}
static void _V10_Dprint__literal__declaration_D213_k143(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__literal__declaration_D213_k143, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.x.573 37 0) (close _V10_Dprint__literal__declaration_D213_k144) (bruijn ##.lit.242 10 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 37-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__literal__declaration_D213_k144, env)}),
      VGetArg(upenv, 10-1, 1));
}
static void _V10_Dprint__literal__declaration_D213_k142(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__literal__declaration_D213_k142, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.x.555 54 0) (close _V10_Dprint__literal__declaration_D213_k143) (##string ##.string.1428) (bruijn ##.mangled.249 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 54-1, 0)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__literal__declaration_D213_k143, env)}),
      VEncodePointer(&_V10_Dstring_D1428.sym, VPOINTER_OTHER),
      _var0);
}
static void _V10_Dprint__literal__declaration_D213_k141(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__literal__declaration_D213_k141, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.x.575 33 0) (close _V10_Dprint__literal__declaration_D213_k142) (bruijn ##.x.682 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 33-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__literal__declaration_D213_k142, env)}),
      _var0);
}
static void _V10_Dprint__literal__declaration_D213_k140(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__literal__declaration_D213_k140, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.679 0 0) ((bruijn ##.x.576 31 0) (close _V10_Dprint__literal__declaration_D213_k141) (bruijn ##.lit.242 7 1)) ((bruijn ##.x.593 14 0) (bruijn ##.k.665 7 0) (##string ##.string.1429) (bruijn ##.lit.242 7 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 31-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__literal__declaration_D213_k141, env)}),
      VGetArg(upenv, 7-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 14-1, 0)), 3,
      VGetArg(upenv, 7-1, 0),
      VEncodePointer(&_V10_Dstring_D1429.sym, VPOINTER_OTHER),
      VGetArg(upenv, 7-1, 1));
}
}
static void _V10_Dprint__literal__declaration_D213_k137(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__literal__declaration_D213_k137, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dprint__literal__declaration_D213_k138) (close _V10_Dprint__literal__declaration_D213_k140))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__literal__declaration_D213_k138, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__literal__declaration_D213_k140, env)}));
}
static void _V10_Dprint__literal__declaration_D213_k136(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__literal__declaration_D213_k136, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.x.568 37 0) (close _V10_Dprint__literal__declaration_D213_k137) (bruijn ##.x.686 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 37-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__literal__declaration_D213_k137, env)}),
      _var0);
}
static void _V10_Dprint__literal__declaration_D213_k128(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__literal__declaration_D213_k128, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.674 0 0) ((bruijn ##.x.573 31 0) (close _V10_Dprint__literal__declaration_D213_k129) (bruijn ##.lit.242 4 1)) ((bruijn ##.x.559 45 0) (close _V10_Dprint__literal__declaration_D213_k136) (bruijn ##.lit.242 4 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 31-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__literal__declaration_D213_k129, env)}),
      upenv->up->up->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 45-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__literal__declaration_D213_k136, env)}),
      upenv->up->up->up->vars[1]);
}
}
static void _V10_Dprint__literal__declaration_D213_k127(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__literal__declaration_D213_k127, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.x.578 25 0) (close _V10_Dprint__literal__declaration_D213_k128) (bruijn ##.x.687 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 25-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__literal__declaration_D213_k128, env)}),
      _var0);
}
static void _V10_Dprint__literal__declaration_D213_k116(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__literal__declaration_D213_k116, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.666 0 0) ((bruijn ##.x.559 43 0) (close _V10_Dprint__literal__declaration_D213_k117) (bruijn ##.lit.242 2 1)) ((bruijn ##.x.559 43 0) (close _V10_Dprint__literal__declaration_D213_k127) (bruijn ##.lit.242 2 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 43-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__literal__declaration_D213_k117, env)}),
      upenv->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 43-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__literal__declaration_D213_k127, env)}),
      upenv->up->vars[1]);
}
}
static void _V10_Dprint__literal__declaration_D213_k115(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__literal__declaration_D213_k115, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.x.567 34 0) (close _V10_Dprint__literal__declaration_D213_k116) (bruijn ##.x.688 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 34-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__literal__declaration_D213_k116, env)}),
      _var0);
}
static void _V10_Dprint__literal__declaration_D213_lambda12(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__literal__declaration_D213_lambda12, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##.x.559 41 0) (close _V10_Dprint__literal__declaration_D213_k115) (bruijn ##.lit.242 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 41-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__literal__declaration_D213_k115, env)}),
      _var1);
}
static void _V10_Dprint__init_D251_k148(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__init_D251_k148, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.555 51 0) (bruijn ##.k.690 4 0) (##string ##.string.1430) (bruijn ##.mangled.253 0 0) (bruijn ##.mangled.253 0 0) (bruijn ##.mangled.253 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 51-1, 0)), 5,
      upenv->up->up->up->vars[0],
      VEncodePointer(&_V10_Dstring_D1430.sym, VPOINTER_OTHER),
      _var0,
      _var0,
      _var0);
}
static void _V10_Dprint__init_D251_k147(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__init_D251_k147, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.x.575 30 0) (close _V10_Dprint__init_D251_k148) (bruijn ##.x.692 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 30-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__init_D251_k148, env)}),
      _var0);
}
static void _V10_Dprint__init_D251_k152(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__init_D251_k152, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.569 39 0) (bruijn ##.k.696 1 0) (bruijn ##.x.697 0 0) '##intrinsic)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 39-1, 0)), 3,
      upenv->vars[0],
      _var0,
      _V10intrinsic);
}
static void _V10_Dprint__init_D251_k151(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__init_D251_k151, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.695 1 0) ((bruijn ##.x.577 30 0) (close _V10_Dprint__init_D251_k152) (bruijn ##.lit.252 5 1)) ((bruijn ##.k.696 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 30-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__init_D251_k152, env)}),
      VGetArg(upenv, 5-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__init_D251_k155(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__init_D251_k155, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.555 54 0) (bruijn ##.k.690 7 0) (##string ##.string.1431) (bruijn ##.mangled.254 0 0) (bruijn ##.mangled.254 0 0) (bruijn ##.mangled.254 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 54-1, 0)), 5,
      VGetArg(upenv, 7-1, 0),
      VEncodePointer(&_V10_Dstring_D1431.sym, VPOINTER_OTHER),
      _var0,
      _var0,
      _var0);
}
static void _V10_Dprint__init_D251_k154(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__init_D251_k154, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.x.575 33 0) (close _V10_Dprint__init_D251_k155) (bruijn ##.x.694 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 33-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__init_D251_k155, env)}),
      _var0);
}
static void _V10_Dprint__init_D251_k153(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__init_D251_k153, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.693 0 0) ((bruijn ##.x.576 31 0) (close _V10_Dprint__init_D251_k154) (bruijn ##.lit.252 5 1)) ((bruijn ##.k.690 5 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 31-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__init_D251_k154, env)}),
      VGetArg(upenv, 5-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 5-1, 0)), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__init_D251_k150(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__init_D251_k150, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dprint__init_D251_k151) (close _V10_Dprint__init_D251_k153))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__init_D251_k151, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__init_D251_k153, env)}));
}
static void _V10_Dprint__init_D251_k149(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__init_D251_k149, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.x.568 37 0) (close _V10_Dprint__init_D251_k150) (bruijn ##.x.698 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 37-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__init_D251_k150, env)}),
      _var0);
}
static void _V10_Dprint__init_D251_k146(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__init_D251_k146, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.691 0 0) ((bruijn ##.x.559 45 0) (close _V10_Dprint__init_D251_k147) (bruijn ##.lit.252 2 1)) ((bruijn ##.x.559 45 0) (close _V10_Dprint__init_D251_k149) (bruijn ##.lit.252 2 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 45-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__init_D251_k147, env)}),
      upenv->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 45-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__init_D251_k149, env)}),
      upenv->up->vars[1]);
}
}
static void _V10_Dprint__init_D251_k145(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__init_D251_k145, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.x.567 36 0) (close _V10_Dprint__init_D251_k146) (bruijn ##.x.699 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 36-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__init_D251_k146, env)}),
      _var0);
}
static void _V10_Dprint__init_D251_lambda14(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__init_D251_lambda14, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##.x.559 43 0) (close _V10_Dprint__init_D251_k145) (bruijn ##.lit.252 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 43-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__init_D251_k145, env)}),
      _var1);
}
static void _V10_Dprint__dllmain_D214_k158(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__dllmain_D214_k158, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.555 49 0) (bruijn ##.k.689 4 0) (##string ##.string.1432))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 49-1, 0)), 2,
      upenv->up->up->up->vars[0],
      VEncodePointer(&_V10_Dstring_D1432.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__dllmain_D214_k157(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__dllmain_D214_k157, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.x.592 11 0) (close _V10_Dprint__dllmain_D214_k158) (bruijn ##.print-init.251 2 0) (bruijn ##.literals.250 3 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 11-1, 0)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__dllmain_D214_k158, env)}),
      upenv->up->vars[0],
      upenv->up->up->vars[1]);
}
static void _V10_Dprint__dllmain_D214_k156(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__dllmain_D214_k156, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.x.555 47 0) (close _V10_Dprint__dllmain_D214_k157) (##string ##.string.1433) (bruijn ##.x.702 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 47-1, 0)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__dllmain_D214_k157, env)}),
      VEncodePointer(&_V10_Dstring_D1433.sym, VPOINTER_OTHER),
      _var0);
}
static void _V10_Dprint__dllmain_D214_lambda13(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__dllmain_D214_lambda13, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (letrec 1 ((close _V10_Dprint__init_D251_lambda14)) ((bruijn ##.gendllmain.197 4 0) (close _V10_Dprint__dllmain_D214_k156)))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__init_D251_lambda14, env)});
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->up->vars[0]), 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__dllmain_D214_k156, env)}));
    }
}
static void _V10_Dcloses_Q_D215_k162(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D215_k162, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.809 0 0) (bruijn ##.k.805 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      upenv->up->up->vars[0]);
}
static void _V10_Dcloses_Q_D215_lambda17(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D215_lambda17, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.810 0 0) #t)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(true));
}
static void _V10_Dcloses_Q_D215_k161(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D215_k161, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.6.259 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.6.259 0 0))) (##vcore.call-with-values (close _V10_Dcloses_Q_D215_k162) (close _V10_Dcloses_Q_D215_lambda17) (bruijn ##.kk.3.256 3 1)) ((bruijn ##.k.805 2 0) #f)) ((bruijn ##.k.805 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcloses_Q_D215_k162, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcloses_Q_D215_lambda17, env)}),
      upenv->up->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dcloses_Q_D215_k160(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D215_k160, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.806 0 0) ((close _V10_Dcloses_Q_D215_k161) (##inline ##vcore.cdr (bruijn ##.expr.255 3 1))) ((bruijn ##.k.805 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dcloses_Q_D215_k161, .env = env }, }, 1,
      VInlineCdr2(runtime,
        upenv->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dcloses_Q_D215_k159(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D215_k159, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.255 2 1)) ((bruijn ##.x.558 44 0) (close _V10_Dcloses_Q_D215_k160) 'close (##inline ##vcore.car (bruijn ##.expr.255 2 1))) ((bruijn ##.k.805 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->up->vars[1]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 44-1, 0)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcloses_Q_D215_k160, env)}),
      _V0close,
      VInlineCar2(runtime,
        upenv->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dcloses_Q_D215_k166(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D215_k166, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.801 0 0) (bruijn ##.k.799 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      upenv->up->vars[0]);
}
static void _V10_Dcloses_Q_D215_lambda18(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D215_lambda18, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.802 0 0) #f)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
static void _V10_Dcloses_Q_D215_k165(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D215_k165, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.800 0 0) (##vcore.call-with-values (close _V10_Dcloses_Q_D215_k166) (close _V10_Dcloses_Q_D215_lambda18) (bruijn ##.kk.3.256 3 1)) ((bruijn ##.k.799 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcloses_Q_D215_k166, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcloses_Q_D215_lambda18, env)}),
      upenv->up->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dcloses_Q_D215_k164(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D215_k164, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.255 3 1)) ((bruijn ##.x.558 45 0) (close _V10_Dcloses_Q_D215_k165) 'quote (##inline ##vcore.car (bruijn ##.expr.255 3 1))) ((bruijn ##.k.799 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->up->up->vars[1]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 45-1, 0)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcloses_Q_D215_k165, env)}),
      _V0quote,
      VInlineCar2(runtime,
        upenv->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dcloses_Q_D215_k170(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D215_k170, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.795 0 0) (bruijn ##.k.793 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      upenv->up->vars[0]);
}
static void _V10_Dcloses_Q_D215_lambda19(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D215_lambda19, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.796 0 0) #f)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
static void _V10_Dcloses_Q_D215_k169(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D215_k169, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.794 0 0) (##vcore.call-with-values (close _V10_Dcloses_Q_D215_k170) (close _V10_Dcloses_Q_D215_lambda19) (bruijn ##.kk.3.256 4 1)) ((bruijn ##.k.793 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcloses_Q_D215_k170, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcloses_Q_D215_lambda19, env)}),
      upenv->up->up->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dcloses_Q_D215_k168(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D215_k168, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.255 4 1)) ((bruijn ##.x.558 46 0) (close _V10_Dcloses_Q_D215_k169) 'bruijn (##inline ##vcore.car (bruijn ##.expr.255 4 1))) ((bruijn ##.k.793 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->up->up->up->vars[1]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 46-1, 0)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcloses_Q_D215_k169, env)}),
      _V0bruijn,
      VInlineCar2(runtime,
        upenv->up->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dcloses_Q_D215_k174(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D215_k174, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.789 0 0) (bruijn ##.k.787 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      upenv->up->vars[0]);
}
static void _V10_Dcloses_Q_D215_lambda20(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D215_lambda20, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.790 0 0) #f)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
static void _V10_Dcloses_Q_D215_k173(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D215_k173, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.788 0 0) (##vcore.call-with-values (close _V10_Dcloses_Q_D215_k174) (close _V10_Dcloses_Q_D215_lambda20) (bruijn ##.kk.3.256 5 1)) ((bruijn ##.k.787 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcloses_Q_D215_k174, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcloses_Q_D215_lambda20, env)}),
      VGetArg(upenv, 5-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dcloses_Q_D215_k172(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D215_k172, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.255 5 1)) ((bruijn ##.x.558 47 0) (close _V10_Dcloses_Q_D215_k173) '##string (##inline ##vcore.car (bruijn ##.expr.255 5 1))) ((bruijn ##.k.787 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(upenv, 5-1, 1)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 47-1, 0)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcloses_Q_D215_k173, env)}),
      _V10string,
      VInlineCar2(runtime,
        VGetArg(upenv, 5-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dcloses_Q_D215_k178(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D215_k178, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.783 0 0) (bruijn ##.k.781 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      upenv->up->vars[0]);
}
static void _V10_Dcloses_Q_D215_lambda21(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D215_lambda21, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.784 0 0) #f)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
static void _V10_Dcloses_Q_D215_k177(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D215_k177, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.782 0 0) (##vcore.call-with-values (close _V10_Dcloses_Q_D215_k178) (close _V10_Dcloses_Q_D215_lambda21) (bruijn ##.kk.3.256 6 1)) ((bruijn ##.k.781 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcloses_Q_D215_k178, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcloses_Q_D215_lambda21, env)}),
      VGetArg(upenv, 6-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dcloses_Q_D215_k176(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D215_k176, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.255 6 1)) ((bruijn ##.x.558 48 0) (close _V10_Dcloses_Q_D215_k177) '##intrinsic (##inline ##vcore.car (bruijn ##.expr.255 6 1))) ((bruijn ##.k.781 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(upenv, 6-1, 1)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 48-1, 0)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcloses_Q_D215_k177, env)}),
      _V10intrinsic,
      VInlineCar2(runtime,
        VGetArg(upenv, 6-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dcloses_Q_D215_k185(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D215_k185, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.774 0 0) (bruijn ##.k.768 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(upenv, 5-1, 0));
}
static void _V10_Dcloses_Q_D215_k187(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D215_k187, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.777 0 0) ((bruijn ##.k.775 2 0) (bruijn ##.p.777 0 0)) ((bruijn ##.closes?.215 15 9) (bruijn ##.k.775 2 0) (##inline ##vcore.car (bruijn ##.expr.14.270 3 0))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->vars[0]), 1,
      _var0);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 15-1, 9)), 2,
      upenv->up->vars[0],
      VInlineCar2(runtime,
        upenv->up->up->vars[0]));
}
}
static void _V10_Dcloses_Q_D215_k186(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D215_k186, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.776 0 0) ((bruijn ##.k.775 1 0) (bruijn ##.p.776 0 0)) ((bruijn ##.closes?.215 14 9) (close _V10_Dcloses_Q_D215_k187) (##inline ##vcore.car (bruijn ##.expr.13.268 3 0))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 1,
      _var0);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 14-1, 9)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcloses_Q_D215_k187, env)}),
      VInlineCar2(runtime,
        upenv->up->up->vars[0]));
}
}
static void _V10_Dcloses_Q_D215_lambda22(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D215_lambda22, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.closes?.215 13 9) (close _V10_Dcloses_Q_D215_k186) (##inline ##vcore.car (bruijn ##.expr.12.266 3 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 13-1, 9)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcloses_Q_D215_k186, env)}),
      VInlineCar2(runtime,
        upenv->up->up->vars[0]));
}
static void _V10_Dcloses_Q_D215_k184(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D215_k184, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.14.270 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.14.270 0 0))) (##vcore.call-with-values (close _V10_Dcloses_Q_D215_k185) (close _V10_Dcloses_Q_D215_lambda22) (bruijn ##.kk.3.256 10 1)) ((bruijn ##.k.768 4 0) #f)) ((bruijn ##.k.768 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcloses_Q_D215_k185, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcloses_Q_D215_lambda22, env)}),
      VGetArg(upenv, 10-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dcloses_Q_D215_k183(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D215_k183, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.13.268 0 0)) ((close _V10_Dcloses_Q_D215_k184) (##inline ##vcore.cdr (bruijn ##.expr.13.268 0 0))) ((bruijn ##.k.768 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dcloses_Q_D215_k184, .env = env }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dcloses_Q_D215_k182(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D215_k182, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.12.266 0 0)) ((close _V10_Dcloses_Q_D215_k183) (##inline ##vcore.cdr (bruijn ##.expr.12.266 0 0))) ((bruijn ##.k.768 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dcloses_Q_D215_k183, .env = env }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dcloses_Q_D215_k181(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D215_k181, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.769 0 0) ((close _V10_Dcloses_Q_D215_k182) (##inline ##vcore.cdr (bruijn ##.expr.255 8 1))) ((bruijn ##.k.768 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dcloses_Q_D215_k182, .env = env }, }, 1,
      VInlineCdr2(runtime,
        VGetArg(upenv, 8-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dcloses_Q_D215_k180(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D215_k180, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.255 7 1)) ((bruijn ##.x.558 49 0) (close _V10_Dcloses_Q_D215_k181) 'if (##inline ##vcore.car (bruijn ##.expr.255 7 1))) ((bruijn ##.k.768 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(upenv, 7-1, 1)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 49-1, 0)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcloses_Q_D215_k181, env)}),
      _V0if,
      VInlineCar2(runtime,
        VGetArg(upenv, 7-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dcloses_Q_D215_k194(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D215_k194, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.763 0 0) (bruijn ##.k.757 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(upenv, 5-1, 0));
}
static void _V10_Dcloses_Q_D215_lambda23(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D215_lambda23, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.764 0 0) #t)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(true));
}
static void _V10_Dcloses_Q_D215_k193(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D215_k193, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.18.277 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.18.277 0 0))) (##vcore.call-with-values (close _V10_Dcloses_Q_D215_k194) (close _V10_Dcloses_Q_D215_lambda23) (bruijn ##.kk.3.256 11 1)) ((bruijn ##.k.757 4 0) #f)) ((bruijn ##.k.757 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcloses_Q_D215_k194, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcloses_Q_D215_lambda23, env)}),
      VGetArg(upenv, 11-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dcloses_Q_D215_k192(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D215_k192, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.17.275 0 0)) ((close _V10_Dcloses_Q_D215_k193) (##inline ##vcore.cdr (bruijn ##.expr.17.275 0 0))) ((bruijn ##.k.757 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dcloses_Q_D215_k193, .env = env }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dcloses_Q_D215_k191(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D215_k191, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.16.273 0 0)) ((close _V10_Dcloses_Q_D215_k192) (##inline ##vcore.cdr (bruijn ##.expr.16.273 0 0))) ((bruijn ##.k.757 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dcloses_Q_D215_k192, .env = env }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dcloses_Q_D215_k190(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D215_k190, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.758 0 0) ((close _V10_Dcloses_Q_D215_k191) (##inline ##vcore.cdr (bruijn ##.expr.255 9 1))) ((bruijn ##.k.757 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dcloses_Q_D215_k191, .env = env }, }, 1,
      VInlineCdr2(runtime,
        VGetArg(upenv, 9-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dcloses_Q_D215_k189(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D215_k189, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.255 8 1)) ((bruijn ##.x.558 50 0) (close _V10_Dcloses_Q_D215_k190) 'set! (##inline ##vcore.car (bruijn ##.expr.255 8 1))) ((bruijn ##.k.757 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(upenv, 8-1, 1)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 50-1, 0)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcloses_Q_D215_k190, env)}),
      _V0set_B,
      VInlineCar2(runtime,
        VGetArg(upenv, 8-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dcloses_Q_D215_k201(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D215_k201, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.752 0 0) (bruijn ##.k.746 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(upenv, 5-1, 0));
}
static void _V10_Dcloses_Q_D215_lambda24(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D215_lambda24, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.753 0 0) #t)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(true));
}
static void _V10_Dcloses_Q_D215_k200(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D215_k200, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.22.284 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.22.284 0 0))) (##vcore.call-with-values (close _V10_Dcloses_Q_D215_k201) (close _V10_Dcloses_Q_D215_lambda24) (bruijn ##.kk.3.256 12 1)) ((bruijn ##.k.746 4 0) #f)) ((bruijn ##.k.746 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcloses_Q_D215_k201, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcloses_Q_D215_lambda24, env)}),
      VGetArg(upenv, 12-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dcloses_Q_D215_k199(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D215_k199, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.21.282 0 0)) ((close _V10_Dcloses_Q_D215_k200) (##inline ##vcore.cdr (bruijn ##.expr.21.282 0 0))) ((bruijn ##.k.746 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dcloses_Q_D215_k200, .env = env }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dcloses_Q_D215_k198(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D215_k198, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.20.280 0 0)) ((close _V10_Dcloses_Q_D215_k199) (##inline ##vcore.cdr (bruijn ##.expr.20.280 0 0))) ((bruijn ##.k.746 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dcloses_Q_D215_k199, .env = env }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dcloses_Q_D215_k197(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D215_k197, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.747 0 0) ((close _V10_Dcloses_Q_D215_k198) (##inline ##vcore.cdr (bruijn ##.expr.255 10 1))) ((bruijn ##.k.746 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dcloses_Q_D215_k198, .env = env }, }, 1,
      VInlineCdr2(runtime,
        VGetArg(upenv, 10-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dcloses_Q_D215_k196(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D215_k196, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.255 9 1)) ((bruijn ##.x.558 51 0) (close _V10_Dcloses_Q_D215_k197) 'define (##inline ##vcore.car (bruijn ##.expr.255 9 1))) ((bruijn ##.k.746 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(upenv, 9-1, 1)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 51-1, 0)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcloses_Q_D215_k197, env)}),
      _V0define,
      VInlineCar2(runtime,
        VGetArg(upenv, 9-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dcloses_Q_D215_k206(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D215_k206, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.742 0 0) (bruijn ##.k.739 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      upenv->up->up->vars[0]);
}
static void _V10_Dcloses_Q_D215_lambda25(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D215_lambda25, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.closes?.215 14 9) (bruijn ##.k.743 0 0) (##inline ##vcore.cdr (bruijn ##.expr.24.287 1 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 14-1, 9)), 2,
      _var0,
      VInlineCdr2(runtime,
        upenv->vars[0]));
}
static void _V10_Dcloses_Q_D215_k205(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D215_k205, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.24.287 0 0)) (##vcore.call-with-values (close _V10_Dcloses_Q_D215_k206) (close _V10_Dcloses_Q_D215_lambda25) (bruijn ##.kk.3.256 11 1)) ((bruijn ##.k.739 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcloses_Q_D215_k206, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcloses_Q_D215_lambda25, env)}),
      VGetArg(upenv, 11-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dcloses_Q_D215_k204(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D215_k204, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.740 0 0) ((close _V10_Dcloses_Q_D215_k205) (##inline ##vcore.cdr (bruijn ##.expr.255 11 1))) ((bruijn ##.k.739 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dcloses_Q_D215_k205, .env = env }, }, 1,
      VInlineCdr2(runtime,
        VGetArg(upenv, 11-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dcloses_Q_D215_k203(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D215_k203, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.255 10 1)) ((bruijn ##.x.558 52 0) (close _V10_Dcloses_Q_D215_k204) '##inline (##inline ##vcore.car (bruijn ##.expr.255 10 1))) ((bruijn ##.k.739 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(upenv, 10-1, 1)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 52-1, 0)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcloses_Q_D215_k204, env)}),
      _V10inline,
      VInlineCar2(runtime,
        VGetArg(upenv, 10-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dcloses_Q_D215_k210(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D215_k210, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.735 0 0) (bruijn ##.k.733 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      upenv->up->vars[0]);
}
static void _V10_Dcloses_Q_D215_lambda26(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D215_lambda26, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.736 0 0) #t)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(true));
}
static void _V10_Dcloses_Q_D215_k209(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D215_k209, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.734 0 0) (##vcore.call-with-values (close _V10_Dcloses_Q_D215_k210) (close _V10_Dcloses_Q_D215_lambda26) (bruijn ##.kk.3.256 11 1)) ((bruijn ##.k.733 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcloses_Q_D215_k210, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcloses_Q_D215_lambda26, env)}),
      VGetArg(upenv, 11-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dcloses_Q_D215_k208(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D215_k208, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.255 11 1)) ((bruijn ##.x.558 53 0) (close _V10_Dcloses_Q_D215_k209) 'letrec (##inline ##vcore.car (bruijn ##.expr.255 11 1))) ((bruijn ##.k.733 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(upenv, 11-1, 1)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 53-1, 0)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcloses_Q_D215_k209, env)}),
      _V0letrec,
      VInlineCar2(runtime,
        VGetArg(upenv, 11-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dcloses_Q_D215_k213(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D215_k213, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.729 0 0) (bruijn ##.k.727 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      upenv->vars[0]);
}
static void _V10_Dcloses_Q_D215_lambda27(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D215_lambda27, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.closes?.215 14 9) (bruijn ##.k.730 0 0) (##inline ##vcore.car (bruijn ##.expr.255 13 1)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 14-1, 9)), 2,
      _var0,
      VInlineCar2(runtime,
        VGetArg(upenv, 13-1, 1)));
}
static void _V10_Dcloses_Q_D215_k212(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D215_k212, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.255 12 1)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.255 12 1))) (##vcore.call-with-values (close _V10_Dcloses_Q_D215_k213) (close _V10_Dcloses_Q_D215_lambda27) (bruijn ##.kk.3.256 11 1)) ((bruijn ##.k.727 0 0) #f)) ((bruijn ##.k.727 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(upenv, 12-1, 1)))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        VGetArg(upenv, 12-1, 1))))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcloses_Q_D215_k213, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcloses_Q_D215_lambda27, env)}),
      VGetArg(upenv, 11-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dcloses_Q_D215_k216(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D215_k216, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.723 0 0) (bruijn ##.k.722 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      upenv->vars[0]);
}
static void _V10_Dcloses_Q_D215_k217(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D215_k217, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.725 0 0) ((bruijn ##.k.724 1 0) (bruijn ##.p.725 0 0)) ((bruijn ##.closes?.215 16 9) (bruijn ##.k.724 1 0) (##inline ##vcore.cdr (bruijn ##.expr.255 15 1))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 1,
      _var0);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 16-1, 9)), 2,
      upenv->vars[0],
      VInlineCdr2(runtime,
        VGetArg(upenv, 15-1, 1)));
}
}
static void _V10_Dcloses_Q_D215_lambda28(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D215_lambda28, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.closes?.215 15 9) (close _V10_Dcloses_Q_D215_k217) (##inline ##vcore.car (bruijn ##.expr.255 14 1)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 15-1, 9)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcloses_Q_D215_k217, env)}),
      VInlineCar2(runtime,
        VGetArg(upenv, 14-1, 1)));
}
static void _V10_Dcloses_Q_D215_k215(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D215_k215, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.255 13 1)) (##vcore.call-with-values (close _V10_Dcloses_Q_D215_k216) (close _V10_Dcloses_Q_D215_lambda28) (bruijn ##.kk.3.256 12 1)) ((bruijn ##.k.722 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(upenv, 13-1, 1)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcloses_Q_D215_k216, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcloses_Q_D215_lambda28, env)}),
      VGetArg(upenv, 12-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dcloses_Q_D215_lambda29(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D215_lambda29, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.593 23 0) (bruijn ##.k.718 0 0) (##string ##.string.1434) (bruijn ##.expr.255 16 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 23-1, 0)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1434.sym, VPOINTER_OTHER),
      VGetArg(upenv, 16-1, 1));
}
static void _V10_Dcloses_Q_D215_k220(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D215_k220, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.k.704 14 0) (close _V10_Dcloses_Q_D215_lambda29) (bruijn ##.kk.3.256 14 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      VGetArg(upenv, 14-1, 0),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcloses_Q_D215_lambda29, env)}),
      VGetArg(upenv, 14-1, 1));
}
static void _V10_Dcloses_Q_D215_k219(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D215_k219, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.x.719 0 0) (close _V10_Dcloses_Q_D215_k220))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcloses_Q_D215_k220, env)}));
}
static void _V10_Dcloses_Q_D215_lambda30(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D215_lambda30, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.720 0 0) #f)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
static void _V10_Dcloses_Q_D215_k218(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D215_k218, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.call-with-values (close _V10_Dcloses_Q_D215_k219) (close _V10_Dcloses_Q_D215_lambda30) (bruijn ##.kk.3.256 12 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcloses_Q_D215_k219, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcloses_Q_D215_lambda30, env)}),
      VGetArg(upenv, 12-1, 1));
}
static void _V10_Dcloses_Q_D215_k214(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D215_k214, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dcloses_Q_D215_k215) (close _V10_Dcloses_Q_D215_k218))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dcloses_Q_D215_k215, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcloses_Q_D215_k218, env)}));
}
static void _V10_Dcloses_Q_D215_k211(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D215_k211, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dcloses_Q_D215_k212) (close _V10_Dcloses_Q_D215_k214))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dcloses_Q_D215_k212, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcloses_Q_D215_k214, env)}));
}
static void _V10_Dcloses_Q_D215_k207(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D215_k207, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dcloses_Q_D215_k208) (close _V10_Dcloses_Q_D215_k211))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dcloses_Q_D215_k208, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcloses_Q_D215_k211, env)}));
}
static void _V10_Dcloses_Q_D215_k202(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D215_k202, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dcloses_Q_D215_k203) (close _V10_Dcloses_Q_D215_k207))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dcloses_Q_D215_k203, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcloses_Q_D215_k207, env)}));
}
static void _V10_Dcloses_Q_D215_k195(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D215_k195, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dcloses_Q_D215_k196) (close _V10_Dcloses_Q_D215_k202))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dcloses_Q_D215_k196, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcloses_Q_D215_k202, env)}));
}
static void _V10_Dcloses_Q_D215_k188(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D215_k188, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dcloses_Q_D215_k189) (close _V10_Dcloses_Q_D215_k195))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dcloses_Q_D215_k189, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcloses_Q_D215_k195, env)}));
}
static void _V10_Dcloses_Q_D215_k179(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D215_k179, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dcloses_Q_D215_k180) (close _V10_Dcloses_Q_D215_k188))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dcloses_Q_D215_k180, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcloses_Q_D215_k188, env)}));
}
static void _V10_Dcloses_Q_D215_k175(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D215_k175, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dcloses_Q_D215_k176) (close _V10_Dcloses_Q_D215_k179))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dcloses_Q_D215_k176, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcloses_Q_D215_k179, env)}));
}
static void _V10_Dcloses_Q_D215_k171(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D215_k171, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dcloses_Q_D215_k172) (close _V10_Dcloses_Q_D215_k175))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dcloses_Q_D215_k172, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcloses_Q_D215_k175, env)}));
}
static void _V10_Dcloses_Q_D215_k167(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D215_k167, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dcloses_Q_D215_k168) (close _V10_Dcloses_Q_D215_k171))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dcloses_Q_D215_k168, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcloses_Q_D215_k171, env)}));
}
static void _V10_Dcloses_Q_D215_k163(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D215_k163, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dcloses_Q_D215_k164) (close _V10_Dcloses_Q_D215_k167))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dcloses_Q_D215_k164, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcloses_Q_D215_k167, env)}));
}
static void _V10_Dcloses_Q_D215_lambda16(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D215_lambda16, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V10_Dcloses_Q_D215_k159) (close _V10_Dcloses_Q_D215_k163))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dcloses_Q_D215_k159, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcloses_Q_D215_k163, env)}));
}
static void _V10_Dcloses_Q_D215_lambda15(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcloses_Q_D215_lambda15, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (##vcore.call/cc (bruijn ##.k.703 0 0) (close _V10_Dcloses_Q_D215_lambda16))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcloses_Q_D215_lambda16, env)}));
}
static void _V10_Dprint__builtin__apply_D299_k224(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__builtin__apply_D299_k224, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.555 51 0) (bruijn ##.k.814 4 0) (##string ##.string.1435))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 51-1, 0)), 2,
      upenv->up->up->up->vars[0],
      VEncodePointer(&_V10_Dstring_D1435.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__builtin__apply_D299_k225(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__builtin__apply_D299_k225, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.print-expr.216 8 10) (bruijn ##.k.817 1 0) (bruijn ##.x.308 1 1) (bruijn ##.args.298 7 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 8-1, 10)), 3,
      upenv->vars[0],
      upenv->vars[1],
      VGetArg(upenv, 7-1, 2));
}
static void _V10_Dprint__builtin__apply_D299_lambda33(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__builtin__apply_D299_lambda33, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##.x.555 51 0) (close _V10_Dprint__builtin__apply_D299_k225) (##string ##.string.1436))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 51-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__builtin__apply_D299_k225, env)}),
      VEncodePointer(&_V10_Dstring_D1436.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__builtin__apply_D299_k223(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__builtin__apply_D299_k223, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.x.592 13 0) (close _V10_Dprint__builtin__apply_D299_k224) (close _V10_Dprint__builtin__apply_D299_lambda33) (bruijn ##.xs.306 3 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 13-1, 0)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__builtin__apply_D299_k224, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__builtin__apply_D299_lambda33, env)}),
      upenv->up->up->vars[2]);
}
static void _V10_Dprint__builtin__apply_D299_k222(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__builtin__apply_D299_k222, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.x.555 49 0) (close _V10_Dprint__builtin__apply_D299_k223) (##string ##.string.1437) (bruijn ##.x.819 1 0) (bruijn ##.x.820 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 49-1, 0)), 4,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__builtin__apply_D299_k223, env)}),
      VEncodePointer(&_V10_Dstring_D1437.sym, VPOINTER_OTHER),
      upenv->vars[0],
      _var0);
}
static void _V10_Dprint__builtin__apply_D299_k221(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__builtin__apply_D299_k221, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.x.556 47 0) (close _V10_Dprint__builtin__apply_D299_k222) (bruijn ##.xs.306 1 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 47-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__builtin__apply_D299_k222, env)}),
      upenv->vars[2]);
}
static void _V10_Dprint__builtin__apply_D299_lambda32(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__builtin__apply_D299_lambda32, got ~D~N"
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
  // ((bruijn ##.x.571 31 0) (close _V10_Dprint__builtin__apply_D299_k221) (bruijn ##.f.305 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 31-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__builtin__apply_D299_k221, env)}),
      _var1);
}
static void _V10_Dprint__closure__apply_D300_k227(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__closure__apply_D300_k227, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.555 49 0) (bruijn ##.k.821 2 0) (##string ##.string.1435))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 49-1, 0)), 2,
      upenv->up->vars[0],
      VEncodePointer(&_V10_Dstring_D1435.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__closure__apply_D300_k228(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__closure__apply_D300_k228, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.print-expr.216 6 10) (bruijn ##.k.824 1 0) (bruijn ##.x.317 1 1) (bruijn ##.args.298 5 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 6-1, 10)), 3,
      upenv->vars[0],
      upenv->vars[1],
      VGetArg(upenv, 5-1, 2));
}
static void _V10_Dprint__closure__apply_D300_lambda35(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__closure__apply_D300_lambda35, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##.x.555 49 0) (close _V10_Dprint__closure__apply_D300_k228) (##string ##.string.1436))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 49-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__closure__apply_D300_k228, env)}),
      VEncodePointer(&_V10_Dstring_D1436.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__closure__apply_D300_k226(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__closure__apply_D300_k226, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.x.592 11 0) (close _V10_Dprint__closure__apply_D300_k227) (close _V10_Dprint__closure__apply_D300_lambda35) (bruijn ##.xs.310 1 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 11-1, 0)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__closure__apply_D300_k227, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__closure__apply_D300_lambda35, env)}),
      upenv->vars[2]);
}
static void _V10_Dprint__closure__apply_D300_k232(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__closure__apply_D300_k232, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.837 0 0) (bruijn ##.k.833 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      upenv->up->up->vars[0]);
}
static void _V10_Dprint__closure__apply_D300_k233(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__closure__apply_D300_k233, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.555 53 0) (bruijn ##.k.838 1 0) (##string ##.string.1438) (##inline ##vcore.car (bruijn ##.expr.77.315 2 0)) (bruijn ##.x.839 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 53-1, 0)), 4,
      upenv->vars[0],
      VEncodePointer(&_V10_Dstring_D1438.sym, VPOINTER_OTHER),
      VInlineCar2(runtime,
        upenv->up->vars[0]),
      _var0);
}
static void _V10_Dprint__closure__apply_D300_lambda37(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__closure__apply_D300_lambda37, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.x.556 51 0) (close _V10_Dprint__closure__apply_D300_k233) (bruijn ##.xs.310 5 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 51-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__closure__apply_D300_k233, env)}),
      VGetArg(upenv, 5-1, 2));
}
static void _V10_Dprint__closure__apply_D300_k231(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__closure__apply_D300_k231, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.77.315 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.77.315 0 0))) (##vcore.call-with-values (close _V10_Dprint__closure__apply_D300_k232) (close _V10_Dprint__closure__apply_D300_lambda37) (bruijn ##.kk.74.312 3 1)) ((bruijn ##.k.833 2 0) #f)) ((bruijn ##.k.833 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__closure__apply_D300_k232, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__closure__apply_D300_lambda37, env)}),
      upenv->up->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__closure__apply_D300_k230(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__closure__apply_D300_k230, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.834 0 0) ((close _V10_Dprint__closure__apply_D300_k231) (##inline ##vcore.cdr (bruijn ##.f.309 3 1))) ((bruijn ##.k.833 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__closure__apply_D300_k231, .env = env }, }, 1,
      VInlineCdr2(runtime,
        upenv->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__closure__apply_D300_k229(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__closure__apply_D300_k229, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.f.309 2 1)) ((bruijn ##.x.558 46 0) (close _V10_Dprint__closure__apply_D300_k230) 'close (##inline ##vcore.car (bruijn ##.f.309 2 1))) ((bruijn ##.k.833 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->up->vars[1]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 46-1, 0)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__closure__apply_D300_k230, env)}),
      _V0close,
      VInlineCar2(runtime,
        upenv->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__closure__apply_D300_k237(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__closure__apply_D300_k237, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.555 53 0) (bruijn ##.k.828 3 0) (##string ##.string.1439) (bruijn ##.x.831 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 53-1, 0)), 3,
      upenv->up->up->vars[0],
      VEncodePointer(&_V10_Dstring_D1439.sym, VPOINTER_OTHER),
      _var0);
}
static void _V10_Dprint__closure__apply_D300_k236(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__closure__apply_D300_k236, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.x.556 51 0) (close _V10_Dprint__closure__apply_D300_k237) (bruijn ##.xs.310 5 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 51-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__closure__apply_D300_k237, env)}),
      VGetArg(upenv, 5-1, 2));
}
static void _V10_Dprint__closure__apply_D300_k235(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__closure__apply_D300_k235, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.print-expr.216 7 10) (close _V10_Dprint__closure__apply_D300_k236) (bruijn ##.f.309 4 1) (bruijn ##.args.298 6 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 7-1, 10)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__closure__apply_D300_k236, env)}),
      upenv->up->up->up->vars[1],
      VGetArg(upenv, 6-1, 2));
}
static void _V10_Dprint__closure__apply_D300_lambda38(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__closure__apply_D300_lambda38, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.x.572 33 0) (close _V10_Dprint__closure__apply_D300_k235) (##string ##.string.1440))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 33-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__closure__apply_D300_k235, env)}),
      VEncodePointer(&_V10_Dstring_D1440.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__closure__apply_D300_k234(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__closure__apply_D300_k234, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.k.826 1 0) (close _V10_Dprint__closure__apply_D300_lambda38) (bruijn ##.kk.74.312 1 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      upenv->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__closure__apply_D300_lambda38, env)}),
      upenv->vars[1]);
}
static void _V10_Dprint__closure__apply_D300_lambda36(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__closure__apply_D300_lambda36, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V10_Dprint__closure__apply_D300_k229) (close _V10_Dprint__closure__apply_D300_k234))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__closure__apply_D300_k229, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__closure__apply_D300_k234, env)}));
}
static void _V10_Dprint__closure__apply_D300_lambda34(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__closure__apply_D300_lambda34, got ~D~N"
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
  // (##vcore.call/cc (close _V10_Dprint__closure__apply_D300_k226) (close _V10_Dprint__closure__apply_D300_lambda36))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__closure__apply_D300_k226, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__closure__apply_D300_lambda36, env)}));
}
static void _V10_Dprint__letrec_D301_k248(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__letrec_D301_k248, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.590 23 0) (bruijn ##.k.842 11 0) (##string ##.string.1441))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 23-1, 0)), 2,
      VGetArg(upenv, 11-1, 0),
      VEncodePointer(&_V10_Dstring_D1441.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__letrec_D301_k247(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__letrec_D301_k247, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.print-expr.216 13 10) (close _V10_Dprint__letrec_D301_k248) (bruijn ##.body.320 10 3) (bruijn ##.args.322 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 13-1, 10)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__letrec_D301_k248, env)}),
      VGetArg(upenv, 10-1, 3),
      upenv->up->vars[0]);
}
static void _V10_Dprint__letrec_D301_k250(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__letrec_D301_k250, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.590 24 0) (bruijn ##.k.851 2 0) (##string ##.string.1442))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 24-1, 0)), 2,
      upenv->up->vars[0],
      VEncodePointer(&_V10_Dstring_D1442.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__letrec_D301_k249(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__letrec_D301_k249, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.print-expr.216 14 10) (close _V10_Dprint__letrec_D301_k250) (bruijn ##.x.323 1 1) (bruijn ##.args.322 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 14-1, 10)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__letrec_D301_k250, env)}),
      upenv->vars[1],
      upenv->up->up->vars[0]);
}
static void _V10_Dprint__letrec_D301_lambda40(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__letrec_D301_lambda40, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn ##.x.555 57 0) (close _V10_Dprint__letrec_D301_k249) (##string ##.string.1443) (bruijn ##.i.324 0 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 57-1, 0)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__letrec_D301_k249, env)}),
      VEncodePointer(&_V10_Dstring_D1443.sym, VPOINTER_OTHER),
      _var2);
}
static void _V10_Dprint__letrec_D301_k246(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__letrec_D301_k246, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.x.592 19 0) (close _V10_Dprint__letrec_D301_k247) (close _V10_Dprint__letrec_D301_lambda40) (bruijn ##.xs.319 9 2) (bruijn ##.x.854 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 19-1, 0)), 4,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__letrec_D301_k247, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__letrec_D301_lambda40, env)}),
      VGetArg(upenv, 9-1, 2),
      _var0);
}
static void _V10_Dprint__letrec_D301_k245(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__letrec_D301_k245, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.x.557 53 0) (close _V10_Dprint__letrec_D301_k246) (bruijn ##.n.318 8 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 53-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__letrec_D301_k246, env)}),
      VGetArg(upenv, 8-1, 1));
}
static void _V10_Dprint__letrec_D301_lambda41(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__letrec_D301_lambda41, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.x.554 56 0) (bruijn ##.k.855 0 0) (##string ##.string.1444) (bruijn ##.i.325 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 56-1, 0)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1444.sym, VPOINTER_OTHER),
      _var1);
}
static void _V10_Dprint__letrec_D301_k244(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__letrec_D301_k244, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.x.561 48 0) (close _V10_Dprint__letrec_D301_k245) (close _V10_Dprint__letrec_D301_lambda41) (bruijn ##.x.856 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 48-1, 0)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__letrec_D301_k245, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__letrec_D301_lambda41, env)}),
      _var0);
}
static void _V10_Dprint__letrec_D301_k243(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__letrec_D301_k243, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.x.557 51 0) (close _V10_Dprint__letrec_D301_k244) (bruijn ##.n.318 6 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 51-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__letrec_D301_k244, env)}),
      VGetArg(upenv, 6-1, 1));
}
static void _V10_Dprint__letrec_D301_k242(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__letrec_D301_k242, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.x.555 52 0) (close _V10_Dprint__letrec_D301_k243) (##string ##.string.1445) (bruijn ##.n.318 5 1) (bruijn ##.n.318 5 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 52-1, 0)), 4,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__letrec_D301_k243, env)}),
      VEncodePointer(&_V10_Dstring_D1445.sym, VPOINTER_OTHER),
      VGetArg(upenv, 5-1, 1),
      VGetArg(upenv, 5-1, 1));
}
static void _V10_Dprint__letrec_D301_k241(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__letrec_D301_k241, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.x.555 51 0) (close _V10_Dprint__letrec_D301_k242) (##string ##.string.1446))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 51-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__letrec_D301_k242, env)}),
      VEncodePointer(&_V10_Dstring_D1446.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__letrec_D301_k240(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__letrec_D301_k240, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.x.555 50 0) (close _V10_Dprint__letrec_D301_k241) (##string ##.string.1447) (bruijn ##.n.318 3 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 50-1, 0)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__letrec_D301_k241, env)}),
      VEncodePointer(&_V10_Dstring_D1447.sym, VPOINTER_OTHER),
      upenv->up->up->vars[1]);
}
static void _V10_Dprint__letrec_D301_k239(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__letrec_D301_k239, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.x.590 14 0) (close _V10_Dprint__letrec_D301_k240) (##string ##.string.1448))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 14-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__letrec_D301_k240, env)}),
      VEncodePointer(&_V10_Dstring_D1448.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__letrec_D301_k238(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__letrec_D301_k238, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.x.590 13 0) (close _V10_Dprint__letrec_D301_k239) (##string ##.string.1449))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 13-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__letrec_D301_k239, env)}),
      VEncodePointer(&_V10_Dstring_D1449.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__letrec_D301_lambda39(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4) {
 if(argc != 5) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__letrec_D301_lambda39, got ~D~N"
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
  // ((bruijn ##.x.555 47 0) (close _V10_Dprint__letrec_D301_k238) (##string ##.string.1450))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 47-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__letrec_D301_k238, env)}),
      VEncodePointer(&_V10_Dstring_D1450.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__define__global_D302_k256(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__define__global_D302_k256, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.555 53 0) (bruijn ##.k.857 6 0) (##string ##.string.1451))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 53-1, 0)), 2,
      VGetArg(upenv, 6-1, 0),
      VEncodePointer(&_V10_Dstring_D1451.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__define__global_D302_k255(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__define__global_D302_k255, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.print-expr.216 8 10) (close _V10_Dprint__define__global_D302_k256) (bruijn ##.x.328 5 3) (bruijn ##.args.298 7 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 8-1, 10)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__define__global_D302_k256, env)}),
      VGetArg(upenv, 5-1, 3),
      VGetArg(upenv, 7-1, 2));
}
static void _V10_Dprint__define__global_D302_k254(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__define__global_D302_k254, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.x.555 51 0) (close _V10_Dprint__define__global_D302_k255) (##string ##.string.1436))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 51-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__define__global_D302_k255, env)}),
      VEncodePointer(&_V10_Dstring_D1436.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__define__global_D302_k253(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__define__global_D302_k253, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.print-literal.212 6 6) (close _V10_Dprint__define__global_D302_k254) (bruijn ##.y.327 3 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 6-1, 6)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__define__global_D302_k254, env)}),
      upenv->up->up->vars[2]);
}
static void _V10_Dprint__define__global_D302_k252(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__define__global_D302_k252, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.x.555 49 0) (close _V10_Dprint__define__global_D302_k253) (##string ##.string.1436))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 49-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__define__global_D302_k253, env)}),
      VEncodePointer(&_V10_Dstring_D1436.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__define__global_D302_k251(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__define__global_D302_k251, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.print-expr.216 4 10) (close _V10_Dprint__define__global_D302_k252) (bruijn ##.k.326 1 1) (bruijn ##.args.298 3 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->up->vars[10]), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__define__global_D302_k252, env)}),
      upenv->vars[1],
      upenv->up->up->vars[2]);
}
static void _V10_Dprint__define__global_D302_lambda42(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4) {
 if(argc != 5) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__define__global_D302_lambda42, got ~D~N"
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
  // ((bruijn ##.x.555 47 0) (close _V10_Dprint__define__global_D302_k251) (##string ##.string.1452))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 47-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__define__global_D302_k251, env)}),
      VEncodePointer(&_V10_Dstring_D1452.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__set_D303_k262(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__set_D303_k262, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.885 0 0) (bruijn ##.k.879 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(upenv, 5-1, 0));
}
static void _V10_Dprint__set_D303_k266(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__set_D303_k266, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.555 58 0) (bruijn ##.k.886 4 0) (##string ##.string.1451))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 58-1, 0)), 2,
      upenv->up->up->up->vars[0],
      VEncodePointer(&_V10_Dstring_D1451.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__set_D303_k265(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__set_D303_k265, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.print-expr.216 13 10) (close _V10_Dprint__set_D303_k266) (bruijn ##.x.332 10 3) (bruijn ##.args.298 12 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 13-1, 10)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__set_D303_k266, env)}),
      VGetArg(upenv, 10-1, 3),
      VGetArg(upenv, 12-1, 2));
}
static void _V10_Dprint__set_D303_k264(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__set_D303_k264, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.x.555 56 0) (close _V10_Dprint__set_D303_k265) (##string ##.string.1453) (##inline ##vcore.car (bruijn ##.expr.82.339 4 0)) (##inline ##vcore.car (bruijn ##.expr.83.341 3 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 56-1, 0)), 4,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__set_D303_k265, env)}),
      VEncodePointer(&_V10_Dstring_D1453.sym, VPOINTER_OTHER),
      VInlineCar2(runtime,
        upenv->up->up->up->vars[0]),
      VInlineCar2(runtime,
        upenv->up->up->vars[0]));
}
static void _V10_Dprint__set_D303_k263(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__set_D303_k263, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.print-expr.216 11 10) (close _V10_Dprint__set_D303_k264) (bruijn ##.k.330 8 1) (bruijn ##.args.298 10 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 11-1, 10)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__set_D303_k264, env)}),
      VGetArg(upenv, 8-1, 1),
      VGetArg(upenv, 10-1, 2));
}
static void _V10_Dprint__set_D303_lambda45(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__set_D303_lambda45, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.x.555 54 0) (close _V10_Dprint__set_D303_k263) (##string ##.string.1454))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 54-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__set_D303_k263, env)}),
      VEncodePointer(&_V10_Dstring_D1454.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__set_D303_k261(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__set_D303_k261, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.83.341 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.83.341 0 0))) (##vcore.call-with-values (close _V10_Dprint__set_D303_k262) (close _V10_Dprint__set_D303_lambda45) (bruijn ##.kk.78.334 5 1)) ((bruijn ##.k.879 4 0) #f)) ((bruijn ##.k.879 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__set_D303_k262, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__set_D303_lambda45, env)}),
      VGetArg(upenv, 5-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__set_D303_k260(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__set_D303_k260, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.82.339 0 0)) ((close _V10_Dprint__set_D303_k261) (##inline ##vcore.cdr (bruijn ##.expr.82.339 0 0))) ((bruijn ##.k.879 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__set_D303_k261, .env = env }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__set_D303_k259(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__set_D303_k259, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.81.337 0 0)) ((close _V10_Dprint__set_D303_k260) (##inline ##vcore.cdr (bruijn ##.expr.81.337 0 0))) ((bruijn ##.k.879 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__set_D303_k260, .env = env }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__set_D303_k258(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__set_D303_k258, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.880 0 0) ((close _V10_Dprint__set_D303_k259) (##inline ##vcore.cdr (bruijn ##.y.331 3 2))) ((bruijn ##.k.879 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__set_D303_k259, .env = env }, }, 1,
      VInlineCdr2(runtime,
        upenv->up->up->vars[2]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__set_D303_k257(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__set_D303_k257, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.y.331 2 2)) ((bruijn ##.x.558 46 0) (close _V10_Dprint__set_D303_k258) 'bruijn (##inline ##vcore.car (bruijn ##.y.331 2 2))) ((bruijn ##.k.879 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->up->vars[2]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 46-1, 0)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__set_D303_k258, env)}),
      _V0bruijn,
      VInlineCar2(runtime,
        upenv->up->vars[2]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__set_D303_lambda46(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__set_D303_lambda46, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.593 14 0) (bruijn ##.k.868 0 0) (##string ##.string.1455) (bruijn ##.y.331 5 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 14-1, 0)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1455.sym, VPOINTER_OTHER),
      VGetArg(upenv, 5-1, 2));
}
static void _V10_Dprint__set_D303_k269(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__set_D303_k269, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.k.865 3 0) (close _V10_Dprint__set_D303_lambda46) (bruijn ##.kk.78.334 3 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      upenv->up->up->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__set_D303_lambda46, env)}),
      upenv->up->up->vars[1]);
}
static void _V10_Dprint__set_D303_k268(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__set_D303_k268, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.x.869 0 0) (close _V10_Dprint__set_D303_k269))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__set_D303_k269, env)}));
}
static void _V10_Dprint__set_D303_k276(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__set_D303_k276, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.555 57 0) (bruijn ##.k.870 7 0) (##string ##.string.1451))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 57-1, 0)), 2,
      VGetArg(upenv, 7-1, 0),
      VEncodePointer(&_V10_Dstring_D1451.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__set_D303_k275(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__set_D303_k275, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.print-expr.216 12 10) (close _V10_Dprint__set_D303_k276) (bruijn ##.x.332 9 3) (bruijn ##.args.298 11 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 12-1, 10)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__set_D303_k276, env)}),
      VGetArg(upenv, 9-1, 3),
      VGetArg(upenv, 11-1, 2));
}
static void _V10_Dprint__set_D303_k274(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__set_D303_k274, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.x.555 55 0) (close _V10_Dprint__set_D303_k275) (##string ##.string.1436))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 55-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__set_D303_k275, env)}),
      VEncodePointer(&_V10_Dstring_D1436.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__set_D303_k273(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__set_D303_k273, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.print-literal.212 10 6) (close _V10_Dprint__set_D303_k274) (bruijn ##.y.331 7 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 10-1, 6)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__set_D303_k274, env)}),
      VGetArg(upenv, 7-1, 2));
}
static void _V10_Dprint__set_D303_k272(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__set_D303_k272, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.x.555 53 0) (close _V10_Dprint__set_D303_k273) (##string ##.string.1436))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 53-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__set_D303_k273, env)}),
      VEncodePointer(&_V10_Dstring_D1436.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__set_D303_k271(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__set_D303_k271, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.print-expr.216 8 10) (close _V10_Dprint__set_D303_k272) (bruijn ##.k.330 5 1) (bruijn ##.args.298 7 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 8-1, 10)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__set_D303_k272, env)}),
      VGetArg(upenv, 5-1, 1),
      VGetArg(upenv, 7-1, 2));
}
static void _V10_Dprint__set_D303_k270(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__set_D303_k270, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.871 0 0) ((bruijn ##.x.555 51 0) (close _V10_Dprint__set_D303_k271) (##string ##.string.1456)) ((bruijn ##.x.593 13 0) (bruijn ##.k.870 1 0) (##string ##.string.1457)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 51-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__set_D303_k271, env)}),
      VEncodePointer(&_V10_Dstring_D1456.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 13-1, 0)), 2,
      upenv->vars[0],
      VEncodePointer(&_V10_Dstring_D1457.sym, VPOINTER_OTHER));
}
}
static void _V10_Dprint__set_D303_lambda47(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__set_D303_lambda47, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.x.567 38 0) (close _V10_Dprint__set_D303_k270) (bruijn ##.y.331 3 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 38-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__set_D303_k270, env)}),
      upenv->up->up->vars[2]);
}
static void _V10_Dprint__set_D303_k267(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__set_D303_k267, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.call-with-values (close _V10_Dprint__set_D303_k268) (close _V10_Dprint__set_D303_lambda47) (bruijn ##.kk.78.334 1 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__set_D303_k268, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__set_D303_lambda47, env)}),
      upenv->vars[1]);
}
static void _V10_Dprint__set_D303_lambda44(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__set_D303_lambda44, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V10_Dprint__set_D303_k257) (close _V10_Dprint__set_D303_k267))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__set_D303_k257, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__set_D303_k267, env)}));
}
static void _V10_Dprint__set_D303_lambda43(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4) {
 if(argc != 5) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__set_D303_lambda43, got ~D~N"
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
  // (##vcore.call/cc (bruijn ##.k.864 0 0) (close _V10_Dprint__set_D303_lambda44))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__set_D303_lambda44, env)}));
}
static void _V10_Dprint__inline_D304_k279(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__inline_D304_k279, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.905 1 0) ((bruijn ##.x.593 12 0) (bruijn ##.k.906 0 0) (##string ##.string.1458) (bruijn ##.f.344 3 1)) ((bruijn ##.k.906 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 12-1, 0)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1458.sym, VPOINTER_OTHER),
      upenv->up->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__inline_D304_k288(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__inline_D304_k288, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.print-expr.216 15 10) (bruijn ##.k.900 1 0) (bruijn ##.x.347 1 1) (bruijn ##.args.298 14 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 15-1, 10)), 3,
      upenv->vars[0],
      upenv->vars[1],
      VGetArg(upenv, 14-1, 2));
}
static void _V10_Dprint__inline_D304_lambda49(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__inline_D304_lambda49, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##.x.555 58 0) (close _V10_Dprint__inline_D304_k288) (##string ##.string.1459))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 58-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__inline_D304_k288, env)}),
      VEncodePointer(&_V10_Dstring_D1459.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__inline_D304_k287(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__inline_D304_k287, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.x.592 20 0) (bruijn ##.k.898 3 0) (close _V10_Dprint__inline_D304_lambda49) (bruijn ##.x.902 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 20-1, 0)), 3,
      upenv->up->up->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__inline_D304_lambda49, env)}),
      _var0);
}
static void _V10_Dprint__inline_D304_k286(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__inline_D304_k286, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.x.573 38 0) (close _V10_Dprint__inline_D304_k287) (bruijn ##.xs.345 9 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 38-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__inline_D304_k287, env)}),
      VGetArg(upenv, 9-1, 2));
}
static void _V10_Dprint__inline_D304_k285(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__inline_D304_k285, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.print-expr.216 11 10) (close _V10_Dprint__inline_D304_k286) (bruijn ##.x.903 0 0) (bruijn ##.args.298 10 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 11-1, 10)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__inline_D304_k286, env)}),
      _var0,
      VGetArg(upenv, 10-1, 2));
}
static void _V10_Dprint__inline_D304_k284(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__inline_D304_k284, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.897 1 0) ((bruijn ##.x.559 50 0) (close _V10_Dprint__inline_D304_k285) (bruijn ##.xs.345 7 2)) ((bruijn ##.k.898 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 50-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__inline_D304_k285, env)}),
      VGetArg(upenv, 7-1, 2));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__inline_D304_k289(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__inline_D304_k289, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.555 54 0) (bruijn ##.k.893 7 0) (##string ##.string.1460))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 54-1, 0)), 2,
      VGetArg(upenv, 7-1, 0),
      VEncodePointer(&_V10_Dstring_D1460.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__inline_D304_k283(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__inline_D304_k283, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dprint__inline_D304_k284) (close _V10_Dprint__inline_D304_k289))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__inline_D304_k284, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__inline_D304_k289, env)}));
}
static void _V10_Dprint__inline_D304_k282(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__inline_D304_k282, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.x.595 12 0) (close _V10_Dprint__inline_D304_k283) (bruijn ##.x.904 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 12-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__inline_D304_k283, env)}),
      _var0);
}
static void _V10_Dprint__inline_D304_k281(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__inline_D304_k281, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.x.594 12 0) (close _V10_Dprint__inline_D304_k282) (bruijn ##.xs.345 4 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 12-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__inline_D304_k282, env)}),
      upenv->up->up->up->vars[2]);
}
static void _V10_Dprint__inline_D304_k280(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__inline_D304_k280, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.x.555 50 0) (close _V10_Dprint__inline_D304_k281) (##string ##.string.1461) (bruijn ##.inline.346 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 50-1, 0)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__inline_D304_k281, env)}),
      VEncodePointer(&_V10_Dstring_D1461.sym, VPOINTER_OTHER),
      upenv->up->vars[0]);
}
static void _V10_Dprint__inline_D304_k278(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__inline_D304_k278, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dprint__inline_D304_k279) (close _V10_Dprint__inline_D304_k280))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__inline_D304_k279, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__inline_D304_k280, env)}));
}
static void _V10_Dprint__inline_D304_k277(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__inline_D304_k277, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.x.595 8 0) (close _V10_Dprint__inline_D304_k278) (bruijn ##.inline.346 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 8-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__inline_D304_k278, env)}),
      _var0);
}
static void _V10_Dprint__inline_D304_lambda48(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__inline_D304_lambda48, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn ##.x.574 28 0) (close _V10_Dprint__inline_D304_k277) (bruijn ##.f.344 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 28-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__inline_D304_k277, env)}),
      _var1);
}
static void _V10_Dprint__expr_D216_k293(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D216_k293, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1093 0 0) (bruijn ##.k.1088 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      upenv->up->up->vars[0]);
}
static void _V10_Dprint__expr_D216_lambda51(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D216_lambda51, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.572 34 0) (bruijn ##.k.1094 0 0) (##string ##.string.1462))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 34-1, 0)), 2,
      _var0,
      VEncodePointer(&_V10_Dstring_D1462.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__expr_D216_k292(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D216_k292, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.31.351 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.car (bruijn ##.expr.31.351 0 0))) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.31.351 0 0))) (##vcore.call-with-values (close _V10_Dprint__expr_D216_k293) (close _V10_Dprint__expr_D216_lambda51) (bruijn ##.kk.28.348 3 1)) ((bruijn ##.k.1088 2 0) #f)) ((bruijn ##.k.1088 2 0) #f)) ((bruijn ##.k.1088 2 0) #f))
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
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D216_k293, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D216_lambda51, env)}),
      upenv->up->up->vars[1]);
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
static void _V10_Dprint__expr_D216_k291(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D216_k291, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1089 0 0) ((close _V10_Dprint__expr_D216_k292) (##inline ##vcore.cdr (bruijn ##.expr.297 4 1))) ((bruijn ##.k.1088 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__expr_D216_k292, .env = env }, }, 1,
      VInlineCdr2(runtime,
        upenv->up->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__expr_D216_k290(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D216_k290, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.297 3 1)) ((bruijn ##.x.558 45 0) (close _V10_Dprint__expr_D216_k291) 'quote (##inline ##vcore.car (bruijn ##.expr.297 3 1))) ((bruijn ##.k.1088 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->up->up->vars[1]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 45-1, 0)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D216_k291, env)}),
      _V0quote,
      VInlineCar2(runtime,
        upenv->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__expr_D216_k301(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D216_k301, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1081 0 0) (bruijn ##.k.1073 6 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(upenv, 6-1, 0));
}
static void _V10_Dprint__expr_D216_lambda52(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D216_lambda52, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.print-literal-string.210 11 4) (bruijn ##.k.1082 0 0) (##inline ##vcore.car (bruijn ##.expr.35.355 1 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 11-1, 4)), 2,
      _var0,
      VInlineCar2(runtime,
        upenv->vars[0]));
}
static void _V10_Dprint__expr_D216_k300(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D216_k300, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.35.355 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.35.355 0 0))) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.33.353 3 0))) (##vcore.call-with-values (close _V10_Dprint__expr_D216_k301) (close _V10_Dprint__expr_D216_lambda52) (bruijn ##.kk.28.348 7 1)) ((bruijn ##.k.1073 5 0) #f)) ((bruijn ##.k.1073 5 0) #f)) ((bruijn ##.k.1073 5 0) #f))
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
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D216_k301, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D216_lambda52, env)}),
      VGetArg(upenv, 7-1, 1));
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
static void _V10_Dprint__expr_D216_k299(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D216_k299, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1077 0 0) ((close _V10_Dprint__expr_D216_k300) (##inline ##vcore.cdr (bruijn ##.expr.34.354 1 0))) ((bruijn ##.k.1073 4 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__expr_D216_k300, .env = env }, }, 1,
      VInlineCdr2(runtime,
        upenv->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__expr_D216_k298(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D216_k298, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.34.354 0 0)) ((bruijn ##.x.558 49 0) (close _V10_Dprint__expr_D216_k299) '##string (##inline ##vcore.car (bruijn ##.expr.34.354 0 0))) ((bruijn ##.k.1073 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 49-1, 0)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D216_k299, env)}),
      _V10string,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__expr_D216_k297(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D216_k297, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.33.353 0 0)) ((close _V10_Dprint__expr_D216_k298) (##inline ##vcore.car (bruijn ##.expr.33.353 0 0))) ((bruijn ##.k.1073 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__expr_D216_k298, .env = env }, }, 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__expr_D216_k296(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D216_k296, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1074 0 0) ((close _V10_Dprint__expr_D216_k297) (##inline ##vcore.cdr (bruijn ##.expr.297 5 1))) ((bruijn ##.k.1073 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__expr_D216_k297, .env = env }, }, 1,
      VInlineCdr2(runtime,
        VGetArg(upenv, 5-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__expr_D216_k295(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D216_k295, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.297 4 1)) ((bruijn ##.x.558 46 0) (close _V10_Dprint__expr_D216_k296) 'quote (##inline ##vcore.car (bruijn ##.expr.297 4 1))) ((bruijn ##.k.1073 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->up->up->up->vars[1]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 46-1, 0)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D216_k296, env)}),
      _V0quote,
      VInlineCar2(runtime,
        upenv->up->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__expr_D216_k306(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D216_k306, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1068 0 0) (bruijn ##.k.1064 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      upenv->up->up->vars[0]);
}
static void _V10_Dprint__expr_D216_lambda53(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D216_lambda53, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.print-literal.212 9 6) (bruijn ##.k.1069 0 0) (##inline ##vcore.car (bruijn ##.expr.37.358 1 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 9-1, 6)), 2,
      _var0,
      VInlineCar2(runtime,
        upenv->vars[0]));
}
static void _V10_Dprint__expr_D216_k305(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D216_k305, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.37.358 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.37.358 0 0))) (##vcore.call-with-values (close _V10_Dprint__expr_D216_k306) (close _V10_Dprint__expr_D216_lambda53) (bruijn ##.kk.28.348 5 1)) ((bruijn ##.k.1064 2 0) #f)) ((bruijn ##.k.1064 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D216_k306, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D216_lambda53, env)}),
      VGetArg(upenv, 5-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__expr_D216_k304(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D216_k304, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1065 0 0) ((close _V10_Dprint__expr_D216_k305) (##inline ##vcore.cdr (bruijn ##.expr.297 6 1))) ((bruijn ##.k.1064 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__expr_D216_k305, .env = env }, }, 1,
      VInlineCdr2(runtime,
        VGetArg(upenv, 6-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__expr_D216_k303(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D216_k303, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.297 5 1)) ((bruijn ##.x.558 47 0) (close _V10_Dprint__expr_D216_k304) 'quote (##inline ##vcore.car (bruijn ##.expr.297 5 1))) ((bruijn ##.k.1064 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(upenv, 5-1, 1)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 47-1, 0)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D216_k304, env)}),
      _V0quote,
      VInlineCar2(runtime,
        VGetArg(upenv, 5-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__expr_D216_k311(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D216_k311, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1059 0 0) (bruijn ##.k.1055 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      upenv->up->up->vars[0]);
}
static void _V10_Dprint__expr_D216_lambda54(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D216_lambda54, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.555 54 0) (bruijn ##.k.1060 0 0) (##string ##.string.1463) (##inline ##vcore.car (bruijn ##.expr.39.361 1 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 54-1, 0)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1463.sym, VPOINTER_OTHER),
      VInlineCar2(runtime,
        upenv->vars[0]));
}
static void _V10_Dprint__expr_D216_k310(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D216_k310, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.39.361 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.39.361 0 0))) (##vcore.call-with-values (close _V10_Dprint__expr_D216_k311) (close _V10_Dprint__expr_D216_lambda54) (bruijn ##.kk.28.348 6 1)) ((bruijn ##.k.1055 2 0) #f)) ((bruijn ##.k.1055 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D216_k311, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D216_lambda54, env)}),
      VGetArg(upenv, 6-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__expr_D216_k309(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D216_k309, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1056 0 0) ((close _V10_Dprint__expr_D216_k310) (##inline ##vcore.cdr (bruijn ##.expr.297 7 1))) ((bruijn ##.k.1055 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__expr_D216_k310, .env = env }, }, 1,
      VInlineCdr2(runtime,
        VGetArg(upenv, 7-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__expr_D216_k308(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D216_k308, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.297 6 1)) ((bruijn ##.x.558 48 0) (close _V10_Dprint__expr_D216_k309) 'close (##inline ##vcore.car (bruijn ##.expr.297 6 1))) ((bruijn ##.k.1055 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(upenv, 6-1, 1)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 48-1, 0)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D216_k309, env)}),
      _V0close,
      VInlineCar2(runtime,
        VGetArg(upenv, 6-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__expr_D216_k320(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D216_k320, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1044 0 0) (bruijn ##.k.1038 7 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(upenv, 7-1, 0));
}
static void _V10_Dprint__expr_D216_k322(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D216_k322, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.572 44 0) (bruijn ##.k.1045 2 0) (bruijn ##.x.1047 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 44-1, 0)), 2,
      upenv->up->vars[0],
      _var0);
}
static void _V10_Dprint__expr_D216_k326(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D216_k326, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.1051 0 0) ((bruijn ##.x.555 64 0) (bruijn ##.k.1045 5 0) (##string ##.string.1467) (bruijn ##.right.369 6 0)) ((bruijn ##.x.555 64 0) (bruijn ##.k.1045 5 0) (##string ##.string.1468) (bruijn ##.up.367 8 0) (bruijn ##.right.369 6 0)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 64-1, 0)), 3,
      VGetArg(upenv, 5-1, 0),
      VEncodePointer(&_V10_Dstring_D1467.sym, VPOINTER_OTHER),
      VGetArg(upenv, 6-1, 0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 64-1, 0)), 4,
      VGetArg(upenv, 5-1, 0),
      VEncodePointer(&_V10_Dstring_D1468.sym, VPOINTER_OTHER),
      VGetArg(upenv, 8-1, 0),
      VGetArg(upenv, 6-1, 0));
}
}
static void _V10_Dprint__expr_D216_k325(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D216_k325, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1050 0 0) ((bruijn ##.x.555 63 0) (bruijn ##.k.1045 4 0) (##string ##.string.1466) (bruijn ##.right.369 5 0)) ((bruijn ##.x.564 54 0) (close _V10_Dprint__expr_D216_k326) (bruijn ##.up.367 7 0) 4))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 63-1, 0)), 3,
      upenv->up->up->up->vars[0],
      VEncodePointer(&_V10_Dstring_D1466.sym, VPOINTER_OTHER),
      VGetArg(upenv, 5-1, 0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 54-1, 0)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D216_k326, env)}),
      VGetArg(upenv, 7-1, 0),
      VEncodeInt(4l));
}
}
static void _V10_Dprint__expr_D216_k324(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D216_k324, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1049 0 0) ((bruijn ##.x.555 62 0) (bruijn ##.k.1045 3 0) (##string ##.string.1465) (bruijn ##.right.369 4 0)) ((bruijn ##.x.564 53 0) (close _V10_Dprint__expr_D216_k325) (bruijn ##.up.367 6 0) 3))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 62-1, 0)), 3,
      upenv->up->up->vars[0],
      VEncodePointer(&_V10_Dstring_D1465.sym, VPOINTER_OTHER),
      upenv->up->up->up->vars[0]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 53-1, 0)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D216_k325, env)}),
      VGetArg(upenv, 6-1, 0),
      VEncodeInt(3l));
}
}
static void _V10_Dprint__expr_D216_k323(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D216_k323, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1048 0 0) ((bruijn ##.x.555 61 0) (bruijn ##.k.1045 2 0) (##string ##.string.1464) (bruijn ##.right.369 3 0)) ((bruijn ##.x.564 52 0) (close _V10_Dprint__expr_D216_k324) (bruijn ##.up.367 5 0) 2))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 61-1, 0)), 3,
      upenv->up->vars[0],
      VEncodePointer(&_V10_Dstring_D1464.sym, VPOINTER_OTHER),
      upenv->up->up->vars[0]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 52-1, 0)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D216_k324, env)}),
      VGetArg(upenv, 5-1, 0),
      VEncodeInt(2l));
}
}
static void _V10_Dprint__expr_D216_k321(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D216_k321, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1046 0 0) ((bruijn ##.x.565 50 0) (close _V10_Dprint__expr_D216_k322) (bruijn ##.args.298 15 2) (bruijn ##.right.369 2 0)) ((bruijn ##.x.564 51 0) (close _V10_Dprint__expr_D216_k323) (bruijn ##.up.367 4 0) 1))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 50-1, 0)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D216_k322, env)}),
      VGetArg(upenv, 15-1, 2),
      upenv->up->vars[0]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 51-1, 0)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D216_k323, env)}),
      upenv->up->up->up->vars[0],
      VEncodeInt(1l));
}
}
static void _V10_Dprint__expr_D216_lambda55(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D216_lambda55, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.x.564 50 0) (close _V10_Dprint__expr_D216_k321) (bruijn ##.up.367 3 0) 0)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 50-1, 0)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D216_k321, env)}),
      upenv->up->up->vars[0],
      VEncodeInt(0l));
}
static void _V10_Dprint__expr_D216_k319(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D216_k319, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.43.368 1 0))) (##vcore.call-with-values (close _V10_Dprint__expr_D216_k320) (close _V10_Dprint__expr_D216_lambda55) (bruijn ##.kk.28.348 11 1)) ((bruijn ##.k.1038 6 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        upenv->vars[0])))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D216_k320, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D216_lambda55, env)}),
      VGetArg(upenv, 11-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 6-1, 0)), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__expr_D216_k318(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D216_k318, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.43.368 0 0)) ((close _V10_Dprint__expr_D216_k319) (##inline ##vcore.car (bruijn ##.expr.43.368 0 0))) ((bruijn ##.k.1038 5 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__expr_D216_k319, .env = env }, }, 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 5-1, 0)), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__expr_D216_k317(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D216_k317, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dprint__expr_D216_k318) (##inline ##vcore.cdr (bruijn ##.expr.42.366 1 0)))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__expr_D216_k318, .env = env }, }, 1,
      VInlineCdr2(runtime,
        upenv->vars[0]));
}
static void _V10_Dprint__expr_D216_k316(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D216_k316, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.42.366 0 0)) ((close _V10_Dprint__expr_D216_k317) (##inline ##vcore.car (bruijn ##.expr.42.366 0 0))) ((bruijn ##.k.1038 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__expr_D216_k317, .env = env }, }, 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__expr_D216_k315(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D216_k315, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.41.364 0 0)) ((close _V10_Dprint__expr_D216_k316) (##inline ##vcore.cdr (bruijn ##.expr.41.364 0 0))) ((bruijn ##.k.1038 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__expr_D216_k316, .env = env }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__expr_D216_k314(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D216_k314, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1039 0 0) ((close _V10_Dprint__expr_D216_k315) (##inline ##vcore.cdr (bruijn ##.expr.297 8 1))) ((bruijn ##.k.1038 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__expr_D216_k315, .env = env }, }, 1,
      VInlineCdr2(runtime,
        VGetArg(upenv, 8-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__expr_D216_k313(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D216_k313, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.297 7 1)) ((bruijn ##.x.558 49 0) (close _V10_Dprint__expr_D216_k314) 'bruijn (##inline ##vcore.car (bruijn ##.expr.297 7 1))) ((bruijn ##.k.1038 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(upenv, 7-1, 1)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 49-1, 0)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D216_k314, env)}),
      _V0bruijn,
      VInlineCar2(runtime,
        VGetArg(upenv, 7-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__expr_D216_k333(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D216_k333, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1027 0 0) (bruijn ##.k.1021 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(upenv, 5-1, 0));
}
static void _V10_Dprint__expr_D216_k339(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D216_k339, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.590 29 0) (bruijn ##.k.1028 6 0) (##string ##.string.1469))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 29-1, 0)), 2,
      VGetArg(upenv, 6-1, 0),
      VEncodePointer(&_V10_Dstring_D1469.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__expr_D216_k338(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D216_k338, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.print-expr.216 19 10) (close _V10_Dprint__expr_D216_k339) (##inline ##vcore.car (bruijn ##.expr.47.375 6 0)) (bruijn ##.args.298 18 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 19-1, 10)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D216_k339, env)}),
      VInlineCar2(runtime,
        VGetArg(upenv, 6-1, 0)),
      VGetArg(upenv, 18-1, 2));
}
static void _V10_Dprint__expr_D216_k337(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D216_k337, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.x.590 27 0) (close _V10_Dprint__expr_D216_k338) (##string ##.string.1470))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 27-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D216_k338, env)}),
      VEncodePointer(&_V10_Dstring_D1470.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__expr_D216_k336(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D216_k336, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.print-expr.216 17 10) (close _V10_Dprint__expr_D216_k337) (##inline ##vcore.car (bruijn ##.expr.46.373 5 0)) (bruijn ##.args.298 16 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 17-1, 10)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D216_k337, env)}),
      VInlineCar2(runtime,
        VGetArg(upenv, 5-1, 0)),
      VGetArg(upenv, 16-1, 2));
}
static void _V10_Dprint__expr_D216_k335(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D216_k335, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.x.590 25 0) (close _V10_Dprint__expr_D216_k336) (##string ##.string.1471))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 25-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D216_k336, env)}),
      VEncodePointer(&_V10_Dstring_D1471.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__expr_D216_k334(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D216_k334, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.print-expr.216 15 10) (close _V10_Dprint__expr_D216_k335) (##inline ##vcore.car (bruijn ##.expr.45.371 4 0)) (bruijn ##.args.298 14 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 15-1, 10)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D216_k335, env)}),
      VInlineCar2(runtime,
        upenv->up->up->up->vars[0]),
      VGetArg(upenv, 14-1, 2));
}
static void _V10_Dprint__expr_D216_lambda56(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D216_lambda56, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.x.590 23 0) (close _V10_Dprint__expr_D216_k334) (##string ##.string.1472))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 23-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D216_k334, env)}),
      VEncodePointer(&_V10_Dstring_D1472.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__expr_D216_k332(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D216_k332, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.47.375 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.47.375 0 0))) (##vcore.call-with-values (close _V10_Dprint__expr_D216_k333) (close _V10_Dprint__expr_D216_lambda56) (bruijn ##.kk.28.348 10 1)) ((bruijn ##.k.1021 4 0) #f)) ((bruijn ##.k.1021 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D216_k333, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D216_lambda56, env)}),
      VGetArg(upenv, 10-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__expr_D216_k331(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D216_k331, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.46.373 0 0)) ((close _V10_Dprint__expr_D216_k332) (##inline ##vcore.cdr (bruijn ##.expr.46.373 0 0))) ((bruijn ##.k.1021 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__expr_D216_k332, .env = env }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__expr_D216_k330(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D216_k330, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.45.371 0 0)) ((close _V10_Dprint__expr_D216_k331) (##inline ##vcore.cdr (bruijn ##.expr.45.371 0 0))) ((bruijn ##.k.1021 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__expr_D216_k331, .env = env }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__expr_D216_k329(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D216_k329, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1022 0 0) ((close _V10_Dprint__expr_D216_k330) (##inline ##vcore.cdr (bruijn ##.expr.297 9 1))) ((bruijn ##.k.1021 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__expr_D216_k330, .env = env }, }, 1,
      VInlineCdr2(runtime,
        VGetArg(upenv, 9-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__expr_D216_k328(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D216_k328, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.297 8 1)) ((bruijn ##.x.558 50 0) (close _V10_Dprint__expr_D216_k329) 'if (##inline ##vcore.car (bruijn ##.expr.297 8 1))) ((bruijn ##.k.1021 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(upenv, 8-1, 1)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 50-1, 0)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D216_k329, env)}),
      _V0if,
      VInlineCar2(runtime,
        VGetArg(upenv, 8-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__expr_D216_k346(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D216_k346, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1016 0 0) (bruijn ##.k.1010 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(upenv, 5-1, 0));
}
static void _V10_Dprint__expr_D216_lambda57(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D216_lambda57, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.print-set.303 13 4) (bruijn ##.k.1017 0 0) (##inline ##vcore.car (bruijn ##.expr.49.378 3 0)) (##inline ##vcore.car (bruijn ##.expr.50.380 2 0)) (##inline ##vcore.car (bruijn ##.expr.51.382 1 0)) #f)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 13-1, 4)), 5,
      _var0,
      VInlineCar2(runtime,
        upenv->up->up->vars[0]),
      VInlineCar2(runtime,
        upenv->up->vars[0]),
      VInlineCar2(runtime,
        upenv->vars[0]),
      VEncodeBool(false));
}
static void _V10_Dprint__expr_D216_k345(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D216_k345, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.51.382 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.51.382 0 0))) (##vcore.call-with-values (close _V10_Dprint__expr_D216_k346) (close _V10_Dprint__expr_D216_lambda57) (bruijn ##.kk.28.348 11 1)) ((bruijn ##.k.1010 4 0) #f)) ((bruijn ##.k.1010 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D216_k346, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D216_lambda57, env)}),
      VGetArg(upenv, 11-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__expr_D216_k344(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D216_k344, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.50.380 0 0)) ((close _V10_Dprint__expr_D216_k345) (##inline ##vcore.cdr (bruijn ##.expr.50.380 0 0))) ((bruijn ##.k.1010 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__expr_D216_k345, .env = env }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__expr_D216_k343(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D216_k343, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.49.378 0 0)) ((close _V10_Dprint__expr_D216_k344) (##inline ##vcore.cdr (bruijn ##.expr.49.378 0 0))) ((bruijn ##.k.1010 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__expr_D216_k344, .env = env }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__expr_D216_k342(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D216_k342, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1011 0 0) ((close _V10_Dprint__expr_D216_k343) (##inline ##vcore.cdr (bruijn ##.expr.297 10 1))) ((bruijn ##.k.1010 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__expr_D216_k343, .env = env }, }, 1,
      VInlineCdr2(runtime,
        VGetArg(upenv, 10-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__expr_D216_k341(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D216_k341, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.297 9 1)) ((bruijn ##.x.558 51 0) (close _V10_Dprint__expr_D216_k342) 'set! (##inline ##vcore.car (bruijn ##.expr.297 9 1))) ((bruijn ##.k.1010 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(upenv, 9-1, 1)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 51-1, 0)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D216_k342, env)}),
      _V0set_B,
      VInlineCar2(runtime,
        VGetArg(upenv, 9-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__expr_D216_k353(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D216_k353, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1005 0 0) (bruijn ##.k.999 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(upenv, 5-1, 0));
}
static void _V10_Dprint__expr_D216_lambda58(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D216_lambda58, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.print-define-global.302 14 3) (bruijn ##.k.1006 0 0) (##inline ##vcore.car (bruijn ##.expr.53.385 3 0)) (##inline ##vcore.car (bruijn ##.expr.54.387 2 0)) (##inline ##vcore.car (bruijn ##.expr.55.389 1 0)) #f)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 14-1, 3)), 5,
      _var0,
      VInlineCar2(runtime,
        upenv->up->up->vars[0]),
      VInlineCar2(runtime,
        upenv->up->vars[0]),
      VInlineCar2(runtime,
        upenv->vars[0]),
      VEncodeBool(false));
}
static void _V10_Dprint__expr_D216_k352(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D216_k352, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.55.389 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.55.389 0 0))) (##vcore.call-with-values (close _V10_Dprint__expr_D216_k353) (close _V10_Dprint__expr_D216_lambda58) (bruijn ##.kk.28.348 12 1)) ((bruijn ##.k.999 4 0) #f)) ((bruijn ##.k.999 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D216_k353, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D216_lambda58, env)}),
      VGetArg(upenv, 12-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__expr_D216_k351(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D216_k351, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.54.387 0 0)) ((close _V10_Dprint__expr_D216_k352) (##inline ##vcore.cdr (bruijn ##.expr.54.387 0 0))) ((bruijn ##.k.999 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__expr_D216_k352, .env = env }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__expr_D216_k350(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D216_k350, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.53.385 0 0)) ((close _V10_Dprint__expr_D216_k351) (##inline ##vcore.cdr (bruijn ##.expr.53.385 0 0))) ((bruijn ##.k.999 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__expr_D216_k351, .env = env }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__expr_D216_k349(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D216_k349, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1000 0 0) ((close _V10_Dprint__expr_D216_k350) (##inline ##vcore.cdr (bruijn ##.expr.297 11 1))) ((bruijn ##.k.999 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__expr_D216_k350, .env = env }, }, 1,
      VInlineCdr2(runtime,
        VGetArg(upenv, 11-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__expr_D216_k348(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D216_k348, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.297 10 1)) ((bruijn ##.x.558 52 0) (close _V10_Dprint__expr_D216_k349) 'define (##inline ##vcore.car (bruijn ##.expr.297 10 1))) ((bruijn ##.k.999 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(upenv, 10-1, 1)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 52-1, 0)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D216_k349, env)}),
      _V0define,
      VInlineCar2(runtime,
        VGetArg(upenv, 10-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__expr_D216_k358(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D216_k358, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.995 0 0) (bruijn ##.k.992 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      upenv->up->up->vars[0]);
}
static void _V10_Dprint__expr_D216_lambda59(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D216_lambda59, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.print-inline.304 13 5) (bruijn ##.k.996 0 0) (##inline ##vcore.car (bruijn ##.expr.57.392 1 0)) (##inline ##vcore.cdr (bruijn ##.expr.57.392 1 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 13-1, 5)), 3,
      _var0,
      VInlineCar2(runtime,
        upenv->vars[0]),
      VInlineCdr2(runtime,
        upenv->vars[0]));
}
static void _V10_Dprint__expr_D216_k357(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D216_k357, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.57.392 0 0)) (##vcore.call-with-values (close _V10_Dprint__expr_D216_k358) (close _V10_Dprint__expr_D216_lambda59) (bruijn ##.kk.28.348 11 1)) ((bruijn ##.k.992 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D216_k358, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D216_lambda59, env)}),
      VGetArg(upenv, 11-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__expr_D216_k356(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D216_k356, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.993 0 0) ((close _V10_Dprint__expr_D216_k357) (##inline ##vcore.cdr (bruijn ##.expr.297 12 1))) ((bruijn ##.k.992 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__expr_D216_k357, .env = env }, }, 1,
      VInlineCdr2(runtime,
        VGetArg(upenv, 12-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__expr_D216_k355(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D216_k355, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.297 11 1)) ((bruijn ##.x.558 53 0) (close _V10_Dprint__expr_D216_k356) '##inline (##inline ##vcore.car (bruijn ##.expr.297 11 1))) ((bruijn ##.k.992 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(upenv, 11-1, 1)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 53-1, 0)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D216_k356, env)}),
      _V10inline,
      VInlineCar2(runtime,
        VGetArg(upenv, 11-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__expr_D216_k363(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D216_k363, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.987 0 0) (bruijn ##.k.983 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      upenv->up->up->vars[0]);
}
static void _V10_Dprint__expr_D216_lambda60(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D216_lambda60, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.print-literal-string.210 16 4) (bruijn ##.k.988 0 0) (##inline ##vcore.car (bruijn ##.expr.59.396 1 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 16-1, 4)), 2,
      _var0,
      VInlineCar2(runtime,
        upenv->vars[0]));
}
static void _V10_Dprint__expr_D216_k362(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D216_k362, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.59.396 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.59.396 0 0))) (##vcore.call-with-values (close _V10_Dprint__expr_D216_k363) (close _V10_Dprint__expr_D216_lambda60) (bruijn ##.kk.28.348 12 1)) ((bruijn ##.k.983 2 0) #f)) ((bruijn ##.k.983 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D216_k363, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D216_lambda60, env)}),
      VGetArg(upenv, 12-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__expr_D216_k361(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D216_k361, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.984 0 0) ((close _V10_Dprint__expr_D216_k362) (##inline ##vcore.cdr (bruijn ##.expr.297 13 1))) ((bruijn ##.k.983 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__expr_D216_k362, .env = env }, }, 1,
      VInlineCdr2(runtime,
        VGetArg(upenv, 13-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__expr_D216_k360(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D216_k360, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.297 12 1)) ((bruijn ##.x.558 54 0) (close _V10_Dprint__expr_D216_k361) '##string (##inline ##vcore.car (bruijn ##.expr.297 12 1))) ((bruijn ##.k.983 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(upenv, 12-1, 1)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 54-1, 0)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D216_k361, env)}),
      _V10string,
      VInlineCar2(runtime,
        VGetArg(upenv, 12-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__expr_D216_k368(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D216_k368, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.978 0 0) (bruijn ##.k.974 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      upenv->up->up->vars[0]);
}
static void _V10_Dprint__expr_D216_lambda61(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D216_lambda61, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.print-intrinsic.211 17 5) (bruijn ##.k.979 0 0) (##inline ##vcore.car (bruijn ##.expr.61.399 1 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 17-1, 5)), 2,
      _var0,
      VInlineCar2(runtime,
        upenv->vars[0]));
}
static void _V10_Dprint__expr_D216_k367(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D216_k367, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.61.399 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.61.399 0 0))) (##vcore.call-with-values (close _V10_Dprint__expr_D216_k368) (close _V10_Dprint__expr_D216_lambda61) (bruijn ##.kk.28.348 13 1)) ((bruijn ##.k.974 2 0) #f)) ((bruijn ##.k.974 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D216_k368, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D216_lambda61, env)}),
      VGetArg(upenv, 13-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__expr_D216_k366(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D216_k366, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.975 0 0) ((close _V10_Dprint__expr_D216_k367) (##inline ##vcore.cdr (bruijn ##.expr.297 14 1))) ((bruijn ##.k.974 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__expr_D216_k367, .env = env }, }, 1,
      VInlineCdr2(runtime,
        VGetArg(upenv, 14-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__expr_D216_k365(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D216_k365, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.297 13 1)) ((bruijn ##.x.558 55 0) (close _V10_Dprint__expr_D216_k366) '##intrinsic (##inline ##vcore.car (bruijn ##.expr.297 13 1))) ((bruijn ##.k.974 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(upenv, 13-1, 1)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 55-1, 0)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D216_k366, env)}),
      _V10intrinsic,
      VInlineCar2(runtime,
        VGetArg(upenv, 13-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__expr_D216_k373(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D216_k373, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.969 0 0) (bruijn ##.k.965 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      upenv->up->up->vars[0]);
}
static void _V10_Dprint__expr_D216_lambda62(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D216_lambda62, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.555 62 0) (bruijn ##.k.970 0 0) (##string ##.string.1473) (##inline ##vcore.car (bruijn ##.expr.63.402 1 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 62-1, 0)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1473.sym, VPOINTER_OTHER),
      VInlineCar2(runtime,
        upenv->vars[0]));
}
static void _V10_Dprint__expr_D216_k372(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D216_k372, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.63.402 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.63.402 0 0))) (##vcore.call-with-values (close _V10_Dprint__expr_D216_k373) (close _V10_Dprint__expr_D216_lambda62) (bruijn ##.kk.28.348 14 1)) ((bruijn ##.k.965 2 0) #f)) ((bruijn ##.k.965 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D216_k373, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D216_lambda62, env)}),
      VGetArg(upenv, 14-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__expr_D216_k371(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D216_k371, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.966 0 0) ((close _V10_Dprint__expr_D216_k372) (##inline ##vcore.cdr (bruijn ##.expr.297 15 1))) ((bruijn ##.k.965 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__expr_D216_k372, .env = env }, }, 1,
      VInlineCdr2(runtime,
        VGetArg(upenv, 15-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__expr_D216_k370(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D216_k370, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.297 14 1)) ((bruijn ##.x.558 56 0) (close _V10_Dprint__expr_D216_k371) '##foreign.function (##inline ##vcore.car (bruijn ##.expr.297 14 1))) ((bruijn ##.k.965 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(upenv, 14-1, 1)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 56-1, 0)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D216_k371, env)}),
      _V10foreign_Dfunction,
      VInlineCar2(runtime,
        VGetArg(upenv, 14-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__expr_D216_k380(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D216_k380, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.960 0 0) (bruijn ##.k.954 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(upenv, 5-1, 0));
}
static void _V10_Dprint__expr_D216_lambda63(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D216_lambda63, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.print-letrec.301 19 2) (bruijn ##.k.961 0 0) (##inline ##vcore.car (bruijn ##.expr.65.405 3 0)) (##inline ##vcore.car (bruijn ##.expr.66.407 2 0)) (##inline ##vcore.car (bruijn ##.expr.67.409 1 0)) (bruijn ##.args.298 20 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 19-1, 2)), 5,
      _var0,
      VInlineCar2(runtime,
        upenv->up->up->vars[0]),
      VInlineCar2(runtime,
        upenv->up->vars[0]),
      VInlineCar2(runtime,
        upenv->vars[0]),
      VGetArg(upenv, 20-1, 2));
}
static void _V10_Dprint__expr_D216_k379(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D216_k379, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.67.409 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.67.409 0 0))) (##vcore.call-with-values (close _V10_Dprint__expr_D216_k380) (close _V10_Dprint__expr_D216_lambda63) (bruijn ##.kk.28.348 17 1)) ((bruijn ##.k.954 4 0) #f)) ((bruijn ##.k.954 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D216_k380, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D216_lambda63, env)}),
      VGetArg(upenv, 17-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__expr_D216_k378(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D216_k378, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.66.407 0 0)) ((close _V10_Dprint__expr_D216_k379) (##inline ##vcore.cdr (bruijn ##.expr.66.407 0 0))) ((bruijn ##.k.954 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__expr_D216_k379, .env = env }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__expr_D216_k377(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D216_k377, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.65.405 0 0)) ((close _V10_Dprint__expr_D216_k378) (##inline ##vcore.cdr (bruijn ##.expr.65.405 0 0))) ((bruijn ##.k.954 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__expr_D216_k378, .env = env }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__expr_D216_k376(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D216_k376, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.955 0 0) ((close _V10_Dprint__expr_D216_k377) (##inline ##vcore.cdr (bruijn ##.expr.297 16 1))) ((bruijn ##.k.954 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__expr_D216_k377, .env = env }, }, 1,
      VInlineCdr2(runtime,
        VGetArg(upenv, 16-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__expr_D216_k375(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D216_k375, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.297 15 1)) ((bruijn ##.x.558 57 0) (close _V10_Dprint__expr_D216_k376) 'letrec (##inline ##vcore.car (bruijn ##.expr.297 15 1))) ((bruijn ##.k.954 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(upenv, 15-1, 1)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 57-1, 0)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D216_k376, env)}),
      _V0letrec,
      VInlineCar2(runtime,
        VGetArg(upenv, 15-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dloop_D415_k385(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D415_k385, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.71.414 4 1) (bruijn ##.k.940 1 0) (bruijn ##.expr.73.416 2 1) (bruijn ##.x.941 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->up->vars[1]), 3,
      upenv->vars[0],
      upenv->up->vars[1],
      _var0);
}
static void _V10_Dloop_D415_k384(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D415_k384, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.not (##inline ##vcore.pair? (bruijn ##.expr.73.416 1 1))) ((bruijn ##.x.596 26 0) (close _V10_Dloop_D415_k385) (bruijn ##.xs.70.417 1 2)) ((bruijn ##.k.940 0 0) #f))
if(VDecodeBool(
VInlineNot2(runtime,
        VInlinePairP2(runtime,
        upenv->vars[1])))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 26-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D415_k385, env)}),
      upenv->vars[2]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dloop_D415_k388(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D415_k388, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.71.414 7 1) (bruijn ##.k.934 2 0) (bruijn ##.expr.73.416 5 1) (bruijn ##.x.936 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 7-1, 1)), 3,
      upenv->up->vars[0],
      VGetArg(upenv, 5-1, 1),
      _var0);
}
static void _V10_Dloop_D415_k387(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D415_k387, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.x.596 29 0) (close _V10_Dloop_D415_k388) (bruijn ##.xs.70.417 4 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 29-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D415_k388, env)}),
      upenv->up->up->up->vars[2]);
}
static void _V10_Dloop_D415_lambda68(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D415_lambda68, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##.kk.72.418 0 1) (close _V10_Dloop_D415_k387) (##inline ##vcore.cdr (bruijn ##.expr.73.416 3 1)) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.73.416 3 1)) (bruijn ##.xs.70.417 3 2)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var1), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D415_k387, env)}),
      VInlineCdr2(runtime,
        upenv->up->up->vars[1]),
      VInlineCons2(runtime,
        VInlineCar2(runtime,
        upenv->up->up->vars[1]),
        upenv->up->up->vars[2]));
}
static void _V10_Dloop_D415_lambda67(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D415_lambda67, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.k.933 0 0) (close _V10_Dloop_D415_lambda68))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D415_lambda68, env)}));
}
static void _V10_Dloop_D415_k386(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D415_k386, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.k.931 1 0) (close _V10_Dloop_D415_lambda67) (bruijn ##.loop.415 2 0))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      upenv->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D415_lambda67, env)}),
      upenv->up->vars[0]);
}
static void _V10_Dloop_D415_lambda66(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D415_lambda66, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((close _V10_Dloop_D415_k384) (close _V10_Dloop_D415_k386))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dloop_D415_k384, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D415_k386, env)}));
}
static void _V10_Dprint__expr_D216_lambda65(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D216_lambda65, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (letrec 1 ((close _V10_Dloop_D415_lambda66)) ((bruijn ##.loop.415 0 0) (bruijn ##.k.930 1 0) (##inline ##vcore.cdr (bruijn ##.expr.297 20 1)) '()))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D415_lambda66, env)});
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, env->vars[0]), 3,
      upenv->vars[0],
      VInlineCdr2(runtime,
        VGetArg(upenv, 20-1, 1)),
      VNULL);
    }
}
static void _V10_Dprint__expr_D216_lambda64(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D216_lambda64, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.k.929 0 0) (close _V10_Dprint__expr_D216_lambda65))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D216_lambda65, env)}));
}
static void _V10_Dprint__expr_D216_k389(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D216_k389, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.945 0 0) (bruijn ##.k.943 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      upenv->vars[0]);
}
static void _V10_Dprint__expr_D216_k393(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D216_k393, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.569 54 0) (bruijn ##.k.951 1 0) (bruijn ##.x.952 0 0) '##intrinsic)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 54-1, 0)), 3,
      upenv->vars[0],
      _var0,
      _V10intrinsic);
}
static void _V10_Dprint__expr_D216_k392(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D216_k392, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.950 1 0) ((bruijn ##.x.559 63 0) (close _V10_Dprint__expr_D216_k393) (bruijn ##.f.412 5 0)) ((bruijn ##.k.951 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 63-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D216_k393, env)}),
      VGetArg(upenv, 5-1, 0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__expr_D216_k395(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D216_k395, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.print-builtin-apply.299 22 0) (bruijn ##.k.946 4 0) (bruijn ##.x.949 0 0) (bruijn ##.xs.421 5 2) #f)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 22-1, 0)), 4,
      upenv->up->up->up->vars[0],
      _var0,
      VGetArg(upenv, 5-1, 2),
      VEncodeBool(false));
}
static void _V10_Dprint__expr_D216_k394(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D216_k394, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.948 0 0) ((bruijn ##.x.570 52 0) (close _V10_Dprint__expr_D216_k395) (bruijn ##.f.412 5 0)) ((bruijn ##.print-closure-apply.300 21 1) (bruijn ##.k.946 3 0) (bruijn ##.f.412 5 0) (bruijn ##.xs.421 4 2) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 52-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D216_k395, env)}),
      VGetArg(upenv, 5-1, 0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 21-1, 1)), 4,
      upenv->up->up->vars[0],
      VGetArg(upenv, 5-1, 0),
      upenv->up->up->up->vars[2],
      VEncodeBool(false));
}
}
static void _V10_Dprint__expr_D216_k391(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D216_k391, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dprint__expr_D216_k392) (close _V10_Dprint__expr_D216_k394))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__expr_D216_k392, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D216_k394, env)}));
}
static void _V10_Dprint__expr_D216_k390(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D216_k390, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.947 0 0) ((bruijn ##.print-builtin-apply.299 19 0) (bruijn ##.k.946 1 0) (bruijn ##.f.412 3 0) (bruijn ##.xs.421 2 2) #f) ((bruijn ##.x.568 52 0) (close _V10_Dprint__expr_D216_k391) (bruijn ##.f.412 3 0)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 19-1, 0)), 4,
      upenv->vars[0],
      upenv->up->up->vars[0],
      upenv->up->vars[2],
      VEncodeBool(false));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 52-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D216_k391, env)}),
      upenv->up->up->vars[0]);
}
}
static void _V10_Dprint__expr_D216_lambda70(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D216_lambda70, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.x.571 48 0) (close _V10_Dprint__expr_D216_k390) (bruijn ##.f.412 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 48-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D216_k390, env)}),
      upenv->up->vars[0]);
}
static void _V10_Dprint__expr_D216_lambda69(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D216_lambda69, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // (if (##inline ##vcore.null? (bruijn ##.tail-expr.420 0 1)) (##vcore.call-with-values (close _V10_Dprint__expr_D216_k389) (close _V10_Dprint__expr_D216_lambda70) (bruijn ##.kk.28.348 16 1)) ((bruijn ##.k.943 0 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var1))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D216_k389, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D216_lambda70, env)}),
      VGetArg(upenv, 16-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__expr_D216_k383(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D216_k383, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.k.928 1 0) (close _V10_Dprint__expr_D216_lambda64) (close _V10_Dprint__expr_D216_lambda69))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      upenv->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D216_lambda64, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D216_lambda69, env)}));
}
static void _V10_Dprint__expr_D216_k382(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D216_k382, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.297 16 1)) ((close _V10_Dprint__expr_D216_k383) (##inline ##vcore.car (bruijn ##.expr.297 16 1))) ((bruijn ##.k.928 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(upenv, 16-1, 1)))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__expr_D216_k383, .env = env }, }, 1,
      VInlineCar2(runtime,
        VGetArg(upenv, 16-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__expr_D216_lambda71(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D216_lambda71, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.593 26 0) (bruijn ##.k.923 0 0) (##string ##.string.1474) (bruijn ##.expr.297 19 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 26-1, 0)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1474.sym, VPOINTER_OTHER),
      VGetArg(upenv, 19-1, 1));
}
static void _V10_Dprint__expr_D216_k398(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D216_k398, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.k.907 16 0) (close _V10_Dprint__expr_D216_lambda71) (bruijn ##.kk.28.348 16 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      VGetArg(upenv, 16-1, 0),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D216_lambda71, env)}),
      VGetArg(upenv, 16-1, 1));
}
static void _V10_Dprint__expr_D216_k397(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D216_k397, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.x.924 0 0) (close _V10_Dprint__expr_D216_k398))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D216_k398, env)}));
}
static void _V10_Dprint__expr_D216_k399(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D216_k399, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.926 0 0) ((bruijn ##.print-global.206 19 0) (bruijn ##.k.925 1 0) (bruijn ##.expr.297 18 1)) ((bruijn ##.print-literal.212 19 6) (bruijn ##.k.925 1 0) (bruijn ##.expr.297 18 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 19-1, 0)), 2,
      upenv->vars[0],
      VGetArg(upenv, 18-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 19-1, 6)), 2,
      upenv->vars[0],
      VGetArg(upenv, 18-1, 1));
}
}
static void _V10_Dprint__expr_D216_lambda72(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D216_lambda72, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.x.567 50 0) (close _V10_Dprint__expr_D216_k399) (bruijn ##.expr.297 17 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 50-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D216_k399, env)}),
      VGetArg(upenv, 17-1, 1));
}
static void _V10_Dprint__expr_D216_k396(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D216_k396, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.call-with-values (close _V10_Dprint__expr_D216_k397) (close _V10_Dprint__expr_D216_lambda72) (bruijn ##.kk.28.348 14 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D216_k397, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D216_lambda72, env)}),
      VGetArg(upenv, 14-1, 1));
}
static void _V10_Dprint__expr_D216_k381(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D216_k381, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dprint__expr_D216_k382) (close _V10_Dprint__expr_D216_k396))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__expr_D216_k382, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D216_k396, env)}));
}
static void _V10_Dprint__expr_D216_k374(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D216_k374, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dprint__expr_D216_k375) (close _V10_Dprint__expr_D216_k381))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__expr_D216_k375, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D216_k381, env)}));
}
static void _V10_Dprint__expr_D216_k369(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D216_k369, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dprint__expr_D216_k370) (close _V10_Dprint__expr_D216_k374))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__expr_D216_k370, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D216_k374, env)}));
}
static void _V10_Dprint__expr_D216_k364(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D216_k364, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dprint__expr_D216_k365) (close _V10_Dprint__expr_D216_k369))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__expr_D216_k365, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D216_k369, env)}));
}
static void _V10_Dprint__expr_D216_k359(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D216_k359, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dprint__expr_D216_k360) (close _V10_Dprint__expr_D216_k364))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__expr_D216_k360, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D216_k364, env)}));
}
static void _V10_Dprint__expr_D216_k354(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D216_k354, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dprint__expr_D216_k355) (close _V10_Dprint__expr_D216_k359))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__expr_D216_k355, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D216_k359, env)}));
}
static void _V10_Dprint__expr_D216_k347(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D216_k347, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dprint__expr_D216_k348) (close _V10_Dprint__expr_D216_k354))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__expr_D216_k348, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D216_k354, env)}));
}
static void _V10_Dprint__expr_D216_k340(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D216_k340, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dprint__expr_D216_k341) (close _V10_Dprint__expr_D216_k347))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__expr_D216_k341, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D216_k347, env)}));
}
static void _V10_Dprint__expr_D216_k327(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D216_k327, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dprint__expr_D216_k328) (close _V10_Dprint__expr_D216_k340))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__expr_D216_k328, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D216_k340, env)}));
}
static void _V10_Dprint__expr_D216_k312(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D216_k312, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dprint__expr_D216_k313) (close _V10_Dprint__expr_D216_k327))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__expr_D216_k313, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D216_k327, env)}));
}
static void _V10_Dprint__expr_D216_k307(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D216_k307, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dprint__expr_D216_k308) (close _V10_Dprint__expr_D216_k312))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__expr_D216_k308, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D216_k312, env)}));
}
static void _V10_Dprint__expr_D216_k302(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D216_k302, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dprint__expr_D216_k303) (close _V10_Dprint__expr_D216_k307))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__expr_D216_k303, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D216_k307, env)}));
}
static void _V10_Dprint__expr_D216_k294(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D216_k294, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dprint__expr_D216_k295) (close _V10_Dprint__expr_D216_k302))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__expr_D216_k295, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D216_k302, env)}));
}
static void _V10_Dprint__expr_D216_lambda50(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D216_lambda50, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V10_Dprint__expr_D216_k290) (close _V10_Dprint__expr_D216_k294))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__expr_D216_k290, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D216_k294, env)}));
}
static void _V10_Dprint__expr_D216_lambda31(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__expr_D216_lambda31, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // (letrec 6 ((close _V10_Dprint__builtin__apply_D299_lambda32) (close _V10_Dprint__closure__apply_D300_lambda34) (close _V10_Dprint__letrec_D301_lambda39) (close _V10_Dprint__define__global_D302_lambda42) (close _V10_Dprint__set_D303_lambda43) (close _V10_Dprint__inline_D304_lambda48)) (##vcore.call/cc (bruijn ##.k.813 1 0) (close _V10_Dprint__expr_D216_lambda50)))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[6]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 6, 6, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__builtin__apply_D299_lambda32, env)});
    env->vars[1] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__closure__apply_D300_lambda34, env)});
    env->vars[2] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__letrec_D301_lambda39, env)});
    env->vars[3] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__define__global_D302_lambda42, env)});
    env->vars[4] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__set_D303_lambda43, env)});
    env->vars[5] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__inline_D304_lambda48, env)});
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      upenv->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D216_lambda50, env)}));
    }
}
static void _V10_Dgen__args_D429_lambda75(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dgen__args_D429_lambda75, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.x.554 50 0) (bruijn ##.k.1100 0 0) (##string ##.string.1475) (bruijn ##.e.431 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 50-1, 0)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1475.sym, VPOINTER_OTHER),
      _var1);
}
static void _V10_Dgen__args_D429_k400(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dgen__args_D429_k400, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.x.561 42 0) (bruijn ##.k.1099 1 0) (close _V10_Dgen__args_D429_lambda75) (bruijn ##.x.1101 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 42-1, 0)), 3,
      upenv->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dgen__args_D429_lambda75, env)}),
      _var0);
}
static void _V10_Dgen__args_D429_lambda74(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dgen__args_D429_lambda74, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##.x.557 45 0) (close _V10_Dgen__args_D429_k400) (bruijn ##.num.430 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 45-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dgen__args_D429_k400, env)}),
      _var1);
}
static void _V10_Dprint__fun__single_D217_k402(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__single_D217_k402, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.needs-used?.428 3 6) ((bruijn ##.x.555 48 0) (bruijn ##.k.1146 0 0) (##string ##.string.1476)) ((bruijn ##.k.1146 0 0) #f))
if(VDecodeBool(
upenv->up->up->vars[6])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 48-1, 0)), 2,
      _var0,
      VEncodePointer(&_V10_Dstring_D1476.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__fun__single_D217_k406(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__single_D217_k406, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.variadic?.426 6 4) ((bruijn ##.x.555 51 0) (bruijn ##.k.1144 0 0) (##string ##.string.1477)) ((bruijn ##.k.1144 0 0) #f))
if(VDecodeBool(
VGetArg(upenv, 6-1, 4))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 51-1, 0)), 2,
      _var0,
      VEncodePointer(&_V10_Dstring_D1477.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__fun__single_D217_k410(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__single_D217_k410, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.555 54 0) (bruijn ##.k.1142 1 0) (##string ##.string.1478))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 54-1, 0)), 2,
      upenv->vars[0],
      VEncodePointer(&_V10_Dstring_D1478.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__fun__single_D217_k409(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__single_D217_k409, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.debug?.199 10 1) ((bruijn ##.x.555 53 0) (close _V10_Dprint__fun__single_D217_k410) (##string ##.string.1479) (bruijn ##.name.423 8 1)) ((bruijn ##.k.1142 0 0) #f))
if(VDecodeBool(
VGetArg(upenv, 10-1, 1))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 53-1, 0)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__single_D217_k410, env)}),
      VEncodePointer(&_V10_Dstring_D1479.sym, VPOINTER_OTHER),
      VGetArg(upenv, 8-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__fun__single_D217_k416(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__single_D217_k416, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.555 58 0) (bruijn ##.k.1133 4 0) (##string ##.string.1480))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 58-1, 0)), 2,
      upenv->up->up->up->vars[0],
      VEncodePointer(&_V10_Dstring_D1480.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__fun__single_D217_k415(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__single_D217_k415, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.x.555 57 0) (close _V10_Dprint__fun__single_D217_k416) (##string ##.string.1481))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 57-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__single_D217_k416, env)}),
      VEncodePointer(&_V10_Dstring_D1481.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__fun__single_D217_k414(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__single_D217_k414, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.x.555 56 0) (close _V10_Dprint__fun__single_D217_k415) (##string ##.string.1482) (bruijn ##.num.425 11 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 56-1, 0)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__single_D217_k415, env)}),
      VEncodePointer(&_V10_Dstring_D1482.sym, VPOINTER_OTHER),
      VGetArg(upenv, 11-1, 3));
}
static void _V10_Dprint__fun__single_D217_k413(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__single_D217_k413, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.x.555 55 0) (close _V10_Dprint__fun__single_D217_k414) (##string ##.string.1483) (bruijn ##.name.423 10 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 55-1, 0)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__single_D217_k414, env)}),
      VEncodePointer(&_V10_Dstring_D1483.sym, VPOINTER_OTHER),
      VGetArg(upenv, 10-1, 1));
}
static void _V10_Dprint__fun__single_D217_k420(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__single_D217_k420, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.555 58 0) (bruijn ##.k.1133 4 0) (##string ##.string.1480))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 58-1, 0)), 2,
      upenv->up->up->up->vars[0],
      VEncodePointer(&_V10_Dstring_D1480.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__fun__single_D217_k419(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__single_D217_k419, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.x.555 57 0) (close _V10_Dprint__fun__single_D217_k420) (##string ##.string.1481))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 57-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__single_D217_k420, env)}),
      VEncodePointer(&_V10_Dstring_D1481.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__fun__single_D217_k418(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__single_D217_k418, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.x.555 56 0) (close _V10_Dprint__fun__single_D217_k419) (##string ##.string.1485) (bruijn ##.num.425 11 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 56-1, 0)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__single_D217_k419, env)}),
      VEncodePointer(&_V10_Dstring_D1485.sym, VPOINTER_OTHER),
      VGetArg(upenv, 11-1, 3));
}
static void _V10_Dprint__fun__single_D217_k417(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__single_D217_k417, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.x.555 55 0) (close _V10_Dprint__fun__single_D217_k418) (##string ##.string.1483) (bruijn ##.name.423 10 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 55-1, 0)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__single_D217_k418, env)}),
      VEncodePointer(&_V10_Dstring_D1483.sym, VPOINTER_OTHER),
      VGetArg(upenv, 10-1, 1));
}
static void _V10_Dprint__fun__single_D217_k412(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__single_D217_k412, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.check-args?.424 9 2) (if (bruijn ##.variadic?.426 9 4) ((bruijn ##.x.555 54 0) (close _V10_Dprint__fun__single_D217_k413) (##string ##.string.1484) (bruijn ##.num.425 9 3)) ((bruijn ##.x.555 54 0) (close _V10_Dprint__fun__single_D217_k417) (##string ##.string.1486) (bruijn ##.num.425 9 3))) ((bruijn ##.k.1133 0 0) #f))
if(VDecodeBool(
VGetArg(upenv, 9-1, 2))) {
if(VDecodeBool(
VGetArg(upenv, 9-1, 4))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 54-1, 0)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__single_D217_k413, env)}),
      VEncodePointer(&_V10_Dstring_D1484.sym, VPOINTER_OTHER),
      VGetArg(upenv, 9-1, 3));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 54-1, 0)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__single_D217_k417, env)}),
      VEncodePointer(&_V10_Dstring_D1486.sym, VPOINTER_OTHER),
      VGetArg(upenv, 9-1, 3));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__fun__single_D217_k426(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__single_D217_k426, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.565 49 0) (bruijn ##.k.1131 1 0) (bruijn ##.args.432 12 0) (bruijn ##.x.1132 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 49-1, 0)), 3,
      upenv->vars[0],
      VGetArg(upenv, 12-1, 0),
      _var0);
}
static void _V10_Dprint__fun__single_D217_k425(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__single_D217_k425, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1130 1 0) ((bruijn ##.k.1131 0 0) (##string ##.string.1487)) ((bruijn ##.x.566 47 0) (close _V10_Dprint__fun__single_D217_k426) (bruijn ##.num.425 13 3) 1))
if(VDecodeBool(
upenv->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodePointer(&_V10_Dstring_D1487.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 47-1, 0)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__single_D217_k426, env)}),
      VGetArg(upenv, 13-1, 3),
      VEncodeInt(1l));
}
}
static void _V10_Dprint__fun__single_D217_k427(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__single_D217_k427, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.555 58 0) (bruijn ##.k.1127 3 0) (##string ##.string.1488) (bruijn ##.num.425 13 3) (bruijn ##.x.1129 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 58-1, 0)), 4,
      upenv->up->up->vars[0],
      VEncodePointer(&_V10_Dstring_D1488.sym, VPOINTER_OTHER),
      VGetArg(upenv, 13-1, 3),
      _var0);
}
static void _V10_Dprint__fun__single_D217_k424(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__single_D217_k424, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dprint__fun__single_D217_k425) (close _V10_Dprint__fun__single_D217_k427))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__fun__single_D217_k425, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__single_D217_k427, env)}));
}
static void _V10_Dprint__fun__single_D217_k423(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__single_D217_k423, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.x.564 47 0) (close _V10_Dprint__fun__single_D217_k424) (bruijn ##.num.425 11 3) 0)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 47-1, 0)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__single_D217_k424, env)}),
      VGetArg(upenv, 11-1, 3),
      VEncodeInt(0l));
}
static void _V10_Dprint__fun__single_D217_k422(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__single_D217_k422, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.variadic?.426 10 4) ((bruijn ##.x.555 55 0) (close _V10_Dprint__fun__single_D217_k423) (##string ##.string.1489)) ((bruijn ##.k.1127 0 0) #f))
if(VDecodeBool(
VGetArg(upenv, 10-1, 4))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 55-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__single_D217_k423, env)}),
      VEncodePointer(&_V10_Dstring_D1489.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__fun__single_D217_k431(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__single_D217_k431, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.variadic?.426 13 4) ((bruijn ##.x.553 60 0) (bruijn ##.k.1126 0 0) (bruijn ##.num.425 13 3) 1) ((bruijn ##.k.1126 0 0) (bruijn ##.num.425 13 3)))
if(VDecodeBool(
VGetArg(upenv, 13-1, 4))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 60-1, 0)), 3,
      _var0,
      VGetArg(upenv, 13-1, 3),
      VEncodeInt(1l));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(upenv, 13-1, 3));
}
}
static void _V10_Dprint__fun__single_D217_k435(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__single_D217_k435, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.variadic?.426 16 4) ((bruijn ##.x.553 63 0) (bruijn ##.k.1124 0 0) (bruijn ##.num.425 16 3) 1) ((bruijn ##.k.1124 0 0) (bruijn ##.num.425 16 3)))
if(VDecodeBool(
VGetArg(upenv, 16-1, 4))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 63-1, 0)), 3,
      _var0,
      VGetArg(upenv, 16-1, 3),
      VEncodeInt(1l));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(upenv, 16-1, 3));
}
}
static void _V10_Dprint__fun__single_D217_k439(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__single_D217_k439, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.variadic?.426 19 4) ((bruijn ##.x.555 64 0) (bruijn ##.k.1117 7 0) (##string ##.string.1490) (bruijn ##.num.425 19 3)) ((bruijn ##.k.1117 7 0) #f))
if(VDecodeBool(
VGetArg(upenv, 19-1, 4))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 64-1, 0)), 3,
      VGetArg(upenv, 7-1, 0),
      VEncodePointer(&_V10_Dstring_D1490.sym, VPOINTER_OTHER),
      VGetArg(upenv, 19-1, 3));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 7-1, 0)), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__fun__single_D217_lambda76(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__single_D217_lambda76, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  // ((bruijn ##.x.555 64 0) (bruijn ##.k.1122 0 0) (##string ##.string.1491) (bruijn ##.i.435 0 1) (bruijn ##.arg.436 0 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 64-1, 0)), 4,
      _var0,
      VEncodePointer(&_V10_Dstring_D1491.sym, VPOINTER_OTHER),
      _var1,
      _var2);
}
static void _V10_Dprint__fun__single_D217_k438(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__single_D217_k438, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.x.592 26 0) (close _V10_Dprint__fun__single_D217_k439) (close _V10_Dprint__fun__single_D217_lambda76) (bruijn ##.x.1123 0 0) (bruijn ##.args.432 16 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 26-1, 0)), 4,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__single_D217_k439, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__single_D217_lambda76, env)}),
      _var0,
      VGetArg(upenv, 16-1, 0));
}
static void _V10_Dprint__fun__single_D217_k437(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__single_D217_k437, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.x.557 60 0) (close _V10_Dprint__fun__single_D217_k438) (bruijn ##.num.425 17 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 60-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__single_D217_k438, env)}),
      VGetArg(upenv, 17-1, 3));
}
static void _V10_Dprint__fun__single_D217_k436(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__single_D217_k436, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.x.555 61 0) (close _V10_Dprint__fun__single_D217_k437) (##string ##.string.1492) (bruijn ##.nargs.434 0 0) (bruijn ##.nargs.434 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 61-1, 0)), 4,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__single_D217_k437, env)}),
      VEncodePointer(&_V10_Dstring_D1492.sym, VPOINTER_OTHER),
      _var0,
      _var0);
}
static void _V10_Dprint__fun__single_D217_k434(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__single_D217_k434, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dprint__fun__single_D217_k435) (close _V10_Dprint__fun__single_D217_k436))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__fun__single_D217_k435, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__single_D217_k436, env)}));
}
static void _V10_Dprint__fun__single_D217_k433(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__single_D217_k433, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.x.555 59 0) (close _V10_Dprint__fun__single_D217_k434) (##string ##.string.1493))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 59-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__single_D217_k434, env)}),
      VEncodePointer(&_V10_Dstring_D1493.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__fun__single_D217_k432(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__single_D217_k432, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.x.555 58 0) (close _V10_Dprint__fun__single_D217_k433) (##string ##.string.1494) (bruijn ##.x.1125 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 58-1, 0)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__single_D217_k433, env)}),
      VEncodePointer(&_V10_Dstring_D1494.sym, VPOINTER_OTHER),
      _var0);
}
static void _V10_Dprint__fun__single_D217_k430(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__single_D217_k430, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1116 1 0) ((close _V10_Dprint__fun__single_D217_k431) (close _V10_Dprint__fun__single_D217_k432)) ((bruijn ##.k.1117 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__fun__single_D217_k431, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__single_D217_k432, env)}));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__fun__single_D217_k442(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__single_D217_k442, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.variadic?.426 14 4) ((bruijn ##.x.563 51 0) (bruijn ##.k.1114 0 0) (bruijn ##.args.432 12 0) (##inline ##vcore.qcons '(##string ##.string.1495) '())) ((bruijn ##.k.1114 0 0) (bruijn ##.args.432 12 0)))
if(VDecodeBool(
VGetArg(upenv, 14-1, 4))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 51-1, 0)), 3,
      _var0,
      VGetArg(upenv, 12-1, 0),
      VInlineCons2(runtime,
        VEncodePointer(&_V10_Dstring_D1495.sym, VPOINTER_OTHER),
        VNULL));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(upenv, 12-1, 0));
}
}
static void _V10_Dprint__fun__single_D217_k444(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__single_D217_k444, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.555 60 0) (bruijn ##.k.1098 15 0) (##string ##.string.1432))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 60-1, 0)), 2,
      VGetArg(upenv, 15-1, 0),
      VEncodePointer(&_V10_Dstring_D1432.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__fun__single_D217_k443(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__single_D217_k443, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.print-expr.216 15 10) (close _V10_Dprint__fun__single_D217_k444) (bruijn ##.body.427 14 5) (bruijn ##.x.1113 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 15-1, 10)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__single_D217_k444, env)}),
      VGetArg(upenv, 14-1, 5),
      _var0);
}
static void _V10_Dprint__fun__single_D217_k441(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__single_D217_k441, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dprint__fun__single_D217_k442) (close _V10_Dprint__fun__single_D217_k443))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__fun__single_D217_k442, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__single_D217_k443, env)}));
}
static void _V10_Dprint__fun__single_D217_k440(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__single_D217_k440, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.x.555 57 0) (close _V10_Dprint__fun__single_D217_k441) (##string ##.string.1496) (bruijn ##.body.427 12 5))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 57-1, 0)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__single_D217_k441, env)}),
      VEncodePointer(&_V10_Dstring_D1496.sym, VPOINTER_OTHER),
      VGetArg(upenv, 12-1, 5));
}
static void _V10_Dprint__fun__single_D217_k429(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__single_D217_k429, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dprint__fun__single_D217_k430) (close _V10_Dprint__fun__single_D217_k440))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__fun__single_D217_k430, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__single_D217_k440, env)}));
}
static void _V10_Dprint__fun__single_D217_k428(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__single_D217_k428, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.closes?.215 11 9) (close _V10_Dprint__fun__single_D217_k429) (bruijn ##.body.427 10 5))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 11-1, 9)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__single_D217_k429, env)}),
      VGetArg(upenv, 10-1, 5));
}
static void _V10_Dprint__fun__single_D217_k421(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__single_D217_k421, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dprint__fun__single_D217_k422) (close _V10_Dprint__fun__single_D217_k428))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__fun__single_D217_k422, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__single_D217_k428, env)}));
}
static void _V10_Dprint__fun__single_D217_k411(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__single_D217_k411, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dprint__fun__single_D217_k412) (close _V10_Dprint__fun__single_D217_k421))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__fun__single_D217_k412, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__single_D217_k421, env)}));
}
static void _V10_Dprint__fun__single_D217_k408(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__single_D217_k408, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dprint__fun__single_D217_k409) (close _V10_Dprint__fun__single_D217_k411))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__fun__single_D217_k409, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__single_D217_k411, env)}));
}
static void _V10_Dprint__fun__single_D217_k407(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__single_D217_k407, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.x.555 51 0) (close _V10_Dprint__fun__single_D217_k408) (##string ##.string.1497))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 51-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__single_D217_k408, env)}),
      VEncodePointer(&_V10_Dstring_D1497.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__fun__single_D217_k405(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__single_D217_k405, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dprint__fun__single_D217_k406) (close _V10_Dprint__fun__single_D217_k407))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__fun__single_D217_k406, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__single_D217_k407, env)}));
}
static void _V10_Dprint__fun__single_D217_lambda77(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__single_D217_lambda77, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.x.555 50 0) (bruijn ##.k.1145 0 0) (##string ##.string.1498) (bruijn ##.arg.433 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 50-1, 0)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1498.sym, VPOINTER_OTHER),
      _var1);
}
static void _V10_Dprint__fun__single_D217_k404(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__single_D217_k404, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.x.592 12 0) (close _V10_Dprint__fun__single_D217_k405) (close _V10_Dprint__fun__single_D217_lambda77) (bruijn ##.args.432 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 12-1, 0)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__single_D217_k405, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__single_D217_lambda77, env)}),
      upenv->up->vars[0]);
}
static void _V10_Dprint__fun__single_D217_k403(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__single_D217_k403, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.x.555 48 0) (close _V10_Dprint__fun__single_D217_k404) (##string ##.string.1499) (bruijn ##.name.423 3 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 48-1, 0)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__single_D217_k404, env)}),
      VEncodePointer(&_V10_Dstring_D1499.sym, VPOINTER_OTHER),
      upenv->up->up->vars[1]);
}
static void _V10_Dprint__fun__single_D217_k401(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__single_D217_k401, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dprint__fun__single_D217_k402) (close _V10_Dprint__fun__single_D217_k403))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__fun__single_D217_k402, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__single_D217_k403, env)}));
}
static void _V10_Dprint__fun__single_D217_lambda73(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4, VWORD _var5, VWORD _var6) {
 if(argc != 7) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__single_D217_lambda73, got ~D~N"
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
  // (letrec 1 ((close _V10_Dgen__args_D429_lambda74)) ((bruijn ##.gen-args.429 0 0) (close _V10_Dprint__fun__single_D217_k401) (bruijn ##.num.425 1 3)))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dgen__args_D429_lambda74, env)});
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, env->vars[0]), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__single_D217_k401, env)}),
      upenv->vars[3]);
    }
}
static void _V10_Dprint__fun__case_D218_k465(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D218_k465, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.555 66 0) (bruijn ##.k.1147 21 0) (##string ##.string.1435))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 66-1, 0)), 2,
      VGetArg(upenv, 21-1, 0),
      VEncodePointer(&_V10_Dstring_D1435.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__fun__case_D218_k464(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D218_k464, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.x.555 65 0) (close _V10_Dprint__fun__case_D218_k465) (##string ##.string.1500) (bruijn ##.name.438 19 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 65-1, 0)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__case_D218_k465, env)}),
      VEncodePointer(&_V10_Dstring_D1500.sym, VPOINTER_OTHER),
      VGetArg(upenv, 19-1, 0));
}
static void _V10_Dprint__fun__case_D218_k473(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D218_k473, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1191 0 0) (bruijn ##.k.1182 7 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(upenv, 7-1, 0));
}
static void _V10_Dprint__fun__case_D218_k474(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D218_k474, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.555 75 0) (bruijn ##.k.1192 1 0) (##string ##.string.1501) (##inline ##vcore.car (bruijn ##.e.478 10 1)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 75-1, 0)), 3,
      upenv->vars[0],
      VEncodePointer(&_V10_Dstring_D1501.sym, VPOINTER_OTHER),
      VInlineCar2(runtime,
        VGetArg(upenv, 10-1, 1)));
}
static void _V10_Dprint__fun__case_D218_lambda81(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D218_lambda81, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.x.555 74 0) (close _V10_Dprint__fun__case_D218_k474) (##string ##.string.1502) (##inline ##vcore.car (bruijn ##.expr.115.485 4 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 74-1, 0)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__case_D218_k474, env)}),
      VEncodePointer(&_V10_Dstring_D1502.sym, VPOINTER_OTHER),
      VInlineCar2(runtime,
        upenv->up->up->up->vars[0]));
}
static void _V10_Dprint__fun__case_D218_k472(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D218_k472, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.117.488 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.117.488 0 0))) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.114.484 4 0))) (##vcore.call-with-values (close _V10_Dprint__fun__case_D218_k473) (close _V10_Dprint__fun__case_D218_lambda81) (bruijn ##.kk.110.479 7 1)) ((bruijn ##.k.1182 6 0) #f)) ((bruijn ##.k.1182 6 0) #f)) ((bruijn ##.k.1182 6 0) #f))
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
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__case_D218_k473, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__case_D218_lambda81, env)}),
      VGetArg(upenv, 7-1, 1));
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
static void _V10_Dprint__fun__case_D218_k471(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D218_k471, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1187 0 0) ((close _V10_Dprint__fun__case_D218_k472) (##inline ##vcore.cdr (bruijn ##.expr.116.487 1 0))) ((bruijn ##.k.1182 5 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__fun__case_D218_k472, .env = env }, }, 1,
      VInlineCdr2(runtime,
        upenv->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 5-1, 0)), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__fun__case_D218_k470(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D218_k470, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.116.487 0 0)) ((bruijn ##.x.558 68 0) (close _V10_Dprint__fun__case_D218_k471) '+ (##inline ##vcore.car (bruijn ##.expr.116.487 0 0))) ((bruijn ##.k.1182 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 68-1, 0)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__case_D218_k471, env)}),
      _V0_P,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__fun__case_D218_k469(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D218_k469, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.115.485 0 0)) ((close _V10_Dprint__fun__case_D218_k470) (##inline ##vcore.cdr (bruijn ##.expr.115.485 0 0))) ((bruijn ##.k.1182 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__fun__case_D218_k470, .env = env }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__fun__case_D218_k468(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D218_k468, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.114.484 0 0)) ((close _V10_Dprint__fun__case_D218_k469) (##inline ##vcore.car (bruijn ##.expr.114.484 0 0))) ((bruijn ##.k.1182 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__fun__case_D218_k469, .env = env }, }, 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__fun__case_D218_k467(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D218_k467, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.113.483 0 0)) ((close _V10_Dprint__fun__case_D218_k468) (##inline ##vcore.cdr (bruijn ##.expr.113.483 0 0))) ((bruijn ##.k.1182 1 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__fun__case_D218_k468, .env = env }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__fun__case_D218_k466(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D218_k466, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.e.478 2 1)) ((close _V10_Dprint__fun__case_D218_k467) (##inline ##vcore.cdr (bruijn ##.e.478 2 1))) ((bruijn ##.k.1182 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->up->vars[1]))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__fun__case_D218_k467, .env = env }, }, 1,
      VInlineCdr2(runtime,
        upenv->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__fun__case_D218_k481(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D218_k481, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1176 0 0) (bruijn ##.k.1169 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(upenv, 5-1, 0));
}
static void _V10_Dprint__fun__case_D218_k482(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D218_k482, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.555 74 0) (bruijn ##.k.1177 1 0) (##string ##.string.1503) (##inline ##vcore.car (bruijn ##.e.478 9 1)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 74-1, 0)), 3,
      upenv->vars[0],
      VEncodePointer(&_V10_Dstring_D1503.sym, VPOINTER_OTHER),
      VInlineCar2(runtime,
        VGetArg(upenv, 9-1, 1)));
}
static void _V10_Dprint__fun__case_D218_lambda82(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D218_lambda82, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.x.555 73 0) (close _V10_Dprint__fun__case_D218_k482) (##string ##.string.1502) (##inline ##vcore.car (bruijn ##.expr.121.493 2 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 73-1, 0)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__case_D218_k482, env)}),
      VEncodePointer(&_V10_Dstring_D1502.sym, VPOINTER_OTHER),
      VInlineCar2(runtime,
        upenv->up->vars[0]));
}
static void _V10_Dprint__fun__case_D218_k480(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D218_k480, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.122.495 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.122.495 0 0))) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.120.492 2 0))) (##vcore.call-with-values (close _V10_Dprint__fun__case_D218_k481) (close _V10_Dprint__fun__case_D218_lambda82) (bruijn ##.kk.110.479 6 1)) ((bruijn ##.k.1169 4 0) #f)) ((bruijn ##.k.1169 4 0) #f)) ((bruijn ##.k.1169 4 0) #f))
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
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__case_D218_k481, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__case_D218_lambda82, env)}),
      VGetArg(upenv, 6-1, 1));
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
static void _V10_Dprint__fun__case_D218_k479(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D218_k479, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.121.493 0 0)) ((close _V10_Dprint__fun__case_D218_k480) (##inline ##vcore.cdr (bruijn ##.expr.121.493 0 0))) ((bruijn ##.k.1169 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__fun__case_D218_k480, .env = env }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__fun__case_D218_k478(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D218_k478, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.120.492 0 0)) ((close _V10_Dprint__fun__case_D218_k479) (##inline ##vcore.car (bruijn ##.expr.120.492 0 0))) ((bruijn ##.k.1169 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__fun__case_D218_k479, .env = env }, }, 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__fun__case_D218_k477(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D218_k477, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.119.491 0 0)) ((close _V10_Dprint__fun__case_D218_k478) (##inline ##vcore.cdr (bruijn ##.expr.119.491 0 0))) ((bruijn ##.k.1169 1 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__fun__case_D218_k478, .env = env }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__fun__case_D218_k476(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D218_k476, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.e.478 3 1)) ((close _V10_Dprint__fun__case_D218_k477) (##inline ##vcore.cdr (bruijn ##.e.478 3 1))) ((bruijn ##.k.1169 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->up->up->vars[1]))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__fun__case_D218_k477, .env = env }, }, 1,
      VInlineCdr2(runtime,
        upenv->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__fun__case_D218_k483(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D218_k483, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.562 61 0) (bruijn ##.k.1165 2 0) (##string ##.string.1504))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 61-1, 0)), 2,
      upenv->up->vars[0],
      VEncodePointer(&_V10_Dstring_D1504.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__fun__case_D218_k475(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D218_k475, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dprint__fun__case_D218_k476) (close _V10_Dprint__fun__case_D218_k483))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__fun__case_D218_k476, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__case_D218_k483, env)}));
}
static void _V10_Dprint__fun__case_D218_lambda80(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D218_lambda80, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V10_Dprint__fun__case_D218_k466) (close _V10_Dprint__fun__case_D218_k475))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__fun__case_D218_k466, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__case_D218_k475, env)}));
}
static void _V10_Dprint__fun__case_D218_lambda79(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D218_lambda79, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (##vcore.call/cc (bruijn ##.k.1164 0 0) (close _V10_Dprint__fun__case_D218_lambda80))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__case_D218_lambda80, env)}));
}
static void _V10_Dprint__fun__case_D218_k463(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D218_k463, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.x.592 27 0) (close _V10_Dprint__fun__case_D218_k464) (close _V10_Dprint__fun__case_D218_lambda79) (bruijn ##.cases.440 14 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 27-1, 0)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__case_D218_k464, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__case_D218_lambda79, env)}),
      VGetArg(upenv, 14-1, 0));
}
static void _V10_Dprint__fun__case_D218_k462(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D218_k462, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.x.555 63 0) (close _V10_Dprint__fun__case_D218_k463) (##string ##.string.1505) (bruijn ##.name.438 17 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 63-1, 0)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__case_D218_k463, env)}),
      VEncodePointer(&_V10_Dstring_D1505.sym, VPOINTER_OTHER),
      VGetArg(upenv, 17-1, 0));
}
static void _V10_Dprint__fun__case_D218_k461(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D218_k461, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.x.555 62 0) (close _V10_Dprint__fun__case_D218_k462) (##string ##.string.1506))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 62-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__case_D218_k462, env)}),
      VEncodePointer(&_V10_Dstring_D1506.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__fun__case_D218_k460(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D218_k460, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.x.555 61 0) (close _V10_Dprint__fun__case_D218_k461) (##string ##.string.1507) (bruijn ##.name.438 15 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 61-1, 0)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__case_D218_k461, env)}),
      VEncodePointer(&_V10_Dstring_D1507.sym, VPOINTER_OTHER),
      VGetArg(upenv, 15-1, 0));
}
static void _V10_Dprint__fun__case_D218_k459(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D218_k459, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.x.555 60 0) (close _V10_Dprint__fun__case_D218_k460) (##string ##.string.1508))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 60-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__case_D218_k460, env)}),
      VEncodePointer(&_V10_Dstring_D1508.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__fun__case_D218_k458(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D218_k458, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.x.555 59 0) (close _V10_Dprint__fun__case_D218_k459) (##string ##.string.1509))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 59-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__case_D218_k459, env)}),
      VEncodePointer(&_V10_Dstring_D1509.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__fun__case_D218_k457(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D218_k457, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.x.555 58 0) (close _V10_Dprint__fun__case_D218_k458) (##string ##.string.1510))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 58-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__case_D218_k458, env)}),
      VEncodePointer(&_V10_Dstring_D1510.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__fun__case_D218_k456(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D218_k456, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.x.555 57 0) (close _V10_Dprint__fun__case_D218_k457) (##string ##.string.1511) (bruijn ##.name.438 11 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 57-1, 0)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__case_D218_k457, env)}),
      VEncodePointer(&_V10_Dstring_D1511.sym, VPOINTER_OTHER),
      VGetArg(upenv, 11-1, 0));
}
static void _V10_Dprint__fun__case_D218_k491(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D218_k491, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1223 0 0) (bruijn ##.k.1214 7 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(upenv, 7-1, 0));
}
static void _V10_Dprint__fun__case_D218_lambda85(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D218_lambda85, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.print-fun-single.217 22 11) (bruijn ##.k.1224 0 0) (##inline ##vcore.car (bruijn ##.e.458 9 1)) #f (##inline ##vcore.car (bruijn ##.expr.102.465 4 0)) #t (##inline ##vcore.car (bruijn ##.expr.104.468 1 0)) #t)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 22-1, 11)), 7,
      _var0,
      VInlineCar2(runtime,
        VGetArg(upenv, 9-1, 1)),
      VEncodeBool(false),
      VInlineCar2(runtime,
        upenv->up->up->up->vars[0]),
      VEncodeBool(true),
      VInlineCar2(runtime,
        upenv->vars[0]),
      VEncodeBool(true));
}
static void _V10_Dprint__fun__case_D218_k490(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D218_k490, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.104.468 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.104.468 0 0))) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.101.464 4 0))) (##vcore.call-with-values (close _V10_Dprint__fun__case_D218_k491) (close _V10_Dprint__fun__case_D218_lambda85) (bruijn ##.kk.97.459 7 1)) ((bruijn ##.k.1214 6 0) #f)) ((bruijn ##.k.1214 6 0) #f)) ((bruijn ##.k.1214 6 0) #f))
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
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__case_D218_k491, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__case_D218_lambda85, env)}),
      VGetArg(upenv, 7-1, 1));
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
static void _V10_Dprint__fun__case_D218_k489(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D218_k489, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1219 0 0) ((close _V10_Dprint__fun__case_D218_k490) (##inline ##vcore.cdr (bruijn ##.expr.103.467 1 0))) ((bruijn ##.k.1214 5 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__fun__case_D218_k490, .env = env }, }, 1,
      VInlineCdr2(runtime,
        upenv->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 5-1, 0)), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__fun__case_D218_k488(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D218_k488, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.103.467 0 0)) ((bruijn ##.x.558 60 0) (close _V10_Dprint__fun__case_D218_k489) '+ (##inline ##vcore.car (bruijn ##.expr.103.467 0 0))) ((bruijn ##.k.1214 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 60-1, 0)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__case_D218_k489, env)}),
      _V0_P,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__fun__case_D218_k487(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D218_k487, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.102.465 0 0)) ((close _V10_Dprint__fun__case_D218_k488) (##inline ##vcore.cdr (bruijn ##.expr.102.465 0 0))) ((bruijn ##.k.1214 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__fun__case_D218_k488, .env = env }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__fun__case_D218_k486(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D218_k486, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.101.464 0 0)) ((close _V10_Dprint__fun__case_D218_k487) (##inline ##vcore.car (bruijn ##.expr.101.464 0 0))) ((bruijn ##.k.1214 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__fun__case_D218_k487, .env = env }, }, 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__fun__case_D218_k485(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D218_k485, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.100.463 0 0)) ((close _V10_Dprint__fun__case_D218_k486) (##inline ##vcore.cdr (bruijn ##.expr.100.463 0 0))) ((bruijn ##.k.1214 1 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__fun__case_D218_k486, .env = env }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__fun__case_D218_k484(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D218_k484, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.e.458 2 1)) ((close _V10_Dprint__fun__case_D218_k485) (##inline ##vcore.cdr (bruijn ##.e.458 2 1))) ((bruijn ##.k.1214 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->up->vars[1]))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__fun__case_D218_k485, .env = env }, }, 1,
      VInlineCdr2(runtime,
        upenv->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__fun__case_D218_k498(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D218_k498, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1209 0 0) (bruijn ##.k.1202 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(upenv, 5-1, 0));
}
static void _V10_Dprint__fun__case_D218_lambda86(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D218_lambda86, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.print-fun-single.217 21 11) (bruijn ##.k.1210 0 0) (##inline ##vcore.car (bruijn ##.e.458 8 1)) #f (##inline ##vcore.car (bruijn ##.expr.108.474 2 0)) #f (##inline ##vcore.car (bruijn ##.expr.109.476 1 0)) #t)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 21-1, 11)), 7,
      _var0,
      VInlineCar2(runtime,
        VGetArg(upenv, 8-1, 1)),
      VEncodeBool(false),
      VInlineCar2(runtime,
        upenv->up->vars[0]),
      VEncodeBool(false),
      VInlineCar2(runtime,
        upenv->vars[0]),
      VEncodeBool(true));
}
static void _V10_Dprint__fun__case_D218_k497(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D218_k497, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.109.476 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.109.476 0 0))) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.107.473 2 0))) (##vcore.call-with-values (close _V10_Dprint__fun__case_D218_k498) (close _V10_Dprint__fun__case_D218_lambda86) (bruijn ##.kk.97.459 6 1)) ((bruijn ##.k.1202 4 0) #f)) ((bruijn ##.k.1202 4 0) #f)) ((bruijn ##.k.1202 4 0) #f))
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
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__case_D218_k498, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__case_D218_lambda86, env)}),
      VGetArg(upenv, 6-1, 1));
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
static void _V10_Dprint__fun__case_D218_k496(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D218_k496, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.108.474 0 0)) ((close _V10_Dprint__fun__case_D218_k497) (##inline ##vcore.cdr (bruijn ##.expr.108.474 0 0))) ((bruijn ##.k.1202 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__fun__case_D218_k497, .env = env }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__fun__case_D218_k495(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D218_k495, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.107.473 0 0)) ((close _V10_Dprint__fun__case_D218_k496) (##inline ##vcore.car (bruijn ##.expr.107.473 0 0))) ((bruijn ##.k.1202 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__fun__case_D218_k496, .env = env }, }, 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__fun__case_D218_k494(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D218_k494, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.106.472 0 0)) ((close _V10_Dprint__fun__case_D218_k495) (##inline ##vcore.cdr (bruijn ##.expr.106.472 0 0))) ((bruijn ##.k.1202 1 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__fun__case_D218_k495, .env = env }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__fun__case_D218_k493(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D218_k493, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.e.458 3 1)) ((close _V10_Dprint__fun__case_D218_k494) (##inline ##vcore.cdr (bruijn ##.e.458 3 1))) ((bruijn ##.k.1202 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->up->up->vars[1]))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__fun__case_D218_k494, .env = env }, }, 1,
      VInlineCdr2(runtime,
        upenv->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__fun__case_D218_k499(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D218_k499, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.562 53 0) (bruijn ##.k.1198 2 0) (##string ##.string.1504))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 53-1, 0)), 2,
      upenv->up->vars[0],
      VEncodePointer(&_V10_Dstring_D1504.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__fun__case_D218_k492(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D218_k492, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dprint__fun__case_D218_k493) (close _V10_Dprint__fun__case_D218_k499))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__fun__case_D218_k493, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__case_D218_k499, env)}));
}
static void _V10_Dprint__fun__case_D218_lambda84(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D218_lambda84, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V10_Dprint__fun__case_D218_k484) (close _V10_Dprint__fun__case_D218_k492))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__fun__case_D218_k484, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__case_D218_k492, env)}));
}
static void _V10_Dprint__fun__case_D218_lambda83(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D218_lambda83, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (##vcore.call/cc (bruijn ##.k.1197 0 0) (close _V10_Dprint__fun__case_D218_lambda84))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__case_D218_lambda84, env)}));
}
static void _V10_Dprint__fun__case_D218_k455(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D218_k455, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.x.592 19 0) (close _V10_Dprint__fun__case_D218_k456) (close _V10_Dprint__fun__case_D218_lambda83) (bruijn ##.cases.440 6 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 19-1, 0)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__case_D218_k456, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__case_D218_lambda83, env)}),
      VGetArg(upenv, 6-1, 0));
}
static void _V10_Dprint__fun__case_D218_k454(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D218_k454, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.x.555 55 0) (close _V10_Dprint__fun__case_D218_k455) (##string ##.string.1432))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 55-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__case_D218_k455, env)}),
      VEncodePointer(&_V10_Dstring_D1432.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__fun__case_D218_k453(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D218_k453, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.x.555 54 0) (close _V10_Dprint__fun__case_D218_k454) (##string ##.string.1512))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 54-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__case_D218_k454, env)}),
      VEncodePointer(&_V10_Dstring_D1512.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__fun__case_D218_k507(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D218_k507, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1254 0 0) (bruijn ##.k.1245 7 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(upenv, 7-1, 0));
}
static void _V10_Dprint__fun__case_D218_lambda89(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D218_lambda89, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.555 63 0) (bruijn ##.k.1255 0 0) (##string ##.string.1513) (##inline ##vcore.car (bruijn ##.expr.89.448 4 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 63-1, 0)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1513.sym, VPOINTER_OTHER),
      VInlineCar2(runtime,
        upenv->up->up->up->vars[0]));
}
static void _V10_Dprint__fun__case_D218_k506(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D218_k506, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.91.451 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.91.451 0 0))) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.88.447 4 0))) (##vcore.call-with-values (close _V10_Dprint__fun__case_D218_k507) (close _V10_Dprint__fun__case_D218_lambda89) (bruijn ##.kk.84.442 7 1)) ((bruijn ##.k.1245 6 0) #f)) ((bruijn ##.k.1245 6 0) #f)) ((bruijn ##.k.1245 6 0) #f))
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
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__case_D218_k507, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__case_D218_lambda89, env)}),
      VGetArg(upenv, 7-1, 1));
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
static void _V10_Dprint__fun__case_D218_k505(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D218_k505, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1250 0 0) ((close _V10_Dprint__fun__case_D218_k506) (##inline ##vcore.cdr (bruijn ##.expr.90.450 1 0))) ((bruijn ##.k.1245 5 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__fun__case_D218_k506, .env = env }, }, 1,
      VInlineCdr2(runtime,
        upenv->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 5-1, 0)), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__fun__case_D218_k504(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D218_k504, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.90.450 0 0)) ((bruijn ##.x.558 57 0) (close _V10_Dprint__fun__case_D218_k505) '+ (##inline ##vcore.car (bruijn ##.expr.90.450 0 0))) ((bruijn ##.k.1245 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 57-1, 0)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__case_D218_k505, env)}),
      _V0_P,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__fun__case_D218_k503(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D218_k503, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.89.448 0 0)) ((close _V10_Dprint__fun__case_D218_k504) (##inline ##vcore.cdr (bruijn ##.expr.89.448 0 0))) ((bruijn ##.k.1245 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__fun__case_D218_k504, .env = env }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__fun__case_D218_k502(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D218_k502, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.88.447 0 0)) ((close _V10_Dprint__fun__case_D218_k503) (##inline ##vcore.car (bruijn ##.expr.88.447 0 0))) ((bruijn ##.k.1245 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__fun__case_D218_k503, .env = env }, }, 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__fun__case_D218_k501(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D218_k501, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.87.446 0 0)) ((close _V10_Dprint__fun__case_D218_k502) (##inline ##vcore.cdr (bruijn ##.expr.87.446 0 0))) ((bruijn ##.k.1245 1 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__fun__case_D218_k502, .env = env }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__fun__case_D218_k500(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D218_k500, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.e.441 2 1)) ((close _V10_Dprint__fun__case_D218_k501) (##inline ##vcore.cdr (bruijn ##.e.441 2 1))) ((bruijn ##.k.1245 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->up->vars[1]))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__fun__case_D218_k501, .env = env }, }, 1,
      VInlineCdr2(runtime,
        upenv->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__fun__case_D218_k514(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D218_k514, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1240 0 0) (bruijn ##.k.1233 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(upenv, 5-1, 0));
}
static void _V10_Dprint__fun__case_D218_lambda90(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D218_lambda90, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.555 62 0) (bruijn ##.k.1241 0 0) (##string ##.string.1514) (##inline ##vcore.car (bruijn ##.expr.95.455 2 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 62-1, 0)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1514.sym, VPOINTER_OTHER),
      VInlineCar2(runtime,
        upenv->up->vars[0]));
}
static void _V10_Dprint__fun__case_D218_k513(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D218_k513, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.96.457 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.96.457 0 0))) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.94.454 2 0))) (##vcore.call-with-values (close _V10_Dprint__fun__case_D218_k514) (close _V10_Dprint__fun__case_D218_lambda90) (bruijn ##.kk.84.442 6 1)) ((bruijn ##.k.1233 4 0) #f)) ((bruijn ##.k.1233 4 0) #f)) ((bruijn ##.k.1233 4 0) #f))
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
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__case_D218_k514, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__case_D218_lambda90, env)}),
      VGetArg(upenv, 6-1, 1));
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
static void _V10_Dprint__fun__case_D218_k512(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D218_k512, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.95.455 0 0)) ((close _V10_Dprint__fun__case_D218_k513) (##inline ##vcore.cdr (bruijn ##.expr.95.455 0 0))) ((bruijn ##.k.1233 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__fun__case_D218_k513, .env = env }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__fun__case_D218_k511(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D218_k511, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.94.454 0 0)) ((close _V10_Dprint__fun__case_D218_k512) (##inline ##vcore.car (bruijn ##.expr.94.454 0 0))) ((bruijn ##.k.1233 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__fun__case_D218_k512, .env = env }, }, 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__fun__case_D218_k510(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D218_k510, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.93.453 0 0)) ((close _V10_Dprint__fun__case_D218_k511) (##inline ##vcore.cdr (bruijn ##.expr.93.453 0 0))) ((bruijn ##.k.1233 1 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__fun__case_D218_k511, .env = env }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__fun__case_D218_k509(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D218_k509, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.e.441 3 1)) ((close _V10_Dprint__fun__case_D218_k510) (##inline ##vcore.cdr (bruijn ##.e.441 3 1))) ((bruijn ##.k.1233 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->up->up->vars[1]))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__fun__case_D218_k510, .env = env }, }, 1,
      VInlineCdr2(runtime,
        upenv->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__fun__case_D218_k515(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D218_k515, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.562 50 0) (bruijn ##.k.1229 2 0) (##string ##.string.1504))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 50-1, 0)), 2,
      upenv->up->vars[0],
      VEncodePointer(&_V10_Dstring_D1504.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__fun__case_D218_k508(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D218_k508, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dprint__fun__case_D218_k509) (close _V10_Dprint__fun__case_D218_k515))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__fun__case_D218_k509, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__case_D218_k515, env)}));
}
static void _V10_Dprint__fun__case_D218_lambda88(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D218_lambda88, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V10_Dprint__fun__case_D218_k500) (close _V10_Dprint__fun__case_D218_k508))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__fun__case_D218_k500, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__case_D218_k508, env)}));
}
static void _V10_Dprint__fun__case_D218_lambda87(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D218_lambda87, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (##vcore.call/cc (bruijn ##.k.1228 0 0) (close _V10_Dprint__fun__case_D218_lambda88))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__case_D218_lambda88, env)}));
}
static void _V10_Dprint__fun__case_D218_k452(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D218_k452, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.x.592 16 0) (close _V10_Dprint__fun__case_D218_k453) (close _V10_Dprint__fun__case_D218_lambda87) (bruijn ##.cases.440 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 16-1, 0)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__case_D218_k453, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__case_D218_lambda87, env)}),
      upenv->up->up->vars[0]);
}
static void _V10_Dprint__fun__case_D218_k451(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D218_k451, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.x.555 52 0) (close _V10_Dprint__fun__case_D218_k452) (##string ##.string.1515) (bruijn ##.name.438 6 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 52-1, 0)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__case_D218_k452, env)}),
      VEncodePointer(&_V10_Dstring_D1515.sym, VPOINTER_OTHER),
      VGetArg(upenv, 6-1, 0));
}
static void _V10_Dprint__fun__case_D218_k450(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D218_k450, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.x.555 51 0) (close _V10_Dprint__fun__case_D218_k451) (##string ##.string.1516) (bruijn ##.fun.437 6 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 51-1, 0)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__case_D218_k451, env)}),
      VEncodePointer(&_V10_Dstring_D1516.sym, VPOINTER_OTHER),
      VGetArg(upenv, 6-1, 1));
}
static void _V10_Dprint__fun__case_D218_k449(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D218_k449, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.x.555 50 0) (close _V10_Dprint__fun__case_D218_k450) (##string ##.string.1517) (bruijn ##.name.438 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 50-1, 0)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__case_D218_k450, env)}),
      VEncodePointer(&_V10_Dstring_D1517.sym, VPOINTER_OTHER),
      upenv->up->up->up->vars[0]);
}
static void _V10_Dprint__fun__case_D218_k516(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D218_k516, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1259 1 0) (##inline ##vcore.cons (bruijn ##.x.1260 0 0) (##inline ##vcore.cons '#f (##inline ##vcore.cons (bruijn ##.e.497 1 2) '()))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 1,
      VInlineCons2(runtime,
        _var0,
        VInlineCons2(runtime,
        VEncodeBool(false),
        VInlineCons2(runtime,
        upenv->vars[2],
        VNULL))));
}
static void _V10_Dprint__fun__case_D218_lambda91(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D218_lambda91, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn ##.x.554 51 0) (close _V10_Dprint__fun__case_D218_k516) (##string ##.string.1518) (bruijn ##.i.496 0 1) (bruijn ##.name.438 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 51-1, 0)), 4,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__case_D218_k516, env)}),
      VEncodePointer(&_V10_Dstring_D1518.sym, VPOINTER_OTHER),
      _var1,
      upenv->up->up->up->vars[0]);
}
static void _V10_Dprint__fun__case_D218_k448(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D218_k448, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.x.561 43 0) (close _V10_Dprint__fun__case_D218_k449) (close _V10_Dprint__fun__case_D218_lambda91) (bruijn ##.x.1263 0 0) (bruijn ##.cases.439 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 43-1, 0)), 4,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__case_D218_k449, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__case_D218_lambda91, env)}),
      _var0,
      upenv->up->vars[0]);
}
static void _V10_Dprint__fun__case_D218_k447(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D218_k447, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.x.557 46 0) (close _V10_Dprint__fun__case_D218_k448) (bruijn ##.x.1264 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 46-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__case_D218_k448, env)}),
      _var0);
}
static void _V10_Dprint__fun__case_D218_k446(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D218_k446, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.x.556 46 0) (close _V10_Dprint__fun__case_D218_k447) (bruijn ##.cases.439 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 46-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__case_D218_k447, env)}),
      _var0);
}
static void _V10_Dprint__fun__case_D218_k445(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D218_k445, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.x.560 41 0) (close _V10_Dprint__fun__case_D218_k446) (bruijn ##.fun.437 1 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 41-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__case_D218_k446, env)}),
      upenv->vars[1]);
}
static void _V10_Dprint__fun__case_D218_lambda78(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun__case_D218_lambda78, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##.x.559 41 0) (close _V10_Dprint__fun__case_D218_k445) (bruijn ##.fun.437 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 41-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__case_D218_k445, env)}),
      _var1);
}
static void _V10_Dprint__fun_D219_k522(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun_D219_k522, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1293 0 0) (bruijn ##.k.1286 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(upenv, 5-1, 0));
}
static void _V10_Dprint__fun_D219_lambda94(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun_D219_lambda94, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.print-fun-single.217 8 11) (bruijn ##.k.1294 0 0) (##inline ##vcore.car (bruijn ##.fun.498 7 1)) (##inline ##vcore.car (bruijn ##.expr.126.503 4 0)) (##inline ##vcore.car (bruijn ##.expr.128.506 2 0)) #f (##inline ##vcore.car (bruijn ##.expr.129.508 1 0)) #f)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 8-1, 11)), 7,
      _var0,
      VInlineCar2(runtime,
        VGetArg(upenv, 7-1, 1)),
      VInlineCar2(runtime,
        upenv->up->up->up->vars[0]),
      VInlineCar2(runtime,
        upenv->up->vars[0]),
      VEncodeBool(false),
      VInlineCar2(runtime,
        upenv->vars[0]),
      VEncodeBool(false));
}
static void _V10_Dprint__fun_D219_k521(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun_D219_k521, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.129.508 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.129.508 0 0))) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.127.505 2 0))) (##vcore.call-with-values (close _V10_Dprint__fun_D219_k522) (close _V10_Dprint__fun_D219_lambda94) (bruijn ##.kk.123.499 5 1)) ((bruijn ##.k.1286 4 0) #f)) ((bruijn ##.k.1286 4 0) #f)) ((bruijn ##.k.1286 4 0) #f))
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
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun_D219_k522, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun_D219_lambda94, env)}),
      VGetArg(upenv, 5-1, 1));
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
static void _V10_Dprint__fun_D219_k520(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun_D219_k520, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.128.506 0 0)) ((close _V10_Dprint__fun_D219_k521) (##inline ##vcore.cdr (bruijn ##.expr.128.506 0 0))) ((bruijn ##.k.1286 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__fun_D219_k521, .env = env }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__fun_D219_k519(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun_D219_k519, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.127.505 0 0)) ((close _V10_Dprint__fun_D219_k520) (##inline ##vcore.car (bruijn ##.expr.127.505 0 0))) ((bruijn ##.k.1286 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__fun_D219_k520, .env = env }, }, 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__fun_D219_k518(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun_D219_k518, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.126.503 0 0)) ((close _V10_Dprint__fun_D219_k519) (##inline ##vcore.cdr (bruijn ##.expr.126.503 0 0))) ((bruijn ##.k.1286 1 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__fun_D219_k519, .env = env }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__fun_D219_k517(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun_D219_k517, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.fun.498 2 1)) ((close _V10_Dprint__fun_D219_k518) (##inline ##vcore.cdr (bruijn ##.fun.498 2 1))) ((bruijn ##.k.1286 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->up->vars[1]))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__fun_D219_k518, .env = env }, }, 1,
      VInlineCdr2(runtime,
        upenv->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__fun_D219_k531(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun_D219_k531, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1280 0 0) (bruijn ##.k.1271 7 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(upenv, 7-1, 0));
}
static void _V10_Dprint__fun_D219_lambda95(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun_D219_lambda95, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.print-fun-single.217 11 11) (bruijn ##.k.1281 0 0) (##inline ##vcore.car (bruijn ##.fun.498 10 1)) (##inline ##vcore.car (bruijn ##.expr.131.512 6 0)) (##inline ##vcore.car (bruijn ##.expr.133.515 4 0)) #t (##inline ##vcore.car (bruijn ##.expr.135.518 1 0)) #f)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 11-1, 11)), 7,
      _var0,
      VInlineCar2(runtime,
        VGetArg(upenv, 10-1, 1)),
      VInlineCar2(runtime,
        VGetArg(upenv, 6-1, 0)),
      VInlineCar2(runtime,
        upenv->up->up->up->vars[0]),
      VEncodeBool(true),
      VInlineCar2(runtime,
        upenv->vars[0]),
      VEncodeBool(false));
}
static void _V10_Dprint__fun_D219_k530(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun_D219_k530, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.135.518 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.135.518 0 0))) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.132.514 4 0))) (##vcore.call-with-values (close _V10_Dprint__fun_D219_k531) (close _V10_Dprint__fun_D219_lambda95) (bruijn ##.kk.123.499 8 1)) ((bruijn ##.k.1271 6 0) #f)) ((bruijn ##.k.1271 6 0) #f)) ((bruijn ##.k.1271 6 0) #f))
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
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun_D219_k531, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun_D219_lambda95, env)}),
      VGetArg(upenv, 8-1, 1));
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
static void _V10_Dprint__fun_D219_k529(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun_D219_k529, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1276 0 0) ((close _V10_Dprint__fun_D219_k530) (##inline ##vcore.cdr (bruijn ##.expr.134.517 1 0))) ((bruijn ##.k.1271 5 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__fun_D219_k530, .env = env }, }, 1,
      VInlineCdr2(runtime,
        upenv->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 5-1, 0)), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__fun_D219_k528(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun_D219_k528, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.134.517 0 0)) ((bruijn ##.x.558 49 0) (close _V10_Dprint__fun_D219_k529) '+ (##inline ##vcore.car (bruijn ##.expr.134.517 0 0))) ((bruijn ##.k.1271 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 49-1, 0)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun_D219_k529, env)}),
      _V0_P,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__fun_D219_k527(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun_D219_k527, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.133.515 0 0)) ((close _V10_Dprint__fun_D219_k528) (##inline ##vcore.cdr (bruijn ##.expr.133.515 0 0))) ((bruijn ##.k.1271 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__fun_D219_k528, .env = env }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__fun_D219_k526(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun_D219_k526, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.132.514 0 0)) ((close _V10_Dprint__fun_D219_k527) (##inline ##vcore.car (bruijn ##.expr.132.514 0 0))) ((bruijn ##.k.1271 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__fun_D219_k527, .env = env }, }, 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__fun_D219_k525(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun_D219_k525, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.131.512 0 0)) ((close _V10_Dprint__fun_D219_k526) (##inline ##vcore.cdr (bruijn ##.expr.131.512 0 0))) ((bruijn ##.k.1271 1 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__fun_D219_k526, .env = env }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__fun_D219_k524(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun_D219_k524, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.fun.498 3 1)) ((close _V10_Dprint__fun_D219_k525) (##inline ##vcore.cdr (bruijn ##.fun.498 3 1))) ((bruijn ##.k.1271 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->up->up->vars[1]))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__fun_D219_k525, .env = env }, }, 1,
      VInlineCdr2(runtime,
        upenv->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__fun_D219_lambda96(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun_D219_lambda96, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.print-fun-case.218 5 12) (bruijn ##.k.1269 0 0) (bruijn ##.fun.498 4 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 5-1, 12)), 2,
      _var0,
      upenv->up->up->up->vars[1]);
}
static void _V10_Dprint__fun_D219_k532(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun_D219_k532, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.k.1266 2 0) (close _V10_Dprint__fun_D219_lambda96) (bruijn ##.kk.123.499 2 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      upenv->up->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun_D219_lambda96, env)}),
      upenv->up->vars[1]);
}
static void _V10_Dprint__fun_D219_k523(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun_D219_k523, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dprint__fun_D219_k524) (close _V10_Dprint__fun_D219_k532))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__fun_D219_k524, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun_D219_k532, env)}));
}
static void _V10_Dprint__fun_D219_lambda93(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun_D219_lambda93, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V10_Dprint__fun_D219_k517) (close _V10_Dprint__fun_D219_k523))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__fun_D219_k517, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun_D219_k523, env)}));
}
static void _V10_Dprint__fun_D219_lambda92(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__fun_D219_lambda92, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (##vcore.call/cc (bruijn ##.k.1265 0 0) (close _V10_Dprint__fun_D219_lambda93))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun_D219_lambda93, env)}));
}
static void _V10_Dprint__toplevel_D220_k535(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__toplevel_D220_k535, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.590 13 0) (bruijn ##.k.1297 3 0) (##string ##.string.1469))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 13-1, 0)), 2,
      upenv->up->up->vars[0],
      VEncodePointer(&_V10_Dstring_D1469.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__toplevel_D220_k534(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__toplevel_D220_k534, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.print-expr.216 3 10) (close _V10_Dprint__toplevel_D220_k535) (##inline ##vcore.cons (bruijn ##.expr.521 2 2) (##inline ##vcore.cons (##inline ##vcore.cons 'bruijn (##inline ##vcore.cons 'k (##inline ##vcore.cons '0 (##inline ##vcore.cons '0 '())))) '())) (##inline ##vcore.qcons '(##string ##.string.1519) '()))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->vars[10]), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__toplevel_D220_k535, env)}),
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
        VEncodePointer(&_V10_Dstring_D1519.sym, VPOINTER_OTHER),
        VNULL));
}
static void _V10_Dprint__toplevel_D220_k533(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__toplevel_D220_k533, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.x.590 11 0) (close _V10_Dprint__toplevel_D220_k534) (##string ##.string.1520))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 11-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__toplevel_D220_k534, env)}),
      VEncodePointer(&_V10_Dstring_D1520.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__toplevel_D220_lambda97(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__toplevel_D220_lambda97, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn ##.x.555 45 0) (close _V10_Dprint__toplevel_D220_k533) (##string ##.string.1521) (bruijn ##.i.520 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 45-1, 0)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__toplevel_D220_k533, env)}),
      VEncodePointer(&_V10_Dstring_D1521.sym, VPOINTER_OTHER),
      _var1);
}
static void _V10_Dprint__foreign__declare_D221_k539(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__foreign__declare_D221_k539, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1328 0 0) (bruijn ##.k.1324 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      upenv->up->up->vars[0]);
}
static void _V10_Dprint__foreign__declare_D221_lambda100(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__foreign__declare_D221_lambda100, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.590 15 0) (bruijn ##.k.1329 0 0) (##inline ##vcore.car (bruijn ##.expr.139.526 1 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 15-1, 0)), 2,
      _var0,
      VInlineCar2(runtime,
        upenv->vars[0]));
}
static void _V10_Dprint__foreign__declare_D221_k538(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__foreign__declare_D221_k538, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.139.526 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.139.526 0 0))) (##vcore.call-with-values (close _V10_Dprint__foreign__declare_D221_k539) (close _V10_Dprint__foreign__declare_D221_lambda100) (bruijn ##.kk.136.523 3 1)) ((bruijn ##.k.1324 2 0) #f)) ((bruijn ##.k.1324 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__foreign__declare_D221_k539, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__foreign__declare_D221_lambda100, env)}),
      upenv->up->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__foreign__declare_D221_k537(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__foreign__declare_D221_k537, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1325 0 0) ((close _V10_Dprint__foreign__declare_D221_k538) (##inline ##vcore.cdr (bruijn ##.declare.522 3 1))) ((bruijn ##.k.1324 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__foreign__declare_D221_k538, .env = env }, }, 1,
      VInlineCdr2(runtime,
        upenv->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__foreign__declare_D221_k536(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__foreign__declare_D221_k536, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.declare.522 2 1)) ((bruijn ##.x.558 44 0) (close _V10_Dprint__foreign__declare_D221_k537) '##foreign.declare (##inline ##vcore.car (bruijn ##.declare.522 2 1))) ((bruijn ##.k.1324 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->up->vars[1]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 44-1, 0)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__foreign__declare_D221_k537, env)}),
      _V10foreign_Ddeclare,
      VInlineCar2(runtime,
        upenv->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__foreign__declare_D221_k545(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__foreign__declare_D221_k545, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1319 0 0) (bruijn ##.k.1314 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      upenv->up->up->up->vars[0]);
}
static void _V10_Dprint__foreign__declare_D221_lambda101(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__foreign__declare_D221_lambda101, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1320 0 0) #f)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
static void _V10_Dprint__foreign__declare_D221_k544(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__foreign__declare_D221_k544, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.142.531 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.142.531 0 0))) (##vcore.call-with-values (close _V10_Dprint__foreign__declare_D221_k545) (close _V10_Dprint__foreign__declare_D221_lambda101) (bruijn ##.kk.136.523 5 1)) ((bruijn ##.k.1314 3 0) #f)) ((bruijn ##.k.1314 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__foreign__declare_D221_k545, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__foreign__declare_D221_lambda101, env)}),
      VGetArg(upenv, 5-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__foreign__declare_D221_k543(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__foreign__declare_D221_k543, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.141.529 0 0)) ((close _V10_Dprint__foreign__declare_D221_k544) (##inline ##vcore.cdr (bruijn ##.expr.141.529 0 0))) ((bruijn ##.k.1314 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__foreign__declare_D221_k544, .env = env }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__foreign__declare_D221_k542(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__foreign__declare_D221_k542, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1315 0 0) ((close _V10_Dprint__foreign__declare_D221_k543) (##inline ##vcore.cdr (bruijn ##.declare.522 4 1))) ((bruijn ##.k.1314 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__foreign__declare_D221_k543, .env = env }, }, 1,
      VInlineCdr2(runtime,
        upenv->up->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__foreign__declare_D221_k541(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__foreign__declare_D221_k541, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.declare.522 3 1)) ((bruijn ##.x.558 45 0) (close _V10_Dprint__foreign__declare_D221_k542) '##vcore.declare (##inline ##vcore.car (bruijn ##.declare.522 3 1))) ((bruijn ##.k.1314 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->up->up->vars[1]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 45-1, 0)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__foreign__declare_D221_k542, env)}),
      _V10vcore_Ddeclare,
      VInlineCar2(runtime,
        upenv->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__foreign__declare_D221_lambda102(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__foreign__declare_D221_lambda102, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.593 11 0) (bruijn ##.k.1312 0 0) (##string ##.string.1522) (bruijn ##.declare.522 4 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 11-1, 0)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1522.sym, VPOINTER_OTHER),
      upenv->up->up->up->vars[1]);
}
static void _V10_Dprint__foreign__declare_D221_k546(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__foreign__declare_D221_k546, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.k.1309 2 0) (close _V10_Dprint__foreign__declare_D221_lambda102) (bruijn ##.kk.136.523 2 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      upenv->up->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__foreign__declare_D221_lambda102, env)}),
      upenv->up->vars[1]);
}
static void _V10_Dprint__foreign__declare_D221_k540(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__foreign__declare_D221_k540, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dprint__foreign__declare_D221_k541) (close _V10_Dprint__foreign__declare_D221_k546))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__foreign__declare_D221_k541, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__foreign__declare_D221_k546, env)}));
}
static void _V10_Dprint__foreign__declare_D221_lambda99(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__foreign__declare_D221_lambda99, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V10_Dprint__foreign__declare_D221_k536) (close _V10_Dprint__foreign__declare_D221_k540))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__foreign__declare_D221_k536, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__foreign__declare_D221_k540, env)}));
}
static void _V10_Dprint__foreign__declare_D221_lambda98(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__foreign__declare_D221_lambda98, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (##vcore.call/cc (bruijn ##.k.1308 0 0) (close _V10_Dprint__foreign__declare_D221_lambda99))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__foreign__declare_D221_lambda99, env)}));
}
static void _V10_Dprint__declare_D222_k550(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__declare_D222_k550, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1352 0 0) (bruijn ##.k.1348 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      upenv->up->up->vars[0]);
}
static void _V10_Dprint__declare_D222_lambda105(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__declare_D222_lambda105, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1353 0 0) #f)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
static void _V10_Dprint__declare_D222_k549(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__declare_D222_k549, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.146.537 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.146.537 0 0))) (##vcore.call-with-values (close _V10_Dprint__declare_D222_k550) (close _V10_Dprint__declare_D222_lambda105) (bruijn ##.kk.143.534 3 1)) ((bruijn ##.k.1348 2 0) #f)) ((bruijn ##.k.1348 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__declare_D222_k550, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__declare_D222_lambda105, env)}),
      upenv->up->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__declare_D222_k548(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__declare_D222_k548, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1349 0 0) ((close _V10_Dprint__declare_D222_k549) (##inline ##vcore.cdr (bruijn ##.declare.533 3 1))) ((bruijn ##.k.1348 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__declare_D222_k549, .env = env }, }, 1,
      VInlineCdr2(runtime,
        upenv->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__declare_D222_k547(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__declare_D222_k547, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.declare.533 2 1)) ((bruijn ##.x.558 44 0) (close _V10_Dprint__declare_D222_k548) '##foreign.declare (##inline ##vcore.car (bruijn ##.declare.533 2 1))) ((bruijn ##.k.1348 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->up->vars[1]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 44-1, 0)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__declare_D222_k548, env)}),
      _V10foreign_Ddeclare,
      VInlineCar2(runtime,
        upenv->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__declare_D222_k556(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__declare_D222_k556, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1343 0 0) (bruijn ##.k.1338 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      upenv->up->up->up->vars[0]);
}
static void _V10_Dprint__declare_D222_lambda106(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__declare_D222_lambda106, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.555 52 0) (bruijn ##.k.1344 0 0) (##string ##.string.1523) (##inline ##vcore.car (bruijn ##.expr.148.540 2 0)) (##inline ##vcore.car (bruijn ##.expr.149.542 1 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 52-1, 0)), 4,
      _var0,
      VEncodePointer(&_V10_Dstring_D1523.sym, VPOINTER_OTHER),
      VInlineCar2(runtime,
        upenv->up->vars[0]),
      VInlineCar2(runtime,
        upenv->vars[0]));
}
static void _V10_Dprint__declare_D222_k555(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__declare_D222_k555, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.149.542 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.149.542 0 0))) (##vcore.call-with-values (close _V10_Dprint__declare_D222_k556) (close _V10_Dprint__declare_D222_lambda106) (bruijn ##.kk.143.534 5 1)) ((bruijn ##.k.1338 3 0) #f)) ((bruijn ##.k.1338 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__declare_D222_k556, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__declare_D222_lambda106, env)}),
      VGetArg(upenv, 5-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__declare_D222_k554(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__declare_D222_k554, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.148.540 0 0)) ((close _V10_Dprint__declare_D222_k555) (##inline ##vcore.cdr (bruijn ##.expr.148.540 0 0))) ((bruijn ##.k.1338 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__declare_D222_k555, .env = env }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__declare_D222_k553(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__declare_D222_k553, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1339 0 0) ((close _V10_Dprint__declare_D222_k554) (##inline ##vcore.cdr (bruijn ##.declare.533 4 1))) ((bruijn ##.k.1338 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__declare_D222_k554, .env = env }, }, 1,
      VInlineCdr2(runtime,
        upenv->up->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__declare_D222_k552(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__declare_D222_k552, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.declare.533 3 1)) ((bruijn ##.x.558 45 0) (close _V10_Dprint__declare_D222_k553) '##vcore.declare (##inline ##vcore.car (bruijn ##.declare.533 3 1))) ((bruijn ##.k.1338 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->up->up->vars[1]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 45-1, 0)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__declare_D222_k553, env)}),
      _V10vcore_Ddeclare,
      VInlineCar2(runtime,
        upenv->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprint__declare_D222_lambda107(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__declare_D222_lambda107, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.593 11 0) (bruijn ##.k.1336 0 0) (##string ##.string.1524) (bruijn ##.declare.533 4 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 11-1, 0)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1524.sym, VPOINTER_OTHER),
      upenv->up->up->up->vars[1]);
}
static void _V10_Dprint__declare_D222_k557(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__declare_D222_k557, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.k.1333 2 0) (close _V10_Dprint__declare_D222_lambda107) (bruijn ##.kk.143.534 2 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      upenv->up->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__declare_D222_lambda107, env)}),
      upenv->up->vars[1]);
}
static void _V10_Dprint__declare_D222_k551(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__declare_D222_k551, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dprint__declare_D222_k552) (close _V10_Dprint__declare_D222_k557))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__declare_D222_k552, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__declare_D222_k557, env)}));
}
static void _V10_Dprint__declare_D222_lambda104(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__declare_D222_lambda104, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V10_Dprint__declare_D222_k547) (close _V10_Dprint__declare_D222_k551))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprint__declare_D222_k547, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__declare_D222_k551, env)}));
}
static void _V10_Dprint__declare_D222_lambda103(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__declare_D222_lambda103, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (##vcore.call/cc (bruijn ##.k.1332 0 0) (close _V10_Dprint__declare_D222_lambda104))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__declare_D222_lambda104, env)}));
}
static void _V10_Dprint__main_D223_k570(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__main_D223_k570, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.590 23 0) (bruijn ##.k.1356 13 0) (##string ##.string.1469))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 23-1, 0)), 2,
      VGetArg(upenv, 13-1, 0),
      VEncodePointer(&_V10_Dstring_D1469.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__main_D223_k569(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__main_D223_k569, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.x.555 57 0) (close _V10_Dprint__main_D223_k570) (##string ##.string.1525))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 57-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__main_D223_k570, env)}),
      VEncodePointer(&_V10_Dstring_D1525.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__main_D223_k568(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__main_D223_k568, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.x.590 21 0) (close _V10_Dprint__main_D223_k569) (##string ##.string.1526))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 21-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__main_D223_k569, env)}),
      VEncodePointer(&_V10_Dstring_D1526.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__main_D223_k567(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__main_D223_k567, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.x.590 20 0) (close _V10_Dprint__main_D223_k568) (##string ##.string.1527))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 20-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__main_D223_k568, env)}),
      VEncodePointer(&_V10_Dstring_D1527.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__main_D223_k566(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__main_D223_k566, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.x.555 54 0) (close _V10_Dprint__main_D223_k567) (##string ##.string.1528))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 54-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__main_D223_k567, env)}),
      VEncodePointer(&_V10_Dstring_D1528.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__main_D223_k565(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__main_D223_k565, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.x.555 53 0) (close _V10_Dprint__main_D223_k566) (##string ##.string.1529))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 53-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__main_D223_k566, env)}),
      VEncodePointer(&_V10_Dstring_D1529.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__main_D223_k564(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__main_D223_k564, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.x.555 52 0) (close _V10_Dprint__main_D223_k565) (##string ##.string.1530))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 52-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__main_D223_k565, env)}),
      VEncodePointer(&_V10_Dstring_D1530.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__main_D223_lambda109(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__main_D223_lambda109, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.x.555 52 0) (bruijn ##.k.1366 0 0) (##string ##.string.1531) (bruijn ##.i.547 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 52-1, 0)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1531.sym, VPOINTER_OTHER),
      _var1);
}
static void _V10_Dprint__main_D223_k563(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__main_D223_k563, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.x.592 14 0) (close _V10_Dprint__main_D223_k564) (close _V10_Dprint__main_D223_lambda109) (bruijn ##.x.1367 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 14-1, 0)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__main_D223_k564, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__main_D223_lambda109, env)}),
      _var0);
}
static void _V10_Dprint__main_D223_k562(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__main_D223_k562, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.x.557 48 0) (close _V10_Dprint__main_D223_k563) (bruijn ##.x.1368 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 48-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__main_D223_k563, env)}),
      _var0);
}
static void _V10_Dprint__main_D223_k561(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__main_D223_k561, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.x.556 48 0) (close _V10_Dprint__main_D223_k562) (bruijn ##.toplevels.544 4 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 48-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__main_D223_k562, env)}),
      upenv->up->up->up->vars[1]);
}
static void _V10_Dprint__main_D223_k560(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__main_D223_k560, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.x.555 48 0) (close _V10_Dprint__main_D223_k561) (##string ##.string.1532))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 48-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__main_D223_k561, env)}),
      VEncodePointer(&_V10_Dstring_D1532.sym, VPOINTER_OTHER));
}
static void _V10_Dprint__main_D223_lambda110(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__main_D223_lambda110, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  // ((bruijn ##.print-toplevel.220 4 14) (bruijn ##.k.1369 0 0) (bruijn ##.x.150.545 0 1) (bruijn ##.x.151.546 0 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->up->vars[14]), 3,
      _var0,
      _var1,
      _var2);
}
static void _V10_Dprint__main_D223_k559(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__main_D223_k559, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.x.592 10 0) (close _V10_Dprint__main_D223_k560) (close _V10_Dprint__main_D223_lambda110) (bruijn ##.x.1370 0 0) (bruijn ##.toplevels.544 2 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 10-1, 0)), 4,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__main_D223_k560, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__main_D223_lambda110, env)}),
      _var0,
      upenv->up->vars[1]);
}
static void _V10_Dprint__main_D223_k558(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__main_D223_k558, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.x.557 44 0) (close _V10_Dprint__main_D223_k559) (bruijn ##.x.1371 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 44-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__main_D223_k559, env)}),
      _var0);
}
static void _V10_Dprint__main_D223_lambda108(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprint__main_D223_lambda108, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##.x.556 44 0) (close _V10_Dprint__main_D223_k558) (bruijn ##.toplevels.544 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 44-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__main_D223_k558, env)}),
      _var1);
}
static void _V10_Dprintout2_D198_k584(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprintout2_D198_k584, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.shared?.200 15 2) ((bruijn ##.k.1389 0 0) (bruijn ##.x.1372 12 0)) ((bruijn ##.k.1389 0 0) #f))
if(VDecodeBool(
VGetArg(upenv, 15-1, 2))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(upenv, 12-1, 0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprintout2_D198_k586(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprintout2_D198_k586, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.1387 1 0) ((bruijn ##.x.593 21 0) (bruijn ##.k.1388 0 0) (##string ##.string.1533) (bruijn ##.toplevels.205 16 7)) ((bruijn ##.k.1388 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 21-1, 0)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1533.sym, VPOINTER_OTHER),
      VGetArg(upenv, 16-1, 7));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprintout2_D198_k588(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprintout2_D198_k588, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.x.1372 14 0) ((bruijn ##.print-main.223 16 17) (bruijn ##.k.1386 0 0) (bruijn ##.toplevels.205 17 7)) ((bruijn ##.k.1386 0 0) #f))
if(VDecodeBool(
VGetArg(upenv, 14-1, 0))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 16-1, 17)), 2,
      _var0,
      VGetArg(upenv, 17-1, 7));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dprintout2_D198_k589(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprintout2_D198_k589, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.597 17 0) (bruijn ##.x.1372 14 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 17-1, 0)), 1,
      VGetArg(upenv, 14-1, 0));
}
static void _V10_Dprintout2_D198_k587(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprintout2_D198_k587, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dprintout2_D198_k588) (close _V10_Dprintout2_D198_k589))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprintout2_D198_k588, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprintout2_D198_k589, env)}));
}
static void _V10_Dprintout2_D198_k585(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprintout2_D198_k585, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dprintout2_D198_k586) (close _V10_Dprintout2_D198_k587))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprintout2_D198_k586, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprintout2_D198_k587, env)}));
}
static void _V10_Dprintout2_D198_k583(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprintout2_D198_k583, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dprintout2_D198_k584) (close _V10_Dprintout2_D198_k585))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dprintout2_D198_k584, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprintout2_D198_k585, env)}));
}
static void _V10_Dprintout2_D198_k582(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprintout2_D198_k582, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.x.592 19 0) (close _V10_Dprintout2_D198_k583) (bruijn ##.print-declare.222 12 16) (bruijn ##.declares.204 13 6))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 19-1, 0)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprintout2_D198_k583, env)}),
      VGetArg(upenv, 12-1, 16),
      VGetArg(upenv, 13-1, 6));
}
static void _V10_Dprintout2_D198_k581(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprintout2_D198_k581, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.x.592 18 0) (close _V10_Dprintout2_D198_k582) (bruijn ##.print-fun.219 11 13) (bruijn ##.x.1373 8 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 18-1, 0)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprintout2_D198_k582, env)}),
      VGetArg(upenv, 11-1, 13),
      VGetArg(upenv, 8-1, 0));
}
static void _V10_Dprintout2_D198_k580(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprintout2_D198_k580, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.x.592 17 0) (close _V10_Dprintout2_D198_k581) (bruijn ##.x.591 18 0) (bruijn ##.foreign-functions.202 11 4))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 17-1, 0)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprintout2_D198_k581, env)}),
      VGetArg(upenv, 18-1, 0),
      VGetArg(upenv, 11-1, 4));
}
static void _V10_Dprintout2_D198_k579(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprintout2_D198_k579, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.x.592 16 0) (close _V10_Dprintout2_D198_k580) (bruijn ##.print-foreign-declare.221 9 15) (bruijn ##.declares.204 10 6))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 16-1, 0)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprintout2_D198_k580, env)}),
      VGetArg(upenv, 9-1, 15),
      VGetArg(upenv, 10-1, 6));
}
static void _V10_Dprintout2_D198_k578(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprintout2_D198_k578, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.print-dllmain.214 8 8) (close _V10_Dprintout2_D198_k579) (bruijn ##.literal-table.201 9 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 8-1, 8)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprintout2_D198_k579, env)}),
      VGetArg(upenv, 9-1, 3));
}
static void _V10_Dprintout2_D198_k577(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprintout2_D198_k577, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.x.592 14 0) (close _V10_Dprintout2_D198_k578) (bruijn ##.print-literal-declaration.213 7 7) (bruijn ##.literal-table.201 8 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 14-1, 0)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprintout2_D198_k578, env)}),
      VGetArg(upenv, 7-1, 7),
      VGetArg(upenv, 8-1, 3));
}
static void _V10_Dprintout2_D198_k576(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprintout2_D198_k576, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.x.590 15 0) (close _V10_Dprintout2_D198_k577) (##string ##.string.1534))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 15-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprintout2_D198_k577, env)}),
      VEncodePointer(&_V10_Dstring_D1534.sym, VPOINTER_OTHER));
}
static void _V10_Dprintout2_D198_k575(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprintout2_D198_k575, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.x.590 14 0) (close _V10_Dprintout2_D198_k576) (##string ##.string.1535))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 14-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprintout2_D198_k576, env)}),
      VEncodePointer(&_V10_Dstring_D1535.sym, VPOINTER_OTHER));
}
static void _V10_Dprintout2_D198_k574(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprintout2_D198_k574, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.x.590 13 0) (close _V10_Dprintout2_D198_k575) (##string ##.string.1536))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 13-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprintout2_D198_k575, env)}),
      VEncodePointer(&_V10_Dstring_D1536.sym, VPOINTER_OTHER));
}
static void _V10_Dprintout2_D198_k573(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprintout2_D198_k573, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.x.590 12 0) (close _V10_Dprintout2_D198_k574) (##string ##.string.1537))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 12-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprintout2_D198_k574, env)}),
      VEncodePointer(&_V10_Dstring_D1537.sym, VPOINTER_OTHER));
}
static void _V10_Dprintout2_D198_k572(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprintout2_D198_k572, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.x.596 5 0) (close _V10_Dprintout2_D198_k573) (bruijn ##.functions.203 3 5))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 5-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprintout2_D198_k573, env)}),
      upenv->up->up->vars[5]);
}
static void _V10_Dprintout2_D198_k571(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprintout2_D198_k571, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.x.595 5 0) (close _V10_Dprintout2_D198_k572) (bruijn ##.x.1390 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 5-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprintout2_D198_k572, env)}),
      _var0);
}
static void _V10_Dprintout2_D198_lambda2(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4, VWORD _var5, VWORD _var6, VWORD _var7) {
 if(argc != 8) {
  VErrorC(runtime, "Not enough arguments to _V10_Dprintout2_D198_lambda2, got ~D~N"
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
  // (letrec 18 ((close _V10_Dprint__global_D206_lambda3) (close _V10_Dprint__string_D207_lambda4) (close _V10_Descape__string_D208_lambda6) (close _V10_Descape__char_D209_lambda8) (close _V10_Dprint__literal__string_D210_lambda9) (close _V10_Dprint__intrinsic_D211_lambda10) (close _V10_Dprint__literal_D212_lambda11) (close _V10_Dprint__literal__declaration_D213_lambda12) (close _V10_Dprint__dllmain_D214_lambda13) (close _V10_Dcloses_Q_D215_lambda15) (close _V10_Dprint__expr_D216_lambda31) (close _V10_Dprint__fun__single_D217_lambda73) (close _V10_Dprint__fun__case_D218_lambda78) (close _V10_Dprint__fun_D219_lambda92) (close _V10_Dprint__toplevel_D220_lambda97) (close _V10_Dprint__foreign__declare_D221_lambda98) (close _V10_Dprint__declare_D222_lambda103) (close _V10_Dprint__main_D223_lambda108)) ((bruijn ##.x.594 5 0) (close _V10_Dprintout2_D198_k571) (bruijn ##.toplevels.205 1 7)))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[18]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 18, 18, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__global_D206_lambda3, env)});
    env->vars[1] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__string_D207_lambda4, env)});
    env->vars[2] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Descape__string_D208_lambda6, env)});
    env->vars[3] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Descape__char_D209_lambda8, env)});
    env->vars[4] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__literal__string_D210_lambda9, env)});
    env->vars[5] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__intrinsic_D211_lambda10, env)});
    env->vars[6] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__literal_D212_lambda11, env)});
    env->vars[7] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__literal__declaration_D213_lambda12, env)});
    env->vars[8] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__dllmain_D214_lambda13, env)});
    env->vars[9] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcloses_Q_D215_lambda15, env)});
    env->vars[10] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__expr_D216_lambda31, env)});
    env->vars[11] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__single_D217_lambda73, env)});
    env->vars[12] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun__case_D218_lambda78, env)});
    env->vars[13] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__fun_D219_lambda92, env)});
    env->vars[14] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__toplevel_D220_lambda97, env)});
    env->vars[15] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__foreign__declare_D221_lambda98, env)});
    env->vars[16] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__declare_D222_lambda103, env)});
    env->vars[17] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprint__main_D223_lambda108, env)});
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 5-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprintout2_D198_k571, env)}),
      upenv->vars[7]);
    }
}
static void _V0vanity_V0compiler_V0transpile_V20_k591(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k591, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.552 56 0) (##inline ##vcore.cons (##inline ##vcore.cons 'printout2 (bruijn ##.printout2.198 3 1)) '()))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 56-1, 0)), 1,
      VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0printout2,
        upenv->up->up->vars[1]),
        VNULL));
}
static void _V0vanity_V0compiler_V0transpile_V20_k590(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k590, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0compiler_V0transpile_V20_k591) (bruijn ##.gendllmain.197 2 0) (bruijn ##.x.1393 0 0))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)VSetEnvVar2, .env = env }, }, 4,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k591, env)}),
      VEncodeInt(2l), VEncodeInt(0l),
      _var0
    );
}
static void _V0vanity_V0compiler_V0transpile_V20_k593(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k593, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.554 47 0) (bruijn ##.k.1394 2 0) (##string ##.string.1538) (bruijn ##.x.550 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 47-1, 0)), 3,
      upenv->up->vars[0],
      VEncodePointer(&_V10_Dstring_D1538.sym, VPOINTER_OTHER),
      upenv->up->up->vars[0]);
}
static void _V0vanity_V0compiler_V0transpile_V20_k592(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_k592, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0compiler_V0transpile_V20_k593) (bruijn ##.x.550 2 0) (bruijn ##.x.1396 0 0))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)VSetEnvVar2, .env = env }, }, 4,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k593, env)}),
      VEncodeInt(2l), VEncodeInt(0l),
      _var0
    );
}
static void _V0vanity_V0compiler_V0transpile_V20_lambda112(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0transpile_V20_lambda112, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.x.553 46 0) (close _V0vanity_V0compiler_V0transpile_V20_k592) (bruijn ##.x.550 1 0) 1)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 46-1, 0)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k592, env)}),
      upenv->vars[0],
      VEncodeInt(1l));
}
static void _V0vanity_V0compiler_V0transpile_V20_lambda111(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0transpile_V20_k590) (close _V0vanity_V0compiler_V0transpile_V20_lambda112))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V0vanity_V0compiler_V0transpile_V20_k590, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_lambda112, env)}));
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
  // (letrec 2 (#f (close _V10_Dprintout2_D198_lambda2)) ((close _V0vanity_V0compiler_V0transpile_V20_lambda111) 0))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[2]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 2, 2, upenv);
    env->vars[0] = VEncodeBool(false);
    env->vars[1] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dprintout2_D198_lambda2, env)});
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V0vanity_V0compiler_V0transpile_V20_lambda111, .env = env }, }, 1,
      VEncodeInt(0l));
    }
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
  // ((bruijn ##..vcore.import.152 43 0) (close _V0vanity_V0compiler_V0transpile_V20_k52) 'reverse)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 43-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k52, env)}),
      _V0reverse);
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
  // ((bruijn ##..vcore.import.152 42 0) (close _V0vanity_V0compiler_V0transpile_V20_k51) 'not)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 42-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k51, env)}),
      _V0not);
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
  // ((bruijn ##..vcore.import.152 41 0) (close _V0vanity_V0compiler_V0transpile_V20_k50) 'null?)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 41-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k50, env)}),
      _V0null_Q);
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
  // ((bruijn ##..vcore.import.152 40 0) (close _V0vanity_V0compiler_V0transpile_V20_k49) 'compiler-error)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 40-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k49, env)}),
      _V0compiler__error);
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
  // ((bruijn ##..vcore.import.152 39 0) (close _V0vanity_V0compiler_V0transpile_V20_k48) 'for-each)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 39-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k48, env)}),
      _V0for__each);
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
  // ((bruijn ##..vcore.import.152 38 0) (close _V0vanity_V0compiler_V0transpile_V20_k47) 'print-foreign-function)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 38-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k47, env)}),
      _V0print__foreign__function);
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
  // ((bruijn ##..vcore.import.152 37 0) (close _V0vanity_V0compiler_V0transpile_V20_k46) 'displayln)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 37-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k46, env)}),
      _V0displayln);
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
  // ((bruijn ##..vcore.import.152 36 0) (close _V0vanity_V0compiler_V0transpile_V20_k45) 'string-ref)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 36-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k45, env)}),
      _V0string__ref);
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
  // ((bruijn ##..vcore.import.152 35 0) (close _V0vanity_V0compiler_V0transpile_V20_k44) '<)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 35-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k44, env)}),
      _V0_L);
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
  // ((bruijn ##..vcore.import.152 34 0) (close _V0vanity_V0compiler_V0transpile_V20_k43) 'close-port)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 34-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k43, env)}),
      _V0close__port);
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
  // ((bruijn ##..vcore.import.152 33 0) (close _V0vanity_V0compiler_V0transpile_V20_k42) 'get-output-string)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 33-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k42, env)}),
      _V0get__output__string);
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
  // ((bruijn ##..vcore.import.152 32 0) (close _V0vanity_V0compiler_V0transpile_V20_k41) 'open-output-string)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 32-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k41, env)}),
      _V0open__output__string);
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
  // ((bruijn ##..vcore.import.152 31 0) (close _V0vanity_V0compiler_V0transpile_V20_k40) 'integer?)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 31-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k40, env)}),
      _V0integer_Q);
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
  // ((bruijn ##..vcore.import.152 30 0) (close _V0vanity_V0compiler_V0transpile_V20_k39) 'number?)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 30-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k39, env)}),
      _V0number_Q);
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
  // ((bruijn ##..vcore.import.152 29 0) (close _V0vanity_V0compiler_V0transpile_V20_k38) 'char?)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 29-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k38, env)}),
      _V0char_Q);
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
  // ((bruijn ##..vcore.import.152 28 0) (close _V0vanity_V0compiler_V0transpile_V20_k37) 'eq?)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 28-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k37, env)}),
      _V0eq_Q);
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
  // ((bruijn ##..vcore.import.152 27 0) (close _V0vanity_V0compiler_V0transpile_V20_k36) 'symbol->string)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 27-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k36, env)}),
      _V0symbol___Gstring);
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
  // ((bruijn ##..vcore.import.152 26 0) (close _V0vanity_V0compiler_V0transpile_V20_k35) 'string-length)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 26-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k35, env)}),
      _V0string__length);
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
  // ((bruijn ##..vcore.import.152 25 0) (close _V0vanity_V0compiler_V0transpile_V20_k34) 'string?)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 25-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k34, env)}),
      _V0string_Q);
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
  // ((bruijn ##..vcore.import.152 24 0) (close _V0vanity_V0compiler_V0transpile_V20_k33) 'caar)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 24-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k33, env)}),
      _V0caar);
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
  // ((bruijn ##..vcore.import.152 23 0) (close _V0vanity_V0compiler_V0transpile_V20_k32) 'cadar)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 23-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k32, env)}),
      _V0cadar);
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
  // ((bruijn ##..vcore.import.152 22 0) (close _V0vanity_V0compiler_V0transpile_V20_k31) 'mangle-symbol)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 22-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k31, env)}),
      _V0mangle__symbol);
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
  // ((bruijn ##..vcore.import.152 21 0) (close _V0vanity_V0compiler_V0transpile_V20_k30) 'lookup-inline-name)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 21-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k30, env)}),
      _V0lookup__inline__name);
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
  // ((bruijn ##..vcore.import.152 20 0) (close _V0vanity_V0compiler_V0transpile_V20_k29) 'cdr)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 20-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k29, env)}),
      _V0cdr);
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
  // ((bruijn ##..vcore.import.152 19 0) (close _V0vanity_V0compiler_V0transpile_V20_k28) 'display)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 19-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k28, env)}),
      _V0display);
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
  // ((bruijn ##..vcore.import.152 18 0) (close _V0vanity_V0compiler_V0transpile_V20_k27) 'lookup-intrinsic-name)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 18-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k27, env)}),
      _V0lookup__intrinsic__name);
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
  // ((bruijn ##..vcore.import.152 17 0) (close _V0vanity_V0compiler_V0transpile_V20_k26) 'cadr)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 17-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k26, env)}),
      _V0cadr);
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
  // ((bruijn ##..vcore.import.152 16 0) (close _V0vanity_V0compiler_V0transpile_V20_k25) 'eqv?)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 16-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k25, env)}),
      _V0eqv_Q);
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
  // ((bruijn ##..vcore.import.152 15 0) (close _V0vanity_V0compiler_V0transpile_V20_k24) 'pair?)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 15-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k24, env)}),
      _V0pair_Q);
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
  // ((bruijn ##..vcore.import.152 14 0) (close _V0vanity_V0compiler_V0transpile_V20_k23) 'symbol?)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 14-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k23, env)}),
      _V0symbol_Q);
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
  // ((bruijn ##..vcore.import.152 13 0) (close _V0vanity_V0compiler_V0transpile_V20_k22) '-)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 13-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k22, env)}),
      _V0__);
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
  // ((bruijn ##..vcore.import.152 12 0) (close _V0vanity_V0compiler_V0transpile_V20_k21) 'list-ref)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 12-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k21, env)}),
      _V0list__ref);
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
  // ((bruijn ##..vcore.import.152 11 0) (close _V0vanity_V0compiler_V0transpile_V20_k20) '=)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 11-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k20, env)}),
      _V0_E);
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
  // ((bruijn ##..vcore.import.152 10 0) (close _V0vanity_V0compiler_V0transpile_V20_k19) 'append)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 10-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k19, env)}),
      _V0append);
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
  // ((bruijn ##..vcore.import.152 9 0) (close _V0vanity_V0compiler_V0transpile_V20_k18) 'error)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 9-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k18, env)}),
      _V0error);
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
  // ((bruijn ##..vcore.import.152 8 0) (close _V0vanity_V0compiler_V0transpile_V20_k17) 'map)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 8-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k17, env)}),
      _V0map);
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
  // ((bruijn ##..vcore.import.152 7 0) (close _V0vanity_V0compiler_V0transpile_V20_k16) 'cddr)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 7-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k16, env)}),
      _V0cddr);
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
  // ((bruijn ##..vcore.import.152 6 0) (close _V0vanity_V0compiler_V0transpile_V20_k15) 'car)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 6-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k15, env)}),
      _V0car);
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
  // (##vcore.make-import (close _V0vanity_V0compiler_V0transpile_V20_k8) (##string ##.string.1539) (bruijn ##.x.1397 6 0) (bruijn ##.x.1398 5 0) (bruijn ##.x.1399 4 0) (bruijn ##.x.1400 3 0) (bruijn ##.x.1401 2 0) (bruijn ##.x.1402 1 0) (bruijn ##.x.1403 0 0))
    VCallFuncWithGC(runtime, (VFunc)VMakeImport2, 9,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k8, env)}),
      VEncodePointer(&_V10_Dstring_D1539.sym, VPOINTER_OTHER),
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
  // (##vcore.load-library (close _V0vanity_V0compiler_V0transpile_V20_k7) (##string ##.string.1540))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k7, env)}),
      VEncodePointer(&_V10_Dstring_D1540.sym, VPOINTER_OTHER));
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
  // (##vcore.load-library (close _V0vanity_V0compiler_V0transpile_V20_k6) (##string ##.string.1541))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k6, env)}),
      VEncodePointer(&_V10_Dstring_D1541.sym, VPOINTER_OTHER));
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
  // (##vcore.load-library (close _V0vanity_V0compiler_V0transpile_V20_k5) (##string ##.string.1542))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k5, env)}),
      VEncodePointer(&_V10_Dstring_D1542.sym, VPOINTER_OTHER));
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
  // (##vcore.load-library (close _V0vanity_V0compiler_V0transpile_V20_k4) (##string ##.string.1543))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k4, env)}),
      VEncodePointer(&_V10_Dstring_D1543.sym, VPOINTER_OTHER));
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
  // (##vcore.load-library (close _V0vanity_V0compiler_V0transpile_V20_k3) (##string ##.string.1544))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k3, env)}),
      VEncodePointer(&_V10_Dstring_D1544.sym, VPOINTER_OTHER));
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
  // (##vcore.load-library (close _V0vanity_V0compiler_V0transpile_V20_k2) (##string ##.string.1545))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k2, env)}),
      VEncodePointer(&_V10_Dstring_D1545.sym, VPOINTER_OTHER));
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
  // (##vcore.load-library (close _V0vanity_V0compiler_V0transpile_V20_k1) (##string ##.string.1546))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0transpile_V20_k1, env)}),
      VEncodePointer(&_V10_Dstring_D1546.sym, VPOINTER_OTHER));
}
VFunc _V0vanity_V0compiler_V0transpile_V20 = (VFunc)_V0vanity_V0compiler_V0transpile_V20_lambda1;
