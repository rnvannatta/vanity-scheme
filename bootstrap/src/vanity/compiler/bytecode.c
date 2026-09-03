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

VEnv * _V60_V0vanity_V0compiler_V0bytecode;

static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D1543 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "_V0vanity_V0core_V20" };
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D1542 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "_V0vanity_V0list_V20" };
static struct { VBlob sym; char bytes[30]; } _V10_Dstring_D1541 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 30 }, "_V0vanity_V0pretty__print_V20" };
static struct { VBlob sym; char bytes[33]; } _V10_Dstring_D1540 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 33 }, "_V0vanity_V0compiler_V0utils_V20" };
static struct { VBlob sym; char bytes[33]; } _V10_Dstring_D1539 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 33 }, "_V0vanity_V0compiler_V0match_V20" };
static struct { VBlob sym; char bytes[37]; } _V10_Dstring_D1538 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 37 }, "_V0vanity_V0compiler_V0variables_V20" };
static struct { VBlob sym; char bytes[31]; } _V10_Dstring_D1537 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 31 }, "_V0vanity_V0compiler_V0ffi_V20" };
static struct { VBlob sym; char bytes[27]; } _V10_Dstring_D1536 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 27 }, "_V0vanity_V0intrinsics_V20" };
VWEAK VWORD _V0lookup__intrinsic__name;VWEAK struct { VBlob sym; char bytes[22]; } _VW_V0lookup__intrinsic__name = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 22 }, "lookup-intrinsic-name" };
VWEAK VWORD _V0mangle__library;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V0mangle__library = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "mangle-library" };
VWEAK VWORD _V0cdddr;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0cdddr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "cdddr" };
VWEAK VWORD _V0length;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0length = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "length" };
VWEAK VWORD _V0iota;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0iota = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "iota" };
VWEAK VWORD _V0gensym;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0gensym = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "gensym" };
VWEAK VWORD _V0caadr;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0caadr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "caadr" };
VWEAK VWORD _V0fold;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0fold = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "fold" };
VWEAK VWORD _V0string__append;VWEAK struct { VBlob sym; char bytes[14]; } _VW_V0string__append = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 14 }, "string-append" };
VWEAK VWORD _V0sprintf;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0sprintf = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "sprintf" };
VWEAK VWORD _V0cadr;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0cadr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "cadr" };
VWEAK VWORD _V0mangle__foreign__function;VWEAK struct { VBlob sym; char bytes[24]; } _VW_V0mangle__foreign__function = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 24 }, "mangle-foreign-function" };
VWEAK VWORD _V0get__foreign__encoder;VWEAK struct { VBlob sym; char bytes[20]; } _VW_V0get__foreign__encoder = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 20 }, "get-foreign-encoder" };
VWEAK VWORD _V0cddr;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0cddr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "cddr" };
VWEAK VWORD _V0get__foreign__decoder;VWEAK struct { VBlob sym; char bytes[20]; } _VW_V0get__foreign__decoder = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 20 }, "get-foreign-decoder" };
VWEAK VWORD _V0equal_Q;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0equal_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "equal\?" };
VWEAK VWORD _V0error;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0error = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "error" };
VWEAK VWORD _V0memv;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0memv = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "memv" };
VWEAK VWORD _V0display;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0display = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "display" };
VWEAK VWORD _V0writeln;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0writeln = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "writeln" };
VWEAK VWORD _V0displayln;VWEAK struct { VBlob sym; char bytes[10]; } _VW_V0displayln = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 10 }, "displayln" };
VWEAK VWORD _V0reverse;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0reverse = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "reverse" };
VWEAK VWORD _V0compiler__error;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V0compiler__error = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "compiler-error" };
VWEAK VWORD _V0append;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0append = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "append" };
VWEAK VWORD _V0map;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0map = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "map" };
static struct { VBlob sym; char bytes[36]; } _V10_Dstring_D1535 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 36 }, "_V0vanity_V0compiler_V0bytecode_V20" };
VWEAK VWORD _V0to__bytecode;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0to__bytecode = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "to-bytecode" };
VWEAK VWORD _V0write__bytecode;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V0write__bytecode = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "write-bytecode" };
VWEAK VWORD _V0lookup;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0lookup = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "lookup" };
static struct { VBlob sym; char bytes[29]; } _V10_Dstring_D1534 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 29 }, "print-bytecode: unknown atom" };
VWEAK VWORD _V10basic__intrinsic;VWEAK struct { VBlob sym; char bytes[18]; } _VW_V10basic__intrinsic = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 18 }, "##basic-intrinsic" };
VWEAK VWORD _V0foreign__function;VWEAK struct { VBlob sym; char bytes[17]; } _VW_V0foreign__function = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 17 }, "foreign-function" };
VWEAK VWORD _V10intrinsic;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V10intrinsic = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "##intrinsic" };
VWEAK VWORD _V0close;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0close = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "close" };
VWEAK VWORD _V0quote;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0quote = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "quote" };
VWEAK VWORD _V0define;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0define = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "define" };
VWEAK VWORD _V10vcore_Ddefine;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V10vcore_Ddefine = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "##vcore.define" };
VWEAK VWORD _V0set_B;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0set_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "set!" };
static struct { VBlob sym; char bytes[38]; } _V10_Dstring_D1533 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 38 }, "print-bytecode: set must set a symbol" };
VWEAK VWORD _V0intrinsic;VWEAK struct { VBlob sym; char bytes[10]; } _VW_V0intrinsic = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 10 }, "intrinsic" };
VWEAK VWORD _V10vcore_Dset__global_B;VWEAK struct { VBlob sym; char bytes[20]; } _VW_V10vcore_Dset__global_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 20 }, "##vcore.set-global!" };
VWEAK VWORD _V0call;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0call = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "call" };
VWEAK VWORD _V0push;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0push = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "push" };
VWEAK VWORD _V0push__set_B;VWEAK struct { VBlob sym; char bytes[10]; } _VW_V0push__set_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 10 }, "push-set!" };
VWEAK VWORD _V10letrec;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V10letrec = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "##letrec" };
VWEAK VWORD _V0letrec;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0letrec = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "letrec" };
VWEAK VWORD _V0letrec__end;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V0letrec__end = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "letrec-end" };
VWEAK VWORD _V0letrec__begin;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V0letrec__begin = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "letrec-begin" };
VWEAK VWORD _V0if;VWEAK struct { VBlob sym; char bytes[3]; } _VW_V0if = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 3 }, "if" };
static struct { VBlob sym; char bytes[2]; } _V10_Dstring_D1532 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 2 }, "L" };
VWEAK VWORD _V0bf;VWEAK struct { VBlob sym; char bytes[3]; } _VW_V0bf = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 3 }, "bf" };
static struct { VBlob sym; char bytes[5]; } _V10_Dstring_D1531 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 5 }, "case" };
static struct { VBlob sym; char bytes[11]; } _V10_Dstring_D1530 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 11 }, "case-error" };
static struct { VBlob sym; char bytes[20]; } _V10_Dstring_D1529 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 20 }, "process-case-lambda" };
static struct { VBlob sym; char bytes[25]; } _V10_Dstring_D1528 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 25 }, "process-case-lambda-tail" };
static struct { VBlob sym; char bytes[15]; } _V10_Dstring_D1527 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 15 }, "--expected ~A\n" };
static struct { VBlob sym; char bytes[23]; } _V10_Dstring_D1526 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 23 }, "--expected ~A or more\n" };
static struct { VBlob sym; char bytes[1]; } _V10_Dstring_D1525 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 1 }, "" };
VWEAK VWORD _V0case__lambda__error;VWEAK struct { VBlob sym; char bytes[18]; } _VW_V0case__lambda__error = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 18 }, "case-lambda-error" };
VWEAK VWORD _V0_P;VWEAK struct { VBlob sym; char bytes[2]; } _VW_V0_P = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 2 }, "+" };
VWEAK VWORD _V10foreign_Dfunction;VWEAK struct { VBlob sym; char bytes[19]; } _VW_V10foreign_Dfunction = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 19 }, "##foreign.function" };
VWEAK VWORD _V0extern;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0extern = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "extern" };
VWEAK VWORD _V0foreign__pointer;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V0foreign__pointer = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "foreign-pointer" };
VWEAK VWORD _V0pointer;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0pointer = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "pointer" };
VWEAK VWORD _V0const;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0const = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "const" };
static struct { VBlob sym; char bytes[26]; } _V10_Dstring_D1524 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 26 }, "match statement exhausted" };
VWEAK VWORD _V10vcore_Ddeclare;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V10vcore_Ddeclare = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "##vcore.declare" };
VWEAK VWORD _V10foreign_Ddeclare;VWEAK struct { VBlob sym; char bytes[18]; } _VW_V10foreign_Ddeclare = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 18 }, "##foreign.declare" };
static VPair _V10_Dpair_D1523 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0bruijn;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0bruijn = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "bruijn" };
VWEAK VWORD _V0k;VWEAK struct { VBlob sym; char bytes[2]; } _VW_V0k = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 2 }, "k" };
static VPair _V10_Dpair_D1522 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1521 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1520 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1519 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1518 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1517 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1516 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1515 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D1514 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0declare__foreign__variable;VWEAK struct { VBlob sym; char bytes[25]; } _VW_V0declare__foreign__variable = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 25 }, "declare-foreign-variable" };
VWEAK VWORD _V0declare__foreign;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V0declare__foreign = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "declare-foreign" };
VWEAK VWORD _V0declare;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0declare = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "declare" };
VWEAK VWORD _V0case__lambda_P;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V0case__lambda_P = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "case-lambda+" };
VWEAK VWORD _V0case__lambda;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0case__lambda = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "case-lambda" };
VWEAK VWORD _V0lambda_P;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0lambda_P = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "lambda+" };
VWEAK VWORD _V0lambda;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0lambda = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "lambda" };
VWEAK VWORD _V0toplevel;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0toplevel = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "toplevel" };
VWEAK VWORD _V0label;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0label = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "label" };
static struct { VBlob sym; char bytes[3]; } _V10_Dstring_D1513 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 3 }, "#(" };
static struct { VBlob sym; char bytes[2]; } _V10_Dstring_D1512 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 2 }, ")" };
static struct { VBlob sym; char bytes[53]; } _V10_Dstring_D1511 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 53 }, "logic error: bytecode shouldn't have a literal table" };
static struct { VBlob sym; char bytes[40]; } _V10_Dstring_D1510 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 40 }, "shared library has toplevel expressions" };
static struct { VBlob sym; char bytes[44]; } _V10_Dstring_D1509 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 44 }, "bytecode shared libraries not supported yet" };
VWEAK VWORD _V40VMultiImport;
VWEAK VClosure _VW_V40VMultiImport = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VMultiImport, NULL };
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0bytecode_V0process__atom, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0bytecode_V0process__combination, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0bytecode_V0process__application_V10_Dloop_D376, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0bytecode_V0process__application, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0bytecode_V0process__fun__single, _var0, _var1, _var2, _var3, _var4, _var5);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D276, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0bytecode_V0process__function, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V10_Dloop_D234, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0bytecode_V0process__declare, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0bytecode_V0process__toplevel, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0bytecode_V0glue__bytecode_V10_Dloop_D193, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0bytecode_V0glue__bytecode, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0bytecode_V0write__bytecode__line, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0bytecode_V0write__bytecode_V10_Dloop_D189, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0bytecode_V0write__bytecode, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0bytecode_V0to__bytecode, _var0, _var1, _var2, _var3, _var4, _var5, _var6, _var7, _var8, _var9, _var10);
void _V50_V0vanity_V0compiler_V0bytecode_V0to__bytecode_V0k11(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0to__bytecode_V0k11, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.shared?.176 3 2) ((bruijn ##.compiler-error.122 5 2) (bruijn ##.%k.436 0 0) (##string ##.string.1509)) ((bruijn ##.%k.436 0 0) #f))
if(VDecodeBool(
statics->up->up->vars[2])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 2)), 2,
      _var0,
      VEncodePointer(&_V10_Dstring_D1509.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0bytecode_V0to__bytecode_V0k13(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0to__bytecode_V0k13, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.shared?.176 3 2) ((bruijn ##.%k.435 0 0) (bruijn ##.print-main?.995 2 1)) ((bruijn ##.%k.435 0 0) #f))
if(VDecodeBool(
statics->up->up->vars[2])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0bytecode_V0to__bytecode_V0k15(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0to__bytecode_V0k15, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.433 1 0) ((bruijn ##.compiler-error.122 6 2) (bruijn ##.%k.434 0 0) (##string ##.string.1510)) ((bruijn ##.%k.434 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 2)), 2,
      _var0,
      VEncodePointer(&_V10_Dstring_D1510.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0bytecode_V0to__bytecode_V0k17(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0to__bytecode_V0k17, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.997 1 1) ((bruijn ##.compiler-error.122 7 2) (bruijn ##.%k.431 0 0) (##string ##.string.1511) (bruijn ##.literal-table.178 5 4)) ((bruijn ##.%k.431 0 0) #f))
if(VDecodeBool(
statics->vars[1])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 2)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1511.sym, VPOINTER_OTHER),
      VGetArg(statics, 5-1, 4));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0bytecode_V0to__bytecode_V0k22(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0to__bytecode_V0k22, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.print-main?.995 7 1) ((bruijn ##.map.120 10 0) (bruijn ##.%k.429 0 0) (bruijn ##.process-toplevel.166 9 4) (bruijn ##.toplevels.184 8 10)) ((bruijn ##.%k.429 0 0) '()))
if(VDecodeBool(
VGetArg(statics, 7-1, 1))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 0)), 3,
      _var0,
      VGetArg(statics, 9-1, 4),
      VGetArg(statics, 8-1, 10));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VNULL);
}
}
void _V50_V0vanity_V0compiler_V0bytecode_V0to__bytecode_V0k24(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0to__bytecode_V0k24, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler bytecode glue-bytecode) #t (bruijn ##.glue-bytecode.165 10 3) (bruijn ##.%k.421 9 0) (bruijn ##.%x.424 0 0))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0bytecode;
    VWORD _arg0 = 
      VGetArg(statics, 9-1, 0);
    VWORD _arg1 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0glue__bytecode, _V60_V0vanity_V0compiler_V0bytecode)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0bytecode_V0glue__bytecode(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0bytecode_V0to__bytecode_V0k23(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0to__bytecode_V0k23, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.append.121 10 1) (close _V50_V0vanity_V0compiler_V0bytecode_V0to__bytecode_V0k24) (bruijn ##.%x.425 3 0) (bruijn ##.%x.426 2 0) (bruijn ##.%x.427 1 0) (bruijn ##.%x.428 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 1)), 5,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0to__bytecode_V0k24, self)))),
      statics->up->up->vars[0],
      statics->up->vars[0],
      statics->vars[0],
      _var0);
}
void _V50_V0vanity_V0compiler_V0bytecode_V0to__bytecode_V0k21(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0to__bytecode_V0k21, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0bytecode_V0to__bytecode_V0k22) (close _V50_V0vanity_V0compiler_V0bytecode_V0to__bytecode_V0k23))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0to__bytecode_V0k22, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0to__bytecode_V0k23, self)))));
}
void _V50_V0vanity_V0compiler_V0bytecode_V0to__bytecode_V0k20(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0to__bytecode_V0k20, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.map.120 8 0) (close _V50_V0vanity_V0compiler_V0bytecode_V0to__bytecode_V0k21) (bruijn ##.process-foreign-function.168 7 6) (bruijn ##.foreign-functions.179 6 5))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0to__bytecode_V0k21, self)))),
      VGetArg(statics, 7-1, 6),
      VGetArg(statics, 6-1, 5));
}
void _V50_V0vanity_V0compiler_V0bytecode_V0to__bytecode_V0k19(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0to__bytecode_V0k19, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.map.120 7 0) (close _V50_V0vanity_V0compiler_V0bytecode_V0to__bytecode_V0k20) (bruijn ##.process-function.169 6 7) (bruijn ##.functions.423 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0to__bytecode_V0k20, self)))),
      VGetArg(statics, 6-1, 7),
      statics->up->up->vars[0]);
}
static void _V50_V0vanity_V0compiler_V0bytecode_V0to__bytecode_V0k18(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.map.120 6 0) (close _V50_V0vanity_V0compiler_V0bytecode_V0to__bytecode_V0k19) (bruijn ##.process-declare.167 5 5) (bruijn ##.declares.183 4 9))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0to__bytecode_V0k19, self)))),
      VGetArg(statics, 5-1, 5),
      statics->up->up->up->vars[9]);
}
static void _V50_V0vanity_V0compiler_V0bytecode_V0to__bytecode_V0k16(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 2 2 (##.%x.996 ##.%p.997) ((##vcore.null? (bruijn ##.literal-table.178 4 4)) (##vcore.not (bruijn ##.%x.996 0 0))) ((close _V50_V0vanity_V0compiler_V0bytecode_V0to__bytecode_V0k17) (close _V50_V0vanity_V0compiler_V0bytecode_V0to__bytecode_V0k18)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VNullP2(runtime, NULL,
      statics->up->up->up->vars[4]);
    self->vars[1] = _VBasic_VNot2(runtime, NULL,
      self->vars[0]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0to__bytecode_V0k17, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0to__bytecode_V0k18, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0bytecode_V0to__bytecode_V0k14(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0to__bytecode_V0k14, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0bytecode_V0to__bytecode_V0k15) (close _V50_V0vanity_V0compiler_V0bytecode_V0to__bytecode_V0k16))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0to__bytecode_V0k15, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0to__bytecode_V0k16, self)))));
}
static void _V50_V0vanity_V0compiler_V0bytecode_V0to__bytecode_V0k12(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((close _V50_V0vanity_V0compiler_V0bytecode_V0to__bytecode_V0k13) (close _V50_V0vanity_V0compiler_V0bytecode_V0to__bytecode_V0k14))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0to__bytecode_V0k13, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0to__bytecode_V0k14, self)))));
}
void _V50_V0vanity_V0compiler_V0bytecode_V0to__bytecode_V0k10(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0to__bytecode_V0k10, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0bytecode_V0to__bytecode_V0k11) (close _V50_V0vanity_V0compiler_V0bytecode_V0to__bytecode_V0k12))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0to__bytecode_V0k11, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0to__bytecode_V0k12, self)))));
}
void _V50_V0vanity_V0compiler_V0bytecode_V0to__bytecode(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4, VWORD _var5, VWORD _var6, VWORD _var7, VWORD _var8, VWORD _var9, VWORD _var10) {
 if(argc != 11) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0to__bytecode, got ~D~N"
  "-- expected 11~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[11]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 11, 11, statics);
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
  // (basic-block 2 2 (##.%x.994 ##.print-main?.995) ((##vcore.null? (bruijn ##.toplevels.184 1 10)) (##vcore.not (bruijn ##.%x.994 0 0))) ((bruijn ##.reverse.123 3 3) (close _V50_V0vanity_V0compiler_V0bytecode_V0to__bytecode_V0k10) (bruijn ##.functions.181 1 7)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VNullP2(runtime, NULL,
      statics->vars[10]);
    self->vars[1] = _VBasic_VNot2(runtime, NULL,
      self->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[3]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0to__bytecode_V0k10, self)))),
      statics->vars[7]);
    }
}
static void _V50_V0vanity_V0compiler_V0bytecode_V0write__bytecode_V10_Dloop_D189_V0k26(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%x.1001) ((##vcore.+ (bruijn ##.i.190 3 1) 1)) (##qualified-call (vanity compiler bytecode write-bytecode ##.loop.189) #f (bruijn ##.loop.189 4 0) (bruijn ##.%k.439 3 0) (bruijn ##.%x.1001 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      statics->up->up->vars[1],
      VEncodeInt(1l));
  {
    VClosure * _closure = VDecodeClosure(statics->up->up->up->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->up->up->vars[0];
    VWORD _arg1 = 
      self->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0bytecode_V0write__bytecode_V10_Dloop_D189(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0bytecode_V0write__bytecode_V10_Dloop_D189(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0write__bytecode_V10_Dloop_D189, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.%p.999) ((##vcore.< (bruijn ##.i.190 1 1) (bruijn ##.len.998 3 0))) (if (bruijn ##.%p.999 0 0) (basic-block 1 1 (##.%x.1000) ((##vcore.vector-ref (bruijn ##.bytecode.187 5 1) (bruijn ##.i.190 2 1))) (##qualified-call (vanity compiler bytecode write-bytecode-line) #t (bruijn ##.write-bytecode-line.164 6 2) (close _V50_V0vanity_V0compiler_V0bytecode_V0write__bytecode_V10_Dloop_D189_V0k26) (bruijn ##.%x.1000 0 0))) ((bruijn ##.%k.439 1 0) #f)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCmpLt(runtime, NULL,
      statics->vars[1],
      statics->up->up->vars[0]);
if(VDecodeBool(
self->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VVectorRef2(runtime, NULL,
      VGetArg(statics, 5-1, 1),
      statics->up->vars[1]);
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0bytecode;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0write__bytecode_V10_Dloop_D189_V0k26, self))));
    VWORD _arg1 = 
      self->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0write__bytecode__line, _V60_V0vanity_V0compiler_V0bytecode)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0bytecode_V0write__bytecode__line(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
    }
}
static void _V50_V0vanity_V0compiler_V0bytecode_V0write__bytecode_V0k27(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.displayln.124 4 4) (bruijn ##.%k.438 2 0) (##string ##.string.1512))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[4]), 2,
      statics->up->vars[0],
      VEncodePointer(&_V10_Dstring_D1512.sym, VPOINTER_OTHER));
}
static void _V50_V0vanity_V0compiler_V0bytecode_V0write__bytecode_V0k25(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.len.998) ((##vcore.vector-length (bruijn ##.bytecode.187 1 1))) (letrec 1 ((close "_V50_V0vanity_V0compiler_V0bytecode_V0write__bytecode_V10_Dloop_D189")) (##qualified-call (vanity compiler bytecode write-bytecode ##.loop.189) #f (bruijn ##.loop.189 0 0) (close _V50_V0vanity_V0compiler_V0bytecode_V0write__bytecode_V0k27) 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VVectorLength2(runtime, NULL,
      statics->vars[1]);
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0write__bytecode_V10_Dloop_D189, self))));
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0write__bytecode_V0k27, self))));
    VWORD _arg1 = 
      VEncodeInt(0l);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0bytecode_V0write__bytecode_V10_Dloop_D189(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
    }
}
void _V50_V0vanity_V0compiler_V0bytecode_V0write__bytecode(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0write__bytecode, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.displayln.124 2 4) (close _V50_V0vanity_V0compiler_V0bytecode_V0write__bytecode_V0k25) (##string ##.string.1513))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[4]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0write__bytecode_V0k25, self)))),
      VEncodePointer(&_V10_Dstring_D1513.sym, VPOINTER_OTHER));
}
void _V50_V0vanity_V0compiler_V0bytecode_V0write__bytecode__line_V0k29(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0write__bytecode__line_V0k29, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.1003 1 0) ((bruijn ##.display.126 6 6) (bruijn ##.%k.445 0 0) #\tab) ((bruijn ##.%k.445 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 6)), 2,
      _var0,
      VEncodeChar('\t'));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V50_V0vanity_V0compiler_V0bytecode_V0write__bytecode__line_V0k30(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.writeln.125 5 5) (bruijn ##.%k.443 3 0) (bruijn ##.line.191 3 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 5)), 2,
      statics->up->up->vars[0],
      statics->up->up->vars[1]);
}
void _V50_V0vanity_V0compiler_V0bytecode_V0write__bytecode__line_V0k28(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0write__bytecode__line_V0k28, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%p.1003) ((##vcore.not (bruijn ##.%x.446 1 0))) ((close _V50_V0vanity_V0compiler_V0bytecode_V0write__bytecode__line_V0k29) (close _V50_V0vanity_V0compiler_V0bytecode_V0write__bytecode__line_V0k30)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VNot2(runtime, NULL,
      statics->vars[0]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0write__bytecode__line_V0k29, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0write__bytecode__line_V0k30, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0bytecode_V0write__bytecode__line(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0write__bytecode__line, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.%x.1002) ((##vcore.car (bruijn ##.line.191 1 1))) ((bruijn ##.memv.127 3 7) (close _V50_V0vanity_V0compiler_V0bytecode_V0write__bytecode__line_V0k28) (bruijn ##.%x.1002 0 0) '(##pair ##.pair.1522)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[7]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0write__bytecode__line_V0k28, self)))),
      self->vars[0],
      VEncodePointer(&_V10_Dpair_D1522, VPOINTER_PAIR));
    }
}
void _V50_V0vanity_V0compiler_V0bytecode_V0glue__bytecode_V10_Dloop_D193_V0k31(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0glue__bytecode_V10_Dloop_D193_V0k31, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.append.121 7 1) (bruijn ##.%k.450 3 0) (bruijn ##.%x.1005 1 0) (bruijn ##.%x.453 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 1)), 3,
      statics->up->up->vars[0],
      statics->vars[0],
      _var0);
}
void _V50_V0vanity_V0compiler_V0bytecode_V0glue__bytecode_V10_Dloop_D193(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0glue__bytecode_V10_Dloop_D193, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.%p.1004) ((##vcore.null? (bruijn ##.segments.194 1 1))) (if (bruijn ##.%p.1004 0 0) ((bruijn ##.%k.450 1 0) '()) (basic-block 2 2 (##.%x.1005 ##.%x.1006) ((##vcore.car (bruijn ##.segments.194 2 1)) (##vcore.cdr (bruijn ##.segments.194 2 1))) (##qualified-call (vanity compiler bytecode glue-bytecode ##.loop.193) #f (bruijn ##.loop.193 3 0) (close _V50_V0vanity_V0compiler_V0bytecode_V0glue__bytecode_V10_Dloop_D193_V0k31) (bruijn ##.%x.1006 0 1)))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VNullP2(runtime, NULL,
      statics->vars[1]);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VNULL);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->vars[1]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->up->vars[1]);
  {
    VClosure * _closure = VDecodeClosure(statics->up->up->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0glue__bytecode_V10_Dloop_D193_V0k31, self))));
    VWORD _arg1 = 
      self->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0bytecode_V0glue__bytecode_V10_Dloop_D193(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
}
    }
}
void _V50_V0vanity_V0compiler_V0bytecode_V0glue__bytecode_V0k32(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0glue__bytecode_V0k32, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.list->vector (bruijn ##.%k.448 2 0) (bruijn ##.%x.449 0 0))
    VCallFuncWithGC(runtime, (VFunc)VListVector2, 2,
      statics->up->vars[0],
      _var0);
}
void _V50_V0vanity_V0compiler_V0bytecode_V0glue__bytecode(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0glue__bytecode, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (letrec 1 ((close "_V50_V0vanity_V0compiler_V0bytecode_V0glue__bytecode_V10_Dloop_D193")) (##qualified-call (vanity compiler bytecode glue-bytecode ##.loop.193) #f (bruijn ##.loop.193 0 0) (close _V50_V0vanity_V0compiler_V0bytecode_V0glue__bytecode_V0k32) (bruijn ##.segments.192 1 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0glue__bytecode_V10_Dloop_D193, self))));
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0glue__bytecode_V0k32, self))));
    VWORD _arg1 = 
      statics->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0bytecode_V0glue__bytecode_V10_Dloop_D193(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__toplevel_V0k33(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__toplevel_V0k33, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%r.1013) ((##vcore.cons '(##pair ##.pair.1523) (bruijn ##.%x.456 1 0))) ((bruijn ##.%k.455 3 0) (bruijn ##.%r.1013 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      VEncodePointer(&_V10_Dpair_D1523, VPOINTER_PAIR),
      statics->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      self->vars[0]);
    }
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__toplevel(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__toplevel, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 6 6 (##.%x.1007 ##.%x.1008 ##.%x.1009 ##.%x.1010 ##.%x.1011 ##.%x.1012) ((##vcore.cons '0 '()) (##vcore.cons '0 (bruijn ##.%x.1007 0 0)) (##vcore.cons 'k (bruijn ##.%x.1008 0 1)) (##vcore.cons 'bruijn (bruijn ##.%x.1009 0 2)) (##vcore.cons (bruijn ##.%x.1010 0 3) '()) (##vcore.cons (bruijn ##.expr.195 1 1) (bruijn ##.%x.1011 0 4))) (##qualified-call (vanity compiler bytecode process-combination) #t (bruijn ##.process-combination.173 2 11) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__toplevel_V0k33) (bruijn ##.%x.1012 0 5)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[6]; } container;
    self = &container.self;
    VInitEnv(self, 6, 6, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      VEncodeInt(0l),
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      VEncodeInt(0l),
      self->vars[0]);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      _V0k,
      self->vars[1]);
    self->vars[3] = _VBasic_VCons2(runtime, NULL,
      _V0bruijn,
      self->vars[2]);
    self->vars[4] = _VBasic_VCons2(runtime, NULL,
      self->vars[3],
      VNULL);
    self->vars[5] = _VBasic_VCons2(runtime, NULL,
      statics->vars[1],
      self->vars[4]);
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0bytecode;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__toplevel_V0k33, self))));
    VWORD _arg1 = 
      self->vars[5];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__combination, _V60_V0vanity_V0compiler_V0bytecode)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0bytecode_V0process__combination(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__declare_V0k36(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__declare_V0k36, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.483 0 0) (bruijn ##.%k.479 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 5-1, 0));
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__declare_V0lambda4(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__declare_V0lambda4, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%k.484 0 0) '())
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VNULL);
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__declare_V0k35(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__declare_V0k35, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.480 0 0) (basic-block 2 2 (##.expr.116.1030 ##.%p.1031) ((##vcore.cdr (bruijn ##.declare.196 6 1)) (##vcore.pair? (bruijn ##.expr.116.1030 0 0))) (if (bruijn ##.%p.1031 0 1) (basic-block 3 3 (##.d.1032 ##.%x.1033 ##.%p.1034) ((##vcore.car (bruijn ##.expr.116.1030 1 0)) (##vcore.cdr (bruijn ##.expr.116.1030 1 0)) (##vcore.null? (bruijn ##.%x.1033 0 1))) (if (bruijn ##.%p.1034 0 2) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0bytecode_V0process__declare_V0k36) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__declare_V0lambda4) (bruijn ##.kk.113.197 6 1)) ((bruijn ##.%k.479 4 0) #f))) ((bruijn ##.%k.479 3 0) #f))) ((bruijn ##.%k.479 2 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 6-1, 1));
    self->vars[1] = _VBasic_VPairP2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[0]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[0]);
    self->vars[2] = _VBasic_VNullP2(runtime, NULL,
      self->vars[1]);
if(VDecodeBool(
self->vars[2])) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__declare_V0k36, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__declare_V0lambda4, self)))),
      VGetArg(statics, 6-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__declare_V0k34(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__declare_V0k34, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1014 1 0) (basic-block 1 1 (##.%x.1029) ((##vcore.car (bruijn ##.declare.196 4 1))) ((bruijn ##.equal?.129 6 9) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__declare_V0k35) '##foreign.declare (bruijn ##.%x.1029 0 0))) ((bruijn ##.%k.479 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->up->up->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 9)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__declare_V0k35, self)))),
      _V10foreign_Ddeclare,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__declare_V0k40(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__declare_V0k40, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.471 0 0) (bruijn ##.%k.466 6 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 6-1, 0));
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__declare_V0lambda5(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__declare_V0lambda5, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 4 4 (##.%x.1025 ##.%x.1026 ##.%x.1027 ##.%r.1028) ((##vcore.cons (bruijn ##.v.1022 2 0) '()) (##vcore.cons (bruijn ##.f.1019 3 0) (bruijn ##.%x.1025 0 0)) (##vcore.cons 'declare (bruijn ##.%x.1026 0 1)) (##vcore.cons (bruijn ##.%x.1027 0 2) '())) ((bruijn ##.%k.472 1 0) (bruijn ##.%r.1028 0 3)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[4]; } container;
    self = &container.self;
    VInitEnv(self, 4, 4, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[0],
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      statics->up->up->vars[0],
      self->vars[0]);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      _V0declare,
      self->vars[1]);
    self->vars[3] = _VBasic_VCons2(runtime, NULL,
      self->vars[2],
      VNULL);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      self->vars[3]);
    }
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__declare_V0k39(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__declare_V0k39, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.467 0 0) (basic-block 2 2 (##.expr.118.1017 ##.%p.1018) ((##vcore.cdr (bruijn ##.declare.196 7 1)) (##vcore.pair? (bruijn ##.expr.118.1017 0 0))) (if (bruijn ##.%p.1018 0 1) (basic-block 3 3 (##.f.1019 ##.expr.119.1020 ##.%p.1021) ((##vcore.car (bruijn ##.expr.118.1017 1 0)) (##vcore.cdr (bruijn ##.expr.118.1017 1 0)) (##vcore.pair? (bruijn ##.expr.119.1020 0 1))) (if (bruijn ##.%p.1021 0 2) (basic-block 3 3 (##.v.1022 ##.%x.1023 ##.%p.1024) ((##vcore.car (bruijn ##.expr.119.1020 1 1)) (##vcore.cdr (bruijn ##.expr.119.1020 1 1)) (##vcore.null? (bruijn ##.%x.1023 0 1))) (if (bruijn ##.%p.1024 0 2) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0bytecode_V0process__declare_V0k40) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__declare_V0lambda5) (bruijn ##.kk.113.197 8 1)) ((bruijn ##.%k.466 5 0) #f))) ((bruijn ##.%k.466 4 0) #f))) ((bruijn ##.%k.466 3 0) #f))) ((bruijn ##.%k.466 2 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 7-1, 1));
    self->vars[1] = _VBasic_VPairP2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[0]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[0]);
    self->vars[2] = _VBasic_VPairP2(runtime, NULL,
      self->vars[1]);
if(VDecodeBool(
self->vars[2])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[1]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[1]);
    self->vars[2] = _VBasic_VNullP2(runtime, NULL,
      self->vars[1]);
if(VDecodeBool(
self->vars[2])) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__declare_V0k40, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__declare_V0lambda5, self)))),
      VGetArg(statics, 8-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__declare_V0k38(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__declare_V0k38, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1015 1 0) (basic-block 1 1 (##.%x.1016) ((##vcore.car (bruijn ##.declare.196 5 1))) ((bruijn ##.equal?.129 7 9) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__declare_V0k39) '##vcore.declare (bruijn ##.%x.1016 0 0))) ((bruijn ##.%k.466 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 5-1, 1));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 9)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__declare_V0k39, self)))),
      _V10vcore_Ddeclare,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V50_V0vanity_V0compiler_V0bytecode_V0process__declare_V0k41(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.error.128 5 8) (bruijn ##.%k.464 2 0) (##string ##.string.1524))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 8)), 2,
      statics->up->vars[0],
      VEncodePointer(&_V10_Dstring_D1524.sym, VPOINTER_OTHER));
}
static void _V50_V0vanity_V0compiler_V0bytecode_V0process__declare_V0k37(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.1015) ((##vcore.pair? (bruijn ##.declare.196 3 1))) ((close _V50_V0vanity_V0compiler_V0bytecode_V0process__declare_V0k38) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__declare_V0k41)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->up->up->vars[1]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__declare_V0k38, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__declare_V0k41, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__declare_V0lambda3(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__declare_V0lambda3, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.%p.1014) ((##vcore.pair? (bruijn ##.declare.196 2 1))) ((close _V50_V0vanity_V0compiler_V0bytecode_V0process__declare_V0k34) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__declare_V0k37)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->up->vars[1]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__declare_V0k34, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__declare_V0k37, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__declare(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__declare, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (##vcore.call/cc (bruijn ##.%k.463 0 0) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__declare_V0lambda3))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__declare_V0lambda3, self)))));
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V0k45(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V0k45, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.540 0 0) (bruijn ##.%k.529 13 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 13-1, 0));
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V0k46(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V0k46, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1093 1 0) (basic-block 2 2 (##.%x.1109 ##.%r.1110) ((##vcore.car (bruijn ##.type.1085 6 0)) (##vcore.eq? (bruijn ##.%x.1109 0 0) 'const)) ((bruijn ##.%k.565 1 0) (bruijn ##.%r.1110 0 1))) ((bruijn ##.%k.565 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 6-1, 0));
    self->vars[1] = _VBasic_VEq2(runtime, NULL,
      self->vars[0],
      _V0const);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      self->vars[1]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V0k48(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V0k48, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.const?.221 1 0) ((bruijn ##.cadr.134 21 14) (bruijn ##.%k.563 0 0) (bruijn ##.type.1085 6 0)) ((bruijn ##.%k.563 0 0) (bruijn ##.type.1085 6 0)))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 21-1, 14)), 2,
      _var0,
      VGetArg(statics, 6-1, 0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 6-1, 0));
}
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V0k54(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V0k54, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1105 1 0) (basic-block 2 2 (##.%x.1107 ##.%r.1108) ((##vcore.car (bruijn ##.base.222 8 0)) (##vcore.eq? (bruijn ##.%x.1107 0 0) 'pointer)) ((bruijn ##.%k.559 1 0) (bruijn ##.%r.1108 0 1))) ((bruijn ##.%k.559 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 8-1, 0));
    self->vars[1] = _VBasic_VEq2(runtime, NULL,
      self->vars[0],
      _V0pointer);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      self->vars[1]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V0k56(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V0k56, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%r.1106) ((##vcore.car (bruijn ##.%x.557 1 0))) ((bruijn ##.%k.555 4 0) (bruijn ##.%r.1106 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      self->vars[0]);
    }
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V0k55(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V0k55, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.556 0 0) ((bruijn ##.%k.555 2 0) 'foreign-pointer) ((bruijn ##.get-foreign-decoder.130 28 10) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V0k56) (bruijn ##.base.222 7 0)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      _V0foreign__pointer);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 28-1, 10)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V0k56, self)))),
      VGetArg(statics, 7-1, 0));
}
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V0k53(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V0k53, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.const?.221 6 0) ((bruijn ##.%k.555 0 0) #f) (basic-block 1 1 (##.%p.1105) ((##vcore.pair? (bruijn ##.base.222 6 0))) ((close _V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V0k54) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V0k55))))
if(VDecodeBool(
VGetArg(statics, 6-1, 0))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      VGetArg(statics, 6-1, 0));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V0k54, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V0k55, self)))));
    }
}
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V0k58(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V0k58, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 10 10 (##.%x.1095 ##.%x.1096 ##.%x.1097 ##.%x.1098 ##.%x.1099 ##.%x.1100 ##.%x.1101 ##.%x.1102 ##.%x.1103 ##.%r.1104) ((##vcore.cons (bruijn ##.const?.221 8 0) '()) (##vcore.cons (bruijn ##.%x.553 1 0) (bruijn ##.%x.1095 0 0)) (##vcore.cons (bruijn ##.%x.551 2 0) (bruijn ##.%x.1096 0 1)) (##vcore.cons (bruijn ##.%x.1094 3 0) (bruijn ##.%x.1097 0 2)) (##vcore.cons (bruijn ##.lang.1074 19 0) (bruijn ##.%x.1098 0 3)) (##vcore.cons 'declare-foreign-variable (bruijn ##.%x.1099 0 4)) (##vcore.cons (bruijn ##.%x.1100 0 5) '()) (##vcore.cons (bruijn ##.%x.544 5 0) (bruijn ##.%x.1101 0 6)) (##vcore.cons 'label (bruijn ##.%x.1102 0 7)) (##vcore.cons (bruijn ##.%x.1103 0 8) '())) ((bruijn ##.%k.541 10 0) (bruijn ##.%r.1104 0 9)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[10]; } container;
    self = &container.self;
    VInitEnv(self, 10, 10, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 8-1, 0),
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      self->vars[0]);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[0],
      self->vars[1]);
    self->vars[3] = _VBasic_VCons2(runtime, NULL,
      statics->up->up->vars[0],
      self->vars[2]);
    self->vars[4] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 19-1, 0),
      self->vars[3]);
    self->vars[5] = _VBasic_VCons2(runtime, NULL,
      _V0declare__foreign__variable,
      self->vars[4]);
    self->vars[6] = _VBasic_VCons2(runtime, NULL,
      self->vars[5],
      VNULL);
    self->vars[7] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 5-1, 0),
      self->vars[6]);
    self->vars[8] = _VBasic_VCons2(runtime, NULL,
      _V0label,
      self->vars[7]);
    self->vars[9] = _VBasic_VCons2(runtime, NULL,
      self->vars[8],
      VNULL);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 0)), 1,
      self->vars[9]);
    }
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V0k57(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V0k57, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.symbol->string (close _V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V0k58) (bruijn ##.name.1090 9 0))
    VCallFuncWithGC(runtime, (VFunc)VSymbolString2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V0k58, self)))),
      VGetArg(statics, 9-1, 0));
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V0k52(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V0k52, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%x.1094) ((##vcore.car (bruijn ##.%x.561 1 0))) ((close _V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V0k53) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V0k57)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[0]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V0k53, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V0k57, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V0k51(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V0k51, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.get-foreign-encoder.132 23 12) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V0k52) (bruijn ##.base.222 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 23-1, 12)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V0k52, self)))),
      statics->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V0k50(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V0k50, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.string->symbol (close _V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V0k51) (bruijn ##.%x.562 0 0))
    VCallFuncWithGC(runtime, (VFunc)VStringSymbol2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V0k51, self)))),
      _var0);
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V0k49(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V0k49, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.mangle-foreign-function.133 21 13) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V0k50) (bruijn ##.name.1090 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 21-1, 13)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V0k50, self)))),
      statics->up->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V0k47(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V0k47, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V0k48) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V0k49))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V0k48, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V0k49, self)))));
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V0lambda7(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V0lambda7, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%p.1093) ((##vcore.pair? (bruijn ##.type.1085 4 0))) ((close _V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V0k46) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V0k47)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->up->up->up->vars[0]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V0k46, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V0k47, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V0k44(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V0k44, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.535 0 0) (basic-block 2 2 (##.expr.101.1083 ##.%p.1084) ((##vcore.cdr (bruijn ##.expr.100.1080 3 0)) (##vcore.pair? (bruijn ##.expr.101.1083 0 0))) (if (bruijn ##.%p.1084 0 1) (basic-block 3 3 (##.type.1085 ##.%x.1086 ##.%p.1087) ((##vcore.car (bruijn ##.expr.101.1083 1 0)) (##vcore.cdr (bruijn ##.expr.101.1083 1 0)) (##vcore.null? (bruijn ##.%x.1086 0 1))) (if (bruijn ##.%p.1087 0 2) (basic-block 2 2 (##.expr.102.1088 ##.%p.1089) ((##vcore.cdr (bruijn ##.expr.99.1078 6 1)) (##vcore.pair? (bruijn ##.expr.102.1088 0 0))) (if (bruijn ##.%p.1089 0 1) (basic-block 3 3 (##.name.1090 ##.%x.1091 ##.%p.1092) ((##vcore.car (bruijn ##.expr.102.1088 1 0)) (##vcore.cdr (bruijn ##.expr.102.1088 1 0)) (##vcore.null? (bruijn ##.%x.1091 0 1))) (if (bruijn ##.%p.1092 0 2) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V0k45) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V0lambda7) (bruijn ##.kk.94.208 14 1)) ((bruijn ##.%k.529 12 0) #f))) ((bruijn ##.%k.529 11 0) #f))) ((bruijn ##.%k.529 10 0) #f))) ((bruijn ##.%k.529 9 0) #f))) ((bruijn ##.%k.529 8 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      statics->up->up->vars[0]);
    self->vars[1] = _VBasic_VPairP2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[0]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[0]);
    self->vars[2] = _VBasic_VNullP2(runtime, NULL,
      self->vars[1]);
if(VDecodeBool(
self->vars[2])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 6-1, 1));
    self->vars[1] = _VBasic_VPairP2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[0]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[0]);
    self->vars[2] = _VBasic_VNullP2(runtime, NULL,
      self->vars[1]);
if(VDecodeBool(
self->vars[2])) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V0k45, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V0lambda7, self)))),
      VGetArg(statics, 14-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 0)), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 0)), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 0)), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 0)), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 0)), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V0k43(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V0k43, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.530 0 0) (basic-block 2 2 (##.expr.97.1072 ##.%p.1073) ((##vcore.cdr (bruijn ##.expr.207 6 1)) (##vcore.pair? (bruijn ##.expr.97.1072 0 0))) (if (bruijn ##.%p.1073 0 1) (basic-block 3 3 (##.lang.1074 ##.expr.98.1075 ##.%p.1076) ((##vcore.car (bruijn ##.expr.97.1072 1 0)) (##vcore.cdr (bruijn ##.expr.97.1072 1 0)) (##vcore.pair? (bruijn ##.expr.98.1075 0 1))) (if (bruijn ##.%p.1076 0 2) (basic-block 3 3 (##.decl.1077 ##.expr.99.1078 ##.%p.1079) ((##vcore.car (bruijn ##.expr.98.1075 1 1)) (##vcore.cdr (bruijn ##.expr.98.1075 1 1)) (##vcore.pair? (bruijn ##.expr.99.1078 0 1))) (if (bruijn ##.%p.1079 0 2) (basic-block 2 2 (##.expr.100.1080 ##.%p.1081) ((##vcore.car (bruijn ##.expr.99.1078 1 1)) (##vcore.pair? (bruijn ##.expr.100.1080 0 0))) (if (bruijn ##.%p.1081 0 1) (basic-block 1 1 (##.%x.1082) ((##vcore.car (bruijn ##.expr.100.1080 1 0))) ((bruijn ##.equal?.129 12 9) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V0k44) 'extern (bruijn ##.%x.1082 0 0))) ((bruijn ##.%k.529 6 0) #f))) ((bruijn ##.%k.529 5 0) #f))) ((bruijn ##.%k.529 4 0) #f))) ((bruijn ##.%k.529 3 0) #f))) ((bruijn ##.%k.529 2 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 6-1, 1));
    self->vars[1] = _VBasic_VPairP2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[0]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[0]);
    self->vars[2] = _VBasic_VPairP2(runtime, NULL,
      self->vars[1]);
if(VDecodeBool(
self->vars[2])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[1]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[1]);
    self->vars[2] = _VBasic_VPairP2(runtime, NULL,
      self->vars[1]);
if(VDecodeBool(
self->vars[2])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[1]);
    self->vars[1] = _VBasic_VPairP2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 9)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V0k44, self)))),
      _V0extern,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V0k42(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V0k42, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1035 1 0) (basic-block 1 1 (##.%x.1071) ((##vcore.car (bruijn ##.expr.207 4 1))) ((bruijn ##.equal?.129 6 9) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V0k43) '##foreign.function (bruijn ##.%x.1071 0 0))) ((bruijn ##.%k.529 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->up->up->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 9)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V0k43, self)))),
      _V10foreign_Dfunction,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V0k62(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V0k62, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.497 0 0) (bruijn ##.%k.490 10 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 10-1, 0));
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V0k66(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V0k66, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 8 8 (##.%x.1053 ##.%x.1054 ##.%x.1055 ##.%x.1056 ##.%x.1057 ##.%x.1058 ##.%x.1059 ##.%r.1060) ((##vcore.cons (bruijn ##.name.1049 9 0) (bruijn ##.%x.508 1 0)) (##vcore.cons (bruijn ##.%x.1052 2 0) (bruijn ##.%x.1053 0 0)) (##vcore.cons (bruijn ##.lang.1040 12 0) (bruijn ##.%x.1054 0 1)) (##vcore.cons 'declare-foreign (bruijn ##.%x.1055 0 2)) (##vcore.cons (bruijn ##.%x.1056 0 3) '()) (##vcore.cons (bruijn ##.%x.501 4 0) (bruijn ##.%x.1057 0 4)) (##vcore.cons 'label (bruijn ##.%x.1058 0 5)) (##vcore.cons (bruijn ##.%x.1059 0 6) '())) ((bruijn ##.%k.498 6 0) (bruijn ##.%r.1060 0 7)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[8]; } container;
    self = &container.self;
    VInitEnv(self, 8, 8, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 9-1, 0),
      statics->vars[0]);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[0],
      self->vars[0]);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 12-1, 0),
      self->vars[1]);
    self->vars[3] = _VBasic_VCons2(runtime, NULL,
      _V0declare__foreign,
      self->vars[2]);
    self->vars[4] = _VBasic_VCons2(runtime, NULL,
      self->vars[3],
      VNULL);
    self->vars[5] = _VBasic_VCons2(runtime, NULL,
      statics->up->up->up->vars[0],
      self->vars[4]);
    self->vars[6] = _VBasic_VCons2(runtime, NULL,
      _V0label,
      self->vars[5]);
    self->vars[7] = _VBasic_VCons2(runtime, NULL,
      self->vars[6],
      VNULL);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 1,
      self->vars[7]);
    }
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V0k68(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V0k68, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%r.1064) ((##vcore.cons (bruijn ##.%x.1063 2 0) (bruijn ##.%x.512 1 0))) ((bruijn ##.%k.509 5 0) (bruijn ##.%r.1064 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[0],
      statics->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      self->vars[0]);
    }
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V0k67(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V0k67, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 2 2 (##.%x.1061 ##.%p.1062) ((##vcore.cdr (bruijn ##.d.242 1 0)) (##vcore.pair? (bruijn ##.%x.1061 0 0))) (if (bruijn ##.%p.1062 0 1) (basic-block 1 1 (##.%x.1063) ((##vcore.car (bruijn ##.d.242 2 0))) ((bruijn ##.cddr.131 24 11) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V0k68) (bruijn ##.d.242 2 0))) (basic-block 1 1 (##.%r.1065) ((##vcore.car (bruijn ##.d.242 2 0))) ((bruijn ##.%k.509 3 0) (bruijn ##.%r.1065 0 0)))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[0]);
    self->vars[1] = _VBasic_VPairP2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 24-1, 11)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V0k68, self)))),
      statics->up->vars[0]);
    }
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      self->vars[0]);
    }
}
    }
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V0lambda10(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V0lambda10, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.get-foreign-decoder.130 21 10) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V0k67) (bruijn ##.arg.241 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 21-1, 10)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V0k67, self)))),
      _var1);
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V0k65(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V0k65, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%x.1052) ((##vcore.car (bruijn ##.%x.514 1 0))) ((bruijn ##.map.120 20 0) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V0k66) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V0lambda10) (bruijn ##.args.240 6 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 20-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V0k66, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V0lambda10, self)))),
      VGetArg(statics, 6-1, 1));
    }
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V0k64(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V0k64, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.get-foreign-encoder.132 18 12) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V0k65) (bruijn ##.ret.1046 6 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 18-1, 12)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V0k65, self)))),
      VGetArg(statics, 6-1, 0));
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V0k63(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V0k63, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.string->symbol (close _V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V0k64) (bruijn ##.%x.515 0 0))
    VCallFuncWithGC(runtime, (VFunc)VStringSymbol2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V0k64, self)))),
      _var0);
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V0lambda9(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V0lambda9, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.mangle-foreign-function.133 16 13) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V0k63) (bruijn ##.name.1049 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 13)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V0k63, self)))),
      statics->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V0lambda8(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V0lambda8, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.%p.1051) ((##vcore.null? (bruijn ##.tail-expr.239 1 0))) (if (bruijn ##.%p.1051 0 0) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V0k62) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V0lambda9) (bruijn ##.kk.94.208 12 1)) ((bruijn ##.%k.490 9 0) #f)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VNullP2(runtime, NULL,
      statics->vars[0]);
if(VDecodeBool(
self->vars[0])) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V0k62, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V0lambda9, self)))),
      VGetArg(statics, 12-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 0)), 1,
      VEncodeBool(false));
}
    }
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V10_Dloop_D234_V0k70(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V10_Dloop_D234_V0k70, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.110.233 5 1) (bruijn ##.%k.524 1 0) (bruijn ##.expr.112.235 3 1) (bruijn ##.%x.525 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 1)), 3,
      statics->vars[0],
      statics->up->up->vars[1],
      _var0);
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V10_Dloop_D234_V0k69(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V10_Dloop_D234_V0k69, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1067 1 1) ((bruijn ##.reverse.123 18 3) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V10_Dloop_D234_V0k70) (bruijn ##.args.109.236 2 2)) ((bruijn ##.%k.524 0 0) #f))
if(VDecodeBool(
statics->vars[1])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 18-1, 3)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V10_Dloop_D234_V0k70, self)))),
      statics->up->vars[2]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V10_Dloop_D234_V0k73(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V10_Dloop_D234_V0k73, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.110.233 7 1) (bruijn ##.%k.519 2 0) (bruijn ##.expr.112.235 5 1) (bruijn ##.%x.520 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 1)), 3,
      statics->up->vars[0],
      VGetArg(statics, 5-1, 1),
      _var0);
}
static void _V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V10_Dloop_D234_V0k72(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.reverse.123 20 3) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V10_Dloop_D234_V0k73) (bruijn ##.args.109.236 4 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 20-1, 3)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V10_Dloop_D234_V0k73, self)))),
      statics->up->up->up->vars[2]);
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V10_Dloop_D234_V0lambda13(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V10_Dloop_D234_V0lambda13, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 3 3 (##.args.1068 ##.%x.1069 ##.%x.1070) ((##vcore.car (bruijn ##.expr.112.235 4 1)) (##vcore.cdr (bruijn ##.expr.112.235 4 1)) (##vcore.cons (bruijn ##.args.1068 0 0) (bruijn ##.args.109.236 4 2))) ((bruijn ##.kk.111.237 1 1) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V10_Dloop_D234_V0k72) (bruijn ##.%x.1069 0 1) (bruijn ##.%x.1070 0 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->up->up->vars[1]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->up->up->up->vars[1]);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      self->vars[0],
      statics->up->up->up->vars[2]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[1]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V10_Dloop_D234_V0k72, self)))),
      self->vars[1],
      self->vars[2]);
    }
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V10_Dloop_D234_V0lambda12(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V10_Dloop_D234_V0lambda12, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.%k.518 0 0) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V10_Dloop_D234_V0lambda13))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V10_Dloop_D234_V0lambda13, self)))));
}
static void _V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V10_Dloop_D234_V0k71(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##vcore.call-with-values (bruijn ##.%k.517 1 0) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V10_Dloop_D234_V0lambda12) (bruijn ##.loop.234 2 0))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V10_Dloop_D234_V0lambda12, self)))),
      statics->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V10_Dloop_D234(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V10_Dloop_D234, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 2 2 (##.%x.1066 ##.%p.1067) ((##vcore.pair? (bruijn ##.expr.112.235 1 1)) (##vcore.not (bruijn ##.%x.1066 0 0))) ((close _V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V10_Dloop_D234_V0k69) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V10_Dloop_D234_V0k71)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->vars[1]);
    self->vars[1] = _VBasic_VNot2(runtime, NULL,
      self->vars[0]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V10_Dloop_D234_V0k69, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V10_Dloop_D234_V0k71, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V0lambda11(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V0lambda11, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (letrec 1 ((close "_V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V10_Dloop_D234")) (##qualified-call (vanity compiler bytecode process-foreign-function ##.loop.234) #f (bruijn ##.loop.234 0 0) (bruijn ##.%k.516 1 0) (bruijn ##.expr.108.1050 2 1) '()))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V10_Dloop_D234, self))));
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      statics->up->vars[1];
    VWORD _arg2 = 
      VNULL;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V10_Dloop_D234(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V0k61(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V0k61, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.491 0 0) (basic-block 2 2 (##.expr.104.1038 ##.%p.1039) ((##vcore.cdr (bruijn ##.expr.207 7 1)) (##vcore.pair? (bruijn ##.expr.104.1038 0 0))) (if (bruijn ##.%p.1039 0 1) (basic-block 3 3 (##.lang.1040 ##.expr.105.1041 ##.%p.1042) ((##vcore.car (bruijn ##.expr.104.1038 1 0)) (##vcore.cdr (bruijn ##.expr.104.1038 1 0)) (##vcore.pair? (bruijn ##.expr.105.1041 0 1))) (if (bruijn ##.%p.1042 0 2) (basic-block 3 3 (##.decl.1043 ##.expr.106.1044 ##.%p.1045) ((##vcore.car (bruijn ##.expr.105.1041 1 1)) (##vcore.cdr (bruijn ##.expr.105.1041 1 1)) (##vcore.pair? (bruijn ##.expr.106.1044 0 1))) (if (bruijn ##.%p.1045 0 2) (basic-block 3 3 (##.ret.1046 ##.expr.107.1047 ##.%p.1048) ((##vcore.car (bruijn ##.expr.106.1044 1 1)) (##vcore.cdr (bruijn ##.expr.106.1044 1 1)) (##vcore.pair? (bruijn ##.expr.107.1047 0 1))) (if (bruijn ##.%p.1048 0 2) (basic-block 2 2 (##.name.1049 ##.expr.108.1050) ((##vcore.car (bruijn ##.expr.107.1047 1 1)) (##vcore.cdr (bruijn ##.expr.107.1047 1 1))) (##vcore.call/cc (close _V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V0lambda8) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V0lambda11))) ((bruijn ##.%k.490 6 0) #f))) ((bruijn ##.%k.490 5 0) #f))) ((bruijn ##.%k.490 4 0) #f))) ((bruijn ##.%k.490 3 0) #f))) ((bruijn ##.%k.490 2 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 7-1, 1));
    self->vars[1] = _VBasic_VPairP2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[0]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[0]);
    self->vars[2] = _VBasic_VPairP2(runtime, NULL,
      self->vars[1]);
if(VDecodeBool(
self->vars[2])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[1]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[1]);
    self->vars[2] = _VBasic_VPairP2(runtime, NULL,
      self->vars[1]);
if(VDecodeBool(
self->vars[2])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[1]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[1]);
    self->vars[2] = _VBasic_VPairP2(runtime, NULL,
      self->vars[1]);
if(VDecodeBool(
self->vars[2])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[1]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[1]);
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V0lambda8, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V0lambda11, self)))));
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V0k60(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V0k60, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1036 1 0) (basic-block 1 1 (##.%x.1037) ((##vcore.car (bruijn ##.expr.207 5 1))) ((bruijn ##.equal?.129 7 9) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V0k61) '##foreign.function (bruijn ##.%x.1037 0 0))) ((bruijn ##.%k.490 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 5-1, 1));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 9)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V0k61, self)))),
      _V10foreign_Dfunction,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V0k74(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.error.128 5 8) (bruijn ##.%k.488 2 0) (##string ##.string.1524))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 8)), 2,
      statics->up->vars[0],
      VEncodePointer(&_V10_Dstring_D1524.sym, VPOINTER_OTHER));
}
static void _V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V0k59(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.1036) ((##vcore.pair? (bruijn ##.expr.207 3 1))) ((close _V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V0k60) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V0k74)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->up->up->vars[1]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V0k60, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V0k74, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V0lambda6(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V0lambda6, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.%p.1035) ((##vcore.pair? (bruijn ##.expr.207 2 1))) ((close _V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V0k42) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V0k59)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->up->vars[1]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V0k42, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V0k59, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (##vcore.call/cc (bruijn ##.%k.487 0 0) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V0lambda6))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function_V0lambda6, self)))));
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__function_V0k76(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__function_V0k76, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.599 0 0) (bruijn ##.%k.591 8 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 8-1, 0));
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__function_V0lambda15(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__function_V0lambda15, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler bytecode process-fun-single) #t (bruijn ##.process-fun-single.171 12 9) (bruijn ##.%k.600 0 0) (bruijn ##.name.1135 7 0) (bruijn ##.check-args?.1138 6 0) (bruijn ##.num.1146 3 0) #f (bruijn ##.body.1149 2 0))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0bytecode;
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      VGetArg(statics, 7-1, 0);
    VWORD _arg2 = 
      VGetArg(statics, 6-1, 0);
    VWORD _arg3 = 
      statics->up->up->vars[0];
    VWORD _arg4 = 
      VEncodeBool(false);
    VWORD _arg5 = 
      statics->up->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__fun__single, _V60_V0vanity_V0compiler_V0bytecode)}, 6, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5);
    } else {
       _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__single(runtime, _closure_env, 6, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5);
    }
  }
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__function_V0k75(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__function_V0k75, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1111 1 0) (basic-block 3 3 (##.name.1135 ##.expr.82.1136 ##.%p.1137) ((##vcore.car (bruijn ##.fun.243 4 1)) (##vcore.cdr (bruijn ##.fun.243 4 1)) (##vcore.pair? (bruijn ##.expr.82.1136 0 1))) (if (bruijn ##.%p.1137 0 2) (basic-block 3 3 (##.check-args?.1138 ##.expr.83.1139 ##.%p.1140) ((##vcore.car (bruijn ##.expr.82.1136 1 1)) (##vcore.cdr (bruijn ##.expr.82.1136 1 1)) (##vcore.pair? (bruijn ##.expr.83.1139 0 1))) (if (bruijn ##.%p.1140 0 2) (basic-block 3 3 (##.debug-info.1141 ##.expr.84.1142 ##.%p.1143) ((##vcore.car (bruijn ##.expr.83.1139 1 1)) (##vcore.cdr (bruijn ##.expr.83.1139 1 1)) (##vcore.pair? (bruijn ##.expr.84.1142 0 1))) (if (bruijn ##.%p.1143 0 2) (basic-block 2 2 (##.expr.85.1144 ##.%p.1145) ((##vcore.car (bruijn ##.expr.84.1142 1 1)) (##vcore.pair? (bruijn ##.expr.85.1144 0 0))) (if (bruijn ##.%p.1145 0 1) (basic-block 3 3 (##.num.1146 ##.expr.86.1147 ##.%p.1148) ((##vcore.car (bruijn ##.expr.85.1144 1 0)) (##vcore.cdr (bruijn ##.expr.85.1144 1 0)) (##vcore.pair? (bruijn ##.expr.86.1147 0 1))) (if (bruijn ##.%p.1148 0 2) (basic-block 3 3 (##.body.1149 ##.%x.1150 ##.%p.1151) ((##vcore.car (bruijn ##.expr.86.1147 1 1)) (##vcore.cdr (bruijn ##.expr.86.1147 1 1)) (##vcore.null? (bruijn ##.%x.1150 0 1))) (if (bruijn ##.%p.1151 0 2) (basic-block 2 2 (##.%x.1152 ##.%p.1153) ((##vcore.cdr (bruijn ##.expr.84.1142 4 1)) (##vcore.null? (bruijn ##.%x.1152 0 0))) (if (bruijn ##.%p.1153 0 1) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0bytecode_V0process__function_V0k76) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__function_V0lambda15) (bruijn ##.kk.79.244 9 1)) ((bruijn ##.%k.591 7 0) #f))) ((bruijn ##.%k.591 6 0) #f))) ((bruijn ##.%k.591 5 0) #f))) ((bruijn ##.%k.591 4 0) #f))) ((bruijn ##.%k.591 3 0) #f))) ((bruijn ##.%k.591 2 0) #f))) ((bruijn ##.%k.591 1 0) #f))) ((bruijn ##.%k.591 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->up->up->vars[1]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->up->up->up->vars[1]);
    self->vars[2] = _VBasic_VPairP2(runtime, NULL,
      self->vars[1]);
if(VDecodeBool(
self->vars[2])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[1]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[1]);
    self->vars[2] = _VBasic_VPairP2(runtime, NULL,
      self->vars[1]);
if(VDecodeBool(
self->vars[2])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[1]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[1]);
    self->vars[2] = _VBasic_VPairP2(runtime, NULL,
      self->vars[1]);
if(VDecodeBool(
self->vars[2])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[1]);
    self->vars[1] = _VBasic_VPairP2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[0]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[0]);
    self->vars[2] = _VBasic_VPairP2(runtime, NULL,
      self->vars[1]);
if(VDecodeBool(
self->vars[2])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[1]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[1]);
    self->vars[2] = _VBasic_VNullP2(runtime, NULL,
      self->vars[1]);
if(VDecodeBool(
self->vars[2])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      statics->up->up->up->vars[1]);
    self->vars[1] = _VBasic_VNullP2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__function_V0k76, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__function_V0lambda15, self)))),
      VGetArg(statics, 9-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__function_V0k80(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__function_V0k80, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.585 0 0) (bruijn ##.%k.575 11 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 11-1, 0));
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__function_V0lambda16(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__function_V0lambda16, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler bytecode process-fun-single) #t (bruijn ##.process-fun-single.171 16 9) (bruijn ##.%k.586 0 0) (bruijn ##.name.1113 10 0) (bruijn ##.check-args?.1116 9 0) (bruijn ##.num.1124 6 0) #t (bruijn ##.body.1130 2 0))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0bytecode;
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      VGetArg(statics, 10-1, 0);
    VWORD _arg2 = 
      VGetArg(statics, 9-1, 0);
    VWORD _arg3 = 
      VGetArg(statics, 6-1, 0);
    VWORD _arg4 = 
      VEncodeBool(true);
    VWORD _arg5 = 
      statics->up->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__fun__single, _V60_V0vanity_V0compiler_V0bytecode)}, 6, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5);
    } else {
       _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__single(runtime, _closure_env, 6, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5);
    }
  }
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__function_V0k79(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__function_V0k79, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.581 0 0) (basic-block 2 2 (##.expr.93.1128 ##.%p.1129) ((##vcore.cdr (bruijn ##.expr.92.1125 3 1)) (##vcore.pair? (bruijn ##.expr.93.1128 0 0))) (if (bruijn ##.%p.1129 0 1) (basic-block 3 3 (##.body.1130 ##.%x.1131 ##.%p.1132) ((##vcore.car (bruijn ##.expr.93.1128 1 0)) (##vcore.cdr (bruijn ##.expr.93.1128 1 0)) (##vcore.null? (bruijn ##.%x.1131 0 1))) (if (bruijn ##.%p.1132 0 2) (basic-block 2 2 (##.%x.1133 ##.%p.1134) ((##vcore.cdr (bruijn ##.expr.90.1120 7 1)) (##vcore.null? (bruijn ##.%x.1133 0 0))) (if (bruijn ##.%p.1134 0 1) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0bytecode_V0process__function_V0k80) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__function_V0lambda16) (bruijn ##.kk.79.244 13 1)) ((bruijn ##.%k.575 10 0) #f))) ((bruijn ##.%k.575 9 0) #f))) ((bruijn ##.%k.575 8 0) #f))) ((bruijn ##.%k.575 7 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      statics->up->up->vars[1]);
    self->vars[1] = _VBasic_VPairP2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[0]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[0]);
    self->vars[2] = _VBasic_VNullP2(runtime, NULL,
      self->vars[1]);
if(VDecodeBool(
self->vars[2])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 7-1, 1));
    self->vars[1] = _VBasic_VNullP2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__function_V0k80, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__function_V0lambda16, self)))),
      VGetArg(statics, 13-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 0)), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 0)), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 0)), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__function_V0k78(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__function_V0k78, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1112 1 0) (basic-block 3 3 (##.name.1113 ##.expr.88.1114 ##.%p.1115) ((##vcore.car (bruijn ##.fun.243 5 1)) (##vcore.cdr (bruijn ##.fun.243 5 1)) (##vcore.pair? (bruijn ##.expr.88.1114 0 1))) (if (bruijn ##.%p.1115 0 2) (basic-block 3 3 (##.check-args?.1116 ##.expr.89.1117 ##.%p.1118) ((##vcore.car (bruijn ##.expr.88.1114 1 1)) (##vcore.cdr (bruijn ##.expr.88.1114 1 1)) (##vcore.pair? (bruijn ##.expr.89.1117 0 1))) (if (bruijn ##.%p.1118 0 2) (basic-block 3 3 (##.debug-info.1119 ##.expr.90.1120 ##.%p.1121) ((##vcore.car (bruijn ##.expr.89.1117 1 1)) (##vcore.cdr (bruijn ##.expr.89.1117 1 1)) (##vcore.pair? (bruijn ##.expr.90.1120 0 1))) (if (bruijn ##.%p.1121 0 2) (basic-block 2 2 (##.expr.91.1122 ##.%p.1123) ((##vcore.car (bruijn ##.expr.90.1120 1 1)) (##vcore.pair? (bruijn ##.expr.91.1122 0 0))) (if (bruijn ##.%p.1123 0 1) (basic-block 3 3 (##.num.1124 ##.expr.92.1125 ##.%p.1126) ((##vcore.car (bruijn ##.expr.91.1122 1 0)) (##vcore.cdr (bruijn ##.expr.91.1122 1 0)) (##vcore.pair? (bruijn ##.expr.92.1125 0 1))) (if (bruijn ##.%p.1126 0 2) (basic-block 1 1 (##.%x.1127) ((##vcore.car (bruijn ##.expr.92.1125 1 1))) ((bruijn ##.equal?.129 12 9) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__function_V0k79) '+ (bruijn ##.%x.1127 0 0))) ((bruijn ##.%k.575 5 0) #f))) ((bruijn ##.%k.575 4 0) #f))) ((bruijn ##.%k.575 3 0) #f))) ((bruijn ##.%k.575 2 0) #f))) ((bruijn ##.%k.575 1 0) #f))) ((bruijn ##.%k.575 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 5-1, 1));
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 5-1, 1));
    self->vars[2] = _VBasic_VPairP2(runtime, NULL,
      self->vars[1]);
if(VDecodeBool(
self->vars[2])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[1]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[1]);
    self->vars[2] = _VBasic_VPairP2(runtime, NULL,
      self->vars[1]);
if(VDecodeBool(
self->vars[2])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[1]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[1]);
    self->vars[2] = _VBasic_VPairP2(runtime, NULL,
      self->vars[1]);
if(VDecodeBool(
self->vars[2])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[1]);
    self->vars[1] = _VBasic_VPairP2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[0]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[0]);
    self->vars[2] = _VBasic_VPairP2(runtime, NULL,
      self->vars[1]);
if(VDecodeBool(
self->vars[2])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 9)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__function_V0k79, self)))),
      _V0_P,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__function_V0lambda17(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__function_V0lambda17, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler bytecode process-fun-case) #t (bruijn ##.process-fun-case.170 5 8) (bruijn ##.%k.573 0 0) (bruijn ##.fun.243 4 1))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0bytecode;
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      statics->up->up->up->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case, _V60_V0vanity_V0compiler_V0bytecode)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
static void _V50_V0vanity_V0compiler_V0bytecode_V0process__function_V0k81(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##vcore.call-with-values (bruijn ##.%k.572 2 0) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__function_V0lambda17) (bruijn ##.kk.79.244 2 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->up->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__function_V0lambda17, self)))),
      statics->up->vars[1]);
}
static void _V50_V0vanity_V0compiler_V0bytecode_V0process__function_V0k77(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.1112) ((##vcore.pair? (bruijn ##.fun.243 3 1))) ((close _V50_V0vanity_V0compiler_V0bytecode_V0process__function_V0k78) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__function_V0k81)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->up->up->vars[1]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__function_V0k78, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__function_V0k81, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__function_V0lambda14(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__function_V0lambda14, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.%p.1111) ((##vcore.pair? (bruijn ##.fun.243 2 1))) ((close _V50_V0vanity_V0compiler_V0bytecode_V0process__function_V0k75) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__function_V0k77)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->up->vars[1]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__function_V0k75, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__function_V0k77, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__function(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__function, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (##vcore.call/cc (bruijn ##.%k.571 0 0) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__function_V0lambda14))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__function_V0lambda14, self)))));
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V0k82(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V0k82, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.1155 1 1) (##vcore.string->symbol (bruijn ##.%k.708 0 0) (bruijn ##.name.1154 1 0)) ((bruijn ##.%k.708 0 0) (bruijn ##.name.1154 1 0)))
if(VDecodeBool(
statics->vars[1])) {
    VCallFuncWithGC(runtime, (VFunc)VStringSymbol2, 2,
      _var0,
      statics->vars[0]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->vars[0]);
}
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D276_V0k92(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D276_V0k92, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 7 7 (##.%x.1157 ##.%x.1158 ##.%x.1159 ##.%x.1160 ##.%x.1161 ##.%x.1162 ##.%r.1163) ((##vcore.cons (bruijn ##.%x.612 1 0) '()) (##vcore.cons (bruijn ##.name.271 13 0) (bruijn ##.%x.1157 0 0)) (##vcore.cons 'case-lambda-error (bruijn ##.%x.1158 0 1)) (##vcore.cons (bruijn ##.%x.1159 0 2) '()) (##vcore.cons (bruijn ##.error-label.275 7 0) (bruijn ##.%x.1160 0 3)) (##vcore.cons 'label (bruijn ##.%x.1161 0 4)) (##vcore.cons (bruijn ##.%x.1162 0 5) '())) ((bruijn ##.%k.604 5 0) (bruijn ##.%r.1163 0 6)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[7]; } container;
    self = &container.self;
    VInitEnv(self, 7, 7, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 13-1, 0),
      self->vars[0]);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      _V0case__lambda__error,
      self->vars[1]);
    self->vars[3] = _VBasic_VCons2(runtime, NULL,
      self->vars[2],
      VNULL);
    self->vars[4] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 7-1, 0),
      self->vars[3]);
    self->vars[5] = _VBasic_VCons2(runtime, NULL,
      _V0label,
      self->vars[4]);
    self->vars[6] = _VBasic_VCons2(runtime, NULL,
      self->vars[5],
      VNULL);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      self->vars[6]);
    }
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D276_V0k91(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D276_V0k91, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.fold.137 15 17) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D276_V0k92) (bruijn ##.string-append.136 15 16) (##string ##.string.1525) (bruijn ##.%x.613 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 17)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D276_V0k92, self)))),
      VGetArg(statics, 15-1, 16),
      VEncodePointer(&_V10_Dstring_D1525.sym, VPOINTER_OTHER),
      _var0);
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D276_V0k95(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D276_V0k95, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.637 0 0) (bruijn ##.%k.629 9 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 9-1, 0));
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D276_V0lambda20(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D276_V0lambda20, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.sprintf.135 27 15) (bruijn ##.%k.638 0 0) (##string ##.string.1526) (bruijn ##.num.1184 6 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 27-1, 15)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1526.sym, VPOINTER_OTHER),
      VGetArg(statics, 6-1, 0));
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D276_V0k94(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D276_V0k94, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.633 0 0) (basic-block 2 2 (##.expr.63.1188 ##.%p.1189) ((##vcore.cdr (bruijn ##.expr.62.1185 3 1)) (##vcore.pair? (bruijn ##.expr.63.1188 0 0))) (if (bruijn ##.%p.1189 0 1) (basic-block 3 3 (##.body.1190 ##.%x.1191 ##.%p.1192) ((##vcore.car (bruijn ##.expr.63.1188 1 0)) (##vcore.cdr (bruijn ##.expr.63.1188 1 0)) (##vcore.null? (bruijn ##.%x.1191 0 1))) (if (bruijn ##.%p.1192 0 2) (basic-block 2 2 (##.%x.1193 ##.%p.1194) ((##vcore.cdr (bruijn ##.expr.60.1180 7 1)) (##vcore.null? (bruijn ##.%x.1193 0 0))) (if (bruijn ##.%p.1194 0 1) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D276_V0k95) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D276_V0lambda20) (bruijn ##.kk.57.279 10 1)) ((bruijn ##.%k.629 8 0) #f))) ((bruijn ##.%k.629 7 0) #f))) ((bruijn ##.%k.629 6 0) #f))) ((bruijn ##.%k.629 5 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      statics->up->up->vars[1]);
    self->vars[1] = _VBasic_VPairP2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[0]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[0]);
    self->vars[2] = _VBasic_VNullP2(runtime, NULL,
      self->vars[1]);
if(VDecodeBool(
self->vars[2])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 7-1, 1));
    self->vars[1] = _VBasic_VNullP2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D276_V0k95, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D276_V0lambda20, self)))),
      VGetArg(statics, 10-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 0)), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D276_V0k93(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D276_V0k93, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1164 1 0) (basic-block 3 3 (##.name.1179 ##.expr.60.1180 ##.%p.1181) ((##vcore.car (bruijn ##.e.278 4 1)) (##vcore.cdr (bruijn ##.e.278 4 1)) (##vcore.pair? (bruijn ##.expr.60.1180 0 1))) (if (bruijn ##.%p.1181 0 2) (basic-block 2 2 (##.expr.61.1182 ##.%p.1183) ((##vcore.car (bruijn ##.expr.60.1180 1 1)) (##vcore.pair? (bruijn ##.expr.61.1182 0 0))) (if (bruijn ##.%p.1183 0 1) (basic-block 3 3 (##.num.1184 ##.expr.62.1185 ##.%p.1186) ((##vcore.car (bruijn ##.expr.61.1182 1 0)) (##vcore.cdr (bruijn ##.expr.61.1182 1 0)) (##vcore.pair? (bruijn ##.expr.62.1185 0 1))) (if (bruijn ##.%p.1186 0 2) (basic-block 1 1 (##.%x.1187) ((##vcore.car (bruijn ##.expr.62.1185 1 1))) ((bruijn ##.equal?.129 22 9) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D276_V0k94) '+ (bruijn ##.%x.1187 0 0))) ((bruijn ##.%k.629 3 0) #f))) ((bruijn ##.%k.629 2 0) #f))) ((bruijn ##.%k.629 1 0) #f))) ((bruijn ##.%k.629 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->up->up->vars[1]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->up->up->up->vars[1]);
    self->vars[2] = _VBasic_VPairP2(runtime, NULL,
      self->vars[1]);
if(VDecodeBool(
self->vars[2])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[1]);
    self->vars[1] = _VBasic_VPairP2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[0]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[0]);
    self->vars[2] = _VBasic_VPairP2(runtime, NULL,
      self->vars[1]);
if(VDecodeBool(
self->vars[2])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 22-1, 9)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D276_V0k94, self)))),
      _V0_P,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D276_V0k98(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D276_V0k98, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.624 0 0) (bruijn ##.%k.618 6 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 6-1, 0));
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D276_V0lambda21(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D276_V0lambda21, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.sprintf.135 25 15) (bruijn ##.%k.625 0 0) (##string ##.string.1527) (bruijn ##.num.1171 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 25-1, 15)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1527.sym, VPOINTER_OTHER),
      statics->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D276_V0k97(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D276_V0k97, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1165 1 0) (basic-block 3 3 (##.name.1166 ##.expr.65.1167 ##.%p.1168) ((##vcore.car (bruijn ##.e.278 5 1)) (##vcore.cdr (bruijn ##.e.278 5 1)) (##vcore.pair? (bruijn ##.expr.65.1167 0 1))) (if (bruijn ##.%p.1168 0 2) (basic-block 2 2 (##.expr.66.1169 ##.%p.1170) ((##vcore.car (bruijn ##.expr.65.1167 1 1)) (##vcore.pair? (bruijn ##.expr.66.1169 0 0))) (if (bruijn ##.%p.1170 0 1) (basic-block 3 3 (##.num.1171 ##.expr.67.1172 ##.%p.1173) ((##vcore.car (bruijn ##.expr.66.1169 1 0)) (##vcore.cdr (bruijn ##.expr.66.1169 1 0)) (##vcore.pair? (bruijn ##.expr.67.1172 0 1))) (if (bruijn ##.%p.1173 0 2) (basic-block 3 3 (##.body.1174 ##.%x.1175 ##.%p.1176) ((##vcore.car (bruijn ##.expr.67.1172 1 1)) (##vcore.cdr (bruijn ##.expr.67.1172 1 1)) (##vcore.null? (bruijn ##.%x.1175 0 1))) (if (bruijn ##.%p.1176 0 2) (basic-block 2 2 (##.%x.1177 ##.%p.1178) ((##vcore.cdr (bruijn ##.expr.65.1167 4 1)) (##vcore.null? (bruijn ##.%x.1177 0 0))) (if (bruijn ##.%p.1178 0 1) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D276_V0k98) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D276_V0lambda21) (bruijn ##.kk.57.279 8 1)) ((bruijn ##.%k.618 5 0) #f))) ((bruijn ##.%k.618 4 0) #f))) ((bruijn ##.%k.618 3 0) #f))) ((bruijn ##.%k.618 2 0) #f))) ((bruijn ##.%k.618 1 0) #f))) ((bruijn ##.%k.618 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 5-1, 1));
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 5-1, 1));
    self->vars[2] = _VBasic_VPairP2(runtime, NULL,
      self->vars[1]);
if(VDecodeBool(
self->vars[2])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[1]);
    self->vars[1] = _VBasic_VPairP2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[0]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[0]);
    self->vars[2] = _VBasic_VPairP2(runtime, NULL,
      self->vars[1]);
if(VDecodeBool(
self->vars[2])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[1]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[1]);
    self->vars[2] = _VBasic_VNullP2(runtime, NULL,
      self->vars[1]);
if(VDecodeBool(
self->vars[2])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      statics->up->up->up->vars[1]);
    self->vars[1] = _VBasic_VNullP2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D276_V0k98, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D276_V0lambda21, self)))),
      VGetArg(statics, 8-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D276_V0lambda22(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D276_V0lambda22, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.error.128 19 8) (bruijn ##.%k.616 0 0) (##string ##.string.1528) (bruijn ##.e.278 4 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 19-1, 8)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1528.sym, VPOINTER_OTHER),
      statics->up->up->up->vars[1]);
}
static void _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D276_V0k99(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##vcore.call-with-values (bruijn ##.%k.615 2 0) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D276_V0lambda22) (bruijn ##.kk.57.279 2 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->up->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D276_V0lambda22, self)))),
      statics->up->vars[1]);
}
static void _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D276_V0k96(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.1165) ((##vcore.pair? (bruijn ##.e.278 3 1))) ((close _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D276_V0k97) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D276_V0k99)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->up->up->vars[1]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D276_V0k97, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D276_V0k99, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D276_V0lambda19(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D276_V0lambda19, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.%p.1164) ((##vcore.pair? (bruijn ##.e.278 2 1))) ((close _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D276_V0k93) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D276_V0k96)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->up->vars[1]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D276_V0k93, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D276_V0k96, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D276_V0lambda18(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D276_V0lambda18, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (##vcore.call/cc (bruijn ##.%k.614 0 0) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D276_V0lambda19))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D276_V0lambda19, self)))));
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D276_V0k90(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D276_V0k90, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.map.120 14 0) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D276_V0k91) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D276_V0lambda18) (bruijn ##.%x.642 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D276_V0k91, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D276_V0lambda18, self)))),
      _var0);
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D276_V0k101(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D276_V0k101, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.append.121 16 1) (bruijn ##.%k.604 4 0) (bruijn ##.%x.643 2 0) (bruijn ##.%x.644 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 1)), 3,
      statics->up->up->up->vars[0],
      statics->up->vars[0],
      _var0);
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D276_V0k100(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D276_V0k100, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%x.1195) ((##vcore.cdr (bruijn ##.rest.277 3 1))) (##qualified-call (vanity compiler bytecode process-fun-case ##.loop.276) #f (bruijn ##.loop.276 4 0) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D276_V0k101) (bruijn ##.%x.1195 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      statics->up->up->vars[1]);
  {
    VClosure * _closure = VDecodeClosure(statics->up->up->up->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D276_V0k101, self))));
    VWORD _arg1 = 
      self->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D276(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D276_V0k104(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D276_V0k104, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.682 0 0) (bruijn ##.%k.674 9 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 9-1, 0));
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D276_V0k106(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D276_V0k106, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 3 3 (##.%x.1250 ##.%x.1251 ##.%r.1252) ((##vcore.cons (bruijn ##.%x.695 1 0) '()) (##vcore.cons (bruijn ##.num.1230 10 0) (bruijn ##.%x.1250 0 0)) (##vcore.cons 'case-lambda+ (bruijn ##.%x.1251 0 1))) ((bruijn ##.%k.690 2 0) (bruijn ##.%r.1252 0 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 10-1, 0),
      self->vars[0]);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      _V0case__lambda_P,
      self->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      self->vars[2]);
    }
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D276_V0k105(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D276_V0k105, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1242 1 1) (basic-block 3 3 (##.%x.1247 ##.%x.1248 ##.%r.1249) ((##vcore.cons (bruijn ##.error-label.275 18 0) '()) (##vcore.cons (bruijn ##.num.1230 9 0) (bruijn ##.%x.1247 0 0)) (##vcore.cons 'case-lambda+ (bruijn ##.%x.1248 0 1))) ((bruijn ##.%k.690 1 0) (bruijn ##.%r.1249 0 2))) ((bruijn ##.caadr.138 27 18) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D276_V0k106) (bruijn ##.rest.277 15 1)))
if(VDecodeBool(
statics->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 18-1, 0),
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 9-1, 0),
      self->vars[0]);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      _V0case__lambda_P,
      self->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      self->vars[2]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 27-1, 18)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D276_V0k106, self)))),
      VGetArg(statics, 15-1, 1));
}
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D276_V0k108(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D276_V0k108, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%r.1246) ((##vcore.cons (bruijn ##.%x.1245 2 2) (bruijn ##.%x.685 1 0))) ((bruijn ##.%k.683 5 0) (bruijn ##.%r.1246 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[2],
      statics->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      self->vars[0]);
    }
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D276_V0k107(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D276_V0k107, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 3 3 (##.%x.1243 ##.%x.1244 ##.%x.1245) ((##vcore.cons (bruijn ##.%x.688 1 0) '()) (##vcore.cons (bruijn ##.name.1225 11 0) (bruijn ##.%x.1243 0 0)) (##vcore.cons 'label (bruijn ##.%x.1244 0 1))) (##qualified-call (vanity compiler bytecode process-application) #t (bruijn ##.process-application.172 27 10) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D276_V0k108) (bruijn ##.body.1236 5 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 11-1, 0),
      self->vars[0]);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      _V0label,
      self->vars[1]);
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0bytecode;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D276_V0k108, self))));
    VWORD _arg1 = 
      VGetArg(statics, 5-1, 0);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__application, _V60_V0vanity_V0compiler_V0bytecode)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0bytecode_V0process__application(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D276_V0lambda24(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D276_V0lambda24, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 2 2 (##.%x.1241 ##.%p.1242) ((##vcore.cdr (bruijn ##.rest.277 14 1)) (##vcore.null? (bruijn ##.%x.1241 0 0))) ((close _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D276_V0k105) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D276_V0k107)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 14-1, 1));
    self->vars[1] = _VBasic_VNullP2(runtime, NULL,
      self->vars[0]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D276_V0k105, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D276_V0k107, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D276_V0k103(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D276_V0k103, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.678 0 0) (basic-block 2 2 (##.expr.74.1234 ##.%p.1235) ((##vcore.cdr (bruijn ##.expr.73.1231 3 1)) (##vcore.pair? (bruijn ##.expr.74.1234 0 0))) (if (bruijn ##.%p.1235 0 1) (basic-block 3 3 (##.body.1236 ##.%x.1237 ##.%p.1238) ((##vcore.car (bruijn ##.expr.74.1234 1 0)) (##vcore.cdr (bruijn ##.expr.74.1234 1 0)) (##vcore.null? (bruijn ##.%x.1237 0 1))) (if (bruijn ##.%p.1238 0 2) (basic-block 2 2 (##.%x.1239 ##.%p.1240) ((##vcore.cdr (bruijn ##.expr.71.1226 7 1)) (##vcore.null? (bruijn ##.%x.1239 0 0))) (if (bruijn ##.%p.1240 0 1) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D276_V0k104) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D276_V0lambda24) (bruijn ##.kk.68.296 10 1)) ((bruijn ##.%k.674 8 0) #f))) ((bruijn ##.%k.674 7 0) #f))) ((bruijn ##.%k.674 6 0) #f))) ((bruijn ##.%k.674 5 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      statics->up->up->vars[1]);
    self->vars[1] = _VBasic_VPairP2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[0]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[0]);
    self->vars[2] = _VBasic_VNullP2(runtime, NULL,
      self->vars[1]);
if(VDecodeBool(
self->vars[2])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 7-1, 1));
    self->vars[1] = _VBasic_VNullP2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D276_V0k104, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D276_V0lambda24, self)))),
      VGetArg(statics, 10-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 0)), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D276_V0k102(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D276_V0k102, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1197 1 1) (basic-block 3 3 (##.name.1225 ##.expr.71.1226 ##.%p.1227) ((##vcore.car (bruijn ##.input.69.1196 2 0)) (##vcore.cdr (bruijn ##.input.69.1196 2 0)) (##vcore.pair? (bruijn ##.expr.71.1226 0 1))) (if (bruijn ##.%p.1227 0 2) (basic-block 2 2 (##.expr.72.1228 ##.%p.1229) ((##vcore.car (bruijn ##.expr.71.1226 1 1)) (##vcore.pair? (bruijn ##.expr.72.1228 0 0))) (if (bruijn ##.%p.1229 0 1) (basic-block 3 3 (##.num.1230 ##.expr.73.1231 ##.%p.1232) ((##vcore.car (bruijn ##.expr.72.1228 1 0)) (##vcore.cdr (bruijn ##.expr.72.1228 1 0)) (##vcore.pair? (bruijn ##.expr.73.1231 0 1))) (if (bruijn ##.%p.1232 0 2) (basic-block 1 1 (##.%x.1233) ((##vcore.car (bruijn ##.expr.73.1231 1 1))) ((bruijn ##.equal?.129 20 9) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D276_V0k103) '+ (bruijn ##.%x.1233 0 0))) ((bruijn ##.%k.674 3 0) #f))) ((bruijn ##.%k.674 2 0) #f))) ((bruijn ##.%k.674 1 0) #f))) ((bruijn ##.%k.674 0 0) #f))
if(VDecodeBool(
statics->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->vars[0]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->up->vars[0]);
    self->vars[2] = _VBasic_VPairP2(runtime, NULL,
      self->vars[1]);
if(VDecodeBool(
self->vars[2])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[1]);
    self->vars[1] = _VBasic_VPairP2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[0]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[0]);
    self->vars[2] = _VBasic_VPairP2(runtime, NULL,
      self->vars[1]);
if(VDecodeBool(
self->vars[2])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 20-1, 9)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D276_V0k103, self)))),
      _V0_P,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D276_V0k111(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D276_V0k111, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.656 0 0) (bruijn ##.%k.650 6 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 6-1, 0));
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D276_V0k113(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D276_V0k113, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 3 3 (##.%x.1222 ##.%x.1223 ##.%r.1224) ((##vcore.cons (bruijn ##.%x.669 1 0) '()) (##vcore.cons (bruijn ##.num.1205 7 0) (bruijn ##.%x.1222 0 0)) (##vcore.cons 'case-lambda (bruijn ##.%x.1223 0 1))) ((bruijn ##.%k.664 2 0) (bruijn ##.%r.1224 0 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 7-1, 0),
      self->vars[0]);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      _V0case__lambda,
      self->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      self->vars[2]);
    }
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D276_V0k112(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D276_V0k112, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1214 1 1) (basic-block 3 3 (##.%x.1219 ##.%x.1220 ##.%r.1221) ((##vcore.cons (bruijn ##.error-label.275 16 0) '()) (##vcore.cons (bruijn ##.num.1205 6 0) (bruijn ##.%x.1219 0 0)) (##vcore.cons 'case-lambda (bruijn ##.%x.1220 0 1))) ((bruijn ##.%k.664 1 0) (bruijn ##.%r.1221 0 2))) ((bruijn ##.caadr.138 25 18) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D276_V0k113) (bruijn ##.rest.277 13 1)))
if(VDecodeBool(
statics->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 16-1, 0),
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 6-1, 0),
      self->vars[0]);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      _V0case__lambda,
      self->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      self->vars[2]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 25-1, 18)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D276_V0k113, self)))),
      VGetArg(statics, 13-1, 1));
}
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D276_V0k115(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D276_V0k115, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%r.1218) ((##vcore.cons (bruijn ##.%x.1217 2 2) (bruijn ##.%x.659 1 0))) ((bruijn ##.%k.657 5 0) (bruijn ##.%r.1218 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[2],
      statics->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      self->vars[0]);
    }
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D276_V0k114(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D276_V0k114, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 3 3 (##.%x.1215 ##.%x.1216 ##.%x.1217) ((##vcore.cons (bruijn ##.%x.662 1 0) '()) (##vcore.cons (bruijn ##.name.1200 8 0) (bruijn ##.%x.1215 0 0)) (##vcore.cons 'label (bruijn ##.%x.1216 0 1))) (##qualified-call (vanity compiler bytecode process-application) #t (bruijn ##.process-application.172 25 10) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D276_V0k115) (bruijn ##.body.1208 5 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 8-1, 0),
      self->vars[0]);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      _V0label,
      self->vars[1]);
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0bytecode;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D276_V0k115, self))));
    VWORD _arg1 = 
      VGetArg(statics, 5-1, 0);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__application, _V60_V0vanity_V0compiler_V0bytecode)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0bytecode_V0process__application(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D276_V0lambda25(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D276_V0lambda25, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 2 2 (##.%x.1213 ##.%p.1214) ((##vcore.cdr (bruijn ##.rest.277 12 1)) (##vcore.null? (bruijn ##.%x.1213 0 0))) ((close _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D276_V0k112) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D276_V0k114)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 12-1, 1));
    self->vars[1] = _VBasic_VNullP2(runtime, NULL,
      self->vars[0]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D276_V0k112, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D276_V0k114, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D276_V0k110(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D276_V0k110, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1198 1 0) (basic-block 3 3 (##.name.1200 ##.expr.76.1201 ##.%p.1202) ((##vcore.car (bruijn ##.input.69.1196 3 0)) (##vcore.cdr (bruijn ##.input.69.1196 3 0)) (##vcore.pair? (bruijn ##.expr.76.1201 0 1))) (if (bruijn ##.%p.1202 0 2) (basic-block 2 2 (##.expr.77.1203 ##.%p.1204) ((##vcore.car (bruijn ##.expr.76.1201 1 1)) (##vcore.pair? (bruijn ##.expr.77.1203 0 0))) (if (bruijn ##.%p.1204 0 1) (basic-block 3 3 (##.num.1205 ##.expr.78.1206 ##.%p.1207) ((##vcore.car (bruijn ##.expr.77.1203 1 0)) (##vcore.cdr (bruijn ##.expr.77.1203 1 0)) (##vcore.pair? (bruijn ##.expr.78.1206 0 1))) (if (bruijn ##.%p.1207 0 2) (basic-block 3 3 (##.body.1208 ##.%x.1209 ##.%p.1210) ((##vcore.car (bruijn ##.expr.78.1206 1 1)) (##vcore.cdr (bruijn ##.expr.78.1206 1 1)) (##vcore.null? (bruijn ##.%x.1209 0 1))) (if (bruijn ##.%p.1210 0 2) (basic-block 2 2 (##.%x.1211 ##.%p.1212) ((##vcore.cdr (bruijn ##.expr.76.1201 4 1)) (##vcore.null? (bruijn ##.%x.1211 0 0))) (if (bruijn ##.%p.1212 0 1) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D276_V0k111) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D276_V0lambda25) (bruijn ##.kk.68.296 8 1)) ((bruijn ##.%k.650 5 0) #f))) ((bruijn ##.%k.650 4 0) #f))) ((bruijn ##.%k.650 3 0) #f))) ((bruijn ##.%k.650 2 0) #f))) ((bruijn ##.%k.650 1 0) #f))) ((bruijn ##.%k.650 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->up->vars[0]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->up->up->vars[0]);
    self->vars[2] = _VBasic_VPairP2(runtime, NULL,
      self->vars[1]);
if(VDecodeBool(
self->vars[2])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[1]);
    self->vars[1] = _VBasic_VPairP2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[0]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[0]);
    self->vars[2] = _VBasic_VPairP2(runtime, NULL,
      self->vars[1]);
if(VDecodeBool(
self->vars[2])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[1]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[1]);
    self->vars[2] = _VBasic_VNullP2(runtime, NULL,
      self->vars[1]);
if(VDecodeBool(
self->vars[2])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      statics->up->up->up->vars[1]);
    self->vars[1] = _VBasic_VNullP2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D276_V0k111, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D276_V0lambda25, self)))),
      VGetArg(statics, 8-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D276_V0lambda26(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D276_V0lambda26, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%x.1199) ((##vcore.car (bruijn ##.rest.277 6 1))) ((bruijn ##.error.128 18 8) (bruijn ##.%k.647 1 0) (##string ##.string.1529) (bruijn ##.%x.1199 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 6-1, 1));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 18-1, 8)), 3,
      statics->vars[0],
      VEncodePointer(&_V10_Dstring_D1529.sym, VPOINTER_OTHER),
      self->vars[0]);
    }
}
static void _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D276_V0k116(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##vcore.call-with-values (bruijn ##.%k.646 2 0) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D276_V0lambda26) (bruijn ##.kk.68.296 2 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->up->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D276_V0lambda26, self)))),
      statics->up->vars[1]);
}
static void _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D276_V0k109(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.1198) ((##vcore.pair? (bruijn ##.input.69.1196 1 0))) ((close _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D276_V0k110) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D276_V0k116)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->vars[0]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D276_V0k110, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D276_V0k116, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D276_V0lambda23(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D276_V0lambda23, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 2 2 (##.input.69.1196 ##.%p.1197) ((##vcore.car (bruijn ##.rest.277 3 1)) (##vcore.pair? (bruijn ##.input.69.1196 0 0))) ((close _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D276_V0k102) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D276_V0k109)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->up->vars[1]);
    self->vars[1] = _VBasic_VPairP2(runtime, NULL,
      self->vars[0]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D276_V0k102, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D276_V0k109, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D276(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D276, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.%p.1156) ((##vcore.null? (bruijn ##.rest.277 1 1))) (if (bruijn ##.%p.1156 0 0) ((bruijn ##.reverse.123 13 3) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D276_V0k90) (bruijn ##.cases.274 4 0)) (##vcore.call/cc (close _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D276_V0k100) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D276_V0lambda23))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VNullP2(runtime, NULL,
      statics->vars[1]);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 3)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D276_V0k90, self)))),
      statics->up->up->up->vars[0]);
} else {
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D276_V0k100, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D276_V0lambda23, self)))));
}
    }
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V0k89(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V0k89, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (letrec 1 ((close "_V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D276")) (##qualified-call (vanity compiler bytecode process-fun-case ##.loop.276) #f (bruijn ##.loop.276 0 0) (bruijn ##.%k.603 9 0) (bruijn ##.cases.274 2 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D276, self))));
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      VGetArg(statics, 9-1, 0);
    VWORD _arg1 = 
      statics->up->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V10_Dloop_D276(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V0k88(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V0k88, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.gensym.139 9 19) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V0k89) (##string ##.string.1530))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 19)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V0k89, self)))),
      VEncodePointer(&_V10_Dstring_D1530.sym, VPOINTER_OTHER));
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V0k117(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V0k117, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.1253 1 0) ((bruijn ##.%k.704 0 0) (bruijn ##.name.271 7 0)) ((bruijn ##.gensym.139 11 19) (bruijn ##.%k.704 0 0) (##string ##.string.1531)))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 7-1, 0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 19)), 2,
      _var0,
      VEncodePointer(&_V10_Dstring_D1531.sym, VPOINTER_OTHER));
}
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V0k118(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V0k118, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 2 2 (##.%x.1254 ##.%r.1255) ((##vcore.cons (bruijn ##.e.314 3 2) '()) (##vcore.cons (bruijn ##.%x.701 1 0) (bruijn ##.%x.1254 0 0))) ((bruijn ##.%k.700 3 0) (bruijn ##.%r.1255 0 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->up->up->vars[2],
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      self->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      self->vars[1]);
    }
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V0lambda27(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V0lambda27, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 1 1 (##.%p.1253) ((##vcore.= (bruijn ##.i.313 1 1) 0)) ((close _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V0k117) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V0k118)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCmpEq(runtime, NULL,
      statics->vars[1],
      VEncodeInt(0l));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V0k117, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V0k118, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V0k87(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V0k87, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.map.120 8 0) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V0k88) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V0lambda27) (bruijn ##.%x.705 0 0) (bruijn ##.cases.273 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 0)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V0k88, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V0lambda27, self)))),
      _var0,
      statics->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V0k86(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V0k86, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.iota.140 7 20) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V0k87) (bruijn ##.%x.706 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 20)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V0k87, self)))),
      _var0);
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V0k85(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V0k85, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.length.141 6 21) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V0k86) (bruijn ##.cases.273 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 21)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V0k86, self)))),
      _var0);
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V0k84(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V0k84, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.cdddr.142 5 22) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V0k85) (bruijn ##.fun.269 3 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 22)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V0k85, self)))),
      statics->up->up->vars[1]);
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V0k83(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V0k83, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.cadr.134 4 14) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V0k84) (bruijn ##.fun.269 2 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[14]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V0k84, self)))),
      statics->up->vars[1]);
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 2 2 (##.name.1154 ##.%p.1155) ((##vcore.car (bruijn ##.fun.269 1 1)) (##vcore.string? (bruijn ##.name.1154 0 0))) ((close _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V0k82) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V0k83)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[1]);
    self->vars[1] = _VBasic_VStringP2(runtime, NULL,
      self->vars[0]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V0k82, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case_V0k83, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__single_V0k119(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__single_V0k119, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.1256 1 0) (##vcore.string->symbol (bruijn ##.%k.720 0 0) (bruijn ##.name.315 2 1)) ((bruijn ##.%k.720 0 0) (bruijn ##.name.315 2 1)))
if(VDecodeBool(
statics->vars[0])) {
    VCallFuncWithGC(runtime, (VFunc)VStringSymbol2, 2,
      _var0,
      statics->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->vars[1]);
}
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__single_V0k121(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__single_V0k121, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.variadic?.318 3 4) ((bruijn ##.%k.718 0 0) 'lambda+) ((bruijn ##.%k.718 0 0) 'lambda))
if(VDecodeBool(
statics->up->up->vars[4])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _V0lambda_P);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _V0lambda);
}
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__single_V0k123(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__single_V0k123, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%r.1262) ((##vcore.cons (bruijn ##.%x.1261 2 4) (bruijn ##.%x.711 1 0))) ((bruijn ##.%k.709 6 0) (bruijn ##.%r.1262 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[4],
      statics->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 1,
      self->vars[0]);
    }
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__single_V0k122(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__single_V0k122, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 5 5 (##.%x.1257 ##.%x.1258 ##.%x.1259 ##.%x.1260 ##.%x.1261) ((##vcore.cons (bruijn ##.num.317 4 3) '()) (##vcore.cons (bruijn ##.%x.716 1 0) (bruijn ##.%x.1257 0 0)) (##vcore.cons (bruijn ##.%x.1258 0 1) '()) (##vcore.cons (bruijn ##.%x.713 2 0) (bruijn ##.%x.1259 0 2)) (##vcore.cons 'label (bruijn ##.%x.1260 0 3))) (##qualified-call (vanity compiler bytecode process-application) #t (bruijn ##.process-application.172 5 10) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__single_V0k123) (bruijn ##.body.319 4 5)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[5]; } container;
    self = &container.self;
    VInitEnv(self, 5, 5, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->up->up->up->vars[3],
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      self->vars[0]);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      self->vars[1],
      VNULL);
    self->vars[3] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[0],
      self->vars[2]);
    self->vars[4] = _VBasic_VCons2(runtime, NULL,
      _V0label,
      self->vars[3]);
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0bytecode;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__fun__single_V0k123, self))));
    VWORD _arg1 = 
      statics->up->up->up->vars[5];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__application, _V60_V0vanity_V0compiler_V0bytecode)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0bytecode_V0process__application(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__single_V0k120(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__single_V0k120, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__single_V0k121) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__single_V0k122))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__fun__single_V0k121, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__fun__single_V0k122, self)))));
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__single(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4, VWORD _var5) {
 if(argc != 6) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__single, got ~D~N"
  "-- expected 6~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[6]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 6, 6, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _var3;
  self->vars[4] = _var4;
  self->vars[5] = _var5;
  // (basic-block 1 1 (##.%p.1256) ((##vcore.string? (bruijn ##.name.315 1 1))) ((close _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__single_V0k119) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__fun__single_V0k120)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VStringP2(runtime, NULL,
      statics->vars[1]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__fun__single_V0k119, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__fun__single_V0k120, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k126(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k126, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.860 0 0) (bruijn ##.%k.854 7 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 7-1, 0));
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k130(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k130, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 6 6 (##.%x.1404 ##.%x.1405 ##.%x.1406 ##.%x.1407 ##.%x.1408 ##.%x.1409) ((##vcore.car (bruijn ##.app.331 1 0)) (##vcore.cons (bruijn ##.%x.1404 0 0) '()) (##vcore.cons (bruijn ##.label.330 5 0) (bruijn ##.%x.1405 0 1)) (##vcore.cons 'label (bruijn ##.%x.1406 0 2)) (##vcore.cdr (bruijn ##.app.331 1 0)) (##vcore.cons (bruijn ##.%x.1407 0 3) (bruijn ##.%x.1408 0 4))) ((bruijn ##.append.121 18 1) (bruijn ##.%k.861 6 0) (bruijn ##.%x.1403 3 3) (bruijn ##.%x.863 2 0) (bruijn ##.%x.1409 0 5)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[6]; } container;
    self = &container.self;
    VInitEnv(self, 6, 6, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[0]);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      self->vars[0],
      VNULL);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 5-1, 0),
      self->vars[1]);
    self->vars[3] = _VBasic_VCons2(runtime, NULL,
      _V0label,
      self->vars[2]);
    self->vars[4] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[0]);
    self->vars[5] = _VBasic_VCons2(runtime, NULL,
      self->vars[3],
      self->vars[4]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 18-1, 1)), 4,
      VGetArg(statics, 6-1, 0),
      statics->up->up->vars[3],
      statics->up->vars[0],
      self->vars[5]);
    }
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k129(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k129, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler bytecode process-application) #t (bruijn ##.process-application.172 15 10) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k130) (bruijn ##.b.1397 5 0))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0bytecode;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k130, self))));
    VWORD _arg1 = 
      VGetArg(statics, 5-1, 0);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__application, _V60_V0vanity_V0compiler_V0bytecode)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0bytecode_V0process__application(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k128(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k128, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 4 4 (##.%x.1400 ##.%x.1401 ##.%x.1402 ##.%x.1403) ((##vcore.cons (bruijn ##.label.330 2 0) '()) (##vcore.cons 'bf (bruijn ##.%x.1400 0 0)) (##vcore.cons (bruijn ##.%x.1401 0 1) '()) (##vcore.cons (bruijn ##.%x.870 1 0) (bruijn ##.%x.1402 0 2))) (##qualified-call (vanity compiler bytecode process-application) #t (bruijn ##.process-application.172 14 10) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k129) (bruijn ##.a.1394 5 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[4]; } container;
    self = &container.self;
    VInitEnv(self, 4, 4, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[0],
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      _V0bf,
      self->vars[0]);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      self->vars[1],
      VNULL);
    self->vars[3] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      self->vars[2]);
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0bytecode;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k129, self))));
    VWORD _arg1 = 
      VGetArg(statics, 5-1, 0);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__application, _V60_V0vanity_V0compiler_V0bytecode)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0bytecode_V0process__application(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k127(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k127, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler bytecode process-atom) #t (bruijn ##.process-atom.174 12 12) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k128) (bruijn ##.p.1391 4 0))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0bytecode;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k128, self))));
    VWORD _arg1 = 
      statics->up->up->up->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__atom, _V60_V0vanity_V0compiler_V0bytecode)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0bytecode_V0process__atom(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0lambda29(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0lambda29, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.gensym.139 12 19) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k127) (##string ##.string.1532))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 19)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k127, self)))),
      VEncodePointer(&_V10_Dstring_D1532.sym, VPOINTER_OTHER));
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k125(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k125, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.855 0 0) (basic-block 2 2 (##.expr.25.1389 ##.%p.1390) ((##vcore.cdr (bruijn ##.expr.320 6 1)) (##vcore.pair? (bruijn ##.expr.25.1389 0 0))) (if (bruijn ##.%p.1390 0 1) (basic-block 3 3 (##.p.1391 ##.expr.26.1392 ##.%p.1393) ((##vcore.car (bruijn ##.expr.25.1389 1 0)) (##vcore.cdr (bruijn ##.expr.25.1389 1 0)) (##vcore.pair? (bruijn ##.expr.26.1392 0 1))) (if (bruijn ##.%p.1393 0 2) (basic-block 3 3 (##.a.1394 ##.expr.27.1395 ##.%p.1396) ((##vcore.car (bruijn ##.expr.26.1392 1 1)) (##vcore.cdr (bruijn ##.expr.26.1392 1 1)) (##vcore.pair? (bruijn ##.expr.27.1395 0 1))) (if (bruijn ##.%p.1396 0 2) (basic-block 3 3 (##.b.1397 ##.%x.1398 ##.%p.1399) ((##vcore.car (bruijn ##.expr.27.1395 1 1)) (##vcore.cdr (bruijn ##.expr.27.1395 1 1)) (##vcore.null? (bruijn ##.%x.1398 0 1))) (if (bruijn ##.%p.1399 0 2) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k126) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0lambda29) (bruijn ##.kk.22.321 8 1)) ((bruijn ##.%k.854 6 0) #f))) ((bruijn ##.%k.854 5 0) #f))) ((bruijn ##.%k.854 4 0) #f))) ((bruijn ##.%k.854 3 0) #f))) ((bruijn ##.%k.854 2 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 6-1, 1));
    self->vars[1] = _VBasic_VPairP2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[0]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[0]);
    self->vars[2] = _VBasic_VPairP2(runtime, NULL,
      self->vars[1]);
if(VDecodeBool(
self->vars[2])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[1]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[1]);
    self->vars[2] = _VBasic_VPairP2(runtime, NULL,
      self->vars[1]);
if(VDecodeBool(
self->vars[2])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[1]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[1]);
    self->vars[2] = _VBasic_VNullP2(runtime, NULL,
      self->vars[1]);
if(VDecodeBool(
self->vars[2])) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k126, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0lambda29, self)))),
      VGetArg(statics, 8-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k124(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k124, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1263 1 0) (basic-block 1 1 (##.%x.1388) ((##vcore.car (bruijn ##.expr.320 4 1))) ((bruijn ##.equal?.129 6 9) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k125) 'if (bruijn ##.%x.1388 0 0))) ((bruijn ##.%k.854 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->up->up->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 9)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k125, self)))),
      _V0if,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k134(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k134, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.842 0 0) (bruijn ##.%k.836 7 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 7-1, 0));
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k136(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k136, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.append.121 17 1) (bruijn ##.%k.843 4 0) (bruijn ##.%x.1385 3 2) (bruijn ##.%x.845 2 0) (bruijn ##.%x.1387 1 1) (bruijn ##.%x.847 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 17-1, 1)), 5,
      statics->up->up->up->vars[0],
      statics->up->up->vars[2],
      statics->up->vars[0],
      statics->vars[1],
      _var0);
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k135(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k135, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 2 2 (##.%x.1386 ##.%x.1387) ((##vcore.cons 'letrec-end '()) (##vcore.cons (bruijn ##.%x.1386 0 0) '())) (##qualified-call (vanity compiler bytecode process-application) #t (bruijn ##.process-application.172 15 10) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k136) (bruijn ##.body.1380 4 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      _V0letrec__end,
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      self->vars[0],
      VNULL);
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0bytecode;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k136, self))));
    VWORD _arg1 = 
      statics->up->up->up->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__application, _V60_V0vanity_V0compiler_V0bytecode)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0bytecode_V0process__application(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0lambda30(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0lambda30, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 3 3 (##.%x.1383 ##.%x.1384 ##.%x.1385) ((##vcore.cons (bruijn ##.n.1374 4 0) '()) (##vcore.cons 'letrec-begin (bruijn ##.%x.1383 0 0)) (##vcore.cons (bruijn ##.%x.1384 0 1) '())) ((bruijn ##.map.120 14 0) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k135) (bruijn ##.process-atom.174 13 12) (bruijn ##.xs.1377 3 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->up->up->up->vars[0],
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      _V0letrec__begin,
      self->vars[0]);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      self->vars[1],
      VNULL);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k135, self)))),
      VGetArg(statics, 13-1, 12),
      statics->up->up->vars[0]);
    }
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k133(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k133, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.837 0 0) (basic-block 2 2 (##.expr.29.1372 ##.%p.1373) ((##vcore.cdr (bruijn ##.expr.320 7 1)) (##vcore.pair? (bruijn ##.expr.29.1372 0 0))) (if (bruijn ##.%p.1373 0 1) (basic-block 3 3 (##.n.1374 ##.expr.30.1375 ##.%p.1376) ((##vcore.car (bruijn ##.expr.29.1372 1 0)) (##vcore.cdr (bruijn ##.expr.29.1372 1 0)) (##vcore.pair? (bruijn ##.expr.30.1375 0 1))) (if (bruijn ##.%p.1376 0 2) (basic-block 3 3 (##.xs.1377 ##.expr.31.1378 ##.%p.1379) ((##vcore.car (bruijn ##.expr.30.1375 1 1)) (##vcore.cdr (bruijn ##.expr.30.1375 1 1)) (##vcore.pair? (bruijn ##.expr.31.1378 0 1))) (if (bruijn ##.%p.1379 0 2) (basic-block 3 3 (##.body.1380 ##.%x.1381 ##.%p.1382) ((##vcore.car (bruijn ##.expr.31.1378 1 1)) (##vcore.cdr (bruijn ##.expr.31.1378 1 1)) (##vcore.null? (bruijn ##.%x.1381 0 1))) (if (bruijn ##.%p.1382 0 2) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k134) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0lambda30) (bruijn ##.kk.22.321 9 1)) ((bruijn ##.%k.836 6 0) #f))) ((bruijn ##.%k.836 5 0) #f))) ((bruijn ##.%k.836 4 0) #f))) ((bruijn ##.%k.836 3 0) #f))) ((bruijn ##.%k.836 2 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 7-1, 1));
    self->vars[1] = _VBasic_VPairP2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[0]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[0]);
    self->vars[2] = _VBasic_VPairP2(runtime, NULL,
      self->vars[1]);
if(VDecodeBool(
self->vars[2])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[1]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[1]);
    self->vars[2] = _VBasic_VPairP2(runtime, NULL,
      self->vars[1]);
if(VDecodeBool(
self->vars[2])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[1]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[1]);
    self->vars[2] = _VBasic_VNullP2(runtime, NULL,
      self->vars[1]);
if(VDecodeBool(
self->vars[2])) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k134, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0lambda30, self)))),
      VGetArg(statics, 9-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k132(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k132, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1264 1 0) (basic-block 1 1 (##.%x.1371) ((##vcore.car (bruijn ##.expr.320 5 1))) ((bruijn ##.equal?.129 7 9) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k133) 'letrec (bruijn ##.%x.1371 0 0))) ((bruijn ##.%k.836 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 5-1, 1));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 9)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k133, self)))),
      _V0letrec,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k140(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k140, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.822 0 0) (bruijn ##.%k.815 8 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 8-1, 0));
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k143(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k143, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.append.121 20 1) (bruijn ##.%k.823 5 0) (bruijn ##.%x.1368 3 3) (bruijn ##.%x.825 2 0) (bruijn ##.%x.1370 1 1) (bruijn ##.%x.827 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 20-1, 1)), 5,
      VGetArg(statics, 5-1, 0),
      statics->up->up->vars[3],
      statics->up->vars[0],
      statics->vars[1],
      _var0);
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k142(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k142, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 2 2 (##.%x.1369 ##.%x.1370) ((##vcore.cons 'letrec-end '()) (##vcore.cons (bruijn ##.%x.1369 0 0) '())) (##qualified-call (vanity compiler bytecode process-application) #t (bruijn ##.process-application.172 18 10) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k143) (bruijn ##.body.1362 5 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      _V0letrec__end,
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      self->vars[0],
      VNULL);
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0bytecode;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k143, self))));
    VWORD _arg1 = 
      VGetArg(statics, 5-1, 0);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__application, _V60_V0vanity_V0compiler_V0bytecode)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0bytecode_V0process__application(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k141(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k141, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 4 4 (##.%x.1365 ##.%x.1366 ##.%x.1367 ##.%x.1368) ((##vcore.cons (bruijn ##.%x.832 1 0) '()) (##vcore.cons (bruijn ##.n.1356 5 0) (bruijn ##.%x.1365 0 0)) (##vcore.cons 'letrec-begin (bruijn ##.%x.1366 0 1)) (##vcore.cons (bruijn ##.%x.1367 0 2) '())) ((bruijn ##.map.120 17 0) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k142) (bruijn ##.process-atom.174 16 12) (bruijn ##.xs.1359 4 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[4]; } container;
    self = &container.self;
    VInitEnv(self, 4, 4, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 5-1, 0),
      self->vars[0]);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      _V0letrec__begin,
      self->vars[1]);
    self->vars[3] = _VBasic_VCons2(runtime, NULL,
      self->vars[2],
      VNULL);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 17-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k142, self)))),
      VGetArg(statics, 16-1, 12),
      statics->up->up->up->vars[0]);
    }
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0lambda31(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0lambda31, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.mangle-library.143 15 23) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k141) (bruijn ##.path.1353 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 23)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k141, self)))),
      statics->up->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k139(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k139, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.816 0 0) (basic-block 2 2 (##.expr.33.1351 ##.%p.1352) ((##vcore.cdr (bruijn ##.expr.320 8 1)) (##vcore.pair? (bruijn ##.expr.33.1351 0 0))) (if (bruijn ##.%p.1352 0 1) (basic-block 3 3 (##.path.1353 ##.expr.34.1354 ##.%p.1355) ((##vcore.car (bruijn ##.expr.33.1351 1 0)) (##vcore.cdr (bruijn ##.expr.33.1351 1 0)) (##vcore.pair? (bruijn ##.expr.34.1354 0 1))) (if (bruijn ##.%p.1355 0 2) (basic-block 3 3 (##.n.1356 ##.expr.35.1357 ##.%p.1358) ((##vcore.car (bruijn ##.expr.34.1354 1 1)) (##vcore.cdr (bruijn ##.expr.34.1354 1 1)) (##vcore.pair? (bruijn ##.expr.35.1357 0 1))) (if (bruijn ##.%p.1358 0 2) (basic-block 3 3 (##.xs.1359 ##.expr.36.1360 ##.%p.1361) ((##vcore.car (bruijn ##.expr.35.1357 1 1)) (##vcore.cdr (bruijn ##.expr.35.1357 1 1)) (##vcore.pair? (bruijn ##.expr.36.1360 0 1))) (if (bruijn ##.%p.1361 0 2) (basic-block 3 3 (##.body.1362 ##.%x.1363 ##.%p.1364) ((##vcore.car (bruijn ##.expr.36.1360 1 1)) (##vcore.cdr (bruijn ##.expr.36.1360 1 1)) (##vcore.null? (bruijn ##.%x.1363 0 1))) (if (bruijn ##.%p.1364 0 2) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k140) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0lambda31) (bruijn ##.kk.22.321 11 1)) ((bruijn ##.%k.815 7 0) #f))) ((bruijn ##.%k.815 6 0) #f))) ((bruijn ##.%k.815 5 0) #f))) ((bruijn ##.%k.815 4 0) #f))) ((bruijn ##.%k.815 3 0) #f))) ((bruijn ##.%k.815 2 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 8-1, 1));
    self->vars[1] = _VBasic_VPairP2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[0]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[0]);
    self->vars[2] = _VBasic_VPairP2(runtime, NULL,
      self->vars[1]);
if(VDecodeBool(
self->vars[2])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[1]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[1]);
    self->vars[2] = _VBasic_VPairP2(runtime, NULL,
      self->vars[1]);
if(VDecodeBool(
self->vars[2])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[1]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[1]);
    self->vars[2] = _VBasic_VPairP2(runtime, NULL,
      self->vars[1]);
if(VDecodeBool(
self->vars[2])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[1]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[1]);
    self->vars[2] = _VBasic_VNullP2(runtime, NULL,
      self->vars[1]);
if(VDecodeBool(
self->vars[2])) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k140, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0lambda31, self)))),
      VGetArg(statics, 11-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k138(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k138, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1265 1 0) (basic-block 1 1 (##.%x.1350) ((##vcore.car (bruijn ##.expr.320 6 1))) ((bruijn ##.equal?.129 8 9) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k139) '##letrec (bruijn ##.%x.1350 0 0))) ((bruijn ##.%k.815 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 6-1, 1));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 9)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k139, self)))),
      _V10letrec,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k147(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k147, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.769 0 0) (bruijn ##.%k.763 7 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 7-1, 0));
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k150(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k150, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.794 0 0) (bruijn ##.%k.788 7 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 7-1, 0));
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k152(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k152, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 8 8 (##.%x.1342 ##.%x.1343 ##.%x.1344 ##.%x.1345 ##.%x.1346 ##.%x.1347 ##.%x.1348 ##.%r.1349) ((##vcore.cons '5 '()) (##vcore.cons 'call (bruijn ##.%x.1342 0 0)) (##vcore.cons (bruijn ##.%x.1343 0 1) '()) (##vcore.cons (bruijn ##.%x.804 1 0) (bruijn ##.%x.1344 0 2)) (##vcore.cons (bruijn ##.%x.1341 2 3) (bruijn ##.%x.1345 0 3)) (##vcore.cons (bruijn ##.%x.1339 2 1) (bruijn ##.%x.1346 0 4)) (##vcore.cons (bruijn ##.%x.798 3 0) (bruijn ##.%x.1347 0 5)) (##vcore.cons (bruijn ##.%x.1337 4 0) (bruijn ##.%x.1348 0 6))) ((bruijn ##.%k.795 5 0) (bruijn ##.%r.1349 0 7)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[8]; } container;
    self = &container.self;
    VInitEnv(self, 8, 8, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      VEncodeInt(5l),
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      _V0call,
      self->vars[0]);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      self->vars[1],
      VNULL);
    self->vars[3] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      self->vars[2]);
    self->vars[4] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[3],
      self->vars[3]);
    self->vars[5] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[1],
      self->vars[4]);
    self->vars[6] = _VBasic_VCons2(runtime, NULL,
      statics->up->up->vars[0],
      self->vars[5]);
    self->vars[7] = _VBasic_VCons2(runtime, NULL,
      statics->up->up->up->vars[0],
      self->vars[6]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      self->vars[7]);
    }
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k151(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k151, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 4 4 (##.%x.1338 ##.%x.1339 ##.%x.1340 ##.%x.1341) ((##vcore.cons (bruijn ##.up.1331 5 0) '()) (##vcore.cons 'push (bruijn ##.%x.1338 0 0)) (##vcore.cons (bruijn ##.right.1334 4 0) '()) (##vcore.cons 'push (bruijn ##.%x.1340 0 2))) (##qualified-call (vanity compiler bytecode process-atom) #t (bruijn ##.process-atom.174 27 12) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k152) (bruijn ##.x.1309 14 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[4]; } container;
    self = &container.self;
    VInitEnv(self, 4, 4, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 5-1, 0),
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      _V0push,
      self->vars[0]);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      statics->up->up->up->vars[0],
      VNULL);
    self->vars[3] = _VBasic_VCons2(runtime, NULL,
      _V0push,
      self->vars[2]);
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0bytecode;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k152, self))));
    VWORD _arg1 = 
      VGetArg(statics, 14-1, 0);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__atom, _V60_V0vanity_V0compiler_V0bytecode)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0bytecode_V0process__atom(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0lambda34(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0lambda34, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%x.1337) ((##vcore.cons 'push-set! '())) (##qualified-call (vanity compiler bytecode process-atom) #t (bruijn ##.process-atom.174 25 12) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k151) (bruijn ##.k.1303 14 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      _V0push__set_B,
      VNULL);
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0bytecode;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k151, self))));
    VWORD _arg1 = 
      VGetArg(statics, 14-1, 0);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__atom, _V60_V0vanity_V0compiler_V0bytecode)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0bytecode_V0process__atom(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k149(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k149, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.789 0 0) (basic-block 2 2 (##.expr.54.1326 ##.%p.1327) ((##vcore.cdr (bruijn ##.y.1306 8 0)) (##vcore.pair? (bruijn ##.expr.54.1326 0 0))) (if (bruijn ##.%p.1327 0 1) (basic-block 3 3 (##.name.1328 ##.expr.55.1329 ##.%p.1330) ((##vcore.car (bruijn ##.expr.54.1326 1 0)) (##vcore.cdr (bruijn ##.expr.54.1326 1 0)) (##vcore.pair? (bruijn ##.expr.55.1329 0 1))) (if (bruijn ##.%p.1330 0 2) (basic-block 3 3 (##.up.1331 ##.expr.56.1332 ##.%p.1333) ((##vcore.car (bruijn ##.expr.55.1329 1 1)) (##vcore.cdr (bruijn ##.expr.55.1329 1 1)) (##vcore.pair? (bruijn ##.expr.56.1332 0 1))) (if (bruijn ##.%p.1333 0 2) (basic-block 3 3 (##.right.1334 ##.%x.1335 ##.%p.1336) ((##vcore.car (bruijn ##.expr.56.1332 1 1)) (##vcore.cdr (bruijn ##.expr.56.1332 1 1)) (##vcore.null? (bruijn ##.%x.1335 0 1))) (if (bruijn ##.%p.1336 0 2) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k150) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0lambda34) (bruijn ##.kk.51.355 8 1)) ((bruijn ##.%k.788 6 0) #f))) ((bruijn ##.%k.788 5 0) #f))) ((bruijn ##.%k.788 4 0) #f))) ((bruijn ##.%k.788 3 0) #f))) ((bruijn ##.%k.788 2 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 8-1, 0));
    self->vars[1] = _VBasic_VPairP2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[0]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[0]);
    self->vars[2] = _VBasic_VPairP2(runtime, NULL,
      self->vars[1]);
if(VDecodeBool(
self->vars[2])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[1]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[1]);
    self->vars[2] = _VBasic_VPairP2(runtime, NULL,
      self->vars[1]);
if(VDecodeBool(
self->vars[2])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[1]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[1]);
    self->vars[2] = _VBasic_VNullP2(runtime, NULL,
      self->vars[1]);
if(VDecodeBool(
self->vars[2])) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k150, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0lambda34, self)))),
      VGetArg(statics, 8-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k148(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k148, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1312 1 0) (basic-block 1 1 (##.%x.1325) ((##vcore.car (bruijn ##.y.1306 6 0))) ((bruijn ##.equal?.129 19 9) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k149) 'bruijn (bruijn ##.%x.1325 0 0))) ((bruijn ##.%k.788 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 6-1, 0));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 19-1, 9)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k149, self)))),
      _V0bruijn,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k155(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.error.128 18 8) (bruijn ##.%k.771 2 0) (##string ##.string.1524))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 18-1, 8)), 2,
      statics->up->vars[0],
      VEncodePointer(&_V10_Dstring_D1524.sym, VPOINTER_OTHER));
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k154(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k154, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.%x.772 0 0) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k155))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k155, self)))));
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k157(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k157, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 7 7 (##.%x.1318 ##.%x.1319 ##.%x.1320 ##.%x.1321 ##.%x.1322 ##.%x.1323 ##.%r.1324) ((##vcore.cons '4 '()) (##vcore.cons 'call (bruijn ##.%x.1318 0 0)) (##vcore.cons (bruijn ##.%x.1319 0 1) '()) (##vcore.cons (bruijn ##.%x.781 1 0) (bruijn ##.%x.1320 0 2)) (##vcore.cons (bruijn ##.%x.1317 2 1) (bruijn ##.%x.1321 0 3)) (##vcore.cons (bruijn ##.%x.777 3 0) (bruijn ##.%x.1322 0 4)) (##vcore.cons (bruijn ##.%x.1315 4 1) (bruijn ##.%x.1323 0 5))) ((bruijn ##.%k.773 6 0) (bruijn ##.%r.1324 0 6)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[7]; } container;
    self = &container.self;
    VInitEnv(self, 7, 7, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      VEncodeInt(4l),
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      _V0call,
      self->vars[0]);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      self->vars[1],
      VNULL);
    self->vars[3] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      self->vars[2]);
    self->vars[4] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[1],
      self->vars[3]);
    self->vars[5] = _VBasic_VCons2(runtime, NULL,
      statics->up->up->vars[0],
      self->vars[4]);
    self->vars[6] = _VBasic_VCons2(runtime, NULL,
      statics->up->up->up->vars[1],
      self->vars[5]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 1,
      self->vars[6]);
    }
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k156(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k156, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 2 2 (##.%x.1316 ##.%x.1317) ((##vcore.cons (bruijn ##.y.1306 9 0) '()) (##vcore.cons 'push (bruijn ##.%x.1316 0 0))) (##qualified-call (vanity compiler bytecode process-atom) #t (bruijn ##.process-atom.174 21 12) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k157) (bruijn ##.x.1309 8 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 9-1, 0),
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      _V0push,
      self->vars[0]);
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0bytecode;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k157, self))));
    VWORD _arg1 = 
      VGetArg(statics, 8-1, 0);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__atom, _V60_V0vanity_V0compiler_V0bytecode)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0bytecode_V0process__atom(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0lambda35(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0lambda35, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%p.1313) ((##vcore.symbol? (bruijn ##.y.1306 6 0))) (if (bruijn ##.%p.1313 0 0) (basic-block 2 2 (##.%x.1314 ##.%x.1315) ((##vcore.cons '##vcore.set-global! '()) (##vcore.cons 'intrinsic (bruijn ##.%x.1314 0 0))) (##qualified-call (vanity compiler bytecode process-atom) #t (bruijn ##.process-atom.174 19 12) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k156) (bruijn ##.k.1303 8 0))) ((bruijn ##.error.128 19 8) (bruijn ##.%k.773 1 0) (##string ##.string.1533))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VSymbolP2(runtime, NULL,
      VGetArg(statics, 6-1, 0));
if(VDecodeBool(
self->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      _V10vcore_Dset__global_B,
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      _V0intrinsic,
      self->vars[0]);
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0bytecode;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k156, self))));
    VWORD _arg1 = 
      VGetArg(statics, 8-1, 0);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__atom, _V60_V0vanity_V0compiler_V0bytecode)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0bytecode_V0process__atom(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 19-1, 8)), 2,
      statics->vars[0],
      VEncodePointer(&_V10_Dstring_D1533.sym, VPOINTER_OTHER));
}
    }
}
static void _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k153(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k154) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0lambda35) (bruijn ##.kk.51.355 1 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k154, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0lambda35, self)))),
      statics->vars[1]);
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0lambda33(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0lambda33, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.%p.1312) ((##vcore.pair? (bruijn ##.y.1306 4 0))) ((close _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k148) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k153)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->up->up->up->vars[0]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k148, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k153, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0lambda32(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0lambda32, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.%k.770 0 0) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0lambda33))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0lambda33, self)))));
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k146(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k146, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.764 0 0) (basic-block 2 2 (##.expr.38.1301 ##.%p.1302) ((##vcore.cdr (bruijn ##.expr.320 9 1)) (##vcore.pair? (bruijn ##.expr.38.1301 0 0))) (if (bruijn ##.%p.1302 0 1) (basic-block 3 3 (##.k.1303 ##.expr.39.1304 ##.%p.1305) ((##vcore.car (bruijn ##.expr.38.1301 1 0)) (##vcore.cdr (bruijn ##.expr.38.1301 1 0)) (##vcore.pair? (bruijn ##.expr.39.1304 0 1))) (if (bruijn ##.%p.1305 0 2) (basic-block 3 3 (##.y.1306 ##.expr.40.1307 ##.%p.1308) ((##vcore.car (bruijn ##.expr.39.1304 1 1)) (##vcore.cdr (bruijn ##.expr.39.1304 1 1)) (##vcore.pair? (bruijn ##.expr.40.1307 0 1))) (if (bruijn ##.%p.1308 0 2) (basic-block 3 3 (##.x.1309 ##.%x.1310 ##.%p.1311) ((##vcore.car (bruijn ##.expr.40.1307 1 1)) (##vcore.cdr (bruijn ##.expr.40.1307 1 1)) (##vcore.null? (bruijn ##.%x.1310 0 1))) (if (bruijn ##.%p.1311 0 2) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k147) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0lambda32) (bruijn ##.kk.22.321 11 1)) ((bruijn ##.%k.763 6 0) #f))) ((bruijn ##.%k.763 5 0) #f))) ((bruijn ##.%k.763 4 0) #f))) ((bruijn ##.%k.763 3 0) #f))) ((bruijn ##.%k.763 2 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 9-1, 1));
    self->vars[1] = _VBasic_VPairP2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[0]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[0]);
    self->vars[2] = _VBasic_VPairP2(runtime, NULL,
      self->vars[1]);
if(VDecodeBool(
self->vars[2])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[1]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[1]);
    self->vars[2] = _VBasic_VPairP2(runtime, NULL,
      self->vars[1]);
if(VDecodeBool(
self->vars[2])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[1]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[1]);
    self->vars[2] = _VBasic_VNullP2(runtime, NULL,
      self->vars[1]);
if(VDecodeBool(
self->vars[2])) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k147, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0lambda32, self)))),
      VGetArg(statics, 11-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k145(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k145, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1266 1 0) (basic-block 1 1 (##.%x.1300) ((##vcore.car (bruijn ##.expr.320 7 1))) ((bruijn ##.equal?.129 9 9) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k146) 'set! (bruijn ##.%x.1300 0 0))) ((bruijn ##.%k.763 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 7-1, 1));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 9)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k146, self)))),
      _V0set_B,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k161(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k161, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.746 0 0) (bruijn ##.%k.740 7 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 7-1, 0));
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k163(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k163, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 7 7 (##.%x.1293 ##.%x.1294 ##.%x.1295 ##.%x.1296 ##.%x.1297 ##.%x.1298 ##.%r.1299) ((##vcore.cons '4 '()) (##vcore.cons 'call (bruijn ##.%x.1293 0 0)) (##vcore.cons (bruijn ##.%x.1294 0 1) '()) (##vcore.cons (bruijn ##.%x.754 1 0) (bruijn ##.%x.1295 0 2)) (##vcore.cons (bruijn ##.%x.1292 2 1) (bruijn ##.%x.1296 0 3)) (##vcore.cons (bruijn ##.%x.750 3 0) (bruijn ##.%x.1297 0 4)) (##vcore.cons (bruijn ##.%x.1290 4 1) (bruijn ##.%x.1298 0 5))) ((bruijn ##.%k.747 5 0) (bruijn ##.%r.1299 0 6)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[7]; } container;
    self = &container.self;
    VInitEnv(self, 7, 7, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      VEncodeInt(4l),
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      _V0call,
      self->vars[0]);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      self->vars[1],
      VNULL);
    self->vars[3] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      self->vars[2]);
    self->vars[4] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[1],
      self->vars[3]);
    self->vars[5] = _VBasic_VCons2(runtime, NULL,
      statics->up->up->vars[0],
      self->vars[4]);
    self->vars[6] = _VBasic_VCons2(runtime, NULL,
      statics->up->up->up->vars[1],
      self->vars[5]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      self->vars[6]);
    }
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k162(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k162, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 2 2 (##.%x.1291 ##.%x.1292) ((##vcore.cons (bruijn ##.y.1283 5 0) '()) (##vcore.cons 'push (bruijn ##.%x.1291 0 0))) (##qualified-call (vanity compiler bytecode process-atom) #t (bruijn ##.process-atom.174 18 12) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k163) (bruijn ##.x.1286 4 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 5-1, 0),
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      _V0push,
      self->vars[0]);
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0bytecode;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k163, self))));
    VWORD _arg1 = 
      statics->up->up->up->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__atom, _V60_V0vanity_V0compiler_V0bytecode)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0bytecode_V0process__atom(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0lambda36(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0lambda36, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 2 2 (##.%x.1289 ##.%x.1290) ((##vcore.cons '##vcore.define '()) (##vcore.cons 'intrinsic (bruijn ##.%x.1289 0 0))) (##qualified-call (vanity compiler bytecode process-atom) #t (bruijn ##.process-atom.174 16 12) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k162) (bruijn ##.k.1280 4 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      _V10vcore_Ddefine,
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      _V0intrinsic,
      self->vars[0]);
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0bytecode;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k162, self))));
    VWORD _arg1 = 
      statics->up->up->up->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__atom, _V60_V0vanity_V0compiler_V0bytecode)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0bytecode_V0process__atom(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k160(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k160, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.741 0 0) (basic-block 2 2 (##.expr.42.1278 ##.%p.1279) ((##vcore.cdr (bruijn ##.expr.320 10 1)) (##vcore.pair? (bruijn ##.expr.42.1278 0 0))) (if (bruijn ##.%p.1279 0 1) (basic-block 3 3 (##.k.1280 ##.expr.43.1281 ##.%p.1282) ((##vcore.car (bruijn ##.expr.42.1278 1 0)) (##vcore.cdr (bruijn ##.expr.42.1278 1 0)) (##vcore.pair? (bruijn ##.expr.43.1281 0 1))) (if (bruijn ##.%p.1282 0 2) (basic-block 3 3 (##.y.1283 ##.expr.44.1284 ##.%p.1285) ((##vcore.car (bruijn ##.expr.43.1281 1 1)) (##vcore.cdr (bruijn ##.expr.43.1281 1 1)) (##vcore.pair? (bruijn ##.expr.44.1284 0 1))) (if (bruijn ##.%p.1285 0 2) (basic-block 3 3 (##.x.1286 ##.%x.1287 ##.%p.1288) ((##vcore.car (bruijn ##.expr.44.1284 1 1)) (##vcore.cdr (bruijn ##.expr.44.1284 1 1)) (##vcore.null? (bruijn ##.%x.1287 0 1))) (if (bruijn ##.%p.1288 0 2) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k161) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0lambda36) (bruijn ##.kk.22.321 12 1)) ((bruijn ##.%k.740 6 0) #f))) ((bruijn ##.%k.740 5 0) #f))) ((bruijn ##.%k.740 4 0) #f))) ((bruijn ##.%k.740 3 0) #f))) ((bruijn ##.%k.740 2 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 10-1, 1));
    self->vars[1] = _VBasic_VPairP2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[0]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[0]);
    self->vars[2] = _VBasic_VPairP2(runtime, NULL,
      self->vars[1]);
if(VDecodeBool(
self->vars[2])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[1]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[1]);
    self->vars[2] = _VBasic_VPairP2(runtime, NULL,
      self->vars[1]);
if(VDecodeBool(
self->vars[2])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[1]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[1]);
    self->vars[2] = _VBasic_VNullP2(runtime, NULL,
      self->vars[1]);
if(VDecodeBool(
self->vars[2])) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k161, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0lambda36, self)))),
      VGetArg(statics, 12-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k159(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k159, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1267 1 0) (basic-block 1 1 (##.%x.1277) ((##vcore.car (bruijn ##.expr.320 8 1))) ((bruijn ##.equal?.129 10 9) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k160) 'define (bruijn ##.%x.1277 0 0))) ((bruijn ##.%k.740 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 8-1, 1));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 9)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k160, self)))),
      _V0define,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k166(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k166, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.726 0 0) (bruijn ##.%k.724 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0lambda38(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0lambda38, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler bytecode process-combination) #t (bruijn ##.process-combination.173 13 11) (bruijn ##.%k.727 0 0) (bruijn ##.expr.320 12 1))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0bytecode;
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      VGetArg(statics, 12-1, 1);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__combination, _V60_V0vanity_V0compiler_V0bytecode)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0bytecode_V0process__combination(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0lambda37(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0lambda37, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.%p.1271) ((##vcore.null? (bruijn ##.tail-expr.381 1 0))) (if (bruijn ##.%p.1271 0 0) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k166) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0lambda38) (bruijn ##.kk.22.321 10 1)) ((bruijn ##.%k.724 3 0) #f)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VNullP2(runtime, NULL,
      statics->vars[0]);
if(VDecodeBool(
self->vars[0])) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k166, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0lambda38, self)))),
      VGetArg(statics, 10-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V10_Dloop_D376_V0k168(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V10_Dloop_D376_V0k168, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.48.375 5 1) (bruijn ##.%k.736 1 0) (bruijn ##.expr.50.377 3 1) (bruijn ##.%x.737 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 1)), 3,
      statics->vars[0],
      statics->up->up->vars[1],
      _var0);
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V10_Dloop_D376_V0k167(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V10_Dloop_D376_V0k167, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1273 1 1) ((bruijn ##.reverse.123 16 3) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V10_Dloop_D376_V0k168) (bruijn ##.xs.47.378 2 2)) ((bruijn ##.%k.736 0 0) #f))
if(VDecodeBool(
statics->vars[1])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 3)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__application_V10_Dloop_D376_V0k168, self)))),
      statics->up->vars[2]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V10_Dloop_D376_V0k171(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V10_Dloop_D376_V0k171, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.48.375 7 1) (bruijn ##.%k.731 2 0) (bruijn ##.expr.50.377 5 1) (bruijn ##.%x.732 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 1)), 3,
      statics->up->vars[0],
      VGetArg(statics, 5-1, 1),
      _var0);
}
static void _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V10_Dloop_D376_V0k170(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.reverse.123 18 3) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V10_Dloop_D376_V0k171) (bruijn ##.xs.47.378 4 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 18-1, 3)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__application_V10_Dloop_D376_V0k171, self)))),
      statics->up->up->up->vars[2]);
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V10_Dloop_D376_V0lambda41(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V10_Dloop_D376_V0lambda41, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 3 3 (##.xs.1274 ##.%x.1275 ##.%x.1276) ((##vcore.car (bruijn ##.expr.50.377 4 1)) (##vcore.cdr (bruijn ##.expr.50.377 4 1)) (##vcore.cons (bruijn ##.xs.1274 0 0) (bruijn ##.xs.47.378 4 2))) ((bruijn ##.kk.49.379 1 1) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V10_Dloop_D376_V0k170) (bruijn ##.%x.1275 0 1) (bruijn ##.%x.1276 0 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->up->up->vars[1]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->up->up->up->vars[1]);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      self->vars[0],
      statics->up->up->up->vars[2]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[1]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__application_V10_Dloop_D376_V0k170, self)))),
      self->vars[1],
      self->vars[2]);
    }
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V10_Dloop_D376_V0lambda40(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V10_Dloop_D376_V0lambda40, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.%k.730 0 0) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V10_Dloop_D376_V0lambda41))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__application_V10_Dloop_D376_V0lambda41, self)))));
}
static void _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V10_Dloop_D376_V0k169(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##vcore.call-with-values (bruijn ##.%k.729 1 0) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V10_Dloop_D376_V0lambda40) (bruijn ##.loop.376 2 0))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__application_V10_Dloop_D376_V0lambda40, self)))),
      statics->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V10_Dloop_D376(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V10_Dloop_D376, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 2 2 (##.%x.1272 ##.%p.1273) ((##vcore.pair? (bruijn ##.expr.50.377 1 1)) (##vcore.not (bruijn ##.%x.1272 0 0))) ((close _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V10_Dloop_D376_V0k167) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V10_Dloop_D376_V0k169)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->vars[1]);
    self->vars[1] = _VBasic_VNot2(runtime, NULL,
      self->vars[0]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__application_V10_Dloop_D376_V0k167, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__application_V10_Dloop_D376_V0k169, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0lambda39(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0lambda39, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (letrec 1 ((close "_V50_V0vanity_V0compiler_V0bytecode_V0process__application_V10_Dloop_D376")) (##qualified-call (vanity compiler bytecode process-application ##.loop.376) #f (bruijn ##.loop.376 0 0) (bruijn ##.%k.728 1 0) (bruijn ##.expr.46.1270 2 1) '()))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__application_V10_Dloop_D376, self))));
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      statics->up->vars[1];
    VWORD _arg2 = 
      VNULL;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V10_Dloop_D376(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k165(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k165, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1268 1 0) (basic-block 2 2 (##.f.1269 ##.expr.46.1270) ((##vcore.car (bruijn ##.expr.320 9 1)) (##vcore.cdr (bruijn ##.expr.320 9 1))) (##vcore.call/cc (close _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0lambda37) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0lambda39))) ((bruijn ##.%k.724 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 9-1, 1));
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 9-1, 1));
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0lambda37, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0lambda39, self)))));
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k172(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.error.128 9 8) (bruijn ##.%k.722 6 0) (##string ##.string.1524))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 8)), 2,
      VGetArg(statics, 6-1, 0),
      VEncodePointer(&_V10_Dstring_D1524.sym, VPOINTER_OTHER));
}
static void _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k164(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.1268) ((##vcore.pair? (bruijn ##.expr.320 7 1))) ((close _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k165) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k172)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      VGetArg(statics, 7-1, 1));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k165, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k172, self)))));
    }
}
static void _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k158(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.1267) ((##vcore.pair? (bruijn ##.expr.320 6 1))) ((close _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k159) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k164)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      VGetArg(statics, 6-1, 1));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k159, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k164, self)))));
    }
}
static void _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k144(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.1266) ((##vcore.pair? (bruijn ##.expr.320 5 1))) ((close _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k145) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k158)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      VGetArg(statics, 5-1, 1));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k145, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k158, self)))));
    }
}
static void _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k137(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.1265) ((##vcore.pair? (bruijn ##.expr.320 4 1))) ((close _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k138) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k144)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->up->up->up->vars[1]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k138, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k144, self)))));
    }
}
static void _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k131(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.1264) ((##vcore.pair? (bruijn ##.expr.320 3 1))) ((close _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k132) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k137)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->up->up->vars[1]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k132, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k137, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0lambda28(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0lambda28, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.%p.1263) ((##vcore.pair? (bruijn ##.expr.320 2 1))) ((close _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k124) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k131)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->up->vars[1]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k124, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0k131, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__application(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__application, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (##vcore.call/cc (bruijn ##.%k.721 0 0) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0lambda28))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__application_V0lambda28, self)))));
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__combination_V0k174(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__combination_V0k174, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 3 3 (##.%x.1410 ##.%x.1411 ##.%x.1412) ((##vcore.cons (bruijn ##.len.384 2 0) '()) (##vcore.cons 'call (bruijn ##.%x.1410 0 0)) (##vcore.cons (bruijn ##.%x.1411 0 1) '())) ((bruijn ##.append.121 5 1) (bruijn ##.%k.876 3 0) (bruijn ##.%x.877 1 0) (bruijn ##.%x.1412 0 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[0],
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      _V0call,
      self->vars[0]);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      self->vars[1],
      VNULL);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 1)), 3,
      statics->up->up->vars[0],
      statics->vars[0],
      self->vars[2]);
    }
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__combination_V0k173(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__combination_V0k173, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.map.120 3 0) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__combination_V0k174) (bruijn ##.process-atom.174 2 12) (bruijn ##.expr.383 1 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__combination_V0k174, self)))),
      statics->up->vars[12],
      statics->vars[1]);
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__combination(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__combination, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.length.141 2 21) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__combination_V0k173) (bruijn ##.expr.383 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[21]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__combination_V0k173, self)))),
      _var1);
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k177(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k177, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.977 0 0) (bruijn ##.%k.973 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 5-1, 0));
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0lambda43(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0lambda43, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 2 2 (##.%x.1503 ##.%r.1504) ((##vcore.cons (bruijn ##.x.1500 2 0) '()) (##vcore.cons 'push (bruijn ##.%x.1503 0 0))) ((bruijn ##.%k.978 1 0) (bruijn ##.%r.1504 0 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[0],
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      _V0push,
      self->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      self->vars[1]);
    }
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k176(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k176, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.974 0 0) (basic-block 2 2 (##.expr.4.1498 ##.%p.1499) ((##vcore.cdr (bruijn ##.expr.385 6 1)) (##vcore.pair? (bruijn ##.expr.4.1498 0 0))) (if (bruijn ##.%p.1499 0 1) (basic-block 3 3 (##.x.1500 ##.%x.1501 ##.%p.1502) ((##vcore.car (bruijn ##.expr.4.1498 1 0)) (##vcore.cdr (bruijn ##.expr.4.1498 1 0)) (##vcore.null? (bruijn ##.%x.1501 0 1))) (if (bruijn ##.%p.1502 0 2) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k177) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0lambda43) (bruijn ##.kk.1.386 6 1)) ((bruijn ##.%k.973 4 0) #f))) ((bruijn ##.%k.973 3 0) #f))) ((bruijn ##.%k.973 2 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 6-1, 1));
    self->vars[1] = _VBasic_VPairP2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[0]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[0]);
    self->vars[2] = _VBasic_VNullP2(runtime, NULL,
      self->vars[1]);
if(VDecodeBool(
self->vars[2])) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k177, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0lambda43, self)))),
      VGetArg(statics, 6-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k175(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k175, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1413 1 0) (basic-block 1 1 (##.%x.1497) ((##vcore.car (bruijn ##.expr.385 4 1))) ((bruijn ##.equal?.129 6 9) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k176) 'quote (bruijn ##.%x.1497 0 0))) ((bruijn ##.%k.973 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->up->up->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 9)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k176, self)))),
      _V0quote,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k181(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k181, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.967 0 0) (bruijn ##.%k.963 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 5-1, 0));
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0lambda44(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0lambda44, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 2 2 (##.%x.1495 ##.%r.1496) ((##vcore.cons (bruijn ##.fun.1492 2 0) '()) (##vcore.cons 'close (bruijn ##.%x.1495 0 0))) ((bruijn ##.%k.968 1 0) (bruijn ##.%r.1496 0 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[0],
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      _V0close,
      self->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      self->vars[1]);
    }
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k180(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k180, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.964 0 0) (basic-block 2 2 (##.expr.6.1490 ##.%p.1491) ((##vcore.cdr (bruijn ##.expr.385 7 1)) (##vcore.pair? (bruijn ##.expr.6.1490 0 0))) (if (bruijn ##.%p.1491 0 1) (basic-block 3 3 (##.fun.1492 ##.%x.1493 ##.%p.1494) ((##vcore.car (bruijn ##.expr.6.1490 1 0)) (##vcore.cdr (bruijn ##.expr.6.1490 1 0)) (##vcore.null? (bruijn ##.%x.1493 0 1))) (if (bruijn ##.%p.1494 0 2) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k181) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0lambda44) (bruijn ##.kk.1.386 7 1)) ((bruijn ##.%k.963 4 0) #f))) ((bruijn ##.%k.963 3 0) #f))) ((bruijn ##.%k.963 2 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 7-1, 1));
    self->vars[1] = _VBasic_VPairP2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[0]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[0]);
    self->vars[2] = _VBasic_VNullP2(runtime, NULL,
      self->vars[1]);
if(VDecodeBool(
self->vars[2])) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k181, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0lambda44, self)))),
      VGetArg(statics, 7-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k179(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k179, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1414 1 0) (basic-block 1 1 (##.%x.1489) ((##vcore.car (bruijn ##.expr.385 5 1))) ((bruijn ##.equal?.129 7 9) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k180) 'close (bruijn ##.%x.1489 0 0))) ((bruijn ##.%k.963 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 5-1, 1));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 9)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k180, self)))),
      _V0close,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k185(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k185, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.954 0 0) (bruijn ##.%k.949 6 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 6-1, 0));
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k187(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k187, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 3 3 (##.%x.1486 ##.%x.1487 ##.%r.1488) ((##vcore.cons (bruijn ##.%x.959 1 0) '()) (##vcore.cons (bruijn ##.%x.957 2 0) (bruijn ##.%x.1486 0 0)) (##vcore.cons 'close (bruijn ##.%x.1487 0 1))) ((bruijn ##.%k.955 3 0) (bruijn ##.%r.1488 0 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[0],
      self->vars[0]);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      _V0close,
      self->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      self->vars[2]);
    }
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k186(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k186, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.mangle-library.143 14 23) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k187) (bruijn ##.name.1483 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 23)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k187, self)))),
      statics->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0lambda45(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0lambda45, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.string->symbol (close _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k186) (bruijn ##.fun.1480 2 0))
    VCallFuncWithGC(runtime, (VFunc)VStringSymbol2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k186, self)))),
      statics->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k184(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k184, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.950 0 0) (basic-block 2 2 (##.expr.8.1478 ##.%p.1479) ((##vcore.cdr (bruijn ##.expr.385 8 1)) (##vcore.pair? (bruijn ##.expr.8.1478 0 0))) (if (bruijn ##.%p.1479 0 1) (basic-block 3 3 (##.fun.1480 ##.expr.9.1481 ##.%p.1482) ((##vcore.car (bruijn ##.expr.8.1478 1 0)) (##vcore.cdr (bruijn ##.expr.8.1478 1 0)) (##vcore.pair? (bruijn ##.expr.9.1481 0 1))) (if (bruijn ##.%p.1482 0 2) (basic-block 3 3 (##.name.1483 ##.%x.1484 ##.%p.1485) ((##vcore.car (bruijn ##.expr.9.1481 1 1)) (##vcore.cdr (bruijn ##.expr.9.1481 1 1)) (##vcore.null? (bruijn ##.%x.1484 0 1))) (if (bruijn ##.%p.1485 0 2) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k185) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0lambda45) (bruijn ##.kk.1.386 9 1)) ((bruijn ##.%k.949 5 0) #f))) ((bruijn ##.%k.949 4 0) #f))) ((bruijn ##.%k.949 3 0) #f))) ((bruijn ##.%k.949 2 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 8-1, 1));
    self->vars[1] = _VBasic_VPairP2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[0]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[0]);
    self->vars[2] = _VBasic_VPairP2(runtime, NULL,
      self->vars[1]);
if(VDecodeBool(
self->vars[2])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[1]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[1]);
    self->vars[2] = _VBasic_VNullP2(runtime, NULL,
      self->vars[1]);
if(VDecodeBool(
self->vars[2])) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k185, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0lambda45, self)))),
      VGetArg(statics, 9-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k183(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k183, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1415 1 0) (basic-block 1 1 (##.%x.1477) ((##vcore.car (bruijn ##.expr.385 6 1))) ((bruijn ##.equal?.129 8 9) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k184) 'close (bruijn ##.%x.1477 0 0))) ((bruijn ##.%k.949 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 6-1, 1));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 9)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k184, self)))),
      _V0close,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k191(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k191, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.942 0 0) (bruijn ##.%k.936 7 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 7-1, 0));
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0lambda46(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0lambda46, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 3 3 (##.%x.1474 ##.%x.1475 ##.%r.1476) ((##vcore.cons (bruijn ##.right.1471 2 0) '()) (##vcore.cons (bruijn ##.up.1468 3 0) (bruijn ##.%x.1474 0 0)) (##vcore.cons 'bruijn (bruijn ##.%x.1475 0 1))) ((bruijn ##.%k.943 1 0) (bruijn ##.%r.1476 0 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[0],
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      statics->up->up->vars[0],
      self->vars[0]);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      _V0bruijn,
      self->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      self->vars[2]);
    }
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k190(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k190, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.937 0 0) (basic-block 2 2 (##.expr.11.1463 ##.%p.1464) ((##vcore.cdr (bruijn ##.expr.385 9 1)) (##vcore.pair? (bruijn ##.expr.11.1463 0 0))) (if (bruijn ##.%p.1464 0 1) (basic-block 3 3 (##.name.1465 ##.expr.12.1466 ##.%p.1467) ((##vcore.car (bruijn ##.expr.11.1463 1 0)) (##vcore.cdr (bruijn ##.expr.11.1463 1 0)) (##vcore.pair? (bruijn ##.expr.12.1466 0 1))) (if (bruijn ##.%p.1467 0 2) (basic-block 3 3 (##.up.1468 ##.expr.13.1469 ##.%p.1470) ((##vcore.car (bruijn ##.expr.12.1466 1 1)) (##vcore.cdr (bruijn ##.expr.12.1466 1 1)) (##vcore.pair? (bruijn ##.expr.13.1469 0 1))) (if (bruijn ##.%p.1470 0 2) (basic-block 3 3 (##.right.1471 ##.%x.1472 ##.%p.1473) ((##vcore.car (bruijn ##.expr.13.1469 1 1)) (##vcore.cdr (bruijn ##.expr.13.1469 1 1)) (##vcore.null? (bruijn ##.%x.1472 0 1))) (if (bruijn ##.%p.1473 0 2) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k191) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0lambda46) (bruijn ##.kk.1.386 11 1)) ((bruijn ##.%k.936 6 0) #f))) ((bruijn ##.%k.936 5 0) #f))) ((bruijn ##.%k.936 4 0) #f))) ((bruijn ##.%k.936 3 0) #f))) ((bruijn ##.%k.936 2 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 9-1, 1));
    self->vars[1] = _VBasic_VPairP2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[0]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[0]);
    self->vars[2] = _VBasic_VPairP2(runtime, NULL,
      self->vars[1]);
if(VDecodeBool(
self->vars[2])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[1]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[1]);
    self->vars[2] = _VBasic_VPairP2(runtime, NULL,
      self->vars[1]);
if(VDecodeBool(
self->vars[2])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[1]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[1]);
    self->vars[2] = _VBasic_VNullP2(runtime, NULL,
      self->vars[1]);
if(VDecodeBool(
self->vars[2])) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k191, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0lambda46, self)))),
      VGetArg(statics, 11-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k189(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k189, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1416 1 0) (basic-block 1 1 (##.%x.1462) ((##vcore.car (bruijn ##.expr.385 7 1))) ((bruijn ##.equal?.129 9 9) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k190) 'bruijn (bruijn ##.%x.1462 0 0))) ((bruijn ##.%k.936 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 7-1, 1));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 9)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k190, self)))),
      _V0bruijn,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k195(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k195, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.930 0 0) (bruijn ##.%k.926 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 5-1, 0));
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0lambda47(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0lambda47, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 2 2 (##.%x.1460 ##.%r.1461) ((##vcore.cons (bruijn ##.x.1457 2 0) '()) (##vcore.cons 'intrinsic (bruijn ##.%x.1460 0 0))) ((bruijn ##.%k.931 1 0) (bruijn ##.%r.1461 0 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[0],
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      _V0intrinsic,
      self->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      self->vars[1]);
    }
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k194(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k194, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.927 0 0) (basic-block 2 2 (##.expr.15.1455 ##.%p.1456) ((##vcore.cdr (bruijn ##.expr.385 10 1)) (##vcore.pair? (bruijn ##.expr.15.1455 0 0))) (if (bruijn ##.%p.1456 0 1) (basic-block 3 3 (##.x.1457 ##.%x.1458 ##.%p.1459) ((##vcore.car (bruijn ##.expr.15.1455 1 0)) (##vcore.cdr (bruijn ##.expr.15.1455 1 0)) (##vcore.null? (bruijn ##.%x.1458 0 1))) (if (bruijn ##.%p.1459 0 2) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k195) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0lambda47) (bruijn ##.kk.1.386 10 1)) ((bruijn ##.%k.926 4 0) #f))) ((bruijn ##.%k.926 3 0) #f))) ((bruijn ##.%k.926 2 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 10-1, 1));
    self->vars[1] = _VBasic_VPairP2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[0]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[0]);
    self->vars[2] = _VBasic_VNullP2(runtime, NULL,
      self->vars[1]);
if(VDecodeBool(
self->vars[2])) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k195, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0lambda47, self)))),
      VGetArg(statics, 10-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k193(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k193, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1417 1 0) (basic-block 1 1 (##.%x.1454) ((##vcore.car (bruijn ##.expr.385 8 1))) ((bruijn ##.equal?.129 10 9) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k194) '##intrinsic (bruijn ##.%x.1454 0 0))) ((bruijn ##.%k.926 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 8-1, 1));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 9)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k194, self)))),
      _V10intrinsic,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k199(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k199, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.919 0 0) (bruijn ##.%k.915 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 5-1, 0));
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k200(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k200, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 2 2 (##.%x.1452 ##.%r.1453) ((##vcore.cons (bruijn ##.%x.922 1 0) '()) (##vcore.cons 'foreign-function (bruijn ##.%x.1452 0 0))) ((bruijn ##.%k.920 2 0) (bruijn ##.%r.1453 0 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      _V0foreign__function,
      self->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      self->vars[1]);
    }
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0lambda48(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0lambda48, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.string->symbol (close _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k200) (bruijn ##.x.1449 1 0))
    VCallFuncWithGC(runtime, (VFunc)VStringSymbol2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k200, self)))),
      statics->vars[0]);
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k198(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k198, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.916 0 0) (basic-block 2 2 (##.expr.17.1447 ##.%p.1448) ((##vcore.cdr (bruijn ##.expr.385 11 1)) (##vcore.pair? (bruijn ##.expr.17.1447 0 0))) (if (bruijn ##.%p.1448 0 1) (basic-block 3 3 (##.x.1449 ##.%x.1450 ##.%p.1451) ((##vcore.car (bruijn ##.expr.17.1447 1 0)) (##vcore.cdr (bruijn ##.expr.17.1447 1 0)) (##vcore.null? (bruijn ##.%x.1450 0 1))) (if (bruijn ##.%p.1451 0 2) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k199) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0lambda48) (bruijn ##.kk.1.386 11 1)) ((bruijn ##.%k.915 4 0) #f))) ((bruijn ##.%k.915 3 0) #f))) ((bruijn ##.%k.915 2 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 11-1, 1));
    self->vars[1] = _VBasic_VPairP2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[0]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[0]);
    self->vars[2] = _VBasic_VNullP2(runtime, NULL,
      self->vars[1]);
if(VDecodeBool(
self->vars[2])) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k199, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0lambda48, self)))),
      VGetArg(statics, 11-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k197(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k197, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1418 1 0) (basic-block 1 1 (##.%x.1446) ((##vcore.car (bruijn ##.expr.385 9 1))) ((bruijn ##.equal?.129 11 9) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k198) '##foreign.function (bruijn ##.%x.1446 0 0))) ((bruijn ##.%k.915 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 9-1, 1));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 9)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k198, self)))),
      _V10foreign_Dfunction,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k204(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k204, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.908 0 0) (bruijn ##.%k.904 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 5-1, 0));
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k205(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k205, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 2 2 (##.%x.1444 ##.%r.1445) ((##vcore.cons (bruijn ##.%x.911 1 0) '()) (##vcore.cons 'intrinsic (bruijn ##.%x.1444 0 0))) ((bruijn ##.%k.909 2 0) (bruijn ##.%r.1445 0 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      _V0intrinsic,
      self->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      self->vars[1]);
    }
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0lambda49(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0lambda49, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.string->symbol (close _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k205) (bruijn ##.x.1441 1 0))
    VCallFuncWithGC(runtime, (VFunc)VStringSymbol2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k205, self)))),
      statics->vars[0]);
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k203(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k203, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.905 0 0) (basic-block 2 2 (##.expr.19.1439 ##.%p.1440) ((##vcore.cdr (bruijn ##.expr.385 12 1)) (##vcore.pair? (bruijn ##.expr.19.1439 0 0))) (if (bruijn ##.%p.1440 0 1) (basic-block 3 3 (##.x.1441 ##.%x.1442 ##.%p.1443) ((##vcore.car (bruijn ##.expr.19.1439 1 0)) (##vcore.cdr (bruijn ##.expr.19.1439 1 0)) (##vcore.null? (bruijn ##.%x.1442 0 1))) (if (bruijn ##.%p.1443 0 2) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k204) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0lambda49) (bruijn ##.kk.1.386 12 1)) ((bruijn ##.%k.904 4 0) #f))) ((bruijn ##.%k.904 3 0) #f))) ((bruijn ##.%k.904 2 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 12-1, 1));
    self->vars[1] = _VBasic_VPairP2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[0]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[0]);
    self->vars[2] = _VBasic_VNullP2(runtime, NULL,
      self->vars[1]);
if(VDecodeBool(
self->vars[2])) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k204, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0lambda49, self)))),
      VGetArg(statics, 12-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k202(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k202, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1419 1 0) (basic-block 1 1 (##.%x.1438) ((##vcore.car (bruijn ##.expr.385 10 1))) ((bruijn ##.equal?.129 12 9) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k203) '##intrinsic (bruijn ##.%x.1438 0 0))) ((bruijn ##.%k.904 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 10-1, 1));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 9)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k203, self)))),
      _V10intrinsic,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k209(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k209, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.897 0 0) (bruijn ##.%k.893 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 5-1, 0));
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k210(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k210, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 2 2 (##.%x.1436 ##.%r.1437) ((##vcore.cons (bruijn ##.%x.900 1 0) '()) (##vcore.cons 'intrinsic (bruijn ##.%x.1436 0 0))) ((bruijn ##.%k.898 2 0) (bruijn ##.%r.1437 0 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      _V0intrinsic,
      self->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      self->vars[1]);
    }
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0lambda50(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0lambda50, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.string->symbol (close _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k210) (bruijn ##.x.1433 1 0))
    VCallFuncWithGC(runtime, (VFunc)VStringSymbol2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k210, self)))),
      statics->vars[0]);
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k208(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k208, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.894 0 0) (basic-block 2 2 (##.expr.21.1431 ##.%p.1432) ((##vcore.cdr (bruijn ##.expr.385 13 1)) (##vcore.pair? (bruijn ##.expr.21.1431 0 0))) (if (bruijn ##.%p.1432 0 1) (basic-block 3 3 (##.x.1433 ##.%x.1434 ##.%p.1435) ((##vcore.car (bruijn ##.expr.21.1431 1 0)) (##vcore.cdr (bruijn ##.expr.21.1431 1 0)) (##vcore.null? (bruijn ##.%x.1434 0 1))) (if (bruijn ##.%p.1435 0 2) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k209) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0lambda50) (bruijn ##.kk.1.386 13 1)) ((bruijn ##.%k.893 4 0) #f))) ((bruijn ##.%k.893 3 0) #f))) ((bruijn ##.%k.893 2 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 13-1, 1));
    self->vars[1] = _VBasic_VPairP2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[0]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[0]);
    self->vars[2] = _VBasic_VNullP2(runtime, NULL,
      self->vars[1]);
if(VDecodeBool(
self->vars[2])) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k209, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0lambda50, self)))),
      VGetArg(statics, 13-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k207(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k207, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.1420 1 0) (basic-block 1 1 (##.%x.1430) ((##vcore.car (bruijn ##.expr.385 11 1))) ((bruijn ##.equal?.129 13 9) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k208) '##basic-intrinsic (bruijn ##.%x.1430 0 0))) ((bruijn ##.%k.893 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 11-1, 1));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 9)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k208, self)))),
      _V10basic__intrinsic,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k213(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.error.128 12 8) (bruijn ##.%k.882 9 0) (##string ##.string.1524))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 8)), 2,
      VGetArg(statics, 9-1, 0),
      VEncodePointer(&_V10_Dstring_D1524.sym, VPOINTER_OTHER));
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k212(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k212, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.%x.883 0 0) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k213))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k213, self)))));
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k214(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k214, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.888 0 0) (basic-block 2 2 (##.%x.1426 ##.%r.1427) ((##vcore.cons (bruijn ##.expr.385 14 1) '()) (##vcore.cons 'intrinsic (bruijn ##.%x.1426 0 0))) ((bruijn ##.%k.884 4 0) (bruijn ##.%r.1427 0 1))) (basic-block 2 2 (##.%x.1428 ##.%r.1429) ((##vcore.cons (bruijn ##.expr.385 14 1) '()) (##vcore.cons 'lookup (bruijn ##.%x.1428 0 0))) ((bruijn ##.%k.884 4 0) (bruijn ##.%r.1429 0 1))))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 14-1, 1),
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      _V0intrinsic,
      self->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      self->vars[1]);
    }
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 14-1, 1),
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      _V0lookup,
      self->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      self->vars[1]);
    }
}
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0lambda51(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0lambda51, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%p.1421) ((##vcore.pair? (bruijn ##.expr.385 11 1))) (if (bruijn ##.%p.1421 0 0) ((bruijn ##.compiler-error.122 13 2) (bruijn ##.%k.884 1 0) (##string ##.string.1534) (bruijn ##.expr.385 11 1)) (basic-block 2 2 (##.%x.1422 ##.%p.1423) ((##vcore.symbol? (bruijn ##.expr.385 12 1)) (##vcore.not (bruijn ##.%x.1422 0 0))) (if (bruijn ##.%p.1423 0 1) (basic-block 2 2 (##.%x.1424 ##.%r.1425) ((##vcore.cons (bruijn ##.expr.385 13 1) '()) (##vcore.cons 'push (bruijn ##.%x.1424 0 0))) ((bruijn ##.%k.884 3 0) (bruijn ##.%r.1425 0 1))) ((bruijn ##.lookup-intrinsic-name.144 14 24) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k214) (bruijn ##.expr.385 12 1))))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      VGetArg(statics, 11-1, 1));
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 2)), 3,
      statics->vars[0],
      VEncodePointer(&_V10_Dstring_D1534.sym, VPOINTER_OTHER),
      VGetArg(statics, 11-1, 1));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VSymbolP2(runtime, NULL,
      VGetArg(statics, 12-1, 1));
    self->vars[1] = _VBasic_VNot2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 13-1, 1),
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      _V0push,
      self->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      self->vars[1]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 24)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k214, self)))),
      VGetArg(statics, 12-1, 1));
}
    }
}
    }
}
static void _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k211(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k212) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0lambda51) (bruijn ##.kk.1.386 8 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k212, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0lambda51, self)))),
      VGetArg(statics, 8-1, 1));
}
static void _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k206(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.1420) ((##vcore.pair? (bruijn ##.expr.385 9 1))) ((close _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k207) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k211)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      VGetArg(statics, 9-1, 1));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k207, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k211, self)))));
    }
}
static void _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k201(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.1419) ((##vcore.pair? (bruijn ##.expr.385 8 1))) ((close _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k202) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k206)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      VGetArg(statics, 8-1, 1));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k202, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k206, self)))));
    }
}
static void _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k196(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.1418) ((##vcore.pair? (bruijn ##.expr.385 7 1))) ((close _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k197) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k201)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      VGetArg(statics, 7-1, 1));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k197, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k201, self)))));
    }
}
static void _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k192(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.1417) ((##vcore.pair? (bruijn ##.expr.385 6 1))) ((close _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k193) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k196)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      VGetArg(statics, 6-1, 1));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k193, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k196, self)))));
    }
}
static void _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k188(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.1416) ((##vcore.pair? (bruijn ##.expr.385 5 1))) ((close _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k189) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k192)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      VGetArg(statics, 5-1, 1));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k189, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k192, self)))));
    }
}
static void _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k182(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.1415) ((##vcore.pair? (bruijn ##.expr.385 4 1))) ((close _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k183) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k188)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->up->up->up->vars[1]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k183, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k188, self)))));
    }
}
static void _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k178(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.1414) ((##vcore.pair? (bruijn ##.expr.385 3 1))) ((close _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k179) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k182)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->up->up->vars[1]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k179, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k182, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0lambda42(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0lambda42, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.%p.1413) ((##vcore.pair? (bruijn ##.expr.385 2 1))) ((close _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k175) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k178)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->up->vars[1]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k175, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0k178, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0bytecode_V0process__atom(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0bytecode_V0process__atom, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (##vcore.call/cc (bruijn ##.%k.881 0 0) (close _V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0lambda42))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__atom_V0lambda42, self)))));
}
static void _V0vanity_V0compiler_V0bytecode_V20_V0lambda2(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4, VWORD _var5, VWORD _var6, VWORD _var7, VWORD _var8, VWORD _var9, VWORD _var10, VWORD _var11, VWORD _var12, VWORD _var13, VWORD _var14, VWORD _var15, VWORD _var16, VWORD _var17, VWORD _var18, VWORD _var19, VWORD _var20, VWORD _var21, VWORD _var22, VWORD _var23, VWORD _var24) {
 if(argc != 25) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_V0lambda2, got ~D~N"
  "-- expected 25~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[25]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 25, 25, statics);
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
  // (##letrec (vanity compiler bytecode) 13 ((close "_V50_V0vanity_V0compiler_V0bytecode_V0to__bytecode" (vanity compiler bytecode)) (close "_V50_V0vanity_V0compiler_V0bytecode_V0write__bytecode" (vanity compiler bytecode)) (close "_V50_V0vanity_V0compiler_V0bytecode_V0write__bytecode__line" (vanity compiler bytecode)) (close "_V50_V0vanity_V0compiler_V0bytecode_V0glue__bytecode" (vanity compiler bytecode)) (close "_V50_V0vanity_V0compiler_V0bytecode_V0process__toplevel" (vanity compiler bytecode)) (close "_V50_V0vanity_V0compiler_V0bytecode_V0process__declare" (vanity compiler bytecode)) (close "_V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function" (vanity compiler bytecode)) (close "_V50_V0vanity_V0compiler_V0bytecode_V0process__function" (vanity compiler bytecode)) (close "_V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case" (vanity compiler bytecode)) (close "_V50_V0vanity_V0compiler_V0bytecode_V0process__fun__single" (vanity compiler bytecode)) (close "_V50_V0vanity_V0compiler_V0bytecode_V0process__application" (vanity compiler bytecode)) (close "_V50_V0vanity_V0compiler_V0bytecode_V0process__combination" (vanity compiler bytecode)) (close "_V50_V0vanity_V0compiler_V0bytecode_V0process__atom" (vanity compiler bytecode))) (basic-block 4 4 (##.%x.1505 ##.%x.1506 ##.%x.1507 ##.%r.1508) ((##vcore.cons 'write-bytecode (bruijn ##.write-bytecode.163 1 1)) (##vcore.cons 'to-bytecode (bruijn ##.to-bytecode.162 1 0)) (##vcore.cons (bruijn ##.%x.1506 0 1) '()) (##vcore.cons (bruijn ##.%x.1505 0 0) (bruijn ##.%x.1507 0 2))) ((bruijn ##.%k.420 12 0) (bruijn ##.%r.1508 0 3))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[13]; } container;
    self = &container.self;
    _V60_V0vanity_V0compiler_V0bytecode = self;
    VInitEnv(self, 13, 13, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0to__bytecode, _V60_V0vanity_V0compiler_V0bytecode))));
    self->vars[1] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0write__bytecode, _V60_V0vanity_V0compiler_V0bytecode))));
    self->vars[2] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0write__bytecode__line, _V60_V0vanity_V0compiler_V0bytecode))));
    self->vars[3] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0glue__bytecode, _V60_V0vanity_V0compiler_V0bytecode))));
    self->vars[4] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__toplevel, _V60_V0vanity_V0compiler_V0bytecode))));
    self->vars[5] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__declare, _V60_V0vanity_V0compiler_V0bytecode))));
    self->vars[6] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__foreign__function, _V60_V0vanity_V0compiler_V0bytecode))));
    self->vars[7] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__function, _V60_V0vanity_V0compiler_V0bytecode))));
    self->vars[8] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__fun__case, _V60_V0vanity_V0compiler_V0bytecode))));
    self->vars[9] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__fun__single, _V60_V0vanity_V0compiler_V0bytecode))));
    self->vars[10] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__application, _V60_V0vanity_V0compiler_V0bytecode))));
    self->vars[11] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__combination, _V60_V0vanity_V0compiler_V0bytecode))));
    self->vars[12] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0bytecode_V0process__atom, _V60_V0vanity_V0compiler_V0bytecode))));
    VRegisterStaticEnv("_V0vanity_V0compiler_V0bytecode_V20", &_V60_V0vanity_V0compiler_V0bytecode);
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[4]; } container;
    self = &container.self;
    VInitEnv(self, 4, 4, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      _V0write__bytecode,
      statics->vars[1]);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      _V0to__bytecode,
      statics->vars[0]);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      self->vars[1],
      VNULL);
    self->vars[3] = _VBasic_VCons2(runtime, NULL,
      self->vars[0],
      self->vars[2]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 0)), 1,
      self->vars[3]);
    }
    }
}
static void _V0vanity_V0compiler_V0bytecode_V20_V0k9(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_V0k9, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((##intrinsic "VMultiImport") (close _V0vanity_V0compiler_V0bytecode_V20_V0lambda2) (##string ##.string.1535) (bruijn ##.%x.985 0 0) 'map 'append 'compiler-error 'reverse 'displayln 'writeln 'display 'memv 'error 'equal? 'get-foreign-decoder 'cddr 'get-foreign-encoder 'mangle-foreign-function 'cadr 'sprintf 'string-append 'fold 'caadr 'gensym 'iota 'length 'cdddr 'mangle-library 'lookup-intrinsic-name)
    VCallFuncWithGC(runtime, (VFunc)VMultiImport, 28,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0bytecode_V20_V0lambda2, self)))),
      VEncodePointer(&_V10_Dstring_D1535.sym, VPOINTER_OTHER),
      _var0,
      _V0map,
      _V0append,
      _V0compiler__error,
      _V0reverse,
      _V0displayln,
      _V0writeln,
      _V0display,
      _V0memv,
      _V0error,
      _V0equal_Q,
      _V0get__foreign__decoder,
      _V0cddr,
      _V0get__foreign__encoder,
      _V0mangle__foreign__function,
      _V0cadr,
      _V0sprintf,
      _V0string__append,
      _V0fold,
      _V0caadr,
      _V0gensym,
      _V0iota,
      _V0length,
      _V0cdddr,
      _V0mangle__library,
      _V0lookup__intrinsic__name);
}
static void _V0vanity_V0compiler_V0bytecode_V20_V0k8(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_V0k8, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.vector (close _V0vanity_V0compiler_V0bytecode_V20_V0k9) (bruijn ##.%x.986 7 0) (bruijn ##.%x.987 6 0) (bruijn ##.%x.988 5 0) (bruijn ##.%x.989 4 0) (bruijn ##.%x.990 3 0) (bruijn ##.%x.991 2 0) (bruijn ##.%x.992 1 0) (bruijn ##.%x.993 0 0))
    VCallFuncWithGC(runtime, (VFunc)VCreateVector, 9,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0bytecode_V20_V0k9, self)))),
      VGetArg(statics, 7-1, 0),
      VGetArg(statics, 6-1, 0),
      VGetArg(statics, 5-1, 0),
      statics->up->up->up->vars[0],
      statics->up->up->vars[0],
      statics->up->vars[0],
      statics->vars[0],
      _var0);
}
static void _V0vanity_V0compiler_V0bytecode_V20_V0k7(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_V0k7, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0bytecode_V20_V0k8) (##string ##.string.1536))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0bytecode_V20_V0k8, self)))),
      VEncodePointer(&_V10_Dstring_D1536.sym, VPOINTER_OTHER));
}
static void _V0vanity_V0compiler_V0bytecode_V20_V0k6(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_V0k6, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0bytecode_V20_V0k7) (##string ##.string.1537))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0bytecode_V20_V0k7, self)))),
      VEncodePointer(&_V10_Dstring_D1537.sym, VPOINTER_OTHER));
}
static void _V0vanity_V0compiler_V0bytecode_V20_V0k5(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_V0k5, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0bytecode_V20_V0k6) (##string ##.string.1538))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0bytecode_V20_V0k6, self)))),
      VEncodePointer(&_V10_Dstring_D1538.sym, VPOINTER_OTHER));
}
static void _V0vanity_V0compiler_V0bytecode_V20_V0k4(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_V0k4, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0bytecode_V20_V0k5) (##string ##.string.1539))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0bytecode_V20_V0k5, self)))),
      VEncodePointer(&_V10_Dstring_D1539.sym, VPOINTER_OTHER));
}
static void _V0vanity_V0compiler_V0bytecode_V20_V0k3(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_V0k3, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0bytecode_V20_V0k4) (##string ##.string.1540))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0bytecode_V20_V0k4, self)))),
      VEncodePointer(&_V10_Dstring_D1540.sym, VPOINTER_OTHER));
}
static void _V0vanity_V0compiler_V0bytecode_V20_V0k2(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_V0k2, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0bytecode_V20_V0k3) (##string ##.string.1541))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0bytecode_V20_V0k3, self)))),
      VEncodePointer(&_V10_Dstring_D1541.sym, VPOINTER_OTHER));
}
static void _V0vanity_V0compiler_V0bytecode_V20_V0k1(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_V0k1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0bytecode_V20_V0k2) (##string ##.string.1542))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0bytecode_V20_V0k2, self)))),
      VEncodePointer(&_V10_Dstring_D1542.sym, VPOINTER_OTHER));
}
static void _V0vanity_V0compiler_V0bytecode_V20_V0lambda1(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0bytecode_V20_V0lambda1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0bytecode_V20_V0k1) (##string ##.string.1543))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0bytecode_V20_V0k1, self)))),
      VEncodePointer(&_V10_Dstring_D1543.sym, VPOINTER_OTHER));
}
VFunc _V0vanity_V0compiler_V0bytecode_V20 = (VFunc)_V0vanity_V0compiler_V0bytecode_V20_V0lambda1;
static __attribute__((constructor)) void VDllMain1() {
  _V0lookup__intrinsic__name = VEncodePointer(VInternSymbol(451875892, &_VW_V0lookup__intrinsic__name.sym), VPOINTER_OTHER);
  _V0mangle__library = VEncodePointer(VInternSymbol(471189069, &_VW_V0mangle__library.sym), VPOINTER_OTHER);
  _V0cdddr = VEncodePointer(VInternSymbol(584415821, &_VW_V0cdddr.sym), VPOINTER_OTHER);
  _V0length = VEncodePointer(VInternSymbol(-1077292005, &_VW_V0length.sym), VPOINTER_OTHER);
  _V0iota = VEncodePointer(VInternSymbol(786799409, &_VW_V0iota.sym), VPOINTER_OTHER);
  _V0gensym = VEncodePointer(VInternSymbol(1130831505, &_VW_V0gensym.sym), VPOINTER_OTHER);
  _V0caadr = VEncodePointer(VInternSymbol(1112754322, &_VW_V0caadr.sym), VPOINTER_OTHER);
  _V0fold = VEncodePointer(VInternSymbol(2090893058, &_VW_V0fold.sym), VPOINTER_OTHER);
  _V0string__append = VEncodePointer(VInternSymbol(1893973929, &_VW_V0string__append.sym), VPOINTER_OTHER);
  _V0sprintf = VEncodePointer(VInternSymbol(1933004612, &_VW_V0sprintf.sym), VPOINTER_OTHER);
  _V0cadr = VEncodePointer(VInternSymbol(137264287, &_VW_V0cadr.sym), VPOINTER_OTHER);
  _V0mangle__foreign__function = VEncodePointer(VInternSymbol(-536693803, &_VW_V0mangle__foreign__function.sym), VPOINTER_OTHER);
  _V0get__foreign__encoder = VEncodePointer(VInternSymbol(968618603, &_VW_V0get__foreign__encoder.sym), VPOINTER_OTHER);
  _V0cddr = VEncodePointer(VInternSymbol(-569180081, &_VW_V0cddr.sym), VPOINTER_OTHER);
  _V0get__foreign__decoder = VEncodePointer(VInternSymbol(1753899344, &_VW_V0get__foreign__decoder.sym), VPOINTER_OTHER);
  _V0equal_Q = VEncodePointer(VInternSymbol(1746439164, &_VW_V0equal_Q.sym), VPOINTER_OTHER);
  _V0error = VEncodePointer(VInternSymbol(147890691, &_VW_V0error.sym), VPOINTER_OTHER);
  _V0memv = VEncodePointer(VInternSymbol(157128241, &_VW_V0memv.sym), VPOINTER_OTHER);
  _V0display = VEncodePointer(VInternSymbol(-911502848, &_VW_V0display.sym), VPOINTER_OTHER);
  _V0writeln = VEncodePointer(VInternSymbol(-1249249869, &_VW_V0writeln.sym), VPOINTER_OTHER);
  _V0displayln = VEncodePointer(VInternSymbol(-298314537, &_VW_V0displayln.sym), VPOINTER_OTHER);
  _V0reverse = VEncodePointer(VInternSymbol(418515197, &_VW_V0reverse.sym), VPOINTER_OTHER);
  _V0compiler__error = VEncodePointer(VInternSymbol(1345485686, &_VW_V0compiler__error.sym), VPOINTER_OTHER);
  _V0append = VEncodePointer(VInternSymbol(-700471979, &_VW_V0append.sym), VPOINTER_OTHER);
  _V0map = VEncodePointer(VInternSymbol(-1940887657, &_VW_V0map.sym), VPOINTER_OTHER);
  _V0to__bytecode = VEncodePointer(VInternSymbol(205421467, &_VW_V0to__bytecode.sym), VPOINTER_OTHER);
  _V0write__bytecode = VEncodePointer(VInternSymbol(1276840091, &_VW_V0write__bytecode.sym), VPOINTER_OTHER);
  _V0lookup = VEncodePointer(VInternSymbol(362294115, &_VW_V0lookup.sym), VPOINTER_OTHER);
  _V10basic__intrinsic = VEncodePointer(VInternSymbol(1331380390, &_VW_V10basic__intrinsic.sym), VPOINTER_OTHER);
  _V0foreign__function = VEncodePointer(VInternSymbol(1036213076, &_VW_V0foreign__function.sym), VPOINTER_OTHER);
  _V10intrinsic = VEncodePointer(VInternSymbol(-701633456, &_VW_V10intrinsic.sym), VPOINTER_OTHER);
  _V0close = VEncodePointer(VInternSymbol(-786291330, &_VW_V0close.sym), VPOINTER_OTHER);
  _V0quote = VEncodePointer(VInternSymbol(-278310088, &_VW_V0quote.sym), VPOINTER_OTHER);
  _V0define = VEncodePointer(VInternSymbol(-1044656496, &_VW_V0define.sym), VPOINTER_OTHER);
  _V10vcore_Ddefine = VEncodePointer(VInternSymbol(-65267310, &_VW_V10vcore_Ddefine.sym), VPOINTER_OTHER);
  _V0set_B = VEncodePointer(VInternSymbol(-530681865, &_VW_V0set_B.sym), VPOINTER_OTHER);
  _V0intrinsic = VEncodePointer(VInternSymbol(1953518893, &_VW_V0intrinsic.sym), VPOINTER_OTHER);
  _V10vcore_Dset__global_B = VEncodePointer(VInternSymbol(-121985904, &_VW_V10vcore_Dset__global_B.sym), VPOINTER_OTHER);
  _V0call = VEncodePointer(VInternSymbol(-822823338, &_VW_V0call.sym), VPOINTER_OTHER);
  _V0push = VEncodePointer(VInternSymbol(-1491894077, &_VW_V0push.sym), VPOINTER_OTHER);
  _V0push__set_B = VEncodePointer(VInternSymbol(1593164417, &_VW_V0push__set_B.sym), VPOINTER_OTHER);
  _V10letrec = VEncodePointer(VInternSymbol(-1037390401, &_VW_V10letrec.sym), VPOINTER_OTHER);
  _V0letrec = VEncodePointer(VInternSymbol(1712405540, &_VW_V0letrec.sym), VPOINTER_OTHER);
  _V0letrec__end = VEncodePointer(VInternSymbol(1680038956, &_VW_V0letrec__end.sym), VPOINTER_OTHER);
  _V0letrec__begin = VEncodePointer(VInternSymbol(1445174670, &_VW_V0letrec__begin.sym), VPOINTER_OTHER);
  _V0if = VEncodePointer(VInternSymbol(-1008835161, &_VW_V0if.sym), VPOINTER_OTHER);
  _V0bf = VEncodePointer(VInternSymbol(1139667182, &_VW_V0bf.sym), VPOINTER_OTHER);
  _V0case__lambda__error = VEncodePointer(VInternSymbol(-197562183, &_VW_V0case__lambda__error.sym), VPOINTER_OTHER);
  _V0_P = VEncodePointer(VInternSymbol(-1632835872, &_VW_V0_P.sym), VPOINTER_OTHER);
  _V10foreign_Dfunction = VEncodePointer(VInternSymbol(1321977372, &_VW_V10foreign_Dfunction.sym), VPOINTER_OTHER);
  _V0extern = VEncodePointer(VInternSymbol(-1347183264, &_VW_V0extern.sym), VPOINTER_OTHER);
  _V0foreign__pointer = VEncodePointer(VInternSymbol(-1783259513, &_VW_V0foreign__pointer.sym), VPOINTER_OTHER);
  _V0pointer = VEncodePointer(VInternSymbol(665170373, &_VW_V0pointer.sym), VPOINTER_OTHER);
  _V0const = VEncodePointer(VInternSymbol(1326696831, &_VW_V0const.sym), VPOINTER_OTHER);
  _V10vcore_Ddeclare = VEncodePointer(VInternSymbol(-1798172844, &_VW_V10vcore_Ddeclare.sym), VPOINTER_OTHER);
  _V10foreign_Ddeclare = VEncodePointer(VInternSymbol(1017231288, &_VW_V10foreign_Ddeclare.sym), VPOINTER_OTHER);
  _V0bruijn = VEncodePointer(VInternSymbol(-996132237, &_VW_V0bruijn.sym), VPOINTER_OTHER);
  _V0k = VEncodePointer(VInternSymbol(-989127837, &_VW_V0k.sym), VPOINTER_OTHER);
  _V0declare__foreign__variable = VEncodePointer(VInternSymbol(2009872289, &_VW_V0declare__foreign__variable.sym), VPOINTER_OTHER);
  _V0declare__foreign = VEncodePointer(VInternSymbol(-1354590835, &_VW_V0declare__foreign.sym), VPOINTER_OTHER);
  _V0declare = VEncodePointer(VInternSymbol(1810290051, &_VW_V0declare.sym), VPOINTER_OTHER);
  _V0case__lambda_P = VEncodePointer(VInternSymbol(-1941514912, &_VW_V0case__lambda_P.sym), VPOINTER_OTHER);
  _V0case__lambda = VEncodePointer(VInternSymbol(-1661638092, &_VW_V0case__lambda.sym), VPOINTER_OTHER);
  _V0lambda_P = VEncodePointer(VInternSymbol(1006106366, &_VW_V0lambda_P.sym), VPOINTER_OTHER);
  _V0lambda = VEncodePointer(VInternSymbol(1054233532, &_VW_V0lambda.sym), VPOINTER_OTHER);
  _V0toplevel = VEncodePointer(VInternSymbol(1376451653, &_VW_V0toplevel.sym), VPOINTER_OTHER);
  _V0label = VEncodePointer(VInternSymbol(619689535, &_VW_V0label.sym), VPOINTER_OTHER);
  _V10_Dpair_D1523.first = _V0toplevel;
  _V10_Dpair_D1523.rest = VNULL;
  _V10_Dpair_D1522.first = _V0label;
  _V10_Dpair_D1522.rest = VEncodePointer(&_V10_Dpair_D1521, VPOINTER_PAIR);
  _V10_Dpair_D1521.first = _V0toplevel;
  _V10_Dpair_D1521.rest = VEncodePointer(&_V10_Dpair_D1520, VPOINTER_PAIR);
  _V10_Dpair_D1520.first = _V0lambda;
  _V10_Dpair_D1520.rest = VEncodePointer(&_V10_Dpair_D1519, VPOINTER_PAIR);
  _V10_Dpair_D1519.first = _V0lambda_P;
  _V10_Dpair_D1519.rest = VEncodePointer(&_V10_Dpair_D1518, VPOINTER_PAIR);
  _V10_Dpair_D1518.first = _V0case__lambda;
  _V10_Dpair_D1518.rest = VEncodePointer(&_V10_Dpair_D1517, VPOINTER_PAIR);
  _V10_Dpair_D1517.first = _V0case__lambda_P;
  _V10_Dpair_D1517.rest = VEncodePointer(&_V10_Dpair_D1516, VPOINTER_PAIR);
  _V10_Dpair_D1516.first = _V0declare;
  _V10_Dpair_D1516.rest = VEncodePointer(&_V10_Dpair_D1515, VPOINTER_PAIR);
  _V10_Dpair_D1515.first = _V0declare__foreign;
  _V10_Dpair_D1515.rest = VEncodePointer(&_V10_Dpair_D1514, VPOINTER_PAIR);
  _V10_Dpair_D1514.first = _V0declare__foreign__variable;
  _V10_Dpair_D1514.rest = VNULL;
  _V40VMultiImport = VEncodePointer(VLookupConstant("_V40VMultiImport", &_VW_V40VMultiImport), VPOINTER_CLOSURE);
}
